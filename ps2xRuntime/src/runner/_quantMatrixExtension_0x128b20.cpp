#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _quantMatrixExtension
// Address: 0x128b20 - 0x128be4
void _quantMatrixExtension_0x128b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_quantMatrixExtension_0x128b20");
#endif

    ctx->pc = 0x128b20u;

    // 0x128b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128b24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128b28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128b2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128b30: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128B30u;
    SET_GPR_U32(ctx, 31, 0x128B38u);
    ctx->pc = 0x128B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B30u;
            // 0x128b34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B38u; }
        if (ctx->pc != 0x128B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B38u; }
        if (ctx->pc != 0x128B38u) { return; }
    }
    ctx->pc = 0x128B38u;
    // 0x128b38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128B38u;
    {
        const bool branch_taken_0x128b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B38u;
            // 0x128b3c: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b38) {
            ctx->pc = 0x128B5Cu;
            goto label_128b5c;
        }
    }
    ctx->pc = 0x128B40u;
    // 0x128b40: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x128B40u;
    SET_GPR_U32(ctx, 31, 0x128B48u);
    ctx->pc = 0x128B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B40u;
            // 0x128b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B48u; }
        if (ctx->pc != 0x128B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B48u; }
        if (ctx->pc != 0x128B48u) { return; }
    }
    ctx->pc = 0x128B48u;
    // 0x128b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b4c: 0xc049f68  jal         func_127DA0
    ctx->pc = 0x128B4Cu;
    SET_GPR_U32(ctx, 31, 0x128B54u);
    ctx->pc = 0x128B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B4Cu;
            // 0x128b50: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DA0u;
    if (runtime->hasFunction(0x127DA0u)) {
        auto targetFn = runtime->lookupFunction(0x127DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B54u; }
        if (ctx->pc != 0x128B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x127da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B54u; }
        if (ctx->pc != 0x128B54u) { return; }
    }
    ctx->pc = 0x128B54u;
    // 0x128b54: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x128B54u;
    SET_GPR_U32(ctx, 31, 0x128B5Cu);
    ctx->pc = 0x128B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B54u;
            // 0x128b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B5Cu; }
        if (ctx->pc != 0x128B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B5Cu; }
        if (ctx->pc != 0x128B5Cu) { return; }
    }
    ctx->pc = 0x128B5Cu;
label_128b5c:
    // 0x128b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b60: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128B60u;
    SET_GPR_U32(ctx, 31, 0x128B68u);
    ctx->pc = 0x128B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B60u;
            // 0x128b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B68u; }
        if (ctx->pc != 0x128B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B68u; }
        if (ctx->pc != 0x128B68u) { return; }
    }
    ctx->pc = 0x128B68u;
    // 0x128b68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128B68u;
    {
        const bool branch_taken_0x128b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B68u;
            // 0x128b6c: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b68) {
            ctx->pc = 0x128B8Cu;
            goto label_128b8c;
        }
    }
    ctx->pc = 0x128B70u;
    // 0x128b70: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x128B70u;
    SET_GPR_U32(ctx, 31, 0x128B78u);
    ctx->pc = 0x128B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B70u;
            // 0x128b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B78u; }
        if (ctx->pc != 0x128B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B78u; }
        if (ctx->pc != 0x128B78u) { return; }
    }
    ctx->pc = 0x128B78u;
    // 0x128b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b7c: 0xc049f68  jal         func_127DA0
    ctx->pc = 0x128B7Cu;
    SET_GPR_U32(ctx, 31, 0x128B84u);
    ctx->pc = 0x128B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B7Cu;
            // 0x128b80: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DA0u;
    if (runtime->hasFunction(0x127DA0u)) {
        auto targetFn = runtime->lookupFunction(0x127DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B84u; }
        if (ctx->pc != 0x128B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x127da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B84u; }
        if (ctx->pc != 0x128B84u) { return; }
    }
    ctx->pc = 0x128B84u;
    // 0x128b84: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x128B84u;
    SET_GPR_U32(ctx, 31, 0x128B8Cu);
    ctx->pc = 0x128B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B84u;
            // 0x128b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B8Cu; }
        if (ctx->pc != 0x128B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B8Cu; }
        if (ctx->pc != 0x128B8Cu) { return; }
    }
    ctx->pc = 0x128B8Cu;
label_128b8c:
    // 0x128b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b90: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128B90u;
    SET_GPR_U32(ctx, 31, 0x128B98u);
    ctx->pc = 0x128B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128B90u;
            // 0x128b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B98u; }
        if (ctx->pc != 0x128B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128B98u; }
        if (ctx->pc != 0x128B98u) { return; }
    }
    ctx->pc = 0x128B98u;
    // 0x128b98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128B98u;
    {
        const bool branch_taken_0x128b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128B98u;
            // 0x128b9c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b98) {
            ctx->pc = 0x128BACu;
            goto label_128bac;
        }
    }
    ctx->pc = 0x128BA0u;
    // 0x128ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ba4: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x128BA4u;
    SET_GPR_U32(ctx, 31, 0x128BACu);
    ctx->pc = 0x128BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128BA4u;
            // 0x128ba8: 0x24a5f308  addiu       $a1, $a1, -0xCF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128BACu; }
        if (ctx->pc != 0x128BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128BACu; }
        if (ctx->pc != 0x128BACu) { return; }
    }
    ctx->pc = 0x128BACu;
label_128bac:
    // 0x128bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bb0: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128BB0u;
    SET_GPR_U32(ctx, 31, 0x128BB8u);
    ctx->pc = 0x128BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128BB0u;
            // 0x128bb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128BB8u; }
        if (ctx->pc != 0x128BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128BB8u; }
        if (ctx->pc != 0x128BB8u) { return; }
    }
    ctx->pc = 0x128BB8u;
    // 0x128bb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x128BB8u;
    {
        const bool branch_taken_0x128bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128BB8u;
            // 0x128bbc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bb8) {
            ctx->pc = 0x128BD8u;
            goto label_128bd8;
        }
    }
    ctx->pc = 0x128BC0u;
    // 0x128bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bc4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x128bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x128bc8: 0x24a5f330  addiu       $a1, $a1, -0xCD0
    ctx->pc = 0x128bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964016));
    // 0x128bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128bd0: 0x804b01e  j           func_12C078
    ctx->pc = 0x128BD0u;
    ctx->pc = 0x128BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128BD0u;
            // 0x128bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Error_0x12c078(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x128BD8u;
label_128bd8:
    // 0x128bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x128BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128BDCu;
            // 0x128be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128B5Cu: goto label_128b5c;
            case 0x128B8Cu: goto label_128b8c;
            case 0x128BACu: goto label_128bac;
            case 0x128BD8u: goto label_128bd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128BE4u;
}
