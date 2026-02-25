#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: KariBgLoad
// Address: 0x157650 - 0x157688
void KariBgLoad_0x157650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("KariBgLoad_0x157650");
#endif

    ctx->pc = 0x157650u;

    // 0x157650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157654: 0x24040146  addiu       $a0, $zero, 0x146
    ctx->pc = 0x157654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
    // 0x157658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15765c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x15765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x157660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157664: 0xc05c20c  jal         func_170830
    ctx->pc = 0x157664u;
    SET_GPR_U32(ctx, 31, 0x15766Cu);
    ctx->pc = 0x157668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157664u;
            // 0x157668: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15766Cu; }
        if (ctx->pc != 0x15766Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15766Cu; }
        if (ctx->pc != 0x15766Cu) { return; }
    }
    ctx->pc = 0x15766Cu;
    // 0x15766c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15766Cu;
    SET_GPR_U32(ctx, 31, 0x157674u);
    ctx->pc = 0x157670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15766Cu;
            // 0x157670: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157674u; }
        if (ctx->pc != 0x157674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157674u; }
        if (ctx->pc != 0x157674u) { return; }
    }
    ctx->pc = 0x157674u;
    // 0x157674: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x157674u;
    SET_GPR_U32(ctx, 31, 0x15767Cu);
    ctx->pc = 0x157678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157674u;
            // 0x157678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15767Cu; }
        if (ctx->pc != 0x15767Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15767Cu; }
        if (ctx->pc != 0x15767Cu) { return; }
    }
    ctx->pc = 0x15767Cu;
    // 0x15767c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15767cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157680: 0x3e00008  jr          $ra
    ctx->pc = 0x157680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157680u;
            // 0x157684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157688u;
}
