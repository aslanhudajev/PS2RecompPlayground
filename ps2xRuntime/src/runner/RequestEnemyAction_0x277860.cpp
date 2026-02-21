#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RequestEnemyAction
// Address: 0x277860 - 0x2778dc
void RequestEnemyAction_0x277860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x277860u;

    // 0x277860: 0x24a2fff4
    ctx->pc = 0x277860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x277864: 0x2c420009
    ctx->pc = 0x277864u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 9));
    // 0x277868: 0x10400006
    ctx->pc = 0x277868u;
    {
        const bool branch_taken_0x277868 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27786Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x277868) {
            ctx->pc = 0x277884u;
            goto label_277884;
        }
    }
    ctx->pc = 0x277870u;
    // 0x277870: 0xc4c10390
    ctx->pc = 0x277870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277874: 0x44800000
    ctx->pc = 0x277874u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x277878: 0x46010034
    ctx->pc = 0x277878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27787c: 0x45010015
    ctx->pc = 0x27787Cu;
    {
        const bool branch_taken_0x27787c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27787c) {
            ctx->pc = 0x2778D4u;
            goto label_2778d4;
        }
    }
    ctx->pc = 0x277884u;
label_277884:
    // 0x277884: 0x24a2ffe8
    ctx->pc = 0x277884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x277888: 0x2c420003
    ctx->pc = 0x277888u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x27788c: 0x10400006
    ctx->pc = 0x27788Cu;
    {
        const bool branch_taken_0x27788c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x277890u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x27788c) {
            ctx->pc = 0x2778A8u;
            goto label_2778a8;
        }
    }
    ctx->pc = 0x277894u;
    // 0x277894: 0xc4c10390
    ctx->pc = 0x277894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277898: 0x44800000
    ctx->pc = 0x277898u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27789c: 0x46010034
    ctx->pc = 0x27789cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2778a0: 0x4501000c
    ctx->pc = 0x2778A0u;
    {
        const bool branch_taken_0x2778a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2778a0) {
            ctx->pc = 0x2778D4u;
            goto label_2778d4;
        }
    }
    ctx->pc = 0x2778A8u;
label_2778a8:
    // 0x2778a8: 0x2484ffc0
    ctx->pc = 0x2778a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x2778ac: 0x8cc300e4
    ctx->pc = 0x2778acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 228)));
    // 0x2778b0: 0x31880
    ctx->pc = 0x2778b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2778b4: 0x641821
    ctx->pc = 0x2778b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2778b8: 0x51080
    ctx->pc = 0x2778b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2778bc: 0x441021
    ctx->pc = 0x2778bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2778c0: 0x8c630000
    ctx->pc = 0x2778c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2778c4: 0x8c420000
    ctx->pc = 0x2778c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2778c8: 0x62182a
    ctx->pc = 0x2778c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2778cc: 0x54600001
    ctx->pc = 0x2778CCu;
    {
        const bool branch_taken_0x2778cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2778cc) {
            ctx->pc = 0x2778D0u;
            WRITE32(ADD32(GPR_U32(ctx, 6), 228), GPR_U32(ctx, 5));
            ctx->pc = 0x2778D4u;
            goto label_2778d4;
        }
    }
    ctx->pc = 0x2778D4u;
label_2778d4:
    // 0x2778d4: 0x3e00008
    ctx->pc = 0x2778D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277884u: goto label_277884;
            case 0x2778A8u: goto label_2778a8;
            case 0x2778D4u: goto label_2778d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2778DCu;
}
