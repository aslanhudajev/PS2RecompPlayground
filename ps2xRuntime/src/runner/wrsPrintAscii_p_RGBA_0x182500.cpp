#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrintAscii_p_RGBA
// Address: 0x182500 - 0x18271c
void wrsPrintAscii_p_RGBA_0x182500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrintAscii_p_RGBA_0x182500");
#endif

    ctx->pc = 0x182500u;

    // 0x182500: 0x27bdead0  addiu       $sp, $sp, -0x1530
    ctx->pc = 0x182500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294961872));
    // 0x182504: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x182504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x182508: 0x27a30b20  addiu       $v1, $sp, 0xB20
    ctx->pc = 0x182508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2848));
    // 0x18250c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x182510: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x182510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x182514: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x182514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x182518: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x182518u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18251c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x182520: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x182520u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182524: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x182524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x182528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18252c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x18252cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182530: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182534: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x182534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18253c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x182544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182548: 0xafaa00ec  sw          $t2, 0xEC($sp)
    ctx->pc = 0x182548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 10));
    // 0x18254c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18254cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182550: 0xafab00e8  sw          $t3, 0xE8($sp)
    ctx->pc = 0x182550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 11));
    // 0x182554: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x182554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x182558: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x182558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18255c: 0x27a3152c  addiu       $v1, $sp, 0x152C
    ctx->pc = 0x18255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5420));
    // 0x182560: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x182560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x182564: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x182564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x182568: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x182568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x18256c: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x18256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x182570: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x182570u;
    SET_GPR_U32(ctx, 31, 0x182578u);
    ctx->pc = 0x182574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182570u;
            // 0x182574: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182578u; }
        if (ctx->pc != 0x182578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182578u; }
        if (ctx->pc != 0x182578u) { return; }
    }
    ctx->pc = 0x182578u;
    // 0x182578: 0x2911818  mult        $v1, $s4, $s1
    ctx->pc = 0x182578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18257c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x18257cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x182580: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x182580u;
    {
        const bool branch_taken_0x182580 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x182584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182580u;
            // 0x182584: 0x141043  sra         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182580) {
            ctx->pc = 0x182590u;
            goto label_182590;
        }
    }
    ctx->pc = 0x182588u;
    // 0x182588: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x182588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18258c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x18258cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_182590:
    // 0x182590: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x182590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182594: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x182594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x182598: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x182598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x18259c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x18259cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1825a0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1825a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1825a4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1825A4u;
    {
        const bool branch_taken_0x1825a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1825A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1825A4u;
            // 0x1825a8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825a4) {
            ctx->pc = 0x1826A8u;
            goto label_1826a8;
        }
    }
    ctx->pc = 0x1825ACu;
    // 0x1825ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1825acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1825b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1825b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1825b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825b8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1825b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1825bc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1825bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1825c0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1825c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1825c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1825c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1825c8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1825c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1825cc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1825ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1825d0:
    // 0x1825d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1825d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1825d4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1825d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1825d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1825d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1825dc: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1825dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1825e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1825e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1825e4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1825e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1825e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1825e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1825ec: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1825ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1825f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1825f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1825f4: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x1825f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x1825f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1825f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1825fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1825fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x182600: 0xc060864  jal         func_182190
    ctx->pc = 0x182600u;
    SET_GPR_U32(ctx, 31, 0x182608u);
    ctx->pc = 0x182604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182600u;
            // 0x182604: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182608u; }
        if (ctx->pc != 0x182608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182608u; }
        if (ctx->pc != 0x182608u) { return; }
    }
    ctx->pc = 0x182608u;
    // 0x182608: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x182608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18260c: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x18260cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x182610: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x182610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x182614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x182614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182618: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x182618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x18261c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182620: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x182620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x182624: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x182624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x182628: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x182628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18262c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18262cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182630: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x182630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x182634: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182634u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x182638: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x182638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18263c: 0xc060864  jal         func_182190
    ctx->pc = 0x18263Cu;
    SET_GPR_U32(ctx, 31, 0x182644u);
    ctx->pc = 0x182640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18263Cu;
            // 0x182640: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182644u; }
        if (ctx->pc != 0x182644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182644u; }
        if (ctx->pc != 0x182644u) { return; }
    }
    ctx->pc = 0x182644u;
    // 0x182644: 0x27a41528  addiu       $a0, $sp, 0x1528
    ctx->pc = 0x182644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5416));
    // 0x182648: 0x27a51524  addiu       $a1, $sp, 0x1524
    ctx->pc = 0x182648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5412));
    // 0x18264c: 0xc060abc  jal         func_182AF0
    ctx->pc = 0x18264Cu;
    SET_GPR_U32(ctx, 31, 0x182654u);
    ctx->pc = 0x182650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18264Cu;
            // 0x182650: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182AF0u;
    if (runtime->hasFunction(0x182AF0u)) {
        auto targetFn = runtime->lookupFunction(0x182AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182654u; }
        if (ctx->pc != 0x182654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fontGetOfsUV_0x182af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182654u; }
        if (ctx->pc != 0x182654u) { return; }
    }
    ctx->pc = 0x182654u;
    // 0x182654: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x182654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x182658: 0x8fa51528  lw          $a1, 0x1528($sp)
    ctx->pc = 0x182658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5416)));
    // 0x18265c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182660: 0x8fa61524  lw          $a2, 0x1524($sp)
    ctx->pc = 0x182660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5412)));
    // 0x182664: 0xc060858  jal         func_182160
    ctx->pc = 0x182664u;
    SET_GPR_U32(ctx, 31, 0x18266Cu);
    ctx->pc = 0x182668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182664u;
            // 0x182668: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18266Cu; }
        if (ctx->pc != 0x18266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18266Cu; }
        if (ctx->pc != 0x18266Cu) { return; }
    }
    ctx->pc = 0x18266Cu;
    // 0x18266c: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x18266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x182670: 0x8fa31528  lw          $v1, 0x1528($sp)
    ctx->pc = 0x182670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5416)));
    // 0x182674: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x182674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182678: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x182678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18267c: 0x8fa21524  lw          $v0, 0x1524($sp)
    ctx->pc = 0x18267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5412)));
    // 0x182680: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x182680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x182684: 0xc060858  jal         func_182160
    ctx->pc = 0x182684u;
    SET_GPR_U32(ctx, 31, 0x18268Cu);
    ctx->pc = 0x182688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182684u;
            // 0x182688: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18268Cu; }
        if (ctx->pc != 0x18268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18268Cu; }
        if (ctx->pc != 0x18268Cu) { return; }
    }
    ctx->pc = 0x18268Cu;
    // 0x18268c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x18268cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x182690: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x182690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x182694: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x182694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x182698: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x182698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x18269c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x18269cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1826a0: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1826A0u;
    {
        const bool branch_taken_0x1826a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1826A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1826A0u;
            // 0x1826a4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826a0) {
            ctx->pc = 0x1825D0u;
            goto label_1825d0;
        }
    }
    ctx->pc = 0x1826A8u;
label_1826a8:
    // 0x1826a8: 0x93a200ec  lbu         $v0, 0xEC($sp)
    ctx->pc = 0x1826a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1826ac: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x1826acu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 23), _mm_cvtsi32_si128((int)255u)));
    // 0x1826b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1826b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826b4: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x1826b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1826b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1826b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826bc: 0x27a200fc  addiu       $v0, $sp, 0xFC
    ctx->pc = 0x1826bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x1826c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1826c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1826c4: 0xc060850  jal         func_182140
    ctx->pc = 0x1826C4u;
    SET_GPR_U32(ctx, 31, 0x1826CCu);
    ctx->pc = 0x1826C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1826C4u;
            // 0x1826c8: 0x33c600ff  andi        $a2, $fp, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182140u;
    if (runtime->hasFunction(0x182140u)) {
        auto targetFn = runtime->lookupFunction(0x182140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826CCu; }
        if (ctx->pc != 0x1826CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x182140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826CCu; }
        if (ctx->pc != 0x1826CCu) { return; }
    }
    ctx->pc = 0x1826CCu;
    // 0x1826cc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1826ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1826d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1826d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1826d4: 0xc06084c  jal         func_182130
    ctx->pc = 0x1826D4u;
    SET_GPR_U32(ctx, 31, 0x1826DCu);
    ctx->pc = 0x1826D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1826D4u;
            // 0x1826d8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182130u;
    if (runtime->hasFunction(0x182130u)) {
        auto targetFn = runtime->lookupFunction(0x182130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826DCu; }
        if (ctx->pc != 0x1826DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x182130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826DCu; }
        if (ctx->pc != 0x1826DCu) { return; }
    }
    ctx->pc = 0x1826DCu;
    // 0x1826dc: 0xc060848  jal         func_182120
    ctx->pc = 0x1826DCu;
    SET_GPR_U32(ctx, 31, 0x1826E4u);
    ctx->pc = 0x1826E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1826DCu;
            // 0x1826e0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182120u;
    if (runtime->hasFunction(0x182120u)) {
        auto targetFn = runtime->lookupFunction(0x182120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826E4u; }
        if (ctx->pc != 0x1826E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x182120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826E4u; }
        if (ctx->pc != 0x1826E4u) { return; }
    }
    ctx->pc = 0x1826E4u;
    // 0x1826e4: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x1826E4u;
    SET_GPR_U32(ctx, 31, 0x1826ECu);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826ECu; }
        if (ctx->pc != 0x1826ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826ECu; }
        if (ctx->pc != 0x1826ECu) { return; }
    }
    ctx->pc = 0x1826ECu;
    // 0x1826ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1826ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1826f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1826f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1826f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1826f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1826f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1826f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1826fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1826fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182700: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x182700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182704: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182708: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18270c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18270cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182714: 0x3e00008  jr          $ra
    ctx->pc = 0x182714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182714u;
            // 0x182718: 0x27bd1530  addiu       $sp, $sp, 0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182590u: goto label_182590;
            case 0x1825D0u: goto label_1825d0;
            case 0x1826A8u: goto label_1826a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18271Cu;
}
