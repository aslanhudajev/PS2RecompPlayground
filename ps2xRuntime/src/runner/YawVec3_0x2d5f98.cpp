#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: YawVec3
// Address: 0x2d5f98 - 0x2d6028
void YawVec3_0x2d5f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5f98u;

    // 0x2d5f98: 0x27bdffb0
    ctx->pc = 0x2d5f98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d5f9c: 0xffbf0020
    ctx->pc = 0x2d5f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d5fa0: 0xffb10010
    ctx->pc = 0x2d5fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d5fa4: 0xffb00000
    ctx->pc = 0x2d5fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5fa8: 0xe7b70048
    ctx->pc = 0x2d5fa8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d5fac: 0xe7b60040
    ctx->pc = 0x2d5facu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d5fb0: 0xe7b50038
    ctx->pc = 0x2d5fb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d5fb4: 0xe7b40030
    ctx->pc = 0x2d5fb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d5fb8: 0x80802d
    ctx->pc = 0x2d5fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5fbc: 0xa0882d
    ctx->pc = 0x2d5fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5fc0: 0x46006586
    ctx->pc = 0x2d5fc0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2d5fc4: 0xc6150000
    ctx->pc = 0x2d5fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d5fc8: 0xc0b9dce
    ctx->pc = 0x2D5FC8u;
    SET_GPR_U32(ctx, 31, 0x2D5FD0u);
    ctx->pc = 0x2D5FCCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5FD0u; }
    }
    if (ctx->pc != 0x2D5FD0u) { return; }
    ctx->pc = 0x2D5FD0u;
    // 0x2d5fd0: 0x460005c6
    ctx->pc = 0x2d5fd0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2d5fd4: 0xc0b9e4a
    ctx->pc = 0x2D5FD4u;
    SET_GPR_U32(ctx, 31, 0x2D5FDCu);
    ctx->pc = 0x2D5FD8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5FDCu; }
    }
    if (ctx->pc != 0x2D5FDCu) { return; }
    ctx->pc = 0x2D5FDCu;
    // 0x2d5fdc: 0x4617a842
    ctx->pc = 0x2d5fdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x2d5fe0: 0x4600a082
    ctx->pc = 0x2d5fe0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d5fe4: 0x46020841
    ctx->pc = 0x2d5fe4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2d5fe8: 0xe6210000
    ctx->pc = 0x2d5fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d5fec: 0xc6010004
    ctx->pc = 0x2d5fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5ff0: 0xe6210004
    ctx->pc = 0x2d5ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d5ff4: 0x4617a502
    ctx->pc = 0x2d5ff4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x2d5ff8: 0x4600ad42
    ctx->pc = 0x2d5ff8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2d5ffc: 0x4615a500
    ctx->pc = 0x2d5ffcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2d6000: 0xe6340008
    ctx->pc = 0x2d6000u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d6004: 0xdfbf0020
    ctx->pc = 0x2d6004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6008: 0xdfb10010
    ctx->pc = 0x2d6008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d600c: 0xdfb00000
    ctx->pc = 0x2d600cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6010: 0xc7b70048
    ctx->pc = 0x2d6010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d6014: 0xc7b60040
    ctx->pc = 0x2d6014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d6018: 0xc7b50038
    ctx->pc = 0x2d6018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d601c: 0xc7b40030
    ctx->pc = 0x2d601cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d6020: 0x3e00008
    ctx->pc = 0x2D6020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6024u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6028u;
}
