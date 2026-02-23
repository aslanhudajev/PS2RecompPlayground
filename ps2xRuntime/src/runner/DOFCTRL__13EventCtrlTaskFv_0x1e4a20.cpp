#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DOFCTRL__13EventCtrlTaskFv
// Address: 0x1e4a20 - 0x1e4a50
void DOFCTRL__13EventCtrlTaskFv_0x1e4a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DOFCTRL__13EventCtrlTaskFv");


    ctx->pc = 0x1e4a20u;

    // 0x1e4a20: 0x27bdffe0
    ctx->pc = 0x1e4a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4a24: 0x7fbf0010
    ctx->pc = 0x1e4a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4a28: 0x7fb00000
    ctx->pc = 0x1e4a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4a2c: 0x70808628
    ctx->pc = 0x1e4a2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4a30: 0x8e05000c
    ctx->pc = 0x1e4a30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4a34: 0xc075390
    ctx->pc = 0x1E4A34u;
    SET_GPR_U32(ctx, 31, 0x1E4A3Cu);
    ctx->pc = 0x1E4A38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
    ctx->pc = 0x1D4E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent__11DofCtrlTaskFPUi_0x1d4e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A3Cu; }
        else if (ctx->pc != 0x1E4A3Cu) { ctx->pc = 0x1E4A3Cu; }
    }
    if (ctx->pc != 0x1E4A3Cu) { return; }
    ctx->pc = 0x1E4A3Cu;
    // 0x1e4a3c: 0xae02000c
    ctx->pc = 0x1e4a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e4a40: 0x7bbf0010
    ctx->pc = 0x1e4a40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4a44: 0x7bb00000
    ctx->pc = 0x1e4a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4a48: 0x3e00008
    ctx->pc = 0x1E4A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4A4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4A50u;
}
