#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotAlloc
// Address: 0x195bf0 - 0x195c34
void EnemyShotAlloc_0x195bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotAlloc_0x195bf0");
#endif

    ctx->pc = 0x195bf0u;

    // 0x195bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195bf8: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x195BF8u;
    SET_GPR_U32(ctx, 31, 0x195C00u);
    ctx->pc = 0x195BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195BF8u;
            // 0x195bfc: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C00u; }
        if (ctx->pc != 0x195C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C00u; }
        if (ctx->pc != 0x195C00u) { return; }
    }
    ctx->pc = 0x195C00u;
    // 0x195c00: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x195c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x195c04: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x195c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x195c08: 0x8c230238  lw          $v1, 0x238($at)
    ctx->pc = 0x195c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 568)));
    // 0x195c0c: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x195c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x195c10: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x195c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x195c14: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x195C14u;
    {
        const bool branch_taken_0x195c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195c14) {
            ctx->pc = 0x195C20u;
            goto label_195c20;
        }
    }
    ctx->pc = 0x195C1Cu;
    // 0x195c1c: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x195c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
label_195c20:
    // 0x195c20: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x195c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x195c24: 0xac220238  sw          $v0, 0x238($at)
    ctx->pc = 0x195c24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 568), GPR_U32(ctx, 2));
    // 0x195c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x195C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195C2Cu;
            // 0x195c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195C20u: goto label_195c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195C34u;
}
