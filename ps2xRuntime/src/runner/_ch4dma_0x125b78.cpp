#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ch4dma
// Address: 0x125b78 - 0x125c4c
void _ch4dma_0x125b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ch4dma_0x125b78");
#endif

    ctx->pc = 0x125b78u;

    // 0x125b78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x125b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125b7c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x125b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125b80: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x125b80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57360u)));
    // 0x125b84: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x125b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x125b88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x125b88u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x125b8c: 0x3c0a0075  lui         $t2, 0x75
    ctx->pc = 0x125b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)117 << 16));
    // 0x125b90: 0x8c82e4dc  lw          $v0, -0x1B24($a0)
    ctx->pc = 0x125b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960348)));
    // 0x125b94: 0x8d48e4e0  lw          $t0, -0x1B20($t2)
    ctx->pc = 0x125b94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960352)));
    // 0x125b98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x125b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125b9c: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125B9Cu;
    {
        const bool branch_taken_0x125b9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x125BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B9Cu;
            // 0x125ba0: 0xac82e4dc  sw          $v0, -0x1B24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294960348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b9c) {
            ctx->pc = 0x125BACu;
            goto label_125bac;
        }
    }
    ctx->pc = 0x125BA4u;
    // 0x125ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x125BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BA4u;
            // 0x125ba8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125BACu: goto label_125bac;
            case 0x125C10u: goto label_125c10;
            case 0x125C44u: goto label_125c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125BACu;
label_125bac:
    // 0x125bac: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x125bacu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x125bb0: 0x128102b  sltu        $v0, $t1, $t0
    ctx->pc = 0x125bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x125bb4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x125BB4u;
    {
        const bool branch_taken_0x125bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125BB4u;
            // 0x125bb8: 0x3c070075  lui         $a3, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125bb4) {
            ctx->pc = 0x125C10u;
            goto label_125c10;
        }
    }
    ctx->pc = 0x125BBCu;
    // 0x125bbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x125bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125bc0: 0x8ce6e4e4  lw          $a2, -0x1B1C($a3)
    ctx->pc = 0x125bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960356)));
    // 0x125bc4: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x125bc4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46096u)));
    // 0x125bc8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x125bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x125bcc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x125bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x125bd0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x125bd0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x125bd4: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x125bd4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65520u)));
    // 0x125bd8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x125bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x125bdc: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x125bdcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46112u)));
    // 0x125be0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x125be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x125be4: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x125be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x125be8: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x125be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x125bec: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x125becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x125bf0: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x125bf0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)46080u)));
    // 0x125bf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x125bf4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x125bf8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x125bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x125bfc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x125bfcu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x125c00: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x125c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x125c04: 0xace6e4e4  sw          $a2, -0x1B1C($a3)
    ctx->pc = 0x125c04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960356), GPR_U32(ctx, 6));
    // 0x125c08: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x125C08u;
    {
        const bool branch_taken_0x125c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C08u;
            // 0x125c0c: 0xad43e4e0  sw          $v1, -0x1B20($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4294960352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c08) {
            ctx->pc = 0x125C44u;
            goto label_125c44;
        }
    }
    ctx->pc = 0x125C10u;
label_125c10:
    // 0x125c10: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x125c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x125c14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125c18: 0x8c45e4e4  lw          $a1, -0x1B1C($v0)
    ctx->pc = 0x125c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960356)));
    // 0x125c1c: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x125c1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46096u)));
    // 0x125c20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x125c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125c24: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x125c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x125c28: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x125c28u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x125c2c: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x125c2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46112u)));
    // 0x125c30: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x125c30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x125c34: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x125c34u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46080u)));
    // 0x125c38: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x125c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x125c3c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x125c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x125c40: 0xad40e4e0  sw          $zero, -0x1B20($t2)
    ctx->pc = 0x125c40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294960352), GPR_U32(ctx, 0));
label_125c44:
    // 0x125c44: 0x3e00008  jr          $ra
    ctx->pc = 0x125C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125C44u;
            // 0x125c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125BACu: goto label_125bac;
            case 0x125C10u: goto label_125c10;
            case 0x125C44u: goto label_125c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125C4Cu;
}
