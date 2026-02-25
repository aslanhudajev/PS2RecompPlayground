#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Mazuru
// Address: 0x193cd0 - 0x193d0c
void EnemyshotMove_Mazuru_0x193cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Mazuru_0x193cd0");
#endif

    ctx->pc = 0x193cd0u;

    // 0x193cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193cd8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x193cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x193cdc: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x193cdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x193ce0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x193CE0u;
    {
        const bool branch_taken_0x193ce0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x193ce0) {
            ctx->pc = 0x193CF8u;
            goto label_193cf8;
        }
    }
    ctx->pc = 0x193CE8u;
    // 0x193ce8: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193CE8u;
    SET_GPR_U32(ctx, 31, 0x193CF0u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CF0u; }
        if (ctx->pc != 0x193CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193CF0u; }
        if (ctx->pc != 0x193CF0u) { return; }
    }
    ctx->pc = 0x193CF0u;
    // 0x193cf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x193CF0u;
    {
        const bool branch_taken_0x193cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193cf0) {
            ctx->pc = 0x193D00u;
            goto label_193d00;
        }
    }
    ctx->pc = 0x193CF8u;
label_193cf8:
    // 0x193cf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x193cfc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x193cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_193d00:
    // 0x193d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d04: 0x3e00008  jr          $ra
    ctx->pc = 0x193D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193D04u;
            // 0x193d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193CF8u: goto label_193cf8;
            case 0x193D00u: goto label_193d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193D0Cu;
}
