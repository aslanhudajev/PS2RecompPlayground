#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossHit3
// Address: 0x1b7cf0 - 0x1b7da0
void Stage7BossHit3_0x1b7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossHit3_0x1b7cf0");
#endif

    ctx->pc = 0x1b7cf0u;

    // 0x1b7cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7cf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7cf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7cfc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1b7cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b7d00: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1b7d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b7d04: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1b7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b7d08: 0x18800021  blez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B7D08u;
    {
        const bool branch_taken_0x1b7d08 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B7D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D08u;
            // 0x1b7d0c: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d08) {
            ctx->pc = 0x1B7D90u;
            goto label_1b7d90;
        }
    }
    ctx->pc = 0x1B7D10u;
    // 0x1b7d10: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1b7d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1b7d14: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B7D14u;
    {
        const bool branch_taken_0x1b7d14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7d14) {
            ctx->pc = 0x1B7D90u;
            goto label_1b7d90;
        }
    }
    ctx->pc = 0x1B7D1Cu;
    // 0x1b7d1c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1b7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b7d20: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b7d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b7d24: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1b7d24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1b7d28: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1b7d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b7d2c: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7D2Cu;
    {
        const bool branch_taken_0x1b7d2c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b7d2c) {
            ctx->pc = 0x1B7D90u;
            goto label_1b7d90;
        }
    }
    ctx->pc = 0x1B7D34u;
    // 0x1b7d34: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1b7d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b7d38: 0x24031b58  addiu       $v1, $zero, 0x1B58
    ctx->pc = 0x1b7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7000));
    // 0x1b7d3c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1b7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1b7d40: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1b7d40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b7d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7d48: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1b7d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1b7d4c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b7d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b7d50: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b7d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b7d54: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1b7d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b7d58: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1B7D58u;
    SET_GPR_U32(ctx, 31, 0x1B7D60u);
    ctx->pc = 0x1B7D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D58u;
            // 0x1b7d5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D60u; }
        if (ctx->pc != 0x1B7D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D60u; }
        if (ctx->pc != 0x1B7D60u) { return; }
    }
    ctx->pc = 0x1B7D60u;
    // 0x1b7d60: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b7d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d64: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1b7d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1b7d68: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b7d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7d6c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b7d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b7d70: 0xc05d080  jal         func_174200
    ctx->pc = 0x1B7D70u;
    SET_GPR_U32(ctx, 31, 0x1B7D78u);
    ctx->pc = 0x1B7D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D70u;
            // 0x1b7d74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D78u; }
        if (ctx->pc != 0x1B7D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D78u; }
        if (ctx->pc != 0x1B7D78u) { return; }
    }
    ctx->pc = 0x1B7D78u;
    // 0x1b7d78: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b7d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d7c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1b7d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1b7d80: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b7d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7d84: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b7d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b7d88: 0xc05d080  jal         func_174200
    ctx->pc = 0x1B7D88u;
    SET_GPR_U32(ctx, 31, 0x1B7D90u);
    ctx->pc = 0x1B7D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D88u;
            // 0x1b7d8c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D90u; }
        if (ctx->pc != 0x1B7D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7D90u; }
        if (ctx->pc != 0x1B7D90u) { return; }
    }
    ctx->pc = 0x1B7D90u;
label_1b7d90:
    // 0x1b7d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7D98u;
            // 0x1b7d9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7D90u: goto label_1b7d90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7DA0u;
}
