#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotMoveFunction
// Address: 0x151b50 - 0x152870
void ShotMoveFunction_0x151b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotMoveFunction_0x151b50");
#endif

    ctx->pc = 0x151b50u;

    // 0x151b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x151b54: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x151b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x151b58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x151b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x151b5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151b60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151b64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151b68: 0x8c312160  lw          $s1, 0x2160($at)
    ctx->pc = 0x151b68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8544)));
    // 0x151b6c: 0x1220033a  beqz        $s1, . + 4 + (0x33A << 2)
    ctx->pc = 0x151B6Cu;
    {
        const bool branch_taken_0x151b6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b6c) {
            ctx->pc = 0x152858u;
            goto label_152858;
        }
    }
    ctx->pc = 0x151B74u;
    // 0x151b74: 0x0  nop
    ctx->pc = 0x151b74u;
    // NOP
label_151b78:
    // 0x151b78: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x151b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x151b7c: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x151b7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x151b80: 0x10200333  beqz        $at, . + 4 + (0x333 << 2)
    ctx->pc = 0x151B80u;
    {
        const bool branch_taken_0x151b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151B80u;
            // 0x151b84: 0x8e30004c  lw          $s0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b80) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151B88u;
    // 0x151b88: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x151b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x151b8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151b90: 0x24840c00  addiu       $a0, $a0, 0xC00
    ctx->pc = 0x151b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3072));
    // 0x151b94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x151b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151b98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151b9c: 0x600008  jr          $v1
    ctx->pc = 0x151B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151BA8u: goto label_151ba8;
            case 0x151CE0u: goto label_151ce0;
            case 0x151E80u: goto label_151e80;
            case 0x151FB0u: goto label_151fb0;
            case 0x152138u: goto label_152138;
            case 0x152270u: goto label_152270;
            case 0x152410u: goto label_152410;
            case 0x152548u: goto label_152548;
            case 0x152640u: goto label_152640;
            case 0x1526E8u: goto label_1526e8;
            case 0x1527B0u: goto label_1527b0;
            case 0x152850u: goto label_152850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x151BA4u;
    // 0x151ba4: 0x0  nop
    ctx->pc = 0x151ba4u;
    // NOP
label_151ba8:
    // 0x151ba8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x151ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151bac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x151bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x151bb0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151bb4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x151bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x151bb8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x151bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151bbc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x151bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x151bc0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151bc4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x151bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x151bc8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x151bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151bcc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x151bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x151bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151bd4: 0x0  nop
    ctx->pc = 0x151bd4u;
    // NOP
    // 0x151bd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151bdc: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x151bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x151be0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x151be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151be4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x151be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x151be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151bec: 0x0  nop
    ctx->pc = 0x151becu;
    // NOP
    // 0x151bf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151bf4: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x151bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x151bf8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x151bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151bfc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x151bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x151c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c04: 0x0  nop
    ctx->pc = 0x151c04u;
    // NOP
    // 0x151c08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151c0c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x151c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x151c10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x151c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151c14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x151c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x151c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c1c: 0x0  nop
    ctx->pc = 0x151c1cu;
    // NOP
    // 0x151c20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151c24: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x151c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x151c28: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x151c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151c2c: 0x28a1ff10  slti        $at, $a1, -0xF0
    ctx->pc = 0x151c2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x151c30: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x151C30u;
    {
        const bool branch_taken_0x151c30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151C30u;
            // 0x151c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c30) {
            ctx->pc = 0x151C48u;
            goto label_151c48;
        }
    }
    ctx->pc = 0x151C38u;
    // 0x151c38: 0xc054a88  jal         func_152A20
    ctx->pc = 0x151C38u;
    SET_GPR_U32(ctx, 31, 0x151C40u);
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C40u; }
        if (ctx->pc != 0x151C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C40u; }
        if (ctx->pc != 0x151C40u) { return; }
    }
    ctx->pc = 0x151C40u;
    // 0x151c40: 0x10000303  b           . + 4 + (0x303 << 2)
    ctx->pc = 0x151C40u;
    {
        const bool branch_taken_0x151c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c40) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151C48u;
label_151c48:
    // 0x151c48: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x151c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x151c4c: 0x1c40001a  bgtz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x151C4Cu;
    {
        const bool branch_taken_0x151c4c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x151c4c) {
            ctx->pc = 0x151CB8u;
            goto label_151cb8;
        }
    }
    ctx->pc = 0x151C54u;
    // 0x151c54: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x151c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151c58: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x151c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x151c5c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x151c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151c60: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x151c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151c64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x151c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151c68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x151c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x151c6c: 0x46011303  div.s       $f12, $f2, $f1
    ctx->pc = 0x151c6cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[1];
    // 0x151c70: 0x0  nop
    ctx->pc = 0x151c70u;
    // NOP
    // 0x151c74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151c78: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x151c78u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x151c7c: 0x0  nop
    ctx->pc = 0x151c7cu;
    // NOP
    // 0x151c80: 0x0  nop
    ctx->pc = 0x151c80u;
    // NOP
    // 0x151c84: 0xc05bb28  jal         func_16ECA0
    ctx->pc = 0x151C84u;
    SET_GPR_U32(ctx, 31, 0x151C8Cu);
    ctx->pc = 0x16ECA0u;
    if (runtime->hasFunction(0x16ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x16ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C8Cu; }
        if (ctx->pc != 0x151C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateParticle_0x16eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151C8Cu; }
        if (ctx->pc != 0x151C8Cu) { return; }
    }
    ctx->pc = 0x151C8Cu;
    // 0x151c8c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x151c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151c90: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x151c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x151c94: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x151c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151c98: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x151c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151c9c: 0xc05d080  jal         func_174200
    ctx->pc = 0x151C9Cu;
    SET_GPR_U32(ctx, 31, 0x151CA4u);
    ctx->pc = 0x151CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151C9Cu;
            // 0x151ca0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CA4u; }
        if (ctx->pc != 0x151CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CA4u; }
        if (ctx->pc != 0x151CA4u) { return; }
    }
    ctx->pc = 0x151CA4u;
    // 0x151ca4: 0xc054a88  jal         func_152A20
    ctx->pc = 0x151CA4u;
    SET_GPR_U32(ctx, 31, 0x151CACu);
    ctx->pc = 0x151CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151CA4u;
            // 0x151ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CACu; }
        if (ctx->pc != 0x151CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CACu; }
        if (ctx->pc != 0x151CACu) { return; }
    }
    ctx->pc = 0x151CACu;
    // 0x151cac: 0x100002e8  b           . + 4 + (0x2E8 << 2)
    ctx->pc = 0x151CACu;
    {
        const bool branch_taken_0x151cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151cac) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151CB4u;
    // 0x151cb4: 0x0  nop
    ctx->pc = 0x151cb4u;
    // NOP
label_151cb8:
    // 0x151cb8: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x151cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151cbc: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x151cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x151cc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x151cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151cc4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x151cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x151cc8: 0x24c629d0  addiu       $a2, $a2, 0x29D0
    ctx->pc = 0x151cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10704));
    // 0x151ccc: 0xc053c88  jal         func_14F220
    ctx->pc = 0x151CCCu;
    SET_GPR_U32(ctx, 31, 0x151CD4u);
    ctx->pc = 0x151CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151CCCu;
            // 0x151cd0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CD4u; }
        if (ctx->pc != 0x151CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151CD4u; }
        if (ctx->pc != 0x151CD4u) { return; }
    }
    ctx->pc = 0x151CD4u;
    // 0x151cd4: 0x100002de  b           . + 4 + (0x2DE << 2)
    ctx->pc = 0x151CD4u;
    {
        const bool branch_taken_0x151cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151cd4) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151CDCu;
    // 0x151cdc: 0x0  nop
    ctx->pc = 0x151cdcu;
    // NOP
label_151ce0:
    // 0x151ce0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x151ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x151ce4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x151CE4u;
    {
        const bool branch_taken_0x151ce4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x151CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151CE4u;
            // 0x151ce8: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ce4) {
            ctx->pc = 0x151CF8u;
            goto label_151cf8;
        }
    }
    ctx->pc = 0x151CECu;
    // 0x151cec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x151CECu;
    {
        const bool branch_taken_0x151cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151cec) {
            ctx->pc = 0x151CF8u;
            goto label_151cf8;
        }
    }
    ctx->pc = 0x151CF4u;
    // 0x151cf4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x151cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_151cf8:
    // 0x151cf8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x151CF8u;
    {
        const bool branch_taken_0x151cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151cf8) {
            ctx->pc = 0x151D48u;
            goto label_151d48;
        }
    }
    ctx->pc = 0x151D00u;
    // 0x151d00: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x151d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x151d04: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151D04u;
    {
        const bool branch_taken_0x151d04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x151d04) {
            ctx->pc = 0x151D18u;
            goto label_151d18;
        }
    }
    ctx->pc = 0x151D0Cu;
    // 0x151d0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151d10: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x151d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x151d14: 0x0  nop
    ctx->pc = 0x151d14u;
    // NOP
label_151d18:
    // 0x151d18: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x151d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x151d1c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151D1Cu;
    {
        const bool branch_taken_0x151d1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x151d1c) {
            ctx->pc = 0x151D30u;
            goto label_151d30;
        }
    }
    ctx->pc = 0x151D24u;
    // 0x151d24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x151d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151d28: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x151d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x151d2c: 0x0  nop
    ctx->pc = 0x151d2cu;
    // NOP
label_151d30:
    // 0x151d30: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x151d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x151d34: 0x2841fff1  slti        $at, $v0, -0xF
    ctx->pc = 0x151d34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967281) ? 1 : 0);
    // 0x151d38: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x151D38u;
    {
        const bool branch_taken_0x151d38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x151d38) {
            ctx->pc = 0x151D48u;
            goto label_151d48;
        }
    }
    ctx->pc = 0x151D40u;
    // 0x151d40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x151d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151d44: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x151d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_151d48:
    // 0x151d48: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x151d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151d4c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x151d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x151d50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151d54: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x151d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x151d58: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x151d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151d5c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x151d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x151d60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151d64: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x151d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x151d68: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x151d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151d6c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x151d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x151d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d74: 0x0  nop
    ctx->pc = 0x151d74u;
    // NOP
    // 0x151d78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151d7c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x151d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x151d80: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x151d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151d84: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x151d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x151d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d8c: 0x0  nop
    ctx->pc = 0x151d8cu;
    // NOP
    // 0x151d90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151d94: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x151d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x151d98: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x151d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151d9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x151d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x151da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151da4: 0x0  nop
    ctx->pc = 0x151da4u;
    // NOP
    // 0x151da8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151da8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151dac: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x151dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x151db0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x151db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151db4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x151db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x151db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151dbc: 0x0  nop
    ctx->pc = 0x151dbcu;
    // NOP
    // 0x151dc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151dc4: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x151dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x151dc8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x151dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x151dcc: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x151dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x151dd0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x151DD0u;
    {
        const bool branch_taken_0x151dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x151dd0) {
            ctx->pc = 0x151DE8u;
            goto label_151de8;
        }
    }
    ctx->pc = 0x151DD8u;
    // 0x151dd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x151dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x151DDCu;
    {
        const bool branch_taken_0x151ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151DDCu;
            // 0x151de0: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ddc) {
            ctx->pc = 0x151DF0u;
            goto label_151df0;
        }
    }
    ctx->pc = 0x151DE4u;
    // 0x151de4: 0x0  nop
    ctx->pc = 0x151de4u;
    // NOP
label_151de8:
    // 0x151de8: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x151de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x151dec: 0x0  nop
    ctx->pc = 0x151decu;
    // NOP
label_151df0:
    // 0x151df0: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x151df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151df4: 0x28c1ff10  slti        $at, $a2, -0xF0
    ctx->pc = 0x151df4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x151df8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x151DF8u;
    {
        const bool branch_taken_0x151df8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151DF8u;
            // 0x151dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151df8) {
            ctx->pc = 0x151E10u;
            goto label_151e10;
        }
    }
    ctx->pc = 0x151E00u;
    // 0x151e00: 0xc054a88  jal         func_152A20
    ctx->pc = 0x151E00u;
    SET_GPR_U32(ctx, 31, 0x151E08u);
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E08u; }
        if (ctx->pc != 0x151E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E08u; }
        if (ctx->pc != 0x151E08u) { return; }
    }
    ctx->pc = 0x151E08u;
    // 0x151e08: 0x10000291  b           . + 4 + (0x291 << 2)
    ctx->pc = 0x151E08u;
    {
        const bool branch_taken_0x151e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e08) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151E10u;
label_151e10:
    // 0x151e10: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x151e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x151e14: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x151E14u;
    {
        const bool branch_taken_0x151e14 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x151e14) {
            ctx->pc = 0x151E58u;
            goto label_151e58;
        }
    }
    ctx->pc = 0x151E1Cu;
    // 0x151e1c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x151e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151e20: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x151e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x151e24: 0xc054ecc  jal         func_153B30
    ctx->pc = 0x151E24u;
    SET_GPR_U32(ctx, 31, 0x151E2Cu);
    ctx->pc = 0x151E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E24u;
            // 0x151e28: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153B30u;
    if (runtime->hasFunction(0x153B30u)) {
        auto targetFn = runtime->lookupFunction(0x153B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E2Cu; }
        if (ctx->pc != 0x151E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMissileHit_0x153b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E2Cu; }
        if (ctx->pc != 0x151E2Cu) { return; }
    }
    ctx->pc = 0x151E2Cu;
    // 0x151e2c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x151e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151e30: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x151e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x151e34: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x151e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151e38: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x151e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151e3c: 0xc05d080  jal         func_174200
    ctx->pc = 0x151E3Cu;
    SET_GPR_U32(ctx, 31, 0x151E44u);
    ctx->pc = 0x151E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E3Cu;
            // 0x151e40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E44u; }
        if (ctx->pc != 0x151E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E44u; }
        if (ctx->pc != 0x151E44u) { return; }
    }
    ctx->pc = 0x151E44u;
    // 0x151e44: 0xc054a88  jal         func_152A20
    ctx->pc = 0x151E44u;
    SET_GPR_U32(ctx, 31, 0x151E4Cu);
    ctx->pc = 0x151E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E44u;
            // 0x151e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E4Cu; }
        if (ctx->pc != 0x151E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E4Cu; }
        if (ctx->pc != 0x151E4Cu) { return; }
    }
    ctx->pc = 0x151E4Cu;
    // 0x151e4c: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x151E4Cu;
    {
        const bool branch_taken_0x151e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e4c) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151E54u;
    // 0x151e54: 0x0  nop
    ctx->pc = 0x151e54u;
    // NOP
label_151e58:
    // 0x151e58: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x151e58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151e5c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x151e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x151e60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x151e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151e64: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x151e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x151e68: 0x24c629d0  addiu       $a2, $a2, 0x29D0
    ctx->pc = 0x151e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10704));
    // 0x151e6c: 0xc053c88  jal         func_14F220
    ctx->pc = 0x151E6Cu;
    SET_GPR_U32(ctx, 31, 0x151E74u);
    ctx->pc = 0x151E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151E6Cu;
            // 0x151e70: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E74u; }
        if (ctx->pc != 0x151E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151E74u; }
        if (ctx->pc != 0x151E74u) { return; }
    }
    ctx->pc = 0x151E74u;
    // 0x151e74: 0x10000276  b           . + 4 + (0x276 << 2)
    ctx->pc = 0x151E74u;
    {
        const bool branch_taken_0x151e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e74) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151E7Cu;
    // 0x151e7c: 0x0  nop
    ctx->pc = 0x151e7cu;
    // NOP
label_151e80:
    // 0x151e80: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x151e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151e84: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x151e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x151e88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x151e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151e8c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x151e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x151e90: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x151e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151e94: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x151e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x151e98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x151e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151e9c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x151e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x151ea0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x151ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151ea4: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x151ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x151ea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151eac: 0x0  nop
    ctx->pc = 0x151eacu;
    // NOP
    // 0x151eb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151eb4: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x151eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x151eb8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x151eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151ebc: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x151ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x151ec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ec4: 0x0  nop
    ctx->pc = 0x151ec4u;
    // NOP
    // 0x151ec8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151ec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151ecc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x151eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x151ed0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x151ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x151ed4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x151ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x151ed8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151edc: 0x0  nop
    ctx->pc = 0x151edcu;
    // NOP
    // 0x151ee0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151ee4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x151ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x151ee8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x151ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151eec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x151eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x151ef0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151ef0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ef4: 0x0  nop
    ctx->pc = 0x151ef4u;
    // NOP
    // 0x151ef8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151efc: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x151efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x151f00: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x151f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x151f04: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x151f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x151f08: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x151F08u;
    {
        const bool branch_taken_0x151f08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f08) {
            ctx->pc = 0x151FA0u;
            goto label_151fa0;
        }
    }
    ctx->pc = 0x151F10u;
    // 0x151f10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151f14: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x151f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x151f18: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x151f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x151f1c: 0x2861ff10  slti        $at, $v1, -0xF0
    ctx->pc = 0x151f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x151f20: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x151F20u;
    {
        const bool branch_taken_0x151f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F20u;
            // 0x151f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f20) {
            ctx->pc = 0x151F38u;
            goto label_151f38;
        }
    }
    ctx->pc = 0x151F28u;
    // 0x151f28: 0xc054a88  jal         func_152A20
    ctx->pc = 0x151F28u;
    SET_GPR_U32(ctx, 31, 0x151F30u);
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F30u; }
        if (ctx->pc != 0x151F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F30u; }
        if (ctx->pc != 0x151F30u) { return; }
    }
    ctx->pc = 0x151F30u;
    // 0x151f30: 0x10000247  b           . + 4 + (0x247 << 2)
    ctx->pc = 0x151F30u;
    {
        const bool branch_taken_0x151f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f30) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151F38u;
label_151f38:
    // 0x151f38: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x151f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x151f3c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151F3Cu;
    {
        const bool branch_taken_0x151f3c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x151F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F3Cu;
            // 0x151f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f3c) {
            ctx->pc = 0x151F58u;
            goto label_151f58;
        }
    }
    ctx->pc = 0x151F44u;
    // 0x151f44: 0xc054a88  jal         func_152A20
    ctx->pc = 0x151F44u;
    SET_GPR_U32(ctx, 31, 0x151F4Cu);
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F4Cu; }
        if (ctx->pc != 0x151F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F4Cu; }
        if (ctx->pc != 0x151F4Cu) { return; }
    }
    ctx->pc = 0x151F4Cu;
    // 0x151f4c: 0x10000240  b           . + 4 + (0x240 << 2)
    ctx->pc = 0x151F4Cu;
    {
        const bool branch_taken_0x151f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f4c) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151F54u;
    // 0x151f54: 0x0  nop
    ctx->pc = 0x151f54u;
    // NOP
label_151f58:
    // 0x151f58: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x151f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x151f5c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151F5Cu;
    {
        const bool branch_taken_0x151f5c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x151F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F5Cu;
            // 0x151f60: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f5c) {
            ctx->pc = 0x151F70u;
            goto label_151f70;
        }
    }
    ctx->pc = 0x151F64u;
    // 0x151f64: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x151F64u;
    {
        const bool branch_taken_0x151f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f64) {
            ctx->pc = 0x151F70u;
            goto label_151f70;
        }
    }
    ctx->pc = 0x151F6Cu;
    // 0x151f6c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x151f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_151f70:
    // 0x151f70: 0x14600237  bnez        $v1, . + 4 + (0x237 << 2)
    ctx->pc = 0x151F70u;
    {
        const bool branch_taken_0x151f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f70) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151F78u;
    // 0x151f78: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x151f78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151f7c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x151f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x151f80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x151f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151f84: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x151f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x151f88: 0x24c629d0  addiu       $a2, $a2, 0x29D0
    ctx->pc = 0x151f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10704));
    // 0x151f8c: 0xc053c88  jal         func_14F220
    ctx->pc = 0x151F8Cu;
    SET_GPR_U32(ctx, 31, 0x151F94u);
    ctx->pc = 0x151F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151F8Cu;
            // 0x151f90: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F94u; }
        if (ctx->pc != 0x151F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151F94u; }
        if (ctx->pc != 0x151F94u) { return; }
    }
    ctx->pc = 0x151F94u;
    // 0x151f94: 0x1000022e  b           . + 4 + (0x22E << 2)
    ctx->pc = 0x151F94u;
    {
        const bool branch_taken_0x151f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f94) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151F9Cu;
    // 0x151f9c: 0x0  nop
    ctx->pc = 0x151f9cu;
    // NOP
label_151fa0:
    // 0x151fa0: 0xc054a88  jal         func_152A20
    ctx->pc = 0x151FA0u;
    SET_GPR_U32(ctx, 31, 0x151FA8u);
    ctx->pc = 0x151FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151FA0u;
            // 0x151fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151FA8u; }
        if (ctx->pc != 0x151FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151FA8u; }
        if (ctx->pc != 0x151FA8u) { return; }
    }
    ctx->pc = 0x151FA8u;
    // 0x151fa8: 0x10000229  b           . + 4 + (0x229 << 2)
    ctx->pc = 0x151FA8u;
    {
        const bool branch_taken_0x151fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151fa8) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x151FB0u;
label_151fb0:
    // 0x151fb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x151fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151fb4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x151fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x151fb8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x151fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151fbc: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x151fbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26215u)));
    // 0x151fc0: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x151fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151fc4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x151fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151fc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x151fc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x151fcc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151fd0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x151fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x151fd4: 0x0  nop
    ctx->pc = 0x151fd4u;
    // NOP
    // 0x151fd8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x151fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x151fdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x151fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151fe0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x151fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x151fe4: 0x8c84009c  lw          $a0, 0x9C($a0)
    ctx->pc = 0x151fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x151fe8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x151fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151fec: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x151fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x151ff0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x151ff4: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x151ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x151ff8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x151ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x151ffc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x151ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x152000: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x152000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x152004: 0x2484fffd  addiu       $a0, $a0, -0x3
    ctx->pc = 0x152004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x152008: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x152008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15200c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15200cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152010: 0x0  nop
    ctx->pc = 0x152010u;
    // NOP
    // 0x152014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152018: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x152018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x15201c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152020: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x152020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x152024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152028: 0x0  nop
    ctx->pc = 0x152028u;
    // NOP
    // 0x15202c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15202cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152030: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x152030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x152034: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x152034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x152038: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x152038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15203c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x15203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x152040: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x152040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x152044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152048: 0x0  nop
    ctx->pc = 0x152048u;
    // NOP
    // 0x15204c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15204cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152050: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x152050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x152054: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x152054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152058: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x152058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x15205c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15205cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152060: 0x0  nop
    ctx->pc = 0x152060u;
    // NOP
    // 0x152064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152068: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x152068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x15206c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x15206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x152070: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x152074: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x152074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x152078: 0x0  nop
    ctx->pc = 0x152078u;
    // NOP
    // 0x15207c: 0x0  nop
    ctx->pc = 0x15207cu;
    // NOP
    // 0x152080: 0x1010  mfhi        $v0
    ctx->pc = 0x152080u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x152084: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x152084u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x152088: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x152088u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x15208c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152090: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x152090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x152094: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x152094u;
    {
        const bool branch_taken_0x152094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152094u;
            // 0x152098: 0x24820002  addiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152094) {
            ctx->pc = 0x1520A0u;
            goto label_1520a0;
        }
    }
    ctx->pc = 0x15209Cu;
    // 0x15209c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x15209cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1520a0:
    // 0x1520a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1520a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1520a4: 0x2841ff10  slti        $at, $v0, -0xF0
    ctx->pc = 0x1520a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x1520a8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1520A8u;
    {
        const bool branch_taken_0x1520a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1520ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1520A8u;
            // 0x1520ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520a8) {
            ctx->pc = 0x1520C0u;
            goto label_1520c0;
        }
    }
    ctx->pc = 0x1520B0u;
    // 0x1520b0: 0xc054a88  jal         func_152A20
    ctx->pc = 0x1520B0u;
    SET_GPR_U32(ctx, 31, 0x1520B8u);
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520B8u; }
        if (ctx->pc != 0x1520B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520B8u; }
        if (ctx->pc != 0x1520B8u) { return; }
    }
    ctx->pc = 0x1520B8u;
    // 0x1520b8: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x1520B8u;
    {
        const bool branch_taken_0x1520b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1520b8) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x1520C0u;
label_1520c0:
    // 0x1520c0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1520c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1520c4: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1520C4u;
    {
        const bool branch_taken_0x1520c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1520C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1520C4u;
            // 0x1520c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520c4) {
            ctx->pc = 0x152110u;
            goto label_152110;
        }
    }
    ctx->pc = 0x1520CCu;
    // 0x1520cc: 0xc054a9c  jal         func_152A70
    ctx->pc = 0x1520CCu;
    SET_GPR_U32(ctx, 31, 0x1520D4u);
    ctx->pc = 0x1520D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1520CCu;
            // 0x1520d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A70u;
    if (runtime->hasFunction(0x152A70u)) {
        auto targetFn = runtime->lookupFunction(0x152A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520D4u; }
        if (ctx->pc != 0x1520D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Particle_0x152a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520D4u; }
        if (ctx->pc != 0x1520D4u) { return; }
    }
    ctx->pc = 0x1520D4u;
    // 0x1520d4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1520d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1520d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1520D8u;
    {
        const bool branch_taken_0x1520d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1520DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1520D8u;
            // 0x1520dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520d8) {
            ctx->pc = 0x152100u;
            goto label_152100;
        }
    }
    ctx->pc = 0x1520E0u;
    // 0x1520e0: 0xc054a9c  jal         func_152A70
    ctx->pc = 0x1520E0u;
    SET_GPR_U32(ctx, 31, 0x1520E8u);
    ctx->pc = 0x1520E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1520E0u;
            // 0x1520e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A70u;
    if (runtime->hasFunction(0x152A70u)) {
        auto targetFn = runtime->lookupFunction(0x152A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520E8u; }
        if (ctx->pc != 0x1520E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Particle_0x152a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1520E8u; }
        if (ctx->pc != 0x1520E8u) { return; }
    }
    ctx->pc = 0x1520E8u;
    // 0x1520e8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1520e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1520ec: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1520ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1520f0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1520f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1520f4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1520f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1520f8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1520F8u;
    SET_GPR_U32(ctx, 31, 0x152100u);
    ctx->pc = 0x1520FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1520F8u;
            // 0x1520fc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152100u; }
        if (ctx->pc != 0x152100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152100u; }
        if (ctx->pc != 0x152100u) { return; }
    }
    ctx->pc = 0x152100u;
label_152100:
    // 0x152100: 0xc054a88  jal         func_152A20
    ctx->pc = 0x152100u;
    SET_GPR_U32(ctx, 31, 0x152108u);
    ctx->pc = 0x152104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152100u;
            // 0x152104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152108u; }
        if (ctx->pc != 0x152108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152108u; }
        if (ctx->pc != 0x152108u) { return; }
    }
    ctx->pc = 0x152108u;
    // 0x152108: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x152108u;
    {
        const bool branch_taken_0x152108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152108) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x152110u;
label_152110:
    // 0x152110: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x152110u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152114: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x152114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x152118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x152118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15211c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x15211cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x152120: 0x24c62970  addiu       $a2, $a2, 0x2970
    ctx->pc = 0x152120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10608));
    // 0x152124: 0xc053c88  jal         func_14F220
    ctx->pc = 0x152124u;
    SET_GPR_U32(ctx, 31, 0x15212Cu);
    ctx->pc = 0x152128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152124u;
            // 0x152128: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15212Cu; }
        if (ctx->pc != 0x15212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15212Cu; }
        if (ctx->pc != 0x15212Cu) { return; }
    }
    ctx->pc = 0x15212Cu;
    // 0x15212c: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x15212Cu;
    {
        const bool branch_taken_0x15212c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15212c) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x152134u;
    // 0x152134: 0x0  nop
    ctx->pc = 0x152134u;
    // NOP
label_152138:
    // 0x152138: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x152138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15213c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x152140: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x152140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152144: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x152144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x152148: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x152148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15214c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x152150: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x152150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152154: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x152154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x152158: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x152158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15215c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x15215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x152160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152164: 0x0  nop
    ctx->pc = 0x152164u;
    // NOP
    // 0x152168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15216c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x15216cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x152170: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x152170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152174: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x152174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x152178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15217c: 0x0  nop
    ctx->pc = 0x15217cu;
    // NOP
    // 0x152180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152184: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x152184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x152188: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x152188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15218c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x15218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x152190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152194: 0x0  nop
    ctx->pc = 0x152194u;
    // NOP
    // 0x152198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15219c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x15219cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1521a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1521a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1521a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1521a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1521a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1521a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1521ac: 0x0  nop
    ctx->pc = 0x1521acu;
    // NOP
    // 0x1521b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1521b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1521b4: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x1521b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1521b8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1521b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1521bc: 0x28a1ff10  slti        $at, $a1, -0xF0
    ctx->pc = 0x1521bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x1521c0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1521C0u;
    {
        const bool branch_taken_0x1521c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521C0u;
            // 0x1521c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521c0) {
            ctx->pc = 0x1521D8u;
            goto label_1521d8;
        }
    }
    ctx->pc = 0x1521C8u;
    // 0x1521c8: 0xc054a88  jal         func_152A20
    ctx->pc = 0x1521C8u;
    SET_GPR_U32(ctx, 31, 0x1521D0u);
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521D0u; }
        if (ctx->pc != 0x1521D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521D0u; }
        if (ctx->pc != 0x1521D0u) { return; }
    }
    ctx->pc = 0x1521D0u;
    // 0x1521d0: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x1521D0u;
    {
        const bool branch_taken_0x1521d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1521d0) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x1521D8u;
label_1521d8:
    // 0x1521d8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1521d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1521dc: 0x1c40001a  bgtz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1521DCu;
    {
        const bool branch_taken_0x1521dc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1521dc) {
            ctx->pc = 0x152248u;
            goto label_152248;
        }
    }
    ctx->pc = 0x1521E4u;
    // 0x1521e4: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1521e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1521e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1521e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1521ec: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1521ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1521f0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1521f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1521f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1521f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1521f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1521f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1521fc: 0x46011303  div.s       $f12, $f2, $f1
    ctx->pc = 0x1521fcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[1];
    // 0x152200: 0x0  nop
    ctx->pc = 0x152200u;
    // NOP
    // 0x152204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152208: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x152208u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x15220c: 0x0  nop
    ctx->pc = 0x15220cu;
    // NOP
    // 0x152210: 0x0  nop
    ctx->pc = 0x152210u;
    // NOP
    // 0x152214: 0xc05bb28  jal         func_16ECA0
    ctx->pc = 0x152214u;
    SET_GPR_U32(ctx, 31, 0x15221Cu);
    ctx->pc = 0x16ECA0u;
    if (runtime->hasFunction(0x16ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x16ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15221Cu; }
        if (ctx->pc != 0x15221Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateParticle_0x16eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15221Cu; }
        if (ctx->pc != 0x15221Cu) { return; }
    }
    ctx->pc = 0x15221Cu;
    // 0x15221c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x15221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152220: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x152220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x152224: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x152224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152228: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x152228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15222c: 0xc05d080  jal         func_174200
    ctx->pc = 0x15222Cu;
    SET_GPR_U32(ctx, 31, 0x152234u);
    ctx->pc = 0x152230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15222Cu;
            // 0x152230: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152234u; }
        if (ctx->pc != 0x152234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152234u; }
        if (ctx->pc != 0x152234u) { return; }
    }
    ctx->pc = 0x152234u;
    // 0x152234: 0xc054a88  jal         func_152A20
    ctx->pc = 0x152234u;
    SET_GPR_U32(ctx, 31, 0x15223Cu);
    ctx->pc = 0x152238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152234u;
            // 0x152238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15223Cu; }
        if (ctx->pc != 0x15223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15223Cu; }
        if (ctx->pc != 0x15223Cu) { return; }
    }
    ctx->pc = 0x15223Cu;
    // 0x15223c: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x15223Cu;
    {
        const bool branch_taken_0x15223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15223c) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x152244u;
    // 0x152244: 0x0  nop
    ctx->pc = 0x152244u;
    // NOP
label_152248:
    // 0x152248: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x152248u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15224c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x15224cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x152250: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x152250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152254: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x152254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x152258: 0x24c629d0  addiu       $a2, $a2, 0x29D0
    ctx->pc = 0x152258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10704));
    // 0x15225c: 0xc053c88  jal         func_14F220
    ctx->pc = 0x15225Cu;
    SET_GPR_U32(ctx, 31, 0x152264u);
    ctx->pc = 0x152260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15225Cu;
            // 0x152260: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152264u; }
        if (ctx->pc != 0x152264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152264u; }
        if (ctx->pc != 0x152264u) { return; }
    }
    ctx->pc = 0x152264u;
    // 0x152264: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x152264u;
    {
        const bool branch_taken_0x152264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152264) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x15226Cu;
    // 0x15226c: 0x0  nop
    ctx->pc = 0x15226cu;
    // NOP
label_152270:
    // 0x152270: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x152270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x152274: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x152274u;
    {
        const bool branch_taken_0x152274 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152274u;
            // 0x152278: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152274) {
            ctx->pc = 0x152288u;
            goto label_152288;
        }
    }
    ctx->pc = 0x15227Cu;
    // 0x15227c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15227Cu;
    {
        const bool branch_taken_0x15227c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15227c) {
            ctx->pc = 0x152288u;
            goto label_152288;
        }
    }
    ctx->pc = 0x152284u;
    // 0x152284: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x152284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_152288:
    // 0x152288: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x152288u;
    {
        const bool branch_taken_0x152288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152288) {
            ctx->pc = 0x1522D8u;
            goto label_1522d8;
        }
    }
    ctx->pc = 0x152290u;
    // 0x152290: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x152290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x152294: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152294u;
    {
        const bool branch_taken_0x152294 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x152294) {
            ctx->pc = 0x1522A8u;
            goto label_1522a8;
        }
    }
    ctx->pc = 0x15229Cu;
    // 0x15229c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1522a0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1522a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1522a4: 0x0  nop
    ctx->pc = 0x1522a4u;
    // NOP
label_1522a8:
    // 0x1522a8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1522a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1522ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1522ACu;
    {
        const bool branch_taken_0x1522ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1522ac) {
            ctx->pc = 0x1522C0u;
            goto label_1522c0;
        }
    }
    ctx->pc = 0x1522B4u;
    // 0x1522b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1522b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1522b8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1522b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1522bc: 0x0  nop
    ctx->pc = 0x1522bcu;
    // NOP
label_1522c0:
    // 0x1522c0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1522c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1522c4: 0x2841fff1  slti        $at, $v0, -0xF
    ctx->pc = 0x1522c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967281) ? 1 : 0);
    // 0x1522c8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1522C8u;
    {
        const bool branch_taken_0x1522c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1522c8) {
            ctx->pc = 0x1522D8u;
            goto label_1522d8;
        }
    }
    ctx->pc = 0x1522D0u;
    // 0x1522d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1522d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1522d4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1522d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1522d8:
    // 0x1522d8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1522d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1522dc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1522dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1522e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1522e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1522e4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1522e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1522e8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1522e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1522ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1522ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1522f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1522f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1522f4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1522f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1522f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1522f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1522fc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1522fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x152300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152304: 0x0  nop
    ctx->pc = 0x152304u;
    // NOP
    // 0x152308: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15230c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x15230cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x152310: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x152310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152314: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x152314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x152318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15231c: 0x0  nop
    ctx->pc = 0x15231cu;
    // NOP
    // 0x152320: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152324: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x152324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x152328: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x152328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15232c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x152330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152334: 0x0  nop
    ctx->pc = 0x152334u;
    // NOP
    // 0x152338: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15233c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x15233cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x152340: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x152340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152344: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x152344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x152348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15234c: 0x0  nop
    ctx->pc = 0x15234cu;
    // NOP
    // 0x152350: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152354: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x152354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x152358: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x152358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x15235c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x15235cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x152360: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x152360u;
    {
        const bool branch_taken_0x152360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152360) {
            ctx->pc = 0x152378u;
            goto label_152378;
        }
    }
    ctx->pc = 0x152368u;
    // 0x152368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15236c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15236Cu;
    {
        const bool branch_taken_0x15236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15236Cu;
            // 0x152370: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15236c) {
            ctx->pc = 0x152380u;
            goto label_152380;
        }
    }
    ctx->pc = 0x152374u;
    // 0x152374: 0x0  nop
    ctx->pc = 0x152374u;
    // NOP
label_152378:
    // 0x152378: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x152378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x15237c: 0x0  nop
    ctx->pc = 0x15237cu;
    // NOP
label_152380:
    // 0x152380: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x152380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152384: 0x28c1ff10  slti        $at, $a2, -0xF0
    ctx->pc = 0x152384u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x152388: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x152388u;
    {
        const bool branch_taken_0x152388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15238Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152388u;
            // 0x15238c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152388) {
            ctx->pc = 0x1523A0u;
            goto label_1523a0;
        }
    }
    ctx->pc = 0x152390u;
    // 0x152390: 0xc054a88  jal         func_152A20
    ctx->pc = 0x152390u;
    SET_GPR_U32(ctx, 31, 0x152398u);
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152398u; }
        if (ctx->pc != 0x152398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152398u; }
        if (ctx->pc != 0x152398u) { return; }
    }
    ctx->pc = 0x152398u;
    // 0x152398: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x152398u;
    {
        const bool branch_taken_0x152398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152398) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x1523A0u;
label_1523a0:
    // 0x1523a0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1523a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1523a4: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1523A4u;
    {
        const bool branch_taken_0x1523a4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1523a4) {
            ctx->pc = 0x1523E8u;
            goto label_1523e8;
        }
    }
    ctx->pc = 0x1523ACu;
    // 0x1523ac: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1523acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1523b0: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x1523b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1523b4: 0xc054ecc  jal         func_153B30
    ctx->pc = 0x1523B4u;
    SET_GPR_U32(ctx, 31, 0x1523BCu);
    ctx->pc = 0x1523B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1523B4u;
            // 0x1523b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153B30u;
    if (runtime->hasFunction(0x153B30u)) {
        auto targetFn = runtime->lookupFunction(0x153B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1523BCu; }
        if (ctx->pc != 0x1523BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMissileHit_0x153b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1523BCu; }
        if (ctx->pc != 0x1523BCu) { return; }
    }
    ctx->pc = 0x1523BCu;
    // 0x1523bc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1523bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1523c0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1523c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1523c4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1523c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1523c8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1523c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1523cc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1523CCu;
    SET_GPR_U32(ctx, 31, 0x1523D4u);
    ctx->pc = 0x1523D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1523CCu;
            // 0x1523d0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1523D4u; }
        if (ctx->pc != 0x1523D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1523D4u; }
        if (ctx->pc != 0x1523D4u) { return; }
    }
    ctx->pc = 0x1523D4u;
    // 0x1523d4: 0xc054a88  jal         func_152A20
    ctx->pc = 0x1523D4u;
    SET_GPR_U32(ctx, 31, 0x1523DCu);
    ctx->pc = 0x1523D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1523D4u;
            // 0x1523d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1523DCu; }
        if (ctx->pc != 0x1523DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1523DCu; }
        if (ctx->pc != 0x1523DCu) { return; }
    }
    ctx->pc = 0x1523DCu;
    // 0x1523dc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x1523DCu;
    {
        const bool branch_taken_0x1523dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1523dc) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x1523E4u;
    // 0x1523e4: 0x0  nop
    ctx->pc = 0x1523e4u;
    // NOP
label_1523e8:
    // 0x1523e8: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1523e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1523ec: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x1523ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x1523f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1523f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1523f4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1523f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1523f8: 0x24c629d0  addiu       $a2, $a2, 0x29D0
    ctx->pc = 0x1523f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10704));
    // 0x1523fc: 0xc053c88  jal         func_14F220
    ctx->pc = 0x1523FCu;
    SET_GPR_U32(ctx, 31, 0x152404u);
    ctx->pc = 0x152400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1523FCu;
            // 0x152400: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152404u; }
        if (ctx->pc != 0x152404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152404u; }
        if (ctx->pc != 0x152404u) { return; }
    }
    ctx->pc = 0x152404u;
    // 0x152404: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x152404u;
    {
        const bool branch_taken_0x152404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152404) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x15240Cu;
    // 0x15240c: 0x0  nop
    ctx->pc = 0x15240cu;
    // NOP
label_152410:
    // 0x152410: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x152410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x152414: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x152414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x152418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15241c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15241cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152420: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x152420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152424: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x152424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x152428: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x152428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15242c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x15242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x152430: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x152430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152434: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x152434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x152438: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x152438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15243c: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x15243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x152440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152444: 0x0  nop
    ctx->pc = 0x152444u;
    // NOP
    // 0x152448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15244c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x15244cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x152450: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x152450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152454: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x152454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x152458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15245c: 0x0  nop
    ctx->pc = 0x15245cu;
    // NOP
    // 0x152460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152464: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x152464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x152468: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x152468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15246c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x15246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x152470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152474: 0x0  nop
    ctx->pc = 0x152474u;
    // NOP
    // 0x152478: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15247c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x15247cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x152480: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x152480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152484: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x152484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x152488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15248c: 0x0  nop
    ctx->pc = 0x15248cu;
    // NOP
    // 0x152490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152494: 0xc054a9c  jal         func_152A70
    ctx->pc = 0x152494u;
    SET_GPR_U32(ctx, 31, 0x15249Cu);
    ctx->pc = 0x152498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152494u;
            // 0x152498: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A70u;
    if (runtime->hasFunction(0x152A70u)) {
        auto targetFn = runtime->lookupFunction(0x152A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15249Cu; }
        if (ctx->pc != 0x15249Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Particle_0x152a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15249Cu; }
        if (ctx->pc != 0x15249Cu) { return; }
    }
    ctx->pc = 0x15249Cu;
    // 0x15249c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15249cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524a0: 0xc054a9c  jal         func_152A70
    ctx->pc = 0x1524A0u;
    SET_GPR_U32(ctx, 31, 0x1524A8u);
    ctx->pc = 0x1524A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1524A0u;
            // 0x1524a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A70u;
    if (runtime->hasFunction(0x152A70u)) {
        auto targetFn = runtime->lookupFunction(0x152A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1524A8u; }
        if (ctx->pc != 0x1524A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Particle_0x152a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1524A8u; }
        if (ctx->pc != 0x1524A8u) { return; }
    }
    ctx->pc = 0x1524A8u;
    // 0x1524a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1524a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1524ac: 0x2841ff10  slti        $at, $v0, -0xF0
    ctx->pc = 0x1524acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x1524b0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1524B0u;
    {
        const bool branch_taken_0x1524b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1524B0u;
            // 0x1524b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524b0) {
            ctx->pc = 0x1524C8u;
            goto label_1524c8;
        }
    }
    ctx->pc = 0x1524B8u;
    // 0x1524b8: 0xc054a88  jal         func_152A20
    ctx->pc = 0x1524B8u;
    SET_GPR_U32(ctx, 31, 0x1524C0u);
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1524C0u; }
        if (ctx->pc != 0x1524C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1524C0u; }
        if (ctx->pc != 0x1524C0u) { return; }
    }
    ctx->pc = 0x1524C0u;
    // 0x1524c0: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x1524C0u;
    {
        const bool branch_taken_0x1524c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1524c0) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x1524C8u;
label_1524c8:
    // 0x1524c8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1524c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1524cc: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1524CCu;
    {
        const bool branch_taken_0x1524cc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1524D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1524CCu;
            // 0x1524d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524cc) {
            ctx->pc = 0x152520u;
            goto label_152520;
        }
    }
    ctx->pc = 0x1524D4u;
    // 0x1524d4: 0x0  nop
    ctx->pc = 0x1524d4u;
    // NOP
label_1524d8:
    // 0x1524d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1524d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524dc: 0xc054a9c  jal         func_152A70
    ctx->pc = 0x1524DCu;
    SET_GPR_U32(ctx, 31, 0x1524E4u);
    ctx->pc = 0x1524E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1524DCu;
            // 0x1524e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A70u;
    if (runtime->hasFunction(0x152A70u)) {
        auto targetFn = runtime->lookupFunction(0x152A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1524E4u; }
        if (ctx->pc != 0x1524E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Particle_0x152a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1524E4u; }
        if (ctx->pc != 0x1524E4u) { return; }
    }
    ctx->pc = 0x1524E4u;
    // 0x1524e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1524e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1524e8: 0x2a420064  slti        $v0, $s2, 0x64
    ctx->pc = 0x1524e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1524ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1524ECu;
    {
        const bool branch_taken_0x1524ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1524ec) {
            ctx->pc = 0x1524D8u;
            goto label_1524d8;
        }
    }
    ctx->pc = 0x1524F4u;
    // 0x1524f4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1524f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1524f8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1524f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1524fc: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1524fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152500: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x152500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x152504: 0xc05d080  jal         func_174200
    ctx->pc = 0x152504u;
    SET_GPR_U32(ctx, 31, 0x15250Cu);
    ctx->pc = 0x152508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152504u;
            // 0x152508: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15250Cu; }
        if (ctx->pc != 0x15250Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15250Cu; }
        if (ctx->pc != 0x15250Cu) { return; }
    }
    ctx->pc = 0x15250Cu;
    // 0x15250c: 0xc054a88  jal         func_152A20
    ctx->pc = 0x15250Cu;
    SET_GPR_U32(ctx, 31, 0x152514u);
    ctx->pc = 0x152510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15250Cu;
            // 0x152510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152514u; }
        if (ctx->pc != 0x152514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152514u; }
        if (ctx->pc != 0x152514u) { return; }
    }
    ctx->pc = 0x152514u;
    // 0x152514: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x152514u;
    {
        const bool branch_taken_0x152514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152514) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x15251Cu;
    // 0x15251c: 0x0  nop
    ctx->pc = 0x15251cu;
    // NOP
label_152520:
    // 0x152520: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x152520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152524: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x152524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x152528: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x152528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15252c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x15252cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x152530: 0x24c62870  addiu       $a2, $a2, 0x2870
    ctx->pc = 0x152530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10352));
    // 0x152534: 0xc053c88  jal         func_14F220
    ctx->pc = 0x152534u;
    SET_GPR_U32(ctx, 31, 0x15253Cu);
    ctx->pc = 0x152538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152534u;
            // 0x152538: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15253Cu; }
        if (ctx->pc != 0x15253Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15253Cu; }
        if (ctx->pc != 0x15253Cu) { return; }
    }
    ctx->pc = 0x15253Cu;
    // 0x15253c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x15253Cu;
    {
        const bool branch_taken_0x15253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15253c) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x152544u;
    // 0x152544: 0x0  nop
    ctx->pc = 0x152544u;
    // NOP
label_152548:
    // 0x152548: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x152548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15254c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x15254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x152550: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x152550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x152554: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x152554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x152558: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x152558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15255c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x15255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x152560: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x152560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x152564: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x152564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x152568: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x152568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15256c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x15256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x152570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152574: 0x0  nop
    ctx->pc = 0x152574u;
    // NOP
    // 0x152578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15257c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x15257cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x152580: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x152580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152584: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x152584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x152588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15258c: 0x0  nop
    ctx->pc = 0x15258cu;
    // NOP
    // 0x152590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152594: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x152594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x152598: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x152598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15259c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x15259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1525a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1525a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1525a4: 0x0  nop
    ctx->pc = 0x1525a4u;
    // NOP
    // 0x1525a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1525a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1525ac: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x1525acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1525b0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1525b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1525b4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1525b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1525b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1525b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1525bc: 0x0  nop
    ctx->pc = 0x1525bcu;
    // NOP
    // 0x1525c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1525c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1525c4: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x1525c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1525c8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1525c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1525cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1525ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1525d0: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x1525d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x1525d4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1525d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1525d8: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1525D8u;
    {
        const bool branch_taken_0x1525d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1525DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525D8u;
            // 0x1525dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525d8) {
            ctx->pc = 0x1525F0u;
            goto label_1525f0;
        }
    }
    ctx->pc = 0x1525E0u;
    // 0x1525e0: 0xc054a88  jal         func_152A20
    ctx->pc = 0x1525E0u;
    SET_GPR_U32(ctx, 31, 0x1525E8u);
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1525E8u; }
        if (ctx->pc != 0x1525E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1525E8u; }
        if (ctx->pc != 0x1525E8u) { return; }
    }
    ctx->pc = 0x1525E8u;
    // 0x1525e8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1525E8u;
    {
        const bool branch_taken_0x1525e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525e8) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x1525F0u;
label_1525f0:
    // 0x1525f0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1525f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1525f4: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1525F4u;
    {
        const bool branch_taken_0x1525f4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1525F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525F4u;
            // 0x1525f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525f4) {
            ctx->pc = 0x152610u;
            goto label_152610;
        }
    }
    ctx->pc = 0x1525FCu;
    // 0x1525fc: 0xc054a88  jal         func_152A20
    ctx->pc = 0x1525FCu;
    SET_GPR_U32(ctx, 31, 0x152604u);
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152604u; }
        if (ctx->pc != 0x152604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152604u; }
        if (ctx->pc != 0x152604u) { return; }
    }
    ctx->pc = 0x152604u;
    // 0x152604: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x152604u;
    {
        const bool branch_taken_0x152604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152604) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x15260Cu;
    // 0x15260c: 0x0  nop
    ctx->pc = 0x15260cu;
    // NOP
label_152610:
    // 0x152610: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x152610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x152614: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x152614u;
    {
        const bool branch_taken_0x152614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152614) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x15261Cu;
    // 0x15261c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x15261cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152620: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x152620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x152624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x152624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152628: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x152628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x15262c: 0x24c629d0  addiu       $a2, $a2, 0x29D0
    ctx->pc = 0x15262cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10704));
    // 0x152630: 0xc053c88  jal         func_14F220
    ctx->pc = 0x152630u;
    SET_GPR_U32(ctx, 31, 0x152638u);
    ctx->pc = 0x152634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152630u;
            // 0x152634: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152638u; }
        if (ctx->pc != 0x152638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152638u; }
        if (ctx->pc != 0x152638u) { return; }
    }
    ctx->pc = 0x152638u;
    // 0x152638: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x152638u;
    {
        const bool branch_taken_0x152638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152638) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x152640u;
label_152640:
    // 0x152640: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x152640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x152644: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x152644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x152648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15264c: 0x0  nop
    ctx->pc = 0x15264cu;
    // NOP
    // 0x152650: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152654: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x152654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x152658: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x152658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15265c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x15265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x152660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152664: 0x0  nop
    ctx->pc = 0x152664u;
    // NOP
    // 0x152668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15266c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x15266cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x152670: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x152670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x152674: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x152674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x152678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15267c: 0x0  nop
    ctx->pc = 0x15267cu;
    // NOP
    // 0x152680: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152684: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x152684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x152688: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x152688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x15268c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x15268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x152690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152694: 0x0  nop
    ctx->pc = 0x152694u;
    // NOP
    // 0x152698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15269c: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x15269cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1526a0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1526a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1526a4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1526a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1526a8: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1526A8u;
    {
        const bool branch_taken_0x1526a8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1526ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1526A8u;
            // 0x1526ac: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526a8) {
            ctx->pc = 0x1526C0u;
            goto label_1526c0;
        }
    }
    ctx->pc = 0x1526B0u;
    // 0x1526b0: 0xc054a88  jal         func_152A20
    ctx->pc = 0x1526B0u;
    SET_GPR_U32(ctx, 31, 0x1526B8u);
    ctx->pc = 0x1526B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1526B0u;
            // 0x1526b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1526B8u; }
        if (ctx->pc != 0x1526B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1526B8u; }
        if (ctx->pc != 0x1526B8u) { return; }
    }
    ctx->pc = 0x1526B8u;
    // 0x1526b8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1526B8u;
    {
        const bool branch_taken_0x1526b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1526b8) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x1526C0u;
label_1526c0:
    // 0x1526c0: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1526c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1526c4: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x1526c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x1526c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1526c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1526cc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1526ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1526d0: 0x24c629d0  addiu       $a2, $a2, 0x29D0
    ctx->pc = 0x1526d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10704));
    // 0x1526d4: 0xc053c88  jal         func_14F220
    ctx->pc = 0x1526D4u;
    SET_GPR_U32(ctx, 31, 0x1526DCu);
    ctx->pc = 0x1526D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1526D4u;
            // 0x1526d8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1526DCu; }
        if (ctx->pc != 0x1526DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1526DCu; }
        if (ctx->pc != 0x1526DCu) { return; }
    }
    ctx->pc = 0x1526DCu;
    // 0x1526dc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1526DCu;
    {
        const bool branch_taken_0x1526dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1526dc) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x1526E4u;
    // 0x1526e4: 0x0  nop
    ctx->pc = 0x1526e4u;
    // NOP
label_1526e8:
    // 0x1526e8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1526e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1526ec: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1526ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1526f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1526f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1526f4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1526f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1526f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1526f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526fc: 0x0  nop
    ctx->pc = 0x1526fcu;
    // NOP
    // 0x152700: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152704: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x152704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x152708: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x152708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15270c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152710: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x152710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x152714: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x152714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152718: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x152718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x15271c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15271cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152720: 0x0  nop
    ctx->pc = 0x152720u;
    // NOP
    // 0x152724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152728: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x152728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x15272c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x15272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x152730: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x152730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x152734: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x152734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152738: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x152738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15273c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15273cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152740: 0x0  nop
    ctx->pc = 0x152740u;
    // NOP
    // 0x152744: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152748: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x152748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x15274c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x15274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x152750: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x152750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x152754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152758: 0x0  nop
    ctx->pc = 0x152758u;
    // NOP
    // 0x15275c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15275cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152760: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x152760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x152764: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x152764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x152768: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x152768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15276c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15276Cu;
    {
        const bool branch_taken_0x15276c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x152770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15276Cu;
            // 0x152770: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15276c) {
            ctx->pc = 0x152788u;
            goto label_152788;
        }
    }
    ctx->pc = 0x152774u;
    // 0x152774: 0xc054a88  jal         func_152A20
    ctx->pc = 0x152774u;
    SET_GPR_U32(ctx, 31, 0x15277Cu);
    ctx->pc = 0x152778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152774u;
            // 0x152778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15277Cu; }
        if (ctx->pc != 0x15277Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15277Cu; }
        if (ctx->pc != 0x15277Cu) { return; }
    }
    ctx->pc = 0x15277Cu;
    // 0x15277c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x15277Cu;
    {
        const bool branch_taken_0x15277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15277c) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x152784u;
    // 0x152784: 0x0  nop
    ctx->pc = 0x152784u;
    // NOP
label_152788:
    // 0x152788: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x152788u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15278c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x15278cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x152790: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x152790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152794: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x152794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x152798: 0x24c629d0  addiu       $a2, $a2, 0x29D0
    ctx->pc = 0x152798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10704));
    // 0x15279c: 0xc053c88  jal         func_14F220
    ctx->pc = 0x15279Cu;
    SET_GPR_U32(ctx, 31, 0x1527A4u);
    ctx->pc = 0x1527A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15279Cu;
            // 0x1527a0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1527A4u; }
        if (ctx->pc != 0x1527A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1527A4u; }
        if (ctx->pc != 0x1527A4u) { return; }
    }
    ctx->pc = 0x1527A4u;
    // 0x1527a4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1527A4u;
    {
        const bool branch_taken_0x1527a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1527a4) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x1527ACu;
    // 0x1527ac: 0x0  nop
    ctx->pc = 0x1527acu;
    // NOP
label_1527b0:
    // 0x1527b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1527b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1527b4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1527b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1527b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1527b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1527bc: 0x0  nop
    ctx->pc = 0x1527bcu;
    // NOP
    // 0x1527c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1527c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1527c4: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1527c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1527c8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1527c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1527cc: 0x2442ffbc  addiu       $v0, $v0, -0x44
    ctx->pc = 0x1527ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967228));
    // 0x1527d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1527d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1527d4: 0x0  nop
    ctx->pc = 0x1527d4u;
    // NOP
    // 0x1527d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1527d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1527dc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1527dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x1527e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1527e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1527e4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1527e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1527e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1527e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1527ec: 0x0  nop
    ctx->pc = 0x1527ecu;
    // NOP
    // 0x1527f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1527f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1527f4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x1527f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1527f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1527f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1527fc: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x1527fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x152800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152804: 0x0  nop
    ctx->pc = 0x152804u;
    // NOP
    // 0x152808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15280c: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x15280cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x152810: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x152810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x152814: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x152814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x152818: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152818u;
    {
        const bool branch_taken_0x152818 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x15281Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152818u;
            // 0x15281c: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152818) {
            ctx->pc = 0x152830u;
            goto label_152830;
        }
    }
    ctx->pc = 0x152820u;
    // 0x152820: 0xc054a88  jal         func_152A20
    ctx->pc = 0x152820u;
    SET_GPR_U32(ctx, 31, 0x152828u);
    ctx->pc = 0x152824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152820u;
            // 0x152824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152828u; }
        if (ctx->pc != 0x152828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152828u; }
        if (ctx->pc != 0x152828u) { return; }
    }
    ctx->pc = 0x152828u;
    // 0x152828: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152828u;
    {
        const bool branch_taken_0x152828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152828) {
            ctx->pc = 0x152850u;
            goto label_152850;
        }
    }
    ctx->pc = 0x152830u;
label_152830:
    // 0x152830: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x152830u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152834: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x152834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x152838: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x152838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15283c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x15283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x152840: 0x24c629d0  addiu       $a2, $a2, 0x29D0
    ctx->pc = 0x152840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10704));
    // 0x152844: 0xc053c88  jal         func_14F220
    ctx->pc = 0x152844u;
    SET_GPR_U32(ctx, 31, 0x15284Cu);
    ctx->pc = 0x152848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152844u;
            // 0x152848: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15284Cu; }
        if (ctx->pc != 0x15284Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15284Cu; }
        if (ctx->pc != 0x15284Cu) { return; }
    }
    ctx->pc = 0x15284Cu;
    // 0x15284c: 0x0  nop
    ctx->pc = 0x15284cu;
    // NOP
label_152850:
    // 0x152850: 0x1600fcc9  bnez        $s0, . + 4 + (-0x337 << 2)
    ctx->pc = 0x152850u;
    {
        const bool branch_taken_0x152850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x152854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152850u;
            // 0x152854: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152850) {
            ctx->pc = 0x151B78u;
            goto label_151b78;
        }
    }
    ctx->pc = 0x152858u;
label_152858:
    // 0x152858: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x152858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15285c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15285cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152868: 0x3e00008  jr          $ra
    ctx->pc = 0x152868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152868u;
            // 0x15286c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151B78u: goto label_151b78;
            case 0x151BA8u: goto label_151ba8;
            case 0x151C48u: goto label_151c48;
            case 0x151CB8u: goto label_151cb8;
            case 0x151CE0u: goto label_151ce0;
            case 0x151CF8u: goto label_151cf8;
            case 0x151D18u: goto label_151d18;
            case 0x151D30u: goto label_151d30;
            case 0x151D48u: goto label_151d48;
            case 0x151DE8u: goto label_151de8;
            case 0x151DF0u: goto label_151df0;
            case 0x151E10u: goto label_151e10;
            case 0x151E58u: goto label_151e58;
            case 0x151E80u: goto label_151e80;
            case 0x151F38u: goto label_151f38;
            case 0x151F58u: goto label_151f58;
            case 0x151F70u: goto label_151f70;
            case 0x151FA0u: goto label_151fa0;
            case 0x151FB0u: goto label_151fb0;
            case 0x1520A0u: goto label_1520a0;
            case 0x1520C0u: goto label_1520c0;
            case 0x152100u: goto label_152100;
            case 0x152110u: goto label_152110;
            case 0x152138u: goto label_152138;
            case 0x1521D8u: goto label_1521d8;
            case 0x152248u: goto label_152248;
            case 0x152270u: goto label_152270;
            case 0x152288u: goto label_152288;
            case 0x1522A8u: goto label_1522a8;
            case 0x1522C0u: goto label_1522c0;
            case 0x1522D8u: goto label_1522d8;
            case 0x152378u: goto label_152378;
            case 0x152380u: goto label_152380;
            case 0x1523A0u: goto label_1523a0;
            case 0x1523E8u: goto label_1523e8;
            case 0x152410u: goto label_152410;
            case 0x1524C8u: goto label_1524c8;
            case 0x1524D8u: goto label_1524d8;
            case 0x152520u: goto label_152520;
            case 0x152548u: goto label_152548;
            case 0x1525F0u: goto label_1525f0;
            case 0x152610u: goto label_152610;
            case 0x152640u: goto label_152640;
            case 0x1526C0u: goto label_1526c0;
            case 0x1526E8u: goto label_1526e8;
            case 0x152788u: goto label_152788;
            case 0x1527B0u: goto label_1527b0;
            case 0x152830u: goto label_152830;
            case 0x152850u: goto label_152850;
            case 0x152858u: goto label_152858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x152870u;
}
