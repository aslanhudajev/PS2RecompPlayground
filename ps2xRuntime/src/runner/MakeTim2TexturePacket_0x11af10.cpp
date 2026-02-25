#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MakeTim2TexturePacket
// Address: 0x11af10 - 0x11b0f4
void MakeTim2TexturePacket_0x11af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MakeTim2TexturePacket_0x11af10");
#endif

    ctx->pc = 0x11af10u;

    // 0x11af10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x11af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11af14: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x11af14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af18: 0xffb100b0  sd          $s1, 0xB0($sp)
    ctx->pc = 0x11af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 17));
    // 0x11af1c: 0xe0c02d  daddu       $t8, $a3, $zero
    ctx->pc = 0x11af1cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af20: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x11af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11af24: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x11af24u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af28: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x11af28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x11af2c: 0x2d82003b  sltiu       $v0, $t4, 0x3B
    ctx->pc = 0x11af2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x11af30: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11AF30u;
    {
        const bool branch_taken_0x11af30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF30u;
            // 0x11af34: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af30) {
            ctx->pc = 0x11AF98u;
            goto label_11af98;
        }
    }
    ctx->pc = 0x11AF38u;
    // 0x11af38: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11af38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11af3c: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x11af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x11af40: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x11af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x11af44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11af44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11af48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11af48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11af4c: 0x800008  jr          $a0
    ctx->pc = 0x11AF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AF54u: goto label_11af54;
            case 0x11AF60u: goto label_11af60;
            case 0x11AF74u: goto label_11af74;
            case 0x11AF80u: goto label_11af80;
            case 0x11AF8Cu: goto label_11af8c;
            case 0x11AF98u: goto label_11af98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AF54u;
label_11af54:
    // 0x11af54: 0x30f1018  mult        $v0, $t8, $t7
    ctx->pc = 0x11af54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11af58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11AF58u;
    {
        const bool branch_taken_0x11af58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF58u;
            // 0x11af5c: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af58) {
            ctx->pc = 0x11AFA0u;
            goto label_11afa0;
        }
    }
    ctx->pc = 0x11AF60u;
label_11af60:
    // 0x11af60: 0x30f1818  mult        $v1, $t8, $t7
    ctx->pc = 0x11af60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11af64: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x11af64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11af68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11af6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11AF6Cu;
    {
        const bool branch_taken_0x11af6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF6Cu;
            // 0x11af70: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af6c) {
            ctx->pc = 0x11AFA0u;
            goto label_11afa0;
        }
    }
    ctx->pc = 0x11AF74u;
label_11af74:
    // 0x11af74: 0x30f1018  mult        $v0, $t8, $t7
    ctx->pc = 0x11af74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11af78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11AF78u;
    {
        const bool branch_taken_0x11af78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF78u;
            // 0x11af7c: 0x280c3  sra         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af78) {
            ctx->pc = 0x11AFA0u;
            goto label_11afa0;
        }
    }
    ctx->pc = 0x11AF80u;
label_11af80:
    // 0x11af80: 0x30f1018  mult        $v0, $t8, $t7
    ctx->pc = 0x11af80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11af84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11AF84u;
    {
        const bool branch_taken_0x11af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF84u;
            // 0x11af88: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af84) {
            ctx->pc = 0x11AFA0u;
            goto label_11afa0;
        }
    }
    ctx->pc = 0x11AF8Cu;
label_11af8c:
    // 0x11af8c: 0x30f1018  mult        $v0, $t8, $t7
    ctx->pc = 0x11af8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11af90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11AF90u;
    {
        const bool branch_taken_0x11af90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF90u;
            // 0x11af94: 0x28143  sra         $s0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af90) {
            ctx->pc = 0x11AFA0u;
            goto label_11afa0;
        }
    }
    ctx->pc = 0x11AF98u;
label_11af98:
    // 0x11af98: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x11AF98u;
    {
        const bool branch_taken_0x11af98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF98u;
            // 0x11af9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af98) {
            ctx->pc = 0x11B0E0u;
            goto label_11b0e0;
        }
    }
    ctx->pc = 0x11AFA0u;
label_11afa0:
    // 0x11afa0: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x11afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x11afa4: 0xc1e00  sll         $v1, $t4, 24
    ctx->pc = 0x11afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x11afa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11afa8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11afac: 0xa2400  sll         $a0, $t2, 16
    ctx->pc = 0x11afacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x11afb0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x11afb0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x11afb4: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x11afb4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 9)));
    // 0x11afb8: 0x240d000e  addiu       $t5, $zero, 0xE
    ctx->pc = 0x11afb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11afbc: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x11afbcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x11afc0: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x11afc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32772u)));
    // 0x11afc4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x11afc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x11afc8: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x11afc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x11afcc: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x11afccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x11afd0: 0x24080053  addiu       $t0, $zero, 0x53
    ctx->pc = 0x11afd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x11afd4: 0x34098001  ori         $t1, $zero, 0x8001
    ctx->pc = 0x11afd4u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32769u)));
    // 0x11afd8: 0x240a003f  addiu       $t2, $zero, 0x3F
    ctx->pc = 0x11afd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x11afdc: 0x3c0b0800  lui         $t3, 0x800
    ctx->pc = 0x11afdcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)2048 << 16));
    // 0x11afe0: 0x360c8000  ori         $t4, $s0, 0x8000
    ctx->pc = 0x11afe0u;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)32768u)));
    // 0x11afe4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11afe8: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x11afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x11afec: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11afecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x11aff0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x11aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x11aff4: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x11aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x11aff8: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x11aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x11affc: 0xafaf0034  sw          $t7, 0x34($sp)
    ctx->pc = 0x11affcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 15));
    // 0x11b000: 0xafb80030  sw          $t8, 0x30($sp)
    ctx->pc = 0x11b000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 24));
    // 0x11b004: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x11b004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
    // 0x11b008: 0xafad0068  sw          $t5, 0x68($sp)
    ctx->pc = 0x11b008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 13));
    // 0x11b00c: 0xafae0064  sw          $t6, 0x64($sp)
    ctx->pc = 0x11b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 14));
    // 0x11b010: 0xafa90060  sw          $t1, 0x60($sp)
    ctx->pc = 0x11b010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 9));
    // 0x11b014: 0xafaa0078  sw          $t2, 0x78($sp)
    ctx->pc = 0x11b014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 10));
    // 0x11b018: 0xafab0054  sw          $t3, 0x54($sp)
    ctx->pc = 0x11b018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 11));
    // 0x11b01c: 0xafac0050  sw          $t4, 0x50($sp)
    ctx->pc = 0x11b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 12));
    // 0x11b020: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11b020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11b024: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x11b024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x11b028: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x11b028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x11b02c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x11b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x11b030: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x11b030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x11b034: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x11b034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x11b038: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x11b038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x11b03c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x11b03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x11b040: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x11b040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x11b044: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x11b044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x11b048: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x11b048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x11b04c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x11b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x11b050: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x11b050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x11b054: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x11b054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x11b058: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x11b058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x11b05c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x11b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x11b060: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x11B060u;
    SET_GPR_U32(ctx, 31, 0x11B068u);
    ctx->pc = 0x11B064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B060u;
            // 0x11b064: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F340u;
    if (runtime->hasFunction(0x10F340u)) {
        auto targetFn = runtime->lookupFunction(0x10F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B068u; }
        if (ctx->pc != 0x11B068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_WaitMicro_0x10f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B068u; }
        if (ctx->pc != 0x11B068u) { return; }
    }
    ctx->pc = 0x11B068u;
    // 0x11b068: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11B068u;
    {
        const bool branch_taken_0x11b068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B068u;
            // 0x11b06c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b068) {
            ctx->pc = 0x11B0E4u;
            goto label_11b0e4;
        }
    }
    ctx->pc = 0x11B070u;
    // 0x11b070: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b074: 0xc04400a  jal         func_110028
    ctx->pc = 0x11B074u;
    SET_GPR_U32(ctx, 31, 0x11B07Cu);
    ctx->pc = 0x11B078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B074u;
            // 0x11b078: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110028u;
    if (runtime->hasFunction(0x110028u)) {
        auto targetFn = runtime->lookupFunction(0x110028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B07Cu; }
        if (ctx->pc != 0x11B07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGSLump_0x110028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B07Cu; }
        if (ctx->pc != 0x11B07Cu) { return; }
    }
    ctx->pc = 0x11B07Cu;
    // 0x11b07c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11B07Cu;
    {
        const bool branch_taken_0x11b07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B07Cu;
            // 0x11b080: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b07c) {
            ctx->pc = 0x11B0E4u;
            goto label_11b0e4;
        }
    }
    ctx->pc = 0x11B084u;
    // 0x11b084: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11b088: 0xc04400a  jal         func_110028
    ctx->pc = 0x11B088u;
    SET_GPR_U32(ctx, 31, 0x11B090u);
    ctx->pc = 0x11B08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B088u;
            // 0x11b08c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110028u;
    if (runtime->hasFunction(0x110028u)) {
        auto targetFn = runtime->lookupFunction(0x110028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B090u; }
        if (ctx->pc != 0x11B090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGSLump_0x110028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B090u; }
        if (ctx->pc != 0x11B090u) { return; }
    }
    ctx->pc = 0x11B090u;
    // 0x11b090: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B090u;
    {
        const bool branch_taken_0x11b090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B090u;
            // 0x11b094: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b090) {
            ctx->pc = 0x11B0E4u;
            goto label_11b0e4;
        }
    }
    ctx->pc = 0x11B098u;
    // 0x11b098: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11b09c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x11b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x11b0a0: 0x8c4472c0  lw          $a0, 0x72C0($v0)
    ctx->pc = 0x11b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29376)));
    // 0x11b0a4: 0x8c6572bc  lw          $a1, 0x72BC($v1)
    ctx->pc = 0x11b0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29372)));
    // 0x11b0a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11b0ac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x11b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x11b0b0: 0xc0440a8  jal         func_1102A0
    ctx->pc = 0x11B0B0u;
    SET_GPR_U32(ctx, 31, 0x11B0B8u);
    ctx->pc = 0x11B0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0B0u;
            // 0x11b0b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102A0u;
    if (runtime->hasFunction(0x1102A0u)) {
        auto targetFn = runtime->lookupFunction(0x1102A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0B8u; }
        if (ctx->pc != 0x11B0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAGet_BufferPtr_0x1102a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0B8u; }
        if (ctx->pc != 0x11B0B8u) { return; }
    }
    ctx->pc = 0x11B0B8u;
    // 0x11b0b8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11B0B8u;
    {
        const bool branch_taken_0x11b0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0B8u;
            // 0x11b0bc: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0b8) {
            ctx->pc = 0x11B0E4u;
            goto label_11b0e4;
        }
    }
    ctx->pc = 0x11B0C0u;
    // 0x11b0c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0c4: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x11B0C4u;
    SET_GPR_U32(ctx, 31, 0x11B0CCu);
    ctx->pc = 0x11B0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0C4u;
            // 0x11b0c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0CCu; }
        if (ctx->pc != 0x11B0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0CCu; }
        if (ctx->pc != 0x11B0CCu) { return; }
    }
    ctx->pc = 0x11B0CCu;
    // 0x11b0cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B0CCu;
    {
        const bool branch_taken_0x11b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0CCu;
            // 0x11b0d0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0cc) {
            ctx->pc = 0x11B0E4u;
            goto label_11b0e4;
        }
    }
    ctx->pc = 0x11B0D4u;
    // 0x11b0d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x11b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11b0d8: 0xc04400a  jal         func_110028
    ctx->pc = 0x11B0D8u;
    SET_GPR_U32(ctx, 31, 0x11B0E0u);
    ctx->pc = 0x11B0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0D8u;
            // 0x11b0dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110028u;
    if (runtime->hasFunction(0x110028u)) {
        auto targetFn = runtime->lookupFunction(0x110028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0E0u; }
        if (ctx->pc != 0x11B0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGSLump_0x110028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0E0u; }
        if (ctx->pc != 0x11B0E0u) { return; }
    }
    ctx->pc = 0x11B0E0u;
label_11b0e0:
    // 0x11b0e0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x11b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_11b0e4:
    // 0x11b0e4: 0xdfb100b0  ld          $s1, 0xB0($sp)
    ctx->pc = 0x11b0e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11b0e8: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x11b0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11b0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11B0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0ECu;
            // 0x11b0f0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AF54u: goto label_11af54;
            case 0x11AF60u: goto label_11af60;
            case 0x11AF74u: goto label_11af74;
            case 0x11AF80u: goto label_11af80;
            case 0x11AF8Cu: goto label_11af8c;
            case 0x11AF98u: goto label_11af98;
            case 0x11AFA0u: goto label_11afa0;
            case 0x11B0E0u: goto label_11b0e0;
            case 0x11B0E4u: goto label_11b0e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B0F4u;
}
