#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: next_attract_wave
// Address: 0x282490 - 0x2824fc
void next_attract_wave_0x282490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282490u;

    // 0x282490: 0x27bdffe0
    ctx->pc = 0x282490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282494: 0xffbf0010
    ctx->pc = 0x282494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x282498: 0xffb00000
    ctx->pc = 0x282498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28249c: 0x3c020035
    ctx->pc = 0x28249cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2824a0: 0x8c429b8c
    ctx->pc = 0x2824a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941580)));
    // 0x2824a4: 0x14400005
    ctx->pc = 0x2824A4u;
    {
        const bool branch_taken_0x2824a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2824A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2824a4) {
            ctx->pc = 0x2824BCu;
            goto label_2824bc;
        }
    }
    ctx->pc = 0x2824ACu;
    // 0x2824ac: 0x8c429b98
    ctx->pc = 0x2824acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941592)));
    // 0x2824b0: 0x4410006
    ctx->pc = 0x2824B0u;
    {
        const bool branch_taken_0x2824b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2824B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2824b0) {
            ctx->pc = 0x2824CCu;
            goto label_2824cc;
        }
    }
    ctx->pc = 0x2824B8u;
    // 0x2824b8: 0x3c020035
    ctx->pc = 0x2824b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2824bc:
    // 0x2824bc: 0x3c030031
    ctx->pc = 0x2824bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2824c0: 0x8c63000c
    ctx->pc = 0x2824c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2824c4: 0x10000009
    ctx->pc = 0x2824C4u;
    {
        const bool branch_taken_0x2824c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2824C8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941592), GPR_U32(ctx, 3));
        if (branch_taken_0x2824c4) {
            ctx->pc = 0x2824ECu;
            goto label_2824ec;
        }
    }
    ctx->pc = 0x2824CCu;
label_2824cc:
    // 0x2824cc: 0xdc420e28
    ctx->pc = 0x2824ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2824d0: 0x30420080
    ctx->pc = 0x2824d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x2824d4: 0x14400006
    ctx->pc = 0x2824D4u;
    {
        const bool branch_taken_0x2824d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2824D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2824d4) {
            ctx->pc = 0x2824F0u;
            goto label_2824f0;
        }
    }
    ctx->pc = 0x2824DCu;
    // 0x2824dc: 0x3c100035
    ctx->pc = 0x2824dcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x2824e0: 0xc0988c6
    ctx->pc = 0x2824E0u;
    SET_GPR_U32(ctx, 31, 0x2824E8u);
    ctx->pc = 0x2824E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294941592)));
    ctx->pc = 0x262318u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextAttractWave_0x262318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824E8u; }
    }
    if (ctx->pc != 0x2824E8u) { return; }
    ctx->pc = 0x2824E8u;
    // 0x2824e8: 0xae029b98
    ctx->pc = 0x2824e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941592), GPR_U32(ctx, 2));
label_2824ec:
    // 0x2824ec: 0xdfbf0010
    ctx->pc = 0x2824ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2824f0:
    // 0x2824f0: 0xdfb00000
    ctx->pc = 0x2824f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2824f4: 0x3e00008
    ctx->pc = 0x2824F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2824F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2824BCu: goto label_2824bc;
            case 0x2824CCu: goto label_2824cc;
            case 0x2824ECu: goto label_2824ec;
            case 0x2824F0u: goto label_2824f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2824FCu;
}
