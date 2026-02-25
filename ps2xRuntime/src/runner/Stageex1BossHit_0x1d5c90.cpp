#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex1BossHit
// Address: 0x1d5c90 - 0x1d5d2c
void Stageex1BossHit_0x1d5c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex1BossHit_0x1d5c90");
#endif

    ctx->pc = 0x1d5c90u;

    // 0x1d5c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5c98: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1d5c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d5c9c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1d5c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d5ca0: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1d5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d5ca4: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5CA4u;
    {
        const bool branch_taken_0x1d5ca4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D5CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CA4u;
            // 0x1d5ca8: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ca4) {
            ctx->pc = 0x1D5CB8u;
            goto label_1d5cb8;
        }
    }
    ctx->pc = 0x1D5CACu;
    // 0x1d5cac: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1d5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1d5cb0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5CB0u;
    {
        const bool branch_taken_0x1d5cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d5cb0) {
            ctx->pc = 0x1D5CC8u;
            goto label_1d5cc8;
        }
    }
    ctx->pc = 0x1D5CB8u;
label_1d5cb8:
    // 0x1d5cb8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1d5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d5cbc: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x1d5cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d5cc0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D5CC0u;
    {
        const bool branch_taken_0x1d5cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5cc0) {
            ctx->pc = 0x1D5D20u;
            goto label_1d5d20;
        }
    }
    ctx->pc = 0x1D5CC8u;
label_1d5cc8:
    // 0x1d5cc8: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1d5cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1d5ccc: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5CCCu;
    {
        const bool branch_taken_0x1d5ccc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1d5ccc) {
            ctx->pc = 0x1D5CE8u;
            goto label_1d5ce8;
        }
    }
    ctx->pc = 0x1D5CD4u;
    // 0x1d5cd4: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x1d5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1d5cd8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1d5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d5cdc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5ce0: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1d5ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1d5ce4: 0x0  nop
    ctx->pc = 0x1d5ce4u;
    // NOP
label_1d5ce8:
    // 0x1d5ce8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1d5ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d5cec: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D5CECu;
    {
        const bool branch_taken_0x1d5cec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d5cec) {
            ctx->pc = 0x1D5D20u;
            goto label_1d5d20;
        }
    }
    ctx->pc = 0x1D5CF4u;
    // 0x1d5cf4: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1d5cf8: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x1d5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1d5cfc: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1d5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1d5d00: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1d5d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d5d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5d08: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1d5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1d5d0c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1d5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d5d10: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1d5d14: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1d5d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1d5d18: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1D5D18u;
    SET_GPR_U32(ctx, 31, 0x1D5D20u);
    ctx->pc = 0x1D5D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D18u;
            // 0x1d5d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D20u; }
        if (ctx->pc != 0x1D5D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D20u; }
        if (ctx->pc != 0x1D5D20u) { return; }
    }
    ctx->pc = 0x1D5D20u;
label_1d5d20:
    // 0x1d5d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5D24u;
            // 0x1d5d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D5CB8u: goto label_1d5cb8;
            case 0x1D5CC8u: goto label_1d5cc8;
            case 0x1D5CE8u: goto label_1d5ce8;
            case 0x1D5D20u: goto label_1d5d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5D2Cu;
}
