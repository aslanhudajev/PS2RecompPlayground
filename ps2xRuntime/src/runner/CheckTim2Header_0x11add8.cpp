#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CheckTim2Header
// Address: 0x11add8 - 0x11ae50
void CheckTim2Header_0x11add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CheckTim2Header_0x11add8");
#endif

    ctx->pc = 0x11add8u;

    // 0x11add8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11add8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11addc: 0x24034954  addiu       $v1, $zero, 0x4954
    ctx->pc = 0x11addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18772));
    // 0x11ade0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ade4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x11ade4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ade8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11ADE8u;
    {
        const bool branch_taken_0x11ade8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11ADECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADE8u;
            // 0x11adec: 0x2402324d  addiu       $v0, $zero, 0x324D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12877));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ade8) {
            ctx->pc = 0x11ADFCu;
            goto label_11adfc;
        }
    }
    ctx->pc = 0x11ADF0u;
    // 0x11adf0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x11adf0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x11adf4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ADF4u;
    {
        const bool branch_taken_0x11adf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11adf4) {
            ctx->pc = 0x11ADF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADF4u;
            // 0x11adf8: 0x90830004  lbu         $v1, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AE0Cu;
            goto label_11ae0c;
        }
    }
    ctx->pc = 0x11ADFCu;
label_11adfc:
    // 0x11adfc: 0xc046b56  jal         func_11AD58
    ctx->pc = 0x11ADFCu;
    SET_GPR_U32(ctx, 31, 0x11AE04u);
    ctx->pc = 0x11AE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADFCu;
            // 0x11ae00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD58u;
    if (runtime->hasFunction(0x11AD58u)) {
        auto targetFn = runtime->lookupFunction(0x11AD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE04u; }
        if (ctx->pc != 0x11AE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tim2_err_0x11ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE04u; }
        if (ctx->pc != 0x11AE04u) { return; }
    }
    ctx->pc = 0x11AE04u;
    // 0x11ae04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11AE04u;
    {
        const bool branch_taken_0x11ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE04u;
            // 0x11ae08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae04) {
            ctx->pc = 0x11AE48u;
            goto label_11ae48;
        }
    }
    ctx->pc = 0x11AE0Cu;
label_11ae0c:
    // 0x11ae0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ae10: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11AE10u;
    {
        const bool branch_taken_0x11ae10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11AE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE10u;
            // 0x11ae14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae10) {
            ctx->pc = 0x11AE40u;
            goto label_11ae40;
        }
    }
    ctx->pc = 0x11AE18u;
    // 0x11ae18: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AE18u;
    {
        const bool branch_taken_0x11ae18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ae18) {
            ctx->pc = 0x11AE30u;
            goto label_11ae30;
        }
    }
    ctx->pc = 0x11AE20u;
    // 0x11ae20: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x11ae20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x11ae24: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11ae24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11ae28: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11AE28u;
    {
        const bool branch_taken_0x11ae28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE28u;
            // 0x11ae2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae28) {
            ctx->pc = 0x11AE44u;
            goto label_11ae44;
        }
    }
    ctx->pc = 0x11AE30u;
label_11ae30:
    // 0x11ae30: 0xc046b56  jal         func_11AD58
    ctx->pc = 0x11AE30u;
    SET_GPR_U32(ctx, 31, 0x11AE38u);
    ctx->pc = 0x11AE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE30u;
            // 0x11ae34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD58u;
    if (runtime->hasFunction(0x11AD58u)) {
        auto targetFn = runtime->lookupFunction(0x11AD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE38u; }
        if (ctx->pc != 0x11AE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tim2_err_0x11ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE38u; }
        if (ctx->pc != 0x11AE38u) { return; }
    }
    ctx->pc = 0x11AE38u;
    // 0x11ae38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11AE38u;
    {
        const bool branch_taken_0x11ae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE38u;
            // 0x11ae3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae38) {
            ctx->pc = 0x11AE48u;
            goto label_11ae48;
        }
    }
    ctx->pc = 0x11AE40u;
label_11ae40:
    // 0x11ae40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11ae40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ae44:
    // 0x11ae44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ae44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11ae48:
    // 0x11ae48: 0x3e00008  jr          $ra
    ctx->pc = 0x11AE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE48u;
            // 0x11ae4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11ADFCu: goto label_11adfc;
            case 0x11AE0Cu: goto label_11ae0c;
            case 0x11AE30u: goto label_11ae30;
            case 0x11AE40u: goto label_11ae40;
            case 0x11AE44u: goto label_11ae44;
            case 0x11AE48u: goto label_11ae48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AE50u;
}
