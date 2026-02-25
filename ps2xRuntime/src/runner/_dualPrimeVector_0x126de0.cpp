#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dualPrimeVector
// Address: 0x126de0 - 0x126f64
void _dualPrimeVector_0x126de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dualPrimeVector_0x126de0");
#endif

    ctx->pc = 0x126de0u;

    // 0x126de0: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x126de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x126de4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126de8: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x126DE8u;
    {
        const bool branch_taken_0x126de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x126de8) {
            ctx->pc = 0x126F00u;
            goto label_126f00;
        }
    }
    ctx->pc = 0x126DF0u;
    // 0x126df0: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x126df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x126df4: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x126DF4u;
    {
        const bool branch_taken_0x126df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126df4) {
            ctx->pc = 0x126DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126DF4u;
            // 0x126df8: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126E88u;
            goto label_126e88;
        }
    }
    ctx->pc = 0x126DFCu;
    // 0x126dfc: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x126DFCu;
    {
        const bool branch_taken_0x126dfc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x126E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126DFCu;
            // 0x126e00: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dfc) {
            ctx->pc = 0x126E10u;
            goto label_126e10;
        }
    }
    ctx->pc = 0x126E04u;
    // 0x126e04: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x126e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x126e08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126E08u;
    {
        const bool branch_taken_0x126e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E08u;
            // 0x126e0c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e08) {
            ctx->pc = 0x126E14u;
            goto label_126e14;
        }
    }
    ctx->pc = 0x126E10u;
label_126e10:
    // 0x126e10: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x126e10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_126e14:
    // 0x126e14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126e18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x126e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x126e1c: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126E1Cu;
    {
        const bool branch_taken_0x126e1c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x126E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E1Cu;
            // 0x126e20: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e1c) {
            ctx->pc = 0x126E30u;
            goto label_126e30;
        }
    }
    ctx->pc = 0x126E24u;
    // 0x126e24: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x126e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x126e28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126E28u;
    {
        const bool branch_taken_0x126e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E28u;
            // 0x126e2c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e28) {
            ctx->pc = 0x126E34u;
            goto label_126e34;
        }
    }
    ctx->pc = 0x126E30u;
label_126e30:
    // 0x126e30: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x126e30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_126e34:
    // 0x126e34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126e38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x126e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x126e3c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x126e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x126e40: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x126e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x126e44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x126e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x126e48: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x126E48u;
    {
        const bool branch_taken_0x126e48 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x126E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E48u;
            // 0x126e4c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e48) {
            ctx->pc = 0x126E54u;
            goto label_126e54;
        }
    }
    ctx->pc = 0x126E50u;
    // 0x126e50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x126e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_126e54:
    // 0x126e54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x126e54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x126e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126e5c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x126e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x126e60: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x126e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x126e64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x126e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x126e68: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x126E68u;
    {
        const bool branch_taken_0x126e68 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x126E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E68u;
            // 0x126e6c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e68) {
            ctx->pc = 0x126E74u;
            goto label_126e74;
        }
    }
    ctx->pc = 0x126E70u;
    // 0x126e70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x126e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_126e74:
    // 0x126e74: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x126e74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_126e78:
    // 0x126e78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x126e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x126e7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x126e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x126e80: 0x3e00008  jr          $ra
    ctx->pc = 0x126E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E80u;
            // 0x126e84: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126E10u: goto label_126e10;
            case 0x126E14u: goto label_126e14;
            case 0x126E30u: goto label_126e30;
            case 0x126E34u: goto label_126e34;
            case 0x126E54u: goto label_126e54;
            case 0x126E74u: goto label_126e74;
            case 0x126E78u: goto label_126e78;
            case 0x126E88u: goto label_126e88;
            case 0x126E98u: goto label_126e98;
            case 0x126EB8u: goto label_126eb8;
            case 0x126EDCu: goto label_126edc;
            case 0x126EE0u: goto label_126ee0;
            case 0x126EF8u: goto label_126ef8;
            case 0x126F00u: goto label_126f00;
            case 0x126F14u: goto label_126f14;
            case 0x126F18u: goto label_126f18;
            case 0x126F34u: goto label_126f34;
            case 0x126F38u: goto label_126f38;
            case 0x126F5Cu: goto label_126f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126E88u;
label_126e88:
    // 0x126e88: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x126e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126e8c: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x126E8Cu;
    {
        const bool branch_taken_0x126e8c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x126E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126E8Cu;
            // 0x126e90: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e8c) {
            ctx->pc = 0x126E98u;
            goto label_126e98;
        }
    }
    ctx->pc = 0x126E94u;
    // 0x126e94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x126e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_126e98:
    // 0x126e98: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x126e98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x126e9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126ea0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x126ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x126ea4: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x126ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x126ea8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x126ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x126eac: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x126EACu;
    {
        const bool branch_taken_0x126eac = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x126EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126EACu;
            // 0x126eb0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126eac) {
            ctx->pc = 0x126EB8u;
            goto label_126eb8;
        }
    }
    ctx->pc = 0x126EB4u;
    // 0x126eb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x126eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_126eb8:
    // 0x126eb8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x126eb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x126ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126ec0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x126ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x126ec4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x126ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x126ec8: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x126EC8u;
    {
        const bool branch_taken_0x126ec8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x126ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126EC8u;
            // 0x126ecc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ec8) {
            ctx->pc = 0x126EDCu;
            goto label_126edc;
        }
    }
    ctx->pc = 0x126ED0u;
    // 0x126ed0: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x126ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x126ed4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126ED4u;
    {
        const bool branch_taken_0x126ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126ED4u;
            // 0x126ed8: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ed4) {
            ctx->pc = 0x126EE0u;
            goto label_126ee0;
        }
    }
    ctx->pc = 0x126EDCu;
label_126edc:
    // 0x126edc: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x126edcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_126ee0:
    // 0x126ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126ee4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x126ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x126ee8: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x126EE8u;
    {
        const bool branch_taken_0x126ee8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x126EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126EE8u;
            // 0x126eec: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ee8) {
            ctx->pc = 0x126EF8u;
            goto label_126ef8;
        }
    }
    ctx->pc = 0x126EF0u;
    // 0x126ef0: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x126EF0u;
    {
        const bool branch_taken_0x126ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126EF0u;
            // 0x126ef4: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ef0) {
            ctx->pc = 0x126E74u;
            goto label_126e74;
        }
    }
    ctx->pc = 0x126EF8u;
label_126ef8:
    // 0x126ef8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x126EF8u;
    {
        const bool branch_taken_0x126ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126EF8u;
            // 0x126efc: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ef8) {
            ctx->pc = 0x126E78u;
            goto label_126e78;
        }
    }
    ctx->pc = 0x126F00u;
label_126f00:
    // 0x126f00: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x126F00u;
    {
        const bool branch_taken_0x126f00 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x126F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F00u;
            // 0x126f04: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f00) {
            ctx->pc = 0x126F14u;
            goto label_126f14;
        }
    }
    ctx->pc = 0x126F08u;
    // 0x126f08: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x126f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x126f0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126F0Cu;
    {
        const bool branch_taken_0x126f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F0Cu;
            // 0x126f10: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f0c) {
            ctx->pc = 0x126F18u;
            goto label_126f18;
        }
    }
    ctx->pc = 0x126F14u;
label_126f14:
    // 0x126f14: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x126f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_126f18:
    // 0x126f18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126f1c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x126f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x126f20: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126F20u;
    {
        const bool branch_taken_0x126f20 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x126F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F20u;
            // 0x126f24: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f20) {
            ctx->pc = 0x126F34u;
            goto label_126f34;
        }
    }
    ctx->pc = 0x126F28u;
    // 0x126f28: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x126f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x126f2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126F2Cu;
    {
        const bool branch_taken_0x126f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F2Cu;
            // 0x126f30: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f2c) {
            ctx->pc = 0x126F38u;
            goto label_126f38;
        }
    }
    ctx->pc = 0x126F34u;
label_126f34:
    // 0x126f34: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x126f34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_126f38:
    // 0x126f38: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x126f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x126f3c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x126f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x126f40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126f44: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x126f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x126f48: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x126F48u;
    {
        const bool branch_taken_0x126f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x126F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F48u;
            // 0x126f4c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f48) {
            ctx->pc = 0x126F5Cu;
            goto label_126f5c;
        }
    }
    ctx->pc = 0x126F50u;
    // 0x126f50: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x126f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x126f54: 0x3e00008  jr          $ra
    ctx->pc = 0x126F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F54u;
            // 0x126f58: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126E10u: goto label_126e10;
            case 0x126E14u: goto label_126e14;
            case 0x126E30u: goto label_126e30;
            case 0x126E34u: goto label_126e34;
            case 0x126E54u: goto label_126e54;
            case 0x126E74u: goto label_126e74;
            case 0x126E78u: goto label_126e78;
            case 0x126E88u: goto label_126e88;
            case 0x126E98u: goto label_126e98;
            case 0x126EB8u: goto label_126eb8;
            case 0x126EDCu: goto label_126edc;
            case 0x126EE0u: goto label_126ee0;
            case 0x126EF8u: goto label_126ef8;
            case 0x126F00u: goto label_126f00;
            case 0x126F14u: goto label_126f14;
            case 0x126F18u: goto label_126f18;
            case 0x126F34u: goto label_126f34;
            case 0x126F38u: goto label_126f38;
            case 0x126F5Cu: goto label_126f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126F5Cu;
label_126f5c:
    // 0x126f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x126F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126F5Cu;
            // 0x126f60: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126E10u: goto label_126e10;
            case 0x126E14u: goto label_126e14;
            case 0x126E30u: goto label_126e30;
            case 0x126E34u: goto label_126e34;
            case 0x126E54u: goto label_126e54;
            case 0x126E74u: goto label_126e74;
            case 0x126E78u: goto label_126e78;
            case 0x126E88u: goto label_126e88;
            case 0x126E98u: goto label_126e98;
            case 0x126EB8u: goto label_126eb8;
            case 0x126EDCu: goto label_126edc;
            case 0x126EE0u: goto label_126ee0;
            case 0x126EF8u: goto label_126ef8;
            case 0x126F00u: goto label_126f00;
            case 0x126F14u: goto label_126f14;
            case 0x126F18u: goto label_126f18;
            case 0x126F34u: goto label_126f34;
            case 0x126F38u: goto label_126f38;
            case 0x126F5Cu: goto label_126f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126F64u;
}
