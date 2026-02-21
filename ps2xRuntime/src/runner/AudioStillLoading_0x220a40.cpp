#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioStillLoading
// Address: 0x220a40 - 0x220ae4
void AudioStillLoading_0x220a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220a40u;

    // 0x220a40: 0x27bdffe0
    ctx->pc = 0x220a40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220a44: 0xffbf0010
    ctx->pc = 0x220a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x220a48: 0xffb00000
    ctx->pc = 0x220a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220a4c: 0x3c020032
    ctx->pc = 0x220a4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220a50: 0x8c42fd58
    ctx->pc = 0x220a50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x220a54: 0x10400003
    ctx->pc = 0x220A54u;
    {
        const bool branch_taken_0x220a54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x220A58u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x220a54) {
            ctx->pc = 0x220A64u;
            goto label_220a64;
        }
    }
    ctx->pc = 0x220A5Cu;
    // 0x220a5c: 0x1000001d
    ctx->pc = 0x220A5Cu;
    {
        const bool branch_taken_0x220a5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220A60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x220a5c) {
            ctx->pc = 0x220AD4u;
            goto label_220ad4;
        }
    }
    ctx->pc = 0x220A64u;
label_220a64:
    // 0x220a64: 0x3c02003c
    ctx->pc = 0x220a64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x220a68: 0x44906000
    ctx->pc = 0x220a68u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 16);
    // 0x220a6c: 0x46806320
    ctx->pc = 0x220a6cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x220a70: 0xc088e54
    ctx->pc = 0x220A70u;
    SET_GPR_U32(ctx, 31, 0x220A78u);
    ctx->pc = 0x220A74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956548), GPR_U32(ctx, 0));
    ctx->pc = 0x223950u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_poll_0x223950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220A78u; }
    }
    if (ctx->pc != 0x220A78u) { return; }
    ctx->pc = 0x220A78u;
    // 0x220a78: 0x3c020032
    ctx->pc = 0x220a78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220a7c: 0x8c42fe2c
    ctx->pc = 0x220a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966828)));
    // 0x220a80: 0x10400010
    ctx->pc = 0x220A80u;
    {
        const bool branch_taken_0x220a80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x220A84u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x220a80) {
            ctx->pc = 0x220AC4u;
            goto label_220ac4;
        }
    }
    ctx->pc = 0x220A88u;
    // 0x220a88: 0x8c62fd70
    ctx->pc = 0x220a88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966640)));
    // 0x220a8c: 0x2021021
    ctx->pc = 0x220a8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x220a90: 0xac62fd70
    ctx->pc = 0x220a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966640), GPR_U32(ctx, 2));
    // 0x220a94: 0x24022710
    ctx->pc = 0x220a94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10000));
    // 0x220a98: 0x2403ffff
    ctx->pc = 0x220a98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220a9c: 0x0
    ctx->pc = 0x220a9cu;
    // NOP
label_220aa0:
    // 0x220aa0: 0x2442ffff
    ctx->pc = 0x220aa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x220aa4: 0x0
    ctx->pc = 0x220aa4u;
    // NOP
    // 0x220aa8: 0x0
    ctx->pc = 0x220aa8u;
    // NOP
    // 0x220aac: 0x0
    ctx->pc = 0x220aacu;
    // NOP
    // 0x220ab0: 0x0
    ctx->pc = 0x220ab0u;
    // NOP
    // 0x220ab4: 0x1443fffa
    ctx->pc = 0x220AB4u;
    {
        const bool branch_taken_0x220ab4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x220ab4) {
            ctx->pc = 0x220AA0u;
            goto label_220aa0;
        }
    }
    ctx->pc = 0x220ABCu;
    // 0x220abc: 0x10000004
    ctx->pc = 0x220ABCu;
    {
        const bool branch_taken_0x220abc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220AC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x220abc) {
            ctx->pc = 0x220AD0u;
            goto label_220ad0;
        }
    }
    ctx->pc = 0x220AC4u;
label_220ac4:
    // 0x220ac4: 0x3c020032
    ctx->pc = 0x220ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220ac8: 0xac40fd70
    ctx->pc = 0x220ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966640), GPR_U32(ctx, 0));
    // 0x220acc: 0x3c020032
    ctx->pc = 0x220accu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_220ad0:
    // 0x220ad0: 0x8c42fe2c
    ctx->pc = 0x220ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966828)));
label_220ad4:
    // 0x220ad4: 0xdfbf0010
    ctx->pc = 0x220ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220ad8: 0xdfb00000
    ctx->pc = 0x220ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220adc: 0x3e00008
    ctx->pc = 0x220ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220AE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220A64u: goto label_220a64;
            case 0x220AA0u: goto label_220aa0;
            case 0x220AC4u: goto label_220ac4;
            case 0x220AD0u: goto label_220ad0;
            case 0x220AD4u: goto label_220ad4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220AE4u;
}
