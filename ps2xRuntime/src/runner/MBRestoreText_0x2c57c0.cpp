#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBRestoreText
// Address: 0x2c57c0 - 0x2c57f8
void MBRestoreText_0x2c57c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c57c0u;

    // 0x2c57c0: 0x3c03003d
    ctx->pc = 0x2c57c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c57c4: 0x8c62c958
    ctx->pc = 0x2c57c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294953304)));
    // 0x2c57c8: 0x14400009
    ctx->pc = 0x2C57C8u;
    {
        const bool branch_taken_0x2c57c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C57CCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
        if (branch_taken_0x2c57c8) {
            ctx->pc = 0x2C57F0u;
            goto label_2c57f0;
        }
    }
    ctx->pc = 0x2C57D0u;
    // 0x2c57d0: 0x8c821f70
    ctx->pc = 0x2c57d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8048)));
    // 0x2c57d4: 0x14400006
    ctx->pc = 0x2C57D4u;
    {
        const bool branch_taken_0x2c57d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C57D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
        if (branch_taken_0x2c57d4) {
            ctx->pc = 0x2C57F0u;
            goto label_2c57f0;
        }
    }
    ctx->pc = 0x2C57DCu;
    // 0x2c57dc: 0x8c42c95c
    ctx->pc = 0x2c57dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953308)));
    // 0x2c57e0: 0xac62c958
    ctx->pc = 0x2c57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953304), GPR_U32(ctx, 2));
    // 0x2c57e4: 0x3c02003d
    ctx->pc = 0x2c57e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c57e8: 0x8c421f74
    ctx->pc = 0x2c57e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8052)));
    // 0x2c57ec: 0xac821f70
    ctx->pc = 0x2c57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8048), GPR_U32(ctx, 2));
label_2c57f0:
    // 0x2c57f0: 0x3e00008
    ctx->pc = 0x2C57F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C57F0u: goto label_2c57f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C57F8u;
}
