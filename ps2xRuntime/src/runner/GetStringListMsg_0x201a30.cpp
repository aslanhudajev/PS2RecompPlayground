#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetStringListMsg
// Address: 0x201a30 - 0x201a5c
void GetStringListMsg_0x201a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201a30u;

    // 0x201a30: 0x27bdfff0
    ctx->pc = 0x201a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201a34: 0xffbf0000
    ctx->pc = 0x201a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201a38: 0x80102d
    ctx->pc = 0x201a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a3c: 0xa0302d
    ctx->pc = 0x201a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a40: 0x3c040031
    ctx->pc = 0x201a40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x201a44: 0x2484f6a8
    ctx->pc = 0x201a44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964904));
    // 0x201a48: 0xc08067c
    ctx->pc = 0x201A48u;
    SET_GPR_U32(ctx, 31, 0x201A50u);
    ctx->pc = 0x201A4Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2019F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringListMsgSub_0x2019f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A50u; }
    }
    if (ctx->pc != 0x201A50u) { return; }
    ctx->pc = 0x201A50u;
    // 0x201a50: 0xdfbf0000
    ctx->pc = 0x201a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201a54: 0x3e00008
    ctx->pc = 0x201A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201A5Cu;
}
