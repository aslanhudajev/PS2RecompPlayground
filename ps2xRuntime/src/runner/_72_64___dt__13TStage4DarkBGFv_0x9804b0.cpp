#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _72_64___dt__13TStage4DarkBGFv_0x9804b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_72_64___dt__13TStage4DarkBGFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@72@64@__dt__13TStage4DarkBGFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
