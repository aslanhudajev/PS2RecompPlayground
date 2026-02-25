#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsInitHiGsDma
// Address: 0x1405a0 - 0x1405e4
void wrsInitHiGsDma_0x1405a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsInitHiGsDma_0x1405a0");
#endif

    ctx->pc = 0x1405a0u;

    // 0x1405a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1405a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1405a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1405a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1405a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1405a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1405ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1405acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1405b0: 0xc043664  jal         func_10D990
    ctx->pc = 0x1405B0u;
    SET_GPR_U32(ctx, 31, 0x1405B8u);
    ctx->pc = 0x1405B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1405B0u;
            // 0x1405b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D990u;
    if (runtime->hasFunction(0x10D990u)) {
        auto targetFn = runtime->lookupFunction(0x10D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405B8u; }
        if (ctx->pc != 0x1405B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAInit_0x10d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405B8u; }
        if (ctx->pc != 0x1405B8u) { return; }
    }
    ctx->pc = 0x1405B8u;
    // 0x1405b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1405b8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1405bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1405BCu;
    {
        const bool branch_taken_0x1405bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1405C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1405BCu;
            // 0x1405c0: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405bc) {
            ctx->pc = 0x1405D8u;
            goto label_1405d8;
        }
    }
    ctx->pc = 0x1405C4u;
    // 0x1405c4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1405c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1405c8: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x1405c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x1405cc: 0x248402c8  addiu       $a0, $a0, 0x2C8
    ctx->pc = 0x1405ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 712));
    // 0x1405d0: 0xc059e98  jal         func_167A60
    ctx->pc = 0x1405D0u;
    SET_GPR_U32(ctx, 31, 0x1405D8u);
    ctx->pc = 0x1405D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1405D0u;
            // 0x1405d4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405D8u; }
        if (ctx->pc != 0x1405D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405D8u; }
        if (ctx->pc != 0x1405D8u) { return; }
    }
    ctx->pc = 0x1405D8u;
label_1405d8:
    // 0x1405d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1405d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1405dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1405DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1405E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1405DCu;
            // 0x1405e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1405D8u: goto label_1405d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1405E4u;
}
