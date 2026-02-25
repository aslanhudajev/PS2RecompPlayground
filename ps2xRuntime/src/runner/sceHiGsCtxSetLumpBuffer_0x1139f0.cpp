#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_recompiled_functions.h"
#include <cstring>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: set lump buffer in GS context, calls sceHiGsPageSize for size calc
void sceHiGsCtxSetLumpBuffer_0x1139f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetLumpBuffer_0x1139f0");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    int32_t param2 = static_cast<int32_t>(GPR_U32(ctx, 5));

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (!p) {
        setReturnU32(ctx, 0u);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint64_t v78, v80, vd0;
    std::memcpy(&v78, p + 0x78, 8);
    std::memcpy(&vd0, p + 0xd0, 8);
    uint32_t fbw = static_cast<uint32_t>((v78 >> 16) & 0x3Fu) << 6;
    uint32_t y2 = static_cast<uint32_t>((vd0 >> 48) & 0x7FFu);
    uint32_t y1 = static_cast<uint32_t>((vd0 >> 32) & 0x7FFu);
    uint32_t height = (y1 > 0u) ? (y2 - (y1 - 1u)) : y2;
    uint32_t psm = static_cast<uint32_t>((v78 >> 24) & 0x3Fu);

    uint32_t psize = 0u;
    if (runtime && runtime->hasFunction(0x111408u)) {
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, fbw);
        SET_GPR_U32(&tmp, 5, height);
        SET_GPR_U32(&tmp, 6, psm);
        tmp.pc = 0x111408u;
        auto fn = runtime->lookupFunction(0x111408u);
        fn(rdram, &tmp, runtime);
        psize = getRegU32(&tmp, 2);
    }

    const int16_t sParam2 = static_cast<int16_t>(param2);
    uint32_t uVar2;
    if (p[0xea] == 0) {
        *reinterpret_cast<int16_t*>(p + 0xe0) = sParam2;
        uVar2 = (psize + 0x7FFu) >> 11;
    } else {
        *reinterpret_cast<int16_t*>(p + 0xe2) = sParam2;
        uVar2 = (psize + 0x7FFu) >> 11;
        *reinterpret_cast<int16_t*>(p + 0xe0) = static_cast<int16_t>(param2 + static_cast<int32_t>(uVar2));
        if (runtime && runtime->hasFunction(0x111408u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, fbw);
            SET_GPR_U32(&tmp, 5, height);
            SET_GPR_U32(&tmp, 6, psm);
            tmp.pc = 0x111408u;
            auto fn = runtime->lookupFunction(0x111408u);
            fn(rdram, &tmp, runtime);
            psize = getRegU32(&tmp, 2);
        }
        uVar2 = (psize + 0x7FFu) >> 11;
        uVar2 <<= 1;
    }

    std::memcpy(&v80, p + 0x80, 8);
    v80 = (v80 & 0xfffffffffffffe00ULL) | (static_cast<uint64_t>(param2 + static_cast<int32_t>(uVar2)) & 0x1FFu);
    std::memcpy(p + 0x80, &v80, 8);

    uint16_t e4;
    std::memcpy(&e4, p + 0xe4, 2);
    e4 |= 3u;
    std::memcpy(p + 0xe4, &e4, 2);

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
