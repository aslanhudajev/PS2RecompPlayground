#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBank_STAT_04__11TexMgrClassFP11DATAENT_REQ
// Address: 0x21acb0 - 0x21add8
void entryBank_STAT_04__11TexMgrClassFP11DATAENT_REQ_0x21acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBank_STAT_04__11TexMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x21acb0u;

    // 0x21acb0: 0x27bdffe0
    ctx->pc = 0x21acb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21acb4: 0x7fbf0010
    ctx->pc = 0x21acb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x21acb8: 0x7fb00000
    ctx->pc = 0x21acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21acbc: 0x8ca30008
    ctx->pc = 0x21acbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21acc0: 0x3c020092
    ctx->pc = 0x21acc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
    // 0x21acc4: 0x24424d00
    ctx->pc = 0x21acc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19712));
    // 0x21acc8: 0x3c0101fb
    ctx->pc = 0x21acc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x21accc: 0x3287c
    ctx->pc = 0x21acccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 1));
    // 0x21acd0: 0x5287e
    ctx->pc = 0x21acd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 1));
    // 0x21acd4: 0x518c0
    ctx->pc = 0x21acd4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x21acd8: 0x651823
    ctx->pc = 0x21acd8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21acdc: 0x31880
    ctx->pc = 0x21acdcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ace0: 0x438021
    ctx->pc = 0x21ace0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ace4: 0x51040
    ctx->pc = 0x21ace4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x21ace8: 0x410821
    ctx->pc = 0x21ace8u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x21acec: 0x84221c28
    ctx->pc = 0x21acecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 7208)));
    // 0x21acf0: 0x30420001
    ctx->pc = 0x21acf0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x21acf4: 0x14400006
    ctx->pc = 0x21ACF4u;
    {
        const bool branch_taken_0x21acf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21ACF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
        if (branch_taken_0x21acf4) {
            ctx->pc = 0x21AD10u;
            goto label_21ad10;
        }
    }
    ctx->pc = 0x21ACFCu;
    // 0x21acfc: 0x2442f560
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964576));
    // 0x21ad00: 0x451021
    ctx->pc = 0x21ad00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21ad04: 0x80420000
    ctx->pc = 0x21ad04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ad08: 0x10400014
    ctx->pc = 0x21AD08u;
    {
        const bool branch_taken_0x21ad08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ad08) {
            ctx->pc = 0x21AD5Cu;
            goto label_21ad5c;
        }
    }
    ctx->pc = 0x21AD10u;
label_21ad10:
    // 0x21ad10: 0x8e030008
    ctx->pc = 0x21ad10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21ad14: 0x8c8603b0
    ctx->pc = 0x21ad14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 944)));
    // 0x21ad18: 0x51080
    ctx->pc = 0x21ad18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x21ad1c: 0x3c0101fb
    ctx->pc = 0x21ad1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x21ad20: 0x410821
    ctx->pc = 0x21ad20u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x21ad24: 0x8c22e064
    ctx->pc = 0x21ad24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294959204)));
    // 0x21ad28: 0x8e050004
    ctx->pc = 0x21ad28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21ad2c: 0x8c640008
    ctx->pc = 0x21ad2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21ad30: 0xc06aa30
    ctx->pc = 0x21AD30u;
    SET_GPR_U32(ctx, 31, 0x21AD38u);
    ctx->pc = 0x21AD34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 32));
    ctx->pc = 0x1AA8C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLoadTextureOndemand_0x1aa8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD38u; }
        else if (ctx->pc != 0x21AD38u) { ctx->pc = 0x21AD38u; }
    }
    if (ctx->pc != 0x21AD38u) { return; }
    ctx->pc = 0x21AD38u;
    // 0x21ad38: 0x8e040018
    ctx->pc = 0x21ad38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21ad3c: 0x2403fffe
    ctx->pc = 0x21ad3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x21ad40: 0x2402ffff
    ctx->pc = 0x21ad40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ad44: 0x831824
    ctx->pc = 0x21ad44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21ad48: 0xae030018
    ctx->pc = 0x21ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x21ad4c: 0x8e030018
    ctx->pc = 0x21ad4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21ad50: 0x34630001
    ctx->pc = 0x21ad50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x21ad54: 0x1000001c
    ctx->pc = 0x21AD54u;
    {
        const bool branch_taken_0x21ad54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21AD58u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        if (branch_taken_0x21ad54) {
            ctx->pc = 0x21ADC8u;
            goto label_21adc8;
        }
    }
    ctx->pc = 0x21AD5Cu;
label_21ad5c:
    // 0x21ad5c: 0x8e030008
    ctx->pc = 0x21ad5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21ad60: 0x51080
    ctx->pc = 0x21ad60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x21ad64: 0x3c0101fb
    ctx->pc = 0x21ad64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x21ad68: 0x410821
    ctx->pc = 0x21ad68u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x21ad6c: 0x8c22e064
    ctx->pc = 0x21ad6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294959204)));
    // 0x21ad70: 0x8e050004
    ctx->pc = 0x21ad70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21ad74: 0x8e070010
    ctx->pc = 0x21ad74u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21ad78: 0x8c640008
    ctx->pc = 0x21ad78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21ad7c: 0x26080010
    ctx->pc = 0x21ad7cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 16));
    // 0x21ad80: 0xc06a688
    ctx->pc = 0x21AD80u;
    SET_GPR_U32(ctx, 31, 0x21AD88u);
    ctx->pc = 0x21AD84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 32));
    ctx->pc = 0x1A9A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLoadTextureOnce_0x1a9a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD88u; }
        else if (ctx->pc != 0x21AD88u) { ctx->pc = 0x21AD88u; }
    }
    if (ctx->pc != 0x21AD88u) { return; }
    ctx->pc = 0x21AD88u;
    // 0x21ad88: 0x8e020010
    ctx->pc = 0x21ad88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21ad8c: 0x1440000e
    ctx->pc = 0x21AD8Cu;
    {
        const bool branch_taken_0x21ad8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21AD90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21ad8c) {
            ctx->pc = 0x21ADC8u;
            goto label_21adc8;
        }
    }
    ctx->pc = 0x21AD94u;
    // 0x21ad94: 0xc06a704
    ctx->pc = 0x21AD94u;
    SET_GPR_U32(ctx, 31, 0x21AD9Cu);
    ctx->pc = 0x1A9C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutWaitLoadTextureEnd_0x1a9c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AD9Cu; }
        else if (ctx->pc != 0x21AD9Cu) { ctx->pc = 0x21AD9Cu; }
    }
    if (ctx->pc != 0x21AD9Cu) { return; }
    ctx->pc = 0x21AD9Cu;
    // 0x21ad9c: 0xc0687c0
    ctx->pc = 0x21AD9Cu;
    SET_GPR_U32(ctx, 31, 0x21ADA4u);
    ctx->pc = 0x21ADA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADA4u; }
        else if (ctx->pc != 0x21ADA4u) { ctx->pc = 0x21ADA4u; }
    }
    if (ctx->pc != 0x21ADA4u) { return; }
    ctx->pc = 0x21ADA4u;
    // 0x21ada4: 0xae000000
    ctx->pc = 0x21ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x21ada8: 0xae000004
    ctx->pc = 0x21ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21adac: 0x8e030018
    ctx->pc = 0x21adacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21adb0: 0x2402fffe
    ctx->pc = 0x21adb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x21adb4: 0x70002628
    ctx->pc = 0x21adb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21adb8: 0x621024
    ctx->pc = 0x21adb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21adbc: 0xc0552d8
    ctx->pc = 0x21ADBCu;
    SET_GPR_U32(ctx, 31, 0x21ADC4u);
    ctx->pc = 0x21ADC0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ADC4u; }
        else if (ctx->pc != 0x21ADC4u) { ctx->pc = 0x21ADC4u; }
    }
    if (ctx->pc != 0x21ADC4u) { return; }
    ctx->pc = 0x21ADC4u;
    // 0x21adc4: 0x2402ffff
    ctx->pc = 0x21adc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_21adc8:
    // 0x21adc8: 0x7bbf0010
    ctx->pc = 0x21adc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21adcc: 0x7bb00000
    ctx->pc = 0x21adccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21add0: 0x3e00008
    ctx->pc = 0x21ADD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ADD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AD10u: goto label_21ad10;
            case 0x21AD5Cu: goto label_21ad5c;
            case 0x21ADC8u: goto label_21adc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21ADD8u;
}
