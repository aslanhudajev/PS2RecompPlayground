#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossHit1
// Address: 0x1b7e50 - 0x1b7f10
void Stage7BossHit1_0x1b7e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossHit1_0x1b7e50");
#endif

    ctx->pc = 0x1b7e50u;

    // 0x1b7e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7e54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7e5c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1b7e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b7e60: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1b7e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b7e64: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1b7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b7e68: 0x18800025  blez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B7E68u;
    {
        const bool branch_taken_0x1b7e68 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B7E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E68u;
            // 0x1b7e6c: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e68) {
            ctx->pc = 0x1B7F00u;
            goto label_1b7f00;
        }
    }
    ctx->pc = 0x1B7E70u;
    // 0x1b7e70: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1b7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1b7e74: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B7E74u;
    {
        const bool branch_taken_0x1b7e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7e74) {
            ctx->pc = 0x1B7F00u;
            goto label_1b7f00;
        }
    }
    ctx->pc = 0x1B7E7Cu;
    // 0x1b7e7c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1b7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b7e80: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b7e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b7e84: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1b7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1b7e88: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1b7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b7e8c: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B7E8Cu;
    {
        const bool branch_taken_0x1b7e8c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b7e8c) {
            ctx->pc = 0x1B7F00u;
            goto label_1b7f00;
        }
    }
    ctx->pc = 0x1B7E94u;
    // 0x1b7e94: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1b7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b7e98: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1b7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1b7e9c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1b7e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1b7ea0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b7ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b7ea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7ea8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b7ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b7eac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b7eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7eb4: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1b7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1b7eb8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b7eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b7ebc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b7ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b7ec0: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1b7ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b7ec4: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1B7EC4u;
    SET_GPR_U32(ctx, 31, 0x1B7ECCu);
    ctx->pc = 0x1B7EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EC4u;
            // 0x1b7ec8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7ECCu; }
        if (ctx->pc != 0x1B7ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7ECCu; }
        if (ctx->pc != 0x1B7ECCu) { return; }
    }
    ctx->pc = 0x1B7ECCu;
    // 0x1b7ecc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7ed0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1b7ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1b7ed4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7ed8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b7ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b7edc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1B7EDCu;
    SET_GPR_U32(ctx, 31, 0x1B7EE4u);
    ctx->pc = 0x1B7EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EDCu;
            // 0x1b7ee0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7EE4u; }
        if (ctx->pc != 0x1B7EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7EE4u; }
        if (ctx->pc != 0x1B7EE4u) { return; }
    }
    ctx->pc = 0x1B7EE4u;
    // 0x1b7ee4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b7ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7ee8: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1b7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1b7eec: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b7eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7ef0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b7ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b7ef4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1B7EF4u;
    SET_GPR_U32(ctx, 31, 0x1B7EFCu);
    ctx->pc = 0x1B7EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EF4u;
            // 0x1b7ef8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7EFCu; }
        if (ctx->pc != 0x1B7EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7EFCu; }
        if (ctx->pc != 0x1B7EFCu) { return; }
    }
    ctx->pc = 0x1B7EFCu;
    // 0x1b7efc: 0x0  nop
    ctx->pc = 0x1b7efcu;
    // NOP
label_1b7f00:
    // 0x1b7f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7f08: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F08u;
            // 0x1b7f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7F00u: goto label_1b7f00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7F10u;
}
