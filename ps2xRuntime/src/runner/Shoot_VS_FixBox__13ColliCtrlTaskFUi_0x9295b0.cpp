#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Shoot_VS_FixBox__13ColliCtrlTaskFUi_0x9295b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Shoot_VS_FixBox__13ColliCtrlTaskFUi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Shoot_VS_FixBox__13ColliCtrlTaskFUi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
