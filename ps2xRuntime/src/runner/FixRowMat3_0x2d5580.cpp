#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FixRowMat3
// Address: 0x2d5580 - 0x2d55f4
void FixRowMat3_0x2d5580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5580u;

    // 0x2d5580: 0x27bdffe0
    ctx->pc = 0x2d5580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d5584: 0xffbf0010
    ctx->pc = 0x2d5584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5588: 0xffb00000
    ctx->pc = 0x2d5588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d558c: 0xc0b58ca
    ctx->pc = 0x2D558Cu;
    SET_GPR_U32(ctx, 31, 0x2D5594u);
    ctx->pc = 0x2D5590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5594u; }
    }
    if (ctx->pc != 0x2D5594u) { return; }
    ctx->pc = 0x2D5594u;
    // 0x2d5594: 0xc0b58ca
    ctx->pc = 0x2D5594u;
    SET_GPR_U32(ctx, 31, 0x2D559Cu);
    ctx->pc = 0x2D5598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D559Cu; }
    }
    if (ctx->pc != 0x2D559Cu) { return; }
    ctx->pc = 0x2D559Cu;
    // 0x2d559c: 0xc6040024
    ctx->pc = 0x2d559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d55a0: 0xc6030008
    ctx->pc = 0x2d55a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d55a4: 0x46032042
    ctx->pc = 0x2d55a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2d55a8: 0xc6020028
    ctx->pc = 0x2d55a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d55ac: 0xc6050004
    ctx->pc = 0x2d55acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d55b0: 0x46051002
    ctx->pc = 0x2d55b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2d55b4: 0x46000841
    ctx->pc = 0x2d55b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d55b8: 0xe6010010
    ctx->pc = 0x2d55b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2d55bc: 0xc6010000
    ctx->pc = 0x2d55bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d55c0: 0x46011082
    ctx->pc = 0x2d55c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d55c4: 0xc6000020
    ctx->pc = 0x2d55c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d55c8: 0x460300c2
    ctx->pc = 0x2d55c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d55cc: 0x46031081
    ctx->pc = 0x2d55ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2d55d0: 0xe6020014
    ctx->pc = 0x2d55d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2d55d4: 0x46050002
    ctx->pc = 0x2d55d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2d55d8: 0x46012102
    ctx->pc = 0x2d55d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d55dc: 0x46040001
    ctx->pc = 0x2d55dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2d55e0: 0xe6000018
    ctx->pc = 0x2d55e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2d55e4: 0xdfbf0010
    ctx->pc = 0x2d55e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d55e8: 0xdfb00000
    ctx->pc = 0x2d55e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d55ec: 0x3e00008
    ctx->pc = 0x2D55ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D55F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D55F4u;
}
