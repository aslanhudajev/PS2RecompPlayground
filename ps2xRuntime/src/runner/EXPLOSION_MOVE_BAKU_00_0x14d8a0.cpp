#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_BAKU_00
// Address: 0x14d8a0 - 0x14d9d8
void EXPLOSION_MOVE_BAKU_00_0x14d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_BAKU_00_0x14d8a0");
#endif

    ctx->pc = 0x14d8a0u;

    // 0x14d8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d8a4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x14d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x14d8a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d8ac: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x14d8acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x14d8b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d8b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14d8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d8b8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x14d8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d8bc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d8c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d8c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d8c4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14d8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14d8c8: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x14d8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d8cc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d8d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14d8d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14d8d4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14d8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14d8d8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d8dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d8e0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14d8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14d8e4: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d8e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14d8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d8ec: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14d8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14d8f0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14d8f4: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x14d8f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14d8f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D8F8u;
    {
        const bool branch_taken_0x14d8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D8F8u;
            // 0x14d8fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8f8) {
            ctx->pc = 0x14D908u;
            goto label_14d908;
        }
    }
    ctx->pc = 0x14D900u;
    // 0x14d900: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d904: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x14d904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_14d908:
    // 0x14d908: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14d908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d90c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d910: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14d910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14d914: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14d914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d918: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x14d918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d91c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d920: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x14d920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14d924: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14D924u;
    {
        const bool branch_taken_0x14d924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d924) {
            ctx->pc = 0x14D960u;
            goto label_14d960;
        }
    }
    ctx->pc = 0x14D92Cu;
    // 0x14d92c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x14d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d930: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x14d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d934: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x14d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14d938: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d938u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14d93c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d93cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d940: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14d940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14d944: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x14d944u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14d948: 0xc053974  jal         func_14E5D0
    ctx->pc = 0x14D948u;
    SET_GPR_U32(ctx, 31, 0x14D950u);
    ctx->pc = 0x14D94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D948u;
            // 0x14d94c: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E5D0u;
    if (runtime->hasFunction(0x14E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x14E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D950u; }
        if (ctx->pc != 0x14D950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomKemuri_0x14e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D950u; }
        if (ctx->pc != 0x14D950u) { return; }
    }
    ctx->pc = 0x14D950u;
    // 0x14d950: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D950u;
    SET_GPR_U32(ctx, 31, 0x14D958u);
    ctx->pc = 0x14D954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D950u;
            // 0x14d954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D958u; }
        if (ctx->pc != 0x14D958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D958u; }
        if (ctx->pc != 0x14D958u) { return; }
    }
    ctx->pc = 0x14D958u;
    // 0x14d958: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14D958u;
    {
        const bool branch_taken_0x14d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d958) {
            ctx->pc = 0x14D9C8u;
            goto label_14d9c8;
        }
    }
    ctx->pc = 0x14D960u;
label_14d960:
    // 0x14d960: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14d960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14d964: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x14d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d96c: 0x0  nop
    ctx->pc = 0x14d96cu;
    // NOP
    // 0x14d970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d974: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14D974u;
    {
        const bool branch_taken_0x14d974 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D974u;
            // 0x14d978: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d974) {
            ctx->pc = 0x14D9C0u;
            goto label_14d9c0;
        }
    }
    ctx->pc = 0x14D97Cu;
    // 0x14d97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d980: 0x0  nop
    ctx->pc = 0x14d980u;
    // NOP
    // 0x14d984: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d988: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14D988u;
    {
        const bool branch_taken_0x14d988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d988) {
            ctx->pc = 0x14D9C0u;
            goto label_14d9c0;
        }
    }
    ctx->pc = 0x14D990u;
    // 0x14d990: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x14d990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d994: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14d994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14d998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d99c: 0x0  nop
    ctx->pc = 0x14d99cu;
    // NOP
    // 0x14d9a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d9a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14D9A4u;
    {
        const bool branch_taken_0x14d9a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9A4u;
            // 0x14d9a8: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9a4) {
            ctx->pc = 0x14D9C0u;
            goto label_14d9c0;
        }
    }
    ctx->pc = 0x14D9ACu;
    // 0x14d9ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14d9acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d9b0: 0x0  nop
    ctx->pc = 0x14d9b0u;
    // NOP
    // 0x14d9b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d9b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d9b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14D9B8u;
    {
        const bool branch_taken_0x14d9b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d9b8) {
            ctx->pc = 0x14D9C8u;
            goto label_14d9c8;
        }
    }
    ctx->pc = 0x14D9C0u;
label_14d9c0:
    // 0x14d9c0: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D9C0u;
    SET_GPR_U32(ctx, 31, 0x14D9C8u);
    ctx->pc = 0x14D9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9C0u;
            // 0x14d9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D9C8u; }
        if (ctx->pc != 0x14D9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D9C8u; }
        if (ctx->pc != 0x14D9C8u) { return; }
    }
    ctx->pc = 0x14D9C8u;
label_14d9c8:
    // 0x14d9c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d9cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D9D0u;
            // 0x14d9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D908u: goto label_14d908;
            case 0x14D960u: goto label_14d960;
            case 0x14D9C0u: goto label_14d9c0;
            case 0x14D9C8u: goto label_14d9c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D9D8u;
}
