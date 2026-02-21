#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitHelp
// Address: 0x28e210 - 0x28e27c
void InitHelp_0x28e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28e210u;

    // 0x28e210: 0x3c020035
    ctx->pc = 0x28e210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e214: 0xac40e1b8
    ctx->pc = 0x28e214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959544), GPR_U32(ctx, 0));
    // 0x28e218: 0x182d
    ctx->pc = 0x28e218u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e21c: 0x3c020035
    ctx->pc = 0x28e21cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e220: 0x2444e178
    ctx->pc = 0x28e220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959480));
    // 0x28e224: 0x0
    ctx->pc = 0x28e224u;
    // NOP
label_28e228:
    // 0x28e228: 0x31080
    ctx->pc = 0x28e228u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28e22c: 0x441021
    ctx->pc = 0x28e22cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28e230: 0xac400000
    ctx->pc = 0x28e230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28e234: 0x24630001
    ctx->pc = 0x28e234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x28e238: 0x28620004
    ctx->pc = 0x28e238u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x28e23c: 0x1440fffa
    ctx->pc = 0x28E23Cu;
    {
        const bool branch_taken_0x28e23c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28e23c) {
            ctx->pc = 0x28E228u;
            goto label_28e228;
        }
    }
    ctx->pc = 0x28E244u;
    // 0x28e244: 0x3c020031
    ctx->pc = 0x28e244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28e248: 0xac400024
    ctx->pc = 0x28e248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x28e24c: 0x3c020035
    ctx->pc = 0x28e24cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e250: 0xac40e190
    ctx->pc = 0x28e250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959504), GPR_U32(ctx, 0));
    // 0x28e254: 0x3c020035
    ctx->pc = 0x28e254u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e258: 0xac40e1b0
    ctx->pc = 0x28e258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959536), GPR_U32(ctx, 0));
    // 0x28e25c: 0x3c020035
    ctx->pc = 0x28e25cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e260: 0xac40e1b4
    ctx->pc = 0x28e260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959540), GPR_U32(ctx, 0));
    // 0x28e264: 0x3c020035
    ctx->pc = 0x28e264u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28e268: 0xac40e1bc
    ctx->pc = 0x28e268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959548), GPR_U32(ctx, 0));
    // 0x28e26c: 0x3c030035
    ctx->pc = 0x28e26cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28e270: 0x24020100
    ctx->pc = 0x28e270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x28e274: 0x3e00008
    ctx->pc = 0x28E274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E278u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959500), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28E228u: goto label_28e228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28E27Cu;
}
