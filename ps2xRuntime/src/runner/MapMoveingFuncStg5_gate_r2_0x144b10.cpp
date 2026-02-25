#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg5_gate_r2
// Address: 0x144b10 - 0x144cc4
void MapMoveingFuncStg5_gate_r2_0x144b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg5_gate_r2_0x144b10");
#endif

    ctx->pc = 0x144b10u;

    // 0x144b10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x144b14: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x144b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x144b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144b20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144b24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x144b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144b2c: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x144b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x144b30: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x144B30u;
    SET_GPR_U32(ctx, 31, 0x144B38u);
    ctx->pc = 0x144B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144B30u;
            // 0x144b34: 0xdc2595c8  ld          $a1, -0x6A38($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B38u; }
        if (ctx->pc != 0x144B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B38u; }
        if (ctx->pc != 0x144B38u) { return; }
    }
    ctx->pc = 0x144B38u;
    // 0x144b38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b3c: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x144B3Cu;
    SET_GPR_U32(ctx, 31, 0x144B44u);
    ctx->pc = 0x144B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144B3Cu;
            // 0x144b40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B44u; }
        if (ctx->pc != 0x144B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B44u; }
        if (ctx->pc != 0x144B44u) { return; }
    }
    ctx->pc = 0x144B44u;
    // 0x144b44: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x144b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x144b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b4c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x144b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144b50: 0x28610227  slti        $at, $v1, 0x227
    ctx->pc = 0x144b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
    // 0x144b54: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x144B54u;
    {
        const bool branch_taken_0x144b54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144B54u;
            // 0x144b58: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b54) {
            ctx->pc = 0x144B78u;
            goto label_144b78;
        }
    }
    ctx->pc = 0x144B5Cu;
    // 0x144b5c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x144b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144b60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144b68: 0x0  nop
    ctx->pc = 0x144b68u;
    // NOP
    // 0x144b6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x144b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x144b70: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x144b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x144b74: 0x0  nop
    ctx->pc = 0x144b74u;
    // NOP
label_144b78:
    // 0x144b78: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144b7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x144b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x144b80: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144b84: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144b88: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144b8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144b90: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144b94: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144b98: 0xc051484  jal         func_145210
    ctx->pc = 0x144B98u;
    SET_GPR_U32(ctx, 31, 0x144BA0u);
    ctx->pc = 0x144B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144B98u;
            // 0x144b9c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BA0u; }
        if (ctx->pc != 0x144BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BA0u; }
        if (ctx->pc != 0x144BA0u) { return; }
    }
    ctx->pc = 0x144BA0u;
    // 0x144ba0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144ba4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144ba8: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x144ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x144bac: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144BACu;
    SET_GPR_U32(ctx, 31, 0x144BB4u);
    ctx->pc = 0x144BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144BACu;
            // 0x144bb0: 0x24450100  addiu       $a1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BB4u; }
        if (ctx->pc != 0x144BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BB4u; }
        if (ctx->pc != 0x144BB4u) { return; }
    }
    ctx->pc = 0x144BB4u;
    // 0x144bb4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144bb8: 0x3c024019  lui         $v0, 0x4019
    ctx->pc = 0x144bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
    // 0x144bbc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x144bbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x144bc0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144bc4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144bc8: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144bcc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144bd0: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144bd4: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144bd8: 0xc051484  jal         func_145210
    ctx->pc = 0x144BD8u;
    SET_GPR_U32(ctx, 31, 0x144BE0u);
    ctx->pc = 0x144BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144BD8u;
            // 0x144bdc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BE0u; }
        if (ctx->pc != 0x144BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BE0u; }
        if (ctx->pc != 0x144BE0u) { return; }
    }
    ctx->pc = 0x144BE0u;
    // 0x144be0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144be4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144be8: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x144be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x144bec: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144BECu;
    SET_GPR_U32(ctx, 31, 0x144BF4u);
    ctx->pc = 0x144BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144BECu;
            // 0x144bf0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BF4u; }
        if (ctx->pc != 0x144BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144BF4u; }
        if (ctx->pc != 0x144BF4u) { return; }
    }
    ctx->pc = 0x144BF4u;
    // 0x144bf4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144bf8: 0x3c024033  lui         $v0, 0x4033
    ctx->pc = 0x144bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16435 << 16));
    // 0x144bfc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x144bfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x144c00: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144c04: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144c08: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144c0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144c10: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144c14: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144c18: 0xc051484  jal         func_145210
    ctx->pc = 0x144C18u;
    SET_GPR_U32(ctx, 31, 0x144C20u);
    ctx->pc = 0x144C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C18u;
            // 0x144c1c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C20u; }
        if (ctx->pc != 0x144C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C20u; }
        if (ctx->pc != 0x144C20u) { return; }
    }
    ctx->pc = 0x144C20u;
    // 0x144c20: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144c24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144c28: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x144c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x144c2c: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144C2Cu;
    SET_GPR_U32(ctx, 31, 0x144C34u);
    ctx->pc = 0x144C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C2Cu;
            // 0x144c30: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C34u; }
        if (ctx->pc != 0x144C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C34u; }
        if (ctx->pc != 0x144C34u) { return; }
    }
    ctx->pc = 0x144C34u;
    // 0x144c34: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144c38: 0x3c02404c  lui         $v0, 0x404C
    ctx->pc = 0x144c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16460 << 16));
    // 0x144c3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x144c3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x144c40: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x144c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x144c44: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x144c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144c48: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x144c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x144c4c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x144c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x144c50: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x144c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144c54: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x144c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144c58: 0xc051484  jal         func_145210
    ctx->pc = 0x144C58u;
    SET_GPR_U32(ctx, 31, 0x144C60u);
    ctx->pc = 0x144C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C58u;
            // 0x144c5c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C60u; }
        if (ctx->pc != 0x144C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C60u; }
        if (ctx->pc != 0x144C60u) { return; }
    }
    ctx->pc = 0x144C60u;
    // 0x144c60: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x144c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x144c64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x144c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144c68: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x144c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x144c6c: 0xc065130  jal         func_1944C0
    ctx->pc = 0x144C6Cu;
    SET_GPR_U32(ctx, 31, 0x144C74u);
    ctx->pc = 0x144C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C6Cu;
            // 0x144c70: 0x2445ffe0  addiu       $a1, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C74u; }
        if (ctx->pc != 0x144C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C74u; }
        if (ctx->pc != 0x144C74u) { return; }
    }
    ctx->pc = 0x144C74u;
    // 0x144c74: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x144c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144c78: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x144c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x144c7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x144c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144c80: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x144c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x144c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144c88: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x144c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144c8c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x144c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x144c90: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x144c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x144c94: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144c98: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x144c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144c9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x144c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144ca0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x144CA0u;
    {
        const bool branch_taken_0x144ca0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x144CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144CA0u;
            // 0x144ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ca0) {
            ctx->pc = 0x144CB0u;
            goto label_144cb0;
        }
    }
    ctx->pc = 0x144CA8u;
    // 0x144ca8: 0xc053348  jal         func_14CD20
    ctx->pc = 0x144CA8u;
    SET_GPR_U32(ctx, 31, 0x144CB0u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CB0u; }
        if (ctx->pc != 0x144CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CB0u; }
        if (ctx->pc != 0x144CB0u) { return; }
    }
    ctx->pc = 0x144CB0u;
label_144cb0:
    // 0x144cb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x144cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x144CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144CBCu;
            // 0x144cc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144B78u: goto label_144b78;
            case 0x144CB0u: goto label_144cb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144CC4u;
}
