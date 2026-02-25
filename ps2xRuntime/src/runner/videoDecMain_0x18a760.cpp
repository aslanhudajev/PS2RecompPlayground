#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecMain
// Address: 0x18a760 - 0x18a7c8
void videoDecMain_0x18a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecMain_0x18a760");
#endif

    ctx->pc = 0x18a760u;

    // 0x18a760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a770: 0xc0627f4  jal         func_189FD0
    ctx->pc = 0x18A770u;
    SET_GPR_U32(ctx, 31, 0x18A778u);
    ctx->pc = 0x18A774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A770u;
            // 0x18a774: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FD0u;
    if (runtime->hasFunction(0x189FD0u)) {
        auto targetFn = runtime->lookupFunction(0x189FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A778u; }
        if (ctx->pc != 0x18A778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufReset_0x189fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A778u; }
        if (ctx->pc != 0x18A778u) { return; }
    }
    ctx->pc = 0x18A778u;
    // 0x18a778: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x18a778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18a77c: 0xc062b30  jal         func_18ACC0
    ctx->pc = 0x18A77Cu;
    SET_GPR_U32(ctx, 31, 0x18A784u);
    ctx->pc = 0x18A780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A77Cu;
            // 0x18a780: 0x2484fd80  addiu       $a0, $a0, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ACC0u;
    if (runtime->hasFunction(0x18ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x18ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A784u; }
        if (ctx->pc != 0x18A784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufReset_0x18acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A784u; }
        if (ctx->pc != 0x18A784u) { return; }
    }
    ctx->pc = 0x18A784u;
    // 0x18a784: 0xc062964  jal         func_18A590
    ctx->pc = 0x18A784u;
    SET_GPR_U32(ctx, 31, 0x18A78Cu);
    ctx->pc = 0x18A788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A784u;
            // 0x18a788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A590u;
    if (runtime->hasFunction(0x18A590u)) {
        auto targetFn = runtime->lookupFunction(0x18A590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A78Cu; }
        if (ctx->pc != 0x18A78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        decBs0_0x18a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A78Cu; }
        if (ctx->pc != 0x18A78Cu) { return; }
    }
    ctx->pc = 0x18A78Cu;
    // 0x18a78c: 0x0  nop
    ctx->pc = 0x18a78cu;
    // NOP
label_18a790:
    // 0x18a790: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18a790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18a794: 0x8c22fd8c  lw          $v0, -0x274($at)
    ctx->pc = 0x18a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966668)));
    // 0x18a798: 0x0  nop
    ctx->pc = 0x18a798u;
    // NOP
    // 0x18a79c: 0x0  nop
    ctx->pc = 0x18a79cu;
    // NOP
    // 0x18a7a0: 0x0  nop
    ctx->pc = 0x18a7a0u;
    // NOP
    // 0x18a7a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18A7A4u;
    {
        const bool branch_taken_0x18a7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a7a4) {
            ctx->pc = 0x18A790u;
            goto label_18a790;
        }
    }
    ctx->pc = 0x18A7ACu;
    // 0x18a7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7b0: 0xc062a50  jal         func_18A940
    ctx->pc = 0x18A7B0u;
    SET_GPR_U32(ctx, 31, 0x18A7B8u);
    ctx->pc = 0x18A7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7B0u;
            // 0x18a7b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A940u;
    if (runtime->hasFunction(0x18A940u)) {
        auto targetFn = runtime->lookupFunction(0x18A940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A7B8u; }
        if (ctx->pc != 0x18A7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetState_0x18a940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A7B8u; }
        if (ctx->pc != 0x18A7B8u) { return; }
    }
    ctx->pc = 0x18A7B8u;
    // 0x18a7b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a7bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7C0u;
            // 0x18a7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A790u: goto label_18a790;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A7C8u;
}
