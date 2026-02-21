#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_flush_banks
// Address: 0x223b40 - 0x223b68
void aud_flush_banks_0x223b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223b40u;

    // 0x223b40: 0x27bdfff0
    ctx->pc = 0x223b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223b44: 0xffbf0000
    ctx->pc = 0x223b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223b48: 0xc088cb6
    ctx->pc = 0x223B48u;
    SET_GPR_U32(ctx, 31, 0x223B50u);
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B50u; }
    }
    if (ctx->pc != 0x223B50u) { return; }
    ctx->pc = 0x223B50u;
    // 0x223b50: 0x24040006
    ctx->pc = 0x223b50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x223b54: 0xc088ce8
    ctx->pc = 0x223B54u;
    SET_GPR_U32(ctx, 31, 0x223B5Cu);
    ctx->pc = 0x223B58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B5Cu; }
    }
    if (ctx->pc != 0x223B5Cu) { return; }
    ctx->pc = 0x223B5Cu;
    // 0x223b5c: 0xdfbf0000
    ctx->pc = 0x223b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b60: 0x3e00008
    ctx->pc = 0x223B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223B64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223B68u;
}
