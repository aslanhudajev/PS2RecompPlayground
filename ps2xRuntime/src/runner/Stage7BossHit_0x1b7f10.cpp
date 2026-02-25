#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossHit
// Address: 0x1b7f10 - 0x1b7fbc
void Stage7BossHit_0x1b7f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossHit_0x1b7f10");
#endif

    ctx->pc = 0x1b7f10u;

    // 0x1b7f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7f18: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1b7f18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b7f1c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1b7f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b7f20: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1b7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1b7f24: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7F24u;
    {
        const bool branch_taken_0x1b7f24 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B7F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F24u;
            // 0x1b7f28: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f24) {
            ctx->pc = 0x1B7F38u;
            goto label_1b7f38;
        }
    }
    ctx->pc = 0x1B7F2Cu;
    // 0x1b7f2c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1b7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1b7f30: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7F30u;
    {
        const bool branch_taken_0x1b7f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7f30) {
            ctx->pc = 0x1B7F48u;
            goto label_1b7f48;
        }
    }
    ctx->pc = 0x1B7F38u;
label_1b7f38:
    // 0x1b7f38: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1b7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1b7f3c: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x1b7f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1b7f40: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B7F40u;
    {
        const bool branch_taken_0x1b7f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f40) {
            ctx->pc = 0x1B7FB0u;
            goto label_1b7fb0;
        }
    }
    ctx->pc = 0x1B7F48u;
label_1b7f48:
    // 0x1b7f48: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1b7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1b7f4c: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7F4Cu;
    {
        const bool branch_taken_0x1b7f4c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1b7f4c) {
            ctx->pc = 0x1B7F68u;
            goto label_1b7f68;
        }
    }
    ctx->pc = 0x1B7F54u;
    // 0x1b7f54: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x1b7f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1b7f58: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1b7f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1b7f5c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b7f60: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1b7f60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1b7f64: 0x0  nop
    ctx->pc = 0x1b7f64u;
    // NOP
label_1b7f68:
    // 0x1b7f68: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1b7f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1b7f6c: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B7F6Cu;
    {
        const bool branch_taken_0x1b7f6c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b7f6c) {
            ctx->pc = 0x1B7FB0u;
            goto label_1b7fb0;
        }
    }
    ctx->pc = 0x1B7F74u;
    // 0x1b7f74: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x1b7f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1b7f78: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1b7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1b7f7c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1b7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1b7f80: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b7f84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7f88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b7f8c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1b7f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1b7f90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7f94: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1b7f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1b7f98: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1b7f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1b7f9c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1b7f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1b7fa0: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1b7fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1b7fa4: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1B7FA4u;
    SET_GPR_U32(ctx, 31, 0x1B7FACu);
    ctx->pc = 0x1B7FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FA4u;
            // 0x1b7fa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FACu; }
        if (ctx->pc != 0x1B7FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FACu; }
        if (ctx->pc != 0x1B7FACu) { return; }
    }
    ctx->pc = 0x1B7FACu;
    // 0x1b7fac: 0x0  nop
    ctx->pc = 0x1b7facu;
    // NOP
label_1b7fb0:
    // 0x1b7fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FB4u;
            // 0x1b7fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7F38u: goto label_1b7f38;
            case 0x1B7F48u: goto label_1b7f48;
            case 0x1B7F68u: goto label_1b7f68;
            case 0x1B7FB0u: goto label_1b7fb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7FBCu;
}
