#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void CtrlPost__14TBoss2WarpEff2Fv_0x9ca330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CtrlPost__14TBoss2WarpEff2Fv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("CtrlPost__14TBoss2WarpEff2Fv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
