#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage8mapGenerate
// Address: 0x143830 - 0x143b4c
void stage8mapGenerate_0x143830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage8mapGenerate_0x143830");
#endif

    ctx->pc = 0x143830u;

    // 0x143830: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x143830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x143834: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x143834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x143838: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x143838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14383c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143840: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143844: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143848: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14384c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143850: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x143850u;
    SET_GPR_U32(ctx, 31, 0x143858u);
    ctx->pc = 0x143854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143850u;
            // 0x143854: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143858u; }
        if (ctx->pc != 0x143858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143858u; }
        if (ctx->pc != 0x143858u) { return; }
    }
    ctx->pc = 0x143858u;
    // 0x143858: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x143858u;
    SET_GPR_U32(ctx, 31, 0x143860u);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143860u; }
        if (ctx->pc != 0x143860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143860u; }
        if (ctx->pc != 0x143860u) { return; }
    }
    ctx->pc = 0x143860u;
    // 0x143860: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143864: 0x3c033c2b  lui         $v1, 0x3C2B
    ctx->pc = 0x143864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15403 << 16));
    // 0x143868: 0xc4259c78  lwc1        $f5, -0x6388($at)
    ctx->pc = 0x143868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14386c: 0x346392a6  ori         $v1, $v1, 0x92A6
    ctx->pc = 0x14386cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)37542u)));
    // 0x143870: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x143870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x143874: 0x3c033aab  lui         $v1, 0x3AAB
    ctx->pc = 0x143874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15019 << 16));
    // 0x143878: 0x346492a6  ori         $a0, $v1, 0x92A6
    ctx->pc = 0x143878u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)37542u)));
    // 0x14387c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x14387cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x143880: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143884: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143884u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143888: 0xc4219c70  lwc1        $f1, -0x6390($at)
    ctx->pc = 0x143888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14388c: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x14388cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x143890: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x143890u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x143894: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143898: 0xc4229c68  lwc1        $f2, -0x6398($at)
    ctx->pc = 0x143898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14389c: 0x46040901  sub.s       $f4, $f1, $f4
    ctx->pc = 0x14389cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1438a0: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x1438a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x1438a4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1438a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1438a8: 0xc4209c60  lwc1        $f0, -0x63A0($at)
    ctx->pc = 0x1438a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1438ac: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1438acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1438b0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1438b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1438b4: 0xe4259c78  swc1        $f5, -0x6388($at)
    ctx->pc = 0x1438b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941816), bits); }
    // 0x1438b8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1438b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1438bc: 0xe4249c70  swc1        $f4, -0x6390($at)
    ctx->pc = 0x1438bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941808), bits); }
    // 0x1438c0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1438c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1438c4: 0xe4229c68  swc1        $f2, -0x6398($at)
    ctx->pc = 0x1438c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941800), bits); }
    // 0x1438c8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1438c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1438cc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1438ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1438d0: 0xe4209c60  swc1        $f0, -0x63A0($at)
    ctx->pc = 0x1438d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941792), bits); }
    // 0x1438d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1438d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1438d8: 0x0  nop
    ctx->pc = 0x1438d8u;
    // NOP
    // 0x1438dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1438dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1438e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1438E0u;
    {
        const bool branch_taken_0x1438e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1438E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1438E0u;
            // 0x1438e4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438e0) {
            ctx->pc = 0x143900u;
            goto label_143900;
        }
    }
    ctx->pc = 0x1438E8u;
    // 0x1438e8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1438e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1438ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1438ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1438f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1438f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1438f4: 0x0  nop
    ctx->pc = 0x1438f4u;
    // NOP
    // 0x1438f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1438f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1438fc: 0xe4209c78  swc1        $f0, -0x6388($at)
    ctx->pc = 0x1438fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941816), bits); }
label_143900:
    // 0x143900: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143904: 0xc4219c70  lwc1        $f1, -0x6390($at)
    ctx->pc = 0x143904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143908: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x143908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14390c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14390cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143914: 0x0  nop
    ctx->pc = 0x143914u;
    // NOP
    // 0x143918: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14391c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x14391Cu;
    {
        const bool branch_taken_0x14391c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x143920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14391Cu;
            // 0x143920: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14391c) {
            ctx->pc = 0x143940u;
            goto label_143940;
        }
    }
    ctx->pc = 0x143924u;
    // 0x143924: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143928: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143928u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14392c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14392cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143930: 0x0  nop
    ctx->pc = 0x143930u;
    // NOP
    // 0x143934: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x143934u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x143938: 0xe4209c70  swc1        $f0, -0x6390($at)
    ctx->pc = 0x143938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941808), bits); }
    // 0x14393c: 0x0  nop
    ctx->pc = 0x14393cu;
    // NOP
label_143940:
    // 0x143940: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143944: 0xc4219c68  lwc1        $f1, -0x6398($at)
    ctx->pc = 0x143944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143948: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x14394c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14394cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143954: 0x0  nop
    ctx->pc = 0x143954u;
    // NOP
    // 0x143958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14395c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x14395Cu;
    {
        const bool branch_taken_0x14395c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x143960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14395Cu;
            // 0x143960: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14395c) {
            ctx->pc = 0x143980u;
            goto label_143980;
        }
    }
    ctx->pc = 0x143964u;
    // 0x143964: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143968: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143968u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14396c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14396cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143970: 0x0  nop
    ctx->pc = 0x143970u;
    // NOP
    // 0x143974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x143978: 0xe4209c68  swc1        $f0, -0x6398($at)
    ctx->pc = 0x143978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941800), bits); }
    // 0x14397c: 0x0  nop
    ctx->pc = 0x14397cu;
    // NOP
label_143980:
    // 0x143980: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x143980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x143984: 0xc4219c60  lwc1        $f1, -0x63A0($at)
    ctx->pc = 0x143984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143988: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x143988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14398c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14398cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143994: 0x0  nop
    ctx->pc = 0x143994u;
    // NOP
    // 0x143998: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14399c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x14399Cu;
    {
        const bool branch_taken_0x14399c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1439A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14399Cu;
            // 0x1439a0: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14399c) {
            ctx->pc = 0x1439C0u;
            goto label_1439c0;
        }
    }
    ctx->pc = 0x1439A4u;
    // 0x1439a4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1439a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1439a8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1439a8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1439ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1439acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1439b0: 0x0  nop
    ctx->pc = 0x1439b0u;
    // NOP
    // 0x1439b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1439b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1439b8: 0xe4209c60  swc1        $f0, -0x63A0($at)
    ctx->pc = 0x1439b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941792), bits); }
    // 0x1439bc: 0x0  nop
    ctx->pc = 0x1439bcu;
    // NOP
label_1439c0:
    // 0x1439c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1439c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1439c4: 0x1443005a  bne         $v0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1439C4u;
    {
        const bool branch_taken_0x1439c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1439c4) {
            ctx->pc = 0x143B30u;
            goto label_143b30;
        }
    }
    ctx->pc = 0x1439CCu;
    // 0x1439cc: 0x3c02bf05  lui         $v0, 0xBF05
    ctx->pc = 0x1439ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48901 << 16));
    // 0x1439d0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1439d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1439d4: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x1439d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7864u)));
    // 0x1439d8: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x1439d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1439dc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1439dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1439e0: 0x27b30068  addiu       $s3, $sp, 0x68
    ctx->pc = 0x1439e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1439e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1439e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1439e8: 0x27b20054  addiu       $s2, $sp, 0x54
    ctx->pc = 0x1439e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1439ec: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1439ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1439f0: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x1439f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x1439f4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1439f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1439f8: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x1439f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1439fc: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x1439fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x143a00: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x143a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x143a04: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x143a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143a08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x143a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x143a0c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143a10: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143a14: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143A14u;
    SET_GPR_U32(ctx, 31, 0x143A1Cu);
    ctx->pc = 0x143A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143A14u;
            // 0x143a18: 0x24e73c60  addiu       $a3, $a3, 0x3C60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A1Cu; }
        if (ctx->pc != 0x143A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A1Cu; }
        if (ctx->pc != 0x143A1Cu) { return; }
    }
    ctx->pc = 0x143A1Cu;
    // 0x143a1c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143a20: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x143a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x143a24: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143a28: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143a2c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143A2Cu;
    SET_GPR_U32(ctx, 31, 0x143A34u);
    ctx->pc = 0x143A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143A2Cu;
            // 0x143a30: 0x24e73c00  addiu       $a3, $a3, 0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A34u; }
        if (ctx->pc != 0x143A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A34u; }
        if (ctx->pc != 0x143A34u) { return; }
    }
    ctx->pc = 0x143A34u;
    // 0x143a34: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143a34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143a38: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x143a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x143a3c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143a40: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143a44: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143A44u;
    SET_GPR_U32(ctx, 31, 0x143A4Cu);
    ctx->pc = 0x143A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143A44u;
            // 0x143a48: 0x24e73c00  addiu       $a3, $a3, 0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A4Cu; }
        if (ctx->pc != 0x143A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A4Cu; }
        if (ctx->pc != 0x143A4Cu) { return; }
    }
    ctx->pc = 0x143A4Cu;
    // 0x143a4c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143a50: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x143a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x143a54: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143a58: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143a5c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143A5Cu;
    SET_GPR_U32(ctx, 31, 0x143A64u);
    ctx->pc = 0x143A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143A5Cu;
            // 0x143a60: 0x24e73c60  addiu       $a3, $a3, 0x3C60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A64u; }
        if (ctx->pc != 0x143A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A64u; }
        if (ctx->pc != 0x143A64u) { return; }
    }
    ctx->pc = 0x143A64u;
    // 0x143a64: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143a64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143a68: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x143a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143a6c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143a70: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143a74: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143A74u;
    SET_GPR_U32(ctx, 31, 0x143A7Cu);
    ctx->pc = 0x143A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143A74u;
            // 0x143a78: 0x24e73c60  addiu       $a3, $a3, 0x3C60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A7Cu; }
        if (ctx->pc != 0x143A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A7Cu; }
        if (ctx->pc != 0x143A7Cu) { return; }
    }
    ctx->pc = 0x143A7Cu;
    // 0x143a7c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143a80: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x143a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x143a84: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143a88: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143a8c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143A8Cu;
    SET_GPR_U32(ctx, 31, 0x143A94u);
    ctx->pc = 0x143A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143A8Cu;
            // 0x143a90: 0x24e73ba0  addiu       $a3, $a3, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A94u; }
        if (ctx->pc != 0x143A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143A94u; }
        if (ctx->pc != 0x143A94u) { return; }
    }
    ctx->pc = 0x143A94u;
    // 0x143a94: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143a94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143a98: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x143a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x143a9c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143aa0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143aa4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143AA4u;
    SET_GPR_U32(ctx, 31, 0x143AACu);
    ctx->pc = 0x143AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143AA4u;
            // 0x143aa8: 0x24e73ba0  addiu       $a3, $a3, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AACu; }
        if (ctx->pc != 0x143AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AACu; }
        if (ctx->pc != 0x143AACu) { return; }
    }
    ctx->pc = 0x143AACu;
    // 0x143aac: 0x3c02bf47  lui         $v0, 0xBF47
    ctx->pc = 0x143aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48967 << 16));
    // 0x143ab0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143ab4: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x143ab4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)44564u)));
    // 0x143ab8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x143ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x143abc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143ac0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x143ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x143ac4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143ac8: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143AC8u;
    SET_GPR_U32(ctx, 31, 0x143AD0u);
    ctx->pc = 0x143ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143AC8u;
            // 0x143acc: 0x24e73c60  addiu       $a3, $a3, 0x3C60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AD0u; }
        if (ctx->pc != 0x143AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AD0u; }
        if (ctx->pc != 0x143AD0u) { return; }
    }
    ctx->pc = 0x143AD0u;
    // 0x143ad0: 0x3c023f47  lui         $v0, 0x3F47
    ctx->pc = 0x143ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16199 << 16));
    // 0x143ad4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143ad8: 0x3442ae14  ori         $v0, $v0, 0xAE14
    ctx->pc = 0x143ad8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)44564u)));
    // 0x143adc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x143adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x143ae0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143ae4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x143ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x143ae8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143aec: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143AECu;
    SET_GPR_U32(ctx, 31, 0x143AF4u);
    ctx->pc = 0x143AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143AECu;
            // 0x143af0: 0x24e73cc0  addiu       $a3, $a3, 0x3CC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AF4u; }
        if (ctx->pc != 0x143AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143AF4u; }
        if (ctx->pc != 0x143AF4u) { return; }
    }
    ctx->pc = 0x143AF4u;
    // 0x143af4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x143af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x143af8: 0x3c023e23  lui         $v0, 0x3E23
    ctx->pc = 0x143af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15907 << 16));
    // 0x143afc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x143afcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x143b00: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143b00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143b04: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x143b04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x143b08: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x143b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x143b0c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x143b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x143b10: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x143b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x143b14: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x143b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x143b18: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x143b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143b1c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x143b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x143b20: 0x24e73b60  addiu       $a3, $a3, 0x3B60
    ctx->pc = 0x143b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15200));
    // 0x143b24: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143B24u;
    SET_GPR_U32(ctx, 31, 0x143B2Cu);
    ctx->pc = 0x143B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143B24u;
            // 0x143b28: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B2Cu; }
        if (ctx->pc != 0x143B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B2Cu; }
        if (ctx->pc != 0x143B2Cu) { return; }
    }
    ctx->pc = 0x143B2Cu;
    // 0x143b2c: 0x0  nop
    ctx->pc = 0x143b2cu;
    // NOP
label_143b30:
    // 0x143b30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x143b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143b34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143b38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143b44: 0x3e00008  jr          $ra
    ctx->pc = 0x143B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B44u;
            // 0x143b48: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143900u: goto label_143900;
            case 0x143940u: goto label_143940;
            case 0x143980u: goto label_143980;
            case 0x1439C0u: goto label_1439c0;
            case 0x143B30u: goto label_143b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143B4Cu;
}
