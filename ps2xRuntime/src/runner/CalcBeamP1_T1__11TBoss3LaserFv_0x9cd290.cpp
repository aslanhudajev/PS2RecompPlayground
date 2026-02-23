#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void CalcBeamP1_T1__11TBoss3LaserFv_0x9cd290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CalcBeamP1_T1__11TBoss3LaserFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("CalcBeamP1_T1__11TBoss3LaserFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
