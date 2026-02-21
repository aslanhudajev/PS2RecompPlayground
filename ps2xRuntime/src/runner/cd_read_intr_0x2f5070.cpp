#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cd_read_intr
// Address: 0x2f5070 - 0x2f5110
void cd_read_intr_0x2f5070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f5070u;

    // 0x2f5070: 0x3c022000
    ctx->pc = 0x2f5070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x2f5074: 0x823025
    ctx->pc = 0x2f5074u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f5078: 0x8cc20000
    ctx->pc = 0x2f5078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f507c: 0x18400012
    ctx->pc = 0x2F507Cu;
    {
        const bool branch_taken_0x2f507c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F5080u;
        SET_GPR_U32(ctx, 9, ((uint32_t)58 << 16));
        if (branch_taken_0x2f507c) {
            ctx->pc = 0x2F50C8u;
            goto label_2f50c8;
        }
    }
    ctx->pc = 0x2F5084u;
    // 0x2f5084: 0x8cc80008
    ctx->pc = 0x2f5084u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2f5088: 0x1840000f
    ctx->pc = 0x2F5088u;
    {
        const bool branch_taken_0x2f5088 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F508Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f5088) {
            ctx->pc = 0x2F50C8u;
            goto label_2f50c8;
        }
    }
    ctx->pc = 0x2F5090u;
    // 0x2f5090: 0x24c70010
    ctx->pc = 0x2f5090u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 16));
    // 0x2f5094: 0x3c09003a
    ctx->pc = 0x2f5094u;
    SET_GPR_U32(ctx, 9, ((uint32_t)58 << 16));
    // 0x2f5098: 0xe51021
    ctx->pc = 0x2f5098u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2f509c: 0x0
    ctx->pc = 0x2f509cu;
    // NOP
label_2f50a0:
    // 0x2f50a0: 0x1052021
    ctx->pc = 0x2f50a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2f50a4: 0x90430000
    ctx->pc = 0x2f50a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f50a8: 0x24a50001
    ctx->pc = 0x2f50a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f50ac: 0xa0830000
    ctx->pc = 0x2f50acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f50b0: 0x8cc20000
    ctx->pc = 0x2f50b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f50b4: 0xa2102a
    ctx->pc = 0x2f50b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x2f50b8: 0x1440fff9
    ctx->pc = 0x2F50B8u;
    {
        const bool branch_taken_0x2f50b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F50BCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        if (branch_taken_0x2f50b8) {
            ctx->pc = 0x2F50A0u;
            goto label_2f50a0;
        }
    }
    ctx->pc = 0x2F50C0u;
    // 0x2f50c0: 0x10000002
    ctx->pc = 0x2F50C0u;
    {
        const bool branch_taken_0x2f50c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F50C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
        if (branch_taken_0x2f50c0) {
            ctx->pc = 0x2F50CCu;
            goto label_2f50cc;
        }
    }
    ctx->pc = 0x2F50C8u;
label_2f50c8:
    // 0x2f50c8: 0x8cc20004
    ctx->pc = 0x2f50c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2f50cc:
    // 0x2f50cc: 0x1840000e
    ctx->pc = 0x2F50CCu;
    {
        const bool branch_taken_0x2f50cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2f50cc) {
            ctx->pc = 0x2F5108u;
            goto label_2f5108;
        }
    }
    ctx->pc = 0x2F50D4u;
    // 0x2f50d4: 0x8cc8000c
    ctx->pc = 0x2f50d4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f50d8: 0x1840000b
    ctx->pc = 0x2F50D8u;
    {
        const bool branch_taken_0x2f50d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F50DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f50d8) {
            ctx->pc = 0x2F5108u;
            goto label_2f5108;
        }
    }
    ctx->pc = 0x2F50E0u;
    // 0x2f50e0: 0x24c70050
    ctx->pc = 0x2f50e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 80));
    // 0x2f50e4: 0xe51021
    ctx->pc = 0x2f50e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2f50e8:
    // 0x2f50e8: 0x1052021
    ctx->pc = 0x2f50e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2f50ec: 0x90430000
    ctx->pc = 0x2f50ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f50f0: 0x24a50001
    ctx->pc = 0x2f50f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f50f4: 0xa0830000
    ctx->pc = 0x2f50f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f50f8: 0x8cc20004
    ctx->pc = 0x2f50f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f50fc: 0xa2102a
    ctx->pc = 0x2f50fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x2f5100: 0x1440fff9
    ctx->pc = 0x2F5100u;
    {
        const bool branch_taken_0x2f5100 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F5104u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        if (branch_taken_0x2f5100) {
            ctx->pc = 0x2F50E8u;
            goto label_2f50e8;
        }
    }
    ctx->pc = 0x2F5108u;
label_2f5108:
    // 0x2f5108: 0x80bd38a
    ctx->pc = 0x2F5108u;
    ctx->pc = 0x2F510Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 9), 15088));
    ctx->pc = 0x2F4E28u;
    cd_callback_0x2f4e28(rdram, ctx, runtime); return;
    ctx->pc = 0x2F5110u;
}
