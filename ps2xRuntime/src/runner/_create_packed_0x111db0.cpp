#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _create_packed
// Address: 0x111db0 - 0x111f10
void _create_packed_0x111db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_create_packed_0x111db0");
#endif

    ctx->pc = 0x111db0u;

    // 0x111db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111db4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x111db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111dc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x111dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111dc4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111DC4u;
    {
        const bool branch_taken_0x111dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111DC4u;
            // 0x111dc8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111dc4) {
            ctx->pc = 0x111DDCu;
            goto label_111ddc;
        }
    }
    ctx->pc = 0x111DCCu;
    // 0x111dcc: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x111dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x111dd0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111dd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111DD4u;
    {
        const bool branch_taken_0x111dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111DD4u;
            // 0x111dd8: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111dd4) {
            ctx->pc = 0x111DECu;
            goto label_111dec;
        }
    }
    ctx->pc = 0x111DDCu;
label_111ddc:
    // 0x111ddc: 0xc04465a  jal         func_111968
    ctx->pc = 0x111DDCu;
    SET_GPR_U32(ctx, 31, 0x111DE4u);
    ctx->pc = 0x111DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111DDCu;
            // 0x111de0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111968u;
    if (runtime->hasFunction(0x111968u)) {
        auto targetFn = runtime->lookupFunction(0x111968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111DE4u; }
        if (ctx->pc != 0x111DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hig_drw_err_0x111968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111DE4u; }
        if (ctx->pc != 0x111DE4u) { return; }
    }
    ctx->pc = 0x111DE4u;
    // 0x111de4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x111DE4u;
    {
        const bool branch_taken_0x111de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111DE4u;
            // 0x111de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111de4) {
            ctx->pc = 0x111EFCu;
            goto label_111efc;
        }
    }
    ctx->pc = 0x111DECu;
label_111dec:
    // 0x111dec: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x111decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x111df0: 0xc0435bc  jal         func_10D6F0
    ctx->pc = 0x111DF0u;
    SET_GPR_U32(ctx, 31, 0x111DF8u);
    ctx->pc = 0x111DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111DF0u;
            // 0x111df4: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D6F0u;
    if (runtime->hasFunction(0x10D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x10D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111DF8u; }
        if (ctx->pc != 0x111DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemAlign_0x10d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111DF8u; }
        if (ctx->pc != 0x111DF8u) { return; }
    }
    ctx->pc = 0x111DF8u;
    // 0x111df8: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x111df8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111dfc: 0x15800007  bnez        $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x111DFCu;
    {
        const bool branch_taken_0x111dfc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x111E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111DFCu;
            // 0x111e00: 0xae2c0000  sw          $t4, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111dfc) {
            ctx->pc = 0x111E1Cu;
            goto label_111e1c;
        }
    }
    ctx->pc = 0x111E04u;
    // 0x111e04: 0xc044554  jal         func_111550
    ctx->pc = 0x111E04u;
    SET_GPR_U32(ctx, 31, 0x111E0Cu);
    ctx->pc = 0x111E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111E04u;
            // 0x111e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111550u;
    if (runtime->hasFunction(0x111550u)) {
        auto targetFn = runtime->lookupFunction(0x111550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111E0Cu; }
        if (ctx->pc != 0x111E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsPackedDelete_0x111550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111E0Cu; }
        if (ctx->pc != 0x111E0Cu) { return; }
    }
    ctx->pc = 0x111E0Cu;
    // 0x111e0c: 0xc04465a  jal         func_111968
    ctx->pc = 0x111E0Cu;
    SET_GPR_U32(ctx, 31, 0x111E14u);
    ctx->pc = 0x111E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111E0Cu;
            // 0x111e10: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111968u;
    if (runtime->hasFunction(0x111968u)) {
        auto targetFn = runtime->lookupFunction(0x111968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111E14u; }
        if (ctx->pc != 0x111E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hig_drw_err_0x111968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111E14u; }
        if (ctx->pc != 0x111E14u) { return; }
    }
    ctx->pc = 0x111E14u;
    // 0x111e14: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x111E14u;
    {
        const bool branch_taken_0x111e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111E14u;
            // 0x111e18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e14) {
            ctx->pc = 0x111F00u;
            goto label_111f00;
        }
    }
    ctx->pc = 0x111E1Cu;
label_111e1c:
    // 0x111e1c: 0x25820010  addiu       $v0, $t4, 0x10
    ctx->pc = 0x111e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x111e20: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x111e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x111e24: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x111e24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x111e28: 0x32047fff  andi        $a0, $s0, 0x7FFF
    ctx->pc = 0x111e28u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)32767u)));
    // 0x111e2c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x111e2cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x111e30: 0x2406c000  addiu       $a2, $zero, -0x4000
    ctx->pc = 0x111e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x111e34: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x111e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x111e38: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x111e38u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x111e3c: 0xdd820000  ld          $v0, 0x0($t4)
    ctx->pc = 0x111e3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x111e40: 0x3c07f3ff  lui         $a3, 0xF3FF
    ctx->pc = 0x111e40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62463 << 16));
    // 0x111e44: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x111e44u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x111e48: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x111e48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x111e4c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x111e4cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x111e50: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x111e50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x111e54: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x111e54u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x111e58: 0x3c08fc00  lui         $t0, 0xFC00
    ctx->pc = 0x111e58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64512 << 16));
    // 0x111e5c: 0x35087fff  ori         $t0, $t0, 0x7FFF
    ctx->pc = 0x111e5cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)32767u)));
    // 0x111e60: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x111e60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x111e64: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x111e64u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)65535u)));
    // 0x111e68: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x111e68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x111e6c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x111e6cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)65535u)));
    // 0x111e70: 0x2409bfff  addiu       $t1, $zero, -0x4001
    ctx->pc = 0x111e70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x111e74: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x111e74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x111e78: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x111e78u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)65535u)));
    // 0x111e7c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x111e7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x111e80: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x111e80u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)65535u)));
    // 0x111e84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x111e84u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x111e88: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x111e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111e8c: 0xb593a  dsrl        $t3, $t3, 4
    ctx->pc = 0x111e8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 4);
    // 0x111e90: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x111e90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x111e94: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x111e94u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x111e98: 0xa537c  dsll32      $t2, $t2, 13
    ctx->pc = 0x111e98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 13));
    // 0x111e9c: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x111e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x111ea0: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x111ea0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x111ea4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ea8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x111ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111eac: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x111eacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x111eb0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x111eb0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x111eb4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x111eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x111eb8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x111eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111ebc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x111ebcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111ec0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x111ec0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x111ec4: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x111ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x111ec8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x111ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111ecc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x111eccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x111ed0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x111ed0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x111ed4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x111ed4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x111ed8: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x111ed8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x111edc: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x111edcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x111ee0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x111ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111ee4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x111ee4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111ee8: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x111ee8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 11)));
    // 0x111eec: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x111eecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x111ef0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x111ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x111ef4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x111ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111ef8: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x111ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
label_111efc:
    // 0x111efc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x111efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_111f00:
    // 0x111f00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111f08: 0x3e00008  jr          $ra
    ctx->pc = 0x111F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111F08u;
            // 0x111f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111DDCu: goto label_111ddc;
            case 0x111DECu: goto label_111dec;
            case 0x111E1Cu: goto label_111e1c;
            case 0x111EFCu: goto label_111efc;
            case 0x111F00u: goto label_111f00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111F10u;
}
