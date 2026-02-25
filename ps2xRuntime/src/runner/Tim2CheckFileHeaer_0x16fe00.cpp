#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Tim2CheckFileHeaer
// Address: 0x16fe00 - 0x16fee4
void Tim2CheckFileHeaer_0x16fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Tim2CheckFileHeaer_0x16fe00");
#endif

    ctx->pc = 0x16fe00u;

    // 0x16fe00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16fe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fe04: 0x24090054  addiu       $t1, $zero, 0x54
    ctx->pc = 0x16fe04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x16fe08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fe0c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x16fe0cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fe10: 0x10a9000d  beq         $a1, $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x16FE10u;
    {
        const bool branch_taken_0x16fe10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x16fe10) {
            ctx->pc = 0x16FE48u;
            goto label_16fe48;
        }
    }
    ctx->pc = 0x16FE18u;
    // 0x16fe18: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x16fe18u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x16fe1c: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x16fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x16fe20: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16FE20u;
    {
        const bool branch_taken_0x16fe20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x16fe20) {
            ctx->pc = 0x16FE48u;
            goto label_16fe48;
        }
    }
    ctx->pc = 0x16FE28u;
    // 0x16fe28: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x16fe28u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x16fe2c: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x16fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x16fe30: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16FE30u;
    {
        const bool branch_taken_0x16fe30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x16fe30) {
            ctx->pc = 0x16FE48u;
            goto label_16fe48;
        }
    }
    ctx->pc = 0x16FE38u;
    // 0x16fe38: 0x90880003  lbu         $t0, 0x3($a0)
    ctx->pc = 0x16fe38u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x16fe3c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x16fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16fe40: 0x15030003  bne         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FE40u;
    {
        const bool branch_taken_0x16fe40 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x16fe40) {
            ctx->pc = 0x16FE50u;
            goto label_16fe50;
        }
    }
    ctx->pc = 0x16FE48u;
label_16fe48:
    // 0x16fe48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16FE48u;
    {
        const bool branch_taken_0x16fe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE48u;
            // 0x16fe4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe48) {
            ctx->pc = 0x16FE98u;
            goto label_16fe98;
        }
    }
    ctx->pc = 0x16FE50u;
label_16fe50:
    // 0x16fe50: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x16fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x16fe54: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16FE54u;
    {
        const bool branch_taken_0x16fe54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16FE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE54u;
            // 0x16fe58: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe54) {
            ctx->pc = 0x16FE78u;
            goto label_16fe78;
        }
    }
    ctx->pc = 0x16FE5Cu;
    // 0x16fe5c: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16FE5Cu;
    {
        const bool branch_taken_0x16fe5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x16fe5c) {
            ctx->pc = 0x16FE78u;
            goto label_16fe78;
        }
    }
    ctx->pc = 0x16FE64u;
    // 0x16fe64: 0x10e90004  beq         $a3, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FE64u;
    {
        const bool branch_taken_0x16fe64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x16fe64) {
            ctx->pc = 0x16FE78u;
            goto label_16fe78;
        }
    }
    ctx->pc = 0x16FE6Cu;
    // 0x16fe6c: 0x15030004  bne         $t0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16FE6Cu;
    {
        const bool branch_taken_0x16fe6c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x16fe6c) {
            ctx->pc = 0x16FE80u;
            goto label_16fe80;
        }
    }
    ctx->pc = 0x16FE74u;
    // 0x16fe74: 0x0  nop
    ctx->pc = 0x16fe74u;
    // NOP
label_16fe78:
    // 0x16fe78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16FE78u;
    {
        const bool branch_taken_0x16fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE78u;
            // 0x16fe7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe78) {
            ctx->pc = 0x16FE98u;
            goto label_16fe98;
        }
    }
    ctx->pc = 0x16FE80u;
label_16fe80:
    // 0x16fe80: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x16fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x16fe84: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x16FE84u;
    SET_GPR_U32(ctx, 31, 0x16FE8Cu);
    ctx->pc = 0x16FE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE84u;
            // 0x16fe88: 0x24841220  addiu       $a0, $a0, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FE8Cu; }
        if (ctx->pc != 0x16FE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FE8Cu; }
        if (ctx->pc != 0x16FE8Cu) { return; }
    }
    ctx->pc = 0x16FE8Cu;
    // 0x16fe8c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16FE8Cu;
    {
        const bool branch_taken_0x16fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE8Cu;
            // 0x16fe90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe8c) {
            ctx->pc = 0x16FED8u;
            goto label_16fed8;
        }
    }
    ctx->pc = 0x16FE94u;
    // 0x16fe94: 0x0  nop
    ctx->pc = 0x16fe94u;
    // NOP
label_16fe98:
    // 0x16fe98: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x16fe98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16fe9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16fea0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16FEA0u;
    {
        const bool branch_taken_0x16fea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x16FEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEA0u;
            // 0x16fea4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fea0) {
            ctx->pc = 0x16FED8u;
            goto label_16fed8;
        }
    }
    ctx->pc = 0x16FEA8u;
    // 0x16fea8: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16FEA8u;
    {
        const bool branch_taken_0x16fea8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x16fea8) {
            ctx->pc = 0x16FEC0u;
            goto label_16fec0;
        }
    }
    ctx->pc = 0x16FEB0u;
    // 0x16feb0: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x16feb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x16feb4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x16feb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x16feb8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x16FEB8u;
    {
        const bool branch_taken_0x16feb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16feb8) {
            ctx->pc = 0x16FED8u;
            goto label_16fed8;
        }
    }
    ctx->pc = 0x16FEC0u;
label_16fec0:
    // 0x16fec0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x16fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x16fec4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x16FEC4u;
    SET_GPR_U32(ctx, 31, 0x16FECCu);
    ctx->pc = 0x16FEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEC4u;
            // 0x16fec8: 0x24841260  addiu       $a0, $a0, 0x1260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FECCu; }
        if (ctx->pc != 0x16FECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FECCu; }
        if (ctx->pc != 0x16FECCu) { return; }
    }
    ctx->pc = 0x16FECCu;
    // 0x16fecc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16FECCu;
    {
        const bool branch_taken_0x16fecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FECCu;
            // 0x16fed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fecc) {
            ctx->pc = 0x16FED8u;
            goto label_16fed8;
        }
    }
    ctx->pc = 0x16FED4u;
    // 0x16fed4: 0x0  nop
    ctx->pc = 0x16fed4u;
    // NOP
label_16fed8:
    // 0x16fed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fedc: 0x3e00008  jr          $ra
    ctx->pc = 0x16FEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEDCu;
            // 0x16fee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FE48u: goto label_16fe48;
            case 0x16FE50u: goto label_16fe50;
            case 0x16FE78u: goto label_16fe78;
            case 0x16FE80u: goto label_16fe80;
            case 0x16FE98u: goto label_16fe98;
            case 0x16FEC0u: goto label_16fec0;
            case 0x16FED8u: goto label_16fed8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FEE4u;
}
