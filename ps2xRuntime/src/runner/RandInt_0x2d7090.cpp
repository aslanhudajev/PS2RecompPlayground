#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RandInt
// Address: 0x2d7090 - 0x2d70cc
void RandInt_0x2d7090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d7090u;

    // 0x2d7090: 0x27bdffe0
    ctx->pc = 0x2d7090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7094: 0xffbf0010
    ctx->pc = 0x2d7094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d7098: 0xffb00000
    ctx->pc = 0x2d7098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d709c: 0xc0abc06
    ctx->pc = 0x2D709Cu;
    SET_GPR_U32(ctx, 31, 0x2D70A4u);
    ctx->pc = 0x2D70A0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D70A4u; }
    }
    if (ctx->pc != 0x2D70A4u) { return; }
    ctx->pc = 0x2D70A4u;
    // 0x2d70a4: 0x3c03003a
    ctx->pc = 0x2d70a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d70a8: 0xac6226a4
    ctx->pc = 0x2d70a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9892), GPR_U32(ctx, 2));
    // 0x2d70ac: 0x50001b
    ctx->pc = 0x2d70acu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 16) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x2d70b0: 0x1010
    ctx->pc = 0x2d70b0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2d70b4: 0x52000001
    ctx->pc = 0x2D70B4u;
    {
        const bool branch_taken_0x2d70b4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d70b4) {
            ctx->pc = 0x2D70B8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2D70BCu;
            goto label_2d70bc;
        }
    }
    ctx->pc = 0x2D70BCu;
label_2d70bc:
    // 0x2d70bc: 0xdfbf0010
    ctx->pc = 0x2d70bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d70c0: 0xdfb00000
    ctx->pc = 0x2d70c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d70c4: 0x3e00008
    ctx->pc = 0x2D70C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D70C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D70BCu: goto label_2d70bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D70CCu;
}
