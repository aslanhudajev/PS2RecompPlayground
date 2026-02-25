#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrintButton
// Address: 0x1821a0 - 0x1822e8
void wrsPrintButton_0x1821a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrintButton_0x1821a0");
#endif

    ctx->pc = 0x1821a0u;

    // 0x1821a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1821a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1821a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1821a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1821a8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1821a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1821ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1821acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1821b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1821b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1821b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1821b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1821b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1821bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1821bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1821c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1821c4: 0x27b20074  addiu       $s2, $sp, 0x74
    ctx->pc = 0x1821c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1821c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1821c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1821cc: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x1821ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1821d0: 0xa3a6006f  sb          $a2, 0x6F($sp)
    ctx->pc = 0x1821d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 6));
    // 0x1821d4: 0x27b0007c  addiu       $s0, $sp, 0x7C
    ctx->pc = 0x1821d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1821d8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1821d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1821dc: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x1821dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1821e0: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x1821e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1821e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1821e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1821e8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1821e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1821ec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1821ECu;
    SET_GPR_U32(ctx, 31, 0x1821F4u);
    ctx->pc = 0x1821F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1821ECu;
            // 0x1821f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821F4u; }
        if (ctx->pc != 0x1821F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821F4u; }
        if (ctx->pc != 0x1821F4u) { return; }
    }
    ctx->pc = 0x1821F4u;
    // 0x1821f4: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x1821f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1821f8: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1821f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x1821fc: 0x24a3fffd  addiu       $v1, $a1, -0x3
    ctx->pc = 0x1821fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x182200: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x182200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x182204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182208: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182208u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x18220c: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x182210: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x182210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x182214: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x182214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x182218: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x182218u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18221c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18221cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x182220: 0xc060864  jal         func_182190
    ctx->pc = 0x182220u;
    SET_GPR_U32(ctx, 31, 0x182228u);
    ctx->pc = 0x182224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182220u;
            // 0x182224: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182228u; }
        if (ctx->pc != 0x182228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182228u; }
        if (ctx->pc != 0x182228u) { return; }
    }
    ctx->pc = 0x182228u;
    // 0x182228: 0x24c30018  addiu       $v1, $a2, 0x18
    ctx->pc = 0x182228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x18222c: 0x24a20015  addiu       $v0, $a1, 0x15
    ctx->pc = 0x18222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
    // 0x182230: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x182230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182238: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x182238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18223c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18223cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x182240: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x182240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x182244: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182244u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x182248: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x182248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x18224c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18224cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x182250: 0xc060864  jal         func_182190
    ctx->pc = 0x182250u;
    SET_GPR_U32(ctx, 31, 0x182258u);
    ctx->pc = 0x182254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182250u;
            // 0x182254: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182258u; }
        if (ctx->pc != 0x182258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182258u; }
        if (ctx->pc != 0x182258u) { return; }
    }
    ctx->pc = 0x182258u;
    // 0x182258: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x182258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x18225c: 0x27a500e4  addiu       $a1, $sp, 0xE4
    ctx->pc = 0x18225cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x182260: 0xc060abc  jal         func_182AF0
    ctx->pc = 0x182260u;
    SET_GPR_U32(ctx, 31, 0x182268u);
    ctx->pc = 0x182264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182260u;
            // 0x182264: 0x27a6006f  addiu       $a2, $sp, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182AF0u;
    if (runtime->hasFunction(0x182AF0u)) {
        auto targetFn = runtime->lookupFunction(0x182AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182268u; }
        if (ctx->pc != 0x182268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fontGetOfsUV_0x182af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182268u; }
        if (ctx->pc != 0x182268u) { return; }
    }
    ctx->pc = 0x182268u;
    // 0x182268: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x182268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x18226c: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x18226cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x182270: 0xc060858  jal         func_182160
    ctx->pc = 0x182270u;
    SET_GPR_U32(ctx, 31, 0x182278u);
    ctx->pc = 0x182274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182270u;
            // 0x182274: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182278u; }
        if (ctx->pc != 0x182278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182278u; }
        if (ctx->pc != 0x182278u) { return; }
    }
    ctx->pc = 0x182278u;
    // 0x182278: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x182278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18227c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x18227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x182280: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x182280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x182284: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x182284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x182288: 0x24650018  addiu       $a1, $v1, 0x18
    ctx->pc = 0x182288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x18228c: 0xc060858  jal         func_182160
    ctx->pc = 0x18228Cu;
    SET_GPR_U32(ctx, 31, 0x182294u);
    ctx->pc = 0x182290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18228Cu;
            // 0x182290: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182294u; }
        if (ctx->pc != 0x182294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182294u; }
        if (ctx->pc != 0x182294u) { return; }
    }
    ctx->pc = 0x182294u;
    // 0x182294: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x182294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x182298: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x182298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18229c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x18229cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822a0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1822a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822a4: 0xc060850  jal         func_182140
    ctx->pc = 0x1822A4u;
    SET_GPR_U32(ctx, 31, 0x1822ACu);
    ctx->pc = 0x1822A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1822A4u;
            // 0x1822a8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182140u;
    if (runtime->hasFunction(0x182140u)) {
        auto targetFn = runtime->lookupFunction(0x182140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822ACu; }
        if (ctx->pc != 0x1822ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x182140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822ACu; }
        if (ctx->pc != 0x1822ACu) { return; }
    }
    ctx->pc = 0x1822ACu;
    // 0x1822ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1822acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1822b0: 0xc06084c  jal         func_182130
    ctx->pc = 0x1822B0u;
    SET_GPR_U32(ctx, 31, 0x1822B8u);
    ctx->pc = 0x1822B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1822B0u;
            // 0x1822b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182130u;
    if (runtime->hasFunction(0x182130u)) {
        auto targetFn = runtime->lookupFunction(0x182130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822B8u; }
        if (ctx->pc != 0x1822B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x182130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822B8u; }
        if (ctx->pc != 0x1822B8u) { return; }
    }
    ctx->pc = 0x1822B8u;
    // 0x1822b8: 0xc060848  jal         func_182120
    ctx->pc = 0x1822B8u;
    SET_GPR_U32(ctx, 31, 0x1822C0u);
    ctx->pc = 0x182120u;
    if (runtime->hasFunction(0x182120u)) {
        auto targetFn = runtime->lookupFunction(0x182120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822C0u; }
        if (ctx->pc != 0x1822C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x182120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822C0u; }
        if (ctx->pc != 0x1822C0u) { return; }
    }
    ctx->pc = 0x1822C0u;
    // 0x1822c0: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x1822C0u;
    SET_GPR_U32(ctx, 31, 0x1822C8u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822C8u; }
        if (ctx->pc != 0x1822C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822C8u; }
        if (ctx->pc != 0x1822C8u) { return; }
    }
    ctx->pc = 0x1822C8u;
    // 0x1822c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1822c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1822cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1822ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1822d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1822d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1822d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1822d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1822d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1822d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1822dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1822dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1822e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1822E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1822E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1822E0u;
            // 0x1822e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1822E8u;
}
