#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void AttackPosSet2__12EnZombieTaskFP11tagNLpoint3Us_0x95fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AttackPosSet2__12EnZombieTaskFP11tagNLpoint3Us");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("AttackPosSet2__12EnZombieTaskFP11tagNLpoint3Us", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
