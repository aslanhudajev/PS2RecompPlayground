#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryEvent__13LightCtrlTaskFPUi
// Address: 0x1f0f20 - 0x1f0f60
void entryEvent__13LightCtrlTaskFPUi_0x1f0f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryEvent__13LightCtrlTaskFPUi");


    ctx->pc = 0x1f0f20u;

    // 0x1f0f20: 0x27bdfff0
    ctx->pc = 0x1f0f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0f24: 0x7fbf0000
    ctx->pc = 0x1f0f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f0f28: 0x8ca30000
    ctx->pc = 0x1f0f28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f0f2c: 0x24020023
    ctx->pc = 0x1f0f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f0f30: 0x10620006
    ctx->pc = 0x1F0F30u;
    {
        const bool branch_taken_0x1f0f30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1f0f30) {
            ctx->pc = 0x1F0F4Cu;
            goto label_1f0f4c;
        }
    }
    ctx->pc = 0x1F0F38u;
    // 0x1f0f38: 0x24020022
    ctx->pc = 0x1f0f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1f0f3c: 0xc07c3d8
    ctx->pc = 0x1F0F3Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F44u);
    ctx->pc = 0x1F0F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        eSETLIGHT__13LightCtrlTaskFPUi_0x1f0f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F44u; }
        else if (ctx->pc != 0x1F0F44u) { ctx->pc = 0x1F0F44u; }
    }
    if (ctx->pc != 0x1F0F44u) { return; }
    ctx->pc = 0x1F0F44u;
    // 0x1f0f44: 0x10000004
    ctx->pc = 0x1F0F44u;
    {
        const bool branch_taken_0x1f0f44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F0F48u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1f0f44) {
            ctx->pc = 0x1F0F58u;
            goto label_1f0f58;
        }
    }
    ctx->pc = 0x1F0F4Cu;
label_1f0f4c:
    // 0x1f0f4c: 0xc07c4bc
    ctx->pc = 0x1F0F4Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F54u);
    ctx->pc = 0x1F12F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        eCHGLIGHT__13LightCtrlTaskFPUi_0x1f12f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F54u; }
        else if (ctx->pc != 0x1F0F54u) { ctx->pc = 0x1F0F54u; }
    }
    if (ctx->pc != 0x1F0F54u) { return; }
    ctx->pc = 0x1F0F54u;
    // 0x1f0f54: 0x7bbf0000
    ctx->pc = 0x1f0f54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0f58:
    // 0x1f0f58: 0x3e00008
    ctx->pc = 0x1F0F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0F5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0F4Cu: goto label_1f0f4c;
            case 0x1F0F58u: goto label_1f0f58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0F60u;
}
