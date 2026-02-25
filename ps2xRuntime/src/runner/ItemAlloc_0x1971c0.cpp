#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemAlloc
// Address: 0x1971c0 - 0x197204
void ItemAlloc_0x1971c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemAlloc_0x1971c0");
#endif

    ctx->pc = 0x1971c0u;

    // 0x1971c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1971c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1971c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1971c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1971c8: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x1971C8u;
    SET_GPR_U32(ctx, 31, 0x1971D0u);
    ctx->pc = 0x1971CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1971C8u;
            // 0x1971cc: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1971D0u; }
        if (ctx->pc != 0x1971D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1971D0u; }
        if (ctx->pc != 0x1971D0u) { return; }
    }
    ctx->pc = 0x1971D0u;
    // 0x1971d0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1971d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1971d4: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x1971d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x1971d8: 0x8c231608  lw          $v1, 0x1608($at)
    ctx->pc = 0x1971d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5640)));
    // 0x1971dc: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1971dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x1971e0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1971e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1971e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1971E4u;
    {
        const bool branch_taken_0x1971e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1971e4) {
            ctx->pc = 0x1971F0u;
            goto label_1971f0;
        }
    }
    ctx->pc = 0x1971ECu;
    // 0x1971ec: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1971ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_1971f0:
    // 0x1971f0: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x1971f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x1971f4: 0xac221608  sw          $v0, 0x1608($at)
    ctx->pc = 0x1971f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5640), GPR_U32(ctx, 2));
    // 0x1971f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1971f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1971fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1971FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1971FCu;
            // 0x197200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1971F0u: goto label_1971f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197204u;
}
