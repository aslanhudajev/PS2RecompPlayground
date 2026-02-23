#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void put__16TyakudanCtrlTaskFP19_TYAKUDAN_PTCL_DATA_0x92c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("put__16TyakudanCtrlTaskFP19_TYAKUDAN_PTCL_DATA");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("put__16TyakudanCtrlTaskFP19_TYAKUDAN_PTCL_DATA", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
