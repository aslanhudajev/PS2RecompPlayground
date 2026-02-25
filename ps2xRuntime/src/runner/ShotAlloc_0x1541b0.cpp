#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotAlloc
// Address: 0x1541b0 - 0x1541f4
void ShotAlloc_0x1541b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotAlloc_0x1541b0");
#endif

    ctx->pc = 0x1541b0u;

    // 0x1541b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1541b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1541b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1541b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1541b8: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x1541B8u;
    SET_GPR_U32(ctx, 31, 0x1541C0u);
    ctx->pc = 0x1541BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1541B8u;
            // 0x1541bc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1541C0u; }
        if (ctx->pc != 0x1541C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1541C0u; }
        if (ctx->pc != 0x1541C0u) { return; }
    }
    ctx->pc = 0x1541C0u;
    // 0x1541c0: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1541c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x1541c4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1541c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1541c8: 0x8c232160  lw          $v1, 0x2160($at)
    ctx->pc = 0x1541c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8544)));
    // 0x1541cc: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x1541ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x1541d0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1541d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1541D4u;
    {
        const bool branch_taken_0x1541d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1541d4) {
            ctx->pc = 0x1541E0u;
            goto label_1541e0;
        }
    }
    ctx->pc = 0x1541DCu;
    // 0x1541dc: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1541dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_1541e0:
    // 0x1541e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1541e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1541e4: 0xac222160  sw          $v0, 0x2160($at)
    ctx->pc = 0x1541e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8544), GPR_U32(ctx, 2));
    // 0x1541e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1541e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1541ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1541ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1541F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1541ECu;
            // 0x1541f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1541E0u: goto label_1541e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1541F4u;
}
