#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBUnitProject
// Address: 0x2c65b0 - 0x2c6660
void MBUnitProject_0x2c65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c65b0u;

    // 0x2c65b0: 0x27bdfff0
    ctx->pc = 0x2c65b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c65b4: 0xc4800000
    ctx->pc = 0x2c65b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65b8: 0xc4a10000
    ctx->pc = 0x2c65b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c65bc: 0x46010000
    ctx->pc = 0x2c65bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c65c0: 0xe7a00000
    ctx->pc = 0x2c65c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c65c4: 0xc4800004
    ctx->pc = 0x2c65c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65c8: 0xc4a10004
    ctx->pc = 0x2c65c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c65cc: 0x46010000
    ctx->pc = 0x2c65ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c65d0: 0xe7a00004
    ctx->pc = 0x2c65d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c65d4: 0xc4810008
    ctx->pc = 0x2c65d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c65d8: 0xc4a00008
    ctx->pc = 0x2c65d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65dc: 0x46000840
    ctx->pc = 0x2c65dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c65e0: 0x3c013f80
    ctx->pc = 0x2c65e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c65e4: 0x44811000
    ctx->pc = 0x2c65e4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2c65e8: 0x46020834
    ctx->pc = 0x2c65e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c65ec: 0x0
    ctx->pc = 0x2c65ecu;
    // NOP
    // 0x2c65f0: 0x45010004
    ctx->pc = 0x2C65F0u;
    {
        const bool branch_taken_0x2c65f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C65F4u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x2c65f0) {
            ctx->pc = 0x2C6604u;
            goto label_2c6604;
        }
    }
    ctx->pc = 0x2C65F8u;
    // 0x2c65f8: 0x0
    ctx->pc = 0x2c65f8u;
    // NOP
    // 0x2c65fc: 0x0
    ctx->pc = 0x2c65fcu;
    // NOP
    // 0x2c6600: 0x46011083
    ctx->pc = 0x2c6600u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
label_2c6604:
    // 0x2c6604: 0xc7a00000
    ctx->pc = 0x2c6604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6608: 0x46001002
    ctx->pc = 0x2c6608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c660c: 0x3c03003a
    ctx->pc = 0x2c660cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c6610: 0x8c621bd0
    ctx->pc = 0x2c6610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 7120)));
    // 0x2c6614: 0xc4410000
    ctx->pc = 0x2c6614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6618: 0x46010002
    ctx->pc = 0x2c6618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c661c: 0xc4410008
    ctx->pc = 0x2c661cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6620: 0x46010000
    ctx->pc = 0x2c6620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6624: 0x46000064
    ctx->pc = 0x2c6624u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c6628: 0x44020800
    ctx->pc = 0x2c6628u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c662c: 0xa4c20000
    ctx->pc = 0x2c662cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6630: 0xc7a00004
    ctx->pc = 0x2c6630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6634: 0x46001002
    ctx->pc = 0x2c6634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c6638: 0x8c621bd0
    ctx->pc = 0x2c6638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 7120)));
    // 0x2c663c: 0xc4410004
    ctx->pc = 0x2c663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6640: 0x46010002
    ctx->pc = 0x2c6640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6644: 0xc441000c
    ctx->pc = 0x2c6644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6648: 0x46010000
    ctx->pc = 0x2c6648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c664c: 0x46000064
    ctx->pc = 0x2c664cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c6650: 0x44020800
    ctx->pc = 0x2c6650u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c6654: 0xa4c20002
    ctx->pc = 0x2c6654u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6658: 0x3e00008
    ctx->pc = 0x2C6658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C665Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6604u: goto label_2c6604;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C6660u;
}
