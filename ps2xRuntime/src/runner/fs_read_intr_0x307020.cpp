#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fs_read_intr
// Address: 0x307020 - 0x3070b8
void fs_read_intr_0x307020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x307020u;

    // 0x307020: 0x8c830000
    ctx->pc = 0x307020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307024: 0x3c022000
    ctx->pc = 0x307024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x307028: 0x623025
    ctx->pc = 0x307028u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30702c: 0x8cc20000
    ctx->pc = 0x30702cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x307030: 0x58400010
    ctx->pc = 0x307030u;
    {
        const bool branch_taken_0x307030 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x307030) {
            ctx->pc = 0x307034u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->pc = 0x307074u;
            goto label_307074;
        }
    }
    ctx->pc = 0x307038u;
    // 0x307038: 0x8cc80008
    ctx->pc = 0x307038u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x30703c: 0x1840000c
    ctx->pc = 0x30703Cu;
    {
        const bool branch_taken_0x30703c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x307040u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x30703c) {
            ctx->pc = 0x307070u;
            goto label_307070;
        }
    }
    ctx->pc = 0x307044u;
    // 0x307044: 0x24c70010
    ctx->pc = 0x307044u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 16));
    // 0x307048: 0xe51021
    ctx->pc = 0x307048u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x30704c: 0x0
    ctx->pc = 0x30704cu;
    // NOP
label_307050:
    // 0x307050: 0x1052021
    ctx->pc = 0x307050u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x307054: 0x90430000
    ctx->pc = 0x307054u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307058: 0x24a50001
    ctx->pc = 0x307058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x30705c: 0xa0830000
    ctx->pc = 0x30705cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x307060: 0x8cc20000
    ctx->pc = 0x307060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x307064: 0xa2102a
    ctx->pc = 0x307064u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x307068: 0x1440fff9
    ctx->pc = 0x307068u;
    {
        const bool branch_taken_0x307068 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x30706Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        if (branch_taken_0x307068) {
            ctx->pc = 0x307050u;
            goto label_307050;
        }
    }
    ctx->pc = 0x307070u;
label_307070:
    // 0x307070: 0x8cc20004
    ctx->pc = 0x307070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_307074:
    // 0x307074: 0x1840000e
    ctx->pc = 0x307074u;
    {
        const bool branch_taken_0x307074 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x307074) {
            ctx->pc = 0x3070B0u;
            goto label_3070b0;
        }
    }
    ctx->pc = 0x30707Cu;
    // 0x30707c: 0x8cc8000c
    ctx->pc = 0x30707cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x307080: 0x1840000b
    ctx->pc = 0x307080u;
    {
        const bool branch_taken_0x307080 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x307084u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x307080) {
            ctx->pc = 0x3070B0u;
            goto label_3070b0;
        }
    }
    ctx->pc = 0x307088u;
    // 0x307088: 0x24c70050
    ctx->pc = 0x307088u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 80));
    // 0x30708c: 0xe51021
    ctx->pc = 0x30708cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_307090:
    // 0x307090: 0x1052021
    ctx->pc = 0x307090u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x307094: 0x90430000
    ctx->pc = 0x307094u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307098: 0x24a50001
    ctx->pc = 0x307098u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x30709c: 0xa0830000
    ctx->pc = 0x30709cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3070a0: 0x8cc20004
    ctx->pc = 0x3070a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3070a4: 0xa2102a
    ctx->pc = 0x3070a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x3070a8: 0x1440fff9
    ctx->pc = 0x3070A8u;
    {
        const bool branch_taken_0x3070a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3070ACu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        if (branch_taken_0x3070a8) {
            ctx->pc = 0x307090u;
            goto label_307090;
        }
    }
    ctx->pc = 0x3070B0u;
label_3070b0:
    // 0x3070b0: 0x3e00008
    ctx->pc = 0x3070B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x307050u: goto label_307050;
            case 0x307070u: goto label_307070;
            case 0x307074u: goto label_307074;
            case 0x307090u: goto label_307090;
            case 0x3070B0u: goto label_3070b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3070B8u;
}
