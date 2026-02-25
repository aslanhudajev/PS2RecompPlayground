#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8BossGetStep
// Address: 0x1e2400 - 0x1e246c
void Stage8BossGetStep_0x1e2400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8BossGetStep_0x1e2400");
#endif

    ctx->pc = 0x1e2400u;

    // 0x1e2400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2408: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e2408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e240c: 0x284107d1  slti        $at, $v0, 0x7D1
    ctx->pc = 0x1e240cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2001) ? 1 : 0);
    // 0x1e2410: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1E2410u;
    {
        const bool branch_taken_0x1e2410 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2410) {
            ctx->pc = 0x1E2450u;
            goto label_1e2450;
        }
    }
    ctx->pc = 0x1E2418u;
label_1e2418:
    // 0x1e2418: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E2418u;
    SET_GPR_U32(ctx, 31, 0x1E2420u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2420u; }
        if (ctx->pc != 0x1E2420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2420u; }
        if (ctx->pc != 0x1E2420u) { return; }
    }
    ctx->pc = 0x1E2420u;
    // 0x1e2420: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e2420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e2424: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e2424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e2428: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e2428u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e242c: 0x8c232db0  lw          $v1, 0x2DB0($at)
    ctx->pc = 0x1e242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11696)));
    // 0x1e2430: 0x0  nop
    ctx->pc = 0x1e2430u;
    // NOP
    // 0x1e2434: 0x1010  mfhi        $v0
    ctx->pc = 0x1e2434u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e2438: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1e2438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1e243c: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E243Cu;
    {
        const bool branch_taken_0x1e243c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e243c) {
            ctx->pc = 0x1E2418u;
            goto label_1e2418;
        }
    }
    ctx->pc = 0x1E2444u;
    // 0x1e2444: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2444u;
    {
        const bool branch_taken_0x1e2444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2444) {
            ctx->pc = 0x1E2458u;
            goto label_1e2458;
        }
    }
    ctx->pc = 0x1E244Cu;
    // 0x1e244c: 0x0  nop
    ctx->pc = 0x1e244cu;
    // NOP
label_1e2450:
    // 0x1e2450: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e2450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e2454: 0x0  nop
    ctx->pc = 0x1e2454u;
    // NOP
label_1e2458:
    // 0x1e2458: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e2458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e245c: 0xac222db0  sw          $v0, 0x2DB0($at)
    ctx->pc = 0x1e245cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11696), GPR_U32(ctx, 2));
    // 0x1e2460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2464: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2464u;
            // 0x1e2468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2418u: goto label_1e2418;
            case 0x1E2450u: goto label_1e2450;
            case 0x1E2458u: goto label_1e2458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E246Cu;
}
