#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: objcmp
// Address: 0x2c67c8 - 0x2c67f8
void objcmp_0x2c67c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c67c8u;

    // 0x2c67c8: 0x27bdfff0
    ctx->pc = 0x2c67c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c67cc: 0x10800003
    ctx->pc = 0x2C67CCu;
    {
        const bool branch_taken_0x2c67cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C67D0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x2c67cc) {
            ctx->pc = 0x2C67DCu;
            goto label_2c67dc;
        }
    }
    ctx->pc = 0x2C67D4u;
    // 0x2c67d4: 0x14a00003
    ctx->pc = 0x2C67D4u;
    {
        const bool branch_taken_0x2c67d4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c67d4) {
            ctx->pc = 0x2C67E4u;
            goto label_2c67e4;
        }
    }
    ctx->pc = 0x2C67DCu;
label_2c67dc:
    // 0x2c67dc: 0x10000003
    ctx->pc = 0x2C67DCu;
    {
        const bool branch_taken_0x2c67dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C67E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2c67dc) {
            ctx->pc = 0x2C67ECu;
            goto label_2c67ec;
        }
    }
    ctx->pc = 0x2C67E4u;
label_2c67e4:
    // 0x2c67e4: 0xc0bf3c0
    ctx->pc = 0x2C67E4u;
    SET_GPR_U32(ctx, 31, 0x2C67ECu);
    ctx->pc = 0x2C67E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C67ECu; }
    }
    if (ctx->pc != 0x2C67ECu) { return; }
    ctx->pc = 0x2C67ECu;
label_2c67ec:
    // 0x2c67ec: 0xdfbf0000
    ctx->pc = 0x2c67ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c67f0: 0x3e00008
    ctx->pc = 0x2C67F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C67F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C67DCu: goto label_2c67dc;
            case 0x2C67E4u: goto label_2c67e4;
            case 0x2C67ECu: goto label_2c67ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C67F8u;
}
