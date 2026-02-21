#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_targets
// Address: 0x268d08 - 0x268d48
void init_targets_0x268d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x268d08u;

    // 0x268d08: 0x202d
    ctx->pc = 0x268d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d0c: 0x3c020034
    ctx->pc = 0x268d0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268d10: 0x2443f530
    ctx->pc = 0x268d10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x268d14: 0x0
    ctx->pc = 0x268d14u;
    // NOP
label_268d18:
    // 0x268d18: 0xac600000
    ctx->pc = 0x268d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x268d1c: 0xac600004
    ctx->pc = 0x268d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x268d20: 0xac600010
    ctx->pc = 0x268d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x268d24: 0xac600014
    ctx->pc = 0x268d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x268d28: 0xac600018
    ctx->pc = 0x268d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x268d2c: 0x24840001
    ctx->pc = 0x268d2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x268d30: 0x2882000f
    ctx->pc = 0x268d30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 15));
    // 0x268d34: 0x1440fff8
    ctx->pc = 0x268D34u;
    {
        const bool branch_taken_0x268d34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x268D38u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x268d34) {
            ctx->pc = 0x268D18u;
            goto label_268d18;
        }
    }
    ctx->pc = 0x268D3Cu;
    // 0x268d3c: 0x3c020034
    ctx->pc = 0x268d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268d40: 0x3e00008
    ctx->pc = 0x268D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268D44u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965500), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268D18u: goto label_268d18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268D48u;
}
