#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void TyakudanMgrBorn__FP13_TYAKUDAN_PRM_0x92ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("TyakudanMgrBorn__FP13_TYAKUDAN_PRM");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("TyakudanMgrBorn__FP13_TYAKUDAN_PRM", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
