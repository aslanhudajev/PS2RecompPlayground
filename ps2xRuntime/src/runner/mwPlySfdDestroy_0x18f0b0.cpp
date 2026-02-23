#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdDestroy
// Address: 0x18f0b0 - 0x18f0ec
void mwPlySfdDestroy_0x18f0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdDestroy");


    ctx->pc = 0x18f0b0u;

    // 0x18f0b0: 0x27bdfff0
    ctx->pc = 0x18f0b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f0b4: 0xffbf0000
    ctx->pc = 0x18f0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f0b8: 0xc066eb2
    ctx->pc = 0x18F0B8u;
    SET_GPR_U32(ctx, 31, 0x18F0C0u);
    ctx->pc = 0x19BAC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_Destroy_0x19bac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F0C0u; }
        else if (ctx->pc != 0x18F0C0u) { ctx->pc = 0x18F0C0u; }
    }
    if (ctx->pc != 0x18F0C0u) { return; }
    ctx->pc = 0x18F0C0u;
    // 0x18f0c0: 0x10400008
    ctx->pc = 0x18F0C0u;
    {
        const bool branch_taken_0x18f0c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F0C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x18f0c0) {
            ctx->pc = 0x18F0E4u;
            goto label_18f0e4;
        }
    }
    ctx->pc = 0x18F0C8u;
    // 0x18f0c8: 0xc0633b4
    ctx->pc = 0x18F0C8u;
    SET_GPR_U32(ctx, 31, 0x18F0D0u);
    ctx->pc = 0x18F0CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966990));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F0D0u; }
        else if (ctx->pc != 0x18F0D0u) { ctx->pc = 0x18F0D0u; }
    }
    if (ctx->pc != 0x18F0D0u) { return; }
    ctx->pc = 0x18F0D0u;
    // 0x18f0d0: 0x3c04002c
    ctx->pc = 0x18f0d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18f0d4: 0xdfbf0000
    ctx->pc = 0x18f0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f0d8: 0x2484d180
    ctx->pc = 0x18f0d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955392));
    // 0x18f0dc: 0x8063dda
    ctx->pc = 0x18F0DCu;
    ctx->pc = 0x18F0E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18F768u;
    MWSFSVM_Error_0x18f768(rdram, ctx, runtime); return;
    ctx->pc = 0x18F0E4u;
label_18f0e4:
    // 0x18f0e4: 0x3e00008
    ctx->pc = 0x18F0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F0E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F0E4u: goto label_18f0e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F0ECu;
}
