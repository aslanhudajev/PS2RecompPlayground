#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: startDisplay
// Address: 0x187890 - 0x1878e8
void startDisplay_0x187890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("startDisplay_0x187890");
#endif

    ctx->pc = 0x187890u;

    // 0x187890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18789c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18789cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1878a0:
    // 0x1878a0: 0xc042e7c  jal         func_10B9F0
    ctx->pc = 0x1878A0u;
    SET_GPR_U32(ctx, 31, 0x1878A8u);
    ctx->pc = 0x1878A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1878A0u;
            // 0x1878a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B9F0u;
    if (runtime->hasFunction(0x10B9F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878A8u; }
        if (ctx->pc != 0x1878A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10b9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1878A8u; }
        if (ctx->pc != 0x1878A8u) { return; }
    }
    ctx->pc = 0x1878A8u;
    // 0x1878a8: 0x0  nop
    ctx->pc = 0x1878a8u;
    // NOP
    // 0x1878ac: 0x0  nop
    ctx->pc = 0x1878acu;
    // NOP
    // 0x1878b0: 0x0  nop
    ctx->pc = 0x1878b0u;
    // NOP
    // 0x1878b4: 0x1202fffa  beq         $s0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1878B4u;
    {
        const bool branch_taken_0x1878b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1878b4) {
            ctx->pc = 0x1878A0u;
            goto label_1878a0;
        }
    }
    ctx->pc = 0x1878BCu;
    // 0x1878bc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1878bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1878c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1878c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1878c4: 0xac20fd78  sw          $zero, -0x288($at)
    ctx->pc = 0x1878c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966648), GPR_U32(ctx, 0));
    // 0x1878c8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1878cc: 0xac23cac0  sw          $v1, -0x3540($at)
    ctx->pc = 0x1878ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953664), GPR_U32(ctx, 3));
    // 0x1878d0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1878d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1878d4: 0xac20cac8  sw          $zero, -0x3538($at)
    ctx->pc = 0x1878d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953672), GPR_U32(ctx, 0));
    // 0x1878d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1878d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1878dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1878dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1878e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1878E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1878E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1878E0u;
            // 0x1878e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1878A0u: goto label_1878a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1878E8u;
}
