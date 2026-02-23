#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBodyNo_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fcf10 - 0x1fd0d0
void entryBodyNo_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ_0x1fcf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBodyNo_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fcf10u;

    // 0x1fcf10: 0x27bdffd0
    ctx->pc = 0x1fcf10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fcf14: 0x7fbf0020
    ctx->pc = 0x1fcf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fcf18: 0x7fb10010
    ctx->pc = 0x1fcf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fcf1c: 0x7fb00000
    ctx->pc = 0x1fcf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fcf20: 0x70a08628
    ctx->pc = 0x1fcf20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fcf24: 0x3c010052
    ctx->pc = 0x1fcf24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcf28: 0x8c2594a4
    ctx->pc = 0x1fcf28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939812)));
    // 0x1fcf2c: 0x3c020027
    ctx->pc = 0x1fcf2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fcf30: 0x2443cfb0
    ctx->pc = 0x1fcf30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294954928));
    // 0x1fcf34: 0x3c020052
    ctx->pc = 0x1fcf34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fcf38: 0x244294d0
    ctx->pc = 0x1fcf38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fcf3c: 0x8ca50000
    ctx->pc = 0x1fcf3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fcf40: 0x3c010052
    ctx->pc = 0x1fcf40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcf44: 0xac2594b0
    ctx->pc = 0x1fcf44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939824), GPR_U32(ctx, 5));
    // 0x1fcf48: 0x3c010052
    ctx->pc = 0x1fcf48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcf4c: 0x8c2594b0
    ctx->pc = 0x1fcf4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fcf50: 0x52880
    ctx->pc = 0x1fcf50u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fcf54: 0x651821
    ctx->pc = 0x1fcf54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fcf58: 0x8c630000
    ctx->pc = 0x1fcf58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcf5c: 0x3c010052
    ctx->pc = 0x1fcf5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcf60: 0xac2394b4
    ctx->pc = 0x1fcf60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939828), GPR_U32(ctx, 3));
    // 0x1fcf64: 0x3c010052
    ctx->pc = 0x1fcf64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcf68: 0x8c2694b0
    ctx->pc = 0x1fcf68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fcf6c: 0x462821
    ctx->pc = 0x1fcf6cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fcf70: 0x80a30000
    ctx->pc = 0x1fcf70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fcf74: 0x14600035
    ctx->pc = 0x1FCF74u;
    {
        const bool branch_taken_0x1fcf74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FCF78u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fcf74) {
            ctx->pc = 0x1FD04Cu;
            goto label_1fd04c;
        }
    }
    ctx->pc = 0x1FCF7Cu;
    // 0x1fcf7c: 0x2402ffff
    ctx->pc = 0x1fcf7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcf80: 0xa0a20000
    ctx->pc = 0x1fcf80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fcf84: 0x8f838cf8
    ctx->pc = 0x1fcf84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x1fcf88: 0x3c010052
    ctx->pc = 0x1fcf88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcf8c: 0x3c020027
    ctx->pc = 0x1fcf8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fcf90: 0x2442ddf0
    ctx->pc = 0x1fcf90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958576));
    // 0x1fcf94: 0xac2394c4
    ctx->pc = 0x1fcf94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939844), GPR_U32(ctx, 3));
    // 0x1fcf98: 0x3c010052
    ctx->pc = 0x1fcf98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcf9c: 0x8c2494c8
    ctx->pc = 0x1fcf9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939848)));
    // 0x1fcfa0: 0x3c010052
    ctx->pc = 0x1fcfa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcfa4: 0x8c2394b0
    ctx->pc = 0x1fcfa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fcfa8: 0x31880
    ctx->pc = 0x1fcfa8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcfac: 0x431021
    ctx->pc = 0x1fcfacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcfb0: 0x8c420000
    ctx->pc = 0x1fcfb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcfb4: 0x50820023
    ctx->pc = 0x1FCFB4u;
    {
        const bool branch_taken_0x1fcfb4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fcfb4) {
            ctx->pc = 0x1FCFB8u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x1FD044u;
            goto label_1fd044;
        }
    }
    ctx->pc = 0x1FCFBCu;
    // 0x1fcfbc: 0x3c010052
    ctx->pc = 0x1fcfbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcfc0: 0xac2294c8
    ctx->pc = 0x1fcfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939848), GPR_U32(ctx, 2));
    // 0x1fcfc4: 0x3c010052
    ctx->pc = 0x1fcfc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcfc8: 0xac2094cc
    ctx->pc = 0x1fcfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939852), GPR_U32(ctx, 0));
    // 0x1fcfcc: 0x3c010052
    ctx->pc = 0x1fcfccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcfd0: 0x8c2294cc
    ctx->pc = 0x1fcfd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939852)));
    // 0x1fcfd4: 0x14400011
    ctx->pc = 0x1FCFD4u;
    {
        const bool branch_taken_0x1fcfd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FCFD8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
        if (branch_taken_0x1fcfd4) {
            ctx->pc = 0x1FD01Cu;
            goto label_1fd01c;
        }
    }
    ctx->pc = 0x1FCFDCu;
    // 0x1fcfdc: 0x8c2394c8
    ctx->pc = 0x1fcfdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939848)));
    // 0x1fcfe0: 0x3c020027
    ctx->pc = 0x1fcfe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fcfe4: 0x2442b1d0
    ctx->pc = 0x1fcfe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947280));
    // 0x1fcfe8: 0x31840
    ctx->pc = 0x1fcfe8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fcfec: 0x431021
    ctx->pc = 0x1fcfecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcff0: 0x84450000
    ctx->pc = 0x1fcff0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcff4: 0xc05adc4
    ctx->pc = 0x1FCFF4u;
    SET_GPR_U32(ctx, 31, 0x1FCFFCu);
    ctx->pc = 0x1FCFF8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_OpenAfs_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFFCu; }
        else if (ctx->pc != 0x1FCFFCu) { ctx->pc = 0x1FCFFCu; }
    }
    if (ctx->pc != 0x1FCFFCu) { return; }
    ctx->pc = 0x1FCFFCu;
    // 0x1fcffc: 0x3c010050
    ctx->pc = 0x1fcffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd000: 0xac220c80
    ctx->pc = 0x1fd000u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3200), GPR_U32(ctx, 2));
    // 0x1fd004: 0x3c010050
    ctx->pc = 0x1fd004u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd008: 0xc05afe2
    ctx->pc = 0x1FD008u;
    SET_GPR_U32(ctx, 31, 0x1FD010u);
    ctx->pc = 0x1FD00Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD010u; }
        else if (ctx->pc != 0x1FD010u) { ctx->pc = 0x1FD010u; }
    }
    if (ctx->pc != 0x1FD010u) { return; }
    ctx->pc = 0x1FD010u;
    // 0x1fd010: 0x3c010052
    ctx->pc = 0x1fd010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd014: 0x10000008
    ctx->pc = 0x1FD014u;
    {
        const bool branch_taken_0x1fd014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD018u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294939840), GPR_U32(ctx, 2));
        if (branch_taken_0x1fd014) {
            ctx->pc = 0x1FD038u;
            goto label_1fd038;
        }
    }
    ctx->pc = 0x1FD01Cu;
label_1fd01c:
    // 0x1fd01c: 0x8c43000c
    ctx->pc = 0x1fd01cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fd020: 0x4610003
    ctx->pc = 0x1FD020u;
    {
        const bool branch_taken_0x1fd020 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FD024u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        if (branch_taken_0x1fd020) {
            ctx->pc = 0x1FD030u;
            goto label_1fd030;
        }
    }
    ctx->pc = 0x1FD028u;
    // 0x1fd028: 0x246207ff
    ctx->pc = 0x1fd028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1fd02c: 0x212c3
    ctx->pc = 0x1fd02cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1fd030:
    // 0x1fd030: 0x3c010052
    ctx->pc = 0x1fd030u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd034: 0xac2294c0
    ctx->pc = 0x1fd034u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939840), GPR_U32(ctx, 2));
label_1fd038:
    // 0x1fd038: 0x24020002
    ctx->pc = 0x1fd038u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd03c: 0x1000001e
    ctx->pc = 0x1FD03Cu;
    {
        const bool branch_taken_0x1fd03c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD040u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1fd03c) {
            ctx->pc = 0x1FD0B8u;
            goto label_1fd0b8;
        }
    }
    ctx->pc = 0x1FD044u;
label_1fd044:
    // 0x1fd044: 0x1000001c
    ctx->pc = 0x1FD044u;
    {
        const bool branch_taken_0x1fd044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD048u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1fd044) {
            ctx->pc = 0x1FD0B8u;
            goto label_1fd0b8;
        }
    }
    ctx->pc = 0x1FD04Cu;
label_1fd04c:
    // 0x1fd04c: 0x24020001
    ctx->pc = 0x1fd04cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd050: 0x54620015
    ctx->pc = 0x1FD050u;
    {
        const bool branch_taken_0x1fd050 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1fd050) {
            ctx->pc = 0x1FD054u;
            SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1FD0A8u;
            goto label_1fd0a8;
        }
    }
    ctx->pc = 0x1FD058u;
    // 0x1fd058: 0x3c020051
    ctx->pc = 0x1fd058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fd05c: 0x61880
    ctx->pc = 0x1fd05cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fd060: 0x244225f0
    ctx->pc = 0x1fd060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9712));
    // 0x1fd064: 0x431021
    ctx->pc = 0x1fd064u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd068: 0x8c450000
    ctx->pc = 0x1fd068u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd06c: 0x3c010052
    ctx->pc = 0x1fd06cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd070: 0x2403ffc0
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fd074: 0x8c2294a4
    ctx->pc = 0x1fd074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939812)));
    // 0x1fd078: 0x24a5003f
    ctx->pc = 0x1fd078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 63));
    // 0x1fd07c: 0x8c460008
    ctx->pc = 0x1fd07cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fd080: 0xc07fc28
    ctx->pc = 0x1FD080u;
    SET_GPR_U32(ctx, 31, 0x1FD088u);
    ctx->pc = 0x1FD084u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->pc = 0x1FF0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        weight100_cut__15OneSkinMgrClassFPA0_ii_0x1ff0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD088u; }
        else if (ctx->pc != 0x1FD088u) { ctx->pc = 0x1FD088u; }
    }
    if (ctx->pc != 0x1FD088u) { return; }
    ctx->pc = 0x1FD088u;
    // 0x1fd088: 0x3c010052
    ctx->pc = 0x1fd088u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd08c: 0x8c2394b0
    ctx->pc = 0x1fd08cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd090: 0x3c020052
    ctx->pc = 0x1fd090u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fd094: 0x244294d0
    ctx->pc = 0x1fd094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fd098: 0x24040002
    ctx->pc = 0x1fd098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd09c: 0x431021
    ctx->pc = 0x1fd09cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd0a0: 0xa0440000
    ctx->pc = 0x1fd0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fd0a4: 0x72202628
    ctx->pc = 0x1fd0a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1fd0a8:
    // 0x1fd0a8: 0xc07f534
    ctx->pc = 0x1FD0A8u;
    SET_GPR_U32(ctx, 31, 0x1FD0B0u);
    ctx->pc = 0x1FD0ACu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FD4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo_Next__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD0B0u; }
        else if (ctx->pc != 0x1FD0B0u) { ctx->pc = 0x1FD0B0u; }
    }
    if (ctx->pc != 0x1FD0B0u) { return; }
    ctx->pc = 0x1FD0B0u;
    // 0x1fd0b0: 0x10000003
    ctx->pc = 0x1FD0B0u;
    {
        const bool branch_taken_0x1fd0b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD0B4u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1fd0b0) {
            ctx->pc = 0x1FD0C0u;
            goto label_1fd0c0;
        }
    }
    ctx->pc = 0x1FD0B8u;
label_1fd0b8:
    // 0x1fd0b8: 0x24020001
    ctx->pc = 0x1fd0b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd0bc: 0x7bbf0020
    ctx->pc = 0x1fd0bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd0c0:
    // 0x1fd0c0: 0x7bb10010
    ctx->pc = 0x1fd0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd0c4: 0x7bb00000
    ctx->pc = 0x1fd0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd0c8: 0x3e00008
    ctx->pc = 0x1FD0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD0CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD01Cu: goto label_1fd01c;
            case 0x1FD030u: goto label_1fd030;
            case 0x1FD038u: goto label_1fd038;
            case 0x1FD044u: goto label_1fd044;
            case 0x1FD04Cu: goto label_1fd04c;
            case 0x1FD0A8u: goto label_1fd0a8;
            case 0x1FD0B8u: goto label_1fd0b8;
            case 0x1FD0C0u: goto label_1fd0c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD0D0u;
}
