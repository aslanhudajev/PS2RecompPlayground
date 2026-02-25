#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate
// Address: 0x1ef320 - 0x1ef860
void inflate_0x1ef320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_0x1ef320");
#endif

    ctx->pc = 0x1ef320u;

    // 0x1ef320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ef32c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ef32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ef330: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ef330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ef334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef338: 0x12000142  beqz        $s0, . + 4 + (0x142 << 2)
    ctx->pc = 0x1EF338u;
    {
        const bool branch_taken_0x1ef338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF338u;
            // 0x1ef33c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef338) {
            ctx->pc = 0x1EF844u;
            goto label_1ef844;
        }
    }
    ctx->pc = 0x1EF340u;
    // 0x1ef340: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef344: 0x1040013f  beqz        $v0, . + 4 + (0x13F << 2)
    ctx->pc = 0x1EF344u;
    {
        const bool branch_taken_0x1ef344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF344u;
            // 0x1ef348: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef344) {
            ctx->pc = 0x1EF844u;
            goto label_1ef844;
        }
    }
    ctx->pc = 0x1EF34Cu;
    // 0x1ef34c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ef34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef350: 0x3a420004  xori        $v0, $s2, 0x4
    ctx->pc = 0x1ef350u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)4u)));
    // 0x1ef354: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1ef354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef358: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x1ef358u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x1ef35c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF35Cu;
    {
        const bool branch_taken_0x1ef35c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF35Cu;
            // 0x1ef360: 0x2411fffb  addiu       $s1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef35c) {
            ctx->pc = 0x1EF374u;
            goto label_1ef374;
        }
    }
    ctx->pc = 0x1EF364u;
    // 0x1ef364: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x1EF364u;
    {
        const bool branch_taken_0x1ef364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF364u;
            // 0x1ef368: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef364) {
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF36Cu;
label_1ef36c:
    // 0x1ef36c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x1EF36Cu;
    {
        const bool branch_taken_0x1ef36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF36Cu;
            // 0x1ef370: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef36c) {
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF374u;
label_1ef374:
    // 0x1ef374: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef378: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ef378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef37c: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x1ef37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x1ef380: 0x10400131  beqz        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x1EF380u;
    {
        const bool branch_taken_0x1ef380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF380u;
            // 0x1ef384: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef380) {
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF388u;
    // 0x1ef388: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ef388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ef38c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ef38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1ef390: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1ef390u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1ef394: 0x8c2230e0  lw          $v0, 0x30E0($at)
    ctx->pc = 0x1ef394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 12512)));
    // 0x1ef398: 0x400008  jr          $v0
    ctx->pc = 0x1EF398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF3A0u: goto label_1ef3a0;
            case 0x1EF43Cu: goto label_1ef43c;
            case 0x1EF4C8u: goto label_1ef4c8;
            case 0x1EF514u: goto label_1ef514;
            case 0x1EF568u: goto label_1ef568;
            case 0x1EF5BCu: goto label_1ef5bc;
            case 0x1EF618u: goto label_1ef618;
            case 0x1EF63Cu: goto label_1ef63c;
            case 0x1EF6BCu: goto label_1ef6bc;
            case 0x1EF708u: goto label_1ef708;
            case 0x1EF75Cu: goto label_1ef75c;
            case 0x1EF7B0u: goto label_1ef7b0;
            case 0x1EF834u: goto label_1ef834;
            case 0x1EF83Cu: goto label_1ef83c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF3A0u;
label_1ef3a0:
    // 0x1ef3a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ef3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef3a4: 0x50400128  beql        $v0, $zero, . + 4 + (0x128 << 2)
    ctx->pc = 0x1EF3A4u;
    {
        const bool branch_taken_0x1ef3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3a4) {
            ctx->pc = 0x1EF3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3A4u;
            // 0x1ef3a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF3ACu;
    // 0x1ef3ac: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1ef3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef3b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef3b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ef3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ef3b8: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1ef3b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef3bc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1ef3bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1ef3c0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ef3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ef3c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ef3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef3c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ef3c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef3cc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ef3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1ef3d0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1ef3d0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
    // 0x1ef3d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ef3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ef3d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ef3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ef3dc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ef3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ef3e0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF3E0u;
    {
        const bool branch_taken_0x1ef3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EF3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3E0u;
            // 0x1ef3e4: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3e0) {
            ctx->pc = 0x1EF400u;
            goto label_1ef400;
        }
    }
    ctx->pc = 0x1EF3E8u;
    // 0x1ef3e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef3ec: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ef3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ef3f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ef3f4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef3f8: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x1EF3F8u;
    {
        const bool branch_taken_0x1ef3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3F8u;
            // 0x1ef3fc: 0x24423060  addiu       $v0, $v0, 0x3060 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3f8) {
            ctx->pc = 0x1EF814u;
            goto label_1ef814;
        }
    }
    ctx->pc = 0x1EF400u;
label_1ef400:
    // 0x1ef400: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1ef400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef404: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ef404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ef408: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1ef408u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ef40c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ef40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1ef410: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1ef410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ef414: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ef414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ef418: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF418u;
    {
        const bool branch_taken_0x1ef418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef418) {
            ctx->pc = 0x1EF41Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF418u;
            // 0x1ef41c: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF434u;
            goto label_1ef434;
        }
    }
    ctx->pc = 0x1EF420u;
    // 0x1ef420: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ef420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ef424: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ef424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ef428: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef42c: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x1EF42Cu;
    {
        const bool branch_taken_0x1ef42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF42Cu;
            // 0x1ef430: 0x24423080  addiu       $v0, $v0, 0x3080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef42c) {
            ctx->pc = 0x1EF814u;
            goto label_1ef814;
        }
    }
    ctx->pc = 0x1EF434u;
label_1ef434:
    // 0x1ef434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef438: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef43c:
    // 0x1ef43c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ef43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef440: 0x1040ffca  beqz        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1EF440u;
    {
        const bool branch_taken_0x1ef440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF440u;
            // 0x1ef444: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef440) {
            ctx->pc = 0x1EF36Cu;
            goto label_1ef36c;
        }
    }
    ctx->pc = 0x1EF448u;
    // 0x1ef448: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1ef448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef44c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef450: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ef450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ef454: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1ef454u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef458: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1ef458u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1ef45c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ef45cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ef460: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ef460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef464: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1ef464u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef468: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ef468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ef46c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ef46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ef470: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1ef470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef474: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ef474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ef478: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ef478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ef47c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ef47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ef480: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ef480u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ef484: 0x1010  mfhi        $v0
    ctx->pc = 0x1ef484u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ef488: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EF488u;
    {
        const bool branch_taken_0x1ef488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef488) {
            ctx->pc = 0x1EF48Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF488u;
            // 0x1ef48c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF490u;
            goto label_1ef490;
        }
    }
    ctx->pc = 0x1EF490u;
label_1ef490:
    // 0x1ef490: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF490u;
    {
        const bool branch_taken_0x1ef490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef490) {
            ctx->pc = 0x1EF494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF490u;
            // 0x1ef494: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32u)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF4ACu;
            goto label_1ef4ac;
        }
    }
    ctx->pc = 0x1EF498u;
    // 0x1ef498: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ef498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ef49c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ef49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ef4a0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef4a4: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1EF4A4u;
    {
        const bool branch_taken_0x1ef4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF4A4u;
            // 0x1ef4a8: 0x24423098  addiu       $v0, $v0, 0x3098 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4a4) {
            ctx->pc = 0x1EF814u;
            goto label_1ef814;
        }
    }
    ctx->pc = 0x1EF4ACu;
label_1ef4ac:
    // 0x1ef4ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF4ACu;
    {
        const bool branch_taken_0x1ef4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF4ACu;
            // 0x1ef4b0: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4ac) {
            ctx->pc = 0x1EF4C0u;
            goto label_1ef4c0;
        }
    }
    ctx->pc = 0x1EF4B4u;
    // 0x1ef4b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ef4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ef4b8: 0x1000ffae  b           . + 4 + (-0x52 << 2)
    ctx->pc = 0x1EF4B8u;
    {
        const bool branch_taken_0x1ef4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF4B8u;
            // 0x1ef4bc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4b8) {
            ctx->pc = 0x1EF374u;
            goto label_1ef374;
        }
    }
    ctx->pc = 0x1EF4C0u;
label_1ef4c0:
    // 0x1ef4c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ef4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef4c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef4c8:
    // 0x1ef4c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ef4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef4cc: 0x504000de  beql        $v0, $zero, . + 4 + (0xDE << 2)
    ctx->pc = 0x1EF4CCu;
    {
        const bool branch_taken_0x1ef4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef4cc) {
            ctx->pc = 0x1EF4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF4CCu;
            // 0x1ef4d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF4D4u;
    // 0x1ef4d4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1ef4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef4d8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1ef4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef4dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef4e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ef4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ef4e4: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1ef4e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef4e8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1ef4e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1ef4ec: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ef4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ef4f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ef4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef4f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1ef4f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef4f8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1ef4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1ef4fc: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x1ef4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x1ef500: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ef500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ef504: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ef504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ef508: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef50c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ef50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ef510: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef514:
    // 0x1ef514: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ef514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef518: 0x504000cb  beql        $v0, $zero, . + 4 + (0xCB << 2)
    ctx->pc = 0x1EF518u;
    {
        const bool branch_taken_0x1ef518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef518) {
            ctx->pc = 0x1EF51Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF518u;
            // 0x1ef51c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF520u;
    // 0x1ef520: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1ef520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef524: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1ef524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef528: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef52c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ef52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ef530: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1ef530u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef534: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1ef534u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1ef538: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ef538u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ef53c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ef53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef540: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ef540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef544: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ef544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ef548: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1ef548u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ef54c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1ef54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ef550: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x1ef550u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x1ef554: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ef554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ef558: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1ef558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1ef55c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef560: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ef560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef564: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef568:
    // 0x1ef568: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ef568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef56c: 0x504000b6  beql        $v0, $zero, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1EF56Cu;
    {
        const bool branch_taken_0x1ef56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef56c) {
            ctx->pc = 0x1EF570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF56Cu;
            // 0x1ef570: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF574u;
    // 0x1ef574: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1ef574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef578: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1ef578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef57c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef580: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ef580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ef584: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1ef584u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef588: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1ef588u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1ef58c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ef58cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ef590: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ef590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef594: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ef594u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef598: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1ef598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1ef59c: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1ef59cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ef5a0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1ef5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ef5a4: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x1ef5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x1ef5a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ef5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ef5ac: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1ef5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1ef5b0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef5b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ef5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ef5b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef5bc:
    // 0x1ef5bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ef5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef5c0: 0x504000a1  beql        $v0, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1EF5C0u;
    {
        const bool branch_taken_0x1ef5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef5c0) {
            ctx->pc = 0x1EF5C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF5C0u;
            // 0x1ef5c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF5C8u;
    // 0x1ef5c8: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1ef5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef5cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef5d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ef5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ef5d4: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1ef5d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef5d8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1ef5d8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1ef5dc: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ef5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ef5e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ef5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef5e4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ef5e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef5e8: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1ef5e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ef5ec: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1ef5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ef5f0: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x1ef5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x1ef5f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ef5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ef5f8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1ef5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1ef5fc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef600: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x1ef600u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ef604: 0xfe020038  sd          $v0, 0x38($s0)
    ctx->pc = 0x1ef604u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
    // 0x1ef608: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ef608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef60c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ef610: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1EF610u;
    {
        const bool branch_taken_0x1ef610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF610u;
            // 0x1ef614: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef610) {
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF618u;
label_1ef618:
    // 0x1ef618: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef61c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ef61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ef620: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ef624: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef628: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x1ef628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x1ef62c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ef62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1ef630: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef634: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1EF634u;
    {
        const bool branch_taken_0x1ef634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF634u;
            // 0x1ef638: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef634) {
            ctx->pc = 0x1EF844u;
            goto label_1ef844;
        }
    }
    ctx->pc = 0x1EF63Cu;
label_1ef63c:
    // 0x1ef63c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef640: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1ef640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ef644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ef644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef648: 0xc07bf0f  jal         func_1EFC3C
    ctx->pc = 0x1EF648u;
    SET_GPR_U32(ctx, 31, 0x1EF650u);
    ctx->pc = 0x1EF64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF648u;
            // 0x1ef64c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC3Cu;
    if (runtime->hasFunction(0x1EFC3Cu)) {
        auto targetFn = runtime->lookupFunction(0x1EFC3Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF650u; }
        if (ctx->pc != 0x1EF650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_0x1efc3c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF650u; }
        if (ctx->pc != 0x1EF650u) { return; }
    }
    ctx->pc = 0x1EF650u;
    // 0x1ef650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ef650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef654: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1ef654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1ef658: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF658u;
    {
        const bool branch_taken_0x1ef658 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef658) {
            ctx->pc = 0x1EF65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF658u;
            // 0x1ef65c: 0x251880a  movz        $s1, $s2, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF678u;
            goto label_1ef678;
        }
    }
    ctx->pc = 0x1EF660u;
    // 0x1ef660: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef664: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1ef664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ef668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ef668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ef66c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef670: 0x1000ff40  b           . + 4 + (-0xC0 << 2)
    ctx->pc = 0x1EF670u;
    {
        const bool branch_taken_0x1ef670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF670u;
            // 0x1ef674: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef670) {
            ctx->pc = 0x1EF374u;
            goto label_1ef374;
        }
    }
    ctx->pc = 0x1EF678u;
label_1ef678:
    // 0x1ef678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef67c: 0x56220072  bnel        $s1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1EF67Cu;
    {
        const bool branch_taken_0x1ef67c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef67c) {
            ctx->pc = 0x1EF680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF67Cu;
            // 0x1ef680: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF684u;
    // 0x1ef684: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1ef684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef688: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1ef688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef68c: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1ef690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ef690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef694: 0xc07beaa  jal         func_1EFAA8
    ctx->pc = 0x1EF694u;
    SET_GPR_U32(ctx, 31, 0x1EF69Cu);
    ctx->pc = 0x1EF698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF694u;
            // 0x1ef698: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFAA8u;
    if (runtime->hasFunction(0x1EFAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1EFAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF69Cu; }
        if (ctx->pc != 0x1EF69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_reset_0x1efaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF69Cu; }
        if (ctx->pc != 0x1EF69Cu) { return; }
    }
    ctx->pc = 0x1EF69Cu;
    // 0x1ef69c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef6a0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1ef6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ef6a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF6A4u;
    {
        const bool branch_taken_0x1ef6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6A4u;
            // 0x1ef6a8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6a4) {
            ctx->pc = 0x1EF6B8u;
            goto label_1ef6b8;
        }
    }
    ctx->pc = 0x1EF6ACu;
    // 0x1ef6ac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ef6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ef6b0: 0x1000ff30  b           . + 4 + (-0xD0 << 2)
    ctx->pc = 0x1EF6B0u;
    {
        const bool branch_taken_0x1ef6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6B0u;
            // 0x1ef6b4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6b0) {
            ctx->pc = 0x1EF374u;
            goto label_1ef374;
        }
    }
    ctx->pc = 0x1EF6B8u;
label_1ef6b8:
    // 0x1ef6b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef6bc:
    // 0x1ef6bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ef6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef6c0: 0x50400061  beql        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x1EF6C0u;
    {
        const bool branch_taken_0x1ef6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef6c0) {
            ctx->pc = 0x1EF6C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6C0u;
            // 0x1ef6c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF6C8u;
    // 0x1ef6c8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1ef6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6cc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1ef6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef6d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef6d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ef6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ef6d8: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1ef6d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef6dc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1ef6dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1ef6e0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ef6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ef6e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ef6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef6e8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1ef6e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef6ec: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1ef6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1ef6f0: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x1ef6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x1ef6f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ef6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ef6f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ef6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ef6fc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef700: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ef700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ef704: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef708:
    // 0x1ef708: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ef708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef70c: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x1EF70Cu;
    {
        const bool branch_taken_0x1ef70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef70c) {
            ctx->pc = 0x1EF710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF70Cu;
            // 0x1ef710: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF714u;
    // 0x1ef714: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1ef714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef718: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1ef718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef71c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef720: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ef720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ef724: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1ef724u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef728: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1ef728u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1ef72c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ef72cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ef730: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ef730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef734: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ef734u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef738: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ef738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ef73c: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1ef73cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ef740: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1ef740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ef744: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x1ef744u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x1ef748: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ef748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ef74c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1ef74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1ef750: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef754: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ef754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ef758: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef75c:
    // 0x1ef75c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ef75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef760: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1EF760u;
    {
        const bool branch_taken_0x1ef760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef760) {
            ctx->pc = 0x1EF764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF760u;
            // 0x1ef764: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF768u;
    // 0x1ef768: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1ef768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef76c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1ef76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef770: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef774: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ef774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ef778: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1ef778u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef77c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1ef77cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1ef780: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ef780u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ef784: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ef784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef788: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ef788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef78c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1ef78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1ef790: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1ef790u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ef794: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1ef794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ef798: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x1ef798u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x1ef79c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ef79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ef7a0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1ef7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1ef7a4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef7a8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1ef7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ef7ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef7acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef7b0:
    // 0x1ef7b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ef7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ef7b4: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EF7B4u;
    {
        const bool branch_taken_0x1ef7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef7b4) {
            ctx->pc = 0x1EF7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7B4u;
            // 0x1ef7b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF7BCu;
    // 0x1ef7bc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1ef7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef7c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef7c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ef7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ef7c8: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x1ef7c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef7cc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1ef7ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1ef7d0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ef7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1ef7d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ef7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef7d8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ef7d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef7dc: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1ef7dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ef7e0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1ef7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ef7e4: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x1ef7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x1ef7e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ef7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ef7ec: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1ef7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1ef7f0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1ef7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef7f4: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1ef7f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ef7f8: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x1ef7f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ef7fc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EF7FCu;
    {
        const bool branch_taken_0x1ef7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EF800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7FCu;
            // 0x1ef800: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7fc) {
            ctx->pc = 0x1EF828u;
            goto label_1ef828;
        }
    }
    ctx->pc = 0x1EF804u;
    // 0x1ef804: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ef804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ef808: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ef808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ef80c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef810: 0x244230c0  addiu       $v0, $v0, 0x30C0
    ctx->pc = 0x1ef810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12480));
label_1ef814:
    // 0x1ef814: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ef814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1ef818: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef81c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ef81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ef820: 0x1000fed4  b           . + 4 + (-0x12C << 2)
    ctx->pc = 0x1EF820u;
    {
        const bool branch_taken_0x1ef820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF820u;
            // 0x1ef824: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef820) {
            ctx->pc = 0x1EF374u;
            goto label_1ef374;
        }
    }
    ctx->pc = 0x1EF828u;
label_1ef828:
    // 0x1ef828: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ef828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef82c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ef82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ef830: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ef834:
    // 0x1ef834: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF834u;
    {
        const bool branch_taken_0x1ef834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF834u;
            // 0x1ef838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef834) {
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF83Cu;
label_1ef83c:
    // 0x1ef83c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF83Cu;
    {
        const bool branch_taken_0x1ef83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF83Cu;
            // 0x1ef840: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef83c) {
            ctx->pc = 0x1EF848u;
            goto label_1ef848;
        }
    }
    ctx->pc = 0x1EF844u;
label_1ef844:
    // 0x1ef844: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ef844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ef848:
    // 0x1ef848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef84c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef84cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef854: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ef854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef858: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF858u;
            // 0x1ef85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF36Cu: goto label_1ef36c;
            case 0x1EF374u: goto label_1ef374;
            case 0x1EF3A0u: goto label_1ef3a0;
            case 0x1EF400u: goto label_1ef400;
            case 0x1EF434u: goto label_1ef434;
            case 0x1EF43Cu: goto label_1ef43c;
            case 0x1EF490u: goto label_1ef490;
            case 0x1EF4ACu: goto label_1ef4ac;
            case 0x1EF4C0u: goto label_1ef4c0;
            case 0x1EF4C8u: goto label_1ef4c8;
            case 0x1EF514u: goto label_1ef514;
            case 0x1EF568u: goto label_1ef568;
            case 0x1EF5BCu: goto label_1ef5bc;
            case 0x1EF618u: goto label_1ef618;
            case 0x1EF63Cu: goto label_1ef63c;
            case 0x1EF678u: goto label_1ef678;
            case 0x1EF6B8u: goto label_1ef6b8;
            case 0x1EF6BCu: goto label_1ef6bc;
            case 0x1EF708u: goto label_1ef708;
            case 0x1EF75Cu: goto label_1ef75c;
            case 0x1EF7B0u: goto label_1ef7b0;
            case 0x1EF814u: goto label_1ef814;
            case 0x1EF828u: goto label_1ef828;
            case 0x1EF834u: goto label_1ef834;
            case 0x1EF83Cu: goto label_1ef83c;
            case 0x1EF844u: goto label_1ef844;
            case 0x1EF848u: goto label_1ef848;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF860u;
}
