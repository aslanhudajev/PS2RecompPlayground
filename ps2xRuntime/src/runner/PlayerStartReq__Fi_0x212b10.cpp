#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PlayerStartReq__Fi
// Address: 0x212b10 - 0x212b50
void PlayerStartReq__Fi_0x212b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PlayerStartReq__Fi");


    ctx->pc = 0x212b10u;

    // 0x212b10: 0x41900
    ctx->pc = 0x212b10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x212b14: 0x642023
    ctx->pc = 0x212b14u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212b18: 0x418c0
    ctx->pc = 0x212b18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x212b1c: 0x641823
    ctx->pc = 0x212b1cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212b20: 0x320c0
    ctx->pc = 0x212b20u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 3));
    // 0x212b24: 0x3c030050
    ctx->pc = 0x212b24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x212b28: 0x2463dd20
    ctx->pc = 0x212b28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958368));
    // 0x212b2c: 0x642821
    ctx->pc = 0x212b2cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212b30: 0x3c010050
    ctx->pc = 0x212b30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x212b34: 0x8424e504
    ctx->pc = 0x212b34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x212b38: 0x24030006
    ctx->pc = 0x212b38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x212b3c: 0x14830002
    ctx->pc = 0x212B3Cu;
    {
        const bool branch_taken_0x212b3c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x212B40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x212b3c) {
            ctx->pc = 0x212B48u;
            goto label_212b48;
        }
    }
    ctx->pc = 0x212B44u;
    // 0x212b44: 0xaca30018
    ctx->pc = 0x212b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_212b48:
    // 0x212b48: 0x3e00008
    ctx->pc = 0x212B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212B48u: goto label_212b48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212B50u;
}
