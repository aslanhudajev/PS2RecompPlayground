#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_GetMSHInfo
// Address: 0x172760 - 0x172800
void SOUND_GetMSHInfo_0x172760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_GetMSHInfo_0x172760");
#endif

    ctx->pc = 0x172760u;

    // 0x172760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17276c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172770: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x172770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172774: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x172774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x172778: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x172778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17277c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x17277cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x172780: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x172780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x172784: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x172784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172788: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x172788u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x17278c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x172790: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x172790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x172794: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x172794u;
    {
        const bool branch_taken_0x172794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172794u;
            // 0x172798: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172794) {
            ctx->pc = 0x1727C0u;
            goto label_1727c0;
        }
    }
    ctx->pc = 0x17279Cu;
    // 0x17279c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17279cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1727a0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1727A0u;
    SET_GPR_U32(ctx, 31, 0x1727A8u);
    ctx->pc = 0x1727A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1727A0u;
            // 0x1727a4: 0x248416c0  addiu       $a0, $a0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727A8u; }
        if (ctx->pc != 0x1727A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727A8u; }
        if (ctx->pc != 0x1727A8u) { return; }
    }
    ctx->pc = 0x1727A8u;
    // 0x1727a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1727a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1727ac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1727acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1727b0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1727B0u;
    SET_GPR_U32(ctx, 31, 0x1727B8u);
    ctx->pc = 0x1727B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1727B0u;
            // 0x1727b4: 0x248416e0  addiu       $a0, $a0, 0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727B8u; }
        if (ctx->pc != 0x1727B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727B8u; }
        if (ctx->pc != 0x1727B8u) { return; }
    }
    ctx->pc = 0x1727B8u;
    // 0x1727b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1727B8u;
    {
        const bool branch_taken_0x1727b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1727BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1727B8u;
            // 0x1727bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727b8) {
            ctx->pc = 0x1727F0u;
            goto label_1727f0;
        }
    }
    ctx->pc = 0x1727C0u;
label_1727c0:
    // 0x1727c0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1727c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1727c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1727c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1727c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1727c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1727cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1727ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727d0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1727d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1727d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1727d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1727d8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1727d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1727dc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1727dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1727e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1727e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1727e4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1727e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1727e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1727e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1727ec: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1727ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_1727f0:
    // 0x1727f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1727f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1727f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1727f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1727f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1727F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1727FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1727F8u;
            // 0x1727fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1727C0u: goto label_1727c0;
            case 0x1727F0u: goto label_1727f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172800u;
}
