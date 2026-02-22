#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cdtrayCheck
// Address: 0x102740 - 0x102794
void cdtrayCheck_0x102740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102740u;

    // 0x102740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x102744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102748: 0xc046298  jal         func_118A60
    ctx->pc = 0x102748u;
    SET_GPR_U32(ctx, 31, 0x102750u);
    ctx->pc = 0x118A60u;
    if (runtime->hasFunction(0x118A60u)) {
        auto targetFn = runtime->lookupFunction(0x118A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102750u; }
        if (ctx->pc != 0x102750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdStatus_0x118a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102750u; }
        if (ctx->pc != 0x102750u) { return; }
    }
    ctx->pc = 0x102750u;
    // 0x102750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102754: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x102754u;
    {
        const bool branch_taken_0x102754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x102758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102754u;
            // 0x102758: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102754) {
            ctx->pc = 0x10278Cu;
            goto label_10278c;
        }
    }
    ctx->pc = 0x10275Cu;
    // 0x10275c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10275cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x102760: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x102760u;
    SET_GPR_U32(ctx, 31, 0x102768u);
    ctx->pc = 0x102764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102760u;
            // 0x102764: 0x24842a80  addiu       $a0, $a0, 0x2A80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102768u; }
        if (ctx->pc != 0x102768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102768u; }
        if (ctx->pc != 0x102768u) { return; }
    }
    ctx->pc = 0x102768u;
    // 0x102768: 0xc042c86  jal         func_10B218
    ctx->pc = 0x102768u;
    SET_GPR_U32(ctx, 31, 0x102770u);
    ctx->pc = 0x10B218u;
    if (runtime->hasFunction(0x10B218u)) {
        auto targetFn = runtime->lookupFunction(0x10B218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102770u; }
        if (ctx->pc != 0x102770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopAllSounds_0x10b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102770u; }
        if (ctx->pc != 0x102770u) { return; }
    }
    ctx->pc = 0x102770u;
label_102770:
    // 0x102770: 0x0  nop
    ctx->pc = 0x102770u;
    // NOP
    // 0x102774: 0x0  nop
    ctx->pc = 0x102774u;
    // NOP
    // 0x102778: 0x0  nop
    ctx->pc = 0x102778u;
    // NOP
    // 0x10277c: 0x0  nop
    ctx->pc = 0x10277cu;
    // NOP
    // 0x102780: 0x0  nop
    ctx->pc = 0x102780u;
    // NOP
    // 0x102784: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x102784u;
    {
        const bool branch_taken_0x102784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x102784) {
            ctx->pc = 0x102770u;
            goto label_102770;
        }
    }
    ctx->pc = 0x10278Cu;
label_10278c:
    // 0x10278c: 0x3e00008  jr          $ra
    ctx->pc = 0x10278Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10278Cu;
            // 0x102790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102770u: goto label_102770;
            case 0x10278Cu: goto label_10278c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102794u;
}
