#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _peepBit
// Address: 0x123d20 - 0x123e54
void _peepBit_0x123d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123d20u;

    // 0x123d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x123d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x123d24: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x123d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x123d28: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x123d28u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x123d2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x123d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123d30: 0x8e821824  lw          $v0, 0x1824($s4)
    ctx->pc = 0x123d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6180)));
    // 0x123d34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x123d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x123d3c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x123d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x123d40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x123d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x123d44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x123D44u;
    {
        const bool branch_taken_0x123d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D44u;
            // 0x123d48: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d44) {
            ctx->pc = 0x123D68u;
            goto label_123d68;
        }
    }
    ctx->pc = 0x123D4Cu;
    // 0x123d4c: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x123d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x123d50: 0x8e62209c  lw          $v0, 0x209C($s3)
    ctx->pc = 0x123d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8348)));
    // 0x123d54: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x123d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x123d58: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x123D58u;
    {
        const bool branch_taken_0x123d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D58u;
            // 0x123d5c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d58) {
            ctx->pc = 0x123E24u;
            goto label_123e24;
        }
    }
    ctx->pc = 0x123D60u;
    // 0x123d60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123D60u;
    {
        const bool branch_taken_0x123d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d60) {
            ctx->pc = 0x123D70u;
            goto label_123d70;
        }
    }
    ctx->pc = 0x123D68u;
label_123d68:
    // 0x123d68: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x123d68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x123d6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x123d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_123d70:
    // 0x123d70: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x123d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x123d74: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x123d74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x123d78: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x123d78u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x123d7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x123d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x123d80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x123d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x123d84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x123d84u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x123d88: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x123D88u;
    {
        const bool branch_taken_0x123d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x123D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D88u;
            // 0x123d8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d88) {
            ctx->pc = 0x123DE4u;
            goto label_123de4;
        }
    }
    ctx->pc = 0x123D90u;
    // 0x123d90: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x123d90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x123d94: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x123d94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
label_123d98:
    // 0x123d98: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x123d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d9c: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x123d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x123da0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123DA0u;
    {
        const bool branch_taken_0x123da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DA0u;
            // 0x123da4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123da0) {
            ctx->pc = 0x123DB8u;
            goto label_123db8;
        }
    }
    ctx->pc = 0x123DA8u;
    // 0x123da8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x123da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x123dac: 0xc047df4  jal         func_11F7D0
    ctx->pc = 0x123DACu;
    SET_GPR_U32(ctx, 31, 0x123DB4u);
    ctx->pc = 0x123DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123DACu;
            // 0x123db0: 0x8c4417bc  lw          $a0, 0x17BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F7D0u;
    if (runtime->hasFunction(0x11F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x11F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123DB4u; }
        if (ctx->pc != 0x123DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123DB4u; }
        if (ctx->pc != 0x123DB4u) { return; }
    }
    ctx->pc = 0x123DB4u;
    // 0x123db4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123db8:
    // 0x123db8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x123db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x123dbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x123dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x123dc0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x123dc0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x123dc4: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x123dc4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x123dc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x123dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x123dcc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x123dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x123dd0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x123dd0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x123dd4: 0x1045fff0  beq         $v0, $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x123DD4u;
    {
        const bool branch_taken_0x123dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x123DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DD4u;
            // 0x123dd8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dd4) {
            ctx->pc = 0x123D98u;
            goto label_123d98;
        }
    }
    ctx->pc = 0x123DDCu;
    // 0x123ddc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x123DDCu;
    {
        const bool branch_taken_0x123ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DDCu;
            // 0x123de0: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ddc) {
            ctx->pc = 0x123DF4u;
            goto label_123df4;
        }
    }
    ctx->pc = 0x123DE4u;
label_123de4:
    // 0x123de4: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x123de4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x123de8: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x123de8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x123dec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x123decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x123df0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x123df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_123df4:
    // 0x123df4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x123df4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x123df8: 0x26042108  addiu       $a0, $s0, 0x2108
    ctx->pc = 0x123df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8456));
    // 0x123dfc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x123dfcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x123e00: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x123e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x123e04: 0xc048eae  jal         func_123AB8
    ctx->pc = 0x123E04u;
    SET_GPR_U32(ctx, 31, 0x123E0Cu);
    ctx->pc = 0x123E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123E04u;
            // 0x123e08: 0xae831824  sw          $v1, 0x1824($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 6180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123AB8u;
    if (runtime->hasFunction(0x123AB8u)) {
        auto targetFn = runtime->lookupFunction(0x123AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E0Cu; }
        if (ctx->pc != 0x123E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle64_0x123ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123E0Cu; }
        if (ctx->pc != 0x123E0Cu) { return; }
    }
    ctx->pc = 0x123E0Cu;
    // 0x123e0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x123e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x123e10: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x123e10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x123e14: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x123e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x123e18: 0xae63209c  sw          $v1, 0x209C($s3)
    ctx->pc = 0x123e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8348), GPR_U32(ctx, 3));
    // 0x123e1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123E1Cu;
    {
        const bool branch_taken_0x123e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E1Cu;
            // 0x123e20: 0xae422098  sw          $v0, 0x2098($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e1c) {
            ctx->pc = 0x123E28u;
            goto label_123e28;
        }
    }
    ctx->pc = 0x123E24u;
label_123e24:
    // 0x123e24: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x123e24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
label_123e28:
    // 0x123e28: 0x8e432098  lw          $v1, 0x2098($s2)
    ctx->pc = 0x123e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8344)));
    // 0x123e2c: 0x111023  negu        $v0, $s1
    ctx->pc = 0x123e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x123e30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x123e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123e34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x123e34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123e38: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x123e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x123e3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x123e3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123e40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x123e40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123e44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x123e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x123E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E4Cu;
            // 0x123e50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123D68u: goto label_123d68;
            case 0x123D70u: goto label_123d70;
            case 0x123D98u: goto label_123d98;
            case 0x123DB8u: goto label_123db8;
            case 0x123DE4u: goto label_123de4;
            case 0x123DF4u: goto label_123df4;
            case 0x123E24u: goto label_123e24;
            case 0x123E28u: goto label_123e28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123E54u;
}
