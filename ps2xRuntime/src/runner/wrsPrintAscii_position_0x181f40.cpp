#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrintAscii_position
// Address: 0x181f40 - 0x182118
void wrsPrintAscii_position_0x181f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrintAscii_position_0x181f40");
#endif

    ctx->pc = 0x181f40u;

    // 0x181f40: 0x27bdeb00  addiu       $sp, $sp, -0x1500
    ctx->pc = 0x181f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294961920));
    // 0x181f44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x181f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x181f48: 0x27a30af0  addiu       $v1, $sp, 0xAF0
    ctx->pc = 0x181f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2800));
    // 0x181f4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x181f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x181f50: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x181f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x181f54: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x181f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x181f58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x181f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x181f5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x181f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x181f60: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x181f60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x181f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x181f68: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x181f68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x181f70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x181f74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181f7c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x181f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x181f80: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x181f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x181f84: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x181f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x181f88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x181f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x181f8c: 0x27a314fc  addiu       $v1, $sp, 0x14FC
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5372));
    // 0x181f90: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x181f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x181f94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x181f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x181f98: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x181f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x181f9c: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x181f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x181fa0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x181FA0u;
    SET_GPR_U32(ctx, 31, 0x181FA8u);
    ctx->pc = 0x181FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181FA0u;
            // 0x181fa4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FA8u; }
        if (ctx->pc != 0x181FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FA8u; }
        if (ctx->pc != 0x181FA8u) { return; }
    }
    ctx->pc = 0x181FA8u;
    // 0x181fa8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x181fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x181fac: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x181facu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x181fb0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x181FB0u;
    {
        const bool branch_taken_0x181fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181FB0u;
            // 0x181fb4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fb0) {
            ctx->pc = 0x1820A8u;
            goto label_1820a8;
        }
    }
    ctx->pc = 0x181FB8u;
    // 0x181fb8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x181fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x181fbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x181fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x181fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fc4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x181fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181fc8: 0x2c2b821  addu        $s7, $s6, $v0
    ctx->pc = 0x181fc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x181fcc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x181fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x181fd0: 0x2c2f021  addu        $fp, $s6, $v0
    ctx->pc = 0x181fd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x181fd4: 0x0  nop
    ctx->pc = 0x181fd4u;
    // NOP
label_181fd8:
    // 0x181fd8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x181fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x181fdc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x181fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x181fe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x181fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181fe4: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x181fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x181fe8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x181fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181fec: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x181fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x181ff0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x181ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x181ff4: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x181ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x181ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x181ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181ffc: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x181ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x182000: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182000u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x182004: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x182004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x182008: 0xc060864  jal         func_182190
    ctx->pc = 0x182008u;
    SET_GPR_U32(ctx, 31, 0x182010u);
    ctx->pc = 0x18200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182008u;
            // 0x18200c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182010u; }
        if (ctx->pc != 0x182010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182010u; }
        if (ctx->pc != 0x182010u) { return; }
    }
    ctx->pc = 0x182010u;
    // 0x182010: 0x3d31021  addu        $v0, $fp, $s3
    ctx->pc = 0x182010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x182014: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x182014u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x182018: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x182018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18201c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x18201cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182020: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x182020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x182024: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x182024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182028: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x182028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18202c: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x18202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x182030: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x182030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x182034: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x182034u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x182038: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x182038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18203c: 0xc060864  jal         func_182190
    ctx->pc = 0x18203Cu;
    SET_GPR_U32(ctx, 31, 0x182044u);
    ctx->pc = 0x182040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18203Cu;
            // 0x182040: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x182190u;
    if (runtime->hasFunction(0x182190u)) {
        auto targetFn = runtime->lookupFunction(0x182190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182044u; }
        if (ctx->pc != 0x182044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182044u; }
        if (ctx->pc != 0x182044u) { return; }
    }
    ctx->pc = 0x182044u;
    // 0x182044: 0x27a414f8  addiu       $a0, $sp, 0x14F8
    ctx->pc = 0x182044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5368));
    // 0x182048: 0x27a514f4  addiu       $a1, $sp, 0x14F4
    ctx->pc = 0x182048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5364));
    // 0x18204c: 0xc060abc  jal         func_182AF0
    ctx->pc = 0x18204Cu;
    SET_GPR_U32(ctx, 31, 0x182054u);
    ctx->pc = 0x182050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18204Cu;
            // 0x182050: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182AF0u;
    if (runtime->hasFunction(0x182AF0u)) {
        auto targetFn = runtime->lookupFunction(0x182AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182054u; }
        if (ctx->pc != 0x182054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fontGetOfsUV_0x182af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182054u; }
        if (ctx->pc != 0x182054u) { return; }
    }
    ctx->pc = 0x182054u;
    // 0x182054: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x182058: 0x8fa514f8  lw          $a1, 0x14F8($sp)
    ctx->pc = 0x182058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5368)));
    // 0x18205c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182060: 0x8fa614f4  lw          $a2, 0x14F4($sp)
    ctx->pc = 0x182060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5364)));
    // 0x182064: 0xc060858  jal         func_182160
    ctx->pc = 0x182064u;
    SET_GPR_U32(ctx, 31, 0x18206Cu);
    ctx->pc = 0x182068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182064u;
            // 0x182068: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18206Cu; }
        if (ctx->pc != 0x18206Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18206Cu; }
        if (ctx->pc != 0x18206Cu) { return; }
    }
    ctx->pc = 0x18206Cu;
    // 0x18206c: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x18206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x182070: 0x8fa314f8  lw          $v1, 0x14F8($sp)
    ctx->pc = 0x182070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5368)));
    // 0x182074: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x182074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182078: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x182078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18207c: 0x8fa214f4  lw          $v0, 0x14F4($sp)
    ctx->pc = 0x18207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5364)));
    // 0x182080: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x182080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x182084: 0xc060858  jal         func_182160
    ctx->pc = 0x182084u;
    SET_GPR_U32(ctx, 31, 0x18208Cu);
    ctx->pc = 0x182088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182084u;
            // 0x182088: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182160u;
    if (runtime->hasFunction(0x182160u)) {
        auto targetFn = runtime->lookupFunction(0x182160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18208Cu; }
        if (ctx->pc != 0x18208Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x182160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18208Cu; }
        if (ctx->pc != 0x18208Cu) { return; }
    }
    ctx->pc = 0x18208Cu;
    // 0x18208c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x18208cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x182090: 0x2769821  addu        $s3, $s3, $s6
    ctx->pc = 0x182090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x182094: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x182094u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x182098: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x182098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x18209c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x18209cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1820a0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1820A0u;
    {
        const bool branch_taken_0x1820a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1820A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1820A0u;
            // 0x1820a4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820a0) {
            ctx->pc = 0x181FD8u;
            goto label_181fd8;
        }
    }
    ctx->pc = 0x1820A8u;
label_1820a8:
    // 0x1820a8: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x1820a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x1820ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1820acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1820b0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1820b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1820b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1820b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820b8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1820b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820bc: 0xc060850  jal         func_182140
    ctx->pc = 0x1820BCu;
    SET_GPR_U32(ctx, 31, 0x1820C4u);
    ctx->pc = 0x1820C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820BCu;
            // 0x1820c0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182140u;
    if (runtime->hasFunction(0x182140u)) {
        auto targetFn = runtime->lookupFunction(0x182140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820C4u; }
        if (ctx->pc != 0x1820C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x182140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820C4u; }
        if (ctx->pc != 0x1820C4u) { return; }
    }
    ctx->pc = 0x1820C4u;
    // 0x1820c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1820c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1820c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1820c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1820cc: 0xc06084c  jal         func_182130
    ctx->pc = 0x1820CCu;
    SET_GPR_U32(ctx, 31, 0x1820D4u);
    ctx->pc = 0x1820D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820CCu;
            // 0x1820d0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182130u;
    if (runtime->hasFunction(0x182130u)) {
        auto targetFn = runtime->lookupFunction(0x182130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820D4u; }
        if (ctx->pc != 0x1820D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x182130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820D4u; }
        if (ctx->pc != 0x1820D4u) { return; }
    }
    ctx->pc = 0x1820D4u;
    // 0x1820d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1820d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820d8: 0xc060848  jal         func_182120
    ctx->pc = 0x1820D8u;
    SET_GPR_U32(ctx, 31, 0x1820E0u);
    ctx->pc = 0x1820DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820D8u;
            // 0x1820dc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182120u;
    if (runtime->hasFunction(0x182120u)) {
        auto targetFn = runtime->lookupFunction(0x182120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820E0u; }
        if (ctx->pc != 0x1820E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x182120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820E0u; }
        if (ctx->pc != 0x1820E0u) { return; }
    }
    ctx->pc = 0x1820E0u;
    // 0x1820e0: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x1820E0u;
    SET_GPR_U32(ctx, 31, 0x1820E8u);
    ctx->pc = 0x1820E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1820E0u;
            // 0x1820e4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820E8u; }
        if (ctx->pc != 0x1820E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1820E8u; }
        if (ctx->pc != 0x1820E8u) { return; }
    }
    ctx->pc = 0x1820E8u;
    // 0x1820e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1820e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1820ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1820ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1820f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1820f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1820f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1820f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1820f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1820f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1820fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1820fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182100: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182104: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18210c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18210cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182110: 0x3e00008  jr          $ra
    ctx->pc = 0x182110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182110u;
            // 0x182114: 0x27bd1500  addiu       $sp, $sp, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181FD8u: goto label_181fd8;
            case 0x1820A8u: goto label_1820a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182118u;
}
