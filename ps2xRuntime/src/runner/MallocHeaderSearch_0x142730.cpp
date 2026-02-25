#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MallocHeaderSearch
// Address: 0x142730 - 0x14279c
void MallocHeaderSearch_0x142730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MallocHeaderSearch_0x142730");
#endif

    ctx->pc = 0x142730u;

    // 0x142730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x142734: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x142734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x142738: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x142738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14273c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142740: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x142744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142748: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x142748u;
    SET_GPR_U32(ctx, 31, 0x142750u);
    ctx->pc = 0x14274Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142748u;
            // 0x14274c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (runtime->hasFunction(0x13D330u)) {
        auto targetFn = runtime->lookupFunction(0x13D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142750u; }
        if (ctx->pc != 0x142750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x13d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142750u; }
        if (ctx->pc != 0x142750u) { return; }
    }
    ctx->pc = 0x142750u;
    // 0x142750: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x142750u;
    {
        const bool branch_taken_0x142750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142750) {
            ctx->pc = 0x142780u;
            goto label_142780;
        }
    }
    ctx->pc = 0x142758u;
    // 0x142758: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x142758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14275c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x14275cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x142760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142764: 0x24840a50  addiu       $a0, $a0, 0xA50
    ctx->pc = 0x142764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2640));
    // 0x142768: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x142768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x14276c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x14276Cu;
    SET_GPR_U32(ctx, 31, 0x142774u);
    ctx->pc = 0x142770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14276Cu;
            // 0x142770: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142774u; }
        if (ctx->pc != 0x142774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142774u; }
        if (ctx->pc != 0x142774u) { return; }
    }
    ctx->pc = 0x142774u;
    // 0x142774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x142774u;
    {
        const bool branch_taken_0x142774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142774u;
            // 0x142778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142774) {
            ctx->pc = 0x142788u;
            goto label_142788;
        }
    }
    ctx->pc = 0x14277Cu;
    // 0x14277c: 0x0  nop
    ctx->pc = 0x14277cu;
    // NOP
label_142780:
    // 0x142780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x142780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142784: 0x0  nop
    ctx->pc = 0x142784u;
    // NOP
label_142788:
    // 0x142788: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x142788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14278c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14278cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142794: 0x3e00008  jr          $ra
    ctx->pc = 0x142794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142794u;
            // 0x142798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142780u: goto label_142780;
            case 0x142788u: goto label_142788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14279Cu;
}
