#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eENBDOF__11DofCtrlTaskFPUi
// Address: 0x1d4f80 - 0x1d4fac
void eENBDOF__11DofCtrlTaskFPUi_0x1d4f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eENBDOF__11DofCtrlTaskFPUi");


    ctx->pc = 0x1d4f80u;

    // 0x1d4f80: 0x27bdffe0
    ctx->pc = 0x1d4f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4f84: 0x7fbf0010
    ctx->pc = 0x1d4f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d4f88: 0x7fb00000
    ctx->pc = 0x1d4f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4f8c: 0x70a08628
    ctx->pc = 0x1d4f8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d4f90: 0xc07535c
    ctx->pc = 0x1D4F90u;
    SET_GPR_U32(ctx, 31, 0x1D4F98u);
    ctx->pc = 0x1D4F94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->pc = 0x1D4D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        enable__11DofCtrlTaskFi_0x1d4d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F98u; }
        else if (ctx->pc != 0x1D4F98u) { ctx->pc = 0x1D4F98u; }
    }
    if (ctx->pc != 0x1D4F98u) { return; }
    ctx->pc = 0x1D4F98u;
    // 0x1d4f98: 0x2602000c
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1d4f9c: 0x7bbf0010
    ctx->pc = 0x1d4f9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4fa0: 0x7bb00000
    ctx->pc = 0x1d4fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4fa4: 0x3e00008
    ctx->pc = 0x1D4FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4FACu;
}
