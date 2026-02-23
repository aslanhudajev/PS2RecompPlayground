#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_Tc2Time59N
// Address: 0x19e470 - 0x19e4a8
void sftim_Tc2Time59N_0x19e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_Tc2Time59N");


    ctx->pc = 0x19e470u;

    // 0x19e470: 0x27bdffd0
    ctx->pc = 0x19e470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e474: 0xffb10010
    ctx->pc = 0x19e474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e478: 0xffb00000
    ctx->pc = 0x19e478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e47c: 0x80882d
    ctx->pc = 0x19e47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e480: 0xe0802d
    ctx->pc = 0x19e480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e484: 0xffbf0020
    ctx->pc = 0x19e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19e488: 0xc0678ea
    ctx->pc = 0x19E488u;
    SET_GPR_U32(ctx, 31, 0x19E490u);
    ctx->pc = 0x19E48Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 60000));
    ctx->pc = 0x19E3A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_Tc2TimeN_0x19e3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E490u; }
        else if (ctx->pc != 0x19E490u) { ctx->pc = 0x19E490u; }
    }
    if (ctx->pc != 0x19E490u) { return; }
    ctx->pc = 0x19E490u;
    // 0x19e490: 0xae110000
    ctx->pc = 0x19e490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x19e494: 0xdfbf0020
    ctx->pc = 0x19e494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e498: 0xdfb10010
    ctx->pc = 0x19e498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e49c: 0xdfb00000
    ctx->pc = 0x19e49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e4a0: 0x3e00008
    ctx->pc = 0x19E4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E4A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E4A8u;
}
