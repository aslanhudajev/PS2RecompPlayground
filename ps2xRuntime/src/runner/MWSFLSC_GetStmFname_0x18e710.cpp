#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFLSC_GetStmFname
// Address: 0x18e710 - 0x18e72c
void MWSFLSC_GetStmFname_0x18e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFLSC_GetStmFname");


    ctx->pc = 0x18e710u;

    // 0x18e710: 0x27bdfff0
    ctx->pc = 0x18e710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e714: 0xffbf0000
    ctx->pc = 0x18e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e718: 0xc05e916
    ctx->pc = 0x18E718u;
    SET_GPR_U32(ctx, 31, 0x18E720u);
    ctx->pc = 0x18E71Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    ctx->pc = 0x17A458u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_GetStmFname_0x17a458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E720u; }
        else if (ctx->pc != 0x18E720u) { ctx->pc = 0x18E720u; }
    }
    if (ctx->pc != 0x18E720u) { return; }
    ctx->pc = 0x18E720u;
    // 0x18e720: 0xdfbf0000
    ctx->pc = 0x18e720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e724: 0x3e00008
    ctx->pc = 0x18E724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E72Cu;
}
