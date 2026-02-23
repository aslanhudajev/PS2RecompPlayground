#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTB2__13EventCtrlTaskFv
// Address: 0x1e2ed0 - 0x1e2f00
void ENTB2__13EventCtrlTaskFv_0x1e2ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTB2__13EventCtrlTaskFv");


    ctx->pc = 0x1e2ed0u;

    // 0x1e2ed0: 0x27bdffe0
    ctx->pc = 0x1e2ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2ed4: 0x7fbf0010
    ctx->pc = 0x1e2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e2ed8: 0x7fb00000
    ctx->pc = 0x1e2ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2edc: 0x70808628
    ctx->pc = 0x1e2edcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e2ee0: 0x8e05000c
    ctx->pc = 0x1e2ee0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2ee4: 0xc24cb08
    ctx->pc = 0x1E2EE4u;
    SET_GPR_U32(ctx, 31, 0x1E2EECu);
    ctx->pc = 0x1E2EE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937608));
    ctx->pc = 0x932C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent2__13EnemyMgrClassFPUi_0x932c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2EECu; }
        else if (ctx->pc != 0x1E2EECu) { ctx->pc = 0x1E2EECu; }
    }
    if (ctx->pc != 0x1E2EECu) { return; }
    ctx->pc = 0x1E2EECu;
    // 0x1e2eec: 0xae02000c
    ctx->pc = 0x1e2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e2ef0: 0x7bbf0010
    ctx->pc = 0x1e2ef0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2ef4: 0x7bb00000
    ctx->pc = 0x1e2ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2ef8: 0x3e00008
    ctx->pc = 0x1E2EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2EFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2F00u;
}
