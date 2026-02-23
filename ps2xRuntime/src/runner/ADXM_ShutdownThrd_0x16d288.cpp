#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_ShutdownThrd
// Address: 0x16d288 - 0x16d304
void ADXM_ShutdownThrd_0x16d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_ShutdownThrd");


    ctx->pc = 0x16d288u;

    // 0x16d288: 0x8f82812c
    ctx->pc = 0x16d288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934828)));
    // 0x16d28c: 0x27bdfff0
    ctx->pc = 0x16d28cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d290: 0xffbf0000
    ctx->pc = 0x16d290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d294: 0x2442ffff
    ctx->pc = 0x16d294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16d298: 0x14400017
    ctx->pc = 0x16D298u;
    {
        const bool branch_taken_0x16d298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D29Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934828), GPR_U32(ctx, 2));
        if (branch_taken_0x16d298) {
            ctx->pc = 0x16D2F8u;
            goto label_16d2f8;
        }
    }
    ctx->pc = 0x16D2A0u;
    // 0x16d2a0: 0xc05b4de
    ctx->pc = 0x16D2A0u;
    SET_GPR_U32(ctx, 31, 0x16D2A8u);
    ctx->pc = 0x16D378u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ShutdownMwIdleThrd_0x16d378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2A8u; }
        else if (ctx->pc != 0x16D2A8u) { ctx->pc = 0x16D2A8u; }
    }
    if (ctx->pc != 0x16D2A8u) { return; }
    ctx->pc = 0x16D2A8u;
    // 0x16d2a8: 0xc05b4fa
    ctx->pc = 0x16D2A8u;
    SET_GPR_U32(ctx, 31, 0x16D2B0u);
    ctx->pc = 0x16D3E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ShutdownVsyncThrd_0x16d3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2B0u; }
        else if (ctx->pc != 0x16D2B0u) { ctx->pc = 0x16D2B0u; }
    }
    if (ctx->pc != 0x16D2B0u) { return; }
    ctx->pc = 0x16D2B0u;
    // 0x16d2b0: 0xc05b532
    ctx->pc = 0x16D2B0u;
    SET_GPR_U32(ctx, 31, 0x16D2B8u);
    ctx->pc = 0x16D4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ShutdownSafeThrd_0x16d4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2B8u; }
        else if (ctx->pc != 0x16D2B8u) { ctx->pc = 0x16D2B8u; }
    }
    if (ctx->pc != 0x16D2B8u) { return; }
    ctx->pc = 0x16D2B8u;
    // 0x16d2b8: 0xc0551f4
    ctx->pc = 0x16D2B8u;
    SET_GPR_U32(ctx, 31, 0x16D2C0u);
    ctx->pc = 0x1547D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x1547d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2C0u; }
        else if (ctx->pc != 0x16D2C0u) { ctx->pc = 0x16D2C0u; }
    }
    if (ctx->pc != 0x16D2C0u) { return; }
    ctx->pc = 0x16D2C0u;
    // 0x16d2c0: 0xaf82817c
    ctx->pc = 0x16d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934908), GPR_U32(ctx, 2));
    // 0x16d2c4: 0x8f8581ec
    ctx->pc = 0x16d2c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935020)));
    // 0x16d2c8: 0x8f84817c
    ctx->pc = 0x16d2c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16d2cc: 0xc0551dc
    ctx->pc = 0x16D2CCu;
    SET_GPR_U32(ctx, 31, 0x16D2D4u);
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2D4u; }
        else if (ctx->pc != 0x16D2D4u) { ctx->pc = 0x16D2D4u; }
    }
    if (ctx->pc != 0x16D2D4u) { return; }
    ctx->pc = 0x16D2D4u;
    // 0x16d2d4: 0x202d
    ctx->pc = 0x16d2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2d8: 0xc05f86c
    ctx->pc = 0x16D2D8u;
    SET_GPR_U32(ctx, 31, 0x16D2E0u);
    ctx->pc = 0x16D2DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbLock_0x17e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2E0u; }
        else if (ctx->pc != 0x16D2E0u) { ctx->pc = 0x16D2E0u; }
    }
    if (ctx->pc != 0x16D2E0u) { return; }
    ctx->pc = 0x16D2E0u;
    // 0x16d2e0: 0x202d
    ctx->pc = 0x16d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2e4: 0xc05f870
    ctx->pc = 0x16D2E4u;
    SET_GPR_U32(ctx, 31, 0x16D2ECu);
    ctx->pc = 0x16D2E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbUnlock_0x17e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2ECu; }
        else if (ctx->pc != 0x16D2ECu) { ctx->pc = 0x16D2ECu; }
    }
    if (ctx->pc != 0x16D2ECu) { return; }
    ctx->pc = 0x16D2ECu;
    // 0x16d2ec: 0xdfbf0000
    ctx->pc = 0x16d2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d2f0: 0x805f942
    ctx->pc = 0x16D2F0u;
    ctx->pc = 0x16D2F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E508u;
    SVM_Finish_0x17e508(rdram, ctx, runtime); return;
    ctx->pc = 0x16D2F8u;
label_16d2f8:
    // 0x16d2f8: 0xdfbf0000
    ctx->pc = 0x16d2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d2fc: 0x3e00008
    ctx->pc = 0x16D2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D300u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D2F8u: goto label_16d2f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D304u;
}
