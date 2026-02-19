#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NormalVector
// Address: 0x2d6290 - 0x2d6328
void NormalVector_0x2d6290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6290u;

    // 0x2d6290: 0x27bdffe0
    ctx->pc = 0x2d6290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6294: 0xffbf0010
    ctx->pc = 0x2d6294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6298: 0xffb00000
    ctx->pc = 0x2d6298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d629c: 0x80802d
    ctx->pc = 0x2d629cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62a0: 0xc60c0000
    ctx->pc = 0x2d62a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d62a4: 0xc0b5c34
    ctx->pc = 0x2D62A4u;
    SET_GPR_U32(ctx, 31, 0x2D62ACu);
    ctx->pc = 0x2D62A8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D62ACu; }
    }
    if (ctx->pc != 0x2D62ACu) { return; }
    ctx->pc = 0x2D62ACu;
    // 0x2d62ac: 0x46000306
    ctx->pc = 0x2d62acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d62b0: 0xc0b5c34
    ctx->pc = 0x2D62B0u;
    SET_GPR_U32(ctx, 31, 0x2D62B8u);
    ctx->pc = 0x2D62B4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D62B8u; }
    }
    if (ctx->pc != 0x2D62B8u) { return; }
    ctx->pc = 0x2D62B8u;
    // 0x2d62b8: 0x46000086
    ctx->pc = 0x2d62b8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2d62bc: 0x44800000
    ctx->pc = 0x2d62bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d62c0: 0x46001036
    ctx->pc = 0x2d62c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d62c4: 0x45000005
    ctx->pc = 0x2D62C4u;
    {
        const bool branch_taken_0x2d62c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d62c4) {
            ctx->pc = 0x2D62DCu;
            goto label_2d62dc;
        }
    }
    ctx->pc = 0x2D62CCu;
    // 0x2d62cc: 0x3c013f80
    ctx->pc = 0x2d62ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d62d0: 0x44810800
    ctx->pc = 0x2d62d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d62d4: 0x10000007
    ctx->pc = 0x2D62D4u;
    {
        const bool branch_taken_0x2d62d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D62D8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2d62d4) {
            ctx->pc = 0x2D62F4u;
            goto label_2d62f4;
        }
    }
    ctx->pc = 0x2D62DCu;
label_2d62dc:
    // 0x2d62dc: 0x3c013f80
    ctx->pc = 0x2d62dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d62e0: 0x44810000
    ctx->pc = 0x2d62e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d62e4: 0x0
    ctx->pc = 0x2d62e4u;
    // NOP
    // 0x2d62e8: 0x0
    ctx->pc = 0x2d62e8u;
    // NOP
    // 0x2d62ec: 0x46020043
    ctx->pc = 0x2d62ecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x2d62f0: 0xc6000000
    ctx->pc = 0x2d62f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d62f4:
    // 0x2d62f4: 0x46000802
    ctx->pc = 0x2d62f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d62f8: 0xe6000000
    ctx->pc = 0x2d62f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d62fc: 0xc6000004
    ctx->pc = 0x2d62fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6300: 0x46000802
    ctx->pc = 0x2d6300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d6304: 0xe6000004
    ctx->pc = 0x2d6304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d6308: 0xc6000008
    ctx->pc = 0x2d6308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d630c: 0x46000802
    ctx->pc = 0x2d630cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d6310: 0xe6000008
    ctx->pc = 0x2d6310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d6314: 0x46001006
    ctx->pc = 0x2d6314u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x2d6318: 0xdfbf0010
    ctx->pc = 0x2d6318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d631c: 0xdfb00000
    ctx->pc = 0x2d631cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6320: 0x3e00008
    ctx->pc = 0x2D6320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6324u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D62DCu: goto label_2d62dc;
            case 0x2D62F4u: goto label_2d62f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D6328u;
}
