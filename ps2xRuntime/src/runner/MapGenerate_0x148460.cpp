#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapGenerate
// Address: 0x148460 - 0x14853c
void MapGenerate_0x148460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapGenerate_0x148460");
#endif

    ctx->pc = 0x148460u;

    // 0x148460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x148464: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x148464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x148468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14846c: 0x8c233514  lw          $v1, 0x3514($at)
    ctx->pc = 0x14846cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x148470: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x148470u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x148474: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x148474u;
    {
        const bool branch_taken_0x148474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x148478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148474u;
            // 0x148478: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148474) {
            ctx->pc = 0x148530u;
            goto label_148530;
        }
    }
    ctx->pc = 0x14847Cu;
    // 0x14847c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14847cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148480: 0x24840b00  addiu       $a0, $a0, 0xB00
    ctx->pc = 0x148480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2816));
    // 0x148484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148488: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14848c: 0x600008  jr          $v1
    ctx->pc = 0x14848Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148498u: goto label_148498;
            case 0x1484A8u: goto label_1484a8;
            case 0x1484B8u: goto label_1484b8;
            case 0x1484C8u: goto label_1484c8;
            case 0x1484D8u: goto label_1484d8;
            case 0x1484E8u: goto label_1484e8;
            case 0x1484F8u: goto label_1484f8;
            case 0x148508u: goto label_148508;
            case 0x148518u: goto label_148518;
            case 0x148528u: goto label_148528;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148494u;
    // 0x148494: 0x0  nop
    ctx->pc = 0x148494u;
    // NOP
label_148498:
    // 0x148498: 0xc051e0c  jal         func_147830
    ctx->pc = 0x148498u;
    SET_GPR_U32(ctx, 31, 0x1484A0u);
    ctx->pc = 0x147830u;
    if (runtime->hasFunction(0x147830u)) {
        auto targetFn = runtime->lookupFunction(0x147830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484A0u; }
        if (ctx->pc != 0x1484A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage1mapGenerate_0x147830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484A0u; }
        if (ctx->pc != 0x1484A0u) { return; }
    }
    ctx->pc = 0x1484A0u;
    // 0x1484a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1484A0u;
    {
        const bool branch_taken_0x1484a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484a0) {
            ctx->pc = 0x148530u;
            goto label_148530;
        }
    }
    ctx->pc = 0x1484A8u;
label_1484a8:
    // 0x1484a8: 0xc051a3c  jal         func_1468F0
    ctx->pc = 0x1484A8u;
    SET_GPR_U32(ctx, 31, 0x1484B0u);
    ctx->pc = 0x1468F0u;
    if (runtime->hasFunction(0x1468F0u)) {
        auto targetFn = runtime->lookupFunction(0x1468F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484B0u; }
        if (ctx->pc != 0x1484B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage2mapGenerate_0x1468f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484B0u; }
        if (ctx->pc != 0x1484B0u) { return; }
    }
    ctx->pc = 0x1484B0u;
    // 0x1484b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1484B0u;
    {
        const bool branch_taken_0x1484b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484b0) {
            ctx->pc = 0x148530u;
            goto label_148530;
        }
    }
    ctx->pc = 0x1484B8u;
label_1484b8:
    // 0x1484b8: 0xc051744  jal         func_145D10
    ctx->pc = 0x1484B8u;
    SET_GPR_U32(ctx, 31, 0x1484C0u);
    ctx->pc = 0x145D10u;
    if (runtime->hasFunction(0x145D10u)) {
        auto targetFn = runtime->lookupFunction(0x145D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484C0u; }
        if (ctx->pc != 0x1484C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage3mapGenerate_0x145d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484C0u; }
        if (ctx->pc != 0x1484C0u) { return; }
    }
    ctx->pc = 0x1484C0u;
    // 0x1484c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1484C0u;
    {
        const bool branch_taken_0x1484c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484c0) {
            ctx->pc = 0x148530u;
            goto label_148530;
        }
    }
    ctx->pc = 0x1484C8u;
label_1484c8:
    // 0x1484c8: 0xc051538  jal         func_1454E0
    ctx->pc = 0x1484C8u;
    SET_GPR_U32(ctx, 31, 0x1484D0u);
    ctx->pc = 0x1454E0u;
    if (runtime->hasFunction(0x1454E0u)) {
        auto targetFn = runtime->lookupFunction(0x1454E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484D0u; }
        if (ctx->pc != 0x1484D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage4mapGenerate_0x1454e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484D0u; }
        if (ctx->pc != 0x1484D0u) { return; }
    }
    ctx->pc = 0x1484D0u;
    // 0x1484d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1484D0u;
    {
        const bool branch_taken_0x1484d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484d0) {
            ctx->pc = 0x148530u;
            goto label_148530;
        }
    }
    ctx->pc = 0x1484D8u;
label_1484d8:
    // 0x1484d8: 0xc0511a0  jal         func_144680
    ctx->pc = 0x1484D8u;
    SET_GPR_U32(ctx, 31, 0x1484E0u);
    ctx->pc = 0x144680u;
    if (runtime->hasFunction(0x144680u)) {
        auto targetFn = runtime->lookupFunction(0x144680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484E0u; }
        if (ctx->pc != 0x1484E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage5mapGenerate_0x144680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484E0u; }
        if (ctx->pc != 0x1484E0u) { return; }
    }
    ctx->pc = 0x1484E0u;
    // 0x1484e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1484E0u;
    {
        const bool branch_taken_0x1484e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484e0) {
            ctx->pc = 0x148530u;
            goto label_148530;
        }
    }
    ctx->pc = 0x1484E8u;
label_1484e8:
    // 0x1484e8: 0xc0510a0  jal         func_144280
    ctx->pc = 0x1484E8u;
    SET_GPR_U32(ctx, 31, 0x1484F0u);
    ctx->pc = 0x144280u;
    if (runtime->hasFunction(0x144280u)) {
        auto targetFn = runtime->lookupFunction(0x144280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484F0u; }
        if (ctx->pc != 0x1484F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage6mapGenerate_0x144280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1484F0u; }
        if (ctx->pc != 0x1484F0u) { return; }
    }
    ctx->pc = 0x1484F0u;
    // 0x1484f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1484F0u;
    {
        const bool branch_taken_0x1484f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484f0) {
            ctx->pc = 0x148530u;
            goto label_148530;
        }
    }
    ctx->pc = 0x1484F8u;
label_1484f8:
    // 0x1484f8: 0xc050f48  jal         func_143D20
    ctx->pc = 0x1484F8u;
    SET_GPR_U32(ctx, 31, 0x148500u);
    ctx->pc = 0x143D20u;
    if (runtime->hasFunction(0x143D20u)) {
        auto targetFn = runtime->lookupFunction(0x143D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148500u; }
        if (ctx->pc != 0x148500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage7mapGenerate_0x143d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148500u; }
        if (ctx->pc != 0x148500u) { return; }
    }
    ctx->pc = 0x148500u;
    // 0x148500: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x148500u;
    {
        const bool branch_taken_0x148500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148500) {
            ctx->pc = 0x148530u;
            goto label_148530;
        }
    }
    ctx->pc = 0x148508u;
label_148508:
    // 0x148508: 0xc050e0c  jal         func_143830
    ctx->pc = 0x148508u;
    SET_GPR_U32(ctx, 31, 0x148510u);
    ctx->pc = 0x143830u;
    if (runtime->hasFunction(0x143830u)) {
        auto targetFn = runtime->lookupFunction(0x143830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148510u; }
        if (ctx->pc != 0x148510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage8mapGenerate_0x143830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148510u; }
        if (ctx->pc != 0x148510u) { return; }
    }
    ctx->pc = 0x148510u;
    // 0x148510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x148510u;
    {
        const bool branch_taken_0x148510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148510) {
            ctx->pc = 0x148530u;
            goto label_148530;
        }
    }
    ctx->pc = 0x148518u;
label_148518:
    // 0x148518: 0xc050d30  jal         func_1434C0
    ctx->pc = 0x148518u;
    SET_GPR_U32(ctx, 31, 0x148520u);
    ctx->pc = 0x1434C0u;
    if (runtime->hasFunction(0x1434C0u)) {
        auto targetFn = runtime->lookupFunction(0x1434C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148520u; }
        if (ctx->pc != 0x148520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX1mapGenerate_0x1434c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148520u; }
        if (ctx->pc != 0x148520u) { return; }
    }
    ctx->pc = 0x148520u;
    // 0x148520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x148520u;
    {
        const bool branch_taken_0x148520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148520) {
            ctx->pc = 0x148530u;
            goto label_148530;
        }
    }
    ctx->pc = 0x148528u;
label_148528:
    // 0x148528: 0xc050c84  jal         func_143210
    ctx->pc = 0x148528u;
    SET_GPR_U32(ctx, 31, 0x148530u);
    ctx->pc = 0x143210u;
    if (runtime->hasFunction(0x143210u)) {
        auto targetFn = runtime->lookupFunction(0x143210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148530u; }
        if (ctx->pc != 0x148530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX2mapGenerate_0x143210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148530u; }
        if (ctx->pc != 0x148530u) { return; }
    }
    ctx->pc = 0x148530u;
label_148530:
    // 0x148530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148534: 0x3e00008  jr          $ra
    ctx->pc = 0x148534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148534u;
            // 0x148538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148498u: goto label_148498;
            case 0x1484A8u: goto label_1484a8;
            case 0x1484B8u: goto label_1484b8;
            case 0x1484C8u: goto label_1484c8;
            case 0x1484D8u: goto label_1484d8;
            case 0x1484E8u: goto label_1484e8;
            case 0x1484F8u: goto label_1484f8;
            case 0x148508u: goto label_148508;
            case 0x148518u: goto label_148518;
            case 0x148528u: goto label_148528;
            case 0x148530u: goto label_148530;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14853Cu;
}
