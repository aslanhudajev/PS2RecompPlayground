#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isceSifSendCmd
// Address: 0x305838 - 0x305874
void isceSifSendCmd_0x305838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x305838u;

    // 0x305838: 0xc0102d
    ctx->pc = 0x305838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30583c: 0xe0182d
    ctx->pc = 0x30583cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305840: 0x100582d
    ctx->pc = 0x305840u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305844: 0x27bdfff0
    ctx->pc = 0x305844u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305848: 0x120502d
    ctx->pc = 0x305848u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30584c: 0xa0302d
    ctx->pc = 0x30584cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305850: 0xffbf0000
    ctx->pc = 0x305850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305854: 0x40382d
    ctx->pc = 0x305854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305858: 0x60402d
    ctx->pc = 0x305858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30585c: 0x160482d
    ctx->pc = 0x30585cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305860: 0xc0c15b0
    ctx->pc = 0x305860u;
    SET_GPR_U32(ctx, 31, 0x305868u);
    ctx->pc = 0x305864u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x3056C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceSifSendCmd_0x3056c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305868u; }
    }
    if (ctx->pc != 0x305868u) { return; }
    ctx->pc = 0x305868u;
    // 0x305868: 0xdfbf0000
    ctx->pc = 0x305868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30586c: 0x3e00008
    ctx->pc = 0x30586Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305870u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305874u;
}
