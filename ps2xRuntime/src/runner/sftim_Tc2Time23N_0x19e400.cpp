#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_Tc2Time23N
// Address: 0x19e400 - 0x19e438
void sftim_Tc2Time23N_0x19e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_Tc2Time23N");


    ctx->pc = 0x19e400u;

    // 0x19e400: 0x27bdffd0
    ctx->pc = 0x19e400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e404: 0xffb10010
    ctx->pc = 0x19e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e408: 0xffb00000
    ctx->pc = 0x19e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e40c: 0x80882d
    ctx->pc = 0x19e40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e410: 0xe0802d
    ctx->pc = 0x19e410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e414: 0xffbf0020
    ctx->pc = 0x19e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e418: 0xc0678ea
    ctx->pc = 0x19E418u;
    SET_GPR_U32(ctx, 31, 0x19E420u);
    ctx->pc = 0x19E41Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24000));
    ctx->pc = 0x19E3A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_Tc2TimeN_0x19e3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E420u; }
        else if (ctx->pc != 0x19E420u) { ctx->pc = 0x19E420u; }
    }
    if (ctx->pc != 0x19E420u) { return; }
    ctx->pc = 0x19E420u;
    // 0x19e420: 0xae110000
    ctx->pc = 0x19e420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x19e424: 0xdfbf0020
    ctx->pc = 0x19e424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e428: 0xdfb10010
    ctx->pc = 0x19e428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e42c: 0xdfb00000
    ctx->pc = 0x19e42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e430: 0x3e00008
    ctx->pc = 0x19E430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E434u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E438u;
}
