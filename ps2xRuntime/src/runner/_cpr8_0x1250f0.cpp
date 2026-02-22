#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _cpr8
// Address: 0x1250f0 - 0x1252dc
void _cpr8_0x1250f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1250f0u;

    // 0x1250f0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x1250f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x1250f4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1250f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250f8: 0x8c6417bc  lw          $a0, 0x17BC($v1)
    ctx->pc = 0x1250f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6076)));
    // 0x1250fc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1250fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x125100: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x125100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x125104: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x125104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x125108: 0x8c980040  lw          $t8, 0x40($a0)
    ctx->pc = 0x125108u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12510c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12510cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x125110: 0x8c6619ac  lw          $a2, 0x19AC($v1)
    ctx->pc = 0x125110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6572)));
    // 0x125114: 0xa24824  and         $t1, $a1, $v0
    ctx->pc = 0x125114u;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x125118: 0x8f0300d8  lw          $v1, 0xD8($t8)
    ctx->pc = 0x125118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 216)));
    // 0x12511c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125120: 0x10c40006  beq         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x125120u;
    {
        const bool branch_taken_0x125120 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x125124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125120u;
            // 0x125124: 0x627824  and         $t7, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125120) {
            ctx->pc = 0x12513Cu;
            goto label_12513c;
        }
    }
    ctx->pc = 0x125128u;
    // 0x125128: 0x8f0400e0  lw          $a0, 0xE0($t8)
    ctx->pc = 0x125128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x12512c: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x12512Cu;
    {
        const bool branch_taken_0x12512c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x125130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12512Cu;
            // 0x125130: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12512c) {
            ctx->pc = 0x12516Cu;
            goto label_12516c;
        }
    }
    ctx->pc = 0x125134u;
    // 0x125134: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x125134u;
    {
        const bool branch_taken_0x125134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125134u;
            // 0x125138: 0x8d820010  lw          $v0, 0x10($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125134) {
            ctx->pc = 0x125144u;
            goto label_125144;
        }
    }
    ctx->pc = 0x12513Cu;
label_12513c:
    // 0x12513c: 0x8f0300e0  lw          $v1, 0xE0($t8)
    ctx->pc = 0x12513cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x125140: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x125140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
label_125144:
    // 0x125144: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x125144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x125148: 0x445818  mult        $t3, $v0, $a0
    ctx->pc = 0x125148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12514c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12514Cu;
    {
        const bool branch_taken_0x12514c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12514Cu;
            // 0x125150: 0xb5103  sra         $t2, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12514c) {
            ctx->pc = 0x125160u;
            goto label_125160;
        }
    }
    ctx->pc = 0x125154u;
    // 0x125154: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x125154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x125158: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x125158u;
    {
        const bool branch_taken_0x125158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12515Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125158u;
            // 0x12515c: 0x447018  mult        $t6, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125158) {
            ctx->pc = 0x125164u;
            goto label_125164;
        }
    }
    ctx->pc = 0x125160u;
label_125160:
    // 0x125160: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x125160u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_125164:
    // 0x125164: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x125164u;
    {
        const bool branch_taken_0x125164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125164u;
            // 0x125168: 0x24190001  addiu       $t9, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125164) {
            ctx->pc = 0x125190u;
            goto label_125190;
        }
    }
    ctx->pc = 0x12516Cu;
label_12516c:
    // 0x12516c: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x12516cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x125170: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x125170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x125174: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x125174u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x125178: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x125178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x12517c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x12517cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x125180: 0x837018  mult        $t6, $a0, $v1
    ctx->pc = 0x125180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125184: 0x70455818  mult1       $t3, $v0, $a1
    ctx->pc = 0x125184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125188: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12518c: 0xb5103  sra         $t2, $t3, 4
    ctx->pc = 0x12518cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
label_125190:
    // 0x125190: 0x13200050  beqz        $t9, . + 4 + (0x50 << 2)
    ctx->pc = 0x125190u;
    {
        const bool branch_taken_0x125190 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x125194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125190u;
            // 0x125194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125190) {
            ctx->pc = 0x1252D4u;
            goto label_1252d4;
        }
    }
    ctx->pc = 0x125198u;
    // 0x125198: 0x8d87000c  lw          $a3, 0xC($t4)
    ctx->pc = 0x125198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x12519c: 0x0  nop
    ctx->pc = 0x12519cu;
    // NOP
label_1251a0:
    // 0x1251a0: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x1251a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251a4: 0x18e00043  blez        $a3, . + 4 + (0x43 << 2)
    ctx->pc = 0x1251A4u;
    {
        const bool branch_taken_0x1251a4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1251A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1251A4u;
            // 0x1251a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251a4) {
            ctx->pc = 0x1252B4u;
            goto label_1252b4;
        }
    }
    ctx->pc = 0x1251ACu;
    // 0x1251ac: 0x24ad0001  addiu       $t5, $a1, 0x1
    ctx->pc = 0x1251acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1251b0:
    // 0x1251b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1251b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1251b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1251b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1251b8: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x1251b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)54400u)));
    // 0x1251bc: 0x3484d410  ori         $a0, $a0, 0xD410
    ctx->pc = 0x1251bcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)54288u)));
    // 0x1251c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1251c0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1251c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1251c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1251c8: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1251c8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x1251cc: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x1251ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)54304u)));
    // 0x1251d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1251d4: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1251d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10)); // MMIO: 0x10000000
    // 0x1251d8: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x1251d8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)54272u)));
    // 0x1251dc: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1251dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1251e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1251e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1251e4: 0x12b2821  addu        $a1, $t1, $t3
    ctx->pc = 0x1251e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1251e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1251e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1251ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1251ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1251f0: 0x10e4821  addu        $t1, $t0, $t6
    ctx->pc = 0x1251f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1251f4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1251f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)54272u)));
label_1251f8:
    // 0x1251f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1251f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1251fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1251fcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x125200: 0x0  nop
    ctx->pc = 0x125200u;
    // NOP
    // 0x125204: 0x0  nop
    ctx->pc = 0x125204u;
    // NOP
    // 0x125208: 0x0  nop
    ctx->pc = 0x125208u;
    // NOP
    // 0x12520c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12520Cu;
    {
        const bool branch_taken_0x12520c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12520c) {
            ctx->pc = 0x1251F8u;
            goto label_1251f8;
        }
    }
    ctx->pc = 0x125214u;
    // 0x125214: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x125214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x125218: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x125218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12521c: 0x3442d080  ori         $v0, $v0, 0xD080
    ctx->pc = 0x12521cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)53376u)));
    // 0x125220: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x125220u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)53264u)));
    // 0x125224: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x125224u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x125228: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12522c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x12522cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x125230: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x125230u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)53280u)));
    // 0x125234: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x125234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x125238: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x125238u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10)); // MMIO: 0x10000000
    // 0x12523c: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x12523cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)53248u)));
    // 0x125240: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x125240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x125244: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x125244u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x125248: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12524c: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x12524cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)53248u)));
    // 0x125250: 0x8d87000c  lw          $a3, 0xC($t4)
    ctx->pc = 0x125250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x125254: 0x0  nop
    ctx->pc = 0x125254u;
    // NOP
label_125258:
    // 0x125258: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125258u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x12525c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12525cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x125260: 0x0  nop
    ctx->pc = 0x125260u;
    // NOP
    // 0x125264: 0x0  nop
    ctx->pc = 0x125264u;
    // NOP
    // 0x125268: 0x0  nop
    ctx->pc = 0x125268u;
    // NOP
    // 0x12526c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12526Cu;
    {
        const bool branch_taken_0x12526c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12526c) {
            ctx->pc = 0x125258u;
            goto label_125258;
        }
    }
    ctx->pc = 0x125274u;
    // 0x125274: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x125274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x125278: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x125278u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)53280u)));
    // 0x12527c: 0x0  nop
    ctx->pc = 0x12527cu;
    // NOP
label_125280:
    // 0x125280: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x125280u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x125284: 0x0  nop
    ctx->pc = 0x125284u;
    // NOP
    // 0x125288: 0x0  nop
    ctx->pc = 0x125288u;
    // NOP
    // 0x12528c: 0x0  nop
    ctx->pc = 0x12528cu;
    // NOP
    // 0x125290: 0x0  nop
    ctx->pc = 0x125290u;
    // NOP
    // 0x125294: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x125294u;
    {
        const bool branch_taken_0x125294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125294) {
            ctx->pc = 0x125280u;
            goto label_125280;
        }
    }
    ctx->pc = 0x12529Cu;
    // 0x12529c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x12529cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252a0: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1252a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1252a4: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1252A4u;
    {
        const bool branch_taken_0x1252a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1252A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1252A4u;
            // 0x1252a8: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252a4) {
            ctx->pc = 0x1251B0u;
            goto label_1251b0;
        }
    }
    ctx->pc = 0x1252ACu;
    // 0x1252ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1252ACu;
    {
        const bool branch_taken_0x1252ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1252ACu;
            // 0x1252b0: 0x8f0200e4  lw          $v0, 0xE4($t8) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252ac) {
            ctx->pc = 0x1252BCu;
            goto label_1252bc;
        }
    }
    ctx->pc = 0x1252B4u;
label_1252b4:
    // 0x1252b4: 0x24ad0001  addiu       $t5, $a1, 0x1
    ctx->pc = 0x1252b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1252b8: 0x8f0200e4  lw          $v0, 0xE4($t8)
    ctx->pc = 0x1252b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 228)));
label_1252bc:
    // 0x1252bc: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1252bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1252c0: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x1252c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252c4: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x1252c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1252c8: 0xb9202a  slt         $a0, $a1, $t9
    ctx->pc = 0x1252c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x1252cc: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1252CCu;
    {
        const bool branch_taken_0x1252cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1252D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1252CCu;
            // 0x1252d0: 0xcf7821  addu        $t7, $a2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252cc) {
            ctx->pc = 0x1251A0u;
            goto label_1251a0;
        }
    }
    ctx->pc = 0x1252D4u;
label_1252d4:
    // 0x1252d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1252D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12513Cu: goto label_12513c;
            case 0x125144u: goto label_125144;
            case 0x125160u: goto label_125160;
            case 0x125164u: goto label_125164;
            case 0x12516Cu: goto label_12516c;
            case 0x125190u: goto label_125190;
            case 0x1251A0u: goto label_1251a0;
            case 0x1251B0u: goto label_1251b0;
            case 0x1251F8u: goto label_1251f8;
            case 0x125258u: goto label_125258;
            case 0x125280u: goto label_125280;
            case 0x1252B4u: goto label_1252b4;
            case 0x1252BCu: goto label_1252bc;
            case 0x1252D4u: goto label_1252d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1252DCu;
}
