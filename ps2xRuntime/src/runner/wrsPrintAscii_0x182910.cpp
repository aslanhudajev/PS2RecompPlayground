#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrintAscii
// Address: 0x182910 - 0x182af0
void wrsPrintAscii_0x182910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrintAscii_0x182910");
#endif

    ctx->pc = 0x182910u;

    // 0x182910: 0x27bdeb00  addiu       $sp, $sp, -0x1500
    ctx->pc = 0x182910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294961920));
    // 0x182914: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x182914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x182918: 0x27a30af0  addiu       $v1, $sp, 0xAF0
    ctx->pc = 0x182918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2800));
    // 0x18291c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x182920: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x182920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x182924: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x182924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x182928: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x182928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18292c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x182930: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x182930u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182934: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x182938: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x182938u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18293c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182944: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18294c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18294cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182950: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x182950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x182954: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x182954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182958: 0x27a314fc  addiu       $v1, $sp, 0x14FC
    ctx->pc = 0x182958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5372));
    // 0x18295c: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x18295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x182960: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x182960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x182964: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x182964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x182968: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x182968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x18296c: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x18296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x182970: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x182970u;
    SET_GPR_U32(ctx, 31, 0x182978u);
    ctx->pc = 0x182974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182970u;
            // 0x182974: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182978u; }
        if (ctx->pc != 0x182978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182978u; }
        if (ctx->pc != 0x182978u) { return; }
    }
    ctx->pc = 0x182978u;
    // 0x182978: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x182978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x18297c: 0x2d11018  mult        $v0, $s6, $s1
    ctx->pc = 0x18297cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x182980: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x182980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x182984: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x182984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x182988: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x182988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x18298c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x18298cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x182990: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x182990u;
    {
        const bool branch_taken_0x182990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182990u;
            // 0x182994: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182990) {
            ctx->pc = 0x182A88u;
            goto label_182a88;
        }
    }
    ctx->pc = 0x182998u;
    // 0x182998: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x182998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18299c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18299cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1829a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1829a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1829a8: 0x2c2b821  addu        $s7, $s6, $v0
    ctx->pc = 0x1829a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1829ac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1829acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1829b0: 0x2c2f021  addu        $fp, $s6, $v0
    ctx->pc = 0x1829b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1829b4: 0x0  nop
    ctx->pc = 0x1829b4u;
    // NOP
label_1829b8:
    // 0x1829b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1829b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1829bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1829bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1829c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1829c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1829c4: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1829c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1829c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1829c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1829cc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1829ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1829d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1829d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1829d4: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1829d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1829d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1829d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1829dc: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x1829dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x1829e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1829e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1829e4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1829e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1829e8: 0xc060864  jal         func_182190
    ctx->pc = 0x1829E8u;
    SET_GPR_U32(ctx, 31, 0x1829F0u);
    ctx->pc = 0x1829ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1829E8u;
            // 0x1829ec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829F0u; }
        if (ctx->pc != 0x1829F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829F0u; }
        if (ctx->pc != 0x1829F0u) { return; }
    }
    ctx->pc = 0x1829F0u;
    // 0x1829f0: 0x3d31021  addu        $v0, $fp, $s3
    ctx->pc = 0x1829f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x1829f4: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1829f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1829f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1829f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1829fc: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x1829fcu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182a00: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x182a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x182a04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x182a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182a08: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x182a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x182a0c: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x182a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x182a10: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x182a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x182a14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182a14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x182a18: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x182a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x182a1c: 0xc060864  jal         func_182190
    ctx->pc = 0x182A1Cu;
    SET_GPR_U32(ctx, 31, 0x182A24u);
    ctx->pc = 0x182A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A1Cu;
            // 0x182a20: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A24u; }
        if (ctx->pc != 0x182A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A24u; }
        if (ctx->pc != 0x182A24u) { return; }
    }
    ctx->pc = 0x182A24u;
    // 0x182a24: 0x27a414f8  addiu       $a0, $sp, 0x14F8
    ctx->pc = 0x182a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5368));
    // 0x182a28: 0x27a514f4  addiu       $a1, $sp, 0x14F4
    ctx->pc = 0x182a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5364));
    // 0x182a2c: 0xc060abc  jal         func_182AF0
    ctx->pc = 0x182A2Cu;
    SET_GPR_U32(ctx, 31, 0x182A34u);
    ctx->pc = 0x182A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A2Cu;
            // 0x182a30: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182AF0u;
    if (runtime->hasFunction(0x182AF0u)) {
        auto targetFn = runtime->lookupFunction(0x182AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A34u; }
        if (ctx->pc != 0x182A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fontGetOfsUV_0x182af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A34u; }
        if (ctx->pc != 0x182A34u) { return; }
    }
    ctx->pc = 0x182A34u;
    // 0x182a34: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x182a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x182a38: 0x8fa514f8  lw          $a1, 0x14F8($sp)
    ctx->pc = 0x182a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5368)));
    // 0x182a3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x182a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182a40: 0x8fa614f4  lw          $a2, 0x14F4($sp)
    ctx->pc = 0x182a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5364)));
    // 0x182a44: 0xc060858  jal         func_182160
    ctx->pc = 0x182A44u;
    SET_GPR_U32(ctx, 31, 0x182A4Cu);
    ctx->pc = 0x182A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A44u;
            // 0x182a48: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A4Cu; }
        if (ctx->pc != 0x182A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A4Cu; }
        if (ctx->pc != 0x182A4Cu) { return; }
    }
    ctx->pc = 0x182A4Cu;
    // 0x182a4c: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x182a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x182a50: 0x8fa314f8  lw          $v1, 0x14F8($sp)
    ctx->pc = 0x182a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5368)));
    // 0x182a54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x182a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182a58: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x182a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x182a5c: 0x8fa214f4  lw          $v0, 0x14F4($sp)
    ctx->pc = 0x182a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5364)));
    // 0x182a60: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x182a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x182a64: 0xc060858  jal         func_182160
    ctx->pc = 0x182A64u;
    SET_GPR_U32(ctx, 31, 0x182A6Cu);
    ctx->pc = 0x182A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A64u;
            // 0x182a68: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A6Cu; }
        if (ctx->pc != 0x182A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182A6Cu; }
        if (ctx->pc != 0x182A6Cu) { return; }
    }
    ctx->pc = 0x182A6Cu;
    // 0x182a6c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x182a6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x182a70: 0x2769821  addu        $s3, $s3, $s6
    ctx->pc = 0x182a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x182a74: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x182a74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x182a78: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x182a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x182a7c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x182a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x182a80: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x182A80u;
    {
        const bool branch_taken_0x182a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A80u;
            // 0x182a84: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a80) {
            ctx->pc = 0x1829B8u;
            goto label_1829b8;
        }
    }
    ctx->pc = 0x182A88u;
label_182a88:
    // 0x182a88: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x182a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x182a8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x182a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182a90: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x182a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x182a94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x182a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a98: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x182a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a9c: 0xc060850  jal         func_182140
    ctx->pc = 0x182A9Cu;
    SET_GPR_U32(ctx, 31, 0x182AA4u);
    ctx->pc = 0x182AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182A9Cu;
            // 0x182aa0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182140u;
    if (runtime->hasFunction(0x182140u)) {
        auto targetFn = runtime->lookupFunction(0x182140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AA4u; }
        if (ctx->pc != 0x182AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x182140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AA4u; }
        if (ctx->pc != 0x182AA4u) { return; }
    }
    ctx->pc = 0x182AA4u;
    // 0x182aa4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x182aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x182aa8: 0xc06084c  jal         func_182130
    ctx->pc = 0x182AA8u;
    SET_GPR_U32(ctx, 31, 0x182AB0u);
    ctx->pc = 0x182AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182AA8u;
            // 0x182aac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182130u;
    if (runtime->hasFunction(0x182130u)) {
        auto targetFn = runtime->lookupFunction(0x182130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AB0u; }
        if (ctx->pc != 0x182AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x182130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AB0u; }
        if (ctx->pc != 0x182AB0u) { return; }
    }
    ctx->pc = 0x182AB0u;
    // 0x182ab0: 0xc060848  jal         func_182120
    ctx->pc = 0x182AB0u;
    SET_GPR_U32(ctx, 31, 0x182AB8u);
    ctx->pc = 0x182AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182AB0u;
            // 0x182ab4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182120u;
    if (runtime->hasFunction(0x182120u)) {
        auto targetFn = runtime->lookupFunction(0x182120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AB8u; }
        if (ctx->pc != 0x182AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x182120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AB8u; }
        if (ctx->pc != 0x182AB8u) { return; }
    }
    ctx->pc = 0x182AB8u;
    // 0x182ab8: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x182AB8u;
    SET_GPR_U32(ctx, 31, 0x182AC0u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AC0u; }
        if (ctx->pc != 0x182AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AC0u; }
        if (ctx->pc != 0x182AC0u) { return; }
    }
    ctx->pc = 0x182AC0u;
    // 0x182ac0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x182ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x182ac4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x182ac4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x182ac8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x182ac8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182acc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x182accu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182ad0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x182ad0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182ad4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x182ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182ad8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182ad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182adc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x182AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182AE8u;
            // 0x182aec: 0x27bd1500  addiu       $sp, $sp, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1829B8u: goto label_1829b8;
            case 0x182A88u: goto label_182a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182AF0u;
}
