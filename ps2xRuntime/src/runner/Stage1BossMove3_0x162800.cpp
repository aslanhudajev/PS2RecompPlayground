#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1BossMove3
// Address: 0x162800 - 0x162e38
void Stage1BossMove3_0x162800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1BossMove3_0x162800");
#endif

    ctx->pc = 0x162800u;

    // 0x162800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x162800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x162804: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x162804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x162808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x162808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16280c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16280cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x162810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x162814: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x162814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16281c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162820: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x162820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x162824: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x162824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x162828: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x162828u;
    SET_GPR_U32(ctx, 31, 0x162830u);
    ctx->pc = 0x16282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162828u;
            // 0x16282c: 0xdc259d58  ld          $a1, -0x62A8($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294942040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162830u; }
        if (ctx->pc != 0x162830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162830u; }
        if (ctx->pc != 0x162830u) { return; }
    }
    ctx->pc = 0x162830u;
    // 0x162830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162838: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x162838u;
    SET_GPR_U32(ctx, 31, 0x162840u);
    ctx->pc = 0x16283Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162838u;
            // 0x16283c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162840u; }
        if (ctx->pc != 0x162840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162840u; }
        if (ctx->pc != 0x162840u) { return; }
    }
    ctx->pc = 0x162840u;
    // 0x162840: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x162840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162848: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x162848u;
    SET_GPR_U32(ctx, 31, 0x162850u);
    ctx->pc = 0x16284Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162848u;
            // 0x16284c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162850u; }
        if (ctx->pc != 0x162850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162850u; }
        if (ctx->pc != 0x162850u) { return; }
    }
    ctx->pc = 0x162850u;
    // 0x162850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162854: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162858: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x162858u;
    SET_GPR_U32(ctx, 31, 0x162860u);
    ctx->pc = 0x16285Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162858u;
            // 0x16285c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162860u; }
        if (ctx->pc != 0x162860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162860u; }
        if (ctx->pc != 0x162860u) { return; }
    }
    ctx->pc = 0x162860u;
    // 0x162860: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x162860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x162864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162868: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16286c: 0x106200aa  beq         $v1, $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x16286Cu;
    {
        const bool branch_taken_0x16286c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16286c) {
            ctx->pc = 0x162B18u;
            goto label_162b18;
        }
    }
    ctx->pc = 0x162874u;
    // 0x162874: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162878: 0x106200a7  beq         $v1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x162878u;
    {
        const bool branch_taken_0x162878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16287Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162878u;
            // 0x16287c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162878) {
            ctx->pc = 0x162B18u;
            goto label_162b18;
        }
    }
    ctx->pc = 0x162880u;
    // 0x162880: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x162880u;
    {
        const bool branch_taken_0x162880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162880) {
            ctx->pc = 0x1628A0u;
            goto label_1628a0;
        }
    }
    ctx->pc = 0x162888u;
    // 0x162888: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162888u;
    {
        const bool branch_taken_0x162888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162888) {
            ctx->pc = 0x162898u;
            goto label_162898;
        }
    }
    ctx->pc = 0x162890u;
    // 0x162890: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x162890u;
    {
        const bool branch_taken_0x162890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162890) {
            ctx->pc = 0x162B18u;
            goto label_162b18;
        }
    }
    ctx->pc = 0x162898u;
label_162898:
    // 0x162898: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x162898u;
    {
        const bool branch_taken_0x162898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162898u;
            // 0x16289c: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162898) {
            ctx->pc = 0x162B18u;
            goto label_162b18;
        }
    }
    ctx->pc = 0x1628A0u;
label_1628a0:
    // 0x1628a0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1628a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1628a4: 0x1840009c  blez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x1628A4u;
    {
        const bool branch_taken_0x1628a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1628a4) {
            ctx->pc = 0x162B18u;
            goto label_162b18;
        }
    }
    ctx->pc = 0x1628ACu;
    // 0x1628ac: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1628acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1628b0: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x1628b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1628b4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1628b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1628b8: 0x0  nop
    ctx->pc = 0x1628b8u;
    // NOP
    // 0x1628bc: 0x0  nop
    ctx->pc = 0x1628bcu;
    // NOP
    // 0x1628c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1628c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1628c4: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x1628C4u;
    {
        const bool branch_taken_0x1628c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1628c4) {
            ctx->pc = 0x162B18u;
            goto label_162b18;
        }
    }
    ctx->pc = 0x1628CCu;
    // 0x1628cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1628ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1628d0: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1628d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1628d4: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1628d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1628d8: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1628d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1628dc: 0xc059a4c  jal         func_166930
    ctx->pc = 0x1628DCu;
    SET_GPR_U32(ctx, 31, 0x1628E4u);
    ctx->pc = 0x1628E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1628DCu;
            // 0x1628e0: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628E4u; }
        if (ctx->pc != 0x1628E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628E4u; }
        if (ctx->pc != 0x1628E4u) { return; }
    }
    ctx->pc = 0x1628E4u;
    // 0x1628e4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1628e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1628e8: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x1628e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1628ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1628ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1628f0: 0x2463ff52  addiu       $v1, $v1, -0xAE
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967122));
    // 0x1628f4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1628f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1628f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1628f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1628fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1628fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162900: 0x0  nop
    ctx->pc = 0x162900u;
    // NOP
    // 0x162904: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x162904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x162908: 0xc05d080  jal         func_174200
    ctx->pc = 0x162908u;
    SET_GPR_U32(ctx, 31, 0x162910u);
    ctx->pc = 0x16290Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162908u;
            // 0x16290c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162910u; }
        if (ctx->pc != 0x162910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162910u; }
        if (ctx->pc != 0x162910u) { return; }
    }
    ctx->pc = 0x162910u;
    // 0x162910: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162914: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x162914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x162918: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16291c: 0x2464ff76  addiu       $a0, $v1, -0x8A
    ctx->pc = 0x16291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967158));
    // 0x162920: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162920u;
    SET_GPR_U32(ctx, 31, 0x162928u);
    ctx->pc = 0x162924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162920u;
            // 0x162924: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162928u; }
        if (ctx->pc != 0x162928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162928u; }
        if (ctx->pc != 0x162928u) { return; }
    }
    ctx->pc = 0x162928u;
    // 0x162928: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16292c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16292cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162930: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162934: 0x2464ff6a  addiu       $a0, $v1, -0x96
    ctx->pc = 0x162934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967146));
    // 0x162938: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162938u;
    SET_GPR_U32(ctx, 31, 0x162940u);
    ctx->pc = 0x16293Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162938u;
            // 0x16293c: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162940u; }
        if (ctx->pc != 0x162940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162940u; }
        if (ctx->pc != 0x162940u) { return; }
    }
    ctx->pc = 0x162940u;
    // 0x162940: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162944: 0x24060073  addiu       $a2, $zero, 0x73
    ctx->pc = 0x162944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x162948: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16294c: 0x2464ff5e  addiu       $a0, $v1, -0xA2
    ctx->pc = 0x16294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967134));
    // 0x162950: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162950u;
    SET_GPR_U32(ctx, 31, 0x162958u);
    ctx->pc = 0x162954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162950u;
            // 0x162954: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162958u; }
        if (ctx->pc != 0x162958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162958u; }
        if (ctx->pc != 0x162958u) { return; }
    }
    ctx->pc = 0x162958u;
    // 0x162958: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16295c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x16295cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x162960: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162964: 0x2464ff76  addiu       $a0, $v1, -0x8A
    ctx->pc = 0x162964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967158));
    // 0x162968: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162968u;
    SET_GPR_U32(ctx, 31, 0x162970u);
    ctx->pc = 0x16296Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162968u;
            // 0x16296c: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162970u; }
        if (ctx->pc != 0x162970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162970u; }
        if (ctx->pc != 0x162970u) { return; }
    }
    ctx->pc = 0x162970u;
    // 0x162970: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162974: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x162974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x162978: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16297c: 0x2464ff5e  addiu       $a0, $v1, -0xA2
    ctx->pc = 0x16297cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967134));
    // 0x162980: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162980u;
    SET_GPR_U32(ctx, 31, 0x162988u);
    ctx->pc = 0x162984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162980u;
            // 0x162984: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162988u; }
        if (ctx->pc != 0x162988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162988u; }
        if (ctx->pc != 0x162988u) { return; }
    }
    ctx->pc = 0x162988u;
    // 0x162988: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x162988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16298c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x16298cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x162990: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162994: 0x2464ff76  addiu       $a0, $v1, -0x8A
    ctx->pc = 0x162994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967158));
    // 0x162998: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x162998u;
    SET_GPR_U32(ctx, 31, 0x1629A0u);
    ctx->pc = 0x16299Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162998u;
            // 0x16299c: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629A0u; }
        if (ctx->pc != 0x1629A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629A0u; }
        if (ctx->pc != 0x1629A0u) { return; }
    }
    ctx->pc = 0x1629A0u;
    // 0x1629a0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1629a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1629a4: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x1629a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1629a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1629a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1629ac: 0x2464ff5e  addiu       $a0, $v1, -0xA2
    ctx->pc = 0x1629acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967134));
    // 0x1629b0: 0xc0652b4  jal         func_194AD0
    ctx->pc = 0x1629B0u;
    SET_GPR_U32(ctx, 31, 0x1629B8u);
    ctx->pc = 0x1629B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1629B0u;
            // 0x1629b4: 0x244500b4  addiu       $a1, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629B8u; }
        if (ctx->pc != 0x1629B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629B8u; }
        if (ctx->pc != 0x1629B8u) { return; }
    }
    ctx->pc = 0x1629B8u;
    // 0x1629b8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1629b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1629bc: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1629bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
    // 0x1629c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1629c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1629c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1629c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1629c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1629c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1629cc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1629ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1629d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1629d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1629d4: 0x2484ff76  addiu       $a0, $a0, -0x8A
    ctx->pc = 0x1629d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967158));
    // 0x1629d8: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1629D8u;
    SET_GPR_U32(ctx, 31, 0x1629E0u);
    ctx->pc = 0x1629DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1629D8u;
            // 0x1629dc: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629E0u; }
        if (ctx->pc != 0x1629E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629E0u; }
        if (ctx->pc != 0x1629E0u) { return; }
    }
    ctx->pc = 0x1629E0u;
    // 0x1629e0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1629e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1629e4: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1629e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x1629e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1629e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1629ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1629ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1629f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1629f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1629f4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1629f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1629f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1629f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1629fc: 0x2484ff5e  addiu       $a0, $a0, -0xA2
    ctx->pc = 0x1629fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967134));
    // 0x162a00: 0xc0655dc  jal         func_195770
    ctx->pc = 0x162A00u;
    SET_GPR_U32(ctx, 31, 0x162A08u);
    ctx->pc = 0x162A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A00u;
            // 0x162a04: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A08u; }
        if (ctx->pc != 0x162A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A08u; }
        if (ctx->pc != 0x162A08u) { return; }
    }
    ctx->pc = 0x162A08u;
    // 0x162a08: 0xc065d00  jal         func_197400
    ctx->pc = 0x162A08u;
    SET_GPR_U32(ctx, 31, 0x162A10u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A10u; }
        if (ctx->pc != 0x162A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A10u; }
        if (ctx->pc != 0x162A10u) { return; }
    }
    ctx->pc = 0x162A10u;
    // 0x162a10: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x162A10u;
    {
        const bool branch_taken_0x162a10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x162a10) {
            ctx->pc = 0x162A60u;
            goto label_162a60;
        }
    }
    ctx->pc = 0x162A18u;
    // 0x162a18: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x162a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162a1c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x162a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x162a20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x162a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162a24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162a28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x162a2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x162a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162a30: 0x2484ff76  addiu       $a0, $a0, -0x8A
    ctx->pc = 0x162a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967158));
    // 0x162a34: 0xc0655dc  jal         func_195770
    ctx->pc = 0x162A34u;
    SET_GPR_U32(ctx, 31, 0x162A3Cu);
    ctx->pc = 0x162A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A34u;
            // 0x162a38: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A3Cu; }
        if (ctx->pc != 0x162A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A3Cu; }
        if (ctx->pc != 0x162A3Cu) { return; }
    }
    ctx->pc = 0x162A3Cu;
    // 0x162a3c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x162a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162a40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x162a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x162a44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x162a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162a48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162a4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x162a50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x162a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162a54: 0x2484ff5e  addiu       $a0, $a0, -0xA2
    ctx->pc = 0x162a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967134));
    // 0x162a58: 0xc0655dc  jal         func_195770
    ctx->pc = 0x162A58u;
    SET_GPR_U32(ctx, 31, 0x162A60u);
    ctx->pc = 0x162A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A58u;
            // 0x162a5c: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A60u; }
        if (ctx->pc != 0x162A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A60u; }
        if (ctx->pc != 0x162A60u) { return; }
    }
    ctx->pc = 0x162A60u;
label_162a60:
    // 0x162a60: 0xc065d00  jal         func_197400
    ctx->pc = 0x162A60u;
    SET_GPR_U32(ctx, 31, 0x162A68u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A68u; }
        if (ctx->pc != 0x162A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A68u; }
        if (ctx->pc != 0x162A68u) { return; }
    }
    ctx->pc = 0x162A68u;
    // 0x162a68: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x162a68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x162a6c: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x162A6Cu;
    {
        const bool branch_taken_0x162a6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x162a6c) {
            ctx->pc = 0x162B18u;
            goto label_162b18;
        }
    }
    ctx->pc = 0x162A74u;
    // 0x162a74: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x162a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162a78: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x162a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
    // 0x162a7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x162a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162a80: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162a80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x162a84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162a88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x162a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x162a8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x162a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162a90: 0x2484ff76  addiu       $a0, $a0, -0x8A
    ctx->pc = 0x162a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967158));
    // 0x162a94: 0xc0655dc  jal         func_195770
    ctx->pc = 0x162A94u;
    SET_GPR_U32(ctx, 31, 0x162A9Cu);
    ctx->pc = 0x162A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A94u;
            // 0x162a98: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A9Cu; }
        if (ctx->pc != 0x162A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A9Cu; }
        if (ctx->pc != 0x162A9Cu) { return; }
    }
    ctx->pc = 0x162A9Cu;
    // 0x162a9c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x162a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162aa0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x162aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x162aa4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x162aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162aa8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162aa8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x162aac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162ab0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x162ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x162ab4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x162ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162ab8: 0x2484ff5e  addiu       $a0, $a0, -0xA2
    ctx->pc = 0x162ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967134));
    // 0x162abc: 0xc0655dc  jal         func_195770
    ctx->pc = 0x162ABCu;
    SET_GPR_U32(ctx, 31, 0x162AC4u);
    ctx->pc = 0x162AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162ABCu;
            // 0x162ac0: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AC4u; }
        if (ctx->pc != 0x162AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AC4u; }
        if (ctx->pc != 0x162AC4u) { return; }
    }
    ctx->pc = 0x162AC4u;
    // 0x162ac4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x162ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162ac8: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x162ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x162acc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x162accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162ad0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162ad0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x162ad4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162ad8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x162ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x162adc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x162adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162ae0: 0x2484ff76  addiu       $a0, $a0, -0x8A
    ctx->pc = 0x162ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967158));
    // 0x162ae4: 0xc0655dc  jal         func_195770
    ctx->pc = 0x162AE4u;
    SET_GPR_U32(ctx, 31, 0x162AECu);
    ctx->pc = 0x162AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162AE4u;
            // 0x162ae8: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AECu; }
        if (ctx->pc != 0x162AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AECu; }
        if (ctx->pc != 0x162AECu) { return; }
    }
    ctx->pc = 0x162AECu;
    // 0x162aec: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x162aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162af0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x162af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x162af4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x162af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162af8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162af8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x162afc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x162afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162b00: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x162b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x162b04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x162b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162b08: 0x2484ff5e  addiu       $a0, $a0, -0xA2
    ctx->pc = 0x162b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967134));
    // 0x162b0c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x162B0Cu;
    SET_GPR_U32(ctx, 31, 0x162B14u);
    ctx->pc = 0x162B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B0Cu;
            // 0x162b10: 0x246500b4  addiu       $a1, $v1, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B14u; }
        if (ctx->pc != 0x162B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B14u; }
        if (ctx->pc != 0x162B14u) { return; }
    }
    ctx->pc = 0x162B14u;
    // 0x162b14: 0x0  nop
    ctx->pc = 0x162b14u;
    // NOP
label_162b18:
    // 0x162b18: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x162b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162b1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162b1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b20: 0x0  nop
    ctx->pc = 0x162b20u;
    // NOP
    // 0x162b24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162b28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x162B28u;
    {
        const bool branch_taken_0x162b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B28u;
            // 0x162b2c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b28) {
            ctx->pc = 0x162B48u;
            goto label_162b48;
        }
    }
    ctx->pc = 0x162B30u;
    // 0x162b30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162b30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x162b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b38: 0x0  nop
    ctx->pc = 0x162b38u;
    // NOP
    // 0x162b3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162b40: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x162b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x162b44: 0x0  nop
    ctx->pc = 0x162b44u;
    // NOP
label_162b48:
    // 0x162b48: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x162b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162b4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162b4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b50: 0x0  nop
    ctx->pc = 0x162b50u;
    // NOP
    // 0x162b54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162b58: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x162B58u;
    {
        const bool branch_taken_0x162b58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B58u;
            // 0x162b5c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b58) {
            ctx->pc = 0x162B78u;
            goto label_162b78;
        }
    }
    ctx->pc = 0x162B60u;
    // 0x162b60: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162b60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x162b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b68: 0x0  nop
    ctx->pc = 0x162b68u;
    // NOP
    // 0x162b6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162b70: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x162b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x162b74: 0x0  nop
    ctx->pc = 0x162b74u;
    // NOP
label_162b78:
    // 0x162b78: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x162b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b80: 0x0  nop
    ctx->pc = 0x162b80u;
    // NOP
    // 0x162b84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162b88: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x162B88u;
    {
        const bool branch_taken_0x162b88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B88u;
            // 0x162b8c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b88) {
            ctx->pc = 0x162BA8u;
            goto label_162ba8;
        }
    }
    ctx->pc = 0x162B90u;
    // 0x162b90: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162b90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x162b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162b98: 0x0  nop
    ctx->pc = 0x162b98u;
    // NOP
    // 0x162b9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162ba0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x162ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x162ba4: 0x0  nop
    ctx->pc = 0x162ba4u;
    // NOP
label_162ba8:
    // 0x162ba8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x162ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x162bac: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x162bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x162bb0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x162bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x162bb4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x162bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x162bb8: 0xc059a4c  jal         func_166930
    ctx->pc = 0x162BB8u;
    SET_GPR_U32(ctx, 31, 0x162BC0u);
    ctx->pc = 0x162BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162BB8u;
            // 0x162bbc: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BC0u; }
        if (ctx->pc != 0x162BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BC0u; }
        if (ctx->pc != 0x162BC0u) { return; }
    }
    ctx->pc = 0x162BC0u;
    // 0x162bc0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x162bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162bc4: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x162bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x162bc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162bcc: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x162bccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x162bd0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x162BD0u;
    SET_GPR_U32(ctx, 31, 0x162BD8u);
    ctx->pc = 0x162BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162BD0u;
            // 0x162bd4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BD8u; }
        if (ctx->pc != 0x162BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BD8u; }
        if (ctx->pc != 0x162BD8u) { return; }
    }
    ctx->pc = 0x162BD8u;
    // 0x162bd8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x162bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x162bdc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x162bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x162be0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x162BE0u;
    SET_GPR_U32(ctx, 31, 0x162BE8u);
    ctx->pc = 0x162BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162BE0u;
            // 0x162be4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BE8u; }
        if (ctx->pc != 0x162BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BE8u; }
        if (ctx->pc != 0x162BE8u) { return; }
    }
    ctx->pc = 0x162BE8u;
    // 0x162be8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x162be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x162bec: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x162becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x162bf0: 0xc04b804  jal         func_12E010
    ctx->pc = 0x162BF0u;
    SET_GPR_U32(ctx, 31, 0x162BF8u);
    ctx->pc = 0x162BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162BF0u;
            // 0x162bf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BF8u; }
        if (ctx->pc != 0x162BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BF8u; }
        if (ctx->pc != 0x162BF8u) { return; }
    }
    ctx->pc = 0x162BF8u;
    // 0x162bf8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x162bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x162bfc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x162bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x162c00: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x162C00u;
    SET_GPR_U32(ctx, 31, 0x162C08u);
    ctx->pc = 0x162C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C00u;
            // 0x162c04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C08u; }
        if (ctx->pc != 0x162C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C08u; }
        if (ctx->pc != 0x162C08u) { return; }
    }
    ctx->pc = 0x162C08u;
    // 0x162c08: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x162c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x162c0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x162c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c10: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x162C10u;
    SET_GPR_U32(ctx, 31, 0x162C18u);
    ctx->pc = 0x162C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C10u;
            // 0x162c14: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C18u; }
        if (ctx->pc != 0x162C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C18u; }
        if (ctx->pc != 0x162C18u) { return; }
    }
    ctx->pc = 0x162C18u;
    // 0x162c18: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x162c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x162c1c: 0x1c60003e  bgtz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x162C1Cu;
    {
        const bool branch_taken_0x162c1c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x162c1c) {
            ctx->pc = 0x162D18u;
            goto label_162d18;
        }
    }
    ctx->pc = 0x162C24u;
    // 0x162c24: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x162c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x162c28: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x162c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x162c2c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x162c2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x162c30: 0x0  nop
    ctx->pc = 0x162c30u;
    // NOP
    // 0x162c34: 0x0  nop
    ctx->pc = 0x162c34u;
    // NOP
    // 0x162c38: 0x1010  mfhi        $v0
    ctx->pc = 0x162c38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x162c3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x162C3Cu;
    {
        const bool branch_taken_0x162c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162c3c) {
            ctx->pc = 0x162C68u;
            goto label_162c68;
        }
    }
    ctx->pc = 0x162C44u;
    // 0x162c44: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x162c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x162c48: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x162c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x162c4c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x162c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x162c50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x162c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162c54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x162c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162c58: 0x2484ff52  addiu       $a0, $a0, -0xAE
    ctx->pc = 0x162c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967122));
    // 0x162c5c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x162C5Cu;
    SET_GPR_U32(ctx, 31, 0x162C64u);
    ctx->pc = 0x162C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C5Cu;
            // 0x162c60: 0x24650078  addiu       $a1, $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C64u; }
        if (ctx->pc != 0x162C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C64u; }
        if (ctx->pc != 0x162C64u) { return; }
    }
    ctx->pc = 0x162C64u;
    // 0x162c64: 0x0  nop
    ctx->pc = 0x162c64u;
    // NOP
label_162c68:
    // 0x162c68: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x162c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x162c6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x162c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162c70: 0x10440021  beq         $v0, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x162C70u;
    {
        const bool branch_taken_0x162c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x162c70) {
            ctx->pc = 0x162CF8u;
            goto label_162cf8;
        }
    }
    ctx->pc = 0x162C78u;
    // 0x162c78: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x162c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162c7c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x162c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x162c80: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x162c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x162c84: 0x24c61a30  addiu       $a2, $a2, 0x1A30
    ctx->pc = 0x162c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6704));
    // 0x162c88: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x162c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c8c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x162c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c90: 0x2442ff46  addiu       $v0, $v0, -0xBA
    ctx->pc = 0x162c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967110));
    // 0x162c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162c98: 0x0  nop
    ctx->pc = 0x162c98u;
    // NOP
    // 0x162c9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162ca0: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x162ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x162ca4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162ca8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x162ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x162cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162cb0: 0x0  nop
    ctx->pc = 0x162cb0u;
    // NOP
    // 0x162cb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162cb8: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x162cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x162cbc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x162cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162cc0: 0x2442ff76  addiu       $v0, $v0, -0x8A
    ctx->pc = 0x162cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967158));
    // 0x162cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162cc8: 0x0  nop
    ctx->pc = 0x162cc8u;
    // NOP
    // 0x162ccc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162cd0: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x162cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x162cd4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162cd8: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x162cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x162cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162ce0: 0x0  nop
    ctx->pc = 0x162ce0u;
    // NOP
    // 0x162ce4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162ce8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x162CE8u;
    SET_GPR_U32(ctx, 31, 0x162CF0u);
    ctx->pc = 0x162CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162CE8u;
            // 0x162cec: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CF0u; }
        if (ctx->pc != 0x162CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CF0u; }
        if (ctx->pc != 0x162CF0u) { return; }
    }
    ctx->pc = 0x162CF0u;
    // 0x162cf0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x162CF0u;
    SET_GPR_U32(ctx, 31, 0x162CF8u);
    ctx->pc = 0x162CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162CF0u;
            // 0x162cf4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CF8u; }
        if (ctx->pc != 0x162CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CF8u; }
        if (ctx->pc != 0x162CF8u) { return; }
    }
    ctx->pc = 0x162CF8u;
label_162cf8:
    // 0x162cf8: 0x8e620120  lw          $v0, 0x120($s3)
    ctx->pc = 0x162cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x162cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x162cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x162d00: 0xae620120  sw          $v0, 0x120($s3)
    ctx->pc = 0x162d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 2));
    // 0x162d04: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x162d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x162d08: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x162D08u;
    SET_GPR_U32(ctx, 31, 0x162D10u);
    ctx->pc = 0x162D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162D08u;
            // 0x162d0c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D10u; }
        if (ctx->pc != 0x162D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D10u; }
        if (ctx->pc != 0x162D10u) { return; }
    }
    ctx->pc = 0x162D10u;
    // 0x162d10: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x162D10u;
    {
        const bool branch_taken_0x162d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D10u;
            // 0x162d14: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d10) {
            ctx->pc = 0x162E10u;
            goto label_162e10;
        }
    }
    ctx->pc = 0x162D18u;
label_162d18:
    // 0x162d18: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x162d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x162d1c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x162d1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x162d20: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x162D20u;
    {
        const bool branch_taken_0x162d20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x162d20) {
            ctx->pc = 0x162D78u;
            goto label_162d78;
        }
    }
    ctx->pc = 0x162D28u;
    // 0x162d28: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x162d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x162d2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162D2Cu;
    {
        const bool branch_taken_0x162d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162d2c) {
            ctx->pc = 0x162D48u;
            goto label_162d48;
        }
    }
    ctx->pc = 0x162D34u;
    // 0x162d34: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x162D34u;
    SET_GPR_U32(ctx, 31, 0x162D3Cu);
    ctx->pc = 0x162D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162D34u;
            // 0x162d38: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D3Cu; }
        if (ctx->pc != 0x162D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D3Cu; }
        if (ctx->pc != 0x162D3Cu) { return; }
    }
    ctx->pc = 0x162D3Cu;
    // 0x162d3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x162D3Cu;
    {
        const bool branch_taken_0x162d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162d3c) {
            ctx->pc = 0x162D50u;
            goto label_162d50;
        }
    }
    ctx->pc = 0x162D44u;
    // 0x162d44: 0x0  nop
    ctx->pc = 0x162d44u;
    // NOP
label_162d48:
    // 0x162d48: 0xc0604dc  jal         func_181370
    ctx->pc = 0x162D48u;
    SET_GPR_U32(ctx, 31, 0x162D50u);
    ctx->pc = 0x162D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162D48u;
            // 0x162d4c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D50u; }
        if (ctx->pc != 0x162D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D50u; }
        if (ctx->pc != 0x162D50u) { return; }
    }
    ctx->pc = 0x162D50u;
label_162d50:
    // 0x162d50: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x162d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x162d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162D54u;
    {
        const bool branch_taken_0x162d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162d54) {
            ctx->pc = 0x162D68u;
            goto label_162d68;
        }
    }
    ctx->pc = 0x162D5Cu;
    // 0x162d5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x162D5Cu;
    {
        const bool branch_taken_0x162d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D5Cu;
            // 0x162d60: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d5c) {
            ctx->pc = 0x162D88u;
            goto label_162d88;
        }
    }
    ctx->pc = 0x162D64u;
    // 0x162d64: 0x0  nop
    ctx->pc = 0x162d64u;
    // NOP
label_162d68:
    // 0x162d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162d6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x162D6Cu;
    {
        const bool branch_taken_0x162d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D6Cu;
            // 0x162d70: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d6c) {
            ctx->pc = 0x162D88u;
            goto label_162d88;
        }
    }
    ctx->pc = 0x162D74u;
    // 0x162d74: 0x0  nop
    ctx->pc = 0x162d74u;
    // NOP
label_162d78:
    // 0x162d78: 0xc0604dc  jal         func_181370
    ctx->pc = 0x162D78u;
    SET_GPR_U32(ctx, 31, 0x162D80u);
    ctx->pc = 0x162D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162D78u;
            // 0x162d7c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D80u; }
        if (ctx->pc != 0x162D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D80u; }
        if (ctx->pc != 0x162D80u) { return; }
    }
    ctx->pc = 0x162D80u;
    // 0x162d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162d84: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x162d84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_162d88:
    // 0x162d88: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x162d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x162d8c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x162d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x162d90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x162d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162d94: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x162d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x162d98: 0x24c61a30  addiu       $a2, $a2, 0x1A30
    ctx->pc = 0x162d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6704));
    // 0x162d9c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x162d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162da0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x162da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162da4: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x162da4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x162da8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x162da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162dac: 0x2442ff46  addiu       $v0, $v0, -0xBA
    ctx->pc = 0x162dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967110));
    // 0x162db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162db4: 0x0  nop
    ctx->pc = 0x162db4u;
    // NOP
    // 0x162db8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162dbc: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x162dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x162dc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162dc4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x162dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x162dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162dcc: 0x0  nop
    ctx->pc = 0x162dccu;
    // NOP
    // 0x162dd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162dd4: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x162dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x162dd8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x162dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x162ddc: 0x2442ff76  addiu       $v0, $v0, -0x8A
    ctx->pc = 0x162ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967158));
    // 0x162de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162de4: 0x0  nop
    ctx->pc = 0x162de4u;
    // NOP
    // 0x162de8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162dec: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x162decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x162df0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x162df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x162df4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x162df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x162df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162dfc: 0x0  nop
    ctx->pc = 0x162dfcu;
    // NOP
    // 0x162e00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162e04: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x162E04u;
    SET_GPR_U32(ctx, 31, 0x162E0Cu);
    ctx->pc = 0x162E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162E04u;
            // 0x162e08: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E0Cu; }
        if (ctx->pc != 0x162E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E0Cu; }
        if (ctx->pc != 0x162E0Cu) { return; }
    }
    ctx->pc = 0x162E0Cu;
    // 0x162e0c: 0x0  nop
    ctx->pc = 0x162e0cu;
    // NOP
label_162e10:
    // 0x162e10: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x162e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x162e14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162e18: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x162e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    // 0x162e1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x162e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162e20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x162e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162e30: 0x3e00008  jr          $ra
    ctx->pc = 0x162E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162E30u;
            // 0x162e34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162898u: goto label_162898;
            case 0x1628A0u: goto label_1628a0;
            case 0x162A60u: goto label_162a60;
            case 0x162B18u: goto label_162b18;
            case 0x162B48u: goto label_162b48;
            case 0x162B78u: goto label_162b78;
            case 0x162BA8u: goto label_162ba8;
            case 0x162C68u: goto label_162c68;
            case 0x162CF8u: goto label_162cf8;
            case 0x162D18u: goto label_162d18;
            case 0x162D48u: goto label_162d48;
            case 0x162D50u: goto label_162d50;
            case 0x162D68u: goto label_162d68;
            case 0x162D78u: goto label_162d78;
            case 0x162D88u: goto label_162d88;
            case 0x162E10u: goto label_162e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162E38u;
}
