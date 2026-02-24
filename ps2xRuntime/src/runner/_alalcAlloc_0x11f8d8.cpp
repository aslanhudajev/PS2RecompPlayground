#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _alalcAlloc
// Address: 0x11f8d8 - 0x11f940
void _alalcAlloc_0x11f8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_alalcAlloc_0x11f8d8");
#endif

    ctx->pc = 0x11f8d8u;

    // 0x11f8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11f8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11f8dc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11f8dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f8e4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11F8E4u;
    {
        const bool branch_taken_0x11f8e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f8e4) {
            ctx->pc = 0x11F8E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8E4u;
            // 0x11f8e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F8ECu;
            goto label_11f8ec;
        }
    }
    ctx->pc = 0x11F8ECu;
label_11f8ec:
    // 0x11f8ec: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x11f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11f8f0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x11f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x11f8f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11f8f8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x11f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11f8fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f900: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x11f900u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11f904: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11f904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11f908: 0x1012  mflo        $v0
    ctx->pc = 0x11f908u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11f90c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x11f90cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11f910: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x11f910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11f914: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x11f914u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11f918: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F918u;
    {
        const bool branch_taken_0x11f918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f918) {
            ctx->pc = 0x11F91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F918u;
            // 0x11f91c: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F928u;
            goto label_11f928;
        }
    }
    ctx->pc = 0x11F920u;
    // 0x11f920: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F920u;
    {
        const bool branch_taken_0x11f920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F920u;
            // 0x11f924: 0xace40008  sw          $a0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f920) {
            ctx->pc = 0x11F934u;
            goto label_11f934;
        }
    }
    ctx->pc = 0x11F928u;
label_11f928:
    // 0x11f928: 0xc048006  jal         func_120018
    ctx->pc = 0x11F928u;
    SET_GPR_U32(ctx, 31, 0x11F930u);
    ctx->pc = 0x11F92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F928u;
            // 0x11f92c: 0x24844c38  addiu       $a0, $a0, 0x4C38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F930u; }
        if (ctx->pc != 0x11F930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F930u; }
        if (ctx->pc != 0x11F930u) { return; }
    }
    ctx->pc = 0x11F930u;
    // 0x11f930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11f930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f934:
    // 0x11f934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f938: 0x3e00008  jr          $ra
    ctx->pc = 0x11F938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F938u;
            // 0x11f93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F8ECu: goto label_11f8ec;
            case 0x11F928u: goto label_11f928;
            case 0x11F934u: goto label_11f934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F940u;
}
