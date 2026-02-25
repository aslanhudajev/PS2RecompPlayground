#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _getAllRefs
// Address: 0x125000 - 0x125704
void _getAllRefs_0x125000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_getAllRefs_0x125000");
#endif

    ctx->pc = 0x125000u;

    // 0x125000: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x125000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x125004: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x125004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x125008: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x125008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x12500c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x12500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x125010: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x125010u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125014: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x125014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x125018: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x125018u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12501c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x12501cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x125020: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x125020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125024: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x125024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x125028: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x125028u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12502c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x12502cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x125030: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x125030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125034: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x125034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x125038: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x125038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12503c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x12503cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x125040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125044: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x125044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x125048: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x125048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12504c: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x12504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x125050: 0x8e220810  lw          $v0, 0x810($s1)
    ctx->pc = 0x125050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2064)));
    // 0x125054: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x125054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x125058: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x125058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12505c: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x12505cu;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)8u)));
    // 0x125060: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x125060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x125064: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x125064u;
    {
        const bool branch_taken_0x125064 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x125068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125064u;
            // 0x125068: 0xac4006bc  sw          $zero, 0x6BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125064) {
            ctx->pc = 0x12507Cu;
            goto label_12507c;
        }
    }
    ctx->pc = 0x12506Cu;
    // 0x12506c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x12506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x125070: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x125070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125074: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x125074u;
    {
        const bool branch_taken_0x125074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x125078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125074u;
            // 0x125078: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125074) {
            ctx->pc = 0x1254E8u;
            goto label_1254e8;
        }
    }
    ctx->pc = 0x12507Cu;
label_12507c:
    // 0x12507c: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x12507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x125080: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125084: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x125084u;
    {
        const bool branch_taken_0x125084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x125088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125084u;
            // 0x125088: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125084) {
            ctx->pc = 0x125294u;
            goto label_125294;
        }
    }
    ctx->pc = 0x12508Cu;
    // 0x12508c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12508cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125090: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125090u;
    {
        const bool branch_taken_0x125090 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x125090) {
            ctx->pc = 0x125094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125090u;
            // 0x125094: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1250A4u;
            goto label_1250a4;
        }
    }
    ctx->pc = 0x125098u;
    // 0x125098: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x125098u;
    {
        const bool branch_taken_0x125098 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x125098) {
            ctx->pc = 0x1250D8u;
            goto label_1250d8;
        }
    }
    ctx->pc = 0x1250A0u;
    // 0x1250a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1250a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1250a4:
    // 0x1250a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1250a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250a8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1250a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1250ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1250acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250b0: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1250b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1250b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1250b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1250b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1250bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1250bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250c0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1250c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1250c4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1250c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1250c8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1250c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1250cc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1250ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250d0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1250D0u;
    {
        const bool branch_taken_0x1250d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1250D0u;
            // 0x1250d4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250d0) {
            ctx->pc = 0x1254C0u;
            goto label_1254c0;
        }
    }
    ctx->pc = 0x1250D8u;
label_1250d8:
    // 0x1250d8: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x1250D8u;
    {
        const bool branch_taken_0x1250d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x1250DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1250D8u;
            // 0x1250dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250d8) {
            ctx->pc = 0x125164u;
            goto label_125164;
        }
    }
    ctx->pc = 0x1250E0u;
    // 0x1250e0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1250e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1250e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1250e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1250e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1250e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250ec: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1250ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1250f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1250f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1250f4: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x1250f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1250f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1250f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1250fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x125100: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x125100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125104: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x125104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x125108: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x125108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12510c: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x12510cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x125110: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x125110u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125114: 0xc0495c2  jal         func_125708
    ctx->pc = 0x125114u;
    SET_GPR_U32(ctx, 31, 0x12511Cu);
    ctx->pc = 0x125118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125114u;
            // 0x125118: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12511Cu; }
        if (ctx->pc != 0x12511Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12511Cu; }
        if (ctx->pc != 0x12511Cu) { return; }
    }
    ctx->pc = 0x12511Cu;
    // 0x12511c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x12511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x125120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125124: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x125124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x125128: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x125128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12512c: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x125130: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x125130u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x125134: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x125134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x125138: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12513c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x12513cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x125140: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x125140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125144: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x125144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x125148: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x125148u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12514c: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x12514cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x125150: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x125150u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125154: 0xc0495c2  jal         func_125708
    ctx->pc = 0x125154u;
    SET_GPR_U32(ctx, 31, 0x12515Cu);
    ctx->pc = 0x125158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125154u;
            // 0x125158: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12515Cu; }
        if (ctx->pc != 0x12515Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12515Cu; }
        if (ctx->pc != 0x12515Cu) { return; }
    }
    ctx->pc = 0x12515Cu;
    // 0x12515c: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x12515Cu;
    {
        const bool branch_taken_0x12515c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12515Cu;
            // 0x125160: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12515c) {
            ctx->pc = 0x1254E4u;
            goto label_1254e4;
        }
    }
    ctx->pc = 0x125164u;
label_125164:
    // 0x125164: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x125164u;
    {
        const bool branch_taken_0x125164 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x125168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125164u;
            // 0x125168: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125164) {
            ctx->pc = 0x12527Cu;
            goto label_12527c;
        }
    }
    ctx->pc = 0x12516Cu;
    // 0x12516c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x12516cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x125170: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x125170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125174: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x125174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x125178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12517c: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x12517cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x125180: 0xc049b78  jal         func_126DE0
    ctx->pc = 0x125180u;
    SET_GPR_U32(ctx, 31, 0x125188u);
    ctx->pc = 0x125184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125180u;
            // 0x125184: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126DE0u;
    if (runtime->hasFunction(0x126DE0u)) {
        auto targetFn = runtime->lookupFunction(0x126DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125188u; }
        if (ctx->pc != 0x125188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dualPrimeVector_0x126de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125188u; }
        if (ctx->pc != 0x125188u) { return; }
    }
    ctx->pc = 0x125188u;
    // 0x125188: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12518c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125190: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x125190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x125194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125198: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x125198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x12519c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x12519cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1251a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1251a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1251a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1251a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251a8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1251a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1251ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1251acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251b0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1251b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1251b4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1251b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1251b8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1251b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1251bc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1251bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251c0: 0xc0495c2  jal         func_125708
    ctx->pc = 0x1251C0u;
    SET_GPR_U32(ctx, 31, 0x1251C8u);
    ctx->pc = 0x1251C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1251C0u;
            // 0x1251c4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1251C8u; }
        if (ctx->pc != 0x1251C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1251C8u; }
        if (ctx->pc != 0x1251C8u) { return; }
    }
    ctx->pc = 0x1251C8u;
    // 0x1251c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1251c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1251cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1251ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251d0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1251d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1251d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1251d8: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1251d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1251dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1251dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1251e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1251e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1251e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251e8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1251e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1251ec: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1251ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1251f0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1251f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1251f4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1251f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251f8: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x1251f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x1251fc: 0xc0495c2  jal         func_125708
    ctx->pc = 0x1251FCu;
    SET_GPR_U32(ctx, 31, 0x125204u);
    ctx->pc = 0x125200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1251FCu;
            // 0x125200: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125204u; }
        if (ctx->pc != 0x125204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125204u; }
        if (ctx->pc != 0x125204u) { return; }
    }
    ctx->pc = 0x125204u;
    // 0x125204: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x125204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x125208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12520c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x125210: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x125210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125214: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x125214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x125218: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x125218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x12521c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x12521cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x125220: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x125220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125224: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x125224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x125228: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12522c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x12522cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x125230: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x125230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125234: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x125234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x125238: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x125238u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12523c: 0xc0495c2  jal         func_125708
    ctx->pc = 0x12523Cu;
    SET_GPR_U32(ctx, 31, 0x125244u);
    ctx->pc = 0x125240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12523Cu;
            // 0x125240: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125244u; }
        if (ctx->pc != 0x125244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125244u; }
        if (ctx->pc != 0x125244u) { return; }
    }
    ctx->pc = 0x125244u;
    // 0x125244: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12524c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x12524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x125250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125254: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x125254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x125258: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x125258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12525c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12525cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x125260: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125264: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x125264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x125268: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x125268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12526c: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x12526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x125270: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x125270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125274: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x125274u;
    {
        const bool branch_taken_0x125274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125274u;
            // 0x125278: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125274) {
            ctx->pc = 0x1254C0u;
            goto label_1254c0;
        }
    }
    ctx->pc = 0x12527Cu;
label_12527c:
    // 0x12527c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125280: 0x24a5f130  addiu       $a1, $a1, -0xED0
    ctx->pc = 0x125280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963504));
    // 0x125284: 0xc04b010  jal         func_12C040
    ctx->pc = 0x125284u;
    SET_GPR_U32(ctx, 31, 0x12528Cu);
    ctx->pc = 0x125288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125284u;
            // 0x125288: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C040u;
    if (runtime->hasFunction(0x12C040u)) {
        auto targetFn = runtime->lookupFunction(0x12C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12528Cu; }
        if (ctx->pc != 0x12528Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x12c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12528Cu; }
        if (ctx->pc != 0x12528Cu) { return; }
    }
    ctx->pc = 0x12528Cu;
    // 0x12528c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x12528Cu;
    {
        const bool branch_taken_0x12528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12528Cu;
            // 0x125290: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12528c) {
            ctx->pc = 0x1254E4u;
            goto label_1254e4;
        }
    }
    ctx->pc = 0x125294u;
label_125294:
    // 0x125294: 0x8e2701c8  lw          $a3, 0x1C8($s1)
    ctx->pc = 0x125294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x125298: 0x8e2501d8  lw          $a1, 0x1D8($s1)
    ctx->pc = 0x125298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x12529c: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x12529cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1252a0: 0x8e2401cc  lw          $a0, 0x1CC($s1)
    ctx->pc = 0x1252a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x1252a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1252a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1252a8: 0x8e2301dc  lw          $v1, 0x1DC($s1)
    ctx->pc = 0x1252a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x1252ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1252acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252b0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1252b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1252b4: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1252b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1252b8: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x1252b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x1252bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1252bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1252c0: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1252C0u;
    {
        const bool branch_taken_0x1252c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1252C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1252C0u;
            // 0x1252c4: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252c0) {
            ctx->pc = 0x1252E0u;
            goto label_1252e0;
        }
    }
    ctx->pc = 0x1252C8u;
    // 0x1252c8: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1252c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1252cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1252CCu;
    {
        const bool branch_taken_0x1252cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1252D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1252CCu;
            // 0x1252d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252cc) {
            ctx->pc = 0x1252E4u;
            goto label_1252e4;
        }
    }
    ctx->pc = 0x1252D4u;
    // 0x1252d4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1252d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1252d8: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x1252d8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 2)));
    // 0x1252dc: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x1252dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1252e0:
    // 0x1252e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1252e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1252e4:
    // 0x1252e4: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1252E4u;
    {
        const bool branch_taken_0x1252e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1252e4) {
            ctx->pc = 0x1252E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1252E4u;
            // 0x1252e8: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1252F8u;
            goto label_1252f8;
        }
    }
    ctx->pc = 0x1252ECu;
    // 0x1252ec: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1252ECu;
    {
        const bool branch_taken_0x1252ec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1252F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1252ECu;
            // 0x1252f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252ec) {
            ctx->pc = 0x125334u;
            goto label_125334;
        }
    }
    ctx->pc = 0x1252F4u;
    // 0x1252f4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1252f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1252f8:
    // 0x1252f8: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1252f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1252fc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1252fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x125300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125304: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x125304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x125308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x125308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12530c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x12530cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x125310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x125310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x125314: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x125314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x125318: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x125318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x12531c: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x12531cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x125320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125324: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x125324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x125328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12532c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x12532Cu;
    {
        const bool branch_taken_0x12532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12532Cu;
            // 0x125330: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12532c) {
            ctx->pc = 0x1254B4u;
            goto label_1254b4;
        }
    }
    ctx->pc = 0x125334u;
label_125334:
    // 0x125334: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x125334u;
    {
        const bool branch_taken_0x125334 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x125338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125334u;
            // 0x125338: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125334) {
            ctx->pc = 0x125404u;
            goto label_125404;
        }
    }
    ctx->pc = 0x12533Cu;
    // 0x12533c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x12533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x125340: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x125340u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x125344: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x125344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x125348: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x125348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12534c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x125350: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x125350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x125354: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x125354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x125358: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x125358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x12535c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x12535cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x125360: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x125360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x125364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12536c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12536cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x125370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125374: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x125374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x125378: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12537c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x12537cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x125380: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x125380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125384: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x125384u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125388: 0xc0495c2  jal         func_125708
    ctx->pc = 0x125388u;
    SET_GPR_U32(ctx, 31, 0x125390u);
    ctx->pc = 0x12538Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125388u;
            // 0x12538c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125390u; }
        if (ctx->pc != 0x125390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125390u; }
        if (ctx->pc != 0x125390u) { return; }
    }
    ctx->pc = 0x125390u;
    // 0x125390: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x125390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x125394: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x125394u;
    {
        const bool branch_taken_0x125394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x125398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125394u;
            // 0x125398: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125394) {
            ctx->pc = 0x1253B8u;
            goto label_1253b8;
        }
    }
    ctx->pc = 0x12539Cu;
    // 0x12539c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x12539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1253a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1253A0u;
    {
        const bool branch_taken_0x1253a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253A0u;
            // 0x1253a4: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253a0) {
            ctx->pc = 0x1253BCu;
            goto label_1253bc;
        }
    }
    ctx->pc = 0x1253A8u;
    // 0x1253a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1253a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1253ac: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x1253acu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 3)));
    // 0x1253b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1253B0u;
    {
        const bool branch_taken_0x1253b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253B0u;
            // 0x1253b4: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253b0) {
            ctx->pc = 0x1253BCu;
            goto label_1253bc;
        }
    }
    ctx->pc = 0x1253B8u;
label_1253b8:
    // 0x1253b8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x1253b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1253bc:
    // 0x1253bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1253bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1253c0: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x1253c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1253c4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1253c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1253c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1253c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1253ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1253d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1253d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1253d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1253d8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1253d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1253dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1253dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1253e0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1253e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1253e4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1253e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1253e8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1253e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1253ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1253ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253f0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1253f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1253f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1253f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1253f8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1253f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1253fc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1253FCu;
    {
        const bool branch_taken_0x1253fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253FCu;
            // 0x125400: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253fc) {
            ctx->pc = 0x1254C0u;
            goto label_1254c0;
        }
    }
    ctx->pc = 0x125404u;
label_125404:
    // 0x125404: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x125404u;
    {
        const bool branch_taken_0x125404 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x125408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125404u;
            // 0x125408: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125404) {
            ctx->pc = 0x1254D0u;
            goto label_1254d0;
        }
    }
    ctx->pc = 0x12540Cu;
    // 0x12540c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x12540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x125410: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x125410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125414: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x125414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x125418: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x125418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12541c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x12541cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x125420: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x125420u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x125424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125428: 0xc049b78  jal         func_126DE0
    ctx->pc = 0x125428u;
    SET_GPR_U32(ctx, 31, 0x125430u);
    ctx->pc = 0x12542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125428u;
            // 0x12542c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126DE0u;
    if (runtime->hasFunction(0x126DE0u)) {
        auto targetFn = runtime->lookupFunction(0x126DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125430u; }
        if (ctx->pc != 0x125430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dualPrimeVector_0x126de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125430u; }
        if (ctx->pc != 0x125430u) { return; }
    }
    ctx->pc = 0x125430u;
    // 0x125430: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x125430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x125434: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x125434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x125438: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x125438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12543c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x125440: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x125440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x125444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125448: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x125448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12544c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12544cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125450: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x125450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x125454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125458: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x125458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x12545c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12545cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125460: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x125460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x125464: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x125464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125468: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x125468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x12546c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x12546cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125470: 0xc0495c2  jal         func_125708
    ctx->pc = 0x125470u;
    SET_GPR_U32(ctx, 31, 0x125478u);
    ctx->pc = 0x125474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125470u;
            // 0x125474: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125478u; }
        if (ctx->pc != 0x125478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125478u; }
        if (ctx->pc != 0x125478u) { return; }
    }
    ctx->pc = 0x125478u;
    // 0x125478: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x125478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x12547c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12547cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125480: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x125480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x125484: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x125484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x125488: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x125488u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x12548c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12548cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x125490: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x125490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x125494: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x125494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x125498: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x125498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12549c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1254a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1254a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254a4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1254a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1254a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1254a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1254acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1254b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1254b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1254b4:
    // 0x1254b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1254b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254b8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1254b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1254bc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1254bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1254c0:
    // 0x1254c0: 0xc0495c2  jal         func_125708
    ctx->pc = 0x1254C0u;
    SET_GPR_U32(ctx, 31, 0x1254C8u);
    ctx->pc = 0x1254C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1254C0u;
            // 0x1254c4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1254C8u; }
        if (ctx->pc != 0x1254C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1254C8u; }
        if (ctx->pc != 0x1254C8u) { return; }
    }
    ctx->pc = 0x1254C8u;
    // 0x1254c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1254C8u;
    {
        const bool branch_taken_0x1254c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1254CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1254C8u;
            // 0x1254cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254c8) {
            ctx->pc = 0x1254E4u;
            goto label_1254e4;
        }
    }
    ctx->pc = 0x1254D0u;
label_1254d0:
    // 0x1254d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1254d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254d4: 0x24a5f150  addiu       $a1, $a1, -0xEB0
    ctx->pc = 0x1254d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    // 0x1254d8: 0xc04b010  jal         func_12C040
    ctx->pc = 0x1254D8u;
    SET_GPR_U32(ctx, 31, 0x1254E0u);
    ctx->pc = 0x1254DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1254D8u;
            // 0x1254dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C040u;
    if (runtime->hasFunction(0x12C040u)) {
        auto targetFn = runtime->lookupFunction(0x12C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1254E0u; }
        if (ctx->pc != 0x1254E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x12c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1254E0u; }
        if (ctx->pc != 0x1254E0u) { return; }
    }
    ctx->pc = 0x1254E0u;
    // 0x1254e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1254e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1254e4:
    // 0x1254e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1254e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1254e8:
    // 0x1254e8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1254e8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)4u)));
    // 0x1254ec: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1254ECu;
    {
        const bool branch_taken_0x1254ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1254F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1254ECu;
            // 0x1254f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254ec) {
            ctx->pc = 0x1256D4u;
            goto label_1256d4;
        }
    }
    ctx->pc = 0x1254F4u;
    // 0x1254f4: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1254f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1254f8: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1254F8u;
    {
        const bool branch_taken_0x1254f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1254FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1254F8u;
            // 0x1254fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254f8) {
            ctx->pc = 0x1255CCu;
            goto label_1255cc;
        }
    }
    ctx->pc = 0x125500u;
    // 0x125500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x125500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125504: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x125504u;
    {
        const bool branch_taken_0x125504 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x125508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125504u;
            // 0x125508: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125504) {
            ctx->pc = 0x125544u;
            goto label_125544;
        }
    }
    ctx->pc = 0x12550Cu;
    // 0x12550c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x12550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x125510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125514: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x125514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x125518: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x125518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12551c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x12551cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x125520: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x125520u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125524: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x125524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x125528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12552c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x12552cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x125530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125534: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x125534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x125538: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12553c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x12553Cu;
    {
        const bool branch_taken_0x12553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12553Cu;
            // 0x125540: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12553c) {
            ctx->pc = 0x1255BCu;
            goto label_1255bc;
        }
    }
    ctx->pc = 0x125544u;
label_125544:
    // 0x125544: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x125544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x125548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12554c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x12554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x125550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125554: 0x8e2501bc  lw          $a1, 0x1BC($s1)
    ctx->pc = 0x125554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x125558: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x125558u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x12555c: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x12555cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x125560: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125564: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x125564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x125568: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x125568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12556c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x12556cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x125570: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x125570u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125574: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x125574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x125578: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x125578u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12557c: 0xc0495c2  jal         func_125708
    ctx->pc = 0x12557Cu;
    SET_GPR_U32(ctx, 31, 0x125584u);
    ctx->pc = 0x125580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12557Cu;
            // 0x125580: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125584u; }
        if (ctx->pc != 0x125584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125584u; }
        if (ctx->pc != 0x125584u) { return; }
    }
    ctx->pc = 0x125584u;
    // 0x125584: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x125584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x125588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12558c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12558cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x125590: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x125590u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125594: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x125594u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x125598: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x125598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x12559c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x12559cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1255a0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1255a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1255a4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1255a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1255a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1255a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1255ac: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1255acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1255b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1255b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1255b4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1255b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1255b8: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x1255b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1255bc:
    // 0x1255bc: 0xc0495c2  jal         func_125708
    ctx->pc = 0x1255BCu;
    SET_GPR_U32(ctx, 31, 0x1255C4u);
    ctx->pc = 0x1255C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1255BCu;
            // 0x1255c0: 0x8c8501bc  lw          $a1, 0x1BC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1255C4u; }
        if (ctx->pc != 0x1255C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1255C4u; }
        if (ctx->pc != 0x1255C4u) { return; }
    }
    ctx->pc = 0x1255C4u;
    // 0x1255c4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1255C4u;
    {
        const bool branch_taken_0x1255c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1255C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255C4u;
            // 0x1255c8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255c4) {
            ctx->pc = 0x1256D8u;
            goto label_1256d8;
        }
    }
    ctx->pc = 0x1255CCu;
label_1255cc:
    // 0x1255cc: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1255CCu;
    {
        const bool branch_taken_0x1255cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1255D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255CCu;
            // 0x1255d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255cc) {
            ctx->pc = 0x125624u;
            goto label_125624;
        }
    }
    ctx->pc = 0x1255D4u;
    // 0x1255d4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1255d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1255d8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1255D8u;
    {
        const bool branch_taken_0x1255d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1255d8) {
            ctx->pc = 0x1255DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1255D8u;
            // 0x1255dc: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1255E4u;
            goto label_1255e4;
        }
    }
    ctx->pc = 0x1255E0u;
    // 0x1255e0: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x1255e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_1255e4:
    // 0x1255e4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1255e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1255e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1255e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1255ec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1255ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1255f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1255f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1255f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1255f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1255f8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x1255f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1255fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1255fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x125600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125604: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x125604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x125608: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12560c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12560cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x125610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125614: 0xc0495c2  jal         func_125708
    ctx->pc = 0x125614u;
    SET_GPR_U32(ctx, 31, 0x12561Cu);
    ctx->pc = 0x125618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125614u;
            // 0x125618: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12561Cu; }
        if (ctx->pc != 0x12561Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12561Cu; }
        if (ctx->pc != 0x12561Cu) { return; }
    }
    ctx->pc = 0x12561Cu;
    // 0x12561c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x12561Cu;
    {
        const bool branch_taken_0x12561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12561Cu;
            // 0x125620: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12561c) {
            ctx->pc = 0x1256D8u;
            goto label_1256d8;
        }
    }
    ctx->pc = 0x125624u;
label_125624:
    // 0x125624: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x125624u;
    {
        const bool branch_taken_0x125624 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x125628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125624u;
            // 0x125628: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125624) {
            ctx->pc = 0x1256C4u;
            goto label_1256c4;
        }
    }
    ctx->pc = 0x12562Cu;
    // 0x12562c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x12562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x125630: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x125630u;
    {
        const bool branch_taken_0x125630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125630) {
            ctx->pc = 0x125634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125630u;
            // 0x125634: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12563Cu;
            goto label_12563c;
        }
    }
    ctx->pc = 0x125638u;
    // 0x125638: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x125638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_12563c:
    // 0x12563c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x125640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125644: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x125644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x125648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12564c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12564cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x125650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x125650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125654: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x125654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x125658: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12565c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12565cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x125660: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x125660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125664: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x125664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x125668: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x125668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12566c: 0xc0495c2  jal         func_125708
    ctx->pc = 0x12566Cu;
    SET_GPR_U32(ctx, 31, 0x125674u);
    ctx->pc = 0x125670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12566Cu;
            // 0x125670: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125674u; }
        if (ctx->pc != 0x125674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125674u; }
        if (ctx->pc != 0x125674u) { return; }
    }
    ctx->pc = 0x125674u;
    // 0x125674: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x125674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x125678: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x125678u;
    {
        const bool branch_taken_0x125678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125678) {
            ctx->pc = 0x12567Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125678u;
            // 0x12567c: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125684u;
            goto label_125684;
        }
    }
    ctx->pc = 0x125680u;
    // 0x125680: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x125680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_125684:
    // 0x125684: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x125684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x125688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12568c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x125690: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x125690u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125694: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x125694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x125698: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x125698u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12569c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x12569cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1256a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1256a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1256a4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1256a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x1256a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1256a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1256ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1256acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1256b0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1256b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1256b4: 0xc0495c2  jal         func_125708
    ctx->pc = 0x1256B4u;
    SET_GPR_U32(ctx, 31, 0x1256BCu);
    ctx->pc = 0x1256B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1256B4u;
            // 0x1256b8: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125708u;
    if (runtime->hasFunction(0x125708u)) {
        auto targetFn = runtime->lookupFunction(0x125708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256BCu; }
        if (ctx->pc != 0x1256BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getRef0_0x125708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256BCu; }
        if (ctx->pc != 0x1256BCu) { return; }
    }
    ctx->pc = 0x1256BCu;
    // 0x1256bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1256BCu;
    {
        const bool branch_taken_0x1256bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256BCu;
            // 0x1256c0: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256bc) {
            ctx->pc = 0x1256D8u;
            goto label_1256d8;
        }
    }
    ctx->pc = 0x1256C4u;
label_1256c4:
    // 0x1256c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1256c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1256c8: 0x24a5f170  addiu       $a1, $a1, -0xE90
    ctx->pc = 0x1256c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1256cc: 0xc04b010  jal         func_12C040
    ctx->pc = 0x1256CCu;
    SET_GPR_U32(ctx, 31, 0x1256D4u);
    ctx->pc = 0x1256D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1256CCu;
            // 0x1256d0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C040u;
    if (runtime->hasFunction(0x12C040u)) {
        auto targetFn = runtime->lookupFunction(0x12C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256D4u; }
        if (ctx->pc != 0x1256D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x12c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256D4u; }
        if (ctx->pc != 0x1256D4u) { return; }
    }
    ctx->pc = 0x1256D4u;
label_1256d4:
    // 0x1256d4: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1256d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1256d8:
    // 0x1256d8: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1256d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1256dc: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1256dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1256e0: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1256e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1256e4: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1256e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1256e8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1256e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1256ec: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1256ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1256f0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1256f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1256f4: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1256f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1256f8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1256f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1256fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1256FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256FCu;
            // 0x125700: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12507Cu: goto label_12507c;
            case 0x1250A4u: goto label_1250a4;
            case 0x1250D8u: goto label_1250d8;
            case 0x125164u: goto label_125164;
            case 0x12527Cu: goto label_12527c;
            case 0x125294u: goto label_125294;
            case 0x1252E0u: goto label_1252e0;
            case 0x1252E4u: goto label_1252e4;
            case 0x1252F8u: goto label_1252f8;
            case 0x125334u: goto label_125334;
            case 0x1253B8u: goto label_1253b8;
            case 0x1253BCu: goto label_1253bc;
            case 0x125404u: goto label_125404;
            case 0x1254B4u: goto label_1254b4;
            case 0x1254C0u: goto label_1254c0;
            case 0x1254D0u: goto label_1254d0;
            case 0x1254E4u: goto label_1254e4;
            case 0x1254E8u: goto label_1254e8;
            case 0x125544u: goto label_125544;
            case 0x1255BCu: goto label_1255bc;
            case 0x1255CCu: goto label_1255cc;
            case 0x1255E4u: goto label_1255e4;
            case 0x125624u: goto label_125624;
            case 0x12563Cu: goto label_12563c;
            case 0x125684u: goto label_125684;
            case 0x1256C4u: goto label_1256c4;
            case 0x1256D4u: goto label_1256d4;
            case 0x1256D8u: goto label_1256d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125704u;
}
