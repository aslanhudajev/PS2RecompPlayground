#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: error_handling
// Address: 0x167a60 - 0x167ac8
void error_handling_0x167a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("error_handling_0x167a60");
#endif

    ctx->pc = 0x167a60u;

    // 0x167a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167a64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x167a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x167a68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167a6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167a70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x167a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167a78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x167a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x167a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_167a80:
    // 0x167a80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x167a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a84: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x167a84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x167a88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x167a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a8c: 0x24c610c8  addiu       $a2, $a2, 0x10C8
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4296));
    // 0x167a90: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x167a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a94: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x167a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a98: 0xc059e60  jal         func_167980
    ctx->pc = 0x167A98u;
    SET_GPR_U32(ctx, 31, 0x167AA0u);
    ctx->pc = 0x167A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167A98u;
            // 0x167a9c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167AA0u; }
        if (ctx->pc != 0x167AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167AA0u; }
        if (ctx->pc != 0x167AA0u) { return; }
    }
    ctx->pc = 0x167AA0u;
    // 0x167aa0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x167aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x167aa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x167aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167aa8: 0x248410c8  addiu       $a0, $a0, 0x10C8
    ctx->pc = 0x167aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    // 0x167aac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x167aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ab0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x167AB0u;
    SET_GPR_U32(ctx, 31, 0x167AB8u);
    ctx->pc = 0x167AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167AB0u;
            // 0x167ab4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167AB8u; }
        if (ctx->pc != 0x167AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167AB8u; }
        if (ctx->pc != 0x167AB8u) { return; }
    }
    ctx->pc = 0x167AB8u;
    // 0x167ab8: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x167AB8u;
    SET_GPR_U32(ctx, 31, 0x167AC0u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167AC0u; }
        if (ctx->pc != 0x167AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167AC0u; }
        if (ctx->pc != 0x167AC0u) { return; }
    }
    ctx->pc = 0x167AC0u;
    // 0x167ac0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    // Workaround: limit iterations to avoid infinite "deleted non-exist gsctx" spam
    static thread_local int s_errorHandlingIter = 0;
    constexpr int kMaxErrorHandlingIter = 5;
    if (s_errorHandlingIter < kMaxErrorHandlingIter) {
        ++s_errorHandlingIter;
        ctx->pc = 0x167A80u;
        goto label_167a80;
    }
    s_errorHandlingIter = 0;
    // Restore ra from stack (saved at sp+0x30) - ra was overwritten by nested calls
    const uint32_t savedRa = static_cast<uint32_t>(READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = savedRa;
}
