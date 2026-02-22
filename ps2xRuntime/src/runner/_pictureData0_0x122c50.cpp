#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureData0
// Address: 0x122c50 - 0x122d74
void _pictureData0_0x122c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122c50u;

    // 0x122c50: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x122c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x122c54: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x122c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x122c58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x122c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x122c5c: 0x8c471928  lw          $a3, 0x1928($v0)
    ctx->pc = 0x122c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6440)));
    // 0x122c60: 0x8c66192c  lw          $a2, 0x192C($v1)
    ctx->pc = 0x122c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6444)));
    // 0x122c64: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x122c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x122c68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x122c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x122c6c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x122c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x122c70: 0xe68818  mult        $s1, $a3, $a2
    ctx->pc = 0x122c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x122c74: 0x3c150017  lui         $s5, 0x17
    ctx->pc = 0x122c74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23 << 16));
    // 0x122c78: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x122c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x122c7c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x122c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x122c80: 0x26a21df8  addiu       $v0, $s5, 0x1DF8
    ctx->pc = 0x122c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 7672));
    // 0x122c84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x122c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x122c88: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x122c88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122c8c: 0x8ca319ac  lw          $v1, 0x19AC($a1)
    ctx->pc = 0x122c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6572)));
    // 0x122c90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x122c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x122c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x122c98: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x122c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x122c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122ca0: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x122ca0u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
    // 0x122ca4: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x122ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
    // 0x122ca8: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x122ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
    // 0x122cac: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x122cacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x122cb0: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x122cb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x122cb4: 0x0  nop
    ctx->pc = 0x122cb4u;
    // NOP
label_122cb8:
    // 0x122cb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x122cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_122cbc:
    // 0x122cbc: 0xc048ba8  jal         func_122EA0
    ctx->pc = 0x122CBCu;
    SET_GPR_U32(ctx, 31, 0x122CC4u);
    ctx->pc = 0x122CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122CBCu;
            // 0x122cc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EA0u;
    if (runtime->hasFunction(0x122EA0u)) {
        auto targetFn = runtime->lookupFunction(0x122EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122CC4u; }
        if (ctx->pc != 0x122CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _slice0_0x122ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122CC4u; }
        if (ctx->pc != 0x122CC4u) { return; }
    }
    ctx->pc = 0x122CC4u;
    // 0x122cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122cc8: 0x1214fffc  beq         $s0, $s4, . + 4 + (-0x4 << 2)
    ctx->pc = 0x122CC8u;
    {
        const bool branch_taken_0x122cc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x122CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122CC8u;
            // 0x122ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cc8) {
            ctx->pc = 0x122CBCu;
            goto label_122cbc;
        }
    }
    ctx->pc = 0x122CD0u;
    // 0x122cd0: 0x1213fff9  beq         $s0, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x122CD0u;
    {
        const bool branch_taken_0x122cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x122cd0) {
            ctx->pc = 0x122CB8u;
            goto label_122cb8;
        }
    }
    ctx->pc = 0x122CD8u;
    // 0x122cd8: 0xc048e84  jal         func_123A10
    ctx->pc = 0x122CD8u;
    SET_GPR_U32(ctx, 31, 0x122CE0u);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122CE0u; }
        if (ctx->pc != 0x122CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122CE0u; }
        if (ctx->pc != 0x122CE0u) { return; }
    }
    ctx->pc = 0x122CE0u;
    // 0x122ce0: 0xc0489ec  jal         func_1227B0
    ctx->pc = 0x122CE0u;
    SET_GPR_U32(ctx, 31, 0x122CE8u);
    ctx->pc = 0x1227B0u;
    if (runtime->hasFunction(0x1227B0u)) {
        auto targetFn = runtime->lookupFunction(0x1227B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122CE8u; }
        if (ctx->pc != 0x122CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x1227b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122CE8u; }
        if (ctx->pc != 0x122CE8u) { return; }
    }
    ctx->pc = 0x122CE8u;
    // 0x122ce8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122cec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x122cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x122cf0: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x122cf0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x122cf4: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x122cf4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)54272u)));
    // 0x122cf8: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x122cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x122cfc: 0x2e120001  sltiu       $s2, $s0, 0x1
    ctx->pc = 0x122cfcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_122d00:
    // 0x122d00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x122d00u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x122d04: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x122d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x122d08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x122d08u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x122d0c: 0x0  nop
    ctx->pc = 0x122d0cu;
    // NOP
    // 0x122d10: 0x0  nop
    ctx->pc = 0x122d10u;
    // NOP
    // 0x122d14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122D14u;
    {
        const bool branch_taken_0x122d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122d14) {
            ctx->pc = 0x122D00u;
            goto label_122d00;
        }
    }
    ctx->pc = 0x122D1Cu;
    // 0x122d1c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x122D1Cu;
    {
        const bool branch_taken_0x122d1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x122D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D1Cu;
            // 0x122d20: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d1c) {
            ctx->pc = 0x122D38u;
            goto label_122d38;
        }
    }
    ctx->pc = 0x122D24u;
    // 0x122d24: 0x26a21df8  addiu       $v0, $s5, 0x1DF8
    ctx->pc = 0x122d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 7672));
    // 0x122d28: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x122d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x122d2c: 0xc04860a  jal         func_121828
    ctx->pc = 0x122D2Cu;
    SET_GPR_U32(ctx, 31, 0x122D34u);
    ctx->pc = 0x122D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122D2Cu;
            // 0x122d30: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x121828u;
    if (runtime->hasFunction(0x121828u)) {
        auto targetFn = runtime->lookupFunction(0x121828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D34u; }
        if (ctx->pc != 0x122D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x121828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D34u; }
        if (ctx->pc != 0x122D34u) { return; }
    }
    ctx->pc = 0x122D34u;
    // 0x122d34: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x122d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_122d38:
    // 0x122d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x122D38u;
    {
        const bool branch_taken_0x122d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D38u;
            // 0x122d3c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d38) {
            ctx->pc = 0x122D50u;
            goto label_122d50;
        }
    }
    ctx->pc = 0x122D40u;
    // 0x122d40: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x122d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x122d44: 0xc048006  jal         func_120018
    ctx->pc = 0x122D44u;
    SET_GPR_U32(ctx, 31, 0x122D4Cu);
    ctx->pc = 0x122D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122D44u;
            // 0x122d48: 0x24844ef8  addiu       $a0, $a0, 0x4EF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D4Cu; }
        if (ctx->pc != 0x122D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122D4Cu; }
        if (ctx->pc != 0x122D4Cu) { return; }
    }
    ctx->pc = 0x122D4Cu;
    // 0x122d4c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x122d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_122d50:
    // 0x122d50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x122d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122d54: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x122d54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122d58: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x122d58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122d5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x122d5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122d60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x122d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122d64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x122d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x122D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122D6Cu;
            // 0x122d70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122CB8u: goto label_122cb8;
            case 0x122CBCu: goto label_122cbc;
            case 0x122D00u: goto label_122d00;
            case 0x122D38u: goto label_122d38;
            case 0x122D50u: goto label_122d50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122D74u;
}
