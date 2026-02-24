#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _multiply
// Address: 0x1302e0 - 0x13050c
void _multiply_0x1302e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_multiply_0x1302e0");
#endif

    ctx->pc = 0x1302e0u;

    // 0x1302e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1302e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1302e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1302e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1302e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1302e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1302ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1302ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1302f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1302f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1302f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302f8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1302f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1302fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1302fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x130300: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x130300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x130304: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x130304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x130308: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x130308u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13030c: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x13030cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x130310: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x130310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x130314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130314u;
    {
        const bool branch_taken_0x130314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130314u;
            // 0x130318: 0x200c82d  daddu       $t9, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130314) {
            ctx->pc = 0x13032Cu;
            goto label_13032c;
        }
    }
    ctx->pc = 0x13031Cu;
    // 0x13031c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x13031cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130320: 0x320882d  daddu       $s1, $t9, $zero
    ctx->pc = 0x130320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130324: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x130324u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x130328: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x130328u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13032c:
    // 0x13032c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x13032cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x130330: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x130330u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x130334: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x130334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x130338: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x130338u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x13033c: 0xc04bf8a  jal         func_12FE28
    ctx->pc = 0x13033Cu;
    SET_GPR_U32(ctx, 31, 0x130344u);
    ctx->pc = 0x130340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13033Cu;
            // 0x130340: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE28u;
    if (runtime->hasFunction(0x12FE28u)) {
        auto targetFn = runtime->lookupFunction(0x12FE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130344u; }
        if (ctx->pc != 0x130344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130344u; }
        if (ctx->pc != 0x130344u) { return; }
    }
    ctx->pc = 0x130344u;
    // 0x130344: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x130344u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130348: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x130348u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13034c: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x13034cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x130350: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x130350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x130354: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x130354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x130358: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x130358u;
    {
        const bool branch_taken_0x130358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130358u;
            // 0x13035c: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130358) {
            ctx->pc = 0x130394u;
            goto label_130394;
        }
    }
    ctx->pc = 0x130360u;
    // 0x130360: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x130360u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x130364: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x130364u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x130368: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x130368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x13036c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x13036cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_130370:
    // 0x130370: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x130370u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x130374: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x130374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x130378: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x130378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13037c: 0x0  nop
    ctx->pc = 0x13037cu;
    // NOP
    // 0x130380: 0x0  nop
    ctx->pc = 0x130380u;
    // NOP
    // 0x130384: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130384u;
    {
        const bool branch_taken_0x130384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130384) {
            ctx->pc = 0x130370u;
            goto label_130370;
        }
    }
    ctx->pc = 0x13038Cu;
    // 0x13038c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13038Cu;
    {
        const bool branch_taken_0x13038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13038Cu;
            // 0x130390: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13038c) {
            ctx->pc = 0x1303A8u;
            goto label_1303a8;
        }
    }
    ctx->pc = 0x130394u;
label_130394:
    // 0x130394: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x130394u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x130398: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x130398u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13039c: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x13039cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1303a0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1303a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1303a4: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x1303a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1303a8:
    // 0x1303a8: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x1303a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x1303ac: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x1303acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1303b0: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x1303b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1303b4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1303B4u;
    {
        const bool branch_taken_0x1303b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1303B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1303B4u;
            // 0x1303b8: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303b4) {
            ctx->pc = 0x1304C4u;
            goto label_1304c4;
        }
    }
    ctx->pc = 0x1303BCu;
    // 0x1303bc: 0x0  nop
    ctx->pc = 0x1303bcu;
    // NOP
label_1303c0:
    // 0x1303c0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1303c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1303c4: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x1303c4u;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1303c8: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1303C8u;
    {
        const bool branch_taken_0x1303c8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1303CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1303C8u;
            // 0x1303cc: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303c8) {
            ctx->pc = 0x13043Cu;
            goto label_13043c;
        }
    }
    ctx->pc = 0x1303D0u;
    // 0x1303d0: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1303d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1303d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303d8: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x1303d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1303dc: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x1303dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1303e0:
    // 0x1303e0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1303e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1303e4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1303e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1303e8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1303e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1303ec: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1303ecu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x1303f0: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x1303f0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1303f4: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x1303f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1303f8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1303f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1303fc: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x1303fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x130400: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x130400u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x130404: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x130404u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x130408: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x130408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13040c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x13040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x130410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x130410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x130414: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x130414u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x130418: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x130418u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x13041c: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x13041cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x130420: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x130420u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x130424: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x130424u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x130428: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x130428u;
    {
        const bool branch_taken_0x130428 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x13042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130428u;
            // 0x13042c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130428) {
            ctx->pc = 0x1303E0u;
            goto label_1303e0;
        }
    }
    ctx->pc = 0x130430u;
    // 0x130430: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x130430u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x130434: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x130434u;
    {
        const bool branch_taken_0x130434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130434u;
            // 0x130438: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130434) {
            ctx->pc = 0x130444u;
            goto label_130444;
        }
    }
    ctx->pc = 0x13043Cu;
label_13043c:
    // 0x13043c: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x13043cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x130440: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x130440u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_130444:
    // 0x130444: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x130444u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x130448: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x130448u;
    {
        const bool branch_taken_0x130448 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x13044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130448u;
            // 0x13044c: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130448) {
            ctx->pc = 0x1304B4u;
            goto label_1304b4;
        }
    }
    ctx->pc = 0x130450u;
    // 0x130450: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x130450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130454: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x130454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x130458: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x130458u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13045c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x13045cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_130460:
    // 0x130460: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x130460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x130464: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x130464u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x130468: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x130468u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x13046c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x13046cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x130470: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x130470u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x130474: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x130474u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x130478: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x130478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13047c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x13047cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x130480: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x130480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x130484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x130484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130488: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x130488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x13048c: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x13048cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x130490: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x130490u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x130494: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x130494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x130498: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x130498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13049c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x13049cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1304a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1304a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1304a4: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x1304a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1304a8: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1304A8u;
    {
        const bool branch_taken_0x1304a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1304ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304A8u;
            // 0x1304ac: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304a8) {
            ctx->pc = 0x130460u;
            goto label_130460;
        }
    }
    ctx->pc = 0x1304B0u;
    // 0x1304b0: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1304b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_1304b4:
    // 0x1304b4: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x1304b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304b8: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x1304b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1304bc: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1304BCu;
    {
        const bool branch_taken_0x1304bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1304C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304BCu;
            // 0x1304c0: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304bc) {
            ctx->pc = 0x1303C0u;
            goto label_1303c0;
        }
    }
    ctx->pc = 0x1304C4u;
label_1304c4:
    // 0x1304c4: 0x3154021  addu        $t0, $t8, $s5
    ctx->pc = 0x1304c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_1304c8:
    // 0x1304c8: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1304C8u;
    {
        const bool branch_taken_0x1304c8 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1304c8) {
            ctx->pc = 0x1304CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1304C8u;
            // 0x1304cc: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1304E4u;
            goto label_1304e4;
        }
    }
    ctx->pc = 0x1304D0u;
    // 0x1304d0: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x1304d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x1304d4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1304d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1304d8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1304D8u;
    {
        const bool branch_taken_0x1304d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304d8) {
            ctx->pc = 0x1304DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1304D8u;
            // 0x1304dc: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1304C8u;
            goto label_1304c8;
        }
    }
    ctx->pc = 0x1304E0u;
    // 0x1304e0: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x1304e0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_1304e4:
    // 0x1304e4: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1304e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1304e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1304ec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1304ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1304f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1304f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1304f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1304f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1304f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1304f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1304fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1304fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130504: 0x3e00008  jr          $ra
    ctx->pc = 0x130504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130504u;
            // 0x130508: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13032Cu: goto label_13032c;
            case 0x130370u: goto label_130370;
            case 0x130394u: goto label_130394;
            case 0x1303A8u: goto label_1303a8;
            case 0x1303C0u: goto label_1303c0;
            case 0x1303E0u: goto label_1303e0;
            case 0x13043Cu: goto label_13043c;
            case 0x130444u: goto label_130444;
            case 0x130460u: goto label_130460;
            case 0x1304B4u: goto label_1304b4;
            case 0x1304C4u: goto label_1304c4;
            case 0x1304C8u: goto label_1304c8;
            case 0x1304E4u: goto label_1304e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13050Cu;
}
