#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBackgroundLoading
// Address: 0x2c7768 - 0x2c7788
void MBBackgroundLoading_0x2c7768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7768u;

    // 0x2c7768: 0x3c020038
    ctx->pc = 0x2c7768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c776c: 0x8c42c968
    ctx->pc = 0x2c776cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953320)));
    // 0x2c7770: 0x4410003
    ctx->pc = 0x2C7770u;
    {
        const bool branch_taken_0x2c7770 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C7774u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2c7770) {
            ctx->pc = 0x2C7780u;
            goto label_2c7780;
        }
    }
    ctx->pc = 0x2C7778u;
    // 0x2c7778: 0x3e00008
    ctx->pc = 0x2C7778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C777Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7780u: goto label_2c7780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C7780u;
label_2c7780:
    // 0x2c7780: 0x3e00008
    ctx->pc = 0x2C7780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7780u: goto label_2c7780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C7788u;
}
