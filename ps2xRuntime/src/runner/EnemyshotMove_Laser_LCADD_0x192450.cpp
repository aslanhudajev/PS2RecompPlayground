#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Laser_LCADD
// Address: 0x192450 - 0x192484
void EnemyshotMove_Laser_LCADD_0x192450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Laser_LCADD_0x192450");
#endif

    ctx->pc = 0x192450u;

    // 0x192450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192458: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x192458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19245c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19245cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x192460: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x192460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x192464: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x192464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x192468: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x192468u;
    {
        const bool branch_taken_0x192468 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x192468) {
            ctx->pc = 0x192478u;
            goto label_192478;
        }
    }
    ctx->pc = 0x192470u;
    // 0x192470: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x192470u;
    SET_GPR_U32(ctx, 31, 0x192478u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192478u; }
        if (ctx->pc != 0x192478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192478u; }
        if (ctx->pc != 0x192478u) { return; }
    }
    ctx->pc = 0x192478u;
label_192478:
    // 0x192478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19247c: 0x3e00008  jr          $ra
    ctx->pc = 0x19247Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19247Cu;
            // 0x192480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192478u: goto label_192478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192484u;
}
