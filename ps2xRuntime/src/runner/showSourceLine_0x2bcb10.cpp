#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: showSourceLine
// Address: 0x2bcb10 - 0x2bcb4c
void showSourceLine_0x2bcb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bcb10u;

    // 0x2bcb10: 0x27bdffe0
    ctx->pc = 0x2bcb10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bcb14: 0xffbf0010
    ctx->pc = 0x2bcb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bcb18: 0xffb00000
    ctx->pc = 0x2bcb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bcb1c: 0x80802d
    ctx->pc = 0x2bcb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb20: 0x8e05000c
    ctx->pc = 0x2bcb20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bcb24: 0xc0ae584
    ctx->pc = 0x2BCB24u;
    SET_GPR_U32(ctx, 31, 0x2BCB2Cu);
    ctx->pc = 0x2BCB28u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    ctx->pc = 0x2B9610u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuGetSourceLineStr_0x2b9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCB2Cu; }
    }
    if (ctx->pc != 0x2BCB2Cu) { return; }
    ctx->pc = 0x2BCB2Cu;
    // 0x2bcb2c: 0x200202d
    ctx->pc = 0x2bcb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb30: 0x3c05003b
    ctx->pc = 0x2bcb30u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bcb34: 0x24a56390
    ctx->pc = 0x2bcb34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25488));
    // 0x2bcb38: 0x40302d
    ctx->pc = 0x2bcb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb3c: 0xdfbf0010
    ctx->pc = 0x2bcb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcb40: 0xdfb00000
    ctx->pc = 0x2bcb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcb44: 0x80aeed2
    ctx->pc = 0x2BCB44u;
    ctx->pc = 0x2BCB48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2BBB48u;
    pbVuMsgf_0x2bbb48(rdram, ctx, runtime); return;
    ctx->pc = 0x2BCB4Cu;
}
