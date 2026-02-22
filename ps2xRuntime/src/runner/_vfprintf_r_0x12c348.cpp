#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _vfprintf_r
// Address: 0x12c348 - 0x12d860
void _vfprintf_r_0x12c348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c348u;

    // 0x12c348: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x12c348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x12c34c: 0xffb40270  sd          $s4, 0x270($sp)
    ctx->pc = 0x12c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
    // 0x12c350: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x12c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x12c354: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x12c354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c358: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x12c358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x12c35c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12c35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c360: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x12c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x12c364: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x12c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x12c368: 0xffb702a0  sd          $s7, 0x2A0($sp)
    ctx->pc = 0x12c368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 23));
    // 0x12c36c: 0xffb60290  sd          $s6, 0x290($sp)
    ctx->pc = 0x12c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 22));
    // 0x12c370: 0xffb50280  sd          $s5, 0x280($sp)
    ctx->pc = 0x12c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 21));
    // 0x12c374: 0xffb30260  sd          $s3, 0x260($sp)
    ctx->pc = 0x12c374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 19));
    // 0x12c378: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x12c378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x12c37c: 0xffb10240  sd          $s1, 0x240($sp)
    ctx->pc = 0x12c37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 17));
    // 0x12c380: 0xc04becc  jal         func_12FB30
    ctx->pc = 0x12C380u;
    SET_GPR_U32(ctx, 31, 0x12C388u);
    ctx->pc = 0x12C384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C380u;
            // 0x12c384: 0xafa401e4  sw          $a0, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB30u;
    if (runtime->hasFunction(0x12FB30u)) {
        auto targetFn = runtime->lookupFunction(0x12FB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C388u; }
        if (ctx->pc != 0x12C388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        localeconv_0x12fb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C388u; }
        if (ctx->pc != 0x12C388u) { return; }
    }
    ctx->pc = 0x12C388u;
    // 0x12c388: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c38c: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x12c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x12c390: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x12c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c394: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x12c394u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12c398: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x12c398u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8u)));
    // 0x12c39c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C39Cu;
    {
        const bool branch_taken_0x12c39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C39Cu;
            // 0x12c3a0: 0xafa001d8  sw          $zero, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c39c) {
            ctx->pc = 0x12C3B4u;
            goto label_12c3b4;
        }
    }
    ctx->pc = 0x12C3A4u;
    // 0x12c3a4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12c3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c3a8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12c3ac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C3ACu;
    {
        const bool branch_taken_0x12c3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3ACu;
            // 0x12c3b0: 0x3063001a  andi        $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)26u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3ac) {
            ctx->pc = 0x12C3D0u;
            goto label_12c3d0;
        }
    }
    ctx->pc = 0x12C3B4u;
label_12c3b4:
    // 0x12c3b4: 0xc04b6ea  jal         func_12DBA8
    ctx->pc = 0x12C3B4u;
    SET_GPR_U32(ctx, 31, 0x12C3BCu);
    ctx->pc = 0x12C3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3B4u;
            // 0x12c3b8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBA8u;
    if (runtime->hasFunction(0x12DBA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3BCu; }
        if (ctx->pc != 0x12C3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___swsetup_0x12dba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3BCu; }
        if (ctx->pc != 0x12C3BCu) { return; }
    }
    ctx->pc = 0x12C3BCu;
    // 0x12c3bc: 0x1440051c  bnez        $v0, . + 4 + (0x51C << 2)
    ctx->pc = 0x12C3BCu;
    {
        const bool branch_taken_0x12c3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3BCu;
            // 0x12c3c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3bc) {
            ctx->pc = 0x12D830u;
            goto label_12d830;
        }
    }
    ctx->pc = 0x12C3C4u;
    // 0x12c3c4: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x12c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c3c8: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x12c3c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12c3cc: 0x3063001a  andi        $v1, $v1, 0x1A
    ctx->pc = 0x12c3ccu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)26u)));
label_12c3d0:
    // 0x12c3d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c3d4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12C3D4u;
    {
        const bool branch_taken_0x12c3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3D4u;
            // 0x12c3d8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3d4) {
            ctx->pc = 0x12C400u;
            goto label_12c400;
        }
    }
    ctx->pc = 0x12C3DCu;
    // 0x12c3dc: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x12c3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c3e0: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x12c3e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x12c3e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C3E4u;
    {
        const bool branch_taken_0x12c3e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12C3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3E4u;
            // 0x12c3e8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3e4) {
            ctx->pc = 0x12C400u;
            goto label_12c400;
        }
    }
    ctx->pc = 0x12C3ECu;
    // 0x12c3ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12c3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3f0: 0xc04b086  jal         func_12C218
    ctx->pc = 0x12C3F0u;
    SET_GPR_U32(ctx, 31, 0x12C3F8u);
    ctx->pc = 0x12C3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3F0u;
            // 0x12c3f4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C218u;
    if (runtime->hasFunction(0x12C218u)) {
        auto targetFn = runtime->lookupFunction(0x12C218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3F8u; }
        if (ctx->pc != 0x12C3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sbprintf_0x12c218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3F8u; }
        if (ctx->pc != 0x12C3F8u) { return; }
    }
    ctx->pc = 0x12C3F8u;
    // 0x12c3f8: 0x1000050e  b           . + 4 + (0x50E << 2)
    ctx->pc = 0x12C3F8u;
    {
        const bool branch_taken_0x12c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3F8u;
            // 0x12c3fc: 0xdfbf02c0  ld          $ra, 0x2C0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3f8) {
            ctx->pc = 0x12D834u;
            goto label_12d834;
        }
    }
    ctx->pc = 0x12C400u;
label_12c400:
    // 0x12c400: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x12c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x12c404: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x12c404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x12c408: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x12c408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x12c40c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x12c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x12c410: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12c410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x12c414: 0xafb001ec  sw          $s0, 0x1EC($sp)
    ctx->pc = 0x12c414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 16));
    // 0x12c418: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x12c418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x12c41c: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x12c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x12c420: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x12c420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
    // 0x12c424: 0x0  nop
    ctx->pc = 0x12c424u;
    // NOP
label_12c428:
    // 0x12c428: 0x8fb301ec  lw          $s3, 0x1EC($sp)
    ctx->pc = 0x12c428u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c42c: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x12c42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_12c430:
    // 0x12c430: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x12c430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x12c434: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x12c434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x12c438: 0x8ca42544  lw          $a0, 0x2544($a1)
    ctx->pc = 0x12c438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9540)));
    // 0x12c43c: 0x8cc729a0  lw          $a3, 0x29A0($a2)
    ctx->pc = 0x12c43cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10656)));
    // 0x12c440: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x12c440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x12c444: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x12c444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c448: 0xc04bf42  jal         func_12FD08
    ctx->pc = 0x12C448u;
    SET_GPR_U32(ctx, 31, 0x12C450u);
    ctx->pc = 0x12C44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C448u;
            // 0x12c44c: 0x8fa8021c  lw          $t0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FD08u;
    if (runtime->hasFunction(0x12FD08u)) {
        auto targetFn = runtime->lookupFunction(0x12FD08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C450u; }
        if (ctx->pc != 0x12C450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _mbtowc_r_0x12fd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C450u; }
        if (ctx->pc != 0x12C450u) { return; }
    }
    ctx->pc = 0x12C450u;
    // 0x12c450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12c450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c454: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C454u;
    {
        const bool branch_taken_0x12c454 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C454u;
            // 0x12c458: 0x8fa301ec  lw          $v1, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c454) {
            ctx->pc = 0x12C474u;
            goto label_12c474;
        }
    }
    ctx->pc = 0x12C45Cu;
    // 0x12c45c: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x12c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x12c460: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12c460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12c464: 0x1452fff2  bne         $v0, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x12C464u;
    {
        const bool branch_taken_0x12c464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x12C468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C464u;
            // 0x12c468: 0xafa301ec  sw          $v1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c464) {
            ctx->pc = 0x12C430u;
            goto label_12c430;
        }
    }
    ctx->pc = 0x12C46Cu;
    // 0x12c46c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12c46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12c470: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x12c470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
label_12c474:
    // 0x12c474: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x12c474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c478: 0x939023  subu        $s2, $a0, $s3
    ctx->pc = 0x12c478u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x12c47c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x12C47Cu;
    {
        const bool branch_taken_0x12c47c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c47c) {
            ctx->pc = 0x12C4D0u;
            goto label_12c4d0;
        }
    }
    ctx->pc = 0x12C484u;
    // 0x12c484: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x12c484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x12c488: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12c488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12c48c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12c48cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12c490: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12c490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c494: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12c494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12c498: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12c49c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12c4a0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12c4a4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12c4a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12c4a8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C4A8u;
    {
        const bool branch_taken_0x12c4a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4A8u;
            // 0x12c4ac: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4a8) {
            ctx->pc = 0x12C4C4u;
            goto label_12c4c4;
        }
    }
    ctx->pc = 0x12C4B0u;
    // 0x12c4b0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12c4b4: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12C4B4u;
    SET_GPR_U32(ctx, 31, 0x12C4BCu);
    ctx->pc = 0x12C4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4B4u;
            // 0x12c4b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4BCu; }
        if (ctx->pc != 0x12C4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4BCu; }
        if (ctx->pc != 0x12C4BCu) { return; }
    }
    ctx->pc = 0x12C4BCu;
    // 0x12c4bc: 0x144004d6  bnez        $v0, . + 4 + (0x4D6 << 2)
    ctx->pc = 0x12C4BCu;
    {
        const bool branch_taken_0x12c4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4BCu;
            // 0x12c4c0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4bc) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12C4C4u;
label_12c4c4:
    // 0x12c4c4: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x12c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12c4c8: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x12c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x12c4cc: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x12c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
label_12c4d0:
    // 0x12c4d0: 0x1a0004c9  blez        $s0, . + 4 + (0x4C9 << 2)
    ctx->pc = 0x12C4D0u;
    {
        const bool branch_taken_0x12c4d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4D0u;
            // 0x12c4d4: 0x8fa601ec  lw          $a2, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4d0) {
            ctx->pc = 0x12D7F8u;
            goto label_12d7f8;
        }
    }
    ctx->pc = 0x12C4D8u;
    // 0x12c4d8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12c4d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4dc: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x12c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x12c4e0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x12c4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c4e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12c4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12c4e8: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x12c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x12c4ec: 0xafa601ec  sw          $a2, 0x1EC($sp)
    ctx->pc = 0x12c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
    // 0x12c4f0: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12c4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c4f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C4F4u;
    {
        const bool branch_taken_0x12c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4F4u;
            // 0x12c4f8: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4f4) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C4FCu;
label_12c4fc:
    // 0x12c4fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12C4FCu;
    {
        const bool branch_taken_0x12c4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4FCu;
            // 0x12c500: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4fc) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C504u;
label_12c504:
    // 0x12c504: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x12c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c508:
    // 0x12c508: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x12c508u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_12c50c:
    // 0x12c50c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x12c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x12c510: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x12c510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c514: 0x2be03  sra         $s7, $v0, 24
    ctx->pc = 0x12c514u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
    // 0x12c518: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12c518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c51c: 0xafa401ec  sw          $a0, 0x1EC($sp)
    ctx->pc = 0x12c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
label_12c520:
    // 0x12c520: 0x26e3ffe0  addiu       $v1, $s7, -0x20
    ctx->pc = 0x12c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
    // 0x12c524: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x12c524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x12c528: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x12C528u;
    {
        const bool branch_taken_0x12c528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C528u;
            // 0x12c52c: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c528) {
            ctx->pc = 0x12CC04u;
            goto label_12cc04;
        }
    }
    ctx->pc = 0x12C530u;
    // 0x12c530: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12c530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12c534: 0x24425780  addiu       $v0, $v0, 0x5780
    ctx->pc = 0x12c534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22400));
    // 0x12c538: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c53c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12c540: 0x800008  jr          $a0
    ctx->pc = 0x12C540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C548u: goto label_12c548;
            case 0x12C560u: goto label_12c560;
            case 0x12C570u: goto label_12c570;
            case 0x12C588u: goto label_12c588;
            case 0x12C594u: goto label_12c594;
            case 0x12C5A8u: goto label_12c5a8;
            case 0x12C634u: goto label_12c634;
            case 0x12C640u: goto label_12c640;
            case 0x12C678u: goto label_12c678;
            case 0x12C688u: goto label_12c688;
            case 0x12C698u: goto label_12c698;
            case 0x12C6CCu: goto label_12c6cc;
            case 0x12C6DCu: goto label_12c6dc;
            case 0x12C6FCu: goto label_12c6fc;
            case 0x12C700u: goto label_12c700;
            case 0x12C744u: goto label_12c744;
            case 0x12C90Cu: goto label_12c90c;
            case 0x12C958u: goto label_12c958;
            case 0x12C95Cu: goto label_12c95c;
            case 0x12C990u: goto label_12c990;
            case 0x12C9B4u: goto label_12c9b4;
            case 0x12CA08u: goto label_12ca08;
            case 0x12CA0Cu: goto label_12ca0c;
            case 0x12CA40u: goto label_12ca40;
            case 0x12CA4Cu: goto label_12ca4c;
            case 0x12CC04u: goto label_12cc04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C548u;
label_12c548:
    // 0x12c548: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x12c548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12c54c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12C54Cu;
    {
        const bool branch_taken_0x12c54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C54Cu;
            // 0x12c550: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c54c) {
            ctx->pc = 0x12C4FCu;
            goto label_12c4fc;
        }
    }
    ctx->pc = 0x12C554u;
    // 0x12c554: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12c554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c558: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12C558u;
    {
        const bool branch_taken_0x12c558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C558u;
            // 0x12c55c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c558) {
            ctx->pc = 0x12C59Cu;
            goto label_12c59c;
        }
    }
    ctx->pc = 0x12C560u;
label_12c560:
    // 0x12c560: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x12c560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c564: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x12c564u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x12c568: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x12C568u;
    {
        const bool branch_taken_0x12c568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C568u;
            // 0x12c56c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c568) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C570u;
label_12c570:
    // 0x12c570: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c574: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x12c574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12c578: 0x441ffe2  bgez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x12C578u;
    {
        const bool branch_taken_0x12c578 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12C57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C578u;
            // 0x12c57c: 0xafa201f4  sw          $v0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c578) {
            ctx->pc = 0x12C504u;
            goto label_12c504;
        }
    }
    ctx->pc = 0x12C580u;
    // 0x12c580: 0x21023  negu        $v0, $v0
    ctx->pc = 0x12c580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12c584: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x12c584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_12c588:
    // 0x12c588: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x12c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c58c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x12C58Cu;
    {
        const bool branch_taken_0x12c58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C58Cu;
            // 0x12c590: 0x37de0004  ori         $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c58c) {
            ctx->pc = 0x12C508u;
            goto label_12c508;
        }
    }
    ctx->pc = 0x12C594u;
label_12c594:
    // 0x12c594: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12c594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c598: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x12c598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_12c59c:
    // 0x12c59c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x12c59cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12c5a0: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x12C5A0u;
    {
        const bool branch_taken_0x12c5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C5A0u;
            // 0x12c5a4: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5a0) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C5A8u;
label_12c5a8:
    // 0x12c5a8: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x12c5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c5ac: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x12c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x12c5b0: 0x80d70000  lb          $s7, 0x0($a2)
    ctx->pc = 0x12c5b0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12c5b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12c5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12c5b8: 0x16e20009  bne         $s7, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12C5B8u;
    {
        const bool branch_taken_0x12c5b8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C5B8u;
            // 0x12c5bc: 0xafa601ec  sw          $a2, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5b8) {
            ctx->pc = 0x12C5E0u;
            goto label_12c5e0;
        }
    }
    ctx->pc = 0x12C5C0u;
    // 0x12c5c0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c5c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c5c4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12c5c8: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x12c5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12c5cc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x12c5ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c5d0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x12c5d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12c5d4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x12c5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12c5d8: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x12C5D8u;
    {
        const bool branch_taken_0x12c5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C5D8u;
            // 0x12c5dc: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5d8) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C5E0u;
label_12c5e0:
    // 0x12c5e0: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x12c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x12c5e4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x12c5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12c5e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12C5E8u;
    {
        const bool branch_taken_0x12c5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C5E8u;
            // 0x12c5ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c5e8) {
            ctx->pc = 0x12C620u;
            goto label_12c620;
        }
    }
    ctx->pc = 0x12C5F0u;
    // 0x12c5f0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x12c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12c5f4: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x12c5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_12c5f8:
    // 0x12c5f8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x12c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x12c5fc: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x12c5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x12c600: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x12c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c604: 0x80570000  lb          $s7, 0x0($v0)
    ctx->pc = 0x12c604u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c60c: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x12c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x12c610: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x12c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x12c614: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x12c614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12c618: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12C618u;
    {
        const bool branch_taken_0x12c618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C618u;
            // 0x12c61c: 0x2031018  mult        $v0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c618) {
            ctx->pc = 0x12C5F8u;
            goto label_12c5f8;
        }
    }
    ctx->pc = 0x12C620u;
label_12c620:
    // 0x12c620: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12c624: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x12c624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c628: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x12c628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12c62c: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x12C62Cu;
    {
        const bool branch_taken_0x12c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C62Cu;
            // 0x12c630: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c62c) {
            ctx->pc = 0x12C520u;
            goto label_12c520;
        }
    }
    ctx->pc = 0x12C634u;
label_12c634:
    // 0x12c634: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x12c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c638: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x12C638u;
    {
        const bool branch_taken_0x12c638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C638u;
            // 0x12c63c: 0x37de0080  ori         $fp, $fp, 0x80 (Delay Slot)
        SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)128u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c638) {
            ctx->pc = 0x12C508u;
            goto label_12c508;
        }
    }
    ctx->pc = 0x12C640u;
label_12c640:
    // 0x12c640: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12c640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c644: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x12c644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12c648:
    // 0x12c648: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x12c648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c64c: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x12c64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c650: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x12c654: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x12c654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x12c658: 0x80970000  lb          $s7, 0x0($a0)
    ctx->pc = 0x12c658u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12c65c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c660: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x12c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x12c664: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x12c664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12c668: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12C668u;
    {
        const bool branch_taken_0x12c668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C668u;
            // 0x12c66c: 0xafa401ec  sw          $a0, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c668) {
            ctx->pc = 0x12C648u;
            goto label_12c648;
        }
    }
    ctx->pc = 0x12C670u;
    // 0x12c670: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x12C670u;
    {
        const bool branch_taken_0x12c670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C670u;
            // 0x12c674: 0xafb001f4  sw          $s0, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c670) {
            ctx->pc = 0x12C520u;
            goto label_12c520;
        }
    }
    ctx->pc = 0x12C678u;
label_12c678:
    // 0x12c678: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12c678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c67c: 0x37de0008  ori         $fp, $fp, 0x8
    ctx->pc = 0x12c67cu;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)8u)));
    // 0x12c680: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x12C680u;
    {
        const bool branch_taken_0x12c680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C680u;
            // 0x12c684: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c680) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C688u;
label_12c688:
    // 0x12c688: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x12c688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c68c: 0x37de0040  ori         $fp, $fp, 0x40
    ctx->pc = 0x12c68cu;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
    // 0x12c690: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x12C690u;
    {
        const bool branch_taken_0x12c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C690u;
            // 0x12c694: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c690) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C698u;
label_12c698:
    // 0x12c698: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x12c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c69c: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x12c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c6a0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x12c6a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c6a4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x12c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12c6a8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C6A8u;
    {
        const bool branch_taken_0x12c6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C6A8u;
            // 0x12c6ac: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6a8) {
            ctx->pc = 0x12C6C4u;
            goto label_12c6c4;
        }
    }
    ctx->pc = 0x12C6B0u;
    // 0x12c6b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12c6b4: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x12c6b4u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)32u)));
    // 0x12c6b8: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x12c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
    // 0x12c6bc: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x12C6BCu;
    {
        const bool branch_taken_0x12c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C6BCu;
            // 0x12c6c0: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6bc) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C6C4u;
label_12c6c4:
    // 0x12c6c4: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x12C6C4u;
    {
        const bool branch_taken_0x12c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C6C4u;
            // 0x12c6c8: 0x37de0010  ori         $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6c4) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C6CCu;
label_12c6cc:
    // 0x12c6cc: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x12c6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12c6d0: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x12c6d0u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)32u)));
    // 0x12c6d4: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
    ctx->pc = 0x12C6D4u;
    {
        const bool branch_taken_0x12c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C6D4u;
            // 0x12c6d8: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6d4) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C6DCu;
label_12c6dc:
    // 0x12c6dc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c6dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c6e0: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x12c6e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12c6e4: 0x9282fff8  lbu         $v0, -0x8($s4)
    ctx->pc = 0x12c6e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12c6e8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12c6e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c6ec: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12c6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c6f0: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12c6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12c6f4: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x12C6F4u;
    {
        const bool branch_taken_0x12c6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C6F4u;
            // 0x12c6f8: 0xa3a20060  sb          $v0, 0x60($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6f4) {
            ctx->pc = 0x12CC1Cu;
            goto label_12cc1c;
        }
    }
    ctx->pc = 0x12C6FCu;
label_12c6fc:
    // 0x12c6fc: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x12c6fcu;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
label_12c700:
    // 0x12c700: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x12c700u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
    // 0x12c704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C704u;
    {
        const bool branch_taken_0x12c704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C704u;
            // 0x12c708: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c704) {
            ctx->pc = 0x12C718u;
            goto label_12c718;
        }
    }
    ctx->pc = 0x12C70Cu;
    // 0x12c70c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c70cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c710: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12C710u;
    {
        const bool branch_taken_0x12c710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C710u;
            // 0x12c714: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c710) {
            ctx->pc = 0x12C72Cu;
            goto label_12c72c;
        }
    }
    ctx->pc = 0x12C718u;
label_12c718:
    // 0x12c718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C718u;
    {
        const bool branch_taken_0x12c718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C718u;
            // 0x12c71c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c718) {
            ctx->pc = 0x12C728u;
            goto label_12c728;
        }
    }
    ctx->pc = 0x12C720u;
    // 0x12c720: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C720u;
    {
        const bool branch_taken_0x12c720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C720u;
            // 0x12c724: 0x8690fff8  lh          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c720) {
            ctx->pc = 0x12C72Cu;
            goto label_12c72c;
        }
    }
    ctx->pc = 0x12C728u;
label_12c728:
    // 0x12c728: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x12c728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c72c:
    // 0x12c72c: 0x60100db  bgez        $s0, . + 4 + (0xDB << 2)
    ctx->pc = 0x12C72Cu;
    {
        const bool branch_taken_0x12c72c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12C730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C72Cu;
            // 0x12c730: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c72c) {
            ctx->pc = 0x12CA9Cu;
            goto label_12ca9c;
        }
    }
    ctx->pc = 0x12C734u;
    // 0x12c734: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12c738: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x12c738u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x12c73c: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x12C73Cu;
    {
        const bool branch_taken_0x12c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C73Cu;
            // 0x12c740: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c73c) {
            ctx->pc = 0x12CA9Cu;
            goto label_12ca9c;
        }
    }
    ctx->pc = 0x12C744u;
label_12c744:
    // 0x12c744: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12c744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c748: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C748u;
    {
        const bool branch_taken_0x12c748 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C748u;
            // 0x12c74c: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c748) {
            ctx->pc = 0x12C758u;
            goto label_12c758;
        }
    }
    ctx->pc = 0x12C750u;
    // 0x12c750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12C750u;
    {
        const bool branch_taken_0x12c750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C750u;
            // 0x12c754: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c750) {
            ctx->pc = 0x12C770u;
            goto label_12c770;
        }
    }
    ctx->pc = 0x12C758u;
label_12c758:
    // 0x12c758: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C758u;
    {
        const bool branch_taken_0x12c758 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C758u;
            // 0x12c75c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c758) {
            ctx->pc = 0x12C768u;
            goto label_12c768;
        }
    }
    ctx->pc = 0x12C760u;
    // 0x12c760: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C760u;
    {
        const bool branch_taken_0x12c760 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C760u;
            // 0x12c764: 0x33c20008  andi        $v0, $fp, 0x8 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)8u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c760) {
            ctx->pc = 0x12C774u;
            goto label_12c774;
        }
    }
    ctx->pc = 0x12C768u;
label_12c768:
    // 0x12c768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c76c: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x12c76cu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_12c770:
    // 0x12c770: 0x33c20008  andi        $v0, $fp, 0x8
    ctx->pc = 0x12c770u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)8u)));
label_12c774:
    // 0x12c774: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C774u;
    {
        const bool branch_taken_0x12c774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C774u;
            // 0x12c778: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c774) {
            ctx->pc = 0x12C788u;
            goto label_12c788;
        }
    }
    ctx->pc = 0x12C77Cu;
    // 0x12c77c: 0xde82fff8  ld          $v0, -0x8($s4)
    ctx->pc = 0x12c77cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12c780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12C780u;
    {
        const bool branch_taken_0x12c780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C780u;
            // 0x12c784: 0xffa20200  sd          $v0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c780) {
            ctx->pc = 0x12C790u;
            goto label_12c790;
        }
    }
    ctx->pc = 0x12C788u;
label_12c788:
    // 0x12c788: 0xde83fff8  ld          $v1, -0x8($s4)
    ctx->pc = 0x12c788u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12c78c: 0xffa30200  sd          $v1, 0x200($sp)
    ctx->pc = 0x12c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 3));
label_12c790:
    // 0x12c790: 0xc04c3aa  jal         func_130EA8
    ctx->pc = 0x12C790u;
    SET_GPR_U32(ctx, 31, 0x12C798u);
    ctx->pc = 0x12C794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C790u;
            // 0x12c794: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EA8u;
    if (runtime->hasFunction(0x130EA8u)) {
        auto targetFn = runtime->lookupFunction(0x130EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C798u; }
        if (ctx->pc != 0x12C798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isinf_0x130ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C798u; }
        if (ctx->pc != 0x12C798u) { return; }
    }
    ctx->pc = 0x12C798u;
    // 0x12c798: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12C798u;
    {
        const bool branch_taken_0x12c798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C798u;
            // 0x12c79c: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c798) {
            ctx->pc = 0x12C7C8u;
            goto label_12c7c8;
        }
    }
    ctx->pc = 0x12C7A0u;
    // 0x12c7a0: 0xc04a482  jal         func_129208
    ctx->pc = 0x12C7A0u;
    SET_GPR_U32(ctx, 31, 0x12C7A8u);
    ctx->pc = 0x12C7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7A0u;
            // 0x12c7a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7A8u; }
        if (ctx->pc != 0x12C7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7A8u; }
        if (ctx->pc != 0x12C7A8u) { return; }
    }
    ctx->pc = 0x12C7A8u;
    // 0x12c7a8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C7A8u;
    {
        const bool branch_taken_0x12c7a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7A8u;
            // 0x12c7ac: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7a8) {
            ctx->pc = 0x12C7BCu;
            goto label_12c7bc;
        }
    }
    ctx->pc = 0x12C7B0u;
    // 0x12c7b0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12c7b4: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x12c7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c7b8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_12c7bc:
    // 0x12c7bc: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x12c7bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12c7c0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x12C7C0u;
    {
        const bool branch_taken_0x12c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7C0u;
            // 0x12c7c4: 0x24535700  addiu       $s3, $v0, 0x5700 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 22272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7c0) {
            ctx->pc = 0x12CC18u;
            goto label_12cc18;
        }
    }
    ctx->pc = 0x12C7C8u;
label_12c7c8:
    // 0x12c7c8: 0xc04c3bc  jal         func_130EF0
    ctx->pc = 0x12C7C8u;
    SET_GPR_U32(ctx, 31, 0x12C7D0u);
    ctx->pc = 0x12C7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7C8u;
            // 0x12c7cc: 0xdfa40200  ld          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EF0u;
    if (runtime->hasFunction(0x130EF0u)) {
        auto targetFn = runtime->lookupFunction(0x130EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7D0u; }
        if (ctx->pc != 0x12C7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isnan_0x130ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7D0u; }
        if (ctx->pc != 0x12C7D0u) { return; }
    }
    ctx->pc = 0x12C7D0u;
    // 0x12c7d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C7D0u;
    {
        const bool branch_taken_0x12c7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7D0u;
            // 0x12c7d4: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7d0) {
            ctx->pc = 0x12C7E4u;
            goto label_12c7e4;
        }
    }
    ctx->pc = 0x12C7D8u;
    // 0x12c7d8: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x12c7d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12c7dc: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x12C7DCu;
    {
        const bool branch_taken_0x12c7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7DCu;
            // 0x12c7e0: 0x24535708  addiu       $s3, $v0, 0x5708 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 22280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7dc) {
            ctx->pc = 0x12CC18u;
            goto label_12cc18;
        }
    }
    ctx->pc = 0x12C7E4u;
label_12c7e4:
    // 0x12c7e4: 0x37de0100  ori         $fp, $fp, 0x100
    ctx->pc = 0x12c7e4u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)256u)));
    // 0x12c7e8: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x12c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x12c7ec: 0xdfa50200  ld          $a1, 0x200($sp)
    ctx->pc = 0x12c7ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12c7f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12c7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7f4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x12c7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7f8: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x12c7fc: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x12c7fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x12c800: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x12c800u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c804: 0xc04b618  jal         func_12D860
    ctx->pc = 0x12C804u;
    SET_GPR_U32(ctx, 31, 0x12C80Cu);
    ctx->pc = 0x12C808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C804u;
            // 0x12c808: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D860u;
    if (runtime->hasFunction(0x12D860u)) {
        auto targetFn = runtime->lookupFunction(0x12D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C80Cu; }
        if (ctx->pc != 0x12C80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cvt_0x12d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C80Cu; }
        if (ctx->pc != 0x12C80Cu) { return; }
    }
    ctx->pc = 0x12C80Cu;
    // 0x12c80c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12c80cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c810: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x12c810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12c814: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C814u;
    {
        const bool branch_taken_0x12c814 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C814u;
            // 0x12c818: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c814) {
            ctx->pc = 0x12C824u;
            goto label_12c824;
        }
    }
    ctx->pc = 0x12C81Cu;
    // 0x12c81c: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12C81Cu;
    {
        const bool branch_taken_0x12c81c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C81Cu;
            // 0x12c820: 0x8fa501dc  lw          $a1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c81c) {
            ctx->pc = 0x12C850u;
            goto label_12c850;
        }
    }
    ctx->pc = 0x12C824u;
label_12c824:
    // 0x12c824: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x12c824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12c828: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x12c828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x12c82c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C82Cu;
    {
        const bool branch_taken_0x12c82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C82Cu;
            // 0x12c830: 0x3ae40067  xori        $a0, $s7, 0x67 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 23), _mm_cvtsi32_si128((int)103u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c82c) {
            ctx->pc = 0x12C840u;
            goto label_12c840;
        }
    }
    ctx->pc = 0x12C834u;
    // 0x12c834: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x12c834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12c838: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C838u;
    {
        const bool branch_taken_0x12c838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c838) {
            ctx->pc = 0x12C83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C838u;
            // 0x12c83c: 0x24170067  addiu       $s7, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C850u;
            goto label_12c850;
        }
    }
    ctx->pc = 0x12C840u;
label_12c840:
    // 0x12c840: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x12c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12c844: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x12c844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12c848: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12c848u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c84c: 0x64b80b  movn        $s7, $v1, $a0
    ctx->pc = 0x12c84cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_12c850:
    // 0x12c850: 0x2ae20066  slti        $v0, $s7, 0x66
    ctx->pc = 0x12c850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x12c854: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12C854u;
    {
        const bool branch_taken_0x12c854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C854u;
            // 0x12c858: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c854) {
            ctx->pc = 0x12C89Cu;
            goto label_12c89c;
        }
    }
    ctx->pc = 0x12C85Cu;
    // 0x12c85c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12c85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12c860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c864: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x12c864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x12c868: 0xc04b684  jal         func_12DA10
    ctx->pc = 0x12C868u;
    SET_GPR_U32(ctx, 31, 0x12C870u);
    ctx->pc = 0x12C86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C868u;
            // 0x12c86c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA10u;
    if (runtime->hasFunction(0x12DA10u)) {
        auto targetFn = runtime->lookupFunction(0x12DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C870u; }
        if (ctx->pc != 0x12C870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exponent_0x12da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C870u; }
        if (ctx->pc != 0x12C870u) { return; }
    }
    ctx->pc = 0x12C870u;
    // 0x12c870: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x12c870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x12c874: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12c878: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x12c878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x12c87c: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x12c87cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12c880: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C880u;
    {
        const bool branch_taken_0x12c880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C880u;
            // 0x12c884: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c880) {
            ctx->pc = 0x12C894u;
            goto label_12c894;
        }
    }
    ctx->pc = 0x12C888u;
    // 0x12c888: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x12c888u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x12c88c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12C88Cu;
    {
        const bool branch_taken_0x12c88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C88Cu;
            // 0x12c890: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c88c) {
            ctx->pc = 0x12C8F8u;
            goto label_12c8f8;
        }
    }
    ctx->pc = 0x12C894u;
label_12c894:
    // 0x12c894: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12C894u;
    {
        const bool branch_taken_0x12c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C894u;
            // 0x12c898: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c894) {
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C89Cu;
label_12c89c:
    // 0x12c89c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x12c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12c8a0: 0x16e2000b  bne         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12C8A0u;
    {
        const bool branch_taken_0x12c8a0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8A0u;
            // 0x12c8a4: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8a0) {
            ctx->pc = 0x12C8D0u;
            goto label_12c8d0;
        }
    }
    ctx->pc = 0x12C8A8u;
    // 0x12c8a8: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12C8A8u;
    {
        const bool branch_taken_0x12c8a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x12C8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8A8u;
            // 0x12c8ac: 0x26550002  addiu       $s5, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8a8) {
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C8B0u;
    // 0x12c8b0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C8B0u;
    {
        const bool branch_taken_0x12c8b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8B0u;
            // 0x12c8b4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8b0) {
            ctx->pc = 0x12C8C4u;
            goto label_12c8c4;
        }
    }
    ctx->pc = 0x12C8B8u;
    // 0x12c8b8: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x12c8b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x12c8bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12C8BCu;
    {
        const bool branch_taken_0x12c8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8BCu;
            // 0x12c8c0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8bc) {
            ctx->pc = 0x12C8F8u;
            goto label_12c8f8;
        }
    }
    ctx->pc = 0x12C8C4u;
label_12c8c4:
    // 0x12c8c4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x12c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12c8c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12C8C8u;
    {
        const bool branch_taken_0x12c8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8C8u;
            // 0x12c8cc: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8c8) {
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C8D0u;
label_12c8d0:
    // 0x12c8d0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x12c8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12c8d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C8D4u;
    {
        const bool branch_taken_0x12c8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8D4u;
            // 0x12c8d8: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8d4) {
            ctx->pc = 0x12C8E4u;
            goto label_12c8e4;
        }
    }
    ctx->pc = 0x12C8DCu;
    // 0x12c8dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C8DCu;
    {
        const bool branch_taken_0x12c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8DCu;
            // 0x12c8e0: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8dc) {
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C8E4u;
label_12c8e4:
    // 0x12c8e4: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C8E4u;
    {
        const bool branch_taken_0x12c8e4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x12C8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8E4u;
            // 0x12c8e8: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8e4) {
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C8ECu;
    // 0x12c8ec: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x12c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x12c8f0: 0x45a823  subu        $s5, $v0, $a1
    ctx->pc = 0x12c8f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12c8f4:
    // 0x12c8f4: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x12c8f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_12c8f8:
    // 0x12c8f8: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x12C8F8u;
    {
        const bool branch_taken_0x12c8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8F8u;
            // 0x12c8fc: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8f8) {
            ctx->pc = 0x12CC18u;
            goto label_12cc18;
        }
    }
    ctx->pc = 0x12C900u;
    // 0x12c900: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12c900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12c904: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x12C904u;
    {
        const bool branch_taken_0x12c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C904u;
            // 0x12c908: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c904) {
            ctx->pc = 0x12CC1Cu;
            goto label_12cc1c;
        }
    }
    ctx->pc = 0x12C90Cu;
label_12c90c:
    // 0x12c90c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x12c90cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
    // 0x12c910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C910u;
    {
        const bool branch_taken_0x12c910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C910u;
            // 0x12c914: 0x8fa501f0  lw          $a1, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c910) {
            ctx->pc = 0x12C928u;
            goto label_12c928;
        }
    }
    ctx->pc = 0x12C918u;
    // 0x12c918: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c91c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x12c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12c920: 0x1000fec1  b           . + 4 + (-0x13F << 2)
    ctx->pc = 0x12C920u;
    {
        const bool branch_taken_0x12c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C920u;
            // 0x12c924: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c920) {
            ctx->pc = 0x12C428u;
            goto label_12c428;
        }
    }
    ctx->pc = 0x12C928u;
label_12c928:
    // 0x12c928: 0x33c20040  andi        $v0, $fp, 0x40
    ctx->pc = 0x12c928u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
    // 0x12c92c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C92Cu;
    {
        const bool branch_taken_0x12c92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C92Cu;
            // 0x12c930: 0x8fa601f0  lw          $a2, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c92c) {
            ctx->pc = 0x12C944u;
            goto label_12c944;
        }
    }
    ctx->pc = 0x12C934u;
    // 0x12c934: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c938: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x12c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12c93c: 0x1000feba  b           . + 4 + (-0x146 << 2)
    ctx->pc = 0x12C93Cu;
    {
        const bool branch_taken_0x12c93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C93Cu;
            // 0x12c940: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c93c) {
            ctx->pc = 0x12C428u;
            goto label_12c428;
        }
    }
    ctx->pc = 0x12C944u;
label_12c944:
    // 0x12c944: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c948: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x12c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12c94c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x12c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12c950: 0x1000feb5  b           . + 4 + (-0x14B << 2)
    ctx->pc = 0x12C950u;
    {
        const bool branch_taken_0x12c950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C950u;
            // 0x12c954: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c950) {
            ctx->pc = 0x12C428u;
            goto label_12c428;
        }
    }
    ctx->pc = 0x12C958u;
label_12c958:
    // 0x12c958: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x12c958u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
label_12c95c:
    // 0x12c95c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x12c95cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
    // 0x12c960: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C960u;
    {
        const bool branch_taken_0x12c960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C960u;
            // 0x12c964: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c960) {
            ctx->pc = 0x12C974u;
            goto label_12c974;
        }
    }
    ctx->pc = 0x12C968u;
    // 0x12c968: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c968u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c96c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12C96Cu;
    {
        const bool branch_taken_0x12c96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C96Cu;
            // 0x12c970: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c96c) {
            ctx->pc = 0x12C988u;
            goto label_12c988;
        }
    }
    ctx->pc = 0x12C974u;
label_12c974:
    // 0x12c974: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C974u;
    {
        const bool branch_taken_0x12c974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C974u;
            // 0x12c978: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c974) {
            ctx->pc = 0x12C984u;
            goto label_12c984;
        }
    }
    ctx->pc = 0x12C97Cu;
    // 0x12c97c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C97Cu;
    {
        const bool branch_taken_0x12c97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C97Cu;
            // 0x12c980: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c97c) {
            ctx->pc = 0x12C988u;
            goto label_12c988;
        }
    }
    ctx->pc = 0x12C984u;
label_12c984:
    // 0x12c984: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x12c984u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c988:
    // 0x12c988: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x12C988u;
    {
        const bool branch_taken_0x12c988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C988u;
            // 0x12c98c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c988) {
            ctx->pc = 0x12CA98u;
            goto label_12ca98;
        }
    }
    ctx->pc = 0x12C990u;
label_12c990:
    // 0x12c990: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12c990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12c994: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c994u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c998: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x12c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
    // 0x12c99c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c9a0: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x12c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x12c9a4: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x12c9a4u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)2u)));
    // 0x12c9a8: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x12c9a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x12c9ac: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x12C9ACu;
    {
        const bool branch_taken_0x12c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9ACu;
            // 0x12c9b0: 0x8e90fff8  lw          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9ac) {
            ctx->pc = 0x12CA98u;
            goto label_12ca98;
        }
    }
    ctx->pc = 0x12C9B4u;
label_12c9b4:
    // 0x12c9b4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12c9b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12c9b8: 0x8e93fff8  lw          $s3, -0x8($s4)
    ctx->pc = 0x12c9b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x12c9bc: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C9BCu;
    {
        const bool branch_taken_0x12c9bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9BCu;
            // 0x12c9c0: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9bc) {
            ctx->pc = 0x12C9C8u;
            goto label_12c9c8;
        }
    }
    ctx->pc = 0x12C9C4u;
    // 0x12c9c4: 0x24535728  addiu       $s3, $v0, 0x5728
    ctx->pc = 0x12c9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 22312));
label_12c9c8:
    // 0x12c9c8: 0x640000b  bltz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x12C9C8u;
    {
        const bool branch_taken_0x12c9c8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x12C9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9C8u;
            // 0x12c9cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9c8) {
            ctx->pc = 0x12C9F8u;
            goto label_12c9f8;
        }
    }
    ctx->pc = 0x12C9D0u;
    // 0x12c9d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9d4: 0xc04bf51  jal         func_12FD44
    ctx->pc = 0x12C9D4u;
    SET_GPR_U32(ctx, 31, 0x12C9DCu);
    ctx->pc = 0x12C9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9D4u;
            // 0x12c9d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FD44u;
    if (runtime->hasFunction(0x12FD44u)) {
        auto targetFn = runtime->lookupFunction(0x12FD44u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C9DCu; }
        if (ctx->pc != 0x12C9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memchr_0x12fd44(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C9DCu; }
        if (ctx->pc != 0x12C9DCu) { return; }
    }
    ctx->pc = 0x12C9DCu;
    // 0x12c9dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C9DCu;
    {
        const bool branch_taken_0x12c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9DCu;
            // 0x12c9e0: 0x53a823  subu        $s5, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9dc) {
            ctx->pc = 0x12C9F0u;
            goto label_12c9f0;
        }
    }
    ctx->pc = 0x12C9E4u;
    // 0x12c9e4: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x12c9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x12c9e8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x12C9E8u;
    {
        const bool branch_taken_0x12c9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9E8u;
            // 0x12c9ec: 0x242a80b  movn        $s5, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9e8) {
            ctx->pc = 0x12CC14u;
            goto label_12cc14;
        }
    }
    ctx->pc = 0x12C9F0u;
label_12c9f0:
    // 0x12c9f0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x12C9F0u;
    {
        const bool branch_taken_0x12c9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9F0u;
            // 0x12c9f4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9f0) {
            ctx->pc = 0x12CC14u;
            goto label_12cc14;
        }
    }
    ctx->pc = 0x12C9F8u;
label_12c9f8:
    // 0x12c9f8: 0xc04aeac  jal         func_12BAB0
    ctx->pc = 0x12C9F8u;
    SET_GPR_U32(ctx, 31, 0x12CA00u);
    ctx->pc = 0x12C9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C9F8u;
            // 0x12c9fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BAB0u;
    if (runtime->hasFunction(0x12BAB0u)) {
        auto targetFn = runtime->lookupFunction(0x12BAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA00u; }
        if (ctx->pc != 0x12CA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x12bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA00u; }
        if (ctx->pc != 0x12CA00u) { return; }
    }
    ctx->pc = 0x12CA00u;
    // 0x12ca00: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x12CA00u;
    {
        const bool branch_taken_0x12ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA00u;
            // 0x12ca04: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca00) {
            ctx->pc = 0x12CC14u;
            goto label_12cc14;
        }
    }
    ctx->pc = 0x12CA08u;
label_12ca08:
    // 0x12ca08: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x12ca08u;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
label_12ca0c:
    // 0x12ca0c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x12ca0cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
    // 0x12ca10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CA10u;
    {
        const bool branch_taken_0x12ca10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA10u;
            // 0x12ca14: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca10) {
            ctx->pc = 0x12CA24u;
            goto label_12ca24;
        }
    }
    ctx->pc = 0x12CA18u;
    // 0x12ca18: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ca18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ca1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12CA1Cu;
    {
        const bool branch_taken_0x12ca1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA1Cu;
            // 0x12ca20: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca1c) {
            ctx->pc = 0x12CA38u;
            goto label_12ca38;
        }
    }
    ctx->pc = 0x12CA24u;
label_12ca24:
    // 0x12ca24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CA24u;
    {
        const bool branch_taken_0x12ca24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA24u;
            // 0x12ca28: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca24) {
            ctx->pc = 0x12CA34u;
            goto label_12ca34;
        }
    }
    ctx->pc = 0x12CA2Cu;
    // 0x12ca2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CA2Cu;
    {
        const bool branch_taken_0x12ca2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA2Cu;
            // 0x12ca30: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca2c) {
            ctx->pc = 0x12CA38u;
            goto label_12ca38;
        }
    }
    ctx->pc = 0x12CA34u;
label_12ca34:
    // 0x12ca34: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x12ca34u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12ca38:
    // 0x12ca38: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12CA38u;
    {
        const bool branch_taken_0x12ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA38u;
            // 0x12ca3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca38) {
            ctx->pc = 0x12CA98u;
            goto label_12ca98;
        }
    }
    ctx->pc = 0x12CA40u;
label_12ca40:
    // 0x12ca40: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12ca44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12CA44u;
    {
        const bool branch_taken_0x12ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA44u;
            // 0x12ca48: 0x24425730  addiu       $v0, $v0, 0x5730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca44) {
            ctx->pc = 0x12CA54u;
            goto label_12ca54;
        }
    }
    ctx->pc = 0x12CA4Cu;
label_12ca4c:
    // 0x12ca4c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12ca50: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x12ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
label_12ca54:
    // 0x12ca54: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x12ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x12ca58: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x12ca58u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)16u)));
    // 0x12ca5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CA5Cu;
    {
        const bool branch_taken_0x12ca5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA5Cu;
            // 0x12ca60: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca5c) {
            ctx->pc = 0x12CA70u;
            goto label_12ca70;
        }
    }
    ctx->pc = 0x12CA64u;
    // 0x12ca64: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12ca64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12ca68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12CA68u;
    {
        const bool branch_taken_0x12ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA68u;
            // 0x12ca6c: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca68) {
            ctx->pc = 0x12CA84u;
            goto label_12ca84;
        }
    }
    ctx->pc = 0x12CA70u;
label_12ca70:
    // 0x12ca70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CA70u;
    {
        const bool branch_taken_0x12ca70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA70u;
            // 0x12ca74: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca70) {
            ctx->pc = 0x12CA80u;
            goto label_12ca80;
        }
    }
    ctx->pc = 0x12CA78u;
    // 0x12ca78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CA78u;
    {
        const bool branch_taken_0x12ca78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA78u;
            // 0x12ca7c: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca78) {
            ctx->pc = 0x12CA84u;
            goto label_12ca84;
        }
    }
    ctx->pc = 0x12CA80u;
label_12ca80:
    // 0x12ca80: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x12ca80u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12ca84:
    // 0x12ca84: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x12ca84u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x12ca88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CA88u;
    {
        const bool branch_taken_0x12ca88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA88u;
            // 0x12ca8c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca88) {
            ctx->pc = 0x12CA98u;
            goto label_12ca98;
        }
    }
    ctx->pc = 0x12CA90u;
    // 0x12ca90: 0x37c20002  ori         $v0, $fp, 0x2
    ctx->pc = 0x12ca90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)2u)));
    // 0x12ca94: 0x50f00b  movn        $fp, $v0, $s0
    ctx->pc = 0x12ca94u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_12ca98:
    // 0x12ca98: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12ca98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_12ca9c:
    // 0x12ca9c: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CA9Cu;
    {
        const bool branch_taken_0x12ca9c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x12CAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CA9Cu;
            // 0x12caa0: 0xafb2020c  sw          $s2, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca9c) {
            ctx->pc = 0x12CAACu;
            goto label_12caac;
        }
    }
    ctx->pc = 0x12CAA4u;
    // 0x12caa4: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x12caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x12caa8: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x12caa8u;
    SET_GPR_VEC(ctx, 30, PS2_PAND(GPR_VEC(ctx, 30), GPR_VEC(ctx, 2)));
label_12caac:
    // 0x12caac: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CAACu;
    {
        const bool branch_taken_0x12caac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAACu;
            // 0x12cab0: 0x27b301bc  addiu       $s3, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12caac) {
            ctx->pc = 0x12CAC0u;
            goto label_12cac0;
        }
    }
    ctx->pc = 0x12CAB4u;
    // 0x12cab4: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x12cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x12cab8: 0x10a0004d  beqz        $a1, . + 4 + (0x4D << 2)
    ctx->pc = 0x12CAB8u;
    {
        const bool branch_taken_0x12cab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAB8u;
            // 0x12cabc: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cab8) {
            ctx->pc = 0x12CBF0u;
            goto label_12cbf0;
        }
    }
    ctx->pc = 0x12CAC0u;
label_12cac0:
    // 0x12cac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cac4: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12CAC4u;
    {
        const bool branch_taken_0x12cac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12CAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAC4u;
            // 0x12cac8: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cac4) {
            ctx->pc = 0x12CB44u;
            goto label_12cb44;
        }
    }
    ctx->pc = 0x12CACCu;
    // 0x12cacc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x12CACCu;
    {
        const bool branch_taken_0x12cacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CACCu;
            // 0x12cad0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cacc) {
            ctx->pc = 0x12CAF8u;
            goto label_12caf8;
        }
    }
    ctx->pc = 0x12CAD4u;
    // 0x12cad4: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x12CAD4u;
    {
        const bool branch_taken_0x12cad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12CAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAD4u;
            // 0x12cad8: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cad4) {
            ctx->pc = 0x12CBB4u;
            goto label_12cbb4;
        }
    }
    ctx->pc = 0x12CADCu;
    // 0x12cadc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12cadcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12cae0: 0x24535748  addiu       $s3, $v0, 0x5748
    ctx->pc = 0x12cae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 22344));
    // 0x12cae4: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12cae4u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
    // 0x12cae8: 0xc04aeac  jal         func_12BAB0
    ctx->pc = 0x12CAE8u;
    SET_GPR_U32(ctx, 31, 0x12CAF0u);
    ctx->pc = 0x12CAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAE8u;
            // 0x12caec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BAB0u;
    if (runtime->hasFunction(0x12BAB0u)) {
        auto targetFn = runtime->lookupFunction(0x12BAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CAF0u; }
        if (ctx->pc != 0x12CAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x12bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CAF0u; }
        if (ctx->pc != 0x12CAF0u) { return; }
    }
    ctx->pc = 0x12CAF0u;
    // 0x12caf0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x12CAF0u;
    {
        const bool branch_taken_0x12caf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAF0u;
            // 0x12caf4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12caf0) {
            ctx->pc = 0x12CC20u;
            goto label_12cc20;
        }
    }
    ctx->pc = 0x12CAF8u;
label_12caf8:
    // 0x12caf8: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12caf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12cafc: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12cafcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12cb00: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x12cb00u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x12cb04: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12cb04u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
label_12cb08:
    // 0x12cb08: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x12cb08u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)7u)));
    // 0x12cb0c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12cb0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12cb10: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x12cb10u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x12cb14: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x12cb14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x12cb18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12cb18u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x12cb1c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x12cb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12cb20: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12CB20u;
    {
        const bool branch_taken_0x12cb20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb20) {
            ctx->pc = 0x12CB08u;
            goto label_12cb08;
        }
    }
    ctx->pc = 0x12CB28u;
    // 0x12cb28: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x12CB28u;
    {
        const bool branch_taken_0x12cb28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB28u;
            // 0x12cb2c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb28) {
            ctx->pc = 0x12CBF8u;
            goto label_12cbf8;
        }
    }
    ctx->pc = 0x12CB30u;
    // 0x12cb30: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x12CB30u;
    {
        const bool branch_taken_0x12cb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12CB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB30u;
            // 0x12cb34: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb30) {
            ctx->pc = 0x12CBFCu;
            goto label_12cbfc;
        }
    }
    ctx->pc = 0x12CB38u;
    // 0x12cb38: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12cb38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12cb3c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x12CB3Cu;
    {
        const bool branch_taken_0x12cb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB3Cu;
            // 0x12cb40: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb3c) {
            ctx->pc = 0x12CBF8u;
            goto label_12cbf8;
        }
    }
    ctx->pc = 0x12CB44u;
label_12cb44:
    // 0x12cb44: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12CB44u;
    {
        const bool branch_taken_0x12cb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB44u;
            // 0x12cb48: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb44) {
            ctx->pc = 0x12CB98u;
            goto label_12cb98;
        }
    }
    ctx->pc = 0x12CB4Cu;
    // 0x12cb4c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12cb4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12cb50: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12cb50u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
    // 0x12cb54: 0x0  nop
    ctx->pc = 0x12cb54u;
    // NOP
label_12cb58:
    // 0x12cb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb5c: 0xc04a0b4  jal         func_1282D0
    ctx->pc = 0x12CB5Cu;
    SET_GPR_U32(ctx, 31, 0x12CB64u);
    ctx->pc = 0x12CB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB5Cu;
            // 0x12cb60: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1282D0u;
    if (runtime->hasFunction(0x1282D0u)) {
        auto targetFn = runtime->lookupFunction(0x1282D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB64u; }
        if (ctx->pc != 0x12CB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x1282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB64u; }
        if (ctx->pc != 0x12CB64u) { return; }
    }
    ctx->pc = 0x12CB64u;
    // 0x12cb64: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12cb64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12cb68: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x12cb68u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x12cb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12cb70u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x12cb74: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12cb78: 0xc049f40  jal         func_127D00
    ctx->pc = 0x12CB78u;
    SET_GPR_U32(ctx, 31, 0x12CB80u);
    ctx->pc = 0x12CB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB78u;
            // 0x12cb7c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127D00u;
    if (runtime->hasFunction(0x127D00u)) {
        auto targetFn = runtime->lookupFunction(0x127D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB80u; }
        if (ctx->pc != 0x12CB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x127d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB80u; }
        if (ctx->pc != 0x12CB80u) { return; }
    }
    ctx->pc = 0x12CB80u;
    // 0x12cb80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12cb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cb84: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x12cb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12cb88: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x12CB88u;
    {
        const bool branch_taken_0x12cb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB88u;
            // 0x12cb8c: 0x66020030  daddiu      $v0, $s0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb88) {
            ctx->pc = 0x12CB58u;
            goto label_12cb58;
        }
    }
    ctx->pc = 0x12CB90u;
    // 0x12cb90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12CB90u;
    {
        const bool branch_taken_0x12cb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CB90u;
            // 0x12cb94: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb90) {
            ctx->pc = 0x12CBA8u;
            goto label_12cba8;
        }
    }
    ctx->pc = 0x12CB98u;
label_12cb98:
    // 0x12cb98: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12cb98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12cb9c: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12cb9cu;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
    // 0x12cba0: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x12cba0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x12cba4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12cba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_12cba8:
    // 0x12cba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12cba8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x12cbac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12CBACu;
    {
        const bool branch_taken_0x12cbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBACu;
            // 0x12cbb0: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbac) {
            ctx->pc = 0x12CBF8u;
            goto label_12cbf8;
        }
    }
    ctx->pc = 0x12CBB4u;
label_12cbb4:
    // 0x12cbb4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12cbb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12cbb8: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12cbb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12cbbc: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12cbbcu;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
label_12cbc0:
    // 0x12cbc0: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x12cbc0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)15u)));
    // 0x12cbc4: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x12cbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x12cbc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12cbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12cbcc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12cbccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12cbd0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12cbd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12cbd4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12cbd8: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x12cbd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x12cbdc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x12cbdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cbe0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12CBE0u;
    {
        const bool branch_taken_0x12cbe0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBE0u;
            // 0x12cbe4: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbe0) {
            ctx->pc = 0x12CBC0u;
            goto label_12cbc0;
        }
    }
    ctx->pc = 0x12CBE8u;
    // 0x12cbe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12CBE8u;
    {
        const bool branch_taken_0x12cbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBE8u;
            // 0x12cbec: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbe8) {
            ctx->pc = 0x12CBFCu;
            goto label_12cbfc;
        }
    }
    ctx->pc = 0x12CBF0u;
label_12cbf0:
    // 0x12cbf0: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x12cbf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12cbf4: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12cbf4u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
label_12cbf8:
    // 0x12cbf8: 0x2662fea4  addiu       $v0, $s3, -0x15C
    ctx->pc = 0x12cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
label_12cbfc:
    // 0x12cbfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12CBFCu;
    {
        const bool branch_taken_0x12cbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBFCu;
            // 0x12cc00: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbfc) {
            ctx->pc = 0x12CC20u;
            goto label_12cc20;
        }
    }
    ctx->pc = 0x12CC04u;
label_12cc04:
    // 0x12cc04: 0x12e002fc  beqz        $s7, . + 4 + (0x2FC << 2)
    ctx->pc = 0x12CC04u;
    {
        const bool branch_taken_0x12cc04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC04u;
            // 0x12cc08: 0x27b30060  addiu       $s3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc04) {
            ctx->pc = 0x12D7F8u;
            goto label_12d7f8;
        }
    }
    ctx->pc = 0x12CC0Cu;
    // 0x12cc0c: 0xa3b70060  sb          $s7, 0x60($sp)
    ctx->pc = 0x12cc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 23));
    // 0x12cc10: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x12cc10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12cc14:
    // 0x12cc14: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x12cc14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_12cc18:
    // 0x12cc18: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12cc18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_12cc1c:
    // 0x12cc1c: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x12cc1cu;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)132u)));
label_12cc20:
    // 0x12cc20: 0xafb50210  sw          $s5, 0x210($sp)
    ctx->pc = 0x12cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 21));
    // 0x12cc24: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x12cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x12cc28: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x12cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x12cc2c: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x12cc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12cc30: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x12cc30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12cc34: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x12cc34u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x12cc38: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x12cc38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12cc3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CC3Cu;
    {
        const bool branch_taken_0x12cc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC3Cu;
            // 0x12cc40: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc3c) {
            ctx->pc = 0x12CC50u;
            goto label_12cc50;
        }
    }
    ctx->pc = 0x12CC44u;
    // 0x12cc44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12cc48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12CC48u;
    {
        const bool branch_taken_0x12cc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC48u;
            // 0x12cc4c: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc48) {
            ctx->pc = 0x12CC60u;
            goto label_12cc60;
        }
    }
    ctx->pc = 0x12CC50u;
label_12cc50:
    // 0x12cc50: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x12cc50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12cc54: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x12cc54u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)2u)));
    // 0x12cc58: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x12cc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12cc5c: 0xafa60210  sw          $a2, 0x210($sp)
    ctx->pc = 0x12cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
label_12cc60:
    // 0x12cc60: 0x16c00037  bnez        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x12CC60u;
    {
        const bool branch_taken_0x12cc60 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC60u;
            // 0x12cc64: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc60) {
            ctx->pc = 0x12CD40u;
            goto label_12cd40;
        }
    }
    ctx->pc = 0x12CC68u;
    // 0x12cc68: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x12cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12cc6c: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x12cc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12cc70: 0x1a000033  blez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x12CC70u;
    {
        const bool branch_taken_0x12cc70 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12CC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC70u;
            // 0x12cc74: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc70) {
            ctx->pc = 0x12CD40u;
            goto label_12cd40;
        }
    }
    ctx->pc = 0x12CC78u;
    // 0x12cc78: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12CC78u;
    {
        const bool branch_taken_0x12cc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC78u;
            // 0x12cc7c: 0x3c060017  lui         $a2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc78) {
            ctx->pc = 0x12CCE8u;
            goto label_12cce8;
        }
    }
    ctx->pc = 0x12CC80u;
    // 0x12cc80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CC80u;
    {
        const bool branch_taken_0x12cc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CC80u;
            // 0x12cc84: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc80) {
            ctx->pc = 0x12CC8Cu;
            goto label_12cc8c;
        }
    }
    ctx->pc = 0x12CC88u;
label_12cc88:
    // 0x12cc88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12cc8c:
    // 0x12cc8c: 0x24c456e0  addiu       $a0, $a2, 0x56E0
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 22240));
    // 0x12cc90: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12cc94: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12cc98: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12cc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cca0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12cca4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12cca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ccac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12ccb0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12ccb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ccb4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CCB4u;
    {
        const bool branch_taken_0x12ccb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCB4u;
            // 0x12ccb8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccb4) {
            ctx->pc = 0x12CCD8u;
            goto label_12ccd8;
        }
    }
    ctx->pc = 0x12CCBCu;
    // 0x12ccbc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ccc0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12ccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12ccc4: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12CCC4u;
    SET_GPR_U32(ctx, 31, 0x12CCCCu);
    ctx->pc = 0x12CCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCC4u;
            // 0x12ccc8: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CCCCu; }
        if (ctx->pc != 0x12CCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CCCCu; }
        if (ctx->pc != 0x12CCCCu) { return; }
    }
    ctx->pc = 0x12CCCCu;
    // 0x12cccc: 0x144002d2  bnez        $v0, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x12CCCCu;
    {
        const bool branch_taken_0x12cccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCCCu;
            // 0x12ccd0: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cccc) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CCD4u;
    // 0x12ccd4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x12ccd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12ccd8:
    // 0x12ccd8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12ccd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12ccdc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12ccdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12cce0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12CCE0u;
    {
        const bool branch_taken_0x12cce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CCE0u;
            // 0x12cce4: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cce0) {
            ctx->pc = 0x12CC88u;
            goto label_12cc88;
        }
    }
    ctx->pc = 0x12CCE8u;
label_12cce8:
    // 0x12cce8: 0x24c256e0  addiu       $v0, $a2, 0x56E0
    ctx->pc = 0x12cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 22240));
    // 0x12ccec: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12ccf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12ccf4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12ccf8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12ccf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cd00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12cd04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12cd08: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12cd08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cd0c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12cd10: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12CD10u;
    {
        const bool branch_taken_0x12cd10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD10u;
            // 0x12cd14: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd10) {
            ctx->pc = 0x12CD38u;
            goto label_12cd38;
        }
    }
    ctx->pc = 0x12CD18u;
    // 0x12cd18: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12cd1c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12CD1Cu;
    SET_GPR_U32(ctx, 31, 0x12CD24u);
    ctx->pc = 0x12CD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD1Cu;
            // 0x12cd20: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CD24u; }
        if (ctx->pc != 0x12CD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CD24u; }
        if (ctx->pc != 0x12CD24u) { return; }
    }
    ctx->pc = 0x12CD24u;
    // 0x12cd24: 0x144002bc  bnez        $v0, . + 4 + (0x2BC << 2)
    ctx->pc = 0x12CD24u;
    {
        const bool branch_taken_0x12cd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD24u;
            // 0x12cd28: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd24) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CD2Cu;
    // 0x12cd2c: 0x27b20028  addiu       $s2, $sp, 0x28
    ctx->pc = 0x12cd2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x12cd30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12CD30u;
    {
        const bool branch_taken_0x12cd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD30u;
            // 0x12cd34: 0x93a401d1  lbu         $a0, 0x1D1($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd30) {
            ctx->pc = 0x12CD40u;
            goto label_12cd40;
        }
    }
    ctx->pc = 0x12CD38u;
label_12cd38:
    // 0x12cd38: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x12cd38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x12cd3c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12cd3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_12cd40:
    // 0x12cd40: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x12CD40u;
    {
        const bool branch_taken_0x12cd40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD40u;
            // 0x12cd44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd40) {
            ctx->pc = 0x12CD80u;
            goto label_12cd80;
        }
    }
    ctx->pc = 0x12CD48u;
    // 0x12cd48: 0x27a401d1  addiu       $a0, $sp, 0x1D1
    ctx->pc = 0x12cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x12cd4c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12cd50: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12cd54: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12cd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cd5c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12cd60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12cd64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12cd68: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12cd6c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12cd6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cd70: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12CD70u;
    {
        const bool branch_taken_0x12cd70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD70u;
            // 0x12cd74: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd70) {
            ctx->pc = 0x12CDE4u;
            goto label_12cde4;
        }
    }
    ctx->pc = 0x12CD78u;
    // 0x12cd78: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12CD78u;
    {
        const bool branch_taken_0x12cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD78u;
            // 0x12cd7c: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd78) {
            ctx->pc = 0x12CDCCu;
            goto label_12cdcc;
        }
    }
    ctx->pc = 0x12CD80u;
label_12cd80:
    // 0x12cd80: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x12cd80u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)2u)));
    // 0x12cd84: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12CD84u;
    {
        const bool branch_taken_0x12cd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD84u;
            // 0x12cd88: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd84) {
            ctx->pc = 0x12CDE8u;
            goto label_12cde8;
        }
    }
    ctx->pc = 0x12CD8Cu;
    // 0x12cd8c: 0xa3b701c1  sb          $s7, 0x1C1($sp)
    ctx->pc = 0x12cd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 23));
    // 0x12cd90: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x12cd90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x12cd94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cd98: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x12cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x12cd9c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12cda0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x12cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x12cda4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12cda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cda8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cdac: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12cdb0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x12cdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x12cdb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12cdb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12cdbc: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x12cdbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cdc0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CDC0u;
    {
        const bool branch_taken_0x12cdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CDC0u;
            // 0x12cdc4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdc0) {
            ctx->pc = 0x12CDE4u;
            goto label_12cde4;
        }
    }
    ctx->pc = 0x12CDC8u;
    // 0x12cdc8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12cdcc:
    // 0x12cdcc: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12CDCCu;
    SET_GPR_U32(ctx, 31, 0x12CDD4u);
    ctx->pc = 0x12CDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CDCCu;
            // 0x12cdd0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDD4u; }
        if (ctx->pc != 0x12CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDD4u; }
        if (ctx->pc != 0x12CDD4u) { return; }
    }
    ctx->pc = 0x12CDD4u;
    // 0x12cdd4: 0x14400290  bnez        $v0, . + 4 + (0x290 << 2)
    ctx->pc = 0x12CDD4u;
    {
        const bool branch_taken_0x12cdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CDD4u;
            // 0x12cdd8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdd4) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CDDCu;
    // 0x12cddc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CDDCu;
    {
        const bool branch_taken_0x12cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CDDCu;
            // 0x12cde0: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cddc) {
            ctx->pc = 0x12CDE8u;
            goto label_12cde8;
        }
    }
    ctx->pc = 0x12CDE4u;
label_12cde4:
    // 0x12cde4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12cde4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_12cde8:
    // 0x12cde8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x12cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12cdec: 0x16c20035  bne         $s6, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x12CDECu;
    {
        const bool branch_taken_0x12cdec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x12CDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CDECu;
            // 0x12cdf0: 0x8fa6020c  lw          $a2, 0x20C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdec) {
            ctx->pc = 0x12CEC4u;
            goto label_12cec4;
        }
    }
    ctx->pc = 0x12CDF4u;
    // 0x12cdf4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12cdf8: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x12cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12cdfc: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x12cdfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12ce00: 0x1a000030  blez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x12CE00u;
    {
        const bool branch_taken_0x12ce00 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12CE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE00u;
            // 0x12ce04: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce00) {
            ctx->pc = 0x12CEC4u;
            goto label_12cec4;
        }
    }
    ctx->pc = 0x12CE08u;
    // 0x12ce08: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12CE08u;
    {
        const bool branch_taken_0x12ce08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE08u;
            // 0x12ce0c: 0x3c160017  lui         $s6, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce08) {
            ctx->pc = 0x12CE70u;
            goto label_12ce70;
        }
    }
    ctx->pc = 0x12CE10u;
    // 0x12ce10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CE10u;
    {
        const bool branch_taken_0x12ce10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE10u;
            // 0x12ce14: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce10) {
            ctx->pc = 0x12CE1Cu;
            goto label_12ce1c;
        }
    }
    ctx->pc = 0x12CE18u;
label_12ce18:
    // 0x12ce18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12ce1c:
    // 0x12ce1c: 0x26c456f0  addiu       $a0, $s6, 0x56F0
    ctx->pc = 0x12ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12ce20: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12ce24: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12ce28: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12ce28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ce30: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12ce34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12ce38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ce3c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12ce40: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12ce40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ce44: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CE44u;
    {
        const bool branch_taken_0x12ce44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE44u;
            // 0x12ce48: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce44) {
            ctx->pc = 0x12CE60u;
            goto label_12ce60;
        }
    }
    ctx->pc = 0x12CE4Cu;
    // 0x12ce4c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12ce50: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12CE50u;
    SET_GPR_U32(ctx, 31, 0x12CE58u);
    ctx->pc = 0x12CE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE50u;
            // 0x12ce54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CE58u; }
        if (ctx->pc != 0x12CE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CE58u; }
        if (ctx->pc != 0x12CE58u) { return; }
    }
    ctx->pc = 0x12CE58u;
    // 0x12ce58: 0x1440026f  bnez        $v0, . + 4 + (0x26F << 2)
    ctx->pc = 0x12CE58u;
    {
        const bool branch_taken_0x12ce58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE58u;
            // 0x12ce5c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce58) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CE60u;
label_12ce60:
    // 0x12ce60: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12ce60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12ce64: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12ce64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12ce68: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12CE68u;
    {
        const bool branch_taken_0x12ce68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE68u;
            // 0x12ce6c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce68) {
            ctx->pc = 0x12CE18u;
            goto label_12ce18;
        }
    }
    ctx->pc = 0x12CE70u;
label_12ce70:
    // 0x12ce70: 0x26c256f0  addiu       $v0, $s6, 0x56F0
    ctx->pc = 0x12ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12ce74: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12ce78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12ce7c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12ce80: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12ce80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ce88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ce8c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12ce90: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12ce90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12ce94: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12ce98: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CE98u;
    {
        const bool branch_taken_0x12ce98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE98u;
            // 0x12ce9c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce98) {
            ctx->pc = 0x12CEBCu;
            goto label_12cebc;
        }
    }
    ctx->pc = 0x12CEA0u;
    // 0x12cea0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12cea4: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12CEA4u;
    SET_GPR_U32(ctx, 31, 0x12CEACu);
    ctx->pc = 0x12CEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CEA4u;
            // 0x12cea8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEACu; }
        if (ctx->pc != 0x12CEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEACu; }
        if (ctx->pc != 0x12CEACu) { return; }
    }
    ctx->pc = 0x12CEACu;
    // 0x12ceac: 0x1440025a  bnez        $v0, . + 4 + (0x25A << 2)
    ctx->pc = 0x12CEACu;
    {
        const bool branch_taken_0x12ceac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CEACu;
            // 0x12ceb0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ceac) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CEB4u;
    // 0x12ceb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CEB4u;
    {
        const bool branch_taken_0x12ceb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CEB4u;
            // 0x12ceb8: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ceb4) {
            ctx->pc = 0x12CEC0u;
            goto label_12cec0;
        }
    }
    ctx->pc = 0x12CEBCu;
label_12cebc:
    // 0x12cebc: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12cebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_12cec0:
    // 0x12cec0: 0x8fa6020c  lw          $a2, 0x20C($sp)
    ctx->pc = 0x12cec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_12cec4:
    // 0x12cec4: 0xd58023  subu        $s0, $a2, $s5
    ctx->pc = 0x12cec4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x12cec8: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12CEC8u;
    {
        const bool branch_taken_0x12cec8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12CECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CEC8u;
            // 0x12cecc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cec8) {
            ctx->pc = 0x12CF88u;
            goto label_12cf88;
        }
    }
    ctx->pc = 0x12CED0u;
    // 0x12ced0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12CED0u;
    {
        const bool branch_taken_0x12ced0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CED0u;
            // 0x12ced4: 0x3c160017  lui         $s6, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ced0) {
            ctx->pc = 0x12CF38u;
            goto label_12cf38;
        }
    }
    ctx->pc = 0x12CED8u;
    // 0x12ced8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CED8u;
    {
        const bool branch_taken_0x12ced8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CED8u;
            // 0x12cedc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ced8) {
            ctx->pc = 0x12CEE4u;
            goto label_12cee4;
        }
    }
    ctx->pc = 0x12CEE0u;
label_12cee0:
    // 0x12cee0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12cee4:
    // 0x12cee4: 0x26c456f0  addiu       $a0, $s6, 0x56F0
    ctx->pc = 0x12cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12cee8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12ceec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12cef0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12cef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cef4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cef8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12cefc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12cf00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12cf04: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12cf08: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12cf08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cf0c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CF0Cu;
    {
        const bool branch_taken_0x12cf0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF0Cu;
            // 0x12cf10: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf0c) {
            ctx->pc = 0x12CF28u;
            goto label_12cf28;
        }
    }
    ctx->pc = 0x12CF14u;
    // 0x12cf14: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12cf18: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12CF18u;
    SET_GPR_U32(ctx, 31, 0x12CF20u);
    ctx->pc = 0x12CF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF18u;
            // 0x12cf1c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF20u; }
        if (ctx->pc != 0x12CF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF20u; }
        if (ctx->pc != 0x12CF20u) { return; }
    }
    ctx->pc = 0x12CF20u;
    // 0x12cf20: 0x1440023d  bnez        $v0, . + 4 + (0x23D << 2)
    ctx->pc = 0x12CF20u;
    {
        const bool branch_taken_0x12cf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF20u;
            // 0x12cf24: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf20) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CF28u;
label_12cf28:
    // 0x12cf28: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12cf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12cf2c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12cf2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12cf30: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12CF30u;
    {
        const bool branch_taken_0x12cf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF30u;
            // 0x12cf34: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf30) {
            ctx->pc = 0x12CEE0u;
            goto label_12cee0;
        }
    }
    ctx->pc = 0x12CF38u;
label_12cf38:
    // 0x12cf38: 0x26c256f0  addiu       $v0, $s6, 0x56F0
    ctx->pc = 0x12cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12cf3c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12cf40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12cf44: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12cf48: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12cf48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cf50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12cf54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12cf58: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12cf58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cf5c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12cf60: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CF60u;
    {
        const bool branch_taken_0x12cf60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF60u;
            // 0x12cf64: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf60) {
            ctx->pc = 0x12CF84u;
            goto label_12cf84;
        }
    }
    ctx->pc = 0x12CF68u;
    // 0x12cf68: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12cf6c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12CF6Cu;
    SET_GPR_U32(ctx, 31, 0x12CF74u);
    ctx->pc = 0x12CF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF6Cu;
            // 0x12cf70: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF74u; }
        if (ctx->pc != 0x12CF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF74u; }
        if (ctx->pc != 0x12CF74u) { return; }
    }
    ctx->pc = 0x12CF74u;
    // 0x12cf74: 0x14400228  bnez        $v0, . + 4 + (0x228 << 2)
    ctx->pc = 0x12CF74u;
    {
        const bool branch_taken_0x12cf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF74u;
            // 0x12cf78: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf74) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CF7Cu;
    // 0x12cf7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12CF7Cu;
    {
        const bool branch_taken_0x12cf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF7Cu;
            // 0x12cf80: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf7c) {
            ctx->pc = 0x12CF88u;
            goto label_12cf88;
        }
    }
    ctx->pc = 0x12CF84u;
label_12cf84:
    // 0x12cf84: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12cf84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_12cf88:
    // 0x12cf88: 0x33c20100  andi        $v0, $fp, 0x100
    ctx->pc = 0x12cf88u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)256u)));
    // 0x12cf8c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CF8Cu;
    {
        const bool branch_taken_0x12cf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cf8c) {
            ctx->pc = 0x12CF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF8Cu;
            // 0x12cf90: 0x2ae20066  slti        $v0, $s7, 0x66 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12CFB0u;
            goto label_12cfb0;
        }
    }
    ctx->pc = 0x12CF94u;
    // 0x12cf94: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x12cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x12cf98: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12cf9c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12cf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cfa4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12cfa8: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x12CFA8u;
    {
        const bool branch_taken_0x12cfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFA8u;
            // 0x12cfac: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfa8) {
            ctx->pc = 0x12D6B8u;
            goto label_12d6b8;
        }
    }
    ctx->pc = 0x12CFB0u;
label_12cfb0:
    // 0x12cfb0: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x12CFB0u;
    {
        const bool branch_taken_0x12cfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFB0u;
            // 0x12cfb4: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfb0) {
            ctx->pc = 0x12D4ECu;
            goto label_12d4ec;
        }
    }
    ctx->pc = 0x12CFB8u;
    // 0x12cfb8: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x12cfb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12cfbc: 0xc04a482  jal         func_129208
    ctx->pc = 0x12CFBCu;
    SET_GPR_U32(ctx, 31, 0x12CFC4u);
    ctx->pc = 0x12CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFBCu;
            // 0x12cfc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CFC4u; }
        if (ctx->pc != 0x12CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CFC4u; }
        if (ctx->pc != 0x12CFC4u) { return; }
    }
    ctx->pc = 0x12CFC4u;
    // 0x12cfc4: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x12CFC4u;
    {
        const bool branch_taken_0x12cfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFC4u;
            // 0x12cfc8: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfc4) {
            ctx->pc = 0x12D128u;
            goto label_12d128;
        }
    }
    ctx->pc = 0x12CFCCu;
    // 0x12cfcc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12cfd0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12cfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cfd4: 0x24425768  addiu       $v0, $v0, 0x5768
    ctx->pc = 0x12cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22376));
    // 0x12cfd8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12cfdc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12cfe0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12cfe4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12cfe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cfec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12cff0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12cff4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12cff4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12cff8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12cffc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CFFCu;
    {
        const bool branch_taken_0x12cffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFFCu;
            // 0x12d000: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cffc) {
            ctx->pc = 0x12D018u;
            goto label_12d018;
        }
    }
    ctx->pc = 0x12D004u;
    // 0x12d004: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d008: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D008u;
    SET_GPR_U32(ctx, 31, 0x12D010u);
    ctx->pc = 0x12D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D008u;
            // 0x12d00c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D010u; }
        if (ctx->pc != 0x12D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D010u; }
        if (ctx->pc != 0x12D010u) { return; }
    }
    ctx->pc = 0x12D010u;
    // 0x12d010: 0x14400201  bnez        $v0, . + 4 + (0x201 << 2)
    ctx->pc = 0x12D010u;
    {
        const bool branch_taken_0x12d010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D010u;
            // 0x12d014: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d010) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D018u;
label_12d018:
    // 0x12d018: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12d01c: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x12d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12d020: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x12d020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12d024: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D024u;
    {
        const bool branch_taken_0x12d024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d024) {
            ctx->pc = 0x12D028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D024u;
            // 0x12d028: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D03Cu;
            goto label_12d03c;
        }
    }
    ctx->pc = 0x12D02Cu;
    // 0x12d02c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x12d02cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x12d030: 0x104001ad  beqz        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x12D030u;
    {
        const bool branch_taken_0x12d030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D030u;
            // 0x12d034: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d030) {
            ctx->pc = 0x12D6E8u;
            goto label_12d6e8;
        }
    }
    ctx->pc = 0x12D038u;
    // 0x12d038: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12d038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d03c:
    // 0x12d03c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x12d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12d040: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d044: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d048: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d04c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d050: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d054: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d058: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12d058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12d05c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12d05cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d060: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D060u;
    {
        const bool branch_taken_0x12d060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D060u;
            // 0x12d064: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d060) {
            ctx->pc = 0x12D07Cu;
            goto label_12d07c;
        }
    }
    ctx->pc = 0x12D068u;
    // 0x12d068: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d06c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D06Cu;
    SET_GPR_U32(ctx, 31, 0x12D074u);
    ctx->pc = 0x12D070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D06Cu;
            // 0x12d070: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D074u; }
        if (ctx->pc != 0x12D074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D074u; }
        if (ctx->pc != 0x12D074u) { return; }
    }
    ctx->pc = 0x12D074u;
    // 0x12d074: 0x144001e8  bnez        $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x12D074u;
    {
        const bool branch_taken_0x12d074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D074u;
            // 0x12d078: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d074) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D07Cu;
label_12d07c:
    // 0x12d07c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12d080: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d084: 0x1a000197  blez        $s0, . + 4 + (0x197 << 2)
    ctx->pc = 0x12D084u;
    {
        const bool branch_taken_0x12d084 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12D088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D084u;
            // 0x12d088: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d084) {
            ctx->pc = 0x12D6E4u;
            goto label_12d6e4;
        }
    }
    ctx->pc = 0x12D08Cu;
    // 0x12d08c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D08Cu;
    {
        const bool branch_taken_0x12d08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D08Cu;
            // 0x12d090: 0x3c160017  lui         $s6, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d08c) {
            ctx->pc = 0x12D0F8u;
            goto label_12d0f8;
        }
    }
    ctx->pc = 0x12D094u;
    // 0x12d094: 0x0  nop
    ctx->pc = 0x12d094u;
    // NOP
label_12d098:
    // 0x12d098: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12d098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d09c: 0x26c456f0  addiu       $a0, $s6, 0x56F0
    ctx->pc = 0x12d09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12d0a0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12d0a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12d0a8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d0ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d0b0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d0b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12d0b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d0bc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d0c0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d0c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d0c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D0C4u;
    {
        const bool branch_taken_0x12d0c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0C4u;
            // 0x12d0c8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0c4) {
            ctx->pc = 0x12D0E0u;
            goto label_12d0e0;
        }
    }
    ctx->pc = 0x12D0CCu;
    // 0x12d0cc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d0d0: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D0D0u;
    SET_GPR_U32(ctx, 31, 0x12D0D8u);
    ctx->pc = 0x12D0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0D0u;
            // 0x12d0d4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D0D8u; }
        if (ctx->pc != 0x12D0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D0D8u; }
        if (ctx->pc != 0x12D0D8u) { return; }
    }
    ctx->pc = 0x12D0D8u;
    // 0x12d0d8: 0x144001cf  bnez        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x12D0D8u;
    {
        const bool branch_taken_0x12d0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0D8u;
            // 0x12d0dc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0d8) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D0E0u;
label_12d0e0:
    // 0x12d0e0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12d0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12d0e4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12d0e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12d0e8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12D0E8u;
    {
        const bool branch_taken_0x12d0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0E8u;
            // 0x12d0ec: 0x26c256f0  addiu       $v0, $s6, 0x56F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0e8) {
            ctx->pc = 0x12D098u;
            goto label_12d098;
        }
    }
    ctx->pc = 0x12D0F0u;
    // 0x12d0f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D0F0u;
    {
        const bool branch_taken_0x12d0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D0F0u;
            // 0x12d0f4: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0f0) {
            ctx->pc = 0x12D100u;
            goto label_12d100;
        }
    }
    ctx->pc = 0x12D0F8u;
label_12d0f8:
    // 0x12d0f8: 0x26c256f0  addiu       $v0, $s6, 0x56F0
    ctx->pc = 0x12d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12d0fc: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d100:
    // 0x12d100: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d104: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d108: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d10c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d114: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12d118: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d118u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d11c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d120: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x12D120u;
    {
        const bool branch_taken_0x12d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D120u;
            // 0x12d124: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d120) {
            ctx->pc = 0x12D6C8u;
            goto label_12d6c8;
        }
    }
    ctx->pc = 0x12D128u;
label_12d128:
    // 0x12d128: 0x1c600063  bgtz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x12D128u;
    {
        const bool branch_taken_0x12d128 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x12D12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D128u;
            // 0x12d12c: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d128) {
            ctx->pc = 0x12D2B8u;
            goto label_12d2b8;
        }
    }
    ctx->pc = 0x12D130u;
    // 0x12d130: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12d130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12d134: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12d134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d138: 0x24425768  addiu       $v0, $v0, 0x5768
    ctx->pc = 0x12d138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22376));
    // 0x12d13c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12d140: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d144: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d148: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12d148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d14c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d158: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d158u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d15c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d160: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D160u;
    {
        const bool branch_taken_0x12d160 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D160u;
            // 0x12d164: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d160) {
            ctx->pc = 0x12D17Cu;
            goto label_12d17c;
        }
    }
    ctx->pc = 0x12D168u;
    // 0x12d168: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d16c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D16Cu;
    SET_GPR_U32(ctx, 31, 0x12D174u);
    ctx->pc = 0x12D170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D16Cu;
            // 0x12d170: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D174u; }
        if (ctx->pc != 0x12D174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D174u; }
        if (ctx->pc != 0x12D174u) { return; }
    }
    ctx->pc = 0x12D174u;
    // 0x12d174: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x12D174u;
    {
        const bool branch_taken_0x12d174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D174u;
            // 0x12d178: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d174) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D17Cu;
label_12d17c:
    // 0x12d17c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x12d180: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x12d180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12d184: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x12d184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x12d188: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d18c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d190: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12d190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d194: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d19c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12d19cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d1a0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12d1a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D1A4u;
    {
        const bool branch_taken_0x12d1a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1A4u;
            // 0x12d1a8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1a4) {
            ctx->pc = 0x12D1C0u;
            goto label_12d1c0;
        }
    }
    ctx->pc = 0x12D1ACu;
    // 0x12d1ac: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d1b0: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D1B0u;
    SET_GPR_U32(ctx, 31, 0x12D1B8u);
    ctx->pc = 0x12D1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1B0u;
            // 0x12d1b4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1B8u; }
        if (ctx->pc != 0x12D1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1B8u; }
        if (ctx->pc != 0x12D1B8u) { return; }
    }
    ctx->pc = 0x12D1B8u;
    // 0x12d1b8: 0x14400197  bnez        $v0, . + 4 + (0x197 << 2)
    ctx->pc = 0x12D1B8u;
    {
        const bool branch_taken_0x12d1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1B8u;
            // 0x12d1bc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1b8) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D1C0u;
label_12d1c0:
    // 0x12d1c0: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12d1c4: 0x28023  negu        $s0, $v0
    ctx->pc = 0x12d1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12d1c8: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x12D1C8u;
    {
        const bool branch_taken_0x12d1c8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12D1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1C8u;
            // 0x12d1cc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1c8) {
            ctx->pc = 0x12D27Cu;
            goto label_12d27c;
        }
    }
    ctx->pc = 0x12D1D0u;
    // 0x12d1d0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12D1D0u;
    {
        const bool branch_taken_0x12d1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D1D0u;
            // 0x12d1d4: 0x3c160017  lui         $s6, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1d0) {
            ctx->pc = 0x12D238u;
            goto label_12d238;
        }
    }
    ctx->pc = 0x12D1D8u;
label_12d1d8:
    // 0x12d1d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d1dc: 0x26c456f0  addiu       $a0, $s6, 0x56F0
    ctx->pc = 0x12d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12d1e0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12d1e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12d1e8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d1ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d1f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d1f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12d1f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d1fc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d200: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d200u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d204: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D204u;
    {
        const bool branch_taken_0x12d204 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D204u;
            // 0x12d208: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d204) {
            ctx->pc = 0x12D220u;
            goto label_12d220;
        }
    }
    ctx->pc = 0x12D20Cu;
    // 0x12d20c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d210: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D210u;
    SET_GPR_U32(ctx, 31, 0x12D218u);
    ctx->pc = 0x12D214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D210u;
            // 0x12d214: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D218u; }
        if (ctx->pc != 0x12D218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D218u; }
        if (ctx->pc != 0x12D218u) { return; }
    }
    ctx->pc = 0x12D218u;
    // 0x12d218: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x12D218u;
    {
        const bool branch_taken_0x12d218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D218u;
            // 0x12d21c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d218) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D220u;
label_12d220:
    // 0x12d220: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12d220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12d224: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12d224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12d228: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12D228u;
    {
        const bool branch_taken_0x12d228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D228u;
            // 0x12d22c: 0x26c256f0  addiu       $v0, $s6, 0x56F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d228) {
            ctx->pc = 0x12D1D8u;
            goto label_12d1d8;
        }
    }
    ctx->pc = 0x12D230u;
    // 0x12d230: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D230u;
    {
        const bool branch_taken_0x12d230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D230u;
            // 0x12d234: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d230) {
            ctx->pc = 0x12D240u;
            goto label_12d240;
        }
    }
    ctx->pc = 0x12D238u;
label_12d238:
    // 0x12d238: 0x26c256f0  addiu       $v0, $s6, 0x56F0
    ctx->pc = 0x12d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12d23c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d240:
    // 0x12d240: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d244: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d248: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d24c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d254: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12d254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12d258: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d258u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d25c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d260: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D260u;
    {
        const bool branch_taken_0x12d260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D260u;
            // 0x12d264: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d260) {
            ctx->pc = 0x12D27Cu;
            goto label_12d27c;
        }
    }
    ctx->pc = 0x12D268u;
    // 0x12d268: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d26c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D26Cu;
    SET_GPR_U32(ctx, 31, 0x12D274u);
    ctx->pc = 0x12D270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D26Cu;
            // 0x12d270: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D274u; }
        if (ctx->pc != 0x12D274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D274u; }
        if (ctx->pc != 0x12D274u) { return; }
    }
    ctx->pc = 0x12D274u;
    // 0x12d274: 0x14400168  bnez        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x12D274u;
    {
        const bool branch_taken_0x12d274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D274u;
            // 0x12d278: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d274) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D27Cu;
label_12d27c:
    // 0x12d27c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12d280: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12d280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12d284: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12d284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12d288: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d28c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d290: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d294: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x12d294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12d298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d29c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12d2a0: 0x28450008  slti        $a1, $v0, 0x8
    ctx->pc = 0x12d2a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d2a4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d2a8: 0x14a0010e  bnez        $a1, . + 4 + (0x10E << 2)
    ctx->pc = 0x12D2A8u;
    {
        const bool branch_taken_0x12d2a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2A8u;
            // 0x12d2ac: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2a8) {
            ctx->pc = 0x12D6E4u;
            goto label_12d6e4;
        }
    }
    ctx->pc = 0x12D2B0u;
    // 0x12d2b0: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x12D2B0u;
    {
        const bool branch_taken_0x12d2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2B0u;
            // 0x12d2b4: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2b0) {
            ctx->pc = 0x12D6D4u;
            goto label_12d6d4;
        }
    }
    ctx->pc = 0x12D2B8u;
label_12d2b8:
    // 0x12d2b8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x12d2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12d2bc: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x12D2BCu;
    {
        const bool branch_taken_0x12d2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d2bc) {
            ctx->pc = 0x12D2C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2BCu;
            // 0x12d2c0: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D40Cu;
            goto label_12d40c;
        }
    }
    ctx->pc = 0x12D2C4u;
    // 0x12d2c4: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x12d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x12d2c8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12d2cc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12d2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d2d4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d2d8: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x12d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12d2dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d2e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12d2e4: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12d2e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d2e8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12d2ec: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D2ECu;
    {
        const bool branch_taken_0x12d2ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2ECu;
            // 0x12d2f0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2ec) {
            ctx->pc = 0x12D30Cu;
            goto label_12d30c;
        }
    }
    ctx->pc = 0x12D2F4u;
    // 0x12d2f4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d2f8: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D2F8u;
    SET_GPR_U32(ctx, 31, 0x12D300u);
    ctx->pc = 0x12D2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D2F8u;
            // 0x12d2fc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D300u; }
        if (ctx->pc != 0x12D300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D300u; }
        if (ctx->pc != 0x12D300u) { return; }
    }
    ctx->pc = 0x12D300u;
    // 0x12d300: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x12D300u;
    {
        const bool branch_taken_0x12d300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D300u;
            // 0x12d304: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d300) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D308u;
    // 0x12d308: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x12d308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12d30c:
    // 0x12d30c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x12d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12d310: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x12d310u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12d314: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x12D314u;
    {
        const bool branch_taken_0x12d314 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12D318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D314u;
            // 0x12d318: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d314) {
            ctx->pc = 0x12D3CCu;
            goto label_12d3cc;
        }
    }
    ctx->pc = 0x12D31Cu;
    // 0x12d31c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D31Cu;
    {
        const bool branch_taken_0x12d31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D31Cu;
            // 0x12d320: 0x3c160017  lui         $s6, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d31c) {
            ctx->pc = 0x12D388u;
            goto label_12d388;
        }
    }
    ctx->pc = 0x12D324u;
    // 0x12d324: 0x0  nop
    ctx->pc = 0x12d324u;
    // NOP
label_12d328:
    // 0x12d328: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d32c: 0x26c456f0  addiu       $a0, $s6, 0x56F0
    ctx->pc = 0x12d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12d330: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12d330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12d334: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12d334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12d338: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d33c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d340: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d344: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12d344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12d348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d34c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d350: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d350u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d354: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D354u;
    {
        const bool branch_taken_0x12d354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D354u;
            // 0x12d358: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d354) {
            ctx->pc = 0x12D370u;
            goto label_12d370;
        }
    }
    ctx->pc = 0x12D35Cu;
    // 0x12d35c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d360: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D360u;
    SET_GPR_U32(ctx, 31, 0x12D368u);
    ctx->pc = 0x12D364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D360u;
            // 0x12d364: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D368u; }
        if (ctx->pc != 0x12D368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D368u; }
        if (ctx->pc != 0x12D368u) { return; }
    }
    ctx->pc = 0x12D368u;
    // 0x12d368: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x12D368u;
    {
        const bool branch_taken_0x12d368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D368u;
            // 0x12d36c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d368) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D370u;
label_12d370:
    // 0x12d370: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12d370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12d374: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12d374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12d378: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12D378u;
    {
        const bool branch_taken_0x12d378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D378u;
            // 0x12d37c: 0x26c256f0  addiu       $v0, $s6, 0x56F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d378) {
            ctx->pc = 0x12D328u;
            goto label_12d328;
        }
    }
    ctx->pc = 0x12D380u;
    // 0x12d380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D380u;
    {
        const bool branch_taken_0x12d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D380u;
            // 0x12d384: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d380) {
            ctx->pc = 0x12D390u;
            goto label_12d390;
        }
    }
    ctx->pc = 0x12D388u;
label_12d388:
    // 0x12d388: 0x26c256f0  addiu       $v0, $s6, 0x56F0
    ctx->pc = 0x12d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12d38c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d390:
    // 0x12d390: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d394: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d398: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d39c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d3a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d3a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12d3a8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d3a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d3ac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d3b0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D3B0u;
    {
        const bool branch_taken_0x12d3b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3B0u;
            // 0x12d3b4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3b0) {
            ctx->pc = 0x12D3CCu;
            goto label_12d3cc;
        }
    }
    ctx->pc = 0x12D3B8u;
    // 0x12d3b8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d3bc: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D3BCu;
    SET_GPR_U32(ctx, 31, 0x12D3C4u);
    ctx->pc = 0x12D3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3BCu;
            // 0x12d3c0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3C4u; }
        if (ctx->pc != 0x12D3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3C4u; }
        if (ctx->pc != 0x12D3C4u) { return; }
    }
    ctx->pc = 0x12D3C4u;
    // 0x12d3c4: 0x14400114  bnez        $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x12D3C4u;
    {
        const bool branch_taken_0x12d3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3C4u;
            // 0x12d3c8: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3c4) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D3CCu;
label_12d3cc:
    // 0x12d3cc: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x12d3ccu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
    // 0x12d3d0: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x12D3D0u;
    {
        const bool branch_taken_0x12d3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D3D0u;
            // 0x12d3d4: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3d0) {
            ctx->pc = 0x12D6E4u;
            goto label_12d6e4;
        }
    }
    ctx->pc = 0x12D3D8u;
    // 0x12d3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d3dc: 0x24425770  addiu       $v0, $v0, 0x5770
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22384));
    // 0x12d3e0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x12d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x12d3e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d3e8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d3ec: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d3f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d3f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d3f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d3fc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d3fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d400: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d404: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x12D404u;
    {
        const bool branch_taken_0x12d404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D404u;
            // 0x12d408: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d404) {
            ctx->pc = 0x12D6C8u;
            goto label_12d6c8;
        }
    }
    ctx->pc = 0x12D40Cu;
label_12d40c:
    // 0x12d40c: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12d410: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12d410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d414: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d418: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d41c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x12d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12d420: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d424: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12d428: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12d428u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d42c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12d430: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D430u;
    {
        const bool branch_taken_0x12d430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D430u;
            // 0x12d434: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d430) {
            ctx->pc = 0x12D450u;
            goto label_12d450;
        }
    }
    ctx->pc = 0x12D438u;
    // 0x12d438: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d43c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D43Cu;
    SET_GPR_U32(ctx, 31, 0x12D444u);
    ctx->pc = 0x12D440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D43Cu;
            // 0x12d440: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D444u; }
        if (ctx->pc != 0x12D444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D444u; }
        if (ctx->pc != 0x12D444u) { return; }
    }
    ctx->pc = 0x12D444u;
    // 0x12d444: 0x144000f4  bnez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x12D444u;
    {
        const bool branch_taken_0x12d444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D444u;
            // 0x12d448: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d444) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D44Cu;
    // 0x12d44c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x12d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12d450:
    // 0x12d450: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12d450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12d454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d458: 0x24425770  addiu       $v0, $v0, 0x5770
    ctx->pc = 0x12d458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22384));
    // 0x12d45c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x12d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x12d460: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d464: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x12d464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x12d468: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d46c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d46cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d470: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d47c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d47cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d480: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d484: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D484u;
    {
        const bool branch_taken_0x12d484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D484u;
            // 0x12d488: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d484) {
            ctx->pc = 0x12D4A0u;
            goto label_12d4a0;
        }
    }
    ctx->pc = 0x12D48Cu;
    // 0x12d48c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d490: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D490u;
    SET_GPR_U32(ctx, 31, 0x12D498u);
    ctx->pc = 0x12D494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D490u;
            // 0x12d494: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D498u; }
        if (ctx->pc != 0x12D498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D498u; }
        if (ctx->pc != 0x12D498u) { return; }
    }
    ctx->pc = 0x12D498u;
    // 0x12d498: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x12D498u;
    {
        const bool branch_taken_0x12d498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D498u;
            // 0x12d49c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d498) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D4A0u;
label_12d4a0:
    // 0x12d4a0: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x12d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12d4a4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x12d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12d4a8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12d4ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x12d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12d4b0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12d4b4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d4b8: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x12d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12d4bc: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x12d4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x12d4c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d4c4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d4c8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12d4cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x12d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12d4d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d4d4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12d4d8: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x12d4d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d4dc: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x12D4DCu;
    {
        const bool branch_taken_0x12d4dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4DCu;
            // 0x12d4e0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4dc) {
            ctx->pc = 0x12D6E4u;
            goto label_12d6e4;
        }
    }
    ctx->pc = 0x12D4E4u;
    // 0x12d4e4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x12D4E4u;
    {
        const bool branch_taken_0x12d4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4E4u;
            // 0x12d4e8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4e4) {
            ctx->pc = 0x12D6D4u;
            goto label_12d6d4;
        }
    }
    ctx->pc = 0x12D4ECu;
label_12d4ec:
    // 0x12d4ec: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x12d4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12d4f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D4F0u;
    {
        const bool branch_taken_0x12d4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4F0u;
            // 0x12d4f4: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4f0) {
            ctx->pc = 0x12D500u;
            goto label_12d500;
        }
    }
    ctx->pc = 0x12D4F8u;
    // 0x12d4f8: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x12D4F8u;
    {
        const bool branch_taken_0x12d4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D4F8u;
            // 0x12d4fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4f8) {
            ctx->pc = 0x12D658u;
            goto label_12d658;
        }
    }
    ctx->pc = 0x12D500u;
label_12d500:
    // 0x12d500: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x12d500u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12d504: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x12d504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x12d508: 0xa3a201c1  sb          $v0, 0x1C1($sp)
    ctx->pc = 0x12d508u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 2));
    // 0x12d50c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d510: 0xa3a401c0  sb          $a0, 0x1C0($sp)
    ctx->pc = 0x12d510u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 4));
    // 0x12d514: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x12d514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x12d518: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x12d518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x12d51c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12d51cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12d520: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d524: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d528: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12d528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d52c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d534: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x12d534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x12d538: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d538u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d53c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d540: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D540u;
    {
        const bool branch_taken_0x12d540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D540u;
            // 0x12d544: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d540) {
            ctx->pc = 0x12D55Cu;
            goto label_12d55c;
        }
    }
    ctx->pc = 0x12D548u;
    // 0x12d548: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d54c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D54Cu;
    SET_GPR_U32(ctx, 31, 0x12D554u);
    ctx->pc = 0x12D550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D54Cu;
            // 0x12d550: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D554u; }
        if (ctx->pc != 0x12D554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D554u; }
        if (ctx->pc != 0x12D554u) { return; }
    }
    ctx->pc = 0x12D554u;
    // 0x12d554: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x12D554u;
    {
        const bool branch_taken_0x12d554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D554u;
            // 0x12d558: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d554) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D55Cu;
label_12d55c:
    // 0x12d55c: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x12d55cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12d560: 0xc04a482  jal         func_129208
    ctx->pc = 0x12D560u;
    SET_GPR_U32(ctx, 31, 0x12D568u);
    ctx->pc = 0x12D564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D560u;
            // 0x12d564: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D568u; }
        if (ctx->pc != 0x12D568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D568u; }
        if (ctx->pc != 0x12D568u) { return; }
    }
    ctx->pc = 0x12D568u;
    // 0x12d568: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12D568u;
    {
        const bool branch_taken_0x12d568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D568u;
            // 0x12d56c: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d568) {
            ctx->pc = 0x12D5B0u;
            goto label_12d5b0;
        }
    }
    ctx->pc = 0x12D570u;
    // 0x12d570: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12d570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12d574: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d578: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12d578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12d57c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d57cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d580: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d584: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12d584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d588: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x12d588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12d58c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d590: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d594: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12d598: 0x28650008  slti        $a1, $v1, 0x8
    ctx->pc = 0x12d598u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d59c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12d5a0: 0x14a0003e  bnez        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x12D5A0u;
    {
        const bool branch_taken_0x12d5a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D5A0u;
            // 0x12d5a4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5a0) {
            ctx->pc = 0x12D69Cu;
            goto label_12d69c;
        }
    }
    ctx->pc = 0x12D5A8u;
    // 0x12d5a8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x12D5A8u;
    {
        const bool branch_taken_0x12d5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D5A8u;
            // 0x12d5ac: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5a8) {
            ctx->pc = 0x12D68Cu;
            goto label_12d68c;
        }
    }
    ctx->pc = 0x12D5B0u;
label_12d5b0:
    // 0x12d5b0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x12d5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d5b4: 0x1a000039  blez        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x12D5B4u;
    {
        const bool branch_taken_0x12d5b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D5B4u;
            // 0x12d5b8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5b4) {
            ctx->pc = 0x12D69Cu;
            goto label_12d69c;
        }
    }
    ctx->pc = 0x12D5BCu;
    // 0x12d5bc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D5BCu;
    {
        const bool branch_taken_0x12d5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D5BCu;
            // 0x12d5c0: 0x3c160017  lui         $s6, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5bc) {
            ctx->pc = 0x12D628u;
            goto label_12d628;
        }
    }
    ctx->pc = 0x12D5C4u;
    // 0x12d5c4: 0x0  nop
    ctx->pc = 0x12d5c4u;
    // NOP
label_12d5c8:
    // 0x12d5c8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d5cc: 0x26c456f0  addiu       $a0, $s6, 0x56F0
    ctx->pc = 0x12d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12d5d0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12d5d4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12d5d8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d5dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d5e0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d5e4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12d5e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d5ec: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d5f0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d5f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d5f4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D5F4u;
    {
        const bool branch_taken_0x12d5f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D5F4u;
            // 0x12d5f8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5f4) {
            ctx->pc = 0x12D610u;
            goto label_12d610;
        }
    }
    ctx->pc = 0x12D5FCu;
    // 0x12d5fc: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d600: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D600u;
    SET_GPR_U32(ctx, 31, 0x12D608u);
    ctx->pc = 0x12D604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D600u;
            // 0x12d604: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D608u; }
        if (ctx->pc != 0x12D608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D608u; }
        if (ctx->pc != 0x12D608u) { return; }
    }
    ctx->pc = 0x12D608u;
    // 0x12d608: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x12D608u;
    {
        const bool branch_taken_0x12d608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D608u;
            // 0x12d60c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d608) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D610u;
label_12d610:
    // 0x12d610: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12d610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12d614: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12d614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12d618: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12D618u;
    {
        const bool branch_taken_0x12d618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D618u;
            // 0x12d61c: 0x26c256f0  addiu       $v0, $s6, 0x56F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d618) {
            ctx->pc = 0x12D5C8u;
            goto label_12d5c8;
        }
    }
    ctx->pc = 0x12D620u;
    // 0x12d620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D620u;
    {
        const bool branch_taken_0x12d620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D620u;
            // 0x12d624: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d620) {
            ctx->pc = 0x12D630u;
            goto label_12d630;
        }
    }
    ctx->pc = 0x12D628u;
label_12d628:
    // 0x12d628: 0x26c256f0  addiu       $v0, $s6, 0x56F0
    ctx->pc = 0x12d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 22256));
    // 0x12d62c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d630:
    // 0x12d630: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d634: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d638: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d63c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d644: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12d644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12d648: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d648u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d64c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d650: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12D650u;
    {
        const bool branch_taken_0x12d650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D650u;
            // 0x12d654: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d650) {
            ctx->pc = 0x12D680u;
            goto label_12d680;
        }
    }
    ctx->pc = 0x12D658u;
label_12d658:
    // 0x12d658: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x12d658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x12d65c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12d660: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x12d660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d664: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d668: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12d668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d66c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d670: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d674: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12d674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12d678: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12d678u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d67c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x12d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_12d680:
    // 0x12d680: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D680u;
    {
        const bool branch_taken_0x12d680 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D680u;
            // 0x12d684: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d680) {
            ctx->pc = 0x12D6A0u;
            goto label_12d6a0;
        }
    }
    ctx->pc = 0x12D688u;
    // 0x12d688: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d68c:
    // 0x12d68c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D68Cu;
    SET_GPR_U32(ctx, 31, 0x12D694u);
    ctx->pc = 0x12D690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D68Cu;
            // 0x12d690: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D694u; }
        if (ctx->pc != 0x12D694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D694u; }
        if (ctx->pc != 0x12D694u) { return; }
    }
    ctx->pc = 0x12D694u;
    // 0x12d694: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x12D694u;
    {
        const bool branch_taken_0x12d694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D694u;
            // 0x12d698: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d694) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D69Cu;
label_12d69c:
    // 0x12d69c: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x12d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_12d6a0:
    // 0x12d6a0: 0xae3d0000  sw          $sp, 0x0($s1)
    ctx->pc = 0x12d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 29));
    // 0x12d6a4: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x12d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x12d6a8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d6ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d6b0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x12d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d6b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12d6b8:
    // 0x12d6b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d6bc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x12d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x12d6c0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x12d6c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d6c4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x12d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_12d6c8:
    // 0x12d6c8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D6C8u;
    {
        const bool branch_taken_0x12d6c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6C8u;
            // 0x12d6cc: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6c8) {
            ctx->pc = 0x12D6E8u;
            goto label_12d6e8;
        }
    }
    ctx->pc = 0x12D6D0u;
    // 0x12d6d0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d6d4:
    // 0x12d6d4: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D6D4u;
    SET_GPR_U32(ctx, 31, 0x12D6DCu);
    ctx->pc = 0x12D6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6D4u;
            // 0x12d6d8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D6DCu; }
        if (ctx->pc != 0x12D6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D6DCu; }
        if (ctx->pc != 0x12D6DCu) { return; }
    }
    ctx->pc = 0x12D6DCu;
    // 0x12d6dc: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x12D6DCu;
    {
        const bool branch_taken_0x12d6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6DCu;
            // 0x12d6e0: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6dc) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D6E4u;
label_12d6e4:
    // 0x12d6e4: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x12d6e4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 30), _mm_cvtsi32_si128((int)4u)));
label_12d6e8:
    // 0x12d6e8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x12D6E8u;
    {
        const bool branch_taken_0x12d6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6E8u;
            // 0x12d6ec: 0x8fa501f4  lw          $a1, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6e8) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D6F0u;
    // 0x12d6f0: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x12d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12d6f4: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x12d6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12d6f8: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x12D6F8u;
    {
        const bool branch_taken_0x12d6f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12D6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6F8u;
            // 0x12d6fc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6f8) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D700u;
    // 0x12d700: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12D700u;
    {
        const bool branch_taken_0x12d700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D700u;
            // 0x12d704: 0x3c060017  lui         $a2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d700) {
            ctx->pc = 0x12D770u;
            goto label_12d770;
        }
    }
    ctx->pc = 0x12D708u;
label_12d708:
    // 0x12d708: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12d708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d70c: 0x24c456e0  addiu       $a0, $a2, 0x56E0
    ctx->pc = 0x12d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 22240));
    // 0x12d710: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12d710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12d714: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x12d714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x12d718: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x12d718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12d71c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d720: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d724: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12d724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12d728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d72c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d730: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d730u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d734: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D734u;
    {
        const bool branch_taken_0x12d734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D734u;
            // 0x12d738: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d734) {
            ctx->pc = 0x12D758u;
            goto label_12d758;
        }
    }
    ctx->pc = 0x12D73Cu;
    // 0x12d73c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d740: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12d740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d744: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D744u;
    SET_GPR_U32(ctx, 31, 0x12D74Cu);
    ctx->pc = 0x12D748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D744u;
            // 0x12d748: 0x7fa60220  sq          $a2, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D74Cu; }
        if (ctx->pc != 0x12D74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D74Cu; }
        if (ctx->pc != 0x12D74Cu) { return; }
    }
    ctx->pc = 0x12D74Cu;
    // 0x12d74c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x12D74Cu;
    {
        const bool branch_taken_0x12d74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D74Cu;
            // 0x12d750: 0x7ba60220  lq          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d74c) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D754u;
    // 0x12d754: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x12d754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12d758:
    // 0x12d758: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12d758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12d75c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x12d75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12d760: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12D760u;
    {
        const bool branch_taken_0x12d760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D760u;
            // 0x12d764: 0x24c256e0  addiu       $v0, $a2, 0x56E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 22240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d760) {
            ctx->pc = 0x12D708u;
            goto label_12d708;
        }
    }
    ctx->pc = 0x12D768u;
    // 0x12d768: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D768u;
    {
        const bool branch_taken_0x12d768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D768u;
            // 0x12d76c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d768) {
            ctx->pc = 0x12D778u;
            goto label_12d778;
        }
    }
    ctx->pc = 0x12D770u;
label_12d770:
    // 0x12d770: 0x24c256e0  addiu       $v0, $a2, 0x56E0
    ctx->pc = 0x12d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 22240));
    // 0x12d774: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x12d774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d778:
    // 0x12d778: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12d778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12d77c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12d780: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d788: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x12d78c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x12d78cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12d790: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x12d790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x12d794: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D794u;
    {
        const bool branch_taken_0x12d794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D794u;
            // 0x12d798: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d794) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D79Cu;
    // 0x12d79c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d7a0: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D7A0u;
    SET_GPR_U32(ctx, 31, 0x12D7A8u);
    ctx->pc = 0x12D7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7A0u;
            // 0x12d7a4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7A8u; }
        if (ctx->pc != 0x12D7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7A8u; }
        if (ctx->pc != 0x12D7A8u) { return; }
    }
    ctx->pc = 0x12D7A8u;
    // 0x12d7a8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12D7A8u;
    {
        const bool branch_taken_0x12d7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7A8u;
            // 0x12d7ac: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7a8) {
            ctx->pc = 0x12D81Cu;
            goto label_12d81c;
        }
    }
    ctx->pc = 0x12D7B0u;
label_12d7b0:
    // 0x12d7b0: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x12d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12d7b4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12d7b8: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x12d7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12d7bc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x12d7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x12d7c0: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x12d7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12d7c4: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x12d7c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x12d7c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d7cc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x12d7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12d7d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D7D0u;
    {
        const bool branch_taken_0x12d7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7D0u;
            // 0x12d7d4: 0xafa601f0  sw          $a2, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7d0) {
            ctx->pc = 0x12D7ECu;
            goto label_12d7ec;
        }
    }
    ctx->pc = 0x12D7D8u;
    // 0x12d7d8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x12d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12d7dc: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D7DCu;
    SET_GPR_U32(ctx, 31, 0x12D7E4u);
    ctx->pc = 0x12D7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7DCu;
            // 0x12d7e0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7E4u; }
        if (ctx->pc != 0x12D7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7E4u; }
        if (ctx->pc != 0x12D7E4u) { return; }
    }
    ctx->pc = 0x12D7E4u;
    // 0x12d7e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12D7E4u;
    {
        const bool branch_taken_0x12d7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7E4u;
            // 0x12d7e8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7e4) {
            ctx->pc = 0x12D81Cu;
            goto label_12d81c;
        }
    }
    ctx->pc = 0x12D7ECu;
label_12d7ec:
    // 0x12d7ec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x12d7f0: 0x1000fb0d  b           . + 4 + (-0x4F3 << 2)
    ctx->pc = 0x12D7F0u;
    {
        const bool branch_taken_0x12d7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7F0u;
            // 0x12d7f4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7f0) {
            ctx->pc = 0x12C428u;
            goto label_12c428;
        }
    }
    ctx->pc = 0x12D7F8u;
label_12d7f8:
    // 0x12d7f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d7fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D7FCu;
    {
        const bool branch_taken_0x12d7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7FCu;
            // 0x12d800: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7fc) {
            ctx->pc = 0x12D814u;
            goto label_12d814;
        }
    }
    ctx->pc = 0x12D804u;
    // 0x12d804: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12D804u;
    SET_GPR_U32(ctx, 31, 0x12D80Cu);
    ctx->pc = 0x12D808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D804u;
            // 0x12d808: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D80Cu; }
        if (ctx->pc != 0x12D80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D80Cu; }
        if (ctx->pc != 0x12D80Cu) { return; }
    }
    ctx->pc = 0x12D80Cu;
    // 0x12d80c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D80Cu;
    {
        const bool branch_taken_0x12d80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D80Cu;
            // 0x12d810: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d80c) {
            ctx->pc = 0x12D81Cu;
            goto label_12d81c;
        }
    }
    ctx->pc = 0x12D814u;
label_12d814:
    // 0x12d814: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12d814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_12d818:
    // 0x12d818: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x12d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d81c:
    // 0x12d81c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x12d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12d820: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x12d820u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12d824: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12d824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d828: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x12d828u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64u)));
    // 0x12d82c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x12d82cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_12d830:
    // 0x12d830: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x12d830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_12d834:
    // 0x12d834: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x12d834u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x12d838: 0xdfb702a0  ld          $s7, 0x2A0($sp)
    ctx->pc = 0x12d838u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x12d83c: 0xdfb60290  ld          $s6, 0x290($sp)
    ctx->pc = 0x12d83cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x12d840: 0xdfb50280  ld          $s5, 0x280($sp)
    ctx->pc = 0x12d840u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x12d844: 0xdfb40270  ld          $s4, 0x270($sp)
    ctx->pc = 0x12d844u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x12d848: 0xdfb30260  ld          $s3, 0x260($sp)
    ctx->pc = 0x12d848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x12d84c: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x12d84cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x12d850: 0xdfb10240  ld          $s1, 0x240($sp)
    ctx->pc = 0x12d850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x12d854: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x12d854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x12d858: 0x3e00008  jr          $ra
    ctx->pc = 0x12D858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D858u;
            // 0x12d85c: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C3B4u: goto label_12c3b4;
            case 0x12C3D0u: goto label_12c3d0;
            case 0x12C400u: goto label_12c400;
            case 0x12C428u: goto label_12c428;
            case 0x12C430u: goto label_12c430;
            case 0x12C474u: goto label_12c474;
            case 0x12C4C4u: goto label_12c4c4;
            case 0x12C4D0u: goto label_12c4d0;
            case 0x12C4FCu: goto label_12c4fc;
            case 0x12C504u: goto label_12c504;
            case 0x12C508u: goto label_12c508;
            case 0x12C50Cu: goto label_12c50c;
            case 0x12C520u: goto label_12c520;
            case 0x12C548u: goto label_12c548;
            case 0x12C560u: goto label_12c560;
            case 0x12C570u: goto label_12c570;
            case 0x12C588u: goto label_12c588;
            case 0x12C594u: goto label_12c594;
            case 0x12C59Cu: goto label_12c59c;
            case 0x12C5A8u: goto label_12c5a8;
            case 0x12C5E0u: goto label_12c5e0;
            case 0x12C5F8u: goto label_12c5f8;
            case 0x12C620u: goto label_12c620;
            case 0x12C634u: goto label_12c634;
            case 0x12C640u: goto label_12c640;
            case 0x12C648u: goto label_12c648;
            case 0x12C678u: goto label_12c678;
            case 0x12C688u: goto label_12c688;
            case 0x12C698u: goto label_12c698;
            case 0x12C6C4u: goto label_12c6c4;
            case 0x12C6CCu: goto label_12c6cc;
            case 0x12C6DCu: goto label_12c6dc;
            case 0x12C6FCu: goto label_12c6fc;
            case 0x12C700u: goto label_12c700;
            case 0x12C718u: goto label_12c718;
            case 0x12C728u: goto label_12c728;
            case 0x12C72Cu: goto label_12c72c;
            case 0x12C744u: goto label_12c744;
            case 0x12C758u: goto label_12c758;
            case 0x12C768u: goto label_12c768;
            case 0x12C770u: goto label_12c770;
            case 0x12C774u: goto label_12c774;
            case 0x12C788u: goto label_12c788;
            case 0x12C790u: goto label_12c790;
            case 0x12C7BCu: goto label_12c7bc;
            case 0x12C7C8u: goto label_12c7c8;
            case 0x12C7E4u: goto label_12c7e4;
            case 0x12C824u: goto label_12c824;
            case 0x12C840u: goto label_12c840;
            case 0x12C850u: goto label_12c850;
            case 0x12C894u: goto label_12c894;
            case 0x12C89Cu: goto label_12c89c;
            case 0x12C8C4u: goto label_12c8c4;
            case 0x12C8D0u: goto label_12c8d0;
            case 0x12C8E4u: goto label_12c8e4;
            case 0x12C8F4u: goto label_12c8f4;
            case 0x12C8F8u: goto label_12c8f8;
            case 0x12C90Cu: goto label_12c90c;
            case 0x12C928u: goto label_12c928;
            case 0x12C944u: goto label_12c944;
            case 0x12C958u: goto label_12c958;
            case 0x12C95Cu: goto label_12c95c;
            case 0x12C974u: goto label_12c974;
            case 0x12C984u: goto label_12c984;
            case 0x12C988u: goto label_12c988;
            case 0x12C990u: goto label_12c990;
            case 0x12C9B4u: goto label_12c9b4;
            case 0x12C9C8u: goto label_12c9c8;
            case 0x12C9F0u: goto label_12c9f0;
            case 0x12C9F8u: goto label_12c9f8;
            case 0x12CA08u: goto label_12ca08;
            case 0x12CA0Cu: goto label_12ca0c;
            case 0x12CA24u: goto label_12ca24;
            case 0x12CA34u: goto label_12ca34;
            case 0x12CA38u: goto label_12ca38;
            case 0x12CA40u: goto label_12ca40;
            case 0x12CA4Cu: goto label_12ca4c;
            case 0x12CA54u: goto label_12ca54;
            case 0x12CA70u: goto label_12ca70;
            case 0x12CA80u: goto label_12ca80;
            case 0x12CA84u: goto label_12ca84;
            case 0x12CA98u: goto label_12ca98;
            case 0x12CA9Cu: goto label_12ca9c;
            case 0x12CAACu: goto label_12caac;
            case 0x12CAC0u: goto label_12cac0;
            case 0x12CAF8u: goto label_12caf8;
            case 0x12CB08u: goto label_12cb08;
            case 0x12CB44u: goto label_12cb44;
            case 0x12CB58u: goto label_12cb58;
            case 0x12CB98u: goto label_12cb98;
            case 0x12CBA8u: goto label_12cba8;
            case 0x12CBB4u: goto label_12cbb4;
            case 0x12CBC0u: goto label_12cbc0;
            case 0x12CBF0u: goto label_12cbf0;
            case 0x12CBF8u: goto label_12cbf8;
            case 0x12CBFCu: goto label_12cbfc;
            case 0x12CC04u: goto label_12cc04;
            case 0x12CC14u: goto label_12cc14;
            case 0x12CC18u: goto label_12cc18;
            case 0x12CC1Cu: goto label_12cc1c;
            case 0x12CC20u: goto label_12cc20;
            case 0x12CC50u: goto label_12cc50;
            case 0x12CC60u: goto label_12cc60;
            case 0x12CC88u: goto label_12cc88;
            case 0x12CC8Cu: goto label_12cc8c;
            case 0x12CCD8u: goto label_12ccd8;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12D018u: goto label_12d018;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D098u: goto label_12d098;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D100u: goto label_12d100;
            case 0x12D128u: goto label_12d128;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D220u: goto label_12d220;
            case 0x12D238u: goto label_12d238;
            case 0x12D240u: goto label_12d240;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D328u: goto label_12d328;
            case 0x12D370u: goto label_12d370;
            case 0x12D388u: goto label_12d388;
            case 0x12D390u: goto label_12d390;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D450u: goto label_12d450;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D500u: goto label_12d500;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D610u: goto label_12d610;
            case 0x12D628u: goto label_12d628;
            case 0x12D630u: goto label_12d630;
            case 0x12D658u: goto label_12d658;
            case 0x12D680u: goto label_12d680;
            case 0x12D68Cu: goto label_12d68c;
            case 0x12D69Cu: goto label_12d69c;
            case 0x12D6A0u: goto label_12d6a0;
            case 0x12D6B8u: goto label_12d6b8;
            case 0x12D6C8u: goto label_12d6c8;
            case 0x12D6D4u: goto label_12d6d4;
            case 0x12D6E4u: goto label_12d6e4;
            case 0x12D6E8u: goto label_12d6e8;
            case 0x12D708u: goto label_12d708;
            case 0x12D758u: goto label_12d758;
            case 0x12D770u: goto label_12d770;
            case 0x12D778u: goto label_12d778;
            case 0x12D7B0u: goto label_12d7b0;
            case 0x12D7ECu: goto label_12d7ec;
            case 0x12D7F8u: goto label_12d7f8;
            case 0x12D814u: goto label_12d814;
            case 0x12D818u: goto label_12d818;
            case 0x12D81Cu: goto label_12d81c;
            case 0x12D830u: goto label_12d830;
            case 0x12D834u: goto label_12d834;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D860u;
}
