#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioAng
// Address: 0x221920 - 0x221a08
void AudioAng_0x221920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221920u;

    // 0x221920: 0x27bdffd0
    ctx->pc = 0x221920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221924: 0xffbf0020
    ctx->pc = 0x221924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x221928: 0xffb00010
    ctx->pc = 0x221928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22192c: 0x3c020032
    ctx->pc = 0x22192cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221930: 0x8c42fd94
    ctx->pc = 0x221930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966676)));
    // 0x221934: 0x5440002f
    ctx->pc = 0x221934u;
    {
        const bool branch_taken_0x221934 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x221934) {
            ctx->pc = 0x221938u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 127));
            ctx->pc = 0x2219F4u;
            goto label_2219f4;
        }
    }
    ctx->pc = 0x22193Cu;
    // 0x22193c: 0x14800003
    ctx->pc = 0x22193Cu;
    {
        const bool branch_taken_0x22193c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x221940u;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        if (branch_taken_0x22193c) {
            ctx->pc = 0x22194Cu;
            goto label_22194c;
        }
    }
    ctx->pc = 0x221944u;
    // 0x221944: 0x1000002b
    ctx->pc = 0x221944u;
    {
        const bool branch_taken_0x221944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221948u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 127));
        if (branch_taken_0x221944) {
            ctx->pc = 0x2219F4u;
            goto label_2219f4;
        }
    }
    ctx->pc = 0x22194Cu;
label_22194c:
    // 0x22194c: 0x2610eb60
    ctx->pc = 0x22194cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294962016));
    // 0x221950: 0xc4800000
    ctx->pc = 0x221950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221954: 0xc6010140
    ctx->pc = 0x221954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221958: 0x46010001
    ctx->pc = 0x221958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22195c: 0xe7a00000
    ctx->pc = 0x22195cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x221960: 0xc4800008
    ctx->pc = 0x221960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221964: 0xc6010148
    ctx->pc = 0x221964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221968: 0x46010001
    ctx->pc = 0x221968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22196c: 0xe7a00008
    ctx->pc = 0x22196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x221970: 0xafa00004
    ctx->pc = 0x221970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x221974: 0xc0b58a4
    ctx->pc = 0x221974u;
    SET_GPR_U32(ctx, 31, 0x22197Cu);
    ctx->pc = 0x221978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22197Cu; }
    }
    if (ctx->pc != 0x22197Cu) { return; }
    ctx->pc = 0x22197Cu;
    // 0x22197c: 0xc7a50000
    ctx->pc = 0x22197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x221980: 0xc6030010
    ctx->pc = 0x221980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x221984: 0x46032842
    ctx->pc = 0x221984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x221988: 0xc7a00004
    ctx->pc = 0x221988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22198c: 0xc6020014
    ctx->pc = 0x22198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x221990: 0x46020002
    ctx->pc = 0x221990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x221994: 0x46000840
    ctx->pc = 0x221994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x221998: 0xc7a40008
    ctx->pc = 0x221998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22199c: 0xc6020018
    ctx->pc = 0x22199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2219a0: 0x46022002
    ctx->pc = 0x2219a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2219a4: 0x46000840
    ctx->pc = 0x2219a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2219a8: 0x3c0142ff
    ctx->pc = 0x2219a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17151 << 16));
    // 0x2219ac: 0x44810000
    ctx->pc = 0x2219acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2219b0: 0x46000842
    ctx->pc = 0x2219b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2219b4: 0x46000840
    ctx->pc = 0x2219b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2219b8: 0x46000824
    ctx->pc = 0x2219b8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x2219bc: 0x44040000
    ctx->pc = 0x2219bcu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x2219c0: 0x46051082
    ctx->pc = 0x2219c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2219c4: 0x460418c2
    ctx->pc = 0x2219c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2219c8: 0x46021834
    ctx->pc = 0x2219c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2219cc: 0x0
    ctx->pc = 0x2219ccu;
    // NOP
    // 0x2219d0: 0x45030001
    ctx->pc = 0x2219D0u;
    {
        const bool branch_taken_0x2219d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2219d0) {
            ctx->pc = 0x2219D4u;
            SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->pc = 0x2219D8u;
            goto label_2219d8;
        }
    }
    ctx->pc = 0x2219D8u;
label_2219d8:
    // 0x2219d8: 0x2882ff00
    ctx->pc = 0x2219d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4294967040));
    // 0x2219dc: 0x54400004
    ctx->pc = 0x2219DCu;
    {
        const bool branch_taken_0x2219dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2219dc) {
            ctx->pc = 0x2219E0u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
            ctx->pc = 0x2219F0u;
            goto label_2219f0;
        }
    }
    ctx->pc = 0x2219E4u;
    // 0x2219e4: 0x28830100
    ctx->pc = 0x2219e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 256));
    // 0x2219e8: 0x240200ff
    ctx->pc = 0x2219e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2219ec: 0x83100b
    ctx->pc = 0x2219ecu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_2219f0:
    // 0x2219f0: 0x40202d
    ctx->pc = 0x2219f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2219f4:
    // 0x2219f4: 0x80102d
    ctx->pc = 0x2219f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219f8: 0xdfbf0020
    ctx->pc = 0x2219f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2219fc: 0xdfb00010
    ctx->pc = 0x2219fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221a00: 0x3e00008
    ctx->pc = 0x221A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221A04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22194Cu: goto label_22194c;
            case 0x2219D8u: goto label_2219d8;
            case 0x2219F0u: goto label_2219f0;
            case 0x2219F4u: goto label_2219f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221A08u;
}
