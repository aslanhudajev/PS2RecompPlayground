#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Ryushi_Chibi
// Address: 0x193450 - 0x1935f4
void EnemyshotMove_Ryushi_Chibi_0x193450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Ryushi_Chibi_0x193450");
#endif

    ctx->pc = 0x193450u;

    // 0x193450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19345c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193460: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x193460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x193464: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x193464u;
    {
        const bool branch_taken_0x193464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193464u;
            // 0x193468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193464) {
            ctx->pc = 0x193518u;
            goto label_193518;
        }
    }
    ctx->pc = 0x19346Cu;
    // 0x19346c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x19346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193470: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x193470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x193474: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x193474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193478: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x193478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19347c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19347cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193480: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193484: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x193484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x193488: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x193488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19348c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x19348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193490: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193494: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x193494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x193498: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193498u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19349c: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x19349Cu;
    SET_GPR_U32(ctx, 31, 0x1934A4u);
    ctx->pc = 0x1934A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19349Cu;
            // 0x1934a0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934A4u; }
        if (ctx->pc != 0x1934A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934A4u; }
        if (ctx->pc != 0x1934A4u) { return; }
    }
    ctx->pc = 0x1934A4u;
    // 0x1934a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1934a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1934a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1934a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1934ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1934acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1934b0: 0xc04b758  jal         func_12DD60
    ctx->pc = 0x1934B0u;
    SET_GPR_U32(ctx, 31, 0x1934B8u);
    ctx->pc = 0x1934B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1934B0u;
            // 0x1934b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD60u;
    if (runtime->hasFunction(0x12DD60u)) {
        auto targetFn = runtime->lookupFunction(0x12DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934B8u; }
        if (ctx->pc != 0x1934B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x12dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934B8u; }
        if (ctx->pc != 0x1934B8u) { return; }
    }
    ctx->pc = 0x1934B8u;
    // 0x1934b8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1934b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1934bc: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x1934bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x1934c0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1934C0u;
    SET_GPR_U32(ctx, 31, 0x1934C8u);
    ctx->pc = 0x1934C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1934C0u;
            // 0x1934c4: 0x2883c  dsll32      $s1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934C8u; }
        if (ctx->pc != 0x1934C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934C8u; }
        if (ctx->pc != 0x1934C8u) { return; }
    }
    ctx->pc = 0x1934C8u;
    // 0x1934c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1934c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934cc: 0xc040880  jal         func_102200
    ctx->pc = 0x1934CCu;
    SET_GPR_U32(ctx, 31, 0x1934D4u);
    ctx->pc = 0x1934D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1934CCu;
            // 0x1934d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934D4u; }
        if (ctx->pc != 0x1934D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934D4u; }
        if (ctx->pc != 0x1934D4u) { return; }
    }
    ctx->pc = 0x1934D4u;
    // 0x1934d4: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1934D4u;
    SET_GPR_U32(ctx, 31, 0x1934DCu);
    ctx->pc = 0x1934D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1934D4u;
            // 0x1934d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934DCu; }
        if (ctx->pc != 0x1934DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934DCu; }
        if (ctx->pc != 0x1934DCu) { return; }
    }
    ctx->pc = 0x1934DCu;
    // 0x1934dc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1934dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1934e0: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x1934e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x1934e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1934e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1934e8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1934e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1934ec: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1934ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1934f0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1934F0u;
    SET_GPR_U32(ctx, 31, 0x1934F8u);
    ctx->pc = 0x1934F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1934F0u;
            // 0x1934f4: 0x2883c  dsll32      $s1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934F8u; }
        if (ctx->pc != 0x1934F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934F8u; }
        if (ctx->pc != 0x1934F8u) { return; }
    }
    ctx->pc = 0x1934F8u;
    // 0x1934f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1934f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934fc: 0xc040880  jal         func_102200
    ctx->pc = 0x1934FCu;
    SET_GPR_U32(ctx, 31, 0x193504u);
    ctx->pc = 0x193500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1934FCu;
            // 0x193500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193504u; }
        if (ctx->pc != 0x193504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193504u; }
        if (ctx->pc != 0x193504u) { return; }
    }
    ctx->pc = 0x193504u;
    // 0x193504: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x193504u;
    SET_GPR_U32(ctx, 31, 0x19350Cu);
    ctx->pc = 0x193508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193504u;
            // 0x193508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19350Cu; }
        if (ctx->pc != 0x19350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19350Cu; }
        if (ctx->pc != 0x19350Cu) { return; }
    }
    ctx->pc = 0x19350Cu;
    // 0x19350c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x19350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193510: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193514: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x193514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_193518:
    // 0x193518: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x193518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x19351c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x19351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193520: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193528: 0x0  nop
    ctx->pc = 0x193528u;
    // NOP
    // 0x19352c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19352cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x193530: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x193530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x193534: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x193534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193538: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x193538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19353c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19353cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x193540: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193544: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x193544u;
    {
        const bool branch_taken_0x193544 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193544u;
            // 0x193548: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193544) {
            ctx->pc = 0x1935A8u;
            goto label_1935a8;
        }
    }
    ctx->pc = 0x19354Cu;
    // 0x19354c: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x19354cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x193550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193554: 0x0  nop
    ctx->pc = 0x193554u;
    // NOP
    // 0x193558: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19355c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x19355Cu;
    {
        const bool branch_taken_0x19355c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19355c) {
            ctx->pc = 0x1935A8u;
            goto label_1935a8;
        }
    }
    ctx->pc = 0x193564u;
    // 0x193564: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193568: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x193568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x19356c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19356cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193570: 0x0  nop
    ctx->pc = 0x193570u;
    // NOP
    // 0x193574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193578: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x193578u;
    {
        const bool branch_taken_0x193578 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19357Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193578u;
            // 0x19357c: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193578) {
            ctx->pc = 0x1935A8u;
            goto label_1935a8;
        }
    }
    ctx->pc = 0x193580u;
    // 0x193580: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193584: 0x0  nop
    ctx->pc = 0x193584u;
    // NOP
    // 0x193588: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19358c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19358Cu;
    {
        const bool branch_taken_0x19358c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19358c) {
            ctx->pc = 0x1935A8u;
            goto label_1935a8;
        }
    }
    ctx->pc = 0x193594u;
    // 0x193594: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x193594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x193598: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x193598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x19359c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x19359Cu;
    {
        const bool branch_taken_0x19359c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19359c) {
            ctx->pc = 0x1935B8u;
            goto label_1935b8;
        }
    }
    ctx->pc = 0x1935A4u;
    // 0x1935a4: 0x0  nop
    ctx->pc = 0x1935a4u;
    // NOP
label_1935a8:
    // 0x1935a8: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x1935A8u;
    SET_GPR_U32(ctx, 31, 0x1935B0u);
    ctx->pc = 0x1935ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1935A8u;
            // 0x1935ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935B0u; }
        if (ctx->pc != 0x1935B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935B0u; }
        if (ctx->pc != 0x1935B0u) { return; }
    }
    ctx->pc = 0x1935B0u;
    // 0x1935b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1935B0u;
    {
        const bool branch_taken_0x1935b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1935b0) {
            ctx->pc = 0x1935E0u;
            goto label_1935e0;
        }
    }
    ctx->pc = 0x1935B8u;
label_1935b8:
    // 0x1935b8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1935b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1935bc: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1935BCu;
    {
        const bool branch_taken_0x1935bc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1935C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1935BCu;
            // 0x1935c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935bc) {
            ctx->pc = 0x1935D8u;
            goto label_1935d8;
        }
    }
    ctx->pc = 0x1935C4u;
    // 0x1935c4: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x1935C4u;
    SET_GPR_U32(ctx, 31, 0x1935CCu);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935CCu; }
        if (ctx->pc != 0x1935CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935CCu; }
        if (ctx->pc != 0x1935CCu) { return; }
    }
    ctx->pc = 0x1935CCu;
    // 0x1935cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1935CCu;
    {
        const bool branch_taken_0x1935cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1935cc) {
            ctx->pc = 0x1935E0u;
            goto label_1935e0;
        }
    }
    ctx->pc = 0x1935D4u;
    // 0x1935d4: 0x0  nop
    ctx->pc = 0x1935d4u;
    // NOP
label_1935d8:
    // 0x1935d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1935d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1935dc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1935dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1935e0:
    // 0x1935e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1935e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1935e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1935e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1935e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1935e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1935ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1935ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1935F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1935ECu;
            // 0x1935f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193518u: goto label_193518;
            case 0x1935A8u: goto label_1935a8;
            case 0x1935B8u: goto label_1935b8;
            case 0x1935D8u: goto label_1935d8;
            case 0x1935E0u: goto label_1935e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1935F4u;
}
