#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_trees_bits
// Address: 0x1f0d88 - 0x1f0e8c
void inflate_trees_bits_0x1f0d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_trees_bits_0x1f0d88");
#endif

    ctx->pc = 0x1f0d88u;

label_1f0d88:
    // 0x1f0d88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f0d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f0d8c:
    // 0x1f0d8c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f0d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1f0d90:
    // 0x1f0d90: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f0d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1f0d94:
    // 0x1f0d94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f0d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1f0d98:
    // 0x1f0d98: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f0d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1f0d9c:
    // 0x1f0d9c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f0d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1f0da0:
    // 0x1f0da0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1f0da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1f0da4:
    // 0x1f0da4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f0da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f0da8:
    // 0x1f0da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f0dac:
    // 0x1f0dac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f0dacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f0db0:
    // 0x1f0db0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f0db0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f0db4:
    // 0x1f0db4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f0db4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f0db8:
    // 0x1f0db8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1f0db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f0dbc:
    // 0x1f0dbc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1f0dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1f0dc0:
    // 0x1f0dc0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1f0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1f0dc4:
    // 0x1f0dc4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1f0dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1f0dc8:
    // 0x1f0dc8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1f0dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f0dcc:
    // 0x1f0dcc: 0x40f809  jalr        $v0
label_1f0dd0:
    if (ctx->pc == 0x1F0DD0u) {
        ctx->pc = 0x1F0DD0u;
            // 0x1f0dd0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1F0DD4u;
        goto label_1f0dd4;
    }
    ctx->pc = 0x1F0DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0DD4u);
        ctx->pc = 0x1F0DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0DCCu;
            // 0x1f0dd0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0D88u: goto label_1f0d88;
            case 0x1F0D8Cu: goto label_1f0d8c;
            case 0x1F0D90u: goto label_1f0d90;
            case 0x1F0D94u: goto label_1f0d94;
            case 0x1F0D98u: goto label_1f0d98;
            case 0x1F0D9Cu: goto label_1f0d9c;
            case 0x1F0DA0u: goto label_1f0da0;
            case 0x1F0DA4u: goto label_1f0da4;
            case 0x1F0DA8u: goto label_1f0da8;
            case 0x1F0DACu: goto label_1f0dac;
            case 0x1F0DB0u: goto label_1f0db0;
            case 0x1F0DB4u: goto label_1f0db4;
            case 0x1F0DB8u: goto label_1f0db8;
            case 0x1F0DBCu: goto label_1f0dbc;
            case 0x1F0DC0u: goto label_1f0dc0;
            case 0x1F0DC4u: goto label_1f0dc4;
            case 0x1F0DC8u: goto label_1f0dc8;
            case 0x1F0DCCu: goto label_1f0dcc;
            case 0x1F0DD0u: goto label_1f0dd0;
            case 0x1F0DD4u: goto label_1f0dd4;
            case 0x1F0DD8u: goto label_1f0dd8;
            case 0x1F0DDCu: goto label_1f0ddc;
            case 0x1F0DE0u: goto label_1f0de0;
            case 0x1F0DE4u: goto label_1f0de4;
            case 0x1F0DE8u: goto label_1f0de8;
            case 0x1F0DECu: goto label_1f0dec;
            case 0x1F0DF0u: goto label_1f0df0;
            case 0x1F0DF4u: goto label_1f0df4;
            case 0x1F0DF8u: goto label_1f0df8;
            case 0x1F0DFCu: goto label_1f0dfc;
            case 0x1F0E00u: goto label_1f0e00;
            case 0x1F0E04u: goto label_1f0e04;
            case 0x1F0E08u: goto label_1f0e08;
            case 0x1F0E0Cu: goto label_1f0e0c;
            case 0x1F0E10u: goto label_1f0e10;
            case 0x1F0E14u: goto label_1f0e14;
            case 0x1F0E18u: goto label_1f0e18;
            case 0x1F0E1Cu: goto label_1f0e1c;
            case 0x1F0E20u: goto label_1f0e20;
            case 0x1F0E24u: goto label_1f0e24;
            case 0x1F0E28u: goto label_1f0e28;
            case 0x1F0E2Cu: goto label_1f0e2c;
            case 0x1F0E30u: goto label_1f0e30;
            case 0x1F0E34u: goto label_1f0e34;
            case 0x1F0E38u: goto label_1f0e38;
            case 0x1F0E3Cu: goto label_1f0e3c;
            case 0x1F0E40u: goto label_1f0e40;
            case 0x1F0E44u: goto label_1f0e44;
            case 0x1F0E48u: goto label_1f0e48;
            case 0x1F0E4Cu: goto label_1f0e4c;
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E54u: goto label_1f0e54;
            case 0x1F0E58u: goto label_1f0e58;
            case 0x1F0E5Cu: goto label_1f0e5c;
            case 0x1F0E60u: goto label_1f0e60;
            case 0x1F0E64u: goto label_1f0e64;
            case 0x1F0E68u: goto label_1f0e68;
            case 0x1F0E6Cu: goto label_1f0e6c;
            case 0x1F0E70u: goto label_1f0e70;
            case 0x1F0E74u: goto label_1f0e74;
            case 0x1F0E78u: goto label_1f0e78;
            case 0x1F0E7Cu: goto label_1f0e7c;
            case 0x1F0E80u: goto label_1f0e80;
            case 0x1F0E84u: goto label_1f0e84;
            case 0x1F0E88u: goto label_1f0e88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0DD4u; }
            if (ctx->pc != 0x1F0DD4u) { return; }
        }
    }
    ctx->pc = 0x1F0DD4u;
label_1f0dd4:
    // 0x1f0dd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f0dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0dd8:
    // 0x1f0dd8: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_1f0ddc:
    if (ctx->pc == 0x1F0DDCu) {
        ctx->pc = 0x1F0DDCu;
            // 0x1f0ddc: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x1F0DE0u;
        goto label_1f0de0;
    }
    ctx->pc = 0x1F0DD8u;
    {
        const bool branch_taken_0x1f0dd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0DD8u;
            // 0x1f0ddc: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0dd8) {
            ctx->pc = 0x1F0E68u;
            goto label_1f0e68;
        }
    }
    ctx->pc = 0x1F0DE0u;
label_1f0de0:
    // 0x1f0de0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f0de4:
    // 0x1f0de4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1f0de8:
    // 0x1f0de8: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x1f0de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_1f0dec:
    // 0x1f0dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0df0:
    // 0x1f0df0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1f0df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f0df4:
    // 0x1f0df4: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1f0df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f0df8:
    // 0x1f0df8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f0df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0dfc:
    // 0x1f0dfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f0dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0e00:
    // 0x1f0e00: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f0e00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f0e04:
    // 0x1f0e04: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1f0e04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f0e08:
    // 0x1f0e08: 0xc07c1ee  jal         func_1F07B8
label_1f0e0c:
    if (ctx->pc == 0x1F0E0Cu) {
        ctx->pc = 0x1F0E0Cu;
            // 0x1f0e0c: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E10u;
        goto label_1f0e10;
    }
    ctx->pc = 0x1F0E08u;
    SET_GPR_U32(ctx, 31, 0x1F0E10u);
    ctx->pc = 0x1F0E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E08u;
            // 0x1f0e0c: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F07B8u;
    if (runtime->hasFunction(0x1F07B8u)) {
        auto targetFn = runtime->lookupFunction(0x1F07B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E10u; }
        if (ctx->pc != 0x1F0E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        huft_build_0x1f07b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E10u; }
        if (ctx->pc != 0x1F0E10u) { return; }
    }
    ctx->pc = 0x1F0E10u;
label_1f0e10:
    // 0x1f0e10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0e14:
    // 0x1f0e14: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1f0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1f0e18:
    // 0x1f0e18: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1f0e1c:
    if (ctx->pc == 0x1F0E1Cu) {
        ctx->pc = 0x1F0E1Cu;
            // 0x1f0e1c: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x1F0E20u;
        goto label_1f0e20;
    }
    ctx->pc = 0x1F0E18u;
    {
        const bool branch_taken_0x1f0e18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E18u;
            // 0x1f0e1c: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e18) {
            ctx->pc = 0x1F0E30u;
            goto label_1f0e30;
        }
    }
    ctx->pc = 0x1F0E20u;
label_1f0e20:
    // 0x1f0e20: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f0e24:
    // 0x1f0e24: 0x24423438  addiu       $v0, $v0, 0x3438
    ctx->pc = 0x1f0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13368));
label_1f0e28:
    // 0x1f0e28: 0x1000000a  b           . + 4 + (0xA << 2)
label_1f0e2c:
    if (ctx->pc == 0x1F0E2Cu) {
        ctx->pc = 0x1F0E2Cu;
            // 0x1f0e2c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x1F0E30u;
        goto label_1f0e30;
    }
    ctx->pc = 0x1F0E28u;
    {
        const bool branch_taken_0x1f0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E28u;
            // 0x1f0e2c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e28) {
            ctx->pc = 0x1F0E54u;
            goto label_1f0e54;
        }
    }
    ctx->pc = 0x1F0E30u;
label_1f0e30:
    // 0x1f0e30: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_1f0e34:
    if (ctx->pc == 0x1F0E34u) {
        ctx->pc = 0x1F0E34u;
            // 0x1f0e34: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1F0E38u;
        goto label_1f0e38;
    }
    ctx->pc = 0x1F0E30u;
    {
        const bool branch_taken_0x1f0e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E30u;
            // 0x1f0e34: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e30) {
            ctx->pc = 0x1F0E48u;
            goto label_1f0e48;
        }
    }
    ctx->pc = 0x1F0E38u;
label_1f0e38:
    // 0x1f0e38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f0e3c:
    // 0x1f0e3c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1f0e40:
    if (ctx->pc == 0x1F0E40u) {
        ctx->pc = 0x1F0E40u;
            // 0x1f0e40: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x1F0E44u;
        goto label_1f0e44;
    }
    ctx->pc = 0x1F0E3Cu;
    {
        const bool branch_taken_0x1f0e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e3c) {
            ctx->pc = 0x1F0E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E3Cu;
            // 0x1f0e40: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0E58u;
            goto label_1f0e58;
        }
    }
    ctx->pc = 0x1F0E44u;
label_1f0e44:
    // 0x1f0e44: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f0e48:
    // 0x1f0e48: 0x24423460  addiu       $v0, $v0, 0x3460
    ctx->pc = 0x1f0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13408));
label_1f0e4c:
    // 0x1f0e4c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1f0e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_1f0e50:
    // 0x1f0e50: 0x2410fffd  addiu       $s0, $zero, -0x3
    ctx->pc = 0x1f0e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1f0e54:
    // 0x1f0e54: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1f0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1f0e58:
    // 0x1f0e58: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1f0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1f0e5c:
    // 0x1f0e5c: 0x40f809  jalr        $v0
label_1f0e60:
    if (ctx->pc == 0x1F0E60u) {
        ctx->pc = 0x1F0E60u;
            // 0x1f0e60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E64u;
        goto label_1f0e64;
    }
    ctx->pc = 0x1F0E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0E64u);
        ctx->pc = 0x1F0E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E5Cu;
            // 0x1f0e60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0D88u: goto label_1f0d88;
            case 0x1F0D8Cu: goto label_1f0d8c;
            case 0x1F0D90u: goto label_1f0d90;
            case 0x1F0D94u: goto label_1f0d94;
            case 0x1F0D98u: goto label_1f0d98;
            case 0x1F0D9Cu: goto label_1f0d9c;
            case 0x1F0DA0u: goto label_1f0da0;
            case 0x1F0DA4u: goto label_1f0da4;
            case 0x1F0DA8u: goto label_1f0da8;
            case 0x1F0DACu: goto label_1f0dac;
            case 0x1F0DB0u: goto label_1f0db0;
            case 0x1F0DB4u: goto label_1f0db4;
            case 0x1F0DB8u: goto label_1f0db8;
            case 0x1F0DBCu: goto label_1f0dbc;
            case 0x1F0DC0u: goto label_1f0dc0;
            case 0x1F0DC4u: goto label_1f0dc4;
            case 0x1F0DC8u: goto label_1f0dc8;
            case 0x1F0DCCu: goto label_1f0dcc;
            case 0x1F0DD0u: goto label_1f0dd0;
            case 0x1F0DD4u: goto label_1f0dd4;
            case 0x1F0DD8u: goto label_1f0dd8;
            case 0x1F0DDCu: goto label_1f0ddc;
            case 0x1F0DE0u: goto label_1f0de0;
            case 0x1F0DE4u: goto label_1f0de4;
            case 0x1F0DE8u: goto label_1f0de8;
            case 0x1F0DECu: goto label_1f0dec;
            case 0x1F0DF0u: goto label_1f0df0;
            case 0x1F0DF4u: goto label_1f0df4;
            case 0x1F0DF8u: goto label_1f0df8;
            case 0x1F0DFCu: goto label_1f0dfc;
            case 0x1F0E00u: goto label_1f0e00;
            case 0x1F0E04u: goto label_1f0e04;
            case 0x1F0E08u: goto label_1f0e08;
            case 0x1F0E0Cu: goto label_1f0e0c;
            case 0x1F0E10u: goto label_1f0e10;
            case 0x1F0E14u: goto label_1f0e14;
            case 0x1F0E18u: goto label_1f0e18;
            case 0x1F0E1Cu: goto label_1f0e1c;
            case 0x1F0E20u: goto label_1f0e20;
            case 0x1F0E24u: goto label_1f0e24;
            case 0x1F0E28u: goto label_1f0e28;
            case 0x1F0E2Cu: goto label_1f0e2c;
            case 0x1F0E30u: goto label_1f0e30;
            case 0x1F0E34u: goto label_1f0e34;
            case 0x1F0E38u: goto label_1f0e38;
            case 0x1F0E3Cu: goto label_1f0e3c;
            case 0x1F0E40u: goto label_1f0e40;
            case 0x1F0E44u: goto label_1f0e44;
            case 0x1F0E48u: goto label_1f0e48;
            case 0x1F0E4Cu: goto label_1f0e4c;
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E54u: goto label_1f0e54;
            case 0x1F0E58u: goto label_1f0e58;
            case 0x1F0E5Cu: goto label_1f0e5c;
            case 0x1F0E60u: goto label_1f0e60;
            case 0x1F0E64u: goto label_1f0e64;
            case 0x1F0E68u: goto label_1f0e68;
            case 0x1F0E6Cu: goto label_1f0e6c;
            case 0x1F0E70u: goto label_1f0e70;
            case 0x1F0E74u: goto label_1f0e74;
            case 0x1F0E78u: goto label_1f0e78;
            case 0x1F0E7Cu: goto label_1f0e7c;
            case 0x1F0E80u: goto label_1f0e80;
            case 0x1F0E84u: goto label_1f0e84;
            case 0x1F0E88u: goto label_1f0e88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0E64u; }
            if (ctx->pc != 0x1F0E64u) { return; }
        }
    }
    ctx->pc = 0x1F0E64u;
label_1f0e64:
    // 0x1f0e64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f0e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0e68:
    // 0x1f0e68: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f0e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0e6c:
    // 0x1f0e6c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f0e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f0e70:
    // 0x1f0e70: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f0e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0e74:
    // 0x1f0e74: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f0e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1f0e78:
    // 0x1f0e78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f0e78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f0e7c:
    // 0x1f0e7c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1f0e7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1f0e80:
    // 0x1f0e80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f0e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f0e84:
    // 0x1f0e84: 0x3e00008  jr          $ra
label_1f0e88:
    if (ctx->pc == 0x1F0E88u) {
        ctx->pc = 0x1F0E88u;
            // 0x1f0e88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1F0E8Cu;
        goto label_fallthrough_0x1f0e84;
    }
    ctx->pc = 0x1F0E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0E84u;
            // 0x1f0e88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0D88u: goto label_1f0d88;
            case 0x1F0D8Cu: goto label_1f0d8c;
            case 0x1F0D90u: goto label_1f0d90;
            case 0x1F0D94u: goto label_1f0d94;
            case 0x1F0D98u: goto label_1f0d98;
            case 0x1F0D9Cu: goto label_1f0d9c;
            case 0x1F0DA0u: goto label_1f0da0;
            case 0x1F0DA4u: goto label_1f0da4;
            case 0x1F0DA8u: goto label_1f0da8;
            case 0x1F0DACu: goto label_1f0dac;
            case 0x1F0DB0u: goto label_1f0db0;
            case 0x1F0DB4u: goto label_1f0db4;
            case 0x1F0DB8u: goto label_1f0db8;
            case 0x1F0DBCu: goto label_1f0dbc;
            case 0x1F0DC0u: goto label_1f0dc0;
            case 0x1F0DC4u: goto label_1f0dc4;
            case 0x1F0DC8u: goto label_1f0dc8;
            case 0x1F0DCCu: goto label_1f0dcc;
            case 0x1F0DD0u: goto label_1f0dd0;
            case 0x1F0DD4u: goto label_1f0dd4;
            case 0x1F0DD8u: goto label_1f0dd8;
            case 0x1F0DDCu: goto label_1f0ddc;
            case 0x1F0DE0u: goto label_1f0de0;
            case 0x1F0DE4u: goto label_1f0de4;
            case 0x1F0DE8u: goto label_1f0de8;
            case 0x1F0DECu: goto label_1f0dec;
            case 0x1F0DF0u: goto label_1f0df0;
            case 0x1F0DF4u: goto label_1f0df4;
            case 0x1F0DF8u: goto label_1f0df8;
            case 0x1F0DFCu: goto label_1f0dfc;
            case 0x1F0E00u: goto label_1f0e00;
            case 0x1F0E04u: goto label_1f0e04;
            case 0x1F0E08u: goto label_1f0e08;
            case 0x1F0E0Cu: goto label_1f0e0c;
            case 0x1F0E10u: goto label_1f0e10;
            case 0x1F0E14u: goto label_1f0e14;
            case 0x1F0E18u: goto label_1f0e18;
            case 0x1F0E1Cu: goto label_1f0e1c;
            case 0x1F0E20u: goto label_1f0e20;
            case 0x1F0E24u: goto label_1f0e24;
            case 0x1F0E28u: goto label_1f0e28;
            case 0x1F0E2Cu: goto label_1f0e2c;
            case 0x1F0E30u: goto label_1f0e30;
            case 0x1F0E34u: goto label_1f0e34;
            case 0x1F0E38u: goto label_1f0e38;
            case 0x1F0E3Cu: goto label_1f0e3c;
            case 0x1F0E40u: goto label_1f0e40;
            case 0x1F0E44u: goto label_1f0e44;
            case 0x1F0E48u: goto label_1f0e48;
            case 0x1F0E4Cu: goto label_1f0e4c;
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E54u: goto label_1f0e54;
            case 0x1F0E58u: goto label_1f0e58;
            case 0x1F0E5Cu: goto label_1f0e5c;
            case 0x1F0E60u: goto label_1f0e60;
            case 0x1F0E64u: goto label_1f0e64;
            case 0x1F0E68u: goto label_1f0e68;
            case 0x1F0E6Cu: goto label_1f0e6c;
            case 0x1F0E70u: goto label_1f0e70;
            case 0x1F0E74u: goto label_1f0e74;
            case 0x1F0E78u: goto label_1f0e78;
            case 0x1F0E7Cu: goto label_1f0e7c;
            case 0x1F0E80u: goto label_1f0e80;
            case 0x1F0E84u: goto label_1f0e84;
            case 0x1F0E88u: goto label_1f0e88;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f0e84:
    ctx->pc = 0x1F0E8Cu;
}
