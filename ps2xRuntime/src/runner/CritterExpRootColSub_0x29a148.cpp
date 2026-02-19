#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterExpRootColSub
// Address: 0x29a148 - 0x29a234
void CritterExpRootColSub_0x29a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29a148u;

    // 0x29a148: 0x27bdffb0
    ctx->pc = 0x29a148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29a14c: 0xffbf0030
    ctx->pc = 0x29a14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29a150: 0xffb20020
    ctx->pc = 0x29a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a154: 0xffb10010
    ctx->pc = 0x29a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a158: 0xffb00000
    ctx->pc = 0x29a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a15c: 0xe7b50048
    ctx->pc = 0x29a15cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29a160: 0xe7b40040
    ctx->pc = 0x29a160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29a164: 0x80802d
    ctx->pc = 0x29a164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a168: 0x46006506
    ctx->pc = 0x29a168u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x29a16c: 0xc0902d
    ctx->pc = 0x29a16cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a170: 0x46006d46
    ctx->pc = 0x29a170u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x29a174: 0xe0882d
    ctx->pc = 0x29a174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a178: 0xc6000060
    ctx->pc = 0x29a178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a17c: 0xc4a10000
    ctx->pc = 0x29a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a180: 0x46010001
    ctx->pc = 0x29a180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a184: 0xe6200000
    ctx->pc = 0x29a184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29a188: 0xc6000064
    ctx->pc = 0x29a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a18c: 0xc4a10004
    ctx->pc = 0x29a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a190: 0x46010001
    ctx->pc = 0x29a190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a194: 0xe6200004
    ctx->pc = 0x29a194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x29a198: 0xc6000068
    ctx->pc = 0x29a198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a19c: 0xc4a10008
    ctx->pc = 0x29a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a1a0: 0x46010001
    ctx->pc = 0x29a1a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a1a4: 0xe6200008
    ctx->pc = 0x29a1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x29a1a8: 0xc0b58fc
    ctx->pc = 0x29A1A8u;
    SET_GPR_U32(ctx, 31, 0x29A1B0u);
    ctx->pc = 0x29A1ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A1B0u; }
    }
    if (ctx->pc != 0x29A1B0u) { return; }
    ctx->pc = 0x29A1B0u;
    // 0x29a1b0: 0x8e020004
    ctx->pc = 0x29a1b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29a1b4: 0xc441007c
    ctx->pc = 0x29a1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a1b8: 0x4601a500
    ctx->pc = 0x29a1b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x29a1bc: 0x4600a034
    ctx->pc = 0x29a1bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a1c0: 0x0
    ctx->pc = 0x29a1c0u;
    // NOP
    // 0x29a1c4: 0x45010013
    ctx->pc = 0x29A1C4u;
    {
        const bool branch_taken_0x29a1c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A1C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a1c4) {
            ctx->pc = 0x29A214u;
            goto label_29a214;
        }
    }
    ctx->pc = 0x29A1CCu;
    // 0x29a1cc: 0x3c01bf80
    ctx->pc = 0x29a1ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x29a1d0: 0x44810000
    ctx->pc = 0x29a1d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29a1d4: 0x46150034
    ctx->pc = 0x29a1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a1d8: 0x0
    ctx->pc = 0x29a1d8u;
    // NOP
    // 0x29a1dc: 0x4500000d
    ctx->pc = 0x29A1DCu;
    {
        const bool branch_taken_0x29a1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A1E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29a1dc) {
            ctx->pc = 0x29A214u;
            goto label_29a214;
        }
    }
    ctx->pc = 0x29A1E4u;
    // 0x29a1e4: 0xc6220000
    ctx->pc = 0x29a1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a1e8: 0xc6400000
    ctx->pc = 0x29a1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a1ec: 0x46001082
    ctx->pc = 0x29a1ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29a1f0: 0xc6200008
    ctx->pc = 0x29a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a1f4: 0xc6410008
    ctx->pc = 0x29a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a1f8: 0x46010002
    ctx->pc = 0x29a1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29a1fc: 0x46001080
    ctx->pc = 0x29a1fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a200: 0x46151034
    ctx->pc = 0x29a200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a204: 0x0
    ctx->pc = 0x29a204u;
    // NOP
    // 0x29a208: 0x45010002
    ctx->pc = 0x29A208u;
    {
        const bool branch_taken_0x29a208 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A20Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a208) {
            ctx->pc = 0x29A214u;
            goto label_29a214;
        }
    }
    ctx->pc = 0x29A210u;
    // 0x29a210: 0x24020001
    ctx->pc = 0x29a210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_29a214:
    // 0x29a214: 0xdfbf0030
    ctx->pc = 0x29a214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a218: 0xdfb20020
    ctx->pc = 0x29a218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a21c: 0xdfb10010
    ctx->pc = 0x29a21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a220: 0xdfb00000
    ctx->pc = 0x29a220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a224: 0xc7b50048
    ctx->pc = 0x29a224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a228: 0xc7b40040
    ctx->pc = 0x29a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a22c: 0x3e00008
    ctx->pc = 0x29A22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A230u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A214u: goto label_29a214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A234u;
}
