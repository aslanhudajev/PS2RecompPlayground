#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryEvent__16PostRendMgrClassFPUi
// Address: 0x2156d0 - 0x215700
void entryEvent__16PostRendMgrClassFPUi_0x2156d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryEvent__16PostRendMgrClassFPUi");


    ctx->pc = 0x2156d0u;

    // 0x2156d0: 0x27bdfff0
    ctx->pc = 0x2156d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2156d4: 0x7fbf0000
    ctx->pc = 0x2156d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2156d8: 0x8ca30000
    ctx->pc = 0x2156d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2156dc: 0x2402002b
    ctx->pc = 0x2156dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
    // 0x2156e0: 0x10620002
    ctx->pc = 0x2156E0u;
    {
        const bool branch_taken_0x2156e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2156e0) {
            ctx->pc = 0x2156ECu;
            goto label_2156ec;
        }
    }
    ctx->pc = 0x2156E8u;
    // 0x2156e8: 0xd
    ctx->pc = 0x2156e8u;
    runtime->handleBreak(rdram, ctx);
label_2156ec:
    // 0x2156ec: 0xc085a0c
    ctx->pc = 0x2156ECu;
    SET_GPR_U32(ctx, 31, 0x2156F4u);
    ctx->pc = 0x216830u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent__16ScrBlurCtrlClassFPUi_0x216830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2156F4u; }
        else if (ctx->pc != 0x2156F4u) { ctx->pc = 0x2156F4u; }
    }
    if (ctx->pc != 0x2156F4u) { return; }
    ctx->pc = 0x2156F4u;
    // 0x2156f4: 0x7bbf0000
    ctx->pc = 0x2156f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2156f8: 0x3e00008
    ctx->pc = 0x2156F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2156FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2156ECu: goto label_2156ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215700u;
}
