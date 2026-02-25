#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// sceGsSetDefDBuff(buf, psm, width, height, draw_param5, draw_param6, do_clear)
// Calls sceGsGetGParam, sceGsSetDefDispEnv (x2), sceGsSetDefDrawEnv (x2), sceGsSetDefClear (x2 if do_clear), sceGszbufaddr
static uint32_t readStackU32(uint8_t* rdram, R5900Context* ctx, uint32_t offset) {
    uint32_t sp = getRegU32(ctx, 29);
    const uint8_t* ptr = getConstMemPtr(rdram, sp + offset);
    if (!ptr) return 0;
    uint32_t v = 0;
    std::memcpy(&v, ptr, sizeof(v));
    return v;
}
static void writeStackU32(uint8_t* rdram, R5900Context* ctx, uint32_t offset, uint32_t value) {
    uint32_t sp = getRegU32(ctx, 29);
    uint8_t* ptr = getMemPtr(rdram, sp + offset);
    if (ptr)
        std::memcpy(ptr, &value, sizeof(value));
}

void sceGsSetDefDBuff_0x10b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGsSetDefDBuff_0x10b6f8");
#endif
    constexpr uint32_t kDBuffBase = 0x0020f900u;
    uint32_t bufAddr = getRegU32(ctx, 4);
    if (bufAddr == 0u)
        bufAddr = kDBuffBase;
    uint32_t psm = getRegU32(ctx, 5) & 0xFFFFu;
    int32_t w = static_cast<int32_t>(static_cast<int16_t>(getRegU32(ctx, 6) & 0xFFFFu));
    int32_t h = static_cast<int32_t>(static_cast<int16_t>(getRegU32(ctx, 7) & 0xFFFFu));
    uint32_t param5 = readStackU32(rdram, ctx, 16);
    uint32_t param6 = readStackU32(rdram, ctx, 20);
    int32_t doClear = static_cast<int32_t>(static_cast<int16_t>(readStackU32(rdram, ctx, 24) & 0xFFFFu));

    if (w <= 0)
        w = 640;
    if (h <= 0)
        h = 448;

    // sceGsGetGParam - get GP addr for later check
    ps2_stubs::sceGsGetGParam(rdram, ctx, runtime);
    uint32_t gpAddr = getRegU32(ctx, 2);

    // sceGsSetDefDispEnv(buf+0, psm, w, h, 0, 0)
    SET_GPR_U32(ctx, 4, bufAddr);
    SET_GPR_U32(ctx, 5, psm);
    SET_GPR_U32(ctx, 6, static_cast<uint32_t>(w));
    SET_GPR_U32(ctx, 7, static_cast<uint32_t>(h));
    writeStackU32(rdram, ctx, 16, 0u);
    writeStackU32(rdram, ctx, 20, 0u);
    ps2_stubs::sceGsSetDefDispEnv(rdram, ctx, runtime);

    // sceGsSetDefDispEnv(buf+0x28, psm, w, h, 0, 0)
    SET_GPR_U32(ctx, 4, bufAddr + 0x28u);
    ps2_stubs::sceGsSetDefDispEnv(rdram, ctx, runtime);

    // sceGsSetDefDrawEnv(buf+0x60, psm, w, h, param5, param6)
    SET_GPR_U32(ctx, 4, bufAddr + 0x60u);
    SET_GPR_U32(ctx, 5, psm);
    writeStackU32(rdram, ctx, 16, param5);
    writeStackU32(rdram, ctx, 20, param6);
    ps2_stubs::sceGsSetDefDrawEnv(rdram, ctx, runtime);

    // sceGsSetDefDrawEnv(buf+0x150, psm, w, h, param5, param6)
    SET_GPR_U32(ctx, 4, bufAddr + 0x150u);
    ps2_stubs::sceGsSetDefDrawEnv(rdram, ctx, runtime);

    if (doClear != 0) {
        int32_t offX = 0x800 - (w >> 1);
        int32_t offY = 0x800 - (h >> 1);
        SET_GPR_U32(ctx, 4, bufAddr + 0xe0u);
        SET_GPR_U32(ctx, 5, param5);
        SET_GPR_U32(ctx, 6, static_cast<uint32_t>(offX));
        SET_GPR_U32(ctx, 7, static_cast<uint32_t>(offY));
        writeStackU32(rdram, ctx, 16, static_cast<uint32_t>(w));
        writeStackU32(rdram, ctx, 20, static_cast<uint32_t>(h));
        writeStackU32(rdram, ctx, 24, 0u);
        writeStackU32(rdram, ctx, 28, 0u);
        ps2_stubs::sceGsSetDefClear(rdram, ctx, runtime);

        SET_GPR_U32(ctx, 4, bufAddr + 0x1d0u);
        ps2_stubs::sceGsSetDefClear(rdram, ctx, runtime);
    }

    // Zero fields at 0x50, 0x54, 0x58, 0x5c, 0x140, 0x144, 0x148, 0x14c
    uint8_t* base = getMemPtr(rdram, bufAddr);
    if (base) {
        for (uint32_t off : {0x50u, 0x54u, 0x58u, 0x5cu, 0x140u, 0x144u, 0x148u, 0x14cu})
            std::memset(base + off, 0, 4);
    }

    // Set control bits at 0x50, 0x58, 0x140, 0x148
    uint64_t uVal = (doClear != 0) ? 0xEu : 8u;
    uint64_t maskVal = uVal | 0x1000000000008000ULL;
    if (base) {
        uint64_t* q50 = reinterpret_cast<uint64_t*>(base + 0x50);
        uint64_t* q58 = reinterpret_cast<uint64_t*>(base + 0x58);
        uint64_t* q140 = reinterpret_cast<uint64_t*>(base + 0x140);
        uint64_t* q148 = reinterpret_cast<uint64_t*>(base + 0x148);
        *q50 = (*q50 & 0xFFFFFFFFFFFFF800ULL) | maskVal;
        *q58 = (*q58 & 0xFFFFFFFFFFFFFFF0ULL) | 0xEu;
        *q140 = (*q140 & 0xFFFFFFFFFFFFF800ULL) | maskVal;
        *q148 = (*q148 & 0xFFFFFFFFFFFFFFF0ULL) | 0xEu;
    }

    // sceGszbufaddr(psm, w, h) and patch draw env zbuf
    SET_GPR_U32(ctx, 4, psm);
    SET_GPR_U32(ctx, 6, static_cast<uint32_t>(w));
    SET_GPR_U32(ctx, 7, static_cast<uint32_t>(h));
    ps2_stubs::sceGszbufaddr(rdram, ctx, runtime);
    int32_t zbuf = static_cast<int32_t>(getRegU32(ctx, 2));

    const uint8_t* gpPtr = getConstMemPtr(rdram, gpAddr);
    if (gpPtr && base) {
        uint32_t gp0 = 0, gp1 = 0;
        std::memcpy(&gp0, gpPtr, 4);
        std::memcpy(&gp1, gpPtr + 4, 4);
        uint64_t gpVal = (static_cast<uint64_t>(gp1) << 32) | gp0;
        if ((gpVal & 0xFFFF0000FFFFULL) == 1ULL || (static_cast<int16_t>(gp0) == 0)) {
            int32_t zbufHalf = zbuf >> 1;
            uint64_t* draw0 = reinterpret_cast<uint64_t*>(base + 0x60);
            uint64_t* disp0 = reinterpret_cast<uint64_t*>(base + 0x38);
            *draw0 = (*draw0 & 0xFFFFFFFFFFFFFE00ULL) | (static_cast<uint64_t>(zbufHalf) & 0x1FFu);
            *disp0 = (*disp0 & 0xFFFFFFFFFFFFFE00ULL) | (static_cast<uint64_t>(zbufHalf & 0x1FF));
        }
    }

    setReturnS32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}
