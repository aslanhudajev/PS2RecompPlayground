#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _id2type
// Address: 0x11e508 - 0x11e704
void _id2type_0x11e508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e508u;

    // 0x11e508: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11e508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11e50c: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x11e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x11e510: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x11e510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x11e514: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x11e514u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x11e518: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11e518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11e51c: 0x6763a  dsrl        $t6, $a2, 24
    ctx->pc = 0x11e51cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> 24);
    // 0x11e520: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11e520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11e524: 0x6683e  dsrl32      $t5, $a2, 0
    ctx->pc = 0x11e524u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11e528: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11e528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11e52c: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x11e52cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e530: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x11e530u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x11e534: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11e538: 0x246316f0  addiu       $v1, $v1, 0x16F0
    ctx->pc = 0x11e538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5872));
    // 0x11e53c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11e53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11e540: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11e540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e544: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11e548: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11e548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e54c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e550: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x11e550u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x11e554: 0xb5e38  dsll        $t3, $t3, 24
    ctx->pc = 0x11e554u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 24);
    // 0x11e558: 0x3417ff00  ori         $s7, $zero, 0xFF00
    ctx->pc = 0x11e558u;
    SET_GPR_VEC(ctx, 23, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65280u)));
    // 0x11e55c: 0x17be38  dsll        $s7, $s7, 24
    ctx->pc = 0x11e55cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 24);
    // 0x11e560: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x11e560u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e564: 0x16b63a  dsrl        $s6, $s6, 24
    ctx->pc = 0x11e564u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> 24);
    // 0x11e568: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x11e568u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e56c: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x11e56cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
    // 0x11e570: 0x15ae3a  dsrl        $s5, $s5, 24
    ctx->pc = 0x11e570u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> 24);
    // 0x11e574: 0x3414bd20  ori         $s4, $zero, 0xBD20
    ctx->pc = 0x11e574u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48416u)));
    // 0x11e578: 0x14a638  dsll        $s4, $s4, 24
    ctx->pc = 0x11e578u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 24);
    // 0x11e57c: 0x3413bd80  ori         $s3, $zero, 0xBD80
    ctx->pc = 0x11e57cu;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48512u)));
    // 0x11e580: 0x139e38  dsll        $s3, $s3, 24
    ctx->pc = 0x11e580u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 24);
    // 0x11e584: 0x3412bd90  ori         $s2, $zero, 0xBD90
    ctx->pc = 0x11e584u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48528u)));
    // 0x11e588: 0x129638  dsll        $s2, $s2, 24
    ctx->pc = 0x11e588u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 24);
    // 0x11e58c: 0x3411bda0  ori         $s1, $zero, 0xBDA0
    ctx->pc = 0x11e58cu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48544u)));
    // 0x11e590: 0x118e38  dsll        $s1, $s1, 24
    ctx->pc = 0x11e590u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
    // 0x11e594: 0x3410ffe0  ori         $s0, $zero, 0xFFE0
    ctx->pc = 0x11e594u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65504u)));
    // 0x11e598: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x11e598u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x11e59c: 0x3419fff8  ori         $t9, $zero, 0xFFF8
    ctx->pc = 0x11e59cu;
    SET_GPR_VEC(ctx, 25, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65528u)));
    // 0x11e5a0: 0x19ce38  dsll        $t9, $t9, 24
    ctx->pc = 0x11e5a0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 24);
    // 0x11e5a4: 0x3418f000  ori         $t8, $zero, 0xF000
    ctx->pc = 0x11e5a4u;
    SET_GPR_VEC(ctx, 24, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)61440u)));
    // 0x11e5a8: 0x18c638  dsll        $t8, $t8, 24
    ctx->pc = 0x11e5a8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 24);
    // 0x11e5ac: 0x340fc000  ori         $t7, $zero, 0xC000
    ctx->pc = 0x11e5acu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)49152u)));
    // 0x11e5b0: 0xf7e38  dsll        $t7, $t7, 24
    ctx->pc = 0x11e5b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x11e5b4: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x11e5b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_11e5b8:
    // 0x11e5b8: 0x10eb0011  beq         $a3, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x11E5B8u;
    {
        const bool branch_taken_0x11e5b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x11E5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5B8u;
            // 0x11e5bc: 0x167102b  sltu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5b8) {
            ctx->pc = 0x11E600u;
            goto label_11e600;
        }
    }
    ctx->pc = 0x11E5C0u;
    // 0x11e5c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E5C0u;
    {
        const bool branch_taken_0x11e5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e5c0) {
            ctx->pc = 0x11E5D8u;
            goto label_11e5d8;
        }
    }
    ctx->pc = 0x11E5C8u;
    // 0x11e5c8: 0x50f70028  beql        $a3, $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x11E5C8u;
    {
        const bool branch_taken_0x11e5c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        if (branch_taken_0x11e5c8) {
            ctx->pc = 0x11E5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5C8u;
            // 0x11e5cc: 0xdc680000  ld          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E66Cu;
            goto label_11e66c;
        }
    }
    ctx->pc = 0x11E5D0u;
    // 0x11e5d0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x11E5D0u;
    {
        const bool branch_taken_0x11e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5D0u;
            // 0x11e5d4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5d0) {
            ctx->pc = 0x11E6C4u;
            goto label_11e6c4;
        }
    }
    ctx->pc = 0x11E5D8u;
label_11e5d8:
    // 0x11e5d8: 0x54f6003a  bnel        $a3, $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x11E5D8u;
    {
        const bool branch_taken_0x11e5d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        if (branch_taken_0x11e5d8) {
            ctx->pc = 0x11E5DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5D8u;
            // 0x11e5dc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E6C4u;
            goto label_11e6c4;
        }
    }
    ctx->pc = 0x11E5E0u;
    // 0x11e5e0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x11e5e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e5e4: 0xd53824  and         $a3, $a2, $s5
    ctx->pc = 0x11e5e4u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 21)));
    // 0x11e5e8: 0x54e20036  bnel        $a3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x11E5E8u;
    {
        const bool branch_taken_0x11e5e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e5e8) {
            ctx->pc = 0x11E5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5E8u;
            // 0x11e5ec: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E6C4u;
            goto label_11e6c4;
        }
    }
    ctx->pc = 0x11E5F0u;
    // 0x11e5f0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x11e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x11e5f4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x11e5f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e5f8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x11E5F8u;
    {
        const bool branch_taken_0x11e5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E5F8u;
            // 0x11e5fc: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5f8) {
            ctx->pc = 0x11E6C0u;
            goto label_11e6c0;
        }
    }
    ctx->pc = 0x11E600u;
label_11e600:
    // 0x11e600: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x11e600u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e604: 0x3402bd88  ori         $v0, $zero, 0xBD88
    ctx->pc = 0x11e604u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48520u)));
    // 0x11e608: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11e60c: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11E60Cu;
    {
        const bool branch_taken_0x11e60c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E60Cu;
            // 0x11e610: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e60c) {
            ctx->pc = 0x11E654u;
            goto label_11e654;
        }
    }
    ctx->pc = 0x11E614u;
    // 0x11e614: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E614u;
    {
        const bool branch_taken_0x11e614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e614) {
            ctx->pc = 0x11E634u;
            goto label_11e634;
        }
    }
    ctx->pc = 0x11E61Cu;
    // 0x11e61c: 0x1114000b  beq         $t0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x11E61Cu;
    {
        const bool branch_taken_0x11e61c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 20));
        ctx->pc = 0x11E620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E61Cu;
            // 0x11e620: 0xd03824  and         $a3, $a2, $s0 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e61c) {
            ctx->pc = 0x11E64Cu;
            goto label_11e64c;
        }
    }
    ctx->pc = 0x11E624u;
    // 0x11e624: 0x1113000b  beq         $t0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x11E624u;
    {
        const bool branch_taken_0x11e624 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x11E628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E624u;
            // 0x11e628: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e624) {
            ctx->pc = 0x11E654u;
            goto label_11e654;
        }
    }
    ctx->pc = 0x11E62Cu;
    // 0x11e62c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11E62Cu;
    {
        const bool branch_taken_0x11e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E62Cu;
            // 0x11e630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e62c) {
            ctx->pc = 0x11E65Cu;
            goto label_11e65c;
        }
    }
    ctx->pc = 0x11E634u;
label_11e634:
    // 0x11e634: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E634u;
    {
        const bool branch_taken_0x11e634 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x11E638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E634u;
            // 0x11e638: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e634) {
            ctx->pc = 0x11E658u;
            goto label_11e658;
        }
    }
    ctx->pc = 0x11E63Cu;
    // 0x11e63c: 0x11110005  beq         $t0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E63Cu;
    {
        const bool branch_taken_0x11e63c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x11E640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E63Cu;
            // 0x11e640: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e63c) {
            ctx->pc = 0x11E654u;
            goto label_11e654;
        }
    }
    ctx->pc = 0x11E644u;
    // 0x11e644: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11E644u;
    {
        const bool branch_taken_0x11e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E644u;
            // 0x11e648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e644) {
            ctx->pc = 0x11E65Cu;
            goto label_11e65c;
        }
    }
    ctx->pc = 0x11E64Cu;
label_11e64c:
    // 0x11e64c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E64Cu;
    {
        const bool branch_taken_0x11e64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E64Cu;
            // 0x11e650: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e64c) {
            ctx->pc = 0x11E65Cu;
            goto label_11e65c;
        }
    }
    ctx->pc = 0x11E654u;
label_11e654:
    // 0x11e654: 0xd93824  and         $a3, $a2, $t9
    ctx->pc = 0x11e654u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 25)));
label_11e658:
    // 0x11e658: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_11e65c:
    // 0x11e65c: 0x54e80019  bnel        $a3, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11E65Cu;
    {
        const bool branch_taken_0x11e65c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x11e65c) {
            ctx->pc = 0x11E660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E65Cu;
            // 0x11e660: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E6C4u;
            goto label_11e6c4;
        }
    }
    ctx->pc = 0x11E664u;
    // 0x11e664: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11E664u;
    {
        const bool branch_taken_0x11e664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E664u;
            // 0x11e668: 0x1c21024  and         $v0, $t6, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 14), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e664) {
            ctx->pc = 0x11E6ACu;
            goto label_11e6ac;
        }
    }
    ctx->pc = 0x11E66Cu;
label_11e66c:
    // 0x11e66c: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x11e66cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)57344u)));
    // 0x11e670: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11e674: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E674u;
    {
        const bool branch_taken_0x11e674 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e674) {
            ctx->pc = 0x11E688u;
            goto label_11e688;
        }
    }
    ctx->pc = 0x11E67Cu;
    // 0x11e67c: 0xd83824  and         $a3, $a2, $t8
    ctx->pc = 0x11e67cu;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 24)));
    // 0x11e680: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11E680u;
    {
        const bool branch_taken_0x11e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E680u;
            // 0x11e684: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e680) {
            ctx->pc = 0x11E6A0u;
            goto label_11e6a0;
        }
    }
    ctx->pc = 0x11E688u;
label_11e688:
    // 0x11e688: 0x150f0004  bne         $t0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E688u;
    {
        const bool branch_taken_0x11e688 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x11E68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E688u;
            // 0x11e68c: 0xc73824  and         $a3, $a2, $a3 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e688) {
            ctx->pc = 0x11E69Cu;
            goto label_11e69c;
        }
    }
    ctx->pc = 0x11E690u;
    // 0x11e690: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x11e690u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x11e694: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11E694u;
    {
        const bool branch_taken_0x11e694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E694u;
            // 0x11e698: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e694) {
            ctx->pc = 0x11E6A0u;
            goto label_11e6a0;
        }
    }
    ctx->pc = 0x11E69Cu;
label_11e69c:
    // 0x11e69c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e6a0:
    // 0x11e6a0: 0x54e80008  bnel        $a3, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E6A0u;
    {
        const bool branch_taken_0x11e6a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x11e6a0) {
            ctx->pc = 0x11E6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6A0u;
            // 0x11e6a4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E6C4u;
            goto label_11e6c4;
        }
    }
    ctx->pc = 0x11E6A8u;
    // 0x11e6a8: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x11e6a8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 2)));
label_11e6ac:
    // 0x11e6ac: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x11e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x11e6b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11e6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e6b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11e6b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e6b8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x11e6b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e6bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_11e6c0:
    // 0x11e6c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11e6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_11e6c4:
    // 0x11e6c4: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x11e6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11e6c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E6C8u;
    {
        const bool branch_taken_0x11e6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6C8u;
            // 0x11e6cc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6c8) {
            ctx->pc = 0x11E6D8u;
            goto label_11e6d8;
        }
    }
    ctx->pc = 0x11E6D0u;
    // 0x11e6d0: 0x5140ffb9  beql        $t2, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x11E6D0u;
    {
        const bool branch_taken_0x11e6d0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e6d0) {
            ctx->pc = 0x11E6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6D0u;
            // 0x11e6d4: 0xdc670008  ld          $a3, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E5B8u;
            goto label_11e5b8;
        }
    }
    ctx->pc = 0x11E6D8u;
label_11e6d8:
    // 0x11e6d8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x11e6d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e6dc: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x11e6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11e6e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e6e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11e6e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e6e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11e6e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e6ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11e6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e6f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11e6f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e6f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11e6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e6f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x11E6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E6FCu;
            // 0x11e700: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E5B8u: goto label_11e5b8;
            case 0x11E5D8u: goto label_11e5d8;
            case 0x11E600u: goto label_11e600;
            case 0x11E634u: goto label_11e634;
            case 0x11E64Cu: goto label_11e64c;
            case 0x11E654u: goto label_11e654;
            case 0x11E658u: goto label_11e658;
            case 0x11E65Cu: goto label_11e65c;
            case 0x11E66Cu: goto label_11e66c;
            case 0x11E688u: goto label_11e688;
            case 0x11E69Cu: goto label_11e69c;
            case 0x11E6A0u: goto label_11e6a0;
            case 0x11E6ACu: goto label_11e6ac;
            case 0x11E6C0u: goto label_11e6c0;
            case 0x11E6C4u: goto label_11e6c4;
            case 0x11E6D8u: goto label_11e6d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E704u;
}
