#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDecMatrixPtr
// Address: 0x1a4da0 - 0x1a4e4c
void nlDecMatrixPtr_0x1a4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDecMatrixPtr");


    ctx->pc = 0x1a4da0u;

    // 0x1a4da0: 0x27bdffe0
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4da4: 0x7fbf0010
    ctx->pc = 0x1a4da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a4da8: 0x1c800002
    ctx->pc = 0x1A4DA8u;
    {
        const bool branch_taken_0x1a4da8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1A4DACu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1a4da8) {
            ctx->pc = 0x1A4DB4u;
            goto label_1a4db4;
        }
    }
    ctx->pc = 0x1A4DB0u;
    // 0x1a4db0: 0x24040001
    ctx->pc = 0x1a4db0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1a4db4:
    // 0x1a4db4: 0x3c010030
    ctx->pc = 0x1a4db4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4db8: 0x84252160
    ctx->pc = 0x1a4db8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 8544)));
    // 0x1a4dbc: 0xa4082a
    ctx->pc = 0x1a4dbcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x1a4dc0: 0x10200003
    ctx->pc = 0x1A4DC0u;
    {
        const bool branch_taken_0x1a4dc0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4DC4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a4dc0) {
            ctx->pc = 0x1A4DD0u;
            goto label_1a4dd0;
        }
    }
    ctx->pc = 0x1A4DC8u;
    // 0x1a4dc8: 0x70a02628
    ctx->pc = 0x1a4dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a4dcc: 0x70008628
    ctx->pc = 0x1a4dccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a4dd0:
    // 0x1a4dd0: 0x3c010030
    ctx->pc = 0x1a4dd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4dd4: 0x84222162
    ctx->pc = 0x1a4dd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 8546)));
    // 0x1a4dd8: 0x45082a
    ctx->pc = 0x1a4dd8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x1a4ddc: 0x10200003
    ctx->pc = 0x1A4DDCu;
    {
        const bool branch_taken_0x1a4ddc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4DE0u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a4ddc) {
            ctx->pc = 0x1A4DECu;
            goto label_1a4dec;
        }
    }
    ctx->pc = 0x1A4DE4u;
    // 0x1a4de4: 0xa21023
    ctx->pc = 0x1a4de4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a4de8: 0x621823
    ctx->pc = 0x1a4de8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a4dec:
    // 0x1a4dec: 0xa41023
    ctx->pc = 0x1a4decu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a4df0: 0x3c010030
    ctx->pc = 0x1a4df0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4df4: 0xa4222160
    ctx->pc = 0x1a4df4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8544), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4df8: 0x3c010030
    ctx->pc = 0x1a4df8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4dfc: 0x8c252168
    ctx->pc = 0x1a4dfcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 8552)));
    // 0x1a4e00: 0x32180
    ctx->pc = 0x1a4e00u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1a4e04: 0x31080
    ctx->pc = 0x1a4e04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4e08: 0x3043ffff
    ctx->pc = 0x1a4e08u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1a4e0c: 0xa41023
    ctx->pc = 0x1a4e0cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a4e10: 0x3c010030
    ctx->pc = 0x1a4e10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4e14: 0xac222168
    ctx->pc = 0x1a4e14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8552), GPR_U32(ctx, 2));
    // 0x1a4e18: 0x3c010030
    ctx->pc = 0x1a4e18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4e1c: 0x9422216e
    ctx->pc = 0x1a4e1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8558)));
    // 0x1a4e20: 0x431023
    ctx->pc = 0x1a4e20u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a4e24: 0x3c010030
    ctx->pc = 0x1a4e24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4e28: 0xa422216e
    ctx->pc = 0x1a4e28u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8558), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4e2c: 0x3c010030
    ctx->pc = 0x1a4e2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4e30: 0xc06c229
    ctx->pc = 0x1A4E30u;
    SET_GPR_U32(ctx, 31, 0x1A4E38u);
    ctx->pc = 0x1A4E34u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8558)));
    ctx->pc = 0x1B08A4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B08A4_0x1b08a4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E38u; }
        else if (ctx->pc != 0x1A4E38u) { ctx->pc = 0x1A4E38u; }
    }
    if (ctx->pc != 0x1A4E38u) { return; }
    ctx->pc = 0x1A4E38u;
    // 0x1a4e38: 0x72001628
    ctx->pc = 0x1a4e38u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a4e3c: 0x7bbf0010
    ctx->pc = 0x1a4e3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4e40: 0x7bb00000
    ctx->pc = 0x1a4e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4e44: 0x3e00008
    ctx->pc = 0x1A4E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4DB4u: goto label_1a4db4;
            case 0x1A4DD0u: goto label_1a4dd0;
            case 0x1A4DECu: goto label_1a4dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4E4Cu;
}
