#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Zanzou
// Address: 0x193790 - 0x1937cc
void EnemyshotMove_Zanzou_0x193790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Zanzou_0x193790");
#endif

    ctx->pc = 0x193790u;

    // 0x193790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193798: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x193798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19379c: 0x28a30018  slti        $v1, $a1, 0x18
    ctx->pc = 0x19379cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1937a0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1937A0u;
    {
        const bool branch_taken_0x1937a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1937a0) {
            ctx->pc = 0x1937B8u;
            goto label_1937b8;
        }
    }
    ctx->pc = 0x1937A8u;
    // 0x1937a8: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x1937A8u;
    SET_GPR_U32(ctx, 31, 0x1937B0u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937B0u; }
        if (ctx->pc != 0x1937B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937B0u; }
        if (ctx->pc != 0x1937B0u) { return; }
    }
    ctx->pc = 0x1937B0u;
    // 0x1937b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1937B0u;
    {
        const bool branch_taken_0x1937b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1937b0) {
            ctx->pc = 0x1937C0u;
            goto label_1937c0;
        }
    }
    ctx->pc = 0x1937B8u;
label_1937b8:
    // 0x1937b8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1937b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1937bc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1937bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_1937c0:
    // 0x1937c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1937c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1937c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1937C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1937C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1937C4u;
            // 0x1937c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1937B8u: goto label_1937b8;
            case 0x1937C0u: goto label_1937c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1937CCu;
}
