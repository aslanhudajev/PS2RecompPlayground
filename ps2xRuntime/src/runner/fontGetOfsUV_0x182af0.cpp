#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fontGetOfsUV
// Address: 0x182af0 - 0x182df8
void fontGetOfsUV_0x182af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fontGetOfsUV_0x182af0");
#endif

    ctx->pc = 0x182af0u;

    // 0x182af0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x182af0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x182af4: 0x28660030  slti        $a2, $v1, 0x30
    ctx->pc = 0x182af4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x182af8: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x182AF8u;
    {
        const bool branch_taken_0x182af8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x182AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182AF8u;
            // 0x182afc: 0x2861003a  slti        $at, $v1, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182af8) {
            ctx->pc = 0x182B20u;
            goto label_182b20;
        }
    }
    ctx->pc = 0x182B00u;
    // 0x182b00: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x182B00u;
    {
        const bool branch_taken_0x182b00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182b00) {
            ctx->pc = 0x182B20u;
            goto label_182b20;
        }
    }
    ctx->pc = 0x182B08u;
    // 0x182b08: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x182b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x182b0c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x182b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182b10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182b14: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x182B14u;
    {
        const bool branch_taken_0x182b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B14u;
            // 0x182b18: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b14) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182B1Cu;
    // 0x182b1c: 0x0  nop
    ctx->pc = 0x182b1cu;
    // NOP
label_182b20:
    // 0x182b20: 0x28660041  slti        $a2, $v1, 0x41
    ctx->pc = 0x182b20u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x182b24: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x182B24u;
    {
        const bool branch_taken_0x182b24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B24u;
            // 0x182b28: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b24) {
            ctx->pc = 0x182B48u;
            goto label_182b48;
        }
    }
    ctx->pc = 0x182B2Cu;
    // 0x182b2c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x182B2Cu;
    {
        const bool branch_taken_0x182b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B2Cu;
            // 0x182b30: 0x2466ffc0  addiu       $a2, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b2c) {
            ctx->pc = 0x182B48u;
            goto label_182b48;
        }
    }
    ctx->pc = 0x182B34u;
    // 0x182b34: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x182b34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182b38: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x182b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x182b3c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x182b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x182b40: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x182B40u;
    {
        const bool branch_taken_0x182b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B40u;
            // 0x182b44: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b40) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182B48u;
label_182b48:
    // 0x182b48: 0x28660050  slti        $a2, $v1, 0x50
    ctx->pc = 0x182b48u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x182b4c: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x182B4Cu;
    {
        const bool branch_taken_0x182b4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B4Cu;
            // 0x182b50: 0x2861005b  slti        $at, $v1, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b4c) {
            ctx->pc = 0x182B70u;
            goto label_182b70;
        }
    }
    ctx->pc = 0x182B54u;
    // 0x182b54: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x182B54u;
    {
        const bool branch_taken_0x182b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B54u;
            // 0x182b58: 0x2466ffb0  addiu       $a2, $v1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b54) {
            ctx->pc = 0x182B70u;
            goto label_182b70;
        }
    }
    ctx->pc = 0x182B5Cu;
    // 0x182b5c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x182b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182b60: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x182b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x182b64: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x182b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x182b68: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x182B68u;
    {
        const bool branch_taken_0x182b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B68u;
            // 0x182b6c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b68) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182B70u;
label_182b70:
    // 0x182b70: 0x28660061  slti        $a2, $v1, 0x61
    ctx->pc = 0x182b70u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x182b74: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x182B74u;
    {
        const bool branch_taken_0x182b74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x182B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B74u;
            // 0x182b78: 0x28610070  slti        $at, $v1, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)112) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b74) {
            ctx->pc = 0x182B98u;
            goto label_182b98;
        }
    }
    ctx->pc = 0x182B7Cu;
    // 0x182b7c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x182B7Cu;
    {
        const bool branch_taken_0x182b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B7Cu;
            // 0x182b80: 0x2466ffa0  addiu       $a2, $v1, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b7c) {
            ctx->pc = 0x182B98u;
            goto label_182b98;
        }
    }
    ctx->pc = 0x182B84u;
    // 0x182b84: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x182b84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182b88: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x182b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x182b8c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x182b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x182b90: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x182B90u;
    {
        const bool branch_taken_0x182b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B90u;
            // 0x182b94: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b90) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182B98u;
label_182b98:
    // 0x182b98: 0x28660070  slti        $a2, $v1, 0x70
    ctx->pc = 0x182b98u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x182b9c: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x182B9Cu;
    {
        const bool branch_taken_0x182b9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x182BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182B9Cu;
            // 0x182ba0: 0x2861007b  slti        $at, $v1, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b9c) {
            ctx->pc = 0x182BC0u;
            goto label_182bc0;
        }
    }
    ctx->pc = 0x182BA4u;
    // 0x182ba4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x182BA4u;
    {
        const bool branch_taken_0x182ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BA4u;
            // 0x182ba8: 0x2466ff90  addiu       $a2, $v1, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ba4) {
            ctx->pc = 0x182BC0u;
            goto label_182bc0;
        }
    }
    ctx->pc = 0x182BACu;
    // 0x182bac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x182bacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182bb0: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x182bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x182bb4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x182bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x182bb8: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x182BB8u;
    {
        const bool branch_taken_0x182bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BB8u;
            // 0x182bbc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bb8) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182BC0u;
label_182bc0:
    // 0x182bc0: 0x28660020  slti        $a2, $v1, 0x20
    ctx->pc = 0x182bc0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x182bc4: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x182BC4u;
    {
        const bool branch_taken_0x182bc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x182BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BC4u;
            // 0x182bc8: 0x28610030  slti        $at, $v1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bc4) {
            ctx->pc = 0x182BE8u;
            goto label_182be8;
        }
    }
    ctx->pc = 0x182BCCu;
    // 0x182bcc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x182BCCu;
    {
        const bool branch_taken_0x182bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BCCu;
            // 0x182bd0: 0x2466ffe0  addiu       $a2, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bcc) {
            ctx->pc = 0x182BE8u;
            goto label_182be8;
        }
    }
    ctx->pc = 0x182BD4u;
    // 0x182bd4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x182bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182bd8: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x182bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x182bdc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x182bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x182be0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x182BE0u;
    {
        const bool branch_taken_0x182be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BE0u;
            // 0x182be4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182be0) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182BE8u;
label_182be8:
    // 0x182be8: 0x2866003a  slti        $a2, $v1, 0x3A
    ctx->pc = 0x182be8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x182bec: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x182BECu;
    {
        const bool branch_taken_0x182bec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x182BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BECu;
            // 0x182bf0: 0x28610040  slti        $at, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bec) {
            ctx->pc = 0x182C10u;
            goto label_182c10;
        }
    }
    ctx->pc = 0x182BF4u;
    // 0x182bf4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x182BF4u;
    {
        const bool branch_taken_0x182bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182bf4) {
            ctx->pc = 0x182C10u;
            goto label_182c10;
        }
    }
    ctx->pc = 0x182BFCu;
    // 0x182bfc: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x182bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x182c00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x182c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182c04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182c08: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x182C08u;
    {
        const bool branch_taken_0x182c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C08u;
            // 0x182c0c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c08) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182C10u;
label_182c10:
    // 0x182c10: 0x2866005b  slti        $a2, $v1, 0x5B
    ctx->pc = 0x182c10u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x182c14: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x182C14u;
    {
        const bool branch_taken_0x182c14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x182C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C14u;
            // 0x182c18: 0x28610060  slti        $at, $v1, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c14) {
            ctx->pc = 0x182C38u;
            goto label_182c38;
        }
    }
    ctx->pc = 0x182C1Cu;
    // 0x182c1c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x182C1Cu;
    {
        const bool branch_taken_0x182c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C1Cu;
            // 0x182c20: 0x2466ffb0  addiu       $a2, $v1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c1c) {
            ctx->pc = 0x182C38u;
            goto label_182c38;
        }
    }
    ctx->pc = 0x182C24u;
    // 0x182c24: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x182c24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182c28: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x182c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x182c2c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x182c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x182c30: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x182C30u;
    {
        const bool branch_taken_0x182c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C30u;
            // 0x182c34: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c30) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182C38u;
label_182c38:
    // 0x182c38: 0x2866007b  slti        $a2, $v1, 0x7B
    ctx->pc = 0x182c38u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)123) ? 1 : 0);
    // 0x182c3c: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x182C3Cu;
    {
        const bool branch_taken_0x182c3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x182C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C3Cu;
            // 0x182c40: 0x2861007f  slti        $at, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c3c) {
            ctx->pc = 0x182C60u;
            goto label_182c60;
        }
    }
    ctx->pc = 0x182C44u;
    // 0x182c44: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x182C44u;
    {
        const bool branch_taken_0x182c44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C44u;
            // 0x182c48: 0x2466ff90  addiu       $a2, $v1, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c44) {
            ctx->pc = 0x182C60u;
            goto label_182c60;
        }
    }
    ctx->pc = 0x182C4Cu;
    // 0x182c4c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x182c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182c50: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x182c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x182c54: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x182c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x182c58: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x182C58u;
    {
        const bool branch_taken_0x182c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C58u;
            // 0x182c5c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c58) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182C60u;
label_182c60:
    // 0x182c60: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x182c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x182c64: 0x10680058  beq         $v1, $t0, . + 4 + (0x58 << 2)
    ctx->pc = 0x182C64u;
    {
        const bool branch_taken_0x182c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x182C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C64u;
            // 0x182c68: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c64) {
            ctx->pc = 0x182DC8u;
            goto label_182dc8;
        }
    }
    ctx->pc = 0x182C6Cu;
    // 0x182c6c: 0x10660050  beq         $v1, $a2, . + 4 + (0x50 << 2)
    ctx->pc = 0x182C6Cu;
    {
        const bool branch_taken_0x182c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x182c6c) {
            ctx->pc = 0x182DB0u;
            goto label_182db0;
        }
    }
    ctx->pc = 0x182C74u;
    // 0x182c74: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x182c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x182c78: 0x10660047  beq         $v1, $a2, . + 4 + (0x47 << 2)
    ctx->pc = 0x182C78u;
    {
        const bool branch_taken_0x182c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x182C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C78u;
            // 0x182c7c: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c78) {
            ctx->pc = 0x182D98u;
            goto label_182d98;
        }
    }
    ctx->pc = 0x182C80u;
    // 0x182c80: 0x1066003f  beq         $v1, $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x182C80u;
    {
        const bool branch_taken_0x182c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x182c80) {
            ctx->pc = 0x182D80u;
            goto label_182d80;
        }
    }
    ctx->pc = 0x182C88u;
    // 0x182c88: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x182c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x182c8c: 0x10660036  beq         $v1, $a2, . + 4 + (0x36 << 2)
    ctx->pc = 0x182C8Cu;
    {
        const bool branch_taken_0x182c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x182C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C8Cu;
            // 0x182c90: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c8c) {
            ctx->pc = 0x182D68u;
            goto label_182d68;
        }
    }
    ctx->pc = 0x182C94u;
    // 0x182c94: 0x1066002e  beq         $v1, $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x182C94u;
    {
        const bool branch_taken_0x182c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x182c94) {
            ctx->pc = 0x182D50u;
            goto label_182d50;
        }
    }
    ctx->pc = 0x182C9Cu;
    // 0x182c9c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x182c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x182ca0: 0x10660025  beq         $v1, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x182CA0u;
    {
        const bool branch_taken_0x182ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x182CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CA0u;
            // 0x182ca4: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ca0) {
            ctx->pc = 0x182D38u;
            goto label_182d38;
        }
    }
    ctx->pc = 0x182CA8u;
    // 0x182ca8: 0x1067001f  beq         $v1, $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x182CA8u;
    {
        const bool branch_taken_0x182ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x182CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CA8u;
            // 0x182cac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ca8) {
            ctx->pc = 0x182D28u;
            goto label_182d28;
        }
    }
    ctx->pc = 0x182CB0u;
    // 0x182cb0: 0x10660019  beq         $v1, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x182CB0u;
    {
        const bool branch_taken_0x182cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x182cb0) {
            ctx->pc = 0x182D18u;
            goto label_182d18;
        }
    }
    ctx->pc = 0x182CB8u;
    // 0x182cb8: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x182cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x182cbc: 0x10660010  beq         $v1, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x182CBCu;
    {
        const bool branch_taken_0x182cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x182CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CBCu;
            // 0x182cc0: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cbc) {
            ctx->pc = 0x182D00u;
            goto label_182d00;
        }
    }
    ctx->pc = 0x182CC4u;
    // 0x182cc4: 0x1066000a  beq         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x182CC4u;
    {
        const bool branch_taken_0x182cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x182cc4) {
            ctx->pc = 0x182CF0u;
            goto label_182cf0;
        }
    }
    ctx->pc = 0x182CCCu;
    // 0x182ccc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x182cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x182cd0: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x182CD0u;
    {
        const bool branch_taken_0x182cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x182cd0) {
            ctx->pc = 0x182CE0u;
            goto label_182ce0;
        }
    }
    ctx->pc = 0x182CD8u;
    // 0x182cd8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x182CD8u;
    {
        const bool branch_taken_0x182cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cd8) {
            ctx->pc = 0x182DE0u;
            goto label_182de0;
        }
    }
    ctx->pc = 0x182CE0u;
label_182ce0:
    // 0x182ce0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x182ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x182ce4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x182CE4u;
    {
        const bool branch_taken_0x182ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CE4u;
            // 0x182ce8: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ce4) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182CECu;
    // 0x182cec: 0x0  nop
    ctx->pc = 0x182cecu;
    // NOP
label_182cf0:
    // 0x182cf0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x182cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x182cf4: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x182cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x182cf8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x182CF8u;
    {
        const bool branch_taken_0x182cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CF8u;
            // 0x182cfc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cf8) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182D00u;
label_182d00:
    // 0x182d00: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x182d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x182d04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182d08: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x182d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x182d0c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x182D0Cu;
    {
        const bool branch_taken_0x182d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D0Cu;
            // 0x182d10: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d0c) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182D14u;
    // 0x182d14: 0x0  nop
    ctx->pc = 0x182d14u;
    // NOP
label_182d18:
    // 0x182d18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x182d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x182d1c: 0x240300e8  addiu       $v1, $zero, 0xE8
    ctx->pc = 0x182d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x182d20: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x182D20u;
    {
        const bool branch_taken_0x182d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D20u;
            // 0x182d24: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d20) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182D28u;
label_182d28:
    // 0x182d28: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x182d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x182d2c: 0x240300e8  addiu       $v1, $zero, 0xE8
    ctx->pc = 0x182d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x182d30: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x182D30u;
    {
        const bool branch_taken_0x182d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D30u;
            // 0x182d34: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d30) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182D38u;
label_182d38:
    // 0x182d38: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x182d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x182d3c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182d40: 0x240300e8  addiu       $v1, $zero, 0xE8
    ctx->pc = 0x182d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x182d44: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x182D44u;
    {
        const bool branch_taken_0x182d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D44u;
            // 0x182d48: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d44) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182D4Cu;
    // 0x182d4c: 0x0  nop
    ctx->pc = 0x182d4cu;
    // NOP
label_182d50:
    // 0x182d50: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x182d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x182d54: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182d58: 0x240300e8  addiu       $v1, $zero, 0xE8
    ctx->pc = 0x182d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x182d5c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x182D5Cu;
    {
        const bool branch_taken_0x182d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D5Cu;
            // 0x182d60: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d5c) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182D64u;
    // 0x182d64: 0x0  nop
    ctx->pc = 0x182d64u;
    // NOP
label_182d68:
    // 0x182d68: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x182d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x182d6c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182d70: 0x240300e8  addiu       $v1, $zero, 0xE8
    ctx->pc = 0x182d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x182d74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x182D74u;
    {
        const bool branch_taken_0x182d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D74u;
            // 0x182d78: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d74) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182D7Cu;
    // 0x182d7c: 0x0  nop
    ctx->pc = 0x182d7cu;
    // NOP
label_182d80:
    // 0x182d80: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x182d84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182d88: 0x240300e8  addiu       $v1, $zero, 0xE8
    ctx->pc = 0x182d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x182d8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x182D8Cu;
    {
        const bool branch_taken_0x182d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D8Cu;
            // 0x182d90: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d8c) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182D94u;
    // 0x182d94: 0x0  nop
    ctx->pc = 0x182d94u;
    // NOP
label_182d98:
    // 0x182d98: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x182d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x182d9c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182da0: 0x240300e8  addiu       $v1, $zero, 0xE8
    ctx->pc = 0x182da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x182da4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x182DA4u;
    {
        const bool branch_taken_0x182da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DA4u;
            // 0x182da8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182da4) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182DACu;
    // 0x182dac: 0x0  nop
    ctx->pc = 0x182dacu;
    // NOP
label_182db0:
    // 0x182db0: 0x240300a8  addiu       $v1, $zero, 0xA8
    ctx->pc = 0x182db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x182db4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182db8: 0x240300e8  addiu       $v1, $zero, 0xE8
    ctx->pc = 0x182db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x182dbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x182DBCu;
    {
        const bool branch_taken_0x182dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DBCu;
            // 0x182dc0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182dbc) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182DC4u;
    // 0x182dc4: 0x0  nop
    ctx->pc = 0x182dc4u;
    // NOP
label_182dc8:
    // 0x182dc8: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x182dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x182dcc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x182dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182dd0: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x182dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x182dd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x182DD4u;
    {
        const bool branch_taken_0x182dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DD4u;
            // 0x182dd8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182dd4) {
            ctx->pc = 0x182DF0u;
            goto label_182df0;
        }
    }
    ctx->pc = 0x182DDCu;
    // 0x182ddc: 0x0  nop
    ctx->pc = 0x182ddcu;
    // NOP
label_182de0:
    // 0x182de0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x182de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x182de4: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x182de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x182de8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x182de8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x182dec: 0x0  nop
    ctx->pc = 0x182decu;
    // NOP
label_182df0:
    // 0x182df0: 0x3e00008  jr          $ra
    ctx->pc = 0x182DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182B20u: goto label_182b20;
            case 0x182B48u: goto label_182b48;
            case 0x182B70u: goto label_182b70;
            case 0x182B98u: goto label_182b98;
            case 0x182BC0u: goto label_182bc0;
            case 0x182BE8u: goto label_182be8;
            case 0x182C10u: goto label_182c10;
            case 0x182C38u: goto label_182c38;
            case 0x182C60u: goto label_182c60;
            case 0x182CE0u: goto label_182ce0;
            case 0x182CF0u: goto label_182cf0;
            case 0x182D00u: goto label_182d00;
            case 0x182D18u: goto label_182d18;
            case 0x182D28u: goto label_182d28;
            case 0x182D38u: goto label_182d38;
            case 0x182D50u: goto label_182d50;
            case 0x182D68u: goto label_182d68;
            case 0x182D80u: goto label_182d80;
            case 0x182D98u: goto label_182d98;
            case 0x182DB0u: goto label_182db0;
            case 0x182DC8u: goto label_182dc8;
            case 0x182DE0u: goto label_182de0;
            case 0x182DF0u: goto label_182df0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182DF8u;
}
