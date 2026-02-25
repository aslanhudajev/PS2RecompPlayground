#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecDelete
// Address: 0x18a960 - 0x18a994
void videoDecDelete_0x18a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecDelete_0x18a960");
#endif

    ctx->pc = 0x18a960u;

    // 0x18a960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a96c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a970: 0xc0625f0  jal         func_1897C0
    ctx->pc = 0x18A970u;
    SET_GPR_U32(ctx, 31, 0x18A978u);
    ctx->pc = 0x18A974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A970u;
            // 0x18a974: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1897C0u;
    if (runtime->hasFunction(0x1897C0u)) {
        auto targetFn = runtime->lookupFunction(0x1897C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A978u; }
        if (ctx->pc != 0x18A978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufDelete_0x1897c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A978u; }
        if (ctx->pc != 0x18A978u) { return; }
    }
    ctx->pc = 0x18A978u;
    // 0x18a978: 0xc04ad66  jal         func_12B598
    ctx->pc = 0x18A978u;
    SET_GPR_U32(ctx, 31, 0x18A980u);
    ctx->pc = 0x18A97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A978u;
            // 0x18a97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B598u;
    if (runtime->hasFunction(0x12B598u)) {
        auto targetFn = runtime->lookupFunction(0x12B598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A980u; }
        if (ctx->pc != 0x18A980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegDelete_0x12b598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A980u; }
        if (ctx->pc != 0x18A980u) { return; }
    }
    ctx->pc = 0x18A980u;
    // 0x18a980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a98c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A98Cu;
            // 0x18a990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A994u;
}
