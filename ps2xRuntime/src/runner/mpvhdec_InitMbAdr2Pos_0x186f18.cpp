#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvhdec_InitMbAdr2Pos
// Address: 0x186f18 - 0x186f6c
void mpvhdec_InitMbAdr2Pos_0x186f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvhdec_InitMbAdr2Pos");


    ctx->pc = 0x186f18u;

    // 0x186f18: 0x24851910
    ctx->pc = 0x186f18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 6416));
    // 0x186f1c: 0x8c870190
    ctx->pc = 0x186f1cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x186f20: 0x24840c68
    ctx->pc = 0x186f20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3176));
    // 0x186f24: 0x302d
    ctx->pc = 0x186f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f28: 0x85102b
    ctx->pc = 0x186f28u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x186f2c: 0x1040000d
    ctx->pc = 0x186F2Cu;
    {
        const bool branch_taken_0x186f2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x186F30u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186f2c) {
            ctx->pc = 0x186F64u;
            goto label_186f64;
        }
    }
    ctx->pc = 0x186F34u;
    // 0x186f34: 0x0
    ctx->pc = 0x186f34u;
    // NOP
label_186f38:
    // 0x186f38: 0x67102a
    ctx->pc = 0x186f38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 7)));
    // 0x186f3c: 0x54400004
    ctx->pc = 0x186F3Cu;
    {
        const bool branch_taken_0x186f3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x186f3c) {
            ctx->pc = 0x186F40u;
            WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
            ctx->pc = 0x186F50u;
            goto label_186f50;
        }
    }
    ctx->pc = 0x186F44u;
    // 0x186f44: 0x24c60001
    ctx->pc = 0x186f44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x186f48: 0x182d
    ctx->pc = 0x186f48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f4c: 0xa0830001
    ctx->pc = 0x186f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_186f50:
    // 0x186f50: 0xa0860000
    ctx->pc = 0x186f50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x186f54: 0x24840002
    ctx->pc = 0x186f54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x186f58: 0x85102b
    ctx->pc = 0x186f58u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x186f5c: 0x1440fff6
    ctx->pc = 0x186F5Cu;
    {
        const bool branch_taken_0x186f5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186F60u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x186f5c) {
            ctx->pc = 0x186F38u;
            goto label_186f38;
        }
    }
    ctx->pc = 0x186F64u;
label_186f64:
    // 0x186f64: 0x3e00008
    ctx->pc = 0x186F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186F38u: goto label_186f38;
            case 0x186F50u: goto label_186f50;
            case 0x186F64u: goto label_186f64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186F6Cu;
}
