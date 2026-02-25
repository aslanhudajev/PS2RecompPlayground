#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CloneRenderFunction2
// Address: 0x181440 - 0x1814a4
void CloneRenderFunction2_0x181440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CloneRenderFunction2_0x181440");
#endif

    ctx->pc = 0x181440u;

    // 0x181440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18144c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18144cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181454: 0x8c840174  lw          $a0, 0x174($a0)
    ctx->pc = 0x181454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x181458: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x181458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18145c: 0xc0431b0  jal         func_10C6C0
    ctx->pc = 0x18145Cu;
    SET_GPR_U32(ctx, 31, 0x181464u);
    ctx->pc = 0x181460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18145Cu;
            // 0x181460: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6C0u;
    if (runtime->hasFunction(0x10C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181464u; }
        if (ctx->pc != 0x181464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiCallPlug_0x10c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181464u; }
        if (ctx->pc != 0x181464u) { return; }
    }
    ctx->pc = 0x181464u;
    // 0x181464: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x181464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x181468: 0xc0431b0  jal         func_10C6C0
    ctx->pc = 0x181468u;
    SET_GPR_U32(ctx, 31, 0x181470u);
    ctx->pc = 0x18146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181468u;
            // 0x18146c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6C0u;
    if (runtime->hasFunction(0x10C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181470u; }
        if (ctx->pc != 0x181470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiCallPlug_0x10c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181470u; }
        if (ctx->pc != 0x181470u) { return; }
    }
    ctx->pc = 0x181470u;
    // 0x181470: 0x8e240184  lw          $a0, 0x184($s1)
    ctx->pc = 0x181470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x181474: 0xc0431b0  jal         func_10C6C0
    ctx->pc = 0x181474u;
    SET_GPR_U32(ctx, 31, 0x18147Cu);
    ctx->pc = 0x181478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181474u;
            // 0x181478: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6C0u;
    if (runtime->hasFunction(0x10C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18147Cu; }
        if (ctx->pc != 0x18147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiCallPlug_0x10c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18147Cu; }
        if (ctx->pc != 0x18147Cu) { return; }
    }
    ctx->pc = 0x18147Cu;
    // 0x18147c: 0xc043692  jal         func_10DA48
    ctx->pc = 0x18147Cu;
    SET_GPR_U32(ctx, 31, 0x181484u);
    ctx->pc = 0x181480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18147Cu;
            // 0x181480: 0x8e040100  lw          $a0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DA48u;
    if (runtime->hasFunction(0x10DA48u)) {
        auto targetFn = runtime->lookupFunction(0x10DA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181484u; }
        if (ctx->pc != 0x181484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMARegist_0x10da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181484u; }
        if (ctx->pc != 0x181484u) { return; }
    }
    ctx->pc = 0x181484u;
    // 0x181484: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x181484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x181488: 0xc0431b0  jal         func_10C6C0
    ctx->pc = 0x181488u;
    SET_GPR_U32(ctx, 31, 0x181490u);
    ctx->pc = 0x18148Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181488u;
            // 0x18148c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6C0u;
    if (runtime->hasFunction(0x10C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181490u; }
        if (ctx->pc != 0x181490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiCallPlug_0x10c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181490u; }
        if (ctx->pc != 0x181490u) { return; }
    }
    ctx->pc = 0x181490u;
    // 0x181490: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18149c: 0x3e00008  jr          $ra
    ctx->pc = 0x18149Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1814A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18149Cu;
            // 0x1814a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1814A4u;
}
