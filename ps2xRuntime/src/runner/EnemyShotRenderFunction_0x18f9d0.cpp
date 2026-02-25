#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotRenderFunction
// Address: 0x18f9d0 - 0x1922bc
void EnemyShotRenderFunction_0x18f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotRenderFunction_0x18f9d0");
#endif

    ctx->pc = 0x18f9d0u;

    // 0x18f9d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18f9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18f9d4: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18f9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18f9d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18f9dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x18f9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x18f9e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18f9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18f9e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18f9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18f9e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18f9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18f9ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18f9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18f9f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18f9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18f9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18f9f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18f9f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18f9fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18f9fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18fa00: 0x8c340238  lw          $s4, 0x238($at)
    ctx->pc = 0x18fa00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 568)));
    // 0x18fa04: 0x128009ea  beqz        $s4, . + 4 + (0x9EA << 2)
    ctx->pc = 0x18FA04u;
    {
        const bool branch_taken_0x18fa04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA04u;
            // 0x18fa08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa04) {
            ctx->pc = 0x1921B0u;
            goto label_1921b0;
        }
    }
    ctx->pc = 0x18FA0Cu;
    // 0x18fa0c: 0x0  nop
    ctx->pc = 0x18fa0cu;
    // NOP
label_18fa10:
    // 0x18fa10: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x18fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18fa14: 0x2c410018  sltiu       $at, $v0, 0x18
    ctx->pc = 0x18fa14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x18fa18: 0x102009e1  beqz        $at, . + 4 + (0x9E1 << 2)
    ctx->pc = 0x18FA18u;
    {
        const bool branch_taken_0x18fa18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA18u;
            // 0x18fa1c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa18) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x18FA20u;
    // 0x18fa20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18fa24: 0x24632790  addiu       $v1, $v1, 0x2790
    ctx->pc = 0x18fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10128));
    // 0x18fa28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fa2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fa30: 0x400008  jr          $v0
    ctx->pc = 0x18FA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FA38u: goto label_18fa38;
            case 0x18FB48u: goto label_18fb48;
            case 0x18FC58u: goto label_18fc58;
            case 0x190030u: goto label_190030;
            case 0x190140u: goto label_190140;
            case 0x190290u: goto label_190290;
            case 0x190380u: goto label_190380;
            case 0x190470u: goto label_190470;
            case 0x190588u: goto label_190588;
            case 0x1906E0u: goto label_1906e0;
            case 0x190918u: goto label_190918;
            case 0x190B58u: goto label_190b58;
            case 0x190D98u: goto label_190d98;
            case 0x190EB0u: goto label_190eb0;
            case 0x191288u: goto label_191288;
            case 0x191538u: goto label_191538;
            case 0x1916A0u: goto label_1916a0;
            case 0x191950u: goto label_191950;
            case 0x191A40u: goto label_191a40;
            case 0x191B30u: goto label_191b30;
            case 0x191C30u: goto label_191c30;
            case 0x191D88u: goto label_191d88;
            case 0x191ED8u: goto label_191ed8;
            case 0x192040u: goto label_192040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FA38u;
label_18fa38:
    // 0x18fa38: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x18fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x18fa3c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x18FA3Cu;
    SET_GPR_U32(ctx, 31, 0x18FA44u);
    ctx->pc = 0x18FA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA3Cu;
            // 0x18fa40: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA44u; }
        if (ctx->pc != 0x18FA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA44u; }
        if (ctx->pc != 0x18FA44u) { return; }
    }
    ctx->pc = 0x18FA44u;
    // 0x18fa44: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x18fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fa48: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x18fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x18fa4c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fa50: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18fa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18fa54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18fa54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa58: 0x128140  sll         $s0, $s2, 5
    ctx->pc = 0x18fa58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18fa5c: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x18fa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18fa60: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fa64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18fa64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fa68: 0x0  nop
    ctx->pc = 0x18fa68u;
    // NOP
    // 0x18fa6c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18fa6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18fa70: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18fa74: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18fa78: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x18fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18fa7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fa7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fa80: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x18fa80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x18fa84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fa84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fa88: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18fa8c: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x18fa8cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18fa90: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FA90u;
    SET_GPR_U32(ctx, 31, 0x18FA98u);
    ctx->pc = 0x18FA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA90u;
            // 0x18fa94: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA98u; }
        if (ctx->pc != 0x18FA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA98u; }
        if (ctx->pc != 0x18FA98u) { return; }
    }
    ctx->pc = 0x18FA98u;
    // 0x18fa98: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x18fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fa9c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x18fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18faa0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x18faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18faa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18faa8: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x18faa8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18faac: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18faacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18fab0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x18fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x18fab4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18fab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fab8: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x18fab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18fabc: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x18fabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18fac0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18fac4: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18fac8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x18fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18facc: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x18faccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18fad0: 0x468028e0  cvt.s.w     $f3, $f5
    ctx->pc = 0x18fad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18fad4: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x18fad4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x18fad8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x18fad8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x18fadc: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18fadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fae0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fae4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fae8: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x18fae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x18faec: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18faecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18faf0: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x18faf0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x18faf4: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FAF4u;
    SET_GPR_U32(ctx, 31, 0x18FAFCu);
    ctx->pc = 0x18FAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FAF4u;
            // 0x18faf8: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FAFCu; }
        if (ctx->pc != 0x18FAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FAFCu; }
        if (ctx->pc != 0x18FAFCu) { return; }
    }
    ctx->pc = 0x18FAFCu;
    // 0x18fafc: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x18fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x18fb00: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18fb04: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x18fb04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x18fb08: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x18fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x18fb0c: 0xc0648c0  jal         func_192300
    ctx->pc = 0x18FB0Cu;
    SET_GPR_U32(ctx, 31, 0x18FB14u);
    ctx->pc = 0x18FB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB0Cu;
            // 0x18fb10: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB14u; }
        if (ctx->pc != 0x18FB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB14u; }
        if (ctx->pc != 0x18FB14u) { return; }
    }
    ctx->pc = 0x18FB14u;
    // 0x18fb14: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18fb18: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x18fb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x18fb1c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x18fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x18fb20: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x18fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x18fb24: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x18fb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18fb28: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x18fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x18fb2c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x18fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x18fb30: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18fb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18fb34: 0xc0648c0  jal         func_192300
    ctx->pc = 0x18FB34u;
    SET_GPR_U32(ctx, 31, 0x18FB3Cu);
    ctx->pc = 0x18FB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB34u;
            // 0x18fb38: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB3Cu; }
        if (ctx->pc != 0x18FB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB3Cu; }
        if (ctx->pc != 0x18FB3Cu) { return; }
    }
    ctx->pc = 0x18FB3Cu;
    // 0x18fb3c: 0x10000998  b           . + 4 + (0x998 << 2)
    ctx->pc = 0x18FB3Cu;
    {
        const bool branch_taken_0x18fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB3Cu;
            // 0x18fb40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb3c) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x18FB44u;
    // 0x18fb44: 0x0  nop
    ctx->pc = 0x18fb44u;
    // NOP
label_18fb48:
    // 0x18fb48: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x18fb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x18fb4c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x18FB4Cu;
    SET_GPR_U32(ctx, 31, 0x18FB54u);
    ctx->pc = 0x18FB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB4Cu;
            // 0x18fb50: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB54u; }
        if (ctx->pc != 0x18FB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB54u; }
        if (ctx->pc != 0x18FB54u) { return; }
    }
    ctx->pc = 0x18FB54u;
    // 0x18fb54: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x18fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fb58: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x18fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x18fb5c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18fb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fb60: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18fb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18fb64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18fb64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fb68: 0x128140  sll         $s0, $s2, 5
    ctx->pc = 0x18fb68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18fb6c: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x18fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18fb70: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18fb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fb74: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18fb74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fb78: 0x0  nop
    ctx->pc = 0x18fb78u;
    // NOP
    // 0x18fb7c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18fb7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18fb80: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18fb84: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18fb88: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x18fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18fb8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fb8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fb90: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x18fb90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x18fb94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fb98: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18fb9c: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x18fb9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18fba0: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FBA0u;
    SET_GPR_U32(ctx, 31, 0x18FBA8u);
    ctx->pc = 0x18FBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FBA0u;
            // 0x18fba4: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FBA8u; }
        if (ctx->pc != 0x18FBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FBA8u; }
        if (ctx->pc != 0x18FBA8u) { return; }
    }
    ctx->pc = 0x18FBA8u;
    // 0x18fba8: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x18fba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fbac: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x18fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18fbb0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x18fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fbb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18fbb8: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x18fbb8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18fbbc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18fbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18fbc0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x18fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x18fbc4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fbc8: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x18fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18fbcc: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x18fbccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18fbd0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18fbd4: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18fbd8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x18fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18fbdc: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x18fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18fbe0: 0x468028e0  cvt.s.w     $f3, $f5
    ctx->pc = 0x18fbe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18fbe4: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x18fbe4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x18fbe8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x18fbe8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x18fbec: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fbf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fbf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fbf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fbf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fbf8: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x18fbf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x18fbfc: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18fbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18fc00: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x18fc00u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x18fc04: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FC04u;
    SET_GPR_U32(ctx, 31, 0x18FC0Cu);
    ctx->pc = 0x18FC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC04u;
            // 0x18fc08: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC0Cu; }
        if (ctx->pc != 0x18FC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC0Cu; }
        if (ctx->pc != 0x18FC0Cu) { return; }
    }
    ctx->pc = 0x18FC0Cu;
    // 0x18fc0c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x18fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x18fc10: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18fc14: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x18fc14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x18fc18: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x18fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x18fc1c: 0xc0648c0  jal         func_192300
    ctx->pc = 0x18FC1Cu;
    SET_GPR_U32(ctx, 31, 0x18FC24u);
    ctx->pc = 0x18FC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC1Cu;
            // 0x18fc20: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC24u; }
        if (ctx->pc != 0x18FC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC24u; }
        if (ctx->pc != 0x18FC24u) { return; }
    }
    ctx->pc = 0x18FC24u;
    // 0x18fc24: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18fc28: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x18fc28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x18fc2c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x18fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x18fc30: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x18fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x18fc34: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x18fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18fc38: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x18fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x18fc3c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x18fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x18fc40: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18fc44: 0xc0648c0  jal         func_192300
    ctx->pc = 0x18FC44u;
    SET_GPR_U32(ctx, 31, 0x18FC4Cu);
    ctx->pc = 0x18FC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC44u;
            // 0x18fc48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC4Cu; }
        if (ctx->pc != 0x18FC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC4Cu; }
        if (ctx->pc != 0x18FC4Cu) { return; }
    }
    ctx->pc = 0x18FC4Cu;
    // 0x18fc4c: 0x10000954  b           . + 4 + (0x954 << 2)
    ctx->pc = 0x18FC4Cu;
    {
        const bool branch_taken_0x18fc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC4Cu;
            // 0x18fc50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc4c) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x18FC54u;
    // 0x18fc54: 0x0  nop
    ctx->pc = 0x18fc54u;
    // NOP
label_18fc58:
    // 0x18fc58: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x18fc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x18fc5c: 0x4a00034  bltz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x18FC5Cu;
    {
        const bool branch_taken_0x18fc5c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18FC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC5Cu;
            // 0x18fc60: 0x28a1001e  slti        $at, $a1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc5c) {
            ctx->pc = 0x18FD30u;
            goto label_18fd30;
        }
    }
    ctx->pc = 0x18FC64u;
    // 0x18fc64: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x18FC64u;
    {
        const bool branch_taken_0x18fc64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC64u;
            // 0x18fc68: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc64) {
            ctx->pc = 0x18FD30u;
            goto label_18fd30;
        }
    }
    ctx->pc = 0x18FC6Cu;
    // 0x18fc6c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x18FC6Cu;
    SET_GPR_U32(ctx, 31, 0x18FC74u);
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC74u; }
        if (ctx->pc != 0x18FC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC74u; }
        if (ctx->pc != 0x18FC74u) { return; }
    }
    ctx->pc = 0x18FC74u;
    // 0x18fc74: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x18fc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fc78: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x18fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x18fc7c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18fc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fc80: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18fc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18fc84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18fc84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fc88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18fc88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc8c: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x18fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18fc90: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fc94: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x18fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18fc98: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18fc9c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18fc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18fca0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18fca4: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18fca8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fcac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fcacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fcb0: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x18fcb0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x18fcb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fcb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fcb8: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x18fcb8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18fcbc: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FCBCu;
    SET_GPR_U32(ctx, 31, 0x18FCC4u);
    ctx->pc = 0x18FCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCBCu;
            // 0x18fcc0: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCC4u; }
        if (ctx->pc != 0x18FCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCC4u; }
        if (ctx->pc != 0x18FCC4u) { return; }
    }
    ctx->pc = 0x18FCC4u;
    // 0x18fcc4: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x18fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fcc8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x18fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x18fccc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x18fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fcd0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18fcd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18fcd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18fcd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fcd8: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x18fcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18fcdc: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x18fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18fce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18fce4: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x18fce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18fce8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18fcec: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18fcf0: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18fcf4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fcf8: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x18fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18fcfc: 0x468028e0  cvt.s.w     $f3, $f5
    ctx->pc = 0x18fcfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18fd00: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x18fd00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x18fd04: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x18fd04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x18fd08: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fd0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fd0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fd10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fd10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fd14: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x18fd14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x18fd18: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18fd1c: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x18fd1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x18fd20: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FD20u;
    SET_GPR_U32(ctx, 31, 0x18FD28u);
    ctx->pc = 0x18FD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD20u;
            // 0x18fd24: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD28u; }
        if (ctx->pc != 0x18FD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD28u; }
        if (ctx->pc != 0x18FD28u) { return; }
    }
    ctx->pc = 0x18FD28u;
    // 0x18fd28: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x18FD28u;
    {
        const bool branch_taken_0x18fd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fd28) {
            ctx->pc = 0x18FFD8u;
            goto label_18ffd8;
        }
    }
    ctx->pc = 0x18FD30u;
label_18fd30:
    // 0x18fd30: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x18fd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18fd34: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x18FD34u;
    {
        const bool branch_taken_0x18fd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD34u;
            // 0x18fd38: 0x28a1003c  slti        $at, $a1, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd34) {
            ctx->pc = 0x18FE18u;
            goto label_18fe18;
        }
    }
    ctx->pc = 0x18FD3Cu;
    // 0x18fd3c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x18FD3Cu;
    {
        const bool branch_taken_0x18fd3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD3Cu;
            // 0x18fd40: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd3c) {
            ctx->pc = 0x18FE18u;
            goto label_18fe18;
        }
    }
    ctx->pc = 0x18FD44u;
    // 0x18fd44: 0x24a2ffe2  addiu       $v0, $a1, -0x1E
    ctx->pc = 0x18fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
    // 0x18fd48: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x18fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18fd4c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x18FD4Cu;
    SET_GPR_U32(ctx, 31, 0x18FD54u);
    ctx->pc = 0x18FD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD4Cu;
            // 0x18fd50: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD54u; }
        if (ctx->pc != 0x18FD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD54u; }
        if (ctx->pc != 0x18FD54u) { return; }
    }
    ctx->pc = 0x18FD54u;
    // 0x18fd54: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x18fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fd58: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x18fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x18fd5c: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x18fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18fd60: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18fd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18fd64: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x18fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fd68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18fd68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd6c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x18fd6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18fd70: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x18fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fd74: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x18fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18fd78: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x18fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18fd7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18fd7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18fd80: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18fd84: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18fd88: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fd8c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x18fd8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18fd90: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x18fd90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x18fd94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fd94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fd98: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x18fd98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x18fd9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18fd9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18fda0: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18fda4: 0x46032301  sub.s       $f12, $f4, $f3
    ctx->pc = 0x18fda4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x18fda8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FDA8u;
    SET_GPR_U32(ctx, 31, 0x18FDB0u);
    ctx->pc = 0x18FDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDA8u;
            // 0x18fdac: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDB0u; }
        if (ctx->pc != 0x18FDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDB0u; }
        if (ctx->pc != 0x18FDB0u) { return; }
    }
    ctx->pc = 0x18FDB0u;
    // 0x18fdb0: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x18fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18fdb4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x18fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x18fdb8: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x18fdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fdbc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18fdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18fdc0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x18fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fdc4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18fdc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fdc8: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x18fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18fdcc: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x18fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18fdd0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x18fdd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18fdd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18fdd8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18fddc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18fde0: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18fde4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fde8: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fdec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fdecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fdf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fdf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fdf4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18fdf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18fdf8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x18fdf8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x18fdfc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x18fdfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x18fe00: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18fe04: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x18fe04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x18fe08: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FE08u;
    SET_GPR_U32(ctx, 31, 0x18FE10u);
    ctx->pc = 0x18FE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE08u;
            // 0x18fe0c: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE10u; }
        if (ctx->pc != 0x18FE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE10u; }
        if (ctx->pc != 0x18FE10u) { return; }
    }
    ctx->pc = 0x18FE10u;
    // 0x18fe10: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x18FE10u;
    {
        const bool branch_taken_0x18fe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe10) {
            ctx->pc = 0x18FFD8u;
            goto label_18ffd8;
        }
    }
    ctx->pc = 0x18FE18u;
label_18fe18:
    // 0x18fe18: 0x28a2003c  slti        $v0, $a1, 0x3C
    ctx->pc = 0x18fe18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x18fe1c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x18FE1Cu;
    {
        const bool branch_taken_0x18fe1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE1Cu;
            // 0x18fe20: 0x28a1005a  slti        $at, $a1, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe1c) {
            ctx->pc = 0x18FEF8u;
            goto label_18fef8;
        }
    }
    ctx->pc = 0x18FE24u;
    // 0x18fe24: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x18FE24u;
    {
        const bool branch_taken_0x18fe24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe24) {
            ctx->pc = 0x18FEF8u;
            goto label_18fef8;
        }
    }
    ctx->pc = 0x18FE2Cu;
    // 0x18fe2c: 0x24a5ffc4  addiu       $a1, $a1, -0x3C
    ctx->pc = 0x18fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967236));
    // 0x18fe30: 0xc05c00c  jal         func_170030
    ctx->pc = 0x18FE30u;
    SET_GPR_U32(ctx, 31, 0x18FE38u);
    ctx->pc = 0x18FE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE30u;
            // 0x18fe34: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE38u; }
        if (ctx->pc != 0x18FE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE38u; }
        if (ctx->pc != 0x18FE38u) { return; }
    }
    ctx->pc = 0x18FE38u;
    // 0x18fe38: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x18fe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fe3c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x18fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x18fe40: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fe44: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18fe44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18fe48: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18fe48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18fe4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18fe4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe50: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x18fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18fe54: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x18fe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18fe58: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x18fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18fe5c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fe60: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x18fe60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18fe64: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18fe68: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18fe6c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fe70: 0x468028e0  cvt.s.w     $f3, $f5
    ctx->pc = 0x18fe70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18fe74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fe74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fe78: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x18fe78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x18fe7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fe7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fe80: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x18fe80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x18fe84: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x18fe84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x18fe88: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18fe8c: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x18fe8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x18fe90: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FE90u;
    SET_GPR_U32(ctx, 31, 0x18FE98u);
    ctx->pc = 0x18FE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE90u;
            // 0x18fe94: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE98u; }
        if (ctx->pc != 0x18FE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE98u; }
        if (ctx->pc != 0x18FE98u) { return; }
    }
    ctx->pc = 0x18FE98u;
    // 0x18fe98: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x18fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18fe9c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x18fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x18fea0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x18fea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fea4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18fea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18fea8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18fea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18feac: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x18feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18feb0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x18feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18feb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18feb8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18feb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18febc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18febcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18fec0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18fec4: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18fec8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18fecc: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x18feccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x18fed0: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fed4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18fed8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18fed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18fedc: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18fee0: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x18fee0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18fee4: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FEE4u;
    SET_GPR_U32(ctx, 31, 0x18FEECu);
    ctx->pc = 0x18FEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FEE4u;
            // 0x18fee8: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEECu; }
        if (ctx->pc != 0x18FEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEECu; }
        if (ctx->pc != 0x18FEECu) { return; }
    }
    ctx->pc = 0x18FEECu;
    // 0x18feec: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x18FEECu;
    {
        const bool branch_taken_0x18feec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18feec) {
            ctx->pc = 0x18FFD8u;
            goto label_18ffd8;
        }
    }
    ctx->pc = 0x18FEF4u;
    // 0x18fef4: 0x0  nop
    ctx->pc = 0x18fef4u;
    // NOP
label_18fef8:
    // 0x18fef8: 0x28a2005a  slti        $v0, $a1, 0x5A
    ctx->pc = 0x18fef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x18fefc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x18FEFCu;
    {
        const bool branch_taken_0x18fefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FEFCu;
            // 0x18ff00: 0x28a10078  slti        $at, $a1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fefc) {
            ctx->pc = 0x18FFD8u;
            goto label_18ffd8;
        }
    }
    ctx->pc = 0x18FF04u;
    // 0x18ff04: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x18FF04u;
    {
        const bool branch_taken_0x18ff04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF04u;
            // 0x18ff08: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ff04) {
            ctx->pc = 0x18FFD8u;
            goto label_18ffd8;
        }
    }
    ctx->pc = 0x18FF0Cu;
    // 0x18ff0c: 0x24a2ffa6  addiu       $v0, $a1, -0x5A
    ctx->pc = 0x18ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967206));
    // 0x18ff10: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x18ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ff14: 0xc05c00c  jal         func_170030
    ctx->pc = 0x18FF14u;
    SET_GPR_U32(ctx, 31, 0x18FF1Cu);
    ctx->pc = 0x18FF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF14u;
            // 0x18ff18: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF1Cu; }
        if (ctx->pc != 0x18FF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF1Cu; }
        if (ctx->pc != 0x18FF1Cu) { return; }
    }
    ctx->pc = 0x18FF1Cu;
    // 0x18ff1c: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x18ff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18ff20: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x18ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x18ff24: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x18ff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ff28: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18ff28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18ff2c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ff30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18ff30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff34: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18ff34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18ff38: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x18ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18ff3c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x18ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff40: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x18ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18ff44: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x18ff44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18ff48: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18ff4c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18ff50: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ff54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18ff54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18ff58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ff58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ff5c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x18ff5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18ff60: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x18ff60u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x18ff64: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x18ff64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x18ff68: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18ff6c: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x18ff6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x18ff70: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FF70u;
    SET_GPR_U32(ctx, 31, 0x18FF78u);
    ctx->pc = 0x18FF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FF70u;
            // 0x18ff74: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF78u; }
        if (ctx->pc != 0x18FF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF78u; }
        if (ctx->pc != 0x18FF78u) { return; }
    }
    ctx->pc = 0x18FF78u;
    // 0x18ff78: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x18ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff7c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x18ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x18ff80: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x18ff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18ff84: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18ff84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18ff88: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x18ff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ff8c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x18ff8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18ff90: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x18ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ff94: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x18ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18ff98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18ff98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18ff9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ffa0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18ffa4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18ffa8: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x18ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x18ffac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ffb0: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x18ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18ffb4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x18ffb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x18ffb8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x18ffb8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x18ffbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18ffbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18ffc0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x18ffc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x18ffc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18ffc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18ffc8: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x18ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18ffcc: 0x46032301  sub.s       $f12, $f4, $f3
    ctx->pc = 0x18ffccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x18ffd0: 0xc0648cc  jal         func_192330
    ctx->pc = 0x18FFD0u;
    SET_GPR_U32(ctx, 31, 0x18FFD8u);
    ctx->pc = 0x18FFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FFD0u;
            // 0x18ffd4: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFD8u; }
        if (ctx->pc != 0x18FFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFD8u; }
        if (ctx->pc != 0x18FFD8u) { return; }
    }
    ctx->pc = 0x18FFD8u;
label_18ffd8:
    // 0x18ffd8: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x18ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x18ffdc: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x18ffdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x18ffe0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18ffe4: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x18ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x18ffe8: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x18ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x18ffec: 0xc0648c0  jal         func_192300
    ctx->pc = 0x18FFECu;
    SET_GPR_U32(ctx, 31, 0x18FFF4u);
    ctx->pc = 0x18FFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FFECu;
            // 0x18fff0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFF4u; }
        if (ctx->pc != 0x18FFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FFF4u; }
        if (ctx->pc != 0x18FFF4u) { return; }
    }
    ctx->pc = 0x18FFF4u;
    // 0x18fff4: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x18fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18fff8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18fffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x190000: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190004: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x190004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x190008: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x190008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x19000c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190010: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x190010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x190014: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x190014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190018: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x19001c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x19001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190020: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190020u;
    SET_GPR_U32(ctx, 31, 0x190028u);
    ctx->pc = 0x190024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190020u;
            // 0x190024: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190028u; }
        if (ctx->pc != 0x190028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190028u; }
        if (ctx->pc != 0x190028u) { return; }
    }
    ctx->pc = 0x190028u;
    // 0x190028: 0x1000085d  b           . + 4 + (0x85D << 2)
    ctx->pc = 0x190028u;
    {
        const bool branch_taken_0x190028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19002Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190028u;
            // 0x19002c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190028) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x190030u;
label_190030:
    // 0x190030: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x190030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x190034: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190034u;
    SET_GPR_U32(ctx, 31, 0x19003Cu);
    ctx->pc = 0x190038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190034u;
            // 0x190038: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19003Cu; }
        if (ctx->pc != 0x19003Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19003Cu; }
        if (ctx->pc != 0x19003Cu) { return; }
    }
    ctx->pc = 0x19003Cu;
    // 0x19003c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x19003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190040: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x190040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x190044: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x190044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190048: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19004c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19004cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190050: 0x128140  sll         $s0, $s2, 5
    ctx->pc = 0x190050u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x190054: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x190054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190058: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x190058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19005c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x19005cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190060: 0x0  nop
    ctx->pc = 0x190060u;
    // NOP
    // 0x190064: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x190064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x190068: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x190068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19006c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x19006cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190070: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x190070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x190074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190078: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x190078u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x19007c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19007cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x190080: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x190080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x190084: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x190084u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x190088: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190088u;
    SET_GPR_U32(ctx, 31, 0x190090u);
    ctx->pc = 0x19008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190088u;
            // 0x19008c: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190090u; }
        if (ctx->pc != 0x190090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190090u; }
        if (ctx->pc != 0x190090u) { return; }
    }
    ctx->pc = 0x190090u;
    // 0x190090: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x190090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190094: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x190094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x190098: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x190098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19009c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1900a0: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1900a0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1900a4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1900a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1900a8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1900a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1900ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1900acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1900b0: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x1900b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1900b4: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x1900b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1900b8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1900bc: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1900bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1900c0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1900c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1900c4: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x1900c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1900c8: 0x468028e0  cvt.s.w     $f3, $f5
    ctx->pc = 0x1900c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1900cc: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x1900ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x1900d0: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x1900d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1900d4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1900d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1900d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1900d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1900dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1900dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1900e0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1900e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1900e4: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x1900e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1900e8: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x1900e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1900ec: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1900ECu;
    SET_GPR_U32(ctx, 31, 0x1900F4u);
    ctx->pc = 0x1900F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1900ECu;
            // 0x1900f0: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1900F4u; }
        if (ctx->pc != 0x1900F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1900F4u; }
        if (ctx->pc != 0x1900F4u) { return; }
    }
    ctx->pc = 0x1900F4u;
    // 0x1900f4: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1900f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1900f8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1900f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1900fc: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x1900fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190100: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190104: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190104u;
    SET_GPR_U32(ctx, 31, 0x19010Cu);
    ctx->pc = 0x190108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190104u;
            // 0x190108: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19010Cu; }
        if (ctx->pc != 0x19010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19010Cu; }
        if (ctx->pc != 0x19010Cu) { return; }
    }
    ctx->pc = 0x19010Cu;
    // 0x19010c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190110: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x190110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190114: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190118: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x190118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x19011c: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x19011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190120: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x190120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190124: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x190128: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x190128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x19012c: 0xc0648c0  jal         func_192300
    ctx->pc = 0x19012Cu;
    SET_GPR_U32(ctx, 31, 0x190134u);
    ctx->pc = 0x190130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19012Cu;
            // 0x190130: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190134u; }
        if (ctx->pc != 0x190134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190134u; }
        if (ctx->pc != 0x190134u) { return; }
    }
    ctx->pc = 0x190134u;
    // 0x190134: 0x1000081a  b           . + 4 + (0x81A << 2)
    ctx->pc = 0x190134u;
    {
        const bool branch_taken_0x190134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190134u;
            // 0x190138: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190134) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x19013Cu;
    // 0x19013c: 0x0  nop
    ctx->pc = 0x19013cu;
    // NOP
label_190140:
    // 0x190140: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x190140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x190144: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190144u;
    SET_GPR_U32(ctx, 31, 0x19014Cu);
    ctx->pc = 0x190148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190144u;
            // 0x190148: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19014Cu; }
        if (ctx->pc != 0x19014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19014Cu; }
        if (ctx->pc != 0x19014Cu) { return; }
    }
    ctx->pc = 0x19014Cu;
    // 0x19014c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x19014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190150: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190154: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x190154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190158: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19015c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x19015cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x190160: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x190160u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x190164: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x190164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190168: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x190168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x19016c: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x19016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190170: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x190170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x190174: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x190174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190178: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x19017c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19017cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x190180: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x190180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x190184: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x190184u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x190188: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19018c: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x19018cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x190190: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x190190u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x190194: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x190194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190198: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x190198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19019c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x19019cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1901a0: 0x46042b01  sub.s       $f12, $f5, $f4
    ctx->pc = 0x1901a0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1901a4: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1901A4u;
    SET_GPR_U32(ctx, 31, 0x1901ACu);
    ctx->pc = 0x1901A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1901A4u;
            // 0x1901a8: 0x46040341  sub.s       $f13, $f0, $f4 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1901ACu; }
        if (ctx->pc != 0x1901ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1901ACu; }
        if (ctx->pc != 0x1901ACu) { return; }
    }
    ctx->pc = 0x1901ACu;
    // 0x1901ac: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1901acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1901b0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1901b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1901b4: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x1901b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1901b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1901bc: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x1901bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1901c0: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1901c0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1901c4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1901c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1901c8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1901c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1901cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1901ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1901d0: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x1901d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x1901d4: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x1901d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1901d8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1901d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1901dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1901dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1901e0: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1901e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x1901e4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1901e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x1901e8: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x1901e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1901ec: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1901ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1901f0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1901f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1901f4: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x1901f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1901f8: 0x46011b40  add.s       $f13, $f3, $f1
    ctx->pc = 0x1901f8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1901fc: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x1901fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x190200: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x190200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x190204: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x190204u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x190208: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x190208u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x19020c: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x19020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190214: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x190214u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x190218: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190218u;
    SET_GPR_U32(ctx, 31, 0x190220u);
    ctx->pc = 0x19021Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190218u;
            // 0x19021c: 0x46000b80  add.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190220u; }
        if (ctx->pc != 0x190220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190220u; }
        if (ctx->pc != 0x190220u) { return; }
    }
    ctx->pc = 0x190220u;
    // 0x190220: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x190220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190224: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190228: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x190228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x19022c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x19022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190230: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190230u;
    SET_GPR_U32(ctx, 31, 0x190238u);
    ctx->pc = 0x190234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190230u;
            // 0x190234: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190238u; }
        if (ctx->pc != 0x190238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190238u; }
        if (ctx->pc != 0x190238u) { return; }
    }
    ctx->pc = 0x190238u;
    // 0x190238: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x19023c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x19023cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190240: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190244: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x190244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x190248: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19024c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x19024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190250: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x190254: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x190254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190258: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190258u;
    SET_GPR_U32(ctx, 31, 0x190260u);
    ctx->pc = 0x19025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190258u;
            // 0x19025c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190260u; }
        if (ctx->pc != 0x190260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190260u; }
        if (ctx->pc != 0x190260u) { return; }
    }
    ctx->pc = 0x190260u;
    // 0x190260: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190264: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x190264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x190268: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x190268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19026c: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x19026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x190270: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190274: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x190274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190278: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x190278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19027c: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x19027Cu;
    SET_GPR_U32(ctx, 31, 0x190284u);
    ctx->pc = 0x190280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19027Cu;
            // 0x190280: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190284u; }
        if (ctx->pc != 0x190284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190284u; }
        if (ctx->pc != 0x190284u) { return; }
    }
    ctx->pc = 0x190284u;
    // 0x190284: 0x100007c6  b           . + 4 + (0x7C6 << 2)
    ctx->pc = 0x190284u;
    {
        const bool branch_taken_0x190284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190284u;
            // 0x190288: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190284) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x19028Cu;
    // 0x19028c: 0x0  nop
    ctx->pc = 0x19028cu;
    // NOP
label_190290:
    // 0x190290: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x190290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x190294: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190294u;
    SET_GPR_U32(ctx, 31, 0x19029Cu);
    ctx->pc = 0x190298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190294u;
            // 0x190298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19029Cu; }
        if (ctx->pc != 0x19029Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19029Cu; }
        if (ctx->pc != 0x19029Cu) { return; }
    }
    ctx->pc = 0x19029Cu;
    // 0x19029c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19029cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902a0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1902a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1902a4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1902a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1902a8: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x1902a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1902ac: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1902acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1902b0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1902b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1902b4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1902b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1902b8: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1902b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1902bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1902bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1902c0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1902c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902c4: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x1902c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1902c8: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1902c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1902cc: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1902CCu;
    SET_GPR_U32(ctx, 31, 0x1902D4u);
    ctx->pc = 0x1902D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1902CCu;
            // 0x1902d0: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1902D4u; }
        if (ctx->pc != 0x1902D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1902D4u; }
        if (ctx->pc != 0x1902D4u) { return; }
    }
    ctx->pc = 0x1902D4u;
    // 0x1902d4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1902d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1902d8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1902d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1902dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1902dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1902e0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1902e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1902e4: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1902e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1902e8: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x1902e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x1902ec: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1902ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1902f0: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x1902f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1902f4: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1902f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1902f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1902f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1902fc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1902fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190300: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x190300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x190304: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x190304u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x190308: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190308u;
    SET_GPR_U32(ctx, 31, 0x190310u);
    ctx->pc = 0x19030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190308u;
            // 0x19030c: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190310u; }
        if (ctx->pc != 0x190310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190310u; }
        if (ctx->pc != 0x190310u) { return; }
    }
    ctx->pc = 0x190310u;
    // 0x190310: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x190310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190314: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190318: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x190318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x19031c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x19031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190320: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190320u;
    SET_GPR_U32(ctx, 31, 0x190328u);
    ctx->pc = 0x190324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190320u;
            // 0x190324: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190328u; }
        if (ctx->pc != 0x190328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190328u; }
        if (ctx->pc != 0x190328u) { return; }
    }
    ctx->pc = 0x190328u;
    // 0x190328: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x19032c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x19032cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190330: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190334: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x190334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x190338: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19033c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x19033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190340: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x190344: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x190344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190348: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190348u;
    SET_GPR_U32(ctx, 31, 0x190350u);
    ctx->pc = 0x19034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190348u;
            // 0x19034c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190350u; }
        if (ctx->pc != 0x190350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190350u; }
        if (ctx->pc != 0x190350u) { return; }
    }
    ctx->pc = 0x190350u;
    // 0x190350: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190354: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x190354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x190358: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x190358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19035c: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x19035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x190360: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190364: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x190364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190368: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x190368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19036c: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x19036Cu;
    SET_GPR_U32(ctx, 31, 0x190374u);
    ctx->pc = 0x190370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19036Cu;
            // 0x190370: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190374u; }
        if (ctx->pc != 0x190374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190374u; }
        if (ctx->pc != 0x190374u) { return; }
    }
    ctx->pc = 0x190374u;
    // 0x190374: 0x1000078a  b           . + 4 + (0x78A << 2)
    ctx->pc = 0x190374u;
    {
        const bool branch_taken_0x190374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190374u;
            // 0x190378: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190374) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x19037Cu;
    // 0x19037c: 0x0  nop
    ctx->pc = 0x19037cu;
    // NOP
label_190380:
    // 0x190380: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x190384: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190384u;
    SET_GPR_U32(ctx, 31, 0x19038Cu);
    ctx->pc = 0x190388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190384u;
            // 0x190388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19038Cu; }
        if (ctx->pc != 0x19038Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19038Cu; }
        if (ctx->pc != 0x19038Cu) { return; }
    }
    ctx->pc = 0x19038Cu;
    // 0x19038c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19038cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190390: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190394: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x190394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190398: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x190398u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x19039c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1903a0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1903a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1903a4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1903a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1903a8: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1903a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1903ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1903acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1903b0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1903b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1903b4: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x1903b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1903b8: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1903b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1903bc: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1903BCu;
    SET_GPR_U32(ctx, 31, 0x1903C4u);
    ctx->pc = 0x1903C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1903BCu;
            // 0x1903c0: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903C4u; }
        if (ctx->pc != 0x1903C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903C4u; }
        if (ctx->pc != 0x1903C4u) { return; }
    }
    ctx->pc = 0x1903C4u;
    // 0x1903c4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1903c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1903c8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1903c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1903cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1903ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1903d0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1903d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1903d4: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1903d4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1903d8: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x1903d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x1903dc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1903dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1903e0: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x1903e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1903e4: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1903e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1903e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1903e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1903ec: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1903ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1903f0: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x1903f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1903f4: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x1903f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1903f8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1903F8u;
    SET_GPR_U32(ctx, 31, 0x190400u);
    ctx->pc = 0x1903FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1903F8u;
            // 0x1903fc: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190400u; }
        if (ctx->pc != 0x190400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190400u; }
        if (ctx->pc != 0x190400u) { return; }
    }
    ctx->pc = 0x190400u;
    // 0x190400: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x190400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190404: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190408: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x190408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x19040c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x19040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190410: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190410u;
    SET_GPR_U32(ctx, 31, 0x190418u);
    ctx->pc = 0x190414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190410u;
            // 0x190414: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190418u; }
        if (ctx->pc != 0x190418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190418u; }
        if (ctx->pc != 0x190418u) { return; }
    }
    ctx->pc = 0x190418u;
    // 0x190418: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x19041c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x19041cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190420: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190424: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x190424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x190428: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19042c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x19042cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190430: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x190434: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x190434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190438: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190438u;
    SET_GPR_U32(ctx, 31, 0x190440u);
    ctx->pc = 0x19043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190438u;
            // 0x19043c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190440u; }
        if (ctx->pc != 0x190440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190440u; }
        if (ctx->pc != 0x190440u) { return; }
    }
    ctx->pc = 0x190440u;
    // 0x190440: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190444: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x190444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x190448: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x190448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19044c: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x19044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x190450: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190454: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x190454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190458: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x190458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x19045c: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x19045Cu;
    SET_GPR_U32(ctx, 31, 0x190464u);
    ctx->pc = 0x190460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19045Cu;
            // 0x190460: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190464u; }
        if (ctx->pc != 0x190464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190464u; }
        if (ctx->pc != 0x190464u) { return; }
    }
    ctx->pc = 0x190464u;
    // 0x190464: 0x1000074e  b           . + 4 + (0x74E << 2)
    ctx->pc = 0x190464u;
    {
        const bool branch_taken_0x190464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190464u;
            // 0x190468: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190464) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x19046Cu;
    // 0x19046c: 0x0  nop
    ctx->pc = 0x19046cu;
    // NOP
label_190470:
    // 0x190470: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x190470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x190474: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190474u;
    SET_GPR_U32(ctx, 31, 0x19047Cu);
    ctx->pc = 0x190478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190474u;
            // 0x190478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19047Cu; }
        if (ctx->pc != 0x19047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19047Cu; }
        if (ctx->pc != 0x19047Cu) { return; }
    }
    ctx->pc = 0x19047Cu;
    // 0x19047c: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x19047cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x190480: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190484: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x190484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190488: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19048c: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x19048cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x190490: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190494: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x190494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x190498: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x190498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19049c: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x19049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1904a0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1904a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1904a4: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1904a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1904a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1904a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1904ac: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x1904acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1904b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1904b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1904b4: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1904b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1904b8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1904B8u;
    SET_GPR_U32(ctx, 31, 0x1904C0u);
    ctx->pc = 0x1904BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1904B8u;
            // 0x1904bc: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904C0u; }
        if (ctx->pc != 0x1904C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1904C0u; }
        if (ctx->pc != 0x1904C0u) { return; }
    }
    ctx->pc = 0x1904C0u;
    // 0x1904c0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1904c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1904c4: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1904c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1904c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1904c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1904cc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1904ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1904d0: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1904d0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1904d4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1904d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1904d8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1904d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1904dc: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1904dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1904e0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1904e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1904e4: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1904e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1904e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1904e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1904ec: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1904ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1904f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1904f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1904f4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1904f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1904f8: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x1904f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1904fc: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x1904fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x190500: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190500u;
    SET_GPR_U32(ctx, 31, 0x190508u);
    ctx->pc = 0x190504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190500u;
            // 0x190504: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190508u; }
        if (ctx->pc != 0x190508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190508u; }
        if (ctx->pc != 0x190508u) { return; }
    }
    ctx->pc = 0x190508u;
    // 0x190508: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x190508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x19050c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x19050cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190510: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x190510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190514: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190518: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190518u;
    SET_GPR_U32(ctx, 31, 0x190520u);
    ctx->pc = 0x19051Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190518u;
            // 0x19051c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190520u; }
        if (ctx->pc != 0x190520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190520u; }
        if (ctx->pc != 0x190520u) { return; }
    }
    ctx->pc = 0x190520u;
    // 0x190520: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190524: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x190524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190528: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x19052c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x19052cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x190530: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190534: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x190534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190538: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x19053c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x19053cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190540: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190540u;
    SET_GPR_U32(ctx, 31, 0x190548u);
    ctx->pc = 0x190544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190540u;
            // 0x190544: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190548u; }
        if (ctx->pc != 0x190548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190548u; }
        if (ctx->pc != 0x190548u) { return; }
    }
    ctx->pc = 0x190548u;
    // 0x190548: 0x8e880014  lw          $t0, 0x14($s4)
    ctx->pc = 0x190548u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x19054c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x19054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x190550: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190554: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x190554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x190558: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x190558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x19055c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19055cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190560: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190564: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x190564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190568: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x190568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x19056c: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x19056cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x190570: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x190570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x190574: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x190574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190578: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x190578u;
    SET_GPR_U32(ctx, 31, 0x190580u);
    ctx->pc = 0x19057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190578u;
            // 0x19057c: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190580u; }
        if (ctx->pc != 0x190580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190580u; }
        if (ctx->pc != 0x190580u) { return; }
    }
    ctx->pc = 0x190580u;
    // 0x190580: 0x10000707  b           . + 4 + (0x707 << 2)
    ctx->pc = 0x190580u;
    {
        const bool branch_taken_0x190580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190580u;
            // 0x190584: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190580) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x190588u;
label_190588:
    // 0x190588: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x190588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x19058c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x19058Cu;
    SET_GPR_U32(ctx, 31, 0x190594u);
    ctx->pc = 0x190590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19058Cu;
            // 0x190590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190594u; }
        if (ctx->pc != 0x190594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190594u; }
        if (ctx->pc != 0x190594u) { return; }
    }
    ctx->pc = 0x190594u;
    // 0x190594: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x190594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190598: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19059c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x19059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1905a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1905a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905a4: 0xc6840014  lwc1        $f4, 0x14($s4)
    ctx->pc = 0x1905a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1905a8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1905a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1905ac: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x1905acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1905b0: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x1905b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1905b4: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x1905b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x1905b8: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x1905b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1905bc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1905bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1905c0: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x1905c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1905c4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1905c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1905c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1905c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1905cc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1905ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1905d0: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x1905d0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1905d4: 0x46802820  cvt.s.w     $f0, $f5
    ctx->pc = 0x1905d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1905d8: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1905d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1905dc: 0x46040301  sub.s       $f12, $f0, $f4
    ctx->pc = 0x1905dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1905e0: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x1905e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1905e4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1905e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1905e8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1905E8u;
    SET_GPR_U32(ctx, 31, 0x1905F0u);
    ctx->pc = 0x1905ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1905E8u;
            // 0x1905ec: 0x46040341  sub.s       $f13, $f0, $f4 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905F0u; }
        if (ctx->pc != 0x1905F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905F0u; }
        if (ctx->pc != 0x1905F0u) { return; }
    }
    ctx->pc = 0x1905F0u;
    // 0x1905f0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1905f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1905f4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1905f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1905f8: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x1905f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1905fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1905fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190600: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x190600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190604: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x190604u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x190608: 0xc6830014  lwc1        $f3, 0x14($s4)
    ctx->pc = 0x190608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19060c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190610: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190614: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190618: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19061c: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x19061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190620: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x190620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x190624: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x190628: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x190628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x19062c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x19062cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x190630: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x190630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x190634: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x190634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x190638: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x190638u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x19063c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x19063cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x190640: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x190640u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x190644: 0x46011b40  add.s       $f13, $f3, $f1
    ctx->pc = 0x190644u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x190648: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x190648u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x19064c: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x19064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190654: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x190654u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x190658: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190658u;
    SET_GPR_U32(ctx, 31, 0x190660u);
    ctx->pc = 0x19065Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190658u;
            // 0x19065c: 0x46000b80  add.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190660u; }
        if (ctx->pc != 0x190660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190660u; }
        if (ctx->pc != 0x190660u) { return; }
    }
    ctx->pc = 0x190660u;
    // 0x190660: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x190660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190664: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190668: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x190668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x19066c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x19066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190670: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190670u;
    SET_GPR_U32(ctx, 31, 0x190678u);
    ctx->pc = 0x190674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190670u;
            // 0x190674: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190678u; }
        if (ctx->pc != 0x190678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190678u; }
        if (ctx->pc != 0x190678u) { return; }
    }
    ctx->pc = 0x190678u;
    // 0x190678: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x19067c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x19067cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190680: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190684: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x190684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x190688: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19068c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x19068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190690: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x190694: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x190694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190698: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190698u;
    SET_GPR_U32(ctx, 31, 0x1906A0u);
    ctx->pc = 0x19069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190698u;
            // 0x19069c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1906A0u; }
        if (ctx->pc != 0x1906A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1906A0u; }
        if (ctx->pc != 0x1906A0u) { return; }
    }
    ctx->pc = 0x1906A0u;
    // 0x1906a0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1906a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1906a4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1906a8: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x1906ac: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1906acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1906b0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1906b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1906b4: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x1906b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1906b8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1906b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1906bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1906bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1906c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1906c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1906c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1906c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1906cc: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x1906CCu;
    SET_GPR_U32(ctx, 31, 0x1906D4u);
    ctx->pc = 0x1906D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1906CCu;
            // 0x1906d0: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1906D4u; }
        if (ctx->pc != 0x1906D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1906D4u; }
        if (ctx->pc != 0x1906D4u) { return; }
    }
    ctx->pc = 0x1906D4u;
    // 0x1906d4: 0x100006b2  b           . + 4 + (0x6B2 << 2)
    ctx->pc = 0x1906D4u;
    {
        const bool branch_taken_0x1906d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1906D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1906D4u;
            // 0x1906d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906d4) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x1906DCu;
    // 0x1906dc: 0x0  nop
    ctx->pc = 0x1906dcu;
    // NOP
label_1906e0:
    // 0x1906e0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1906e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1906e4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1906E4u;
    SET_GPR_U32(ctx, 31, 0x1906ECu);
    ctx->pc = 0x1906E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1906E4u;
            // 0x1906e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1906ECu; }
        if (ctx->pc != 0x1906ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1906ECu; }
        if (ctx->pc != 0x1906ECu) { return; }
    }
    ctx->pc = 0x1906ECu;
    // 0x1906ec: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1906f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1906f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906f4: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1906f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1906F8u;
    {
        const bool branch_taken_0x1906f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1906FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1906F8u;
            // 0x1906fc: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906f8) {
            ctx->pc = 0x190708u;
            goto label_190708;
        }
    }
    ctx->pc = 0x190700u;
    // 0x190700: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x190704: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_190708:
    // 0x190708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19070c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x19070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190710: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x190714: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x190714u;
    SET_GPR_U32(ctx, 31, 0x19071Cu);
    ctx->pc = 0x190718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190714u;
            // 0x190718: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19071Cu; }
        if (ctx->pc != 0x19071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19071Cu; }
        if (ctx->pc != 0x19071Cu) { return; }
    }
    ctx->pc = 0x19071Cu;
    // 0x19071c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x19071cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x190720: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190720u;
    {
        const bool branch_taken_0x190720 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190720u;
            // 0x190724: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190720) {
            ctx->pc = 0x190734u;
            goto label_190734;
        }
    }
    ctx->pc = 0x190728u;
    // 0x190728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19072c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19072Cu;
    {
        const bool branch_taken_0x19072c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19072Cu;
            // 0x190730: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19072c) {
            ctx->pc = 0x19074Cu;
            goto label_19074c;
        }
    }
    ctx->pc = 0x190734u;
label_190734:
    // 0x190734: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190734u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x190738: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x190738u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19073c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19073cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190740: 0x0  nop
    ctx->pc = 0x190740u;
    // NOP
    // 0x190744: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190748: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19074c:
    // 0x19074c: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x19074cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x190750: 0x4600a541  sub.s       $f21, $f20, $f0
    ctx->pc = 0x190750u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x190754: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190754u;
    {
        const bool branch_taken_0x190754 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x190758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190754u;
            // 0x190758: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190754) {
            ctx->pc = 0x190764u;
            goto label_190764;
        }
    }
    ctx->pc = 0x19075Cu;
    // 0x19075c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x19075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x190760: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x190760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_190764:
    // 0x190764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190768: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x190768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19076c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19076cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x190770: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x190770u;
    SET_GPR_U32(ctx, 31, 0x190778u);
    ctx->pc = 0x190774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190770u;
            // 0x190774: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190778u; }
        if (ctx->pc != 0x190778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190778u; }
        if (ctx->pc != 0x190778u) { return; }
    }
    ctx->pc = 0x190778u;
    // 0x190778: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x190778u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x19077c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19077Cu;
    {
        const bool branch_taken_0x19077c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19077Cu;
            // 0x190780: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19077c) {
            ctx->pc = 0x190790u;
            goto label_190790;
        }
    }
    ctx->pc = 0x190784u;
    // 0x190784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190788: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190788u;
    {
        const bool branch_taken_0x190788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19078Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190788u;
            // 0x19078c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190788) {
            ctx->pc = 0x1907A8u;
            goto label_1907a8;
        }
    }
    ctx->pc = 0x190790u;
label_190790:
    // 0x190790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190790u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x190794: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x190794u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x190798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x190798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19079c: 0x0  nop
    ctx->pc = 0x19079cu;
    // NOP
    // 0x1907a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1907a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1907a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1907a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1907a8:
    // 0x1907a8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1907a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1907ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1907acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1907b0: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x1907b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1907b4: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1907b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1907b8: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x1907b8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1907bc: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1907bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1907c0: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1907C0u;
    SET_GPR_U32(ctx, 31, 0x1907C8u);
    ctx->pc = 0x1907C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1907C0u;
            // 0x1907c4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1907C8u; }
        if (ctx->pc != 0x1907C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1907C8u; }
        if (ctx->pc != 0x1907C8u) { return; }
    }
    ctx->pc = 0x1907C8u;
    // 0x1907c8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1907c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1907cc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1907ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1907d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1907d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1907d4: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1907d4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1907d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1907D8u;
    {
        const bool branch_taken_0x1907d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1907DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1907D8u;
            // 0x1907dc: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907d8) {
            ctx->pc = 0x1907E8u;
            goto label_1907e8;
        }
    }
    ctx->pc = 0x1907E0u;
    // 0x1907e0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1907e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1907e4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1907e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1907e8:
    // 0x1907e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1907e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1907ec: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1907ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1907f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1907f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1907f4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1907F4u;
    SET_GPR_U32(ctx, 31, 0x1907FCu);
    ctx->pc = 0x1907F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1907F4u;
            // 0x1907f8: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1907FCu; }
        if (ctx->pc != 0x1907FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1907FCu; }
        if (ctx->pc != 0x1907FCu) { return; }
    }
    ctx->pc = 0x1907FCu;
    // 0x1907fc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1907fcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x190800: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190800u;
    {
        const bool branch_taken_0x190800 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190800u;
            // 0x190804: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190800) {
            ctx->pc = 0x190814u;
            goto label_190814;
        }
    }
    ctx->pc = 0x190808u;
    // 0x190808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19080c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19080Cu;
    {
        const bool branch_taken_0x19080c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19080Cu;
            // 0x190810: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19080c) {
            ctx->pc = 0x19082Cu;
            goto label_19082c;
        }
    }
    ctx->pc = 0x190814u;
label_190814:
    // 0x190814: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190814u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x190818: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x190818u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19081c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19081cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190820: 0x0  nop
    ctx->pc = 0x190820u;
    // NOP
    // 0x190824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190828: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19082c:
    // 0x19082c: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x19082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x190830: 0x4600a540  add.s       $f21, $f20, $f0
    ctx->pc = 0x190830u;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x190834: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190834u;
    {
        const bool branch_taken_0x190834 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x190838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190834u;
            // 0x190838: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190834) {
            ctx->pc = 0x190844u;
            goto label_190844;
        }
    }
    ctx->pc = 0x19083Cu;
    // 0x19083c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x19083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x190840: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_190844:
    // 0x190844: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190848: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x190848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19084c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19084cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x190850: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x190850u;
    SET_GPR_U32(ctx, 31, 0x190858u);
    ctx->pc = 0x190854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190850u;
            // 0x190854: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190858u; }
        if (ctx->pc != 0x190858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190858u; }
        if (ctx->pc != 0x190858u) { return; }
    }
    ctx->pc = 0x190858u;
    // 0x190858: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x190858u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x19085c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19085Cu;
    {
        const bool branch_taken_0x19085c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x190860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19085Cu;
            // 0x190860: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19085c) {
            ctx->pc = 0x190870u;
            goto label_190870;
        }
    }
    ctx->pc = 0x190864u;
    // 0x190864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190868: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190868u;
    {
        const bool branch_taken_0x190868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190868u;
            // 0x19086c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190868) {
            ctx->pc = 0x190888u;
            goto label_190888;
        }
    }
    ctx->pc = 0x190870u;
label_190870:
    // 0x190870: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x190870u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x190874: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x190874u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x190878: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x190878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19087c: 0x0  nop
    ctx->pc = 0x19087cu;
    // NOP
    // 0x190880: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190884: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x190884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_190888:
    // 0x190888: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19088c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19088cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190890: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x190890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x190894: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190898: 0x4600a340  add.s       $f13, $f20, $f0
    ctx->pc = 0x190898u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x19089c: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x19089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1908a0: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1908A0u;
    SET_GPR_U32(ctx, 31, 0x1908A8u);
    ctx->pc = 0x1908A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1908A0u;
            // 0x1908a4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908A8u; }
        if (ctx->pc != 0x1908A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908A8u; }
        if (ctx->pc != 0x1908A8u) { return; }
    }
    ctx->pc = 0x1908A8u;
    // 0x1908a8: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1908a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1908ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1908acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1908b0: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x1908b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1908b4: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1908b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1908b8: 0xc0648c0  jal         func_192300
    ctx->pc = 0x1908B8u;
    SET_GPR_U32(ctx, 31, 0x1908C0u);
    ctx->pc = 0x1908BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1908B8u;
            // 0x1908bc: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908C0u; }
        if (ctx->pc != 0x1908C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908C0u; }
        if (ctx->pc != 0x1908C0u) { return; }
    }
    ctx->pc = 0x1908C0u;
    // 0x1908c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1908c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1908c4: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x1908c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1908c8: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1908c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1908cc: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1908ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1908d0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1908d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1908d4: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1908d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1908d8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1908d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1908dc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1908dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1908e0: 0xc0648c0  jal         func_192300
    ctx->pc = 0x1908E0u;
    SET_GPR_U32(ctx, 31, 0x1908E8u);
    ctx->pc = 0x1908E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1908E0u;
            // 0x1908e4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908E8u; }
        if (ctx->pc != 0x1908E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908E8u; }
        if (ctx->pc != 0x1908E8u) { return; }
    }
    ctx->pc = 0x1908E8u;
    // 0x1908e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1908e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1908ec: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1908ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1908f0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1908f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1908f4: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x1908f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x1908f8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1908f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1908fc: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1908fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x190900: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x190900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x190904: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x190904u;
    SET_GPR_U32(ctx, 31, 0x19090Cu);
    ctx->pc = 0x190908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190904u;
            // 0x190908: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19090Cu; }
        if (ctx->pc != 0x19090Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19090Cu; }
        if (ctx->pc != 0x19090Cu) { return; }
    }
    ctx->pc = 0x19090Cu;
    // 0x19090c: 0x10000624  b           . + 4 + (0x624 << 2)
    ctx->pc = 0x19090Cu;
    {
        const bool branch_taken_0x19090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19090Cu;
            // 0x190910: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19090c) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x190914u;
    // 0x190914: 0x0  nop
    ctx->pc = 0x190914u;
    // NOP
label_190918:
    // 0x190918: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x190918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x19091c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x19091Cu;
    SET_GPR_U32(ctx, 31, 0x190924u);
    ctx->pc = 0x190920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19091Cu;
            // 0x190920: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190924u; }
        if (ctx->pc != 0x190924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190924u; }
        if (ctx->pc != 0x190924u) { return; }
    }
    ctx->pc = 0x190924u;
    // 0x190924: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x190924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190928: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19092c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x19092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190930: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190934: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x190934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x190938: 0x128140  sll         $s0, $s2, 5
    ctx->pc = 0x190938u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x19093c: 0xc421a588  lwc1        $f1, -0x5A78($at)
    ctx->pc = 0x19093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190940: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x190940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x190944: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x190944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190948: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x190948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19094c: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x19094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190950: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x190950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x190954: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x190954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x190958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19095c: 0x46042b00  add.s       $f12, $f5, $f4
    ctx->pc = 0x19095cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x190960: 0x46000b81  sub.s       $f14, $f1, $f0
    ctx->pc = 0x190960u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x190964: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x190964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190968: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190968u;
    SET_GPR_U32(ctx, 31, 0x190970u);
    ctx->pc = 0x19096Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190968u;
            // 0x19096c: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190970u; }
        if (ctx->pc != 0x190970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190970u; }
        if (ctx->pc != 0x190970u) { return; }
    }
    ctx->pc = 0x190970u;
    // 0x190970: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x190970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190974: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x190974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x190978: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x190978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19097c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190980: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x190980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190984: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x190984u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x190988: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19098c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19098cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x190990: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190994: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190998: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x190998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19099c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1909a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1909a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1909a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1909a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1909a8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1909a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1909ac: 0x46001b40  add.s       $f13, $f3, $f0
    ctx->pc = 0x1909acu;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1909b0: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x1909b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1909b4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1909b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1909b8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x1909b8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1909bc: 0xc421a588  lwc1        $f1, -0x5A78($at)
    ctx->pc = 0x1909bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1909c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1909c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1909c4: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x1909c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1909c8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1909C8u;
    SET_GPR_U32(ctx, 31, 0x1909D0u);
    ctx->pc = 0x1909CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1909C8u;
            // 0x1909cc: 0x46000b81  sub.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1909D0u; }
        if (ctx->pc != 0x1909D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1909D0u; }
        if (ctx->pc != 0x1909D0u) { return; }
    }
    ctx->pc = 0x1909D0u;
    // 0x1909d0: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1909d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1909d4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1909d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1909d8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x1909d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1909dc: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1909dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1909e0: 0xc0648c0  jal         func_192300
    ctx->pc = 0x1909E0u;
    SET_GPR_U32(ctx, 31, 0x1909E8u);
    ctx->pc = 0x1909E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1909E0u;
            // 0x1909e4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1909E8u; }
        if (ctx->pc != 0x1909E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1909E8u; }
        if (ctx->pc != 0x1909E8u) { return; }
    }
    ctx->pc = 0x1909E8u;
    // 0x1909e8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1909e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1909ec: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x1909ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1909f0: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1909f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1909f4: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1909f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1909f8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1909f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1909fc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1909fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190a00: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x190a04: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x190a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190a08: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190A08u;
    SET_GPR_U32(ctx, 31, 0x190A10u);
    ctx->pc = 0x190A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190A08u;
            // 0x190a0c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A10u; }
        if (ctx->pc != 0x190A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A10u; }
        if (ctx->pc != 0x190A10u) { return; }
    }
    ctx->pc = 0x190A10u;
    // 0x190a10: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x190a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x190a14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x190a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190a18: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190A18u;
    SET_GPR_U32(ctx, 31, 0x190A20u);
    ctx->pc = 0x190A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190A18u;
            // 0x190a1c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A20u; }
        if (ctx->pc != 0x190A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A20u; }
        if (ctx->pc != 0x190A20u) { return; }
    }
    ctx->pc = 0x190A20u;
    // 0x190a20: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x190a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190a24: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190a28: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x190a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190a2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a30: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x190a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x190a34: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x190a34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x190a38: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x190a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a3c: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x190a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x190a40: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x190a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190a44: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x190a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x190a48: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x190a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190a4c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190a50: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x190a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x190a54: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x190a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x190a58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190a5c: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x190a5cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x190a60: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x190a60u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x190a64: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x190a64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190a68: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x190a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x190a6c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x190a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x190a70: 0x46042b01  sub.s       $f12, $f5, $f4
    ctx->pc = 0x190a70u;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x190a74: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190A74u;
    SET_GPR_U32(ctx, 31, 0x190A7Cu);
    ctx->pc = 0x190A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190A74u;
            // 0x190a78: 0x46040341  sub.s       $f13, $f0, $f4 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A7Cu; }
        if (ctx->pc != 0x190A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190A7Cu; }
        if (ctx->pc != 0x190A7Cu) { return; }
    }
    ctx->pc = 0x190A7Cu;
    // 0x190a7c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x190a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190a80: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x190a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x190a84: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x190a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190a88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190a8c: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x190a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190a90: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x190a90u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x190a94: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x190a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x190a98: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x190a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x190a9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x190a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x190aa0: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x190aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x190aa4: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x190aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190aa8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190aac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x190ab0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x190ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x190ab4: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x190ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x190ab8: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x190ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x190abc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x190abcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x190ac0: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x190ac0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x190ac4: 0x46011b40  add.s       $f13, $f3, $f1
    ctx->pc = 0x190ac4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x190ac8: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x190ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x190acc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x190accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x190ad0: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x190ad0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x190ad4: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x190ad4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x190ad8: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x190ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190adc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190ae0: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x190ae0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x190ae4: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190AE4u;
    SET_GPR_U32(ctx, 31, 0x190AECu);
    ctx->pc = 0x190AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190AE4u;
            // 0x190ae8: 0x46000b80  add.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190AECu; }
        if (ctx->pc != 0x190AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190AECu; }
        if (ctx->pc != 0x190AECu) { return; }
    }
    ctx->pc = 0x190AECu;
    // 0x190aec: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x190aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190af0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190af4: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x190af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190af8: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190afc: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190AFCu;
    SET_GPR_U32(ctx, 31, 0x190B04u);
    ctx->pc = 0x190B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190AFCu;
            // 0x190b00: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B04u; }
        if (ctx->pc != 0x190B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B04u; }
        if (ctx->pc != 0x190B04u) { return; }
    }
    ctx->pc = 0x190B04u;
    // 0x190b04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190b08: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x190b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190b0c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190b10: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x190b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x190b14: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190b18: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x190b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190b1c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x190b20: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x190b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190b24: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190B24u;
    SET_GPR_U32(ctx, 31, 0x190B2Cu);
    ctx->pc = 0x190B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190B24u;
            // 0x190b28: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B2Cu; }
        if (ctx->pc != 0x190B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B2Cu; }
        if (ctx->pc != 0x190B2Cu) { return; }
    }
    ctx->pc = 0x190B2Cu;
    // 0x190b2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190b30: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x190b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x190b34: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x190b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x190b38: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x190b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x190b3c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190b40: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x190b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b44: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x190b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b48: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x190B48u;
    SET_GPR_U32(ctx, 31, 0x190B50u);
    ctx->pc = 0x190B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190B48u;
            // 0x190b4c: 0x24080028  addiu       $t0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B50u; }
        if (ctx->pc != 0x190B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B50u; }
        if (ctx->pc != 0x190B50u) { return; }
    }
    ctx->pc = 0x190B50u;
    // 0x190b50: 0x10000593  b           . + 4 + (0x593 << 2)
    ctx->pc = 0x190B50u;
    {
        const bool branch_taken_0x190b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190B50u;
            // 0x190b54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b50) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x190B58u;
label_190b58:
    // 0x190b58: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x190b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x190b5c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190B5Cu;
    SET_GPR_U32(ctx, 31, 0x190B64u);
    ctx->pc = 0x190B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190B5Cu;
            // 0x190b60: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B64u; }
        if (ctx->pc != 0x190B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B64u; }
        if (ctx->pc != 0x190B64u) { return; }
    }
    ctx->pc = 0x190B64u;
    // 0x190b64: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x190b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190b68: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190b6c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x190b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b74: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x190b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x190b78: 0x129940  sll         $s3, $s2, 5
    ctx->pc = 0x190b78u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x190b7c: 0xc421a588  lwc1        $f1, -0x5A78($at)
    ctx->pc = 0x190b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190b80: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x190b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x190b84: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x190b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190b88: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x190b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x190b8c: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x190b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190b90: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x190b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x190b94: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x190b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x190b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190b9c: 0x46042b00  add.s       $f12, $f5, $f4
    ctx->pc = 0x190b9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x190ba0: 0x46000b81  sub.s       $f14, $f1, $f0
    ctx->pc = 0x190ba0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x190ba4: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x190ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190ba8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190BA8u;
    SET_GPR_U32(ctx, 31, 0x190BB0u);
    ctx->pc = 0x190BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190BA8u;
            // 0x190bac: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190BB0u; }
        if (ctx->pc != 0x190BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190BB0u; }
        if (ctx->pc != 0x190BB0u) { return; }
    }
    ctx->pc = 0x190BB0u;
    // 0x190bb0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x190bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190bb4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x190bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x190bb8: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x190bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190bbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190bc0: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x190bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190bc4: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x190bc8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190bcc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x190bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x190bd0: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190bd4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190bd8: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x190bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190bdc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x190bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x190be0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190be4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x190be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x190be8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x190be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x190bec: 0x46001b40  add.s       $f13, $f3, $f0
    ctx->pc = 0x190becu;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x190bf0: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x190bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190bf4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x190bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x190bf8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x190bf8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x190bfc: 0xc421a588  lwc1        $f1, -0x5A78($at)
    ctx->pc = 0x190bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190c04: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x190c04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x190c08: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190C08u;
    SET_GPR_U32(ctx, 31, 0x190C10u);
    ctx->pc = 0x190C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190C08u;
            // 0x190c0c: 0x46000b81  sub.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C10u; }
        if (ctx->pc != 0x190C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C10u; }
        if (ctx->pc != 0x190C10u) { return; }
    }
    ctx->pc = 0x190C10u;
    // 0x190c10: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x190c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x190c14: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x190c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190c18: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x190c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190c1c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190c20: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190C20u;
    SET_GPR_U32(ctx, 31, 0x190C28u);
    ctx->pc = 0x190C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190C20u;
            // 0x190c24: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C28u; }
        if (ctx->pc != 0x190C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C28u; }
        if (ctx->pc != 0x190C28u) { return; }
    }
    ctx->pc = 0x190C28u;
    // 0x190c28: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x190c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190c2c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x190c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x190c30: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190c34: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x190c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x190c38: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190c3c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x190c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190c40: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x190c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x190c44: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x190c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190c48: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190C48u;
    SET_GPR_U32(ctx, 31, 0x190C50u);
    ctx->pc = 0x190C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190C48u;
            // 0x190c4c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C50u; }
        if (ctx->pc != 0x190C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C50u; }
        if (ctx->pc != 0x190C50u) { return; }
    }
    ctx->pc = 0x190C50u;
    // 0x190c50: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x190c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x190c54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x190c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190c58: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190C58u;
    SET_GPR_U32(ctx, 31, 0x190C60u);
    ctx->pc = 0x190C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190C58u;
            // 0x190c5c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C60u; }
        if (ctx->pc != 0x190C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C60u; }
        if (ctx->pc != 0x190C60u) { return; }
    }
    ctx->pc = 0x190C60u;
    // 0x190c60: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x190c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190c64: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190c68: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x190c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190c6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190c6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c70: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x190c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x190c74: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x190c74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x190c78: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x190c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190c7c: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x190c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x190c80: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x190c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190c84: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x190c84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x190c88: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x190c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190c8c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190c90: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x190c94: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x190c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x190c98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190c9c: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x190c9cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x190ca0: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x190ca0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x190ca4: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x190ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190ca8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x190ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x190cac: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x190cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x190cb0: 0x46042b01  sub.s       $f12, $f5, $f4
    ctx->pc = 0x190cb0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x190cb4: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190CB4u;
    SET_GPR_U32(ctx, 31, 0x190CBCu);
    ctx->pc = 0x190CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190CB4u;
            // 0x190cb8: 0x46040341  sub.s       $f13, $f0, $f4 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CBCu; }
        if (ctx->pc != 0x190CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190CBCu; }
        if (ctx->pc != 0x190CBCu) { return; }
    }
    ctx->pc = 0x190CBCu;
    // 0x190cbc: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x190cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190cc0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x190cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x190cc4: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x190cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190cc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190ccc: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x190cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190cd0: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x190cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x190cd4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x190cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x190cd8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x190cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x190cdc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x190cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x190ce0: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x190ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x190ce4: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x190ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190ce8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190cec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x190cf0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x190cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x190cf4: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x190cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x190cf8: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x190cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x190cfc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x190cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x190d00: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x190d00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x190d04: 0x46011b40  add.s       $f13, $f3, $f1
    ctx->pc = 0x190d04u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x190d08: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x190d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x190d0c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x190d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x190d10: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x190d10u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x190d14: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x190d14u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x190d18: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x190d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190d1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190d20: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x190d20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x190d24: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190D24u;
    SET_GPR_U32(ctx, 31, 0x190D2Cu);
    ctx->pc = 0x190D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D24u;
            // 0x190d28: 0x46000b80  add.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D2Cu; }
        if (ctx->pc != 0x190D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D2Cu; }
        if (ctx->pc != 0x190D2Cu) { return; }
    }
    ctx->pc = 0x190D2Cu;
    // 0x190d2c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x190d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190d30: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190d34: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x190d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190d38: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190d3c: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190D3Cu;
    SET_GPR_U32(ctx, 31, 0x190D44u);
    ctx->pc = 0x190D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D3Cu;
            // 0x190d40: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D44u; }
        if (ctx->pc != 0x190D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D44u; }
        if (ctx->pc != 0x190D44u) { return; }
    }
    ctx->pc = 0x190D44u;
    // 0x190d44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190d48: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x190d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190d4c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190d50: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x190d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x190d54: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190d58: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x190d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190d5c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x190d60: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190d64: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190D64u;
    SET_GPR_U32(ctx, 31, 0x190D6Cu);
    ctx->pc = 0x190D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D64u;
            // 0x190d68: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D6Cu; }
        if (ctx->pc != 0x190D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D6Cu; }
        if (ctx->pc != 0x190D6Cu) { return; }
    }
    ctx->pc = 0x190D6Cu;
    // 0x190d6c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190d70: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x190d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x190d74: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x190d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x190d78: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x190d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x190d7c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190d80: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x190d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x190d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d88: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x190D88u;
    SET_GPR_U32(ctx, 31, 0x190D90u);
    ctx->pc = 0x190D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D88u;
            // 0x190d8c: 0x24080028  addiu       $t0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D90u; }
        if (ctx->pc != 0x190D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D90u; }
        if (ctx->pc != 0x190D90u) { return; }
    }
    ctx->pc = 0x190D90u;
    // 0x190d90: 0x10000503  b           . + 4 + (0x503 << 2)
    ctx->pc = 0x190D90u;
    {
        const bool branch_taken_0x190d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190D90u;
            // 0x190d94: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d90) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x190D98u;
label_190d98:
    // 0x190d98: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x190d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x190d9c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190D9Cu;
    SET_GPR_U32(ctx, 31, 0x190DA4u);
    ctx->pc = 0x190DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190D9Cu;
            // 0x190da0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DA4u; }
        if (ctx->pc != 0x190DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DA4u; }
        if (ctx->pc != 0x190DA4u) { return; }
    }
    ctx->pc = 0x190DA4u;
    // 0x190da4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x190da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190da8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190dac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x190dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190db0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x190db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x190db4: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x190db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190db8: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x190db8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x190dbc: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x190dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x190dc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190dc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190dc4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x190dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190dc8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x190dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x190dcc: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x190dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x190dd0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x190dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x190dd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190dd8: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x190dd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x190ddc: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190DDCu;
    SET_GPR_U32(ctx, 31, 0x190DE4u);
    ctx->pc = 0x190DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190DDCu;
            // 0x190de0: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DE4u; }
        if (ctx->pc != 0x190DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190DE4u; }
        if (ctx->pc != 0x190DE4u) { return; }
    }
    ctx->pc = 0x190DE4u;
    // 0x190de4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x190de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190de8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190dec: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x190decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190df0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x190df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x190df4: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x190df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190dfc: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x190dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190e00: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x190e00u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x190e04: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x190e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190e08: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190e0c: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x190e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190e10: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190e14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x190e18: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x190e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190e1c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x190e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x190e20: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x190e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x190e24: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x190e24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x190e28: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x190e28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x190e2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190e30: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x190e30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x190e34: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x190e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x190e38: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x190e38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x190e3c: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190E3Cu;
    SET_GPR_U32(ctx, 31, 0x190E44u);
    ctx->pc = 0x190E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E3Cu;
            // 0x190e40: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E44u; }
        if (ctx->pc != 0x190E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E44u; }
        if (ctx->pc != 0x190E44u) { return; }
    }
    ctx->pc = 0x190E44u;
    // 0x190e44: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x190e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190e48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190e4c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x190e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190e50: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190e54: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190E54u;
    SET_GPR_U32(ctx, 31, 0x190E5Cu);
    ctx->pc = 0x190E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E54u;
            // 0x190e58: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E5Cu; }
        if (ctx->pc != 0x190E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E5Cu; }
        if (ctx->pc != 0x190E5Cu) { return; }
    }
    ctx->pc = 0x190E5Cu;
    // 0x190e5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190e60: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x190e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x190e64: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x190e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x190e68: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x190e6c: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x190e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x190e70: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x190e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x190e74: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x190e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x190e78: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x190e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x190e7c: 0xc0648c0  jal         func_192300
    ctx->pc = 0x190E7Cu;
    SET_GPR_U32(ctx, 31, 0x190E84u);
    ctx->pc = 0x190E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190E7Cu;
            // 0x190e80: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E84u; }
        if (ctx->pc != 0x190E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E84u; }
        if (ctx->pc != 0x190E84u) { return; }
    }
    ctx->pc = 0x190E84u;
    // 0x190e84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x190e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x190e88: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x190e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x190e8c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x190e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x190e90: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x190e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x190e94: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190e98: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x190e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x190e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ea0: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x190EA0u;
    SET_GPR_U32(ctx, 31, 0x190EA8u);
    ctx->pc = 0x190EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190EA0u;
            // 0x190ea4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EA8u; }
        if (ctx->pc != 0x190EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190EA8u; }
        if (ctx->pc != 0x190EA8u) { return; }
    }
    ctx->pc = 0x190EA8u;
    // 0x190ea8: 0x100004bd  b           . + 4 + (0x4BD << 2)
    ctx->pc = 0x190EA8u;
    {
        const bool branch_taken_0x190ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190EA8u;
            // 0x190eac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ea8) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x190EB0u;
label_190eb0:
    // 0x190eb0: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x190eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x190eb4: 0x4a00034  bltz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x190EB4u;
    {
        const bool branch_taken_0x190eb4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x190EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190EB4u;
            // 0x190eb8: 0x28a10006  slti        $at, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190eb4) {
            ctx->pc = 0x190F88u;
            goto label_190f88;
        }
    }
    ctx->pc = 0x190EBCu;
    // 0x190ebc: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x190EBCu;
    {
        const bool branch_taken_0x190ebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190EBCu;
            // 0x190ec0: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ebc) {
            ctx->pc = 0x190F88u;
            goto label_190f88;
        }
    }
    ctx->pc = 0x190EC4u;
    // 0x190ec4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190EC4u;
    SET_GPR_U32(ctx, 31, 0x190ECCu);
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190ECCu; }
        if (ctx->pc != 0x190ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190ECCu; }
        if (ctx->pc != 0x190ECCu) { return; }
    }
    ctx->pc = 0x190ECCu;
    // 0x190ecc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x190eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190ed0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x190ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x190ed4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x190ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ed8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190edc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x190edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190ee0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ee4: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x190ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190ee8: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x190ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190eec: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x190eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x190ef0: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x190ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x190ef4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x190ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x190ef8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x190ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x190efc: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190f00: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190f04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190f08: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x190f08u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x190f0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x190f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x190f10: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x190f10u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x190f14: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190F14u;
    SET_GPR_U32(ctx, 31, 0x190F1Cu);
    ctx->pc = 0x190F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F14u;
            // 0x190f18: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F1Cu; }
        if (ctx->pc != 0x190F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F1Cu; }
        if (ctx->pc != 0x190F1Cu) { return; }
    }
    ctx->pc = 0x190F1Cu;
    // 0x190f1c: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x190f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190f20: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x190f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x190f24: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x190f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190f28: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190f2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x190f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190f30: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x190f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190f34: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x190f38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190f3c: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x190f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x190f40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x190f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x190f44: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x190f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x190f48: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190f4c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190f50: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x190f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x190f54: 0x468028e0  cvt.s.w     $f3, $f5
    ctx->pc = 0x190f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x190f58: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x190f58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x190f5c: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x190f5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x190f60: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x190f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190f64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190f68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x190f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x190f6c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x190f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x190f70: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x190f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x190f74: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x190f74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x190f78: 0xc0648cc  jal         func_192330
    ctx->pc = 0x190F78u;
    SET_GPR_U32(ctx, 31, 0x190F80u);
    ctx->pc = 0x190F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190F78u;
            // 0x190f7c: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F80u; }
        if (ctx->pc != 0x190F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190F80u; }
        if (ctx->pc != 0x190F80u) { return; }
    }
    ctx->pc = 0x190F80u;
    // 0x190f80: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x190F80u;
    {
        const bool branch_taken_0x190f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f80) {
            ctx->pc = 0x191230u;
            goto label_191230;
        }
    }
    ctx->pc = 0x190F88u;
label_190f88:
    // 0x190f88: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x190f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x190f8c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x190F8Cu;
    {
        const bool branch_taken_0x190f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190F8Cu;
            // 0x190f90: 0x28a1000c  slti        $at, $a1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f8c) {
            ctx->pc = 0x191070u;
            goto label_191070;
        }
    }
    ctx->pc = 0x190F94u;
    // 0x190f94: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x190F94u;
    {
        const bool branch_taken_0x190f94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190F94u;
            // 0x190f98: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f94) {
            ctx->pc = 0x191070u;
            goto label_191070;
        }
    }
    ctx->pc = 0x190F9Cu;
    // 0x190f9c: 0x24a2fffa  addiu       $v0, $a1, -0x6
    ctx->pc = 0x190f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
    // 0x190fa0: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x190fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190fa4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x190FA4u;
    SET_GPR_U32(ctx, 31, 0x190FACu);
    ctx->pc = 0x190FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190FA4u;
            // 0x190fa8: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190FACu; }
        if (ctx->pc != 0x190FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190FACu; }
        if (ctx->pc != 0x190FACu) { return; }
    }
    ctx->pc = 0x190FACu;
    // 0x190fac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x190facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190fb0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x190fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x190fb4: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x190fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190fb8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x190fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x190fbc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x190fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190fc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190fc4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x190fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x190fc8: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x190fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190fcc: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x190fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190fd0: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x190fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x190fd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x190fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x190fd8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x190fdc: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x190fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x190fe0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x190fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190fe4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x190fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x190fe8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x190fe8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x190fec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190ff0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x190ff0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x190ff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x190ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x190ff8: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x190ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x190ffc: 0x46032301  sub.s       $f12, $f4, $f3
    ctx->pc = 0x190ffcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x191000: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191000u;
    SET_GPR_U32(ctx, 31, 0x191008u);
    ctx->pc = 0x191004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191000u;
            // 0x191004: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191008u; }
        if (ctx->pc != 0x191008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191008u; }
        if (ctx->pc != 0x191008u) { return; }
    }
    ctx->pc = 0x191008u;
    // 0x191008: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x191008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19100c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x19100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x191010: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x191010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191014: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191018: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x191018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19101c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19101cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x191020: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x191020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x191024: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x191024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x191028: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x191028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x19102c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191030: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x191030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191034: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x191034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x191038: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x19103c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19103cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191040: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x191040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191048: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19104c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x19104cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x191050: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x191050u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x191054: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x191054u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x191058: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x191058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x19105c: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x19105cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x191060: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191060u;
    SET_GPR_U32(ctx, 31, 0x191068u);
    ctx->pc = 0x191064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191060u;
            // 0x191064: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191068u; }
        if (ctx->pc != 0x191068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191068u; }
        if (ctx->pc != 0x191068u) { return; }
    }
    ctx->pc = 0x191068u;
    // 0x191068: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x191068u;
    {
        const bool branch_taken_0x191068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191068) {
            ctx->pc = 0x191230u;
            goto label_191230;
        }
    }
    ctx->pc = 0x191070u;
label_191070:
    // 0x191070: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x191070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x191074: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x191074u;
    {
        const bool branch_taken_0x191074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191074u;
            // 0x191078: 0x28a10012  slti        $at, $a1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191074) {
            ctx->pc = 0x191150u;
            goto label_191150;
        }
    }
    ctx->pc = 0x19107Cu;
    // 0x19107c: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x19107Cu;
    {
        const bool branch_taken_0x19107c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19107c) {
            ctx->pc = 0x191150u;
            goto label_191150;
        }
    }
    ctx->pc = 0x191084u;
    // 0x191084: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x191088: 0xc05c00c  jal         func_170030
    ctx->pc = 0x191088u;
    SET_GPR_U32(ctx, 31, 0x191090u);
    ctx->pc = 0x19108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191088u;
            // 0x19108c: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191090u; }
        if (ctx->pc != 0x191090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191090u; }
        if (ctx->pc != 0x191090u) { return; }
    }
    ctx->pc = 0x191090u;
    // 0x191090: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x191090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191094: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x191094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x191098: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x191098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19109c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19109cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1910a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1910a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1910a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1910a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910a8: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x1910a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1910ac: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x1910acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1910b0: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x1910b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1910b4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1910b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1910b8: 0x46801920  cvt.s.w     $f4, $f3
    ctx->pc = 0x1910b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1910bc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1910bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1910c0: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1910c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1910c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1910c8: 0x468028e0  cvt.s.w     $f3, $f5
    ctx->pc = 0x1910c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1910cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1910ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1910d0: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x1910d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x1910d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1910d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1910d8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x1910d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1910dc: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1910dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1910e0: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x1910e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1910e4: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x1910e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1910e8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1910E8u;
    SET_GPR_U32(ctx, 31, 0x1910F0u);
    ctx->pc = 0x1910ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1910E8u;
            // 0x1910ec: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910F0u; }
        if (ctx->pc != 0x1910F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910F0u; }
        if (ctx->pc != 0x1910F0u) { return; }
    }
    ctx->pc = 0x1910F0u;
    // 0x1910f0: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1910f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1910f4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1910f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1910f8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1910f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1910fc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1910fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191100: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x191100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x191104: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x191104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x191108: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x191108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x19110c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191110: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x191110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x191114: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x191114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191118: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x191118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19111c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x19111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191120: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191124: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x191124u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x191128: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x191128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19112c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19112cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191130: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191134: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x191134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x191138: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x191138u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x19113c: 0xc0648cc  jal         func_192330
    ctx->pc = 0x19113Cu;
    SET_GPR_U32(ctx, 31, 0x191144u);
    ctx->pc = 0x191140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19113Cu;
            // 0x191140: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191144u; }
        if (ctx->pc != 0x191144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191144u; }
        if (ctx->pc != 0x191144u) { return; }
    }
    ctx->pc = 0x191144u;
    // 0x191144: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x191144u;
    {
        const bool branch_taken_0x191144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191144) {
            ctx->pc = 0x191230u;
            goto label_191230;
        }
    }
    ctx->pc = 0x19114Cu;
    // 0x19114c: 0x0  nop
    ctx->pc = 0x19114cu;
    // NOP
label_191150:
    // 0x191150: 0x28a20012  slti        $v0, $a1, 0x12
    ctx->pc = 0x191150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x191154: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x191154u;
    {
        const bool branch_taken_0x191154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191154u;
            // 0x191158: 0x28a10018  slti        $at, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191154) {
            ctx->pc = 0x191230u;
            goto label_191230;
        }
    }
    ctx->pc = 0x19115Cu;
    // 0x19115c: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x19115Cu;
    {
        const bool branch_taken_0x19115c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x191160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19115Cu;
            // 0x191160: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19115c) {
            ctx->pc = 0x191230u;
            goto label_191230;
        }
    }
    ctx->pc = 0x191164u;
    // 0x191164: 0x24a2ffee  addiu       $v0, $a1, -0x12
    ctx->pc = 0x191164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967278));
    // 0x191168: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x191168u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19116c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x19116Cu;
    SET_GPR_U32(ctx, 31, 0x191174u);
    ctx->pc = 0x191170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19116Cu;
            // 0x191170: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191174u; }
        if (ctx->pc != 0x191174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191174u; }
        if (ctx->pc != 0x191174u) { return; }
    }
    ctx->pc = 0x191174u;
    // 0x191174: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x191174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x191178: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x191178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x19117c: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x19117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191180: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191184: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x191184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191188: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19118c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x19118cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x191190: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x191190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x191194: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x191194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191198: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x191198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x19119c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x19119cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1911a0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1911a4: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1911a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1911a8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1911a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1911ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1911acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1911b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1911b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1911b4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1911b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1911b8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x1911b8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1911bc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1911bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1911c0: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x1911c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1911c4: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x1911c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1911c8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1911C8u;
    SET_GPR_U32(ctx, 31, 0x1911D0u);
    ctx->pc = 0x1911CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1911C8u;
            // 0x1911cc: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911D0u; }
        if (ctx->pc != 0x1911D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911D0u; }
        if (ctx->pc != 0x1911D0u) { return; }
    }
    ctx->pc = 0x1911D0u;
    // 0x1911d0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1911d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1911d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1911d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1911d8: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x1911d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1911dc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1911dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1911e0: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x1911e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1911e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1911e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1911e8: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x1911e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1911ec: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1911ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1911f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1911f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1911f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1911f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1911f8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1911f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1911fc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1911fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x191200: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191204: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191208: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x191208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19120c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x19120cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x191210: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x191210u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x191214: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191218: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x191218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x19121c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19121cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x191220: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x191220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x191224: 0x46032301  sub.s       $f12, $f4, $f3
    ctx->pc = 0x191224u;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x191228: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191228u;
    SET_GPR_U32(ctx, 31, 0x191230u);
    ctx->pc = 0x19122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191228u;
            // 0x19122c: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191230u; }
        if (ctx->pc != 0x191230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191230u; }
        if (ctx->pc != 0x191230u) { return; }
    }
    ctx->pc = 0x191230u;
label_191230:
    // 0x191230: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x191230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191234: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x191234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191238: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x19123c: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x19123cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x191240: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191244: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191244u;
    SET_GPR_U32(ctx, 31, 0x19124Cu);
    ctx->pc = 0x191248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191244u;
            // 0x191248: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19124Cu; }
        if (ctx->pc != 0x19124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19124Cu; }
        if (ctx->pc != 0x19124Cu) { return; }
    }
    ctx->pc = 0x19124Cu;
    // 0x19124c: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x19124cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x191250: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191254: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x191254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x191258: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x19125c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19125cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191260: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x191260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191264: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191268: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x191268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x19126c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x19126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191270: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x191270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x191274: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x191274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x191278: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191278u;
    SET_GPR_U32(ctx, 31, 0x191280u);
    ctx->pc = 0x19127Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191278u;
            // 0x19127c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191280u; }
        if (ctx->pc != 0x191280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191280u; }
        if (ctx->pc != 0x191280u) { return; }
    }
    ctx->pc = 0x191280u;
    // 0x191280: 0x100003c7  b           . + 4 + (0x3C7 << 2)
    ctx->pc = 0x191280u;
    {
        const bool branch_taken_0x191280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191280u;
            // 0x191284: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191280) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x191288u;
label_191288:
    // 0x191288: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x191288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x19128c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x19128Cu;
    SET_GPR_U32(ctx, 31, 0x191294u);
    ctx->pc = 0x191290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19128Cu;
            // 0x191290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191294u; }
        if (ctx->pc != 0x191294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191294u; }
        if (ctx->pc != 0x191294u) { return; }
    }
    ctx->pc = 0x191294u;
    // 0x191294: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x191294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191298: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x191298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x19129c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1912a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1912a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912a4: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x1912a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1912a8: 0x119940  sll         $s3, $s1, 5
    ctx->pc = 0x1912a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1912ac: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x1912acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1912b0: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1912b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1912b4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1912b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1912b8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1912b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1912bc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1912bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1912c0: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1912c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1912c4: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1912c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1912c8: 0x3c02485a  lui         $v0, 0x485A
    ctx->pc = 0x1912c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18522 << 16));
    // 0x1912cc: 0x34426100  ori         $v0, $v0, 0x6100
    ctx->pc = 0x1912ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24832u)));
    // 0x1912d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1912d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1912d4: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x1912d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1912d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1912d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1912dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1912dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1912e0: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x1912e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x1912e4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1912e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1912e8: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x1912e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1912ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1912ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1912f0: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1912F0u;
    SET_GPR_U32(ctx, 31, 0x1912F8u);
    ctx->pc = 0x1912F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1912F0u;
            // 0x1912f4: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912F8u; }
        if (ctx->pc != 0x1912F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912F8u; }
        if (ctx->pc != 0x1912F8u) { return; }
    }
    ctx->pc = 0x1912F8u;
    // 0x1912f8: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x1912f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1912fc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1912fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x191300: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x191300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191304: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191308: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x191308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19130c: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x19130cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191310: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x191310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x191314: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x191314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x191318: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x191318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x19131c: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x19131cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x191320: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191324: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191328: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19132c: 0x3c02485a  lui         $v0, 0x485A
    ctx->pc = 0x19132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18522 << 16));
    // 0x191330: 0x34426100  ori         $v0, $v0, 0x6100
    ctx->pc = 0x191330u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24832u)));
    // 0x191334: 0xc6870004  lwc1        $f7, 0x4($s4)
    ctx->pc = 0x191334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x191338: 0x468030e0  cvt.s.w     $f3, $f6
    ctx->pc = 0x191338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x19133c: 0x460338c0  add.s       $f3, $f7, $f3
    ctx->pc = 0x19133cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x191340: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x191340u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x191344: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x191344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191348: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19134c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19134cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191350: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x191350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x191354: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x191354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x191358: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x191358u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x19135c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x19135cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x191360: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x191360u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x191364: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x191364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x191368: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191368u;
    SET_GPR_U32(ctx, 31, 0x191370u);
    ctx->pc = 0x19136Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191368u;
            // 0x19136c: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191370u; }
        if (ctx->pc != 0x191370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191370u; }
        if (ctx->pc != 0x191370u) { return; }
    }
    ctx->pc = 0x191370u;
    // 0x191370: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x191370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x191374: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191378: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x191378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19137c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x19137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191380: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191380u;
    SET_GPR_U32(ctx, 31, 0x191388u);
    ctx->pc = 0x191384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191380u;
            // 0x191384: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191388u; }
        if (ctx->pc != 0x191388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191388u; }
        if (ctx->pc != 0x191388u) { return; }
    }
    ctx->pc = 0x191388u;
    // 0x191388: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x19138c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x19138cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x191390: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191394: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x191394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x191398: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19139c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1913a0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1913a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1913a4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1913a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1913a8: 0xc0648c0  jal         func_192300
    ctx->pc = 0x1913A8u;
    SET_GPR_U32(ctx, 31, 0x1913B0u);
    ctx->pc = 0x1913ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1913A8u;
            // 0x1913ac: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913B0u; }
        if (ctx->pc != 0x1913B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913B0u; }
        if (ctx->pc != 0x1913B0u) { return; }
    }
    ctx->pc = 0x1913B0u;
    // 0x1913b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1913b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1913b4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1913b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1913b8: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x1913b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x1913bc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1913bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1913c0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1913c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1913c4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1913c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1913c8: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1913c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1913cc: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x1913CCu;
    SET_GPR_U32(ctx, 31, 0x1913D4u);
    ctx->pc = 0x1913D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1913CCu;
            // 0x1913d0: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913D4u; }
        if (ctx->pc != 0x1913D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913D4u; }
        if (ctx->pc != 0x1913D4u) { return; }
    }
    ctx->pc = 0x1913D4u;
    // 0x1913d4: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x1913d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1913d8: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1913D8u;
    SET_GPR_U32(ctx, 31, 0x1913E0u);
    ctx->pc = 0x1913DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1913D8u;
            // 0x1913dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913E0u; }
        if (ctx->pc != 0x1913E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913E0u; }
        if (ctx->pc != 0x1913E0u) { return; }
    }
    ctx->pc = 0x1913E0u;
    // 0x1913e0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1913e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1913e4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1913e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1913e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1913e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1913ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1913ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913f0: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x1913f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1913f4: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x1913f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1913f8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1913f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1913fc: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x1913fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x191400: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x191400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x191404: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x191404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x191408: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x191408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x19140c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x19140cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x191410: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x191410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191418: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x191418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19141c: 0x0  nop
    ctx->pc = 0x19141cu;
    // NOP
    // 0x191420: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x191420u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x191424: 0x3c024864  lui         $v0, 0x4864
    ctx->pc = 0x191424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18532 << 16));
    // 0x191428: 0x34422500  ori         $v0, $v0, 0x2500
    ctx->pc = 0x191428u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9472u)));
    // 0x19142c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19142cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191430: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x191430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x191434: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x191434u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x191438: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x191438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x19143c: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x19143cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x191440: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x191440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x191444: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191444u;
    SET_GPR_U32(ctx, 31, 0x19144Cu);
    ctx->pc = 0x191448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191444u;
            // 0x191448: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19144Cu; }
        if (ctx->pc != 0x19144Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19144Cu; }
        if (ctx->pc != 0x19144Cu) { return; }
    }
    ctx->pc = 0x19144Cu;
    // 0x19144c: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x19144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191450: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x191450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x191454: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x191454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191458: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x191458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19145c: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x19145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191464: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x191464u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191468: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x191468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x19146c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x19146cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x191470: 0xc6660000  lwc1        $f6, 0x0($s3)
    ctx->pc = 0x191470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x191474: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x191474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x191478: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x19147c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x19147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191480: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191484: 0x3c024864  lui         $v0, 0x4864
    ctx->pc = 0x191484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18532 << 16));
    // 0x191488: 0x34422500  ori         $v0, $v0, 0x2500
    ctx->pc = 0x191488u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9472u)));
    // 0x19148c: 0xc6870004  lwc1        $f7, 0x4($s4)
    ctx->pc = 0x19148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x191490: 0x468030e0  cvt.s.w     $f3, $f6
    ctx->pc = 0x191490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x191494: 0x460338c0  add.s       $f3, $f7, $f3
    ctx->pc = 0x191494u;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x191498: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x191498u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x19149c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x19149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1914a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1914a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1914a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1914a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1914a8: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1914a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x1914ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1914acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1914b0: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x1914b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1914b4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1914b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1914b8: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x1914b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1914bc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1914bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1914c0: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1914C0u;
    SET_GPR_U32(ctx, 31, 0x1914C8u);
    ctx->pc = 0x1914C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1914C0u;
            // 0x1914c4: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914C8u; }
        if (ctx->pc != 0x1914C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914C8u; }
        if (ctx->pc != 0x1914C8u) { return; }
    }
    ctx->pc = 0x1914C8u;
    // 0x1914c8: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1914c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1914cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1914ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1914d0: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1914d4: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1914d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1914d8: 0xc0648c0  jal         func_192300
    ctx->pc = 0x1914D8u;
    SET_GPR_U32(ctx, 31, 0x1914E0u);
    ctx->pc = 0x1914DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1914D8u;
            // 0x1914dc: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914E0u; }
        if (ctx->pc != 0x1914E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914E0u; }
        if (ctx->pc != 0x1914E0u) { return; }
    }
    ctx->pc = 0x1914E0u;
    // 0x1914e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1914e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1914e4: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x1914e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1914e8: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1914e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1914ec: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1914ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1914f0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1914f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1914f4: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1914f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1914f8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1914f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1914fc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1914fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x191500: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191500u;
    SET_GPR_U32(ctx, 31, 0x191508u);
    ctx->pc = 0x191504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191500u;
            // 0x191504: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191508u; }
        if (ctx->pc != 0x191508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191508u; }
        if (ctx->pc != 0x191508u) { return; }
    }
    ctx->pc = 0x191508u;
    // 0x191508: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x191508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19150c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x19150cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191510: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x191510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x191514: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191518: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x191518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19151c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191520: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x191520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x191524: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x191524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x191528: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x191528u;
    SET_GPR_U32(ctx, 31, 0x191530u);
    ctx->pc = 0x19152Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191528u;
            // 0x19152c: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191530u; }
        if (ctx->pc != 0x191530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191530u; }
        if (ctx->pc != 0x191530u) { return; }
    }
    ctx->pc = 0x191530u;
    // 0x191530: 0x1000031b  b           . + 4 + (0x31B << 2)
    ctx->pc = 0x191530u;
    {
        const bool branch_taken_0x191530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191530u;
            // 0x191534: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191530) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x191538u;
label_191538:
    // 0x191538: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x191538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x19153c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x19153Cu;
    SET_GPR_U32(ctx, 31, 0x191544u);
    ctx->pc = 0x191540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19153Cu;
            // 0x191540: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191544u; }
        if (ctx->pc != 0x191544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191544u; }
        if (ctx->pc != 0x191544u) { return; }
    }
    ctx->pc = 0x191544u;
    // 0x191544: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x191544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191548: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x191548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x19154c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191550: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191554: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x191554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x191558: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x191558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x19155c: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x19155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x191560: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x191560u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x191564: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x191564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191568: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x191568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x19156c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x19156cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191570: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x191570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x191574: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191578: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x191578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19157c: 0x3c024864  lui         $v0, 0x4864
    ctx->pc = 0x19157cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18532 << 16));
    // 0x191580: 0x34422500  ori         $v0, $v0, 0x2500
    ctx->pc = 0x191580u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9472u)));
    // 0x191584: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191588: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x191588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19158c: 0x0  nop
    ctx->pc = 0x19158cu;
    // NOP
    // 0x191590: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x191590u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x191594: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191598: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x191598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19159c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x19159cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x1915a0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1915a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1915a4: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x1915a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1915a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1915a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1915ac: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1915ACu;
    SET_GPR_U32(ctx, 31, 0x1915B4u);
    ctx->pc = 0x1915B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1915ACu;
            // 0x1915b0: 0x46020340  add.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915B4u; }
        if (ctx->pc != 0x1915B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915B4u; }
        if (ctx->pc != 0x1915B4u) { return; }
    }
    ctx->pc = 0x1915B4u;
    // 0x1915b4: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x1915b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1915b8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1915b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1915bc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1915bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1915c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1915c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1915c4: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1915c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1915c8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1915c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1915cc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1915ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1915d0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1915d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1915d4: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1915d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1915d8: 0x46801160  cvt.s.w     $f5, $f2
    ctx->pc = 0x1915d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1915dc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1915dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1915e0: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1915e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1915e4: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1915e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1915e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1915e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1915ec: 0x3c024864  lui         $v0, 0x4864
    ctx->pc = 0x1915ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18532 << 16));
    // 0x1915f0: 0x34422500  ori         $v0, $v0, 0x2500
    ctx->pc = 0x1915f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9472u)));
    // 0x1915f4: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x1915f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1915f8: 0x468018a0  cvt.s.w     $f2, $f3
    ctx->pc = 0x1915f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1915fc: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x1915fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x191600: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x191600u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x191604: 0x460220c0  add.s       $f3, $f4, $f2
    ctx->pc = 0x191604u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x191608: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x191608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19160c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19160cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191610: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191614: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x191614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x191618: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x191618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x19161c: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x19161cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x191620: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x191620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x191624: 0x46011b01  sub.s       $f12, $f3, $f1
    ctx->pc = 0x191624u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x191628: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x191628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19162c: 0xc0648cc  jal         func_192330
    ctx->pc = 0x19162Cu;
    SET_GPR_U32(ctx, 31, 0x191634u);
    ctx->pc = 0x191630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19162Cu;
            // 0x191630: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191634u; }
        if (ctx->pc != 0x191634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191634u; }
        if (ctx->pc != 0x191634u) { return; }
    }
    ctx->pc = 0x191634u;
    // 0x191634: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x191634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191638: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x19163c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x19163cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191640: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191644: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191644u;
    SET_GPR_U32(ctx, 31, 0x19164Cu);
    ctx->pc = 0x191648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191644u;
            // 0x191648: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19164Cu; }
        if (ctx->pc != 0x19164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19164Cu; }
        if (ctx->pc != 0x19164Cu) { return; }
    }
    ctx->pc = 0x19164Cu;
    // 0x19164c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x19164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191650: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x191650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191654: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191658: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x191658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x19165c: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x19165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191660: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x191660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191664: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x191664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x191668: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x191668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x19166c: 0xc0648c0  jal         func_192300
    ctx->pc = 0x19166Cu;
    SET_GPR_U32(ctx, 31, 0x191674u);
    ctx->pc = 0x191670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19166Cu;
            // 0x191670: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191674u; }
        if (ctx->pc != 0x191674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191674u; }
        if (ctx->pc != 0x191674u) { return; }
    }
    ctx->pc = 0x191674u;
    // 0x191674: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191678: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x191678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19167c: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x19167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x191680: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x191680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x191684: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191688: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x191688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19168c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x19168cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x191690: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x191690u;
    SET_GPR_U32(ctx, 31, 0x191698u);
    ctx->pc = 0x191694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191690u;
            // 0x191694: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191698u; }
        if (ctx->pc != 0x191698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191698u; }
        if (ctx->pc != 0x191698u) { return; }
    }
    ctx->pc = 0x191698u;
    // 0x191698: 0x100002c1  b           . + 4 + (0x2C1 << 2)
    ctx->pc = 0x191698u;
    {
        const bool branch_taken_0x191698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19169Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191698u;
            // 0x19169c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191698) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x1916A0u;
label_1916a0:
    // 0x1916a0: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x1916a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1916a4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1916A4u;
    SET_GPR_U32(ctx, 31, 0x1916ACu);
    ctx->pc = 0x1916A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1916A4u;
            // 0x1916a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916ACu; }
        if (ctx->pc != 0x1916ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1916ACu; }
        if (ctx->pc != 0x1916ACu) { return; }
    }
    ctx->pc = 0x1916ACu;
    // 0x1916ac: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1916acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1916b0: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1916b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1916b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1916b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1916b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1916b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1916bc: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x1916bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1916c0: 0x119940  sll         $s3, $s1, 5
    ctx->pc = 0x1916c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1916c4: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x1916c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1916c8: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1916c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1916cc: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1916ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1916d0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1916d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1916d4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1916d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1916d8: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1916d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1916dc: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1916dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1916e0: 0x3c024864  lui         $v0, 0x4864
    ctx->pc = 0x1916e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18532 << 16));
    // 0x1916e4: 0x34422500  ori         $v0, $v0, 0x2500
    ctx->pc = 0x1916e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9472u)));
    // 0x1916e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1916e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1916ec: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x1916ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1916f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1916f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1916f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1916f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1916f8: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x1916f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x1916fc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1916fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x191700: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x191700u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x191704: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x191704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x191708: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191708u;
    SET_GPR_U32(ctx, 31, 0x191710u);
    ctx->pc = 0x19170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191708u;
            // 0x19170c: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191710u; }
        if (ctx->pc != 0x191710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191710u; }
        if (ctx->pc != 0x191710u) { return; }
    }
    ctx->pc = 0x191710u;
    // 0x191710: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x191710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191714: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x191714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x191718: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x191718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19171c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191720: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x191720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191724: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x191724u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191728: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x191728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x19172c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x19172cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x191730: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x191730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x191734: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x191734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x191738: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x19173c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x19173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191740: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191744: 0x3c024864  lui         $v0, 0x4864
    ctx->pc = 0x191744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18532 << 16));
    // 0x191748: 0x34422500  ori         $v0, $v0, 0x2500
    ctx->pc = 0x191748u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9472u)));
    // 0x19174c: 0xc6870004  lwc1        $f7, 0x4($s4)
    ctx->pc = 0x19174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x191750: 0x468030e0  cvt.s.w     $f3, $f6
    ctx->pc = 0x191750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x191754: 0x460338c0  add.s       $f3, $f7, $f3
    ctx->pc = 0x191754u;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x191758: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x191758u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x19175c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x19175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191760: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191768: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x191768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x19176c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19176cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x191770: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x191770u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x191774: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x191774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x191778: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x191778u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x19177c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19177cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x191780: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191780u;
    SET_GPR_U32(ctx, 31, 0x191788u);
    ctx->pc = 0x191784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191780u;
            // 0x191784: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191788u; }
        if (ctx->pc != 0x191788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191788u; }
        if (ctx->pc != 0x191788u) { return; }
    }
    ctx->pc = 0x191788u;
    // 0x191788: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x191788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19178c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x19178cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191790: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x191794: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191798: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191798u;
    SET_GPR_U32(ctx, 31, 0x1917A0u);
    ctx->pc = 0x19179Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191798u;
            // 0x19179c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917A0u; }
        if (ctx->pc != 0x1917A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917A0u; }
        if (ctx->pc != 0x1917A0u) { return; }
    }
    ctx->pc = 0x1917A0u;
    // 0x1917a0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1917a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1917a4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1917a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1917a8: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1917a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1917ac: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1917acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1917b0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1917b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1917b4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1917b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1917b8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1917b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1917bc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1917bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1917c0: 0xc0648c0  jal         func_192300
    ctx->pc = 0x1917C0u;
    SET_GPR_U32(ctx, 31, 0x1917C8u);
    ctx->pc = 0x1917C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1917C0u;
            // 0x1917c4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917C8u; }
        if (ctx->pc != 0x1917C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917C8u; }
        if (ctx->pc != 0x1917C8u) { return; }
    }
    ctx->pc = 0x1917C8u;
    // 0x1917c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1917c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1917cc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1917ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1917d0: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x1917d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x1917d4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1917d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1917d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1917d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1917dc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1917dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1917e0: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1917e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1917e4: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x1917E4u;
    SET_GPR_U32(ctx, 31, 0x1917ECu);
    ctx->pc = 0x1917E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1917E4u;
            // 0x1917e8: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917ECu; }
        if (ctx->pc != 0x1917ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917ECu; }
        if (ctx->pc != 0x1917ECu) { return; }
    }
    ctx->pc = 0x1917ECu;
    // 0x1917ec: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x1917ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1917f0: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1917F0u;
    SET_GPR_U32(ctx, 31, 0x1917F8u);
    ctx->pc = 0x1917F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1917F0u;
            // 0x1917f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917F8u; }
        if (ctx->pc != 0x1917F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1917F8u; }
        if (ctx->pc != 0x1917F8u) { return; }
    }
    ctx->pc = 0x1917F8u;
    // 0x1917f8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1917f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1917fc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1917fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x191800: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x191800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191804: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191808: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x191808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19180c: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x19180cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x191810: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x191810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x191814: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x191814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x191818: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x191818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19181c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x19181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x191820: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x191820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x191824: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x191824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x191828: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x191828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19182c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19182cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191830: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x191830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x191834: 0x0  nop
    ctx->pc = 0x191834u;
    // NOP
    // 0x191838: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x191838u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x19183c: 0x3c024864  lui         $v0, 0x4864
    ctx->pc = 0x19183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18532 << 16));
    // 0x191840: 0x34422500  ori         $v0, $v0, 0x2500
    ctx->pc = 0x191840u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9472u)));
    // 0x191844: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191848: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x191848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19184c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x19184cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x191850: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x191850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x191854: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x191854u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x191858: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x191858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19185c: 0xc0648cc  jal         func_192330
    ctx->pc = 0x19185Cu;
    SET_GPR_U32(ctx, 31, 0x191864u);
    ctx->pc = 0x191860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19185Cu;
            // 0x191860: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191864u; }
        if (ctx->pc != 0x191864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191864u; }
        if (ctx->pc != 0x191864u) { return; }
    }
    ctx->pc = 0x191864u;
    // 0x191864: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x191864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191868: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x191868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19186c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x19186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191870: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x191870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x191874: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x191874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19187c: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x19187cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191880: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x191880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x191884: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x191884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x191888: 0xc6660000  lwc1        $f6, 0x0($s3)
    ctx->pc = 0x191888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x19188c: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x19188cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x191890: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191894: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191898: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19189c: 0x3c024864  lui         $v0, 0x4864
    ctx->pc = 0x19189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18532 << 16));
    // 0x1918a0: 0x34422500  ori         $v0, $v0, 0x2500
    ctx->pc = 0x1918a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9472u)));
    // 0x1918a4: 0xc6870004  lwc1        $f7, 0x4($s4)
    ctx->pc = 0x1918a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1918a8: 0x468030e0  cvt.s.w     $f3, $f6
    ctx->pc = 0x1918a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1918ac: 0x460338c0  add.s       $f3, $f7, $f3
    ctx->pc = 0x1918acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x1918b0: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x1918b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1918b4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1918b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1918b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1918b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1918bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1918bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1918c0: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1918c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x1918c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1918c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1918c8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x1918c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1918cc: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1918ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1918d0: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x1918d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1918d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1918d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1918d8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1918D8u;
    SET_GPR_U32(ctx, 31, 0x1918E0u);
    ctx->pc = 0x1918DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918D8u;
            // 0x1918dc: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918E0u; }
        if (ctx->pc != 0x1918E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918E0u; }
        if (ctx->pc != 0x1918E0u) { return; }
    }
    ctx->pc = 0x1918E0u;
    // 0x1918e0: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1918e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1918e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1918e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1918e8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x1918e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1918ec: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1918ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1918f0: 0xc0648c0  jal         func_192300
    ctx->pc = 0x1918F0u;
    SET_GPR_U32(ctx, 31, 0x1918F8u);
    ctx->pc = 0x1918F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1918F0u;
            // 0x1918f4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918F8u; }
        if (ctx->pc != 0x1918F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1918F8u; }
        if (ctx->pc != 0x1918F8u) { return; }
    }
    ctx->pc = 0x1918F8u;
    // 0x1918f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1918f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1918fc: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x1918fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191900: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191904: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x191904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x191908: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19190c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x19190cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191910: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x191910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x191914: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x191914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x191918: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191918u;
    SET_GPR_U32(ctx, 31, 0x191920u);
    ctx->pc = 0x19191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191918u;
            // 0x19191c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191920u; }
        if (ctx->pc != 0x191920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191920u; }
        if (ctx->pc != 0x191920u) { return; }
    }
    ctx->pc = 0x191920u;
    // 0x191920: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x191920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x191924: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191928: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x191928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x19192c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19192cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191930: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x191930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x191934: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191938: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x191938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19193c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x19193cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x191940: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x191940u;
    SET_GPR_U32(ctx, 31, 0x191948u);
    ctx->pc = 0x191944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191940u;
            // 0x191944: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191948u; }
        if (ctx->pc != 0x191948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191948u; }
        if (ctx->pc != 0x191948u) { return; }
    }
    ctx->pc = 0x191948u;
    // 0x191948: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x191948u;
    {
        const bool branch_taken_0x191948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19194Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191948u;
            // 0x19194c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191948) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x191950u;
label_191950:
    // 0x191950: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x191950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x191954: 0xc05c00c  jal         func_170030
    ctx->pc = 0x191954u;
    SET_GPR_U32(ctx, 31, 0x19195Cu);
    ctx->pc = 0x191958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191954u;
            // 0x191958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19195Cu; }
        if (ctx->pc != 0x19195Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19195Cu; }
        if (ctx->pc != 0x19195Cu) { return; }
    }
    ctx->pc = 0x19195Cu;
    // 0x19195c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19195cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191960: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191964: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191968: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x191968u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x19196c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x19196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191970: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x191970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x191974: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x191974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x191978: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x191978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19197c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19197cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191980: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x191980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191984: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x191984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x191988: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x191988u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x19198c: 0xc0648cc  jal         func_192330
    ctx->pc = 0x19198Cu;
    SET_GPR_U32(ctx, 31, 0x191994u);
    ctx->pc = 0x191990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19198Cu;
            // 0x191990: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191994u; }
        if (ctx->pc != 0x191994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191994u; }
        if (ctx->pc != 0x191994u) { return; }
    }
    ctx->pc = 0x191994u;
    // 0x191994: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x191994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x191998: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19199c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1919a0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1919a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1919a4: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1919a4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1919a8: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x1919a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x1919ac: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1919acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1919b0: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x1919b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1919b4: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x1919b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1919b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1919b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1919bc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1919bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1919c0: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x1919c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1919c4: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x1919c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1919c8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1919C8u;
    SET_GPR_U32(ctx, 31, 0x1919D0u);
    ctx->pc = 0x1919CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1919C8u;
            // 0x1919cc: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919D0u; }
        if (ctx->pc != 0x1919D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919D0u; }
        if (ctx->pc != 0x1919D0u) { return; }
    }
    ctx->pc = 0x1919D0u;
    // 0x1919d0: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1919d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1919d8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x1919d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1919dc: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1919dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1919e0: 0xc0648c0  jal         func_192300
    ctx->pc = 0x1919E0u;
    SET_GPR_U32(ctx, 31, 0x1919E8u);
    ctx->pc = 0x1919E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1919E0u;
            // 0x1919e4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919E8u; }
        if (ctx->pc != 0x1919E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1919E8u; }
        if (ctx->pc != 0x1919E8u) { return; }
    }
    ctx->pc = 0x1919E8u;
    // 0x1919e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1919e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1919ec: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x1919ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1919f0: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1919f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1919f4: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1919f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1919f8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1919f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1919fc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1919fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191a00: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x191a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x191a04: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x191a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x191a08: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191A08u;
    SET_GPR_U32(ctx, 31, 0x191A10u);
    ctx->pc = 0x191A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A08u;
            // 0x191a0c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A10u; }
        if (ctx->pc != 0x191A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A10u; }
        if (ctx->pc != 0x191A10u) { return; }
    }
    ctx->pc = 0x191A10u;
    // 0x191a10: 0x92880014  lbu         $t0, 0x14($s4)
    ctx->pc = 0x191a10u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x191a14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191a18: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x191a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x191a1c: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x191a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x191a20: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191a24: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x191a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x191a28: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x191a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x191a2c: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x191A2Cu;
    SET_GPR_U32(ctx, 31, 0x191A34u);
    ctx->pc = 0x191A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A2Cu;
            // 0x191a30: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A34u; }
        if (ctx->pc != 0x191A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A34u; }
        if (ctx->pc != 0x191A34u) { return; }
    }
    ctx->pc = 0x191A34u;
    // 0x191a34: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x191A34u;
    {
        const bool branch_taken_0x191a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191A34u;
            // 0x191a38: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a34) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x191A3Cu;
    // 0x191a3c: 0x0  nop
    ctx->pc = 0x191a3cu;
    // NOP
label_191a40:
    // 0x191a40: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x191a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x191a44: 0xc05c00c  jal         func_170030
    ctx->pc = 0x191A44u;
    SET_GPR_U32(ctx, 31, 0x191A4Cu);
    ctx->pc = 0x191A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A44u;
            // 0x191a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A4Cu; }
        if (ctx->pc != 0x191A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A4Cu; }
        if (ctx->pc != 0x191A4Cu) { return; }
    }
    ctx->pc = 0x191A4Cu;
    // 0x191a4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a50: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191a54: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191a58: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x191a58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x191a5c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191a60: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x191a64: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x191a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x191a68: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x191a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191a70: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x191a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191a74: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x191a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x191a78: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x191a78u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x191a7c: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191A7Cu;
    SET_GPR_U32(ctx, 31, 0x191A84u);
    ctx->pc = 0x191A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191A7Cu;
            // 0x191a80: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A84u; }
        if (ctx->pc != 0x191A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191A84u; }
        if (ctx->pc != 0x191A84u) { return; }
    }
    ctx->pc = 0x191A84u;
    // 0x191a84: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x191a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x191a88: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191a8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191a90: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x191a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x191a94: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x191a94u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191a98: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x191a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x191a9c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x191a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x191aa0: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x191aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x191aa4: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x191aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191aa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191aac: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x191aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ab0: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x191ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x191ab4: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x191ab4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x191ab8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191AB8u;
    SET_GPR_U32(ctx, 31, 0x191AC0u);
    ctx->pc = 0x191ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191AB8u;
            // 0x191abc: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AC0u; }
        if (ctx->pc != 0x191AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AC0u; }
        if (ctx->pc != 0x191AC0u) { return; }
    }
    ctx->pc = 0x191AC0u;
    // 0x191ac0: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x191ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191ac4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191ac8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x191ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191acc: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191ad0: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191AD0u;
    SET_GPR_U32(ctx, 31, 0x191AD8u);
    ctx->pc = 0x191AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191AD0u;
            // 0x191ad4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AD8u; }
        if (ctx->pc != 0x191AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191AD8u; }
        if (ctx->pc != 0x191AD8u) { return; }
    }
    ctx->pc = 0x191AD8u;
    // 0x191ad8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191adc: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x191adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191ae0: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191ae4: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x191ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x191ae8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191aec: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x191aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191af0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x191af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x191af4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x191af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x191af8: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191AF8u;
    SET_GPR_U32(ctx, 31, 0x191B00u);
    ctx->pc = 0x191AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191AF8u;
            // 0x191afc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B00u; }
        if (ctx->pc != 0x191B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B00u; }
        if (ctx->pc != 0x191B00u) { return; }
    }
    ctx->pc = 0x191B00u;
    // 0x191b00: 0x92880014  lbu         $t0, 0x14($s4)
    ctx->pc = 0x191b00u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x191b04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191b08: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x191b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x191b0c: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x191b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x191b10: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191b14: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x191b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x191b18: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x191b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x191b1c: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x191B1Cu;
    SET_GPR_U32(ctx, 31, 0x191B24u);
    ctx->pc = 0x191B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B1Cu;
            // 0x191b20: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B24u; }
        if (ctx->pc != 0x191B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B24u; }
        if (ctx->pc != 0x191B24u) { return; }
    }
    ctx->pc = 0x191B24u;
    // 0x191b24: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x191B24u;
    {
        const bool branch_taken_0x191b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191B24u;
            // 0x191b28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b24) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x191B2Cu;
    // 0x191b2c: 0x0  nop
    ctx->pc = 0x191b2cu;
    // NOP
label_191b30:
    // 0x191b30: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x191b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x191b34: 0xc05c00c  jal         func_170030
    ctx->pc = 0x191B34u;
    SET_GPR_U32(ctx, 31, 0x191B3Cu);
    ctx->pc = 0x191B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B34u;
            // 0x191b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B3Cu; }
        if (ctx->pc != 0x191B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B3Cu; }
        if (ctx->pc != 0x191B3Cu) { return; }
    }
    ctx->pc = 0x191B3Cu;
    // 0x191b3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b40: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191b44: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191b48: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x191b48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x191b4c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191b50: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x191b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x191b54: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x191b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x191b58: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x191b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191b5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191b60: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x191b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191b64: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x191b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x191b68: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x191b68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x191b6c: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191B6Cu;
    SET_GPR_U32(ctx, 31, 0x191B74u);
    ctx->pc = 0x191B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191B6Cu;
            // 0x191b70: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B74u; }
        if (ctx->pc != 0x191B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191B74u; }
        if (ctx->pc != 0x191B74u) { return; }
    }
    ctx->pc = 0x191B74u;
    // 0x191b74: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x191b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x191b78: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191b80: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x191b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x191b84: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x191b84u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191b88: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x191b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x191b8c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x191b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x191b90: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x191b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x191b94: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x191b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191b98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191b9c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x191b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ba0: 0xc42ea588  lwc1        $f14, -0x5A78($at)
    ctx->pc = 0x191ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x191ba4: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x191ba4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x191ba8: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191BA8u;
    SET_GPR_U32(ctx, 31, 0x191BB0u);
    ctx->pc = 0x191BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191BA8u;
            // 0x191bac: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BB0u; }
        if (ctx->pc != 0x191BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BB0u; }
        if (ctx->pc != 0x191BB0u) { return; }
    }
    ctx->pc = 0x191BB0u;
    // 0x191bb0: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x191bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191bb4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191bb8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x191bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191bbc: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191bc0: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191BC0u;
    SET_GPR_U32(ctx, 31, 0x191BC8u);
    ctx->pc = 0x191BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191BC0u;
            // 0x191bc4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BC8u; }
        if (ctx->pc != 0x191BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BC8u; }
        if (ctx->pc != 0x191BC8u) { return; }
    }
    ctx->pc = 0x191BC8u;
    // 0x191bc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191bcc: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x191bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191bd0: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191bd4: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x191bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x191bd8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191bdc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x191bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191be0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x191be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x191be4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x191be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x191be8: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191BE8u;
    SET_GPR_U32(ctx, 31, 0x191BF0u);
    ctx->pc = 0x191BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191BE8u;
            // 0x191bec: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BF0u; }
        if (ctx->pc != 0x191BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191BF0u; }
        if (ctx->pc != 0x191BF0u) { return; }
    }
    ctx->pc = 0x191BF0u;
    // 0x191bf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191bf4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x191bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x191bf8: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x191bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x191bfc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191c00: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x191c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x191c04: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191C04u;
    {
        const bool branch_taken_0x191c04 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x191C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C04u;
            // 0x191c08: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c04) {
            ctx->pc = 0x191C14u;
            goto label_191c14;
        }
    }
    ctx->pc = 0x191C0Cu;
    // 0x191c0c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x191c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x191c10: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x191c10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_191c14:
    // 0x191c14: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x191c14u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x191c18: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x191c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x191c1c: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x191c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x191c20: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x191C20u;
    SET_GPR_U32(ctx, 31, 0x191C28u);
    ctx->pc = 0x191C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191C20u;
            // 0x191c24: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C28u; }
        if (ctx->pc != 0x191C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C28u; }
        if (ctx->pc != 0x191C28u) { return; }
    }
    ctx->pc = 0x191C28u;
    // 0x191c28: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x191C28u;
    {
        const bool branch_taken_0x191c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191C28u;
            // 0x191c2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c28) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x191C30u;
label_191c30:
    // 0x191c30: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x191c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x191c34: 0xc05c00c  jal         func_170030
    ctx->pc = 0x191C34u;
    SET_GPR_U32(ctx, 31, 0x191C3Cu);
    ctx->pc = 0x191C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191C34u;
            // 0x191c38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C3Cu; }
        if (ctx->pc != 0x191C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C3Cu; }
        if (ctx->pc != 0x191C3Cu) { return; }
    }
    ctx->pc = 0x191C3Cu;
    // 0x191c3c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x191c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x191c40: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191c44: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x191c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191c48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191c48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191c4c: 0xc6840014  lwc1        $f4, 0x14($s4)
    ctx->pc = 0x191c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x191c50: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x191c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x191c54: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x191c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191c58: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x191c58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x191c5c: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x191c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x191c60: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x191c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x191c64: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x191c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x191c68: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x191c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191c6c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x191c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x191c70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191c74: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x191c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x191c78: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x191c78u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191c7c: 0x46802820  cvt.s.w     $f0, $f5
    ctx->pc = 0x191c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191c80: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x191c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x191c84: 0x46040301  sub.s       $f12, $f0, $f4
    ctx->pc = 0x191c84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x191c88: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x191c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191c8c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x191c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x191c90: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191C90u;
    SET_GPR_U32(ctx, 31, 0x191C98u);
    ctx->pc = 0x191C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191C90u;
            // 0x191c94: 0x46040341  sub.s       $f13, $f0, $f4 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C98u; }
        if (ctx->pc != 0x191C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191C98u; }
        if (ctx->pc != 0x191C98u) { return; }
    }
    ctx->pc = 0x191C98u;
    // 0x191c98: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x191c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191c9c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x191c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x191ca0: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x191ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ca4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191ca8: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x191ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x191cac: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x191cacu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191cb0: 0xc6830014  lwc1        $f3, 0x14($s4)
    ctx->pc = 0x191cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191cb4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191cb8: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191cbc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191cc0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191cc4: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x191cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191cc8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x191cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x191ccc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x191cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x191cd0: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x191cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x191cd4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x191cd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x191cd8: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x191cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x191cdc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x191cdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x191ce0: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x191ce0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x191ce4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x191ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x191ce8: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x191ce8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x191cec: 0x46011b40  add.s       $f13, $f3, $f1
    ctx->pc = 0x191cecu;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x191cf0: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x191cf0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x191cf4: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x191cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191cf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191cfc: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x191cfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x191d00: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191D00u;
    SET_GPR_U32(ctx, 31, 0x191D08u);
    ctx->pc = 0x191D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191D00u;
            // 0x191d04: 0x46000b80  add.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D08u; }
        if (ctx->pc != 0x191D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D08u; }
        if (ctx->pc != 0x191D08u) { return; }
    }
    ctx->pc = 0x191D08u;
    // 0x191d08: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x191d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191d0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191d10: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x191d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191d14: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191d18: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191D18u;
    SET_GPR_U32(ctx, 31, 0x191D20u);
    ctx->pc = 0x191D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191D18u;
            // 0x191d1c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D20u; }
        if (ctx->pc != 0x191D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D20u; }
        if (ctx->pc != 0x191D20u) { return; }
    }
    ctx->pc = 0x191D20u;
    // 0x191d20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191d24: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x191d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191d28: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191d2c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x191d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x191d30: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191d34: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x191d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191d38: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x191d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x191d3c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x191d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x191d40: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191D40u;
    SET_GPR_U32(ctx, 31, 0x191D48u);
    ctx->pc = 0x191D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191D40u;
            // 0x191d44: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D48u; }
        if (ctx->pc != 0x191D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D48u; }
        if (ctx->pc != 0x191D48u) { return; }
    }
    ctx->pc = 0x191D48u;
    // 0x191d48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191d4c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x191d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x191d50: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x191d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x191d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x191d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d58: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191d5c: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x191d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x191d60: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x191d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x191d64: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x191d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x191d68: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x191d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x191d6c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x191d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x191d70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x191d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191d74: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x191D74u;
    SET_GPR_U32(ctx, 31, 0x191D7Cu);
    ctx->pc = 0x191D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191D74u;
            // 0x191d78: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D7Cu; }
        if (ctx->pc != 0x191D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D7Cu; }
        if (ctx->pc != 0x191D7Cu) { return; }
    }
    ctx->pc = 0x191D7Cu;
    // 0x191d7c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x191D7Cu;
    {
        const bool branch_taken_0x191d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D7Cu;
            // 0x191d80: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d7c) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x191D84u;
    // 0x191d84: 0x0  nop
    ctx->pc = 0x191d84u;
    // NOP
label_191d88:
    // 0x191d88: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x191d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x191d8c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x191D8Cu;
    SET_GPR_U32(ctx, 31, 0x191D94u);
    ctx->pc = 0x191D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191D8Cu;
            // 0x191d90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D94u; }
        if (ctx->pc != 0x191D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191D94u; }
        if (ctx->pc != 0x191D94u) { return; }
    }
    ctx->pc = 0x191D94u;
    // 0x191d94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191d94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d98: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x191d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x191d9c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191D9Cu;
    {
        const bool branch_taken_0x191d9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x191DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191D9Cu;
            // 0x191da0: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d9c) {
            ctx->pc = 0x191DACu;
            goto label_191dac;
        }
    }
    ctx->pc = 0x191DA4u;
    // 0x191da4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191da8: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x191da8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_191dac:
    // 0x191dac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x191dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191db0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191db4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x191db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191db8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191dbc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x191dbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x191dc0: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x191dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x191dc4: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191dc8: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x191dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x191dcc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x191dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x191dd0: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x191dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191dd4: 0x46020b41  sub.s       $f13, $f1, $f2
    ctx->pc = 0x191dd4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x191dd8: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x191dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191ddc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191de0: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x191de0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x191de4: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191DE4u;
    SET_GPR_U32(ctx, 31, 0x191DECu);
    ctx->pc = 0x191DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191DE4u;
            // 0x191de8: 0x46000b80  add.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DECu; }
        if (ctx->pc != 0x191DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DECu; }
        if (ctx->pc != 0x191DECu) { return; }
    }
    ctx->pc = 0x191DECu;
    // 0x191dec: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x191decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x191df0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191DF0u;
    {
        const bool branch_taken_0x191df0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x191DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191DF0u;
            // 0x191df4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191df0) {
            ctx->pc = 0x191E00u;
            goto label_191e00;
        }
    }
    ctx->pc = 0x191DF8u;
    // 0x191df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191dfc: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x191dfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_191e00:
    // 0x191e00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x191e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191e04: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x191e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x191e08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191e0c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191e10: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x191e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x191e14: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x191e14u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191e18: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191e1c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191e20: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191e24: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x191e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x191e28: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x191e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191e2c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x191e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191e30: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x191e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191e34: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x191e34u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x191e38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191e3c: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x191e3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x191e40: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191E40u;
    SET_GPR_U32(ctx, 31, 0x191E48u);
    ctx->pc = 0x191E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191E40u;
            // 0x191e44: 0x46000b80  add.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E48u; }
        if (ctx->pc != 0x191E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E48u; }
        if (ctx->pc != 0x191E48u) { return; }
    }
    ctx->pc = 0x191E48u;
    // 0x191e48: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x191e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191e4c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x191e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x191e50: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x191e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191e54: 0x24631600  addiu       $v1, $v1, 0x1600
    ctx->pc = 0x191e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x191e58: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x191e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x191e5c: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191E5Cu;
    SET_GPR_U32(ctx, 31, 0x191E64u);
    ctx->pc = 0x191E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191E5Cu;
            // 0x191e60: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E64u; }
        if (ctx->pc != 0x191E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E64u; }
        if (ctx->pc != 0x191E64u) { return; }
    }
    ctx->pc = 0x191E64u;
    // 0x191e64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191e68: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x191e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191e6c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191e70: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x191e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x191e74: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191e78: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x191e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191e7c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x191e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x191e80: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x191e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x191e84: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191E84u;
    SET_GPR_U32(ctx, 31, 0x191E8Cu);
    ctx->pc = 0x191E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191E84u;
            // 0x191e88: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E8Cu; }
        if (ctx->pc != 0x191E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E8Cu; }
        if (ctx->pc != 0x191E8Cu) { return; }
    }
    ctx->pc = 0x191E8Cu;
    // 0x191e8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191e90: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x191e94: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x191e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x191e98: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191e9c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x191e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x191ea0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191EA0u;
    {
        const bool branch_taken_0x191ea0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x191EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191EA0u;
            // 0x191ea4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ea0) {
            ctx->pc = 0x191EB0u;
            goto label_191eb0;
        }
    }
    ctx->pc = 0x191EA8u;
    // 0x191ea8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191eac: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x191eacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_191eb0:
    // 0x191eb0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x191eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x191eb4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x191eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x191eb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x191eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191ebc: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x191ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x191ec0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x191ec0u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x191ec4: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x191EC4u;
    SET_GPR_U32(ctx, 31, 0x191ECCu);
    ctx->pc = 0x191EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191EC4u;
            // 0x191ec8: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191ECCu; }
        if (ctx->pc != 0x191ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191ECCu; }
        if (ctx->pc != 0x191ECCu) { return; }
    }
    ctx->pc = 0x191ECCu;
    // 0x191ecc: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x191ECCu;
    {
        const bool branch_taken_0x191ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191ECCu;
            // 0x191ed0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ecc) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x191ED4u;
    // 0x191ed4: 0x0  nop
    ctx->pc = 0x191ed4u;
    // NOP
label_191ed8:
    // 0x191ed8: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x191ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x191edc: 0xc05c00c  jal         func_170030
    ctx->pc = 0x191EDCu;
    SET_GPR_U32(ctx, 31, 0x191EE4u);
    ctx->pc = 0x191EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191EDCu;
            // 0x191ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191EE4u; }
        if (ctx->pc != 0x191EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191EE4u; }
        if (ctx->pc != 0x191EE4u) { return; }
    }
    ctx->pc = 0x191EE4u;
    // 0x191ee4: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x191ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x191ee8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191eec: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x191eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191ef0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x191ef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ef4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x191ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x191ef8: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x191ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x191efc: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x191efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191f00: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x191f00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x191f04: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x191f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x191f08: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x191f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x191f0c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x191f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x191f10: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x191f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x191f14: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x191f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x191f18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191f1c: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x191f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191f20: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x191f20u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191f24: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x191f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x191f28: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x191f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x191f2c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x191f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x191f30: 0x0  nop
    ctx->pc = 0x191f30u;
    // NOP
    // 0x191f34: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x191f34u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x191f38: 0x46802060  cvt.s.w     $f1, $f4
    ctx->pc = 0x191f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x191f3c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x191f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x191f40: 0x46012b01  sub.s       $f12, $f5, $f1
    ctx->pc = 0x191f40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x191f44: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191F44u;
    SET_GPR_U32(ctx, 31, 0x191F4Cu);
    ctx->pc = 0x191F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191F44u;
            // 0x191f48: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F4Cu; }
        if (ctx->pc != 0x191F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191F4Cu; }
        if (ctx->pc != 0x191F4Cu) { return; }
    }
    ctx->pc = 0x191F4Cu;
    // 0x191f4c: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x191f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191f50: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x191f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x191f54: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x191f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191f58: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x191f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x191f5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191f60: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x191f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x191f64: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x191f64u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191f68: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x191f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x191f6c: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x191f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x191f70: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x191f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x191f74: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191f78: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x191f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x191f7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x191f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x191f80: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x191f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x191f84: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x191f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x191f88: 0x468020e0  cvt.s.w     $f3, $f4
    ctx->pc = 0x191f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x191f8c: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x191f8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x191f90: 0x46032900  add.s       $f4, $f5, $f3
    ctx->pc = 0x191f90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x191f94: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x191f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191f98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x191f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x191f9c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x191f9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x191fa0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x191fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x191fa4: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x191fa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x191fa8: 0x468018a0  cvt.s.w     $f2, $f3
    ctx->pc = 0x191fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x191fac: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x191facu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x191fb0: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x191fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x191fb8: 0x46022300  add.s       $f12, $f4, $f2
    ctx->pc = 0x191fb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x191fbc: 0xc0648cc  jal         func_192330
    ctx->pc = 0x191FBCu;
    SET_GPR_U32(ctx, 31, 0x191FC4u);
    ctx->pc = 0x191FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191FBCu;
            // 0x191fc0: 0x46000b80  add.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FC4u; }
        if (ctx->pc != 0x191FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FC4u; }
        if (ctx->pc != 0x191FC4u) { return; }
    }
    ctx->pc = 0x191FC4u;
    // 0x191fc4: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x191fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191fc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191fcc: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x191fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191fd0: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191fd4: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191FD4u;
    SET_GPR_U32(ctx, 31, 0x191FDCu);
    ctx->pc = 0x191FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191FD4u;
            // 0x191fd8: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FDCu; }
        if (ctx->pc != 0x191FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FDCu; }
        if (ctx->pc != 0x191FDCu) { return; }
    }
    ctx->pc = 0x191FDCu;
    // 0x191fdc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x191fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x191fe0: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x191fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x191fe4: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x191fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x191fe8: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x191fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x191fec: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x191fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191ff0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x191ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x191ff4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x191ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x191ff8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x191ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x191ffc: 0xc0648c0  jal         func_192300
    ctx->pc = 0x191FFCu;
    SET_GPR_U32(ctx, 31, 0x192004u);
    ctx->pc = 0x192000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191FFCu;
            // 0x192000: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192004u; }
        if (ctx->pc != 0x192004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192004u; }
        if (ctx->pc != 0x192004u) { return; }
    }
    ctx->pc = 0x192004u;
    // 0x192004: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x192004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x192008: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x192008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19200c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x19200cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x192010: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x192010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x192014: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x192014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192018: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x192018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x19201c: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x19201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x192020: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x192020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x192024: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x192024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192028: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19202c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19202cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192030: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x192030u;
    SET_GPR_U32(ctx, 31, 0x192038u);
    ctx->pc = 0x192034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192030u;
            // 0x192034: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192038u; }
        if (ctx->pc != 0x192038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192038u; }
        if (ctx->pc != 0x192038u) { return; }
    }
    ctx->pc = 0x192038u;
    // 0x192038: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x192038u;
    {
        const bool branch_taken_0x192038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192038u;
            // 0x19203c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192038) {
            ctx->pc = 0x1921A0u;
            goto label_1921a0;
        }
    }
    ctx->pc = 0x192040u;
label_192040:
    // 0x192040: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x192040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x192044: 0xc05c00c  jal         func_170030
    ctx->pc = 0x192044u;
    SET_GPR_U32(ctx, 31, 0x19204Cu);
    ctx->pc = 0x192048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192044u;
            // 0x192048: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19204Cu; }
        if (ctx->pc != 0x19204Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19204Cu; }
        if (ctx->pc != 0x19204Cu) { return; }
    }
    ctx->pc = 0x19204Cu;
    // 0x19204c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x19204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x192050: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x192050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x192054: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x192054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192058: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x192058u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19205c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x19205cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x192060: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x192060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x192064: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x192064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192068: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x192068u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x19206c: 0x24639600  addiu       $v1, $v1, -0x6A00
    ctx->pc = 0x19206cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940160));
    // 0x192070: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x192070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x192074: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x192074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x192078: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x192078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x19207c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x19207cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x192080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192084: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x192084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192088: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x192088u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19208c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x19208cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x192090: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x192090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x192094: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x192094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x192098: 0x0  nop
    ctx->pc = 0x192098u;
    // NOP
    // 0x19209c: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x19209cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1920a0: 0x46802060  cvt.s.w     $f1, $f4
    ctx->pc = 0x1920a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1920a4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1920a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1920a8: 0x46012b01  sub.s       $f12, $f5, $f1
    ctx->pc = 0x1920a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x1920ac: 0xc0648cc  jal         func_192330
    ctx->pc = 0x1920ACu;
    SET_GPR_U32(ctx, 31, 0x1920B4u);
    ctx->pc = 0x1920B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1920ACu;
            // 0x1920b0: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920B4u; }
        if (ctx->pc != 0x1920B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1920B4u; }
        if (ctx->pc != 0x1920B4u) { return; }
    }
    ctx->pc = 0x1920B4u;
    // 0x1920b4: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x1920b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1920b8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1920b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1920bc: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1920bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1920c0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1920c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1920c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1920c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1920c8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1920cc: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1920d0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1920d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1920d4: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1920d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1920d8: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x1920d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1920dc: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1920dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1920e0: 0x46801960  cvt.s.w     $f5, $f3
    ctx->pc = 0x1920e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1920e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1920e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1920e8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1920e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1920ec: 0xc6860004  lwc1        $f6, 0x4($s4)
    ctx->pc = 0x1920ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1920f0: 0x468020e0  cvt.s.w     $f3, $f4
    ctx->pc = 0x1920f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1920f4: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x1920f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x1920f8: 0x46032900  add.s       $f4, $f5, $f3
    ctx->pc = 0x1920f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x1920fc: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x1920fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192100: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192104: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x192104u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x192108: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x192108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19210c: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x19210cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x192110: 0x468018a0  cvt.s.w     $f2, $f3
    ctx->pc = 0x192110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x192114: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x192114u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x192118: 0xc420a588  lwc1        $f0, -0x5A78($at)
    ctx->pc = 0x192118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19211c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19211cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192120: 0x46022300  add.s       $f12, $f4, $f2
    ctx->pc = 0x192120u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x192124: 0xc0648cc  jal         func_192330
    ctx->pc = 0x192124u;
    SET_GPR_U32(ctx, 31, 0x19212Cu);
    ctx->pc = 0x192128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192124u;
            // 0x192128: 0x46000b80  add.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x192330u;
    if (runtime->hasFunction(0x192330u)) {
        auto targetFn = runtime->lookupFunction(0x192330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19212Cu; }
        if (ctx->pc != 0x19212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x192330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19212Cu; }
        if (ctx->pc != 0x19212Cu) { return; }
    }
    ctx->pc = 0x19212Cu;
    // 0x19212c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x19212cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x192130: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x192130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x192134: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x192134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x192138: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x192138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x19213c: 0xc0648c0  jal         func_192300
    ctx->pc = 0x19213Cu;
    SET_GPR_U32(ctx, 31, 0x192144u);
    ctx->pc = 0x192140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19213Cu;
            // 0x192140: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192144u; }
        if (ctx->pc != 0x192144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192144u; }
        if (ctx->pc != 0x192144u) { return; }
    }
    ctx->pc = 0x192144u;
    // 0x192144: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x192144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x192148: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x192148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x19214c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x19214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x192150: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x192150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x192154: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x192154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x192158: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x192158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x19215c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x19215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x192160: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x192160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x192164: 0xc0648c0  jal         func_192300
    ctx->pc = 0x192164u;
    SET_GPR_U32(ctx, 31, 0x19216Cu);
    ctx->pc = 0x192168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192164u;
            // 0x192168: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192300u;
    if (runtime->hasFunction(0x192300u)) {
        auto targetFn = runtime->lookupFunction(0x192300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19216Cu; }
        if (ctx->pc != 0x19216Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x192300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19216Cu; }
        if (ctx->pc != 0x19216Cu) { return; }
    }
    ctx->pc = 0x19216Cu;
    // 0x19216c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x19216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x192170: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x192170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x192174: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x192174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x192178: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x192178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x19217c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192180: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x192180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x192184: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x192184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x192188: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x192188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19218c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19218cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x192190: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x192190u;
    SET_GPR_U32(ctx, 31, 0x192198u);
    ctx->pc = 0x192194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192190u;
            // 0x192194: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922E0u;
    if (runtime->hasFunction(0x1922E0u)) {
        auto targetFn = runtime->lookupFunction(0x1922E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192198u; }
        if (ctx->pc != 0x192198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1922e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192198u; }
        if (ctx->pc != 0x192198u) { return; }
    }
    ctx->pc = 0x192198u;
    // 0x192198: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x192198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19219c: 0x0  nop
    ctx->pc = 0x19219cu;
    // NOP
label_1921a0:
    // 0x1921a0: 0x8e940048  lw          $s4, 0x48($s4)
    ctx->pc = 0x1921a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1921a4: 0x1680f61a  bnez        $s4, . + 4 + (-0x9E6 << 2)
    ctx->pc = 0x1921A4u;
    {
        const bool branch_taken_0x1921a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1921a4) {
            ctx->pc = 0x18FA10u;
            goto label_18fa10;
        }
    }
    ctx->pc = 0x1921ACu;
    // 0x1921ac: 0x0  nop
    ctx->pc = 0x1921acu;
    // NOP
label_1921b0:
    // 0x1921b0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1921B0u;
    {
        const bool branch_taken_0x1921b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1921B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1921B0u;
            // 0x1921b4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921b0) {
            ctx->pc = 0x192208u;
            goto label_192208;
        }
    }
    ctx->pc = 0x1921B8u;
    // 0x1921b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1921b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1921bc: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1921bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1921c0: 0x24630600  addiu       $v1, $v1, 0x600
    ctx->pc = 0x1921c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1536));
    // 0x1921c4: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1921c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1921c8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1921c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1921cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1921ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1921d0: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x1921d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x1921d4: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1921d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1921d8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1921D8u;
    SET_GPR_U32(ctx, 31, 0x1921E0u);
    ctx->pc = 0x1921DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921D8u;
            // 0x1921dc: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921E0u; }
        if (ctx->pc != 0x1921E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921E0u; }
        if (ctx->pc != 0x1921E0u) { return; }
    }
    ctx->pc = 0x1921E0u;
    // 0x1921e0: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1921e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x1921e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1921e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1921e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1921e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1921ec: 0xc0648b4  jal         func_1922D0
    ctx->pc = 0x1921ECu;
    SET_GPR_U32(ctx, 31, 0x1921F4u);
    ctx->pc = 0x1921F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921ECu;
            // 0x1921f0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922D0u;
    if (runtime->hasFunction(0x1922D0u)) {
        auto targetFn = runtime->lookupFunction(0x1922D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921F4u; }
        if (ctx->pc != 0x1921F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1922d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1921F4u; }
        if (ctx->pc != 0x1921F4u) { return; }
    }
    ctx->pc = 0x1921F4u;
    // 0x1921f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1921f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1921f8: 0xc0648b0  jal         func_1922C0
    ctx->pc = 0x1921F8u;
    SET_GPR_U32(ctx, 31, 0x192200u);
    ctx->pc = 0x1921FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1921F8u;
            // 0x1921fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922C0u;
    if (runtime->hasFunction(0x1922C0u)) {
        auto targetFn = runtime->lookupFunction(0x1922C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192200u; }
        if (ctx->pc != 0x192200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1922c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192200u; }
        if (ctx->pc != 0x192200u) { return; }
    }
    ctx->pc = 0x192200u;
    // 0x192200: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x192200u;
    SET_GPR_U32(ctx, 31, 0x192208u);
    ctx->pc = 0x192204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192200u;
            // 0x192204: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192208u; }
        if (ctx->pc != 0x192208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192208u; }
        if (ctx->pc != 0x192208u) { return; }
    }
    ctx->pc = 0x192208u;
label_192208:
    // 0x192208: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x192208u;
    {
        const bool branch_taken_0x192208 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19220Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192208u;
            // 0x19220c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192208) {
            ctx->pc = 0x192260u;
            goto label_192260;
        }
    }
    ctx->pc = 0x192210u;
    // 0x192210: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x192210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x192214: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x192214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x192218: 0x2463a580  addiu       $v1, $v1, -0x5A80
    ctx->pc = 0x192218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944128));
    // 0x19221c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x19221cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x192220: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x192220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x192224: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x192224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x192228: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x192228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x19222c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x19222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x192230: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x192230u;
    SET_GPR_U32(ctx, 31, 0x192238u);
    ctx->pc = 0x192234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192230u;
            // 0x192234: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192238u; }
        if (ctx->pc != 0x192238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192238u; }
        if (ctx->pc != 0x192238u) { return; }
    }
    ctx->pc = 0x192238u;
    // 0x192238: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x192238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x19223c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x19223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x192240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192244: 0xc0648b4  jal         func_1922D0
    ctx->pc = 0x192244u;
    SET_GPR_U32(ctx, 31, 0x19224Cu);
    ctx->pc = 0x192248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192244u;
            // 0x192248: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922D0u;
    if (runtime->hasFunction(0x1922D0u)) {
        auto targetFn = runtime->lookupFunction(0x1922D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19224Cu; }
        if (ctx->pc != 0x19224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1922d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19224Cu; }
        if (ctx->pc != 0x19224Cu) { return; }
    }
    ctx->pc = 0x19224Cu;
    // 0x19224c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x19224cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x192250: 0xc0648b0  jal         func_1922C0
    ctx->pc = 0x192250u;
    SET_GPR_U32(ctx, 31, 0x192258u);
    ctx->pc = 0x192254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192250u;
            // 0x192254: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1922C0u;
    if (runtime->hasFunction(0x1922C0u)) {
        auto targetFn = runtime->lookupFunction(0x1922C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192258u; }
        if (ctx->pc != 0x192258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1922c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192258u; }
        if (ctx->pc != 0x192258u) { return; }
    }
    ctx->pc = 0x192258u;
    // 0x192258: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x192258u;
    SET_GPR_U32(ctx, 31, 0x192260u);
    ctx->pc = 0x19225Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192258u;
            // 0x19225c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192260u; }
        if (ctx->pc != 0x192260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192260u; }
        if (ctx->pc != 0x192260u) { return; }
    }
    ctx->pc = 0x192260u;
label_192260:
    // 0x192260: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x192260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x192264: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x192264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192268: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x192268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19226c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x19226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x192270: 0xc059e60  jal         func_167980
    ctx->pc = 0x192270u;
    SET_GPR_U32(ctx, 31, 0x192278u);
    ctx->pc = 0x192274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192270u;
            // 0x192274: 0x24c62770  addiu       $a2, $a2, 0x2770 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192278u; }
        if (ctx->pc != 0x192278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192278u; }
        if (ctx->pc != 0x192278u) { return; }
    }
    ctx->pc = 0x192278u;
    // 0x192278: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x192278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x19227c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19227cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192280: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x192280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192284: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x192284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x192288: 0xc059e60  jal         func_167980
    ctx->pc = 0x192288u;
    SET_GPR_U32(ctx, 31, 0x192290u);
    ctx->pc = 0x19228Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192288u;
            // 0x19228c: 0x24c62780  addiu       $a2, $a2, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192290u; }
        if (ctx->pc != 0x192290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192290u; }
        if (ctx->pc != 0x192290u) { return; }
    }
    ctx->pc = 0x192290u;
    // 0x192290: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x192290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192294: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x192294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x192298: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x192298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19229c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1922a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1922a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1922a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1922a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1922a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1922a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1922ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1922acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1922b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1922b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1922b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1922B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1922B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1922B4u;
            // 0x1922b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FA10u: goto label_18fa10;
            case 0x18FA38u: goto label_18fa38;
            case 0x18FB48u: goto label_18fb48;
            case 0x18FC58u: goto label_18fc58;
            case 0x18FD30u: goto label_18fd30;
            case 0x18FE18u: goto label_18fe18;
            case 0x18FEF8u: goto label_18fef8;
            case 0x18FFD8u: goto label_18ffd8;
            case 0x190030u: goto label_190030;
            case 0x190140u: goto label_190140;
            case 0x190290u: goto label_190290;
            case 0x190380u: goto label_190380;
            case 0x190470u: goto label_190470;
            case 0x190588u: goto label_190588;
            case 0x1906E0u: goto label_1906e0;
            case 0x190708u: goto label_190708;
            case 0x190734u: goto label_190734;
            case 0x19074Cu: goto label_19074c;
            case 0x190764u: goto label_190764;
            case 0x190790u: goto label_190790;
            case 0x1907A8u: goto label_1907a8;
            case 0x1907E8u: goto label_1907e8;
            case 0x190814u: goto label_190814;
            case 0x19082Cu: goto label_19082c;
            case 0x190844u: goto label_190844;
            case 0x190870u: goto label_190870;
            case 0x190888u: goto label_190888;
            case 0x190918u: goto label_190918;
            case 0x190B58u: goto label_190b58;
            case 0x190D98u: goto label_190d98;
            case 0x190EB0u: goto label_190eb0;
            case 0x190F88u: goto label_190f88;
            case 0x191070u: goto label_191070;
            case 0x191150u: goto label_191150;
            case 0x191230u: goto label_191230;
            case 0x191288u: goto label_191288;
            case 0x191538u: goto label_191538;
            case 0x1916A0u: goto label_1916a0;
            case 0x191950u: goto label_191950;
            case 0x191A40u: goto label_191a40;
            case 0x191B30u: goto label_191b30;
            case 0x191C14u: goto label_191c14;
            case 0x191C30u: goto label_191c30;
            case 0x191D88u: goto label_191d88;
            case 0x191DACu: goto label_191dac;
            case 0x191E00u: goto label_191e00;
            case 0x191EB0u: goto label_191eb0;
            case 0x191ED8u: goto label_191ed8;
            case 0x192040u: goto label_192040;
            case 0x1921A0u: goto label_1921a0;
            case 0x1921B0u: goto label_1921b0;
            case 0x192208u: goto label_192208;
            case 0x192260u: goto label_192260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1922BCu;
}
