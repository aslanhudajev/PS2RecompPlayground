#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetTim2PictureHeader
// Address: 0x11ae50 - 0x11af0c
void GetTim2PictureHeader_0x11ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetTim2PictureHeader_0x11ae50");
#endif

    ctx->pc = 0x11ae50u;

    // 0x11ae50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ae54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ae58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ae58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11ae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11ae60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11ae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ae64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11ae64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11ae6c: 0xc046b76  jal         func_11ADD8
    ctx->pc = 0x11AE6Cu;
    SET_GPR_U32(ctx, 31, 0x11AE74u);
    ctx->pc = 0x11AE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE6Cu;
            // 0x11ae70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ADD8u;
    if (runtime->hasFunction(0x11ADD8u)) {
        auto targetFn = runtime->lookupFunction(0x11ADD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE74u; }
        if (ctx->pc != 0x11AE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTim2Header_0x11add8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE74u; }
        if (ctx->pc != 0x11AE74u) { return; }
    }
    ctx->pc = 0x11AE74u;
    // 0x11ae74: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11AE74u;
    {
        const bool branch_taken_0x11ae74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE74u;
            // 0x11ae78: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae74) {
            ctx->pc = 0x11AEF8u;
            goto label_11aef8;
        }
    }
    ctx->pc = 0x11AE7Cu;
    // 0x11ae7c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x11ae7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x11ae80: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11ae80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11ae84: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AE84u;
    {
        const bool branch_taken_0x11ae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ae84) {
            ctx->pc = 0x11AE88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE84u;
            // 0x11ae88: 0x92030005  lbu         $v1, 0x5($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AE9Cu;
            goto label_11ae9c;
        }
    }
    ctx->pc = 0x11AE8Cu;
    // 0x11ae8c: 0xc046b56  jal         func_11AD58
    ctx->pc = 0x11AE8Cu;
    SET_GPR_U32(ctx, 31, 0x11AE94u);
    ctx->pc = 0x11AE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE8Cu;
            // 0x11ae90: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD58u;
    if (runtime->hasFunction(0x11AD58u)) {
        auto targetFn = runtime->lookupFunction(0x11AD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE94u; }
        if (ctx->pc != 0x11AE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tim2_err_0x11ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE94u; }
        if (ctx->pc != 0x11AE94u) { return; }
    }
    ctx->pc = 0x11AE94u;
    // 0x11ae94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11AE94u;
    {
        const bool branch_taken_0x11ae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE94u;
            // 0x11ae98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae94) {
            ctx->pc = 0x11AEF8u;
            goto label_11aef8;
        }
    }
    ctx->pc = 0x11AE9Cu;
label_11ae9c:
    // 0x11ae9c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AE9Cu;
    {
        const bool branch_taken_0x11ae9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE9Cu;
            // 0x11aea0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae9c) {
            ctx->pc = 0x11AEBCu;
            goto label_11aebc;
        }
    }
    ctx->pc = 0x11AEA4u;
    // 0x11aea4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11AEA4u;
    {
        const bool branch_taken_0x11aea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11AEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEA4u;
            // 0x11aea8: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aea4) {
            ctx->pc = 0x11AEC0u;
            goto label_11aec0;
        }
    }
    ctx->pc = 0x11AEACu;
    // 0x11aeac: 0xc046b56  jal         func_11AD58
    ctx->pc = 0x11AEACu;
    SET_GPR_U32(ctx, 31, 0x11AEB4u);
    ctx->pc = 0x11AEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEACu;
            // 0x11aeb0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD58u;
    if (runtime->hasFunction(0x11AD58u)) {
        auto targetFn = runtime->lookupFunction(0x11AD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AEB4u; }
        if (ctx->pc != 0x11AEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tim2_err_0x11ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AEB4u; }
        if (ctx->pc != 0x11AEB4u) { return; }
    }
    ctx->pc = 0x11AEB4u;
    // 0x11aeb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11AEB4u;
    {
        const bool branch_taken_0x11aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEB4u;
            // 0x11aeb8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aeb4) {
            ctx->pc = 0x11AEF8u;
            goto label_11aef8;
        }
    }
    ctx->pc = 0x11AEBCu;
label_11aebc:
    // 0x11aebc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x11aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_11aec0:
    // 0x11aec0: 0x5a20000b  blezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x11AEC0u;
    {
        const bool branch_taken_0x11aec0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x11aec0) {
            ctx->pc = 0x11AEC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEC0u;
            // 0x11aec4: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AEF0u;
            goto label_11aef0;
        }
    }
    ctx->pc = 0x11AEC8u;
    // 0x11aec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11aec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aecc: 0x0  nop
    ctx->pc = 0x11aeccu;
    // NOP
label_11aed0:
    // 0x11aed0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11aed4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11aed8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11aedc: 0x0  nop
    ctx->pc = 0x11aedcu;
    // NOP
    // 0x11aee0: 0x0  nop
    ctx->pc = 0x11aee0u;
    // NOP
    // 0x11aee4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11AEE4u;
    {
        const bool branch_taken_0x11aee4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x11aee4) {
            ctx->pc = 0x11AED0u;
            goto label_11aed0;
        }
    }
    ctx->pc = 0x11AEECu;
    // 0x11aeec: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x11aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_11aef0:
    // 0x11aef0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11aef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aef4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11aef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11aef8:
    // 0x11aef8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11aef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aefc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11aefcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11af00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11af00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11af04: 0x3e00008  jr          $ra
    ctx->pc = 0x11AF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF04u;
            // 0x11af08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AE9Cu: goto label_11ae9c;
            case 0x11AEBCu: goto label_11aebc;
            case 0x11AEC0u: goto label_11aec0;
            case 0x11AED0u: goto label_11aed0;
            case 0x11AEF0u: goto label_11aef0;
            case 0x11AEF8u: goto label_11aef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AF0Cu;
}
