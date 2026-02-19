#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoLighting
// Address: 0x2806d8 - 0x28087c
void DoLighting_0x2806d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2806d8u;

    // 0x2806d8: 0x27bdffe0
    ctx->pc = 0x2806d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2806dc: 0xffbf0010
    ctx->pc = 0x2806dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2806e0: 0xc0abade
    ctx->pc = 0x2806E0u;
    SET_GPR_U32(ctx, 31, 0x2806E8u);
    ctx->pc = 0x2806E4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2AEB78u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPosLightDeleteAll_0x2aeb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2806E8u; }
    }
    if (ctx->pc != 0x2806E8u) { return; }
    ctx->pc = 0x2806E8u;
    // 0x2806e8: 0x3c020034
    ctx->pc = 0x2806e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2806ec: 0x8c42e7c8
    ctx->pc = 0x2806ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2806f0: 0x1040000b
    ctx->pc = 0x2806F0u;
    {
        const bool branch_taken_0x2806f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2806F4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2806f0) {
            ctx->pc = 0x280720u;
            goto label_280720;
        }
    }
    ctx->pc = 0x2806F8u;
    // 0x2806f8: 0x8c420000
    ctx->pc = 0x2806f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2806fc: 0x30420008
    ctx->pc = 0x2806fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x280700: 0x10400007
    ctx->pc = 0x280700u;
    {
        const bool branch_taken_0x280700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x280704u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x280700) {
            ctx->pc = 0x280720u;
            goto label_280720;
        }
    }
    ctx->pc = 0x280708u;
    // 0x280708: 0x3c01bf80
    ctx->pc = 0x280708u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x28070c: 0x44810000
    ctx->pc = 0x28070cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x280710: 0xe4403ab0
    ctx->pc = 0x280710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 15024), bits); }
    // 0x280714: 0x3c02003c
    ctx->pc = 0x280714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x280718: 0x1000001d
    ctx->pc = 0x280718u;
    {
        const bool branch_taken_0x280718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28071Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 15020), bits); }
        if (branch_taken_0x280718) {
            ctx->pc = 0x280790u;
            goto label_280790;
        }
    }
    ctx->pc = 0x280720u;
label_280720:
    // 0x280720: 0xc4823aac
    ctx->pc = 0x280720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 15020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280724: 0x44801800
    ctx->pc = 0x280724u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x280728: 0x46031032
    ctx->pc = 0x280728u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28072c: 0x0
    ctx->pc = 0x28072cu;
    // NOP
    // 0x280730: 0x45010017
    ctx->pc = 0x280730u;
    {
        const bool branch_taken_0x280730 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x280734u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x280730) {
            ctx->pc = 0x280790u;
            goto label_280790;
        }
    }
    ctx->pc = 0x280738u;
    // 0x280738: 0x3c020031
    ctx->pc = 0x280738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28073c: 0x3c03003c
    ctx->pc = 0x28073cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x280740: 0xc441ffa4
    ctx->pc = 0x280740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280744: 0xc4603aa8
    ctx->pc = 0x280744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 15016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280748: 0x46010034
    ctx->pc = 0x280748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28074c: 0x0
    ctx->pc = 0x28074cu;
    // NOP
    // 0x280750: 0x4500000f
    ctx->pc = 0x280750u;
    {
        const bool branch_taken_0x280750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280754u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x280750) {
            ctx->pc = 0x280790u;
            goto label_280790;
        }
    }
    ctx->pc = 0x280758u;
    // 0x280758: 0x3c013f19
    ctx->pc = 0x280758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x28075c: 0x3421999a
    ctx->pc = 0x28075cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x280760: 0x44810000
    ctx->pc = 0x280760u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x280764: 0x46001002
    ctx->pc = 0x280764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x280768: 0xe4803aac
    ctx->pc = 0x280768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 15020), bits); }
    // 0x28076c: 0x46000005
    ctx->pc = 0x28076cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x280770: 0x3c013d4c
    ctx->pc = 0x280770u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x280774: 0x3421cccd
    ctx->pc = 0x280774u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x280778: 0x44810800
    ctx->pc = 0x280778u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x28077c: 0x46010034
    ctx->pc = 0x28077cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280780: 0x0
    ctx->pc = 0x280780u;
    // NOP
    // 0x280784: 0x45030002
    ctx->pc = 0x280784u;
    {
        const bool branch_taken_0x280784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280784) {
            ctx->pc = 0x280788u;
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 15020), bits); }
            ctx->pc = 0x280790u;
            goto label_280790;
        }
    }
    ctx->pc = 0x28078Cu;
    // 0x28078c: 0x3c02003c
    ctx->pc = 0x28078cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_280790:
    // 0x280790: 0x3c03003c
    ctx->pc = 0x280790u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x280794: 0xc4413aac
    ctx->pc = 0x280794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 15020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280798: 0xc4603ab0
    ctx->pc = 0x280798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 15024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28079c: 0x46000832
    ctx->pc = 0x28079cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2807a0: 0x0
    ctx->pc = 0x2807a0u;
    // NOP
    // 0x2807a4: 0x45030015
    ctx->pc = 0x2807A4u;
    {
        const bool branch_taken_0x2807a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2807a4) {
            ctx->pc = 0x2807A8u;
            SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
            ctx->pc = 0x2807FCu;
            goto label_2807fc;
        }
    }
    ctx->pc = 0x2807ACu;
    // 0x2807ac: 0x46000801
    ctx->pc = 0x2807acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2807b0: 0x3c01be80
    ctx->pc = 0x2807b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48768 << 16));
    // 0x2807b4: 0x44810800
    ctx->pc = 0x2807b4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2807b8: 0x46010034
    ctx->pc = 0x2807b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2807bc: 0x0
    ctx->pc = 0x2807bcu;
    // NOP
    // 0x2807c0: 0x4501000a
    ctx->pc = 0x2807C0u;
    {
        const bool branch_taken_0x2807c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2807C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2807c0) {
            ctx->pc = 0x2807ECu;
            goto label_2807ec;
        }
    }
    ctx->pc = 0x2807C8u;
    // 0x2807c8: 0x3c013d4c
    ctx->pc = 0x2807c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x2807cc: 0x3421cccd
    ctx->pc = 0x2807ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2807d0: 0x44811000
    ctx->pc = 0x2807d0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2807d4: 0x46001034
    ctx->pc = 0x2807d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2807d8: 0x0
    ctx->pc = 0x2807d8u;
    // NOP
    // 0x2807dc: 0x45000003
    ctx->pc = 0x2807DCu;
    {
        const bool branch_taken_0x2807dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2807E0u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2807dc) {
            ctx->pc = 0x2807ECu;
            goto label_2807ec;
        }
    }
    ctx->pc = 0x2807E4u;
    // 0x2807e4: 0x46001046
    ctx->pc = 0x2807e4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x2807e8: 0x3c02003c
    ctx->pc = 0x2807e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2807ec:
    // 0x2807ec: 0xc4403ab0
    ctx->pc = 0x2807ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 15024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2807f0: 0x46000800
    ctx->pc = 0x2807f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2807f4: 0xe4403ab0
    ctx->pc = 0x2807f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 15024), bits); }
    // 0x2807f8: 0x3c020035
    ctx->pc = 0x2807f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2807fc:
    // 0x2807fc: 0x3c030035
    ctx->pc = 0x2807fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x280800: 0xc44196c0
    ctx->pc = 0x280800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280804: 0xc46096bc
    ctx->pc = 0x280804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280808: 0x46000b02
    ctx->pc = 0x280808u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28080c: 0x3c02003c
    ctx->pc = 0x28080cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x280810: 0xc4403ab0
    ctx->pc = 0x280810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 15024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280814: 0x46006300
    ctx->pc = 0x280814u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x280818: 0x44800000
    ctx->pc = 0x280818u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x28081c: 0x46006034
    ctx->pc = 0x28081cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280820: 0x0
    ctx->pc = 0x280820u;
    // NOP
    // 0x280824: 0x45030007
    ctx->pc = 0x280824u;
    {
        const bool branch_taken_0x280824 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280824) {
            ctx->pc = 0x280828u;
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x280844u;
            goto label_280844;
        }
    }
    ctx->pc = 0x28082Cu;
    // 0x28082c: 0x3c013f80
    ctx->pc = 0x28082cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x280830: 0x44810000
    ctx->pc = 0x280830u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x280834: 0x460c0034
    ctx->pc = 0x280834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280838: 0x0
    ctx->pc = 0x280838u;
    // NOP
    // 0x28083c: 0x45030001
    ctx->pc = 0x28083Cu;
    {
        const bool branch_taken_0x28083c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28083c) {
            ctx->pc = 0x280840u;
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x280844u;
            goto label_280844;
        }
    }
    ctx->pc = 0x280844u;
label_280844:
    // 0x280844: 0xc0b1740
    ctx->pc = 0x280844u;
    SET_GPR_U32(ctx, 31, 0x28084Cu);
    ctx->pc = 0x280848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetAmbient_0x2c5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28084Cu; }
    }
    if (ctx->pc != 0x28084Cu) { return; }
    ctx->pc = 0x28084Cu;
    // 0x28084c: 0x3c10003c
    ctx->pc = 0x28084cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x280850: 0x3c013f80
    ctx->pc = 0x280850u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x280854: 0x44816000
    ctx->pc = 0x280854u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x280858: 0xc0aba9a
    ctx->pc = 0x280858u;
    SET_GPR_U32(ctx, 31, 0x280860u);
    ctx->pc = 0x28085Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 15024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2AEA68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBLightmapMod_0x2aea68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280860u; }
    }
    if (ctx->pc != 0x280860u) { return; }
    ctx->pc = 0x280860u;
    // 0x280860: 0x3c013f80
    ctx->pc = 0x280860u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x280864: 0x44816000
    ctx->pc = 0x280864u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x280868: 0xc60d3ab0
    ctx->pc = 0x280868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 15024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28086c: 0xdfbf0010
    ctx->pc = 0x28086cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280870: 0xdfb00000
    ctx->pc = 0x280870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280874: 0x80abaa2
    ctx->pc = 0x280874u;
    ctx->pc = 0x280878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2AEA88u;
    MBNoShadeMod_0x2aea88(rdram, ctx, runtime); return;
    ctx->pc = 0x28087Cu;
}
