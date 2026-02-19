#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcTargetDir
// Address: 0x28f708 - 0x28f7dc
void CalcTargetDir_0x28f708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28f708u;

    // 0x28f708: 0x27bdffc0
    ctx->pc = 0x28f708u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28f70c: 0xffbf0010
    ctx->pc = 0x28f70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28f710: 0xffb00000
    ctx->pc = 0x28f710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f714: 0xe7b70038
    ctx->pc = 0x28f714u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x28f718: 0xe7b60030
    ctx->pc = 0x28f718u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28f71c: 0xe7b50028
    ctx->pc = 0x28f71cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28f720: 0xe7b40020
    ctx->pc = 0x28f720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x28f724: 0x80802d
    ctx->pc = 0x28f724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f728: 0x46006586
    ctx->pc = 0x28f728u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x28f72c: 0x46006d06
    ctx->pc = 0x28f72cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x28f730: 0x460075c6
    ctx->pc = 0x28f730u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x28f734: 0x46007d46
    ctx->pc = 0x28f734u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x28f738: 0xc60c0000
    ctx->pc = 0x28f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28f73c: 0xc0b5c34
    ctx->pc = 0x28F73Cu;
    SET_GPR_U32(ctx, 31, 0x28F744u);
    ctx->pc = 0x28F740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F744u; }
    }
    if (ctx->pc != 0x28F744u) { return; }
    ctx->pc = 0x28F744u;
    // 0x28f744: 0x46000086
    ctx->pc = 0x28f744u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x28f748: 0x3c013f80
    ctx->pc = 0x28f748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28f74c: 0x44816000
    ctx->pc = 0x28f74cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28f750: 0x3c013a83
    ctx->pc = 0x28f750u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x28f754: 0x3421126f
    ctx->pc = 0x28f754u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x28f758: 0x44810000
    ctx->pc = 0x28f758u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x28f75c: 0x46020034
    ctx->pc = 0x28f75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f760: 0x0
    ctx->pc = 0x28f760u;
    // NOP
    // 0x28f764: 0x45000004
    ctx->pc = 0x28F764u;
    {
        const bool branch_taken_0x28f764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F768u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x28f764) {
            ctx->pc = 0x28F778u;
            goto label_28f778;
        }
    }
    ctx->pc = 0x28F76Cu;
    // 0x28f76c: 0x0
    ctx->pc = 0x28f76cu;
    // NOP
    // 0x28f770: 0x0
    ctx->pc = 0x28f770u;
    // NOP
    // 0x28f774: 0x46026303
    ctx->pc = 0x28f774u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
label_28f778:
    // 0x28f778: 0x46006002
    ctx->pc = 0x28f778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28f77c: 0xe6000000
    ctx->pc = 0x28f77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x28f780: 0xc6000008
    ctx->pc = 0x28f780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f784: 0x46006002
    ctx->pc = 0x28f784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28f788: 0xe6000008
    ctx->pc = 0x28f788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x28f78c: 0x46141082
    ctx->pc = 0x28f78cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x28f790: 0x460cb002
    ctx->pc = 0x28f790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x28f794: 0xc6010004
    ctx->pc = 0x28f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f798: 0x4601a840
    ctx->pc = 0x28f798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x28f79c: 0x46000842
    ctx->pc = 0x28f79cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f7a0: 0x3c013f00
    ctx->pc = 0x28f7a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28f7a4: 0x44810000
    ctx->pc = 0x28f7a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x28f7a8: 0x4600b802
    ctx->pc = 0x28f7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x28f7ac: 0x46020002
    ctx->pc = 0x28f7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x28f7b0: 0x46000840
    ctx->pc = 0x28f7b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28f7b4: 0x46140842
    ctx->pc = 0x28f7b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x28f7b8: 0xe6010004
    ctx->pc = 0x28f7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28f7bc: 0xdfbf0010
    ctx->pc = 0x28f7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f7c0: 0xdfb00000
    ctx->pc = 0x28f7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f7c4: 0xc7b70038
    ctx->pc = 0x28f7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28f7c8: 0xc7b60030
    ctx->pc = 0x28f7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x28f7cc: 0xc7b50028
    ctx->pc = 0x28f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28f7d0: 0xc7b40020
    ctx->pc = 0x28f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28f7d4: 0x3e00008
    ctx->pc = 0x28F7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F7D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28F778u: goto label_28f778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28F7DCu;
}
