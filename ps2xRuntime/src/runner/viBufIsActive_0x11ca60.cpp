#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufIsActive
// Address: 0x11ca60 - 0x11caa0
void viBufIsActive_0x11ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufIsActive_0x11ca60");
#endif

    ctx->pc = 0x11ca60u;

    // 0x11ca60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ca64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ca68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ca6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11ca70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ca70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca74: 0xc0438b8  jal         func_10E2E0
    ctx->pc = 0x11CA74u;
    SET_GPR_U32(ctx, 31, 0x11CA7Cu);
    ctx->pc = 0x11CA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA74u;
            // 0x11ca78: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2E0u;
    if (runtime->hasFunction(0x10E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA7Cu; }
        if (ctx->pc != 0x11CA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA7Cu; }
        if (ctx->pc != 0x11CA7Cu) { return; }
    }
    ctx->pc = 0x11CA7Cu;
    // 0x11ca7c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x11ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11ca80: 0xc0438b0  jal         func_10E2C0
    ctx->pc = 0x11CA80u;
    SET_GPR_U32(ctx, 31, 0x11CA88u);
    ctx->pc = 0x11CA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA80u;
            // 0x11ca84: 0x8e110044  lw          $s1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2C0u;
    if (runtime->hasFunction(0x10E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA88u; }
        if (ctx->pc != 0x11CA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA88u; }
        if (ctx->pc != 0x11CA88u) { return; }
    }
    ctx->pc = 0x11CA88u;
    // 0x11ca88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11ca88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ca8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ca90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11ca90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ca94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ca94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ca98: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CA98u;
            // 0x11ca9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CAA0u;
}
