#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBResetBlits
// Address: 0x2c2a08 - 0x2c2a3c
void MBResetBlits_0x2c2a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c2a08u;

    // 0x2c2a08: 0x3c020037
    ctx->pc = 0x2c2a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2a0c: 0x8c4231ac
    ctx->pc = 0x2c2a0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12716)));
    // 0x2c2a10: 0x14400006
    ctx->pc = 0x2C2A10u;
    {
        const bool branch_taken_0x2c2a10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C2A14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c2a10) {
            ctx->pc = 0x2C2A2Cu;
            goto label_2c2a2c;
        }
    }
    ctx->pc = 0x2C2A18u;
    // 0x2c2a18: 0x3c020038
    ctx->pc = 0x2c2a18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c2a1c: 0xac40b0c0
    ctx->pc = 0x2c2a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947008), GPR_U32(ctx, 0));
    // 0x2c2a20: 0x3c020038
    ctx->pc = 0x2c2a20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c2a24: 0xac408cb8
    ctx->pc = 0x2c2a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937784), GPR_U32(ctx, 0));
    // 0x2c2a28: 0x3c020038
    ctx->pc = 0x2c2a28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c2a2c:
    // 0x2c2a2c: 0xac40b0c4
    ctx->pc = 0x2c2a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947012), GPR_U32(ctx, 0));
    // 0x2c2a30: 0x3c020038
    ctx->pc = 0x2c2a30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c2a34: 0x3e00008
    ctx->pc = 0x2C2A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2A38u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937788), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2A2Cu: goto label_2c2a2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2A3Cu;
}
