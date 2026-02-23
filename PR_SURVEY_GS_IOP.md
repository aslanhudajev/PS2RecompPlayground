# PR Survey: GS & IOP vs Creator

## Executive Summary

Your branch adds significant features and architectural improvements over the creator's. **Fix the IOP audio bug** and consider a couple minor cleanups before PR. Overall: **close to ready**.

---

## GS (Graphics Synthesizer)

### Your Implementation vs Creator

| Aspect | Creator | Yours |
|--------|---------|-------|
| **processGIFPacket** | Single overload in Memory (phys addr only) | Two overloads: `(physAddr, qwc)` + `(data*, size)` |
| **GIF callback** | None (Memory processes inline) | `setGifPacketCallback` → GS is callback target |
| **sceGsPutDrawEnv** | Writes to RDRAM only, never submits | Reads from RDRAM + submits via `processGIFPacket` ✓ |
| **Architecture** | Memory owns GS logic (processGIFPacket in ps2_gs_rasterizer) | Memory → callback → GS.processGIFPacket (clean separation) |
| **VU1** | No VU1 interpreter | Full VU1Interpreter with XGKICK routing |
| **VIF1 chain mode** | Basic | Chain accumulation + processGIFPacket/processVIF1Data |
| **DMA scratchpad** | Yes | Yes |

### Verdict: GS
- **Correct**: sceGsPutDrawEnv submits (matches real API)
- **Architecture**: Clear separation (Memory as funnel, GS via callback)
- **VU1 XGKICK**: Routed through Memory when `memory != nullptr`
- **Chain mode**: GIF + VIF1 both supported

---

## IOP

### Your Additions (Creator has none)
- `ps2_iop.h` / `ps2_iop.cpp` — IOP class with `handleRPC`
- `ps2_iop_audio.h` / `ps2_iop_audio.cpp` — LIBSD RPC handler
- RPC dispatch in `ps2_syscalls_rpc.inl`: IOP → LIBSD → `handleLibSdRpc`

### Bug: ps2_iop_audio.cpp
```cpp
runtime->audioBackend().onSoundCommand(sid, rpcNum, sendBuf, sendSize, recvBuf, recvSize);
if (recvBuf && recvSize > 0)
{
    std::memset(recvBuf, 0, recvSize);  // ← BUG: wipes response after onSoundCommand wrote it
}
```
**Fix**: Remove the `memset` block. If you intended to zero before the call, move it before `onSoundCommand`.

### Verdict: IOP
- **Structure**: Reasonable for future IOP modules
- **Bug**: Must fix before PR

---

## Memory / Build Differences

| Item | Creator | Yours |
|------|---------|-------|
| **ps2ResolveGuestPointer** | No fallback for odd upper-bit aliases | Fallback: `phys = addr & PS2_RAM_MASK` for edge cases |
| **processVIF1Data** | One overload (phys addr) | Two overloads (phys + buffer) |
| **Library type** | STATIC | OBJECT (to avoid LLD archive pull issues) |
| **Extra modules** | — | ps2_iop, ps2_iop_audio, ps2_audio, ps2_audio_vag, ps2_pad, ps2_vu1 |
| **functional** | No | `GifPacketCallback`, `setGifPacketCallback` |
| **m_gsDrawCtx** | In Memory | In GS (creator had it in Memory) |
| **iostream** | In ps2_memory.h | Removed from ps2_memory.h |

---

## Pre-PR Checklist

### Must Fix
- [ ] **ps2_iop_audio.cpp**: Remove or relocate the `memset(recvBuf, 0, recvSize)` so it doesn't overwrite the response

### Good to Have
- [ ] Confirm VU1 call sites pass `&runtime->memory()` when invoking execute/resume (so XGKICK uses Memory path)
- [ ] Consider dropping `#include <iostream>` from creator's ps2_memory.h if still present (yours doesn't have it ✓)

### Known TODOs (acceptable for PR)
- Many `TODO_NAMED` stubs (sceMpeg, sceMc, scePad, etc.) — expected for incremental work
- `sceGsSetDefClear` TODO in ps2_stubs_gs.inl

---

## Summary

| Area | Status |
|------|--------|
| GS pipeline | ✅ Ready |
| GIF/Memory separation | ✅ Ready |
| sceGsPutDrawEnv | ✅ Correct |
| VU1 + XGKICK | ✅ Ready |
| IOP skeleton | ✅ Ready |
| IOP audio (handleLibSdRpc) | ⚠️ Fix memset bug |

**Recommendation**: Fix the IOP audio memset, then PR. The rest is solid and ahead of the creator.
