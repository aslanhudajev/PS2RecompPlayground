#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include <cstring>
#include "ps2_syscalls.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: set depth PSM and related fields in GS context
void sceHiGsCtxSetDepth_0x113628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetDepth_0x113628");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    uint32_t param2 = GPR_U32(ctx, 5) & 0x3Fu;
    uint32_t param3 = GPR_U32(ctx, 6);
    int32_t param4 = static_cast<int32_t>(GPR_U32(ctx, 7));

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (!p) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint64_t v78, v80, vb8;
    std::memcpy(&v78, p + 0x78, 8);
    v78 = (v78 & 0xffffffffc0ffffffULL) | (static_cast<uint64_t>(param2 & 0x3Fu) << 24);
    std::memcpy(p + 0x78, &v78, 8);

    if (param4 == 0) {
        std::memcpy(&v80, p + 0x80, 8);
        v80 = (v80 & 0xfffffffff0ffffffULL) | 0x100000000ULL;
        std::memcpy(p + 0x80, &v80, 8);
        std::memcpy(&vb8, p + 0xb8, 8);
        vb8 = (vb8 & 0xfffffffffff9ffffULL) | 0x30000ULL;
        std::memcpy(p + 0xb8, &vb8, 8);
        p[0xed] = 0;
    } else if (param4 == 1) {
        p[0xed] = static_cast<uint8_t>(param4);
        std::memcpy(&v80, p + 0x80, 8);
        v80 = (v80 & 0xfffffffef0ffffffULL) | (static_cast<uint64_t>(param3 & 0xFu) << 24);
        std::memcpy(p + 0x80, &v80, 8);
        std::memcpy(&vb8, p + 0xb8, 8);
        vb8 |= 0x70000ULL;
        std::memcpy(p + 0xb8, &vb8, 8);
    } else {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, 8u);
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

    uint16_t e4;
    std::memcpy(&e4, p + 0xe4, 2);
    e4 |= 0x103u;
    std::memcpy(p + 0xe4, &e4, 2);

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
