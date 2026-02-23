#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void newPtcl__19KomonoBoxKowareTaskFi_0x9e27a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("newPtcl__19KomonoBoxKowareTaskFi");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("newPtcl__19KomonoBoxKowareTaskFi", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
