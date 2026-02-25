#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: VertexAnim2
// Address: 0x1ea810 - 0x1eac9c
void VertexAnim2_0x1ea810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("VertexAnim2_0x1ea810");
#endif

    ctx->pc = 0x1ea810u;

    // 0x1ea810: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ea810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ea814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea818: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ea818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ea81c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ea81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ea820: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ea820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ea824: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ea824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ea828: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ea82c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ea82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ea830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ea834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea840: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1EA840u;
    SET_GPR_U32(ctx, 31, 0x1EA848u);
    ctx->pc = 0x1EA844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA840u;
            // 0x1ea844: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA848u; }
        if (ctx->pc != 0x1EA848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA848u; }
        if (ctx->pc != 0x1EA848u) { return; }
    }
    ctx->pc = 0x1EA848u;
    // 0x1ea848: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ea848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea84c: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ea84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ea850: 0x8c222e40  lw          $v0, 0x2E40($at)
    ctx->pc = 0x1ea850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11840)));
    // 0x1ea854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ea854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ea858: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ea858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ea85c: 0xac222e40  sw          $v0, 0x2E40($at)
    ctx->pc = 0x1ea85cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11840), GPR_U32(ctx, 2));
    // 0x1ea860: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ea860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ea864: 0x8c222e40  lw          $v0, 0x2E40($at)
    ctx->pc = 0x1ea864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11840)));
    // 0x1ea868: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x1ea868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1ea86c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EA86Cu;
    {
        const bool branch_taken_0x1ea86c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA86Cu;
            // 0x1ea870: 0x3c010044  lui         $at, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea86c) {
            ctx->pc = 0x1EA878u;
            goto label_1ea878;
        }
    }
    ctx->pc = 0x1EA874u;
    // 0x1ea874: 0xac202e40  sw          $zero, 0x2E40($at)
    ctx->pc = 0x1ea874u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11840), GPR_U32(ctx, 0));
label_1ea878:
    // 0x1ea878: 0x16000099  bnez        $s0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1EA878u;
    {
        const bool branch_taken_0x1ea878 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA878u;
            // 0x1ea87c: 0x3c130044  lui         $s3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea878) {
            ctx->pc = 0x1EAAE0u;
            goto label_1eaae0;
        }
    }
    ctx->pc = 0x1EA880u;
    // 0x1ea880: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x1ea880u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
    // 0x1ea884: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x1ea884u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x1ea888: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ea888u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea88c: 0x26733110  addiu       $s3, $s3, 0x3110
    ctx->pc = 0x1ea88cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12560));
    // 0x1ea890: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1ea890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea894: 0x26312f10  addiu       $s1, $s1, 0x2F10
    ctx->pc = 0x1ea894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12048));
    // 0x1ea898: 0x26102ed0  addiu       $s0, $s0, 0x2ED0
    ctx->pc = 0x1ea898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11984));
    // 0x1ea89c: 0x0  nop
    ctx->pc = 0x1ea89cu;
    // NOP
label_1ea8a0:
    // 0x1ea8a0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ea8a4: 0x8c222e40  lw          $v0, 0x2E40($at)
    ctx->pc = 0x1ea8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11840)));
    // 0x1ea8a8: 0x2c2a821  addu        $s5, $s6, $v0
    ctx->pc = 0x1ea8a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1ea8ac: 0x2aa10011  slti        $at, $s5, 0x11
    ctx->pc = 0x1ea8acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1ea8b0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA8B0u;
    {
        const bool branch_taken_0x1ea8b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8b0) {
            ctx->pc = 0x1EA8C0u;
            goto label_1ea8c0;
        }
    }
    ctx->pc = 0x1EA8B8u;
    // 0x1ea8b8: 0x26b5fff0  addiu       $s5, $s5, -0x10
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
    // 0x1ea8bc: 0x0  nop
    ctx->pc = 0x1ea8bcu;
    // NOP
label_1ea8c0:
    // 0x1ea8c0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1ea8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ea8c4: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1ea8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1ea8c8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1ea8cc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1ea8ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1ea8d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ea8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea8d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ea8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ea8d8: 0xb51023  subu        $v0, $a1, $s5
    ctx->pc = 0x1ea8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x1ea8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea8e0: 0x0  nop
    ctx->pc = 0x1ea8e0u;
    // NOP
    // 0x1ea8e4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ea8e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ea8e8: 0x24620058  addiu       $v0, $v1, 0x58
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1ea8ec: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1ea8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1ea8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea8f4: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EA8F4u;
    SET_GPR_U32(ctx, 31, 0x1EA8FCu);
    ctx->pc = 0x1EA8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA8F4u;
            // 0x1ea8f8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA8FCu; }
        if (ctx->pc != 0x1EA8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA8FCu; }
        if (ctx->pc != 0x1EA8FCu) { return; }
    }
    ctx->pc = 0x1EA8FCu;
    // 0x1ea8fc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ea8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ea900: 0x12b900  sll         $s7, $s2, 4
    ctx->pc = 0x1ea900u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1ea904: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x1ea904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
    // 0x1ea908: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x1ea908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1ea90c: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x1ea90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1ea910: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1ea910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ea914: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1ea914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1ea918: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1ea918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1ea91c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1ea91cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1ea920: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1ea920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea924: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ea924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ea928: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1ea928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ea92c: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x1ea92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea930: 0x24a20058  addiu       $v0, $a1, 0x58
    ctx->pc = 0x1ea930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x1ea934: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea938: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea93c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1ea93cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea944: 0x0  nop
    ctx->pc = 0x1ea944u;
    // NOP
    // 0x1ea948: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ea948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ea94c: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EA94Cu;
    SET_GPR_U32(ctx, 31, 0x1EA954u);
    ctx->pc = 0x1EA950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA94Cu;
            // 0x1ea950: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA954u; }
        if (ctx->pc != 0x1EA954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA954u; }
        if (ctx->pc != 0x1EA954u) { return; }
    }
    ctx->pc = 0x1EA954u;
    // 0x1ea954: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x1ea954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1ea958: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x1ea958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1ea95c: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EA95Cu;
    SET_GPR_U32(ctx, 31, 0x1EA964u);
    ctx->pc = 0x1EA960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA95Cu;
            // 0x1ea960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA964u; }
        if (ctx->pc != 0x1EA964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA964u; }
        if (ctx->pc != 0x1EA964u) { return; }
    }
    ctx->pc = 0x1EA964u;
    // 0x1ea964: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ea964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ea968: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1ea968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1ea96c: 0x24422f10  addiu       $v0, $v0, 0x2F10
    ctx->pc = 0x1ea96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12048));
    // 0x1ea970: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1ea970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1ea974: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x1ea974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1ea978: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1ea978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1ea97c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1ea97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea980: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1ea980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1ea984: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EA984u;
    SET_GPR_U32(ctx, 31, 0x1EA98Cu);
    ctx->pc = 0x1EA988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA984u;
            // 0x1ea988: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA98Cu; }
        if (ctx->pc != 0x1EA98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA98Cu; }
        if (ctx->pc != 0x1EA98Cu) { return; }
    }
    ctx->pc = 0x1EA98Cu;
    // 0x1ea98c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1ea98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ea990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea994: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ea994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ea998: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1ea998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ea99c: 0xc07ab28  jal         func_1EACA0
    ctx->pc = 0x1EA99Cu;
    SET_GPR_U32(ctx, 31, 0x1EA9A4u);
    ctx->pc = 0x1EA9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA99Cu;
            // 0x1ea9a0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACA0u;
    if (runtime->hasFunction(0x1EACA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA9A4u; }
        if (ctx->pc != 0x1EA9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1eaca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA9A4u; }
        if (ctx->pc != 0x1EA9A4u) { return; }
    }
    ctx->pc = 0x1EA9A4u;
    // 0x1ea9a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ea9a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1ea9a8: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1ea9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1ea9ac: 0x2ac2000f  slti        $v0, $s6, 0xF
    ctx->pc = 0x1ea9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1ea9b0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1ea9b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1ea9b4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1ea9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1ea9b8: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1EA9B8u;
    {
        const bool branch_taken_0x1ea9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA9B8u;
            // 0x1ea9bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9b8) {
            ctx->pc = 0x1EA8A0u;
            goto label_1ea8a0;
        }
    }
    ctx->pc = 0x1EA9C0u;
    // 0x1ea9c0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1ea9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ea9c4: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1ea9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1ea9c8: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x1ea9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1ea9cc: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1ea9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ea9d0: 0x429018  mult        $s2, $v0, $v0
    ctx->pc = 0x1ea9d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ea9d4: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1ea9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1ea9d8: 0x168940  sll         $s1, $s6, 5
    ctx->pc = 0x1ea9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x1ea9dc: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x1ea9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x1ea9e0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1ea9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ea9e4: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1ea9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1ea9e8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1ea9e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1ea9ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ea9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ea9f0: 0xd21023  subu        $v0, $a2, $s2
    ctx->pc = 0x1ea9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1ea9f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ea9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea9f8: 0x24a20058  addiu       $v0, $a1, 0x58
    ctx->pc = 0x1ea9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x1ea9fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaa00: 0x0  nop
    ctx->pc = 0x1eaa00u;
    // NOP
    // 0x1eaa04: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eaa04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eaa08: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EAA08u;
    SET_GPR_U32(ctx, 31, 0x1EAA10u);
    ctx->pc = 0x1EAA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA08u;
            // 0x1eaa0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA10u; }
        if (ctx->pc != 0x1EAA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA10u; }
        if (ctx->pc != 0x1EAA10u) { return; }
    }
    ctx->pc = 0x1EAA10u;
    // 0x1eaa10: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1eaa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1eaa14: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x1eaa14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1eaa18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eaa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eaa1c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1eaa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1eaa20: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x1eaa20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1eaa24: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1eaa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1eaa28: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1eaa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1eaa2c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1eaa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1eaa30: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x1eaa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
    // 0x1eaa34: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1eaa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eaa38: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eaa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eaa3c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eaa3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eaa40: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eaa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eaa44: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1eaa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1eaa48: 0x523023  subu        $a2, $v0, $s2
    ctx->pc = 0x1eaa48u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1eaa4c: 0x24a20058  addiu       $v0, $a1, 0x58
    ctx->pc = 0x1eaa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x1eaa50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eaa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eaa54: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1eaa54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eaa58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eaa58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaa5c: 0x0  nop
    ctx->pc = 0x1eaa5cu;
    // NOP
    // 0x1eaa60: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eaa60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eaa64: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EAA64u;
    SET_GPR_U32(ctx, 31, 0x1EAA6Cu);
    ctx->pc = 0x1EAA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA64u;
            // 0x1eaa68: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA6Cu; }
        if (ctx->pc != 0x1EAA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA6Cu; }
        if (ctx->pc != 0x1EAA6Cu) { return; }
    }
    ctx->pc = 0x1EAA6Cu;
    // 0x1eaa6c: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x1eaa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1eaa70: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1eaa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1eaa74: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x1eaa74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1eaa78: 0x24422f10  addiu       $v0, $v0, 0x2F10
    ctx->pc = 0x1eaa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12048));
    // 0x1eaa7c: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EAA7Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA84u);
    ctx->pc = 0x1EAA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA7Cu;
            // 0x1eaa80: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA84u; }
        if (ctx->pc != 0x1EAA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA84u; }
        if (ctx->pc != 0x1EAA84u) { return; }
    }
    ctx->pc = 0x1EAA84u;
    // 0x1eaa84: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1eaa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1eaa88: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1eaa88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1eaa8c: 0x24422f10  addiu       $v0, $v0, 0x2F10
    ctx->pc = 0x1eaa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12048));
    // 0x1eaa90: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1eaa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1eaa94: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1eaa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1eaa98: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1eaa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1eaa9c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1eaa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1eaaa0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1eaaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1eaaa4: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EAAA4u;
    SET_GPR_U32(ctx, 31, 0x1EAAACu);
    ctx->pc = 0x1EAAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAAA4u;
            // 0x1eaaa8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAAACu; }
        if (ctx->pc != 0x1EAAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAAACu; }
        if (ctx->pc != 0x1EAAACu) { return; }
    }
    ctx->pc = 0x1EAAACu;
    // 0x1eaaac: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x1eaaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x1eaab0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eaab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eaab4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1eaab4u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1eaab8: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1eaab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1eaabc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1eaabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1eaac0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1eaac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaac4: 0x24422ed0  addiu       $v0, $v0, 0x2ED0
    ctx->pc = 0x1eaac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11984));
    // 0x1eaac8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1eaac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaacc: 0xc07ab28  jal         func_1EACA0
    ctx->pc = 0x1EAACCu;
    SET_GPR_U32(ctx, 31, 0x1EAAD4u);
    ctx->pc = 0x1EAAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAACCu;
            // 0x1eaad0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACA0u;
    if (runtime->hasFunction(0x1EACA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAAD4u; }
        if (ctx->pc != 0x1EAAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1eaca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAAD4u; }
        if (ctx->pc != 0x1EAAD4u) { return; }
    }
    ctx->pc = 0x1EAAD4u;
    // 0x1eaad4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eaad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eaad8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1EAAD8u;
    {
        const bool branch_taken_0x1eaad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAAD8u;
            // 0x1eaadc: 0xac202e50  sw          $zero, 0x2E50($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaad8) {
            ctx->pc = 0x1EAC70u;
            goto label_1eac70;
        }
    }
    ctx->pc = 0x1EAAE0u;
label_1eaae0:
    // 0x1eaae0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eaae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eaae4: 0x8c222e50  lw          $v0, 0x2E50($at)
    ctx->pc = 0x1eaae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11856)));
    // 0x1eaae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eaae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eaaec: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eaaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eaaf0: 0xac222e50  sw          $v0, 0x2E50($at)
    ctx->pc = 0x1eaaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11856), GPR_U32(ctx, 2));
    // 0x1eaaf4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eaaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eaaf8: 0x8c222e50  lw          $v0, 0x2E50($at)
    ctx->pc = 0x1eaaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11856)));
    // 0x1eaafc: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x1eaafcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1eab00: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAB00u;
    {
        const bool branch_taken_0x1eab00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB00u;
            // 0x1eab04: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab00) {
            ctx->pc = 0x1EAB10u;
            goto label_1eab10;
        }
    }
    ctx->pc = 0x1EAB08u;
    // 0x1eab08: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eab08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eab0c: 0xac222e50  sw          $v0, 0x2E50($at)
    ctx->pc = 0x1eab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11856), GPR_U32(ctx, 2));
label_1eab10:
    // 0x1eab10: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eab10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eab14: 0x8c222e50  lw          $v0, 0x2E50($at)
    ctx->pc = 0x1eab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11856)));
    // 0x1eab18: 0x3c170044  lui         $s7, 0x44
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)68 << 16));
    // 0x1eab1c: 0x3c150044  lui         $s5, 0x44
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)68 << 16));
    // 0x1eab20: 0x3c130044  lui         $s3, 0x44
    ctx->pc = 0x1eab20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)68 << 16));
    // 0x1eab24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eab24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab28: 0x26f73110  addiu       $s7, $s7, 0x3110
    ctx->pc = 0x1eab28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12560));
    // 0x1eab2c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1eab2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eab30: 0x26b52f10  addiu       $s5, $s5, 0x2F10
    ctx->pc = 0x1eab30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12048));
    // 0x1eab34: 0x26732ed0  addiu       $s3, $s3, 0x2ED0
    ctx->pc = 0x1eab34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 11984));
    // 0x1eab38: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAB38u;
    {
        const bool branch_taken_0x1eab38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EAB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB38u;
            // 0x1eab3c: 0x29043  sra         $s2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab38) {
            ctx->pc = 0x1EAB48u;
            goto label_1eab48;
        }
    }
    ctx->pc = 0x1EAB40u;
    // 0x1eab40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eab40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eab44: 0x29043  sra         $s2, $v0, 1
    ctx->pc = 0x1eab44u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
label_1eab48:
    // 0x1eab48: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1eab48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1eab4c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eab50: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1eab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1eab54: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eab54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eab58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1eab58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eab5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eab60: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1eab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1eab64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eab64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab68: 0x0  nop
    ctx->pc = 0x1eab68u;
    // NOP
    // 0x1eab6c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1eab6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eab70: 0x24620058  addiu       $v0, $v1, 0x58
    ctx->pc = 0x1eab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1eab74: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1eab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1eab78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eab78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eab7c: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1EAB84u);
    ctx->pc = 0x1EAB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB7Cu;
            // 0x1eab80: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAB84u; }
        if (ctx->pc != 0x1EAB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAB84u; }
        if (ctx->pc != 0x1EAB84u) { return; }
    }
    ctx->pc = 0x1EAB84u;
    // 0x1eab84: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1eab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1eab88: 0x168900  sll         $s1, $s6, 4
    ctx->pc = 0x1eab88u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1eab8c: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x1eab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
    // 0x1eab90: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1eab94: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1eab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eab98: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1eab98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1eab9c: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x1eab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x1eaba0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1eaba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1eaba4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1eaba4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65280u)));
    // 0x1eaba8: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1eaba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1eabac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1eabacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1eabb0: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1eabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1eabb4: 0x523023  subu        $a2, $v0, $s2
    ctx->pc = 0x1eabb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1eabb8: 0x24a20058  addiu       $v0, $a1, 0x58
    ctx->pc = 0x1eabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x1eabbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eabc0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1eabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1eabc4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1eabc4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eabc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eabc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eabcc: 0x0  nop
    ctx->pc = 0x1eabccu;
    // NOP
    // 0x1eabd0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1eabd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1eabd4: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1EABD4u;
    SET_GPR_U32(ctx, 31, 0x1EABDCu);
    ctx->pc = 0x1EABD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EABD4u;
            // 0x1eabd8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACF0u;
    if (runtime->hasFunction(0x1EACF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EABDCu; }
        if (ctx->pc != 0x1EABDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1eacf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EABDCu; }
        if (ctx->pc != 0x1EABDCu) { return; }
    }
    ctx->pc = 0x1EABDCu;
    // 0x1eabdc: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x1eabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1eabe0: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1eabe4: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EABE4u;
    SET_GPR_U32(ctx, 31, 0x1EABECu);
    ctx->pc = 0x1EABE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EABE4u;
            // 0x1eabe8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EABECu; }
        if (ctx->pc != 0x1EABECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EABECu; }
        if (ctx->pc != 0x1EABECu) { return; }
    }
    ctx->pc = 0x1EABECu;
    // 0x1eabec: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1eabecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1eabf0: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x1eabf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1eabf4: 0x24422f10  addiu       $v0, $v0, 0x2F10
    ctx->pc = 0x1eabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12048));
    // 0x1eabf8: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1eabf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1eabfc: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1eabfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eac00: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1eac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1eac04: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1eac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1eac08: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1eac08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1eac0c: 0xc07ab30  jal         func_1EACC0
    ctx->pc = 0x1EAC0Cu;
    SET_GPR_U32(ctx, 31, 0x1EAC14u);
    ctx->pc = 0x1EAC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC0Cu;
            // 0x1eac10: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACC0u;
    if (runtime->hasFunction(0x1EACC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC14u; }
        if (ctx->pc != 0x1EAC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1eacc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC14u; }
        if (ctx->pc != 0x1EAC14u) { return; }
    }
    ctx->pc = 0x1EAC14u;
    // 0x1eac14: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1eac14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1eac18: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1eac18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eac1c: 0x8c252e50  lw          $a1, 0x2E50($at)
    ctx->pc = 0x1eac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11856)));
    // 0x1eac20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1eac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac24: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1eac24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1eac28: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1eac28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1eac2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eac30: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1eac30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1eac34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1eac34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1eac38: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1eac38u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)255u)));
    // 0x1eac3c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1eac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1eac40: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1eac40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1eac44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac48: 0xc07ab28  jal         func_1EACA0
    ctx->pc = 0x1EAC48u;
    SET_GPR_U32(ctx, 31, 0x1EAC50u);
    ctx->pc = 0x1EAC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC48u;
            // 0x1eac4c: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EACA0u;
    if (runtime->hasFunction(0x1EACA0u)) {
        auto targetFn = runtime->lookupFunction(0x1EACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC50u; }
        if (ctx->pc != 0x1EAC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1eaca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC50u; }
        if (ctx->pc != 0x1EAC50u) { return; }
    }
    ctx->pc = 0x1EAC50u;
    // 0x1eac50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1eac50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1eac54: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x1eac54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x1eac58: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1eac58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1eac5c: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x1eac5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x1eac60: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1eac60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1eac64: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1EAC64u;
    {
        const bool branch_taken_0x1eac64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC64u;
            // 0x1eac68: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac64) {
            ctx->pc = 0x1EAB48u;
            goto label_1eab48;
        }
    }
    ctx->pc = 0x1EAC6Cu;
    // 0x1eac6c: 0x0  nop
    ctx->pc = 0x1eac6cu;
    // NOP
label_1eac70:
    // 0x1eac70: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1eac70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eac74: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1eac74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eac78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1eac78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eac7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eac7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eac80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eac80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eac84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eac84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eac88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eac88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eac8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eac8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eac90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eac90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eac94: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAC94u;
            // 0x1eac98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA878u: goto label_1ea878;
            case 0x1EA8A0u: goto label_1ea8a0;
            case 0x1EA8C0u: goto label_1ea8c0;
            case 0x1EAAE0u: goto label_1eaae0;
            case 0x1EAB10u: goto label_1eab10;
            case 0x1EAB48u: goto label_1eab48;
            case 0x1EAC70u: goto label_1eac70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EAC9Cu;
}
