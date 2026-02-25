#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _id2type
// Address: 0x12a558 - 0x12a754
void _id2type_0x12a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_id2type_0x12a558");
#endif

    ctx->pc = 0x12a558u;

    // 0x12a558: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12a558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12a55c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x12a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x12a560: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x12a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x12a564: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x12a564u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x12a568: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x12a568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x12a56c: 0x6763a  dsrl        $t6, $a2, 24
    ctx->pc = 0x12a56cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> 24);
    // 0x12a570: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x12a570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x12a574: 0x6683e  dsrl32      $t5, $a2, 0
    ctx->pc = 0x12a574u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x12a578: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12a578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12a57c: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x12a57cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a580: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x12a580u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x12a584: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12a584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12a588: 0x246301e8  addiu       $v1, $v1, 0x1E8
    ctx->pc = 0x12a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 488));
    // 0x12a58c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12a58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12a590: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12a590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a594: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12a598: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12a598u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a59c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a5a0: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x12a5a0u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x12a5a4: 0xb5e38  dsll        $t3, $t3, 24
    ctx->pc = 0x12a5a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 24);
    // 0x12a5a8: 0x3417ff00  ori         $s7, $zero, 0xFF00
    ctx->pc = 0x12a5a8u;
    SET_GPR_VEC(ctx, 23, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65280u)));
    // 0x12a5ac: 0x17be38  dsll        $s7, $s7, 24
    ctx->pc = 0x12a5acu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 24);
    // 0x12a5b0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x12a5b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a5b4: 0x16b63a  dsrl        $s6, $s6, 24
    ctx->pc = 0x12a5b4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> 24);
    // 0x12a5b8: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x12a5b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a5bc: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x12a5bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
    // 0x12a5c0: 0x15ae3a  dsrl        $s5, $s5, 24
    ctx->pc = 0x12a5c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> 24);
    // 0x12a5c4: 0x3414bd20  ori         $s4, $zero, 0xBD20
    ctx->pc = 0x12a5c4u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48416u)));
    // 0x12a5c8: 0x14a638  dsll        $s4, $s4, 24
    ctx->pc = 0x12a5c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 24);
    // 0x12a5cc: 0x3413bd80  ori         $s3, $zero, 0xBD80
    ctx->pc = 0x12a5ccu;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48512u)));
    // 0x12a5d0: 0x139e38  dsll        $s3, $s3, 24
    ctx->pc = 0x12a5d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 24);
    // 0x12a5d4: 0x3412bd90  ori         $s2, $zero, 0xBD90
    ctx->pc = 0x12a5d4u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48528u)));
    // 0x12a5d8: 0x129638  dsll        $s2, $s2, 24
    ctx->pc = 0x12a5d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 24);
    // 0x12a5dc: 0x3411bda0  ori         $s1, $zero, 0xBDA0
    ctx->pc = 0x12a5dcu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48544u)));
    // 0x12a5e0: 0x118e38  dsll        $s1, $s1, 24
    ctx->pc = 0x12a5e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
    // 0x12a5e4: 0x3410ffe0  ori         $s0, $zero, 0xFFE0
    ctx->pc = 0x12a5e4u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65504u)));
    // 0x12a5e8: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x12a5e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x12a5ec: 0x3419fff8  ori         $t9, $zero, 0xFFF8
    ctx->pc = 0x12a5ecu;
    SET_GPR_VEC(ctx, 25, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65528u)));
    // 0x12a5f0: 0x19ce38  dsll        $t9, $t9, 24
    ctx->pc = 0x12a5f0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 24);
    // 0x12a5f4: 0x3418f000  ori         $t8, $zero, 0xF000
    ctx->pc = 0x12a5f4u;
    SET_GPR_VEC(ctx, 24, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61440u)));
    // 0x12a5f8: 0x18c638  dsll        $t8, $t8, 24
    ctx->pc = 0x12a5f8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 24);
    // 0x12a5fc: 0x340fc000  ori         $t7, $zero, 0xC000
    ctx->pc = 0x12a5fcu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)49152u)));
    // 0x12a600: 0xf7e38  dsll        $t7, $t7, 24
    ctx->pc = 0x12a600u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x12a604: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x12a604u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_12a608:
    // 0x12a608: 0x10eb0011  beq         $a3, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x12A608u;
    {
        const bool branch_taken_0x12a608 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x12A60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A608u;
            // 0x12a60c: 0x167102b  sltu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a608) {
            ctx->pc = 0x12A650u;
            goto label_12a650;
        }
    }
    ctx->pc = 0x12A610u;
    // 0x12a610: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A610u;
    {
        const bool branch_taken_0x12a610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a610) {
            ctx->pc = 0x12A628u;
            goto label_12a628;
        }
    }
    ctx->pc = 0x12A618u;
    // 0x12a618: 0x50f70028  beql        $a3, $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x12A618u;
    {
        const bool branch_taken_0x12a618 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        if (branch_taken_0x12a618) {
            ctx->pc = 0x12A61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A618u;
            // 0x12a61c: 0xdc680000  ld          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A6BCu;
            goto label_12a6bc;
        }
    }
    ctx->pc = 0x12A620u;
    // 0x12a620: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x12A620u;
    {
        const bool branch_taken_0x12a620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A620u;
            // 0x12a624: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a620) {
            ctx->pc = 0x12A714u;
            goto label_12a714;
        }
    }
    ctx->pc = 0x12A628u;
label_12a628:
    // 0x12a628: 0x54f6003a  bnel        $a3, $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x12A628u;
    {
        const bool branch_taken_0x12a628 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        if (branch_taken_0x12a628) {
            ctx->pc = 0x12A62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A628u;
            // 0x12a62c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A714u;
            goto label_12a714;
        }
    }
    ctx->pc = 0x12A630u;
    // 0x12a630: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x12a630u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a634: 0xd53824  and         $a3, $a2, $s5
    ctx->pc = 0x12a634u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 21)));
    // 0x12a638: 0x54e20036  bnel        $a3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x12A638u;
    {
        const bool branch_taken_0x12a638 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a638) {
            ctx->pc = 0x12A63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A638u;
            // 0x12a63c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A714u;
            goto label_12a714;
        }
    }
    ctx->pc = 0x12A640u;
    // 0x12a640: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x12a640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x12a644: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x12a644u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a648: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x12A648u;
    {
        const bool branch_taken_0x12a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A648u;
            // 0x12a64c: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a648) {
            ctx->pc = 0x12A710u;
            goto label_12a710;
        }
    }
    ctx->pc = 0x12A650u;
label_12a650:
    // 0x12a650: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x12a650u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a654: 0x3402bd88  ori         $v0, $zero, 0xBD88
    ctx->pc = 0x12a654u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48520u)));
    // 0x12a658: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12a658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12a65c: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12A65Cu;
    {
        const bool branch_taken_0x12a65c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A65Cu;
            // 0x12a660: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a65c) {
            ctx->pc = 0x12A6A4u;
            goto label_12a6a4;
        }
    }
    ctx->pc = 0x12A664u;
    // 0x12a664: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A664u;
    {
        const bool branch_taken_0x12a664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a664) {
            ctx->pc = 0x12A684u;
            goto label_12a684;
        }
    }
    ctx->pc = 0x12A66Cu;
    // 0x12a66c: 0x1114000b  beq         $t0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x12A66Cu;
    {
        const bool branch_taken_0x12a66c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 20));
        ctx->pc = 0x12A670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A66Cu;
            // 0x12a670: 0xd03824  and         $a3, $a2, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a66c) {
            ctx->pc = 0x12A69Cu;
            goto label_12a69c;
        }
    }
    ctx->pc = 0x12A674u;
    // 0x12a674: 0x1113000b  beq         $t0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x12A674u;
    {
        const bool branch_taken_0x12a674 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x12A678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A674u;
            // 0x12a678: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a674) {
            ctx->pc = 0x12A6A4u;
            goto label_12a6a4;
        }
    }
    ctx->pc = 0x12A67Cu;
    // 0x12a67c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12A67Cu;
    {
        const bool branch_taken_0x12a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A67Cu;
            // 0x12a680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a67c) {
            ctx->pc = 0x12A6ACu;
            goto label_12a6ac;
        }
    }
    ctx->pc = 0x12A684u;
label_12a684:
    // 0x12a684: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A684u;
    {
        const bool branch_taken_0x12a684 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x12A688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A684u;
            // 0x12a688: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a684) {
            ctx->pc = 0x12A6A8u;
            goto label_12a6a8;
        }
    }
    ctx->pc = 0x12A68Cu;
    // 0x12a68c: 0x11110005  beq         $t0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A68Cu;
    {
        const bool branch_taken_0x12a68c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x12A690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A68Cu;
            // 0x12a690: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a68c) {
            ctx->pc = 0x12A6A4u;
            goto label_12a6a4;
        }
    }
    ctx->pc = 0x12A694u;
    // 0x12a694: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12A694u;
    {
        const bool branch_taken_0x12a694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A694u;
            // 0x12a698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a694) {
            ctx->pc = 0x12A6ACu;
            goto label_12a6ac;
        }
    }
    ctx->pc = 0x12A69Cu;
label_12a69c:
    // 0x12a69c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12A69Cu;
    {
        const bool branch_taken_0x12a69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A69Cu;
            // 0x12a6a0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a69c) {
            ctx->pc = 0x12A6ACu;
            goto label_12a6ac;
        }
    }
    ctx->pc = 0x12A6A4u;
label_12a6a4:
    // 0x12a6a4: 0xd93824  and         $a3, $a2, $t9
    ctx->pc = 0x12a6a4u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 25)));
label_12a6a8:
    // 0x12a6a8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x12a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_12a6ac:
    // 0x12a6ac: 0x54e80019  bnel        $a3, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12A6ACu;
    {
        const bool branch_taken_0x12a6ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x12a6ac) {
            ctx->pc = 0x12A6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6ACu;
            // 0x12a6b0: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A714u;
            goto label_12a714;
        }
    }
    ctx->pc = 0x12A6B4u;
    // 0x12a6b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12A6B4u;
    {
        const bool branch_taken_0x12a6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6B4u;
            // 0x12a6b8: 0x1c21024  and         $v0, $t6, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 14), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6b4) {
            ctx->pc = 0x12A6FCu;
            goto label_12a6fc;
        }
    }
    ctx->pc = 0x12A6BCu;
label_12a6bc:
    // 0x12a6bc: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x12a6bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)57344u)));
    // 0x12a6c0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12a6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12a6c4: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A6C4u;
    {
        const bool branch_taken_0x12a6c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a6c4) {
            ctx->pc = 0x12A6D8u;
            goto label_12a6d8;
        }
    }
    ctx->pc = 0x12A6CCu;
    // 0x12a6cc: 0xd83824  and         $a3, $a2, $t8
    ctx->pc = 0x12a6ccu;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 24)));
    // 0x12a6d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12A6D0u;
    {
        const bool branch_taken_0x12a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6D0u;
            // 0x12a6d4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6d0) {
            ctx->pc = 0x12A6F0u;
            goto label_12a6f0;
        }
    }
    ctx->pc = 0x12A6D8u;
label_12a6d8:
    // 0x12a6d8: 0x150f0004  bne         $t0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A6D8u;
    {
        const bool branch_taken_0x12a6d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x12A6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6D8u;
            // 0x12a6dc: 0xc73824  and         $a3, $a2, $a3 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6d8) {
            ctx->pc = 0x12A6ECu;
            goto label_12a6ec;
        }
    }
    ctx->pc = 0x12A6E0u;
    // 0x12a6e0: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x12a6e0u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x12a6e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12A6E4u;
    {
        const bool branch_taken_0x12a6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6E4u;
            // 0x12a6e8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6e4) {
            ctx->pc = 0x12A6F0u;
            goto label_12a6f0;
        }
    }
    ctx->pc = 0x12A6ECu;
label_12a6ec:
    // 0x12a6ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12a6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a6f0:
    // 0x12a6f0: 0x54e80008  bnel        $a3, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A6F0u;
    {
        const bool branch_taken_0x12a6f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x12a6f0) {
            ctx->pc = 0x12A6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6F0u;
            // 0x12a6f4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A714u;
            goto label_12a714;
        }
    }
    ctx->pc = 0x12A6F8u;
    // 0x12a6f8: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x12a6f8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 2)));
label_12a6fc:
    // 0x12a6fc: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x12a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x12a700: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a704: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12a704u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12a708: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x12a708u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a70c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_12a710:
    // 0x12a710: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x12a710u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_12a714:
    // 0x12a714: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x12a714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12a718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A718u;
    {
        const bool branch_taken_0x12a718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A718u;
            // 0x12a71c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a718) {
            ctx->pc = 0x12A728u;
            goto label_12a728;
        }
    }
    ctx->pc = 0x12A720u;
    // 0x12a720: 0x5140ffb9  beql        $t2, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x12A720u;
    {
        const bool branch_taken_0x12a720 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a720) {
            ctx->pc = 0x12A724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A720u;
            // 0x12a724: 0xdc670008  ld          $a3, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A608u;
            goto label_12a608;
        }
    }
    ctx->pc = 0x12A728u;
label_12a728:
    // 0x12a728: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x12a728u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a72c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x12a72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a730: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x12a730u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a734: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x12a734u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12a738: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12a738u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a73c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12a73cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a740: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12a740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a744: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12a744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a74c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A74Cu;
            // 0x12a750: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A608u: goto label_12a608;
            case 0x12A628u: goto label_12a628;
            case 0x12A650u: goto label_12a650;
            case 0x12A684u: goto label_12a684;
            case 0x12A69Cu: goto label_12a69c;
            case 0x12A6A4u: goto label_12a6a4;
            case 0x12A6A8u: goto label_12a6a8;
            case 0x12A6ACu: goto label_12a6ac;
            case 0x12A6BCu: goto label_12a6bc;
            case 0x12A6D8u: goto label_12a6d8;
            case 0x12A6ECu: goto label_12a6ec;
            case 0x12A6F0u: goto label_12a6f0;
            case 0x12A6FCu: goto label_12a6fc;
            case 0x12A710u: goto label_12a710;
            case 0x12A714u: goto label_12a714;
            case 0x12A728u: goto label_12a728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A754u;
}
