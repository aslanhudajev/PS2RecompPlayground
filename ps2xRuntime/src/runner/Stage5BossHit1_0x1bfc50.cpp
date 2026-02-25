#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage5BossHit1
// Address: 0x1bfc50 - 0x1bfd00
void Stage5BossHit1_0x1bfc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage5BossHit1_0x1bfc50");
#endif

    ctx->pc = 0x1bfc50u;

    // 0x1bfc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bfc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bfc54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bfc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bfc58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bfc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bfc5c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1bfc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bfc60: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1bfc60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bfc64: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1bfc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1bfc68: 0x18800021  blez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BFC68u;
    {
        const bool branch_taken_0x1bfc68 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1BFC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFC68u;
            // 0x1bfc6c: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc68) {
            ctx->pc = 0x1BFCF0u;
            goto label_1bfcf0;
        }
    }
    ctx->pc = 0x1BFC70u;
    // 0x1bfc70: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1bfc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1bfc74: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BFC74u;
    {
        const bool branch_taken_0x1bfc74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bfc74) {
            ctx->pc = 0x1BFCF0u;
            goto label_1bfcf0;
        }
    }
    ctx->pc = 0x1BFC7Cu;
    // 0x1bfc7c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1bfc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1bfc80: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1bfc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bfc84: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1bfc84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1bfc88: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1bfc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1bfc8c: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BFC8Cu;
    {
        const bool branch_taken_0x1bfc8c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1bfc8c) {
            ctx->pc = 0x1BFCF0u;
            goto label_1bfcf0;
        }
    }
    ctx->pc = 0x1BFC94u;
    // 0x1bfc94: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1bfc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1bfc98: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x1bfc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x1bfc9c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1bfc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1bfca0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1bfca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bfca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfca8: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1bfca8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1bfcac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1bfcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bfcb0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1bfcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bfcb4: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1bfcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1bfcb8: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1BFCB8u;
    SET_GPR_U32(ctx, 31, 0x1BFCC0u);
    ctx->pc = 0x1BFCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFCB8u;
            // 0x1bfcbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCC0u; }
        if (ctx->pc != 0x1BFCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCC0u; }
        if (ctx->pc != 0x1BFCC0u) { return; }
    }
    ctx->pc = 0x1BFCC0u;
    // 0x1bfcc0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1bfcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bfcc4: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1bfcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1bfcc8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1bfcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfccc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bfcccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bfcd0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BFCD0u;
    SET_GPR_U32(ctx, 31, 0x1BFCD8u);
    ctx->pc = 0x1BFCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFCD0u;
            // 0x1bfcd4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCD8u; }
        if (ctx->pc != 0x1BFCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCD8u; }
        if (ctx->pc != 0x1BFCD8u) { return; }
    }
    ctx->pc = 0x1BFCD8u;
    // 0x1bfcd8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1bfcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bfcdc: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1bfcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1bfce0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1bfce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfce4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bfce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bfce8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BFCE8u;
    SET_GPR_U32(ctx, 31, 0x1BFCF0u);
    ctx->pc = 0x1BFCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFCE8u;
            // 0x1bfcec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCF0u; }
        if (ctx->pc != 0x1BFCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFCF0u; }
        if (ctx->pc != 0x1BFCF0u) { return; }
    }
    ctx->pc = 0x1BFCF0u;
label_1bfcf0:
    // 0x1bfcf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bfcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfcf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfcf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFCF8u;
            // 0x1bfcfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFCF0u: goto label_1bfcf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BFD00u;
}
