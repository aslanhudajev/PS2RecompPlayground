#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVu1ForceBreak
// Address: 0x2bcd78 - 0x2bcd9c
void pbVu1ForceBreak_0x2bcd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bcd78u;

    // 0x2bcd78: 0x27bdfff0
    ctx->pc = 0x2bcd78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bcd7c: 0xffbf0000
    ctx->pc = 0x2bcd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bcd80: 0xc0ace42
    ctx->pc = 0x2BCD80u;
    SET_GPR_U32(ctx, 31, 0x2BCD88u);
    ctx->pc = 0x2B3908u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVuFBRST_0x2b3908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD88u; }
    }
    if (ctx->pc != 0x2BCD88u) { return; }
    ctx->pc = 0x2BCD88u;
    // 0x2bcd88: 0xc0ace50
    ctx->pc = 0x2BCD88u;
    SET_GPR_U32(ctx, 31, 0x2BCD90u);
    ctx->pc = 0x2BCD8Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 256));
    ctx->pc = 0x2B3940u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetVuFBRST_0x2b3940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCD90u; }
    }
    if (ctx->pc != 0x2BCD90u) { return; }
    ctx->pc = 0x2BCD90u;
    // 0x2bcd90: 0xdfbf0000
    ctx->pc = 0x2bcd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcd94: 0x80af358
    ctx->pc = 0x2BCD94u;
    ctx->pc = 0x2BCD98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2BCD60u;
    pbGifForceBreak_0x2bcd60(rdram, ctx, runtime); return;
    ctx->pc = 0x2BCD9Cu;
}
