#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SlowNormalVector
// Address: 0x2d6328 - 0x2d63ec
void SlowNormalVector_0x2d6328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6328u;

    // 0x2d6328: 0x27bdffe0
    ctx->pc = 0x2d6328u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d632c: 0xffbf0010
    ctx->pc = 0x2d632cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6330: 0xffb00000
    ctx->pc = 0x2d6330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6334: 0x80802d
    ctx->pc = 0x2d6334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6338: 0xc6000000
    ctx->pc = 0x2d6338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d633c: 0x46000302
    ctx->pc = 0x2d633cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d6340: 0xc6000004
    ctx->pc = 0x2d6340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6344: 0x46000002
    ctx->pc = 0x2d6344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d6348: 0x46006300
    ctx->pc = 0x2d6348u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2d634c: 0xc6000008
    ctx->pc = 0x2d634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6350: 0x46000002
    ctx->pc = 0x2d6350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d6354: 0x46006300
    ctx->pc = 0x2d6354u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2d6358: 0x0
    ctx->pc = 0x2d6358u;
    // NOP
    // 0x2d635c: 0x0
    ctx->pc = 0x2d635cu;
    // NOP
    // 0x2d6360: 0x460c0004
    ctx->pc = 0x2d6360u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d6364: 0x46000032
    ctx->pc = 0x2d6364u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6368: 0x0
    ctx->pc = 0x2d6368u;
    // NOP
    // 0x2d636c: 0x45010004
    ctx->pc = 0x2D636Cu;
    {
        const bool branch_taken_0x2d636c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6370u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2d636c) {
            ctx->pc = 0x2D6380u;
            goto label_2d6380;
        }
    }
    ctx->pc = 0x2D6374u;
    // 0x2d6374: 0xc0ba284
    ctx->pc = 0x2D6374u;
    SET_GPR_U32(ctx, 31, 0x2D637Cu);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D637Cu; }
    }
    if (ctx->pc != 0x2D637Cu) { return; }
    ctx->pc = 0x2D637Cu;
    // 0x2d637c: 0x46000086
    ctx->pc = 0x2d637cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2d6380:
    // 0x2d6380: 0x44800000
    ctx->pc = 0x2d6380u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d6384: 0x46001036
    ctx->pc = 0x2d6384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6388: 0x45000005
    ctx->pc = 0x2D6388u;
    {
        const bool branch_taken_0x2d6388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6388) {
            ctx->pc = 0x2D63A0u;
            goto label_2d63a0;
        }
    }
    ctx->pc = 0x2D6390u;
    // 0x2d6390: 0x3c013f80
    ctx->pc = 0x2d6390u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d6394: 0x44810800
    ctx->pc = 0x2d6394u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d6398: 0x10000007
    ctx->pc = 0x2D6398u;
    {
        const bool branch_taken_0x2d6398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D639Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2d6398) {
            ctx->pc = 0x2D63B8u;
            goto label_2d63b8;
        }
    }
    ctx->pc = 0x2D63A0u;
label_2d63a0:
    // 0x2d63a0: 0x3c013f80
    ctx->pc = 0x2d63a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d63a4: 0x44810000
    ctx->pc = 0x2d63a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d63a8: 0x0
    ctx->pc = 0x2d63a8u;
    // NOP
    // 0x2d63ac: 0x0
    ctx->pc = 0x2d63acu;
    // NOP
    // 0x2d63b0: 0x46020043
    ctx->pc = 0x2d63b0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x2d63b4: 0xc6000000
    ctx->pc = 0x2d63b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d63b8:
    // 0x2d63b8: 0x46000802
    ctx->pc = 0x2d63b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d63bc: 0xe6000000
    ctx->pc = 0x2d63bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d63c0: 0xc6000004
    ctx->pc = 0x2d63c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d63c4: 0x46000802
    ctx->pc = 0x2d63c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d63c8: 0xe6000004
    ctx->pc = 0x2d63c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d63cc: 0xc6000008
    ctx->pc = 0x2d63ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d63d0: 0x46000802
    ctx->pc = 0x2d63d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d63d4: 0xe6000008
    ctx->pc = 0x2d63d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d63d8: 0x46001006
    ctx->pc = 0x2d63d8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x2d63dc: 0xdfbf0010
    ctx->pc = 0x2d63dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d63e0: 0xdfb00000
    ctx->pc = 0x2d63e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d63e4: 0x3e00008
    ctx->pc = 0x2D63E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D63E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D6380u: goto label_2d6380;
            case 0x2D63A0u: goto label_2d63a0;
            case 0x2D63B8u: goto label_2d63b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D63ECu;
}
