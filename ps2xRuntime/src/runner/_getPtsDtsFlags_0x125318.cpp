#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _getPtsDtsFlags
// Address: 0x125318 - 0x1254ac
void _getPtsDtsFlags_0x125318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_getPtsDtsFlags_0x125318");
#endif

    ctx->pc = 0x125318u;

    // 0x125318: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x125318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12531c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12531cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x125320: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x125320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x125324: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x125324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x125328: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x125328u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12532c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x12532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x125330: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x125330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125334: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x125334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x125338: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x125338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x12533c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x12533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x125340: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x125340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x125344: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x125344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x125348: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x125348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12534c: 0x8c4317bc  lw          $v1, 0x17BC($v0)
    ctx->pc = 0x12534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x125350: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x125350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x125354: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x125354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x125358: 0x8c730040  lw          $s3, 0x40($v1)
    ctx->pc = 0x125358u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x12535c: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x12535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x125360: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x125360u;
    {
        const bool branch_taken_0x125360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125360u;
            // 0x125364: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125360) {
            ctx->pc = 0x1253F8u;
            goto label_1253f8;
        }
    }
    ctx->pc = 0x125368u;
    // 0x125368: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x125368u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x12536c: 0x4430024  bgezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12536Cu;
    {
        const bool branch_taken_0x12536c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12536c) {
            ctx->pc = 0x125370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12536Cu;
            // 0x125370: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x125374u;
    // 0x125374: 0x8e770080  lw          $s7, 0x80($s3)
    ctx->pc = 0x125374u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x125378: 0x6e20021  bltzl       $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x125378u;
    {
        const bool branch_taken_0x125378 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x125378) {
            ctx->pc = 0x12537Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125378u;
            // 0x12537c: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x125380u;
    // 0x125380: 0xde700088  ld          $s0, 0x88($s3)
    ctx->pc = 0x125380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x125384: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x125384u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x125388: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x125388u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12538c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x12538cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x125390: 0x32120001  andi        $s2, $s0, 0x1
    ctx->pc = 0x125390u;
    SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x125394: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x125394u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x125398: 0xc049f28  jal         func_127CA0
    ctx->pc = 0x125398u;
    SET_GPR_U32(ctx, 31, 0x1253A0u);
    ctx->pc = 0x12539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125398u;
            // 0x12539c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127CA0u;
    if (runtime->hasFunction(0x127CA0u)) {
        auto targetFn = runtime->lookupFunction(0x127CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253A0u; }
        if (ctx->pc != 0x1253A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253A0u; }
        if (ctx->pc != 0x1253A0u) { return; }
    }
    ctx->pc = 0x1253A0u;
    // 0x1253a0: 0x8e760090  lw          $s6, 0x90($s3)
    ctx->pc = 0x1253a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1253a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1253a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253a8: 0xc049f28  jal         func_127CA0
    ctx->pc = 0x1253A8u;
    SET_GPR_U32(ctx, 31, 0x1253B0u);
    ctx->pc = 0x1253ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1253A8u;
            // 0x1253ac: 0x32c50001  andi        $a1, $s6, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 22), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127CA0u;
    if (runtime->hasFunction(0x127CA0u)) {
        auto targetFn = runtime->lookupFunction(0x127CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253B0u; }
        if (ctx->pc != 0x1253B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253B0u; }
        if (ctx->pc != 0x1253B0u) { return; }
    }
    ctx->pc = 0x1253B0u;
    // 0x1253b0: 0xde640078  ld          $a0, 0x78($s3)
    ctx->pc = 0x1253b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1253b4: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1253b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1253b8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x1253b8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1253bc: 0xc049f28  jal         func_127CA0
    ctx->pc = 0x1253BCu;
    SET_GPR_U32(ctx, 31, 0x1253C4u);
    ctx->pc = 0x1253C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1253BCu;
            // 0x1253c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127CA0u;
    if (runtime->hasFunction(0x127CA0u)) {
        auto targetFn = runtime->lookupFunction(0x127CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253C4u; }
        if (ctx->pc != 0x1253C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253C4u; }
        if (ctx->pc != 0x1253C4u) { return; }
    }
    ctx->pc = 0x1253C4u;
    // 0x1253c4: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x1253c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x1253c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1253c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1253cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1253ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1253d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1253d4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1253d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1253d8: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1253d8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1253dc: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x1253dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1253e0: 0xc049f28  jal         func_127CA0
    ctx->pc = 0x1253E0u;
    SET_GPR_U32(ctx, 31, 0x1253E8u);
    ctx->pc = 0x1253E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1253E0u;
            // 0x1253e4: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127CA0u;
    if (runtime->hasFunction(0x127CA0u)) {
        auto targetFn = runtime->lookupFunction(0x127CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253E8u; }
        if (ctx->pc != 0x1253E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x127ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253E8u; }
        if (ctx->pc != 0x1253E8u) { return; }
    }
    ctx->pc = 0x1253E8u;
    // 0x1253e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1253E8u;
    {
        const bool branch_taken_0x1253e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253E8u;
            // 0x1253ec: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253e8) {
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x1253F0u;
    // 0x1253f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1253F0u;
    {
        const bool branch_taken_0x1253f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253F0u;
            // 0x1253f4: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253f0) {
            ctx->pc = 0x125400u;
            goto label_125400;
        }
    }
    ctx->pc = 0x1253F8u;
label_1253f8:
    // 0x1253f8: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x1253f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1253fc: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1253fcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_125400:
    // 0x125400: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x125400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x125404: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x125404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125408: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x125408u;
    {
        const bool branch_taken_0x125408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x125408) {
            ctx->pc = 0x12540Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125408u;
            // 0x12540c: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125430u;
            goto label_125430;
        }
    }
    ctx->pc = 0x125410u;
    // 0x125410: 0xde6200f0  ld          $v0, 0xF0($s3)
    ctx->pc = 0x125410u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x125414: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x125414u;
    {
        const bool branch_taken_0x125414 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x125414) {
            ctx->pc = 0x125418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125414u;
            // 0x125418: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125430u;
            goto label_125430;
        }
    }
    ctx->pc = 0x12541Cu;
    // 0x12541c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x12541cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x125420: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125424: 0xae6000f8  sw          $zero, 0xF8($s3)
    ctx->pc = 0x125424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x125428: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x125428u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x12542c: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x12542cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_125430:
    // 0x125430: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x125430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x125434: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x125434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x125438: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x125438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x12543c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x12543cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x125440: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x125440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x125444: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x125444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x125448: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x125448u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12544c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x12544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x125450: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x125450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x125454: 0xde840020  ld          $a0, 0x20($s4)
    ctx->pc = 0x125454u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x125458: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x125458u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x12545c: 0x630f8  dsll        $a2, $a2, 3
    ctx->pc = 0x12545cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x125460: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x125460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x125464: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x125464u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x125468: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x125468u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x12546c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12546cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x125470: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x125470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x125474: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125474u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x125478: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x125478u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12547c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125480: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x125480u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125484: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x125484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125488: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x125488u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12548c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x12548cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125490: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x125490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125494: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x125494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125498: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x125498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12549c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12549cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1254a0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1254a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1254a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1254A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1254A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1254A4u;
            // 0x1254a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1253F8u: goto label_1253f8;
            case 0x125400u: goto label_125400;
            case 0x125430u: goto label_125430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1254ACu;
}
