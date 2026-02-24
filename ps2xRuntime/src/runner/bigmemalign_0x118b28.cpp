#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: bigmemalign
// Address: 0x118b28 - 0x118b60
void bigmemalign_0x118b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("bigmemalign_0x118b28");
#endif

    ctx->pc = 0x118b28u;

    // 0x118b28: 0x8f828424  lw          $v0, -0x7BDC($gp)
    ctx->pc = 0x118b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935588)));
    // 0x118b2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118b30: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x118b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x118b34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x118B34u;
    {
        const bool branch_taken_0x118b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118B34u;
            // 0x118b38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b34) {
            ctx->pc = 0x118B50u;
            goto label_118b50;
        }
    }
    ctx->pc = 0x118B3Cu;
    // 0x118b3c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x118b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x118b40: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x118B40u;
    SET_GPR_U32(ctx, 31, 0x118B48u);
    ctx->pc = 0x118B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118B40u;
            // 0x118b44: 0x248443f8  addiu       $a0, $a0, 0x43F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118B48u; }
        if (ctx->pc != 0x118B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118B48u; }
        if (ctx->pc != 0x118B48u) { return; }
    }
    ctx->pc = 0x118B48u;
    // 0x118b48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118B48u;
    {
        const bool branch_taken_0x118b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118B48u;
            // 0x118b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b48) {
            ctx->pc = 0x118B54u;
            goto label_118b54;
        }
    }
    ctx->pc = 0x118B50u;
label_118b50:
    // 0x118b50: 0x8f828420  lw          $v0, -0x7BE0($gp)
    ctx->pc = 0x118b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935584)));
label_118b54:
    // 0x118b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118b58: 0x3e00008  jr          $ra
    ctx->pc = 0x118B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118B58u;
            // 0x118b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118B50u: goto label_118b50;
            case 0x118B54u: goto label_118b54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118B60u;
}
