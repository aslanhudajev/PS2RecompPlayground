#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_milestone_ang
// Address: 0x23c470 - 0x23c4a8
void get_milestone_ang_0x23c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c470u;

    // 0x23c470: 0x27bdffd0
    ctx->pc = 0x23c470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c474: 0xffbf0020
    ctx->pc = 0x23c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23c478: 0xffb00010
    ctx->pc = 0x23c478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23c47c: 0x80802d
    ctx->pc = 0x23c47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c480: 0xa0202d
    ctx->pc = 0x23c480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c484: 0xc094494
    ctx->pc = 0x23C484u;
    SET_GPR_U32(ctx, 31, 0x23C48Cu);
    ctx->pc = 0x23C488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251250u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMilestonePos_0x251250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C48Cu; }
    }
    if (ctx->pc != 0x23C48Cu) { return; }
    ctx->pc = 0x23C48Cu;
    // 0x23c48c: 0x3a0202d
    ctx->pc = 0x23c48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c490: 0xc09a2aa
    ctx->pc = 0x23C490u;
    SET_GPR_U32(ctx, 31, 0x23C498u);
    ctx->pc = 0x23C494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C498u; }
    }
    if (ctx->pc != 0x23C498u) { return; }
    ctx->pc = 0x23C498u;
    // 0x23c498: 0xdfbf0020
    ctx->pc = 0x23c498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c49c: 0xdfb00010
    ctx->pc = 0x23c49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c4a0: 0x3e00008
    ctx->pc = 0x23C4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C4A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C4A8u;
}
