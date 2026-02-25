#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _vfprintf_r
// Address: 0x13db00 - 0x13f018
void _vfprintf_r_0x13db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_vfprintf_r_0x13db00");
#endif

    ctx->pc = 0x13db00u;

    // 0x13db00: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x13db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x13db04: 0xffb40270  sd          $s4, 0x270($sp)
    ctx->pc = 0x13db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
    // 0x13db08: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x13db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x13db0c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x13db0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db10: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x13db10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x13db14: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13db14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db18: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x13db18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x13db1c: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x13db1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x13db20: 0xffb702a0  sd          $s7, 0x2A0($sp)
    ctx->pc = 0x13db20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 23));
    // 0x13db24: 0xffb60290  sd          $s6, 0x290($sp)
    ctx->pc = 0x13db24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 22));
    // 0x13db28: 0xffb50280  sd          $s5, 0x280($sp)
    ctx->pc = 0x13db28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 21));
    // 0x13db2c: 0xffb30260  sd          $s3, 0x260($sp)
    ctx->pc = 0x13db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 19));
    // 0x13db30: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x13db30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x13db34: 0xffb10240  sd          $s1, 0x240($sp)
    ctx->pc = 0x13db34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 17));
    // 0x13db38: 0xc04e93c  jal         func_13A4F0
    ctx->pc = 0x13DB38u;
    SET_GPR_U32(ctx, 31, 0x13DB40u);
    ctx->pc = 0x13DB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB38u;
            // 0x13db3c: 0xafa401e4  sw          $a0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A4F0u;
    if (runtime->hasFunction(0x13A4F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB40u; }
        if (ctx->pc != 0x13DB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        localeconv_0x13a4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB40u; }
        if (ctx->pc != 0x13DB40u) { return; }
    }
    ctx->pc = 0x13DB40u;
    // 0x13db40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13db44: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x13db44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x13db48: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x13db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13db4c: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x13db4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13db50: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x13db50u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8u)));
    // 0x13db54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DB54u;
    {
        const bool branch_taken_0x13db54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB54u;
            // 0x13db58: 0xafa001d8  sw          $zero, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db54) {
            ctx->pc = 0x13DB6Cu;
            goto label_13db6c;
        }
    }
    ctx->pc = 0x13DB5Cu;
    // 0x13db5c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13db60: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x13db60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13db64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13DB64u;
    {
        const bool branch_taken_0x13db64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB64u;
            // 0x13db68: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)26u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db64) {
            ctx->pc = 0x13DB88u;
            goto label_13db88;
        }
    }
    ctx->pc = 0x13DB6Cu;
label_13db6c:
    // 0x13db6c: 0xc04fcc2  jal         func_13F308
    ctx->pc = 0x13DB6Cu;
    SET_GPR_U32(ctx, 31, 0x13DB74u);
    ctx->pc = 0x13DB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB6Cu;
            // 0x13db70: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F308u;
    if (runtime->hasFunction(0x13F308u)) {
        auto targetFn = runtime->lookupFunction(0x13F308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB74u; }
        if (ctx->pc != 0x13DB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___swsetup_0x13f308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DB74u; }
        if (ctx->pc != 0x13DB74u) { return; }
    }
    ctx->pc = 0x13DB74u;
    // 0x13db74: 0x1440051c  bnez        $v0, . + 4 + (0x51C << 2)
    ctx->pc = 0x13DB74u;
    {
        const bool branch_taken_0x13db74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB74u;
            // 0x13db78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db74) {
            ctx->pc = 0x13EFE8u;
            goto label_13efe8;
        }
    }
    ctx->pc = 0x13DB7Cu;
    // 0x13db7c: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x13db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13db80: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x13db80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x13db84: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x13db84u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)26u)));
label_13db88:
    // 0x13db88: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x13db88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13db8c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13DB8Cu;
    {
        const bool branch_taken_0x13db8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB8Cu;
            // 0x13db90: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db8c) {
            ctx->pc = 0x13DBB8u;
            goto label_13dbb8;
        }
    }
    ctx->pc = 0x13DB94u;
    // 0x13db94: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x13db94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13db98: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x13db98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x13db9c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DB9Cu;
    {
        const bool branch_taken_0x13db9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x13DBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DB9Cu;
            // 0x13dba0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db9c) {
            ctx->pc = 0x13DBB8u;
            goto label_13dbb8;
        }
    }
    ctx->pc = 0x13DBA4u;
    // 0x13dba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13dba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dba8: 0xc04f674  jal         func_13D9D0
    ctx->pc = 0x13DBA8u;
    SET_GPR_U32(ctx, 31, 0x13DBB0u);
    ctx->pc = 0x13DBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DBA8u;
            // 0x13dbac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBB0u; }
        if (ctx->pc != 0x13DBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sbprintf_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBB0u; }
        if (ctx->pc != 0x13DBB0u) { return; }
    }
    ctx->pc = 0x13DBB0u;
    // 0x13dbb0: 0x1000050e  b           . + 4 + (0x50E << 2)
    ctx->pc = 0x13DBB0u;
    {
        const bool branch_taken_0x13dbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DBB0u;
            // 0x13dbb4: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbb0) {
            ctx->pc = 0x13EFECu;
            goto label_13efec;
        }
    }
    ctx->pc = 0x13DBB8u;
label_13dbb8:
    // 0x13dbb8: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x13dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x13dbbc: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x13dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x13dbc0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x13dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x13dbc4: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x13dbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x13dbc8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x13dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x13dbcc: 0xafb001ec  sw          $s0, 0x1EC($sp)
    ctx->pc = 0x13dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 16));
    // 0x13dbd0: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x13dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x13dbd4: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x13dbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x13dbd8: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x13dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
    // 0x13dbdc: 0x0  nop
    ctx->pc = 0x13dbdcu;
    // NOP
label_13dbe0:
    // 0x13dbe0: 0x8fb301ec  lw          $s3, 0x1EC($sp)
    ctx->pc = 0x13dbe0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13dbe4: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x13dbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_13dbe8:
    // 0x13dbe8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x13dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x13dbec: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x13dbecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x13dbf0: 0x8ca41d94  lw          $a0, 0x1D94($a1)
    ctx->pc = 0x13dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7572)));
    // 0x13dbf4: 0x8cc71d98  lw          $a3, 0x1D98($a2)
    ctx->pc = 0x13dbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7576)));
    // 0x13dbf8: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x13dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x13dbfc: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x13dbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13dc00: 0xc04ecb4  jal         func_13B2D0
    ctx->pc = 0x13DC00u;
    SET_GPR_U32(ctx, 31, 0x13DC08u);
    ctx->pc = 0x13DC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC00u;
            // 0x13dc04: 0x8fa8021c  lw          $t0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2D0u;
    if (runtime->hasFunction(0x13B2D0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC08u; }
        if (ctx->pc != 0x13DC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _mbtowc_r_0x13b2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC08u; }
        if (ctx->pc != 0x13DC08u) { return; }
    }
    ctx->pc = 0x13DC08u;
    // 0x13dc08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13dc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc0c: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13DC0Cu;
    {
        const bool branch_taken_0x13dc0c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13DC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC0Cu;
            // 0x13dc10: 0x8fa301ec  lw          $v1, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc0c) {
            ctx->pc = 0x13DC2Cu;
            goto label_13dc2c;
        }
    }
    ctx->pc = 0x13DC14u;
    // 0x13dc14: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x13dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x13dc18: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13dc1c: 0x1452fff2  bne         $v0, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x13DC1Cu;
    {
        const bool branch_taken_0x13dc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x13DC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC1Cu;
            // 0x13dc20: 0xafa301ec  sw          $v1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc1c) {
            ctx->pc = 0x13DBE8u;
            goto label_13dbe8;
        }
    }
    ctx->pc = 0x13DC24u;
    // 0x13dc24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13dc28: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x13dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
label_13dc2c:
    // 0x13dc2c: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x13dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13dc30: 0x939023  subu        $s2, $a0, $s3
    ctx->pc = 0x13dc30u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x13dc34: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x13DC34u;
    {
        const bool branch_taken_0x13dc34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc34) {
            ctx->pc = 0x13DC88u;
            goto label_13dc88;
        }
    }
    ctx->pc = 0x13DC3Cu;
    // 0x13dc3c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x13dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x13dc40: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x13dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x13dc44: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13dc44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13dc48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13dc4c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x13dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13dc50: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13dc54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13dc58: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x13dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x13dc5c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x13dc5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13dc60: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DC60u;
    {
        const bool branch_taken_0x13dc60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC60u;
            // 0x13dc64: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc60) {
            ctx->pc = 0x13DC7Cu;
            goto label_13dc7c;
        }
    }
    ctx->pc = 0x13DC68u;
    // 0x13dc68: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13dc6c: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13DC6Cu;
    SET_GPR_U32(ctx, 31, 0x13DC74u);
    ctx->pc = 0x13DC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC6Cu;
            // 0x13dc70: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC74u; }
        if (ctx->pc != 0x13DC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC74u; }
        if (ctx->pc != 0x13DC74u) { return; }
    }
    ctx->pc = 0x13DC74u;
    // 0x13dc74: 0x144004d6  bnez        $v0, . + 4 + (0x4D6 << 2)
    ctx->pc = 0x13DC74u;
    {
        const bool branch_taken_0x13dc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC74u;
            // 0x13dc78: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc74) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13DC7Cu;
label_13dc7c:
    // 0x13dc7c: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x13dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x13dc80: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x13dc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x13dc84: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x13dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
label_13dc88:
    // 0x13dc88: 0x1a0004c9  blez        $s0, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x13DC88u;
    {
        const bool branch_taken_0x13dc88 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13DC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC88u;
            // 0x13dc8c: 0x8fa601ec  lw          $a2, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc88) {
            ctx->pc = 0x13EFB0u;
            goto label_13efb0;
        }
    }
    ctx->pc = 0x13DC90u;
    // 0x13dc90: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x13dc90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc94: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x13dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x13dc98: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x13dc98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13dc9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13dc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13dca0: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x13dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x13dca4: 0xafa601ec  sw          $a2, 0x1EC($sp)
    ctx->pc = 0x13dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
    // 0x13dca8: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x13dca8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x13dcac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13DCACu;
    {
        const bool branch_taken_0x13dcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCACu;
            // 0x13dcb0: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcac) {
            ctx->pc = 0x13DCC4u;
            goto label_13dcc4;
        }
    }
    ctx->pc = 0x13DCB4u;
label_13dcb4:
    // 0x13dcb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13DCB4u;
    {
        const bool branch_taken_0x13dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCB4u;
            // 0x13dcb8: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcb4) {
            ctx->pc = 0x13DCC4u;
            goto label_13dcc4;
        }
    }
    ctx->pc = 0x13DCBCu;
label_13dcbc:
    // 0x13dcbc: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x13dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_13dcc0:
    // 0x13dcc0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x13dcc0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_13dcc4:
    // 0x13dcc4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x13dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x13dcc8: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x13dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13dccc: 0x2be03  sra         $s7, $v0, 24
    ctx->pc = 0x13dcccu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
    // 0x13dcd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13dcd4: 0xafa401ec  sw          $a0, 0x1EC($sp)
    ctx->pc = 0x13dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
label_13dcd8:
    // 0x13dcd8: 0x26e3ffe0  addiu       $v1, $s7, -0x20
    ctx->pc = 0x13dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
    // 0x13dcdc: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x13dcdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x13dce0: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x13DCE0u;
    {
        const bool branch_taken_0x13dce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCE0u;
            // 0x13dce4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dce0) {
            ctx->pc = 0x13E3BCu;
            goto label_13e3bc;
        }
    }
    ctx->pc = 0x13DCE8u;
    // 0x13dce8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13dcec: 0x2442fd50  addiu       $v0, $v0, -0x2B0
    ctx->pc = 0x13dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966608));
    // 0x13dcf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13dcf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dcf8: 0x800008  jr          $a0
    ctx->pc = 0x13DCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DD00u: goto label_13dd00;
            case 0x13DD18u: goto label_13dd18;
            case 0x13DD28u: goto label_13dd28;
            case 0x13DD40u: goto label_13dd40;
            case 0x13DD4Cu: goto label_13dd4c;
            case 0x13DD60u: goto label_13dd60;
            case 0x13DDECu: goto label_13ddec;
            case 0x13DDF8u: goto label_13ddf8;
            case 0x13DE30u: goto label_13de30;
            case 0x13DE40u: goto label_13de40;
            case 0x13DE50u: goto label_13de50;
            case 0x13DE84u: goto label_13de84;
            case 0x13DE94u: goto label_13de94;
            case 0x13DEB4u: goto label_13deb4;
            case 0x13DEB8u: goto label_13deb8;
            case 0x13DEFCu: goto label_13defc;
            case 0x13E0C4u: goto label_13e0c4;
            case 0x13E110u: goto label_13e110;
            case 0x13E114u: goto label_13e114;
            case 0x13E148u: goto label_13e148;
            case 0x13E16Cu: goto label_13e16c;
            case 0x13E1C0u: goto label_13e1c0;
            case 0x13E1C4u: goto label_13e1c4;
            case 0x13E1F8u: goto label_13e1f8;
            case 0x13E204u: goto label_13e204;
            case 0x13E3BCu: goto label_13e3bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13DD00u;
label_13dd00:
    // 0x13dd00: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x13dd00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x13dd04: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13DD04u;
    {
        const bool branch_taken_0x13dd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD04u;
            // 0x13dd08: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd04) {
            ctx->pc = 0x13DCB4u;
            goto label_13dcb4;
        }
    }
    ctx->pc = 0x13DD0Cu;
    // 0x13dd0c: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x13dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13dd10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13DD10u;
    {
        const bool branch_taken_0x13dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD10u;
            // 0x13dd14: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd10) {
            ctx->pc = 0x13DD54u;
            goto label_13dd54;
        }
    }
    ctx->pc = 0x13DD18u;
label_13dd18:
    // 0x13dd18: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x13dd18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13dd1c: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x13dd1cu;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x13dd20: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x13DD20u;
    {
        const bool branch_taken_0x13dd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD20u;
            // 0x13dd24: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd20) {
            ctx->pc = 0x13DCC4u;
            goto label_13dcc4;
        }
    }
    ctx->pc = 0x13DD28u;
label_13dd28:
    // 0x13dd28: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13dd28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13dd2c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x13dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x13dd30: 0x441ffe2  bgez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x13DD30u;
    {
        const bool branch_taken_0x13dd30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13DD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD30u;
            // 0x13dd34: 0xafa201f4  sw          $v0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd30) {
            ctx->pc = 0x13DCBCu;
            goto label_13dcbc;
        }
    }
    ctx->pc = 0x13DD38u;
    // 0x13dd38: 0x21023  negu        $v0, $v0
    ctx->pc = 0x13dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x13dd3c: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x13dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_13dd40:
    // 0x13dd40: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x13dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13dd44: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x13DD44u;
    {
        const bool branch_taken_0x13dd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD44u;
            // 0x13dd48: 0x37de0004  ori         $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd44) {
            ctx->pc = 0x13DCC0u;
            goto label_13dcc0;
        }
    }
    ctx->pc = 0x13DD4Cu;
label_13dd4c:
    // 0x13dd4c: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x13dd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13dd50: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x13dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_13dd54:
    // 0x13dd54: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x13dd54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13dd58: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x13DD58u;
    {
        const bool branch_taken_0x13dd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD58u;
            // 0x13dd5c: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd58) {
            ctx->pc = 0x13DCC4u;
            goto label_13dcc4;
        }
    }
    ctx->pc = 0x13DD60u;
label_13dd60:
    // 0x13dd60: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x13dd60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13dd64: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x13dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x13dd68: 0x80d70000  lb          $s7, 0x0($a2)
    ctx->pc = 0x13dd68u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13dd6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13dd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13dd70: 0x16e20009  bne         $s7, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13DD70u;
    {
        const bool branch_taken_0x13dd70 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD70u;
            // 0x13dd74: 0xafa601ec  sw          $a2, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd70) {
            ctx->pc = 0x13DD98u;
            goto label_13dd98;
        }
    }
    ctx->pc = 0x13DD78u;
    // 0x13dd78: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13dd78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13dd7c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x13dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13dd80: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x13dd80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x13dd84: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x13dd84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13dd88: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x13dd88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13dd8c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x13dd8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13dd90: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x13DD90u;
    {
        const bool branch_taken_0x13dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DD90u;
            // 0x13dd94: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd90) {
            ctx->pc = 0x13DCC4u;
            goto label_13dcc4;
        }
    }
    ctx->pc = 0x13DD98u;
label_13dd98:
    // 0x13dd98: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x13dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x13dd9c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x13dd9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x13dda0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13DDA0u;
    {
        const bool branch_taken_0x13dda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DDA0u;
            // 0x13dda4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dda0) {
            ctx->pc = 0x13DDD8u;
            goto label_13ddd8;
        }
    }
    ctx->pc = 0x13DDA8u;
    // 0x13dda8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x13dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13ddac: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x13ddacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_13ddb0:
    // 0x13ddb0: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x13ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x13ddb4: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x13ddb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x13ddb8: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x13ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13ddbc: 0x80570000  lb          $s7, 0x0($v0)
    ctx->pc = 0x13ddbcu;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ddc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ddc4: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x13ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x13ddc8: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x13ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x13ddcc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x13ddccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x13ddd0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13DDD0u;
    {
        const bool branch_taken_0x13ddd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DDD0u;
            // 0x13ddd4: 0x2031018  mult        $v0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddd0) {
            ctx->pc = 0x13DDB0u;
            goto label_13ddb0;
        }
    }
    ctx->pc = 0x13DDD8u;
label_13ddd8:
    // 0x13ddd8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x13ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13dddc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x13dddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13dde0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x13dde0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13dde4: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x13DDE4u;
    {
        const bool branch_taken_0x13dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DDE4u;
            // 0x13dde8: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dde4) {
            ctx->pc = 0x13DCD8u;
            goto label_13dcd8;
        }
    }
    ctx->pc = 0x13DDECu;
label_13ddec:
    // 0x13ddec: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x13ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13ddf0: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x13DDF0u;
    {
        const bool branch_taken_0x13ddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DDF0u;
            // 0x13ddf4: 0x37de0080  ori         $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)128u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddf0) {
            ctx->pc = 0x13DCC0u;
            goto label_13dcc0;
        }
    }
    ctx->pc = 0x13DDF8u;
label_13ddf8:
    // 0x13ddf8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13ddf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ddfc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x13ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_13de00:
    // 0x13de00: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x13de00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13de04: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x13de04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13de08: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x13de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x13de0c: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x13de0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x13de10: 0x80970000  lb          $s7, 0x0($a0)
    ctx->pc = 0x13de10u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13de14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13de18: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x13de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x13de1c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x13de1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x13de20: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13DE20u;
    {
        const bool branch_taken_0x13de20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE20u;
            // 0x13de24: 0xafa401ec  sw          $a0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de20) {
            ctx->pc = 0x13DE00u;
            goto label_13de00;
        }
    }
    ctx->pc = 0x13DE28u;
    // 0x13de28: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x13DE28u;
    {
        const bool branch_taken_0x13de28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE28u;
            // 0x13de2c: 0xafb001f4  sw          $s0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de28) {
            ctx->pc = 0x13DCD8u;
            goto label_13dcd8;
        }
    }
    ctx->pc = 0x13DE30u;
label_13de30:
    // 0x13de30: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x13de30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13de34: 0x37de0008  ori         $fp, $fp, 0x8
    ctx->pc = 0x13de34u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)8u)));
    // 0x13de38: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x13DE38u;
    {
        const bool branch_taken_0x13de38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE38u;
            // 0x13de3c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de38) {
            ctx->pc = 0x13DCC4u;
            goto label_13dcc4;
        }
    }
    ctx->pc = 0x13DE40u;
label_13de40:
    // 0x13de40: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x13de40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13de44: 0x37de0040  ori         $fp, $fp, 0x40
    ctx->pc = 0x13de44u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
    // 0x13de48: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x13DE48u;
    {
        const bool branch_taken_0x13de48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE48u;
            // 0x13de4c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de48) {
            ctx->pc = 0x13DCC4u;
            goto label_13dcc4;
        }
    }
    ctx->pc = 0x13DE50u;
label_13de50:
    // 0x13de50: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x13de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13de54: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x13de54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13de58: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x13de58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13de5c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x13de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x13de60: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DE60u;
    {
        const bool branch_taken_0x13de60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE60u;
            // 0x13de64: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de60) {
            ctx->pc = 0x13DE7Cu;
            goto label_13de7c;
        }
    }
    ctx->pc = 0x13DE68u;
    // 0x13de68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13de68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13de6c: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x13de6cu;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)32u)));
    // 0x13de70: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x13de70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
    // 0x13de74: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x13DE74u;
    {
        const bool branch_taken_0x13de74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE74u;
            // 0x13de78: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de74) {
            ctx->pc = 0x13DCC4u;
            goto label_13dcc4;
        }
    }
    ctx->pc = 0x13DE7Cu;
label_13de7c:
    // 0x13de7c: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x13DE7Cu;
    {
        const bool branch_taken_0x13de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE7Cu;
            // 0x13de80: 0x37de0010  ori         $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de7c) {
            ctx->pc = 0x13DCC4u;
            goto label_13dcc4;
        }
    }
    ctx->pc = 0x13DE84u;
label_13de84:
    // 0x13de84: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x13de84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x13de88: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x13de88u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)32u)));
    // 0x13de8c: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
    ctx->pc = 0x13DE8Cu;
    {
        const bool branch_taken_0x13de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE8Cu;
            // 0x13de90: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de8c) {
            ctx->pc = 0x13DCC4u;
            goto label_13dcc4;
        }
    }
    ctx->pc = 0x13DE94u;
label_13de94:
    // 0x13de94: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13de94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13de98: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x13de98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13de9c: 0x9282fff8  lbu         $v0, -0x8($s4)
    ctx->pc = 0x13de9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x13dea0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x13dea0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dea4: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x13dea4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x13dea8: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x13dea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13deac: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x13DEACu;
    {
        const bool branch_taken_0x13deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DEACu;
            // 0x13deb0: 0xa3a20060  sb          $v0, 0x60($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13deac) {
            ctx->pc = 0x13E3D4u;
            goto label_13e3d4;
        }
    }
    ctx->pc = 0x13DEB4u;
label_13deb4:
    // 0x13deb4: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x13deb4u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
label_13deb8:
    // 0x13deb8: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x13deb8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
    // 0x13debc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DEBCu;
    {
        const bool branch_taken_0x13debc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DEBCu;
            // 0x13dec0: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13debc) {
            ctx->pc = 0x13DED0u;
            goto label_13ded0;
        }
    }
    ctx->pc = 0x13DEC4u;
    // 0x13dec4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13dec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13dec8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13DEC8u;
    {
        const bool branch_taken_0x13dec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DEC8u;
            // 0x13decc: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dec8) {
            ctx->pc = 0x13DEE4u;
            goto label_13dee4;
        }
    }
    ctx->pc = 0x13DED0u;
label_13ded0:
    // 0x13ded0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DED0u;
    {
        const bool branch_taken_0x13ded0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DED0u;
            // 0x13ded4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ded0) {
            ctx->pc = 0x13DEE0u;
            goto label_13dee0;
        }
    }
    ctx->pc = 0x13DED8u;
    // 0x13ded8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13DED8u;
    {
        const bool branch_taken_0x13ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DED8u;
            // 0x13dedc: 0x8690fff8  lh          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ded8) {
            ctx->pc = 0x13DEE4u;
            goto label_13dee4;
        }
    }
    ctx->pc = 0x13DEE0u;
label_13dee0:
    // 0x13dee0: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x13dee0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_13dee4:
    // 0x13dee4: 0x60100db  bgez        $s0, . + 4 + (0xDB << 2)
    ctx->pc = 0x13DEE4u;
    {
        const bool branch_taken_0x13dee4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x13DEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DEE4u;
            // 0x13dee8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dee4) {
            ctx->pc = 0x13E254u;
            goto label_13e254;
        }
    }
    ctx->pc = 0x13DEECu;
    // 0x13deec: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x13deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x13def0: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x13def0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x13def4: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x13DEF4u;
    {
        const bool branch_taken_0x13def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DEF4u;
            // 0x13def8: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13def4) {
            ctx->pc = 0x13E254u;
            goto label_13e254;
        }
    }
    ctx->pc = 0x13DEFCu;
label_13defc:
    // 0x13defc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13df00: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DF00u;
    {
        const bool branch_taken_0x13df00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF00u;
            // 0x13df04: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df00) {
            ctx->pc = 0x13DF10u;
            goto label_13df10;
        }
    }
    ctx->pc = 0x13DF08u;
    // 0x13df08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13DF08u;
    {
        const bool branch_taken_0x13df08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF08u;
            // 0x13df0c: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df08) {
            ctx->pc = 0x13DF28u;
            goto label_13df28;
        }
    }
    ctx->pc = 0x13DF10u;
label_13df10:
    // 0x13df10: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DF10u;
    {
        const bool branch_taken_0x13df10 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x13DF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF10u;
            // 0x13df14: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df10) {
            ctx->pc = 0x13DF20u;
            goto label_13df20;
        }
    }
    ctx->pc = 0x13DF18u;
    // 0x13df18: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DF18u;
    {
        const bool branch_taken_0x13df18 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF18u;
            // 0x13df1c: 0x33c20008  andi        $v0, $fp, 0x8 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)8u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df18) {
            ctx->pc = 0x13DF2Cu;
            goto label_13df2c;
        }
    }
    ctx->pc = 0x13DF20u;
label_13df20:
    // 0x13df20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13df24: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x13df24u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_13df28:
    // 0x13df28: 0x33c20008  andi        $v0, $fp, 0x8
    ctx->pc = 0x13df28u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)8u)));
label_13df2c:
    // 0x13df2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DF2Cu;
    {
        const bool branch_taken_0x13df2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF2Cu;
            // 0x13df30: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df2c) {
            ctx->pc = 0x13DF40u;
            goto label_13df40;
        }
    }
    ctx->pc = 0x13DF34u;
    // 0x13df34: 0xde82fff8  ld          $v0, -0x8($s4)
    ctx->pc = 0x13df34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x13df38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13DF38u;
    {
        const bool branch_taken_0x13df38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF38u;
            // 0x13df3c: 0xffa20200  sd          $v0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df38) {
            ctx->pc = 0x13DF48u;
            goto label_13df48;
        }
    }
    ctx->pc = 0x13DF40u;
label_13df40:
    // 0x13df40: 0xde83fff8  ld          $v1, -0x8($s4)
    ctx->pc = 0x13df40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x13df44: 0xffa30200  sd          $v1, 0x200($sp)
    ctx->pc = 0x13df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 3));
label_13df48:
    // 0x13df48: 0xc04f208  jal         func_13C820
    ctx->pc = 0x13DF48u;
    SET_GPR_U32(ctx, 31, 0x13DF50u);
    ctx->pc = 0x13DF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF48u;
            // 0x13df4c: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C820u;
    if (runtime->hasFunction(0x13C820u)) {
        auto targetFn = runtime->lookupFunction(0x13C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF50u; }
        if (ctx->pc != 0x13DF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isinf_0x13c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF50u; }
        if (ctx->pc != 0x13DF50u) { return; }
    }
    ctx->pc = 0x13DF50u;
    // 0x13df50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13DF50u;
    {
        const bool branch_taken_0x13df50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF50u;
            // 0x13df54: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df50) {
            ctx->pc = 0x13DF80u;
            goto label_13df80;
        }
    }
    ctx->pc = 0x13DF58u;
    // 0x13df58: 0xc0409ca  jal         func_102728
    ctx->pc = 0x13DF58u;
    SET_GPR_U32(ctx, 31, 0x13DF60u);
    ctx->pc = 0x13DF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF58u;
            // 0x13df5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF60u; }
        if (ctx->pc != 0x13DF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF60u; }
        if (ctx->pc != 0x13DF60u) { return; }
    }
    ctx->pc = 0x13DF60u;
    // 0x13df60: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DF60u;
    {
        const bool branch_taken_0x13df60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13DF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF60u;
            // 0x13df64: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df60) {
            ctx->pc = 0x13DF74u;
            goto label_13df74;
        }
    }
    ctx->pc = 0x13DF68u;
    // 0x13df68: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x13df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x13df6c: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x13df6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x13df70: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_13df74:
    // 0x13df74: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x13df74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13df78: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x13DF78u;
    {
        const bool branch_taken_0x13df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF78u;
            // 0x13df7c: 0x2453fcd0  addiu       $s3, $v0, -0x330 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df78) {
            ctx->pc = 0x13E3D0u;
            goto label_13e3d0;
        }
    }
    ctx->pc = 0x13DF80u;
label_13df80:
    // 0x13df80: 0xc04f21a  jal         func_13C868
    ctx->pc = 0x13DF80u;
    SET_GPR_U32(ctx, 31, 0x13DF88u);
    ctx->pc = 0x13DF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF80u;
            // 0x13df84: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C868u;
    if (runtime->hasFunction(0x13C868u)) {
        auto targetFn = runtime->lookupFunction(0x13C868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF88u; }
        if (ctx->pc != 0x13DF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isnan_0x13c868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF88u; }
        if (ctx->pc != 0x13DF88u) { return; }
    }
    ctx->pc = 0x13DF88u;
    // 0x13df88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DF88u;
    {
        const bool branch_taken_0x13df88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF88u;
            // 0x13df8c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df88) {
            ctx->pc = 0x13DF9Cu;
            goto label_13df9c;
        }
    }
    ctx->pc = 0x13DF90u;
    // 0x13df90: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x13df90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13df94: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x13DF94u;
    {
        const bool branch_taken_0x13df94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF94u;
            // 0x13df98: 0x2453fcd8  addiu       $s3, $v0, -0x328 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df94) {
            ctx->pc = 0x13E3D0u;
            goto label_13e3d0;
        }
    }
    ctx->pc = 0x13DF9Cu;
label_13df9c:
    // 0x13df9c: 0x37de0100  ori         $fp, $fp, 0x100
    ctx->pc = 0x13df9cu;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)256u)));
    // 0x13dfa0: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x13dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x13dfa4: 0xdfa50200  ld          $a1, 0x200($sp)
    ctx->pc = 0x13dfa4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x13dfa8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13dfa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfac: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x13dfacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfb0: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x13dfb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x13dfb4: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x13dfb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x13dfb8: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x13dfb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfbc: 0xc04fc06  jal         func_13F018
    ctx->pc = 0x13DFBCu;
    SET_GPR_U32(ctx, 31, 0x13DFC4u);
    ctx->pc = 0x13DFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFBCu;
            // 0x13dfc0: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F018u;
    if (runtime->hasFunction(0x13F018u)) {
        auto targetFn = runtime->lookupFunction(0x13F018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DFC4u; }
        if (ctx->pc != 0x13DFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cvt_0x13f018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DFC4u; }
        if (ctx->pc != 0x13DFC4u) { return; }
    }
    ctx->pc = 0x13DFC4u;
    // 0x13dfc4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13dfc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfc8: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x13dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x13dfcc: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DFCCu;
    {
        const bool branch_taken_0x13dfcc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x13DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFCCu;
            // 0x13dfd0: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfcc) {
            ctx->pc = 0x13DFDCu;
            goto label_13dfdc;
        }
    }
    ctx->pc = 0x13DFD4u;
    // 0x13dfd4: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13DFD4u;
    {
        const bool branch_taken_0x13dfd4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFD4u;
            // 0x13dfd8: 0x8fa501dc  lw          $a1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfd4) {
            ctx->pc = 0x13E008u;
            goto label_13e008;
        }
    }
    ctx->pc = 0x13DFDCu;
label_13dfdc:
    // 0x13dfdc: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x13dfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x13dfe0: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x13dfe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x13dfe4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DFE4u;
    {
        const bool branch_taken_0x13dfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFE4u;
            // 0x13dfe8: 0x3ae40067  xori        $a0, $s7, 0x67 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 23), _mm_cvtsi32_si128((int)103u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfe4) {
            ctx->pc = 0x13DFF8u;
            goto label_13dff8;
        }
    }
    ctx->pc = 0x13DFECu;
    // 0x13dfec: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x13dfecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13dff0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DFF0u;
    {
        const bool branch_taken_0x13dff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dff0) {
            ctx->pc = 0x13DFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DFF0u;
            // 0x13dff4: 0x24170067  addiu       $s7, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E008u;
            goto label_13e008;
        }
    }
    ctx->pc = 0x13DFF8u;
label_13dff8:
    // 0x13dff8: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x13dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x13dffc: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x13dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x13e000: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13e000u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e004: 0x64b80b  movn        $s7, $v1, $a0
    ctx->pc = 0x13e004u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_13e008:
    // 0x13e008: 0x2ae20066  slti        $v0, $s7, 0x66
    ctx->pc = 0x13e008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x13e00c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13E00Cu;
    {
        const bool branch_taken_0x13e00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E00Cu;
            // 0x13e010: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e00c) {
            ctx->pc = 0x13E054u;
            goto label_13e054;
        }
    }
    ctx->pc = 0x13E014u;
    // 0x13e014: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13e014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e018: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13e018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e01c: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x13e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x13e020: 0xc04fc72  jal         func_13F1C8
    ctx->pc = 0x13E020u;
    SET_GPR_U32(ctx, 31, 0x13E028u);
    ctx->pc = 0x13E024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E020u;
            // 0x13e024: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F1C8u;
    if (runtime->hasFunction(0x13F1C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E028u; }
        if (ctx->pc != 0x13E028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exponent_0x13f1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E028u; }
        if (ctx->pc != 0x13E028u) { return; }
    }
    ctx->pc = 0x13E028u;
    // 0x13e028: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x13e028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x13e02c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x13e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x13e030: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x13e030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x13e034: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x13e034u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13e038: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E038u;
    {
        const bool branch_taken_0x13e038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E038u;
            // 0x13e03c: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e038) {
            ctx->pc = 0x13E04Cu;
            goto label_13e04c;
        }
    }
    ctx->pc = 0x13E040u;
    // 0x13e040: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x13e040u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x13e044: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x13E044u;
    {
        const bool branch_taken_0x13e044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E044u;
            // 0x13e048: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e044) {
            ctx->pc = 0x13E0B0u;
            goto label_13e0b0;
        }
    }
    ctx->pc = 0x13E04Cu;
label_13e04c:
    // 0x13e04c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13E04Cu;
    {
        const bool branch_taken_0x13e04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E04Cu;
            // 0x13e050: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e04c) {
            ctx->pc = 0x13E0ACu;
            goto label_13e0ac;
        }
    }
    ctx->pc = 0x13E054u;
label_13e054:
    // 0x13e054: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x13e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x13e058: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13E058u;
    {
        const bool branch_taken_0x13e058 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E058u;
            // 0x13e05c: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e058) {
            ctx->pc = 0x13E088u;
            goto label_13e088;
        }
    }
    ctx->pc = 0x13E060u;
    // 0x13e060: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13E060u;
    {
        const bool branch_taken_0x13e060 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13E064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E060u;
            // 0x13e064: 0x26550002  addiu       $s5, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e060) {
            ctx->pc = 0x13E0ACu;
            goto label_13e0ac;
        }
    }
    ctx->pc = 0x13E068u;
    // 0x13e068: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E068u;
    {
        const bool branch_taken_0x13e068 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E068u;
            // 0x13e06c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e068) {
            ctx->pc = 0x13E07Cu;
            goto label_13e07c;
        }
    }
    ctx->pc = 0x13E070u;
    // 0x13e070: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x13e070u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x13e074: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13E074u;
    {
        const bool branch_taken_0x13e074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E074u;
            // 0x13e078: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e074) {
            ctx->pc = 0x13E0B0u;
            goto label_13e0b0;
        }
    }
    ctx->pc = 0x13E07Cu;
label_13e07c:
    // 0x13e07c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13e080: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13E080u;
    {
        const bool branch_taken_0x13e080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E080u;
            // 0x13e084: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e080) {
            ctx->pc = 0x13E0ACu;
            goto label_13e0ac;
        }
    }
    ctx->pc = 0x13E088u;
label_13e088:
    // 0x13e088: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x13e088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e08c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E08Cu;
    {
        const bool branch_taken_0x13e08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E08Cu;
            // 0x13e090: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e08c) {
            ctx->pc = 0x13E09Cu;
            goto label_13e09c;
        }
    }
    ctx->pc = 0x13E094u;
    // 0x13e094: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13E094u;
    {
        const bool branch_taken_0x13e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E094u;
            // 0x13e098: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e094) {
            ctx->pc = 0x13E0ACu;
            goto label_13e0ac;
        }
    }
    ctx->pc = 0x13E09Cu;
label_13e09c:
    // 0x13e09c: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E09Cu;
    {
        const bool branch_taken_0x13e09c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x13E0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E09Cu;
            // 0x13e0a0: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e09c) {
            ctx->pc = 0x13E0ACu;
            goto label_13e0ac;
        }
    }
    ctx->pc = 0x13E0A4u;
    // 0x13e0a4: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x13e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13e0a8: 0x45a823  subu        $s5, $v0, $a1
    ctx->pc = 0x13e0a8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_13e0ac:
    // 0x13e0ac: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x13e0acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_13e0b0:
    // 0x13e0b0: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x13E0B0u;
    {
        const bool branch_taken_0x13e0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0B0u;
            // 0x13e0b4: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0b0) {
            ctx->pc = 0x13E3D0u;
            goto label_13e3d0;
        }
    }
    ctx->pc = 0x13E0B8u;
    // 0x13e0b8: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x13e0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13e0bc: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x13E0BCu;
    {
        const bool branch_taken_0x13e0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0BCu;
            // 0x13e0c0: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0bc) {
            ctx->pc = 0x13E3D4u;
            goto label_13e3d4;
        }
    }
    ctx->pc = 0x13E0C4u;
label_13e0c4:
    // 0x13e0c4: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x13e0c4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
    // 0x13e0c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E0C8u;
    {
        const bool branch_taken_0x13e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0C8u;
            // 0x13e0cc: 0x8fa501f0  lw          $a1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0c8) {
            ctx->pc = 0x13E0E0u;
            goto label_13e0e0;
        }
    }
    ctx->pc = 0x13E0D0u;
    // 0x13e0d0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13e0d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13e0d4: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x13e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x13e0d8: 0x1000fec1  b           . + 4 + (-0x13F << 2)
    ctx->pc = 0x13E0D8u;
    {
        const bool branch_taken_0x13e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0D8u;
            // 0x13e0dc: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0d8) {
            ctx->pc = 0x13DBE0u;
            goto label_13dbe0;
        }
    }
    ctx->pc = 0x13E0E0u;
label_13e0e0:
    // 0x13e0e0: 0x33c20040  andi        $v0, $fp, 0x40
    ctx->pc = 0x13e0e0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
    // 0x13e0e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E0E4u;
    {
        const bool branch_taken_0x13e0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0E4u;
            // 0x13e0e8: 0x8fa601f0  lw          $a2, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0e4) {
            ctx->pc = 0x13E0FCu;
            goto label_13e0fc;
        }
    }
    ctx->pc = 0x13E0ECu;
    // 0x13e0ec: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13e0ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13e0f0: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x13e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x13e0f4: 0x1000feba  b           . + 4 + (-0x146 << 2)
    ctx->pc = 0x13E0F4u;
    {
        const bool branch_taken_0x13e0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0F4u;
            // 0x13e0f8: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0f4) {
            ctx->pc = 0x13DBE0u;
            goto label_13dbe0;
        }
    }
    ctx->pc = 0x13E0FCu;
label_13e0fc:
    // 0x13e0fc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13e0fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13e100: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x13e100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x13e104: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x13e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x13e108: 0x1000feb5  b           . + 4 + (-0x14B << 2)
    ctx->pc = 0x13E108u;
    {
        const bool branch_taken_0x13e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E108u;
            // 0x13e10c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e108) {
            ctx->pc = 0x13DBE0u;
            goto label_13dbe0;
        }
    }
    ctx->pc = 0x13E110u;
label_13e110:
    // 0x13e110: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x13e110u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
label_13e114:
    // 0x13e114: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x13e114u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
    // 0x13e118: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E118u;
    {
        const bool branch_taken_0x13e118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E118u;
            // 0x13e11c: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e118) {
            ctx->pc = 0x13E12Cu;
            goto label_13e12c;
        }
    }
    ctx->pc = 0x13E120u;
    // 0x13e120: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13e120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13e124: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13E124u;
    {
        const bool branch_taken_0x13e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E124u;
            // 0x13e128: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e124) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13E12Cu;
label_13e12c:
    // 0x13e12c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E12Cu;
    {
        const bool branch_taken_0x13e12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E12Cu;
            // 0x13e130: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e12c) {
            ctx->pc = 0x13E13Cu;
            goto label_13e13c;
        }
    }
    ctx->pc = 0x13E134u;
    // 0x13e134: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E134u;
    {
        const bool branch_taken_0x13e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E134u;
            // 0x13e138: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e134) {
            ctx->pc = 0x13E140u;
            goto label_13e140;
        }
    }
    ctx->pc = 0x13E13Cu;
label_13e13c:
    // 0x13e13c: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x13e13cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_13e140:
    // 0x13e140: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x13E140u;
    {
        const bool branch_taken_0x13e140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E140u;
            // 0x13e144: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e140) {
            ctx->pc = 0x13E250u;
            goto label_13e250;
        }
    }
    ctx->pc = 0x13E148u;
label_13e148:
    // 0x13e148: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13e148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13e14c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13e14cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13e150: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x13e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x13e154: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13e154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e158: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x13e158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x13e15c: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x13e15cu;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)2u)));
    // 0x13e160: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x13e160u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x13e164: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x13E164u;
    {
        const bool branch_taken_0x13e164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E164u;
            // 0x13e168: 0x8e90fff8  lw          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e164) {
            ctx->pc = 0x13E250u;
            goto label_13e250;
        }
    }
    ctx->pc = 0x13E16Cu;
label_13e16c:
    // 0x13e16c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13e16cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13e170: 0x8e93fff8  lw          $s3, -0x8($s4)
    ctx->pc = 0x13e170u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x13e174: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E174u;
    {
        const bool branch_taken_0x13e174 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E174u;
            // 0x13e178: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e174) {
            ctx->pc = 0x13E180u;
            goto label_13e180;
        }
    }
    ctx->pc = 0x13E17Cu;
    // 0x13e17c: 0x2453fcf8  addiu       $s3, $v0, -0x308
    ctx->pc = 0x13e17cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966520));
label_13e180:
    // 0x13e180: 0x640000b  bltz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x13E180u;
    {
        const bool branch_taken_0x13e180 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x13E184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E180u;
            // 0x13e184: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e180) {
            ctx->pc = 0x13E1B0u;
            goto label_13e1b0;
        }
    }
    ctx->pc = 0x13E188u;
    // 0x13e188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e18c: 0xc04ecc4  jal         func_13B310
    ctx->pc = 0x13E18Cu;
    SET_GPR_U32(ctx, 31, 0x13E194u);
    ctx->pc = 0x13E190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E18Cu;
            // 0x13e190: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B310u;
    if (runtime->hasFunction(0x13B310u)) {
        auto targetFn = runtime->lookupFunction(0x13B310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E194u; }
        if (ctx->pc != 0x13E194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memchr_0x13b310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E194u; }
        if (ctx->pc != 0x13E194u) { return; }
    }
    ctx->pc = 0x13E194u;
    // 0x13e194: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E194u;
    {
        const bool branch_taken_0x13e194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E194u;
            // 0x13e198: 0x53a823  subu        $s5, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e194) {
            ctx->pc = 0x13E1A8u;
            goto label_13e1a8;
        }
    }
    ctx->pc = 0x13E19Cu;
    // 0x13e19c: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x13e19cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x13e1a0: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x13E1A0u;
    {
        const bool branch_taken_0x13e1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1A0u;
            // 0x13e1a4: 0x242a80b  movn        $s5, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1a0) {
            ctx->pc = 0x13E3CCu;
            goto label_13e3cc;
        }
    }
    ctx->pc = 0x13E1A8u;
label_13e1a8:
    // 0x13e1a8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x13E1A8u;
    {
        const bool branch_taken_0x13e1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1A8u;
            // 0x13e1ac: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1a8) {
            ctx->pc = 0x13E3CCu;
            goto label_13e3cc;
        }
    }
    ctx->pc = 0x13E1B0u;
label_13e1b0:
    // 0x13e1b0: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x13E1B0u;
    SET_GPR_U32(ctx, 31, 0x13E1B8u);
    ctx->pc = 0x13E1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1B0u;
            // 0x13e1b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E1B8u; }
        if (ctx->pc != 0x13E1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E1B8u; }
        if (ctx->pc != 0x13E1B8u) { return; }
    }
    ctx->pc = 0x13E1B8u;
    // 0x13e1b8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x13E1B8u;
    {
        const bool branch_taken_0x13e1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1B8u;
            // 0x13e1bc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1b8) {
            ctx->pc = 0x13E3CCu;
            goto label_13e3cc;
        }
    }
    ctx->pc = 0x13E1C0u;
label_13e1c0:
    // 0x13e1c0: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x13e1c0u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
label_13e1c4:
    // 0x13e1c4: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x13e1c4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
    // 0x13e1c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E1C8u;
    {
        const bool branch_taken_0x13e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1C8u;
            // 0x13e1cc: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1c8) {
            ctx->pc = 0x13E1DCu;
            goto label_13e1dc;
        }
    }
    ctx->pc = 0x13E1D0u;
    // 0x13e1d0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13e1d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13e1d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13E1D4u;
    {
        const bool branch_taken_0x13e1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1D4u;
            // 0x13e1d8: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1d4) {
            ctx->pc = 0x13E1F0u;
            goto label_13e1f0;
        }
    }
    ctx->pc = 0x13E1DCu;
label_13e1dc:
    // 0x13e1dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E1DCu;
    {
        const bool branch_taken_0x13e1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1DCu;
            // 0x13e1e0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1dc) {
            ctx->pc = 0x13E1ECu;
            goto label_13e1ec;
        }
    }
    ctx->pc = 0x13E1E4u;
    // 0x13e1e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E1E4u;
    {
        const bool branch_taken_0x13e1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1E4u;
            // 0x13e1e8: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1e4) {
            ctx->pc = 0x13E1F0u;
            goto label_13e1f0;
        }
    }
    ctx->pc = 0x13E1ECu;
label_13e1ec:
    // 0x13e1ec: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x13e1ecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_13e1f0:
    // 0x13e1f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13E1F0u;
    {
        const bool branch_taken_0x13e1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1F0u;
            // 0x13e1f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1f0) {
            ctx->pc = 0x13E250u;
            goto label_13e250;
        }
    }
    ctx->pc = 0x13E1F8u;
label_13e1f8:
    // 0x13e1f8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13e1fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E1FCu;
    {
        const bool branch_taken_0x13e1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E1FCu;
            // 0x13e200: 0x2442fd00  addiu       $v0, $v0, -0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1fc) {
            ctx->pc = 0x13E20Cu;
            goto label_13e20c;
        }
    }
    ctx->pc = 0x13E204u;
label_13e204:
    // 0x13e204: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13e204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13e208: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x13e208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
label_13e20c:
    // 0x13e20c: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x13e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x13e210: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x13e210u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
    // 0x13e214: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E214u;
    {
        const bool branch_taken_0x13e214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E214u;
            // 0x13e218: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e214) {
            ctx->pc = 0x13E228u;
            goto label_13e228;
        }
    }
    ctx->pc = 0x13E21Cu;
    // 0x13e21c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x13e21cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x13e220: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13E220u;
    {
        const bool branch_taken_0x13e220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E220u;
            // 0x13e224: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e220) {
            ctx->pc = 0x13E23Cu;
            goto label_13e23c;
        }
    }
    ctx->pc = 0x13E228u;
label_13e228:
    // 0x13e228: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E228u;
    {
        const bool branch_taken_0x13e228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E228u;
            // 0x13e22c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e228) {
            ctx->pc = 0x13E238u;
            goto label_13e238;
        }
    }
    ctx->pc = 0x13E230u;
    // 0x13e230: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E230u;
    {
        const bool branch_taken_0x13e230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E230u;
            // 0x13e234: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e230) {
            ctx->pc = 0x13E23Cu;
            goto label_13e23c;
        }
    }
    ctx->pc = 0x13E238u;
label_13e238:
    // 0x13e238: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x13e238u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_13e23c:
    // 0x13e23c: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x13e23cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x13e240: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E240u;
    {
        const bool branch_taken_0x13e240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E240u;
            // 0x13e244: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e240) {
            ctx->pc = 0x13E250u;
            goto label_13e250;
        }
    }
    ctx->pc = 0x13E248u;
    // 0x13e248: 0x37c20002  ori         $v0, $fp, 0x2
    ctx->pc = 0x13e248u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)2u)));
    // 0x13e24c: 0x50f00b  movn        $fp, $v0, $s0
    ctx->pc = 0x13e24cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_13e250:
    // 0x13e250: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x13e250u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_13e254:
    // 0x13e254: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E254u;
    {
        const bool branch_taken_0x13e254 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x13E258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E254u;
            // 0x13e258: 0xafb2020c  sw          $s2, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e254) {
            ctx->pc = 0x13E264u;
            goto label_13e264;
        }
    }
    ctx->pc = 0x13E25Cu;
    // 0x13e25c: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x13e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x13e260: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x13e260u;
    SET_GPR_VEC(ctx, 30, PS2_PAND(GPR_VEC(ctx, 30), GPR_VEC(ctx, 2)));
label_13e264:
    // 0x13e264: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E264u;
    {
        const bool branch_taken_0x13e264 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E264u;
            // 0x13e268: 0x27b301bc  addiu       $s3, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e264) {
            ctx->pc = 0x13E278u;
            goto label_13e278;
        }
    }
    ctx->pc = 0x13E26Cu;
    // 0x13e26c: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x13e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x13e270: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x13E270u;
    {
        const bool branch_taken_0x13e270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E270u;
            // 0x13e274: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e270) {
            ctx->pc = 0x13E3A8u;
            goto label_13e3a8;
        }
    }
    ctx->pc = 0x13E278u;
label_13e278:
    // 0x13e278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e27c: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x13E27Cu;
    {
        const bool branch_taken_0x13e27c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E27Cu;
            // 0x13e280: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e27c) {
            ctx->pc = 0x13E2FCu;
            goto label_13e2fc;
        }
    }
    ctx->pc = 0x13E284u;
    // 0x13e284: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13E284u;
    {
        const bool branch_taken_0x13e284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E284u;
            // 0x13e288: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e284) {
            ctx->pc = 0x13E2B0u;
            goto label_13e2b0;
        }
    }
    ctx->pc = 0x13E28Cu;
    // 0x13e28c: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x13E28Cu;
    {
        const bool branch_taken_0x13e28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13E290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E28Cu;
            // 0x13e290: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e28c) {
            ctx->pc = 0x13E36Cu;
            goto label_13e36c;
        }
    }
    ctx->pc = 0x13E294u;
    // 0x13e294: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x13e294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13e298: 0x2453fd18  addiu       $s3, $v0, -0x2E8
    ctx->pc = 0x13e298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966552));
    // 0x13e29c: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x13e29cu;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
    // 0x13e2a0: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x13E2A0u;
    SET_GPR_U32(ctx, 31, 0x13E2A8u);
    ctx->pc = 0x13E2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2A0u;
            // 0x13e2a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2A8u; }
        if (ctx->pc != 0x13E2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E2A8u; }
        if (ctx->pc != 0x13E2A8u) { return; }
    }
    ctx->pc = 0x13E2A8u;
    // 0x13e2a8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x13E2A8u;
    {
        const bool branch_taken_0x13e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2A8u;
            // 0x13e2ac: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2a8) {
            ctx->pc = 0x13E3D8u;
            goto label_13e3d8;
        }
    }
    ctx->pc = 0x13E2B0u;
label_13e2b0:
    // 0x13e2b0: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x13e2b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13e2b4: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x13e2b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13e2b8: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x13e2b8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x13e2bc: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x13e2bcu;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
label_13e2c0:
    // 0x13e2c0: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x13e2c0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)7u)));
    // 0x13e2c4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13e2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13e2c8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x13e2c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x13e2cc: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x13e2ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x13e2d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13e2d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x13e2d4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x13e2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13e2d8: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13E2D8u;
    {
        const bool branch_taken_0x13e2d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e2d8) {
            ctx->pc = 0x13E2C0u;
            goto label_13e2c0;
        }
    }
    ctx->pc = 0x13E2E0u;
    // 0x13e2e0: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x13E2E0u;
    {
        const bool branch_taken_0x13e2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2E0u;
            // 0x13e2e4: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2e0) {
            ctx->pc = 0x13E3B0u;
            goto label_13e3b0;
        }
    }
    ctx->pc = 0x13E2E8u;
    // 0x13e2e8: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x13E2E8u;
    {
        const bool branch_taken_0x13e2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2E8u;
            // 0x13e2ec: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2e8) {
            ctx->pc = 0x13E3B4u;
            goto label_13e3b4;
        }
    }
    ctx->pc = 0x13E2F0u;
    // 0x13e2f0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13e2f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13e2f4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x13E2F4u;
    {
        const bool branch_taken_0x13e2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2F4u;
            // 0x13e2f8: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2f4) {
            ctx->pc = 0x13E3B0u;
            goto label_13e3b0;
        }
    }
    ctx->pc = 0x13E2FCu;
label_13e2fc:
    // 0x13e2fc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13E2FCu;
    {
        const bool branch_taken_0x13e2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E2FCu;
            // 0x13e300: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2fc) {
            ctx->pc = 0x13E350u;
            goto label_13e350;
        }
    }
    ctx->pc = 0x13E304u;
    // 0x13e304: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x13e304u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13e308: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x13e308u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
    // 0x13e30c: 0x0  nop
    ctx->pc = 0x13e30cu;
    // NOP
label_13e310:
    // 0x13e310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e314: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x13E314u;
    SET_GPR_U32(ctx, 31, 0x13E31Cu);
    ctx->pc = 0x13E318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E314u;
            // 0x13e318: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E31Cu; }
        if (ctx->pc != 0x13E31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E31Cu; }
        if (ctx->pc != 0x13E31Cu) { return; }
    }
    ctx->pc = 0x13E31Cu;
    // 0x13e31c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13e31cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13e320: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x13e320u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x13e324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13e328u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x13e32c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x13e32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13e330: 0xc040488  jal         func_101220
    ctx->pc = 0x13E330u;
    SET_GPR_U32(ctx, 31, 0x13E338u);
    ctx->pc = 0x13E334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E330u;
            // 0x13e334: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101220u;
    if (runtime->hasFunction(0x101220u)) {
        auto targetFn = runtime->lookupFunction(0x101220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E338u; }
        if (ctx->pc != 0x13E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x101220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E338u; }
        if (ctx->pc != 0x13E338u) { return; }
    }
    ctx->pc = 0x13E338u;
    // 0x13e338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e33c: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x13e33cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x13e340: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x13E340u;
    {
        const bool branch_taken_0x13e340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E340u;
            // 0x13e344: 0x66020030  daddiu      $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e340) {
            ctx->pc = 0x13E310u;
            goto label_13e310;
        }
    }
    ctx->pc = 0x13E348u;
    // 0x13e348: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13E348u;
    {
        const bool branch_taken_0x13e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E348u;
            // 0x13e34c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e348) {
            ctx->pc = 0x13E360u;
            goto label_13e360;
        }
    }
    ctx->pc = 0x13E350u;
label_13e350:
    // 0x13e350: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x13e350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13e354: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x13e354u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
    // 0x13e358: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x13e358u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x13e35c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13e35cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_13e360:
    // 0x13e360: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13e360u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x13e364: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13E364u;
    {
        const bool branch_taken_0x13e364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E364u;
            // 0x13e368: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e364) {
            ctx->pc = 0x13E3B0u;
            goto label_13e3b0;
        }
    }
    ctx->pc = 0x13E36Cu;
label_13e36c:
    // 0x13e36c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x13e36cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13e370: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x13e370u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13e374: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x13e374u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
label_13e378:
    // 0x13e378: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x13e378u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)15u)));
    // 0x13e37c: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x13e37cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x13e380: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13e380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13e384: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13e384u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13e388: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13e388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13e38c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x13e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13e390: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x13e390u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x13e394: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x13e394u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e398: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13E398u;
    {
        const bool branch_taken_0x13e398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E398u;
            // 0x13e39c: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e398) {
            ctx->pc = 0x13E378u;
            goto label_13e378;
        }
    }
    ctx->pc = 0x13E3A0u;
    // 0x13e3a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13E3A0u;
    {
        const bool branch_taken_0x13e3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E3A0u;
            // 0x13e3a4: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3a0) {
            ctx->pc = 0x13E3B4u;
            goto label_13e3b4;
        }
    }
    ctx->pc = 0x13E3A8u;
label_13e3a8:
    // 0x13e3a8: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x13e3a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13e3ac: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x13e3acu;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
label_13e3b0:
    // 0x13e3b0: 0x2662fea4  addiu       $v0, $s3, -0x15C
    ctx->pc = 0x13e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
label_13e3b4:
    // 0x13e3b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13E3B4u;
    {
        const bool branch_taken_0x13e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E3B4u;
            // 0x13e3b8: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3b4) {
            ctx->pc = 0x13E3D8u;
            goto label_13e3d8;
        }
    }
    ctx->pc = 0x13E3BCu;
label_13e3bc:
    // 0x13e3bc: 0x12e002fc  beqz        $s7, . + 4 + (0x2FC << 2)
    ctx->pc = 0x13E3BCu;
    {
        const bool branch_taken_0x13e3bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E3BCu;
            // 0x13e3c0: 0x27b30060  addiu       $s3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3bc) {
            ctx->pc = 0x13EFB0u;
            goto label_13efb0;
        }
    }
    ctx->pc = 0x13E3C4u;
    // 0x13e3c4: 0xa3b70060  sb          $s7, 0x60($sp)
    ctx->pc = 0x13e3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 23));
    // 0x13e3c8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x13e3c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e3cc:
    // 0x13e3cc: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x13e3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_13e3d0:
    // 0x13e3d0: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x13e3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_13e3d4:
    // 0x13e3d4: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x13e3d4u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
label_13e3d8:
    // 0x13e3d8: 0xafb50210  sw          $s5, 0x210($sp)
    ctx->pc = 0x13e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 21));
    // 0x13e3dc: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x13e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x13e3e0: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x13e3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x13e3e4: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x13e3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e3e8: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x13e3e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x13e3ec: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x13e3ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x13e3f0: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x13e3f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x13e3f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E3F4u;
    {
        const bool branch_taken_0x13e3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E3F4u;
            // 0x13e3f8: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3f4) {
            ctx->pc = 0x13E408u;
            goto label_13e408;
        }
    }
    ctx->pc = 0x13E3FCu;
    // 0x13e3fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13e3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13e400: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13E400u;
    {
        const bool branch_taken_0x13e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E400u;
            // 0x13e404: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e400) {
            ctx->pc = 0x13E418u;
            goto label_13e418;
        }
    }
    ctx->pc = 0x13E408u;
label_13e408:
    // 0x13e408: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x13e408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x13e40c: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x13e40cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)2u)));
    // 0x13e410: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x13e410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13e414: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x13e414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
label_13e418:
    // 0x13e418: 0x16c00037  bnez        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x13E418u;
    {
        const bool branch_taken_0x13e418 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E418u;
            // 0x13e41c: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e418) {
            ctx->pc = 0x13E4F8u;
            goto label_13e4f8;
        }
    }
    ctx->pc = 0x13E420u;
    // 0x13e420: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x13e420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x13e424: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x13e424u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e428: 0x1a000033  blez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x13E428u;
    {
        const bool branch_taken_0x13e428 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13E42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E428u;
            // 0x13e42c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e428) {
            ctx->pc = 0x13E4F8u;
            goto label_13e4f8;
        }
    }
    ctx->pc = 0x13E430u;
    // 0x13e430: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13E430u;
    {
        const bool branch_taken_0x13e430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E430u;
            // 0x13e434: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e430) {
            ctx->pc = 0x13E4A0u;
            goto label_13e4a0;
        }
    }
    ctx->pc = 0x13E438u;
    // 0x13e438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E438u;
    {
        const bool branch_taken_0x13e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E438u;
            // 0x13e43c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e438) {
            ctx->pc = 0x13E444u;
            goto label_13e444;
        }
    }
    ctx->pc = 0x13E440u;
label_13e440:
    // 0x13e440: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_13e444:
    // 0x13e444: 0x24c4fcb0  addiu       $a0, $a2, -0x350
    ctx->pc = 0x13e444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966448));
    // 0x13e448: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x13e448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x13e44c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13e450: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e454: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e458: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e45c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13e460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e464: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e468: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e468u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e46c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E46Cu;
    {
        const bool branch_taken_0x13e46c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E46Cu;
            // 0x13e470: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e46c) {
            ctx->pc = 0x13E490u;
            goto label_13e490;
        }
    }
    ctx->pc = 0x13E474u;
    // 0x13e474: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e478: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13e478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13e47c: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E47Cu;
    SET_GPR_U32(ctx, 31, 0x13E484u);
    ctx->pc = 0x13E480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E47Cu;
            // 0x13e480: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E484u; }
        if (ctx->pc != 0x13E484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E484u; }
        if (ctx->pc != 0x13E484u) { return; }
    }
    ctx->pc = 0x13E484u;
    // 0x13e484: 0x144002d2  bnez        $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x13E484u;
    {
        const bool branch_taken_0x13e484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E484u;
            // 0x13e488: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e484) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E48Cu;
    // 0x13e48c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x13e48cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13e490:
    // 0x13e490: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x13e490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13e494: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x13e494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x13e498: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x13E498u;
    {
        const bool branch_taken_0x13e498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E498u;
            // 0x13e49c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e498) {
            ctx->pc = 0x13E440u;
            goto label_13e440;
        }
    }
    ctx->pc = 0x13E4A0u;
label_13e4a0:
    // 0x13e4a0: 0x24c2fcb0  addiu       $v0, $a2, -0x350
    ctx->pc = 0x13e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966448));
    // 0x13e4a4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x13e4a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13e4ac: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e4b0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e4b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e4b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e4bc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13e4c0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e4c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e4c4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e4c8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E4C8u;
    {
        const bool branch_taken_0x13e4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4C8u;
            // 0x13e4cc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4c8) {
            ctx->pc = 0x13E4F0u;
            goto label_13e4f0;
        }
    }
    ctx->pc = 0x13E4D0u;
    // 0x13e4d0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e4d4: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E4D4u;
    SET_GPR_U32(ctx, 31, 0x13E4DCu);
    ctx->pc = 0x13E4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4D4u;
            // 0x13e4d8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E4DCu; }
        if (ctx->pc != 0x13E4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E4DCu; }
        if (ctx->pc != 0x13E4DCu) { return; }
    }
    ctx->pc = 0x13E4DCu;
    // 0x13e4dc: 0x144002bc  bnez        $v0, . + 4 + (0x2BC << 2)
    ctx->pc = 0x13E4DCu;
    {
        const bool branch_taken_0x13e4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4DCu;
            // 0x13e4e0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4dc) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E4E4u;
    // 0x13e4e4: 0x27b20028  addiu       $s2, $sp, 0x28
    ctx->pc = 0x13e4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x13e4e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E4E8u;
    {
        const bool branch_taken_0x13e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4E8u;
            // 0x13e4ec: 0x93a401d1  lbu         $a0, 0x1D1($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4e8) {
            ctx->pc = 0x13E4F8u;
            goto label_13e4f8;
        }
    }
    ctx->pc = 0x13E4F0u;
label_13e4f0:
    // 0x13e4f0: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x13e4f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x13e4f4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x13e4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_13e4f8:
    // 0x13e4f8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x13E4F8u;
    {
        const bool branch_taken_0x13e4f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4F8u;
            // 0x13e4fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4f8) {
            ctx->pc = 0x13E538u;
            goto label_13e538;
        }
    }
    ctx->pc = 0x13E500u;
    // 0x13e500: 0x27a401d1  addiu       $a0, $sp, 0x1D1
    ctx->pc = 0x13e500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x13e504: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x13e504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x13e508: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13e508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13e50c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e510: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e514: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e518: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13e518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e51c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e520: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e524: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e524u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e528: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13E528u;
    {
        const bool branch_taken_0x13e528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E528u;
            // 0x13e52c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e528) {
            ctx->pc = 0x13E59Cu;
            goto label_13e59c;
        }
    }
    ctx->pc = 0x13E530u;
    // 0x13e530: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13E530u;
    {
        const bool branch_taken_0x13e530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E530u;
            // 0x13e534: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e530) {
            ctx->pc = 0x13E584u;
            goto label_13e584;
        }
    }
    ctx->pc = 0x13E538u;
label_13e538:
    // 0x13e538: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x13e538u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)2u)));
    // 0x13e53c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13E53Cu;
    {
        const bool branch_taken_0x13e53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E53Cu;
            // 0x13e540: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e53c) {
            ctx->pc = 0x13E5A0u;
            goto label_13e5a0;
        }
    }
    ctx->pc = 0x13E544u;
    // 0x13e544: 0xa3b701c1  sb          $s7, 0x1C1($sp)
    ctx->pc = 0x13e544u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 23));
    // 0x13e548: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x13e548u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x13e54c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e550: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x13e550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x13e554: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13e554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13e558: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x13e558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x13e55c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e560: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13e560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e564: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e568: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x13e568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x13e56c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e570: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x13e570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x13e574: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x13e574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e578: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E578u;
    {
        const bool branch_taken_0x13e578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E578u;
            // 0x13e57c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e578) {
            ctx->pc = 0x13E59Cu;
            goto label_13e59c;
        }
    }
    ctx->pc = 0x13E580u;
    // 0x13e580: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_13e584:
    // 0x13e584: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E584u;
    SET_GPR_U32(ctx, 31, 0x13E58Cu);
    ctx->pc = 0x13E588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E584u;
            // 0x13e588: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E58Cu; }
        if (ctx->pc != 0x13E58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E58Cu; }
        if (ctx->pc != 0x13E58Cu) { return; }
    }
    ctx->pc = 0x13E58Cu;
    // 0x13e58c: 0x14400290  bnez        $v0, . + 4 + (0x290 << 2)
    ctx->pc = 0x13E58Cu;
    {
        const bool branch_taken_0x13e58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E58Cu;
            // 0x13e590: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e58c) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E594u;
    // 0x13e594: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E594u;
    {
        const bool branch_taken_0x13e594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E594u;
            // 0x13e598: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e594) {
            ctx->pc = 0x13E5A0u;
            goto label_13e5a0;
        }
    }
    ctx->pc = 0x13E59Cu;
label_13e59c:
    // 0x13e59c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x13e59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_13e5a0:
    // 0x13e5a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x13e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13e5a4: 0x16c20035  bne         $s6, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x13E5A4u;
    {
        const bool branch_taken_0x13e5a4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5A4u;
            // 0x13e5a8: 0x8fa6020c  lw          $a2, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5a4) {
            ctx->pc = 0x13E67Cu;
            goto label_13e67c;
        }
    }
    ctx->pc = 0x13E5ACu;
    // 0x13e5ac: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x13e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x13e5b0: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x13e5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x13e5b4: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x13e5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13e5b8: 0x1a000030  blez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x13E5B8u;
    {
        const bool branch_taken_0x13e5b8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13E5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5B8u;
            // 0x13e5bc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5b8) {
            ctx->pc = 0x13E67Cu;
            goto label_13e67c;
        }
    }
    ctx->pc = 0x13E5C0u;
    // 0x13e5c0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13E5C0u;
    {
        const bool branch_taken_0x13e5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5C0u;
            // 0x13e5c4: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5c0) {
            ctx->pc = 0x13E628u;
            goto label_13e628;
        }
    }
    ctx->pc = 0x13E5C8u;
    // 0x13e5c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E5C8u;
    {
        const bool branch_taken_0x13e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5C8u;
            // 0x13e5cc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5c8) {
            ctx->pc = 0x13E5D4u;
            goto label_13e5d4;
        }
    }
    ctx->pc = 0x13E5D0u;
label_13e5d0:
    // 0x13e5d0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_13e5d4:
    // 0x13e5d4: 0x26c4fcc0  addiu       $a0, $s6, -0x340
    ctx->pc = 0x13e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13e5d8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x13e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x13e5dc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13e5e0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e5e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e5e8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e5ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13e5f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e5f4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e5f8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e5f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e5fc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E5FCu;
    {
        const bool branch_taken_0x13e5fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5FCu;
            // 0x13e600: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5fc) {
            ctx->pc = 0x13E618u;
            goto label_13e618;
        }
    }
    ctx->pc = 0x13E604u;
    // 0x13e604: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e608: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E608u;
    SET_GPR_U32(ctx, 31, 0x13E610u);
    ctx->pc = 0x13E60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E608u;
            // 0x13e60c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E610u; }
        if (ctx->pc != 0x13E610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E610u; }
        if (ctx->pc != 0x13E610u) { return; }
    }
    ctx->pc = 0x13E610u;
    // 0x13e610: 0x1440026f  bnez        $v0, . + 4 + (0x26F << 2)
    ctx->pc = 0x13E610u;
    {
        const bool branch_taken_0x13e610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E610u;
            // 0x13e614: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e610) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E618u;
label_13e618:
    // 0x13e618: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x13e618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13e61c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x13e61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x13e620: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13E620u;
    {
        const bool branch_taken_0x13e620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E620u;
            // 0x13e624: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e620) {
            ctx->pc = 0x13E5D0u;
            goto label_13e5d0;
        }
    }
    ctx->pc = 0x13E628u;
label_13e628:
    // 0x13e628: 0x26c2fcc0  addiu       $v0, $s6, -0x340
    ctx->pc = 0x13e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13e62c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x13e630: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13e630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13e634: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e638: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e63c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e644: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13e644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13e648: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e648u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e64c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e650: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E650u;
    {
        const bool branch_taken_0x13e650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E650u;
            // 0x13e654: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e650) {
            ctx->pc = 0x13E674u;
            goto label_13e674;
        }
    }
    ctx->pc = 0x13E658u;
    // 0x13e658: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e65c: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E65Cu;
    SET_GPR_U32(ctx, 31, 0x13E664u);
    ctx->pc = 0x13E660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E65Cu;
            // 0x13e660: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E664u; }
        if (ctx->pc != 0x13E664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E664u; }
        if (ctx->pc != 0x13E664u) { return; }
    }
    ctx->pc = 0x13E664u;
    // 0x13e664: 0x1440025a  bnez        $v0, . + 4 + (0x25A << 2)
    ctx->pc = 0x13E664u;
    {
        const bool branch_taken_0x13e664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E664u;
            // 0x13e668: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e664) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E66Cu;
    // 0x13e66c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E66Cu;
    {
        const bool branch_taken_0x13e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E66Cu;
            // 0x13e670: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e66c) {
            ctx->pc = 0x13E678u;
            goto label_13e678;
        }
    }
    ctx->pc = 0x13E674u;
label_13e674:
    // 0x13e674: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x13e674u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_13e678:
    // 0x13e678: 0x8fa6020c  lw          $a2, 0x20C($sp)
    ctx->pc = 0x13e678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_13e67c:
    // 0x13e67c: 0xd58023  subu        $s0, $a2, $s5
    ctx->pc = 0x13e67cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x13e680: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x13E680u;
    {
        const bool branch_taken_0x13e680 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E680u;
            // 0x13e684: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e680) {
            ctx->pc = 0x13E740u;
            goto label_13e740;
        }
    }
    ctx->pc = 0x13E688u;
    // 0x13e688: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13E688u;
    {
        const bool branch_taken_0x13e688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E688u;
            // 0x13e68c: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e688) {
            ctx->pc = 0x13E6F0u;
            goto label_13e6f0;
        }
    }
    ctx->pc = 0x13E690u;
    // 0x13e690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E690u;
    {
        const bool branch_taken_0x13e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E690u;
            // 0x13e694: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e690) {
            ctx->pc = 0x13E69Cu;
            goto label_13e69c;
        }
    }
    ctx->pc = 0x13E698u;
label_13e698:
    // 0x13e698: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_13e69c:
    // 0x13e69c: 0x26c4fcc0  addiu       $a0, $s6, -0x340
    ctx->pc = 0x13e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13e6a0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x13e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x13e6a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13e6a8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e6ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e6b0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e6b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13e6b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e6bc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e6c0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e6c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e6c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E6C4u;
    {
        const bool branch_taken_0x13e6c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E6C4u;
            // 0x13e6c8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6c4) {
            ctx->pc = 0x13E6E0u;
            goto label_13e6e0;
        }
    }
    ctx->pc = 0x13E6CCu;
    // 0x13e6cc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e6d0: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E6D0u;
    SET_GPR_U32(ctx, 31, 0x13E6D8u);
    ctx->pc = 0x13E6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E6D0u;
            // 0x13e6d4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E6D8u; }
        if (ctx->pc != 0x13E6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E6D8u; }
        if (ctx->pc != 0x13E6D8u) { return; }
    }
    ctx->pc = 0x13E6D8u;
    // 0x13e6d8: 0x1440023d  bnez        $v0, . + 4 + (0x23D << 2)
    ctx->pc = 0x13E6D8u;
    {
        const bool branch_taken_0x13e6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E6D8u;
            // 0x13e6dc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6d8) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E6E0u;
label_13e6e0:
    // 0x13e6e0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x13e6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13e6e4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x13e6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x13e6e8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13E6E8u;
    {
        const bool branch_taken_0x13e6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E6E8u;
            // 0x13e6ec: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6e8) {
            ctx->pc = 0x13E698u;
            goto label_13e698;
        }
    }
    ctx->pc = 0x13E6F0u;
label_13e6f0:
    // 0x13e6f0: 0x26c2fcc0  addiu       $v0, $s6, -0x340
    ctx->pc = 0x13e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13e6f4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x13e6f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13e6fc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e700: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e704: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e708: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e70c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13e710: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e710u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e714: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e718: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E718u;
    {
        const bool branch_taken_0x13e718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E718u;
            // 0x13e71c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e718) {
            ctx->pc = 0x13E73Cu;
            goto label_13e73c;
        }
    }
    ctx->pc = 0x13E720u;
    // 0x13e720: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e724: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E724u;
    SET_GPR_U32(ctx, 31, 0x13E72Cu);
    ctx->pc = 0x13E728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E724u;
            // 0x13e728: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E72Cu; }
        if (ctx->pc != 0x13E72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E72Cu; }
        if (ctx->pc != 0x13E72Cu) { return; }
    }
    ctx->pc = 0x13E72Cu;
    // 0x13e72c: 0x14400228  bnez        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x13E72Cu;
    {
        const bool branch_taken_0x13e72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E72Cu;
            // 0x13e730: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e72c) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E734u;
    // 0x13e734: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E734u;
    {
        const bool branch_taken_0x13e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E734u;
            // 0x13e738: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e734) {
            ctx->pc = 0x13E740u;
            goto label_13e740;
        }
    }
    ctx->pc = 0x13E73Cu;
label_13e73c:
    // 0x13e73c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x13e73cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_13e740:
    // 0x13e740: 0x33c20100  andi        $v0, $fp, 0x100
    ctx->pc = 0x13e740u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)256u)));
    // 0x13e744: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E744u;
    {
        const bool branch_taken_0x13e744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e744) {
            ctx->pc = 0x13E748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E744u;
            // 0x13e748: 0x2ae20066  slti        $v0, $s7, 0x66 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E768u;
            goto label_13e768;
        }
    }
    ctx->pc = 0x13E74Cu;
    // 0x13e74c: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x13e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x13e750: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x13e750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x13e754: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e758: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e75c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x13e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e760: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x13E760u;
    {
        const bool branch_taken_0x13e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E760u;
            // 0x13e764: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e760) {
            ctx->pc = 0x13EE70u;
            goto label_13ee70;
        }
    }
    ctx->pc = 0x13E768u;
label_13e768:
    // 0x13e768: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x13E768u;
    {
        const bool branch_taken_0x13e768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E768u;
            // 0x13e76c: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e768) {
            ctx->pc = 0x13ECA4u;
            goto label_13eca4;
        }
    }
    ctx->pc = 0x13E770u;
    // 0x13e770: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x13e770u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x13e774: 0xc0409ca  jal         func_102728
    ctx->pc = 0x13E774u;
    SET_GPR_U32(ctx, 31, 0x13E77Cu);
    ctx->pc = 0x13E778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E774u;
            // 0x13e778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E77Cu; }
        if (ctx->pc != 0x13E77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E77Cu; }
        if (ctx->pc != 0x13E77Cu) { return; }
    }
    ctx->pc = 0x13E77Cu;
    // 0x13e77c: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x13E77Cu;
    {
        const bool branch_taken_0x13e77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E77Cu;
            // 0x13e780: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e77c) {
            ctx->pc = 0x13E8E0u;
            goto label_13e8e0;
        }
    }
    ctx->pc = 0x13E784u;
    // 0x13e784: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13e784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13e788: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13e788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e78c: 0x2442fd38  addiu       $v0, $v0, -0x2C8
    ctx->pc = 0x13e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966584));
    // 0x13e790: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13e790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x13e794: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13e794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13e798: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e79c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e7a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e7a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e7ac: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e7acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e7b0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e7b4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E7B4u;
    {
        const bool branch_taken_0x13e7b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7B4u;
            // 0x13e7b8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7b4) {
            ctx->pc = 0x13E7D0u;
            goto label_13e7d0;
        }
    }
    ctx->pc = 0x13E7BCu;
    // 0x13e7bc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e7c0: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E7C0u;
    SET_GPR_U32(ctx, 31, 0x13E7C8u);
    ctx->pc = 0x13E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7C0u;
            // 0x13e7c4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E7C8u; }
        if (ctx->pc != 0x13E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E7C8u; }
        if (ctx->pc != 0x13E7C8u) { return; }
    }
    ctx->pc = 0x13E7C8u;
    // 0x13e7c8: 0x14400201  bnez        $v0, . + 4 + (0x201 << 2)
    ctx->pc = 0x13E7C8u;
    {
        const bool branch_taken_0x13e7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7C8u;
            // 0x13e7cc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7c8) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E7D0u;
label_13e7d0:
    // 0x13e7d0: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x13e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x13e7d4: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x13e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x13e7d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x13e7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e7dc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E7DCu;
    {
        const bool branch_taken_0x13e7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e7dc) {
            ctx->pc = 0x13E7E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7DCu;
            // 0x13e7e0: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E7F4u;
            goto label_13e7f4;
        }
    }
    ctx->pc = 0x13E7E4u;
    // 0x13e7e4: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x13e7e4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x13e7e8: 0x104001ad  beqz        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x13E7E8u;
    {
        const bool branch_taken_0x13e7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7E8u;
            // 0x13e7ec: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e7e8) {
            ctx->pc = 0x13EEA0u;
            goto label_13eea0;
        }
    }
    ctx->pc = 0x13E7F0u;
    // 0x13e7f0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_13e7f4:
    // 0x13e7f4: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x13e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x13e7f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13e7fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e800: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13e800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13e804: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x13e804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e80c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e810: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x13e810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x13e814: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x13e814u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e818: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E818u;
    {
        const bool branch_taken_0x13e818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E818u;
            // 0x13e81c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e818) {
            ctx->pc = 0x13E834u;
            goto label_13e834;
        }
    }
    ctx->pc = 0x13E820u;
    // 0x13e820: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e824: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E824u;
    SET_GPR_U32(ctx, 31, 0x13E82Cu);
    ctx->pc = 0x13E828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E824u;
            // 0x13e828: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E82Cu; }
        if (ctx->pc != 0x13E82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E82Cu; }
        if (ctx->pc != 0x13E82Cu) { return; }
    }
    ctx->pc = 0x13E82Cu;
    // 0x13e82c: 0x144001e8  bnez        $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x13E82Cu;
    {
        const bool branch_taken_0x13e82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E82Cu;
            // 0x13e830: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e82c) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E834u;
label_13e834:
    // 0x13e834: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x13e834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x13e838: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x13e838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13e83c: 0x1a000197  blez        $s0, . + 4 + (0x197 << 2)
    ctx->pc = 0x13E83Cu;
    {
        const bool branch_taken_0x13e83c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13E840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E83Cu;
            // 0x13e840: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e83c) {
            ctx->pc = 0x13EE9Cu;
            goto label_13ee9c;
        }
    }
    ctx->pc = 0x13E844u;
    // 0x13e844: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x13E844u;
    {
        const bool branch_taken_0x13e844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E844u;
            // 0x13e848: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e844) {
            ctx->pc = 0x13E8B0u;
            goto label_13e8b0;
        }
    }
    ctx->pc = 0x13E84Cu;
    // 0x13e84c: 0x0  nop
    ctx->pc = 0x13e84cu;
    // NOP
label_13e850:
    // 0x13e850: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13e850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13e854: 0x26c4fcc0  addiu       $a0, $s6, -0x340
    ctx->pc = 0x13e854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13e858: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x13e858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x13e85c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13e860: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13e860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13e864: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e868: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e86c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13e870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e874: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e878: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e878u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e87c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E87Cu;
    {
        const bool branch_taken_0x13e87c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E87Cu;
            // 0x13e880: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e87c) {
            ctx->pc = 0x13E898u;
            goto label_13e898;
        }
    }
    ctx->pc = 0x13E884u;
    // 0x13e884: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e888: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E888u;
    SET_GPR_U32(ctx, 31, 0x13E890u);
    ctx->pc = 0x13E88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E888u;
            // 0x13e88c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E890u; }
        if (ctx->pc != 0x13E890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E890u; }
        if (ctx->pc != 0x13E890u) { return; }
    }
    ctx->pc = 0x13E890u;
    // 0x13e890: 0x144001cf  bnez        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x13E890u;
    {
        const bool branch_taken_0x13e890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E890u;
            // 0x13e894: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e890) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E898u;
label_13e898:
    // 0x13e898: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x13e898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13e89c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x13e89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x13e8a0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13E8A0u;
    {
        const bool branch_taken_0x13e8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8A0u;
            // 0x13e8a4: 0x26c2fcc0  addiu       $v0, $s6, -0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8a0) {
            ctx->pc = 0x13E850u;
            goto label_13e850;
        }
    }
    ctx->pc = 0x13E8A8u;
    // 0x13e8a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E8A8u;
    {
        const bool branch_taken_0x13e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8A8u;
            // 0x13e8ac: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8a8) {
            ctx->pc = 0x13E8B8u;
            goto label_13e8b8;
        }
    }
    ctx->pc = 0x13E8B0u;
label_13e8b0:
    // 0x13e8b0: 0x26c2fcc0  addiu       $v0, $s6, -0x340
    ctx->pc = 0x13e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13e8b4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_13e8b8:
    // 0x13e8b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13e8bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e8c0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13e8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13e8c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e8c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e8cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13e8d0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e8d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e8d4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e8d8: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x13E8D8u;
    {
        const bool branch_taken_0x13e8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8D8u;
            // 0x13e8dc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8d8) {
            ctx->pc = 0x13EE80u;
            goto label_13ee80;
        }
    }
    ctx->pc = 0x13E8E0u;
label_13e8e0:
    // 0x13e8e0: 0x1c600063  bgtz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x13E8E0u;
    {
        const bool branch_taken_0x13e8e0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x13E8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E8E0u;
            // 0x13e8e4: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8e0) {
            ctx->pc = 0x13EA70u;
            goto label_13ea70;
        }
    }
    ctx->pc = 0x13E8E8u;
    // 0x13e8e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13e8ec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13e8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e8f0: 0x2442fd38  addiu       $v0, $v0, -0x2C8
    ctx->pc = 0x13e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966584));
    // 0x13e8f4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x13e8f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13e8fc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e900: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13e900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e904: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e908: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e90c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e910: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e910u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e914: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e918: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E918u;
    {
        const bool branch_taken_0x13e918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E918u;
            // 0x13e91c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e918) {
            ctx->pc = 0x13E934u;
            goto label_13e934;
        }
    }
    ctx->pc = 0x13E920u;
    // 0x13e920: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e924: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E924u;
    SET_GPR_U32(ctx, 31, 0x13E92Cu);
    ctx->pc = 0x13E928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E924u;
            // 0x13e928: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E92Cu; }
        if (ctx->pc != 0x13E92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E92Cu; }
        if (ctx->pc != 0x13E92Cu) { return; }
    }
    ctx->pc = 0x13E92Cu;
    // 0x13e92c: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x13E92Cu;
    {
        const bool branch_taken_0x13e92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E92Cu;
            // 0x13e930: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e92c) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E934u;
label_13e934:
    // 0x13e934: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13e934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x13e938: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x13e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x13e93c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x13e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x13e940: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x13e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e944: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13e944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13e948: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e94c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e954: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x13e954u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e958: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x13e958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x13e95c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E95Cu;
    {
        const bool branch_taken_0x13e95c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E95Cu;
            // 0x13e960: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e95c) {
            ctx->pc = 0x13E978u;
            goto label_13e978;
        }
    }
    ctx->pc = 0x13E964u;
    // 0x13e964: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e968: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E968u;
    SET_GPR_U32(ctx, 31, 0x13E970u);
    ctx->pc = 0x13E96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E968u;
            // 0x13e96c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E970u; }
        if (ctx->pc != 0x13E970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E970u; }
        if (ctx->pc != 0x13E970u) { return; }
    }
    ctx->pc = 0x13E970u;
    // 0x13e970: 0x14400197  bnez        $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x13E970u;
    {
        const bool branch_taken_0x13e970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E970u;
            // 0x13e974: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e970) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E978u;
label_13e978:
    // 0x13e978: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x13e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x13e97c: 0x28023  negu        $s0, $v0
    ctx->pc = 0x13e97cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x13e980: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x13E980u;
    {
        const bool branch_taken_0x13e980 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13E984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E980u;
            // 0x13e984: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e980) {
            ctx->pc = 0x13EA34u;
            goto label_13ea34;
        }
    }
    ctx->pc = 0x13E988u;
    // 0x13e988: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13E988u;
    {
        const bool branch_taken_0x13e988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E988u;
            // 0x13e98c: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e988) {
            ctx->pc = 0x13E9F0u;
            goto label_13e9f0;
        }
    }
    ctx->pc = 0x13E990u;
label_13e990:
    // 0x13e990: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13e994: 0x26c4fcc0  addiu       $a0, $s6, -0x340
    ctx->pc = 0x13e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13e998: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x13e998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x13e99c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13e9a0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13e9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13e9a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13e9a8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13e9ac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13e9b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e9b4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13e9b8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13e9b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e9bc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E9BCu;
    {
        const bool branch_taken_0x13e9bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9BCu;
            // 0x13e9c0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9bc) {
            ctx->pc = 0x13E9D8u;
            goto label_13e9d8;
        }
    }
    ctx->pc = 0x13E9C4u;
    // 0x13e9c4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13e9c8: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13E9C8u;
    SET_GPR_U32(ctx, 31, 0x13E9D0u);
    ctx->pc = 0x13E9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9C8u;
            // 0x13e9cc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E9D0u; }
        if (ctx->pc != 0x13E9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E9D0u; }
        if (ctx->pc != 0x13E9D0u) { return; }
    }
    ctx->pc = 0x13E9D0u;
    // 0x13e9d0: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x13E9D0u;
    {
        const bool branch_taken_0x13e9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9D0u;
            // 0x13e9d4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9d0) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13E9D8u;
label_13e9d8:
    // 0x13e9d8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x13e9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13e9dc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x13e9dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x13e9e0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13E9E0u;
    {
        const bool branch_taken_0x13e9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9E0u;
            // 0x13e9e4: 0x26c2fcc0  addiu       $v0, $s6, -0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9e0) {
            ctx->pc = 0x13E990u;
            goto label_13e990;
        }
    }
    ctx->pc = 0x13E9E8u;
    // 0x13e9e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E9E8u;
    {
        const bool branch_taken_0x13e9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E9E8u;
            // 0x13e9ec: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9e8) {
            ctx->pc = 0x13E9F8u;
            goto label_13e9f8;
        }
    }
    ctx->pc = 0x13E9F0u;
label_13e9f0:
    // 0x13e9f0: 0x26c2fcc0  addiu       $v0, $s6, -0x340
    ctx->pc = 0x13e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13e9f4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_13e9f8:
    // 0x13e9f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13e9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13e9fc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ea00: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13ea00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13ea04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ea08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ea0c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13ea10: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13ea10u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ea14: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13ea18: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EA18u;
    {
        const bool branch_taken_0x13ea18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA18u;
            // 0x13ea1c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea18) {
            ctx->pc = 0x13EA34u;
            goto label_13ea34;
        }
    }
    ctx->pc = 0x13EA20u;
    // 0x13ea20: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13ea24: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EA24u;
    SET_GPR_U32(ctx, 31, 0x13EA2Cu);
    ctx->pc = 0x13EA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA24u;
            // 0x13ea28: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA2Cu; }
        if (ctx->pc != 0x13EA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EA2Cu; }
        if (ctx->pc != 0x13EA2Cu) { return; }
    }
    ctx->pc = 0x13EA2Cu;
    // 0x13ea2c: 0x14400168  bnez        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x13EA2Cu;
    {
        const bool branch_taken_0x13ea2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA2Cu;
            // 0x13ea30: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea2c) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EA34u;
label_13ea34:
    // 0x13ea34: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x13ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x13ea38: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x13ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x13ea3c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13ea40: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13ea40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13ea44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ea48: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ea4c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x13ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x13ea50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ea54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13ea58: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x13ea58u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ea5c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13ea60: 0x14a0010e  bnez        $a1, . + 4 + (0x10E << 2)
    ctx->pc = 0x13EA60u;
    {
        const bool branch_taken_0x13ea60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA60u;
            // 0x13ea64: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea60) {
            ctx->pc = 0x13EE9Cu;
            goto label_13ee9c;
        }
    }
    ctx->pc = 0x13EA68u;
    // 0x13ea68: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x13EA68u;
    {
        const bool branch_taken_0x13ea68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA68u;
            // 0x13ea6c: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea68) {
            ctx->pc = 0x13EE8Cu;
            goto label_13ee8c;
        }
    }
    ctx->pc = 0x13EA70u;
label_13ea70:
    // 0x13ea70: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x13ea70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13ea74: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x13EA74u;
    {
        const bool branch_taken_0x13ea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea74) {
            ctx->pc = 0x13EA78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13EA74u;
            // 0x13ea78: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13EBC4u;
            goto label_13ebc4;
        }
    }
    ctx->pc = 0x13EA7Cu;
    // 0x13ea7c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x13ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x13ea80: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x13ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x13ea84: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13ea84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ea88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ea8c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x13ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ea90: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x13ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x13ea94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13ea98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13ea9c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x13ea9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13eaa0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x13eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x13eaa4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EAA4u;
    {
        const bool branch_taken_0x13eaa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EAA4u;
            // 0x13eaa8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eaa4) {
            ctx->pc = 0x13EAC4u;
            goto label_13eac4;
        }
    }
    ctx->pc = 0x13EAACu;
    // 0x13eaac: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13eab0: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EAB0u;
    SET_GPR_U32(ctx, 31, 0x13EAB8u);
    ctx->pc = 0x13EAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EAB0u;
            // 0x13eab4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EAB8u; }
        if (ctx->pc != 0x13EAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EAB8u; }
        if (ctx->pc != 0x13EAB8u) { return; }
    }
    ctx->pc = 0x13EAB8u;
    // 0x13eab8: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x13EAB8u;
    {
        const bool branch_taken_0x13eab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EAB8u;
            // 0x13eabc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eab8) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EAC0u;
    // 0x13eac0: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x13eac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_13eac4:
    // 0x13eac4: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x13eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x13eac8: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x13eac8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13eacc: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x13EACCu;
    {
        const bool branch_taken_0x13eacc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13EAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EACCu;
            // 0x13ead0: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eacc) {
            ctx->pc = 0x13EB84u;
            goto label_13eb84;
        }
    }
    ctx->pc = 0x13EAD4u;
    // 0x13ead4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x13EAD4u;
    {
        const bool branch_taken_0x13ead4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EAD4u;
            // 0x13ead8: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ead4) {
            ctx->pc = 0x13EB40u;
            goto label_13eb40;
        }
    }
    ctx->pc = 0x13EADCu;
    // 0x13eadc: 0x0  nop
    ctx->pc = 0x13eadcu;
    // NOP
label_13eae0:
    // 0x13eae0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13eae4: 0x26c4fcc0  addiu       $a0, $s6, -0x340
    ctx->pc = 0x13eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13eae8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x13eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x13eaec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13eaf0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13eaf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13eaf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13eaf8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13eafc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13eb00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13eb04: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13eb08: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13eb08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13eb0c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EB0Cu;
    {
        const bool branch_taken_0x13eb0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB0Cu;
            // 0x13eb10: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb0c) {
            ctx->pc = 0x13EB28u;
            goto label_13eb28;
        }
    }
    ctx->pc = 0x13EB14u;
    // 0x13eb14: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13eb18: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EB18u;
    SET_GPR_U32(ctx, 31, 0x13EB20u);
    ctx->pc = 0x13EB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB18u;
            // 0x13eb1c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB20u; }
        if (ctx->pc != 0x13EB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB20u; }
        if (ctx->pc != 0x13EB20u) { return; }
    }
    ctx->pc = 0x13EB20u;
    // 0x13eb20: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x13EB20u;
    {
        const bool branch_taken_0x13eb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB20u;
            // 0x13eb24: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb20) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EB28u;
label_13eb28:
    // 0x13eb28: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x13eb28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13eb2c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x13eb2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x13eb30: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13EB30u;
    {
        const bool branch_taken_0x13eb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB30u;
            // 0x13eb34: 0x26c2fcc0  addiu       $v0, $s6, -0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb30) {
            ctx->pc = 0x13EAE0u;
            goto label_13eae0;
        }
    }
    ctx->pc = 0x13EB38u;
    // 0x13eb38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13EB38u;
    {
        const bool branch_taken_0x13eb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB38u;
            // 0x13eb3c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb38) {
            ctx->pc = 0x13EB48u;
            goto label_13eb48;
        }
    }
    ctx->pc = 0x13EB40u;
label_13eb40:
    // 0x13eb40: 0x26c2fcc0  addiu       $v0, $s6, -0x340
    ctx->pc = 0x13eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13eb44: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_13eb48:
    // 0x13eb48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13eb4c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13eb50: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13eb50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13eb54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13eb58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13eb5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13eb60: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13eb60u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13eb64: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13eb68: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EB68u;
    {
        const bool branch_taken_0x13eb68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB68u;
            // 0x13eb6c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb68) {
            ctx->pc = 0x13EB84u;
            goto label_13eb84;
        }
    }
    ctx->pc = 0x13EB70u;
    // 0x13eb70: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13eb74: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EB74u;
    SET_GPR_U32(ctx, 31, 0x13EB7Cu);
    ctx->pc = 0x13EB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB74u;
            // 0x13eb78: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB7Cu; }
        if (ctx->pc != 0x13EB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB7Cu; }
        if (ctx->pc != 0x13EB7Cu) { return; }
    }
    ctx->pc = 0x13EB7Cu;
    // 0x13eb7c: 0x14400114  bnez        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x13EB7Cu;
    {
        const bool branch_taken_0x13eb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB7Cu;
            // 0x13eb80: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb7c) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EB84u;
label_13eb84:
    // 0x13eb84: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x13eb84u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x13eb88: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x13EB88u;
    {
        const bool branch_taken_0x13eb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB88u;
            // 0x13eb8c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb88) {
            ctx->pc = 0x13EE9Cu;
            goto label_13ee9c;
        }
    }
    ctx->pc = 0x13EB90u;
    // 0x13eb90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13eb94: 0x2442fd40  addiu       $v0, $v0, -0x2C0
    ctx->pc = 0x13eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966592));
    // 0x13eb98: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x13eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x13eb9c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13eba0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13eba4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13eba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13eba8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ebac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ebb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13ebb4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13ebb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ebb8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13ebbc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x13EBBCu;
    {
        const bool branch_taken_0x13ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBBCu;
            // 0x13ebc0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebbc) {
            ctx->pc = 0x13EE80u;
            goto label_13ee80;
        }
    }
    ctx->pc = 0x13EBC4u;
label_13ebc4:
    // 0x13ebc4: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x13ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x13ebc8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13ebc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ebcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ebd0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x13ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ebd4: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x13ebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x13ebd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13ebdc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13ebe0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x13ebe0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ebe4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x13ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x13ebe8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EBE8u;
    {
        const bool branch_taken_0x13ebe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBE8u;
            // 0x13ebec: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebe8) {
            ctx->pc = 0x13EC08u;
            goto label_13ec08;
        }
    }
    ctx->pc = 0x13EBF0u;
    // 0x13ebf0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13ebf4: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EBF4u;
    SET_GPR_U32(ctx, 31, 0x13EBFCu);
    ctx->pc = 0x13EBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBF4u;
            // 0x13ebf8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EBFCu; }
        if (ctx->pc != 0x13EBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EBFCu; }
        if (ctx->pc != 0x13EBFCu) { return; }
    }
    ctx->pc = 0x13EBFCu;
    // 0x13ebfc: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x13EBFCu;
    {
        const bool branch_taken_0x13ebfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBFCu;
            // 0x13ec00: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebfc) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EC04u;
    // 0x13ec04: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x13ec04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_13ec08:
    // 0x13ec08: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13ec0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ec10: 0x2442fd40  addiu       $v0, $v0, -0x2C0
    ctx->pc = 0x13ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966592));
    // 0x13ec14: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x13ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x13ec18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13ec1c: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x13ec1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x13ec20: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ec24: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13ec24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13ec28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ec2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ec30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13ec34: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13ec34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ec38: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13ec38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13ec3c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EC3Cu;
    {
        const bool branch_taken_0x13ec3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC3Cu;
            // 0x13ec40: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec3c) {
            ctx->pc = 0x13EC58u;
            goto label_13ec58;
        }
    }
    ctx->pc = 0x13EC44u;
    // 0x13ec44: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13ec48: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EC48u;
    SET_GPR_U32(ctx, 31, 0x13EC50u);
    ctx->pc = 0x13EC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC48u;
            // 0x13ec4c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC50u; }
        if (ctx->pc != 0x13EC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EC50u; }
        if (ctx->pc != 0x13EC50u) { return; }
    }
    ctx->pc = 0x13EC50u;
    // 0x13ec50: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x13EC50u;
    {
        const bool branch_taken_0x13ec50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC50u;
            // 0x13ec54: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec50) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EC58u;
label_13ec58:
    // 0x13ec58: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x13ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x13ec5c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x13ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x13ec60: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x13ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x13ec64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ec68: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13ec6c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13ec6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13ec70: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x13ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x13ec74: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x13ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x13ec78: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x13ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ec7c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ec80: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x13ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13ec84: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13ec88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ec8c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x13ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x13ec90: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x13ec90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ec94: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x13EC94u;
    {
        const bool branch_taken_0x13ec94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC94u;
            // 0x13ec98: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec94) {
            ctx->pc = 0x13EE9Cu;
            goto label_13ee9c;
        }
    }
    ctx->pc = 0x13EC9Cu;
    // 0x13ec9c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x13EC9Cu;
    {
        const bool branch_taken_0x13ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ECA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EC9Cu;
            // 0x13eca0: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec9c) {
            ctx->pc = 0x13EE8Cu;
            goto label_13ee8c;
        }
    }
    ctx->pc = 0x13ECA4u;
label_13eca4:
    // 0x13eca4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x13eca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13eca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13ECA8u;
    {
        const bool branch_taken_0x13eca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECA8u;
            // 0x13ecac: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eca8) {
            ctx->pc = 0x13ECB8u;
            goto label_13ecb8;
        }
    }
    ctx->pc = 0x13ECB0u;
    // 0x13ecb0: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x13ECB0u;
    {
        const bool branch_taken_0x13ecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECB0u;
            // 0x13ecb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ecb0) {
            ctx->pc = 0x13EE10u;
            goto label_13ee10;
        }
    }
    ctx->pc = 0x13ECB8u;
label_13ecb8:
    // 0x13ecb8: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x13ecb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13ecbc: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x13ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x13ecc0: 0xa3a201c1  sb          $v0, 0x1C1($sp)
    ctx->pc = 0x13ecc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 2));
    // 0x13ecc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ecc8: 0xa3a401c0  sb          $a0, 0x1C0($sp)
    ctx->pc = 0x13ecc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 4));
    // 0x13eccc: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x13ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x13ecd0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x13ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x13ecd4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13ecd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13ecd8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13ecdc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ece0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13ece0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ece4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ece8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ecec: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x13ececu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x13ecf0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13ecf0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ecf4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13ecf8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13ECF8u;
    {
        const bool branch_taken_0x13ecf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13ECFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ECF8u;
            // 0x13ecfc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ecf8) {
            ctx->pc = 0x13ED14u;
            goto label_13ed14;
        }
    }
    ctx->pc = 0x13ED00u;
    // 0x13ed00: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13ed04: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13ED04u;
    SET_GPR_U32(ctx, 31, 0x13ED0Cu);
    ctx->pc = 0x13ED08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED04u;
            // 0x13ed08: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED0Cu; }
        if (ctx->pc != 0x13ED0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED0Cu; }
        if (ctx->pc != 0x13ED0Cu) { return; }
    }
    ctx->pc = 0x13ED0Cu;
    // 0x13ed0c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x13ED0Cu;
    {
        const bool branch_taken_0x13ed0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13ED10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED0Cu;
            // 0x13ed10: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed0c) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13ED14u;
label_13ed14:
    // 0x13ed14: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x13ed14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x13ed18: 0xc0409ca  jal         func_102728
    ctx->pc = 0x13ED18u;
    SET_GPR_U32(ctx, 31, 0x13ED20u);
    ctx->pc = 0x13ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED18u;
            // 0x13ed1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED20u; }
        if (ctx->pc != 0x13ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED20u; }
        if (ctx->pc != 0x13ED20u) { return; }
    }
    ctx->pc = 0x13ED20u;
    // 0x13ed20: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13ED20u;
    {
        const bool branch_taken_0x13ed20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED20u;
            // 0x13ed24: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed20) {
            ctx->pc = 0x13ED68u;
            goto label_13ed68;
        }
    }
    ctx->pc = 0x13ED28u;
    // 0x13ed28: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x13ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x13ed2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13ed30: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13ed34: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13ed34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13ed38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ed3c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x13ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ed40: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x13ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x13ed44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13ed48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13ed4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13ed50: 0x28650008  slti        $a1, $v1, 0x8
    ctx->pc = 0x13ed50u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ed54: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x13ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x13ed58: 0x14a0003e  bnez        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x13ED58u;
    {
        const bool branch_taken_0x13ed58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13ED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED58u;
            // 0x13ed5c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed58) {
            ctx->pc = 0x13EE54u;
            goto label_13ee54;
        }
    }
    ctx->pc = 0x13ED60u;
    // 0x13ed60: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x13ED60u;
    {
        const bool branch_taken_0x13ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ED64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED60u;
            // 0x13ed64: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed60) {
            ctx->pc = 0x13EE44u;
            goto label_13ee44;
        }
    }
    ctx->pc = 0x13ED68u;
label_13ed68:
    // 0x13ed68: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x13ed68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13ed6c: 0x1a000039  blez        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x13ED6Cu;
    {
        const bool branch_taken_0x13ed6c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13ED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED6Cu;
            // 0x13ed70: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed6c) {
            ctx->pc = 0x13EE54u;
            goto label_13ee54;
        }
    }
    ctx->pc = 0x13ED74u;
    // 0x13ed74: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x13ED74u;
    {
        const bool branch_taken_0x13ed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13ED74u;
            // 0x13ed78: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ed74) {
            ctx->pc = 0x13EDE0u;
            goto label_13ede0;
        }
    }
    ctx->pc = 0x13ED7Cu;
    // 0x13ed7c: 0x0  nop
    ctx->pc = 0x13ed7cu;
    // NOP
label_13ed80:
    // 0x13ed80: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13ed84: 0x26c4fcc0  addiu       $a0, $s6, -0x340
    ctx->pc = 0x13ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13ed88: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x13ed88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x13ed8c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13ed90: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13ed90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13ed94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ed98: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ed9c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13eda0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13eda4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13eda8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13eda8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13edac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EDACu;
    {
        const bool branch_taken_0x13edac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDACu;
            // 0x13edb0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edac) {
            ctx->pc = 0x13EDC8u;
            goto label_13edc8;
        }
    }
    ctx->pc = 0x13EDB4u;
    // 0x13edb4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13edb8: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EDB8u;
    SET_GPR_U32(ctx, 31, 0x13EDC0u);
    ctx->pc = 0x13EDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDB8u;
            // 0x13edbc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EDC0u; }
        if (ctx->pc != 0x13EDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EDC0u; }
        if (ctx->pc != 0x13EDC0u) { return; }
    }
    ctx->pc = 0x13EDC0u;
    // 0x13edc0: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x13EDC0u;
    {
        const bool branch_taken_0x13edc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDC0u;
            // 0x13edc4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edc0) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EDC8u;
label_13edc8:
    // 0x13edc8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x13edc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13edcc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x13edccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x13edd0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13EDD0u;
    {
        const bool branch_taken_0x13edd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDD0u;
            // 0x13edd4: 0x26c2fcc0  addiu       $v0, $s6, -0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edd0) {
            ctx->pc = 0x13ED80u;
            goto label_13ed80;
        }
    }
    ctx->pc = 0x13EDD8u;
    // 0x13edd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13EDD8u;
    {
        const bool branch_taken_0x13edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EDD8u;
            // 0x13eddc: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edd8) {
            ctx->pc = 0x13EDE8u;
            goto label_13ede8;
        }
    }
    ctx->pc = 0x13EDE0u;
label_13ede0:
    // 0x13ede0: 0x26c2fcc0  addiu       $v0, $s6, -0x340
    ctx->pc = 0x13ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966464));
    // 0x13ede4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_13ede8:
    // 0x13ede8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13edec: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13edf0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13edf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13edf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13edf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13edfc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13ee00: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13ee00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ee04: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13ee08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13EE08u;
    {
        const bool branch_taken_0x13ee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE08u;
            // 0x13ee0c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee08) {
            ctx->pc = 0x13EE38u;
            goto label_13ee38;
        }
    }
    ctx->pc = 0x13EE10u;
label_13ee10:
    // 0x13ee10: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x13ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x13ee14: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13ee18: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x13ee18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ee20: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x13ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ee24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ee28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13ee2c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x13ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x13ee30: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x13ee30u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ee34: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x13ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_13ee38:
    // 0x13ee38: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EE38u;
    {
        const bool branch_taken_0x13ee38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE38u;
            // 0x13ee3c: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee38) {
            ctx->pc = 0x13EE58u;
            goto label_13ee58;
        }
    }
    ctx->pc = 0x13EE40u;
    // 0x13ee40: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13ee40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_13ee44:
    // 0x13ee44: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EE44u;
    SET_GPR_U32(ctx, 31, 0x13EE4Cu);
    ctx->pc = 0x13EE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE44u;
            // 0x13ee48: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE4Cu; }
        if (ctx->pc != 0x13EE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE4Cu; }
        if (ctx->pc != 0x13EE4Cu) { return; }
    }
    ctx->pc = 0x13EE4Cu;
    // 0x13ee4c: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x13EE4Cu;
    {
        const bool branch_taken_0x13ee4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE4Cu;
            // 0x13ee50: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee4c) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EE54u;
label_13ee54:
    // 0x13ee54: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x13ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_13ee58:
    // 0x13ee58: 0xae3d0000  sw          $sp, 0x0($s1)
    ctx->pc = 0x13ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 29));
    // 0x13ee5c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x13ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x13ee60: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13ee60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13ee64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ee68: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x13ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ee6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13ee70:
    // 0x13ee70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13ee70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13ee74: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x13ee74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x13ee78: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x13ee78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ee7c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x13ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_13ee80:
    // 0x13ee80: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EE80u;
    {
        const bool branch_taken_0x13ee80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE80u;
            // 0x13ee84: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee80) {
            ctx->pc = 0x13EEA0u;
            goto label_13eea0;
        }
    }
    ctx->pc = 0x13EE88u;
    // 0x13ee88: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_13ee8c:
    // 0x13ee8c: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EE8Cu;
    SET_GPR_U32(ctx, 31, 0x13EE94u);
    ctx->pc = 0x13EE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE8Cu;
            // 0x13ee90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE94u; }
        if (ctx->pc != 0x13EE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE94u; }
        if (ctx->pc != 0x13EE94u) { return; }
    }
    ctx->pc = 0x13EE94u;
    // 0x13ee94: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x13EE94u;
    {
        const bool branch_taken_0x13ee94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE94u;
            // 0x13ee98: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee94) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EE9Cu;
label_13ee9c:
    // 0x13ee9c: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x13ee9cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)4u)));
label_13eea0:
    // 0x13eea0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x13EEA0u;
    {
        const bool branch_taken_0x13eea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEA0u;
            // 0x13eea4: 0x8fa501f4  lw          $a1, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eea0) {
            ctx->pc = 0x13EF68u;
            goto label_13ef68;
        }
    }
    ctx->pc = 0x13EEA8u;
    // 0x13eea8: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x13eea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x13eeac: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x13eeacu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13eeb0: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x13EEB0u;
    {
        const bool branch_taken_0x13eeb0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13EEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEB0u;
            // 0x13eeb4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eeb0) {
            ctx->pc = 0x13EF68u;
            goto label_13ef68;
        }
    }
    ctx->pc = 0x13EEB8u;
    // 0x13eeb8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13EEB8u;
    {
        const bool branch_taken_0x13eeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEB8u;
            // 0x13eebc: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eeb8) {
            ctx->pc = 0x13EF28u;
            goto label_13ef28;
        }
    }
    ctx->pc = 0x13EEC0u;
label_13eec0:
    // 0x13eec0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13eec4: 0x24c4fcb0  addiu       $a0, $a2, -0x350
    ctx->pc = 0x13eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966448));
    // 0x13eec8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x13eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x13eecc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x13eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13eed0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x13eed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x13eed4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13eed8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13eedc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13eee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13eee4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13eee8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13eee8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13eeec: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13EEECu;
    {
        const bool branch_taken_0x13eeec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEECu;
            // 0x13eef0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eeec) {
            ctx->pc = 0x13EF10u;
            goto label_13ef10;
        }
    }
    ctx->pc = 0x13EEF4u;
    // 0x13eef4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13eef8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x13eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13eefc: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EEFCu;
    SET_GPR_U32(ctx, 31, 0x13EF04u);
    ctx->pc = 0x13EF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEFCu;
            // 0x13ef00: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF04u; }
        if (ctx->pc != 0x13EF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF04u; }
        if (ctx->pc != 0x13EF04u) { return; }
    }
    ctx->pc = 0x13EF04u;
    // 0x13ef04: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x13EF04u;
    {
        const bool branch_taken_0x13ef04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF04u;
            // 0x13ef08: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef04) {
            ctx->pc = 0x13EFD0u;
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13EF0Cu;
    // 0x13ef0c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x13ef0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13ef10:
    // 0x13ef10: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x13ef10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13ef14: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x13ef14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x13ef18: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x13EF18u;
    {
        const bool branch_taken_0x13ef18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF18u;
            // 0x13ef1c: 0x24c2fcb0  addiu       $v0, $a2, -0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef18) {
            ctx->pc = 0x13EEC0u;
            goto label_13eec0;
        }
    }
    ctx->pc = 0x13EF20u;
    // 0x13ef20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13EF20u;
    {
        const bool branch_taken_0x13ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF20u;
            // 0x13ef24: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef20) {
            ctx->pc = 0x13EF30u;
            goto label_13ef30;
        }
    }
    ctx->pc = 0x13EF28u;
label_13ef28:
    // 0x13ef28: 0x24c2fcb0  addiu       $v0, $a2, -0x350
    ctx->pc = 0x13ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966448));
    // 0x13ef2c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x13ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_13ef30:
    // 0x13ef30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13ef30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13ef34: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x13ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13ef38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ef3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ef40: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13ef44: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x13ef44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13ef48: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x13ef4c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EF4Cu;
    {
        const bool branch_taken_0x13ef4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF4Cu;
            // 0x13ef50: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef4c) {
            ctx->pc = 0x13EF68u;
            goto label_13ef68;
        }
    }
    ctx->pc = 0x13EF54u;
    // 0x13ef54: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13ef58: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EF58u;
    SET_GPR_U32(ctx, 31, 0x13EF60u);
    ctx->pc = 0x13EF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF58u;
            // 0x13ef5c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF60u; }
        if (ctx->pc != 0x13EF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF60u; }
        if (ctx->pc != 0x13EF60u) { return; }
    }
    ctx->pc = 0x13EF60u;
    // 0x13ef60: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13EF60u;
    {
        const bool branch_taken_0x13ef60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF60u;
            // 0x13ef64: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef60) {
            ctx->pc = 0x13EFD4u;
            goto label_13efd4;
        }
    }
    ctx->pc = 0x13EF68u;
label_13ef68:
    // 0x13ef68: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x13ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x13ef6c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x13ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x13ef70: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x13ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x13ef74: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x13ef74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13ef78: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x13ef78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x13ef7c: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x13ef7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x13ef80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x13ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ef84: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x13ef84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x13ef88: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EF88u;
    {
        const bool branch_taken_0x13ef88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF88u;
            // 0x13ef8c: 0xafa601f0  sw          $a2, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef88) {
            ctx->pc = 0x13EFA4u;
            goto label_13efa4;
        }
    }
    ctx->pc = 0x13EF90u;
    // 0x13ef90: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x13ef90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x13ef94: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EF94u;
    SET_GPR_U32(ctx, 31, 0x13EF9Cu);
    ctx->pc = 0x13EF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF94u;
            // 0x13ef98: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF9Cu; }
        if (ctx->pc != 0x13EF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF9Cu; }
        if (ctx->pc != 0x13EF9Cu) { return; }
    }
    ctx->pc = 0x13EF9Cu;
    // 0x13ef9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13EF9Cu;
    {
        const bool branch_taken_0x13ef9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF9Cu;
            // 0x13efa0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef9c) {
            ctx->pc = 0x13EFD4u;
            goto label_13efd4;
        }
    }
    ctx->pc = 0x13EFA4u;
label_13efa4:
    // 0x13efa4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x13efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x13efa8: 0x1000fb0d  b           . + 4 + (-0x4F3 << 2)
    ctx->pc = 0x13EFA8u;
    {
        const bool branch_taken_0x13efa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFA8u;
            // 0x13efac: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efa8) {
            ctx->pc = 0x13DBE0u;
            goto label_13dbe0;
        }
    }
    ctx->pc = 0x13EFB0u;
label_13efb0:
    // 0x13efb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13efb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EFB4u;
    {
        const bool branch_taken_0x13efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFB4u;
            // 0x13efb8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efb4) {
            ctx->pc = 0x13EFCCu;
            goto label_13efcc;
        }
    }
    ctx->pc = 0x13EFBCu;
    // 0x13efbc: 0xc04f662  jal         func_13D988
    ctx->pc = 0x13EFBCu;
    SET_GPR_U32(ctx, 31, 0x13EFC4u);
    ctx->pc = 0x13EFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFBCu;
            // 0x13efc0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D988u;
    if (runtime->hasFunction(0x13D988u)) {
        auto targetFn = runtime->lookupFunction(0x13D988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EFC4u; }
        if (ctx->pc != 0x13EFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x13d988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EFC4u; }
        if (ctx->pc != 0x13EFC4u) { return; }
    }
    ctx->pc = 0x13EFC4u;
    // 0x13efc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EFC4u;
    {
        const bool branch_taken_0x13efc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFC4u;
            // 0x13efc8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efc4) {
            ctx->pc = 0x13EFD4u;
            goto label_13efd4;
        }
    }
    ctx->pc = 0x13EFCCu;
label_13efcc:
    // 0x13efcc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x13efccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_13efd0:
    // 0x13efd0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x13efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_13efd4:
    // 0x13efd4: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x13efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x13efd8: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x13efd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13efdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13efe0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x13efe0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64u)));
    // 0x13efe4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x13efe4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_13efe8:
    // 0x13efe8: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x13efe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_13efec:
    // 0x13efec: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x13efecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x13eff0: 0xdfb702a0  ld          $s7, 0x2A0($sp)
    ctx->pc = 0x13eff0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x13eff4: 0xdfb60290  ld          $s6, 0x290($sp)
    ctx->pc = 0x13eff4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x13eff8: 0xdfb50280  ld          $s5, 0x280($sp)
    ctx->pc = 0x13eff8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x13effc: 0xdfb40270  ld          $s4, 0x270($sp)
    ctx->pc = 0x13effcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x13f000: 0xdfb30260  ld          $s3, 0x260($sp)
    ctx->pc = 0x13f000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x13f004: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x13f004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x13f008: 0xdfb10240  ld          $s1, 0x240($sp)
    ctx->pc = 0x13f008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x13f00c: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x13f00cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x13f010: 0x3e00008  jr          $ra
    ctx->pc = 0x13F010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F010u;
            // 0x13f014: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DB6Cu: goto label_13db6c;
            case 0x13DB88u: goto label_13db88;
            case 0x13DBB8u: goto label_13dbb8;
            case 0x13DBE0u: goto label_13dbe0;
            case 0x13DBE8u: goto label_13dbe8;
            case 0x13DC2Cu: goto label_13dc2c;
            case 0x13DC7Cu: goto label_13dc7c;
            case 0x13DC88u: goto label_13dc88;
            case 0x13DCB4u: goto label_13dcb4;
            case 0x13DCBCu: goto label_13dcbc;
            case 0x13DCC0u: goto label_13dcc0;
            case 0x13DCC4u: goto label_13dcc4;
            case 0x13DCD8u: goto label_13dcd8;
            case 0x13DD00u: goto label_13dd00;
            case 0x13DD18u: goto label_13dd18;
            case 0x13DD28u: goto label_13dd28;
            case 0x13DD40u: goto label_13dd40;
            case 0x13DD4Cu: goto label_13dd4c;
            case 0x13DD54u: goto label_13dd54;
            case 0x13DD60u: goto label_13dd60;
            case 0x13DD98u: goto label_13dd98;
            case 0x13DDB0u: goto label_13ddb0;
            case 0x13DDD8u: goto label_13ddd8;
            case 0x13DDECu: goto label_13ddec;
            case 0x13DDF8u: goto label_13ddf8;
            case 0x13DE00u: goto label_13de00;
            case 0x13DE30u: goto label_13de30;
            case 0x13DE40u: goto label_13de40;
            case 0x13DE50u: goto label_13de50;
            case 0x13DE7Cu: goto label_13de7c;
            case 0x13DE84u: goto label_13de84;
            case 0x13DE94u: goto label_13de94;
            case 0x13DEB4u: goto label_13deb4;
            case 0x13DEB8u: goto label_13deb8;
            case 0x13DED0u: goto label_13ded0;
            case 0x13DEE0u: goto label_13dee0;
            case 0x13DEE4u: goto label_13dee4;
            case 0x13DEFCu: goto label_13defc;
            case 0x13DF10u: goto label_13df10;
            case 0x13DF20u: goto label_13df20;
            case 0x13DF28u: goto label_13df28;
            case 0x13DF2Cu: goto label_13df2c;
            case 0x13DF40u: goto label_13df40;
            case 0x13DF48u: goto label_13df48;
            case 0x13DF74u: goto label_13df74;
            case 0x13DF80u: goto label_13df80;
            case 0x13DF9Cu: goto label_13df9c;
            case 0x13DFDCu: goto label_13dfdc;
            case 0x13DFF8u: goto label_13dff8;
            case 0x13E008u: goto label_13e008;
            case 0x13E04Cu: goto label_13e04c;
            case 0x13E054u: goto label_13e054;
            case 0x13E07Cu: goto label_13e07c;
            case 0x13E088u: goto label_13e088;
            case 0x13E09Cu: goto label_13e09c;
            case 0x13E0ACu: goto label_13e0ac;
            case 0x13E0B0u: goto label_13e0b0;
            case 0x13E0C4u: goto label_13e0c4;
            case 0x13E0E0u: goto label_13e0e0;
            case 0x13E0FCu: goto label_13e0fc;
            case 0x13E110u: goto label_13e110;
            case 0x13E114u: goto label_13e114;
            case 0x13E12Cu: goto label_13e12c;
            case 0x13E13Cu: goto label_13e13c;
            case 0x13E140u: goto label_13e140;
            case 0x13E148u: goto label_13e148;
            case 0x13E16Cu: goto label_13e16c;
            case 0x13E180u: goto label_13e180;
            case 0x13E1A8u: goto label_13e1a8;
            case 0x13E1B0u: goto label_13e1b0;
            case 0x13E1C0u: goto label_13e1c0;
            case 0x13E1C4u: goto label_13e1c4;
            case 0x13E1DCu: goto label_13e1dc;
            case 0x13E1ECu: goto label_13e1ec;
            case 0x13E1F0u: goto label_13e1f0;
            case 0x13E1F8u: goto label_13e1f8;
            case 0x13E204u: goto label_13e204;
            case 0x13E20Cu: goto label_13e20c;
            case 0x13E228u: goto label_13e228;
            case 0x13E238u: goto label_13e238;
            case 0x13E23Cu: goto label_13e23c;
            case 0x13E250u: goto label_13e250;
            case 0x13E254u: goto label_13e254;
            case 0x13E264u: goto label_13e264;
            case 0x13E278u: goto label_13e278;
            case 0x13E2B0u: goto label_13e2b0;
            case 0x13E2C0u: goto label_13e2c0;
            case 0x13E2FCu: goto label_13e2fc;
            case 0x13E310u: goto label_13e310;
            case 0x13E350u: goto label_13e350;
            case 0x13E360u: goto label_13e360;
            case 0x13E36Cu: goto label_13e36c;
            case 0x13E378u: goto label_13e378;
            case 0x13E3A8u: goto label_13e3a8;
            case 0x13E3B0u: goto label_13e3b0;
            case 0x13E3B4u: goto label_13e3b4;
            case 0x13E3BCu: goto label_13e3bc;
            case 0x13E3CCu: goto label_13e3cc;
            case 0x13E3D0u: goto label_13e3d0;
            case 0x13E3D4u: goto label_13e3d4;
            case 0x13E3D8u: goto label_13e3d8;
            case 0x13E408u: goto label_13e408;
            case 0x13E418u: goto label_13e418;
            case 0x13E440u: goto label_13e440;
            case 0x13E444u: goto label_13e444;
            case 0x13E490u: goto label_13e490;
            case 0x13E4A0u: goto label_13e4a0;
            case 0x13E4F0u: goto label_13e4f0;
            case 0x13E4F8u: goto label_13e4f8;
            case 0x13E538u: goto label_13e538;
            case 0x13E584u: goto label_13e584;
            case 0x13E59Cu: goto label_13e59c;
            case 0x13E5A0u: goto label_13e5a0;
            case 0x13E5D0u: goto label_13e5d0;
            case 0x13E5D4u: goto label_13e5d4;
            case 0x13E618u: goto label_13e618;
            case 0x13E628u: goto label_13e628;
            case 0x13E674u: goto label_13e674;
            case 0x13E678u: goto label_13e678;
            case 0x13E67Cu: goto label_13e67c;
            case 0x13E698u: goto label_13e698;
            case 0x13E69Cu: goto label_13e69c;
            case 0x13E6E0u: goto label_13e6e0;
            case 0x13E6F0u: goto label_13e6f0;
            case 0x13E73Cu: goto label_13e73c;
            case 0x13E740u: goto label_13e740;
            case 0x13E768u: goto label_13e768;
            case 0x13E7D0u: goto label_13e7d0;
            case 0x13E7F4u: goto label_13e7f4;
            case 0x13E834u: goto label_13e834;
            case 0x13E850u: goto label_13e850;
            case 0x13E898u: goto label_13e898;
            case 0x13E8B0u: goto label_13e8b0;
            case 0x13E8B8u: goto label_13e8b8;
            case 0x13E8E0u: goto label_13e8e0;
            case 0x13E934u: goto label_13e934;
            case 0x13E978u: goto label_13e978;
            case 0x13E990u: goto label_13e990;
            case 0x13E9D8u: goto label_13e9d8;
            case 0x13E9F0u: goto label_13e9f0;
            case 0x13E9F8u: goto label_13e9f8;
            case 0x13EA34u: goto label_13ea34;
            case 0x13EA70u: goto label_13ea70;
            case 0x13EAC4u: goto label_13eac4;
            case 0x13EAE0u: goto label_13eae0;
            case 0x13EB28u: goto label_13eb28;
            case 0x13EB40u: goto label_13eb40;
            case 0x13EB48u: goto label_13eb48;
            case 0x13EB84u: goto label_13eb84;
            case 0x13EBC4u: goto label_13ebc4;
            case 0x13EC08u: goto label_13ec08;
            case 0x13EC58u: goto label_13ec58;
            case 0x13ECA4u: goto label_13eca4;
            case 0x13ECB8u: goto label_13ecb8;
            case 0x13ED14u: goto label_13ed14;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED80u: goto label_13ed80;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F018u;
}
