#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndInit
// Address: 0x1acf00 - 0x1ad034
void nlsndInit_0x1acf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndInit");


    ctx->pc = 0x1acf00u;

    // 0x1acf00: 0x27bdffe0
    ctx->pc = 0x1acf00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1acf04: 0x24063fff
    ctx->pc = 0x1acf04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1acf08: 0x7fbf0010
    ctx->pc = 0x1acf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1acf0c: 0x70002628
    ctx->pc = 0x1acf0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf10: 0x70002e28
    ctx->pc = 0x1acf10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf14: 0x70003e28
    ctx->pc = 0x1acf14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf18: 0x70c04628
    ctx->pc = 0x1acf18u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1acf1c: 0xc06b410
    ctx->pc = 0x1ACF1Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF24u);
    ctx->pc = 0x1ACF20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1AD040u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetMasterVolume_0x1ad040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF24u; }
        else if (ctx->pc != 0x1ACF24u) { ctx->pc = 0x1ACF24u; }
    }
    if (ctx->pc != 0x1ACF24u) { return; }
    ctx->pc = 0x1ACF24u;
    // 0x1acf24: 0x24063fff
    ctx->pc = 0x1acf24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1acf28: 0x24040001
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acf2c: 0x70002e28
    ctx->pc = 0x1acf2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf30: 0x70003e28
    ctx->pc = 0x1acf30u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf34: 0xc06b410
    ctx->pc = 0x1ACF34u;
    SET_GPR_U32(ctx, 31, 0x1ACF3Cu);
    ctx->pc = 0x1ACF38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD040u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetMasterVolume_0x1ad040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF3Cu; }
        else if (ctx->pc != 0x1ACF3Cu) { ctx->pc = 0x1ACF3Cu; }
    }
    if (ctx->pc != 0x1ACF3Cu) { return; }
    ctx->pc = 0x1ACF3Cu;
    // 0x1acf3c: 0x70008628
    ctx->pc = 0x1acf3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf40: 0x70002628
    ctx->pc = 0x1acf40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1acf44:
    // 0x1acf44: 0x72002e28
    ctx->pc = 0x1acf44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1acf48: 0x70003628
    ctx->pc = 0x1acf48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf4c: 0x70003e28
    ctx->pc = 0x1acf4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf50: 0x70004628
    ctx->pc = 0x1acf50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf54: 0xc06b444
    ctx->pc = 0x1ACF54u;
    SET_GPR_U32(ctx, 31, 0x1ACF5Cu);
    ctx->pc = 0x1ACF58u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD110u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetVoiceVolume_0x1ad110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF5Cu; }
        else if (ctx->pc != 0x1ACF5Cu) { ctx->pc = 0x1ACF5Cu; }
    }
    if (ctx->pc != 0x1ACF5Cu) { return; }
    ctx->pc = 0x1ACF5Cu;
    // 0x1acf5c: 0x24040001
    ctx->pc = 0x1acf5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acf60: 0x72002e28
    ctx->pc = 0x1acf60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1acf64: 0x70003628
    ctx->pc = 0x1acf64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf68: 0x70003e28
    ctx->pc = 0x1acf68u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf6c: 0x70004628
    ctx->pc = 0x1acf6cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf70: 0xc06b444
    ctx->pc = 0x1ACF70u;
    SET_GPR_U32(ctx, 31, 0x1ACF78u);
    ctx->pc = 0x1ACF74u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD110u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetVoiceVolume_0x1ad110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF78u; }
        else if (ctx->pc != 0x1ACF78u) { ctx->pc = 0x1ACF78u; }
    }
    if (ctx->pc != 0x1ACF78u) { return; }
    ctx->pc = 0x1ACF78u;
    // 0x1acf78: 0x26100001
    ctx->pc = 0x1acf78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1acf7c: 0x2a020018
    ctx->pc = 0x1acf7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 24));
    // 0x1acf80: 0x1440fff0
    ctx->pc = 0x1ACF80u;
    {
        const bool branch_taken_0x1acf80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ACF84u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1acf80) {
            ctx->pc = 0x1ACF44u;
            goto label_1acf44;
        }
    }
    ctx->pc = 0x1ACF88u;
    // 0x1acf88: 0xc06b478
    ctx->pc = 0x1ACF88u;
    SET_GPR_U32(ctx, 31, 0x1ACF90u);
    ctx->pc = 0x1ACF8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AD1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetStereoMode_0x1ad1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACF90u; }
        else if (ctx->pc != 0x1ACF90u) { ctx->pc = 0x1ACF90u; }
    }
    if (ctx->pc != 0x1ACF90u) { return; }
    ctx->pc = 0x1ACF90u;
    // 0x1acf90: 0x3c030030
    ctx->pc = 0x1acf90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1acf94: 0x70002e28
    ctx->pc = 0x1acf94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acf98: 0x24665a80
    ctx->pc = 0x1acf98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 23168));
    // 0x1acf9c: 0x2404ffff
    ctx->pc = 0x1acf9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1acfa0:
    // 0x1acfa0: 0xa0c40000
    ctx->pc = 0x1acfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acfa4: 0xa0c40001
    ctx->pc = 0x1acfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acfa8: 0xa0c40002
    ctx->pc = 0x1acfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acfac: 0xa0c40003
    ctx->pc = 0x1acfacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acfb0: 0xa0c40004
    ctx->pc = 0x1acfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acfb4: 0xa0c40005
    ctx->pc = 0x1acfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acfb8: 0xa0c40006
    ctx->pc = 0x1acfb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acfbc: 0x24a50008
    ctx->pc = 0x1acfbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1acfc0: 0xa0c40007
    ctx->pc = 0x1acfc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x1acfc4: 0x28a30030
    ctx->pc = 0x1acfc4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 48));
    // 0x1acfc8: 0x1460fff5
    ctx->pc = 0x1ACFC8u;
    {
        const bool branch_taken_0x1acfc8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ACFCCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1acfc8) {
            ctx->pc = 0x1ACFA0u;
            goto label_1acfa0;
        }
    }
    ctx->pc = 0x1ACFD0u;
    // 0x1acfd0: 0x3c030030
    ctx->pc = 0x1acfd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1acfd4: 0x70003628
    ctx->pc = 0x1acfd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acfd8: 0x24655ab0
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 23216));
    // 0x1acfdc: 0x2404ffff
    ctx->pc = 0x1acfdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1acfe0:
    // 0x1acfe0: 0xaca40000
    ctx->pc = 0x1acfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1acfe4: 0xaca40004
    ctx->pc = 0x1acfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1acfe8: 0xaca40008
    ctx->pc = 0x1acfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1acfec: 0xaca4000c
    ctx->pc = 0x1acfecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1acff0: 0xaca40010
    ctx->pc = 0x1acff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x1acff4: 0xaca40014
    ctx->pc = 0x1acff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x1acff8: 0xaca40018
    ctx->pc = 0x1acff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x1acffc: 0x24c60008
    ctx->pc = 0x1acffcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1ad000: 0xaca4001c
    ctx->pc = 0x1ad000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x1ad004: 0x28c30010
    ctx->pc = 0x1ad004u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 16));
    // 0x1ad008: 0x1460fff5
    ctx->pc = 0x1AD008u;
    {
        const bool branch_taken_0x1ad008 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD00Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x1ad008) {
            ctx->pc = 0x1ACFE0u;
            goto label_1acfe0;
        }
    }
    ctx->pc = 0x1AD010u;
    // 0x1ad010: 0x24030001
    ctx->pc = 0x1ad010u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad014: 0xaf808abc
    ctx->pc = 0x1ad014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937276), GPR_U32(ctx, 0));
    // 0x1ad018: 0xaf808ab8
    ctx->pc = 0x1ad018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 0));
    // 0x1ad01c: 0xaf808ab4
    ctx->pc = 0x1ad01cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937268), GPR_U32(ctx, 0));
    // 0x1ad020: 0xa3838aac
    ctx->pc = 0x1ad020u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937260), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad024: 0x7bbf0010
    ctx->pc = 0x1ad024u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad028: 0x7bb00000
    ctx->pc = 0x1ad028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad02c: 0x3e00008
    ctx->pc = 0x1AD02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD030u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACF44u: goto label_1acf44;
            case 0x1ACFA0u: goto label_1acfa0;
            case 0x1ACFE0u: goto label_1acfe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD034u;
}
