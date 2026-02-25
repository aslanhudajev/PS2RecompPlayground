#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CollisionAlloc_Src
// Address: 0x14f380 - 0x14f3c4
void CollisionAlloc_Src_0x14f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CollisionAlloc_Src_0x14f380");
#endif

    ctx->pc = 0x14f380u;

    // 0x14f380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f388: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x14F388u;
    SET_GPR_U32(ctx, 31, 0x14F390u);
    ctx->pc = 0x14F38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F388u;
            // 0x14f38c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F390u; }
        if (ctx->pc != 0x14F390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F390u; }
        if (ctx->pc != 0x14F390u) { return; }
    }
    ctx->pc = 0x14F390u;
    // 0x14f390: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x14f390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x14f394: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f398: 0x8c239d38  lw          $v1, -0x62C8($at)
    ctx->pc = 0x14f398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942008)));
    // 0x14f39c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x14f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x14f3a0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x14f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x14f3a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F3A4u;
    {
        const bool branch_taken_0x14f3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f3a4) {
            ctx->pc = 0x14F3B0u;
            goto label_14f3b0;
        }
    }
    ctx->pc = 0x14F3ACu;
    // 0x14f3ac: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x14f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_14f3b0:
    // 0x14f3b0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x14f3b4: 0xac229d38  sw          $v0, -0x62C8($at)
    ctx->pc = 0x14f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942008), GPR_U32(ctx, 2));
    // 0x14f3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14F3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3BCu;
            // 0x14f3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F3B0u: goto label_14f3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F3C4u;
}
