#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage6BossMove1
// Address: 0x1c50c0 - 0x1c58b0
void Stage6BossMove1_0x1c50c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage6BossMove1_0x1c50c0");
#endif

    ctx->pc = 0x1c50c0u;

    // 0x1c50c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c50c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c50c4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1c50c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1c50c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c50cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c50ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c50d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c50d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c50d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c50d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c50dc: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1c50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1c50e0: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1C50E0u;
    SET_GPR_U32(ctx, 31, 0x1C50E8u);
    ctx->pc = 0x1C50E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50E0u;
            // 0x1c50e4: 0xdc25aa80  ld          $a1, -0x5580($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C50E8u; }
        if (ctx->pc != 0x1C50E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C50E8u; }
        if (ctx->pc != 0x1C50E8u) { return; }
    }
    ctx->pc = 0x1C50E8u;
    // 0x1c50e8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c50e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c50ec: 0xac221cb0  sw          $v0, 0x1CB0($at)
    ctx->pc = 0x1c50ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7344), GPR_U32(ctx, 2));
    // 0x1c50f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c50f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c50f4: 0x8c241cb0  lw          $a0, 0x1CB0($at)
    ctx->pc = 0x1c50f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7344)));
    // 0x1c50f8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C50F8u;
    SET_GPR_U32(ctx, 31, 0x1C5100u);
    ctx->pc = 0x1C50FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50F8u;
            // 0x1c50fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5100u; }
        if (ctx->pc != 0x1C5100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5100u; }
        if (ctx->pc != 0x1C5100u) { return; }
    }
    ctx->pc = 0x1C5100u;
    // 0x1c5100: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5104: 0xac221cb8  sw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c5104u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7352), GPR_U32(ctx, 2));
    // 0x1c5108: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c5108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c510c: 0x18400130  blez        $v0, . + 4 + (0x130 << 2)
    ctx->pc = 0x1C510Cu;
    {
        const bool branch_taken_0x1c510c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c510c) {
            ctx->pc = 0x1C55D0u;
            goto label_1c55d0;
        }
    }
    ctx->pc = 0x1C5114u;
    // 0x1c5114: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1c5114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c5118: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1c5118u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c511c: 0x1020013c  beqz        $at, . + 4 + (0x13C << 2)
    ctx->pc = 0x1C511Cu;
    {
        const bool branch_taken_0x1c511c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C511Cu;
            // 0x1c5120: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c511c) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C5124u;
    // 0x1c5124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c5124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c5128: 0x24632bf0  addiu       $v1, $v1, 0x2BF0
    ctx->pc = 0x1c5128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11248));
    // 0x1c512c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5130: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c5130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5134: 0x400008  jr          $v0
    ctx->pc = 0x1C5134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C5140u: goto label_1c5140;
            case 0x1C5158u: goto label_1c5158;
            case 0x1C5250u: goto label_1c5250;
            case 0x1C52E8u: goto label_1c52e8;
            case 0x1C5460u: goto label_1c5460;
            case 0x1C54F0u: goto label_1c54f0;
            case 0x1C5610u: goto label_1c5610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C513Cu;
    // 0x1c513c: 0x0  nop
    ctx->pc = 0x1c513cu;
    // NOP
label_1c5140:
    // 0x1c5140: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5144: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c5144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c5148: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c5148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c514c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x1C514Cu;
    {
        const bool branch_taken_0x1c514c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C514Cu;
            // 0x1c5150: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c514c) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C5154u;
    // 0x1c5154: 0x0  nop
    ctx->pc = 0x1c5154u;
    // NOP
label_1c5158:
    // 0x1c5158: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c5158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1c515c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1c515cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
    // 0x1c5160: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c5160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c5164: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1c5164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c5168: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c5168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c516c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1c516cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1c5170: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c5170u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c5174: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1c5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
    // 0x1c5178: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1c5178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1c517c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c517cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5180: 0x0  nop
    ctx->pc = 0x1c5180u;
    // NOP
    // 0x1c5184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5188: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c5188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c518c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c518cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c5190: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c5190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5194: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1c5194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1c5198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c519c: 0x0  nop
    ctx->pc = 0x1c519cu;
    // NOP
    // 0x1c51a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c51a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c51a4: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x1C51A4u;
    SET_GPR_U32(ctx, 31, 0x1C51ACu);
    ctx->pc = 0x1C51A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51A4u;
            // 0x1c51a8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51ACu; }
        if (ctx->pc != 0x1C51ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C51ACu; }
        if (ctx->pc != 0x1C51ACu) { return; }
    }
    ctx->pc = 0x1C51ACu;
    // 0x1c51ac: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c51acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c51b0: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c51b4: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x1c51b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c51b8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1c51b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c51bc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c51bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c51c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c51c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c51c4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1c51c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c51c8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1c51c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c51cc: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c51d0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c51d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1c51d4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1c51d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c51d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c51d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c51dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C51DCu;
    {
        const bool branch_taken_0x1c51dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C51E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51DCu;
            // 0x1c51e0: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51dc) {
            ctx->pc = 0x1C51F0u;
            goto label_1c51f0;
        }
    }
    ctx->pc = 0x1C51E4u;
    // 0x1c51e4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c51e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c51e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C51E8u;
    {
        const bool branch_taken_0x1c51e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51E8u;
            // 0x1c51ec: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51e8) {
            ctx->pc = 0x1C5210u;
            goto label_1c5210;
        }
    }
    ctx->pc = 0x1C51F0u;
label_1c51f0:
    // 0x1c51f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c51f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c51f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C51F4u;
    {
        const bool branch_taken_0x1c51f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C51F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C51F4u;
            // 0x1c51f8: 0x3c02bba3  lui         $v0, 0xBBA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51f4) {
            ctx->pc = 0x1C5208u;
            goto label_1c5208;
        }
    }
    ctx->pc = 0x1C51FCu;
    // 0x1c51fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c51fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c5200: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5200u;
    {
        const bool branch_taken_0x1c5200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5200u;
            // 0x1c5204: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5200) {
            ctx->pc = 0x1C5210u;
            goto label_1c5210;
        }
    }
    ctx->pc = 0x1C5208u;
label_1c5208:
    // 0x1c5208: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1c5208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1c520c: 0x0  nop
    ctx->pc = 0x1c520cu;
    // NOP
label_1c5210:
    // 0x1c5210: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5214: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c5218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c5218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c521c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1c521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5220: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5224: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5224u;
    {
        const bool branch_taken_0x1c5224 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5224u;
            // 0x1c5228: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5224) {
            ctx->pc = 0x1C5248u;
            goto label_1c5248;
        }
    }
    ctx->pc = 0x1C522Cu;
    // 0x1c522c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1c522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1c5230: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c5230u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c5234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5238: 0x0  nop
    ctx->pc = 0x1c5238u;
    // NOP
    // 0x1c523c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c523cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c5240: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c5240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c5244: 0x0  nop
    ctx->pc = 0x1c5244u;
    // NOP
label_1c5248:
    // 0x1c5248: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x1C5248u;
    {
        const bool branch_taken_0x1c5248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C524Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5248u;
            // 0x1c524c: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5248) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C5250u;
label_1c5250:
    // 0x1c5250: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5254: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c5254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c5258: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1c5258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c525c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c525cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5260: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c5260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5264: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5268: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c5268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c526c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1c526cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c5270: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c5270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c5274: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c5274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5278: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c5278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c527c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C527Cu;
    {
        const bool branch_taken_0x1c527c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C527Cu;
            // 0x1c5280: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c527c) {
            ctx->pc = 0x1C5290u;
            goto label_1c5290;
        }
    }
    ctx->pc = 0x1C5284u;
    // 0x1c5284: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c5284u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c5288: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5288u;
    {
        const bool branch_taken_0x1c5288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C528Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5288u;
            // 0x1c528c: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5288) {
            ctx->pc = 0x1C52A8u;
            goto label_1c52a8;
        }
    }
    ctx->pc = 0x1C5290u;
label_1c5290:
    // 0x1c5290: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5294: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5294u;
    {
        const bool branch_taken_0x1c5294 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5294u;
            // 0x1c5298: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5294) {
            ctx->pc = 0x1C52A8u;
            goto label_1c52a8;
        }
    }
    ctx->pc = 0x1C529Cu;
    // 0x1c529c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c529cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c52a0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c52a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x1c52a4: 0x0  nop
    ctx->pc = 0x1c52a4u;
    // NOP
label_1c52a8:
    // 0x1c52a8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c52a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c52ac: 0x8c231cb8  lw          $v1, 0x1CB8($at)
    ctx->pc = 0x1c52acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c52b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c52b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c52b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c52b8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1c52b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c52bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c52bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c52c0: 0x450000d3  bc1f        . + 4 + (0xD3 << 2)
    ctx->pc = 0x1C52C0u;
    {
        const bool branch_taken_0x1c52c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C52C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52C0u;
            // 0x1c52c4: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52c0) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C52C8u;
    // 0x1c52c8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c52cc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c52ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c52d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c52d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c52d4: 0x0  nop
    ctx->pc = 0x1c52d4u;
    // NOP
    // 0x1c52d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c52d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c52dc: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x1C52DCu;
    {
        const bool branch_taken_0x1c52dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52DCu;
            // 0x1c52e0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52dc) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C52E4u;
    // 0x1c52e4: 0x0  nop
    ctx->pc = 0x1c52e4u;
    // NOP
label_1c52e8:
    // 0x1c52e8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1c52e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c52ec: 0x28810096  slti        $at, $a0, 0x96
    ctx->pc = 0x1c52ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1c52f0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C52F0u;
    {
        const bool branch_taken_0x1c52f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52F0u;
            // 0x1c52f4: 0x2403012c  addiu       $v1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52f0) {
            ctx->pc = 0x1C530Cu;
            goto label_1c530c;
        }
    }
    ctx->pc = 0x1C52F8u;
    // 0x1c52f8: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x1c52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x1c52fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c52fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c5300: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1c5300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c5304: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5304u;
    {
        const bool branch_taken_0x1c5304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5304u;
            // 0x1c5308: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5304) {
            ctx->pc = 0x1C532Cu;
            goto label_1c532c;
        }
    }
    ctx->pc = 0x1C530Cu;
label_1c530c:
    // 0x1c530c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1c530cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1c5310: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1c5310u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c5314: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c531c: 0x0  nop
    ctx->pc = 0x1c531cu;
    // NOP
    // 0x1c5320: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5324: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1c5324u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x1c5328: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1c5328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1c532c:
    // 0x1c532c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c5330: 0x2861012c  slti        $at, $v1, 0x12C
    ctx->pc = 0x1c5330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1c5334: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C5334u;
    {
        const bool branch_taken_0x1c5334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5334u;
            // 0x1c5338: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5334) {
            ctx->pc = 0x1C53C8u;
            goto label_1c53c8;
        }
    }
    ctx->pc = 0x1C533Cu;
    // 0x1c533c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5340: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c5340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c5344: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c5344u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c5348: 0x0  nop
    ctx->pc = 0x1c5348u;
    // NOP
    // 0x1c534c: 0x0  nop
    ctx->pc = 0x1c534cu;
    // NOP
    // 0x1c5350: 0x1010  mfhi        $v0
    ctx->pc = 0x1c5350u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c5354: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5354u;
    {
        const bool branch_taken_0x1c5354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5354) {
            ctx->pc = 0x1C5378u;
            goto label_1c5378;
        }
    }
    ctx->pc = 0x1C535Cu;
    // 0x1c535c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5360: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1c5360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c5364: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c5364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5368: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c5368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c536c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C536Cu;
    SET_GPR_U32(ctx, 31, 0x1C5374u);
    ctx->pc = 0x1C5370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C536Cu;
            // 0x1c5370: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5374u; }
        if (ctx->pc != 0x1C5374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5374u; }
        if (ctx->pc != 0x1C5374u) { return; }
    }
    ctx->pc = 0x1C5374u;
    // 0x1c5374: 0x0  nop
    ctx->pc = 0x1c5374u;
    // NOP
label_1c5378:
    // 0x1c5378: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1c5378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c537c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C537Cu;
    {
        const bool branch_taken_0x1c537c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C5380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C537Cu;
            // 0x1c5380: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c537c) {
            ctx->pc = 0x1C5390u;
            goto label_1c5390;
        }
    }
    ctx->pc = 0x1C5384u;
    // 0x1c5384: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5384u;
    {
        const bool branch_taken_0x1c5384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5384) {
            ctx->pc = 0x1C5390u;
            goto label_1c5390;
        }
    }
    ctx->pc = 0x1C538Cu;
    // 0x1c538c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1c538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1c5390:
    // 0x1c5390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5390u;
    {
        const bool branch_taken_0x1c5390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5390u;
            // 0x1c5394: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5390) {
            ctx->pc = 0x1C53A0u;
            goto label_1c53a0;
        }
    }
    ctx->pc = 0x1C5398u;
    // 0x1c5398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5398u;
    {
        const bool branch_taken_0x1c5398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5398u;
            // 0x1c539c: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5398) {
            ctx->pc = 0x1C53A8u;
            goto label_1c53a8;
        }
    }
    ctx->pc = 0x1C53A0u;
label_1c53a0:
    // 0x1c53a0: 0xe61400e8  swc1        $f20, 0xE8($s0)
    ctx->pc = 0x1c53a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x1c53a4: 0x0  nop
    ctx->pc = 0x1c53a4u;
    // NOP
label_1c53a8:
    // 0x1c53a8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c53a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c53ac: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c53acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c53b0: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x1c53b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c53b4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1c53b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c53b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c53b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c53bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C53BCu;
    {
        const bool branch_taken_0x1c53bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C53C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C53BCu;
            // 0x1c53c0: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53bc) {
            ctx->pc = 0x1C5420u;
            goto label_1c5420;
        }
    }
    ctx->pc = 0x1C53C4u;
    // 0x1c53c4: 0x0  nop
    ctx->pc = 0x1c53c4u;
    // NOP
label_1c53c8:
    // 0x1c53c8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c53c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c53cc: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c53d0: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1c53d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c53d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c53d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c53d8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c53d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c53dc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c53dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c53e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c53e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c53e4: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1c53e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c53e8: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c53ec: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c53ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c53f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c53f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c53f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C53F4u;
    {
        const bool branch_taken_0x1c53f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C53F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C53F4u;
            // 0x1c53f8: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53f4) {
            ctx->pc = 0x1C5408u;
            goto label_1c5408;
        }
    }
    ctx->pc = 0x1C53FCu;
    // 0x1c53fc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c53fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c5400: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5400u;
    {
        const bool branch_taken_0x1c5400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5400u;
            // 0x1c5404: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5400) {
            ctx->pc = 0x1C5420u;
            goto label_1c5420;
        }
    }
    ctx->pc = 0x1C5408u;
label_1c5408:
    // 0x1c5408: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c540c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C540Cu;
    {
        const bool branch_taken_0x1c540c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C540Cu;
            // 0x1c5410: 0x3c02ba83  lui         $v0, 0xBA83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47747 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c540c) {
            ctx->pc = 0x1C5420u;
            goto label_1c5420;
        }
    }
    ctx->pc = 0x1C5414u;
    // 0x1c5414: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c5414u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c5418: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c5418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x1c541c: 0x0  nop
    ctx->pc = 0x1c541cu;
    // NOP
label_1c5420:
    // 0x1c5420: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5424: 0x8c231cb8  lw          $v1, 0x1CB8($at)
    ctx->pc = 0x1c5424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c5428: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c5428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c542c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c542cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5430: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1c5430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5434: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c5434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5438: 0x45000075  bc1f        . + 4 + (0x75 << 2)
    ctx->pc = 0x1C5438u;
    {
        const bool branch_taken_0x1c5438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5438u;
            // 0x1c543c: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5438) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C5440u;
    // 0x1c5440: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c5440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c5444: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c5444u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c5448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c544c: 0x0  nop
    ctx->pc = 0x1c544cu;
    // NOP
    // 0x1c5450: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c5450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c5454: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1C5454u;
    {
        const bool branch_taken_0x1c5454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5454u;
            // 0x1c5458: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5454) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C545Cu;
    // 0x1c545c: 0x0  nop
    ctx->pc = 0x1c545cu;
    // NOP
label_1c5460:
    // 0x1c5460: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5464: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c5464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c5468: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1c5468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c546c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c546cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5470: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c5470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5474: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5478: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c5478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c547c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1c547cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1c5480: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c5480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c5484: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1c5484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5488: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c5488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c548c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C548Cu;
    {
        const bool branch_taken_0x1c548c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C548Cu;
            // 0x1c5490: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c548c) {
            ctx->pc = 0x1C54A0u;
            goto label_1c54a0;
        }
    }
    ctx->pc = 0x1C5494u;
    // 0x1c5494: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c5494u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c5498: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5498u;
    {
        const bool branch_taken_0x1c5498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C549Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5498u;
            // 0x1c549c: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5498) {
            ctx->pc = 0x1C54B8u;
            goto label_1c54b8;
        }
    }
    ctx->pc = 0x1C54A0u;
label_1c54a0:
    // 0x1c54a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c54a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c54a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C54A4u;
    {
        const bool branch_taken_0x1c54a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C54A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54A4u;
            // 0x1c54a8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54a4) {
            ctx->pc = 0x1C54B8u;
            goto label_1c54b8;
        }
    }
    ctx->pc = 0x1C54ACu;
    // 0x1c54ac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c54acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c54b0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1c54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x1c54b4: 0x0  nop
    ctx->pc = 0x1c54b4u;
    // NOP
label_1c54b8:
    // 0x1c54b8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c54b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c54bc: 0x8c221cb8  lw          $v0, 0x1CB8($at)
    ctx->pc = 0x1c54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c54c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c54c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c54c4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1c54c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c54c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c54c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c54cc: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x1C54CCu;
    {
        const bool branch_taken_0x1c54cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C54D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54CCu;
            // 0x1c54d0: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54cc) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C54D4u;
    // 0x1c54d4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1c54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1c54d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c54d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c54dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c54dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c54e0: 0x0  nop
    ctx->pc = 0x1c54e0u;
    // NOP
    // 0x1c54e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c54e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c54e8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C54E8u;
    {
        const bool branch_taken_0x1c54e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C54ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54E8u;
            // 0x1c54ec: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54e8) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C54F0u;
label_1c54f0:
    // 0x1c54f0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C54F0u;
    SET_GPR_U32(ctx, 31, 0x1C54F8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54F8u; }
        if (ctx->pc != 0x1C54F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54F8u; }
        if (ctx->pc != 0x1C54F8u) { return; }
    }
    ctx->pc = 0x1C54F8u;
    // 0x1c54f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c54f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c54fc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C54FCu;
    {
        const bool branch_taken_0x1c54fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c54fc) {
            ctx->pc = 0x1C5538u;
            goto label_1c5538;
        }
    }
    ctx->pc = 0x1C5504u;
    // 0x1c5504: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c5504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5508: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c5508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c550c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c550cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c5510: 0x0  nop
    ctx->pc = 0x1c5510u;
    // NOP
    // 0x1c5514: 0x0  nop
    ctx->pc = 0x1c5514u;
    // NOP
    // 0x1c5518: 0x1010  mfhi        $v0
    ctx->pc = 0x1c5518u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c551c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C551Cu;
    {
        const bool branch_taken_0x1c551c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C551Cu;
            // 0x1c5520: 0x2466001e  addiu       $a2, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c551c) {
            ctx->pc = 0x1C5538u;
            goto label_1c5538;
        }
    }
    ctx->pc = 0x1C5524u;
    // 0x1c5524: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c5524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c5528: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1c5528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c552c: 0x24450082  addiu       $a1, $v0, 0x82
    ctx->pc = 0x1c552cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1c5530: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1C5530u;
    SET_GPR_U32(ctx, 31, 0x1C5538u);
    ctx->pc = 0x1C5534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5530u;
            // 0x1c5534: 0x2464ffb0  addiu       $a0, $v1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5538u; }
        if (ctx->pc != 0x1C5538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5538u; }
        if (ctx->pc != 0x1C5538u) { return; }
    }
    ctx->pc = 0x1C5538u;
label_1c5538:
    // 0x1c5538: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C5538u;
    SET_GPR_U32(ctx, 31, 0x1C5540u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5540u; }
        if (ctx->pc != 0x1C5540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5540u; }
        if (ctx->pc != 0x1C5540u) { return; }
    }
    ctx->pc = 0x1C5540u;
    // 0x1c5540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5544: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C5544u;
    {
        const bool branch_taken_0x1c5544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c5544) {
            ctx->pc = 0x1C5580u;
            goto label_1c5580;
        }
    }
    ctx->pc = 0x1C554Cu;
    // 0x1c554c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5550: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c5550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c5554: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c5554u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c5558: 0x0  nop
    ctx->pc = 0x1c5558u;
    // NOP
    // 0x1c555c: 0x0  nop
    ctx->pc = 0x1c555cu;
    // NOP
    // 0x1c5560: 0x1010  mfhi        $v0
    ctx->pc = 0x1c5560u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c5564: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5564u;
    {
        const bool branch_taken_0x1c5564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5564u;
            // 0x1c5568: 0x2466001e  addiu       $a2, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5564) {
            ctx->pc = 0x1C5580u;
            goto label_1c5580;
        }
    }
    ctx->pc = 0x1C556Cu;
    // 0x1c556c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c5570: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1c5570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c5574: 0x24450082  addiu       $a1, $v0, 0x82
    ctx->pc = 0x1c5574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1c5578: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1C5578u;
    SET_GPR_U32(ctx, 31, 0x1C5580u);
    ctx->pc = 0x1C557Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5578u;
            // 0x1c557c: 0x2464ffb0  addiu       $a0, $v1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5580u; }
        if (ctx->pc != 0x1C5580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5580u; }
        if (ctx->pc != 0x1C5580u) { return; }
    }
    ctx->pc = 0x1C5580u;
label_1c5580:
    // 0x1c5580: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C5580u;
    SET_GPR_U32(ctx, 31, 0x1C5588u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5588u; }
        if (ctx->pc != 0x1C5588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5588u; }
        if (ctx->pc != 0x1C5588u) { return; }
    }
    ctx->pc = 0x1C5588u;
    // 0x1c5588: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C5588u;
    {
        const bool branch_taken_0x1c5588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5588) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C5590u;
    // 0x1c5590: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c5590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5594: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c5594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c5598: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c5598u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c559c: 0x0  nop
    ctx->pc = 0x1c559cu;
    // NOP
    // 0x1c55a0: 0x0  nop
    ctx->pc = 0x1c55a0u;
    // NOP
    // 0x1c55a4: 0x1010  mfhi        $v0
    ctx->pc = 0x1c55a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c55a8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C55A8u;
    {
        const bool branch_taken_0x1c55a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C55ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55A8u;
            // 0x1c55ac: 0x2466001e  addiu       $a2, $v1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55a8) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C55B0u;
    // 0x1c55b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c55b4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1c55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c55b8: 0x24450082  addiu       $a1, $v0, 0x82
    ctx->pc = 0x1c55b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1c55bc: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1C55BCu;
    SET_GPR_U32(ctx, 31, 0x1C55C4u);
    ctx->pc = 0x1C55C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55BCu;
            // 0x1c55c0: 0x2464ffb0  addiu       $a0, $v1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C55C4u; }
        if (ctx->pc != 0x1C55C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C55C4u; }
        if (ctx->pc != 0x1C55C4u) { return; }
    }
    ctx->pc = 0x1C55C4u;
    // 0x1c55c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C55C4u;
    {
        const bool branch_taken_0x1c55c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c55c4) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C55CCu;
    // 0x1c55cc: 0x0  nop
    ctx->pc = 0x1c55ccu;
    // NOP
label_1c55d0:
    // 0x1c55d0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c55d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c55d4: 0x8c231cb8  lw          $v1, 0x1CB8($at)
    ctx->pc = 0x1c55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c55d8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1c55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1c55dc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1c55dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1c55e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c55e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c55e4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1c55e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c55e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c55e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c55ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C55ECu;
    {
        const bool branch_taken_0x1c55ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C55F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55ECu;
            // 0x1c55f0: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55ec) {
            ctx->pc = 0x1C5610u;
            goto label_1c5610;
        }
    }
    ctx->pc = 0x1C55F4u;
    // 0x1c55f4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c55f8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c55f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c55fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c55fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5600: 0x0  nop
    ctx->pc = 0x1c5600u;
    // NOP
    // 0x1c5604: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c5604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c5608: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c5608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1c560c: 0x0  nop
    ctx->pc = 0x1c560cu;
    // NOP
label_1c5610:
    // 0x1c5610: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c5610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5614: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c5614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c5618: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c5618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c561c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c5620: 0xc071e9c  jal         func_1C7A70
    ctx->pc = 0x1C5620u;
    SET_GPR_U32(ctx, 31, 0x1C5628u);
    ctx->pc = 0x1C5624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5620u;
            // 0x1c5624: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A70u;
    if (runtime->hasFunction(0x1C7A70u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5628u; }
        if (ctx->pc != 0x1C5628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5628u; }
        if (ctx->pc != 0x1C5628u) { return; }
    }
    ctx->pc = 0x1C5628u;
    // 0x1c5628: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1c5628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c562c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1c562cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1c5630: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c5630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c5634: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1c5634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1c5638: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1C5638u;
    SET_GPR_U32(ctx, 31, 0x1C5640u);
    ctx->pc = 0x1C563Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5638u;
            // 0x1c563c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5640u; }
        if (ctx->pc != 0x1C5640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5640u; }
        if (ctx->pc != 0x1C5640u) { return; }
    }
    ctx->pc = 0x1C5640u;
    // 0x1c5640: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c5640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5644: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1c5644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5648: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1C5648u;
    SET_GPR_U32(ctx, 31, 0x1C5650u);
    ctx->pc = 0x1C564Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5648u;
            // 0x1c564c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5650u; }
        if (ctx->pc != 0x1C5650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5650u; }
        if (ctx->pc != 0x1C5650u) { return; }
    }
    ctx->pc = 0x1C5650u;
    // 0x1c5650: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c5650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5654: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1c5654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5658: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1C5658u;
    SET_GPR_U32(ctx, 31, 0x1C5660u);
    ctx->pc = 0x1C565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5658u;
            // 0x1c565c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5660u; }
        if (ctx->pc != 0x1C5660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5660u; }
        if (ctx->pc != 0x1C5660u) { return; }
    }
    ctx->pc = 0x1C5660u;
    // 0x1c5660: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c5660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5664: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1c5664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5668: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1C5668u;
    SET_GPR_U32(ctx, 31, 0x1C5670u);
    ctx->pc = 0x1C566Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5668u;
            // 0x1c566c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5670u; }
        if (ctx->pc != 0x1C5670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5670u; }
        if (ctx->pc != 0x1C5670u) { return; }
    }
    ctx->pc = 0x1C5670u;
    // 0x1c5670: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c5670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5674: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c5674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5678: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1C5678u;
    SET_GPR_U32(ctx, 31, 0x1C5680u);
    ctx->pc = 0x1C567Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5678u;
            // 0x1c567c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5680u; }
        if (ctx->pc != 0x1C5680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5680u; }
        if (ctx->pc != 0x1C5680u) { return; }
    }
    ctx->pc = 0x1C5680u;
    // 0x1c5680: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c5680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c5684: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c5684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c5688: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c5688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c568c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C568Cu;
    {
        const bool branch_taken_0x1c568c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c568c) {
            ctx->pc = 0x1C56E0u;
            goto label_1c56e0;
        }
    }
    ctx->pc = 0x1C5694u;
    // 0x1c5694: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1c5694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1c5698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5698u;
    {
        const bool branch_taken_0x1c5698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5698) {
            ctx->pc = 0x1C56B0u;
            goto label_1c56b0;
        }
    }
    ctx->pc = 0x1C56A0u;
    // 0x1c56a0: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1C56A0u;
    SET_GPR_U32(ctx, 31, 0x1C56A8u);
    ctx->pc = 0x1C56A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56A0u;
            // 0x1c56a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56A8u; }
        if (ctx->pc != 0x1C56A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56A8u; }
        if (ctx->pc != 0x1C56A8u) { return; }
    }
    ctx->pc = 0x1C56A8u;
    // 0x1c56a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C56A8u;
    {
        const bool branch_taken_0x1c56a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c56a8) {
            ctx->pc = 0x1C56B8u;
            goto label_1c56b8;
        }
    }
    ctx->pc = 0x1C56B0u;
label_1c56b0:
    // 0x1c56b0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C56B0u;
    SET_GPR_U32(ctx, 31, 0x1C56B8u);
    ctx->pc = 0x1C56B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56B0u;
            // 0x1c56b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56B8u; }
        if (ctx->pc != 0x1C56B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56B8u; }
        if (ctx->pc != 0x1C56B8u) { return; }
    }
    ctx->pc = 0x1C56B8u;
label_1c56b8:
    // 0x1c56b8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1c56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1c56bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C56BCu;
    {
        const bool branch_taken_0x1c56bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c56bc) {
            ctx->pc = 0x1C56D0u;
            goto label_1c56d0;
        }
    }
    ctx->pc = 0x1C56C4u;
    // 0x1c56c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C56C4u;
    {
        const bool branch_taken_0x1c56c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56C4u;
            // 0x1c56c8: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56c4) {
            ctx->pc = 0x1C56F0u;
            goto label_1c56f0;
        }
    }
    ctx->pc = 0x1C56CCu;
    // 0x1c56cc: 0x0  nop
    ctx->pc = 0x1c56ccu;
    // NOP
label_1c56d0:
    // 0x1c56d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c56d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c56d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C56D4u;
    {
        const bool branch_taken_0x1c56d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56D4u;
            // 0x1c56d8: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56d4) {
            ctx->pc = 0x1C56F0u;
            goto label_1c56f0;
        }
    }
    ctx->pc = 0x1C56DCu;
    // 0x1c56dc: 0x0  nop
    ctx->pc = 0x1c56dcu;
    // NOP
label_1c56e0:
    // 0x1c56e0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C56E0u;
    SET_GPR_U32(ctx, 31, 0x1C56E8u);
    ctx->pc = 0x1C56E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56E0u;
            // 0x1c56e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56E8u; }
        if (ctx->pc != 0x1C56E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56E8u; }
        if (ctx->pc != 0x1C56E8u) { return; }
    }
    ctx->pc = 0x1C56E8u;
    // 0x1c56e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c56e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c56ec: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1c56ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1c56f0:
    // 0x1c56f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c56f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c56f4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1c56f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1c56f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c56f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c56fc: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C56FCu;
    {
        const bool branch_taken_0x1c56fc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c56fc) {
            ctx->pc = 0x1C5768u;
            goto label_1c5768;
        }
    }
    ctx->pc = 0x1C5704u;
    // 0x1c5704: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c5704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5708: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c5708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c570c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c570cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c5710: 0x0  nop
    ctx->pc = 0x1c5710u;
    // NOP
    // 0x1c5714: 0x0  nop
    ctx->pc = 0x1c5714u;
    // NOP
    // 0x1c5718: 0x1010  mfhi        $v0
    ctx->pc = 0x1c5718u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c571c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C571Cu;
    {
        const bool branch_taken_0x1c571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c571c) {
            ctx->pc = 0x1C5748u;
            goto label_1c5748;
        }
    }
    ctx->pc = 0x1C5724u;
    // 0x1c5724: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c5724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c5728: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1c5728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1c572c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c572cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c5730: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5734: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c5734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c5738: 0x2484ffb6  addiu       $a0, $a0, -0x4A
    ctx->pc = 0x1c5738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967222));
    // 0x1c573c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1C573Cu;
    SET_GPR_U32(ctx, 31, 0x1C5744u);
    ctx->pc = 0x1C5740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C573Cu;
            // 0x1c5740: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5744u; }
        if (ctx->pc != 0x1C5744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5744u; }
        if (ctx->pc != 0x1C5744u) { return; }
    }
    ctx->pc = 0x1C5744u;
    // 0x1c5744: 0x0  nop
    ctx->pc = 0x1c5744u;
    // NOP
label_1c5748:
    // 0x1c5748: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1c5748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c574c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5750: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1c5750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1c5754: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1c5754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c5758: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1C5758u;
    SET_GPR_U32(ctx, 31, 0x1C5760u);
    ctx->pc = 0x1C575Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5758u;
            // 0x1c575c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5760u; }
        if (ctx->pc != 0x1C5760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5760u; }
        if (ctx->pc != 0x1C5760u) { return; }
    }
    ctx->pc = 0x1C5760u;
    // 0x1c5760: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1C5760u;
    {
        const bool branch_taken_0x1c5760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5760) {
            ctx->pc = 0x1C5890u;
            goto label_1c5890;
        }
    }
    ctx->pc = 0x1C5768u;
label_1c5768:
    // 0x1c5768: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1c5768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c576c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1c576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c5770: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1C5770u;
    {
        const bool branch_taken_0x1c5770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5770u;
            // 0x1c5774: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5770) {
            ctx->pc = 0x1C5890u;
            goto label_1c5890;
        }
    }
    ctx->pc = 0x1C5778u;
    // 0x1c5778: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C5778u;
    {
        const bool branch_taken_0x1c5778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C577Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5778u;
            // 0x1c577c: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5778) {
            ctx->pc = 0x1C5890u;
            goto label_1c5890;
        }
    }
    ctx->pc = 0x1C5780u;
    // 0x1c5780: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1c5780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1c5784: 0x8c241cb8  lw          $a0, 0x1CB8($at)
    ctx->pc = 0x1c5784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7352)));
    // 0x1c5788: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c5788u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c578c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c578cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5790: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1c5790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5794: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c5794u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5798: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1C5798u;
    {
        const bool branch_taken_0x1c5798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5798) {
            ctx->pc = 0x1C5890u;
            goto label_1c5890;
        }
    }
    ctx->pc = 0x1C57A0u;
    // 0x1c57a0: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x1c57a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c57a4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1c57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1c57a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c57a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c57ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c57acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c57b0: 0x0  nop
    ctx->pc = 0x1c57b0u;
    // NOP
    // 0x1c57b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c57b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c57b8: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1c57b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c57bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c57bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c57c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C57C0u;
    {
        const bool branch_taken_0x1c57c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C57C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C57C0u;
            // 0x1c57c4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57c0) {
            ctx->pc = 0x1C57E4u;
            goto label_1c57e4;
        }
    }
    ctx->pc = 0x1C57C8u;
    // 0x1c57c8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1c57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1c57cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c57ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c57d0: 0x0  nop
    ctx->pc = 0x1c57d0u;
    // NOP
    // 0x1c57d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c57d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c57d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c57d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c57dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C57DCu;
    {
        const bool branch_taken_0x1c57dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C57DCu;
            // 0x1c57e0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57dc) {
            ctx->pc = 0x1C5800u;
            goto label_1c5800;
        }
    }
    ctx->pc = 0x1C57E4u;
label_1c57e4:
    // 0x1c57e4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1c57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1c57e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c57e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c57ec: 0x0  nop
    ctx->pc = 0x1c57ecu;
    // NOP
    // 0x1c57f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c57f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c57f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c57f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c57f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c57f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c57fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c57fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c5800:
    // 0x1c5800: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1c5800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c5804: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c5804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c5808: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c5808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c580c: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1c580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1c5810: 0x24c643f0  addiu       $a2, $a2, 0x43F0
    ctx->pc = 0x1c5810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17392));
    // 0x1c5814: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c5814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5818: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c5818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c581c: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1c581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1c5820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5824: 0x0  nop
    ctx->pc = 0x1c5824u;
    // NOP
    // 0x1c5828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c582c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c582cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c5830: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1c5830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c5834: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c5834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c5838: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c5838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c583c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c583cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5840: 0x0  nop
    ctx->pc = 0x1c5840u;
    // NOP
    // 0x1c5844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5848: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c5848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c584c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c584cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c5850: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1c5850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1c5854: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1c5854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1c5858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c585c: 0x0  nop
    ctx->pc = 0x1c585cu;
    // NOP
    // 0x1c5860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5864: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c5864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c5868: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1c5868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1c586c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1c586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c5870: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1c5870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x1c5874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5878: 0x0  nop
    ctx->pc = 0x1c5878u;
    // NOP
    // 0x1c587c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c587cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5880: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c5880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c5884: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C5884u;
    SET_GPR_U32(ctx, 31, 0x1C588Cu);
    ctx->pc = 0x1C5888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5884u;
            // 0x1c5888: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C588Cu; }
        if (ctx->pc != 0x1C588Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C588Cu; }
        if (ctx->pc != 0x1C588Cu) { return; }
    }
    ctx->pc = 0x1C588Cu;
    // 0x1c588c: 0x0  nop
    ctx->pc = 0x1c588cu;
    // NOP
label_1c5890:
    // 0x1c5890: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c5890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5894: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c5894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c5898: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1c5898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1c589c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c589cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c58a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c58a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c58a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c58a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c58a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C58A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C58ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58A8u;
            // 0x1c58ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C5140u: goto label_1c5140;
            case 0x1C5158u: goto label_1c5158;
            case 0x1C51F0u: goto label_1c51f0;
            case 0x1C5208u: goto label_1c5208;
            case 0x1C5210u: goto label_1c5210;
            case 0x1C5248u: goto label_1c5248;
            case 0x1C5250u: goto label_1c5250;
            case 0x1C5290u: goto label_1c5290;
            case 0x1C52A8u: goto label_1c52a8;
            case 0x1C52E8u: goto label_1c52e8;
            case 0x1C530Cu: goto label_1c530c;
            case 0x1C532Cu: goto label_1c532c;
            case 0x1C5378u: goto label_1c5378;
            case 0x1C5390u: goto label_1c5390;
            case 0x1C53A0u: goto label_1c53a0;
            case 0x1C53A8u: goto label_1c53a8;
            case 0x1C53C8u: goto label_1c53c8;
            case 0x1C5408u: goto label_1c5408;
            case 0x1C5420u: goto label_1c5420;
            case 0x1C5460u: goto label_1c5460;
            case 0x1C54A0u: goto label_1c54a0;
            case 0x1C54B8u: goto label_1c54b8;
            case 0x1C54F0u: goto label_1c54f0;
            case 0x1C5538u: goto label_1c5538;
            case 0x1C5580u: goto label_1c5580;
            case 0x1C55D0u: goto label_1c55d0;
            case 0x1C5610u: goto label_1c5610;
            case 0x1C56B0u: goto label_1c56b0;
            case 0x1C56B8u: goto label_1c56b8;
            case 0x1C56D0u: goto label_1c56d0;
            case 0x1C56E0u: goto label_1c56e0;
            case 0x1C56F0u: goto label_1c56f0;
            case 0x1C5748u: goto label_1c5748;
            case 0x1C5768u: goto label_1c5768;
            case 0x1C57E4u: goto label_1c57e4;
            case 0x1C5800u: goto label_1c5800;
            case 0x1C5890u: goto label_1c5890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C58B0u;
}
