#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: newFcvDat__14TrnKomono2TaskFi
// Address: 0x220980 - 0x2209f8
void newFcvDat__14TrnKomono2TaskFi_0x220980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("newFcvDat__14TrnKomono2TaskFi");


    ctx->pc = 0x220980u;

    // 0x220980: 0x27bdffc0
    ctx->pc = 0x220980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x220984: 0x7fbf0030
    ctx->pc = 0x220984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x220988: 0x7fb20020
    ctx->pc = 0x220988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22098c: 0x7fb10010
    ctx->pc = 0x22098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x220990: 0x70a08e28
    ctx->pc = 0x220990u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x220994: 0x51100
    ctx->pc = 0x220994u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x220998: 0x511023
    ctx->pc = 0x220998u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22099c: 0x21100
    ctx->pc = 0x22099cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2209a0: 0x70009628
    ctx->pc = 0x2209a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2209a4: 0x24440010
    ctx->pc = 0x2209a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    // 0x2209a8: 0xc06878c
    ctx->pc = 0x2209A8u;
    SET_GPR_U32(ctx, 31, 0x2209B0u);
    ctx->pc = 0x2209ACu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209B0u; }
        else if (ctx->pc != 0x2209B0u) { ctx->pc = 0x2209B0u; }
    }
    if (ctx->pc != 0x2209B0u) { return; }
    ctx->pc = 0x2209B0u;
    // 0x2209b0: 0x1040000a
    ctx->pc = 0x2209B0u;
    {
        const bool branch_taken_0x2209b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2209B4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2209b0) {
            ctx->pc = 0x2209DCu;
            goto label_2209dc;
        }
    }
    ctx->pc = 0x2209B8u;
    // 0x2209b8: 0x70402628
    ctx->pc = 0x2209b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2209bc: 0x3c02001e
    ctx->pc = 0x2209bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)30 << 16));
    // 0x2209c0: 0x72204628
    ctx->pc = 0x2209c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2209c4: 0x24120001
    ctx->pc = 0x2209c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2209c8: 0x24458790
    ctx->pc = 0x2209c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294936464));
    // 0x2209cc: 0x70003628
    ctx->pc = 0x2209ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2209d0: 0xc071b84
    ctx->pc = 0x2209D0u;
    SET_GPR_U32(ctx, 31, 0x2209D8u);
    ctx->pc = 0x2209D4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 240));
    ctx->pc = 0x1C6E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1c6e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2209D8u; }
        else if (ctx->pc != 0x2209D8u) { ctx->pc = 0x2209D8u; }
    }
    if (ctx->pc != 0x2209D8u) { return; }
    ctx->pc = 0x2209D8u;
    // 0x2209d8: 0x70408628
    ctx->pc = 0x2209d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2209dc:
    // 0x2209dc: 0x72001628
    ctx->pc = 0x2209dcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2209e0: 0x7bbf0030
    ctx->pc = 0x2209e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2209e4: 0x7bb20020
    ctx->pc = 0x2209e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2209e8: 0x7bb10010
    ctx->pc = 0x2209e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2209ec: 0x7bb00000
    ctx->pc = 0x2209ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2209f0: 0x3e00008
    ctx->pc = 0x2209F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2209F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2209DCu: goto label_2209dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2209F8u;
}
