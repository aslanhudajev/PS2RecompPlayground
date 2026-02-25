#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossHit2
// Address: 0x1b7da0 - 0x1b7e50
void Stage7BossHit2_0x1b7da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossHit2_0x1b7da0");
#endif

    ctx->pc = 0x1b7da0u;

    // 0x1b7da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7dac: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1b7dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b7db0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1b7db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b7db4: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1b7db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b7db8: 0x18800021  blez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B7DB8u;
    {
        const bool branch_taken_0x1b7db8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B7DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DB8u;
            // 0x1b7dbc: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7db8) {
            ctx->pc = 0x1B7E40u;
            goto label_1b7e40;
        }
    }
    ctx->pc = 0x1B7DC0u;
    // 0x1b7dc0: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1b7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1b7dc4: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B7DC4u;
    {
        const bool branch_taken_0x1b7dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7dc4) {
            ctx->pc = 0x1B7E40u;
            goto label_1b7e40;
        }
    }
    ctx->pc = 0x1B7DCCu;
    // 0x1b7dcc: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1b7dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b7dd0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b7dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b7dd4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1b7dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1b7dd8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1b7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b7ddc: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7DDCu;
    {
        const bool branch_taken_0x1b7ddc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b7ddc) {
            ctx->pc = 0x1B7E40u;
            goto label_1b7e40;
        }
    }
    ctx->pc = 0x1B7DE4u;
    // 0x1b7de4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1b7de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b7de8: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x1b7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1b7dec: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1b7decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1b7df0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1b7df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b7df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7df8: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1b7df8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1b7dfc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b7dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b7e00: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b7e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b7e04: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1b7e04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b7e08: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1B7E08u;
    SET_GPR_U32(ctx, 31, 0x1B7E10u);
    ctx->pc = 0x1B7E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E08u;
            // 0x1b7e0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E10u; }
        if (ctx->pc != 0x1B7E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E10u; }
        if (ctx->pc != 0x1B7E10u) { return; }
    }
    ctx->pc = 0x1B7E10u;
    // 0x1b7e10: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b7e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7e14: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1b7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1b7e18: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b7e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e1c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b7e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b7e20: 0xc05d080  jal         func_174200
    ctx->pc = 0x1B7E20u;
    SET_GPR_U32(ctx, 31, 0x1B7E28u);
    ctx->pc = 0x1B7E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E20u;
            // 0x1b7e24: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E28u; }
        if (ctx->pc != 0x1B7E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E28u; }
        if (ctx->pc != 0x1B7E28u) { return; }
    }
    ctx->pc = 0x1B7E28u;
    // 0x1b7e28: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1b7e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7e2c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1b7e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1b7e30: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b7e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7e34: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b7e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1b7e38: 0xc05d080  jal         func_174200
    ctx->pc = 0x1B7E38u;
    SET_GPR_U32(ctx, 31, 0x1B7E40u);
    ctx->pc = 0x1B7E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E38u;
            // 0x1b7e3c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E40u; }
        if (ctx->pc != 0x1B7E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E40u; }
        if (ctx->pc != 0x1B7E40u) { return; }
    }
    ctx->pc = 0x1B7E40u;
label_1b7e40:
    // 0x1b7e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E48u;
            // 0x1b7e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7E40u: goto label_1b7e40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7E50u;
}
