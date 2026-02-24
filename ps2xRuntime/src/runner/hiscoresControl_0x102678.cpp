#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: hiscoresControl
// Address: 0x102678 - 0x10273c
void hiscoresControl_0x102678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("hiscoresControl_0x102678");
#endif

    ctx->pc = 0x102678u;

    // 0x102678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10267c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10267cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102688: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x102688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x10268c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102690: 0xc0458fe  jal         func_1163F8
    ctx->pc = 0x102690u;
    SET_GPR_U32(ctx, 31, 0x102698u);
    ctx->pc = 0x102694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102690u;
            // 0x102694: 0x2606e100  addiu       $a2, $s0, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163F8u;
    if (runtime->hasFunction(0x1163F8u)) {
        auto targetFn = runtime->lookupFunction(0x1163F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102698u; }
        if (ctx->pc != 0x102698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102698u; }
        if (ctx->pc != 0x102698u) { return; }
    }
    ctx->pc = 0x102698u;
    // 0x102698: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10269c: 0xc04591e  jal         func_116478
    ctx->pc = 0x10269Cu;
    SET_GPR_U32(ctx, 31, 0x1026A4u);
    ctx->pc = 0x1026A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10269Cu;
            // 0x1026a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116478u;
    if (runtime->hasFunction(0x116478u)) {
        auto targetFn = runtime->lookupFunction(0x116478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1026A4u; }
        if (ctx->pc != 0x1026A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1026A4u; }
        if (ctx->pc != 0x1026A4u) { return; }
    }
    ctx->pc = 0x1026A4u;
    // 0x1026a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1026a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1026a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1026ac: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1026ACu;
    {
        const bool branch_taken_0x1026ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1026B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1026ACu;
            // 0x1026b0: 0xaf838114  sw          $v1, -0x7EEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026ac) {
            ctx->pc = 0x1026C8u;
            goto label_1026c8;
        }
    }
    ctx->pc = 0x1026B4u;
    // 0x1026b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1026b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1026b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1026B8u;
    {
        const bool branch_taken_0x1026b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1026BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1026B8u;
            // 0x1026bc: 0x2602e100  addiu       $v0, $s0, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026b8) {
            ctx->pc = 0x1026CCu;
            goto label_1026cc;
        }
    }
    ctx->pc = 0x1026C0u;
    // 0x1026c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1026C0u;
    {
        const bool branch_taken_0x1026c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1026C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1026C0u;
            // 0x1026c4: 0xa7808112  sh          $zero, -0x7EEE($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026c0) {
            ctx->pc = 0x1026E0u;
            goto label_1026e0;
        }
    }
    ctx->pc = 0x1026C8u;
label_1026c8:
    // 0x1026c8: 0x2602e100  addiu       $v0, $s0, -0x1F00
    ctx->pc = 0x1026c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
label_1026cc:
    // 0x1026cc: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1026ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1026d0: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1026d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1026d4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1026d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1026d8: 0x641827  nor         $v1, $v1, $a0
    ctx->pc = 0x1026d8u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1026dc: 0xa7838112  sh          $v1, -0x7EEE($gp)
    ctx->pc = 0x1026dcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 3));
label_1026e0:
    // 0x1026e0: 0x97828112  lhu         $v0, -0x7EEE($gp)
    ctx->pc = 0x1026e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x1026e4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1026e4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)64u)));
    // 0x1026e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1026E8u;
    {
        const bool branch_taken_0x1026e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1026ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1026E8u;
            // 0x1026ec: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026e8) {
            ctx->pc = 0x10270Cu;
            goto label_10270c;
        }
    }
    ctx->pc = 0x1026F0u;
    // 0x1026f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1026f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1026f4: 0x24441300  addiu       $a0, $v0, 0x1300
    ctx->pc = 0x1026f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1026f8: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x1026f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1026fc: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1026FCu;
    {
        const bool branch_taken_0x1026fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1026fc) {
            ctx->pc = 0x102700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1026FCu;
            // 0x102700: 0xa4800012  sh          $zero, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10272Cu;
            goto label_10272c;
        }
    }
    ctx->pc = 0x102704u;
    // 0x102704: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x102704u;
    {
        const bool branch_taken_0x102704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102704u;
            // 0x102708: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102704) {
            ctx->pc = 0x102730u;
            goto label_102730;
        }
    }
    ctx->pc = 0x10270Cu;
label_10270c:
    // 0x10270c: 0x24441300  addiu       $a0, $v0, 0x1300
    ctx->pc = 0x10270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x102710: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x102710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x102714: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102714u;
    {
        const bool branch_taken_0x102714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102714u;
            // 0x102718: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102714) {
            ctx->pc = 0x102730u;
            goto label_102730;
        }
    }
    ctx->pc = 0x10271Cu;
    // 0x10271c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102724: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x102724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x102728: 0xaf838098  sw          $v1, -0x7F68($gp)
    ctx->pc = 0x102728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934680), GPR_U32(ctx, 3));
label_10272c:
    // 0x10272c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10272cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_102730:
    // 0x102730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102734: 0x3e00008  jr          $ra
    ctx->pc = 0x102734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102734u;
            // 0x102738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1026C8u: goto label_1026c8;
            case 0x1026CCu: goto label_1026cc;
            case 0x1026E0u: goto label_1026e0;
            case 0x10270Cu: goto label_10270c;
            case 0x10272Cu: goto label_10272c;
            case 0x102730u: goto label_102730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10273Cu;
}
