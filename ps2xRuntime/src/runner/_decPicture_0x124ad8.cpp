#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decPicture
// Address: 0x124ad8 - 0x124bb8
void _decPicture_0x124ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124ad8u;

    // 0x124ad8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124adc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x124adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124ae0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x124ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x124ae4: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x124ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x124ae8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x124ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124aec: 0x8e2319ac  lw          $v1, 0x19AC($s1)
    ctx->pc = 0x124aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6572)));
    // 0x124af0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124af4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x124af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x124af8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x124AF8u;
    {
        const bool branch_taken_0x124af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x124AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124AF8u;
            // 0x124afc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124af8) {
            ctx->pc = 0x124B20u;
            goto label_124b20;
        }
    }
    ctx->pc = 0x124B00u;
    // 0x124b00: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x124b00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x124b04: 0x8e02191c  lw          $v0, 0x191C($s0)
    ctx->pc = 0x124b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6428)));
    // 0x124b08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124B08u;
    {
        const bool branch_taken_0x124b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B08u;
            // 0x124b0c: 0x8e2319ac  lw          $v1, 0x19AC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b08) {
            ctx->pc = 0x124B24u;
            goto label_124b24;
        }
    }
    ctx->pc = 0x124B10u;
    // 0x124b10: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x124b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x124b14: 0xc048006  jal         func_120018
    ctx->pc = 0x124B14u;
    SET_GPR_U32(ctx, 31, 0x124B1Cu);
    ctx->pc = 0x124B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124B14u;
            // 0x124b18: 0x24845028  addiu       $a0, $a0, 0x5028 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B1Cu; }
        if (ctx->pc != 0x124B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B1Cu; }
        if (ctx->pc != 0x124B1Cu) { return; }
    }
    ctx->pc = 0x124B1Cu;
    // 0x124b1c: 0xae00191c  sw          $zero, 0x191C($s0)
    ctx->pc = 0x124b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6428), GPR_U32(ctx, 0));
label_124b20:
    // 0x124b20: 0x8e2319ac  lw          $v1, 0x19AC($s1)
    ctx->pc = 0x124b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6572)));
label_124b24:
    // 0x124b24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x124b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124b28: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x124B28u;
    {
        const bool branch_taken_0x124b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x124B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B28u;
            // 0x124b2c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b28) {
            ctx->pc = 0x124B68u;
            goto label_124b68;
        }
    }
    ctx->pc = 0x124B30u;
    // 0x124b30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124B30u;
    {
        const bool branch_taken_0x124b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B30u;
            // 0x124b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b30) {
            ctx->pc = 0x124B48u;
            goto label_124b48;
        }
    }
    ctx->pc = 0x124B38u;
    // 0x124b38: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x124B38u;
    {
        const bool branch_taken_0x124b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x124B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B38u;
            // 0x124b3c: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b38) {
            ctx->pc = 0x124B5Cu;
            goto label_124b5c;
        }
    }
    ctx->pc = 0x124B40u;
    // 0x124b40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x124B40u;
    {
        const bool branch_taken_0x124b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B40u;
            // 0x124b44: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b40) {
            ctx->pc = 0x124B78u;
            goto label_124b78;
        }
    }
    ctx->pc = 0x124B48u;
label_124b48:
    // 0x124b48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x124b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124b4c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x124B4Cu;
    {
        const bool branch_taken_0x124b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x124B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B4Cu;
            // 0x124b50: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b4c) {
            ctx->pc = 0x124B74u;
            goto label_124b74;
        }
    }
    ctx->pc = 0x124B54u;
    // 0x124b54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x124B54u;
    {
        const bool branch_taken_0x124b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B54u;
            // 0x124b58: 0x8c501a44  lw          $s0, 0x1A44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b54) {
            ctx->pc = 0x124B84u;
            goto label_124b84;
        }
    }
    ctx->pc = 0x124B5Cu;
label_124b5c:
    // 0x124b5c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124b60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x124B60u;
    {
        const bool branch_taken_0x124b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B60u;
            // 0x124b64: 0x8c501a48  lw          $s0, 0x1A48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b60) {
            ctx->pc = 0x124B84u;
            goto label_124b84;
        }
    }
    ctx->pc = 0x124B68u;
label_124b68:
    // 0x124b68: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124b6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x124B6Cu;
    {
        const bool branch_taken_0x124b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B6Cu;
            // 0x124b70: 0x8c501a4c  lw          $s0, 0x1A4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b6c) {
            ctx->pc = 0x124B84u;
            goto label_124b84;
        }
    }
    ctx->pc = 0x124B74u;
label_124b74:
    // 0x124b74: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x124b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_124b78:
    // 0x124b78: 0x8c501a44  lw          $s0, 0x1A44($v0)
    ctx->pc = 0x124b78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x124b7c: 0xc048006  jal         func_120018
    ctx->pc = 0x124B7Cu;
    SET_GPR_U32(ctx, 31, 0x124B84u);
    ctx->pc = 0x124B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124B7Cu;
            // 0x124b80: 0x24845048  addiu       $a0, $a0, 0x5048 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B84u; }
        if (ctx->pc != 0x124B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B84u; }
        if (ctx->pc != 0x124B84u) { return; }
    }
    ctx->pc = 0x124B84u;
label_124b84:
    // 0x124b84: 0xc048b14  jal         func_122C50
    ctx->pc = 0x124B84u;
    SET_GPR_U32(ctx, 31, 0x124B8Cu);
    ctx->pc = 0x124B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124B84u;
            // 0x124b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122C50u;
    if (runtime->hasFunction(0x122C50u)) {
        auto targetFn = runtime->lookupFunction(0x122C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B8Cu; }
        if (ctx->pc != 0x124B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pictureData0_0x122c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B8Cu; }
        if (ctx->pc != 0x124B8Cu) { return; }
    }
    ctx->pc = 0x124B8Cu;
    // 0x124b8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b90: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x124B90u;
    {
        const bool branch_taken_0x124b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B90u;
            // 0x124b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b90) {
            ctx->pc = 0x124B9Cu;
            goto label_124b9c;
        }
    }
    ctx->pc = 0x124B98u;
    // 0x124b98: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x124b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_124b9c:
    // 0x124b9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x124b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124ba0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x124ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ba4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x124ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124ba8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x124ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124bac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x124BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124BB0u;
            // 0x124bb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124B20u: goto label_124b20;
            case 0x124B24u: goto label_124b24;
            case 0x124B48u: goto label_124b48;
            case 0x124B5Cu: goto label_124b5c;
            case 0x124B68u: goto label_124b68;
            case 0x124B74u: goto label_124b74;
            case 0x124B78u: goto label_124b78;
            case 0x124B84u: goto label_124b84;
            case 0x124B9Cu: goto label_124b9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124BB8u;
}
