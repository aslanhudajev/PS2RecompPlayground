#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: FaderMoveFunction
// Address: 0x181af0 - 0x181c60
void FaderMoveFunction_0x181af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("FaderMoveFunction_0x181af0");
#endif

    ctx->pc = 0x181af0u;

    // 0x181af0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181af4: 0x8c23b610  lw          $v1, -0x49F0($at)
    ctx->pc = 0x181af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948368)));
    // 0x181af8: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x181af8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x181afc: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x181AFCu;
    {
        const bool branch_taken_0x181afc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181AFCu;
            // 0x181b00: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181afc) {
            ctx->pc = 0x181C58u;
            goto label_181c58;
        }
    }
    ctx->pc = 0x181B04u;
    // 0x181b04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x181b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x181b08: 0x248420d0  addiu       $a0, $a0, 0x20D0
    ctx->pc = 0x181b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8400));
    // 0x181b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x181b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x181b10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x181b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181b14: 0x600008  jr          $v1
    ctx->pc = 0x181B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181B20u: goto label_181b20;
            case 0x181B60u: goto label_181b60;
            case 0x181BA0u: goto label_181ba0;
            case 0x181BE0u: goto label_181be0;
            case 0x181C20u: goto label_181c20;
            case 0x181C58u: goto label_181c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181B1Cu;
    // 0x181b1c: 0x0  nop
    ctx->pc = 0x181b1cu;
    // NOP
label_181b20:
    // 0x181b20: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181b24: 0x9023b5eb  lbu         $v1, -0x4A15($at)
    ctx->pc = 0x181b24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948331)));
    // 0x181b28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x181B28u;
    {
        const bool branch_taken_0x181b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B28u;
            // 0x181b2c: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b28) {
            ctx->pc = 0x181B48u;
            goto label_181b48;
        }
    }
    ctx->pc = 0x181B30u;
    // 0x181b30: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181b34: 0xa024b5eb  sb          $a0, -0x4A15($at)
    ctx->pc = 0x181b34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 4));
    // 0x181b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181b3c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181b40: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x181B40u;
    {
        const bool branch_taken_0x181b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B40u;
            // 0x181b44: 0xac23b5e0  sw          $v1, -0x4A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b40) {
            ctx->pc = 0x181C58u;
            goto label_181c58;
        }
    }
    ctx->pc = 0x181B48u;
label_181b48:
    // 0x181b48: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181b4c: 0xac20b610  sw          $zero, -0x49F0($at)
    ctx->pc = 0x181b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948368), GPR_U32(ctx, 0));
    // 0x181b50: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181b54: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x181B54u;
    {
        const bool branch_taken_0x181b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B54u;
            // 0x181b58: 0xac20b5e0  sw          $zero, -0x4A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b54) {
            ctx->pc = 0x181C58u;
            goto label_181c58;
        }
    }
    ctx->pc = 0x181B5Cu;
    // 0x181b5c: 0x0  nop
    ctx->pc = 0x181b5cu;
    // NOP
label_181b60:
    // 0x181b60: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181b64: 0x9023b5eb  lbu         $v1, -0x4A15($at)
    ctx->pc = 0x181b64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948331)));
    // 0x181b68: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x181B68u;
    {
        const bool branch_taken_0x181b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B68u;
            // 0x181b6c: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b68) {
            ctx->pc = 0x181B88u;
            goto label_181b88;
        }
    }
    ctx->pc = 0x181B70u;
    // 0x181b70: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181b74: 0xa024b5eb  sb          $a0, -0x4A15($at)
    ctx->pc = 0x181b74u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 4));
    // 0x181b78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181b7c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181b80: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x181B80u;
    {
        const bool branch_taken_0x181b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B80u;
            // 0x181b84: 0xac23b5e0  sw          $v1, -0x4A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b80) {
            ctx->pc = 0x181C58u;
            goto label_181c58;
        }
    }
    ctx->pc = 0x181B88u;
label_181b88:
    // 0x181b88: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181b8c: 0xac20b610  sw          $zero, -0x49F0($at)
    ctx->pc = 0x181b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948368), GPR_U32(ctx, 0));
    // 0x181b90: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181b94: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x181B94u;
    {
        const bool branch_taken_0x181b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B94u;
            // 0x181b98: 0xac20b5e0  sw          $zero, -0x4A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b94) {
            ctx->pc = 0x181C58u;
            goto label_181c58;
        }
    }
    ctx->pc = 0x181B9Cu;
    // 0x181b9c: 0x0  nop
    ctx->pc = 0x181b9cu;
    // NOP
label_181ba0:
    // 0x181ba0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181ba4: 0x9024b5eb  lbu         $a0, -0x4A15($at)
    ctx->pc = 0x181ba4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948331)));
    // 0x181ba8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x181ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181bac: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x181BACu;
    {
        const bool branch_taken_0x181bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x181bac) {
            ctx->pc = 0x181BD0u;
            goto label_181bd0;
        }
    }
    ctx->pc = 0x181BB4u;
    // 0x181bb4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x181bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x181bb8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181bbc: 0xa024b5eb  sb          $a0, -0x4A15($at)
    ctx->pc = 0x181bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 4));
    // 0x181bc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181bc4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181bc8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x181BC8u;
    {
        const bool branch_taken_0x181bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BC8u;
            // 0x181bcc: 0xac23b5e0  sw          $v1, -0x4A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bc8) {
            ctx->pc = 0x181C58u;
            goto label_181c58;
        }
    }
    ctx->pc = 0x181BD0u;
label_181bd0:
    // 0x181bd0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181bd4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x181BD4u;
    {
        const bool branch_taken_0x181bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BD4u;
            // 0x181bd8: 0xac20b5e0  sw          $zero, -0x4A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bd4) {
            ctx->pc = 0x181C58u;
            goto label_181c58;
        }
    }
    ctx->pc = 0x181BDCu;
    // 0x181bdc: 0x0  nop
    ctx->pc = 0x181bdcu;
    // NOP
label_181be0:
    // 0x181be0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181be4: 0x9024b5eb  lbu         $a0, -0x4A15($at)
    ctx->pc = 0x181be4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948331)));
    // 0x181be8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x181be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181bec: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x181BECu;
    {
        const bool branch_taken_0x181bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x181bec) {
            ctx->pc = 0x181C10u;
            goto label_181c10;
        }
    }
    ctx->pc = 0x181BF4u;
    // 0x181bf4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x181bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x181bf8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181bfc: 0xa024b5eb  sb          $a0, -0x4A15($at)
    ctx->pc = 0x181bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 4));
    // 0x181c00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181c04: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181c08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x181C08u;
    {
        const bool branch_taken_0x181c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C08u;
            // 0x181c0c: 0xac23b5e0  sw          $v1, -0x4A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c08) {
            ctx->pc = 0x181C58u;
            goto label_181c58;
        }
    }
    ctx->pc = 0x181C10u;
label_181c10:
    // 0x181c10: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181c14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x181C14u;
    {
        const bool branch_taken_0x181c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C14u;
            // 0x181c18: 0xac20b5e0  sw          $zero, -0x4A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c14) {
            ctx->pc = 0x181C58u;
            goto label_181c58;
        }
    }
    ctx->pc = 0x181C1Cu;
    // 0x181c1c: 0x0  nop
    ctx->pc = 0x181c1cu;
    // NOP
label_181c20:
    // 0x181c20: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181c24: 0x9023b5eb  lbu         $v1, -0x4A15($at)
    ctx->pc = 0x181c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294948331)));
    // 0x181c28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x181C28u;
    {
        const bool branch_taken_0x181c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C28u;
            // 0x181c2c: 0x2464ffe0  addiu       $a0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c28) {
            ctx->pc = 0x181C48u;
            goto label_181c48;
        }
    }
    ctx->pc = 0x181C30u;
    // 0x181c30: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181c34: 0xa024b5eb  sb          $a0, -0x4A15($at)
    ctx->pc = 0x181c34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948331), (uint8_t)GPR_U32(ctx, 4));
    // 0x181c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181c3c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181c40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181C40u;
    {
        const bool branch_taken_0x181c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C40u;
            // 0x181c44: 0xac23b5e0  sw          $v1, -0x4A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c40) {
            ctx->pc = 0x181C58u;
            goto label_181c58;
        }
    }
    ctx->pc = 0x181C48u;
label_181c48:
    // 0x181c48: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181c4c: 0xac20b610  sw          $zero, -0x49F0($at)
    ctx->pc = 0x181c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948368), GPR_U32(ctx, 0));
    // 0x181c50: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181c54: 0xac20b5e0  sw          $zero, -0x4A20($at)
    ctx->pc = 0x181c54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948320), GPR_U32(ctx, 0));
label_181c58:
    // 0x181c58: 0x3e00008  jr          $ra
    ctx->pc = 0x181C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181B20u: goto label_181b20;
            case 0x181B48u: goto label_181b48;
            case 0x181B60u: goto label_181b60;
            case 0x181B88u: goto label_181b88;
            case 0x181BA0u: goto label_181ba0;
            case 0x181BD0u: goto label_181bd0;
            case 0x181BE0u: goto label_181be0;
            case 0x181C10u: goto label_181c10;
            case 0x181C20u: goto label_181c20;
            case 0x181C48u: goto label_181c48;
            case 0x181C58u: goto label_181c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181C60u;
}
