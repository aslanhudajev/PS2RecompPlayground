#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _getRef0
// Address: 0x125708 - 0x125b24
void _getRef0_0x125708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_getRef0_0x125708");
#endif

    ctx->pc = 0x125708u;

    // 0x125708: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x125708u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12570c: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12570cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x125710: 0x270206bc  addiu       $v0, $t8, 0x6BC
    ctx->pc = 0x125710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 1724));
    // 0x125714: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x125714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x125718: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x125718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x12571c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x12571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x125720: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x125720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x125724: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x125724u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125728: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x125728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x12572c: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x12572cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125730: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x125730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x125734: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x125734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125738: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x125738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12573c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12573cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125740: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x125740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x125744: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x125744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x125748: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x125748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x12574c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x12574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x125750: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x125750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x125754: 0x8f04081c  lw          $a0, 0x81C($t8)
    ctx->pc = 0x125754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2076)));
    // 0x125758: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x125758u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12575c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x12575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x125760: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x125760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x125764: 0x8fad00c0  lw          $t5, 0xC0($sp)
    ctx->pc = 0x125764u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x125768: 0x8f020810  lw          $v0, 0x810($t8)
    ctx->pc = 0x125768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
    // 0x12576c: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x12576cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x125770: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x125770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125774: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x125774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x125778: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x125778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12577c: 0x165043  sra         $t2, $s6, 1
    ctx->pc = 0x12577cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 22), 1));
    // 0x125780: 0x8fb200b8  lw          $s2, 0xB8($sp)
    ctx->pc = 0x125780u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x125784: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x125784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x125788: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x125788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12578c: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x12578cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x125790: 0x24420590  addiu       $v0, $v0, 0x590
    ctx->pc = 0x125790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1424));
    // 0x125794: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x125794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x125798: 0x2e42018  mult        $a0, $s7, $a0
    ctx->pc = 0x125798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12579c: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x12579cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x1257a0: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x1257a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x1257a4: 0x437821  addu        $t7, $v0, $v1
    ctx->pc = 0x1257a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1257a8: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1257A8u;
    {
        const bool branch_taken_0x1257a8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1257A8u;
            // 0x1257ac: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257a8) {
            ctx->pc = 0x1257C0u;
            goto label_1257c0;
        }
    }
    ctx->pc = 0x1257B0u;
    // 0x1257b0: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x1257b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1257b4: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1257b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1257b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1257B8u;
    {
        const bool branch_taken_0x1257b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1257B8u;
            // 0x1257bc: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257b8) {
            ctx->pc = 0x1257C8u;
            goto label_1257c8;
        }
    }
    ctx->pc = 0x1257C0u;
label_1257c0:
    // 0x1257c0: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x1257c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1257c4: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1257c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1257c8:
    // 0x1257c8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1257c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1257cc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1257ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1257d0: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x1257d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1257d4: 0x8a103  sra         $s4, $t0, 4
    ctx->pc = 0x1257d4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 4));
    // 0x1257d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1257d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1257dc: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1257dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1257e0: 0x2852818  mult        $a1, $s4, $a1
    ctx->pc = 0x1257e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1257e4: 0x6a903  sra         $s5, $a2, 4
    ctx->pc = 0x1257e4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1257e8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1257e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1257ec: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1257ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1257f0: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x1257f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1257f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1257f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1257f8: 0xad830004  sw          $v1, 0x4($t4)
    ctx->pc = 0x1257f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
    // 0x1257fc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1257fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x125800: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x125800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x125804: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x125804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x125808: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x125808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x12580c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x12580cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x125810: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x125810u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x125814: 0x32590001  andi        $t9, $s2, 0x1
    ctx->pc = 0x125814u;
    SET_GPR_VEC(ctx, 25, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)1u)));
    // 0x125818: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x125818u;
    {
        const bool branch_taken_0x125818 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x12581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125818u;
            // 0x12581c: 0x32d30001  andi        $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 19, PS2_PAND(GPR_VEC(ctx, 22), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125818) {
            ctx->pc = 0x125858u;
            goto label_125858;
        }
    }
    ctx->pc = 0x125820u;
    // 0x125820: 0x1ae1004  sllv        $v0, $t6, $t5
    ctx->pc = 0x125820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x125824: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x125824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x125828: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x125828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12582c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x12582Cu;
    {
        const bool branch_taken_0x12582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12582c) {
            ctx->pc = 0x125830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12582Cu;
            // 0x125830: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12588Cu;
            goto label_12588c;
        }
    }
    ctx->pc = 0x125834u;
    // 0x125834: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x125834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125838: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x12583c: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x12583cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x125840: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x125840u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x125844: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x125844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x125848: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x125848u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x12584c: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x12584cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x125850: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x125850u;
    {
        const bool branch_taken_0x125850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125850u;
            // 0x125854: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125850) {
            ctx->pc = 0x125890u;
            goto label_125890;
        }
    }
    ctx->pc = 0x125858u;
label_125858:
    // 0x125858: 0x1ae1004  sllv        $v0, $t6, $t5
    ctx->pc = 0x125858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x12585c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x125860: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x125860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x125864: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x125864u;
    {
        const bool branch_taken_0x125864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125864) {
            ctx->pc = 0x125868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125864u;
            // 0x125868: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12588Cu;
            goto label_12588c;
        }
    }
    ctx->pc = 0x12586Cu;
    // 0x12586c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125870: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x125870u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x125874: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x125874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x125878: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x125878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12587c: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x12587cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x125880: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x125880u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x125884: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x125884u;
    {
        const bool branch_taken_0x125884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125884u;
            // 0x125888: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125884) {
            ctx->pc = 0x125890u;
            goto label_125890;
        }
    }
    ctx->pc = 0x12588Cu;
label_12588c:
    // 0x12588c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x12588cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_125890:
    // 0x125890: 0x8f050810  lw          $a1, 0x810($t8)
    ctx->pc = 0x125890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
    // 0x125894: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x125894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x125898: 0x24070600  addiu       $a3, $zero, 0x600
    ctx->pc = 0x125898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x12589c: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x12589cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1258a0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1258a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1258a4: 0x2e73818  mult        $a3, $s7, $a3
    ctx->pc = 0x1258a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1258a8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1258a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1258ac: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x1258acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1258b0: 0x252a0300  addiu       $t2, $t1, 0x300
    ctx->pc = 0x1258b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 768));
    // 0x1258b4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1258b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1258b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1258b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1258bc: 0x1a63004  sllv        $a2, $a2, $t5
    ctx->pc = 0x1258bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1258c0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1258c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1258c4: 0x782821  addu        $a1, $v1, $t8
    ctx->pc = 0x1258c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1258c8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1258c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1258cc: 0x161fc2  srl         $v1, $s6, 31
    ctx->pc = 0x1258ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
    // 0x1258d0: 0x8ca80590  lw          $t0, 0x590($a1)
    ctx->pc = 0x1258d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1424)));
    // 0x1258d4: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1258d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1258d8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1258d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1258dc: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x1258dcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1258e0: 0x1079021  addu        $s2, $t0, $a3
    ctx->pc = 0x1258e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1258e4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1258e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1258e8: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1258e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1258ec: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x1258ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1258f0: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x1258f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x1258f4: 0x5b043  sra         $s6, $a1, 1
    ctx->pc = 0x1258f4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1258f8: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x1258f8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x1258fc: 0x992025  or          $a0, $a0, $t9
    ctx->pc = 0x1258fcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 25)));
    // 0x125900: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x125900u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x125904: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x125904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x125908: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x125908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12590c: 0xad890014  sw          $t1, 0x14($t4)
    ctx->pc = 0x12590cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 9));
    // 0x125910: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x125910u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x125914: 0xad860010  sw          $a2, 0x10($t4)
    ctx->pc = 0x125914u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 6));
    // 0x125918: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x125918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12591c: 0xad8a0018  sw          $t2, 0x18($t4)
    ctx->pc = 0x12591cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 10));
    // 0x125920: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x125920u;
    {
        const bool branch_taken_0x125920 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x125924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125920u;
            // 0x125924: 0xe4843  sra         $t1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125920) {
            ctx->pc = 0x125944u;
            goto label_125944;
        }
    }
    ctx->pc = 0x125928u;
    // 0x125928: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x125928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
    // 0x12592c: 0xb2043  sra         $a0, $t3, 1
    ctx->pc = 0x12592cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 1));
    // 0x125930: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x125930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x125934: 0xf11821  addu        $v1, $a3, $s1
    ctx->pc = 0x125934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x125938: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x125938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12593c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12593Cu;
    {
        const bool branch_taken_0x12593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12593Cu;
            // 0x125940: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12593c) {
            ctx->pc = 0x125958u;
            goto label_125958;
        }
    }
    ctx->pc = 0x125944u;
label_125944:
    // 0x125944: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x125944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
    // 0x125948: 0xb1843  sra         $v1, $t3, 1
    ctx->pc = 0x125948u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 1));
    // 0x12594c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x125950: 0xf12021  addu        $a0, $a3, $s1
    ctx->pc = 0x125950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x125954: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x125954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_125958:
    // 0x125958: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x125958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12595c: 0x650c3  sra         $t2, $a2, 3
    ctx->pc = 0x12595cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 3));
    // 0x125960: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x125960u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125964: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x125964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x125968: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x125968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x12596c: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x12596cu;
    SET_GPR_VEC(ctx, 19, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)1u)));
    // 0x125970: 0x838c3  sra         $a3, $t0, 3
    ctx->pc = 0x125970u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
    // 0x125974: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x125974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x125978: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x125978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x12597c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x12597cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x125980: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x125980u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x125984: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x125984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x125988: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x125988u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12598c: 0x32d90001  andi        $t9, $s6, 0x1
    ctx->pc = 0x12598cu;
    SET_GPR_VEC(ctx, 25, PS2_PAND(GPR_VEC(ctx, 22), _mm_cvtsi32_si128((int)1u)));
    // 0x125990: 0xade30004  sw          $v1, 0x4($t7)
    ctx->pc = 0x125990u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 3));
    // 0x125994: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x125994u;
    {
        const bool branch_taken_0x125994 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x125998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125994u;
            // 0x125998: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125994) {
            ctx->pc = 0x1259D4u;
            goto label_1259d4;
        }
    }
    ctx->pc = 0x12599Cu;
    // 0x12599c: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x1259a0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1259a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1259a4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1259a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1259a8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1259A8u;
    {
        const bool branch_taken_0x1259a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1259a8) {
            ctx->pc = 0x1259ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1259A8u;
            // 0x1259ac: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125A08u;
            goto label_125a08;
        }
    }
    ctx->pc = 0x1259B0u;
    // 0x1259b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1259b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1259b4: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1259b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1259b8: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1259b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1259bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1259bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1259c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1259c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1259c4: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x1259c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1259c8: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x1259c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x1259cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1259CCu;
    {
        const bool branch_taken_0x1259cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1259CCu;
            // 0x1259d0: 0xade3000c  sw          $v1, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259cc) {
            ctx->pc = 0x125A0Cu;
            goto label_125a0c;
        }
    }
    ctx->pc = 0x1259D4u;
label_1259d4:
    // 0x1259d4: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x1259d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x1259d8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1259d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1259dc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1259dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1259e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1259E0u;
    {
        const bool branch_taken_0x1259e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1259e0) {
            ctx->pc = 0x1259E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1259E0u;
            // 0x1259e4: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125A08u;
            goto label_125a08;
        }
    }
    ctx->pc = 0x1259E8u;
    // 0x1259e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1259e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1259ec: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1259ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1259f0: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1259f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1259f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1259f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1259f8: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x1259f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1259fc: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x1259fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x125a00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x125A00u;
    {
        const bool branch_taken_0x125a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125A00u;
            // 0x125a04: 0xade4000c  sw          $a0, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a00) {
            ctx->pc = 0x125A0Cu;
            goto label_125a0c;
        }
    }
    ctx->pc = 0x125A08u;
label_125a08:
    // 0x125a08: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x125a08u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
label_125a0c:
    // 0x125a0c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x125a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125a10: 0xf42023  subu        $a0, $a3, $s4
    ctx->pc = 0x125a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x125a14: 0x1a21004  sllv        $v0, $v0, $t5
    ctx->pc = 0x125a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x125a18: 0x1551823  subu        $v1, $t2, $s5
    ctx->pc = 0x125a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x125a1c: 0xade20010  sw          $v0, 0x10($t7)
    ctx->pc = 0x125a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 2));
    // 0x125a20: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x125a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x125a24: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x125a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x125a28: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x125a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x125a2c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x125a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x125a30: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x125a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x125a34: 0x8f080810  lw          $t0, 0x810($t8)
    ctx->pc = 0x125a34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
    // 0x125a38: 0x240a0180  addiu       $t2, $zero, 0x180
    ctx->pc = 0x125a38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x125a3c: 0x8fac0010  lw          $t4, 0x10($sp)
    ctx->pc = 0x125a3cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125a40: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x125a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x125a44: 0x1054018  mult        $t0, $t0, $a1
    ctx->pc = 0x125a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125a48: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x125a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x125a4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x125a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x125a50: 0x8a2818  mult        $a1, $a0, $t2
    ctx->pc = 0x125a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125a54: 0x18a6818  mult        $t5, $t4, $t2
    ctx->pc = 0x125a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125a58: 0x8fcb0010  lw          $t3, 0x10($fp)
    ctx->pc = 0x125a58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x125a5c: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x125a5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x125a60: 0x173880  sll         $a3, $s7, 2
    ctx->pc = 0x125a60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x125a64: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x125a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125a68: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x125a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x125a6c: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x125a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x125a70: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x125a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x125a74: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x125a74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x125a78: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x125a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125a7c: 0x3071821  addu        $v1, $t8, $a3
    ctx->pc = 0x125a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x125a80: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x125a80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x125a84: 0xac6c05b8  sw          $t4, 0x5B8($v1)
    ctx->pc = 0x125a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 12));
    // 0x125a88: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x125a88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x125a8c: 0x8fac0014  lw          $t4, 0x14($sp)
    ctx->pc = 0x125a8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x125a90: 0x24c30400  addiu       $v1, $a2, 0x400
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x125a94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x125a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x125a98: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x125a98u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x125a9c: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x125a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x125aa0: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x125aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x125aa4: 0x16a6018  mult        $t4, $t3, $t2
    ctx->pc = 0x125aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125aa8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x125aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x125aac: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x125aacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x125ab0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x125ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x125ab4: 0x24a50160  addiu       $a1, $a1, 0x160
    ctx->pc = 0x125ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x125ab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x125ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x125abc: 0xade40014  sw          $a0, 0x14($t7)
    ctx->pc = 0x125abcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 4));
    // 0x125ac0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x125ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x125ac4: 0xade30018  sw          $v1, 0x18($t7)
    ctx->pc = 0x125ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 3));
    // 0x125ac8: 0x3072021  addu        $a0, $t8, $a3
    ctx->pc = 0x125ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x125acc: 0x1895821  addu        $t3, $t4, $t1
    ctx->pc = 0x125accu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x125ad0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x125ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x125ad4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x125ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ad8: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x125ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x125adc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x125adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125ae0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x125ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x125ae4: 0xac890598  sw          $t1, 0x598($a0)
    ctx->pc = 0x125ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1432), GPR_U32(ctx, 9));
    // 0x125ae8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x125ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125aec: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x125aecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x125af0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x125af0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x125af4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x125af4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125af8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x125af8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125afc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x125afcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x125b00: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x125b00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125b04: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x125b04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125b08: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x125b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125b0c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x125b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125b10: 0xac6605c8  sw          $a2, 0x5C8($v1)
    ctx->pc = 0x125b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1480), GPR_U32(ctx, 6));
    // 0x125b14: 0xaceb05a8  sw          $t3, 0x5A8($a3)
    ctx->pc = 0x125b14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 11));
    // 0x125b18: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x125b18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x125b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x125B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B1Cu;
            // 0x125b20: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1257C0u: goto label_1257c0;
            case 0x1257C8u: goto label_1257c8;
            case 0x125858u: goto label_125858;
            case 0x12588Cu: goto label_12588c;
            case 0x125890u: goto label_125890;
            case 0x125944u: goto label_125944;
            case 0x125958u: goto label_125958;
            case 0x1259D4u: goto label_1259d4;
            case 0x125A08u: goto label_125a08;
            case 0x125A0Cu: goto label_125a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125B24u;
}
