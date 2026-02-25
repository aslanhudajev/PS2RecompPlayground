#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex1BossMove3
// Address: 0x1d6900 - 0x1d6f40
void Stageex1BossMove3_0x1d6900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex1BossMove3_0x1d6900");
#endif

    ctx->pc = 0x1d6900u;

    // 0x1d6900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d6900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d6904: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d6904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d6908: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d6908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d690c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d6910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d6910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d6914: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d6914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d691c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d691cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d6920: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d6920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d6924: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1d6924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1d6928: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1D6928u;
    SET_GPR_U32(ctx, 31, 0x1D6930u);
    ctx->pc = 0x1D692Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6928u;
            // 0x1d692c: 0xdc25aaf8  ld          $a1, -0x5508($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6930u; }
        if (ctx->pc != 0x1D6930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6930u; }
        if (ctx->pc != 0x1D6930u) { return; }
    }
    ctx->pc = 0x1D6930u;
    // 0x1d6930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d6934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6938: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1D6938u;
    SET_GPR_U32(ctx, 31, 0x1D6940u);
    ctx->pc = 0x1D693Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6938u;
            // 0x1d693c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6940u; }
        if (ctx->pc != 0x1D6940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6940u; }
        if (ctx->pc != 0x1D6940u) { return; }
    }
    ctx->pc = 0x1D6940u;
    // 0x1d6940: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d6940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6948: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1D6948u;
    SET_GPR_U32(ctx, 31, 0x1D6950u);
    ctx->pc = 0x1D694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6948u;
            // 0x1d694c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6950u; }
        if (ctx->pc != 0x1D6950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6950u; }
        if (ctx->pc != 0x1D6950u) { return; }
    }
    ctx->pc = 0x1D6950u;
    // 0x1d6950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6954: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d6954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6958: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1D6958u;
    SET_GPR_U32(ctx, 31, 0x1D6960u);
    ctx->pc = 0x1D695Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6958u;
            // 0x1d695c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6960u; }
        if (ctx->pc != 0x1D6960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6960u; }
        if (ctx->pc != 0x1D6960u) { return; }
    }
    ctx->pc = 0x1D6960u;
    // 0x1d6960: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x1d6960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1d6964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d696c: 0x106200ae  beq         $v1, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x1D696Cu;
    {
        const bool branch_taken_0x1d696c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d696c) {
            ctx->pc = 0x1D6C28u;
            goto label_1d6c28;
        }
    }
    ctx->pc = 0x1D6974u;
    // 0x1d6974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6978: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6978u;
    {
        const bool branch_taken_0x1d6978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d6978) {
            ctx->pc = 0x1D6998u;
            goto label_1d6998;
        }
    }
    ctx->pc = 0x1D6980u;
    // 0x1d6980: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6980u;
    {
        const bool branch_taken_0x1d6980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6980) {
            ctx->pc = 0x1D6990u;
            goto label_1d6990;
        }
    }
    ctx->pc = 0x1D6988u;
    // 0x1d6988: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1D6988u;
    {
        const bool branch_taken_0x1d6988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6988) {
            ctx->pc = 0x1D6C28u;
            goto label_1d6c28;
        }
    }
    ctx->pc = 0x1D6990u;
label_1d6990:
    // 0x1d6990: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x1D6990u;
    {
        const bool branch_taken_0x1d6990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6990u;
            // 0x1d6994: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6990) {
            ctx->pc = 0x1D6C28u;
            goto label_1d6c28;
        }
    }
    ctx->pc = 0x1D6998u;
label_1d6998:
    // 0x1d6998: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d6998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d699c: 0x184000a2  blez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1D699Cu;
    {
        const bool branch_taken_0x1d699c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d699c) {
            ctx->pc = 0x1D6C28u;
            goto label_1d6c28;
        }
    }
    ctx->pc = 0x1D69A4u;
    // 0x1d69a4: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1d69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1d69a8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x1d69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1d69ac: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d69acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d69b0: 0x0  nop
    ctx->pc = 0x1d69b0u;
    // NOP
    // 0x1d69b4: 0x0  nop
    ctx->pc = 0x1d69b4u;
    // NOP
    // 0x1d69b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d69b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d69bc: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x1D69BCu;
    {
        const bool branch_taken_0x1d69bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d69bc) {
            ctx->pc = 0x1D6C28u;
            goto label_1d6c28;
        }
    }
    ctx->pc = 0x1D69C4u;
    // 0x1d69c4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1d69c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d69c8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d69cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d69ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d69d0: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d69d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d69d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d69d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d69d8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1d69d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d69dc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d69dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d69e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d69e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d69e4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1d69e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1d69e8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1d69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d69ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d69ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d69f0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d69f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d69f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d69f8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d69f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d69fc: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d69fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d6a00: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D6A00u;
    SET_GPR_U32(ctx, 31, 0x1D6A08u);
    ctx->pc = 0x1D6A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A00u;
            // 0x1d6a04: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A08u; }
        if (ctx->pc != 0x1D6A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A08u; }
        if (ctx->pc != 0x1D6A08u) { return; }
    }
    ctx->pc = 0x1D6A08u;
    // 0x1d6a08: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6a0c: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x1d6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1d6a10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6a14: 0x2463ff52  addiu       $v1, $v1, -0xAE
    ctx->pc = 0x1d6a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967122));
    // 0x1d6a18: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1d6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1d6a1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d6a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6a20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6a24: 0x0  nop
    ctx->pc = 0x1d6a24u;
    // NOP
    // 0x1d6a28: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d6a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d6a2c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1D6A2Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A34u);
    ctx->pc = 0x1D6A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A2Cu;
            // 0x1d6a30: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A34u; }
        if (ctx->pc != 0x1D6A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A34u; }
        if (ctx->pc != 0x1D6A34u) { return; }
    }
    ctx->pc = 0x1D6A34u;
    // 0x1d6a34: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6a38: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d6a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d6a3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6a40: 0x2464ff52  addiu       $a0, $v1, -0xAE
    ctx->pc = 0x1d6a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967122));
    // 0x1d6a44: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D6A44u;
    SET_GPR_U32(ctx, 31, 0x1D6A4Cu);
    ctx->pc = 0x1D6A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A44u;
            // 0x1d6a48: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A4Cu; }
        if (ctx->pc != 0x1D6A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A4Cu; }
        if (ctx->pc != 0x1D6A4Cu) { return; }
    }
    ctx->pc = 0x1D6A4Cu;
    // 0x1d6a4c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d6a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6a54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6a58: 0x2464ff5e  addiu       $a0, $v1, -0xA2
    ctx->pc = 0x1d6a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967134));
    // 0x1d6a5c: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D6A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A64u);
    ctx->pc = 0x1D6A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A5Cu;
            // 0x1d6a60: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A64u; }
        if (ctx->pc != 0x1D6A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A64u; }
        if (ctx->pc != 0x1D6A64u) { return; }
    }
    ctx->pc = 0x1D6A64u;
    // 0x1d6a64: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6a68: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1d6a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1d6a6c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6a70: 0x2464ff6a  addiu       $a0, $v1, -0x96
    ctx->pc = 0x1d6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967146));
    // 0x1d6a74: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D6A74u;
    SET_GPR_U32(ctx, 31, 0x1D6A7Cu);
    ctx->pc = 0x1D6A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A74u;
            // 0x1d6a78: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A7Cu; }
        if (ctx->pc != 0x1D6A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A7Cu; }
        if (ctx->pc != 0x1D6A7Cu) { return; }
    }
    ctx->pc = 0x1D6A7Cu;
    // 0x1d6a7c: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D6A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A84u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A84u; }
        if (ctx->pc != 0x1D6A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A84u; }
        if (ctx->pc != 0x1D6A84u) { return; }
    }
    ctx->pc = 0x1D6A84u;
    // 0x1d6a84: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D6A84u;
    {
        const bool branch_taken_0x1d6a84 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6a84) {
            ctx->pc = 0x1D6AF0u;
            goto label_1d6af0;
        }
    }
    ctx->pc = 0x1D6A8Cu;
    // 0x1d6a8c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6a90: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d6a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d6a94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6a98: 0x2464ff52  addiu       $a0, $v1, -0xAE
    ctx->pc = 0x1d6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967122));
    // 0x1d6a9c: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D6A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D6AA4u);
    ctx->pc = 0x1D6AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A9Cu;
            // 0x1d6aa0: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6AA4u; }
        if (ctx->pc != 0x1D6AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6AA4u; }
        if (ctx->pc != 0x1D6AA4u) { return; }
    }
    ctx->pc = 0x1D6AA4u;
    // 0x1d6aa4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6aa8: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1d6aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1d6aac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6ab0: 0x2464ff6a  addiu       $a0, $v1, -0x96
    ctx->pc = 0x1d6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967146));
    // 0x1d6ab4: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D6AB4u;
    SET_GPR_U32(ctx, 31, 0x1D6ABCu);
    ctx->pc = 0x1D6AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6AB4u;
            // 0x1d6ab8: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6ABCu; }
        if (ctx->pc != 0x1D6ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6ABCu; }
        if (ctx->pc != 0x1D6ABCu) { return; }
    }
    ctx->pc = 0x1D6ABCu;
    // 0x1d6abc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6ac0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1d6ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d6ac4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6ac8: 0x2464ff52  addiu       $a0, $v1, -0xAE
    ctx->pc = 0x1d6ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967122));
    // 0x1d6acc: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D6ACCu;
    SET_GPR_U32(ctx, 31, 0x1D6AD4u);
    ctx->pc = 0x1D6AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6ACCu;
            // 0x1d6ad0: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6AD4u; }
        if (ctx->pc != 0x1D6AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6AD4u; }
        if (ctx->pc != 0x1D6AD4u) { return; }
    }
    ctx->pc = 0x1D6AD4u;
    // 0x1d6ad4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6ad8: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x1d6ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1d6adc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6ae0: 0x2464ff6a  addiu       $a0, $v1, -0x96
    ctx->pc = 0x1d6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967146));
    // 0x1d6ae4: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D6AE4u;
    SET_GPR_U32(ctx, 31, 0x1D6AECu);
    ctx->pc = 0x1D6AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6AE4u;
            // 0x1d6ae8: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6AECu; }
        if (ctx->pc != 0x1D6AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6AECu; }
        if (ctx->pc != 0x1D6AECu) { return; }
    }
    ctx->pc = 0x1D6AECu;
    // 0x1d6aec: 0x0  nop
    ctx->pc = 0x1d6aecu;
    // NOP
label_1d6af0:
    // 0x1d6af0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D6AF0u;
    SET_GPR_U32(ctx, 31, 0x1D6AF8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6AF8u; }
        if (ctx->pc != 0x1D6AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6AF8u; }
        if (ctx->pc != 0x1D6AF8u) { return; }
    }
    ctx->pc = 0x1D6AF8u;
    // 0x1d6af8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d6af8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d6afc: 0x1420003a  bnez        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D6AFCu;
    {
        const bool branch_taken_0x1d6afc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6afc) {
            ctx->pc = 0x1D6BE8u;
            goto label_1d6be8;
        }
    }
    ctx->pc = 0x1D6B04u;
    // 0x1d6b04: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d6b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6b08: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1d6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
    // 0x1d6b0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6b10: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d6b10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d6b14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d6b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6b18: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1d6b1c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6b20: 0x2484ff52  addiu       $a0, $a0, -0xAE
    ctx->pc = 0x1d6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967122));
    // 0x1d6b24: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D6B24u;
    SET_GPR_U32(ctx, 31, 0x1D6B2Cu);
    ctx->pc = 0x1D6B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B24u;
            // 0x1d6b28: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B2Cu; }
        if (ctx->pc != 0x1D6B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B2Cu; }
        if (ctx->pc != 0x1D6B2Cu) { return; }
    }
    ctx->pc = 0x1D6B2Cu;
    // 0x1d6b2c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6b30: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x1d6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x1d6b34: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d6b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6b38: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1d6b38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1d6b3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6b40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6b44: 0x2484ff5e  addiu       $a0, $a0, -0xA2
    ctx->pc = 0x1d6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967134));
    // 0x1d6b48: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D6B48u;
    SET_GPR_U32(ctx, 31, 0x1D6B50u);
    ctx->pc = 0x1D6B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B48u;
            // 0x1d6b4c: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B50u; }
        if (ctx->pc != 0x1D6B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B50u; }
        if (ctx->pc != 0x1D6B50u) { return; }
    }
    ctx->pc = 0x1D6B50u;
    // 0x1d6b50: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d6b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6b54: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1d6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1d6b58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6b5c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d6b5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d6b60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d6b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6b64: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1d6b68: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6b6c: 0x2484ff6a  addiu       $a0, $a0, -0x96
    ctx->pc = 0x1d6b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967146));
    // 0x1d6b70: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D6B70u;
    SET_GPR_U32(ctx, 31, 0x1D6B78u);
    ctx->pc = 0x1D6B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B70u;
            // 0x1d6b74: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B78u; }
        if (ctx->pc != 0x1D6B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B78u; }
        if (ctx->pc != 0x1D6B78u) { return; }
    }
    ctx->pc = 0x1D6B78u;
    // 0x1d6b78: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d6b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6b7c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1d6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1d6b80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6b84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d6b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6b88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6b8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6b90: 0x2484ff52  addiu       $a0, $a0, -0xAE
    ctx->pc = 0x1d6b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967122));
    // 0x1d6b94: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D6B94u;
    SET_GPR_U32(ctx, 31, 0x1D6B9Cu);
    ctx->pc = 0x1D6B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B94u;
            // 0x1d6b98: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B9Cu; }
        if (ctx->pc != 0x1D6B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B9Cu; }
        if (ctx->pc != 0x1D6B9Cu) { return; }
    }
    ctx->pc = 0x1D6B9Cu;
    // 0x1d6b9c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6ba0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1d6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1d6ba4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6ba8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1d6ba8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1d6bac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6bb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6bb4: 0x2484ff5e  addiu       $a0, $a0, -0xA2
    ctx->pc = 0x1d6bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967134));
    // 0x1d6bb8: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D6BB8u;
    SET_GPR_U32(ctx, 31, 0x1D6BC0u);
    ctx->pc = 0x1D6BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6BB8u;
            // 0x1d6bbc: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BC0u; }
        if (ctx->pc != 0x1D6BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BC0u; }
        if (ctx->pc != 0x1D6BC0u) { return; }
    }
    ctx->pc = 0x1D6BC0u;
    // 0x1d6bc0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6bc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d6bc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d6bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6bcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d6bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6bd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6bd4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6bd8: 0x2484ff6a  addiu       $a0, $a0, -0x96
    ctx->pc = 0x1d6bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967146));
    // 0x1d6bdc: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D6BDCu;
    SET_GPR_U32(ctx, 31, 0x1D6BE4u);
    ctx->pc = 0x1D6BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6BDCu;
            // 0x1d6be0: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BE4u; }
        if (ctx->pc != 0x1D6BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6BE4u; }
        if (ctx->pc != 0x1D6BE4u) { return; }
    }
    ctx->pc = 0x1D6BE4u;
    // 0x1d6be4: 0x0  nop
    ctx->pc = 0x1d6be4u;
    // NOP
label_1d6be8:
    // 0x1d6be8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1d6be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d6bec: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x1d6becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x1d6bf0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1d6bf4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d6bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d6bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6bfc: 0xc4a30120  lwc1        $f3, 0x120($a1)
    ctx->pc = 0x1d6bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d6c00: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1d6c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6c04: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1d6c04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1d6c08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d6c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d6c0c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6c0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d6c10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d6c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d6c14: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1d6c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d6c18: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1d6c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1d6c1c: 0xc071ec0  jal         func_1C7B00
    ctx->pc = 0x1D6C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D6C24u);
    ctx->pc = 0x1D6C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C1Cu;
            // 0x1d6c20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B00u;
    if (runtime->hasFunction(0x1C7B00u)) {
        auto targetFn = runtime->lookupFunction(0x1C7B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C24u; }
        if (ctx->pc != 0x1D6C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_05_0x1c7b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C24u; }
        if (ctx->pc != 0x1D6C24u) { return; }
    }
    ctx->pc = 0x1D6C24u;
    // 0x1d6c24: 0x0  nop
    ctx->pc = 0x1d6c24u;
    // NOP
label_1d6c28:
    // 0x1d6c28: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1d6c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6c30: 0x0  nop
    ctx->pc = 0x1d6c30u;
    // NOP
    // 0x1d6c34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d6c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6c38: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6C38u;
    {
        const bool branch_taken_0x1d6c38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C38u;
            // 0x1d6c3c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c38) {
            ctx->pc = 0x1D6C58u;
            goto label_1d6c58;
        }
    }
    ctx->pc = 0x1D6C40u;
    // 0x1d6c40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d6c40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d6c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6c48: 0x0  nop
    ctx->pc = 0x1d6c48u;
    // NOP
    // 0x1d6c4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d6c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d6c50: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1d6c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d6c54: 0x0  nop
    ctx->pc = 0x1d6c54u;
    // NOP
label_1d6c58:
    // 0x1d6c58: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1d6c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6c5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6c60: 0x0  nop
    ctx->pc = 0x1d6c60u;
    // NOP
    // 0x1d6c64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d6c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6c68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6C68u;
    {
        const bool branch_taken_0x1d6c68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C68u;
            // 0x1d6c6c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c68) {
            ctx->pc = 0x1D6C88u;
            goto label_1d6c88;
        }
    }
    ctx->pc = 0x1D6C70u;
    // 0x1d6c70: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d6c70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d6c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6c78: 0x0  nop
    ctx->pc = 0x1d6c78u;
    // NOP
    // 0x1d6c7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d6c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d6c80: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1d6c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1d6c84: 0x0  nop
    ctx->pc = 0x1d6c84u;
    // NOP
label_1d6c88:
    // 0x1d6c88: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1d6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6c8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6c8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6c90: 0x0  nop
    ctx->pc = 0x1d6c90u;
    // NOP
    // 0x1d6c94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d6c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6c98: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6C98u;
    {
        const bool branch_taken_0x1d6c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C98u;
            // 0x1d6c9c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c98) {
            ctx->pc = 0x1D6CB8u;
            goto label_1d6cb8;
        }
    }
    ctx->pc = 0x1D6CA0u;
    // 0x1d6ca0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d6ca0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d6ca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6ca8: 0x0  nop
    ctx->pc = 0x1d6ca8u;
    // NOP
    // 0x1d6cac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d6cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d6cb0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d6cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d6cb4: 0x0  nop
    ctx->pc = 0x1d6cb4u;
    // NOP
label_1d6cb8:
    // 0x1d6cb8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d6cbc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d6cc0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d6cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d6cc4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d6cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d6cc8: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D6CC8u;
    SET_GPR_U32(ctx, 31, 0x1D6CD0u);
    ctx->pc = 0x1D6CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6CC8u;
            // 0x1d6ccc: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CD0u; }
        if (ctx->pc != 0x1D6CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CD0u; }
        if (ctx->pc != 0x1D6CD0u) { return; }
    }
    ctx->pc = 0x1D6CD0u;
    // 0x1d6cd0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6cd4: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x1d6cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x1d6cd8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6cdc: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x1d6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x1d6ce0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1D6CE0u;
    SET_GPR_U32(ctx, 31, 0x1D6CE8u);
    ctx->pc = 0x1D6CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6CE0u;
            // 0x1d6ce4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CE8u; }
        if (ctx->pc != 0x1D6CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CE8u; }
        if (ctx->pc != 0x1D6CE8u) { return; }
    }
    ctx->pc = 0x1D6CE8u;
    // 0x1d6ce8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d6ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d6cec: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1d6cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d6cf0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1D6CF0u;
    SET_GPR_U32(ctx, 31, 0x1D6CF8u);
    ctx->pc = 0x1D6CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6CF0u;
            // 0x1d6cf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CF8u; }
        if (ctx->pc != 0x1D6CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CF8u; }
        if (ctx->pc != 0x1D6CF8u) { return; }
    }
    ctx->pc = 0x1D6CF8u;
    // 0x1d6cf8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d6cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d6cfc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1d6cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d6d00: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1D6D00u;
    SET_GPR_U32(ctx, 31, 0x1D6D08u);
    ctx->pc = 0x1D6D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D00u;
            // 0x1d6d04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D08u; }
        if (ctx->pc != 0x1D6D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D08u; }
        if (ctx->pc != 0x1D6D08u) { return; }
    }
    ctx->pc = 0x1D6D08u;
    // 0x1d6d08: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d6d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d6d0c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1d6d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d6d10: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1D6D10u;
    SET_GPR_U32(ctx, 31, 0x1D6D18u);
    ctx->pc = 0x1D6D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D10u;
            // 0x1d6d14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D18u; }
        if (ctx->pc != 0x1D6D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D18u; }
        if (ctx->pc != 0x1D6D18u) { return; }
    }
    ctx->pc = 0x1D6D18u;
    // 0x1d6d18: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d6d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d6d1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d6d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d20: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1D6D20u;
    SET_GPR_U32(ctx, 31, 0x1D6D28u);
    ctx->pc = 0x1D6D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D20u;
            // 0x1d6d24: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D28u; }
        if (ctx->pc != 0x1D6D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D28u; }
        if (ctx->pc != 0x1D6D28u) { return; }
    }
    ctx->pc = 0x1D6D28u;
    // 0x1d6d28: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1d6d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d6d2c: 0x1c60003c  bgtz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1D6D2Cu;
    {
        const bool branch_taken_0x1d6d2c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d6d2c) {
            ctx->pc = 0x1D6E20u;
            goto label_1d6e20;
        }
    }
    ctx->pc = 0x1D6D34u;
    // 0x1d6d34: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1d6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1d6d38: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d6d3c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d6d3cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d6d40: 0x0  nop
    ctx->pc = 0x1d6d40u;
    // NOP
    // 0x1d6d44: 0x0  nop
    ctx->pc = 0x1d6d44u;
    // NOP
    // 0x1d6d48: 0x1010  mfhi        $v0
    ctx->pc = 0x1d6d48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d6d4c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D6D4Cu;
    {
        const bool branch_taken_0x1d6d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6d4c) {
            ctx->pc = 0x1D6D78u;
            goto label_1d6d78;
        }
    }
    ctx->pc = 0x1D6D54u;
    // 0x1d6d54: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1d6d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d6d58: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1d6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1d6d5c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1d6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1d6d60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6d64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6d68: 0x2484ff52  addiu       $a0, $a0, -0xAE
    ctx->pc = 0x1d6d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967122));
    // 0x1d6d6c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1D6D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D74u);
    ctx->pc = 0x1D6D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D6Cu;
            // 0x1d6d70: 0x24650078  addiu       $a1, $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D74u; }
        if (ctx->pc != 0x1D6D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D74u; }
        if (ctx->pc != 0x1D6D74u) { return; }
    }
    ctx->pc = 0x1D6D74u;
    // 0x1d6d74: 0x0  nop
    ctx->pc = 0x1d6d74u;
    // NOP
label_1d6d78:
    // 0x1d6d78: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1d6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1d6d7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6d80: 0x1044001f  beq         $v0, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D6D80u;
    {
        const bool branch_taken_0x1d6d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d6d80) {
            ctx->pc = 0x1D6E00u;
            goto label_1d6e00;
        }
    }
    ctx->pc = 0x1D6D88u;
    // 0x1d6d88: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6d8c: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d6d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d6d90: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x1d6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x1d6d94: 0x24c65b50  addiu       $a2, $a2, 0x5B50
    ctx->pc = 0x1d6d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23376));
    // 0x1d6d98: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d6d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d9c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1d6d9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6da0: 0x2442ff46  addiu       $v0, $v0, -0xBA
    ctx->pc = 0x1d6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967110));
    // 0x1d6da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6da8: 0x0  nop
    ctx->pc = 0x1d6da8u;
    // NOP
    // 0x1d6dac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6dacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6db0: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x1d6db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x1d6db4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6db8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1d6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1d6dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6dc0: 0x0  nop
    ctx->pc = 0x1d6dc0u;
    // NOP
    // 0x1d6dc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6dc8: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x1d6dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x1d6dcc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6dd0: 0x2442ff76  addiu       $v0, $v0, -0x8A
    ctx->pc = 0x1d6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967158));
    // 0x1d6dd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6dd8: 0x0  nop
    ctx->pc = 0x1d6dd8u;
    // NOP
    // 0x1d6ddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6de0: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x1d6de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x1d6de4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6de8: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1d6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1d6dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6df0: 0x0  nop
    ctx->pc = 0x1d6df0u;
    // NOP
    // 0x1d6df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6df8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1D6DF8u;
    SET_GPR_U32(ctx, 31, 0x1D6E00u);
    ctx->pc = 0x1D6DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DF8u;
            // 0x1d6dfc: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E00u; }
        if (ctx->pc != 0x1D6E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E00u; }
        if (ctx->pc != 0x1D6E00u) { return; }
    }
    ctx->pc = 0x1D6E00u;
label_1d6e00:
    // 0x1d6e00: 0x8e620120  lw          $v0, 0x120($s3)
    ctx->pc = 0x1d6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x1d6e04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6e08: 0xae620120  sw          $v0, 0x120($s3)
    ctx->pc = 0x1d6e08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 2));
    // 0x1d6e0c: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x1d6e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x1d6e10: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1D6E10u;
    SET_GPR_U32(ctx, 31, 0x1D6E18u);
    ctx->pc = 0x1D6E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E10u;
            // 0x1d6e14: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E18u; }
        if (ctx->pc != 0x1D6E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E18u; }
        if (ctx->pc != 0x1D6E18u) { return; }
    }
    ctx->pc = 0x1D6E18u;
    // 0x1d6e18: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1D6E18u;
    {
        const bool branch_taken_0x1d6e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E18u;
            // 0x1d6e1c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e18) {
            ctx->pc = 0x1D6F18u;
            goto label_1d6f18;
        }
    }
    ctx->pc = 0x1D6E20u;
label_1d6e20:
    // 0x1d6e20: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1d6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d6e24: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1d6e24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6e28: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D6E28u;
    {
        const bool branch_taken_0x1d6e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e28) {
            ctx->pc = 0x1D6E80u;
            goto label_1d6e80;
        }
    }
    ctx->pc = 0x1D6E30u;
    // 0x1d6e30: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1d6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x1d6e34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6E34u;
    {
        const bool branch_taken_0x1d6e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e34) {
            ctx->pc = 0x1D6E50u;
            goto label_1d6e50;
        }
    }
    ctx->pc = 0x1D6E3Cu;
    // 0x1d6e3c: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1D6E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E44u);
    ctx->pc = 0x1D6E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E3Cu;
            // 0x1d6e40: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E44u; }
        if (ctx->pc != 0x1D6E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E44u; }
        if (ctx->pc != 0x1D6E44u) { return; }
    }
    ctx->pc = 0x1D6E44u;
    // 0x1d6e44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6E44u;
    {
        const bool branch_taken_0x1d6e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e44) {
            ctx->pc = 0x1D6E58u;
            goto label_1d6e58;
        }
    }
    ctx->pc = 0x1D6E4Cu;
    // 0x1d6e4c: 0x0  nop
    ctx->pc = 0x1d6e4cu;
    // NOP
label_1d6e50:
    // 0x1d6e50: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1D6E50u;
    SET_GPR_U32(ctx, 31, 0x1D6E58u);
    ctx->pc = 0x1D6E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E50u;
            // 0x1d6e54: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E58u; }
        if (ctx->pc != 0x1D6E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E58u; }
        if (ctx->pc != 0x1D6E58u) { return; }
    }
    ctx->pc = 0x1D6E58u;
label_1d6e58:
    // 0x1d6e58: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1d6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x1d6e5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6E5Cu;
    {
        const bool branch_taken_0x1d6e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e5c) {
            ctx->pc = 0x1D6E70u;
            goto label_1d6e70;
        }
    }
    ctx->pc = 0x1D6E64u;
    // 0x1d6e64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D6E64u;
    {
        const bool branch_taken_0x1d6e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E64u;
            // 0x1d6e68: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e64) {
            ctx->pc = 0x1D6E90u;
            goto label_1d6e90;
        }
    }
    ctx->pc = 0x1D6E6Cu;
    // 0x1d6e6c: 0x0  nop
    ctx->pc = 0x1d6e6cu;
    // NOP
label_1d6e70:
    // 0x1d6e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6e74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6E74u;
    {
        const bool branch_taken_0x1d6e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E74u;
            // 0x1d6e78: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e74) {
            ctx->pc = 0x1D6E90u;
            goto label_1d6e90;
        }
    }
    ctx->pc = 0x1D6E7Cu;
    // 0x1d6e7c: 0x0  nop
    ctx->pc = 0x1d6e7cu;
    // NOP
label_1d6e80:
    // 0x1d6e80: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1D6E80u;
    SET_GPR_U32(ctx, 31, 0x1D6E88u);
    ctx->pc = 0x1D6E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E80u;
            // 0x1d6e84: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E88u; }
        if (ctx->pc != 0x1D6E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6E88u; }
        if (ctx->pc != 0x1D6E88u) { return; }
    }
    ctx->pc = 0x1D6E88u;
    // 0x1d6e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6e8c: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x1d6e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_1d6e90:
    // 0x1d6e90: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d6e94: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d6e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d6e98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d6e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6e9c: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x1d6e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x1d6ea0: 0x24c65b50  addiu       $a2, $a2, 0x5B50
    ctx->pc = 0x1d6ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23376));
    // 0x1d6ea4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d6ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ea8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1d6ea8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6eac: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1d6eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1d6eb0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6eb4: 0x2442ff46  addiu       $v0, $v0, -0xBA
    ctx->pc = 0x1d6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967110));
    // 0x1d6eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6ebc: 0x0  nop
    ctx->pc = 0x1d6ebcu;
    // NOP
    // 0x1d6ec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6ec4: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x1d6ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x1d6ec8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6ecc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1d6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1d6ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6ed4: 0x0  nop
    ctx->pc = 0x1d6ed4u;
    // NOP
    // 0x1d6ed8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6edc: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x1d6edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x1d6ee0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6ee4: 0x2442ff76  addiu       $v0, $v0, -0x8A
    ctx->pc = 0x1d6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967158));
    // 0x1d6ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6eec: 0x0  nop
    ctx->pc = 0x1d6eecu;
    // NOP
    // 0x1d6ef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6ef4: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x1d6ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x1d6ef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6efc: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1d6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1d6f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6f04: 0x0  nop
    ctx->pc = 0x1d6f04u;
    // NOP
    // 0x1d6f08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6f0c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1D6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D6F14u);
    ctx->pc = 0x1D6F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F0Cu;
            // 0x1d6f10: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F14u; }
        if (ctx->pc != 0x1D6F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F14u; }
        if (ctx->pc != 0x1D6F14u) { return; }
    }
    ctx->pc = 0x1D6F14u;
    // 0x1d6f14: 0x0  nop
    ctx->pc = 0x1d6f14u;
    // NOP
label_1d6f18:
    // 0x1d6f18: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1d6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1d6f1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d6f20: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x1d6f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x1d6f24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d6f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6f28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d6f28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6f2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d6f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6f38: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F38u;
            // 0x1d6f3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6990u: goto label_1d6990;
            case 0x1D6998u: goto label_1d6998;
            case 0x1D6AF0u: goto label_1d6af0;
            case 0x1D6BE8u: goto label_1d6be8;
            case 0x1D6C28u: goto label_1d6c28;
            case 0x1D6C58u: goto label_1d6c58;
            case 0x1D6C88u: goto label_1d6c88;
            case 0x1D6CB8u: goto label_1d6cb8;
            case 0x1D6D78u: goto label_1d6d78;
            case 0x1D6E00u: goto label_1d6e00;
            case 0x1D6E20u: goto label_1d6e20;
            case 0x1D6E50u: goto label_1d6e50;
            case 0x1D6E58u: goto label_1d6e58;
            case 0x1D6E70u: goto label_1d6e70;
            case 0x1D6E80u: goto label_1d6e80;
            case 0x1D6E90u: goto label_1d6e90;
            case 0x1D6F18u: goto label_1d6f18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6F40u;
}
