#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dpdiv
// Address: 0x1024a8 - 0x102610
void dpdiv_0x1024a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dpdiv_0x1024a8");
#endif

    ctx->pc = 0x1024a8u;

    // 0x1024a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1024a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1024ac: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x1024acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x1024b0: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1024b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x1024b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1024b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1024b8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1024b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1024bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1024bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1024c0: 0xc040798  jal         func_101E60
    ctx->pc = 0x1024C0u;
    SET_GPR_U32(ctx, 31, 0x1024C8u);
    ctx->pc = 0x1024C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1024C0u;
            // 0x1024c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1024C8u; }
        if (ctx->pc != 0x1024C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1024C8u; }
        if (ctx->pc != 0x1024C8u) { return; }
    }
    ctx->pc = 0x1024C8u;
    // 0x1024c8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1024c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1024cc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1024ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1024d0: 0xc040798  jal         func_101E60
    ctx->pc = 0x1024D0u;
    SET_GPR_U32(ctx, 31, 0x1024D8u);
    ctx->pc = 0x1024D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1024D0u;
            // 0x1024d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1024D8u; }
        if (ctx->pc != 0x1024D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1024D8u; }
        if (ctx->pc != 0x1024D8u) { return; }
    }
    ctx->pc = 0x1024D8u;
    // 0x1024d8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1024d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1024dc: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x1024dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1024e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1024E0u;
    {
        const bool branch_taken_0x1024e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024E0u;
            // 0x1024e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024e0) {
            ctx->pc = 0x1024F0u;
            goto label_1024f0;
        }
    }
    ctx->pc = 0x1024E8u;
    // 0x1024e8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1024E8u;
    {
        const bool branch_taken_0x1024e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024E8u;
            // 0x1024ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024e8) {
            ctx->pc = 0x1025F8u;
            goto label_1025f8;
        }
    }
    ctx->pc = 0x1024F0u;
label_1024f0:
    // 0x1024f0: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1024f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1024f4: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1024f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1024f8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1024F8u;
    {
        const bool branch_taken_0x1024f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1024FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024F8u;
            // 0x1024fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024f8) {
            ctx->pc = 0x1025F8u;
            goto label_1025f8;
        }
    }
    ctx->pc = 0x102500u;
    // 0x102500: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x102500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x102504: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x102504u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)4u)));
    // 0x102508: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x102508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10250c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x10250cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x102510: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102510u;
    {
        const bool branch_taken_0x102510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x102514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102510u;
            // 0x102514: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102510) {
            ctx->pc = 0x102524u;
            goto label_102524;
        }
    }
    ctx->pc = 0x102518u;
    // 0x102518: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x102518u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)2u)));
    // 0x10251c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10251Cu;
    {
        const bool branch_taken_0x10251c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10251Cu;
            // 0x102520: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10251c) {
            ctx->pc = 0x102538u;
            goto label_102538;
        }
    }
    ctx->pc = 0x102524u;
label_102524:
    // 0x102524: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x102524u;
    {
        const bool branch_taken_0x102524 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x102528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102524u;
            // 0x102528: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102524) {
            ctx->pc = 0x1025F8u;
            goto label_1025f8;
        }
    }
    ctx->pc = 0x10252Cu;
    // 0x10252c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10252cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x102530: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x102530u;
    {
        const bool branch_taken_0x102530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102530u;
            // 0x102534: 0x24443700  addiu       $a0, $v0, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102530) {
            ctx->pc = 0x1025F8u;
            goto label_1025f8;
        }
    }
    ctx->pc = 0x102538u;
label_102538:
    // 0x102538: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102538u;
    {
        const bool branch_taken_0x102538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10253Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102538u;
            // 0x10253c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102538) {
            ctx->pc = 0x102550u;
            goto label_102550;
        }
    }
    ctx->pc = 0x102540u;
    // 0x102540: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x102540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x102544: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102548: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x102548u;
    {
        const bool branch_taken_0x102548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102548u;
            // 0x10254c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102548) {
            ctx->pc = 0x1025F8u;
            goto label_1025f8;
        }
    }
    ctx->pc = 0x102550u;
label_102550:
    // 0x102550: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102550u;
    {
        const bool branch_taken_0x102550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102550u;
            // 0x102554: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102550) {
            ctx->pc = 0x102568u;
            goto label_102568;
        }
    }
    ctx->pc = 0x102558u;
    // 0x102558: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x102558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10255c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102560: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x102560u;
    {
        const bool branch_taken_0x102560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102560u;
            // 0x102564: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102560) {
            ctx->pc = 0x1025F8u;
            goto label_1025f8;
        }
    }
    ctx->pc = 0x102568u;
label_102568:
    // 0x102568: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x102568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10256c: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x10256cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102570: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x102570u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102574: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x102574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102578: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x102578u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x10257c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x10257Cu;
    {
        const bool branch_taken_0x10257c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10257Cu;
            // 0x102580: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10257c) {
            ctx->pc = 0x102594u;
            goto label_102594;
        }
    }
    ctx->pc = 0x102584u;
    // 0x102584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x102584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x102588: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x102588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x10258c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10258cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x102590: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x102590u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_102594:
    // 0x102594: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x102594u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x102598: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x102598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x10259c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10259Cu;
    {
        const bool branch_taken_0x10259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10259Cu;
            // 0x1025a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10259c) {
            ctx->pc = 0x1025ACu;
            goto label_1025ac;
        }
    }
    ctx->pc = 0x1025A4u;
    // 0x1025a4: 0x0  nop
    ctx->pc = 0x1025a4u;
    // NOP
label_1025a8:
    // 0x1025a8: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x1025a8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1025ac:
    // 0x1025ac: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1025ACu;
    {
        const bool branch_taken_0x1025ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1025ac) {
            ctx->pc = 0x1025B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1025ACu;
            // 0x1025b0: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1025C0u;
            goto label_1025c0;
        }
    }
    ctx->pc = 0x1025B4u;
    // 0x1025b4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1025b4u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x1025b8: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x1025b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x1025bc: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1025bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_1025c0:
    // 0x1025c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1025C0u;
    {
        const bool branch_taken_0x1025c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1025C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1025C0u;
            // 0x1025c4: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025c0) {
            ctx->pc = 0x1025A8u;
            goto label_1025a8;
        }
    }
    ctx->pc = 0x1025C8u;
    // 0x1025c8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1025c8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)255u)));
    // 0x1025cc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1025ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1025d0: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1025D0u;
    {
        const bool branch_taken_0x1025d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1025d0) {
            ctx->pc = 0x1025D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1025D0u;
            // 0x1025d4: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1025F4u;
            goto label_1025f4;
        }
    }
    ctx->pc = 0x1025D8u;
    // 0x1025d8: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x1025d8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)256u)));
    // 0x1025dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1025DCu;
    {
        const bool branch_taken_0x1025dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1025DCu;
            // 0x1025e0: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025dc) {
            ctx->pc = 0x1025ECu;
            goto label_1025ec;
        }
    }
    ctx->pc = 0x1025E4u;
    // 0x1025e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1025E4u;
    {
        const bool branch_taken_0x1025e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1025E4u;
            // 0x1025e8: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025e4) {
            ctx->pc = 0x1025F0u;
            goto label_1025f0;
        }
    }
    ctx->pc = 0x1025ECu;
label_1025ec:
    // 0x1025ec: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x1025ecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_1025f0:
    // 0x1025f0: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1025f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_1025f4:
    // 0x1025f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1025f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1025f8:
    // 0x1025f8: 0xc04074c  jal         func_101D30
    ctx->pc = 0x1025F8u;
    SET_GPR_U32(ctx, 31, 0x102600u);
    ctx->pc = 0x101D30u;
    if (runtime->hasFunction(0x101D30u)) {
        auto targetFn = runtime->lookupFunction(0x101D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102600u; }
        if (ctx->pc != 0x102600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x101d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102600u; }
        if (ctx->pc != 0x102600u) { return; }
    }
    ctx->pc = 0x102600u;
    // 0x102600: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x102600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102604: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x102604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102608: 0x3e00008  jr          $ra
    ctx->pc = 0x102608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102608u;
            // 0x10260c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1024F0u: goto label_1024f0;
            case 0x102524u: goto label_102524;
            case 0x102538u: goto label_102538;
            case 0x102550u: goto label_102550;
            case 0x102568u: goto label_102568;
            case 0x102594u: goto label_102594;
            case 0x1025A8u: goto label_1025a8;
            case 0x1025ACu: goto label_1025ac;
            case 0x1025C0u: goto label_1025c0;
            case 0x1025ECu: goto label_1025ec;
            case 0x1025F0u: goto label_1025f0;
            case 0x1025F4u: goto label_1025f4;
            case 0x1025F8u: goto label_1025f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102610u;
}
