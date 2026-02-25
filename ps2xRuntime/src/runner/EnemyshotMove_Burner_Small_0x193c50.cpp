#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Burner_Small
// Address: 0x193c50 - 0x193c8c
void EnemyshotMove_Burner_Small_0x193c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Burner_Small_0x193c50");
#endif

    ctx->pc = 0x193c50u;

    // 0x193c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193c58: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x193c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x193c5c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x193c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x193c60: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x193C60u;
    {
        const bool branch_taken_0x193c60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x193c60) {
            ctx->pc = 0x193C78u;
            goto label_193c78;
        }
    }
    ctx->pc = 0x193C68u;
    // 0x193c68: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193C68u;
    SET_GPR_U32(ctx, 31, 0x193C70u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C70u; }
        if (ctx->pc != 0x193C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193C70u; }
        if (ctx->pc != 0x193C70u) { return; }
    }
    ctx->pc = 0x193C70u;
    // 0x193c70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x193C70u;
    {
        const bool branch_taken_0x193c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c70) {
            ctx->pc = 0x193C80u;
            goto label_193c80;
        }
    }
    ctx->pc = 0x193C78u;
label_193c78:
    // 0x193c78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x193c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x193c7c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x193c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_193c80:
    // 0x193c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c84: 0x3e00008  jr          $ra
    ctx->pc = 0x193C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193C84u;
            // 0x193c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193C78u: goto label_193c78;
            case 0x193C80u: goto label_193c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193C8Cu;
}
