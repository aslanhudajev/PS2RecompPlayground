#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg5_gate_l2
// Address: 0x144cd0 - 0x144e84
void MapMoveingFuncStg5_gate_l2_0x144cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg5_gate_l2_0x144cd0");
#endif

    ctx->pc = 0x144cd0u;

    // 0x144cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144cd4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x144cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x144cd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144cdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144ce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ce8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x144ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144cec: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x144cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x144cf0: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x144CF0u;
    SET_GPR_U32(ctx, 31, 0x144CF8u);
    ctx->pc = 0x144CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144CF0u;
            // 0x144cf4: 0xdc2595c0  ld          $a1, -0x6A40($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CF8u; }
        if (ctx->pc != 0x144CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CF8u; }
        if (ctx->pc != 0x144CF8u) { return; }
    }
    ctx->pc = 0x144CF8u;
    // 0x144cf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cfc: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x144CFCu;
    SET_GPR_U32(ctx, 31, 0x144D04u);
    ctx->pc = 0x144D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144CFCu;
            // 0x144d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D04u; }
        if (ctx->pc != 0x144D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D04u; }
        if (ctx->pc != 0x144D04u) { return; }
    }
    ctx->pc = 0x144D04u;
    // 0x144d04: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x144d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x144d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d0c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x144d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144d10: 0x28610227  slti        $at, $v1, 0x227
    ctx->pc = 0x144d10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
    // 0x144d14: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x144D14u;
    {
        const bool branch_taken_0x144d14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144D14u;
            // 0x144d18: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d14) {
            ctx->pc = 0x144D38u;
            goto label_144d38;
        }
    }
    ctx->pc = 0x144D1Cu;
    // 0x144d1c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x144d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144d20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144d28: 0x0  nop
    ctx->pc = 0x144d28u;
    // NOP
    // 0x144d2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x144d2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x144d30: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x144d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x144d34: 0x0  nop
    ctx->pc = 0x144d34u;
    // NOP
label_144d38:
    // 0x144d38: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144d3c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x144d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x144d40: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144d44: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d48: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144d4c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144d50: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144d54: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144d58: 0xc051484  jal         func_145210
    ctx->pc = 0x144D58u;
    SET_GPR_U32(ctx, 31, 0x144D60u);
    ctx->pc = 0x144D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144D58u;
            // 0x144d5c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D60u; }
        if (ctx->pc != 0x144D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D60u; }
        if (ctx->pc != 0x144D60u) { return; }
    }
    ctx->pc = 0x144D60u;
    // 0x144d60: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144d64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144d68: 0x2464ff9c  addiu       $a0, $v1, -0x64
    ctx->pc = 0x144d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x144d6c: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144D6Cu;
    SET_GPR_U32(ctx, 31, 0x144D74u);
    ctx->pc = 0x144D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144D6Cu;
            // 0x144d70: 0x24450100  addiu       $a1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D74u; }
        if (ctx->pc != 0x144D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D74u; }
        if (ctx->pc != 0x144D74u) { return; }
    }
    ctx->pc = 0x144D74u;
    // 0x144d74: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144d78: 0x3c024019  lui         $v0, 0x4019
    ctx->pc = 0x144d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
    // 0x144d7c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x144d7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x144d80: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144d84: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d88: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144d8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144d90: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144d94: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144d98: 0xc051484  jal         func_145210
    ctx->pc = 0x144D98u;
    SET_GPR_U32(ctx, 31, 0x144DA0u);
    ctx->pc = 0x144D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144D98u;
            // 0x144d9c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DA0u; }
        if (ctx->pc != 0x144DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DA0u; }
        if (ctx->pc != 0x144DA0u) { return; }
    }
    ctx->pc = 0x144DA0u;
    // 0x144da0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144da4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144da8: 0x2464ff9c  addiu       $a0, $v1, -0x64
    ctx->pc = 0x144da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x144dac: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144DACu;
    SET_GPR_U32(ctx, 31, 0x144DB4u);
    ctx->pc = 0x144DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DACu;
            // 0x144db0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DB4u; }
        if (ctx->pc != 0x144DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DB4u; }
        if (ctx->pc != 0x144DB4u) { return; }
    }
    ctx->pc = 0x144DB4u;
    // 0x144db4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144db8: 0x3c024033  lui         $v0, 0x4033
    ctx->pc = 0x144db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16435 << 16));
    // 0x144dbc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x144dbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x144dc0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144dc4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144dc8: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144dcc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144dd0: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144dd4: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144dd8: 0xc051484  jal         func_145210
    ctx->pc = 0x144DD8u;
    SET_GPR_U32(ctx, 31, 0x144DE0u);
    ctx->pc = 0x144DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DD8u;
            // 0x144ddc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DE0u; }
        if (ctx->pc != 0x144DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DE0u; }
        if (ctx->pc != 0x144DE0u) { return; }
    }
    ctx->pc = 0x144DE0u;
    // 0x144de0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144de4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144de8: 0x2464ff9c  addiu       $a0, $v1, -0x64
    ctx->pc = 0x144de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x144dec: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144DECu;
    SET_GPR_U32(ctx, 31, 0x144DF4u);
    ctx->pc = 0x144DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DECu;
            // 0x144df0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DF4u; }
        if (ctx->pc != 0x144DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DF4u; }
        if (ctx->pc != 0x144DF4u) { return; }
    }
    ctx->pc = 0x144DF4u;
    // 0x144df4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144df8: 0x3c02404c  lui         $v0, 0x404C
    ctx->pc = 0x144df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16460 << 16));
    // 0x144dfc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x144dfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x144e00: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144e04: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144e08: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144e0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144e10: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144e14: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144e18: 0xc051484  jal         func_145210
    ctx->pc = 0x144E18u;
    SET_GPR_U32(ctx, 31, 0x144E20u);
    ctx->pc = 0x144E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144E18u;
            // 0x144e1c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E20u; }
        if (ctx->pc != 0x144E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E20u; }
        if (ctx->pc != 0x144E20u) { return; }
    }
    ctx->pc = 0x144E20u;
    // 0x144e20: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144e24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144e28: 0x2464ff9c  addiu       $a0, $v1, -0x64
    ctx->pc = 0x144e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x144e2c: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144E2Cu;
    SET_GPR_U32(ctx, 31, 0x144E34u);
    ctx->pc = 0x144E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144E2Cu;
            // 0x144e30: 0x2445ffe0  addiu       $a1, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E34u; }
        if (ctx->pc != 0x144E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E34u; }
        if (ctx->pc != 0x144E34u) { return; }
    }
    ctx->pc = 0x144E34u;
    // 0x144e34: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x144e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144e38: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x144e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x144e3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x144e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144e40: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x144e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x144e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e48: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x144e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144e4c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x144e4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x144e50: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x144e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x144e54: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144e58: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x144e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144e5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x144e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144e60: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x144E60u;
    {
        const bool branch_taken_0x144e60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x144E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144E60u;
            // 0x144e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e60) {
            ctx->pc = 0x144E70u;
            goto label_144e70;
        }
    }
    ctx->pc = 0x144E68u;
    // 0x144e68: 0xc053348  jal         func_14CD20
    ctx->pc = 0x144E68u;
    SET_GPR_U32(ctx, 31, 0x144E70u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E70u; }
        if (ctx->pc != 0x144E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E70u; }
        if (ctx->pc != 0x144E70u) { return; }
    }
    ctx->pc = 0x144E70u;
label_144e70:
    // 0x144e70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x144e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144e74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144e78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x144E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144E7Cu;
            // 0x144e80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144D38u: goto label_144d38;
            case 0x144E70u: goto label_144e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144E84u;
}
