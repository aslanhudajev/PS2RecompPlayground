#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Colli_Ball_VS_Ball__FP9COLI_BALLP9COLI_BALL_0x92b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Colli_Ball_VS_Ball__FP9COLI_BALLP9COLI_BALL");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Colli_Ball_VS_Ball__FP9COLI_BALLP9COLI_BALL", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
