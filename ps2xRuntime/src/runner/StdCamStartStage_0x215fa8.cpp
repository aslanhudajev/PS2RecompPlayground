#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StdCamStartStage
// Address: 0x215fa8 - 0x216020
void StdCamStartStage_0x215fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x215fa8u;

    // 0x215fa8: 0x27bdffe0
    ctx->pc = 0x215fa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215fac: 0xffbf0010
    ctx->pc = 0x215facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x215fb0: 0xffb00000
    ctx->pc = 0x215fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215fb4: 0x3c020031
    ctx->pc = 0x215fb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x215fb8: 0x8c430018
    ctx->pc = 0x215fb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x215fbc: 0x24024010
    ctx->pc = 0x215fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x215fc0: 0x14620013
    ctx->pc = 0x215FC0u;
    {
        const bool branch_taken_0x215fc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x215FC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x215fc0) {
            ctx->pc = 0x216010u;
            goto label_216010;
        }
    }
    ctx->pc = 0x215FC8u;
    // 0x215fc8: 0x3c030032
    ctx->pc = 0x215fc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x215fcc: 0x8c620808
    ctx->pc = 0x215fccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2056)));
    // 0x215fd0: 0x28420003
    ctx->pc = 0x215fd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x215fd4: 0x14400003
    ctx->pc = 0x215FD4u;
    {
        const bool branch_taken_0x215fd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x215FD8u;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        if (branch_taken_0x215fd4) {
            ctx->pc = 0x215FE4u;
            goto label_215fe4;
        }
    }
    ctx->pc = 0x215FDCu;
    // 0x215fdc: 0x24020002
    ctx->pc = 0x215fdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x215fe0: 0xac620808
    ctx->pc = 0x215fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2056), GPR_U32(ctx, 2));
label_215fe4:
    // 0x215fe4: 0xc09ae16
    ctx->pc = 0x215FE4u;
    SET_GPR_U32(ctx, 31, 0x215FECu);
    ctx->pc = 0x215FE8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2056)));
    ctx->pc = 0x26B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_stage_info_0x26b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215FECu; }
    }
    if (ctx->pc != 0x215FECu) { return; }
    ctx->pc = 0x215FECu;
    // 0x215fec: 0x8e030808
    ctx->pc = 0x215fecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2056)));
    // 0x215ff0: 0x24020001
    ctx->pc = 0x215ff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x215ff4: 0x14620004
    ctx->pc = 0x215FF4u;
    {
        const bool branch_taken_0x215ff4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x215FF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x215ff4) {
            ctx->pc = 0x216008u;
            goto label_216008;
        }
    }
    ctx->pc = 0x215FFCu;
    // 0x215ffc: 0xc0856ba
    ctx->pc = 0x215FFCu;
    SET_GPR_U32(ctx, 31, 0x216004u);
    ctx->pc = 0x215AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamStartUpdate_0x215ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216004u; }
    }
    if (ctx->pc != 0x216004u) { return; }
    ctx->pc = 0x216004u;
    // 0x216004: 0x3c020032
    ctx->pc = 0x216004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_216008:
    // 0x216008: 0x8c420808
    ctx->pc = 0x216008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
    // 0x21600c: 0x2102a
    ctx->pc = 0x21600cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
label_216010:
    // 0x216010: 0xdfbf0010
    ctx->pc = 0x216010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216014: 0xdfb00000
    ctx->pc = 0x216014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216018: 0x3e00008
    ctx->pc = 0x216018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21601Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215FE4u: goto label_215fe4;
            case 0x216008u: goto label_216008;
            case 0x216010u: goto label_216010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216020u;
}
