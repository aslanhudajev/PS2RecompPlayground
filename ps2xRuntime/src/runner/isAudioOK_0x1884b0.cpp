#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isAudioOK
// Address: 0x1884b0 - 0x1884e0
void isAudioOK_0x1884b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isAudioOK_0x1884b0");
#endif

    ctx->pc = 0x1884b0u;

    // 0x1884b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1884b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1884b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1884b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1884b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1884b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1884bc: 0x8c22a4c0  lw          $v0, -0x5B40($at)
    ctx->pc = 0x1884bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943936)));
    // 0x1884c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1884C0u;
    {
        const bool branch_taken_0x1884c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1884C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1884C0u;
            // 0x1884c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884c0) {
            ctx->pc = 0x1884D4u;
            goto label_1884d4;
        }
    }
    ctx->pc = 0x1884C8u;
    // 0x1884c8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1884c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1884cc: 0xc061cec  jal         func_1873B0
    ctx->pc = 0x1884CCu;
    SET_GPR_U32(ctx, 31, 0x1884D4u);
    ctx->pc = 0x1884D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1884CCu;
            // 0x1884d0: 0x2484fda0  addiu       $a0, $a0, -0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1873B0u;
    if (runtime->hasFunction(0x1873B0u)) {
        auto targetFn = runtime->lookupFunction(0x1873B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884D4u; }
        if (ctx->pc != 0x1884D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecIsPreset_0x1873b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884D4u; }
        if (ctx->pc != 0x1884D4u) { return; }
    }
    ctx->pc = 0x1884D4u;
label_1884d4:
    // 0x1884d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1884d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1884d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1884D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1884DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1884D8u;
            // 0x1884dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1884D4u: goto label_1884d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1884E0u;
}
