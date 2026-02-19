#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CurTransmitterBlink
// Address: 0x215828 - 0x21587c
void CurTransmitterBlink_0x215828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x215828u;

    // 0x215828: 0x27bdffe0
    ctx->pc = 0x215828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21582c: 0xffbf0010
    ctx->pc = 0x21582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x215830: 0xffb00000
    ctx->pc = 0x215830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215834: 0x3c030033
    ctx->pc = 0x215834u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x215838: 0x24634b70
    ctx->pc = 0x215838u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19312));
    // 0x21583c: 0x3c020032
    ctx->pc = 0x21583cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215840: 0x8c42f7c0
    ctx->pc = 0x215840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965184)));
    // 0x215844: 0x21180
    ctx->pc = 0x215844u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x215848: 0x431021
    ctx->pc = 0x215848u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21584c: 0x3c100032
    ctx->pc = 0x21584cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x215850: 0x8c440030
    ctx->pc = 0x215850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x215854: 0x9205f7c4
    ctx->pc = 0x215854u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294965188)));
    // 0x215858: 0xc0b40c0
    ctx->pc = 0x215858u;
    SET_GPR_U32(ctx, 31, 0x215860u);
    ctx->pc = 0x21585Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215860u; }
    }
    if (ctx->pc != 0x215860u) { return; }
    ctx->pc = 0x215860u;
    // 0x215860: 0x9202f7c4
    ctx->pc = 0x215860u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294965188)));
    // 0x215864: 0x24420008
    ctx->pc = 0x215864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x215868: 0xa202f7c4
    ctx->pc = 0x215868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294965188), (uint8_t)GPR_U32(ctx, 2));
    // 0x21586c: 0xdfbf0010
    ctx->pc = 0x21586cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215870: 0xdfb00000
    ctx->pc = 0x215870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215874: 0x3e00008
    ctx->pc = 0x215874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215878u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21587Cu;
}
