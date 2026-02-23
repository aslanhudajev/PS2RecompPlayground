#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: vertex_set__15OneSkinMgrClassFP10ONESKIN_DBi
// Address: 0x1fea70 - 0x1feaf8
void vertex_set__15OneSkinMgrClassFP10ONESKIN_DBi_0x1fea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("vertex_set__15OneSkinMgrClassFP10ONESKIN_DBi");


    ctx->pc = 0x1fea70u;

    // 0x1fea70: 0x27bdffc0
    ctx->pc = 0x1fea70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fea74: 0x7fbf0030
    ctx->pc = 0x1fea74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1fea78: 0x7fb20020
    ctx->pc = 0x1fea78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fea7c: 0x7fb10010
    ctx->pc = 0x1fea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fea80: 0x7fb00000
    ctx->pc = 0x1fea80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fea84: 0x70c08628
    ctx->pc = 0x1fea84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1fea88: 0x70a08e28
    ctx->pc = 0x1fea88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fea8c: 0x70809628
    ctx->pc = 0x1fea8cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fea90: 0x3c020051
    ctx->pc = 0x1fea90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fea94: 0x244437a0
    ctx->pc = 0x1fea94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x1fea98: 0xc08643c
    ctx->pc = 0x1FEA98u;
    SET_GPR_U32(ctx, 31, 0x1FEAA0u);
    ctx->pc = 0x1FEA9Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2190F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskNameImm__13EntryDatClassFi_0x2190f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEAA0u; }
        else if (ctx->pc != 0x1FEAA0u) { ctx->pc = 0x1FEAA0u; }
    }
    if (ctx->pc != 0x1FEAA0u) { return; }
    ctx->pc = 0x1FEAA0u;
    // 0x1feaa0: 0x3c020051
    ctx->pc = 0x1feaa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1feaa4: 0x101880
    ctx->pc = 0x1feaa4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1feaa8: 0x244225f0
    ctx->pc = 0x1feaa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9712));
    // 0x1feaac: 0x431021
    ctx->pc = 0x1feaacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feab0: 0x8c430000
    ctx->pc = 0x1feab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1feab4: 0x8e260008
    ctx->pc = 0x1feab4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1feab8: 0x72402628
    ctx->pc = 0x1feab8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1feabc: 0x2402ffc0
    ctx->pc = 0x1feabcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1feac0: 0x2463003f
    ctx->pc = 0x1feac0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1feac4: 0xc07fc28
    ctx->pc = 0x1FEAC4u;
    SET_GPR_U32(ctx, 31, 0x1FEACCu);
    ctx->pc = 0x1FEAC8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1FF0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        weight100_cut__15OneSkinMgrClassFPA0_ii_0x1ff0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEACCu; }
        else if (ctx->pc != 0x1FEACCu) { ctx->pc = 0x1FEACCu; }
    }
    if (ctx->pc != 0x1FEACCu) { return; }
    ctx->pc = 0x1FEACCu;
    // 0x1feacc: 0x3c030052
    ctx->pc = 0x1feaccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1fead0: 0x246394d0
    ctx->pc = 0x1fead0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294939856));
    // 0x1fead4: 0x24040002
    ctx->pc = 0x1fead4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fead8: 0x701821
    ctx->pc = 0x1fead8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1feadc: 0xa0640000
    ctx->pc = 0x1feadcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1feae0: 0x7bbf0030
    ctx->pc = 0x1feae0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1feae4: 0x7bb20020
    ctx->pc = 0x1feae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1feae8: 0x7bb10010
    ctx->pc = 0x1feae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feaec: 0x7bb00000
    ctx->pc = 0x1feaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feaf0: 0x3e00008
    ctx->pc = 0x1FEAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEAF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEAF8u;
}
