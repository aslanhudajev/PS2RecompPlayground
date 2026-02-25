#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapLightColorControl
// Address: 0x1e24f0 - 0x1e2560
void MapLightColorControl_0x1e24f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapLightColorControl_0x1e24f0");
#endif

    ctx->pc = 0x1e24f0u;

    // 0x1e24f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e24f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e24f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e24f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e24f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e24fc: 0xc056f74  jal         func_15BDD0
    ctx->pc = 0x1E24FCu;
    SET_GPR_U32(ctx, 31, 0x1E2504u);
    ctx->pc = 0x1E2500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24FCu;
            // 0x1e2500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BDD0u;
    if (runtime->hasFunction(0x15BDD0u)) {
        auto targetFn = runtime->lookupFunction(0x15BDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2504u; }
        if (ctx->pc != 0x1E2504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getGameStage_0x15bdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2504u; }
        if (ctx->pc != 0x1E2504u) { return; }
    }
    ctx->pc = 0x1E2504u;
    // 0x1e2504: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e2504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2508: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E2508u;
    {
        const bool branch_taken_0x1e2508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2508u;
            // 0x1e250c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2508) {
            ctx->pc = 0x1E2548u;
            goto label_1e2548;
        }
    }
    ctx->pc = 0x1E2510u;
    // 0x1e2510: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2510u;
    {
        const bool branch_taken_0x1e2510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2510) {
            ctx->pc = 0x1E2538u;
            goto label_1e2538;
        }
    }
    ctx->pc = 0x1E2518u;
    // 0x1e2518: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2518u;
    {
        const bool branch_taken_0x1e2518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2518) {
            ctx->pc = 0x1E2528u;
            goto label_1e2528;
        }
    }
    ctx->pc = 0x1E2520u;
    // 0x1e2520: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E2520u;
    {
        const bool branch_taken_0x1e2520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2520) {
            ctx->pc = 0x1E2550u;
            goto label_1e2550;
        }
    }
    ctx->pc = 0x1E2528u;
label_1e2528:
    // 0x1e2528: 0xc0789dc  jal         func_1E2770
    ctx->pc = 0x1E2528u;
    SET_GPR_U32(ctx, 31, 0x1E2530u);
    ctx->pc = 0x1E252Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2528u;
            // 0x1e252c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2770u;
    if (runtime->hasFunction(0x1E2770u)) {
        auto targetFn = runtime->lookupFunction(0x1E2770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2530u; }
        if (ctx->pc != 0x1E2530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage1MapColorControl_0x1e2770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2530u; }
        if (ctx->pc != 0x1E2530u) { return; }
    }
    ctx->pc = 0x1E2530u;
    // 0x1e2530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2530u;
    {
        const bool branch_taken_0x1e2530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2530) {
            ctx->pc = 0x1E2550u;
            goto label_1e2550;
        }
    }
    ctx->pc = 0x1E2538u;
label_1e2538:
    // 0x1e2538: 0xc078994  jal         func_1E2650
    ctx->pc = 0x1E2538u;
    SET_GPR_U32(ctx, 31, 0x1E2540u);
    ctx->pc = 0x1E253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2538u;
            // 0x1e253c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2650u;
    if (runtime->hasFunction(0x1E2650u)) {
        auto targetFn = runtime->lookupFunction(0x1E2650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2540u; }
        if (ctx->pc != 0x1E2540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage3MapColorControl_0x1e2650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2540u; }
        if (ctx->pc != 0x1E2540u) { return; }
    }
    ctx->pc = 0x1E2540u;
    // 0x1e2540: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2540u;
    {
        const bool branch_taken_0x1e2540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2540) {
            ctx->pc = 0x1E2550u;
            goto label_1e2550;
        }
    }
    ctx->pc = 0x1E2548u;
label_1e2548:
    // 0x1e2548: 0xc078958  jal         func_1E2560
    ctx->pc = 0x1E2548u;
    SET_GPR_U32(ctx, 31, 0x1E2550u);
    ctx->pc = 0x1E254Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2548u;
            // 0x1e254c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2560u;
    if (runtime->hasFunction(0x1E2560u)) {
        auto targetFn = runtime->lookupFunction(0x1E2560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2550u; }
        if (ctx->pc != 0x1E2550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage4MapColorControl_0x1e2560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2550u; }
        if (ctx->pc != 0x1E2550u) { return; }
    }
    ctx->pc = 0x1E2550u;
label_1e2550:
    // 0x1e2550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2558: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E255Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2558u;
            // 0x1e255c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2528u: goto label_1e2528;
            case 0x1E2538u: goto label_1e2538;
            case 0x1E2548u: goto label_1e2548;
            case 0x1E2550u: goto label_1e2550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2560u;
}
