#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void BranchInit__9Boss2TaskFP12BS2BRANCHPRM_0x9c7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BranchInit__9Boss2TaskFP12BS2BRANCHPRM");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("BranchInit__9Boss2TaskFP12BS2BRANCHPRM", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
