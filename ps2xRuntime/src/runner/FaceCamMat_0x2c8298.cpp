#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FaceCamMat
// Address: 0x2c8298 - 0x2c83e0
void FaceCamMat_0x2c8298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8298u;

    // 0x2c8298: 0x27bdffb0
    ctx->pc = 0x2c8298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c829c: 0xffbf0030
    ctx->pc = 0x2c829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c82a0: 0xffb00020
    ctx->pc = 0x2c82a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2c82a4: 0xe7b50048
    ctx->pc = 0x2c82a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c82a8: 0xe7b40040
    ctx->pc = 0x2c82a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c82ac: 0x80802d
    ctx->pc = 0x2c82acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c82b0: 0x46006506
    ctx->pc = 0x2c82b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c82b4: 0x3c02003a
    ctx->pc = 0x2c82b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c82b8: 0x8c421bd0
    ctx->pc = 0x2c82b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2c82bc: 0xc44000a0
    ctx->pc = 0x2c82bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c82c0: 0xc6010030
    ctx->pc = 0x2c82c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c82c4: 0x46010001
    ctx->pc = 0x2c82c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c82c8: 0xe7a00000
    ctx->pc = 0x2c82c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c82cc: 0xc44000a4
    ctx->pc = 0x2c82ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c82d0: 0xc6010034
    ctx->pc = 0x2c82d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c82d4: 0x46010001
    ctx->pc = 0x2c82d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c82d8: 0xe7a00004
    ctx->pc = 0x2c82d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c82dc: 0xc44000a8
    ctx->pc = 0x2c82dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c82e0: 0xc6010038
    ctx->pc = 0x2c82e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c82e4: 0x46010001
    ctx->pc = 0x2c82e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c82e8: 0x4480a800
    ctx->pc = 0x2c82e8u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x2c82ec: 0x4615a032
    ctx->pc = 0x2c82ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c82f0: 0x0
    ctx->pc = 0x2c82f0u;
    // NOP
    // 0x2c82f4: 0x45010027
    ctx->pc = 0x2C82F4u;
    {
        const bool branch_taken_0x2c82f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C82F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x2c82f4) {
            ctx->pc = 0x2C8394u;
            goto label_2c8394;
        }
    }
    ctx->pc = 0x2C82FCu;
    // 0x2c82fc: 0x26040020
    ctx->pc = 0x2c82fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c8300: 0x27a50010
    ctx->pc = 0x2c8300u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c8304: 0xc0b59e6
    ctx->pc = 0x2C8304u;
    SET_GPR_U32(ctx, 31, 0x2C830Cu);
    ctx->pc = 0x2C8308u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 20));
    ctx->pc = 0x2D6798u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetYawPitch_0x2d6798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C830Cu; }
    }
    if (ctx->pc != 0x2C830Cu) { return; }
    ctx->pc = 0x2C830Cu;
    // 0x2c830c: 0x3a0202d
    ctx->pc = 0x2c830cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8310: 0x27a50018
    ctx->pc = 0x2c8310u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 24));
    // 0x2c8314: 0xc0b59e6
    ctx->pc = 0x2C8314u;
    SET_GPR_U32(ctx, 31, 0x2C831Cu);
    ctx->pc = 0x2C8318u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x2D6798u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetYawPitch_0x2d6798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C831Cu; }
    }
    if (ctx->pc != 0x2C831Cu) { return; }
    ctx->pc = 0x2C831Cu;
    // 0x2c831c: 0xc7a00018
    ctx->pc = 0x2c831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8320: 0xc7a10010
    ctx->pc = 0x2c8320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8324: 0x46010001
    ctx->pc = 0x2c8324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8328: 0xe7a00018
    ctx->pc = 0x2c8328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c832c: 0xc7a0001c
    ctx->pc = 0x2c832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8330: 0xc7a10014
    ctx->pc = 0x2c8330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8334: 0x46010001
    ctx->pc = 0x2c8334u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c8338: 0x4614a834
    ctx->pc = 0x2c8338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c833c: 0x0
    ctx->pc = 0x2c833cu;
    // NOP
    // 0x2c8340: 0x4500000c
    ctx->pc = 0x2C8340u;
    {
        const bool branch_taken_0x2c8340 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8344u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        if (branch_taken_0x2c8340) {
            ctx->pc = 0x2C8374u;
            goto label_2c8374;
        }
    }
    ctx->pc = 0x2C8348u;
    // 0x2c8348: 0x4600a034
    ctx->pc = 0x2c8348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c834c: 0x0
    ctx->pc = 0x2c834cu;
    // NOP
    // 0x2c8350: 0x45020003
    ctx->pc = 0x2C8350u;
    {
        const bool branch_taken_0x2c8350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8350) {
            ctx->pc = 0x2C8354u;
            ctx->f[12] = FPU_NEG_S(ctx->f[20]);
            ctx->pc = 0x2C8360u;
            goto label_2c8360;
        }
    }
    ctx->pc = 0x2C8358u;
    // 0x2c8358: 0x10000006
    ctx->pc = 0x2C8358u;
    {
        const bool branch_taken_0x2c8358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C835Cu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        if (branch_taken_0x2c8358) {
            ctx->pc = 0x2C8374u;
            goto label_2c8374;
        }
    }
    ctx->pc = 0x2C8360u;
label_2c8360:
    // 0x2c8360: 0xc7a0001c
    ctx->pc = 0x2c8360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8364: 0x460c0034
    ctx->pc = 0x2c8364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8368: 0x0
    ctx->pc = 0x2c8368u;
    // NOP
    // 0x2c836c: 0x45030001
    ctx->pc = 0x2C836Cu;
    {
        const bool branch_taken_0x2c836c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c836c) {
            ctx->pc = 0x2C8370u;
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
            ctx->pc = 0x2C8374u;
            goto label_2c8374;
        }
    }
    ctx->pc = 0x2C8374u;
label_2c8374:
    // 0x2c8374: 0xc7ac0018
    ctx->pc = 0x2c8374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8378: 0xc0b5632
    ctx->pc = 0x2C8378u;
    SET_GPR_U32(ctx, 31, 0x2C8380u);
    ctx->pc = 0x2C837Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8380u; }
    }
    if (ctx->pc != 0x2C8380u) { return; }
    ctx->pc = 0x2C8380u;
    // 0x2c8380: 0xc7ac001c
    ctx->pc = 0x2c8380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8384: 0xc0b5660
    ctx->pc = 0x2C8384u;
    SET_GPR_U32(ctx, 31, 0x2C838Cu);
    ctx->pc = 0x2C8388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5980u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchMat3_0x2d5980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C838Cu; }
    }
    if (ctx->pc != 0x2C838Cu) { return; }
    ctx->pc = 0x2C838Cu;
    // 0x2c838c: 0x1000000f
    ctx->pc = 0x2C838Cu;
    {
        const bool branch_taken_0x2c838c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8390u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2c838c) {
            ctx->pc = 0x2C83CCu;
            goto label_2c83cc;
        }
    }
    ctx->pc = 0x2C8394u;
label_2c8394:
    // 0x2c8394: 0xc60c0020
    ctx->pc = 0x2c8394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8398: 0xc0ba04a
    ctx->pc = 0x2C8398u;
    SET_GPR_U32(ctx, 31, 0x2C83A0u);
    ctx->pc = 0x2C839Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83A0u; }
    }
    if (ctx->pc != 0x2C83A0u) { return; }
    ctx->pc = 0x2C83A0u;
    // 0x2c83a0: 0xe7a00010
    ctx->pc = 0x2c83a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c83a4: 0xc7ac0000
    ctx->pc = 0x2c83a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c83a8: 0xc0ba04a
    ctx->pc = 0x2C83A8u;
    SET_GPR_U32(ctx, 31, 0x2C83B0u);
    ctx->pc = 0x2C83ACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83B0u; }
    }
    if (ctx->pc != 0x2C83B0u) { return; }
    ctx->pc = 0x2C83B0u;
    // 0x2c83b0: 0xc7a10010
    ctx->pc = 0x2c83b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c83b4: 0x46010001
    ctx->pc = 0x2c83b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c83b8: 0xe7a00018
    ctx->pc = 0x2c83b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c83bc: 0x46000306
    ctx->pc = 0x2c83bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c83c0: 0xc0b5632
    ctx->pc = 0x2C83C0u;
    SET_GPR_U32(ctx, 31, 0x2C83C8u);
    ctx->pc = 0x2C83C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C83C8u; }
    }
    if (ctx->pc != 0x2C83C8u) { return; }
    ctx->pc = 0x2C83C8u;
    // 0x2c83c8: 0xdfbf0030
    ctx->pc = 0x2c83c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c83cc:
    // 0x2c83cc: 0xdfb00020
    ctx->pc = 0x2c83ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c83d0: 0xc7b50048
    ctx->pc = 0x2c83d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c83d4: 0xc7b40040
    ctx->pc = 0x2c83d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c83d8: 0x3e00008
    ctx->pc = 0x2C83D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C83DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8360u: goto label_2c8360;
            case 0x2C8374u: goto label_2c8374;
            case 0x2C8394u: goto label_2c8394;
            case 0x2C83CCu: goto label_2c83cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C83E0u;
}
