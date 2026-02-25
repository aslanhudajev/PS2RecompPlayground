#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _initSeq
// Address: 0x12c318 - 0x12c5c0
void _initSeq_0x12c318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_initSeq_0x12c318");
#endif

    ctx->pc = 0x12c318u;

    // 0x12c318: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x12c318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x12c31c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12c31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c320: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x12c320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x12c324: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x12c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x12c328: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x12c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x12c32c: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x12c32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x12c330: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x12c330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x12c334: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x12c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x12c338: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x12c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x12c33c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x12c33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x12c340: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x12c340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x12c344: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x12c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x12c348: 0x8cbe0040  lw          $fp, 0x40($a1)
    ctx->pc = 0x12c348u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x12c34c: 0x8fc60848  lw          $a2, 0x848($fp)
    ctx->pc = 0x12c34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2120)));
    // 0x12c350: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12C350u;
    {
        const bool branch_taken_0x12c350 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c350) {
            ctx->pc = 0x12C354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C350u;
            // 0x12c354: 0x8fc20124  lw          $v0, 0x124($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C380u;
            goto label_12c380;
        }
    }
    ctx->pc = 0x12C358u;
    // 0x12c358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c35c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12c360: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x12c360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12c364: 0xafc30174  sw          $v1, 0x174($fp)
    ctx->pc = 0x12c364u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 372), GPR_U32(ctx, 3));
    // 0x12c368: 0xafc2017c  sw          $v0, 0x17C($fp)
    ctx->pc = 0x12c368u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 380), GPR_U32(ctx, 2));
    // 0x12c36c: 0xafc40144  sw          $a0, 0x144($fp)
    ctx->pc = 0x12c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 324), GPR_U32(ctx, 4));
    // 0x12c370: 0xafc2013c  sw          $v0, 0x13C($fp)
    ctx->pc = 0x12c370u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 316), GPR_U32(ctx, 2));
    // 0x12c374: 0xafc20140  sw          $v0, 0x140($fp)
    ctx->pc = 0x12c374u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 320), GPR_U32(ctx, 2));
    // 0x12c378: 0xafc20188  sw          $v0, 0x188($fp)
    ctx->pc = 0x12c378u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 392), GPR_U32(ctx, 2));
    // 0x12c37c: 0x8fc20124  lw          $v0, 0x124($fp)
    ctx->pc = 0x12c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
label_12c380:
    // 0x12c380: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x12c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x12c384: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x12c384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x12c388: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C388u;
    {
        const bool branch_taken_0x12c388 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C388u;
            // 0x12c38c: 0xafc2012c  sw          $v0, 0x12C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c388) {
            ctx->pc = 0x12C3ACu;
            goto label_12c3ac;
        }
    }
    ctx->pc = 0x12C390u;
    // 0x12c390: 0x8fc2013c  lw          $v0, 0x13C($fp)
    ctx->pc = 0x12c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 316)));
    // 0x12c394: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C394u;
    {
        const bool branch_taken_0x12c394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C394u;
            // 0x12c398: 0x8fc20128  lw          $v0, 0x128($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c394) {
            ctx->pc = 0x12C3B0u;
            goto label_12c3b0;
        }
    }
    ctx->pc = 0x12C39Cu;
    // 0x12c39c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x12c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x12c3a0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x12c3a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x12c3a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12C3A4u;
    {
        const bool branch_taken_0x12c3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3A4u;
            // 0x12c3a8: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3a4) {
            ctx->pc = 0x12C3B8u;
            goto label_12c3b8;
        }
    }
    ctx->pc = 0x12C3ACu;
label_12c3ac:
    // 0x12c3ac: 0x8fc20128  lw          $v0, 0x128($fp)
    ctx->pc = 0x12c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
label_12c3b0:
    // 0x12c3b0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x12c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x12c3b4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x12c3b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_12c3b8:
    // 0x12c3b8: 0xafc20130  sw          $v0, 0x130($fp)
    ctx->pc = 0x12c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 304), GPR_U32(ctx, 2));
    // 0x12c3bc: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x12c3bcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12c3c0: 0x8fc2012c  lw          $v0, 0x12C($fp)
    ctx->pc = 0x12c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 300)));
    // 0x12c3c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12c3c8: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x12c3c8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12c3cc: 0x16e30004  bne         $s7, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C3CCu;
    {
        const bool branch_taken_0x12c3cc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3CCu;
            // 0x12c3d0: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3cc) {
            ctx->pc = 0x12C3E0u;
            goto label_12c3e0;
        }
    }
    ctx->pc = 0x12C3D4u;
    // 0x12c3d4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x12c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12c3d8: 0x12c2006d  beq         $s6, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x12C3D8u;
    {
        const bool branch_taken_0x12c3d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C3D8u;
            // 0x12c3dc: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3d8) {
            ctx->pc = 0x12C590u;
            goto label_12c590;
        }
    }
    ctx->pc = 0x12C3E0u;
label_12c3e0:
    // 0x12c3e0: 0xacb60004  sw          $s6, 0x4($a1)
    ctx->pc = 0x12c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 22));
    // 0x12c3e4: 0x24100180  addiu       $s0, $zero, 0x180
    ctx->pc = 0x12c3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x12c3e8: 0xacb70000  sw          $s7, 0x0($a1)
    ctx->pc = 0x12c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 23));
    // 0x12c3ec: 0x2d08018  mult        $s0, $s6, $s0
    ctx->pc = 0x12c3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c3f0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x12c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x12c3f4: 0x27d10108  addiu       $s1, $fp, 0x108
    ctx->pc = 0x12c3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
    // 0x12c3f8: 0x27c20320  addiu       $v0, $fp, 0x320
    ctx->pc = 0x12c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 800));
    // 0x12c3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c400: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x12c400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x12c404: 0x27d301e8  addiu       $s3, $fp, 0x1E8
    ctx->pc = 0x12c404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 488));
    // 0x12c408: 0x27c20388  addiu       $v0, $fp, 0x388
    ctx->pc = 0x12c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 904));
    // 0x12c40c: 0x2f08018  mult        $s0, $s7, $s0
    ctx->pc = 0x12c40cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c410: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x12c410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x12c414: 0x27d40250  addiu       $s4, $fp, 0x250
    ctx->pc = 0x12c414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 592));
    // 0x12c418: 0x27c203f0  addiu       $v0, $fp, 0x3F0
    ctx->pc = 0x12c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1008));
    // 0x12c41c: 0x27d502b8  addiu       $s5, $fp, 0x2B8
    ctx->pc = 0x12c41cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 696));
    // 0x12c420: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x12c420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x12c424: 0x169043  sra         $s2, $s6, 1
    ctx->pc = 0x12c424u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 1));
    // 0x12c428: 0x27c20458  addiu       $v0, $fp, 0x458
    ctx->pc = 0x12c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1112));
    // 0x12c42c: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x12c42cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x12c430: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x12c430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x12c434: 0x27c204c0  addiu       $v0, $fp, 0x4C0
    ctx->pc = 0x12c434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1216));
    // 0x12c438: 0xc04ae52  jal         func_12B948
    ctx->pc = 0x12C438u;
    SET_GPR_U32(ctx, 31, 0x12C440u);
    ctx->pc = 0x12C43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C438u;
            // 0x12c43c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B948u;
    if (runtime->hasFunction(0x12B948u)) {
        auto targetFn = runtime->lookupFunction(0x12B948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C440u; }
        if (ctx->pc != 0x12C440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcFree_0x12b948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C440u; }
        if (ctx->pc != 0x12C440u) { return; }
    }
    ctx->pc = 0x12C440u;
    // 0x12c440: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12c440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c444: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c448: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12c448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c44c: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x12C44Cu;
    SET_GPR_U32(ctx, 31, 0x12C454u);
    ctx->pc = 0x12C450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C44Cu;
            // 0x12c450: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (runtime->hasFunction(0x12B958u)) {
        auto targetFn = runtime->lookupFunction(0x12B958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C454u; }
        if (ctx->pc != 0x12C454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x12b958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C454u; }
        if (ctx->pc != 0x12C454u) { return; }
    }
    ctx->pc = 0x12C454u;
    // 0x12c454: 0xafc200fc  sw          $v0, 0xFC($fp)
    ctx->pc = 0x12c454u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 252), GPR_U32(ctx, 2));
    // 0x12c458: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c45c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c460: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12c460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c464: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x12C464u;
    SET_GPR_U32(ctx, 31, 0x12C46Cu);
    ctx->pc = 0x12C468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C464u;
            // 0x12c468: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (runtime->hasFunction(0x12B958u)) {
        auto targetFn = runtime->lookupFunction(0x12B958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C46Cu; }
        if (ctx->pc != 0x12C46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x12b958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C46Cu; }
        if (ctx->pc != 0x12C46Cu) { return; }
    }
    ctx->pc = 0x12C46Cu;
    // 0x12c46c: 0xafc20100  sw          $v0, 0x100($fp)
    ctx->pc = 0x12c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 256), GPR_U32(ctx, 2));
    // 0x12c470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c474: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12c474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c478: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12c478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c47c: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x12C47Cu;
    SET_GPR_U32(ctx, 31, 0x12C484u);
    ctx->pc = 0x12C480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C47Cu;
            // 0x12c480: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (runtime->hasFunction(0x12B958u)) {
        auto targetFn = runtime->lookupFunction(0x12B958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C484u; }
        if (ctx->pc != 0x12C484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x12b958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C484u; }
        if (ctx->pc != 0x12C484u) { return; }
    }
    ctx->pc = 0x12C484u;
    // 0x12c484: 0x8fa80034  lw          $t0, 0x34($sp)
    ctx->pc = 0x12c484u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12c488: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c48c: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x12c48cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12c490: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c494: 0x8faa003c  lw          $t2, 0x3C($sp)
    ctx->pc = 0x12c494u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c498: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12c498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c49c: 0x8fab0040  lw          $t3, 0x40($sp)
    ctx->pc = 0x12c49cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c4a0: 0xafc20104  sw          $v0, 0x104($fp)
    ctx->pc = 0x12c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 2));
    // 0x12c4a4: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x12c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12c4a8: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x12c4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c4ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12c4b0: 0x8fc200fc  lw          $v0, 0xFC($fp)
    ctx->pc = 0x12c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x12c4b4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x12c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x12c4b8: 0x8fc30100  lw          $v1, 0x100($fp)
    ctx->pc = 0x12c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 256)));
    // 0x12c4bc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x12c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x12c4c0: 0x8fc20104  lw          $v0, 0x104($fp)
    ctx->pc = 0x12c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 260)));
    // 0x12c4c4: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x12c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
    // 0x12c4c8: 0xafb60028  sw          $s6, 0x28($sp)
    ctx->pc = 0x12c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 22));
    // 0x12c4cc: 0xc04b170  jal         func_12C5C0
    ctx->pc = 0x12C4CCu;
    SET_GPR_U32(ctx, 31, 0x12C4D4u);
    ctx->pc = 0x12C4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4CCu;
            // 0x12c4d0: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C5C0u;
    if (runtime->hasFunction(0x12C5C0u)) {
        auto targetFn = runtime->lookupFunction(0x12C5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4D4u; }
        if (ctx->pc != 0x12C4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _initRefImages_0x12c5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4D4u; }
        if (ctx->pc != 0x12C4D4u) { return; }
    }
    ctx->pc = 0x12C4D4u;
    // 0x12c4d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12c4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4d8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4dc: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12C4DCu;
    SET_GPR_U32(ctx, 31, 0x12C4E4u);
    ctx->pc = 0x12C4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4DCu;
            // 0x12c4e0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4E4u; }
        if (ctx->pc != 0x12C4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4E4u; }
        if (ctx->pc != 0x12C4E4u) { return; }
    }
    ctx->pc = 0x12C4E4u;
    // 0x12c4e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12c4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4e8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4ec: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12C4ECu;
    SET_GPR_U32(ctx, 31, 0x12C4F4u);
    ctx->pc = 0x12C4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4ECu;
            // 0x12c4f0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4F4u; }
        if (ctx->pc != 0x12C4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4F4u; }
        if (ctx->pc != 0x12C4F4u) { return; }
    }
    ctx->pc = 0x12C4F4u;
    // 0x12c4f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12c4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4f8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4fc: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12C4FCu;
    SET_GPR_U32(ctx, 31, 0x12C504u);
    ctx->pc = 0x12C500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C4FCu;
            // 0x12c500: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C504u; }
        if (ctx->pc != 0x12C504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C504u; }
        if (ctx->pc != 0x12C504u) { return; }
    }
    ctx->pc = 0x12C504u;
    // 0x12c504: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x12c504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c508: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c50c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12C50Cu;
    SET_GPR_U32(ctx, 31, 0x12C514u);
    ctx->pc = 0x12C510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C50Cu;
            // 0x12c510: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C514u; }
        if (ctx->pc != 0x12C514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C514u; }
        if (ctx->pc != 0x12C514u) { return; }
    }
    ctx->pc = 0x12C514u;
    // 0x12c514: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x12c514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12c518: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c51c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12C51Cu;
    SET_GPR_U32(ctx, 31, 0x12C524u);
    ctx->pc = 0x12C520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C51Cu;
            // 0x12c520: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C524u; }
        if (ctx->pc != 0x12C524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C524u; }
        if (ctx->pc != 0x12C524u) { return; }
    }
    ctx->pc = 0x12C524u;
    // 0x12c524: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12c528: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c52c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12C52Cu;
    SET_GPR_U32(ctx, 31, 0x12C534u);
    ctx->pc = 0x12C530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C52Cu;
            // 0x12c530: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C534u; }
        if (ctx->pc != 0x12C534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C534u; }
        if (ctx->pc != 0x12C534u) { return; }
    }
    ctx->pc = 0x12C534u;
    // 0x12c534: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x12c534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12c538: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c53c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12C53Cu;
    SET_GPR_U32(ctx, 31, 0x12C544u);
    ctx->pc = 0x12C540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C53Cu;
            // 0x12c540: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C544u; }
        if (ctx->pc != 0x12C544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C544u; }
        if (ctx->pc != 0x12C544u) { return; }
    }
    ctx->pc = 0x12C544u;
    // 0x12c544: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x12c544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c548: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c54c: 0xc04b074  jal         func_12C1D0
    ctx->pc = 0x12C54Cu;
    SET_GPR_U32(ctx, 31, 0x12C554u);
    ctx->pc = 0x12C550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C54Cu;
            // 0x12c550: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C554u; }
        if (ctx->pc != 0x12C554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C554u; }
        if (ctx->pc != 0x12C554u) { return; }
    }
    ctx->pc = 0x12C554u;
    // 0x12c554: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12c554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c558: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12c558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c55c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x12c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12c560: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x12c560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12c564: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x12c564u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12c568: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x12c568u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12c56c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x12c56cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12c570: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x12c570u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12c574: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x12c574u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c578: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x12c578u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12c57c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x12c57cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12c580: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x12c580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c584: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x12c584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c588: 0x804b074  j           func_12C1D0
    ctx->pc = 0x12C588u;
    ctx->pc = 0x12C58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C588u;
            // 0x12c58c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1D0u;
    if (runtime->hasFunction(0x12C1D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__RefImageInit_0x12c1d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12C590u;
label_12c590:
    // 0x12c590: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x12c590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12c594: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x12c594u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12c598: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x12c598u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12c59c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x12c59cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12c5a0: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x12c5a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12c5a4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x12c5a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12c5a8: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x12c5a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12c5ac: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x12c5acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12c5b0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x12c5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c5b4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x12c5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C5B8u;
            // 0x12c5bc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C380u: goto label_12c380;
            case 0x12C3ACu: goto label_12c3ac;
            case 0x12C3B0u: goto label_12c3b0;
            case 0x12C3B8u: goto label_12c3b8;
            case 0x12C3E0u: goto label_12c3e0;
            case 0x12C590u: goto label_12c590;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C5C0u;
}
