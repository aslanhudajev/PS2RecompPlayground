#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex1BossHit1
// Address: 0x1d5bf0 - 0x1d5c88
void Stageex1BossHit1_0x1d5bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex1BossHit1_0x1d5bf0");
#endif

    ctx->pc = 0x1d5bf0u;

    // 0x1d5bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5bfc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1d5bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d5c00: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d5c04: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1d5c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d5c08: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D5C08u;
    {
        const bool branch_taken_0x1d5c08 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D5C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C08u;
            // 0x1d5c0c: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c08) {
            ctx->pc = 0x1D5C78u;
            goto label_1d5c78;
        }
    }
    ctx->pc = 0x1D5C10u;
    // 0x1d5c10: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1d5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1d5c14: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D5C14u;
    {
        const bool branch_taken_0x1d5c14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5c14) {
            ctx->pc = 0x1D5C78u;
            goto label_1d5c78;
        }
    }
    ctx->pc = 0x1D5C1Cu;
    // 0x1d5c1c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1d5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d5c20: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d5c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d5c24: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1d5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1d5c28: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1d5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d5c2c: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5C2Cu;
    {
        const bool branch_taken_0x1d5c2c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d5c2c) {
            ctx->pc = 0x1D5C78u;
            goto label_1d5c78;
        }
    }
    ctx->pc = 0x1D5C34u;
    // 0x1d5c34: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1d5c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d5c38: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x1d5c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x1d5c3c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1d5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1d5c40: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1d5c40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d5c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5c48: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1d5c48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1d5c4c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1d5c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d5c50: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5c54: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1d5c54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d5c58: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1D5C58u;
    SET_GPR_U32(ctx, 31, 0x1D5C60u);
    ctx->pc = 0x1D5C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C58u;
            // 0x1d5c5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C60u; }
        if (ctx->pc != 0x1D5C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C60u; }
        if (ctx->pc != 0x1D5C60u) { return; }
    }
    ctx->pc = 0x1D5C60u;
    // 0x1d5c60: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1d5c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5c64: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1d5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1d5c68: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1d5c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5c6c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d5c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d5c70: 0xc05d080  jal         func_174200
    ctx->pc = 0x1D5C70u;
    SET_GPR_U32(ctx, 31, 0x1D5C78u);
    ctx->pc = 0x1D5C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C70u;
            // 0x1d5c74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C78u; }
        if (ctx->pc != 0x1D5C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C78u; }
        if (ctx->pc != 0x1D5C78u) { return; }
    }
    ctx->pc = 0x1D5C78u;
label_1d5c78:
    // 0x1d5c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C80u;
            // 0x1d5c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5C78u: goto label_1d5c78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5C88u;
}
