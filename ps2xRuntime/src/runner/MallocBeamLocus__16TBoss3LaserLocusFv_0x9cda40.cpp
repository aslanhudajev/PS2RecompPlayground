#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void MallocBeamLocus__16TBoss3LaserLocusFv_0x9cda40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MallocBeamLocus__16TBoss3LaserLocusFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("MallocBeamLocus__16TBoss3LaserLocusFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
