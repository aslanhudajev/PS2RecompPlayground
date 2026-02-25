#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex1BossMove4
// Address: 0x1d62b0 - 0x1d68f8
void Stageex1BossMove4_0x1d62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex1BossMove4_0x1d62b0");
#endif

    ctx->pc = 0x1d62b0u;

    // 0x1d62b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d62b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d62b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d62b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d62b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d62b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d62bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d62bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d62c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d62c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d62c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d62c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d62c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d62cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d62ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d62d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d62d4: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1d62d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1d62d8: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1D62D8u;
    SET_GPR_U32(ctx, 31, 0x1D62E0u);
    ctx->pc = 0x1D62DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62D8u;
            // 0x1d62dc: 0xdc25ab00  ld          $a1, -0x5500($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D62E0u; }
        if (ctx->pc != 0x1D62E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D62E0u; }
        if (ctx->pc != 0x1D62E0u) { return; }
    }
    ctx->pc = 0x1D62E0u;
    // 0x1d62e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d62e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d62e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d62e8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1D62E8u;
    SET_GPR_U32(ctx, 31, 0x1D62F0u);
    ctx->pc = 0x1D62ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62E8u;
            // 0x1d62ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D62F0u; }
        if (ctx->pc != 0x1D62F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D62F0u; }
        if (ctx->pc != 0x1D62F0u) { return; }
    }
    ctx->pc = 0x1D62F0u;
    // 0x1d62f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d62f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d62f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62f8: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1D62F8u;
    SET_GPR_U32(ctx, 31, 0x1D6300u);
    ctx->pc = 0x1D62FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62F8u;
            // 0x1d62fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6300u; }
        if (ctx->pc != 0x1D6300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6300u; }
        if (ctx->pc != 0x1D6300u) { return; }
    }
    ctx->pc = 0x1D6300u;
    // 0x1d6300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6304: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d6304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6308: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1D6308u;
    SET_GPR_U32(ctx, 31, 0x1D6310u);
    ctx->pc = 0x1D630Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6308u;
            // 0x1d630c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6310u; }
        if (ctx->pc != 0x1D6310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6310u; }
        if (ctx->pc != 0x1D6310u) { return; }
    }
    ctx->pc = 0x1D6310u;
    // 0x1d6310: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x1d6310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1d6314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d631c: 0x106200b0  beq         $v1, $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1D631Cu;
    {
        const bool branch_taken_0x1d631c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d631c) {
            ctx->pc = 0x1D65E0u;
            goto label_1d65e0;
        }
    }
    ctx->pc = 0x1D6324u;
    // 0x1d6324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6328: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6328u;
    {
        const bool branch_taken_0x1d6328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d6328) {
            ctx->pc = 0x1D6350u;
            goto label_1d6350;
        }
    }
    ctx->pc = 0x1D6330u;
    // 0x1d6330: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6330u;
    {
        const bool branch_taken_0x1d6330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6330) {
            ctx->pc = 0x1D6340u;
            goto label_1d6340;
        }
    }
    ctx->pc = 0x1D6338u;
    // 0x1d6338: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1D6338u;
    {
        const bool branch_taken_0x1d6338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6338) {
            ctx->pc = 0x1D65E0u;
            goto label_1d65e0;
        }
    }
    ctx->pc = 0x1D6340u;
label_1d6340:
    // 0x1d6340: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x1d6340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d6344: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1D6344u;
    {
        const bool branch_taken_0x1d6344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6344u;
            // 0x1d6348: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6344) {
            ctx->pc = 0x1D65E0u;
            goto label_1d65e0;
        }
    }
    ctx->pc = 0x1D634Cu;
    // 0x1d634c: 0x0  nop
    ctx->pc = 0x1d634cu;
    // NOP
label_1d6350:
    // 0x1d6350: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d6350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d6354: 0x184000a2  blez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1D6354u;
    {
        const bool branch_taken_0x1d6354 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6354) {
            ctx->pc = 0x1D65E0u;
            goto label_1d65e0;
        }
    }
    ctx->pc = 0x1D635Cu;
    // 0x1d635c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1d635cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1d6360: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x1d6360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1d6364: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d6364u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d6368: 0x0  nop
    ctx->pc = 0x1d6368u;
    // NOP
    // 0x1d636c: 0x0  nop
    ctx->pc = 0x1d636cu;
    // NOP
    // 0x1d6370: 0x1010  mfhi        $v0
    ctx->pc = 0x1d6370u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d6374: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x1D6374u;
    {
        const bool branch_taken_0x1d6374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6374) {
            ctx->pc = 0x1D65E0u;
            goto label_1d65e0;
        }
    }
    ctx->pc = 0x1D637Cu;
    // 0x1d637c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1d637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6380: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d6380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d6384: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6388: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d6388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d638c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d638cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d6390: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1d6390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d6394: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d6394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6398: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d6398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d639c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1d639cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1d63a0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1d63a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d63a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d63a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d63a8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d63a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d63ac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d63acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d63b0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d63b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d63b4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d63b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d63b8: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D63B8u;
    SET_GPR_U32(ctx, 31, 0x1D63C0u);
    ctx->pc = 0x1D63BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63B8u;
            // 0x1d63bc: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D63C0u; }
        if (ctx->pc != 0x1D63C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D63C0u; }
        if (ctx->pc != 0x1D63C0u) { return; }
    }
    ctx->pc = 0x1D63C0u;
    // 0x1d63c0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d63c4: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x1d63c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1d63c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d63cc: 0x2463008a  addiu       $v1, $v1, 0x8A
    ctx->pc = 0x1d63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 138));
    // 0x1d63d0: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1d63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1d63d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d63d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d63d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d63d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d63dc: 0x0  nop
    ctx->pc = 0x1d63dcu;
    // NOP
    // 0x1d63e0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d63e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d63e4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1D63E4u;
    SET_GPR_U32(ctx, 31, 0x1D63ECu);
    ctx->pc = 0x1D63E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63E4u;
            // 0x1d63e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D63ECu; }
        if (ctx->pc != 0x1D63ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D63ECu; }
        if (ctx->pc != 0x1D63ECu) { return; }
    }
    ctx->pc = 0x1D63ECu;
    // 0x1d63ec: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d63f0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d63f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d63f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d63f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d63f8: 0x2464008a  addiu       $a0, $v1, 0x8A
    ctx->pc = 0x1d63f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 138));
    // 0x1d63fc: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D63FCu;
    SET_GPR_U32(ctx, 31, 0x1D6404u);
    ctx->pc = 0x1D6400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63FCu;
            // 0x1d6400: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6404u; }
        if (ctx->pc != 0x1D6404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6404u; }
        if (ctx->pc != 0x1D6404u) { return; }
    }
    ctx->pc = 0x1D6404u;
    // 0x1d6404: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d6408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d640c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6410: 0x24640096  addiu       $a0, $v1, 0x96
    ctx->pc = 0x1d6410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x1d6414: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D6414u;
    SET_GPR_U32(ctx, 31, 0x1D641Cu);
    ctx->pc = 0x1D6418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6414u;
            // 0x1d6418: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D641Cu; }
        if (ctx->pc != 0x1D641Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D641Cu; }
        if (ctx->pc != 0x1D641Cu) { return; }
    }
    ctx->pc = 0x1D641Cu;
    // 0x1d641c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6420: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x1d6420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x1d6424: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6428: 0x246400a2  addiu       $a0, $v1, 0xA2
    ctx->pc = 0x1d6428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 162));
    // 0x1d642c: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D642Cu;
    SET_GPR_U32(ctx, 31, 0x1D6434u);
    ctx->pc = 0x1D6430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D642Cu;
            // 0x1d6430: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6434u; }
        if (ctx->pc != 0x1D6434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6434u; }
        if (ctx->pc != 0x1D6434u) { return; }
    }
    ctx->pc = 0x1D6434u;
    // 0x1d6434: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D6434u;
    SET_GPR_U32(ctx, 31, 0x1D643Cu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D643Cu; }
        if (ctx->pc != 0x1D643Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D643Cu; }
        if (ctx->pc != 0x1D643Cu) { return; }
    }
    ctx->pc = 0x1D643Cu;
    // 0x1d643c: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D643Cu;
    {
        const bool branch_taken_0x1d643c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d643c) {
            ctx->pc = 0x1D64A8u;
            goto label_1d64a8;
        }
    }
    ctx->pc = 0x1D6444u;
    // 0x1d6444: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6448: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d6448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d644c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6450: 0x2464008a  addiu       $a0, $v1, 0x8A
    ctx->pc = 0x1d6450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 138));
    // 0x1d6454: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D6454u;
    SET_GPR_U32(ctx, 31, 0x1D645Cu);
    ctx->pc = 0x1D6458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6454u;
            // 0x1d6458: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D645Cu; }
        if (ctx->pc != 0x1D645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D645Cu; }
        if (ctx->pc != 0x1D645Cu) { return; }
    }
    ctx->pc = 0x1D645Cu;
    // 0x1d645c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6460: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1d6460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1d6464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6468: 0x246400a2  addiu       $a0, $v1, 0xA2
    ctx->pc = 0x1d6468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 162));
    // 0x1d646c: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D646Cu;
    SET_GPR_U32(ctx, 31, 0x1D6474u);
    ctx->pc = 0x1D6470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D646Cu;
            // 0x1d6470: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6474u; }
        if (ctx->pc != 0x1D6474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6474u; }
        if (ctx->pc != 0x1D6474u) { return; }
    }
    ctx->pc = 0x1D6474u;
    // 0x1d6474: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d6474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6478: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1d6478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d647c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6480: 0x2464008a  addiu       $a0, $v1, 0x8A
    ctx->pc = 0x1d6480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 138));
    // 0x1d6484: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D6484u;
    SET_GPR_U32(ctx, 31, 0x1D648Cu);
    ctx->pc = 0x1D6488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6484u;
            // 0x1d6488: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D648Cu; }
        if (ctx->pc != 0x1D648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D648Cu; }
        if (ctx->pc != 0x1D648Cu) { return; }
    }
    ctx->pc = 0x1D648Cu;
    // 0x1d648c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6490: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x1d6490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1d6494: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6498: 0x246400a2  addiu       $a0, $v1, 0xA2
    ctx->pc = 0x1d6498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 162));
    // 0x1d649c: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1D649Cu;
    SET_GPR_U32(ctx, 31, 0x1D64A4u);
    ctx->pc = 0x1D64A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D649Cu;
            // 0x1d64a0: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64A4u; }
        if (ctx->pc != 0x1D64A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64A4u; }
        if (ctx->pc != 0x1D64A4u) { return; }
    }
    ctx->pc = 0x1D64A4u;
    // 0x1d64a4: 0x0  nop
    ctx->pc = 0x1d64a4u;
    // NOP
label_1d64a8:
    // 0x1d64a8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D64A8u;
    SET_GPR_U32(ctx, 31, 0x1D64B0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64B0u; }
        if (ctx->pc != 0x1D64B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64B0u; }
        if (ctx->pc != 0x1D64B0u) { return; }
    }
    ctx->pc = 0x1D64B0u;
    // 0x1d64b0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d64b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d64b4: 0x1420003a  bnez        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D64B4u;
    {
        const bool branch_taken_0x1d64b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d64b4) {
            ctx->pc = 0x1D65A0u;
            goto label_1d65a0;
        }
    }
    ctx->pc = 0x1D64BCu;
    // 0x1d64bc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d64c0: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1d64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
    // 0x1d64c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d64c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d64c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d64cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d64ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d64d0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d64d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1d64d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d64d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d64d8: 0x2484008a  addiu       $a0, $a0, 0x8A
    ctx->pc = 0x1d64d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 138));
    // 0x1d64dc: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D64DCu;
    SET_GPR_U32(ctx, 31, 0x1D64E4u);
    ctx->pc = 0x1D64E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64DCu;
            // 0x1d64e0: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64E4u; }
        if (ctx->pc != 0x1D64E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64E4u; }
        if (ctx->pc != 0x1D64E4u) { return; }
    }
    ctx->pc = 0x1D64E4u;
    // 0x1d64e4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d64e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d64e8: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x1d64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x1d64ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d64ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d64f0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1d64f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1d64f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d64f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d64f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d64f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d64fc: 0x24840096  addiu       $a0, $a0, 0x96
    ctx->pc = 0x1d64fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 150));
    // 0x1d6500: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D6500u;
    SET_GPR_U32(ctx, 31, 0x1D6508u);
    ctx->pc = 0x1D6504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6500u;
            // 0x1d6504: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6508u; }
        if (ctx->pc != 0x1D6508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6508u; }
        if (ctx->pc != 0x1D6508u) { return; }
    }
    ctx->pc = 0x1D6508u;
    // 0x1d6508: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d6508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d650c: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1d650cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1d6510: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d6510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6514: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d6514u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d6518: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d6518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d651c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d651cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1d6520: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6524: 0x248400a2  addiu       $a0, $a0, 0xA2
    ctx->pc = 0x1d6524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 162));
    // 0x1d6528: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D6528u;
    SET_GPR_U32(ctx, 31, 0x1D6530u);
    ctx->pc = 0x1D652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6528u;
            // 0x1d652c: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6530u; }
        if (ctx->pc != 0x1D6530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6530u; }
        if (ctx->pc != 0x1D6530u) { return; }
    }
    ctx->pc = 0x1D6530u;
    // 0x1d6530: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d6530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6534: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1d6534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1d6538: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d6538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d653c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d653cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d6544: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6548: 0x2484008a  addiu       $a0, $a0, 0x8A
    ctx->pc = 0x1d6548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 138));
    // 0x1d654c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D654Cu;
    SET_GPR_U32(ctx, 31, 0x1D6554u);
    ctx->pc = 0x1D6550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D654Cu;
            // 0x1d6550: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6554u; }
        if (ctx->pc != 0x1D6554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6554u; }
        if (ctx->pc != 0x1D6554u) { return; }
    }
    ctx->pc = 0x1D6554u;
    // 0x1d6554: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d6554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6558: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1d6558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1d655c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6560: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1d6560u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1d6564: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6568: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d656c: 0x24840096  addiu       $a0, $a0, 0x96
    ctx->pc = 0x1d656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 150));
    // 0x1d6570: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D6570u;
    SET_GPR_U32(ctx, 31, 0x1D6578u);
    ctx->pc = 0x1D6574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6570u;
            // 0x1d6574: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6578u; }
        if (ctx->pc != 0x1D6578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6578u; }
        if (ctx->pc != 0x1D6578u) { return; }
    }
    ctx->pc = 0x1D6578u;
    // 0x1d6578: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d6578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d657c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d657cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1d6580: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6584: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d6584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d6588: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d658c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d658cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6590: 0x248400a2  addiu       $a0, $a0, 0xA2
    ctx->pc = 0x1d6590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 162));
    // 0x1d6594: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1D6594u;
    SET_GPR_U32(ctx, 31, 0x1D659Cu);
    ctx->pc = 0x1D6598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6594u;
            // 0x1d6598: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D659Cu; }
        if (ctx->pc != 0x1D659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D659Cu; }
        if (ctx->pc != 0x1D659Cu) { return; }
    }
    ctx->pc = 0x1D659Cu;
    // 0x1d659c: 0x0  nop
    ctx->pc = 0x1d659cu;
    // NOP
label_1d65a0:
    // 0x1d65a0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1d65a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d65a4: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x1d65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x1d65a8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1d65ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d65acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d65b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d65b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d65b4: 0xc4a30120  lwc1        $f3, 0x120($a1)
    ctx->pc = 0x1d65b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d65b8: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1d65b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d65bc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1d65bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1d65c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d65c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d65c4: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d65c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1d65c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d65c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d65cc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1d65ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d65d0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1d65d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1d65d4: 0xc071ec0  jal         func_1C7B00
    ctx->pc = 0x1D65D4u;
    SET_GPR_U32(ctx, 31, 0x1D65DCu);
    ctx->pc = 0x1D65D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65D4u;
            // 0x1d65d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B00u;
    if (runtime->hasFunction(0x1C7B00u)) {
        auto targetFn = runtime->lookupFunction(0x1C7B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D65DCu; }
        if (ctx->pc != 0x1D65DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex1_05_0x1c7b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D65DCu; }
        if (ctx->pc != 0x1D65DCu) { return; }
    }
    ctx->pc = 0x1D65DCu;
    // 0x1d65dc: 0x0  nop
    ctx->pc = 0x1d65dcu;
    // NOP
label_1d65e0:
    // 0x1d65e0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1d65e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d65e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d65e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d65e8: 0x0  nop
    ctx->pc = 0x1d65e8u;
    // NOP
    // 0x1d65ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d65ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d65f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D65F0u;
    {
        const bool branch_taken_0x1d65f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D65F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65F0u;
            // 0x1d65f4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65f0) {
            ctx->pc = 0x1D6610u;
            goto label_1d6610;
        }
    }
    ctx->pc = 0x1D65F8u;
    // 0x1d65f8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d65f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d65fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d65fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6600: 0x0  nop
    ctx->pc = 0x1d6600u;
    // NOP
    // 0x1d6604: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d6604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d6608: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1d6608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d660c: 0x0  nop
    ctx->pc = 0x1d660cu;
    // NOP
label_1d6610:
    // 0x1d6610: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1d6610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6618: 0x0  nop
    ctx->pc = 0x1d6618u;
    // NOP
    // 0x1d661c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d661cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6620: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6620u;
    {
        const bool branch_taken_0x1d6620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6620u;
            // 0x1d6624: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6620) {
            ctx->pc = 0x1D6640u;
            goto label_1d6640;
        }
    }
    ctx->pc = 0x1D6628u;
    // 0x1d6628: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d6628u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d662c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d662cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6630: 0x0  nop
    ctx->pc = 0x1d6630u;
    // NOP
    // 0x1d6634: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d6634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d6638: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1d6638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1d663c: 0x0  nop
    ctx->pc = 0x1d663cu;
    // NOP
label_1d6640:
    // 0x1d6640: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1d6640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6648: 0x0  nop
    ctx->pc = 0x1d6648u;
    // NOP
    // 0x1d664c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d664cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6650: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6650u;
    {
        const bool branch_taken_0x1d6650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6650u;
            // 0x1d6654: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6650) {
            ctx->pc = 0x1D6670u;
            goto label_1d6670;
        }
    }
    ctx->pc = 0x1D6658u;
    // 0x1d6658: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d6658u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d665c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d665cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6660: 0x0  nop
    ctx->pc = 0x1d6660u;
    // NOP
    // 0x1d6664: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d6664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d6668: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d6668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d666c: 0x0  nop
    ctx->pc = 0x1d666cu;
    // NOP
label_1d6670:
    // 0x1d6670: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d6670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d6674: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d6674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d6678: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d6678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d667c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d6680: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D6680u;
    SET_GPR_U32(ctx, 31, 0x1D6688u);
    ctx->pc = 0x1D6684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6680u;
            // 0x1d6684: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6688u; }
        if (ctx->pc != 0x1D6688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6688u; }
        if (ctx->pc != 0x1D6688u) { return; }
    }
    ctx->pc = 0x1D6688u;
    // 0x1d6688: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d668c: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x1d668cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x1d6690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6694: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x1d6694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x1d6698: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1D6698u;
    SET_GPR_U32(ctx, 31, 0x1D66A0u);
    ctx->pc = 0x1D669Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6698u;
            // 0x1d669c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66A0u; }
        if (ctx->pc != 0x1D66A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66A0u; }
        if (ctx->pc != 0x1D66A0u) { return; }
    }
    ctx->pc = 0x1D66A0u;
    // 0x1d66a0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d66a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d66a4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1d66a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d66a8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1D66A8u;
    SET_GPR_U32(ctx, 31, 0x1D66B0u);
    ctx->pc = 0x1D66ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66A8u;
            // 0x1d66ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66B0u; }
        if (ctx->pc != 0x1D66B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66B0u; }
        if (ctx->pc != 0x1D66B0u) { return; }
    }
    ctx->pc = 0x1D66B0u;
    // 0x1d66b0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d66b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d66b4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1d66b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d66b8: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1D66B8u;
    SET_GPR_U32(ctx, 31, 0x1D66C0u);
    ctx->pc = 0x1D66BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66B8u;
            // 0x1d66bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66C0u; }
        if (ctx->pc != 0x1D66C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66C0u; }
        if (ctx->pc != 0x1D66C0u) { return; }
    }
    ctx->pc = 0x1D66C0u;
    // 0x1d66c0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d66c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d66c4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1d66c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d66c8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1D66C8u;
    SET_GPR_U32(ctx, 31, 0x1D66D0u);
    ctx->pc = 0x1D66CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66C8u;
            // 0x1d66cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66D0u; }
        if (ctx->pc != 0x1D66D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66D0u; }
        if (ctx->pc != 0x1D66D0u) { return; }
    }
    ctx->pc = 0x1D66D0u;
    // 0x1d66d0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d66d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d66d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66d8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1D66D8u;
    SET_GPR_U32(ctx, 31, 0x1D66E0u);
    ctx->pc = 0x1D66DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66D8u;
            // 0x1d66dc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66E0u; }
        if (ctx->pc != 0x1D66E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66E0u; }
        if (ctx->pc != 0x1D66E0u) { return; }
    }
    ctx->pc = 0x1D66E0u;
    // 0x1d66e0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1d66e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d66e4: 0x1c60003c  bgtz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1D66E4u;
    {
        const bool branch_taken_0x1d66e4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d66e4) {
            ctx->pc = 0x1D67D8u;
            goto label_1d67d8;
        }
    }
    ctx->pc = 0x1D66ECu;
    // 0x1d66ec: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1d66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1d66f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d66f4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d66f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d66f8: 0x0  nop
    ctx->pc = 0x1d66f8u;
    // NOP
    // 0x1d66fc: 0x0  nop
    ctx->pc = 0x1d66fcu;
    // NOP
    // 0x1d6700: 0x1010  mfhi        $v0
    ctx->pc = 0x1d6700u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d6704: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D6704u;
    {
        const bool branch_taken_0x1d6704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6704) {
            ctx->pc = 0x1D6730u;
            goto label_1d6730;
        }
    }
    ctx->pc = 0x1D670Cu;
    // 0x1d670c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1d670cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d6710: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1d6710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1d6714: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1d6714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1d6718: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d671c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d671cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d6720: 0x248400ae  addiu       $a0, $a0, 0xAE
    ctx->pc = 0x1d6720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 174));
    // 0x1d6724: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1D6724u;
    SET_GPR_U32(ctx, 31, 0x1D672Cu);
    ctx->pc = 0x1D6728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6724u;
            // 0x1d6728: 0x24650078  addiu       $a1, $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D672Cu; }
        if (ctx->pc != 0x1D672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D672Cu; }
        if (ctx->pc != 0x1D672Cu) { return; }
    }
    ctx->pc = 0x1D672Cu;
    // 0x1d672c: 0x0  nop
    ctx->pc = 0x1d672cu;
    // NOP
label_1d6730:
    // 0x1d6730: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1d6730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1d6734: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d6734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6738: 0x1044001f  beq         $v0, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D6738u;
    {
        const bool branch_taken_0x1d6738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d6738) {
            ctx->pc = 0x1D67B8u;
            goto label_1d67b8;
        }
    }
    ctx->pc = 0x1D6740u;
    // 0x1d6740: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d6740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6744: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d6744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d6748: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x1d6748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x1d674c: 0x24c65b50  addiu       $a2, $a2, 0x5B50
    ctx->pc = 0x1d674cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23376));
    // 0x1d6750: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d6750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6754: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1d6754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6758: 0x2442008a  addiu       $v0, $v0, 0x8A
    ctx->pc = 0x1d6758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 138));
    // 0x1d675c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d675cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6760: 0x0  nop
    ctx->pc = 0x1d6760u;
    // NOP
    // 0x1d6764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6768: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x1d6768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x1d676c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6770: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1d6770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1d6774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6778: 0x0  nop
    ctx->pc = 0x1d6778u;
    // NOP
    // 0x1d677c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d677cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6780: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x1d6780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x1d6784: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d6784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d6788: 0x244200ba  addiu       $v0, $v0, 0xBA
    ctx->pc = 0x1d6788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 186));
    // 0x1d678c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d678cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6790: 0x0  nop
    ctx->pc = 0x1d6790u;
    // NOP
    // 0x1d6794: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6798: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x1d6798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x1d679c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d67a0: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1d67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1d67a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d67a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d67a8: 0x0  nop
    ctx->pc = 0x1d67a8u;
    // NOP
    // 0x1d67ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d67acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d67b0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1D67B0u;
    SET_GPR_U32(ctx, 31, 0x1D67B8u);
    ctx->pc = 0x1D67B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67B0u;
            // 0x1d67b4: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67B8u; }
        if (ctx->pc != 0x1D67B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67B8u; }
        if (ctx->pc != 0x1D67B8u) { return; }
    }
    ctx->pc = 0x1D67B8u;
label_1d67b8:
    // 0x1d67b8: 0x8e620120  lw          $v0, 0x120($s3)
    ctx->pc = 0x1d67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x1d67bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d67c0: 0xae620120  sw          $v0, 0x120($s3)
    ctx->pc = 0x1d67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 2));
    // 0x1d67c4: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x1d67c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x1d67c8: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1D67C8u;
    SET_GPR_U32(ctx, 31, 0x1D67D0u);
    ctx->pc = 0x1D67CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67C8u;
            // 0x1d67cc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67D0u; }
        if (ctx->pc != 0x1D67D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67D0u; }
        if (ctx->pc != 0x1D67D0u) { return; }
    }
    ctx->pc = 0x1D67D0u;
    // 0x1d67d0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1D67D0u;
    {
        const bool branch_taken_0x1d67d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67D0u;
            // 0x1d67d4: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67d0) {
            ctx->pc = 0x1D68D0u;
            goto label_1d68d0;
        }
    }
    ctx->pc = 0x1D67D8u;
label_1d67d8:
    // 0x1d67d8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1d67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1d67dc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1d67dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d67e0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D67E0u;
    {
        const bool branch_taken_0x1d67e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d67e0) {
            ctx->pc = 0x1D6838u;
            goto label_1d6838;
        }
    }
    ctx->pc = 0x1D67E8u;
    // 0x1d67e8: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1d67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x1d67ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D67ECu;
    {
        const bool branch_taken_0x1d67ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d67ec) {
            ctx->pc = 0x1D6808u;
            goto label_1d6808;
        }
    }
    ctx->pc = 0x1D67F4u;
    // 0x1d67f4: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1D67F4u;
    SET_GPR_U32(ctx, 31, 0x1D67FCu);
    ctx->pc = 0x1D67F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67F4u;
            // 0x1d67f8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67FCu; }
        if (ctx->pc != 0x1D67FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67FCu; }
        if (ctx->pc != 0x1D67FCu) { return; }
    }
    ctx->pc = 0x1D67FCu;
    // 0x1d67fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D67FCu;
    {
        const bool branch_taken_0x1d67fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d67fc) {
            ctx->pc = 0x1D6810u;
            goto label_1d6810;
        }
    }
    ctx->pc = 0x1D6804u;
    // 0x1d6804: 0x0  nop
    ctx->pc = 0x1d6804u;
    // NOP
label_1d6808:
    // 0x1d6808: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1D6808u;
    SET_GPR_U32(ctx, 31, 0x1D6810u);
    ctx->pc = 0x1D680Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6808u;
            // 0x1d680c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6810u; }
        if (ctx->pc != 0x1D6810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6810u; }
        if (ctx->pc != 0x1D6810u) { return; }
    }
    ctx->pc = 0x1D6810u;
label_1d6810:
    // 0x1d6810: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1d6810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x1d6814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6814u;
    {
        const bool branch_taken_0x1d6814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6814) {
            ctx->pc = 0x1D6828u;
            goto label_1d6828;
        }
    }
    ctx->pc = 0x1D681Cu;
    // 0x1d681c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D681Cu;
    {
        const bool branch_taken_0x1d681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D681Cu;
            // 0x1d6820: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d681c) {
            ctx->pc = 0x1D6848u;
            goto label_1d6848;
        }
    }
    ctx->pc = 0x1D6824u;
    // 0x1d6824: 0x0  nop
    ctx->pc = 0x1d6824u;
    // NOP
label_1d6828:
    // 0x1d6828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d682c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D682Cu;
    {
        const bool branch_taken_0x1d682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D682Cu;
            // 0x1d6830: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d682c) {
            ctx->pc = 0x1D6848u;
            goto label_1d6848;
        }
    }
    ctx->pc = 0x1D6834u;
    // 0x1d6834: 0x0  nop
    ctx->pc = 0x1d6834u;
    // NOP
label_1d6838:
    // 0x1d6838: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1D6838u;
    SET_GPR_U32(ctx, 31, 0x1D6840u);
    ctx->pc = 0x1D683Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6838u;
            // 0x1d683c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6840u; }
        if (ctx->pc != 0x1D6840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6840u; }
        if (ctx->pc != 0x1D6840u) { return; }
    }
    ctx->pc = 0x1D6840u;
    // 0x1d6840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6844: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x1d6844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_1d6848:
    // 0x1d6848: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d6848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d684c: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d684cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d6850: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d6850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6854: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x1d6854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x1d6858: 0x24c65b50  addiu       $a2, $a2, 0x5B50
    ctx->pc = 0x1d6858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23376));
    // 0x1d685c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d685cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6860: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1d6860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6864: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1d6864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1d6868: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d6868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d686c: 0x2442008a  addiu       $v0, $v0, 0x8A
    ctx->pc = 0x1d686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 138));
    // 0x1d6870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6874: 0x0  nop
    ctx->pc = 0x1d6874u;
    // NOP
    // 0x1d6878: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d687c: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x1d687cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x1d6880: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d6880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d6884: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1d6884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1d6888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d688c: 0x0  nop
    ctx->pc = 0x1d688cu;
    // NOP
    // 0x1d6890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d6894: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x1d6894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x1d6898: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d6898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d689c: 0x244200ba  addiu       $v0, $v0, 0xBA
    ctx->pc = 0x1d689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 186));
    // 0x1d68a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d68a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d68a4: 0x0  nop
    ctx->pc = 0x1d68a4u;
    // NOP
    // 0x1d68a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d68a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d68ac: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x1d68acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x1d68b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d68b4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1d68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1d68b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d68b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d68bc: 0x0  nop
    ctx->pc = 0x1d68bcu;
    // NOP
    // 0x1d68c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d68c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d68c4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1D68C4u;
    SET_GPR_U32(ctx, 31, 0x1D68CCu);
    ctx->pc = 0x1D68C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68C4u;
            // 0x1d68c8: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D68CCu; }
        if (ctx->pc != 0x1D68CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D68CCu; }
        if (ctx->pc != 0x1D68CCu) { return; }
    }
    ctx->pc = 0x1D68CCu;
    // 0x1d68cc: 0x0  nop
    ctx->pc = 0x1d68ccu;
    // NOP
label_1d68d0:
    // 0x1d68d0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1d68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1d68d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d68d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d68d8: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x1d68d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x1d68dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d68dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d68e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d68e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d68e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d68e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d68e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d68e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d68ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d68ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d68f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D68F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D68F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68F0u;
            // 0x1d68f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6340u: goto label_1d6340;
            case 0x1D6350u: goto label_1d6350;
            case 0x1D64A8u: goto label_1d64a8;
            case 0x1D65A0u: goto label_1d65a0;
            case 0x1D65E0u: goto label_1d65e0;
            case 0x1D6610u: goto label_1d6610;
            case 0x1D6640u: goto label_1d6640;
            case 0x1D6670u: goto label_1d6670;
            case 0x1D6730u: goto label_1d6730;
            case 0x1D67B8u: goto label_1d67b8;
            case 0x1D67D8u: goto label_1d67d8;
            case 0x1D6808u: goto label_1d6808;
            case 0x1D6810u: goto label_1d6810;
            case 0x1D6828u: goto label_1d6828;
            case 0x1D6838u: goto label_1d6838;
            case 0x1D6848u: goto label_1d6848;
            case 0x1D68D0u: goto label_1d68d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D68F8u;
}
