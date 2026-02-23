#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: newPtcl__23KomonoTrnDishKowareTaskFi
// Address: 0x21c9e0 - 0x21ca5c
void newPtcl__23KomonoTrnDishKowareTaskFi_0x21c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("newPtcl__23KomonoTrnDishKowareTaskFi");


    ctx->pc = 0x21c9e0u;

    // 0x21c9e0: 0x27bdffb0
    ctx->pc = 0x21c9e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c9e4: 0x7fbf0040
    ctx->pc = 0x21c9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x21c9e8: 0x7fb30030
    ctx->pc = 0x21c9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21c9ec: 0x7fb20020
    ctx->pc = 0x21c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21c9f0: 0x7fb10010
    ctx->pc = 0x21c9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21c9f4: 0x7fb00000
    ctx->pc = 0x21c9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c9f8: 0xac850040
    ctx->pc = 0x21c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x21c9fc: 0x8c910040
    ctx->pc = 0x21c9fcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x21ca00: 0x70809e28
    ctx->pc = 0x21ca00u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21ca04: 0x70009628
    ctx->pc = 0x21ca04u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ca08: 0x111180
    ctx->pc = 0x21ca08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 6));
    // 0x21ca0c: 0xc06878c
    ctx->pc = 0x21CA0Cu;
    SET_GPR_U32(ctx, 31, 0x21CA14u);
    ctx->pc = 0x21CA10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA14u; }
        else if (ctx->pc != 0x21CA14u) { ctx->pc = 0x21CA14u; }
    }
    if (ctx->pc != 0x21CA14u) { return; }
    ctx->pc = 0x21CA14u;
    // 0x21ca14: 0x70402628
    ctx->pc = 0x21ca14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ca18: 0x10800008
    ctx->pc = 0x21CA18u;
    {
        const bool branch_taken_0x21ca18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CA1Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21ca18) {
            ctx->pc = 0x21CA3Cu;
            goto label_21ca3c;
        }
    }
    ctx->pc = 0x21CA20u;
    // 0x21ca20: 0x72204628
    ctx->pc = 0x21ca20u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21ca24: 0x24120001
    ctx->pc = 0x21ca24u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ca28: 0x70002e28
    ctx->pc = 0x21ca28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ca2c: 0x70003628
    ctx->pc = 0x21ca2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ca30: 0xc071b84
    ctx->pc = 0x21CA30u;
    SET_GPR_U32(ctx, 31, 0x21CA38u);
    ctx->pc = 0x21CA34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1C6E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1c6e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CA38u; }
        else if (ctx->pc != 0x21CA38u) { ctx->pc = 0x21CA38u; }
    }
    if (ctx->pc != 0x21CA38u) { return; }
    ctx->pc = 0x21CA38u;
    // 0x21ca38: 0x70408628
    ctx->pc = 0x21ca38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_21ca3c:
    // 0x21ca3c: 0xae700074
    ctx->pc = 0x21ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 16));
    // 0x21ca40: 0x7bbf0040
    ctx->pc = 0x21ca40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ca44: 0x7bb30030
    ctx->pc = 0x21ca44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ca48: 0x7bb20020
    ctx->pc = 0x21ca48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ca4c: 0x7bb10010
    ctx->pc = 0x21ca4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ca50: 0x7bb00000
    ctx->pc = 0x21ca50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ca54: 0x3e00008
    ctx->pc = 0x21CA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CA3Cu: goto label_21ca3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CA5Cu;
}
