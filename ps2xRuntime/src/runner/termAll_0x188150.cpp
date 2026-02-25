#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: termAll
// Address: 0x188150 - 0x1881f0
void termAll_0x188150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("termAll_0x188150");
#endif

    ctx->pc = 0x188150u;

    // 0x188150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188154: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18815c: 0xc062390  jal         func_188E40
    ctx->pc = 0x18815Cu;
    SET_GPR_U32(ctx, 31, 0x188164u);
    ctx->pc = 0x188160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18815Cu;
            // 0x188160: 0x2484ff40  addiu       $a0, $a0, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188E40u;
    if (runtime->hasFunction(0x188E40u)) {
        auto targetFn = runtime->lookupFunction(0x188E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188164u; }
        if (ctx->pc != 0x188164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufDelete_0x188e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188164u; }
        if (ctx->pc != 0x188164u) { return; }
    }
    ctx->pc = 0x188164u;
    // 0x188164: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188168: 0xc062b34  jal         func_18ACD0
    ctx->pc = 0x188168u;
    SET_GPR_U32(ctx, 31, 0x188170u);
    ctx->pc = 0x18816Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188168u;
            // 0x18816c: 0x2484fd80  addiu       $a0, $a0, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ACD0u;
    if (runtime->hasFunction(0x18ACD0u)) {
        auto targetFn = runtime->lookupFunction(0x18ACD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188170u; }
        if (ctx->pc != 0x188170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufDelete_0x18acd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188170u; }
        if (ctx->pc != 0x188170u) { return; }
    }
    ctx->pc = 0x188170u;
    // 0x188170: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188174: 0xc04baac  jal         func_12EAB0
    ctx->pc = 0x188174u;
    SET_GPR_U32(ctx, 31, 0x18817Cu);
    ctx->pc = 0x188178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188174u;
            // 0x188178: 0x8c24ff00  lw          $a0, -0x100($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EAB0u;
    if (runtime->hasFunction(0x12EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18817Cu; }
        if (ctx->pc != 0x18817Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x12eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18817Cu; }
        if (ctx->pc != 0x18817Cu) { return; }
    }
    ctx->pc = 0x18817Cu;
    // 0x18817c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18817cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188180: 0xc04ba9c  jal         func_12EA70
    ctx->pc = 0x188180u;
    SET_GPR_U32(ctx, 31, 0x188188u);
    ctx->pc = 0x188184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188180u;
            // 0x188184: 0x8c24ff00  lw          $a0, -0x100($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA70u;
    if (runtime->hasFunction(0x12EA70u)) {
        auto targetFn = runtime->lookupFunction(0x12EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188188u; }
        if (ctx->pc != 0x188188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x12ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188188u; }
        if (ctx->pc != 0x188188u) { return; }
    }
    ctx->pc = 0x188188u;
    // 0x188188: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18818c: 0xc04baac  jal         func_12EAB0
    ctx->pc = 0x18818Cu;
    SET_GPR_U32(ctx, 31, 0x188194u);
    ctx->pc = 0x188190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18818Cu;
            // 0x188190: 0x8c24fef8  lw          $a0, -0x108($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967032)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EAB0u;
    if (runtime->hasFunction(0x12EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188194u; }
        if (ctx->pc != 0x188194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x12eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188194u; }
        if (ctx->pc != 0x188194u) { return; }
    }
    ctx->pc = 0x188194u;
    // 0x188194: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188198: 0xc04ba9c  jal         func_12EA70
    ctx->pc = 0x188198u;
    SET_GPR_U32(ctx, 31, 0x1881A0u);
    ctx->pc = 0x18819Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188198u;
            // 0x18819c: 0x8c24fef8  lw          $a0, -0x108($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967032)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA70u;
    if (runtime->hasFunction(0x12EA70u)) {
        auto targetFn = runtime->lookupFunction(0x12EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881A0u; }
        if (ctx->pc != 0x1881A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x12ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881A0u; }
        if (ctx->pc != 0x1881A0u) { return; }
    }
    ctx->pc = 0x1881A0u;
    // 0x1881a0: 0xc04be04  jal         func_12F810
    ctx->pc = 0x1881A0u;
    SET_GPR_U32(ctx, 31, 0x1881A8u);
    ctx->pc = 0x1881A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881A0u;
            // 0x1881a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F810u;
    if (runtime->hasFunction(0x12F810u)) {
        auto targetFn = runtime->lookupFunction(0x12F810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881A8u; }
        if (ctx->pc != 0x1881A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x12f810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881A8u; }
        if (ctx->pc != 0x1881A8u) { return; }
    }
    ctx->pc = 0x1881A8u;
    // 0x1881a8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1881a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1881ac: 0x8c25feb0  lw          $a1, -0x150($at)
    ctx->pc = 0x1881acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966960)));
    // 0x1881b0: 0xc04ba64  jal         func_12E990
    ctx->pc = 0x1881B0u;
    SET_GPR_U32(ctx, 31, 0x1881B8u);
    ctx->pc = 0x1881B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881B0u;
            // 0x1881b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E990u;
    if (runtime->hasFunction(0x12E990u)) {
        auto targetFn = runtime->lookupFunction(0x12E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881B8u; }
        if (ctx->pc != 0x1881B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x12e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881B8u; }
        if (ctx->pc != 0x1881B8u) { return; }
    }
    ctx->pc = 0x1881B8u;
    // 0x1881b8: 0xc043042  jal         func_10C108
    ctx->pc = 0x1881B8u;
    SET_GPR_U32(ctx, 31, 0x1881C0u);
    ctx->pc = 0x1881BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881B8u;
            // 0x1881bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C108u;
    if (runtime->hasFunction(0x10C108u)) {
        auto targetFn = runtime->lookupFunction(0x10C108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881C0u; }
        if (ctx->pc != 0x1881C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncVCallback_0x10c108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881C0u; }
        if (ctx->pc != 0x1881C0u) { return; }
    }
    ctx->pc = 0x1881C0u;
    // 0x1881c0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1881c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1881c4: 0xc062a58  jal         func_18A960
    ctx->pc = 0x1881C4u;
    SET_GPR_U32(ctx, 31, 0x1881CCu);
    ctx->pc = 0x1881C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881C4u;
            // 0x1881c8: 0x2484fe00  addiu       $a0, $a0, -0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A960u;
    if (runtime->hasFunction(0x18A960u)) {
        auto targetFn = runtime->lookupFunction(0x18A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881CCu; }
        if (ctx->pc != 0x1881CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecDelete_0x18a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881CCu; }
        if (ctx->pc != 0x1881CCu) { return; }
    }
    ctx->pc = 0x1881CCu;
    // 0x1881cc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1881ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1881d0: 0xc061dc4  jal         func_187710
    ctx->pc = 0x1881D0u;
    SET_GPR_U32(ctx, 31, 0x1881D8u);
    ctx->pc = 0x1881D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881D0u;
            // 0x1881d4: 0x2484fda0  addiu       $a0, $a0, -0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187710u;
    if (runtime->hasFunction(0x187710u)) {
        auto targetFn = runtime->lookupFunction(0x187710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881D8u; }
        if (ctx->pc != 0x1881D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecDelete_0x187710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881D8u; }
        if (ctx->pc != 0x1881D8u) { return; }
    }
    ctx->pc = 0x1881D8u;
    // 0x1881d8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1881d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1881dc: 0xc0623b4  jal         func_188ED0
    ctx->pc = 0x1881DCu;
    SET_GPR_U32(ctx, 31, 0x1881E4u);
    ctx->pc = 0x1881E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881DCu;
            // 0x1881e0: 0x2484fec0  addiu       $a0, $a0, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188ED0u;
    if (runtime->hasFunction(0x188ED0u)) {
        auto targetFn = runtime->lookupFunction(0x188ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881E4u; }
        if (ctx->pc != 0x1881E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileClose_0x188ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881E4u; }
        if (ctx->pc != 0x1881E4u) { return; }
    }
    ctx->pc = 0x1881E4u;
    // 0x1881e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1881e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1881e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1881E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1881ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1881E8u;
            // 0x1881ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1881F0u;
}
