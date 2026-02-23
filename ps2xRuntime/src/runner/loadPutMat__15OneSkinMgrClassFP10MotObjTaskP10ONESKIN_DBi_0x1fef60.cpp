#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loadPutMat__15OneSkinMgrClassFP10MotObjTaskP10ONESKIN_DBi
// Address: 0x1fef60 - 0x1ff098
void loadPutMat__15OneSkinMgrClassFP10MotObjTaskP10ONESKIN_DBi_0x1fef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loadPutMat__15OneSkinMgrClassFP10MotObjTaskP10ONESKIN_DBi");


    ctx->pc = 0x1fef60u;

    // 0x1fef60: 0x27bdffb0
    ctx->pc = 0x1fef60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fef64: 0x7fbf0040
    ctx->pc = 0x1fef64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1fef68: 0x7fb30030
    ctx->pc = 0x1fef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fef6c: 0x7fb20020
    ctx->pc = 0x1fef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fef70: 0x7fb10010
    ctx->pc = 0x1fef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fef74: 0x7fb00000
    ctx->pc = 0x1fef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fef78: 0x70c08e28
    ctx->pc = 0x1fef78u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1fef7c: 0x84a6002c
    ctx->pc = 0x1fef7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1fef80: 0x70a09628
    ctx->pc = 0x1fef80u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fef84: 0x3c030051
    ctx->pc = 0x1fef84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1fef88: 0x24632270
    ctx->pc = 0x1fef88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8816));
    // 0x1fef8c: 0x70809e28
    ctx->pc = 0x1fef8cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fef90: 0x62840
    ctx->pc = 0x1fef90u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fef94: 0xa62821
    ctx->pc = 0x1fef94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fef98: 0x52880
    ctx->pc = 0x1fef98u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fef9c: 0x651821
    ctx->pc = 0x1fef9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fefa0: 0xac83000c
    ctx->pc = 0x1fefa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1fefa4: 0x8c84000c
    ctx->pc = 0x1fefa4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fefa8: 0x8c830000
    ctx->pc = 0x1fefa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fefac: 0x10600033
    ctx->pc = 0x1FEFACu;
    {
        const bool branch_taken_0x1fefac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FEFB0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fefac) {
            ctx->pc = 0x1FF07Cu;
            goto label_1ff07c;
        }
    }
    ctx->pc = 0x1FEFB4u;
    // 0x1fefb4: 0x8c820008
    ctx->pc = 0x1fefb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fefb8: 0x3c0101f3
    ctx->pc = 0x1fefb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
    // 0x1fefbc: 0xae620004
    ctx->pc = 0x1fefbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1fefc0: 0x8643002c
    ctx->pc = 0x1fefc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1fefc4: 0x8e62000c
    ctx->pc = 0x1fefc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1fefc8: 0x31840
    ctx->pc = 0x1fefc8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fefcc: 0x610821
    ctx->pc = 0x1fefccu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1fefd0: 0x84239860
    ctx->pc = 0x1fefd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294940768)));
    // 0x1fefd4: 0x8c420008
    ctx->pc = 0x1fefd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fefd8: 0x31980
    ctx->pc = 0x1fefd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1fefdc: 0x431021
    ctx->pc = 0x1fefdcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fefe0: 0xae620008
    ctx->pc = 0x1fefe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1fefe4: 0x8e220008
    ctx->pc = 0x1fefe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fefe8: 0xae620010
    ctx->pc = 0x1fefe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x1fefec: 0x8e630010
    ctx->pc = 0x1fefecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1feff0: 0x31100
    ctx->pc = 0x1feff0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1feff4: 0x431023
    ctx->pc = 0x1feff4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feff8: 0x21100
    ctx->pc = 0x1feff8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1feffc: 0x2421021
    ctx->pc = 0x1feffcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ff000: 0xc06c038
    ctx->pc = 0x1FF000u;
    SET_GPR_U32(ctx, 31, 0x1FF008u);
    ctx->pc = 0x1FF004u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 160));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF008u; }
        else if (ctx->pc != 0x1FF008u) { ctx->pc = 0x1FF008u; }
    }
    if (ctx->pc != 0x1FF008u) { return; }
    ctx->pc = 0x1FF008u;
    // 0x1ff008: 0x8e630010
    ctx->pc = 0x1ff008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1ff00c: 0x8e620008
    ctx->pc = 0x1ff00cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ff010: 0x31980
    ctx->pc = 0x1ff010u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1ff014: 0xc06c04e
    ctx->pc = 0x1FF014u;
    SET_GPR_U32(ctx, 31, 0x1FF01Cu);
    ctx->pc = 0x1FF018u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF01Cu; }
        else if (ctx->pc != 0x1FF01Cu) { ctx->pc = 0x1FF01Cu; }
    }
    if (ctx->pc != 0x1FF01Cu) { return; }
    ctx->pc = 0x1FF01Cu;
    // 0x1ff01c: 0x8e230004
    ctx->pc = 0x1ff01cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ff020: 0x8e620004
    ctx->pc = 0x1ff020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ff024: 0x31980
    ctx->pc = 0x1ff024u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1ff028: 0xc06c04e
    ctx->pc = 0x1FF028u;
    SET_GPR_U32(ctx, 31, 0x1FF030u);
    ctx->pc = 0x1FF02Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF030u; }
        else if (ctx->pc != 0x1FF030u) { ctx->pc = 0x1FF030u; }
    }
    if (ctx->pc != 0x1FF030u) { return; }
    ctx->pc = 0x1FF030u;
    // 0x1ff030: 0x12000012
    ctx->pc = 0x1FF030u;
    {
        const bool branch_taken_0x1ff030 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ff030) {
            ctx->pc = 0x1FF07Cu;
            goto label_1ff07c;
        }
    }
    ctx->pc = 0x1FF038u;
    // 0x1ff038: 0x8e650010
    ctx->pc = 0x1ff038u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1ff03c: 0x3c030052
    ctx->pc = 0x1ff03cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1ff040: 0x246394d0
    ctx->pc = 0x1ff040u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294939856));
    // 0x1ff044: 0x52100
    ctx->pc = 0x1ff044u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ff048: 0x852023
    ctx->pc = 0x1ff048u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ff04c: 0x42100
    ctx->pc = 0x1ff04cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ff050: 0x922021
    ctx->pc = 0x1ff050u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1ff054: 0x8c840070
    ctx->pc = 0x1ff054u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1ff058: 0x641821
    ctx->pc = 0x1ff058u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff05c: 0x80630000
    ctx->pc = 0x1ff05cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff060: 0x18600006
    ctx->pc = 0x1FF060u;
    {
        const bool branch_taken_0x1ff060 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ff060) {
            ctx->pc = 0x1FF07Cu;
            goto label_1ff07c;
        }
    }
    ctx->pc = 0x1FF068u;
    // 0x1ff068: 0x8e270004
    ctx->pc = 0x1ff068u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ff06c: 0x8e650004
    ctx->pc = 0x1ff06cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ff070: 0x8e660008
    ctx->pc = 0x1ff070u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ff074: 0xc080048
    ctx->pc = 0x1FF074u;
    SET_GPR_U32(ctx, 31, 0x1FF07Cu);
    ctx->pc = 0x1FF078u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x200120u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSendOskMat__FiP11tagNLmatrixP11tagNLmatrixiP10MotObjTask_0x200120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF07Cu; }
        else if (ctx->pc != 0x1FF07Cu) { ctx->pc = 0x1FF07Cu; }
    }
    if (ctx->pc != 0x1FF07Cu) { return; }
    ctx->pc = 0x1FF07Cu;
label_1ff07c:
    // 0x1ff07c: 0x7bbf0040
    ctx->pc = 0x1ff07cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff080: 0x7bb30030
    ctx->pc = 0x1ff080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff084: 0x7bb20020
    ctx->pc = 0x1ff084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff088: 0x7bb10010
    ctx->pc = 0x1ff088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff08c: 0x7bb00000
    ctx->pc = 0x1ff08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff090: 0x3e00008
    ctx->pc = 0x1FF090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF094u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF07Cu: goto label_1ff07c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF098u;
}
