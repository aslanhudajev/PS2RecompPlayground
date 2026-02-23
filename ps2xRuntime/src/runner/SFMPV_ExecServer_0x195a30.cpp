#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPV_ExecServer
// Address: 0x195a30 - 0x195a4c
void SFMPV_ExecServer_0x195a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPV_ExecServer");


    ctx->pc = 0x195a30u;

    // 0x195a30: 0x27bdfff0
    ctx->pc = 0x195a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195a34: 0xffbf0000
    ctx->pc = 0x195a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195a38: 0xc065694
    ctx->pc = 0x195A38u;
    SET_GPR_U32(ctx, 31, 0x195A40u);
    ctx->pc = 0x195A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ExecServerSub_0x195a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A40u; }
        else if (ctx->pc != 0x195A40u) { ctx->pc = 0x195A40u; }
    }
    if (ctx->pc != 0x195A40u) { return; }
    ctx->pc = 0x195A40u;
    // 0x195a40: 0xdfbf0000
    ctx->pc = 0x195a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195a44: 0x3e00008
    ctx->pc = 0x195A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195A48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195A4Cu;
}
