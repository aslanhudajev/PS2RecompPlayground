#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CloneFree
// Address: 0x181590 - 0x1815c0
void CloneFree_0x181590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CloneFree_0x181590");
#endif

    ctx->pc = 0x181590u;

    // 0x181590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18159c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18159cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815a0: 0xc043ba0  jal         func_10EE80
    ctx->pc = 0x1815A0u;
    SET_GPR_U32(ctx, 31, 0x1815A8u);
    ctx->pc = 0x1815A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815A0u;
            // 0x1815a4: 0x8c840100  lw          $a0, 0x100($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EE80u;
    if (runtime->hasFunction(0x10EE80u)) {
        auto targetFn = runtime->lookupFunction(0x10EE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815A8u; }
        if (ctx->pc != 0x1815A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMADel_Chain_0x10ee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815A8u; }
        if (ctx->pc != 0x1815A8u) { return; }
    }
    ctx->pc = 0x1815A8u;
    // 0x1815a8: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x1815A8u;
    SET_GPR_U32(ctx, 31, 0x1815B0u);
    ctx->pc = 0x1815ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815A8u;
            // 0x1815ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815B0u; }
        if (ctx->pc != 0x1815B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815B0u; }
        if (ctx->pc != 0x1815B0u) { return; }
    }
    ctx->pc = 0x1815B0u;
    // 0x1815b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1815b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1815b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1815b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1815b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1815B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1815BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1815B8u;
            // 0x1815bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1815C0u;
}
