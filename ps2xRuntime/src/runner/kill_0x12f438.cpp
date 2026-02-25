#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: kill
// Address: 0x12f438 - 0x12f460
void kill_0x12f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("kill_0x12f438");
#endif

    ctx->pc = 0x12f438u;

    // 0x12f438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f440: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F440u;
    {
        const bool branch_taken_0x12f440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x12F444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F440u;
            // 0x12f444: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f440) {
            ctx->pc = 0x12F450u;
            goto label_12f450;
        }
    }
    ctx->pc = 0x12F448u;
    // 0x12f448: 0xc04e004  jal         func_138010
    ctx->pc = 0x12F448u;
    SET_GPR_U32(ctx, 31, 0x12F450u);
    ctx->pc = 0x12F44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F448u;
            // 0x12f44c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138010u;
    if (runtime->hasFunction(0x138010u)) {
        auto targetFn = runtime->lookupFunction(0x138010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F450u; }
        if (ctx->pc != 0x12F450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x138010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F450u; }
        if (ctx->pc != 0x12F450u) { return; }
    }
    ctx->pc = 0x12F450u;
label_12f450:
    // 0x12f450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f458: 0x3e00008  jr          $ra
    ctx->pc = 0x12F458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F458u;
            // 0x12f45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F450u: goto label_12f450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F460u;
}
