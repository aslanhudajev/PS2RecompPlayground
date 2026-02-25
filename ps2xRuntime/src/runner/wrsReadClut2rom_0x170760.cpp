#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsReadClut2rom
// Address: 0x170760 - 0x17082c
void wrsReadClut2rom_0x170760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsReadClut2rom_0x170760");
#endif

    ctx->pc = 0x170760u;

    // 0x170760: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x170760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x170764: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170768: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x170768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17076c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17076cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x170770: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x170770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170778: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x170778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17077c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17077cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x170780: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x170780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170784: 0xc0504cc  jal         func_141330
    ctx->pc = 0x170784u;
    SET_GPR_U32(ctx, 31, 0x17078Cu);
    ctx->pc = 0x170788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170784u;
            // 0x170788: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141330u;
    if (runtime->hasFunction(0x141330u)) {
        auto targetFn = runtime->lookupFunction(0x141330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17078Cu; }
        if (ctx->pc != 0x17078Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRomLoad_0x141330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17078Cu; }
        if (ctx->pc != 0x17078Cu) { return; }
    }
    ctx->pc = 0x17078Cu;
    // 0x17078c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17078cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170790: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x170790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170794: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x170794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x170798: 0xc05c024  jal         func_170090
    ctx->pc = 0x170798u;
    SET_GPR_U32(ctx, 31, 0x1707A0u);
    ctx->pc = 0x17079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170798u;
            // 0x17079c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170090u;
    if (runtime->hasFunction(0x170090u)) {
        auto targetFn = runtime->lookupFunction(0x170090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707A0u; }
        if (ctx->pc != 0x1707A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setClutInfo_0x170090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1707A0u; }
        if (ctx->pc != 0x1707A0u) { return; }
    }
    ctx->pc = 0x1707A0u;
    // 0x1707a0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1707A0u;
    {
        const bool branch_taken_0x1707a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1707A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707A0u;
            // 0x1707a4: 0x1318c0  sll         $v1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707a0) {
            ctx->pc = 0x1707F0u;
            goto label_1707f0;
        }
    }
    ctx->pc = 0x1707A8u;
    // 0x1707a8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1707a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1707ac: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x1707acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1707b0: 0x24421640  addiu       $v0, $v0, 0x1640
    ctx->pc = 0x1707b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
    // 0x1707b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1707b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1707b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1707b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1707bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1707c0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1707c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1707c4: 0x0  nop
    ctx->pc = 0x1707c4u;
    // NOP
label_1707c8:
    // 0x1707c8: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1707c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1707cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1707ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1707d0: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x1707d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1707d4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1707d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x1707d8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1707d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1707dc: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x1707dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x1707e0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1707E0u;
    {
        const bool branch_taken_0x1707e0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1707E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707E0u;
            // 0x1707e4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707e0) {
            ctx->pc = 0x1707C8u;
            goto label_1707c8;
        }
    }
    ctx->pc = 0x1707E8u;
    // 0x1707e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1707E8u;
    {
        const bool branch_taken_0x1707e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1707ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1707E8u;
            // 0x1707ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707e8) {
            ctx->pc = 0x170810u;
            goto label_170810;
        }
    }
    ctx->pc = 0x1707F0u;
label_1707f0:
    // 0x1707f0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1707f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1707f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1707f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707f8: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1707F8u;
    SET_GPR_U32(ctx, 31, 0x170800u);
    ctx->pc = 0x1707FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1707F8u;
            // 0x1707fc: 0x24841300  addiu       $a0, $a0, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170800u; }
        if (ctx->pc != 0x170800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170800u; }
        if (ctx->pc != 0x170800u) { return; }
    }
    ctx->pc = 0x170800u;
    // 0x170800: 0xc050700  jal         func_141C00
    ctx->pc = 0x170800u;
    SET_GPR_U32(ctx, 31, 0x170808u);
    ctx->pc = 0x170804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170800u;
            // 0x170804: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170808u; }
        if (ctx->pc != 0x170808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFree_0x141c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170808u; }
        if (ctx->pc != 0x170808u) { return; }
    }
    ctx->pc = 0x170808u;
    // 0x170808: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x170808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17080c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170810:
    // 0x170810: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x170810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170814: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x170814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x170818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17081c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17081cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170824: 0x3e00008  jr          $ra
    ctx->pc = 0x170824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170824u;
            // 0x170828: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1707C8u: goto label_1707c8;
            case 0x1707F0u: goto label_1707f0;
            case 0x170810u: goto label_170810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17082Cu;
}
