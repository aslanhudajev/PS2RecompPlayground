#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void Ctrl9_Put__13EnEtcThrowObjFv_0x93f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Ctrl9_Put__13EnEtcThrowObjFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("Ctrl9_Put__13EnEtcThrowObjFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
