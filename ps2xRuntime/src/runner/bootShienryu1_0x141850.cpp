#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: bootShienryu1
// Address: 0x141850 - 0x1418ac
void bootShienryu1_0x141850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("bootShienryu1_0x141850");
#endif

    ctx->pc = 0x141850u;

    // 0x141850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x141850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x141854: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x141854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x141858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14185c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x14185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141860: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x141860u;
    SET_GPR_U32(ctx, 31, 0x141868u);
    ctx->pc = 0x141864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141860u;
            // 0x141864: 0x24a50770  addiu       $a1, $a1, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141868u; }
        if (ctx->pc != 0x141868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141868u; }
        if (ctx->pc != 0x141868u) { return; }
    }
    ctx->pc = 0x141868u;
    // 0x141868: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x14186c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x14186cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141870: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x141870u;
    SET_GPR_U32(ctx, 31, 0x141878u);
    ctx->pc = 0x141874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141870u;
            // 0x141874: 0x24840788  addiu       $a0, $a0, 0x788 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141878u; }
        if (ctx->pc != 0x141878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141878u; }
        if (ctx->pc != 0x141878u) { return; }
    }
    ctx->pc = 0x141878u;
    // 0x141878: 0xc04c52a  jal         func_1314A8
    ctx->pc = 0x141878u;
    SET_GPR_U32(ctx, 31, 0x141880u);
    ctx->pc = 0x14187Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141878u;
            // 0x14187c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1314A8u;
    if (runtime->hasFunction(0x1314A8u)) {
        auto targetFn = runtime->lookupFunction(0x1314A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141880u; }
        if (ctx->pc != 0x141880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x1314a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141880u; }
        if (ctx->pc != 0x141880u) { return; }
    }
    ctx->pc = 0x141880u;
    // 0x141880: 0xc041144  jal         func_104510
    ctx->pc = 0x141880u;
    SET_GPR_U32(ctx, 31, 0x141888u);
    ctx->pc = 0x141884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141880u;
            // 0x141884: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104510u;
    if (runtime->hasFunction(0x104510u)) {
        auto targetFn = runtime->lookupFunction(0x104510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141888u; }
        if (ctx->pc != 0x141888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x104510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141888u; }
        if (ctx->pc != 0x141888u) { return; }
    }
    ctx->pc = 0x141888u;
    // 0x141888: 0xc04c416  jal         func_131058
    ctx->pc = 0x141888u;
    SET_GPR_U32(ctx, 31, 0x141890u);
    ctx->pc = 0x131058u;
    if (runtime->hasFunction(0x131058u)) {
        auto targetFn = runtime->lookupFunction(0x131058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141890u; }
        if (ctx->pc != 0x141890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifExitCmd_0x131058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141890u; }
        if (ctx->pc != 0x141890u) { return; }
    }
    ctx->pc = 0x141890u;
    // 0x141890: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141898: 0xc04dff2  jal         func_137FC8
    ctx->pc = 0x141898u;
    SET_GPR_U32(ctx, 31, 0x1418A0u);
    ctx->pc = 0x14189Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141898u;
            // 0x14189c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137FC8u;
    if (runtime->hasFunction(0x137FC8u)) {
        auto targetFn = runtime->lookupFunction(0x137FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418A0u; }
        if (ctx->pc != 0x1418A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadExecPS2_0x137fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418A0u; }
        if (ctx->pc != 0x1418A0u) { return; }
    }
    ctx->pc = 0x1418A0u;
    // 0x1418a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1418a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1418a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1418A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1418A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1418A4u;
            // 0x1418a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1418ACu;
}
