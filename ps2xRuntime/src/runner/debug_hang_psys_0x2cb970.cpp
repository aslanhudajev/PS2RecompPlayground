#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: debug_hang_psys
// Address: 0x2cb970 - 0x2cb9b0
void debug_hang_psys_0x2cb970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cb970u;

    // 0x2cb970: 0x3c02003a
    ctx->pc = 0x2cb970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cb974: 0x8c42b848
    ctx->pc = 0x2cb974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948936)));
label_2cb978:
    // 0x2cb978: 0x0
    ctx->pc = 0x2cb978u;
    // NOP
    // 0x2cb97c: 0x0
    ctx->pc = 0x2cb97cu;
    // NOP
    // 0x2cb980: 0x0
    ctx->pc = 0x2cb980u;
    // NOP
    // 0x2cb984: 0x0
    ctx->pc = 0x2cb984u;
    // NOP
    // 0x2cb988: 0x0
    ctx->pc = 0x2cb988u;
    // NOP
    // 0x2cb98c: 0x1040fffa
    ctx->pc = 0x2CB98Cu;
    {
        const bool branch_taken_0x2cb98c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb98c) {
            ctx->pc = 0x2CB978u;
            goto label_2cb978;
        }
    }
    ctx->pc = 0x2CB994u;
    // 0x2cb994: 0x3c04003a
    ctx->pc = 0x2cb994u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2cb998: 0x8c83b848
    ctx->pc = 0x2cb998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294948936)));
    // 0x2cb99c: 0x24020001
    ctx->pc = 0x2cb99cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb9a0: 0x50620001
    ctx->pc = 0x2CB9A0u;
    {
        const bool branch_taken_0x2cb9a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2cb9a0) {
            ctx->pc = 0x2CB9A4u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 4294948936), GPR_U32(ctx, 0));
            ctx->pc = 0x2CB9A8u;
            goto label_2cb9a8;
        }
    }
    ctx->pc = 0x2CB9A8u;
label_2cb9a8:
    // 0x2cb9a8: 0x3e00008
    ctx->pc = 0x2CB9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CB978u: goto label_2cb978;
            case 0x2CB9A8u: goto label_2cb9a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CB9B0u;
}
