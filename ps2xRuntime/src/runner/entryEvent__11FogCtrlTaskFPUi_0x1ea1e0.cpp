#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryEvent__11FogCtrlTaskFPUi
// Address: 0x1ea1e0 - 0x1ea220
void entryEvent__11FogCtrlTaskFPUi_0x1ea1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryEvent__11FogCtrlTaskFPUi");


    ctx->pc = 0x1ea1e0u;

    // 0x1ea1e0: 0x27bdfff0
    ctx->pc = 0x1ea1e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea1e4: 0x7fbf0000
    ctx->pc = 0x1ea1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ea1e8: 0x8ca30000
    ctx->pc = 0x1ea1e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ea1ec: 0x24020021
    ctx->pc = 0x1ea1ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1ea1f0: 0x10620006
    ctx->pc = 0x1EA1F0u;
    {
        const bool branch_taken_0x1ea1f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ea1f0) {
            ctx->pc = 0x1EA20Cu;
            goto label_1ea20c;
        }
    }
    ctx->pc = 0x1EA1F8u;
    // 0x1ea1f8: 0x24020020
    ctx->pc = 0x1ea1f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ea1fc: 0xc07a888
    ctx->pc = 0x1EA1FCu;
    SET_GPR_U32(ctx, 31, 0x1EA204u);
    ctx->pc = 0x1EA220u;
    {
        const uint32_t __entryPc = ctx->pc;
        eSETFOG__11FogCtrlTaskFPUi_0x1ea220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA204u; }
        else if (ctx->pc != 0x1EA204u) { ctx->pc = 0x1EA204u; }
    }
    if (ctx->pc != 0x1EA204u) { return; }
    ctx->pc = 0x1EA204u;
    // 0x1ea204: 0x10000004
    ctx->pc = 0x1EA204u;
    {
        const bool branch_taken_0x1ea204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA208u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1ea204) {
            ctx->pc = 0x1EA218u;
            goto label_1ea218;
        }
    }
    ctx->pc = 0x1EA20Cu;
label_1ea20c:
    // 0x1ea20c: 0xc07a8f0
    ctx->pc = 0x1EA20Cu;
    SET_GPR_U32(ctx, 31, 0x1EA214u);
    ctx->pc = 0x1EA3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        eCHGFOG__11FogCtrlTaskFPUi_0x1ea3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA214u; }
        else if (ctx->pc != 0x1EA214u) { ctx->pc = 0x1EA214u; }
    }
    if (ctx->pc != 0x1EA214u) { return; }
    ctx->pc = 0x1EA214u;
    // 0x1ea214: 0x7bbf0000
    ctx->pc = 0x1ea214u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea218:
    // 0x1ea218: 0x3e00008
    ctx->pc = 0x1EA218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA21Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA20Cu: goto label_1ea20c;
            case 0x1EA218u: goto label_1ea218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA220u;
}
