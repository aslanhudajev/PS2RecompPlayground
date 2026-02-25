#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrintAsciiRGBA
// Address: 0x1822f0 - 0x1824fc
void wrsPrintAsciiRGBA_0x1822f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrintAsciiRGBA_0x1822f0");
#endif

    ctx->pc = 0x1822f0u;

    // 0x1822f0: 0x27bdead0  addiu       $sp, $sp, -0x1530
    ctx->pc = 0x1822f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294961872));
    // 0x1822f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1822f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1822f8: 0x27a30b20  addiu       $v1, $sp, 0xB20
    ctx->pc = 0x1822f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2848));
    // 0x1822fc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1822fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x182300: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x182300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x182304: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x182304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x182308: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x182308u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18230c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x182310: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x182310u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182314: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x182314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x182318: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x182318u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18231c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x182320: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x182320u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182324: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18232c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x182334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182338: 0xafaa00ec  sw          $t2, 0xEC($sp)
    ctx->pc = 0x182338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 10));
    // 0x18233c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18233cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182340: 0xafab00e8  sw          $t3, 0xE8($sp)
    ctx->pc = 0x182340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 11));
    // 0x182344: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x182344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x182348: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x182348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18234c: 0x27a3152c  addiu       $v1, $sp, 0x152C
    ctx->pc = 0x18234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5420));
    // 0x182350: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x182350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x182354: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x182354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x182358: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x182358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x18235c: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x18235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x182360: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x182360u;
    SET_GPR_U32(ctx, 31, 0x182368u);
    ctx->pc = 0x182364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182360u;
            // 0x182364: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182368u; }
        if (ctx->pc != 0x182368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182368u; }
        if (ctx->pc != 0x182368u) { return; }
    }
    ctx->pc = 0x182368u;
    // 0x182368: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x182368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x18236c: 0x2d11018  mult        $v0, $s6, $s1
    ctx->pc = 0x18236cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x182370: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x182370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x182374: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x182374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x182378: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x182378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x18237c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x18237cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x182380: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x182380u;
    {
        const bool branch_taken_0x182380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182380u;
            // 0x182384: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182380) {
            ctx->pc = 0x182488u;
            goto label_182488;
        }
    }
    ctx->pc = 0x182388u;
    // 0x182388: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x182388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18238c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18238cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182390: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x182390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182394: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x182394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182398: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x182398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x18239c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x18239cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1823a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1823a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1823a4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1823a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1823a8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1823a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1823ac: 0x0  nop
    ctx->pc = 0x1823acu;
    // NOP
label_1823b0:
    // 0x1823b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1823b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1823b4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1823b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1823b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1823b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1823bc: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1823bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1823c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1823c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1823c4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1823c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1823c8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1823c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1823cc: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1823ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1823d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1823d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1823d4: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x1823d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x1823d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1823d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1823dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1823dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1823e0: 0xc060864  jal         func_182190
    ctx->pc = 0x1823E0u;
    SET_GPR_U32(ctx, 31, 0x1823E8u);
    ctx->pc = 0x1823E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1823E0u;
            // 0x1823e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823E8u; }
        if (ctx->pc != 0x1823E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823E8u; }
        if (ctx->pc != 0x1823E8u) { return; }
    }
    ctx->pc = 0x1823E8u;
    // 0x1823e8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1823e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1823ec: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1823ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1823f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1823f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1823f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1823f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1823f8: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1823f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1823fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1823fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182400: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x182400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x182404: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x182404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x182408: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x182408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18240c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18240cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182410: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x182414: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182414u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x182418: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x182418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18241c: 0xc060864  jal         func_182190
    ctx->pc = 0x18241Cu;
    SET_GPR_U32(ctx, 31, 0x182424u);
    ctx->pc = 0x182420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18241Cu;
            // 0x182420: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182424u; }
        if (ctx->pc != 0x182424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182424u; }
        if (ctx->pc != 0x182424u) { return; }
    }
    ctx->pc = 0x182424u;
    // 0x182424: 0x27a41528  addiu       $a0, $sp, 0x1528
    ctx->pc = 0x182424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5416));
    // 0x182428: 0x27a51524  addiu       $a1, $sp, 0x1524
    ctx->pc = 0x182428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5412));
    // 0x18242c: 0xc060abc  jal         func_182AF0
    ctx->pc = 0x18242Cu;
    SET_GPR_U32(ctx, 31, 0x182434u);
    ctx->pc = 0x182430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18242Cu;
            // 0x182430: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182AF0u;
    if (runtime->hasFunction(0x182AF0u)) {
        auto targetFn = runtime->lookupFunction(0x182AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182434u; }
        if (ctx->pc != 0x182434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fontGetOfsUV_0x182af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182434u; }
        if (ctx->pc != 0x182434u) { return; }
    }
    ctx->pc = 0x182434u;
    // 0x182434: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x182434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x182438: 0x8fa51528  lw          $a1, 0x1528($sp)
    ctx->pc = 0x182438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5416)));
    // 0x18243c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182440: 0x8fa61524  lw          $a2, 0x1524($sp)
    ctx->pc = 0x182440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5412)));
    // 0x182444: 0xc060858  jal         func_182160
    ctx->pc = 0x182444u;
    SET_GPR_U32(ctx, 31, 0x18244Cu);
    ctx->pc = 0x182448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182444u;
            // 0x182448: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18244Cu; }
        if (ctx->pc != 0x18244Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18244Cu; }
        if (ctx->pc != 0x18244Cu) { return; }
    }
    ctx->pc = 0x18244Cu;
    // 0x18244c: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x18244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x182450: 0x8fa31528  lw          $v1, 0x1528($sp)
    ctx->pc = 0x182450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5416)));
    // 0x182454: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x182454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182458: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x182458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18245c: 0x8fa21524  lw          $v0, 0x1524($sp)
    ctx->pc = 0x18245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5412)));
    // 0x182460: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x182460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x182464: 0xc060858  jal         func_182160
    ctx->pc = 0x182464u;
    SET_GPR_U32(ctx, 31, 0x18246Cu);
    ctx->pc = 0x182468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182464u;
            // 0x182468: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18246Cu; }
        if (ctx->pc != 0x18246Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18246Cu; }
        if (ctx->pc != 0x18246Cu) { return; }
    }
    ctx->pc = 0x18246Cu;
    // 0x18246c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x18246cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x182470: 0x2769821  addu        $s3, $s3, $s6
    ctx->pc = 0x182470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x182474: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x182474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x182478: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x182478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x18247c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x18247cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x182480: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x182480u;
    {
        const bool branch_taken_0x182480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182480u;
            // 0x182484: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182480) {
            ctx->pc = 0x1823B0u;
            goto label_1823b0;
        }
    }
    ctx->pc = 0x182488u;
label_182488:
    // 0x182488: 0x93a200ec  lbu         $v0, 0xEC($sp)
    ctx->pc = 0x182488u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x18248c: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x18248cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 23), _mm_cvtsi32_si128((int)255u)));
    // 0x182490: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x182490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182494: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x182494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x182498: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x182498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18249c: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x18249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x1824a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1824a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1824a4: 0xc060850  jal         func_182140
    ctx->pc = 0x1824A4u;
    SET_GPR_U32(ctx, 31, 0x1824ACu);
    ctx->pc = 0x1824A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1824A4u;
            // 0x1824a8: 0x33c600ff  andi        $a2, $fp, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182140u;
    if (runtime->hasFunction(0x182140u)) {
        auto targetFn = runtime->lookupFunction(0x182140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824ACu; }
        if (ctx->pc != 0x1824ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x182140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824ACu; }
        if (ctx->pc != 0x1824ACu) { return; }
    }
    ctx->pc = 0x1824ACu;
    // 0x1824ac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1824acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1824b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1824b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1824b4: 0xc06084c  jal         func_182130
    ctx->pc = 0x1824B4u;
    SET_GPR_U32(ctx, 31, 0x1824BCu);
    ctx->pc = 0x1824B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1824B4u;
            // 0x1824b8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182130u;
    if (runtime->hasFunction(0x182130u)) {
        auto targetFn = runtime->lookupFunction(0x182130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824BCu; }
        if (ctx->pc != 0x1824BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x182130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824BCu; }
        if (ctx->pc != 0x1824BCu) { return; }
    }
    ctx->pc = 0x1824BCu;
    // 0x1824bc: 0xc060848  jal         func_182120
    ctx->pc = 0x1824BCu;
    SET_GPR_U32(ctx, 31, 0x1824C4u);
    ctx->pc = 0x1824C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1824BCu;
            // 0x1824c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182120u;
    if (runtime->hasFunction(0x182120u)) {
        auto targetFn = runtime->lookupFunction(0x182120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824C4u; }
        if (ctx->pc != 0x1824C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x182120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824C4u; }
        if (ctx->pc != 0x1824C4u) { return; }
    }
    ctx->pc = 0x1824C4u;
    // 0x1824c4: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x1824C4u;
    SET_GPR_U32(ctx, 31, 0x1824CCu);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824CCu; }
        if (ctx->pc != 0x1824CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824CCu; }
        if (ctx->pc != 0x1824CCu) { return; }
    }
    ctx->pc = 0x1824CCu;
    // 0x1824cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1824ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1824d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1824d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1824d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1824d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1824d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1824d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1824dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1824dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1824e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1824e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1824e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1824e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1824e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1824e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1824ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1824ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1824f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1824f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1824f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1824F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1824F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1824F4u;
            // 0x1824f8: 0x27bd1530  addiu       $sp, $sp, 0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1823B0u: goto label_1823b0;
            case 0x182488u: goto label_182488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1824FCu;
}
