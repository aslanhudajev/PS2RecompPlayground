#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1BossHit2
// Address: 0x161a30 - 0x161ac8
void Stage1BossHit2_0x161a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1BossHit2_0x161a30");
#endif

    ctx->pc = 0x161a30u;

    // 0x161a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161a3c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x161a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x161a40: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x161a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x161a44: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x161a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x161a48: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x161A48u;
    {
        const bool branch_taken_0x161a48 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x161A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A48u;
            // 0x161a4c: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a48) {
            ctx->pc = 0x161AB8u;
            goto label_161ab8;
        }
    }
    ctx->pc = 0x161A50u;
    // 0x161a50: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x161a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x161a54: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x161A54u;
    {
        const bool branch_taken_0x161a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x161a54) {
            ctx->pc = 0x161AB8u;
            goto label_161ab8;
        }
    }
    ctx->pc = 0x161A5Cu;
    // 0x161a5c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x161a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x161a60: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x161a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161a64: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x161a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x161a68: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x161a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x161a6c: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x161A6Cu;
    {
        const bool branch_taken_0x161a6c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x161a6c) {
            ctx->pc = 0x161AB8u;
            goto label_161ab8;
        }
    }
    ctx->pc = 0x161A74u;
    // 0x161a74: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x161a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x161a78: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x161a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x161a7c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x161a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x161a80: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x161a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161a88: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x161a88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x161a8c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x161a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x161a90: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x161a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x161a94: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x161a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x161a98: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x161A98u;
    SET_GPR_U32(ctx, 31, 0x161AA0u);
    ctx->pc = 0x161A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A98u;
            // 0x161a9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AA0u; }
        if (ctx->pc != 0x161AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AA0u; }
        if (ctx->pc != 0x161AA0u) { return; }
    }
    ctx->pc = 0x161AA0u;
    // 0x161aa0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x161aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161aa4: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x161aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x161aa8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x161aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161aac: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x161aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x161ab0: 0xc05d080  jal         func_174200
    ctx->pc = 0x161AB0u;
    SET_GPR_U32(ctx, 31, 0x161AB8u);
    ctx->pc = 0x161AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161AB0u;
            // 0x161ab4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AB8u; }
        if (ctx->pc != 0x161AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AB8u; }
        if (ctx->pc != 0x161AB8u) { return; }
    }
    ctx->pc = 0x161AB8u;
label_161ab8:
    // 0x161ab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161abc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x161AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161AC0u;
            // 0x161ac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161AB8u: goto label_161ab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161AC8u;
}
