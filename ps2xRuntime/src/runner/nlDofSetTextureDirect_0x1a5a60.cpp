#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofSetTextureDirect
// Address: 0x1a5a60 - 0x1a5adc
void nlDofSetTextureDirect_0x1a5a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofSetTextureDirect");


    ctx->pc = 0x1a5a60u;

    // 0x1a5a60: 0x30820001
    ctx->pc = 0x1a5a60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x1a5a64: 0x21840
    ctx->pc = 0x1a5a64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a5a68: 0x27bdffb0
    ctx->pc = 0x1a5a68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5a6c: 0x7fbf0000
    ctx->pc = 0x1a5a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a5a70: 0x278289e4
    ctx->pc = 0x1a5a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937060));
    // 0x1a5a74: 0x431021
    ctx->pc = 0x1a5a74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5a78: 0x84470000
    ctx->pc = 0x1a5a78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5a7c: 0x878489d8
    ctx->pc = 0x1a5a7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x1a5a80: 0x878689e0
    ctx->pc = 0x1a5a80u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x1a5a84: 0x878589dc
    ctx->pc = 0x1a5a84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x1a5a88: 0x878389ec
    ctx->pc = 0x1a5a88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x1a5a8c: 0x878289e8
    ctx->pc = 0x1a5a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x1a5a90: 0xa7a40034
    ctx->pc = 0x1a5a90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5a94: 0xa7a60036
    ctx->pc = 0x1a5a94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a5a98: 0xa7a50038
    ctx->pc = 0x1a5a98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a5a9c: 0xa7a70014
    ctx->pc = 0x1a5a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a5aa0: 0xa7a60016
    ctx->pc = 0x1a5aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a5aa4: 0xa7a50018
    ctx->pc = 0x1a5aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a5aa8: 0xa7a0003a
    ctx->pc = 0x1a5aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5aac: 0xa7a0003c
    ctx->pc = 0x1a5aacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5ab0: 0xa7a3003e
    ctx->pc = 0x1a5ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a5ab4: 0xa7a0001a
    ctx->pc = 0x1a5ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5ab8: 0xa7a20040
    ctx->pc = 0x1a5ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a5abc: 0x27a40010
    ctx->pc = 0x1a5abcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a5ac0: 0x27a50030
    ctx->pc = 0x1a5ac0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a5ac4: 0x70003628
    ctx->pc = 0x1a5ac4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a5ac8: 0xc069ca4
    ctx->pc = 0x1A5AC8u;
    SET_GPR_U32(ctx, 31, 0x1A5AD0u);
    ctx->pc = 0x1A5ACCu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1A7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlTransLocalMem_0x1a7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5AD0u; }
        else if (ctx->pc != 0x1A5AD0u) { ctx->pc = 0x1A5AD0u; }
    }
    if (ctx->pc != 0x1A5AD0u) { return; }
    ctx->pc = 0x1A5AD0u;
    // 0x1a5ad0: 0x7bbf0000
    ctx->pc = 0x1a5ad0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5ad4: 0x3e00008
    ctx->pc = 0x1A5AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5AD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5ADCu;
}
