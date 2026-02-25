#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kDBuffBase = 0x0020f900u;

// Ghidra decomp: sceHiGsCtxSetByDBuff(ctx, dbuff)
// Reads from dbuff+0x60,0x70,0xd0,0x90,0x80,0x150,0x150; calls SetDefaultValues, GetGParam, SetRect
void sceHiGsCtxSetByDBuff_0x112b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetByDBuff_0x112b48");
#endif
    uint32_t ctxAddr = getRegU32(ctx, 4);
    uint32_t dbuffAddr = getRegU32(ctx, 5);

    uint8_t* ctxPtr = getMemPtr(rdram, ctxAddr);
    const uint8_t* dbuffPtr = getConstMemPtr(rdram, dbuffAddr);
    if (!ctxPtr || !dbuffPtr) {
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    uint64_t db60 = 0, db70 = 0, db80 = 0, db90 = 0, dbd0 = 0;
    uint16_t db150 = 0;
    std::memcpy(&db60, dbuffPtr + 0x60, 8);
    std::memcpy(&db70, dbuffPtr + 0x70, 8);
    std::memcpy(&db80, dbuffPtr + 0x80, 8);
    std::memcpy(&db90, dbuffPtr + 0x90, 8);
    std::memcpy(&dbd0, dbuffPtr + 0xd0, 8);
    std::memcpy(&db150, dbuffPtr + 0x150, 2);

    uint32_t psm = (db60 >> 24) & 0x3Fu;
    uint32_t psm2 = (db70 >> 24) & 0xFu;
    bool useZ = ((dbd0 & 0x10000) != 0) && (((db70 >> 32) & 1) == 0);

    R5900Context tmp = *ctx;
    SET_GPR_U32(&tmp, 4, ctxAddr);
    SET_GPR_U32(&tmp, 5, psm);
    SET_GPR_U32(&tmp, 6, useZ ? psm2 : 0u);
    SET_GPR_U32(&tmp, 7, useZ ? 1u : 0u);
    SET_GPR_U32(&tmp, 8, 0x280u);
    SET_GPR_U32(&tmp, 9, 0xF0u);
    tmp.pc = 0x115400u;

    if (runtime->hasFunction(0x115400u)) {
        auto fn = runtime->lookupFunction(0x115400u);
        fn(rdram, &tmp, runtime);
    } else {
        sceHiGsCtxSetDefaultValues_0x115400(rdram, &tmp, runtime);
    }

    uint16_t u1 = static_cast<uint16_t>(db60);
    uint16_t u2 = db150;
    std::memcpy(ctxPtr + 0xe0, &u1, 2);
    u2 &= 0x1ffu;
    std::memcpy(ctxPtr + 0xe2, &u2, 2);

    ps2_stubs::sceGsGetGParam(rdram, &tmp, runtime);
    uint32_t gpAddr = getRegU32(&tmp, 2);
    uint64_t gpVal = 0;
    if (const uint8_t* gp = getConstMemPtr(rdram, gpAddr))
        std::memcpy(&gpVal, gp, 8);
    if ((gpVal & 0xFFFF0000FFFFULL) == 0x100000001ULL)
        ctxPtr[0xec] = 1;
    else
        ctxPtr[0xec] = 0;

    std::memcpy(ctxPtr + 0x78, &db60, 8);
    uint32_t u3 = static_cast<uint32_t>(db90) & 0x7FFu;
    uint32_t u4 = static_cast<uint32_t>(db90 >> 32) & 0x7FFu;
    int32_t w = static_cast<int32_t>((db90 >> 16) & 0x7FFu) - (static_cast<int32_t>(u3) - 1);
    int32_t h = static_cast<int32_t>((db90 >> 48) & 0x7FFu) - (static_cast<int32_t>(u4) - 1);
    uint32_t fbw = (db60 >> 16) & 0x3Fu;

    if (runtime->hasFunction(0x113850u)) {
        uint32_t sp = getRegU32(ctx, 29);
        FAST_WRITE32(sp + 16, static_cast<uint32_t>(h));
        FAST_WRITE64(sp + 24, static_cast<uint64_t>(fbw));
        R5900Context tmpRect = *ctx;
        SET_GPR_U32(&tmpRect, 4, ctxAddr);
        SET_GPR_U32(&tmpRect, 5, u3);
        SET_GPR_U32(&tmpRect, 6, u4);
        SET_GPR_U32(&tmpRect, 7, w);
        tmpRect.pc = 0x113850u;
        auto fn = runtime->lookupFunction(0x113850u);
        fn(rdram, &tmpRect, runtime);
    } else {
        R5900Context tmpRect = *ctx;
        SET_GPR_U32(&tmpRect, 4, ctxAddr);
        SET_GPR_U32(&tmpRect, 5, u3);
        SET_GPR_U32(&tmpRect, 6, u4);
        SET_GPR_U32(&tmpRect, 7, w);
        uint32_t sp = getRegU32(ctx, 29);
        FAST_WRITE32(sp + 16, static_cast<uint32_t>(h));
        FAST_WRITE64(sp + 24, static_cast<uint64_t>(fbw));
        sceHiGsCtxSetRect_0x113850(rdram, &tmpRect, runtime);
    }

    std::memcpy(ctxPtr + 0xc8, dbuffPtr + 0x80, 8);
    uint16_t cc;
    std::memcpy(&cc, ctxPtr + 0xcc, 2);
    cc &= 0xfff0u;
    std::memcpy(ctxPtr + 0xcc, &cc, 2);
    std::memcpy(ctxPtr + 0xb8, &dbd0, 8);
    std::memcpy(ctxPtr + 0x80, &db70, 8);

    setReturnS32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}
