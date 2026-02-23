#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: newFcvDat__9FcvEffectFi
// Address: 0x1d8710 - 0x1d878c
void newFcvDat__9FcvEffectFi_0x1d8710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("newFcvDat__9FcvEffectFi");


    ctx->pc = 0x1d8710u;

    // 0x1d8710: 0x27bdffc0
    ctx->pc = 0x1d8710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8714: 0x7fbf0030
    ctx->pc = 0x1d8714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d8718: 0x7fb20020
    ctx->pc = 0x1d8718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d871c: 0x7fb10010
    ctx->pc = 0x1d871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8720: 0x70a08e28
    ctx->pc = 0x1d8720u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d8724: 0x51100
    ctx->pc = 0x1d8724u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d8728: 0x7fb00000
    ctx->pc = 0x1d8728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d872c: 0x511023
    ctx->pc = 0x1d872cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d8730: 0xac850000
    ctx->pc = 0x1d8730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d8734: 0x21100
    ctx->pc = 0x1d8734u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d8738: 0x70009628
    ctx->pc = 0x1d8738u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d873c: 0xc06878c
    ctx->pc = 0x1D873Cu;
    SET_GPR_U32(ctx, 31, 0x1D8744u);
    ctx->pc = 0x1D8740u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8744u; }
        else if (ctx->pc != 0x1D8744u) { ctx->pc = 0x1D8744u; }
    }
    if (ctx->pc != 0x1D8744u) { return; }
    ctx->pc = 0x1D8744u;
    // 0x1d8744: 0x1040000a
    ctx->pc = 0x1D8744u;
    {
        const bool branch_taken_0x1d8744 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D8748u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d8744) {
            ctx->pc = 0x1D8770u;
            goto label_1d8770;
        }
    }
    ctx->pc = 0x1D874Cu;
    // 0x1d874c: 0x70402628
    ctx->pc = 0x1d874cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d8750: 0x3c02001e
    ctx->pc = 0x1d8750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)30 << 16));
    // 0x1d8754: 0x72204628
    ctx->pc = 0x1d8754u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1d8758: 0x24120001
    ctx->pc = 0x1d8758u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d875c: 0x24458790
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294936464));
    // 0x1d8760: 0x70003628
    ctx->pc = 0x1d8760u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8764: 0xc071b84
    ctx->pc = 0x1D8764u;
    SET_GPR_U32(ctx, 31, 0x1D876Cu);
    ctx->pc = 0x1D8768u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 240));
    ctx->pc = 0x1C6E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1c6e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D876Cu; }
        else if (ctx->pc != 0x1D876Cu) { ctx->pc = 0x1D876Cu; }
    }
    if (ctx->pc != 0x1D876Cu) { return; }
    ctx->pc = 0x1D876Cu;
    // 0x1d876c: 0x70408628
    ctx->pc = 0x1d876cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1d8770:
    // 0x1d8770: 0x72001628
    ctx->pc = 0x1d8770u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8774: 0x7bbf0030
    ctx->pc = 0x1d8774u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8778: 0x7bb20020
    ctx->pc = 0x1d8778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d877c: 0x7bb10010
    ctx->pc = 0x1d877cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8780: 0x7bb00000
    ctx->pc = 0x1d8780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8784: 0x3e00008
    ctx->pc = 0x1D8784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8788u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8770u: goto label_1d8770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D878Cu;
}
