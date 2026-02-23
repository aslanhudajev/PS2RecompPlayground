#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: set_adjustX__FP11Gun_Act_tagii
// Address: 0x1ebeb0 - 0x1ebf68
void set_adjustX__FP11Gun_Act_tagii_0x1ebeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("set_adjustX__FP11Gun_Act_tagii");


    ctx->pc = 0x1ebeb0u;

    // 0x1ebeb0: 0x27bdfff0
    ctx->pc = 0x1ebeb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ebeb4: 0x7fbf0000
    ctx->pc = 0x1ebeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ebeb8: 0x8c870000
    ctx->pc = 0x1ebeb8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ebebc: 0x8f868de4
    ctx->pc = 0x1ebebcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938084)));
    // 0x1ebec0: 0x8f858de8
    ctx->pc = 0x1ebec0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ebec4: 0x70801e28
    ctx->pc = 0x1ebec4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ebec8: 0x3c020050
    ctx->pc = 0x1ebec8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ebecc: 0x24440db0
    ctx->pc = 0x1ebeccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 3504));
    // 0x1ebed0: 0x73940
    ctx->pc = 0x1ebed0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 5));
    // 0x1ebed4: 0x874821
    ctx->pc = 0x1ebed4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ebed8: 0x24c7fe5a
    ctx->pc = 0x1ebed8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 4294966874));
    // 0x1ebedc: 0x24a6ff7a
    ctx->pc = 0x1ebedcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4294967162));
    // 0x1ebee0: 0x62900
    ctx->pc = 0x1ebee0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1ebee4: 0xa63021
    ctx->pc = 0x1ebee4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ebee8: 0x3c047878
    ctx->pc = 0x1ebee8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)30840 << 16));
    // 0x1ebeec: 0x628c0
    ctx->pc = 0x1ebeecu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x1ebef0: 0xa62823
    ctx->pc = 0x1ebef0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ebef4: 0x34847879
    ctx->pc = 0x1ebef4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 30841));
    // 0x1ebef8: 0x8d280000
    ctx->pc = 0x1ebef8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ebefc: 0x850018
    ctx->pc = 0x1ebefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1ebf00: 0x537c2
    ctx->pc = 0x1ebf00u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 5), 31));
    // 0x1ebf04: 0x70001628
    ctx->pc = 0x1ebf04u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ebf08: 0x2810
    ctx->pc = 0x1ebf08u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x1ebf0c: 0x1074021
    ctx->pc = 0x1ebf0cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1ebf10: 0x2904ffc2
    ctx->pc = 0x1ebf10u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), 4294967234));
    // 0x1ebf14: 0x52943
    ctx->pc = 0x1ebf14u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1ebf18: 0x14800008
    ctx->pc = 0x1EBF18u;
    {
        const bool branch_taken_0x1ebf18 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EBF1Cu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        if (branch_taken_0x1ebf18) {
            ctx->pc = 0x1EBF3Cu;
            goto label_1ebf3c;
        }
    }
    ctx->pc = 0x1EBF20u;
    // 0x1ebf20: 0x29010053
    ctx->pc = 0x1ebf20u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 8), 83));
    // 0x1ebf24: 0x10200005
    ctx->pc = 0x1EBF24u;
    {
        const bool branch_taken_0x1ebf24 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBF28u;
        SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 4294967284));
        if (branch_taken_0x1ebf24) {
            ctx->pc = 0x1EBF3Cu;
            goto label_1ebf3c;
        }
    }
    ctx->pc = 0x1EBF2Cu;
    // 0x1ebf2c: 0x14800003
    ctx->pc = 0x1EBF2Cu;
    {
        const bool branch_taken_0x1ebf2c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EBF30u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 133));
        if (branch_taken_0x1ebf2c) {
            ctx->pc = 0x1EBF3Cu;
            goto label_1ebf3c;
        }
    }
    ctx->pc = 0x1EBF34u;
    // 0x1ebf34: 0x14200004
    ctx->pc = 0x1EBF34u;
    {
        const bool branch_taken_0x1ebf34 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ebf34) {
            ctx->pc = 0x1EBF48u;
            goto label_1ebf48;
        }
    }
    ctx->pc = 0x1EBF3Cu;
label_1ebf3c:
    // 0x1ebf3c: 0x8f848d24
    ctx->pc = 0x1ebf3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1ebf40: 0x14800006
    ctx->pc = 0x1EBF40u;
    {
        const bool branch_taken_0x1ebf40 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ebf40) {
            ctx->pc = 0x1EBF5Cu;
            goto label_1ebf5c;
        }
    }
    ctx->pc = 0x1EBF48u;
label_1ebf48:
    // 0x1ebf48: 0xad280000
    ctx->pc = 0x1ebf48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x1ebf4c: 0x8c650000
    ctx->pc = 0x1ebf4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ebf50: 0xc07b660
    ctx->pc = 0x1EBF50u;
    SET_GPR_U32(ctx, 31, 0x1EBF58u);
    ctx->pc = 0x1EBF54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    ctx->pc = 0x1ED980u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_ctrl_data__Fii_0x1ed980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBF58u; }
        else if (ctx->pc != 0x1EBF58u) { ctx->pc = 0x1EBF58u; }
    }
    if (ctx->pc != 0x1EBF58u) { return; }
    ctx->pc = 0x1EBF58u;
    // 0x1ebf58: 0x24020001
    ctx->pc = 0x1ebf58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1ebf5c:
    // 0x1ebf5c: 0x7bbf0000
    ctx->pc = 0x1ebf5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebf60: 0x3e00008
    ctx->pc = 0x1EBF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBF64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBF3Cu: goto label_1ebf3c;
            case 0x1EBF48u: goto label_1ebf48;
            case 0x1EBF5Cu: goto label_1ebf5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EBF68u;
}
