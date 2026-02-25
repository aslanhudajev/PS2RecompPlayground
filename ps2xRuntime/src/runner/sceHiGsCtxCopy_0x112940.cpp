#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_recompiled_functions.h"
#include <cstring>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: sceHiGsCtxCopy(dst, src) - copy GS context from src to dst
void sceHiGsCtxCopy_0x112940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxCopy_0x112940");
#endif
    uint32_t dst = GPR_U32(ctx, 4);
    uint32_t src = GPR_U32(ctx, 5);

    if ((dst & src) == 0u) {
        if (dst != 0u && src == 0u) {
            /* No std context yet (sceHiGsServiceInit may have failed).
               Treat as success - dst from sceHiGsCtxCreate has defaults. */
            setReturnU32(ctx, 0u);
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
        if (dst == 0u) {
            /* No std context - can't copy to it. Treat as no-op success so init can proceed. */
            setReturnU32(ctx, 0u);
            ctx->pc = getRegU32(ctx, 31);
            return;
        }
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, 0u);
        tmp.pc = 0x111968u;
        if (runtime && runtime->hasFunction(0x111968u)) {
            auto fn = runtime->lookupFunction(0x111968u);
            fn(rdram, &tmp, runtime);
        } else {
            _hig_drw_err_0x111968(rdram, &tmp, runtime);
        }
        setReturnU32(ctx, getRegU32(&tmp, 2));
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint8_t* pd = getMemPtr(rdram, dst);
    const uint8_t* ps = getConstMemPtr(rdram, src);
    if (!pd || !ps) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    const uint64_t orig0 = *reinterpret_cast<const uint64_t*>(pd);
    std::memcpy(pd, ps, 96u);  // 12 qwords
    uint64_t* pd64 = reinterpret_cast<uint64_t*>(pd);
    pd64[0] = (pd64[0] & 0xffffc0000000ffffULL) |
        (static_cast<uint64_t>((orig0 >> 16) & 0x3fffffffu) << 16);
    *reinterpret_cast<uint16_t*>(pd + 0xe4) = *reinterpret_cast<const uint16_t*>(ps + 0xe4);
    pd[0xe6] = ps[0xe6];

    std::memcpy(pd + 0x78, ps + 0x78, 96u);  // block 2: 12 qwords
    pd[0xeb] = ps[0xeb];
    pd[0xed] = ps[0xed];
    pd[0xec] = ps[0xec];
    pd[0xe9] = ps[0xe9];
    pd[0xe7] = ps[0xe7];
    if (pd[0xea] != 0)
        pd[0x1d] = ps[0x1d];
    *reinterpret_cast<uint16_t*>(pd + 0xe0) = *reinterpret_cast<const uint16_t*>(ps + 0xe0);  // param[0x1c] short
    *reinterpret_cast<uint16_t*>(pd + 0xe2) = (ps[0xea] == 0)
        ? *reinterpret_cast<const uint16_t*>(ps + 0xe0)
        : *reinterpret_cast<const uint16_t*>(ps + 0xe2);

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
