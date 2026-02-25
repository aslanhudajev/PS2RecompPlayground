#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: WatchDma
// Address: 0x106500 - 0x106584
void WatchDma_0x106500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("WatchDma_0x106500");
#endif

    ctx->pc = 0x106500u;

    // 0x106500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x106500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x106504: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106508: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10650c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10650cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106518: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x106518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10651c: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x10651cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x106520: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x106524: 0xc6800b  movn        $s0, $a2, $a2
    ctx->pc = 0x106524u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x106528: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x106528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10652c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x10652cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x106530: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x106530u;
    {
        const bool branch_taken_0x106530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106530u;
            // 0x106534: 0x3c130022  lui         $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106530) {
            ctx->pc = 0x106568u;
            goto label_106568;
        }
    }
    ctx->pc = 0x106538u;
    // 0x106538: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x106538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x10653c: 0x0  nop
    ctx->pc = 0x10653cu;
    // NOP
label_106540:
    // 0x106540: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106540u;
    {
        const bool branch_taken_0x106540 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x106540) {
            ctx->pc = 0x106558u;
            goto label_106558;
        }
    }
    ctx->pc = 0x106548u;
    // 0x106548: 0xc04c340  jal         func_130D00
    ctx->pc = 0x106548u;
    SET_GPR_U32(ctx, 31, 0x106550u);
    ctx->pc = 0x10654Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106548u;
            // 0x10654c: 0x2664c8a0  addiu       $a0, $s3, -0x3760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294953120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D00u;
    if (runtime->hasFunction(0x130D00u)) {
        auto targetFn = runtime->lookupFunction(0x130D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106550u; }
        if (ctx->pc != 0x106550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x130d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106550u; }
        if (ctx->pc != 0x106550u) { return; }
    }
    ctx->pc = 0x106550u;
    // 0x106550: 0xc041b0a  jal         func_106C28
    ctx->pc = 0x106550u;
    SET_GPR_U32(ctx, 31, 0x106558u);
    ctx->pc = 0x106554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106550u;
            // 0x106554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106C28u;
    if (runtime->hasFunction(0x106C28u)) {
        auto targetFn = runtime->lookupFunction(0x106C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106558u; }
        if (ctx->pc != 0x106558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaPause_0x106c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106558u; }
        if (ctx->pc != 0x106558u) { return; }
    }
    ctx->pc = 0x106558u;
label_106558:
    // 0x106558: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x106558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10655c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x10655cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x106560: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x106560u;
    {
        const bool branch_taken_0x106560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106560u;
            // 0x106564: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106560) {
            ctx->pc = 0x106540u;
            goto label_106540;
        }
    }
    ctx->pc = 0x106568u;
label_106568:
    // 0x106568: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x106568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10656c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10656cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106570: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106574: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10657c: 0x3e00008  jr          $ra
    ctx->pc = 0x10657Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10657Cu;
            // 0x106580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106540u: goto label_106540;
            case 0x106558u: goto label_106558;
            case 0x106568u: goto label_106568;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106584u;
}
