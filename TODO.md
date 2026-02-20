# TODO

## Recompiler: R5900 3-operand MULT/MULTU missing rd write

**Priority:** High — causes widespread memory corruption and infinite loops at runtime.

**Problem:**
The R5900 (PS2 EE) extends the standard MIPS `MULT`/`MULTU` to a 3-operand form:
`MULT rd, rs, rt` writes the low 32-bit result to `rd` in addition to `lo/hi`.
The code generator only writes to `lo`/`hi`, silently dropping the `rd` write.

**Affected instructions (all need the rd fix when rd != 0):**
- `SPECIAL_MULT` — `code_generator.cpp:966`
- `SPECIAL_MULTU` — `code_generator.cpp:968`
- `MMI_MULT1` — `code_generator.cpp:1418`
- `MMI_MULTU1` — `code_generator.cpp:1420`
- `MMI_MADD` — `code_generator.cpp:1426`
- `MMI_MADDU` — `code_generator.cpp:1428`
- `MMI_MSUB` — `code_generator.cpp:1430`
- `MMI_MSUBU` — `code_generator.cpp:1432`

**Scale:** 200+ runner `.cpp` files contain at least one affected MULT/MULTU pattern.

**Fix:**
In `ps2xRecomp/src/lib/code_generator.cpp`, add a `SET_GPR_S32(ctx, rd, ...)` (signed for MULT)
or `SET_GPR_U32(ctx, rd, ...)` (unsigned for MULTU) to each case when `inst.rd != 0`.
The `SET_GPR` macros already guard against writes to `$zero` (reg 0), so always emitting is safe.

Example fix for `SPECIAL_MULT`:
```cpp
case SPECIAL_MULT:
    if (inst.rd != 0)
        return fmt::format("{{ int64_t result = (int64_t)GPR_S32(ctx, {}) * (int64_t)GPR_S32(ctx, {}); "
                           "ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); "
                           "SET_GPR_S32(ctx, {}, (int32_t)(uint32_t)result); }}",
                           inst.rs, inst.rt, inst.rd);
    else
        return fmt::format("{{ int64_t result = (int64_t)GPR_S32(ctx, {}) * (int64_t)GPR_S32(ctx, {}); "
                           "ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }}",
                           inst.rs, inst.rt);
```

After fixing the code generator, **re-run the recompiler** to regenerate all runner `.cpp` files.

**Manual hotfix applied:**
`InitAtreeSeqs_0x211dc8.cpp` — both MULTs patched to write rd (unblocks LoadWeapons → SetupAtreeList).
