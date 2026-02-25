#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_PatchMSH
// Address: 0x172800 - 0x172870
void SOUND_PatchMSH_0x172800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_PatchMSH_0x172800");
#endif

    ctx->pc = 0x172800u;

    // 0x172800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17280c: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x17280cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x172810: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x172810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x172814: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x172814u;
    {
        const bool branch_taken_0x172814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172814u;
            // 0x172818: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172814) {
            ctx->pc = 0x172840u;
            goto label_172840;
        }
    }
    ctx->pc = 0x17281Cu;
    // 0x17281c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17281cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x172820: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x172820u;
    SET_GPR_U32(ctx, 31, 0x172828u);
    ctx->pc = 0x172824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172820u;
            // 0x172824: 0x24841710  addiu       $a0, $a0, 0x1710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172828u; }
        if (ctx->pc != 0x172828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172828u; }
        if (ctx->pc != 0x172828u) { return; }
    }
    ctx->pc = 0x172828u;
    // 0x172828: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x172828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17282c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17282cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172830: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x172830u;
    SET_GPR_U32(ctx, 31, 0x172838u);
    ctx->pc = 0x172834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172830u;
            // 0x172834: 0x248416e0  addiu       $a0, $a0, 0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172838u; }
        if (ctx->pc != 0x172838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172838u; }
        if (ctx->pc != 0x172838u) { return; }
    }
    ctx->pc = 0x172838u;
    // 0x172838: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172838u;
    {
        const bool branch_taken_0x172838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17283Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172838u;
            // 0x17283c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172838) {
            ctx->pc = 0x172860u;
            goto label_172860;
        }
    }
    ctx->pc = 0x172840u;
label_172840:
    // 0x172840: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x172840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x172844: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x172844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x172848: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x172848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17284c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x17284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x172850: 0xc05ca98  jal         func_172A60
    ctx->pc = 0x172850u;
    SET_GPR_U32(ctx, 31, 0x172858u);
    ctx->pc = 0x172854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172850u;
            // 0x172854: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172A60u;
    if (runtime->hasFunction(0x172A60u)) {
        auto targetFn = runtime->lookupFunction(0x172A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172858u; }
        if (ctx->pc != 0x172858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_PatchSFX_0x172a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172858u; }
        if (ctx->pc != 0x172858u) { return; }
    }
    ctx->pc = 0x172858u;
    // 0x172858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x172858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17285c: 0x0  nop
    ctx->pc = 0x17285cu;
    // NOP
label_172860:
    // 0x172860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172868: 0x3e00008  jr          $ra
    ctx->pc = 0x172868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172868u;
            // 0x17286c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172840u: goto label_172840;
            case 0x172860u: goto label_172860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172870u;
}
