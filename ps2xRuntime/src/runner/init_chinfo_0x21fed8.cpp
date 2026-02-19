#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_chinfo
// Address: 0x21fed8 - 0x21ff28
void init_chinfo_0x21fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21fed8u;

    // 0x21fed8: 0x282d
    ctx->pc = 0x21fed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fedc: 0x3c02003c
    ctx->pc = 0x21fedcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21fee0: 0x2443d630
    ctx->pc = 0x21fee0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956592));
    // 0x21fee4: 0x2404ffff
    ctx->pc = 0x21fee4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21fee8: 0x2406007f
    ctx->pc = 0x21fee8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x21feec: 0x0
    ctx->pc = 0x21feecu;
    // NOP
label_21fef0:
    // 0x21fef0: 0xac640000
    ctx->pc = 0x21fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x21fef4: 0xac640004
    ctx->pc = 0x21fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x21fef8: 0xac600008
    ctx->pc = 0x21fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x21fefc: 0xac60000c
    ctx->pc = 0x21fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x21ff00: 0xac600010
    ctx->pc = 0x21ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x21ff04: 0xac660014
    ctx->pc = 0x21ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 6));
    // 0x21ff08: 0xac600018
    ctx->pc = 0x21ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x21ff0c: 0xac64001c
    ctx->pc = 0x21ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x21ff10: 0x24a50001
    ctx->pc = 0x21ff10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x21ff14: 0x28a2000c
    ctx->pc = 0x21ff14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 12));
    // 0x21ff18: 0x1440fff5
    ctx->pc = 0x21FF18u;
    {
        const bool branch_taken_0x21ff18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21FF1Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x21ff18) {
            ctx->pc = 0x21FEF0u;
            goto label_21fef0;
        }
    }
    ctx->pc = 0x21FF20u;
    // 0x21ff20: 0x3e00008
    ctx->pc = 0x21FF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FEF0u: goto label_21fef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FF28u;
}
