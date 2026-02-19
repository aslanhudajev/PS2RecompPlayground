#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetBossCamViewDist
// Address: 0x29ff58 - 0x29ffc4
void GetBossCamViewDist_0x29ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29ff58u;

    // 0x29ff58: 0x27bdffc0
    ctx->pc = 0x29ff58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29ff5c: 0xffbf0020
    ctx->pc = 0x29ff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29ff60: 0xffb10010
    ctx->pc = 0x29ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29ff64: 0xffb00000
    ctx->pc = 0x29ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ff68: 0xe7b50038
    ctx->pc = 0x29ff68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29ff6c: 0xe7b40030
    ctx->pc = 0x29ff6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29ff70: 0x80802d
    ctx->pc = 0x29ff70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff74: 0xa0882d
    ctx->pc = 0x29ff74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff78: 0xc0a7f9e
    ctx->pc = 0x29FF78u;
    SET_GPR_U32(ctx, 31, 0x29FF80u);
    ctx->pc = 0x29FF7Cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x29FE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerViewDist_0x29fe78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF80u; }
    }
    if (ctx->pc != 0x29FF80u) { return; }
    ctx->pc = 0x29FF80u;
    // 0x29ff80: 0x46000546
    ctx->pc = 0x29ff80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x29ff84: 0x220202d
    ctx->pc = 0x29ff84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff88: 0x4600a306
    ctx->pc = 0x29ff88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29ff8c: 0xc0a88aa
    ctx->pc = 0x29FF8Cu;
    SET_GPR_U32(ctx, 31, 0x29FF94u);
    ctx->pc = 0x29FF90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A22A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointInView_0x2a22a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF94u; }
    }
    if (ctx->pc != 0x29FF94u) { return; }
    ctx->pc = 0x29FF94u;
    // 0x29ff94: 0x46150034
    ctx->pc = 0x29ff94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ff98: 0x0
    ctx->pc = 0x29ff98u;
    // NOP
    // 0x29ff9c: 0x45030001
    ctx->pc = 0x29FF9Cu;
    {
        const bool branch_taken_0x29ff9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ff9c) {
            ctx->pc = 0x29FFA0u;
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x29FFA4u;
            goto label_29ffa4;
        }
    }
    ctx->pc = 0x29FFA4u;
label_29ffa4:
    // 0x29ffa4: 0x4600a806
    ctx->pc = 0x29ffa4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x29ffa8: 0xdfbf0020
    ctx->pc = 0x29ffa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ffac: 0xdfb10010
    ctx->pc = 0x29ffacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ffb0: 0xdfb00000
    ctx->pc = 0x29ffb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ffb4: 0xc7b50038
    ctx->pc = 0x29ffb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29ffb8: 0xc7b40030
    ctx->pc = 0x29ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ffbc: 0x3e00008
    ctx->pc = 0x29FFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FFC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29FFA4u: goto label_29ffa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29FFC4u;
}
