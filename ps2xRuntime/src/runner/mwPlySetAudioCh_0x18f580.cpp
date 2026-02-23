#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySetAudioCh
// Address: 0x18f580 - 0x18f5b0
void mwPlySetAudioCh_0x18f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySetAudioCh");


    ctx->pc = 0x18f580u;

    // 0x18f580: 0x27bdfff0
    ctx->pc = 0x18f580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f584: 0xffbf0000
    ctx->pc = 0x18f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f588: 0xc066a84
    ctx->pc = 0x18F588u;
    SET_GPR_U32(ctx, 31, 0x18F590u);
    ctx->pc = 0x18F58Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19AA10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetAudioCh_0x19aa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F590u; }
        else if (ctx->pc != 0x18F590u) { ctx->pc = 0x18F590u; }
    }
    if (ctx->pc != 0x18F590u) { return; }
    ctx->pc = 0x18F590u;
    // 0x18f590: 0x10400005
    ctx->pc = 0x18F590u;
    {
        const bool branch_taken_0x18f590 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F594u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x18f590) {
            ctx->pc = 0x18F5A8u;
            goto label_18f5a8;
        }
    }
    ctx->pc = 0x18F598u;
    // 0x18f598: 0x3c04002c
    ctx->pc = 0x18f598u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18f59c: 0x2484d268
    ctx->pc = 0x18f59cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955624));
    // 0x18f5a0: 0x8063dda
    ctx->pc = 0x18F5A0u;
    ctx->pc = 0x18F5A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18F768u;
    MWSFSVM_Error_0x18f768(rdram, ctx, runtime); return;
    ctx->pc = 0x18F5A8u;
label_18f5a8:
    // 0x18f5a8: 0x3e00008
    ctx->pc = 0x18F5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F5ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F5A8u: goto label_18f5a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F5B0u;
}
