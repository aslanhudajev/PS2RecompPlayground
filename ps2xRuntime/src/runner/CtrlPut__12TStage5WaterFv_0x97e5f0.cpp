#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void CtrlPut__12TStage5WaterFv_0x97e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CtrlPut__12TStage5WaterFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("CtrlPut__12TStage5WaterFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
