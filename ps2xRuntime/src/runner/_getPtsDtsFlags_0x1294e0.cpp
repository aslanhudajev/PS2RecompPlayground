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
// Address: 0x1294e0 - 0x12966c
void _getPtsDtsFlags_0x1294e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_getPtsDtsFlags_0x1294e0");
#endif

    ctx->pc = 0x1294e0u;

    // 0x1294e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1294e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1294e4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1294e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1294e8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1294e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1294ec: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1294ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1294f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1294f4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1294f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294f8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1294f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1294fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1294fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129500: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x129500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x129504: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x129504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129508: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x129508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x12950c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x12950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x129510: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x129510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x129514: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x129514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x129518: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x129518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12951c: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x12951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x129520: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x129520u;
    {
        const bool branch_taken_0x129520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129520u;
            // 0x129524: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129520) {
            ctx->pc = 0x1295B8u;
            goto label_1295b8;
        }
    }
    ctx->pc = 0x129528u;
    // 0x129528: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x129528u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x12952c: 0x4430024  bgezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12952Cu;
    {
        const bool branch_taken_0x12952c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12952c) {
            ctx->pc = 0x129530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12952Cu;
            // 0x129530: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1295C0u;
            goto label_1295c0;
        }
    }
    ctx->pc = 0x129534u;
    // 0x129534: 0x8e770080  lw          $s7, 0x80($s3)
    ctx->pc = 0x129534u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x129538: 0x6e20021  bltzl       $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x129538u;
    {
        const bool branch_taken_0x129538 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x129538) {
            ctx->pc = 0x12953Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129538u;
            // 0x12953c: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1295C0u;
            goto label_1295c0;
        }
    }
    ctx->pc = 0x129540u;
    // 0x129540: 0xde700088  ld          $s0, 0x88($s3)
    ctx->pc = 0x129540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x129544: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x129544u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x129548: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x129548u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12954c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x12954cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x129550: 0x32120001  andi        $s2, $s0, 0x1
    ctx->pc = 0x129550u;
    SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x129554: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x129554u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x129558: 0xc040470  jal         func_1011C0
    ctx->pc = 0x129558u;
    SET_GPR_U32(ctx, 31, 0x129560u);
    ctx->pc = 0x12955Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129558u;
            // 0x12955c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1011C0u;
    if (runtime->hasFunction(0x1011C0u)) {
        auto targetFn = runtime->lookupFunction(0x1011C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129560u; }
        if (ctx->pc != 0x129560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x1011c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129560u; }
        if (ctx->pc != 0x129560u) { return; }
    }
    ctx->pc = 0x129560u;
    // 0x129560: 0x8e760090  lw          $s6, 0x90($s3)
    ctx->pc = 0x129560u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x129564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129568: 0xc040470  jal         func_1011C0
    ctx->pc = 0x129568u;
    SET_GPR_U32(ctx, 31, 0x129570u);
    ctx->pc = 0x12956Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129568u;
            // 0x12956c: 0x32c50001  andi        $a1, $s6, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 22), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1011C0u;
    if (runtime->hasFunction(0x1011C0u)) {
        auto targetFn = runtime->lookupFunction(0x1011C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129570u; }
        if (ctx->pc != 0x129570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x1011c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129570u; }
        if (ctx->pc != 0x129570u) { return; }
    }
    ctx->pc = 0x129570u;
    // 0x129570: 0xde640078  ld          $a0, 0x78($s3)
    ctx->pc = 0x129570u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x129574: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x129574u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129578: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x129578u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x12957c: 0xc040470  jal         func_1011C0
    ctx->pc = 0x12957Cu;
    SET_GPR_U32(ctx, 31, 0x129584u);
    ctx->pc = 0x129580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12957Cu;
            // 0x129580: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1011C0u;
    if (runtime->hasFunction(0x1011C0u)) {
        auto targetFn = runtime->lookupFunction(0x1011C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129584u; }
        if (ctx->pc != 0x129584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x1011c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129584u; }
        if (ctx->pc != 0x129584u) { return; }
    }
    ctx->pc = 0x129584u;
    // 0x129584: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x129584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x129588: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x129588u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12958c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129590: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x129590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x129594: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x129594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x129598: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x129598u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x12959c: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x12959cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1295a0: 0xc040470  jal         func_1011C0
    ctx->pc = 0x1295A0u;
    SET_GPR_U32(ctx, 31, 0x1295A8u);
    ctx->pc = 0x1295A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1295A0u;
            // 0x1295a4: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1011C0u;
    if (runtime->hasFunction(0x1011C0u)) {
        auto targetFn = runtime->lookupFunction(0x1011C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1295A8u; }
        if (ctx->pc != 0x1295A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x1011c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1295A8u; }
        if (ctx->pc != 0x1295A8u) { return; }
    }
    ctx->pc = 0x1295A8u;
    // 0x1295a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1295A8u;
    {
        const bool branch_taken_0x1295a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1295A8u;
            // 0x1295ac: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295a8) {
            ctx->pc = 0x1295C0u;
            goto label_1295c0;
        }
    }
    ctx->pc = 0x1295B0u;
    // 0x1295b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1295B0u;
    {
        const bool branch_taken_0x1295b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1295B0u;
            // 0x1295b4: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295b0) {
            ctx->pc = 0x1295C0u;
            goto label_1295c0;
        }
    }
    ctx->pc = 0x1295B8u;
label_1295b8:
    // 0x1295b8: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x1295b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1295bc: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1295bcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_1295c0:
    // 0x1295c0: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x1295c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x1295c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1295c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1295c8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1295C8u;
    {
        const bool branch_taken_0x1295c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1295c8) {
            ctx->pc = 0x1295CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1295C8u;
            // 0x1295cc: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1295F0u;
            goto label_1295f0;
        }
    }
    ctx->pc = 0x1295D0u;
    // 0x1295d0: 0xde6200f0  ld          $v0, 0xF0($s3)
    ctx->pc = 0x1295d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x1295d4: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1295D4u;
    {
        const bool branch_taken_0x1295d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1295d4) {
            ctx->pc = 0x1295D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1295D4u;
            // 0x1295d8: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1295F0u;
            goto label_1295f0;
        }
    }
    ctx->pc = 0x1295DCu;
    // 0x1295dc: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1295dcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1295e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1295e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1295e4: 0xae6000f8  sw          $zero, 0xF8($s3)
    ctx->pc = 0x1295e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x1295e8: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x1295e8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x1295ec: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x1295ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_1295f0:
    // 0x1295f0: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x1295f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x1295f4: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x1295f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1295f8: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1295f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1295fc: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x1295fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x129600: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x129600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x129604: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x129604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x129608: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x129608u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x12960c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x12960cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x129610: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x129610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x129614: 0xde840020  ld          $a0, 0x20($s4)
    ctx->pc = 0x129614u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x129618: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x129618u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x12961c: 0x630f8  dsll        $a2, $a2, 3
    ctx->pc = 0x12961cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x129620: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x129620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x129624: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x129624u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x129628: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x129628u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x12962c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12962cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x129630: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x129630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x129634: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x129634u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129638: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x129638u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12963c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129640: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x129640u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x129644: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x129644u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129648: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x129648u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12964c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x12964cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129650: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x129650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129654: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x129654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129658: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x129658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12965c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12965cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129660: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x129660u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x129664: 0x3e00008  jr          $ra
    ctx->pc = 0x129664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129664u;
            // 0x129668: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1295B8u: goto label_1295b8;
            case 0x1295C0u: goto label_1295c0;
            case 0x1295F0u: goto label_1295f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12966Cu;
}
