#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _i2b
// Address: 0x13bb90 - 0x13bbc8
void _i2b_0x13bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_i2b_0x13bb90");
#endif

    ctx->pc = 0x13bb90u;

    // 0x13bb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13bb94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13bb98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13bb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13bba0: 0xc04edc4  jal         func_13B710
    ctx->pc = 0x13BBA0u;
    SET_GPR_U32(ctx, 31, 0x13BBA8u);
    ctx->pc = 0x13BBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBA0u;
            // 0x13bba4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B710u;
    if (runtime->hasFunction(0x13B710u)) {
        auto targetFn = runtime->lookupFunction(0x13B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBA8u; }
        if (ctx->pc != 0x13BBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x13b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BBA8u; }
        if (ctx->pc != 0x13BBA8u) { return; }
    }
    ctx->pc = 0x13BBA8u;
    // 0x13bba8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13bba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bbac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bbb0: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x13bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x13bbb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13bbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bbb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13bbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bbbc: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x13bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x13bbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x13BBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BBC0u;
            // 0x13bbc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BBC8u;
}
