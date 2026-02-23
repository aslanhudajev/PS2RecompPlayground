#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void mmm_strip_prism__FP19tagNL_PF_StripParamiPv_0x9429e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mmm_strip_prism__FP19tagNL_PF_StripParamiPv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("mmm_strip_prism__FP19tagNL_PF_StripParamiPv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
