#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ObjPutModifyParam__FiPFP19tagNL_PF_GloblParamiPv_vPFP19tagNL_PF_StripParamiPv_vPv
// Address: 0x215310 - 0x2153cc
void ObjPutModifyParam__FiPFP19tagNL_PF_GloblParamiPv_vPFP19tagNL_PF_StripParamiPv_vPv_0x215310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ObjPutModifyParam__FiPFP19tagNL_PF_GloblParamiPv_vPFP19tagNL_PF_StripParamiPv_vPv");


    ctx->pc = 0x215310u;

    // 0x215310: 0x27bdffa0
    ctx->pc = 0x215310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x215314: 0x7fbf0050
    ctx->pc = 0x215314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x215318: 0x7fb40040
    ctx->pc = 0x215318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21531c: 0x7fb30030
    ctx->pc = 0x21531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x215320: 0x7fb20020
    ctx->pc = 0x215320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x215324: 0x7fb10010
    ctx->pc = 0x215324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x215328: 0x41403
    ctx->pc = 0x215328u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
    // 0x21532c: 0x70a09e28
    ctx->pc = 0x21532cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x215330: 0x3403ffff
    ctx->pc = 0x215330u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
    // 0x215334: 0x432824
    ctx->pc = 0x215334u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215338: 0x7fb00000
    ctx->pc = 0x215338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21533c: 0x3c020050
    ctx->pc = 0x21533cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x215340: 0x58100
    ctx->pc = 0x215340u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 5), 4));
    // 0x215344: 0x2442ea20
    ctx->pc = 0x215344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x215348: 0x501021
    ctx->pc = 0x215348u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21534c: 0x8c430000
    ctx->pc = 0x21534cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215350: 0x70c09628
    ctx->pc = 0x215350u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x215354: 0x70e08e28
    ctx->pc = 0x215354u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x215358: 0x3c028000
    ctx->pc = 0x215358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x21535c: 0x621024
    ctx->pc = 0x21535cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215360: 0x14400004
    ctx->pc = 0x215360u;
    {
        const bool branch_taken_0x215360 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x215364u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x215360) {
            ctx->pc = 0x215374u;
            goto label_215374;
        }
    }
    ctx->pc = 0x215368u;
    // 0x215368: 0x3c020051
    ctx->pc = 0x215368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x21536c: 0xc0863cc
    ctx->pc = 0x21536Cu;
    SET_GPR_U32(ctx, 31, 0x215374u);
    ctx->pc = 0x215370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215374u; }
        else if (ctx->pc != 0x215374u) { ctx->pc = 0x215374u; }
    }
    if (ctx->pc != 0x215374u) { return; }
    ctx->pc = 0x215374u;
label_215374:
    // 0x215374: 0x3c020050
    ctx->pc = 0x215374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x215378: 0x2442ea24
    ctx->pc = 0x215378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x21537c: 0x501021
    ctx->pc = 0x21537cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x215380: 0x8c420000
    ctx->pc = 0x215380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215384: 0x3284ffff
    ctx->pc = 0x215384u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 20), 65535));
    // 0x215388: 0x41840
    ctx->pc = 0x215388u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x21538c: 0x641821
    ctx->pc = 0x21538cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x215390: 0x31880
    ctx->pc = 0x215390u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x215394: 0x72602e28
    ctx->pc = 0x215394u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x215398: 0x431021
    ctx->pc = 0x215398u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21539c: 0x8c440000
    ctx->pc = 0x21539cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2153a0: 0x72403628
    ctx->pc = 0x2153a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2153a4: 0xc06ab38
    ctx->pc = 0x2153A4u;
    SET_GPR_U32(ctx, 31, 0x2153ACu);
    ctx->pc = 0x2153A8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AACE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutModifyParam_0x1aace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2153ACu; }
        else if (ctx->pc != 0x2153ACu) { ctx->pc = 0x2153ACu; }
    }
    if (ctx->pc != 0x2153ACu) { return; }
    ctx->pc = 0x2153ACu;
    // 0x2153ac: 0x7bbf0050
    ctx->pc = 0x2153acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2153b0: 0x7bb40040
    ctx->pc = 0x2153b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2153b4: 0x7bb30030
    ctx->pc = 0x2153b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2153b8: 0x7bb20020
    ctx->pc = 0x2153b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2153bc: 0x7bb10010
    ctx->pc = 0x2153bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2153c0: 0x7bb00000
    ctx->pc = 0x2153c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2153c4: 0x3e00008
    ctx->pc = 0x2153C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2153C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215374u: goto label_215374;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2153CCu;
}
