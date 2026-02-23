#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void BnTask4Sub__11BnCtrlTask4FP3BN4iP11tagNLpoint3_0x934040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BnTask4Sub__11BnCtrlTask4FP3BN4iP11tagNLpoint3");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("BnTask4Sub__11BnCtrlTask4FP3BN4iP11tagNLpoint3", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
