#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__12FileMgrClassFv
// Address: 0x1e9390 - 0x1e9464
void init__12FileMgrClassFv_0x1e9390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__12FileMgrClassFv");


    ctx->pc = 0x1e9390u;

    // 0x1e9390: 0x27bdffb0
    ctx->pc = 0x1e9390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e9394: 0x7fbf0010
    ctx->pc = 0x1e9394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e9398: 0x7fb00000
    ctx->pc = 0x1e9398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e939c: 0x70808628
    ctx->pc = 0x1e939cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e93a0: 0x27a40020
    ctx->pc = 0x1e93a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e93a4: 0x70002e28
    ctx->pc = 0x1e93a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e93a8: 0xc050cfe
    ctx->pc = 0x1E93A8u;
    SET_GPR_U32(ctx, 31, 0x1E93B0u);
    ctx->pc = 0x1E93ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93B0u; }
        else if (ctx->pc != 0x1E93B0u) { ctx->pc = 0x1E93B0u; }
    }
    if (ctx->pc != 0x1E93B0u) { return; }
    ctx->pc = 0x1E93B0u;
    // 0x1e93b0: 0x27828368
    ctx->pc = 0x1e93b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935400));
    // 0x1e93b4: 0xafa20020
    ctx->pc = 0x1e93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1e93b8: 0x27a40020
    ctx->pc = 0x1e93b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e93bc: 0xc05c48e
    ctx->pc = 0x1E93BCu;
    SET_GPR_U32(ctx, 31, 0x1E93C4u);
    ctx->pc = 0x1E93C0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->pc = 0x171238u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPS2_SetupDvdFs_0x171238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93C4u; }
        else if (ctx->pc != 0x1E93C4u) { ctx->pc = 0x1E93C4u; }
    }
    if (ctx->pc != 0x1E93C4u) { return; }
    ctx->pc = 0x1E93C4u;
    // 0x1e93c4: 0x27a40040
    ctx->pc = 0x1e93c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e93c8: 0x70002e28
    ctx->pc = 0x1e93c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e93cc: 0xc050cfe
    ctx->pc = 0x1E93CCu;
    SET_GPR_U32(ctx, 31, 0x1E93D4u);
    ctx->pc = 0x1E93D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93D4u; }
        else if (ctx->pc != 0x1E93D4u) { ctx->pc = 0x1E93D4u; }
    }
    if (ctx->pc != 0x1E93D4u) { return; }
    ctx->pc = 0x1E93D4u;
    // 0x1e93d4: 0x3c020027
    ctx->pc = 0x1e93d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e93d8: 0x2442bca0
    ctx->pc = 0x1e93d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950048));
    // 0x1e93dc: 0xafa20040
    ctx->pc = 0x1e93dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1e93e0: 0x24020020
    ctx->pc = 0x1e93e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e93e4: 0xafa20044
    ctx->pc = 0x1e93e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1e93e8: 0x24020c03
    ctx->pc = 0x1e93e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3075));
    // 0x1e93ec: 0xafa2004c
    ctx->pc = 0x1e93ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1e93f0: 0x3c02004a
    ctx->pc = 0x1e93f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x1e93f4: 0x2442dcd0
    ctx->pc = 0x1e93f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958288));
    // 0x1e93f8: 0xafa20048
    ctx->pc = 0x1e93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1e93fc: 0xc05c4b8
    ctx->pc = 0x1E93FCu;
    SET_GPR_U32(ctx, 31, 0x1E9404u);
    ctx->pc = 0x1E9400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1712E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPS2_LoadFcacheDvd_0x1712e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9404u; }
        else if (ctx->pc != 0x1E9404u) { ctx->pc = 0x1E9404u; }
    }
    if (ctx->pc != 0x1E9404u) { return; }
    ctx->pc = 0x1E9404u;
    // 0x1e9404: 0xc05b120
    ctx->pc = 0x1E9404u;
    SET_GPR_U32(ctx, 31, 0x1E940Cu);
    ctx->pc = 0x1E9408u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16C480u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_ConfigVsyncSvr_0x16c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E940Cu; }
        else if (ctx->pc != 0x1E940Cu) { ctx->pc = 0x1E940Cu; }
    }
    if (ctx->pc != 0x1E940Cu) { return; }
    ctx->pc = 0x1E940Cu;
    // 0x1e940c: 0xc05b5e2
    ctx->pc = 0x1E940Cu;
    SET_GPR_U32(ctx, 31, 0x1E9414u);
    ctx->pc = 0x1E9410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16D788u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXM_SetupThrdEx_0x16d788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9414u; }
        else if (ctx->pc != 0x1E9414u) { ctx->pc = 0x1E9414u; }
    }
    if (ctx->pc != 0x1E9414u) { return; }
    ctx->pc = 0x1E9414u;
    // 0x1e9414: 0x3c02001f
    ctx->pc = 0x1e9414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)31 << 16));
    // 0x1e9418: 0x2444ed00
    ctx->pc = 0x1e9418u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294962432));
    // 0x1e941c: 0xc05b666
    ctx->pc = 0x1E941Cu;
    SET_GPR_U32(ctx, 31, 0x1E9424u);
    ctx->pc = 0x1E9420u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16D998u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXM_SetCbUsrVsync_0x16d998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9424u; }
        else if (ctx->pc != 0x1E9424u) { ctx->pc = 0x1E9424u; }
    }
    if (ctx->pc != 0x1E9424u) { return; }
    ctx->pc = 0x1E9424u;
    // 0x1e9424: 0x3c02001b
    ctx->pc = 0x1e9424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1e9428: 0x2444f6c0
    ctx->pc = 0x1e9428u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964928));
    // 0x1e942c: 0xc05b66c
    ctx->pc = 0x1E942Cu;
    SET_GPR_U32(ctx, 31, 0x1E9434u);
    ctx->pc = 0x1E9430u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16D9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXM_SetCbUsrIdle_0x16d9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9434u; }
        else if (ctx->pc != 0x1E9434u) { ctx->pc = 0x1E9434u; }
    }
    if (ctx->pc != 0x1E9434u) { return; }
    ctx->pc = 0x1E9434u;
    // 0x1e9434: 0x2402ffff
    ctx->pc = 0x1e9434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9438: 0xa202010c
    ctx->pc = 0x1e9438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e943c: 0xa202010d
    ctx->pc = 0x1e943cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e9440: 0x3c020046
    ctx->pc = 0x1e9440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)70 << 16));
    // 0x1e9444: 0x24447cf0
    ctx->pc = 0x1e9444u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 31984));
    // 0x1e9448: 0x70002e28
    ctx->pc = 0x1e9448u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e944c: 0xc050cfe
    ctx->pc = 0x1E944Cu;
    SET_GPR_U32(ctx, 31, 0x1E9454u);
    ctx->pc = 0x1E9450u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2076));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9454u; }
        else if (ctx->pc != 0x1E9454u) { ctx->pc = 0x1E9454u; }
    }
    if (ctx->pc != 0x1E9454u) { return; }
    ctx->pc = 0x1E9454u;
    // 0x1e9454: 0x7bbf0010
    ctx->pc = 0x1e9454u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9458: 0x7bb00000
    ctx->pc = 0x1e9458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e945c: 0x3e00008
    ctx->pc = 0x1E945Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9460u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9464u;
}
