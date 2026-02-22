#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecReset
// Address: 0x1198a8 - 0x1198f0
void audioDecReset_0x1198a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1198a8u;

    // 0x1198a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1198a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1198ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1198acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1198b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1198b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1198b4: 0xc0465e4  jal         func_119790
    ctx->pc = 0x1198B4u;
    SET_GPR_U32(ctx, 31, 0x1198BCu);
    ctx->pc = 0x1198B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1198B4u;
            // 0x1198b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119790u;
    if (runtime->hasFunction(0x119790u)) {
        auto targetFn = runtime->lookupFunction(0x119790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198BCu; }
        if (ctx->pc != 0x1198BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecPause_0x119790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198BCu; }
        if (ctx->pc != 0x1198BCu) { return; }
    }
    ctx->pc = 0x1198BCu;
    // 0x1198bc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1198bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1198c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1198c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1198c4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1198c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1198c8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1198c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1198cc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1198ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1198d0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1198d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1198d4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1198d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1198d8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1198d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1198dc: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1198dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1198e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1198e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1198e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1198e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1198e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1198E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1198ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198E8u;
            // 0x1198ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1198F0u;
}
