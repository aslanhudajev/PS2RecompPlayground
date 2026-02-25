#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _cpr8
// Address: 0x129228 - 0x1294b8
void _cpr8_0x129228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_cpr8_0x129228");
#endif

    ctx->pc = 0x129228u;

    // 0x129228: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x129228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12922c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x12922cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x129230: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x129230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x129234: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129234u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x129238: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x129238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12923c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x12923cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129240: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x129240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x129244: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x129244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x129248: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x129248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x12924c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x12924cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x129250: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x129250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x129254: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x129254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x129258: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x129258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x12925c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x12925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x129260: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x129260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x129264: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x129264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129268: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x129268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12926c: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x12926cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x129270: 0x8cc50174  lw          $a1, 0x174($a2)
    ctx->pc = 0x129270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
    // 0x129274: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x129274u;
    SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x129278: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x129278u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12927c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129280: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x129280u;
    {
        const bool branch_taken_0x129280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x129284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129280u;
            // 0x129284: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129280) {
            ctx->pc = 0x12929Cu;
            goto label_12929c;
        }
    }
    ctx->pc = 0x129288u;
    // 0x129288: 0x8cc400e0  lw          $a0, 0xE0($a2)
    ctx->pc = 0x129288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x12928c: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12928Cu;
    {
        const bool branch_taken_0x12928c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x129290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12928Cu;
            // 0x129290: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12928c) {
            ctx->pc = 0x1292D4u;
            goto label_1292d4;
        }
    }
    ctx->pc = 0x129294u;
    // 0x129294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x129294u;
    {
        const bool branch_taken_0x129294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129294u;
            // 0x129298: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129294) {
            ctx->pc = 0x1292A8u;
            goto label_1292a8;
        }
    }
    ctx->pc = 0x12929Cu;
label_12929c:
    // 0x12929c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x12929cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1292a0: 0x8ce300e0  lw          $v1, 0xE0($a3)
    ctx->pc = 0x1292a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x1292a4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1292a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1292a8:
    // 0x1292a8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x1292a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1292ac: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x1292acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1292b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1292B0u;
    {
        const bool branch_taken_0x1292b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1292B0u;
            // 0x1292b4: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292b0) {
            ctx->pc = 0x1292C4u;
            goto label_1292c4;
        }
    }
    ctx->pc = 0x1292B8u;
    // 0x1292b8: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x1292b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1292bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1292BCu;
    {
        const bool branch_taken_0x1292bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1292BCu;
            // 0x1292c0: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292bc) {
            ctx->pc = 0x1292C8u;
            goto label_1292c8;
        }
    }
    ctx->pc = 0x1292C4u;
label_1292c4:
    // 0x1292c4: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x1292c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1292c8:
    // 0x1292c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1292c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1292cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1292CCu;
    {
        const bool branch_taken_0x1292cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1292CCu;
            // 0x1292d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292cc) {
            ctx->pc = 0x1292FCu;
            goto label_1292fc;
        }
    }
    ctx->pc = 0x1292D4u;
label_1292d4:
    // 0x1292d4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1292d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1292d8: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1292d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1292dc: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1292dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1292e0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1292e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1292e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1292e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1292e8: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x1292e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1292ec: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x1292ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1292f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1292f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1292f4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1292f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1292f8: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x1292f8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_1292fc:
    // 0x1292fc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1292fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129300: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x129300u;
    {
        const bool branch_taken_0x129300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x129304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129300u;
            // 0x129304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129300) {
            ctx->pc = 0x129488u;
            goto label_129488;
        }
    }
    ctx->pc = 0x129308u;
    // 0x129308: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x129308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x12930c: 0x0  nop
    ctx->pc = 0x12930cu;
    // NOP
label_129310:
    // 0x129310: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x129310u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129314: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x129314u;
    {
        const bool branch_taken_0x129314 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x129318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129314u;
            // 0x129318: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129314) {
            ctx->pc = 0x129454u;
            goto label_129454;
        }
    }
    ctx->pc = 0x12931Cu;
    // 0x12931c: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x12931cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_129320:
    // 0x129320: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x129320u;
    SET_GPR_U32(ctx, 31, 0x129328u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129328u; }
        if (ctx->pc != 0x129328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129328u; }
        if (ctx->pc != 0x129328u) { return; }
    }
    ctx->pc = 0x129328u;
    // 0x129328: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12932c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x12932cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x129330: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x129330u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)54400u)));
    // 0x129334: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x129334u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)54288u)));
    // 0x129338: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x129338u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x12933c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12933cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x129340: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x129340u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x129344: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x129344u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)54304u)));
    // 0x129348: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x129348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x12934c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x12934cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x129350: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x129350u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)54272u)));
    // 0x129354: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x129354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x129358: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x129358u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x12935c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12935Cu;
    {
        const bool branch_taken_0x12935c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12935Cu;
            // 0x129360: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12935c) {
            ctx->pc = 0x129370u;
            goto label_129370;
        }
    }
    ctx->pc = 0x129364u;
    // 0x129364: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x129364u;
    SET_GPR_U32(ctx, 31, 0x12936Cu);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12936Cu; }
        if (ctx->pc != 0x12936Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12936Cu; }
        if (ctx->pc != 0x12936Cu) { return; }
    }
    ctx->pc = 0x12936Cu;
    // 0x12936c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12936cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_129370:
    // 0x129370: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x129370u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x129374: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x129374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x129378: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x129378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x12937c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x12937cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)54272u)));
label_129380:
    // 0x129380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129380u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x129384: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x129384u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x129388: 0x0  nop
    ctx->pc = 0x129388u;
    // NOP
    // 0x12938c: 0x0  nop
    ctx->pc = 0x12938cu;
    // NOP
    // 0x129390: 0x0  nop
    ctx->pc = 0x129390u;
    // NOP
    // 0x129394: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129394u;
    {
        const bool branch_taken_0x129394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129394) {
            ctx->pc = 0x129380u;
            goto label_129380;
        }
    }
    ctx->pc = 0x12939Cu;
    // 0x12939c: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12939Cu;
    SET_GPR_U32(ctx, 31, 0x1293A4u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1293A4u; }
        if (ctx->pc != 0x1293A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1293A4u; }
        if (ctx->pc != 0x1293A4u) { return; }
    }
    ctx->pc = 0x1293A4u;
    // 0x1293a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1293a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1293a8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1293a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1293ac: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x1293acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)53376u)));
    // 0x1293b0: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x1293b0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)53264u)));
    // 0x1293b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1293b4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1293b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1293b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1293bc: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x1293bcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x1293c0: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x1293c0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)53280u)));
    // 0x1293c4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1293c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1293c8: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x1293c8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x1293cc: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x1293ccu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)53248u)));
    // 0x1293d0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1293d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1293d4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1293d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1293d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1293D8u;
    {
        const bool branch_taken_0x1293d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1293D8u;
            // 0x1293dc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293d8) {
            ctx->pc = 0x1293ECu;
            goto label_1293ec;
        }
    }
    ctx->pc = 0x1293E0u;
    // 0x1293e0: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x1293E0u;
    SET_GPR_U32(ctx, 31, 0x1293E8u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1293E8u; }
        if (ctx->pc != 0x1293E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1293E8u; }
        if (ctx->pc != 0x1293E8u) { return; }
    }
    ctx->pc = 0x1293E8u;
    // 0x1293e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1293e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1293ec:
    // 0x1293ec: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1293ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1293f0: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x1293f0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)53248u)));
    // 0x1293f4: 0x0  nop
    ctx->pc = 0x1293f4u;
    // NOP
label_1293f8:
    // 0x1293f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1293f8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1293fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1293fcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x129400: 0x0  nop
    ctx->pc = 0x129400u;
    // NOP
    // 0x129404: 0x0  nop
    ctx->pc = 0x129404u;
    // NOP
    // 0x129408: 0x0  nop
    ctx->pc = 0x129408u;
    // NOP
    // 0x12940c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12940Cu;
    {
        const bool branch_taken_0x12940c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12940c) {
            ctx->pc = 0x1293F8u;
            goto label_1293f8;
        }
    }
    ctx->pc = 0x129414u;
    // 0x129414: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129418: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x129418u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)53280u)));
    // 0x12941c: 0x0  nop
    ctx->pc = 0x12941cu;
    // NOP
label_129420:
    // 0x129420: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129420u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x129424: 0x0  nop
    ctx->pc = 0x129424u;
    // NOP
    // 0x129428: 0x0  nop
    ctx->pc = 0x129428u;
    // NOP
    // 0x12942c: 0x0  nop
    ctx->pc = 0x12942cu;
    // NOP
    // 0x129430: 0x0  nop
    ctx->pc = 0x129430u;
    // NOP
    // 0x129434: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129434u;
    {
        const bool branch_taken_0x129434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129434) {
            ctx->pc = 0x129420u;
            goto label_129420;
        }
    }
    ctx->pc = 0x12943Cu;
    // 0x12943c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12943cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129440: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x129440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x129444: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x129444u;
    {
        const bool branch_taken_0x129444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129444u;
            // 0x129448: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129444) {
            ctx->pc = 0x129320u;
            goto label_129320;
        }
    }
    ctx->pc = 0x12944Cu;
    // 0x12944c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12944Cu;
    {
        const bool branch_taken_0x12944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12944Cu;
            // 0x129450: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12944c) {
            ctx->pc = 0x12945Cu;
            goto label_12945c;
        }
    }
    ctx->pc = 0x129454u;
label_129454:
    // 0x129454: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x129454u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x129458: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x129458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12945c:
    // 0x12945c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12945cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129460: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x129460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x129464: 0x8ce200e4  lw          $v0, 0xE4($a3)
    ctx->pc = 0x129464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 228)));
    // 0x129468: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x129468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12946c: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x12946cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x129470: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x129470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129474: 0xe00013  mtlo        $a3
    ctx->pc = 0x129474u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x129478: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x129478u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x12947c: 0x3812  mflo        $a3
    ctx->pc = 0x12947cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x129480: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x129480u;
    {
        const bool branch_taken_0x129480 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x129484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129480u;
            // 0x129484: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129480) {
            ctx->pc = 0x129310u;
            goto label_129310;
        }
    }
    ctx->pc = 0x129488u;
label_129488:
    // 0x129488: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x129488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12948c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x12948cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x129490: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x129490u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x129494: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x129494u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x129498: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x129498u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12949c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x12949cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1294a0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1294a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1294a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1294a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1294a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1294a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1294ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1294acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1294b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1294B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1294B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1294B0u;
            // 0x1294b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12929Cu: goto label_12929c;
            case 0x1292A8u: goto label_1292a8;
            case 0x1292C4u: goto label_1292c4;
            case 0x1292C8u: goto label_1292c8;
            case 0x1292D4u: goto label_1292d4;
            case 0x1292FCu: goto label_1292fc;
            case 0x129310u: goto label_129310;
            case 0x129320u: goto label_129320;
            case 0x129370u: goto label_129370;
            case 0x129380u: goto label_129380;
            case 0x1293ECu: goto label_1293ec;
            case 0x1293F8u: goto label_1293f8;
            case 0x129420u: goto label_129420;
            case 0x129454u: goto label_129454;
            case 0x12945Cu: goto label_12945c;
            case 0x129488u: goto label_129488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1294B8u;
}
