#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lastFrame
// Address: 0x11fe38 - 0x11febc
void _lastFrame_0x11fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11fe38u;

    // 0x11fe38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11fe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11fe3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11fe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fe40: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x11fe40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x11fe44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11fe48: 0x8e02191c  lw          $v0, 0x191C($s0)
    ctx->pc = 0x11fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6428)));
    // 0x11fe4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FE4Cu;
    {
        const bool branch_taken_0x11fe4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE4Cu;
            // 0x11fe50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe4c) {
            ctx->pc = 0x11FE68u;
            goto label_11fe68;
        }
    }
    ctx->pc = 0x11FE54u;
    // 0x11fe54: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x11fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x11fe58: 0xc048006  jal         func_120018
    ctx->pc = 0x11FE58u;
    SET_GPR_U32(ctx, 31, 0x11FE60u);
    ctx->pc = 0x11FE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE58u;
            // 0x11fe5c: 0x24844cb8  addiu       $a0, $a0, 0x4CB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE60u; }
        if (ctx->pc != 0x11FE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE60u; }
        if (ctx->pc != 0x11FE60u) { return; }
    }
    ctx->pc = 0x11FE60u;
    // 0x11fe60: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11FE60u;
    {
        const bool branch_taken_0x11fe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE60u;
            // 0x11fe64: 0xae00191c  sw          $zero, 0x191C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe60) {
            ctx->pc = 0x11FEACu;
            goto label_11feac;
        }
    }
    ctx->pc = 0x11FE68u;
label_11fe68:
    // 0x11fe68: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x11fe6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x11fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11fe70: 0x8c4319ac  lw          $v1, 0x19AC($v0)
    ctx->pc = 0x11fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x11fe74: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11FE74u;
    {
        const bool branch_taken_0x11fe74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11FE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE74u;
            // 0x11fe78: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe74) {
            ctx->pc = 0x11FE94u;
            goto label_11fe94;
        }
    }
    ctx->pc = 0x11FE7Cu;
    // 0x11fe7c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x11fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x11fe80: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11fe84: 0xc04952c  jal         func_1254B0
    ctx->pc = 0x11FE84u;
    SET_GPR_U32(ctx, 31, 0x11FE8Cu);
    ctx->pc = 0x11FE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE84u;
            // 0x11fe88: 0x8c441804  lw          $a0, 0x1804($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1254B0u;
    if (runtime->hasFunction(0x1254B0u)) {
        auto targetFn = runtime->lookupFunction(0x1254B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE8Cu; }
        if (ctx->pc != 0x11FE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x1254b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE8Cu; }
        if (ctx->pc != 0x11FE8Cu) { return; }
    }
    ctx->pc = 0x11FE8Cu;
    // 0x11fe8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11FE8Cu;
    {
        const bool branch_taken_0x11fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FE8Cu;
            // 0x11fe90: 0xae00191c  sw          $zero, 0x191C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe8c) {
            ctx->pc = 0x11FEACu;
            goto label_11feac;
        }
    }
    ctx->pc = 0x11FE94u;
label_11fe94:
    // 0x11fe94: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x11fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x11fe98: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x11fe98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11fe9c: 0x8c441810  lw          $a0, 0x1810($v0)
    ctx->pc = 0x11fe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6160)));
    // 0x11fea0: 0xc049572  jal         func_1255C8
    ctx->pc = 0x11FEA0u;
    SET_GPR_U32(ctx, 31, 0x11FEA8u);
    ctx->pc = 0x11FEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11FEA0u;
            // 0x11fea4: 0x8c65181c  lw          $a1, 0x181C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1255C8u;
    if (runtime->hasFunction(0x1255C8u)) {
        auto targetFn = runtime->lookupFunction(0x1255C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FEA8u; }
        if (ctx->pc != 0x11FEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x1255c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FEA8u; }
        if (ctx->pc != 0x11FEA8u) { return; }
    }
    ctx->pc = 0x11FEA8u;
    // 0x11fea8: 0xae00191c  sw          $zero, 0x191C($s0)
    ctx->pc = 0x11fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6428), GPR_U32(ctx, 0));
label_11feac:
    // 0x11feac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11feacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11feb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11feb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11feb4: 0x3e00008  jr          $ra
    ctx->pc = 0x11FEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11FEB4u;
            // 0x11feb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FE68u: goto label_11fe68;
            case 0x11FE94u: goto label_11fe94;
            case 0x11FEACu: goto label_11feac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FEBCu;
}
