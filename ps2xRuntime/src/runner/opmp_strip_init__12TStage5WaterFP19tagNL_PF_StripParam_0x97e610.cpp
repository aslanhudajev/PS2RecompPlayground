#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void opmp_strip_init__12TStage5WaterFP19tagNL_PF_StripParam_0x97e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("opmp_strip_init__12TStage5WaterFP19tagNL_PF_StripParam");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("opmp_strip_init__12TStage5WaterFP19tagNL_PF_StripParam", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
