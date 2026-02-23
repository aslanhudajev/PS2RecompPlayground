#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: StartOverLap1__Fi
// Address: 0x201bc0 - 0x201c04
void StartOverLap1__Fi_0x201bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("StartOverLap1__Fi");


    ctx->pc = 0x201bc0u;

    // 0x201bc0: 0x27bdfff0
    ctx->pc = 0x201bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201bc4: 0x7fbf0000
    ctx->pc = 0x201bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x201bc8: 0x70802e28
    ctx->pc = 0x201bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x201bcc: 0xc0805f8
    ctx->pc = 0x201BCCu;
    SET_GPR_U32(ctx, 31, 0x201BD4u);
    ctx->pc = 0x201BD0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937944)));
    ctx->pc = 0x2017E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartOverLap__15OverLapCtrlTaskFi_0x2017e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BD4u; }
        else if (ctx->pc != 0x201BD4u) { ctx->pc = 0x201BD4u; }
    }
    if (ctx->pc != 0x201BD4u) { return; }
    ctx->pc = 0x201BD4u;
    // 0x201bd4: 0x8f848c48
    ctx->pc = 0x201bd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x201bd8: 0x70002e28
    ctx->pc = 0x201bd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201bdc: 0xc072650
    ctx->pc = 0x201BDCu;
    SET_GPR_U32(ctx, 31, 0x201BE4u);
    ctx->pc = 0x201BE0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1C9940u;
    {
        const uint32_t __entryPc = ctx->pc;
        takeOver__10CameraTaskFii_0x1c9940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BE4u; }
        else if (ctx->pc != 0x201BE4u) { ctx->pc = 0x201BE4u; }
    }
    if (ctx->pc != 0x201BE4u) { return; }
    ctx->pc = 0x201BE4u;
    // 0x201be4: 0x8f848d40
    ctx->pc = 0x201be4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x201be8: 0xc07c354
    ctx->pc = 0x201BE8u;
    SET_GPR_U32(ctx, 31, 0x201BF0u);
    ctx->pc = 0x201BECu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1F0D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        Backup__13LightCtrlTaskFi_0x1f0d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BF0u; }
        else if (ctx->pc != 0x201BF0u) { ctx->pc = 0x201BF0u; }
    }
    if (ctx->pc != 0x201BF0u) { return; }
    ctx->pc = 0x201BF0u;
    // 0x201bf0: 0xc07a7f4
    ctx->pc = 0x201BF0u;
    SET_GPR_U32(ctx, 31, 0x201BF8u);
    ctx->pc = 0x201BF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    ctx->pc = 0x1E9FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        BackupFogParam__11FogCtrlTaskFv_0x1e9fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BF8u; }
        else if (ctx->pc != 0x201BF8u) { ctx->pc = 0x201BF8u; }
    }
    if (ctx->pc != 0x201BF8u) { return; }
    ctx->pc = 0x201BF8u;
    // 0x201bf8: 0x7bbf0000
    ctx->pc = 0x201bf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201bfc: 0x3e00008
    ctx->pc = 0x201BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201C04u;
}
