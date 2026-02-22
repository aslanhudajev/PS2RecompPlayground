#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initialiseSystem
// Address: 0x1024c8 - 0x102574
void initialiseSystem_0x1024c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1024c8u;

    // 0x1024c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1024c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1024cc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1024ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1024d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1024d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1024d4: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x1024d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x1024d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1024d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1024dc: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x1024dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x1024e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1024e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1024e4: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x1024e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x1024e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1024e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1024ec: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x1024ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x1024f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1024f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1024f4: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x1024f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
label_1024f8:
    // 0x1024f8: 0xc0453aa  jal         func_114EA8
    ctx->pc = 0x1024F8u;
    SET_GPR_U32(ctx, 31, 0x102500u);
    ctx->pc = 0x1024FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1024F8u;
            // 0x1024fc: 0x26042d60  addiu       $a0, $s0, 0x2D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114EA8u;
    if (runtime->hasFunction(0x114EA8u)) {
        auto targetFn = runtime->lookupFunction(0x114EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102500u; }
        if (ctx->pc != 0x102500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifRebootIop_0x114ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102500u; }
        if (ctx->pc != 0x102500u) { return; }
    }
    ctx->pc = 0x102500u;
    // 0x102500: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x102500u;
    {
        const bool branch_taken_0x102500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102500) {
            ctx->pc = 0x1024F8u;
            goto label_1024f8;
        }
    }
    ctx->pc = 0x102508u;
label_102508:
    // 0x102508: 0xc045398  jal         func_114E60
    ctx->pc = 0x102508u;
    SET_GPR_U32(ctx, 31, 0x102510u);
    ctx->pc = 0x114E60u;
    if (runtime->hasFunction(0x114E60u)) {
        auto targetFn = runtime->lookupFunction(0x114E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102510u; }
        if (ctx->pc != 0x102510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifSyncIop_0x114e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102510u; }
        if (ctx->pc != 0x102510u) { return; }
    }
    ctx->pc = 0x102510u;
    // 0x102510: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x102510u;
    {
        const bool branch_taken_0x102510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102510) {
            ctx->pc = 0x102508u;
            goto label_102508;
        }
    }
    ctx->pc = 0x102518u;
    // 0x102518: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x102518u;
    SET_GPR_U32(ctx, 31, 0x102520u);
    ctx->pc = 0x10251Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102518u;
            // 0x10251c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (runtime->hasFunction(0x10FC40u)) {
        auto targetFn = runtime->lookupFunction(0x10FC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102520u; }
        if (ctx->pc != 0x102520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x10fc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102520u; }
        if (ctx->pc != 0x102520u) { return; }
    }
    ctx->pc = 0x102520u;
    // 0x102520: 0xc046130  jal         func_1184C0
    ctx->pc = 0x102520u;
    SET_GPR_U32(ctx, 31, 0x102528u);
    ctx->pc = 0x102524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102520u;
            // 0x102524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1184C0u;
    if (runtime->hasFunction(0x1184C0u)) {
        auto targetFn = runtime->lookupFunction(0x1184C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102528u; }
        if (ctx->pc != 0x102528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x1184c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102528u; }
        if (ctx->pc != 0x102528u) { return; }
    }
    ctx->pc = 0x102528u;
    // 0x102528: 0xc046266  jal         func_118998
    ctx->pc = 0x102528u;
    SET_GPR_U32(ctx, 31, 0x102530u);
    ctx->pc = 0x10252Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102528u;
            // 0x10252c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118998u;
    if (runtime->hasFunction(0x118998u)) {
        auto targetFn = runtime->lookupFunction(0x118998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102530u; }
        if (ctx->pc != 0x102530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdMmode_0x118998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102530u; }
        if (ctx->pc != 0x102530u) { return; }
    }
    ctx->pc = 0x102530u;
    // 0x102530: 0xc0444dc  jal         func_111370
    ctx->pc = 0x102530u;
    SET_GPR_U32(ctx, 31, 0x102538u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102538u; }
        if (ctx->pc != 0x102538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceFsReset_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102538u; }
        if (ctx->pc != 0x102538u) { return; }
    }
    ctx->pc = 0x102538u;
    // 0x102538: 0xc04006a  jal         func_1001A8
    ctx->pc = 0x102538u;
    SET_GPR_U32(ctx, 31, 0x102540u);
    ctx->pc = 0x10253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102538u;
            // 0x10253c: 0x26242d88  addiu       $a0, $s1, 0x2D88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001A8u;
    if (runtime->hasFunction(0x1001A8u)) {
        auto targetFn = runtime->lookupFunction(0x1001A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102540u; }
        if (ctx->pc != 0x102540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        loadModule_0x1001a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102540u; }
        if (ctx->pc != 0x102540u) { return; }
    }
    ctx->pc = 0x102540u;
    // 0x102540: 0xc04006a  jal         func_1001A8
    ctx->pc = 0x102540u;
    SET_GPR_U32(ctx, 31, 0x102548u);
    ctx->pc = 0x102544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102540u;
            // 0x102544: 0x26442db0  addiu       $a0, $s2, 0x2DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001A8u;
    if (runtime->hasFunction(0x1001A8u)) {
        auto targetFn = runtime->lookupFunction(0x1001A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102548u; }
        if (ctx->pc != 0x102548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        loadModule_0x1001a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102548u; }
        if (ctx->pc != 0x102548u) { return; }
    }
    ctx->pc = 0x102548u;
    // 0x102548: 0xc04006a  jal         func_1001A8
    ctx->pc = 0x102548u;
    SET_GPR_U32(ctx, 31, 0x102550u);
    ctx->pc = 0x10254Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102548u;
            // 0x10254c: 0x26642dd8  addiu       $a0, $s3, 0x2DD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001A8u;
    if (runtime->hasFunction(0x1001A8u)) {
        auto targetFn = runtime->lookupFunction(0x1001A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102550u; }
        if (ctx->pc != 0x102550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        loadModule_0x1001a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102550u; }
        if (ctx->pc != 0x102550u) { return; }
    }
    ctx->pc = 0x102550u;
    // 0x102550: 0x26842e00  addiu       $a0, $s4, 0x2E00
    ctx->pc = 0x102550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 11776));
    // 0x102554: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x102554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102558: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x102558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10255c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10255cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102560: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x102560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102564: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10256c: 0x804006a  j           func_1001A8
    ctx->pc = 0x10256Cu;
    ctx->pc = 0x102570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10256Cu;
            // 0x102570: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001A8u;
    if (runtime->hasFunction(0x1001A8u)) {
        auto targetFn = runtime->lookupFunction(0x1001A8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        loadModule_0x1001a8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x102574u;
}
