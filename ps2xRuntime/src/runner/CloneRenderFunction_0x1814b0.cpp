#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CloneRenderFunction
// Address: 0x1814b0 - 0x181508
void CloneRenderFunction_0x1814b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CloneRenderFunction_0x1814b0");
#endif

    ctx->pc = 0x1814b0u;

    // 0x1814b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1814b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1814b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1814b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1814b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1814b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1814bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1814bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1814c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1814c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814c4: 0x8c840174  lw          $a0, 0x174($a0)
    ctx->pc = 0x1814c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1814c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1814c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814cc: 0xc0431b0  jal         func_10C6C0
    ctx->pc = 0x1814CCu;
    SET_GPR_U32(ctx, 31, 0x1814D4u);
    ctx->pc = 0x1814D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814CCu;
            // 0x1814d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6C0u;
    if (runtime->hasFunction(0x10C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814D4u; }
        if (ctx->pc != 0x1814D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiCallPlug_0x10c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814D4u; }
        if (ctx->pc != 0x1814D4u) { return; }
    }
    ctx->pc = 0x1814D4u;
    // 0x1814d4: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x1814d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1814d8: 0xc0431b0  jal         func_10C6C0
    ctx->pc = 0x1814D8u;
    SET_GPR_U32(ctx, 31, 0x1814E0u);
    ctx->pc = 0x1814DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814D8u;
            // 0x1814dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6C0u;
    if (runtime->hasFunction(0x10C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814E0u; }
        if (ctx->pc != 0x1814E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiCallPlug_0x10c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814E0u; }
        if (ctx->pc != 0x1814E0u) { return; }
    }
    ctx->pc = 0x1814E0u;
    // 0x1814e0: 0xc043692  jal         func_10DA48
    ctx->pc = 0x1814E0u;
    SET_GPR_U32(ctx, 31, 0x1814E8u);
    ctx->pc = 0x1814E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814E0u;
            // 0x1814e4: 0x8e040100  lw          $a0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DA48u;
    if (runtime->hasFunction(0x10DA48u)) {
        auto targetFn = runtime->lookupFunction(0x10DA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814E8u; }
        if (ctx->pc != 0x1814E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMARegist_0x10da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814E8u; }
        if (ctx->pc != 0x1814E8u) { return; }
    }
    ctx->pc = 0x1814E8u;
    // 0x1814e8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1814e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1814ec: 0xc0431b0  jal         func_10C6C0
    ctx->pc = 0x1814ECu;
    SET_GPR_U32(ctx, 31, 0x1814F4u);
    ctx->pc = 0x1814F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814ECu;
            // 0x1814f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6C0u;
    if (runtime->hasFunction(0x10C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814F4u; }
        if (ctx->pc != 0x1814F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiCallPlug_0x10c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814F4u; }
        if (ctx->pc != 0x1814F4u) { return; }
    }
    ctx->pc = 0x1814F4u;
    // 0x1814f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1814f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1814f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1814f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1814fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1814fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181500: 0x3e00008  jr          $ra
    ctx->pc = 0x181500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181500u;
            // 0x181504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181508u;
}
