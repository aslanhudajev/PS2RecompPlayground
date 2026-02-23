#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_ForwardTa
// Address: 0x183a38 - 0x183a84
void MPVCMC_ForwardTa_0x183a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_ForwardTa");


    ctx->pc = 0x183a38u;

    // 0x183a38: 0x27bdffc0
    ctx->pc = 0x183a38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183a3c: 0xffb00010
    ctx->pc = 0x183a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x183a40: 0x3a0302d
    ctx->pc = 0x183a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a44: 0x80802d
    ctx->pc = 0x183a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a48: 0xffb10020
    ctx->pc = 0x183a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x183a4c: 0xffbf0030
    ctx->pc = 0x183a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x183a50: 0x261100e8
    ctx->pc = 0x183a50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 232));
    // 0x183a54: 0x260701d0
    ctx->pc = 0x183a54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 464));
    // 0x183a58: 0x26080254
    ctx->pc = 0x183a58u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 596));
    // 0x183a5c: 0xc060ed0
    ctx->pc = 0x183A5Cu;
    SET_GPR_U32(ctx, 31, 0x183A64u);
    ctx->pc = 0x183A60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x183B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OneReadMb_0x183b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A64u; }
        else if (ctx->pc != 0x183A64u) { ctx->pc = 0x183A64u; }
    }
    if (ctx->pc != 0x183A64u) { return; }
    ctx->pc = 0x183A64u;
    // 0x183a64: 0x200202d
    ctx->pc = 0x183a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a68: 0xc060f6e
    ctx->pc = 0x183A68u;
    SET_GPR_U32(ctx, 31, 0x183A70u);
    ctx->pc = 0x183A6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183DB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OneMakeMbTa_0x183db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183A70u; }
        else if (ctx->pc != 0x183A70u) { ctx->pc = 0x183A70u; }
    }
    if (ctx->pc != 0x183A70u) { return; }
    ctx->pc = 0x183A70u;
    // 0x183a70: 0xdfbf0030
    ctx->pc = 0x183a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183a74: 0xdfb10020
    ctx->pc = 0x183a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183a78: 0xdfb00010
    ctx->pc = 0x183a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a7c: 0x3e00008
    ctx->pc = 0x183A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183A80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183A84u;
}
