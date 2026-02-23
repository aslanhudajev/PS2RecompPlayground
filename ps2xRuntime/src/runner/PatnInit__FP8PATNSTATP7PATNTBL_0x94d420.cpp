#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void PatnInit__FP8PATNSTATP7PATNTBL_0x94d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PatnInit__FP8PATNSTATP7PATNTBL");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("PatnInit__FP8PATNSTATP7PATNTBL", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
