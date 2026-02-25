#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_04Hit
// Address: 0x1acd10 - 0x1acd8c
void En6_04Hit_0x1acd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_04Hit_0x1acd10");
#endif

    ctx->pc = 0x1acd10u;

    // 0x1acd10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1acd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1acd14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1acd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1acd18: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1acd18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1acd1c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1acd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1acd20: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1acd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1acd24: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1ACD24u;
    {
        const bool branch_taken_0x1acd24 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1ACD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD24u;
            // 0x1acd28: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd24) {
            ctx->pc = 0x1ACD80u;
            goto label_1acd80;
        }
    }
    ctx->pc = 0x1ACD2Cu;
    // 0x1acd2c: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x1acd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1acd30: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1acd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1acd34: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1acd34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1acd38: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1acd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1acd3c: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ACD3Cu;
    {
        const bool branch_taken_0x1acd3c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1acd3c) {
            ctx->pc = 0x1ACD80u;
            goto label_1acd80;
        }
    }
    ctx->pc = 0x1ACD44u;
    // 0x1acd44: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x1acd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1acd48: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1acd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1acd4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1acd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1acd50: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1acd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1acd54: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1acd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1acd58: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1acd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1acd5c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1acd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1acd60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acd64: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1acd64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1acd68: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1acd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1acd6c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1acd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1acd70: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1acd70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1acd74: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1ACD74u;
    SET_GPR_U32(ctx, 31, 0x1ACD7Cu);
    ctx->pc = 0x1ACD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD74u;
            // 0x1acd78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD7Cu; }
        if (ctx->pc != 0x1ACD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD7Cu; }
        if (ctx->pc != 0x1ACD7Cu) { return; }
    }
    ctx->pc = 0x1ACD7Cu;
    // 0x1acd7c: 0x0  nop
    ctx->pc = 0x1acd7cu;
    // NOP
label_1acd80:
    // 0x1acd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acd84: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD84u;
            // 0x1acd88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACD80u: goto label_1acd80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ACD8Cu;
}
