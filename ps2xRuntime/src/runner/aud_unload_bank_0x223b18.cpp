#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_unload_bank
// Address: 0x223b18 - 0x223b40
void aud_unload_bank_0x223b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223b18u;

    // 0x223b18: 0x27bdfff0
    ctx->pc = 0x223b18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223b1c: 0xffbf0000
    ctx->pc = 0x223b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223b20: 0xc088cb6
    ctx->pc = 0x223B20u;
    SET_GPR_U32(ctx, 31, 0x223B28u);
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B28u; }
    }
    if (ctx->pc != 0x223B28u) { return; }
    ctx->pc = 0x223B28u;
    // 0x223b28: 0x24040005
    ctx->pc = 0x223b28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x223b2c: 0xc088ce8
    ctx->pc = 0x223B2Cu;
    SET_GPR_U32(ctx, 31, 0x223B34u);
    ctx->pc = 0x223B30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B34u; }
    }
    if (ctx->pc != 0x223B34u) { return; }
    ctx->pc = 0x223B34u;
    // 0x223b34: 0xdfbf0000
    ctx->pc = 0x223b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b38: 0x3e00008
    ctx->pc = 0x223B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223B3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223B40u;
}
