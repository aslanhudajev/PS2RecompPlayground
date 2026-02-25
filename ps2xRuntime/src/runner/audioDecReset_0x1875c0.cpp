#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecReset
// Address: 0x1875c0 - 0x187604
void audioDecReset_0x1875c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecReset_0x1875c0");
#endif

    ctx->pc = 0x1875c0u;

    // 0x1875c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1875c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1875c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1875c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1875c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1875c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1875cc: 0xc061da4  jal         func_187690
    ctx->pc = 0x1875CCu;
    SET_GPR_U32(ctx, 31, 0x1875D4u);
    ctx->pc = 0x1875D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1875CCu;
            // 0x1875d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187690u;
    if (runtime->hasFunction(0x187690u)) {
        auto targetFn = runtime->lookupFunction(0x187690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875D4u; }
        if (ctx->pc != 0x1875D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecPause_0x187690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875D4u; }
        if (ctx->pc != 0x1875D4u) { return; }
    }
    ctx->pc = 0x1875D4u;
    // 0x1875d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1875d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1875d8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1875d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1875dc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1875dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1875e0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1875e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1875e4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1875e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1875e8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1875e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1875ec: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1875ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1875f0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1875f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1875f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1875f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1875f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1875f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1875fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1875FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1875FCu;
            // 0x187600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187604u;
}
