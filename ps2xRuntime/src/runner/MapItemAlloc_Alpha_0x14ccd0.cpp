#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapItemAlloc_Alpha
// Address: 0x14ccd0 - 0x14cd14
void MapItemAlloc_Alpha_0x14ccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapItemAlloc_Alpha_0x14ccd0");
#endif

    ctx->pc = 0x14ccd0u;

    // 0x14ccd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ccd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ccd8: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x14CCD8u;
    SET_GPR_U32(ctx, 31, 0x14CCE0u);
    ctx->pc = 0x14CCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCD8u;
            // 0x14ccdc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCE0u; }
        if (ctx->pc != 0x14CCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCE0u; }
        if (ctx->pc != 0x14CCE0u) { return; }
    }
    ctx->pc = 0x14CCE0u;
    // 0x14cce0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x14cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x14cce4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cce8: 0x8c239d10  lw          $v1, -0x62F0($at)
    ctx->pc = 0x14cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941968)));
    // 0x14ccec: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x14ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x14ccf0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x14ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x14ccf4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14CCF4u;
    {
        const bool branch_taken_0x14ccf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccf4) {
            ctx->pc = 0x14CD00u;
            goto label_14cd00;
        }
    }
    ctx->pc = 0x14CCFCu;
    // 0x14ccfc: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x14ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_14cd00:
    // 0x14cd00: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cd04: 0xac229d10  sw          $v0, -0x62F0($at)
    ctx->pc = 0x14cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941968), GPR_U32(ctx, 2));
    // 0x14cd08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x14CD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD0Cu;
            // 0x14cd10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CD00u: goto label_14cd00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CD14u;
}
