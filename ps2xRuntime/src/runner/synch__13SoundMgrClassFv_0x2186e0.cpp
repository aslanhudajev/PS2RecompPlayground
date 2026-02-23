#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: synch__13SoundMgrClassFv
// Address: 0x2186e0 - 0x2187b8
void synch__13SoundMgrClassFv_0x2186e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("synch__13SoundMgrClassFv");


    ctx->pc = 0x2186e0u;

    // 0x2186e0: 0x27bdffc0
    ctx->pc = 0x2186e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2186e4: 0x7fbf0030
    ctx->pc = 0x2186e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2186e8: 0x7fb20020
    ctx->pc = 0x2186e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2186ec: 0x7fb10010
    ctx->pc = 0x2186ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2186f0: 0x7fb00000
    ctx->pc = 0x2186f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2186f4: 0x70809628
    ctx->pc = 0x2186f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2186f8: 0x8f848d04
    ctx->pc = 0x2186f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    // 0x2186fc: 0xc05c752
    ctx->pc = 0x2186FCu;
    SET_GPR_U32(ctx, 31, 0x218704u);
    ctx->pc = 0x218700u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x171D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetStat_0x171d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218704u; }
        else if (ctx->pc != 0x218704u) { ctx->pc = 0x218704u; }
    }
    if (ctx->pc != 0x218704u) { return; }
    ctx->pc = 0x218704u;
    // 0x218704: 0x24030005
    ctx->pc = 0x218704u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x218708: 0x10430005
    ctx->pc = 0x218708u;
    {
        const bool branch_taken_0x218708 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x21870Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x218708) {
            ctx->pc = 0x218720u;
            goto label_218720;
        }
    }
    ctx->pc = 0x218710u;
    // 0x218710: 0x10400003
    ctx->pc = 0x218710u;
    {
        const bool branch_taken_0x218710 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x218710) {
            ctx->pc = 0x218720u;
            goto label_218720;
        }
    }
    ctx->pc = 0x218718u;
    // 0x218718: 0x10000022
    ctx->pc = 0x218718u;
    {
        const bool branch_taken_0x218718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21871Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x218718) {
            ctx->pc = 0x2187A4u;
            goto label_2187a4;
        }
    }
    ctx->pc = 0x218720u;
label_218720:
    // 0x218720: 0x1000001a
    ctx->pc = 0x218720u;
    {
        const bool branch_taken_0x218720 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218724u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 512)));
        if (branch_taken_0x218720) {
            ctx->pc = 0x21878Cu;
            goto label_21878c;
        }
    }
    ctx->pc = 0x218728u;
label_218728:
    // 0x218728: 0x2431821
    ctx->pc = 0x218728u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x21872c: 0x80640100
    ctx->pc = 0x21872cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x218730: 0x24650100
    ctx->pc = 0x218730u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 256));
    // 0x218734: 0x24030001
    ctx->pc = 0x218734u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x218738: 0x1083000b
    ctx->pc = 0x218738u;
    {
        const bool branch_taken_0x218738 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x218738) {
            ctx->pc = 0x218768u;
            goto label_218768;
        }
    }
    ctx->pc = 0x218740u;
    // 0x218740: 0x10800003
    ctx->pc = 0x218740u;
    {
        const bool branch_taken_0x218740 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x218740) {
            ctx->pc = 0x218750u;
            goto label_218750;
        }
    }
    ctx->pc = 0x218748u;
    // 0x218748: 0x1000000c
    ctx->pc = 0x218748u;
    {
        const bool branch_taken_0x218748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21874Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 512)));
        if (branch_taken_0x218748) {
            ctx->pc = 0x21877Cu;
            goto label_21877c;
        }
    }
    ctx->pc = 0x218750u;
label_218750:
    // 0x218750: 0x8ca60004
    ctx->pc = 0x218750u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x218754: 0x72202628
    ctx->pc = 0x218754u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x218758: 0xc05cb02
    ctx->pc = 0x218758u;
    SET_GPR_U32(ctx, 31, 0x218760u);
    ctx->pc = 0x21875Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x172C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_StartAfs_0x172c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218760u; }
        else if (ctx->pc != 0x218760u) { ctx->pc = 0x218760u; }
    }
    if (ctx->pc != 0x218760u) { return; }
    ctx->pc = 0x218760u;
    // 0x218760: 0x10000005
    ctx->pc = 0x218760u;
    {
        const bool branch_taken_0x218760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218764u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218760) {
            ctx->pc = 0x218778u;
            goto label_218778;
        }
    }
    ctx->pc = 0x218768u;
label_218768:
    // 0x218768: 0x8ca50004
    ctx->pc = 0x218768u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21876c: 0xc07a6c0
    ctx->pc = 0x21876Cu;
    SET_GPR_U32(ctx, 31, 0x218774u);
    ctx->pc = 0x218770u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E9B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXT_SetOutVol__FP9_adx_talki_0x1e9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218774u; }
        else if (ctx->pc != 0x218774u) { ctx->pc = 0x218774u; }
    }
    if (ctx->pc != 0x218774u) { return; }
    ctx->pc = 0x218774u;
    // 0x218774: 0x0
    ctx->pc = 0x218774u;
    // NOP
label_218778:
    // 0x218778: 0x8e430200
    ctx->pc = 0x218778u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 512)));
label_21877c:
    // 0x21877c: 0x24630001
    ctx->pc = 0x21877cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x218780: 0x3063000f
    ctx->pc = 0x218780u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x218784: 0xae430200
    ctx->pc = 0x218784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 3));
    // 0x218788: 0x8e440200
    ctx->pc = 0x218788u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 512)));
label_21878c:
    // 0x21878c: 0x8e430204
    ctx->pc = 0x21878cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 516)));
    // 0x218790: 0x10830003
    ctx->pc = 0x218790u;
    {
        const bool branch_taken_0x218790 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x218790) {
            ctx->pc = 0x2187A0u;
            goto label_2187a0;
        }
    }
    ctx->pc = 0x218798u;
    // 0x218798: 0x1600ffe3
    ctx->pc = 0x218798u;
    {
        const bool branch_taken_0x218798 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x21879Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x218798) {
            ctx->pc = 0x218728u;
            goto label_218728;
        }
    }
    ctx->pc = 0x2187A0u;
label_2187a0:
    // 0x2187a0: 0x7bbf0030
    ctx->pc = 0x2187a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2187a4:
    // 0x2187a4: 0x7bb20020
    ctx->pc = 0x2187a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2187a8: 0x7bb10010
    ctx->pc = 0x2187a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2187ac: 0x7bb00000
    ctx->pc = 0x2187acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2187b0: 0x3e00008
    ctx->pc = 0x2187B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2187B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218720u: goto label_218720;
            case 0x218728u: goto label_218728;
            case 0x218750u: goto label_218750;
            case 0x218768u: goto label_218768;
            case 0x218778u: goto label_218778;
            case 0x21877Cu: goto label_21877c;
            case 0x21878Cu: goto label_21878c;
            case 0x2187A0u: goto label_2187a0;
            case 0x2187A4u: goto label_2187a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2187B8u;
}
