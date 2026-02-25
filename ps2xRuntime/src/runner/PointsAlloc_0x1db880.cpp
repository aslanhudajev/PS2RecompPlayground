#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PointsAlloc
// Address: 0x1db880 - 0x1db8c4
void PointsAlloc_0x1db880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PointsAlloc_0x1db880");
#endif

    ctx->pc = 0x1db880u;

    // 0x1db880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db888: 0xc04ea32  jal         func_13A8C8
    ctx->pc = 0x1DB888u;
    SET_GPR_U32(ctx, 31, 0x1DB890u);
    ctx->pc = 0x1DB88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB888u;
            // 0x1db88c: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8C8u;
    if (runtime->hasFunction(0x13A8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB890u; }
        if (ctx->pc != 0x1DB890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x13a8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB890u; }
        if (ctx->pc != 0x1DB890u) { return; }
    }
    ctx->pc = 0x1DB890u;
    // 0x1db890: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1db890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1db894: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db898: 0x8c231d80  lw          $v1, 0x1D80($at)
    ctx->pc = 0x1db898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7552)));
    // 0x1db89c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x1db89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x1db8a0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1db8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db8a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DB8A4u;
    {
        const bool branch_taken_0x1db8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db8a4) {
            ctx->pc = 0x1DB8B0u;
            goto label_1db8b0;
        }
    }
    ctx->pc = 0x1DB8ACu;
    // 0x1db8ac: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x1db8acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_1db8b0:
    // 0x1db8b0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1db8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1db8b4: 0xac221d80  sw          $v0, 0x1D80($at)
    ctx->pc = 0x1db8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7552), GPR_U32(ctx, 2));
    // 0x1db8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB8BCu;
            // 0x1db8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB8B0u: goto label_1db8b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DB8C4u;
}
