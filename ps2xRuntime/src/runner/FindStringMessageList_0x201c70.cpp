#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindStringMessageList
// Address: 0x201c70 - 0x201c94
void FindStringMessageList_0x201c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201c70u;

    // 0x201c70: 0x27bdfff0
    ctx->pc = 0x201c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201c74: 0xffbf0000
    ctx->pc = 0x201c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201c78: 0x80282d
    ctx->pc = 0x201c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c7c: 0x3c040031
    ctx->pc = 0x201c7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x201c80: 0xc0806f2
    ctx->pc = 0x201C80u;
    SET_GPR_U32(ctx, 31, 0x201C88u);
    ctx->pc = 0x201C84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964904));
    ctx->pc = 0x201BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindStringMessageListSub_0x201bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201C88u; }
    }
    if (ctx->pc != 0x201C88u) { return; }
    ctx->pc = 0x201C88u;
    // 0x201c88: 0xdfbf0000
    ctx->pc = 0x201c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201c8c: 0x3e00008
    ctx->pc = 0x201C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201C94u;
}
