#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_Finish
// Address: 0x18fc20 - 0x18fc48
void SFADXT_Finish_0x18fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_Finish");


    ctx->pc = 0x18fc20u;

    // 0x18fc20: 0x27bdfff0
    ctx->pc = 0x18fc20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18fc24: 0xffbf0000
    ctx->pc = 0x18fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fc28: 0xc05b700
    ctx->pc = 0x18FC28u;
    SET_GPR_U32(ctx, 31, 0x18FC30u);
    ctx->pc = 0x16DC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFA_Finish_0x16dc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC30u; }
        else if (ctx->pc != 0x18FC30u) { ctx->pc = 0x18FC30u; }
    }
    if (ctx->pc != 0x18FC30u) { return; }
    ctx->pc = 0x18FC30u;
    // 0x18fc30: 0xc05b15a
    ctx->pc = 0x18FC30u;
    SET_GPR_U32(ctx, 31, 0x18FC38u);
    ctx->pc = 0x16C568u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Finish_0x16c568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC38u; }
        else if (ctx->pc != 0x18FC38u) { ctx->pc = 0x18FC38u; }
    }
    if (ctx->pc != 0x18FC38u) { return; }
    ctx->pc = 0x18FC38u;
    // 0x18fc38: 0xdfbf0000
    ctx->pc = 0x18fc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fc3c: 0x102d
    ctx->pc = 0x18fc3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc40: 0x3e00008
    ctx->pc = 0x18FC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FC48u;
}
