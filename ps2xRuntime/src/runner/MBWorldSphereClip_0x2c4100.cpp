#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWorldSphereClip
// Address: 0x2c4100 - 0x2c4210
void MBWorldSphereClip_0x2c4100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c4100u;

    // 0x2c4100: 0x27bdffc0
    ctx->pc = 0x2c4100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c4104: 0xffbf0020
    ctx->pc = 0x2c4104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c4108: 0xffb00010
    ctx->pc = 0x2c4108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c410c: 0xe7b40030
    ctx->pc = 0x2c410cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c4110: 0x80282d
    ctx->pc = 0x2c4110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4114: 0x46006506
    ctx->pc = 0x2c4114u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c4118: 0x3c020036
    ctx->pc = 0x2c4118u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c411c: 0x8c50dee0
    ctx->pc = 0x2c411cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c4120: 0x8e060004
    ctx->pc = 0x2c4120u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c4124: 0x3a0202d
    ctx->pc = 0x2c4124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4128: 0xc0b626d
    ctx->pc = 0x2C4128u;
    SET_GPR_U32(ctx, 31, 0x2C4130u);
    ctx->pc = 0x2C412Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 528));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4130u; }
    }
    if (ctx->pc != 0x2C4130u) { return; }
    ctx->pc = 0x2C4130u;
    // 0x2c4130: 0x8e020004
    ctx->pc = 0x2c4130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c4134: 0xc4400060
    ctx->pc = 0x2c4134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4138: 0x46140001
    ctx->pc = 0x2c4138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2c413c: 0xc7a10008
    ctx->pc = 0x2c413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4140: 0x46000834
    ctx->pc = 0x2c4140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4144: 0x0
    ctx->pc = 0x2c4144u;
    // NOP
    // 0x2c4148: 0x4501002c
    ctx->pc = 0x2C4148u;
    {
        const bool branch_taken_0x2c4148 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C414Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2c4148) {
            ctx->pc = 0x2C41FCu;
            goto label_2c41fc;
        }
    }
    ctx->pc = 0x2C4150u;
    // 0x2c4150: 0x8e020004
    ctx->pc = 0x2c4150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c4154: 0xc4400064
    ctx->pc = 0x2c4154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4158: 0x4600a000
    ctx->pc = 0x2c4158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2c415c: 0xc7a10008
    ctx->pc = 0x2c415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4160: 0x46010034
    ctx->pc = 0x2c4160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4164: 0x0
    ctx->pc = 0x2c4164u;
    // NOP
    // 0x2c4168: 0x45010024
    ctx->pc = 0x2C4168u;
    {
        const bool branch_taken_0x2c4168 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C416Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2c4168) {
            ctx->pc = 0x2C41FCu;
            goto label_2c41fc;
        }
    }
    ctx->pc = 0x2C4170u;
    // 0x2c4170: 0x8e020004
    ctx->pc = 0x2c4170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c4174: 0xc7a10008
    ctx->pc = 0x2c4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4178: 0xc4400068
    ctx->pc = 0x2c4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c417c: 0x46000882
    ctx->pc = 0x2c417cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c4180: 0x46141080
    ctx->pc = 0x2c4180u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x2c4184: 0xc7a10000
    ctx->pc = 0x2c4184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4188: 0xc440006c
    ctx->pc = 0x2c4188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c418c: 0x46000842
    ctx->pc = 0x2c418cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c4190: 0x46011034
    ctx->pc = 0x2c4190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4194: 0x0
    ctx->pc = 0x2c4194u;
    // NOP
    // 0x2c4198: 0x45010018
    ctx->pc = 0x2C4198u;
    {
        const bool branch_taken_0x2c4198 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C419Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2c4198) {
            ctx->pc = 0x2C41FCu;
            goto label_2c41fc;
        }
    }
    ctx->pc = 0x2C41A0u;
    // 0x2c41a0: 0x46001007
    ctx->pc = 0x2c41a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2c41a4: 0x46000834
    ctx->pc = 0x2c41a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c41a8: 0x0
    ctx->pc = 0x2c41a8u;
    // NOP
    // 0x2c41ac: 0x45010013
    ctx->pc = 0x2C41ACu;
    {
        const bool branch_taken_0x2c41ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C41B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c41ac) {
            ctx->pc = 0x2C41FCu;
            goto label_2c41fc;
        }
    }
    ctx->pc = 0x2C41B4u;
    // 0x2c41b4: 0x8e020004
    ctx->pc = 0x2c41b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c41b8: 0xc7a10008
    ctx->pc = 0x2c41b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c41bc: 0xc4400070
    ctx->pc = 0x2c41bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c41c0: 0x46000882
    ctx->pc = 0x2c41c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c41c4: 0x46141080
    ctx->pc = 0x2c41c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x2c41c8: 0xc7a10004
    ctx->pc = 0x2c41c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c41cc: 0xc4400074
    ctx->pc = 0x2c41ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c41d0: 0x46000842
    ctx->pc = 0x2c41d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c41d4: 0x46011034
    ctx->pc = 0x2c41d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c41d8: 0x0
    ctx->pc = 0x2c41d8u;
    // NOP
    // 0x2c41dc: 0x45010007
    ctx->pc = 0x2C41DCu;
    {
        const bool branch_taken_0x2c41dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C41E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2c41dc) {
            ctx->pc = 0x2C41FCu;
            goto label_2c41fc;
        }
    }
    ctx->pc = 0x2C41E4u;
    // 0x2c41e4: 0x46001007
    ctx->pc = 0x2c41e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2c41e8: 0x46000834
    ctx->pc = 0x2c41e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c41ec: 0x0
    ctx->pc = 0x2c41ecu;
    // NOP
    // 0x2c41f0: 0x45000002
    ctx->pc = 0x2C41F0u;
    {
        const bool branch_taken_0x2c41f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C41F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c41f0) {
            ctx->pc = 0x2C41FCu;
            goto label_2c41fc;
        }
    }
    ctx->pc = 0x2C41F8u;
    // 0x2c41f8: 0x24020004
    ctx->pc = 0x2c41f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2c41fc:
    // 0x2c41fc: 0xdfbf0020
    ctx->pc = 0x2c41fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4200: 0xdfb00010
    ctx->pc = 0x2c4200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4204: 0xc7b40030
    ctx->pc = 0x2c4204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4208: 0x3e00008
    ctx->pc = 0x2C4208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C420Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C41FCu: goto label_2c41fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C4210u;
}
