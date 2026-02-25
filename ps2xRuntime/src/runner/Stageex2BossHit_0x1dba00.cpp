#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex2BossHit
// Address: 0x1dba00 - 0x1dba9c
void Stageex2BossHit_0x1dba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex2BossHit_0x1dba00");
#endif

    ctx->pc = 0x1dba00u;

    // 0x1dba00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dba04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dba08: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1dba08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dba0c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1dba0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1dba10: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1dba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1dba14: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBA14u;
    {
        const bool branch_taken_0x1dba14 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1DBA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA14u;
            // 0x1dba18: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba14) {
            ctx->pc = 0x1DBA28u;
            goto label_1dba28;
        }
    }
    ctx->pc = 0x1DBA1Cu;
    // 0x1dba1c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1dba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1dba20: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBA20u;
    {
        const bool branch_taken_0x1dba20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dba20) {
            ctx->pc = 0x1DBA38u;
            goto label_1dba38;
        }
    }
    ctx->pc = 0x1DBA28u;
label_1dba28:
    // 0x1dba28: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1dba28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1dba2c: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x1dba2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1dba30: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DBA30u;
    {
        const bool branch_taken_0x1dba30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dba30) {
            ctx->pc = 0x1DBA90u;
            goto label_1dba90;
        }
    }
    ctx->pc = 0x1DBA38u;
label_1dba38:
    // 0x1dba38: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1dba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1dba3c: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBA3Cu;
    {
        const bool branch_taken_0x1dba3c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1dba3c) {
            ctx->pc = 0x1DBA58u;
            goto label_1dba58;
        }
    }
    ctx->pc = 0x1DBA44u;
    // 0x1dba44: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x1dba44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1dba48: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1dba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1dba4c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1dba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dba50: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1dba50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1dba54: 0x0  nop
    ctx->pc = 0x1dba54u;
    // NOP
label_1dba58:
    // 0x1dba58: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1dba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1dba5c: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DBA5Cu;
    {
        const bool branch_taken_0x1dba5c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1dba5c) {
            ctx->pc = 0x1DBA90u;
            goto label_1dba90;
        }
    }
    ctx->pc = 0x1DBA64u;
    // 0x1dba64: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x1dba64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1dba68: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x1dba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1dba6c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1dba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1dba70: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1dba70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1dba74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dba78: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1dba78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1dba7c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1dba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1dba80: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1dba80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1dba84: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1dba84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1dba88: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1DBA88u;
    SET_GPR_U32(ctx, 31, 0x1DBA90u);
    ctx->pc = 0x1DBA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA88u;
            // 0x1dba8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA90u; }
        if (ctx->pc != 0x1DBA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBA90u; }
        if (ctx->pc != 0x1DBA90u) { return; }
    }
    ctx->pc = 0x1DBA90u;
label_1dba90:
    // 0x1dba90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dba94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBA94u;
            // 0x1dba98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBA28u: goto label_1dba28;
            case 0x1DBA38u: goto label_1dba38;
            case 0x1DBA58u: goto label_1dba58;
            case 0x1DBA90u: goto label_1dba90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBA9Cu;
}
