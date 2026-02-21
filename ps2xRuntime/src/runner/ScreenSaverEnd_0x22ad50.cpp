#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScreenSaverEnd
// Address: 0x22ad50 - 0x22ae10
void ScreenSaverEnd_0x22ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22ad50u;

    // 0x22ad50: 0x27bdffe0
    ctx->pc = 0x22ad50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22ad54: 0xffbf0010
    ctx->pc = 0x22ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22ad58: 0xffb00000
    ctx->pc = 0x22ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ad5c: 0x802d
    ctx->pc = 0x22ad5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ad60:
    // 0x22ad60: 0xc08aafc
    ctx->pc = 0x22AD60u;
    SET_GPR_U32(ctx, 31, 0x22AD68u);
    ctx->pc = 0x22AD64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22ABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverEndWeap_0x22abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD68u; }
    }
    if (ctx->pc != 0x22AD68u) { return; }
    ctx->pc = 0x22AD68u;
    // 0x22ad68: 0x26100001
    ctx->pc = 0x22ad68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x22ad6c: 0x2a020004
    ctx->pc = 0x22ad6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x22ad70: 0x1440fffb
    ctx->pc = 0x22AD70u;
    {
        const bool branch_taken_0x22ad70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22AD74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22ad70) {
            ctx->pc = 0x22AD60u;
            goto label_22ad60;
        }
    }
    ctx->pc = 0x22AD78u;
    // 0x22ad78: 0x8c441318
    ctx->pc = 0x22ad78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4888)));
    // 0x22ad7c: 0xc0b3f1a
    ctx->pc = 0x22AD7Cu;
    SET_GPR_U32(ctx, 31, 0x22AD84u);
    ctx->pc = 0x22AD80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AD84u; }
    }
    if (ctx->pc != 0x22AD84u) { return; }
    ctx->pc = 0x22AD84u;
    // 0x22ad84: 0x3c02003a
    ctx->pc = 0x22ad84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x22ad88: 0x8c500c94
    ctx->pc = 0x22ad88u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 3220)));
    // 0x22ad8c: 0x12000008
    ctx->pc = 0x22AD8Cu;
    {
        const bool branch_taken_0x22ad8c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x22AD90u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22ad8c) {
            ctx->pc = 0x22ADB0u;
            goto label_22adb0;
        }
    }
    ctx->pc = 0x22AD94u;
    // 0x22ad94: 0x0
    ctx->pc = 0x22ad94u;
    // NOP
label_22ad98:
    // 0x22ad98: 0x24050002
    ctx->pc = 0x22ad98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ad9c: 0xc0b41e4
    ctx->pc = 0x22AD9Cu;
    SET_GPR_U32(ctx, 31, 0x22ADA4u);
    ctx->pc = 0x22ADA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ADA4u; }
    }
    if (ctx->pc != 0x22ADA4u) { return; }
    ctx->pc = 0x22ADA4u;
    // 0x22ada4: 0x8e10007c
    ctx->pc = 0x22ada4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x22ada8: 0x1600fffb
    ctx->pc = 0x22ADA8u;
    {
        const bool branch_taken_0x22ada8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x22ADACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22ada8) {
            ctx->pc = 0x22AD98u;
            goto label_22ad98;
        }
    }
    ctx->pc = 0x22ADB0u;
label_22adb0:
    // 0x22adb0: 0xc0816cc
    ctx->pc = 0x22ADB0u;
    SET_GPR_U32(ctx, 31, 0x22ADB8u);
    ctx->pc = 0x22ADB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x205B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearAllPlayerControls_0x205b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ADB8u; }
    }
    if (ctx->pc != 0x22ADB8u) { return; }
    ctx->pc = 0x22ADB8u;
    // 0x22adb8: 0x3c030032
    ctx->pc = 0x22adb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22adbc: 0x3c020032
    ctx->pc = 0x22adbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22adc0: 0x8c42131c
    ctx->pc = 0x22adc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4892)));
    // 0x22adc4: 0xac62d358
    ctx->pc = 0x22adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955864), GPR_U32(ctx, 2));
    // 0x22adc8: 0x3c020031
    ctx->pc = 0x22adc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22adcc: 0x8c430018
    ctx->pc = 0x22adccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22add0: 0x2402400b
    ctx->pc = 0x22add0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
    // 0x22add4: 0x10620006
    ctx->pc = 0x22ADD4u;
    {
        const bool branch_taken_0x22add4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22ADD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
        if (branch_taken_0x22add4) {
            ctx->pc = 0x22ADF0u;
            goto label_22adf0;
        }
    }
    ctx->pc = 0x22ADDCu;
    // 0x22addc: 0x14620009
    ctx->pc = 0x22ADDCu;
    {
        const bool branch_taken_0x22addc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22ADE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x22addc) {
            ctx->pc = 0x22AE04u;
            goto label_22ae04;
        }
    }
    ctx->pc = 0x22ADE4u;
    // 0x22ade4: 0xdfb00000
    ctx->pc = 0x22ade4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ade8: 0x80973f2
    ctx->pc = 0x22ADE8u;
    ctx->pc = 0x22ADECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x25CFC8u;
    ShopMusicStart_0x25cfc8(rdram, ctx, runtime); return;
    ctx->pc = 0x22ADF0u;
label_22adf0:
    // 0x22adf0: 0x24040001
    ctx->pc = 0x22adf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22adf4: 0xdfbf0010
    ctx->pc = 0x22adf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22adf8: 0xdfb00000
    ctx->pc = 0x22adf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22adfc: 0x809739e
    ctx->pc = 0x22ADFCu;
    ctx->pc = 0x22AE00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x25CE78u;
    AudioSelect_0x25ce78(rdram, ctx, runtime); return;
    ctx->pc = 0x22AE04u;
label_22ae04:
    // 0x22ae04: 0xdfb00000
    ctx->pc = 0x22ae04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ae08: 0x3e00008
    ctx->pc = 0x22AE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AE0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AD60u: goto label_22ad60;
            case 0x22AD98u: goto label_22ad98;
            case 0x22ADB0u: goto label_22adb0;
            case 0x22ADF0u: goto label_22adf0;
            case 0x22AE04u: goto label_22ae04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22AE10u;
}
