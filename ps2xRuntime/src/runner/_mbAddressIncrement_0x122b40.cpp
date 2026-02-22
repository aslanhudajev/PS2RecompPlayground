#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _mbAddressIncrement
// Address: 0x122b40 - 0x122c50
void _mbAddressIncrement_0x122b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122b40u;

    // 0x122b40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x122b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x122b44: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x122b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x122b48: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x122b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x122b4c: 0x241e0022  addiu       $fp, $zero, 0x22
    ctx->pc = 0x122b4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x122b50: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x122b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x122b54: 0x24170023  addiu       $s7, $zero, 0x23
    ctx->pc = 0x122b54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x122b58: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x122b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x122b5c: 0x3c160017  lui         $s6, 0x17
    ctx->pc = 0x122b5cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
    // 0x122b60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x122b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x122b64: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x122b64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122b68: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x122b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x122b6c: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x122b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x122b70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x122b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x122b74: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x122b74u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x122b78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x122b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x122b7c: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x122b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x122b80: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x122b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x122b84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x122b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122b8c: 0x0  nop
    ctx->pc = 0x122b8cu;
    // NOP
label_122b90:
    // 0x122b90: 0xc048eda  jal         func_123B68
    ctx->pc = 0x122B90u;
    SET_GPR_U32(ctx, 31, 0x122B98u);
    ctx->pc = 0x122B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122B90u;
            // 0x122b94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123B68u;
    if (runtime->hasFunction(0x123B68u)) {
        auto targetFn = runtime->lookupFunction(0x123B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122B98u; }
        if (ctx->pc != 0x122B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x123b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122B98u; }
        if (ctx->pc != 0x122B98u) { return; }
    }
    ctx->pc = 0x122B98u;
    // 0x122b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b9c: 0x121e0016  beq         $s0, $fp, . + 4 + (0x16 << 2)
    ctx->pc = 0x122B9Cu;
    {
        const bool branch_taken_0x122b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        ctx->pc = 0x122BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122B9Cu;
            // 0x122ba0: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b9c) {
            ctx->pc = 0x122BF8u;
            goto label_122bf8;
        }
    }
    ctx->pc = 0x122BA4u;
    // 0x122ba4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x122BA4u;
    {
        const bool branch_taken_0x122ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122ba4) {
            ctx->pc = 0x122BBCu;
            goto label_122bbc;
        }
    }
    ctx->pc = 0x122BACu;
    // 0x122bac: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x122BACu;
    {
        const bool branch_taken_0x122bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x122bac) {
            ctx->pc = 0x122BD0u;
            goto label_122bd0;
        }
    }
    ctx->pc = 0x122BB4u;
    // 0x122bb4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x122BB4u;
    {
        const bool branch_taken_0x122bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122BB4u;
            // 0x122bb8: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122bb4) {
            ctx->pc = 0x122C14u;
            goto label_122c14;
        }
    }
    ctx->pc = 0x122BBCu;
label_122bbc:
    // 0x122bbc: 0x56170015  bnel        $s0, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x122BBCu;
    {
        const bool branch_taken_0x122bbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        if (branch_taken_0x122bbc) {
            ctx->pc = 0x122BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x122BBCu;
            // 0x122bc0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x122C14u;
            goto label_122c14;
        }
    }
    ctx->pc = 0x122BC4u;
    // 0x122bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122bc8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x122BC8u;
    {
        const bool branch_taken_0x122bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122BC8u;
            // 0x122bcc: 0x26310021  addiu       $s1, $s1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122bc8) {
            ctx->pc = 0x122C18u;
            goto label_122c18;
        }
    }
    ctx->pc = 0x122BD0u;
label_122bd0:
    // 0x122bd0: 0xc048f48  jal         func_123D20
    ctx->pc = 0x122BD0u;
    SET_GPR_U32(ctx, 31, 0x122BD8u);
    ctx->pc = 0x122BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122BD0u;
            // 0x122bd4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D20u;
    if (runtime->hasFunction(0x123D20u)) {
        auto targetFn = runtime->lookupFunction(0x123D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122BD8u; }
        if (ctx->pc != 0x122BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x123d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122BD8u; }
        if (ctx->pc != 0x122BD8u) { return; }
    }
    ctx->pc = 0x122BD8u;
    // 0x122bd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x122bd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bdc: 0x8e8220b0  lw          $v0, 0x20B0($s4)
    ctx->pc = 0x122bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8368)));
    // 0x122be0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x122BE0u;
    {
        const bool branch_taken_0x122be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122BE0u;
            // 0x122be4: 0x26644ec0  addiu       $a0, $s3, 0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122be0) {
            ctx->pc = 0x122C00u;
            goto label_122c00;
        }
    }
    ctx->pc = 0x122BE8u;
    // 0x122be8: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x122BE8u;
    {
        const bool branch_taken_0x122be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x122be8) {
            ctx->pc = 0x122C00u;
            goto label_122c00;
        }
    }
    ctx->pc = 0x122BF0u;
    // 0x122bf0: 0xc048f96  jal         func_123E58
    ctx->pc = 0x122BF0u;
    SET_GPR_U32(ctx, 31, 0x122BF8u);
    ctx->pc = 0x122BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122BF0u;
            // 0x122bf4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E58u;
    if (runtime->hasFunction(0x123E58u)) {
        auto targetFn = runtime->lookupFunction(0x123E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122BF8u; }
        if (ctx->pc != 0x122BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122BF8u; }
        if (ctx->pc != 0x122BF8u) { return; }
    }
    ctx->pc = 0x122BF8u;
label_122bf8:
    // 0x122bf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x122BF8u;
    {
        const bool branch_taken_0x122bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122BF8u;
            // 0x122bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122bf8) {
            ctx->pc = 0x122C18u;
            goto label_122c18;
        }
    }
    ctx->pc = 0x122C00u;
label_122c00:
    // 0x122c00: 0xc047ffa  jal         func_11FFE8
    ctx->pc = 0x122C00u;
    SET_GPR_U32(ctx, 31, 0x122C08u);
    ctx->pc = 0x122C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122C00u;
            // 0x122c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FFE8u;
    if (runtime->hasFunction(0x11FFE8u)) {
        auto targetFn = runtime->lookupFunction(0x11FFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122C08u; }
        if (ctx->pc != 0x122C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x11ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122C08u; }
        if (ctx->pc != 0x122C08u) { return; }
    }
    ctx->pc = 0x122C08u;
    // 0x122c08: 0xaed51908  sw          $s5, 0x1908($s6)
    ctx->pc = 0x122c08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 6408), GPR_U32(ctx, 21));
    // 0x122c0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x122C0Cu;
    {
        const bool branch_taken_0x122c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122C0Cu;
            // 0x122c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c0c) {
            ctx->pc = 0x122C20u;
            goto label_122c20;
        }
    }
    ctx->pc = 0x122C14u;
label_122c14:
    // 0x122c14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x122c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122c18:
    // 0x122c18: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x122C18u;
    {
        const bool branch_taken_0x122c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122C18u;
            // 0x122c1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c18) {
            ctx->pc = 0x122B90u;
            goto label_122b90;
        }
    }
    ctx->pc = 0x122C20u;
label_122c20:
    // 0x122c20: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x122c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x122c24: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x122c24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x122c28: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x122c28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x122c2c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x122c2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122c30: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x122c30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122c34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x122c34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122c38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x122c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122c3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x122c3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122c40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x122c40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122c48: 0x3e00008  jr          $ra
    ctx->pc = 0x122C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122C48u;
            // 0x122c4c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122B90u: goto label_122b90;
            case 0x122BBCu: goto label_122bbc;
            case 0x122BD0u: goto label_122bd0;
            case 0x122BF8u: goto label_122bf8;
            case 0x122C00u: goto label_122c00;
            case 0x122C14u: goto label_122c14;
            case 0x122C18u: goto label_122c18;
            case 0x122C20u: goto label_122c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122C50u;
}
