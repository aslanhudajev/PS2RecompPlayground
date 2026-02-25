#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DrawBossInfomationNonTime
// Address: 0x1b3850 - 0x1b3a34
void DrawBossInfomationNonTime_0x1b3850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DrawBossInfomationNonTime_0x1b3850");
#endif

    ctx->pc = 0x1b3850u;

    // 0x1b3850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b3850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b3854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b3854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b3858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b385c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3864: 0x1a200008  blez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3864u;
    {
        const bool branch_taken_0x1b3864 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B3868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3864u;
            // 0x1b3868: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3864) {
            ctx->pc = 0x1B3888u;
            goto label_1b3888;
        }
    }
    ctx->pc = 0x1B386Cu;
    // 0x1b386c: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x1b386cu;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1b3870: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x1b3870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1b3874: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3874u;
    {
        const bool branch_taken_0x1b3874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3874) {
            ctx->pc = 0x1B3888u;
            goto label_1b3888;
        }
    }
    ctx->pc = 0x1B387Cu;
    // 0x1b387c: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B387Cu;
    {
        const bool branch_taken_0x1b387c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1b387c) {
            ctx->pc = 0x1B3890u;
            goto label_1b3890;
        }
    }
    ctx->pc = 0x1B3884u;
    // 0x1b3884: 0x0  nop
    ctx->pc = 0x1b3884u;
    // NOP
label_1b3888:
    // 0x1b3888: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1B3888u;
    {
        const bool branch_taken_0x1b3888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3888) {
            ctx->pc = 0x1B3A20u;
            goto label_1b3a20;
        }
    }
    ctx->pc = 0x1B3890u;
label_1b3890:
    // 0x1b3890: 0x3c02c340  lui         $v0, 0xC340
    ctx->pc = 0x1b3890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49984 << 16));
    // 0x1b3894: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3898: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b3898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b389c: 0x3c02c33f  lui         $v0, 0xC33F
    ctx->pc = 0x1b389cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49983 << 16));
    // 0x1b38a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b38a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b38a4: 0x3c024930  lui         $v0, 0x4930
    ctx->pc = 0x1b38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18736 << 16));
    // 0x1b38a8: 0x34422d40  ori         $v0, $v0, 0x2D40
    ctx->pc = 0x1b38a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)11584u)));
    // 0x1b38ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1b38acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b38b0: 0xc06cea0  jal         func_1B3A80
    ctx->pc = 0x1B38B0u;
    SET_GPR_U32(ctx, 31, 0x1B38B8u);
    ctx->pc = 0x1B38B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38B0u;
            // 0x1b38b4: 0x24841b50  addiu       $a0, $a0, 0x1B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A80u;
    if (runtime->hasFunction(0x1B3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38B8u; }
        if (ctx->pc != 0x1B38B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1b3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38B8u; }
        if (ctx->pc != 0x1B38B8u) { return; }
    }
    ctx->pc = 0x1B38B8u;
    // 0x1b38b8: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x1b38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
    // 0x1b38bc: 0x3c03c33a  lui         $v1, 0xC33A
    ctx->pc = 0x1b38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49978 << 16));
    // 0x1b38c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b38c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b38c4: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b38c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b38c8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1b38c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b38cc: 0x3c024930  lui         $v0, 0x4930
    ctx->pc = 0x1b38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18736 << 16));
    // 0x1b38d0: 0x34422d40  ori         $v0, $v0, 0x2D40
    ctx->pc = 0x1b38d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)11584u)));
    // 0x1b38d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1b38d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b38d8: 0xc06cea0  jal         func_1B3A80
    ctx->pc = 0x1B38D8u;
    SET_GPR_U32(ctx, 31, 0x1B38E0u);
    ctx->pc = 0x1B38DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38D8u;
            // 0x1b38dc: 0x24841b60  addiu       $a0, $a0, 0x1B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A80u;
    if (runtime->hasFunction(0x1B3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38E0u; }
        if (ctx->pc != 0x1B38E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1b3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38E0u; }
        if (ctx->pc != 0x1B38E0u) { return; }
    }
    ctx->pc = 0x1B38E0u;
    // 0x1b38e0: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b38e4: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1b38e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1b38e8: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1b38e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1b38ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b38ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b38f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38f4: 0xc06ce98  jal         func_1B3A60
    ctx->pc = 0x1B38F4u;
    SET_GPR_U32(ctx, 31, 0x1B38FCu);
    ctx->pc = 0x1B38F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B38F4u;
            // 0x1b38f8: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A60u;
    if (runtime->hasFunction(0x1B3A60u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38FCu; }
        if (ctx->pc != 0x1B38FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1b3a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B38FCu; }
        if (ctx->pc != 0x1B38FCu) { return; }
    }
    ctx->pc = 0x1B38FCu;
    // 0x1b38fc: 0x3c02c340  lui         $v0, 0xC340
    ctx->pc = 0x1b38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49984 << 16));
    // 0x1b3900: 0x3c03c33f  lui         $v1, 0xC33F
    ctx->pc = 0x1b3900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49983 << 16));
    // 0x1b3904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3908: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b3908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b390c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1b390cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b3910: 0x3c024935  lui         $v0, 0x4935
    ctx->pc = 0x1b3910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18741 << 16));
    // 0x1b3914: 0x34420f40  ori         $v0, $v0, 0xF40
    ctx->pc = 0x1b3914u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3904u)));
    // 0x1b3918: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1b3918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b391c: 0xc06cea0  jal         func_1B3A80
    ctx->pc = 0x1B391Cu;
    SET_GPR_U32(ctx, 31, 0x1B3924u);
    ctx->pc = 0x1B3920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B391Cu;
            // 0x1b3920: 0x24841b70  addiu       $a0, $a0, 0x1B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A80u;
    if (runtime->hasFunction(0x1B3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3924u; }
        if (ctx->pc != 0x1B3924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1b3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3924u; }
        if (ctx->pc != 0x1B3924u) { return; }
    }
    ctx->pc = 0x1B3924u;
    // 0x1b3924: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1b3924u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3928: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x1b3928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x1b392c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b392cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3930: 0x3c03c33a  lui         $v1, 0xC33A
    ctx->pc = 0x1b3930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49978 << 16));
    // 0x1b3934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3938: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b3938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b393c: 0x3c024935  lui         $v0, 0x4935
    ctx->pc = 0x1b393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18741 << 16));
    // 0x1b3940: 0x3c064280  lui         $a2, 0x4280
    ctx->pc = 0x1b3940u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17024 << 16));
    // 0x1b3944: 0x34420f40  ori         $v0, $v0, 0xF40
    ctx->pc = 0x1b3944u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3904u)));
    // 0x1b3948: 0x3c054380  lui         $a1, 0x4380
    ctx->pc = 0x1b3948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17280 << 16));
    // 0x1b394c: 0x24841b80  addiu       $a0, $a0, 0x1B80
    ctx->pc = 0x1b394cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7040));
    // 0x1b3950: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1b3950u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x1b3954: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1b3954u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3958: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1b3958u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b395c: 0x0  nop
    ctx->pc = 0x1b395cu;
    // NOP
    // 0x1b3960: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b3960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3964: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b3964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b3968: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b3968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b396c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b396cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3970: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1b3970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b3974: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1b3974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b3978: 0xc06cea0  jal         func_1B3A80
    ctx->pc = 0x1B3978u;
    SET_GPR_U32(ctx, 31, 0x1B3980u);
    ctx->pc = 0x1B397Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3978u;
            // 0x1b397c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A80u;
    if (runtime->hasFunction(0x1B3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3980u; }
        if (ctx->pc != 0x1B3980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1b3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3980u; }
        if (ctx->pc != 0x1B3980u) { return; }
    }
    ctx->pc = 0x1B3980u;
    // 0x1b3980: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b3980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b3984: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1b3984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1b3988: 0x24841b44  addiu       $a0, $a0, 0x1B44
    ctx->pc = 0x1b3988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6980));
    // 0x1b398c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1b398cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b3990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b3990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3994: 0xc06ce98  jal         func_1B3A60
    ctx->pc = 0x1B3994u;
    SET_GPR_U32(ctx, 31, 0x1B399Cu);
    ctx->pc = 0x1B3998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3994u;
            // 0x1b3998: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A60u;
    if (runtime->hasFunction(0x1B3A60u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B399Cu; }
        if (ctx->pc != 0x1B399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1b3a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B399Cu; }
        if (ctx->pc != 0x1B399Cu) { return; }
    }
    ctx->pc = 0x1B399Cu;
    // 0x1b399c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b39a0: 0x27b10034  addiu       $s1, $sp, 0x34
    ctx->pc = 0x1b39a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1b39a4: 0x24421b70  addiu       $v0, $v0, 0x1B70
    ctx->pc = 0x1b39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7024));
    // 0x1b39a8: 0x27b0003c  addiu       $s0, $sp, 0x3C
    ctx->pc = 0x1b39a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1b39ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b39acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b39b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b39b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b39b4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b39b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b39b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b39bc: 0x24421b44  addiu       $v0, $v0, 0x1B44
    ctx->pc = 0x1b39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6980));
    // 0x1b39c0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b39c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b39c4: 0xc06ce94  jal         func_1B3A50
    ctx->pc = 0x1B39C4u;
    SET_GPR_U32(ctx, 31, 0x1B39CCu);
    ctx->pc = 0x1B39C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39C4u;
            // 0x1b39c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A50u;
    if (runtime->hasFunction(0x1B3A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39CCu; }
        if (ctx->pc != 0x1B39CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1b3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39CCu; }
        if (ctx->pc != 0x1B39CCu) { return; }
    }
    ctx->pc = 0x1B39CCu;
    // 0x1b39cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b39ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b39d0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1B39D0u;
    SET_GPR_U32(ctx, 31, 0x1B39D8u);
    ctx->pc = 0x1B39D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39D0u;
            // 0x1b39d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A40u;
    if (runtime->hasFunction(0x1B3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39D8u; }
        if (ctx->pc != 0x1B39D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1b3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39D8u; }
        if (ctx->pc != 0x1B39D8u) { return; }
    }
    ctx->pc = 0x1B39D8u;
    // 0x1b39d8: 0xc05c2a0  jal         func_170A80
    ctx->pc = 0x1B39D8u;
    SET_GPR_U32(ctx, 31, 0x1B39E0u);
    ctx->pc = 0x1B39DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B39D8u;
            // 0x1b39dc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A80u;
    if (runtime->hasFunction(0x170A80u)) {
        auto targetFn = runtime->lookupFunction(0x170A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39E0u; }
        if (ctx->pc != 0x1B39E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteF_0x170a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B39E0u; }
        if (ctx->pc != 0x1B39E0u) { return; }
    }
    ctx->pc = 0x1B39E0u;
    // 0x1b39e0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b39e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b39e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b39e8: 0x24631b50  addiu       $v1, $v1, 0x1B50
    ctx->pc = 0x1b39e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6992));
    // 0x1b39ec: 0x24421b40  addiu       $v0, $v0, 0x1B40
    ctx->pc = 0x1b39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x1b39f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b39f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1b39f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b39f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b39f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b39fc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b39fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b3a00: 0xc06ce94  jal         func_1B3A50
    ctx->pc = 0x1B3A00u;
    SET_GPR_U32(ctx, 31, 0x1B3A08u);
    ctx->pc = 0x1B3A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A00u;
            // 0x1b3a04: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A50u;
    if (runtime->hasFunction(0x1B3A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A08u; }
        if (ctx->pc != 0x1B3A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1b3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A08u; }
        if (ctx->pc != 0x1B3A08u) { return; }
    }
    ctx->pc = 0x1B3A08u;
    // 0x1b3a08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b3a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3a0c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1B3A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A14u);
    ctx->pc = 0x1B3A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A0Cu;
            // 0x1b3a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A40u;
    if (runtime->hasFunction(0x1B3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A14u; }
        if (ctx->pc != 0x1B3A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1b3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A14u; }
        if (ctx->pc != 0x1B3A14u) { return; }
    }
    ctx->pc = 0x1B3A14u;
    // 0x1b3a14: 0xc05c2a0  jal         func_170A80
    ctx->pc = 0x1B3A14u;
    SET_GPR_U32(ctx, 31, 0x1B3A1Cu);
    ctx->pc = 0x1B3A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A14u;
            // 0x1b3a18: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A80u;
    if (runtime->hasFunction(0x170A80u)) {
        auto targetFn = runtime->lookupFunction(0x170A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A1Cu; }
        if (ctx->pc != 0x1B3A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteF_0x170a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3A1Cu; }
        if (ctx->pc != 0x1B3A1Cu) { return; }
    }
    ctx->pc = 0x1B3A1Cu;
    // 0x1b3a1c: 0x0  nop
    ctx->pc = 0x1b3a1cu;
    // NOP
label_1b3a20:
    // 0x1b3a20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b3a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3a24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3a28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3A2Cu;
            // 0x1b3a30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3888u: goto label_1b3888;
            case 0x1B3890u: goto label_1b3890;
            case 0x1B3A20u: goto label_1b3a20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3A34u;
}
