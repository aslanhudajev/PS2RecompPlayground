#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CollisionAlloc_Dist
// Address: 0x14f3d0 - 0x14f414
void CollisionAlloc_Dist_0x14f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CollisionAlloc_Dist_0x14f3d0");
#endif

    ctx->pc = 0x14f3d0u;

    // 0x14f3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f3d8: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x14F3D8u;
    SET_GPR_U32(ctx, 31, 0x14F3E0u);
    ctx->pc = 0x14F3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3D8u;
            // 0x14f3dc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F3E0u; }
        if (ctx->pc != 0x14F3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F3E0u; }
        if (ctx->pc != 0x14F3E0u) { return; }
    }
    ctx->pc = 0x14F3E0u;
    // 0x14f3e0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x14f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x14f3e4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f3e8: 0x8c239d30  lw          $v1, -0x62D0($at)
    ctx->pc = 0x14f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942000)));
    // 0x14f3ec: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x14f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x14f3f0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x14f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x14f3f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F3F4u;
    {
        const bool branch_taken_0x14f3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f3f4) {
            ctx->pc = 0x14F400u;
            goto label_14f400;
        }
    }
    ctx->pc = 0x14F3FCu;
    // 0x14f3fc: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x14f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_14f400:
    // 0x14f400: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f404: 0xac229d30  sw          $v0, -0x62D0($at)
    ctx->pc = 0x14f404u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942000), GPR_U32(ctx, 2));
    // 0x14f408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f40c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F40Cu;
            // 0x14f410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F400u: goto label_14f400;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F414u;
}
