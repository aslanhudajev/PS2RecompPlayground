#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_fast
// Address: 0x1f1a70 - 0x1f1f24
void inflate_fast_0x1f1a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_fast_0x1f1a70");
#endif

    ctx->pc = 0x1f1a70u;

    // 0x1f1a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f1a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1a7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f1a80: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f1a80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f1a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a88: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f1a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a8c: 0x8d380000  lw          $t8, 0x0($t1)
    ctx->pc = 0x1f1a8cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f1a90: 0x8d390004  lw          $t9, 0x4($t1)
    ctx->pc = 0x1f1a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f1a94: 0xdd0f0020  ld          $t7, 0x20($t0)
    ctx->pc = 0x1f1a94u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1f1a98: 0x8d0e0038  lw          $t6, 0x38($t0)
    ctx->pc = 0x1f1a98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x1f1a9c: 0x8d0a0034  lw          $t2, 0x34($t0)
    ctx->pc = 0x1f1a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x1f1aa0: 0x1ca102b  sltu        $v0, $t6, $t2
    ctx->pc = 0x1f1aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1f1aa4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F1AA4u;
    {
        const bool branch_taken_0x1f1aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AA4u;
            // 0x1f1aa8: 0x8d0d001c  lw          $t5, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1aa4) {
            ctx->pc = 0x1F1B08u;
            goto label_1f1b08;
        }
    }
    ctx->pc = 0x1F1AACu;
    // 0x1f1aac: 0x14e2023  subu        $a0, $t2, $t6
    ctx->pc = 0x1f1aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x1f1ab0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F1AB0u;
    {
        const bool branch_taken_0x1f1ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AB0u;
            // 0x1f1ab4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ab0) {
            ctx->pc = 0x1F1B10u;
            goto label_1f1b10;
        }
    }
    ctx->pc = 0x1F1AB8u;
label_1f1ab8:
    // 0x1f1ab8: 0x596023  subu        $t4, $v0, $t9
    ctx->pc = 0x1f1ab8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x1f1abc: 0xd18c2  srl         $v1, $t5, 3
    ctx->pc = 0x1f1abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 3));
    // 0x1f1ac0: 0x6c102b  sltu        $v0, $v1, $t4
    ctx->pc = 0x1f1ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1f1ac4: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x1f1ac4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
    // 0x1f1ac8: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x1f1ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x1f1acc: 0x30cc023  subu        $t8, $t8, $t4
    ctx->pc = 0x1f1accu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 12)));
    // 0x1f1ad0: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x1f1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1f1ad4: 0x1a26823  subu        $t5, $t5, $v0
    ctx->pc = 0x1f1ad4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1f1ad8: 0xfd0f0020  sd          $t7, 0x20($t0)
    ctx->pc = 0x1f1ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 15));
    // 0x1f1adc: 0xad0d001c  sw          $t5, 0x1C($t0)
    ctx->pc = 0x1f1adcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 13));
    // 0x1f1ae0: 0xad390004  sw          $t9, 0x4($t1)
    ctx->pc = 0x1f1ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 25));
    // 0x1f1ae4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1f1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f1ae8: 0x3021023  subu        $v0, $t8, $v0
    ctx->pc = 0x1f1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1f1aec: 0xdd230008  ld          $v1, 0x8($t1)
    ctx->pc = 0x1f1aecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1f1af0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f1af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1f1af4: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x1f1af4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x1f1af8: 0xad380000  sw          $t8, 0x0($t1)
    ctx->pc = 0x1f1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 24));
    // 0x1f1afc: 0xad0e0038  sw          $t6, 0x38($t0)
    ctx->pc = 0x1f1afcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 14));
    // 0x1f1b00: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x1F1B00u;
    {
        const bool branch_taken_0x1f1b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B00u;
            // 0x1f1b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b00) {
            ctx->pc = 0x1F1F10u;
            goto label_1f1f10;
        }
    }
    ctx->pc = 0x1F1B08u;
label_1f1b08:
    // 0x1f1b08: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x1f1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1f1b0c: 0x4e2023  subu        $a0, $v0, $t6
    ctx->pc = 0x1f1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_1f1b10:
    // 0x1f1b10: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f1b14: 0x2442be50  addiu       $v0, $v0, -0x41B0
    ctx->pc = 0x1f1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
    // 0x1f1b18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f1b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f1b1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f1b20: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1f1b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1b24: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1f1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f1b28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f1b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f1b2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1B2Cu;
    {
        const bool branch_taken_0x1f1b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B2Cu;
            // 0x1f1b30: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b2c) {
            ctx->pc = 0x1F1B48u;
            goto label_1f1b48;
        }
    }
    ctx->pc = 0x1F1B34u;
label_1f1b34:
    // 0x1f1b34: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1f1b34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1f1b38: 0x1a21014  dsllv       $v0, $v0, $t5
    ctx->pc = 0x1f1b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x1f1b3c: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x1f1b3cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 2)));
    // 0x1f1b40: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x1f1b40u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x1f1b44: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x1f1b44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_1f1b48:
    // 0x1f1b48: 0x2da20014  sltiu       $v0, $t5, 0x14
    ctx->pc = 0x1f1b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_1f1b4c:
    // 0x1f1b4c: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F1B4Cu;
    {
        const bool branch_taken_0x1f1b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1b4c) {
            ctx->pc = 0x1F1B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B4Cu;
            // 0x1f1b50: 0x2739ffff  addiu       $t9, $t9, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B34u;
            goto label_1f1b34;
        }
    }
    ctx->pc = 0x1F1B54u;
    // 0x1f1b54: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x1f1b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1f1b58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f1b58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f1b5c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1f1b5cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
    // 0x1f1b60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f1b64: 0x2225821  addu        $t3, $s1, $v0
    ctx->pc = 0x1f1b64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f1b68: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x1f1b68u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1f1b6c: 0x114000ae  beqz        $t2, . + 4 + (0xAE << 2)
    ctx->pc = 0x1F1B6Cu;
    {
        const bool branch_taken_0x1f1b6c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B6Cu;
            // 0x1f1b70: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b6c) {
            ctx->pc = 0x1F1E28u;
            goto label_1f1e28;
        }
    }
    ctx->pc = 0x1F1B74u;
    // 0x1f1b74: 0x244cbe50  addiu       $t4, $v0, -0x41B0
    ctx->pc = 0x1f1b74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
    // 0x1f1b78: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f1b7c: 0x244535c0  addiu       $a1, $v0, 0x35C0
    ctx->pc = 0x1f1b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    // 0x1f1b80: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x1f1b80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_1f1b84:
    // 0x1f1b84: 0x4f7816  dsrlv       $t7, $t7, $v0
    ctx->pc = 0x1f1b84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x1f1b88: 0x1a26823  subu        $t5, $t5, $v0
    ctx->pc = 0x1f1b88u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1f1b8c: 0x31420010  andi        $v0, $t2, 0x10
    ctx->pc = 0x1f1b8cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)16u)));
    // 0x1f1b90: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1F1B90u;
    {
        const bool branch_taken_0x1f1b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1B90u;
            // 0x1f1b94: 0x31420040  andi        $v0, $t2, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b90) {
            ctx->pc = 0x1F1DE8u;
            goto label_1f1de8;
        }
    }
    ctx->pc = 0x1F1B98u;
    // 0x1f1b98: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x1f1b98u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)15u)));
    // 0x1f1b9c: 0xf183c  dsll32      $v1, $t7, 0
    ctx->pc = 0x1f1b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1f1ba0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f1ba0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f1ba4: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1f1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1f1ba8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x1f1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1f1bac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1bb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f1bb0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f1bb4: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1f1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1f1bb8: 0x626021  addu        $t4, $v1, $v0
    ctx->pc = 0x1f1bb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f1bbc: 0x1aa6823  subu        $t5, $t5, $t2
    ctx->pc = 0x1f1bbcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x1f1bc0: 0x2da2000f  sltiu       $v0, $t5, 0xF
    ctx->pc = 0x1f1bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1f1bc4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1BC4u;
    {
        const bool branch_taken_0x1f1bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BC4u;
            // 0x1f1bc8: 0x14f7816  dsrlv       $t7, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 10) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bc4) {
            ctx->pc = 0x1F1BECu;
            goto label_1f1bec;
        }
    }
    ctx->pc = 0x1F1BCCu;
label_1f1bcc:
    // 0x1f1bcc: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x1f1bccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x1f1bd0: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1f1bd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1f1bd4: 0x1a21014  dsllv       $v0, $v0, $t5
    ctx->pc = 0x1f1bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x1f1bd8: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x1f1bd8u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 2)));
    // 0x1f1bdc: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x1f1bdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x1f1be0: 0x2da2000f  sltiu       $v0, $t5, 0xF
    ctx->pc = 0x1f1be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1f1be4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F1BE4u;
    {
        const bool branch_taken_0x1f1be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BE4u;
            // 0x1f1be8: 0x27180001  addiu       $t8, $t8, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1be4) {
            ctx->pc = 0x1F1BCCu;
            goto label_1f1bcc;
        }
    }
    ctx->pc = 0x1F1BECu;
label_1f1bec:
    // 0x1f1bec: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x1f1becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1f1bf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f1bf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f1bf4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1f1bf4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x1f1bf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f1bfc: 0x2425821  addu        $t3, $s2, $v0
    ctx->pc = 0x1f1bfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f1c00: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x1f1c00u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1f1c04: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f1c08: 0x2445be50  addiu       $a1, $v0, -0x41B0
    ctx->pc = 0x1f1c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
    // 0x1f1c0c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f1c10: 0x244635a8  addiu       $a2, $v0, 0x35A8
    ctx->pc = 0x1f1c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13736));
label_1f1c14:
    // 0x1f1c14: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x1f1c14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1f1c18: 0x4f7816  dsrlv       $t7, $t7, $v0
    ctx->pc = 0x1f1c18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x1f1c1c: 0x1a26823  subu        $t5, $t5, $v0
    ctx->pc = 0x1f1c1cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1f1c20: 0x31420010  andi        $v0, $t2, 0x10
    ctx->pc = 0x1f1c20u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)16u)));
    // 0x1f1c24: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1F1C24u;
    {
        const bool branch_taken_0x1f1c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C24u;
            // 0x1f1c28: 0x31420040  andi        $v0, $t2, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c24) {
            ctx->pc = 0x1F1DACu;
            goto label_1f1dac;
        }
    }
    ctx->pc = 0x1F1C2Cu;
    // 0x1f1c2c: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x1f1c2cu;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)15u)));
    // 0x1f1c30: 0x1aa102b  sltu        $v0, $t5, $t2
    ctx->pc = 0x1f1c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1f1c34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1C34u;
    {
        const bool branch_taken_0x1f1c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c34) {
            ctx->pc = 0x1F1C5Cu;
            goto label_1f1c5c;
        }
    }
    ctx->pc = 0x1F1C3Cu;
label_1f1c3c:
    // 0x1f1c3c: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x1f1c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x1f1c40: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x1f1c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1f1c44: 0x1a21014  dsllv       $v0, $v0, $t5
    ctx->pc = 0x1f1c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x1f1c48: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x1f1c48u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 2)));
    // 0x1f1c4c: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x1f1c4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x1f1c50: 0x1aa102b  sltu        $v0, $t5, $t2
    ctx->pc = 0x1f1c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1f1c54: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F1C54u;
    {
        const bool branch_taken_0x1f1c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C54u;
            // 0x1f1c58: 0x27180001  addiu       $t8, $t8, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c54) {
            ctx->pc = 0x1F1C3Cu;
            goto label_1f1c3c;
        }
    }
    ctx->pc = 0x1F1C5Cu;
label_1f1c5c:
    // 0x1f1c5c: 0xf183c  dsll32      $v1, $t7, 0
    ctx->pc = 0x1f1c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1f1c60: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f1c60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f1c64: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1f1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1f1c68: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f1c6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1c70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f1c70u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f1c74: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1f1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1f1c78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f1c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f1c7c: 0x14f7816  dsrlv       $t7, $t7, $t2
    ctx->pc = 0x1f1c7cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 10) & 0x3F));
    // 0x1f1c80: 0x1aa6823  subu        $t5, $t5, $t2
    ctx->pc = 0x1f1c80u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x1f1c84: 0x1c31823  subu        $v1, $t6, $v1
    ctx->pc = 0x1f1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x1f1c88: 0x8d02002c  lw          $v0, 0x2C($t0)
    ctx->pc = 0x1f1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x1f1c8c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f1c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f1c90: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F1C90u;
    {
        const bool branch_taken_0x1f1c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1C90u;
            // 0x1f1c94: 0x8c2023  subu        $a0, $a0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c90) {
            ctx->pc = 0x1F1D64u;
            goto label_1f1d64;
        }
    }
    ctx->pc = 0x1F1C98u;
    // 0x1f1c98: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x1f1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1f1c9c: 0x8d0a002c  lw          $t2, 0x2C($t0)
    ctx->pc = 0x1f1c9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x1f1ca0: 0x4a5823  subu        $t3, $v0, $t2
    ctx->pc = 0x1f1ca0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f1ca4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1f1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1f1ca8:
    // 0x1f1ca8: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x1f1ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1f1cac: 0x0  nop
    ctx->pc = 0x1f1cacu;
    // NOP
    // 0x1f1cb0: 0x0  nop
    ctx->pc = 0x1f1cb0u;
    // NOP
    // 0x1f1cb4: 0x0  nop
    ctx->pc = 0x1f1cb4u;
    // NOP
    // 0x1f1cb8: 0x0  nop
    ctx->pc = 0x1f1cb8u;
    // NOP
    // 0x1f1cbc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1CBCu;
    {
        const bool branch_taken_0x1f1cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1cbc) {
            ctx->pc = 0x1F1CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CBCu;
            // 0x1f1cc0: 0x6b1821  addu        $v1, $v1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1CA8u;
            goto label_1f1ca8;
        }
    }
    ctx->pc = 0x1F1CC4u;
    // 0x1f1cc4: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x1f1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1f1cc8: 0x435023  subu        $t2, $v0, $v1
    ctx->pc = 0x1f1cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f1ccc: 0x14c102b  sltu        $v0, $t2, $t4
    ctx->pc = 0x1f1cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1f1cd0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F1CD0u;
    {
        const bool branch_taken_0x1f1cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1cd0) {
            ctx->pc = 0x1F1CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CD0u;
            // 0x1f1cd4: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D20u;
            goto label_1f1d20;
        }
    }
    ctx->pc = 0x1F1CD8u;
    // 0x1f1cd8: 0x18a6023  subu        $t4, $t4, $t2
    ctx->pc = 0x1f1cd8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_1f1cdc:
    // 0x1f1cdc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f1cdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1ce0: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x1f1ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1ce4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1ce8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1f1ce8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1f1cec: 0x0  nop
    ctx->pc = 0x1f1cecu;
    // NOP
    // 0x1f1cf0: 0x1540fffa  bnez        $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1CF0u;
    {
        const bool branch_taken_0x1f1cf0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1CF0u;
            // 0x1f1cf4: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cf0) {
            ctx->pc = 0x1F1CDCu;
            goto label_1f1cdc;
        }
    }
    ctx->pc = 0x1F1CF8u;
    // 0x1f1cf8: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x1f1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_1f1cfc:
    // 0x1f1cfc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f1cfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1d00: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x1f1d00u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1d04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1d08: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1f1d08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1f1d0c: 0x0  nop
    ctx->pc = 0x1f1d0cu;
    // NOP
    // 0x1f1d10: 0x1580fffa  bnez        $t4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1D10u;
    {
        const bool branch_taken_0x1f1d10 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D10u;
            // 0x1f1d14: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d10) {
            ctx->pc = 0x1F1CFCu;
            goto label_1f1cfc;
        }
    }
    ctx->pc = 0x1F1D18u;
    // 0x1f1d18: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1F1D18u;
    {
        const bool branch_taken_0x1f1d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D18u;
            // 0x1f1d1c: 0x2c820102  sltiu       $v0, $a0, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d18) {
            ctx->pc = 0x1F1EACu;
            goto label_1f1eac;
        }
    }
    ctx->pc = 0x1F1D20u;
label_1f1d20:
    // 0x1f1d20: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x1f1d20u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1d24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1d28: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1f1d28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1f1d2c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f1d2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1d30: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x1f1d30u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1d34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1d38: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1f1d38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1f1d3c: 0x258cfffe  addiu       $t4, $t4, -0x2
    ctx->pc = 0x1f1d3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
label_1f1d40:
    // 0x1f1d40: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f1d40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1d44: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x1f1d44u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1d48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1d4c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1f1d4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1f1d50: 0x0  nop
    ctx->pc = 0x1f1d50u;
    // NOP
    // 0x1f1d54: 0x1580fffa  bnez        $t4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1D54u;
    {
        const bool branch_taken_0x1f1d54 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D54u;
            // 0x1f1d58: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d54) {
            ctx->pc = 0x1F1D40u;
            goto label_1f1d40;
        }
    }
    ctx->pc = 0x1F1D5Cu;
    // 0x1f1d5c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1F1D5Cu;
    {
        const bool branch_taken_0x1f1d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D5Cu;
            // 0x1f1d60: 0x2c820102  sltiu       $v0, $a0, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d5c) {
            ctx->pc = 0x1F1EACu;
            goto label_1f1eac;
        }
    }
    ctx->pc = 0x1F1D64u;
label_1f1d64:
    // 0x1f1d64: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f1d64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1d68: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x1f1d68u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1d6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1d70: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1f1d70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1f1d74: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f1d74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1d78: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x1f1d78u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1d7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1d80: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1f1d80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1f1d84: 0x258cfffe  addiu       $t4, $t4, -0x2
    ctx->pc = 0x1f1d84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
label_1f1d88:
    // 0x1f1d88: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f1d88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1d8c: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x1f1d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1d90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1d94: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1f1d94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1f1d98: 0x0  nop
    ctx->pc = 0x1f1d98u;
    // NOP
    // 0x1f1d9c: 0x1580fffa  bnez        $t4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1D9Cu;
    {
        const bool branch_taken_0x1f1d9c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1D9Cu;
            // 0x1f1da0: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d9c) {
            ctx->pc = 0x1F1D88u;
            goto label_1f1d88;
        }
    }
    ctx->pc = 0x1F1DA4u;
    // 0x1f1da4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1F1DA4u;
    {
        const bool branch_taken_0x1f1da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DA4u;
            // 0x1f1da8: 0x2c820102  sltiu       $v0, $a0, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1da4) {
            ctx->pc = 0x1F1EACu;
            goto label_1f1eac;
        }
    }
    ctx->pc = 0x1F1DACu;
label_1f1dac:
    // 0x1f1dac: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F1DACu;
    {
        const bool branch_taken_0x1f1dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1dac) {
            ctx->pc = 0x1F1DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DACu;
            // 0x1f1db0: 0xad260020  sw          $a2, 0x20($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E54u;
            goto label_1f1e54;
        }
    }
    ctx->pc = 0x1F1DB4u;
    // 0x1f1db4: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1f1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1f1db8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f1dbc: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x1f1dbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1f1dc0: 0xf183c  dsll32      $v1, $t7, 0
    ctx->pc = 0x1f1dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1f1dc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f1dc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f1dc8: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1f1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1f1dcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f1dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f1dd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1dd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f1dd4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f1dd8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f1ddc: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x1f1ddcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1f1de0: 0x1000ff8c  b           . + 4 + (-0x74 << 2)
    ctx->pc = 0x1F1DE0u;
    {
        const bool branch_taken_0x1f1de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DE0u;
            // 0x1f1de4: 0x916a0000  lbu         $t2, 0x0($t3) (Delay Slot)
        SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1de0) {
            ctx->pc = 0x1F1C14u;
            goto label_1f1c14;
        }
    }
    ctx->pc = 0x1F1DE8u;
label_1f1de8:
    // 0x1f1de8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F1DE8u;
    {
        const bool branch_taken_0x1f1de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1DE8u;
            // 0x1f1dec: 0x31420020  andi        $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)32u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1de8) {
            ctx->pc = 0x1F1E48u;
            goto label_1f1e48;
        }
    }
    ctx->pc = 0x1F1DF0u;
    // 0x1f1df0: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1f1df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1f1df4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f1df8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x1f1df8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1f1dfc: 0xf183c  dsll32      $v1, $t7, 0
    ctx->pc = 0x1f1dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1f1e00: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f1e00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f1e04: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1f1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1f1e08: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x1f1e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1f1e0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1e10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f1e10u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f1e14: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f1e18: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x1f1e18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1f1e1c: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x1f1e1cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1f1e20: 0x5540ff58  bnel        $t2, $zero, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x1F1E20u;
    {
        const bool branch_taken_0x1f1e20 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e20) {
            ctx->pc = 0x1F1E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E20u;
            // 0x1f1e24: 0x91620001  lbu         $v0, 0x1($t3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B84u;
            goto label_1f1b84;
        }
    }
    ctx->pc = 0x1F1E28u;
label_1f1e28:
    // 0x1f1e28: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x1f1e28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1f1e2c: 0x4f7816  dsrlv       $t7, $t7, $v0
    ctx->pc = 0x1f1e2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x1f1e30: 0x1a26823  subu        $t5, $t5, $v0
    ctx->pc = 0x1f1e30u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1f1e34: 0x91620004  lbu         $v0, 0x4($t3)
    ctx->pc = 0x1f1e34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1f1e38: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x1f1e38u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1e3c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1f1e3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1f1e40: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F1E40u;
    {
        const bool branch_taken_0x1f1e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E40u;
            // 0x1f1e44: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e40) {
            ctx->pc = 0x1F1EA8u;
            goto label_1f1ea8;
        }
    }
    ctx->pc = 0x1F1E48u;
label_1f1e48:
    // 0x1f1e48: 0x5440ff1b  bnel        $v0, $zero, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x1F1E48u;
    {
        const bool branch_taken_0x1f1e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e48) {
            ctx->pc = 0x1F1E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1E48u;
            // 0x1f1e4c: 0x8d220004  lw          $v0, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1AB8u;
            goto label_1f1ab8;
        }
    }
    ctx->pc = 0x1F1E50u;
    // 0x1f1e50: 0xad250020  sw          $a1, 0x20($t1)
    ctx->pc = 0x1f1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 5));
label_1f1e54:
    // 0x1f1e54: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1f1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f1e58: 0x596023  subu        $t4, $v0, $t9
    ctx->pc = 0x1f1e58u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x1f1e5c: 0xd18c2  srl         $v1, $t5, 3
    ctx->pc = 0x1f1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 3));
    // 0x1f1e60: 0x6c102b  sltu        $v0, $v1, $t4
    ctx->pc = 0x1f1e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1f1e64: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x1f1e64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
    // 0x1f1e68: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x1f1e68u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x1f1e6c: 0x30cc023  subu        $t8, $t8, $t4
    ctx->pc = 0x1f1e6cu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 12)));
    // 0x1f1e70: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x1f1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1f1e74: 0x1a26823  subu        $t5, $t5, $v0
    ctx->pc = 0x1f1e74u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1f1e78: 0xfd0f0020  sd          $t7, 0x20($t0)
    ctx->pc = 0x1f1e78u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 15));
    // 0x1f1e7c: 0xad0d001c  sw          $t5, 0x1C($t0)
    ctx->pc = 0x1f1e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 13));
    // 0x1f1e80: 0xad390004  sw          $t9, 0x4($t1)
    ctx->pc = 0x1f1e80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 25));
    // 0x1f1e84: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1f1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f1e88: 0x3021023  subu        $v0, $t8, $v0
    ctx->pc = 0x1f1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1f1e8c: 0xdd230008  ld          $v1, 0x8($t1)
    ctx->pc = 0x1f1e8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1f1e90: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f1e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1f1e94: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x1f1e94u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x1f1e98: 0xad380000  sw          $t8, 0x0($t1)
    ctx->pc = 0x1f1e98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 24));
    // 0x1f1e9c: 0xad0e0038  sw          $t6, 0x38($t0)
    ctx->pc = 0x1f1e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 14));
    // 0x1f1ea0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F1EA0u;
    {
        const bool branch_taken_0x1f1ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EA0u;
            // 0x1f1ea4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ea0) {
            ctx->pc = 0x1F1F10u;
            goto label_1f1f10;
        }
    }
    ctx->pc = 0x1F1EA8u;
label_1f1ea8:
    // 0x1f1ea8: 0x2c820102  sltiu       $v0, $a0, 0x102
    ctx->pc = 0x1f1ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
label_1f1eac:
    // 0x1f1eac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1EACu;
    {
        const bool branch_taken_0x1f1eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1eac) {
            ctx->pc = 0x1F1EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EACu;
            // 0x1f1eb0: 0x8d220004  lw          $v0, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1EC4u;
            goto label_1f1ec4;
        }
    }
    ctx->pc = 0x1F1EB4u;
    // 0x1f1eb4: 0x2f22000a  sltiu       $v0, $t9, 0xA
    ctx->pc = 0x1f1eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f1eb8: 0x1040ff24  beqz        $v0, . + 4 + (-0xDC << 2)
    ctx->pc = 0x1F1EB8u;
    {
        const bool branch_taken_0x1f1eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EB8u;
            // 0x1f1ebc: 0x2da20014  sltiu       $v0, $t5, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1eb8) {
            ctx->pc = 0x1F1B4Cu;
            goto label_1f1b4c;
        }
    }
    ctx->pc = 0x1F1EC0u;
    // 0x1f1ec0: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1f1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f1ec4:
    // 0x1f1ec4: 0x596023  subu        $t4, $v0, $t9
    ctx->pc = 0x1f1ec4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x1f1ec8: 0xd18c2  srl         $v1, $t5, 3
    ctx->pc = 0x1f1ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 3));
    // 0x1f1ecc: 0x6c102b  sltu        $v0, $v1, $t4
    ctx->pc = 0x1f1eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1f1ed0: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x1f1ed0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
    // 0x1f1ed4: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x1f1ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x1f1ed8: 0x30cc023  subu        $t8, $t8, $t4
    ctx->pc = 0x1f1ed8u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 12)));
    // 0x1f1edc: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x1f1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1f1ee0: 0x1a26823  subu        $t5, $t5, $v0
    ctx->pc = 0x1f1ee0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1f1ee4: 0xfd0f0020  sd          $t7, 0x20($t0)
    ctx->pc = 0x1f1ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 15));
    // 0x1f1ee8: 0xad0d001c  sw          $t5, 0x1C($t0)
    ctx->pc = 0x1f1ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 13));
    // 0x1f1eec: 0xad390004  sw          $t9, 0x4($t1)
    ctx->pc = 0x1f1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 25));
    // 0x1f1ef0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1f1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f1ef4: 0x3021023  subu        $v0, $t8, $v0
    ctx->pc = 0x1f1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1f1ef8: 0xdd230008  ld          $v1, 0x8($t1)
    ctx->pc = 0x1f1ef8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1f1efc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f1efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1f1f00: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x1f1f00u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x1f1f04: 0xad380000  sw          $t8, 0x0($t1)
    ctx->pc = 0x1f1f04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 24));
    // 0x1f1f08: 0xad0e0038  sw          $t6, 0x38($t0)
    ctx->pc = 0x1f1f08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 14));
    // 0x1f1f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f10:
    // 0x1f1f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1f14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f1f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f1f18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f1f18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1F1Cu;
            // 0x1f1f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1AB8u: goto label_1f1ab8;
            case 0x1F1B08u: goto label_1f1b08;
            case 0x1F1B10u: goto label_1f1b10;
            case 0x1F1B34u: goto label_1f1b34;
            case 0x1F1B48u: goto label_1f1b48;
            case 0x1F1B4Cu: goto label_1f1b4c;
            case 0x1F1B84u: goto label_1f1b84;
            case 0x1F1BCCu: goto label_1f1bcc;
            case 0x1F1BECu: goto label_1f1bec;
            case 0x1F1C14u: goto label_1f1c14;
            case 0x1F1C3Cu: goto label_1f1c3c;
            case 0x1F1C5Cu: goto label_1f1c5c;
            case 0x1F1CA8u: goto label_1f1ca8;
            case 0x1F1CDCu: goto label_1f1cdc;
            case 0x1F1CFCu: goto label_1f1cfc;
            case 0x1F1D20u: goto label_1f1d20;
            case 0x1F1D40u: goto label_1f1d40;
            case 0x1F1D64u: goto label_1f1d64;
            case 0x1F1D88u: goto label_1f1d88;
            case 0x1F1DACu: goto label_1f1dac;
            case 0x1F1DE8u: goto label_1f1de8;
            case 0x1F1E28u: goto label_1f1e28;
            case 0x1F1E48u: goto label_1f1e48;
            case 0x1F1E54u: goto label_1f1e54;
            case 0x1F1EA8u: goto label_1f1ea8;
            case 0x1F1EACu: goto label_1f1eac;
            case 0x1F1EC4u: goto label_1f1ec4;
            case 0x1F1F10u: goto label_1f1f10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1F24u;
}
