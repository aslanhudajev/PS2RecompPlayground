#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_Tc2Time29N
// Address: 0x19e438 - 0x19e470
void sftim_Tc2Time29N_0x19e438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_Tc2Time29N");


    ctx->pc = 0x19e438u;

    // 0x19e438: 0x27bdffd0
    ctx->pc = 0x19e438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e43c: 0xffb10010
    ctx->pc = 0x19e43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e440: 0xffb00000
    ctx->pc = 0x19e440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e444: 0x80882d
    ctx->pc = 0x19e444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e448: 0xe0802d
    ctx->pc = 0x19e448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e44c: 0xffbf0020
    ctx->pc = 0x19e44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e450: 0xc0678ea
    ctx->pc = 0x19E450u;
    SET_GPR_U32(ctx, 31, 0x19E458u);
    ctx->pc = 0x19E454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30000));
    ctx->pc = 0x19E3A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_Tc2TimeN_0x19e3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E458u; }
        else if (ctx->pc != 0x19E458u) { ctx->pc = 0x19E458u; }
    }
    if (ctx->pc != 0x19E458u) { return; }
    ctx->pc = 0x19E458u;
    // 0x19e458: 0xae110000
    ctx->pc = 0x19e458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x19e45c: 0xdfbf0020
    ctx->pc = 0x19e45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e460: 0xdfb10010
    ctx->pc = 0x19e460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e464: 0xdfb00000
    ctx->pc = 0x19e464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e468: 0x3e00008
    ctx->pc = 0x19E468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E46Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E470u;
}
