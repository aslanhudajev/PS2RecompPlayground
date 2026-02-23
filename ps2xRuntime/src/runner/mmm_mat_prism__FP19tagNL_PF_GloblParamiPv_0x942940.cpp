#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void mmm_mat_prism__FP19tagNL_PF_GloblParamiPv_0x942940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mmm_mat_prism__FP19tagNL_PF_GloblParamiPv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("mmm_mat_prism__FP19tagNL_PF_GloblParamiPv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
