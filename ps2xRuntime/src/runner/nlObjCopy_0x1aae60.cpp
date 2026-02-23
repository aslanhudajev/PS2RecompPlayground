#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjCopy
// Address: 0x1aae60 - 0x1aaf20
void nlObjCopy_0x1aae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjCopy");


    ctx->pc = 0x1aae60u;

    // 0x1aae60: 0x27bdffc0
    ctx->pc = 0x1aae60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aae64: 0x7fbf0030
    ctx->pc = 0x1aae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1aae68: 0x7fb20020
    ctx->pc = 0x1aae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aae6c: 0x7fb10010
    ctx->pc = 0x1aae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aae70: 0x7fb00000
    ctx->pc = 0x1aae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aae74: 0x8ca30004
    ctx->pc = 0x1aae74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1aae78: 0x8cb0002c
    ctx->pc = 0x1aae78u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1aae7c: 0x70809628
    ctx->pc = 0x1aae7cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1aae80: 0x3062000f
    ctx->pc = 0x1aae80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
    // 0x1aae84: 0x10400006
    ctx->pc = 0x1AAE84u;
    {
        const bool branch_taken_0x1aae84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAE88u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aae84) {
            ctx->pc = 0x1AAEA0u;
            goto label_1aaea0;
        }
    }
    ctx->pc = 0x1AAE8Cu;
    // 0x1aae8c: 0x3c020026
    ctx->pc = 0x1aae8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1aae90: 0xc05114a
    ctx->pc = 0x1AAE90u;
    SET_GPR_U32(ctx, 31, 0x1AAE98u);
    ctx->pc = 0x1AAE94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964528));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE98u; }
        else if (ctx->pc != 0x1AAE98u) { ctx->pc = 0x1AAE98u; }
    }
    if (ctx->pc != 0x1AAE98u) { return; }
    ctx->pc = 0x1AAE98u;
label_1aae98:
    // 0x1aae98: 0x1000ffff
    ctx->pc = 0x1AAE98u;
    {
        const bool branch_taken_0x1aae98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aae98) {
            ctx->pc = 0x1AAE98u;
            goto label_1aae98;
        }
    }
    ctx->pc = 0x1AAEA0u;
label_1aaea0:
    // 0x1aaea0: 0x4610003
    ctx->pc = 0x1AAEA0u;
    {
        const bool branch_taken_0x1aaea0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AAEA4u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
        if (branch_taken_0x1aaea0) {
            ctx->pc = 0x1AAEB0u;
            goto label_1aaeb0;
        }
    }
    ctx->pc = 0x1AAEA8u;
    // 0x1aaea8: 0x2462000f
    ctx->pc = 0x1aaea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 15));
    // 0x1aaeac: 0x23103
    ctx->pc = 0x1aaeacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1aaeb0:
    // 0x1aaeb0: 0x72402628
    ctx->pc = 0x1aaeb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1aaeb4: 0xc06ac36
    ctx->pc = 0x1AAEB4u;
    SET_GPR_U32(ctx, 31, 0x1AAEBCu);
    ctx->pc = 0x1AAEB8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEBCu; }
        else if (ctx->pc != 0x1AAEBCu) { ctx->pc = 0x1AAEBCu; }
    }
    if (ctx->pc != 0x1AAEBCu) { return; }
    ctx->pc = 0x1AAEBCu;
    // 0x1aaebc: 0x8e23001c
    ctx->pc = 0x1aaebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1aaec0: 0x30630002
    ctx->pc = 0x1aaec0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x1aaec4: 0x10600010
    ctx->pc = 0x1AAEC4u;
    {
        const bool branch_taken_0x1aaec4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAEC8u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aaec4) {
            ctx->pc = 0x1AAF08u;
            goto label_1aaf08;
        }
    }
    ctx->pc = 0x1AAECCu;
    // 0x1aaecc: 0x2512823
    ctx->pc = 0x1aaeccu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1aaed0: 0x26440030
    ctx->pc = 0x1aaed0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 48));
    // 0x1aaed4: 0x1060000c
    ctx->pc = 0x1AAED4u;
    {
        const bool branch_taken_0x1aaed4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAED8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x1aaed4) {
            ctx->pc = 0x1AAF08u;
            goto label_1aaf08;
        }
    }
    ctx->pc = 0x1AAEDCu;
label_1aaedc:
    // 0x1aaedc: 0x8c83000c
    ctx->pc = 0x1aaedcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1aaee0: 0x14600006
    ctx->pc = 0x1AAEE0u;
    {
        const bool branch_taken_0x1aaee0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AAEE4u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aaee0) {
            ctx->pc = 0x1AAEFCu;
            goto label_1aaefc;
        }
    }
    ctx->pc = 0x1AAEE8u;
    // 0x1aaee8: 0x8c830004
    ctx->pc = 0x1aaee8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1aaeec: 0x651821
    ctx->pc = 0x1aaeecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aaef0: 0xac830004
    ctx->pc = 0x1aaef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1aaef4: 0x0
    ctx->pc = 0x1aaef4u;
    // NOP
    // 0x1aaef8: 0x72001e28
    ctx->pc = 0x1aaef8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1aaefc:
    // 0x1aaefc: 0x24840010
    ctx->pc = 0x1aaefcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1aaf00: 0x1460fff6
    ctx->pc = 0x1AAF00u;
    {
        const bool branch_taken_0x1aaf00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AAF04u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x1aaf00) {
            ctx->pc = 0x1AAEDCu;
            goto label_1aaedc;
        }
    }
    ctx->pc = 0x1AAF08u;
label_1aaf08:
    // 0x1aaf08: 0x7bbf0030
    ctx->pc = 0x1aaf08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aaf0c: 0x7bb20020
    ctx->pc = 0x1aaf0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaf10: 0x7bb10010
    ctx->pc = 0x1aaf10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaf14: 0x7bb00000
    ctx->pc = 0x1aaf14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaf18: 0x3e00008
    ctx->pc = 0x1AAF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAF1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AAE98u: goto label_1aae98;
            case 0x1AAEA0u: goto label_1aaea0;
            case 0x1AAEB0u: goto label_1aaeb0;
            case 0x1AAEDCu: goto label_1aaedc;
            case 0x1AAEFCu: goto label_1aaefc;
            case 0x1AAF08u: goto label_1aaf08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AAF20u;
}
