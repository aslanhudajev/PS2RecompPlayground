#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Parts_MoveBox_Check__13ColliCtrlTaskFP7_BODYPTUi_0x9298a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Parts_MoveBox_Check__13ColliCtrlTaskFP7_BODYPTUi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Parts_MoveBox_Check__13ColliCtrlTaskFP7_BODYPTUi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
