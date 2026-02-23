#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void ps2___ct__14EnEtc4Obj2TaskFP13EN_ETC4_OBJTBP11tagNLmatrixfff_0x94cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2___ct__14EnEtc4Obj2TaskFP13EN_ETC4_OBJTBP11tagNLmatrixfff");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("__ct__14EnEtc4Obj2TaskFP13EN_ETC4_OBJTBP11tagNLmatrixfff", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
