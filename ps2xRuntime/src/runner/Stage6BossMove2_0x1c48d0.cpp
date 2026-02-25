#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage6BossMove2
// Address: 0x1c48d0 - 0x1c50bc
void Stage6BossMove2_0x1c48d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage6BossMove2_0x1c48d0");
#endif

    ctx->pc = 0x1c48d0u;

    // 0x1c48d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c48d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c48d4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1c48d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1c48d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c48d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c48dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c48dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c48e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c48e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c48e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c48e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c48ec: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1c48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1c48f0: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1C48F0u;
    SET_GPR_U32(ctx, 31, 0x1C48F8u);
    ctx->pc = 0x1C48F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48F0u;
            // 0x1c48f4: 0xdc25aa88  ld          $a1, -0x5578($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C48F8u; }
        if (ctx->pc != 0x1C48F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C48F8u; }
        if (ctx->pc != 0x1C48F8u) { return; }
    }
    ctx->pc = 0x1C48F8u;
    // 0x1c48f8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c48f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c48fc: 0xac221cc0  sw          $v0, 0x1CC0($at)
    ctx->pc = 0x1c48fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7360), GPR_U32(ctx, 2));
    // 0x1c4900: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4904: 0x8c241cc0  lw          $a0, 0x1CC0($at)
    ctx->pc = 0x1c4904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7360)));
    // 0x1c4908: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C4908u;
    SET_GPR_U32(ctx, 31, 0x1C4910u);
    ctx->pc = 0x1C490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4908u;
            // 0x1c490c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4910u; }
        if (ctx->pc != 0x1C4910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4910u; }
        if (ctx->pc != 0x1C4910u) { return; }
    }
    ctx->pc = 0x1C4910u;
    // 0x1c4910: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4914: 0xac221cc8  sw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7368), GPR_U32(ctx, 2));
    // 0x1c4918: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c4918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c491c: 0x18400130  blez        $v0, . + 4 + (0x130 << 2)
    ctx->pc = 0x1C491Cu;
    {
        const bool branch_taken_0x1c491c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c491c) {
            ctx->pc = 0x1C4DE0u;
            goto label_1c4de0;
        }
    }
    ctx->pc = 0x1C4924u;
    // 0x1c4924: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1c4924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c4928: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1c4928u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c492c: 0x1020013c  beqz        $at, . + 4 + (0x13C << 2)
    ctx->pc = 0x1C492Cu;
    {
        const bool branch_taken_0x1c492c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C492Cu;
            // 0x1c4930: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c492c) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4934u;
    // 0x1c4934: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c4934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4938: 0x24632bd0  addiu       $v1, $v1, 0x2BD0
    ctx->pc = 0x1c4938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11216));
    // 0x1c493c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4940: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4944: 0x400008  jr          $v0
    ctx->pc = 0x1C4944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4950u: goto label_1c4950;
            case 0x1C4968u: goto label_1c4968;
            case 0x1C4A60u: goto label_1c4a60;
            case 0x1C4AF8u: goto label_1c4af8;
            case 0x1C4C70u: goto label_1c4c70;
            case 0x1C4D00u: goto label_1c4d00;
            case 0x1C4E20u: goto label_1c4e20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C494Cu;
    // 0x1c494c: 0x0  nop
    ctx->pc = 0x1c494cu;
    // NOP
label_1c4950:
    // 0x1c4950: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4954: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4958: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c4958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c495c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x1C495Cu;
    {
        const bool branch_taken_0x1c495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C495Cu;
            // 0x1c4960: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c495c) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4964u;
    // 0x1c4964: 0x0  nop
    ctx->pc = 0x1c4964u;
    // NOP
label_1c4968:
    // 0x1c4968: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c4968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1c496c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1c496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
    // 0x1c4970: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c4970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c4974: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1c4974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c4978: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c497c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c497cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1c4980: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c4980u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c4984: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1c4984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
    // 0x1c4988: 0x2463ffc4  addiu       $v1, $v1, -0x3C
    ctx->pc = 0x1c4988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
    // 0x1c498c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c498cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4990: 0x0  nop
    ctx->pc = 0x1c4990u;
    // NOP
    // 0x1c4994: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c4994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c4998: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c4998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c499c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c49a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c49a4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1c49a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1c49a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c49a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c49ac: 0x0  nop
    ctx->pc = 0x1c49acu;
    // NOP
    // 0x1c49b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c49b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c49b4: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x1C49B4u;
    SET_GPR_U32(ctx, 31, 0x1C49BCu);
    ctx->pc = 0x1C49B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49B4u;
            // 0x1c49b8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C49BCu; }
        if (ctx->pc != 0x1C49BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C49BCu; }
        if (ctx->pc != 0x1C49BCu) { return; }
    }
    ctx->pc = 0x1C49BCu;
    // 0x1c49bc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c49bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c49c0: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c49c4: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x1c49c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c49c8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1c49c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c49cc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c49ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c49d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c49d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c49d4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1c49d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c49d8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1c49d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c49dc: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c49e0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c49e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1c49e4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1c49e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c49e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c49e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c49ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C49ECu;
    {
        const bool branch_taken_0x1c49ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C49F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49ECu;
            // 0x1c49f0: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49ec) {
            ctx->pc = 0x1C4A00u;
            goto label_1c4a00;
        }
    }
    ctx->pc = 0x1C49F4u;
    // 0x1c49f4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c49f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c49f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C49F8u;
    {
        const bool branch_taken_0x1c49f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C49FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49F8u;
            // 0x1c49fc: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49f8) {
            ctx->pc = 0x1C4A20u;
            goto label_1c4a20;
        }
    }
    ctx->pc = 0x1C4A00u;
label_1c4a00:
    // 0x1c4a00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4a04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4A04u;
    {
        const bool branch_taken_0x1c4a04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A04u;
            // 0x1c4a08: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a04) {
            ctx->pc = 0x1C4A18u;
            goto label_1c4a18;
        }
    }
    ctx->pc = 0x1C4A0Cu;
    // 0x1c4a0c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4a0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c4a10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4A10u;
    {
        const bool branch_taken_0x1c4a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A10u;
            // 0x1c4a14: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a10) {
            ctx->pc = 0x1C4A20u;
            goto label_1c4a20;
        }
    }
    ctx->pc = 0x1C4A18u;
label_1c4a18:
    // 0x1c4a18: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1c4a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1c4a1c: 0x0  nop
    ctx->pc = 0x1c4a1cu;
    // NOP
label_1c4a20:
    // 0x1c4a20: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4a24: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4a28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c4a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4a2c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1c4a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4a30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4a34: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4A34u;
    {
        const bool branch_taken_0x1c4a34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A34u;
            // 0x1c4a38: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a34) {
            ctx->pc = 0x1C4A58u;
            goto label_1c4a58;
        }
    }
    ctx->pc = 0x1C4A3Cu;
    // 0x1c4a3c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1c4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1c4a40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4a40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c4a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4a48: 0x0  nop
    ctx->pc = 0x1c4a48u;
    // NOP
    // 0x1c4a4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c4a4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c4a50: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c4a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c4a54: 0x0  nop
    ctx->pc = 0x1c4a54u;
    // NOP
label_1c4a58:
    // 0x1c4a58: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x1C4A58u;
    {
        const bool branch_taken_0x1c4a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A58u;
            // 0x1c4a5c: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a58) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4A60u;
label_1c4a60:
    // 0x1c4a60: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4a64: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4a68: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1c4a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4a6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c4a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4a70: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c4a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4a74: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4a78: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c4a78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c4a7c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1c4a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c4a80: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4a84: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c4a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4a88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4a8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4A8Cu;
    {
        const bool branch_taken_0x1c4a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A8Cu;
            // 0x1c4a90: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a8c) {
            ctx->pc = 0x1C4AA0u;
            goto label_1c4aa0;
        }
    }
    ctx->pc = 0x1C4A94u;
    // 0x1c4a94: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4a94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c4a98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4A98u;
    {
        const bool branch_taken_0x1c4a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A98u;
            // 0x1c4a9c: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a98) {
            ctx->pc = 0x1C4AB8u;
            goto label_1c4ab8;
        }
    }
    ctx->pc = 0x1C4AA0u;
label_1c4aa0:
    // 0x1c4aa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4aa4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4AA4u;
    {
        const bool branch_taken_0x1c4aa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AA4u;
            // 0x1c4aa8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4aa4) {
            ctx->pc = 0x1C4AB8u;
            goto label_1c4ab8;
        }
    }
    ctx->pc = 0x1C4AACu;
    // 0x1c4aac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4aacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c4ab0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c4ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x1c4ab4: 0x0  nop
    ctx->pc = 0x1c4ab4u;
    // NOP
label_1c4ab8:
    // 0x1c4ab8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4abc: 0x8c231cc8  lw          $v1, 0x1CC8($at)
    ctx->pc = 0x1c4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4ac0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c4ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4ac8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1c4ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4acc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4ad0: 0x450000d3  bc1f        . + 4 + (0xD3 << 2)
    ctx->pc = 0x1C4AD0u;
    {
        const bool branch_taken_0x1c4ad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AD0u;
            // 0x1c4ad4: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ad0) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4AD8u;
    // 0x1c4ad8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c4adc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4adcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c4ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4ae4: 0x0  nop
    ctx->pc = 0x1c4ae4u;
    // NOP
    // 0x1c4ae8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c4ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c4aec: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x1C4AECu;
    {
        const bool branch_taken_0x1c4aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4AECu;
            // 0x1c4af0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4aec) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4AF4u;
    // 0x1c4af4: 0x0  nop
    ctx->pc = 0x1c4af4u;
    // NOP
label_1c4af8:
    // 0x1c4af8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1c4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c4afc: 0x28810096  slti        $at, $a0, 0x96
    ctx->pc = 0x1c4afcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1c4b00: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4B00u;
    {
        const bool branch_taken_0x1c4b00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B00u;
            // 0x1c4b04: 0x2403012c  addiu       $v1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b00) {
            ctx->pc = 0x1C4B1Cu;
            goto label_1c4b1c;
        }
    }
    ctx->pc = 0x1C4B08u;
    // 0x1c4b08: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x1c4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x1c4b0c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c4b0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c4b10: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1c4b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c4b14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4B14u;
    {
        const bool branch_taken_0x1c4b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B14u;
            // 0x1c4b18: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b14) {
            ctx->pc = 0x1C4B3Cu;
            goto label_1c4b3c;
        }
    }
    ctx->pc = 0x1C4B1Cu;
label_1c4b1c:
    // 0x1c4b1c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1c4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1c4b20: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1c4b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c4b24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c4b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4b2c: 0x0  nop
    ctx->pc = 0x1c4b2cu;
    // NOP
    // 0x1c4b30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c4b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c4b34: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1c4b34u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x1c4b38: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1c4b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1c4b3c:
    // 0x1c4b3c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c4b40: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x1c4b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1c4b44: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C4B44u;
    {
        const bool branch_taken_0x1c4b44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B44u;
            // 0x1c4b48: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b44) {
            ctx->pc = 0x1C4BD8u;
            goto label_1c4bd8;
        }
    }
    ctx->pc = 0x1C4B4Cu;
    // 0x1c4b4c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c4b50: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c4b54: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c4b54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c4b58: 0x0  nop
    ctx->pc = 0x1c4b58u;
    // NOP
    // 0x1c4b5c: 0x0  nop
    ctx->pc = 0x1c4b5cu;
    // NOP
    // 0x1c4b60: 0x1010  mfhi        $v0
    ctx->pc = 0x1c4b60u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c4b64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4B64u;
    {
        const bool branch_taken_0x1c4b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b64) {
            ctx->pc = 0x1C4B88u;
            goto label_1c4b88;
        }
    }
    ctx->pc = 0x1C4B6Cu;
    // 0x1c4b6c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c4b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4b70: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1c4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c4b74: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c4b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4b78: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c4b78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c4b7c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C4B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B84u);
    ctx->pc = 0x1C4B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B7Cu;
            // 0x1c4b80: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4B84u; }
        if (ctx->pc != 0x1C4B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4B84u; }
        if (ctx->pc != 0x1C4B84u) { return; }
    }
    ctx->pc = 0x1C4B84u;
    // 0x1c4b84: 0x0  nop
    ctx->pc = 0x1c4b84u;
    // NOP
label_1c4b88:
    // 0x1c4b88: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1c4b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c4b8c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4B8Cu;
    {
        const bool branch_taken_0x1c4b8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C4B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B8Cu;
            // 0x1c4b90: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b8c) {
            ctx->pc = 0x1C4BA0u;
            goto label_1c4ba0;
        }
    }
    ctx->pc = 0x1C4B94u;
    // 0x1c4b94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4B94u;
    {
        const bool branch_taken_0x1c4b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b94) {
            ctx->pc = 0x1C4BA0u;
            goto label_1c4ba0;
        }
    }
    ctx->pc = 0x1C4B9Cu;
    // 0x1c4b9c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1c4b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1c4ba0:
    // 0x1c4ba0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4BA0u;
    {
        const bool branch_taken_0x1c4ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ba0) {
            ctx->pc = 0x1C4BB0u;
            goto label_1c4bb0;
        }
    }
    ctx->pc = 0x1C4BA8u;
    // 0x1c4ba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4BA8u;
    {
        const bool branch_taken_0x1c4ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4BA8u;
            // 0x1c4bac: 0xe61400e8  swc1        $f20, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ba8) {
            ctx->pc = 0x1C4BB8u;
            goto label_1c4bb8;
        }
    }
    ctx->pc = 0x1C4BB0u;
label_1c4bb0:
    // 0x1c4bb0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x1c4bb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x1c4bb4: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1c4bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1c4bb8:
    // 0x1c4bb8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4bbc: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4bc0: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x1c4bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4bc4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1c4bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4bc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c4bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c4bcc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C4BCCu;
    {
        const bool branch_taken_0x1c4bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4BCCu;
            // 0x1c4bd0: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4bcc) {
            ctx->pc = 0x1C4C30u;
            goto label_1c4c30;
        }
    }
    ctx->pc = 0x1C4BD4u;
    // 0x1c4bd4: 0x0  nop
    ctx->pc = 0x1c4bd4u;
    // NOP
label_1c4bd8:
    // 0x1c4bd8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4bdc: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4be0: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1c4be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c4be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4be8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c4be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4bec: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4bf0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c4bf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c4bf4: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1c4bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c4bf8: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4bfc: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c4bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4c00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4c04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4C04u;
    {
        const bool branch_taken_0x1c4c04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C04u;
            // 0x1c4c08: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c04) {
            ctx->pc = 0x1C4C18u;
            goto label_1c4c18;
        }
    }
    ctx->pc = 0x1C4C0Cu;
    // 0x1c4c0c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c4c0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c4c10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4C10u;
    {
        const bool branch_taken_0x1c4c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C10u;
            // 0x1c4c14: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c10) {
            ctx->pc = 0x1C4C30u;
            goto label_1c4c30;
        }
    }
    ctx->pc = 0x1C4C18u;
label_1c4c18:
    // 0x1c4c18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4c1c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4C1Cu;
    {
        const bool branch_taken_0x1c4c1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C1Cu;
            // 0x1c4c20: 0x3c02ba83  lui         $v0, 0xBA83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47747 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c1c) {
            ctx->pc = 0x1C4C30u;
            goto label_1c4c30;
        }
    }
    ctx->pc = 0x1C4C24u;
    // 0x1c4c24: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c4c24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c4c28: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c4c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x1c4c2c: 0x0  nop
    ctx->pc = 0x1c4c2cu;
    // NOP
label_1c4c30:
    // 0x1c4c30: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4c34: 0x8c231cc8  lw          $v1, 0x1CC8($at)
    ctx->pc = 0x1c4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4c38: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c4c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4c40: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1c4c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4c44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4c48: 0x45000075  bc1f        . + 4 + (0x75 << 2)
    ctx->pc = 0x1C4C48u;
    {
        const bool branch_taken_0x1c4c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C48u;
            // 0x1c4c4c: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c48) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4C50u;
    // 0x1c4c50: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c4c54: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4c54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c4c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4c5c: 0x0  nop
    ctx->pc = 0x1c4c5cu;
    // NOP
    // 0x1c4c60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c4c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c4c64: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1C4C64u;
    {
        const bool branch_taken_0x1c4c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C64u;
            // 0x1c4c68: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c64) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4C6Cu;
    // 0x1c4c6c: 0x0  nop
    ctx->pc = 0x1c4c6cu;
    // NOP
label_1c4c70:
    // 0x1c4c70: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4c74: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4c78: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1c4c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c4c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4c80: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c4c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4c84: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4c88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c4c88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c4c8c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1c4c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c4c90: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4c94: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c4c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4c98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4c98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4c9c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4C9Cu;
    {
        const bool branch_taken_0x1c4c9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C9Cu;
            // 0x1c4ca0: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c9c) {
            ctx->pc = 0x1C4CB0u;
            goto label_1c4cb0;
        }
    }
    ctx->pc = 0x1C4CA4u;
    // 0x1c4ca4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4ca4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c4ca8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4CA8u;
    {
        const bool branch_taken_0x1c4ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CA8u;
            // 0x1c4cac: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ca8) {
            ctx->pc = 0x1C4CC8u;
            goto label_1c4cc8;
        }
    }
    ctx->pc = 0x1C4CB0u;
label_1c4cb0:
    // 0x1c4cb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4cb4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4CB4u;
    {
        const bool branch_taken_0x1c4cb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CB4u;
            // 0x1c4cb8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cb4) {
            ctx->pc = 0x1C4CC8u;
            goto label_1c4cc8;
        }
    }
    ctx->pc = 0x1C4CBCu;
    // 0x1c4cbc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4cbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c4cc0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c4cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x1c4cc4: 0x0  nop
    ctx->pc = 0x1c4cc4u;
    // NOP
label_1c4cc8:
    // 0x1c4cc8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4ccc: 0x8c221cc8  lw          $v0, 0x1CC8($at)
    ctx->pc = 0x1c4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4cd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c4cd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4cd4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1c4cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4cdc: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x1C4CDCu;
    {
        const bool branch_taken_0x1c4cdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CDCu;
            // 0x1c4ce0: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cdc) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4CE4u;
    // 0x1c4ce4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1c4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1c4ce8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4ce8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c4cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4cf0: 0x0  nop
    ctx->pc = 0x1c4cf0u;
    // NOP
    // 0x1c4cf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c4cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c4cf8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C4CF8u;
    {
        const bool branch_taken_0x1c4cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CF8u;
            // 0x1c4cfc: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cf8) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4D00u;
label_1c4d00:
    // 0x1c4d00: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C4D00u;
    SET_GPR_U32(ctx, 31, 0x1C4D08u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D08u; }
        if (ctx->pc != 0x1C4D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D08u; }
        if (ctx->pc != 0x1C4D08u) { return; }
    }
    ctx->pc = 0x1C4D08u;
    // 0x1c4d08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c4d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4d0c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C4D0Cu;
    {
        const bool branch_taken_0x1c4d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c4d0c) {
            ctx->pc = 0x1C4D48u;
            goto label_1c4d48;
        }
    }
    ctx->pc = 0x1C4D14u;
    // 0x1c4d14: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c4d18: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c4d1c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c4d1cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c4d20: 0x0  nop
    ctx->pc = 0x1c4d20u;
    // NOP
    // 0x1c4d24: 0x0  nop
    ctx->pc = 0x1c4d24u;
    // NOP
    // 0x1c4d28: 0x1010  mfhi        $v0
    ctx->pc = 0x1c4d28u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c4d2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4D2Cu;
    {
        const bool branch_taken_0x1c4d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D2Cu;
            // 0x1c4d30: 0x2466001e  addiu       $a2, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d2c) {
            ctx->pc = 0x1C4D48u;
            goto label_1c4d48;
        }
    }
    ctx->pc = 0x1C4D34u;
    // 0x1c4d34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c4d38: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1c4d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c4d3c: 0x24450082  addiu       $a1, $v0, 0x82
    ctx->pc = 0x1c4d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1c4d40: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1C4D40u;
    SET_GPR_U32(ctx, 31, 0x1C4D48u);
    ctx->pc = 0x1C4D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D40u;
            // 0x1c4d44: 0x24640050  addiu       $a0, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D48u; }
        if (ctx->pc != 0x1C4D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D48u; }
        if (ctx->pc != 0x1C4D48u) { return; }
    }
    ctx->pc = 0x1C4D48u;
label_1c4d48:
    // 0x1c4d48: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C4D48u;
    SET_GPR_U32(ctx, 31, 0x1C4D50u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D50u; }
        if (ctx->pc != 0x1C4D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D50u; }
        if (ctx->pc != 0x1C4D50u) { return; }
    }
    ctx->pc = 0x1C4D50u;
    // 0x1c4d50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4d54: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C4D54u;
    {
        const bool branch_taken_0x1c4d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c4d54) {
            ctx->pc = 0x1C4D90u;
            goto label_1c4d90;
        }
    }
    ctx->pc = 0x1C4D5Cu;
    // 0x1c4d5c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c4d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c4d60: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c4d64: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c4d64u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c4d68: 0x0  nop
    ctx->pc = 0x1c4d68u;
    // NOP
    // 0x1c4d6c: 0x0  nop
    ctx->pc = 0x1c4d6cu;
    // NOP
    // 0x1c4d70: 0x1010  mfhi        $v0
    ctx->pc = 0x1c4d70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c4d74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4D74u;
    {
        const bool branch_taken_0x1c4d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D74u;
            // 0x1c4d78: 0x2466001e  addiu       $a2, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d74) {
            ctx->pc = 0x1C4D90u;
            goto label_1c4d90;
        }
    }
    ctx->pc = 0x1C4D7Cu;
    // 0x1c4d7c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c4d80: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1c4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c4d84: 0x24450082  addiu       $a1, $v0, 0x82
    ctx->pc = 0x1c4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1c4d88: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1C4D88u;
    SET_GPR_U32(ctx, 31, 0x1C4D90u);
    ctx->pc = 0x1C4D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D88u;
            // 0x1c4d8c: 0x24640050  addiu       $a0, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D90u; }
        if (ctx->pc != 0x1C4D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D90u; }
        if (ctx->pc != 0x1C4D90u) { return; }
    }
    ctx->pc = 0x1C4D90u;
label_1c4d90:
    // 0x1c4d90: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C4D90u;
    SET_GPR_U32(ctx, 31, 0x1C4D98u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D98u; }
        if (ctx->pc != 0x1C4D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D98u; }
        if (ctx->pc != 0x1C4D98u) { return; }
    }
    ctx->pc = 0x1C4D98u;
    // 0x1c4d98: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C4D98u;
    {
        const bool branch_taken_0x1c4d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d98) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4DA0u;
    // 0x1c4da0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c4da4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c4da8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c4da8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c4dac: 0x0  nop
    ctx->pc = 0x1c4dacu;
    // NOP
    // 0x1c4db0: 0x0  nop
    ctx->pc = 0x1c4db0u;
    // NOP
    // 0x1c4db4: 0x1010  mfhi        $v0
    ctx->pc = 0x1c4db4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c4db8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4DB8u;
    {
        const bool branch_taken_0x1c4db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DB8u;
            // 0x1c4dbc: 0x2466001e  addiu       $a2, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4db8) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4DC0u;
    // 0x1c4dc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c4dc4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1c4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c4dc8: 0x24450082  addiu       $a1, $v0, 0x82
    ctx->pc = 0x1c4dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1c4dcc: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1C4DCCu;
    SET_GPR_U32(ctx, 31, 0x1C4DD4u);
    ctx->pc = 0x1C4DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DCCu;
            // 0x1c4dd0: 0x24640050  addiu       $a0, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DD4u; }
        if (ctx->pc != 0x1C4DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DD4u; }
        if (ctx->pc != 0x1C4DD4u) { return; }
    }
    ctx->pc = 0x1C4DD4u;
    // 0x1c4dd4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4DD4u;
    {
        const bool branch_taken_0x1c4dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4dd4) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4DDCu;
    // 0x1c4ddc: 0x0  nop
    ctx->pc = 0x1c4ddcu;
    // NOP
label_1c4de0:
    // 0x1c4de0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4de4: 0x8c231cc8  lw          $v1, 0x1CC8($at)
    ctx->pc = 0x1c4de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4de8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1c4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1c4dec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1c4decu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1c4df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4df4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1c4df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4df8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4df8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4dfc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4DFCu;
    {
        const bool branch_taken_0x1c4dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DFCu;
            // 0x1c4e00: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4dfc) {
            ctx->pc = 0x1C4E20u;
            goto label_1c4e20;
        }
    }
    ctx->pc = 0x1C4E04u;
    // 0x1c4e04: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c4e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c4e08: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c4e08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c4e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4e10: 0x0  nop
    ctx->pc = 0x1c4e10u;
    // NOP
    // 0x1c4e14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c4e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c4e18: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c4e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1c4e1c: 0x0  nop
    ctx->pc = 0x1c4e1cu;
    // NOP
label_1c4e20:
    // 0x1c4e20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4e24: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c4e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c4e28: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c4e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4e2c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c4e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4e30: 0xc071e9c  jal         func_1C7A70
    ctx->pc = 0x1C4E30u;
    SET_GPR_U32(ctx, 31, 0x1C4E38u);
    ctx->pc = 0x1C4E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E30u;
            // 0x1c4e34: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A70u;
    if (runtime->hasFunction(0x1C7A70u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E38u; }
        if (ctx->pc != 0x1C4E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E38u; }
        if (ctx->pc != 0x1C4E38u) { return; }
    }
    ctx->pc = 0x1C4E38u;
    // 0x1c4e38: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1c4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c4e3c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1c4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1c4e40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c4e44: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1c4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1c4e48: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1C4E48u;
    SET_GPR_U32(ctx, 31, 0x1C4E50u);
    ctx->pc = 0x1C4E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E48u;
            // 0x1c4e4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E50u; }
        if (ctx->pc != 0x1C4E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E50u; }
        if (ctx->pc != 0x1C4E50u) { return; }
    }
    ctx->pc = 0x1C4E50u;
    // 0x1c4e50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c4e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4e54: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1c4e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4e58: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1C4E58u;
    SET_GPR_U32(ctx, 31, 0x1C4E60u);
    ctx->pc = 0x1C4E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E58u;
            // 0x1c4e5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E60u; }
        if (ctx->pc != 0x1C4E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E60u; }
        if (ctx->pc != 0x1C4E60u) { return; }
    }
    ctx->pc = 0x1C4E60u;
    // 0x1c4e60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c4e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4e64: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1c4e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4e68: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1C4E68u;
    SET_GPR_U32(ctx, 31, 0x1C4E70u);
    ctx->pc = 0x1C4E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E68u;
            // 0x1c4e6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E70u; }
        if (ctx->pc != 0x1C4E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E70u; }
        if (ctx->pc != 0x1C4E70u) { return; }
    }
    ctx->pc = 0x1C4E70u;
    // 0x1c4e70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4e74: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1c4e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4e78: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1C4E78u;
    SET_GPR_U32(ctx, 31, 0x1C4E80u);
    ctx->pc = 0x1C4E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E78u;
            // 0x1c4e7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E80u; }
        if (ctx->pc != 0x1C4E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E80u; }
        if (ctx->pc != 0x1C4E80u) { return; }
    }
    ctx->pc = 0x1C4E80u;
    // 0x1c4e80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c4e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4e84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c4e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e88: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1C4E88u;
    SET_GPR_U32(ctx, 31, 0x1C4E90u);
    ctx->pc = 0x1C4E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E88u;
            // 0x1c4e8c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E90u; }
        if (ctx->pc != 0x1C4E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E90u; }
        if (ctx->pc != 0x1C4E90u) { return; }
    }
    ctx->pc = 0x1C4E90u;
    // 0x1c4e90: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c4e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c4e94: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c4e98: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c4e98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c4e9c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C4E9Cu;
    {
        const bool branch_taken_0x1c4e9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4e9c) {
            ctx->pc = 0x1C4EF0u;
            goto label_1c4ef0;
        }
    }
    ctx->pc = 0x1C4EA4u;
    // 0x1c4ea4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1c4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1c4ea8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4EA8u;
    {
        const bool branch_taken_0x1c4ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ea8) {
            ctx->pc = 0x1C4EC0u;
            goto label_1c4ec0;
        }
    }
    ctx->pc = 0x1C4EB0u;
    // 0x1c4eb0: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1C4EB0u;
    SET_GPR_U32(ctx, 31, 0x1C4EB8u);
    ctx->pc = 0x1C4EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EB0u;
            // 0x1c4eb4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EB8u; }
        if (ctx->pc != 0x1C4EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EB8u; }
        if (ctx->pc != 0x1C4EB8u) { return; }
    }
    ctx->pc = 0x1C4EB8u;
    // 0x1c4eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4EB8u;
    {
        const bool branch_taken_0x1c4eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4eb8) {
            ctx->pc = 0x1C4EC8u;
            goto label_1c4ec8;
        }
    }
    ctx->pc = 0x1C4EC0u;
label_1c4ec0:
    // 0x1c4ec0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C4EC0u;
    SET_GPR_U32(ctx, 31, 0x1C4EC8u);
    ctx->pc = 0x1C4EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EC0u;
            // 0x1c4ec4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EC8u; }
        if (ctx->pc != 0x1C4EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EC8u; }
        if (ctx->pc != 0x1C4EC8u) { return; }
    }
    ctx->pc = 0x1C4EC8u;
label_1c4ec8:
    // 0x1c4ec8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1c4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1c4ecc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4ECCu;
    {
        const bool branch_taken_0x1c4ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ecc) {
            ctx->pc = 0x1C4EE0u;
            goto label_1c4ee0;
        }
    }
    ctx->pc = 0x1C4ED4u;
    // 0x1c4ed4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C4ED4u;
    {
        const bool branch_taken_0x1c4ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4ED4u;
            // 0x1c4ed8: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ed4) {
            ctx->pc = 0x1C4F00u;
            goto label_1c4f00;
        }
    }
    ctx->pc = 0x1C4EDCu;
    // 0x1c4edc: 0x0  nop
    ctx->pc = 0x1c4edcu;
    // NOP
label_1c4ee0:
    // 0x1c4ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4ee4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4EE4u;
    {
        const bool branch_taken_0x1c4ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EE4u;
            // 0x1c4ee8: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ee4) {
            ctx->pc = 0x1C4F00u;
            goto label_1c4f00;
        }
    }
    ctx->pc = 0x1C4EECu;
    // 0x1c4eec: 0x0  nop
    ctx->pc = 0x1c4eecu;
    // NOP
label_1c4ef0:
    // 0x1c4ef0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C4EF0u;
    SET_GPR_U32(ctx, 31, 0x1C4EF8u);
    ctx->pc = 0x1C4EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EF0u;
            // 0x1c4ef4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EF8u; }
        if (ctx->pc != 0x1C4EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EF8u; }
        if (ctx->pc != 0x1C4EF8u) { return; }
    }
    ctx->pc = 0x1C4EF8u;
    // 0x1c4ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4efc: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1c4efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1c4f00:
    // 0x1c4f00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c4f04: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1c4f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1c4f08: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c4f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c4f0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c4f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c4f10: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1c4f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1c4f14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c4f18: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4F18u;
    {
        const bool branch_taken_0x1c4f18 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c4f18) {
            ctx->pc = 0x1C4F80u;
            goto label_1c4f80;
        }
    }
    ctx->pc = 0x1C4F20u;
    // 0x1c4f20: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c4f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c4f24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c4f28: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c4f28u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c4f2c: 0x0  nop
    ctx->pc = 0x1c4f2cu;
    // NOP
    // 0x1c4f30: 0x0  nop
    ctx->pc = 0x1c4f30u;
    // NOP
    // 0x1c4f34: 0x1010  mfhi        $v0
    ctx->pc = 0x1c4f34u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c4f38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4F38u;
    {
        const bool branch_taken_0x1c4f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f38) {
            ctx->pc = 0x1C4F60u;
            goto label_1c4f60;
        }
    }
    ctx->pc = 0x1C4F40u;
    // 0x1c4f40: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c4f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c4f44: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1c4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1c4f48: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c4f4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c4f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4f50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c4f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c4f54: 0x2484004a  addiu       $a0, $a0, 0x4A
    ctx->pc = 0x1c4f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 74));
    // 0x1c4f58: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1C4F58u;
    SET_GPR_U32(ctx, 31, 0x1C4F60u);
    ctx->pc = 0x1C4F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F58u;
            // 0x1c4f5c: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4F60u; }
        if (ctx->pc != 0x1C4F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4F60u; }
        if (ctx->pc != 0x1C4F60u) { return; }
    }
    ctx->pc = 0x1C4F60u;
label_1c4f60:
    // 0x1c4f60: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1c4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c4f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4f68: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1c4f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1c4f6c: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1c4f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c4f70: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1C4F70u;
    SET_GPR_U32(ctx, 31, 0x1C4F78u);
    ctx->pc = 0x1C4F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F70u;
            // 0x1c4f74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4F78u; }
        if (ctx->pc != 0x1C4F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4F78u; }
        if (ctx->pc != 0x1C4F78u) { return; }
    }
    ctx->pc = 0x1C4F78u;
    // 0x1c4f78: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1C4F78u;
    {
        const bool branch_taken_0x1c4f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f78) {
            ctx->pc = 0x1C50A8u;
            goto label_1c50a8;
        }
    }
    ctx->pc = 0x1C4F80u;
label_1c4f80:
    // 0x1c4f80: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1c4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c4f84: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1c4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c4f88: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1C4F88u;
    {
        const bool branch_taken_0x1c4f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F88u;
            // 0x1c4f8c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f88) {
            ctx->pc = 0x1C50A8u;
            goto label_1c50a8;
        }
    }
    ctx->pc = 0x1C4F90u;
    // 0x1c4f90: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C4F90u;
    {
        const bool branch_taken_0x1c4f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C4F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F90u;
            // 0x1c4f94: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f90) {
            ctx->pc = 0x1C50A8u;
            goto label_1c50a8;
        }
    }
    ctx->pc = 0x1C4F98u;
    // 0x1c4f98: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1c4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1c4f9c: 0x8c241cc8  lw          $a0, 0x1CC8($at)
    ctx->pc = 0x1c4f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7368)));
    // 0x1c4fa0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c4fa0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c4fa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c4fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4fa8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1c4fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4fac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4facu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4fb0: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1C4FB0u;
    {
        const bool branch_taken_0x1c4fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4fb0) {
            ctx->pc = 0x1C50A8u;
            goto label_1c50a8;
        }
    }
    ctx->pc = 0x1C4FB8u;
    // 0x1c4fb8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x1c4fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4fbc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1c4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1c4fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c4fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4fc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4fc8: 0x0  nop
    ctx->pc = 0x1c4fc8u;
    // NOP
    // 0x1c4fcc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c4fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4fd0: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1c4fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c4fd4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4fd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c4fd8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4FD8u;
    {
        const bool branch_taken_0x1c4fd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FD8u;
            // 0x1c4fdc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fd8) {
            ctx->pc = 0x1C4FFCu;
            goto label_1c4ffc;
        }
    }
    ctx->pc = 0x1C4FE0u;
    // 0x1c4fe0: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1c4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1c4fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4fe8: 0x0  nop
    ctx->pc = 0x1c4fe8u;
    // NOP
    // 0x1c4fec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c4fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c4ff0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4ff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c4ff4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4FF4u;
    {
        const bool branch_taken_0x1c4ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FF4u;
            // 0x1c4ff8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ff4) {
            ctx->pc = 0x1C5018u;
            goto label_1c5018;
        }
    }
    ctx->pc = 0x1C4FFCu;
label_1c4ffc:
    // 0x1c4ffc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1c4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1c5000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5004: 0x0  nop
    ctx->pc = 0x1c5004u;
    // NOP
    // 0x1c5008: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c5008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c500c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c500cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c5010: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c5010u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c5014: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c5014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c5018:
    // 0x1c5018: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1c5018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c501c: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c501cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c5020: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c5020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5024: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1c5024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1c5028: 0x24c643f0  addiu       $a2, $a2, 0x43F0
    ctx->pc = 0x1c5028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17392));
    // 0x1c502c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c502cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5030: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c5030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5034: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1c5034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1c5038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c503c: 0x0  nop
    ctx->pc = 0x1c503cu;
    // NOP
    // 0x1c5040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5044: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c5044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c5048: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1c5048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c504c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c5050: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c5050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c5054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5058: 0x0  nop
    ctx->pc = 0x1c5058u;
    // NOP
    // 0x1c505c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c505cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5060: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c5060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c5064: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c5064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c5068: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1c5068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c506c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1c506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x1c5070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5074: 0x0  nop
    ctx->pc = 0x1c5074u;
    // NOP
    // 0x1c5078: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c507c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c507cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c5080: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1c5080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1c5084: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c5084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c5088: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1c5088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x1c508c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c508cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5090: 0x0  nop
    ctx->pc = 0x1c5090u;
    // NOP
    // 0x1c5094: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5098: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c5098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c509c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C509Cu;
    SET_GPR_U32(ctx, 31, 0x1C50A4u);
    ctx->pc = 0x1C50A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C509Cu;
            // 0x1c50a0: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C50A4u; }
        if (ctx->pc != 0x1C50A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C50A4u; }
        if (ctx->pc != 0x1C50A4u) { return; }
    }
    ctx->pc = 0x1C50A4u;
    // 0x1c50a4: 0x0  nop
    ctx->pc = 0x1c50a4u;
    // NOP
label_1c50a8:
    // 0x1c50a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c50a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c50ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c50acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c50b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c50b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C50B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50B4u;
            // 0x1c50b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4950u: goto label_1c4950;
            case 0x1C4968u: goto label_1c4968;
            case 0x1C4A00u: goto label_1c4a00;
            case 0x1C4A18u: goto label_1c4a18;
            case 0x1C4A20u: goto label_1c4a20;
            case 0x1C4A58u: goto label_1c4a58;
            case 0x1C4A60u: goto label_1c4a60;
            case 0x1C4AA0u: goto label_1c4aa0;
            case 0x1C4AB8u: goto label_1c4ab8;
            case 0x1C4AF8u: goto label_1c4af8;
            case 0x1C4B1Cu: goto label_1c4b1c;
            case 0x1C4B3Cu: goto label_1c4b3c;
            case 0x1C4B88u: goto label_1c4b88;
            case 0x1C4BA0u: goto label_1c4ba0;
            case 0x1C4BB0u: goto label_1c4bb0;
            case 0x1C4BB8u: goto label_1c4bb8;
            case 0x1C4BD8u: goto label_1c4bd8;
            case 0x1C4C18u: goto label_1c4c18;
            case 0x1C4C30u: goto label_1c4c30;
            case 0x1C4C70u: goto label_1c4c70;
            case 0x1C4CB0u: goto label_1c4cb0;
            case 0x1C4CC8u: goto label_1c4cc8;
            case 0x1C4D00u: goto label_1c4d00;
            case 0x1C4D48u: goto label_1c4d48;
            case 0x1C4D90u: goto label_1c4d90;
            case 0x1C4DE0u: goto label_1c4de0;
            case 0x1C4E20u: goto label_1c4e20;
            case 0x1C4EC0u: goto label_1c4ec0;
            case 0x1C4EC8u: goto label_1c4ec8;
            case 0x1C4EE0u: goto label_1c4ee0;
            case 0x1C4EF0u: goto label_1c4ef0;
            case 0x1C4F00u: goto label_1c4f00;
            case 0x1C4F60u: goto label_1c4f60;
            case 0x1C4F80u: goto label_1c4f80;
            case 0x1C4FFCu: goto label_1c4ffc;
            case 0x1C5018u: goto label_1c5018;
            case 0x1C50A8u: goto label_1c50a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C50BCu;
}
