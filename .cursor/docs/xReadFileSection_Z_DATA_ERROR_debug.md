# xReadFileSection infinite loop – Z_DATA_ERROR (-3) root cause

## What happens

1. **xReadFileSection** (recompiled) reads a WAD section: `GetWadInfo` → `sceLseek` → `sceRead` into an **AllocHiMem** buffer → **uncompress**(dest, destLen, **that buffer**, sourceLen).
2. The loop exits only when **uncompress** returns **0** and the written length matches. If **uncompress** keeps returning **-3** (Z_DATA_ERROR), the loop never exits.

## Where -3 comes from (traced in recomp)

From **funDefsZDataError.md** (inflate case 7): **inflate_blocks** is called and **if (iVar4 == -3)** we set state 0xd and propagate -3. So **inflate_blocks** is the function that returns -3.

Traced in the recomp:

1. **inflate_blocks** returns -3 at **0x2d9d60**: when **inflate_trees_bits** returns non-zero (s0 = v0 after the call; `beq s0, zero` skips the -3 path).
2. **inflate_trees_bits** returns whatever **huft_build** returns (v1 = v0 after `huft_build_0x2db430`; propagates v1 as return value).
3. **huft_build** returns -3 when:
   - At **0x2db5dc**: `s8 = s8 - v0` then `bgez s8` — if **s8 &lt; 0** we fall through to **0x2db5e4** and return -3 (oversubscribed / invalid code lengths).
   - Or at **0x2db5ac**: if **s7 &lt; 0** we goto the same -3 path.

So the chain is: **huft_build** returns -3 (because reg 8 or 7 goes negative) → **inflate_trees_bits** → **inflate_blocks** → **inflate** → **uncompress** → xReadFileSection loops.

The real failure is in the recompiled **huft_build** path (or the code lengths/counts fed into it): either the condition/arithmetic is wrong, or the dynamic-header/code-length data is wrong (e.g. bit buffer, endianness, or block-type path earlier in inflate_blocks).

### Cross-check with funDefsZDataError.md (inflate_blocks decomp, from line 2726)

The **inflate_blocks** decomp in the doc matches this trace:

- **Case 0**: Block type `uVar9 = (uVar13 & 7) >> 1`. Type 1 → fixed (inflate_trees_fixed). Type 2 → dynamic (state 3). Type 3 → "invalid block type" → **-3**.
- **Case 3 → case 4**: Read 14 bits (nlen, ndist). If "too many length or distance symbols" → **-3**. Then alloc and **inflate_trees_bits(..., param_1+4, param_1+5, param_2)** (decomp line ~2962). **If (iVar6 != 0)** save state and **return iVar6** (so -3 from inflate_trees_bits).
- **Case 5**: Decode code lengths into param_1[3]. "invalid bit length repeat" → **-3**. Then **inflate_trees_dynamic(...)**; if it returns non-zero, return that (another -3 source).
- **Case 8**: Direct **iVar6 = -3** (state 9 error).
- **Case 1** (stored): "invalid stored block lengths" → **-3**.

So the doc’s inflate_blocks section is the right place to compare MIPS vs recomp for the call to inflate_trees_bits, the return-value check, and any other -3 paths.

### huft_build (funDefsZDataError.md from line 5183)

The **huft_build** decomp and MIPS are in the doc from line 5183. The oversubscribed check: `iStack_b4 = 1 << min`, then loop subtract-and-double, then final subtract; if **iStack_b4 < 0** return -3. MIPS 0x2db5d4/0x2db5d8/0x2db5dc (load, subu, bgez) match the recomp. So huft_build logic is consistent; -3 on valid data likely comes from **wrong code-length counts** fed by inflate_blocks (case 4/5). Next: log at -3 path or verify code-length array from inflate_blocks.

## Likely causes (in order to check)

### 1. Wrong data in the read buffer (most likely)

- **sceRead** is implemented as **fioRead** (host `fread`). The bytes in the AllocHiMem buffer are exactly what **fioRead** wrote.
- If that doesn’t match what the game expects (e.g. wrong file, wrong offset, or WAD built differently on host), inflate will see “garbage” and eventually hit a bad block/code → Z_DATA_ERROR.
- **GetWadInfo** and **wad_fd** must refer to the same file/position that **sceLseek**/ **sceRead** use. Any mismatch (e.g. different fd mapping, or lseek not applied to the same file) would give wrong bytes.

**Check:** Log the first 16–32 bytes of the buffer passed to **uncompress** (the AllocHiMem buffer after **sceRead**), plus `sourceLen`. Compare with the same offset in the real WAD file (e.g. with a hex editor). If they differ, the bug is in file/offset/fd, not in inflate.

### 2. Stream format (raw deflate vs zlib wrapper)

- **uncompress** calls **inflateInit_** with a fixed third argument (56) and a version string. That implies a specific mode (e.g. raw deflate with a given window size).
- If the WAD actually stores **zlib-wrapped** data (first bytes `0x78 0x9c` or similar), but the recompiled init expects **raw deflate** (no header), the first bits will be misinterpreted → invalid block/code → Z_DATA_ERROR.
- If the WAD stores **raw deflate** and the code expects a zlib header, same kind of error.

**Check:** Inspect the first 2 bytes of the compressed buffer. Typical patterns:
- Raw deflate: often starts with low bits (e.g. `BFINAL` and block type in the first byte).
- Zlib: `0x78 0x9c` (default) or `0x78 0x01`, etc.  
If the format doesn’t match what **inflateInit2_** is set up for, that’s the cause.

### 3. Endianness / bit buffer in recompiled inflate

- PS2 is big-endian. Inflate reads bits and multi-byte values. If any of that is treated with wrong byte or bit order in the recompiled **inflate_codes** / **inflate_trees_***, you can get invalid codes or lengths → Z_DATA_ERROR.
- This would show up as “correct buffer content and length, but still -3”.

**Check:** Run the **same** compressed buffer with a known-good host zlib (e.g. `inflateInit2_(strm, -15)` for raw deflate, then `inflate`). If host zlib succeeds and recomp fails, the bug is likely in recompiled bit/byte handling (endianness or bit buffer).

### 4. Recompilation bug in inflate_codes / inflate_trees_*

- A wrong branch, wrong register, or wrong constant in **inflate_codes** or **inflate_trees_dynamic** / **inflate_trees_bits** could cause a valid block to be rejected and -3 returned.
- This is the case when: same buffer works with host zlib, format matches init, and you still get -3.

**Check:** Add a one-time log at each place that sets return value -3 in **inflate_blocks** / **inflate_codes** / **inflate_trees_*** (e.g. log PC and a few key registers). That tells you which exact “invalid data” path is taken, then you can compare that path to original zlib logic.

## Suggested next steps

1. **Log first bytes and length** of the buffer passed to **uncompress** (after **sceRead**), and the **dest** / **destLen** pointers. Confirm they match the WAD file on disk and that **wad_fd** / **sceLseek** / **sceRead** refer to the same file and offset.
2. **Inspect first 2 bytes** of that buffer to see if the stream is raw deflate or zlib, and confirm it matches what **inflateInit2_** (and the 56 argument) expect.
3. **Test the same buffer with host zlib** (raw deflate or zlib as appropriate). If host zlib succeeds, focus on recomp (endianness / bit buffer / logic). If host zlib also fails, focus on file/offset/data.
4. **Add a single “who returned -3” log** in the inflate path (e.g. in **inflate_blocks** when it’s about to return -3) so you know whether the error comes from **inflate_codes** or from **inflate_trees_***, then narrow down the exact instruction/condition.

Once you have (1)–(2) and optionally (3)–(4), you can pin the cause to either “wrong data”, “wrong format”, or “recomp bug in inflate” and fix the right layer.
