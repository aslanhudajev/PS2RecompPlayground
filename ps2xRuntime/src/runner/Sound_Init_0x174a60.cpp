#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Sound_Init
// Address: 0x174a60 - 0x174acc
void Sound_Init_0x174a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Sound_Init_0x174a60");
#endif

    ctx->pc = 0x174a60u;

    // 0x174a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174a68: 0xc05cf94  jal         func_173E50
    ctx->pc = 0x174A68u;
    SET_GPR_U32(ctx, 31, 0x174A70u);
    ctx->pc = 0x173E50u;
    if (runtime->hasFunction(0x173E50u)) {
        auto targetFn = runtime->lookupFunction(0x173E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A70u; }
        if (ctx->pc != 0x174A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_InitIOP_0x173e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A70u; }
        if (ctx->pc != 0x174A70u) { return; }
    }
    ctx->pc = 0x174A70u;
    // 0x174a70: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174A70u;
    {
        const bool branch_taken_0x174a70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x174a70) {
            ctx->pc = 0x174A80u;
            goto label_174a80;
        }
    }
    ctx->pc = 0x174A78u;
    // 0x174a78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x174A78u;
    {
        const bool branch_taken_0x174a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174A78u;
            // 0x174a7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a78) {
            ctx->pc = 0x174AC0u;
            goto label_174ac0;
        }
    }
    ctx->pc = 0x174A80u;
label_174a80:
    // 0x174a80: 0xc05cd04  jal         func_173410
    ctx->pc = 0x174A80u;
    SET_GPR_U32(ctx, 31, 0x174A88u);
    ctx->pc = 0x173410u;
    if (runtime->hasFunction(0x173410u)) {
        auto targetFn = runtime->lookupFunction(0x173410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A88u; }
        if (ctx->pc != 0x174A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_InitSPU_0x173410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A88u; }
        if (ctx->pc != 0x174A88u) { return; }
    }
    ctx->pc = 0x174A88u;
    // 0x174a88: 0xc05ca30  jal         func_1728C0
    ctx->pc = 0x174A88u;
    SET_GPR_U32(ctx, 31, 0x174A90u);
    ctx->pc = 0x174A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A88u;
            // 0x174a8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1728C0u;
    if (runtime->hasFunction(0x1728C0u)) {
        auto targetFn = runtime->lookupFunction(0x1728C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A90u; }
        if (ctx->pc != 0x174A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_InitCD_0x1728c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174A90u; }
        if (ctx->pc != 0x174A90u) { return; }
    }
    ctx->pc = 0x174A90u;
    // 0x174a90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a98: 0xc05cce8  jal         func_1733A0
    ctx->pc = 0x174A98u;
    SET_GPR_U32(ctx, 31, 0x174AA0u);
    ctx->pc = 0x174A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174A98u;
            // 0x174a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1733A0u;
    if (runtime->hasFunction(0x1733A0u)) {
        auto targetFn = runtime->lookupFunction(0x1733A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AA0u; }
        if (ctx->pc != 0x174AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_InitStreamData_0x1733a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AA0u; }
        if (ctx->pc != 0x174AA0u) { return; }
    }
    ctx->pc = 0x174AA0u;
    // 0x174aa0: 0xc05ca50  jal         func_172940
    ctx->pc = 0x174AA0u;
    SET_GPR_U32(ctx, 31, 0x174AA8u);
    ctx->pc = 0x174AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174AA0u;
            // 0x174aa4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172940u;
    if (runtime->hasFunction(0x172940u)) {
        auto targetFn = runtime->lookupFunction(0x172940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AA8u; }
        if (ctx->pc != 0x174AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AllocateFileMemory_0x172940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AA8u; }
        if (ctx->pc != 0x174AA8u) { return; }
    }
    ctx->pc = 0x174AA8u;
    // 0x174aa8: 0xc05ca40  jal         func_172900
    ctx->pc = 0x174AA8u;
    SET_GPR_U32(ctx, 31, 0x174AB0u);
    ctx->pc = 0x174AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174AA8u;
            // 0x174aac: 0x2404003e  addiu       $a0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172900u;
    if (runtime->hasFunction(0x172900u)) {
        auto targetFn = runtime->lookupFunction(0x172900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AB0u; }
        if (ctx->pc != 0x174AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AllocateSpotFXMemory_0x172900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AB0u; }
        if (ctx->pc != 0x174AB0u) { return; }
    }
    ctx->pc = 0x174AB0u;
    // 0x174ab0: 0xc05caac  jal         func_172AB0
    ctx->pc = 0x174AB0u;
    SET_GPR_U32(ctx, 31, 0x174AB8u);
    ctx->pc = 0x174AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174AB0u;
            // 0x174ab4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172AB0u;
    if (runtime->hasFunction(0x172AB0u)) {
        auto targetFn = runtime->lookupFunction(0x172AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AB8u; }
        if (ctx->pc != 0x174AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushIOPCommand_0x172ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AB8u; }
        if (ctx->pc != 0x174AB8u) { return; }
    }
    ctx->pc = 0x174AB8u;
    // 0x174ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174abc: 0x0  nop
    ctx->pc = 0x174abcu;
    // NOP
label_174ac0:
    // 0x174ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x174AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174AC4u;
            // 0x174ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174A80u: goto label_174a80;
            case 0x174AC0u: goto label_174ac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174ACCu;
}
