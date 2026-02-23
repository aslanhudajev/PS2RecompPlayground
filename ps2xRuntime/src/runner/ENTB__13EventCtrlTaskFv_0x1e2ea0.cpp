#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTB__13EventCtrlTaskFv
// Address: 0x1e2ea0 - 0x1e2ed0
void ENTB__13EventCtrlTaskFv_0x1e2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTB__13EventCtrlTaskFv");


    ctx->pc = 0x1e2ea0u;

    // 0x1e2ea0: 0x27bdffe0
    ctx->pc = 0x1e2ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2ea4: 0x7fbf0010
    ctx->pc = 0x1e2ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e2ea8: 0x7fb00000
    ctx->pc = 0x1e2ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2eac: 0x70808628
    ctx->pc = 0x1e2eacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e2eb0: 0x8e05000c
    ctx->pc = 0x1e2eb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2eb4: 0xc24cae0
    ctx->pc = 0x1E2EB4u;
    SET_GPR_U32(ctx, 31, 0x1E2EBCu);
    ctx->pc = 0x1E2EB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937608));
    ctx->pc = 0x932B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent__13EnemyMgrClassFPUi_0x932b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2EBCu; }
        else if (ctx->pc != 0x1E2EBCu) { ctx->pc = 0x1E2EBCu; }
    }
    if (ctx->pc != 0x1E2EBCu) { return; }
    ctx->pc = 0x1E2EBCu;
    // 0x1e2ebc: 0xae02000c
    ctx->pc = 0x1e2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e2ec0: 0x7bbf0010
    ctx->pc = 0x1e2ec0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2ec4: 0x7bb00000
    ctx->pc = 0x1e2ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2ec8: 0x3e00008
    ctx->pc = 0x1E2EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2ECCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2ED0u;
}
