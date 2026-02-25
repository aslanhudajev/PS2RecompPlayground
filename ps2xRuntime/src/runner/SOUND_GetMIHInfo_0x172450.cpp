#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_GetMIHInfo
// Address: 0x172450 - 0x172514
void SOUND_GetMIHInfo_0x172450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_GetMIHInfo_0x172450");
#endif

    ctx->pc = 0x172450u;

    // 0x172450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17245c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17245cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172460: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x172460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172464: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x172464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172468: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x172468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17246c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17246cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x172470: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x172470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x172474: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x172474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x172478: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x172478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17247c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172480: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x172480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x172484: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x172484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x172488: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x172488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x17248c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x17248cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x172490: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x172490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172494: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x172494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x172498: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x172498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17249c: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x17249cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x1724a0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1724a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1724a4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1724a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1724a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1724A8u;
    {
        const bool branch_taken_0x1724a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1724ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1724A8u;
            // 0x1724ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724a8) {
            ctx->pc = 0x1724E8u;
            goto label_1724e8;
        }
    }
    ctx->pc = 0x1724B0u;
    // 0x1724b0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1724b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1724b4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1724B4u;
    SET_GPR_U32(ctx, 31, 0x1724BCu);
    ctx->pc = 0x1724B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1724B4u;
            // 0x1724b8: 0x24841570  addiu       $a0, $a0, 0x1570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724BCu; }
        if (ctx->pc != 0x1724BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724BCu; }
        if (ctx->pc != 0x1724BCu) { return; }
    }
    ctx->pc = 0x1724BCu;
    // 0x1724bc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1724bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1724c0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1724c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1724c4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1724C4u;
    SET_GPR_U32(ctx, 31, 0x1724CCu);
    ctx->pc = 0x1724C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1724C4u;
            // 0x1724c8: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724CCu; }
        if (ctx->pc != 0x1724CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724CCu; }
        if (ctx->pc != 0x1724CCu) { return; }
    }
    ctx->pc = 0x1724CCu;
    // 0x1724cc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1724ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1724d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1724d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724d4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1724D4u;
    SET_GPR_U32(ctx, 31, 0x1724DCu);
    ctx->pc = 0x1724D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1724D4u;
            // 0x1724d8: 0x24841540  addiu       $a0, $a0, 0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724DCu; }
        if (ctx->pc != 0x1724DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1724DCu; }
        if (ctx->pc != 0x1724DCu) { return; }
    }
    ctx->pc = 0x1724DCu;
    // 0x1724dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1724DCu;
    {
        const bool branch_taken_0x1724dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1724DCu;
            // 0x1724e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724dc) {
            ctx->pc = 0x172500u;
            goto label_172500;
        }
    }
    ctx->pc = 0x1724E4u;
    // 0x1724e4: 0x0  nop
    ctx->pc = 0x1724e4u;
    // NOP
label_1724e8:
    // 0x1724e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1724e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1724ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1724ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1724f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1724f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1724f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1724f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724f8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1724f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1724fc: 0x0  nop
    ctx->pc = 0x1724fcu;
    // NOP
label_172500:
    // 0x172500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17250c: 0x3e00008  jr          $ra
    ctx->pc = 0x17250Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17250Cu;
            // 0x172510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1724E8u: goto label_1724e8;
            case 0x172500u: goto label_172500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172514u;
}
