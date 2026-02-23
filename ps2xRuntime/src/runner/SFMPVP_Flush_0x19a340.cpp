#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_Flush
// Address: 0x19a340 - 0x19a374
void SFMPVP_Flush_0x19a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_Flush");


    ctx->pc = 0x19a340u;

    // 0x19a340: 0x27bdffe0
    ctx->pc = 0x19a340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a344: 0xffb00000
    ctx->pc = 0x19a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a348: 0x80802d
    ctx->pc = 0x19a348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a34c: 0xffbf0010
    ctx->pc = 0x19a34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a350: 0x26043d78
    ctx->pc = 0x19a350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 15736));
    // 0x19a354: 0xc06675c
    ctx->pc = 0x19A354u;
    SET_GPR_U32(ctx, 31, 0x19A35Cu);
    ctx->pc = 0x19A358u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 15632));
    ctx->pc = 0x199D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufFlush_0x199d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A35Cu; }
        else if (ctx->pc != 0x19A35Cu) { ctx->pc = 0x19A35Cu; }
    }
    if (ctx->pc != 0x19A35Cu) { return; }
    ctx->pc = 0x19A35Cu;
    // 0x19a35c: 0x24020001
    ctx->pc = 0x19a35cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a360: 0xdfbf0010
    ctx->pc = 0x19a360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a364: 0xae02001c
    ctx->pc = 0x19a364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x19a368: 0xdfb00000
    ctx->pc = 0x19a368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a36c: 0x3e00008
    ctx->pc = 0x19A36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A370u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A374u;
}
