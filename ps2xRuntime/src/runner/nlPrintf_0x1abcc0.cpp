#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrintf
// Address: 0x1abcc0 - 0x1abd3c
void nlPrintf_0x1abcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrintf");


    ctx->pc = 0x1abcc0u;

    // 0x1abcc0: 0x27bdffa0
    ctx->pc = 0x1abcc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1abcc4: 0x7fbf0000
    ctx->pc = 0x1abcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1abcc8: 0xafa40018
    ctx->pc = 0x1abcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1abccc: 0xffa50028
    ctx->pc = 0x1abcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x1abcd0: 0xffa60030
    ctx->pc = 0x1abcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x1abcd4: 0xffa70038
    ctx->pc = 0x1abcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x1abcd8: 0xffa80040
    ctx->pc = 0x1abcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x1abcdc: 0xffa90048
    ctx->pc = 0x1abcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x1abce0: 0x24030001
    ctx->pc = 0x1abce0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abce4: 0xffaa0050
    ctx->pc = 0x1abce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x1abce8: 0x28620008
    ctx->pc = 0x1abce8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1abcec: 0x14400003
    ctx->pc = 0x1ABCECu;
    {
        const bool branch_taken_0x1abcec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ABCF0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
        if (branch_taken_0x1abcec) {
            ctx->pc = 0x1ABCFCu;
            goto label_1abcfc;
        }
    }
    ctx->pc = 0x1ABCF4u;
    // 0x1abcf4: 0x10000004
    ctx->pc = 0x1ABCF4u;
    {
        const bool branch_taken_0x1abcf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABCF8u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1abcf4) {
            ctx->pc = 0x1ABD08u;
            goto label_1abd08;
        }
    }
    ctx->pc = 0x1ABCFCu;
label_1abcfc:
    // 0x1abcfc: 0x24020008
    ctx->pc = 0x1abcfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1abd00: 0x431023
    ctx->pc = 0x1abd00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1abd04: 0x218c0
    ctx->pc = 0x1abd04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
label_1abd08:
    // 0x1abd08: 0x8fa50018
    ctx->pc = 0x1abd08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1abd0c: 0x27a20060
    ctx->pc = 0x1abd0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1abd10: 0x433023
    ctx->pc = 0x1abd10u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1abd14: 0x3c020030
    ctx->pc = 0x1abd14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1abd18: 0xc0520a2
    ctx->pc = 0x1ABD18u;
    SET_GPR_U32(ctx, 31, 0x1ABD20u);
    ctx->pc = 0x1ABD1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21232));
    ctx->pc = 0x148288u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x148288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD20u; }
        else if (ctx->pc != 0x1ABD20u) { ctx->pc = 0x1ABD20u; }
    }
    if (ctx->pc != 0x1ABD20u) { return; }
    ctx->pc = 0x1ABD20u;
    // 0x1abd20: 0x3c020030
    ctx->pc = 0x1abd20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1abd24: 0xc06aeb8
    ctx->pc = 0x1ABD24u;
    SET_GPR_U32(ctx, 31, 0x1ABD2Cu);
    ctx->pc = 0x1ABD28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21232));
    ctx->pc = 0x1ABAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPuts_0x1abae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD2Cu; }
        else if (ctx->pc != 0x1ABD2Cu) { ctx->pc = 0x1ABD2Cu; }
    }
    if (ctx->pc != 0x1ABD2Cu) { return; }
    ctx->pc = 0x1ABD2Cu;
    // 0x1abd2c: 0x7bbf0000
    ctx->pc = 0x1abd2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abd30: 0x70001628
    ctx->pc = 0x1abd30u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1abd34: 0x3e00008
    ctx->pc = 0x1ABD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABD38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABCFCu: goto label_1abcfc;
            case 0x1ABD08u: goto label_1abd08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABD3Cu;
}
