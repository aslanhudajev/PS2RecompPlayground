#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: VIBRATION__13EventCtrlTaskFv
// Address: 0x1e4fc0 - 0x1e5078
void VIBRATION__13EventCtrlTaskFv_0x1e4fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("VIBRATION__13EventCtrlTaskFv");


    ctx->pc = 0x1e4fc0u;

    // 0x1e4fc0: 0x27bdffe0
    ctx->pc = 0x1e4fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4fc4: 0x7fbf0010
    ctx->pc = 0x1e4fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4fc8: 0x7fb00000
    ctx->pc = 0x1e4fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4fcc: 0x8c86000c
    ctx->pc = 0x1e4fccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4fd0: 0x70808628
    ctx->pc = 0x1e4fd0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4fd4: 0x24030002
    ctx->pc = 0x1e4fd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e4fd8: 0x8cc40004
    ctx->pc = 0x1e4fd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e4fdc: 0x10830018
    ctx->pc = 0x1E4FDCu;
    {
        const bool branch_taken_0x1e4fdc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E4FE0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e4fdc) {
            ctx->pc = 0x1E5040u;
            goto label_1e5040;
        }
    }
    ctx->pc = 0x1E4FE4u;
    // 0x1e4fe4: 0x50830010
    ctx->pc = 0x1E4FE4u;
    {
        const bool branch_taken_0x1e4fe4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e4fe4) {
            ctx->pc = 0x1E4FE8u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294938016));
            ctx->pc = 0x1E5028u;
            goto label_1e5028;
        }
    }
    ctx->pc = 0x1E4FECu;
    // 0x1e4fec: 0x10800003
    ctx->pc = 0x1E4FECu;
    {
        const bool branch_taken_0x1e4fec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e4fec) {
            ctx->pc = 0x1E4FFCu;
            goto label_1e4ffc;
        }
    }
    ctx->pc = 0x1E4FF4u;
    // 0x1e4ff4: 0x1000001d
    ctx->pc = 0x1E4FF4u;
    {
        const bool branch_taken_0x1e4ff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4FF8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1e4ff4) {
            ctx->pc = 0x1E506Cu;
            goto label_1e506c;
        }
    }
    ctx->pc = 0x1E4FFCu;
label_1e4ffc:
    // 0x1e4ffc: 0x8f838ce8
    ctx->pc = 0x1e4ffcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x1e5000: 0x14600005
    ctx->pc = 0x1E5000u;
    {
        const bool branch_taken_0x1e5000 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e5000) {
            ctx->pc = 0x1E5018u;
            goto label_1e5018;
        }
    }
    ctx->pc = 0x1E5008u;
    // 0x1e5008: 0x8cc50008
    ctx->pc = 0x1e5008u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e500c: 0x8cc6000c
    ctx->pc = 0x1e500cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e5010: 0xc086bcc
    ctx->pc = 0x1E5010u;
    SET_GPR_U32(ctx, 31, 0x1E5018u);
    ctx->pc = 0x1E5014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294938016));
    ctx->pc = 0x21AF30u;
    {
        const uint32_t __entryPc = ctx->pc;
        start__14VibrationClassFii_0x21af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5018u; }
        else if (ctx->pc != 0x1E5018u) { ctx->pc = 0x1E5018u; }
    }
    if (ctx->pc != 0x1E5018u) { return; }
    ctx->pc = 0x1E5018u;
label_1e5018:
    // 0x1e5018: 0x8e03000c
    ctx->pc = 0x1e5018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e501c: 0x24630010
    ctx->pc = 0x1e501cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e5020: 0x10000011
    ctx->pc = 0x1E5020u;
    {
        const bool branch_taken_0x1e5020 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5024u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x1e5020) {
            ctx->pc = 0x1E5068u;
            goto label_1e5068;
        }
    }
    ctx->pc = 0x1E5028u;
label_1e5028:
    // 0x1e5028: 0xc086bd4
    ctx->pc = 0x1E5028u;
    SET_GPR_U32(ctx, 31, 0x1E5030u);
    ctx->pc = 0x21AF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        stop__14VibrationClassFv_0x21af50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5030u; }
        else if (ctx->pc != 0x1E5030u) { ctx->pc = 0x1E5030u; }
    }
    if (ctx->pc != 0x1E5030u) { return; }
    ctx->pc = 0x1E5030u;
    // 0x1e5030: 0x8e03000c
    ctx->pc = 0x1e5030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e5034: 0x24630008
    ctx->pc = 0x1e5034u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e5038: 0x1000000b
    ctx->pc = 0x1E5038u;
    {
        const bool branch_taken_0x1e5038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E503Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x1e5038) {
            ctx->pc = 0x1E5068u;
            goto label_1e5068;
        }
    }
    ctx->pc = 0x1E5040u;
label_1e5040:
    // 0x1e5040: 0x8f838ce8
    ctx->pc = 0x1e5040u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x1e5044: 0x14600005
    ctx->pc = 0x1E5044u;
    {
        const bool branch_taken_0x1e5044 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e5044) {
            ctx->pc = 0x1E505Cu;
            goto label_1e505c;
        }
    }
    ctx->pc = 0x1E504Cu;
    // 0x1e504c: 0x8cc40008
    ctx->pc = 0x1e504cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e5050: 0x8cc5000c
    ctx->pc = 0x1e5050u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e5054: 0xc086c24
    ctx->pc = 0x1E5054u;
    SET_GPR_U32(ctx, 31, 0x1E505Cu);
    ctx->pc = 0x1E5058u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    ctx->pc = 0x21B090u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_PadActTwin__Fiii_0x21b090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E505Cu; }
        else if (ctx->pc != 0x1E505Cu) { ctx->pc = 0x1E505Cu; }
    }
    if (ctx->pc != 0x1E505Cu) { return; }
    ctx->pc = 0x1E505Cu;
label_1e505c:
    // 0x1e505c: 0x8e03000c
    ctx->pc = 0x1e505cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e5060: 0x24630014
    ctx->pc = 0x1e5060u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20));
    // 0x1e5064: 0xae03000c
    ctx->pc = 0x1e5064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e5068:
    // 0x1e5068: 0x7bbf0010
    ctx->pc = 0x1e5068u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e506c:
    // 0x1e506c: 0x7bb00000
    ctx->pc = 0x1e506cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5070: 0x3e00008
    ctx->pc = 0x1E5070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5074u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4FFCu: goto label_1e4ffc;
            case 0x1E5018u: goto label_1e5018;
            case 0x1E5028u: goto label_1e5028;
            case 0x1E5040u: goto label_1e5040;
            case 0x1E505Cu: goto label_1e505c;
            case 0x1E5068u: goto label_1e5068;
            case 0x1E506Cu: goto label_1e506c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5078u;
}
