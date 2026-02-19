#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBFontHeight
// Address: 0x2c5ae8 - 0x2c5b14
void MBFontHeight_0x2c5ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5ae8u;

    // 0x2c5ae8: 0x4830004
    ctx->pc = 0x2C5AE8u;
    {
        const bool branch_taken_0x2c5ae8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2c5ae8) {
            ctx->pc = 0x2C5AECu;
            SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
            ctx->pc = 0x2C5AFCu;
            goto label_2c5afc;
        }
    }
    ctx->pc = 0x2C5AF0u;
    // 0x2c5af0: 0x3c02003d
    ctx->pc = 0x2c5af0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c5af4: 0x8c44b8a0
    ctx->pc = 0x2c5af4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294949024)));
    // 0x2c5af8: 0x3c02003d
    ctx->pc = 0x2c5af8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
label_2c5afc:
    // 0x2c5afc: 0x2442b810
    ctx->pc = 0x2c5afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948880));
    // 0x2c5b00: 0x41880
    ctx->pc = 0x2c5b00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c5b04: 0x621821
    ctx->pc = 0x2c5b04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c5b08: 0x8c620000
    ctx->pc = 0x2c5b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5b0c: 0x3e00008
    ctx->pc = 0x2C5B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5B10u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5AFCu: goto label_2c5afc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C5B14u;
}
