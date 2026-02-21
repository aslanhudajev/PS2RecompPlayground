#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBRemoveBlit
// Address: 0x2c2ce0 - 0x2c2d4c
void MBRemoveBlit_0x2c2ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c2ce0u;

    // 0x2c2ce0: 0x10800004
    ctx->pc = 0x2C2CE0u;
    {
        const bool branch_taken_0x2c2ce0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c2ce0) {
            ctx->pc = 0x2C2CF4u;
            goto label_2c2cf4;
        }
    }
    ctx->pc = 0x2C2CE8u;
    // 0x2c2ce8: 0x8c820034
    ctx->pc = 0x2c2ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2c2cec: 0x14400003
    ctx->pc = 0x2C2CECu;
    {
        const bool branch_taken_0x2c2cec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C2CF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2c2cec) {
            ctx->pc = 0x2C2CFCu;
            goto label_2c2cfc;
        }
    }
    ctx->pc = 0x2C2CF4u;
label_2c2cf4:
    // 0x2c2cf4: 0x3e00008
    ctx->pc = 0x2C2CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2CF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2CF4u: goto label_2c2cf4;
            case 0x2C2CFCu: goto label_2c2cfc;
            case 0x2C2D2Cu: goto label_2c2d2c;
            case 0x2C2D40u: goto label_2c2d40;
            case 0x2C2D44u: goto label_2c2d44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2CFCu;
label_2c2cfc:
    // 0x2c2cfc: 0xac820000
    ctx->pc = 0x2c2cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c2d00: 0x8c83002c
    ctx->pc = 0x2c2d00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2c2d04: 0x50600009
    ctx->pc = 0x2C2D04u;
    {
        const bool branch_taken_0x2c2d04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c2d04) {
            ctx->pc = 0x2C2D08u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
            ctx->pc = 0x2C2D2Cu;
            goto label_2c2d2c;
        }
    }
    ctx->pc = 0x2C2D0Cu;
    // 0x2c2d0c: 0x8c820030
    ctx->pc = 0x2c2d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c2d10: 0xac620030
    ctx->pc = 0x2c2d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2c2d14: 0x8c830030
    ctx->pc = 0x2c2d14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c2d18: 0x5060000a
    ctx->pc = 0x2C2D18u;
    {
        const bool branch_taken_0x2c2d18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c2d18) {
            ctx->pc = 0x2C2D1Cu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
            ctx->pc = 0x2C2D44u;
            goto label_2c2d44;
        }
    }
    ctx->pc = 0x2C2D20u;
    // 0x2c2d20: 0x8c82002c
    ctx->pc = 0x2c2d20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2c2d24: 0x10000006
    ctx->pc = 0x2C2D24u;
    {
        const bool branch_taken_0x2c2d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2D28u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2c2d24) {
            ctx->pc = 0x2C2D40u;
            goto label_2c2d40;
        }
    }
    ctx->pc = 0x2C2D2Cu;
label_2c2d2c:
    // 0x2c2d2c: 0x8c820030
    ctx->pc = 0x2c2d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c2d30: 0xac620070
    ctx->pc = 0x2c2d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    // 0x2c2d34: 0x8c820030
    ctx->pc = 0x2c2d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2c2d38: 0x54400001
    ctx->pc = 0x2C2D38u;
    {
        const bool branch_taken_0x2c2d38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c2d38) {
            ctx->pc = 0x2C2D3Cu;
            WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
            ctx->pc = 0x2C2D40u;
            goto label_2c2d40;
        }
    }
    ctx->pc = 0x2C2D40u;
label_2c2d40:
    // 0x2c2d40: 0xac800030
    ctx->pc = 0x2c2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_2c2d44:
    // 0x2c2d44: 0x3e00008
    ctx->pc = 0x2C2D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2D48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2CF4u: goto label_2c2cf4;
            case 0x2C2CFCu: goto label_2c2cfc;
            case 0x2C2D2Cu: goto label_2c2d2c;
            case 0x2C2D40u: goto label_2c2d40;
            case 0x2C2D44u: goto label_2c2d44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2D4Cu;
}
