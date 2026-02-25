#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex1BossHit2
// Address: 0x1d5b50 - 0x1d5be8
void Stageex1BossHit2_0x1d5b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex1BossHit2_0x1d5b50");
#endif

    ctx->pc = 0x1d5b50u;

    // 0x1d5b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5b5c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1d5b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d5b60: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1d5b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d5b64: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1d5b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d5b68: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D5B68u;
    {
        const bool branch_taken_0x1d5b68 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D5B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B68u;
            // 0x1d5b6c: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b68) {
            ctx->pc = 0x1D5BD8u;
            goto label_1d5bd8;
        }
    }
    ctx->pc = 0x1D5B70u;
    // 0x1d5b70: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1d5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1d5b74: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D5B74u;
    {
        const bool branch_taken_0x1d5b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5b74) {
            ctx->pc = 0x1D5BD8u;
            goto label_1d5bd8;
        }
    }
    ctx->pc = 0x1D5B7Cu;
    // 0x1d5b7c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1d5b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1d5b80: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1d5b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d5b84: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1d5b84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1d5b88: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1d5b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d5b8c: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5B8Cu;
    {
        const bool branch_taken_0x1d5b8c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d5b8c) {
            ctx->pc = 0x1D5BD8u;
            goto label_1d5bd8;
        }
    }
    ctx->pc = 0x1D5B94u;
    // 0x1d5b94: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d5b98: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x1d5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x1d5b9c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1d5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1d5ba0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1d5ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d5ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5ba8: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1d5ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1d5bac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1d5bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d5bb0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1d5bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5bb4: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1d5bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d5bb8: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1D5BB8u;
    SET_GPR_U32(ctx, 31, 0x1D5BC0u);
    ctx->pc = 0x1D5BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BB8u;
            // 0x1d5bbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BC0u; }
        if (ctx->pc != 0x1D5BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BC0u; }
        if (ctx->pc != 0x1D5BC0u) { return; }
    }
    ctx->pc = 0x1D5BC0u;
    // 0x1d5bc0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1d5bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5bc4: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1d5bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1d5bc8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1d5bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5bcc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d5bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d5bd0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1D5BD0u;
    SET_GPR_U32(ctx, 31, 0x1D5BD8u);
    ctx->pc = 0x1D5BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BD0u;
            // 0x1d5bd4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BD8u; }
        if (ctx->pc != 0x1D5BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BD8u; }
        if (ctx->pc != 0x1D5BD8u) { return; }
    }
    ctx->pc = 0x1D5BD8u;
label_1d5bd8:
    // 0x1d5bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5BE0u;
            // 0x1d5be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5BD8u: goto label_1d5bd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5BE8u;
}
