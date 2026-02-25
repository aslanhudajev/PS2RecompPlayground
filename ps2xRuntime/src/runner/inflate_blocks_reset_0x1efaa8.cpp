#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_blocks_reset
// Address: 0x1efaa8 - 0x1efb58
void inflate_blocks_reset_0x1efaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_blocks_reset_0x1efaa8");
#endif

    ctx->pc = 0x1efaa8u;

label_1efaa8:
    // 0x1efaa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1efaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1efaac:
    // 0x1efaac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1efaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1efab0:
    // 0x1efab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1efab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1efab4:
    // 0x1efab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1efab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1efab8:
    // 0x1efab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1efab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1efabc:
    // 0x1efabc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1efac0:
    if (ctx->pc == 0x1EFAC0u) {
        ctx->pc = 0x1EFAC0u;
            // 0x1efac0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAC4u;
        goto label_1efac4;
    }
    ctx->pc = 0x1EFABCu;
    {
        const bool branch_taken_0x1efabc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFABCu;
            // 0x1efac0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efabc) {
            ctx->pc = 0x1EFACCu;
            goto label_1efacc;
        }
    }
    ctx->pc = 0x1EFAC4u;
label_1efac4:
    // 0x1efac4: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x1efac4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_1efac8:
    // 0x1efac8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1efac8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_1efacc:
    // 0x1efacc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1efaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1efad0:
    // 0x1efad0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1efad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1efad4:
    // 0x1efad4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1efad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1efad8:
    // 0x1efad8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1efadc:
    if (ctx->pc == 0x1EFADCu) {
        ctx->pc = 0x1EFADCu;
            // 0x1efadc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1EFAE0u;
        goto label_1efae0;
    }
    ctx->pc = 0x1EFAD8u;
    {
        const bool branch_taken_0x1efad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efad8) {
            ctx->pc = 0x1EFADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAD8u;
            // 0x1efadc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFAF4u;
            goto label_1efaf4;
        }
    }
    ctx->pc = 0x1EFAE0u;
label_1efae0:
    // 0x1efae0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1efae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1efae4:
    // 0x1efae4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1efae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1efae8:
    // 0x1efae8: 0x40f809  jalr        $v0
label_1efaec:
    if (ctx->pc == 0x1EFAECu) {
        ctx->pc = 0x1EFAECu;
            // 0x1efaec: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1EFAF0u;
        goto label_1efaf0;
    }
    ctx->pc = 0x1EFAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFAF0u);
        ctx->pc = 0x1EFAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAE8u;
            // 0x1efaec: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFAA8u: goto label_1efaa8;
            case 0x1EFAACu: goto label_1efaac;
            case 0x1EFAB0u: goto label_1efab0;
            case 0x1EFAB4u: goto label_1efab4;
            case 0x1EFAB8u: goto label_1efab8;
            case 0x1EFABCu: goto label_1efabc;
            case 0x1EFAC0u: goto label_1efac0;
            case 0x1EFAC4u: goto label_1efac4;
            case 0x1EFAC8u: goto label_1efac8;
            case 0x1EFACCu: goto label_1efacc;
            case 0x1EFAD0u: goto label_1efad0;
            case 0x1EFAD4u: goto label_1efad4;
            case 0x1EFAD8u: goto label_1efad8;
            case 0x1EFADCu: goto label_1efadc;
            case 0x1EFAE0u: goto label_1efae0;
            case 0x1EFAE4u: goto label_1efae4;
            case 0x1EFAE8u: goto label_1efae8;
            case 0x1EFAECu: goto label_1efaec;
            case 0x1EFAF0u: goto label_1efaf0;
            case 0x1EFAF4u: goto label_1efaf4;
            case 0x1EFAF8u: goto label_1efaf8;
            case 0x1EFAFCu: goto label_1efafc;
            case 0x1EFB00u: goto label_1efb00;
            case 0x1EFB04u: goto label_1efb04;
            case 0x1EFB08u: goto label_1efb08;
            case 0x1EFB0Cu: goto label_1efb0c;
            case 0x1EFB10u: goto label_1efb10;
            case 0x1EFB14u: goto label_1efb14;
            case 0x1EFB18u: goto label_1efb18;
            case 0x1EFB1Cu: goto label_1efb1c;
            case 0x1EFB20u: goto label_1efb20;
            case 0x1EFB24u: goto label_1efb24;
            case 0x1EFB28u: goto label_1efb28;
            case 0x1EFB2Cu: goto label_1efb2c;
            case 0x1EFB30u: goto label_1efb30;
            case 0x1EFB34u: goto label_1efb34;
            case 0x1EFB38u: goto label_1efb38;
            case 0x1EFB3Cu: goto label_1efb3c;
            case 0x1EFB40u: goto label_1efb40;
            case 0x1EFB44u: goto label_1efb44;
            case 0x1EFB48u: goto label_1efb48;
            case 0x1EFB4Cu: goto label_1efb4c;
            case 0x1EFB50u: goto label_1efb50;
            case 0x1EFB54u: goto label_1efb54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAF0u; }
            if (ctx->pc != 0x1EFAF0u) { return; }
        }
    }
    ctx->pc = 0x1EFAF0u;
label_1efaf0:
    // 0x1efaf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1efaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1efaf4:
    // 0x1efaf4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1efaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1efaf8:
    // 0x1efaf8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1efafc:
    if (ctx->pc == 0x1EFAFCu) {
        ctx->pc = 0x1EFAFCu;
            // 0x1efafc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1EFB00u;
        goto label_1efb00;
    }
    ctx->pc = 0x1EFAF8u;
    {
        const bool branch_taken_0x1efaf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1efaf8) {
            ctx->pc = 0x1EFAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAF8u;
            // 0x1efafc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB10u;
            goto label_1efb10;
        }
    }
    ctx->pc = 0x1EFB00u;
label_1efb00:
    // 0x1efb00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1efb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1efb04:
    // 0x1efb04: 0xc07c62d  jal         func_1F18B4
label_1efb08:
    if (ctx->pc == 0x1EFB08u) {
        ctx->pc = 0x1EFB08u;
            // 0x1efb08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB0Cu;
        goto label_1efb0c;
    }
    ctx->pc = 0x1EFB04u;
    SET_GPR_U32(ctx, 31, 0x1EFB0Cu);
    ctx->pc = 0x1EFB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB04u;
            // 0x1efb08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18B4u;
    if (runtime->hasFunction(0x1F18B4u)) {
        auto targetFn = runtime->lookupFunction(0x1F18B4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB0Cu; }
        if (ctx->pc != 0x1EFB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_codes_free_0x1f18b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB0Cu; }
        if (ctx->pc != 0x1EFB0Cu) { return; }
    }
    ctx->pc = 0x1EFB0Cu;
label_1efb0c:
    // 0x1efb0c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1efb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1efb10:
    // 0x1efb10: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1efb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1efb14:
    // 0x1efb14: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x1efb14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
label_1efb18:
    // 0x1efb18: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1efb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1efb1c:
    // 0x1efb1c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1efb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1efb20:
    // 0x1efb20: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1efb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1efb24:
    // 0x1efb24: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1efb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1efb28:
    // 0x1efb28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1efb2c:
    if (ctx->pc == 0x1EFB2Cu) {
        ctx->pc = 0x1EFB2Cu;
            // 0x1efb2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB30u;
        goto label_1efb30;
    }
    ctx->pc = 0x1EFB28u;
    {
        const bool branch_taken_0x1efb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB28u;
            // 0x1efb2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb28) {
            ctx->pc = 0x1EFB44u;
            goto label_1efb44;
        }
    }
    ctx->pc = 0x1EFB30u;
label_1efb30:
    // 0x1efb30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1efb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efb34:
    // 0x1efb34: 0x40f809  jalr        $v0
label_1efb38:
    if (ctx->pc == 0x1EFB38u) {
        ctx->pc = 0x1EFB38u;
            // 0x1efb38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB3Cu;
        goto label_1efb3c;
    }
    ctx->pc = 0x1EFB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFB3Cu);
        ctx->pc = 0x1EFB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB34u;
            // 0x1efb38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFAA8u: goto label_1efaa8;
            case 0x1EFAACu: goto label_1efaac;
            case 0x1EFAB0u: goto label_1efab0;
            case 0x1EFAB4u: goto label_1efab4;
            case 0x1EFAB8u: goto label_1efab8;
            case 0x1EFABCu: goto label_1efabc;
            case 0x1EFAC0u: goto label_1efac0;
            case 0x1EFAC4u: goto label_1efac4;
            case 0x1EFAC8u: goto label_1efac8;
            case 0x1EFACCu: goto label_1efacc;
            case 0x1EFAD0u: goto label_1efad0;
            case 0x1EFAD4u: goto label_1efad4;
            case 0x1EFAD8u: goto label_1efad8;
            case 0x1EFADCu: goto label_1efadc;
            case 0x1EFAE0u: goto label_1efae0;
            case 0x1EFAE4u: goto label_1efae4;
            case 0x1EFAE8u: goto label_1efae8;
            case 0x1EFAECu: goto label_1efaec;
            case 0x1EFAF0u: goto label_1efaf0;
            case 0x1EFAF4u: goto label_1efaf4;
            case 0x1EFAF8u: goto label_1efaf8;
            case 0x1EFAFCu: goto label_1efafc;
            case 0x1EFB00u: goto label_1efb00;
            case 0x1EFB04u: goto label_1efb04;
            case 0x1EFB08u: goto label_1efb08;
            case 0x1EFB0Cu: goto label_1efb0c;
            case 0x1EFB10u: goto label_1efb10;
            case 0x1EFB14u: goto label_1efb14;
            case 0x1EFB18u: goto label_1efb18;
            case 0x1EFB1Cu: goto label_1efb1c;
            case 0x1EFB20u: goto label_1efb20;
            case 0x1EFB24u: goto label_1efb24;
            case 0x1EFB28u: goto label_1efb28;
            case 0x1EFB2Cu: goto label_1efb2c;
            case 0x1EFB30u: goto label_1efb30;
            case 0x1EFB34u: goto label_1efb34;
            case 0x1EFB38u: goto label_1efb38;
            case 0x1EFB3Cu: goto label_1efb3c;
            case 0x1EFB40u: goto label_1efb40;
            case 0x1EFB44u: goto label_1efb44;
            case 0x1EFB48u: goto label_1efb48;
            case 0x1EFB4Cu: goto label_1efb4c;
            case 0x1EFB50u: goto label_1efb50;
            case 0x1EFB54u: goto label_1efb54;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB3Cu; }
            if (ctx->pc != 0x1EFB3Cu) { return; }
        }
    }
    ctx->pc = 0x1EFB3Cu;
label_1efb3c:
    // 0x1efb3c: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x1efb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_1efb40:
    // 0x1efb40: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x1efb40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
label_1efb44:
    // 0x1efb44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1efb44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1efb48:
    // 0x1efb48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1efb48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1efb4c:
    // 0x1efb4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1efb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1efb50:
    // 0x1efb50: 0x3e00008  jr          $ra
label_1efb54:
    if (ctx->pc == 0x1EFB54u) {
        ctx->pc = 0x1EFB54u;
            // 0x1efb54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EFB58u;
        goto label_fallthrough_0x1efb50;
    }
    ctx->pc = 0x1EFB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB50u;
            // 0x1efb54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFAA8u: goto label_1efaa8;
            case 0x1EFAACu: goto label_1efaac;
            case 0x1EFAB0u: goto label_1efab0;
            case 0x1EFAB4u: goto label_1efab4;
            case 0x1EFAB8u: goto label_1efab8;
            case 0x1EFABCu: goto label_1efabc;
            case 0x1EFAC0u: goto label_1efac0;
            case 0x1EFAC4u: goto label_1efac4;
            case 0x1EFAC8u: goto label_1efac8;
            case 0x1EFACCu: goto label_1efacc;
            case 0x1EFAD0u: goto label_1efad0;
            case 0x1EFAD4u: goto label_1efad4;
            case 0x1EFAD8u: goto label_1efad8;
            case 0x1EFADCu: goto label_1efadc;
            case 0x1EFAE0u: goto label_1efae0;
            case 0x1EFAE4u: goto label_1efae4;
            case 0x1EFAE8u: goto label_1efae8;
            case 0x1EFAECu: goto label_1efaec;
            case 0x1EFAF0u: goto label_1efaf0;
            case 0x1EFAF4u: goto label_1efaf4;
            case 0x1EFAF8u: goto label_1efaf8;
            case 0x1EFAFCu: goto label_1efafc;
            case 0x1EFB00u: goto label_1efb00;
            case 0x1EFB04u: goto label_1efb04;
            case 0x1EFB08u: goto label_1efb08;
            case 0x1EFB0Cu: goto label_1efb0c;
            case 0x1EFB10u: goto label_1efb10;
            case 0x1EFB14u: goto label_1efb14;
            case 0x1EFB18u: goto label_1efb18;
            case 0x1EFB1Cu: goto label_1efb1c;
            case 0x1EFB20u: goto label_1efb20;
            case 0x1EFB24u: goto label_1efb24;
            case 0x1EFB28u: goto label_1efb28;
            case 0x1EFB2Cu: goto label_1efb2c;
            case 0x1EFB30u: goto label_1efb30;
            case 0x1EFB34u: goto label_1efb34;
            case 0x1EFB38u: goto label_1efb38;
            case 0x1EFB3Cu: goto label_1efb3c;
            case 0x1EFB40u: goto label_1efb40;
            case 0x1EFB44u: goto label_1efb44;
            case 0x1EFB48u: goto label_1efb48;
            case 0x1EFB4Cu: goto label_1efb4c;
            case 0x1EFB50u: goto label_1efb50;
            case 0x1EFB54u: goto label_1efb54;
            default: break;
        }
        return;
    }
label_fallthrough_0x1efb50:
    ctx->pc = 0x1EFB58u;
}
