#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg5_gate_l
// Address: 0x145050 - 0x145204
void MapMoveingFuncStg5_gate_l_0x145050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg5_gate_l_0x145050");
#endif

    ctx->pc = 0x145050u;

    // 0x145050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x145050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x145054: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x145054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x145058: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14505c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145068: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14506c: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x14506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x145070: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x145070u;
    SET_GPR_U32(ctx, 31, 0x145078u);
    ctx->pc = 0x145074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145070u;
            // 0x145074: 0xdc2595b0  ld          $a1, -0x6A50($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145078u; }
        if (ctx->pc != 0x145078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145078u; }
        if (ctx->pc != 0x145078u) { return; }
    }
    ctx->pc = 0x145078u;
    // 0x145078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14507c: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x14507Cu;
    SET_GPR_U32(ctx, 31, 0x145084u);
    ctx->pc = 0x145080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14507Cu;
            // 0x145080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145084u; }
        if (ctx->pc != 0x145084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145084u; }
        if (ctx->pc != 0x145084u) { return; }
    }
    ctx->pc = 0x145084u;
    // 0x145084: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x145084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x145088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14508c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x14508cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x145090: 0x286101c3  slti        $at, $v1, 0x1C3
    ctx->pc = 0x145090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)451) ? 1 : 0);
    // 0x145094: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x145094u;
    {
        const bool branch_taken_0x145094 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x145098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145094u;
            // 0x145098: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145094) {
            ctx->pc = 0x1450B8u;
            goto label_1450b8;
        }
    }
    ctx->pc = 0x14509Cu;
    // 0x14509c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x14509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1450a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1450a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1450a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1450a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1450a8: 0x0  nop
    ctx->pc = 0x1450a8u;
    // NOP
    // 0x1450ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1450acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1450b0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1450b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1450b4: 0x0  nop
    ctx->pc = 0x1450b4u;
    // NOP
label_1450b8:
    // 0x1450b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1450b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1450bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1450bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1450c0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1450c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1450c4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1450c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1450c8: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1450c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1450cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1450ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1450d0: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1450d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1450d4: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x1450d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1450d8: 0xc051484  jal         func_145210
    ctx->pc = 0x1450D8u;
    SET_GPR_U32(ctx, 31, 0x1450E0u);
    ctx->pc = 0x1450DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1450D8u;
            // 0x1450dc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450E0u; }
        if (ctx->pc != 0x1450E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450E0u; }
        if (ctx->pc != 0x1450E0u) { return; }
    }
    ctx->pc = 0x1450E0u;
    // 0x1450e0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1450e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1450e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1450e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1450e8: 0x2464ff9c  addiu       $a0, $v1, -0x64
    ctx->pc = 0x1450e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1450ec: 0xc065130  jal         func_1944C0
    ctx->pc = 0x1450ECu;
    SET_GPR_U32(ctx, 31, 0x1450F4u);
    ctx->pc = 0x1450F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1450ECu;
            // 0x1450f0: 0x24450100  addiu       $a1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450F4u; }
        if (ctx->pc != 0x1450F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1450F4u; }
        if (ctx->pc != 0x1450F4u) { return; }
    }
    ctx->pc = 0x1450F4u;
    // 0x1450f4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1450f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1450f8: 0x3c024019  lui         $v0, 0x4019
    ctx->pc = 0x1450f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
    // 0x1450fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1450fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x145100: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x145100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x145104: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x145104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145108: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x145108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14510c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14510cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x145110: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x145110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145114: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x145114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145118: 0xc051484  jal         func_145210
    ctx->pc = 0x145118u;
    SET_GPR_U32(ctx, 31, 0x145120u);
    ctx->pc = 0x14511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145118u;
            // 0x14511c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145120u; }
        if (ctx->pc != 0x145120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145120u; }
        if (ctx->pc != 0x145120u) { return; }
    }
    ctx->pc = 0x145120u;
    // 0x145120: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x145120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145124: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x145124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x145128: 0x2464ff9c  addiu       $a0, $v1, -0x64
    ctx->pc = 0x145128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x14512c: 0xc065130  jal         func_1944C0
    ctx->pc = 0x14512Cu;
    SET_GPR_U32(ctx, 31, 0x145134u);
    ctx->pc = 0x145130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14512Cu;
            // 0x145130: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145134u; }
        if (ctx->pc != 0x145134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145134u; }
        if (ctx->pc != 0x145134u) { return; }
    }
    ctx->pc = 0x145134u;
    // 0x145134: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x145134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x145138: 0x3c024033  lui         $v0, 0x4033
    ctx->pc = 0x145138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16435 << 16));
    // 0x14513c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x14513cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x145140: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x145140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x145144: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x145144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145148: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x145148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14514c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14514cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x145150: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x145150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145154: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x145154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145158: 0xc051484  jal         func_145210
    ctx->pc = 0x145158u;
    SET_GPR_U32(ctx, 31, 0x145160u);
    ctx->pc = 0x14515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145158u;
            // 0x14515c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145160u; }
        if (ctx->pc != 0x145160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145160u; }
        if (ctx->pc != 0x145160u) { return; }
    }
    ctx->pc = 0x145160u;
    // 0x145160: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x145160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x145164: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x145164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x145168: 0x2464ff9c  addiu       $a0, $v1, -0x64
    ctx->pc = 0x145168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x14516c: 0xc065130  jal         func_1944C0
    ctx->pc = 0x14516Cu;
    SET_GPR_U32(ctx, 31, 0x145174u);
    ctx->pc = 0x145170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14516Cu;
            // 0x145170: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145174u; }
        if (ctx->pc != 0x145174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145174u; }
        if (ctx->pc != 0x145174u) { return; }
    }
    ctx->pc = 0x145174u;
    // 0x145174: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x145174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x145178: 0x3c02404c  lui         $v0, 0x404C
    ctx->pc = 0x145178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16460 << 16));
    // 0x14517c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14517cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x145180: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x145180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x145184: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x145184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145188: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x145188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14518c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14518cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x145190: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x145190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145194: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x145194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145198: 0xc051484  jal         func_145210
    ctx->pc = 0x145198u;
    SET_GPR_U32(ctx, 31, 0x1451A0u);
    ctx->pc = 0x14519Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145198u;
            // 0x14519c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145210u;
    if (runtime->hasFunction(0x145210u)) {
        auto targetFn = runtime->lookupFunction(0x145210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451A0u; }
        if (ctx->pc != 0x1451A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2DGate_0x145210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451A0u; }
        if (ctx->pc != 0x1451A0u) { return; }
    }
    ctx->pc = 0x1451A0u;
    // 0x1451a0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1451a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1451a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1451a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1451a8: 0x2464ff9c  addiu       $a0, $v1, -0x64
    ctx->pc = 0x1451a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1451ac: 0xc065130  jal         func_1944C0
    ctx->pc = 0x1451ACu;
    SET_GPR_U32(ctx, 31, 0x1451B4u);
    ctx->pc = 0x1451B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1451ACu;
            // 0x1451b0: 0x2445ffe0  addiu       $a1, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944C0u;
    if (runtime->hasFunction(0x1944C0u)) {
        auto targetFn = runtime->lookupFunction(0x1944C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451B4u; }
        if (ctx->pc != 0x1451B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Hide_0x1944c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451B4u; }
        if (ctx->pc != 0x1451B4u) { return; }
    }
    ctx->pc = 0x1451B4u;
    // 0x1451b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1451b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1451b8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1451b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1451bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1451bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1451c0: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x1451c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
    // 0x1451c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1451c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1451c8: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x1451c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1451cc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1451ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1451d0: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x1451d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1451d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1451d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1451d8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1451d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1451dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1451dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1451e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1451E0u;
    {
        const bool branch_taken_0x1451e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1451E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1451E0u;
            // 0x1451e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1451e0) {
            ctx->pc = 0x1451F0u;
            goto label_1451f0;
        }
    }
    ctx->pc = 0x1451E8u;
    // 0x1451e8: 0xc053348  jal         func_14CD20
    ctx->pc = 0x1451E8u;
    SET_GPR_U32(ctx, 31, 0x1451F0u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451F0u; }
        if (ctx->pc != 0x1451F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1451F0u; }
        if (ctx->pc != 0x1451F0u) { return; }
    }
    ctx->pc = 0x1451F0u;
label_1451f0:
    // 0x1451f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1451f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1451f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1451f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1451f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1451fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1451FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1451FCu;
            // 0x145200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1450B8u: goto label_1450b8;
            case 0x1451F0u: goto label_1451f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145204u;
}
