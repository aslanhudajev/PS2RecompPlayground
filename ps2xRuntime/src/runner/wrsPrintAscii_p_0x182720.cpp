#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrintAscii_p
// Address: 0x182720 - 0x182910
void wrsPrintAscii_p_0x182720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrintAscii_p_0x182720");
#endif

    ctx->pc = 0x182720u;

    // 0x182720: 0x27bdeb00  addiu       $sp, $sp, -0x1500
    ctx->pc = 0x182720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294961920));
    // 0x182724: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x182724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x182728: 0x27a30af0  addiu       $v1, $sp, 0xAF0
    ctx->pc = 0x182728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2800));
    // 0x18272c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18272cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x182730: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x182730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x182734: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x182734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x182738: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x182738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18273c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x182740: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x182744: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x182744u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182748: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18274c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x18274cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182750: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18275c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18275cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182760: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x182760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x182764: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x182764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182768: 0x27a314fc  addiu       $v1, $sp, 0x14FC
    ctx->pc = 0x182768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5372));
    // 0x18276c: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x18276cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x182770: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x182770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x182774: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x182774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x182778: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x182778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18277c: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x18277cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x182780: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x182780u;
    SET_GPR_U32(ctx, 31, 0x182788u);
    ctx->pc = 0x182784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182780u;
            // 0x182784: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182788u; }
        if (ctx->pc != 0x182788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182788u; }
        if (ctx->pc != 0x182788u) { return; }
    }
    ctx->pc = 0x182788u;
    // 0x182788: 0x2911818  mult        $v1, $s4, $s1
    ctx->pc = 0x182788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18278c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x18278cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x182790: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x182790u;
    {
        const bool branch_taken_0x182790 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x182794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182790u;
            // 0x182794: 0x141043  sra         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182790) {
            ctx->pc = 0x1827A0u;
            goto label_1827a0;
        }
    }
    ctx->pc = 0x182798u;
    // 0x182798: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x182798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18279c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x18279cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1827a0:
    // 0x1827a0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1827a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1827a4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1827a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1827a8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1827a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1827ac: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1827acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1827b0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1827b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1827b4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1827B4u;
    {
        const bool branch_taken_0x1827b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1827B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1827B4u;
            // 0x1827b8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827b4) {
            ctx->pc = 0x1828A8u;
            goto label_1828a8;
        }
    }
    ctx->pc = 0x1827BCu;
    // 0x1827bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1827bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1827c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1827c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1827c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1827c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1827cc: 0x282b821  addu        $s7, $s4, $v0
    ctx->pc = 0x1827ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1827d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1827d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1827d4: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x1827d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1827d8:
    // 0x1827d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1827dc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1827dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1827e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1827e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1827e4: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1827e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1827e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1827e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1827ec: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1827ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1827f0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1827f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1827f4: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1827f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1827f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1827f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1827fc: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x1827fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x182800: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182800u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x182804: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x182804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x182808: 0xc060864  jal         func_182190
    ctx->pc = 0x182808u;
    SET_GPR_U32(ctx, 31, 0x182810u);
    ctx->pc = 0x18280Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182808u;
            // 0x18280c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182810u; }
        if (ctx->pc != 0x182810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182810u; }
        if (ctx->pc != 0x182810u) { return; }
    }
    ctx->pc = 0x182810u;
    // 0x182810: 0x3d31021  addu        $v0, $fp, $s3
    ctx->pc = 0x182810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x182814: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x182814u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x182818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x182818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18281c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x18281cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182820: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x182820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x182824: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x182824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182828: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x182828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18282c: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x18282cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x182830: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x182830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x182834: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182834u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x182838: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x182838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18283c: 0xc060864  jal         func_182190
    ctx->pc = 0x18283Cu;
    SET_GPR_U32(ctx, 31, 0x182844u);
    ctx->pc = 0x182840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18283Cu;
            // 0x182840: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182844u; }
        if (ctx->pc != 0x182844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182844u; }
        if (ctx->pc != 0x182844u) { return; }
    }
    ctx->pc = 0x182844u;
    // 0x182844: 0x27a414f8  addiu       $a0, $sp, 0x14F8
    ctx->pc = 0x182844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5368));
    // 0x182848: 0x27a514f4  addiu       $a1, $sp, 0x14F4
    ctx->pc = 0x182848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5364));
    // 0x18284c: 0xc060abc  jal         func_182AF0
    ctx->pc = 0x18284Cu;
    SET_GPR_U32(ctx, 31, 0x182854u);
    ctx->pc = 0x182850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18284Cu;
            // 0x182850: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182AF0u;
    if (runtime->hasFunction(0x182AF0u)) {
        auto targetFn = runtime->lookupFunction(0x182AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182854u; }
        if (ctx->pc != 0x182854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fontGetOfsUV_0x182af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182854u; }
        if (ctx->pc != 0x182854u) { return; }
    }
    ctx->pc = 0x182854u;
    // 0x182854: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x182854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x182858: 0x8fa514f8  lw          $a1, 0x14F8($sp)
    ctx->pc = 0x182858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5368)));
    // 0x18285c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182860: 0x8fa614f4  lw          $a2, 0x14F4($sp)
    ctx->pc = 0x182860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5364)));
    // 0x182864: 0xc060858  jal         func_182160
    ctx->pc = 0x182864u;
    SET_GPR_U32(ctx, 31, 0x18286Cu);
    ctx->pc = 0x182868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182864u;
            // 0x182868: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18286Cu; }
        if (ctx->pc != 0x18286Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18286Cu; }
        if (ctx->pc != 0x18286Cu) { return; }
    }
    ctx->pc = 0x18286Cu;
    // 0x18286c: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x18286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x182870: 0x8fa314f8  lw          $v1, 0x14F8($sp)
    ctx->pc = 0x182870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5368)));
    // 0x182874: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x182874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182878: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x182878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18287c: 0x8fa214f4  lw          $v0, 0x14F4($sp)
    ctx->pc = 0x18287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5364)));
    // 0x182880: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x182880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x182884: 0xc060858  jal         func_182160
    ctx->pc = 0x182884u;
    SET_GPR_U32(ctx, 31, 0x18288Cu);
    ctx->pc = 0x182888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182884u;
            // 0x182888: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18288Cu; }
        if (ctx->pc != 0x18288Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18288Cu; }
        if (ctx->pc != 0x18288Cu) { return; }
    }
    ctx->pc = 0x18288Cu;
    // 0x18288c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x18288cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x182890: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x182890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x182894: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x182894u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x182898: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x182898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x18289c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x18289cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1828a0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1828A0u;
    {
        const bool branch_taken_0x1828a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1828A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1828A0u;
            // 0x1828a4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1828a0) {
            ctx->pc = 0x1827D8u;
            goto label_1827d8;
        }
    }
    ctx->pc = 0x1828A8u;
label_1828a8:
    // 0x1828a8: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x1828a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x1828ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1828acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1828b0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1828b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1828b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828b8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1828b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1828bc: 0xc060850  jal         func_182140
    ctx->pc = 0x1828BCu;
    SET_GPR_U32(ctx, 31, 0x1828C4u);
    ctx->pc = 0x1828C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1828BCu;
            // 0x1828c0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182140u;
    if (runtime->hasFunction(0x182140u)) {
        auto targetFn = runtime->lookupFunction(0x182140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828C4u; }
        if (ctx->pc != 0x1828C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x182140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828C4u; }
        if (ctx->pc != 0x1828C4u) { return; }
    }
    ctx->pc = 0x1828C4u;
    // 0x1828c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1828c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1828c8: 0xc06084c  jal         func_182130
    ctx->pc = 0x1828C8u;
    SET_GPR_U32(ctx, 31, 0x1828D0u);
    ctx->pc = 0x1828CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1828C8u;
            // 0x1828cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182130u;
    if (runtime->hasFunction(0x182130u)) {
        auto targetFn = runtime->lookupFunction(0x182130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828D0u; }
        if (ctx->pc != 0x1828D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x182130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828D0u; }
        if (ctx->pc != 0x1828D0u) { return; }
    }
    ctx->pc = 0x1828D0u;
    // 0x1828d0: 0xc060848  jal         func_182120
    ctx->pc = 0x1828D0u;
    SET_GPR_U32(ctx, 31, 0x1828D8u);
    ctx->pc = 0x1828D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1828D0u;
            // 0x1828d4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182120u;
    if (runtime->hasFunction(0x182120u)) {
        auto targetFn = runtime->lookupFunction(0x182120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828D8u; }
        if (ctx->pc != 0x1828D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x182120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828D8u; }
        if (ctx->pc != 0x1828D8u) { return; }
    }
    ctx->pc = 0x1828D8u;
    // 0x1828d8: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x1828D8u;
    SET_GPR_U32(ctx, 31, 0x1828E0u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828E0u; }
        if (ctx->pc != 0x1828E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1828E0u; }
        if (ctx->pc != 0x1828E0u) { return; }
    }
    ctx->pc = 0x1828E0u;
    // 0x1828e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1828e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1828e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1828e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1828e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1828e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1828ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1828ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1828f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1828f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1828f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1828f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1828f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1828f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1828fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1828fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182908: 0x3e00008  jr          $ra
    ctx->pc = 0x182908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182908u;
            // 0x18290c: 0x27bd1500  addiu       $sp, $sp, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1827A0u: goto label_1827a0;
            case 0x1827D8u: goto label_1827d8;
            case 0x1828A8u: goto label_1828a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182910u;
}
