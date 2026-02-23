#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdStop
// Address: 0x18f2a8 - 0x18f2e4
void mwPlySfdStop_0x18f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdStop");


    ctx->pc = 0x18f2a8u;

    // 0x18f2a8: 0x27bdfff0
    ctx->pc = 0x18f2a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f2ac: 0xffbf0000
    ctx->pc = 0x18f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f2b0: 0xc066f00
    ctx->pc = 0x18F2B0u;
    SET_GPR_U32(ctx, 31, 0x18F2B8u);
    ctx->pc = 0x18F2B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19BC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_Stop_0x19bc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2B8u; }
        else if (ctx->pc != 0x18F2B8u) { ctx->pc = 0x18F2B8u; }
    }
    if (ctx->pc != 0x18F2B8u) { return; }
    ctx->pc = 0x18F2B8u;
    // 0x18f2b8: 0x10400007
    ctx->pc = 0x18F2B8u;
    {
        const bool branch_taken_0x18f2b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F2BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f2b8) {
            ctx->pc = 0x18F2D8u;
            goto label_18f2d8;
        }
    }
    ctx->pc = 0x18F2C0u;
    // 0x18f2c0: 0xc0633b4
    ctx->pc = 0x18F2C0u;
    SET_GPR_U32(ctx, 31, 0x18F2C8u);
    ctx->pc = 0x18F2C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966988));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2C8u; }
        else if (ctx->pc != 0x18F2C8u) { ctx->pc = 0x18F2C8u; }
    }
    if (ctx->pc != 0x18F2C8u) { return; }
    ctx->pc = 0x18F2C8u;
    // 0x18f2c8: 0x3c04002c
    ctx->pc = 0x18f2c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18f2cc: 0xc063dda
    ctx->pc = 0x18F2CCu;
    SET_GPR_U32(ctx, 31, 0x18F2D4u);
    ctx->pc = 0x18F2D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955488));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2D4u; }
        else if (ctx->pc != 0x18F2D4u) { ctx->pc = 0x18F2D4u; }
    }
    if (ctx->pc != 0x18F2D4u) { return; }
    ctx->pc = 0x18F2D4u;
    // 0x18f2d4: 0x2402fecc
    ctx->pc = 0x18f2d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966988));
label_18f2d8:
    // 0x18f2d8: 0xdfbf0000
    ctx->pc = 0x18f2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f2dc: 0x3e00008
    ctx->pc = 0x18F2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F2E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F2D8u: goto label_18f2d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F2E4u;
}
