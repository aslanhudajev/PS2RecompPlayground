#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg5_gate_r
// Address: 0x144e90 - 0x145044
void MapMoveingFuncStg5_gate_r_0x144e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg5_gate_r_0x144e90");
#endif

    ctx->pc = 0x144e90u;

    // 0x144e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144e94: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x144e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x144e98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144e9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144ea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144ea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ea8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x144ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144eac: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x144eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x144eb0: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x144EB0u;
    SET_GPR_U32(ctx, 31, 0x144EB8u);
    ctx->pc = 0x144EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144EB0u;
            // 0x144eb4: 0xdc2595b8  ld          $a1, -0x6A48($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EB8u; }
        if (ctx->pc != 0x144EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EB8u; }
        if (ctx->pc != 0x144EB8u) { return; }
    }
    ctx->pc = 0x144EB8u;
    // 0x144eb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ebc: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x144EBCu;
    SET_GPR_U32(ctx, 31, 0x144EC4u);
    ctx->pc = 0x144EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144EBCu;
            // 0x144ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EC4u; }
        if (ctx->pc != 0x144EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EC4u; }
        if (ctx->pc != 0x144EC4u) { return; }
    }
    ctx->pc = 0x144EC4u;
    // 0x144ec4: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x144ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x144ec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ecc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x144eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144ed0: 0x286101c3  slti        $at, $v1, 0x1C3
    ctx->pc = 0x144ed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)451) ? 1 : 0);
    // 0x144ed4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x144ED4u;
    {
        const bool branch_taken_0x144ed4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144ED4u;
            // 0x144ed8: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ed4) {
            ctx->pc = 0x144EF8u;
            goto label_144ef8;
        }
    }
    ctx->pc = 0x144EDCu;
    // 0x144edc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x144edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144ee0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144ee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144ee8: 0x0  nop
    ctx->pc = 0x144ee8u;
    // NOP
    // 0x144eec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x144eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x144ef0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x144ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x144ef4: 0x0  nop
    ctx->pc = 0x144ef4u;
    // NOP
label_144ef8:
    // 0x144ef8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144efc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x144efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x144f00: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144f04: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f08: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144f0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144f10: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144f14: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144f18: 0xc051484  jal         func_145210
    ctx->pc = 0x144F18u;
    SET_GPR_U32(ctx, 31, 0x144F20u);
    ctx->pc = 0x144F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144F18u;
            // 0x144f1c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F20u; }
        if (ctx->pc != 0x144F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F20u; }
        if (ctx->pc != 0x144F20u) { return; }
    }
    ctx->pc = 0x144F20u;
    // 0x144f20: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144f24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144f28: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x144f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x144f2c: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144F2Cu;
    SET_GPR_U32(ctx, 31, 0x144F34u);
    ctx->pc = 0x144F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144F2Cu;
            // 0x144f30: 0x24450100  addiu       $a1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F34u; }
        if (ctx->pc != 0x144F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F34u; }
        if (ctx->pc != 0x144F34u) { return; }
    }
    ctx->pc = 0x144F34u;
    // 0x144f34: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144f38: 0x3c024019  lui         $v0, 0x4019
    ctx->pc = 0x144f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
    // 0x144f3c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x144f3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x144f40: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144f44: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f48: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144f4c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144f50: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144f54: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144f58: 0xc051484  jal         func_145210
    ctx->pc = 0x144F58u;
    SET_GPR_U32(ctx, 31, 0x144F60u);
    ctx->pc = 0x144F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144F58u;
            // 0x144f5c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F60u; }
        if (ctx->pc != 0x144F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F60u; }
        if (ctx->pc != 0x144F60u) { return; }
    }
    ctx->pc = 0x144F60u;
    // 0x144f60: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144f64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144f68: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x144f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x144f6c: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144F6Cu;
    SET_GPR_U32(ctx, 31, 0x144F74u);
    ctx->pc = 0x144F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144F6Cu;
            // 0x144f70: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F74u; }
        if (ctx->pc != 0x144F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F74u; }
        if (ctx->pc != 0x144F74u) { return; }
    }
    ctx->pc = 0x144F74u;
    // 0x144f74: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144f78: 0x3c024033  lui         $v0, 0x4033
    ctx->pc = 0x144f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16435 << 16));
    // 0x144f7c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x144f7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x144f80: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144f84: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f88: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144f8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144f90: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144f94: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144f98: 0xc051484  jal         func_145210
    ctx->pc = 0x144F98u;
    SET_GPR_U32(ctx, 31, 0x144FA0u);
    ctx->pc = 0x144F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144F98u;
            // 0x144f9c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FA0u; }
        if (ctx->pc != 0x144FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FA0u; }
        if (ctx->pc != 0x144FA0u) { return; }
    }
    ctx->pc = 0x144FA0u;
    // 0x144fa0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144fa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144fa8: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x144fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x144fac: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144FACu;
    SET_GPR_U32(ctx, 31, 0x144FB4u);
    ctx->pc = 0x144FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144FACu;
            // 0x144fb0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FB4u; }
        if (ctx->pc != 0x144FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FB4u; }
        if (ctx->pc != 0x144FB4u) { return; }
    }
    ctx->pc = 0x144FB4u;
    // 0x144fb4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144fb8: 0x3c02404c  lui         $v0, 0x404C
    ctx->pc = 0x144fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16460 << 16));
    // 0x144fbc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x144fbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x144fc0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144fc4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144fc8: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144fcc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144fd0: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144fd4: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144fd8: 0xc051484  jal         func_145210
    ctx->pc = 0x144FD8u;
    SET_GPR_U32(ctx, 31, 0x144FE0u);
    ctx->pc = 0x144FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144FD8u;
            // 0x144fdc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FE0u; }
        if (ctx->pc != 0x144FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FE0u; }
        if (ctx->pc != 0x144FE0u) { return; }
    }
    ctx->pc = 0x144FE0u;
    // 0x144fe0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144fe4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144fe8: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x144fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x144fec: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144FECu;
    SET_GPR_U32(ctx, 31, 0x144FF4u);
    ctx->pc = 0x144FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144FECu;
            // 0x144ff0: 0x2445ffe0  addiu       $a1, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FF4u; }
        if (ctx->pc != 0x144FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FF4u; }
        if (ctx->pc != 0x144FF4u) { return; }
    }
    ctx->pc = 0x144FF4u;
    // 0x144ff4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x144ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144ff8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x144ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x144ffc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x144ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145000: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x145000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x145004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145008: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x145008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14500c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x14500cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x145010: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x145010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x145014: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x145014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x145018: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x145018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14501c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14501cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145020: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x145020u;
    {
        const bool branch_taken_0x145020 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x145024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145020u;
            // 0x145024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145020) {
            ctx->pc = 0x145030u;
            goto label_145030;
        }
    }
    ctx->pc = 0x145028u;
    // 0x145028: 0xc053348  jal         func_14CD20
    ctx->pc = 0x145028u;
    SET_GPR_U32(ctx, 31, 0x145030u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145030u; }
        if (ctx->pc != 0x145030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145030u; }
        if (ctx->pc != 0x145030u) { return; }
    }
    ctx->pc = 0x145030u;
label_145030:
    // 0x145030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14503c: 0x3e00008  jr          $ra
    ctx->pc = 0x14503Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14503Cu;
            // 0x145040: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144EF8u: goto label_144ef8;
            case 0x145030u: goto label_145030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145044u;
}
