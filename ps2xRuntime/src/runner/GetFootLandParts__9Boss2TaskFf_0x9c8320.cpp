#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void GetFootLandParts__9Boss2TaskFf_0x9c8320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetFootLandParts__9Boss2TaskFf");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("GetFootLandParts__9Boss2TaskFf", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
