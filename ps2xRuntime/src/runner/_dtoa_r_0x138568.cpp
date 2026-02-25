#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dtoa_r
// Address: 0x138568 - 0x139734
void _dtoa_r_0x138568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dtoa_r_0x138568");
#endif

    ctx->pc = 0x138568u;

    // 0x138568: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x138568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x13856c: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x13856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x138570: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x138570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x138574: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x138574u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138578: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x138578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x13857c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x13857cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138580: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x138580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x138584: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x138584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138588: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x138588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x13858c: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x13858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x138590: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x138590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x138594: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x138594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x138598: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x138598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x13859c: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x13859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x1385a0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1385a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1385a4: 0x8fcb0040  lw          $t3, 0x40($fp)
    ctx->pc = 0x1385a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1385a8: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x1385a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x1385ac: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x1385acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1385b0: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x1385B0u;
    {
        const bool branch_taken_0x1385b0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1385B0u;
            // 0x1385b4: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385b0) {
            ctx->pc = 0x1385DCu;
            goto label_1385dc;
        }
    }
    ctx->pc = 0x1385B8u;
    // 0x1385b8: 0x8fc60044  lw          $a2, 0x44($fp)
    ctx->pc = 0x1385b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x1385bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1385bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1385c0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1385c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385c4: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x1385c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x1385c8: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x1385c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x1385cc: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1385ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1385d0: 0xc04edee  jal         func_13B7B8
    ctx->pc = 0x1385D0u;
    SET_GPR_U32(ctx, 31, 0x1385D8u);
    ctx->pc = 0x1385D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1385D0u;
            // 0x1385d4: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (runtime->hasFunction(0x13B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385D8u; }
        if (ctx->pc != 0x1385D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x13b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385D8u; }
        if (ctx->pc != 0x1385D8u) { return; }
    }
    ctx->pc = 0x1385D8u;
    // 0x1385d8: 0xafc00040  sw          $zero, 0x40($fp)
    ctx->pc = 0x1385d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
label_1385dc:
    // 0x1385dc: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x1385dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x1385e0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1385e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1385e4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1385e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1385e8: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1385E8u;
    {
        const bool branch_taken_0x1385e8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1385e8) {
            ctx->pc = 0x1385ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1385E8u;
            // 0x1385ec: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13861Cu;
            goto label_13861c;
        }
    }
    ctx->pc = 0x1385F0u;
    // 0x1385f0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1385f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1385f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1385f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1385f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1385f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1385fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1385fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x138600: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x138600u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 22), GPR_VEC(ctx, 3)));
    // 0x138604: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x138604u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x138608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x138608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13860c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13860cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x138610: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x138610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x138614: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x138614u;
    SET_GPR_VEC(ctx, 22, PS2_POR(GPR_VEC(ctx, 22), GPR_VEC(ctx, 2)));
    // 0x138618: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x138618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_13861c:
    // 0x13861c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x13861cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x138620: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x138620u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x138624: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x138628: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x138628u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x13862c: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x13862Cu;
    {
        const bool branch_taken_0x13862c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x138630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13862Cu;
            // 0x138630: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13862c) {
            ctx->pc = 0x138688u;
            goto label_138688;
        }
    }
    ctx->pc = 0x138634u;
    // 0x138634: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x138634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138638: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x138638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x13863c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138640: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x138640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x138644: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x138644u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 22), GPR_VEC(ctx, 2)));
    // 0x138648: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138648u;
    {
        const bool branch_taken_0x138648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13864Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138648u;
            // 0x13864c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138648) {
            ctx->pc = 0x13865Cu;
            goto label_13865c;
        }
    }
    ctx->pc = 0x138650u;
    // 0x138650: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x138650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x138654: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x138654u;
    {
        const bool branch_taken_0x138654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138654u;
            // 0x138658: 0x2455fae0  addiu       $s5, $v0, -0x520 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138654) {
            ctx->pc = 0x138664u;
            goto label_138664;
        }
    }
    ctx->pc = 0x13865Cu;
label_13865c:
    // 0x13865c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x138660: 0x2455faf0  addiu       $s5, $v0, -0x510
    ctx->pc = 0x138660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966000));
label_138664:
    // 0x138664: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x138664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x138668: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x138668u;
    {
        const bool branch_taken_0x138668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138668u;
            // 0x13866c: 0x26a40008  addiu       $a0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138668) {
            ctx->pc = 0x1386C0u;
            goto label_1386c0;
        }
    }
    ctx->pc = 0x138670u;
    // 0x138670: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x138670u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x138674: 0x26a30003  addiu       $v1, $s5, 0x3
    ctx->pc = 0x138674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x138678: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x138678u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x13867c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x13867cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x138680: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x138680u;
    {
        const bool branch_taken_0x138680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138680u;
            // 0x138684: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138680) {
            ctx->pc = 0x1386C0u;
            goto label_1386c0;
        }
    }
    ctx->pc = 0x138688u;
label_138688:
    // 0x138688: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138688u;
    SET_GPR_U32(ctx, 31, 0x138690u);
    ctx->pc = 0x13868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138688u;
            // 0x13868c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138690u; }
        if (ctx->pc != 0x138690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138690u; }
        if (ctx->pc != 0x138690u) { return; }
    }
    ctx->pc = 0x138690u;
    // 0x138690: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x138690u;
    {
        const bool branch_taken_0x138690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138690u;
            // 0x138694: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138690) {
            ctx->pc = 0x1386C8u;
            goto label_1386c8;
        }
    }
    ctx->pc = 0x138698u;
    // 0x138698: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x138698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13869c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1386a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1386a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1386a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1386a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1386a8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1386a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1386ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1386ACu;
    {
        const bool branch_taken_0x1386ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1386B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1386ACu;
            // 0x1386b0: 0x2475faf8  addiu       $s5, $v1, -0x508 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386ac) {
            ctx->pc = 0x1386C0u;
            goto label_1386c0;
        }
    }
    ctx->pc = 0x1386B4u;
    // 0x1386b4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1386b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1386b8: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1386b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1386bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1386bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1386c0:
    // 0x1386c0: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x1386C0u;
    {
        const bool branch_taken_0x1386c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1386C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1386C0u;
            // 0x1386c4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386c0) {
            ctx->pc = 0x139704u;
            goto label_139704;
        }
    }
    ctx->pc = 0x1386C8u;
label_1386c8:
    // 0x1386c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1386c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1386ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386d0: 0xc04f120  jal         func_13C480
    ctx->pc = 0x1386D0u;
    SET_GPR_U32(ctx, 31, 0x1386D8u);
    ctx->pc = 0x1386D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1386D0u;
            // 0x1386d4: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C480u;
    if (runtime->hasFunction(0x13C480u)) {
        auto targetFn = runtime->lookupFunction(0x13C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1386D8u; }
        if (ctx->pc != 0x1386D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _d2b_0x13c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1386D8u; }
        if (ctx->pc != 0x1386D8u) { return; }
    }
    ctx->pc = 0x1386D8u;
    // 0x1386d8: 0x101d02  srl         $v1, $s0, 20
    ctx->pc = 0x1386d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x1386dc: 0x307407ff  andi        $s4, $v1, 0x7FF
    ctx->pc = 0x1386dcu;
    SET_GPR_VEC(ctx, 20, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2047u)));
    // 0x1386e0: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x1386E0u;
    {
        const bool branch_taken_0x1386e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1386E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1386E0u;
            // 0x1386e4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386e0) {
            ctx->pc = 0x138738u;
            goto label_138738;
        }
    }
    ctx->pc = 0x1386E8u;
    // 0x1386e8: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x1386e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386ec: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1386ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1386f0: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x1386f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1386f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1386f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1386f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1386f8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1386fc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1386fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x138700: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x138700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x138704: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x138704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x138708: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x138708u;
    SET_GPR_VEC(ctx, 23, PS2_PAND(GPR_VEC(ctx, 23), GPR_VEC(ctx, 5)));
    // 0x13870c: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x13870cu;
    SET_GPR_VEC(ctx, 23, PS2_POR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 3)));
    // 0x138710: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x138710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x138714: 0x17103f  dsra32      $v0, $s7, 0
    ctx->pc = 0x138714u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x138718: 0x2694fc01  addiu       $s4, $s4, -0x3FF
    ctx->pc = 0x138718u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966273));
    // 0x13871c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13871cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x138720: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x138720u;
    SET_GPR_VEC(ctx, 23, PS2_PAND(GPR_VEC(ctx, 23), GPR_VEC(ctx, 5)));
    // 0x138724: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x138724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x138728: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x138728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x13872c: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x13872cu;
    SET_GPR_VEC(ctx, 23, PS2_POR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 2)));
    // 0x138730: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x138730u;
    {
        const bool branch_taken_0x138730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138730u;
            // 0x138734: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138730) {
            ctx->pc = 0x1387D0u;
            goto label_1387d0;
        }
    }
    ctx->pc = 0x138738u;
label_138738:
    // 0x138738: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x138738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13873c: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x13873cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x138740: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x138740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x138744: 0x24940432  addiu       $s4, $a0, 0x432
    ctx->pc = 0x138744u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x138748: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x138748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x13874c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13874Cu;
    {
        const bool branch_taken_0x13874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13874Cu;
            // 0x138750: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13874c) {
            ctx->pc = 0x138774u;
            goto label_138774;
        }
    }
    ctx->pc = 0x138754u;
    // 0x138754: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x138754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x138758: 0x141823  negu        $v1, $s4
    ctx->pc = 0x138758u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x13875c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x13875cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x138760: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x138760u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x138764: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x138764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x138768: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x138768u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x13876c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13876Cu;
    {
        const bool branch_taken_0x13876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13876Cu;
            // 0x138770: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13876c) {
            ctx->pc = 0x138780u;
            goto label_138780;
        }
    }
    ctx->pc = 0x138774u;
label_138774:
    // 0x138774: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x138774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x138778: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x138778u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x13877c: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x13877cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_138780:
    // 0x138780: 0xc0409de  jal         func_102778
    ctx->pc = 0x138780u;
    SET_GPR_U32(ctx, 31, 0x138788u);
    ctx->pc = 0x138784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138780u;
            // 0x138784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138788u; }
        if (ctx->pc != 0x138788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138788u; }
        if (ctx->pc != 0x138788u) { return; }
    }
    ctx->pc = 0x138788u;
    // 0x138788: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x138788u;
    {
        const bool branch_taken_0x138788 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x13878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138788u;
            // 0x13878c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138788) {
            ctx->pc = 0x1387A4u;
            goto label_1387a4;
        }
    }
    ctx->pc = 0x138790u;
    // 0x138790: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x138790u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33760u)));
    // 0x138794: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x138794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x138798: 0xc040850  jal         func_102140
    ctx->pc = 0x138798u;
    SET_GPR_U32(ctx, 31, 0x1387A0u);
    ctx->pc = 0x13879Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138798u;
            // 0x13879c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1387A0u; }
        if (ctx->pc != 0x1387A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1387A0u; }
        if (ctx->pc != 0x1387A0u) { return; }
    }
    ctx->pc = 0x1387A0u;
    // 0x1387a0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1387a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1387a4:
    // 0x1387a4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1387a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1387a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1387a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1387ac: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x1387acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1387b0: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x1387b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x1387b4: 0x2e4b824  and         $s7, $s7, $a0
    ctx->pc = 0x1387b4u;
    SET_GPR_VEC(ctx, 23, PS2_PAND(GPR_VEC(ctx, 23), GPR_VEC(ctx, 4)));
    // 0x1387b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1387b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1387bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1387bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1387c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1387c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1387c4: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x1387c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x1387c8: 0x2694fbcd  addiu       $s4, $s4, -0x433
    ctx->pc = 0x1387c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966221));
    // 0x1387cc: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x1387ccu;
    SET_GPR_VEC(ctx, 23, PS2_POR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 3)));
label_1387d0:
    // 0x1387d0: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x1387d0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65504u)));
    // 0x1387d4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1387d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1387d8: 0xc040866  jal         func_102198
    ctx->pc = 0x1387D8u;
    SET_GPR_U32(ctx, 31, 0x1387E0u);
    ctx->pc = 0x1387DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1387D8u;
            // 0x1387dc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1387E0u; }
        if (ctx->pc != 0x1387E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1387E0u; }
        if (ctx->pc != 0x1387E0u) { return; }
    }
    ctx->pc = 0x1387E0u;
    // 0x1387e0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1387e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1387e4: 0xdc25fb00  ld          $a1, -0x500($at)
    ctx->pc = 0x1387e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294966016)));
    // 0x1387e8: 0xc040880  jal         func_102200
    ctx->pc = 0x1387E8u;
    SET_GPR_U32(ctx, 31, 0x1387F0u);
    ctx->pc = 0x1387ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1387E8u;
            // 0x1387ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1387F0u; }
        if (ctx->pc != 0x1387F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1387F0u; }
        if (ctx->pc != 0x1387F0u) { return; }
    }
    ctx->pc = 0x1387F0u;
    // 0x1387f0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1387f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1387f4: 0xdc25fb08  ld          $a1, -0x4F8($at)
    ctx->pc = 0x1387f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294966024)));
    // 0x1387f8: 0xc040850  jal         func_102140
    ctx->pc = 0x1387F8u;
    SET_GPR_U32(ctx, 31, 0x138800u);
    ctx->pc = 0x1387FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1387F8u;
            // 0x1387fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138800u; }
        if (ctx->pc != 0x138800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138800u; }
        if (ctx->pc != 0x138800u) { return; }
    }
    ctx->pc = 0x138800u;
    // 0x138800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138804: 0xc0409de  jal         func_102778
    ctx->pc = 0x138804u;
    SET_GPR_U32(ctx, 31, 0x13880Cu);
    ctx->pc = 0x138808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138804u;
            // 0x138808: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13880Cu; }
        if (ctx->pc != 0x13880Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13880Cu; }
        if (ctx->pc != 0x13880Cu) { return; }
    }
    ctx->pc = 0x13880Cu;
    // 0x13880c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13880cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x138810: 0xdc25fb10  ld          $a1, -0x4F0($at)
    ctx->pc = 0x138810u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294966032)));
    // 0x138814: 0xc040880  jal         func_102200
    ctx->pc = 0x138814u;
    SET_GPR_U32(ctx, 31, 0x13881Cu);
    ctx->pc = 0x138818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138814u;
            // 0x138818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13881Cu; }
        if (ctx->pc != 0x13881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13881Cu; }
        if (ctx->pc != 0x13881Cu) { return; }
    }
    ctx->pc = 0x13881Cu;
    // 0x13881c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138820: 0xc040850  jal         func_102140
    ctx->pc = 0x138820u;
    SET_GPR_U32(ctx, 31, 0x138828u);
    ctx->pc = 0x138824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138820u;
            // 0x138824: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138828u; }
        if (ctx->pc != 0x138828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138828u; }
        if (ctx->pc != 0x138828u) { return; }
    }
    ctx->pc = 0x138828u;
    // 0x138828: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x138828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13882c: 0xc040a0c  jal         func_102830
    ctx->pc = 0x13882Cu;
    SET_GPR_U32(ctx, 31, 0x138834u);
    ctx->pc = 0x138830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13882Cu;
            // 0x138830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102830u;
    if (runtime->hasFunction(0x102830u)) {
        auto targetFn = runtime->lookupFunction(0x102830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138834u; }
        if (ctx->pc != 0x138834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x102830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138834u; }
        if (ctx->pc != 0x138834u) { return; }
    }
    ctx->pc = 0x138834u;
    // 0x138834: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x138834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x138838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13883c: 0xc0409ca  jal         func_102728
    ctx->pc = 0x13883Cu;
    SET_GPR_U32(ctx, 31, 0x138844u);
    ctx->pc = 0x138840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13883Cu;
            // 0x138840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138844u; }
        if (ctx->pc != 0x138844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138844u; }
        if (ctx->pc != 0x138844u) { return; }
    }
    ctx->pc = 0x138844u;
    // 0x138844: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x138844u;
    {
        const bool branch_taken_0x138844 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x138848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138844u;
            // 0x138848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138844) {
            ctx->pc = 0x13886Cu;
            goto label_13886c;
        }
    }
    ctx->pc = 0x13884Cu;
    // 0x13884c: 0xc0409de  jal         func_102778
    ctx->pc = 0x13884Cu;
    SET_GPR_U32(ctx, 31, 0x138854u);
    ctx->pc = 0x138850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13884Cu;
            // 0x138850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138854u; }
        if (ctx->pc != 0x138854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138854u; }
        if (ctx->pc != 0x138854u) { return; }
    }
    ctx->pc = 0x138854u;
    // 0x138854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x138854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138858: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138858u;
    SET_GPR_U32(ctx, 31, 0x138860u);
    ctx->pc = 0x13885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138858u;
            // 0x13885c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138860u; }
        if (ctx->pc != 0x138860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138860u; }
        if (ctx->pc != 0x138860u) { return; }
    }
    ctx->pc = 0x138860u;
    // 0x138860: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x138860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x138864: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x138864u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x138868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13886c:
    // 0x13886c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x13886cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x138870: 0x2e620017  sltiu       $v0, $s3, 0x17
    ctx->pc = 0x138870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x138874: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x138874u;
    {
        const bool branch_taken_0x138874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138874u;
            // 0x138878: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138874) {
            ctx->pc = 0x1388A8u;
            goto label_1388a8;
        }
    }
    ctx->pc = 0x13887Cu;
    // 0x13887c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x13887cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x138880: 0x2442fb98  addiu       $v0, $v0, -0x468
    ctx->pc = 0x138880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966168));
    // 0x138884: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x138884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138888: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13888c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x13888cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x138890: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138890u;
    SET_GPR_U32(ctx, 31, 0x138898u);
    ctx->pc = 0x138894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138890u;
            // 0x138894: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138898u; }
        if (ctx->pc != 0x138898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138898u; }
        if (ctx->pc != 0x138898u) { return; }
    }
    ctx->pc = 0x138898u;
    // 0x138898: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x138898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13889c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x13889cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1388a0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1388a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1388a4: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x1388a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_1388a8:
    // 0x1388a8: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x1388a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1388ac: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1388acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1388b0: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1388B0u;
    {
        const bool branch_taken_0x1388b0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1388b0) {
            ctx->pc = 0x1388B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1388B0u;
            // 0x1388b4: 0x108023  negu        $s0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1388C4u;
            goto label_1388c4;
        }
    }
    ctx->pc = 0x1388B8u;
    // 0x1388b8: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x1388b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x1388bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1388BCu;
    {
        const bool branch_taken_0x1388bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1388BCu;
            // 0x1388c0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388bc) {
            ctx->pc = 0x1388CCu;
            goto label_1388cc;
        }
    }
    ctx->pc = 0x1388C4u;
label_1388c4:
    // 0x1388c4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1388c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1388c8: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1388c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_1388cc:
    // 0x1388cc: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1388CCu;
    {
        const bool branch_taken_0x1388cc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1388D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1388CCu;
            // 0x1388d0: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388cc) {
            ctx->pc = 0x1388E8u;
            goto label_1388e8;
        }
    }
    ctx->pc = 0x1388D4u;
    // 0x1388d4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1388d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1388d8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1388d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1388dc: 0xafb3003c  sw          $s3, 0x3C($sp)
    ctx->pc = 0x1388dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
    // 0x1388e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1388E0u;
    {
        const bool branch_taken_0x1388e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1388E0u;
            // 0x1388e4: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388e0) {
            ctx->pc = 0x138900u;
            goto label_138900;
        }
    }
    ctx->pc = 0x1388E8u;
label_1388e8:
    // 0x1388e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1388e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1388ec: 0x131023  negu        $v0, $s3
    ctx->pc = 0x1388ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1388f0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1388f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1388f4: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1388f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1388f8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1388f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1388fc: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1388fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_138900:
    // 0x138900: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x138900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138904: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x138904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138908: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x138908u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x13890c: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x13890cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x138910: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x138910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x138914: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x138914u;
    {
        const bool branch_taken_0x138914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138914u;
            // 0x138918: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138914) {
            ctx->pc = 0x138928u;
            goto label_138928;
        }
    }
    ctx->pc = 0x13891Cu;
    // 0x13891c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x13891cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x138920: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x138920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138924: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x138924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_138928:
    // 0x138928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13892c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x13892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138930: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x138930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x138934: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x138934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x138938: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x138938u;
    {
        const bool branch_taken_0x138938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13893Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138938u;
            // 0x13893c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138938) {
            ctx->pc = 0x1389BCu;
            goto label_1389bc;
        }
    }
    ctx->pc = 0x138940u;
    // 0x138940: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x138940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138944: 0x2442fb20  addiu       $v0, $v0, -0x4E0
    ctx->pc = 0x138944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966048));
    // 0x138948: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13894c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13894cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138950: 0x800008  jr          $a0
    ctx->pc = 0x138950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138958u: goto label_138958;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138958u;
label_138958:
    // 0x138958: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x138958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13895c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138960: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x138960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x138964: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x138964u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x138968: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x138968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x13896c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13896Cu;
    {
        const bool branch_taken_0x13896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13896Cu;
            // 0x138970: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13896c) {
            ctx->pc = 0x1389BCu;
            goto label_1389bc;
        }
    }
    ctx->pc = 0x138974u;
label_138974:
    // 0x138974: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x138974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_138978:
    // 0x138978: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x138978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x13897c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x13897cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138980: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x138980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x138984: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x138984u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x138988: 0xafb4000c  sw          $s4, 0xC($sp)
    ctx->pc = 0x138988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
    // 0x13898c: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x13898cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x138990: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x138990u;
    {
        const bool branch_taken_0x138990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138990u;
            // 0x138994: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138990) {
            ctx->pc = 0x1389BCu;
            goto label_1389bc;
        }
    }
    ctx->pc = 0x138998u;
label_138998:
    // 0x138998: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x138998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_13899c:
    // 0x13899c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x13899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1389a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1389a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1389a4: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x1389a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1389a8: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x1389a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1389ac: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1389acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1389b0: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x1389b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x1389b4: 0x14102a  slt         $v0, $zero, $s4
    ctx->pc = 0x1389b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1389b8: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x1389b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_1389bc:
    // 0x1389bc: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1389bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1389c0: 0x2e820018  sltiu       $v0, $s4, 0x18
    ctx->pc = 0x1389c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1389c4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1389C4u;
    {
        const bool branch_taken_0x1389c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1389C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389C4u;
            // 0x1389c8: 0xafc00044  sw          $zero, 0x44($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389c4) {
            ctx->pc = 0x138A00u;
            goto label_138a00;
        }
    }
    ctx->pc = 0x1389CCu;
    // 0x1389cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1389ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1389d0: 0x2c51000f  sltiu       $s1, $v0, 0xF
    ctx->pc = 0x1389d0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1389d4: 0x0  nop
    ctx->pc = 0x1389d4u;
    // NOP
label_1389d8:
    // 0x1389d8: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x1389d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x1389dc: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1389dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1389e0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1389e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1389e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1389e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1389e8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1389e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1389ec: 0xafc30044  sw          $v1, 0x44($fp)
    ctx->pc = 0x1389ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
    // 0x1389f0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1389F0u;
    {
        const bool branch_taken_0x1389f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1389f0) {
            ctx->pc = 0x1389D8u;
            goto label_1389d8;
        }
    }
    ctx->pc = 0x1389F8u;
    // 0x1389f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1389F8u;
    {
        const bool branch_taken_0x1389f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389F8u;
            // 0x1389fc: 0x8fc50044  lw          $a1, 0x44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389f8) {
            ctx->pc = 0x138A0Cu;
            goto label_138a0c;
        }
    }
    ctx->pc = 0x138A00u;
label_138a00:
    // 0x138a00: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x138a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138a04: 0x2c71000f  sltiu       $s1, $v1, 0xF
    ctx->pc = 0x138a04u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x138a08: 0x8fc50044  lw          $a1, 0x44($fp)
    ctx->pc = 0x138a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_138a0c:
    // 0x138a0c: 0xc04edc4  jal         func_13B710
    ctx->pc = 0x138A0Cu;
    SET_GPR_U32(ctx, 31, 0x138A14u);
    ctx->pc = 0x138A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A0Cu;
            // 0x138a10: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B710u;
    if (runtime->hasFunction(0x13B710u)) {
        auto targetFn = runtime->lookupFunction(0x13B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A14u; }
        if (ctx->pc != 0x138A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x13b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A14u; }
        if (ctx->pc != 0x138A14u) { return; }
    }
    ctx->pc = 0x138A14u;
    // 0x138a14: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x138a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x138a18: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x138a18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x138a1c: 0x12200102  beqz        $s1, . + 4 + (0x102 << 2)
    ctx->pc = 0x138A1Cu;
    {
        const bool branch_taken_0x138a1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A1Cu;
            // 0x138a20: 0x8fb50058  lw          $s5, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a1c) {
            ctx->pc = 0x138E28u;
            goto label_138e28;
        }
    }
    ctx->pc = 0x138A24u;
    // 0x138a24: 0x12400100  beqz        $s2, . + 4 + (0x100 << 2)
    ctx->pc = 0x138A24u;
    {
        const bool branch_taken_0x138a24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A24u;
            // 0x138a28: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a24) {
            ctx->pc = 0x138E28u;
            goto label_138e28;
        }
    }
    ctx->pc = 0x138A2Cu;
    // 0x138a2c: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x138a2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a30: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x138a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x138a34: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x138a34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138a38: 0x1a600024  blez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x138A38u;
    {
        const bool branch_taken_0x138a38 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x138A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A38u;
            // 0x138a3c: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a38) {
            ctx->pc = 0x138ACCu;
            goto label_138acc;
        }
    }
    ctx->pc = 0x138A40u;
    // 0x138a40: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x138a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x138a44: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x138a44u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)15u)));
    // 0x138a48: 0x2442fb98  addiu       $v0, $v0, -0x468
    ctx->pc = 0x138a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966168));
    // 0x138a4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x138a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x138a50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138a54: 0x138103  sra         $s0, $s3, 4
    ctx->pc = 0x138a54u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
    // 0x138a58: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x138a58u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16u)));
    // 0x138a5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138A5Cu;
    {
        const bool branch_taken_0x138a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A5Cu;
            // 0x138a60: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a5c) {
            ctx->pc = 0x138A80u;
            goto label_138a80;
        }
    }
    ctx->pc = 0x138A64u;
    // 0x138a64: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x138a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x138a68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x138a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a6c: 0xdc45fc80  ld          $a1, -0x380($v0)
    ctx->pc = 0x138a6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294966400)));
    // 0x138a70: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x138a70u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)15u)));
    // 0x138a74: 0xc04092a  jal         func_1024A8
    ctx->pc = 0x138A74u;
    SET_GPR_U32(ctx, 31, 0x138A7Cu);
    ctx->pc = 0x138A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138A74u;
            // 0x138a78: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1024A8u;
    if (runtime->hasFunction(0x1024A8u)) {
        auto targetFn = runtime->lookupFunction(0x1024A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A7Cu; }
        if (ctx->pc != 0x138A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x1024a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138A7Cu; }
        if (ctx->pc != 0x138A7Cu) { return; }
    }
    ctx->pc = 0x138A7Cu;
    // 0x138a7c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x138a7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138a80:
    // 0x138a80: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x138A80u;
    {
        const bool branch_taken_0x138a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A80u;
            // 0x138a84: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a80) {
            ctx->pc = 0x138AB8u;
            goto label_138ab8;
        }
    }
    ctx->pc = 0x138A88u;
    // 0x138a88: 0x2451fc60  addiu       $s1, $v0, -0x3A0
    ctx->pc = 0x138a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
    // 0x138a8c: 0x0  nop
    ctx->pc = 0x138a8cu;
    // NOP
label_138a90:
    // 0x138a90: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x138a90u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x138a94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138A94u;
    {
        const bool branch_taken_0x138a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A94u;
            // 0x138a98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a94) {
            ctx->pc = 0x138AACu;
            goto label_138aac;
        }
    }
    ctx->pc = 0x138A9Cu;
    // 0x138a9c: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x138a9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138aa0: 0xc040880  jal         func_102200
    ctx->pc = 0x138AA0u;
    SET_GPR_U32(ctx, 31, 0x138AA8u);
    ctx->pc = 0x138AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138AA0u;
            // 0x138aa4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138AA8u; }
        if (ctx->pc != 0x138AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138AA8u; }
        if (ctx->pc != 0x138AA8u) { return; }
    }
    ctx->pc = 0x138AA8u;
    // 0x138aa8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x138aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138aac:
    // 0x138aac: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x138aacu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x138ab0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x138AB0u;
    {
        const bool branch_taken_0x138ab0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x138AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138AB0u;
            // 0x138ab4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ab0) {
            ctx->pc = 0x138A90u;
            goto label_138a90;
        }
    }
    ctx->pc = 0x138AB8u;
label_138ab8:
    // 0x138ab8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x138ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138abc: 0xc04092a  jal         func_1024A8
    ctx->pc = 0x138ABCu;
    SET_GPR_U32(ctx, 31, 0x138AC4u);
    ctx->pc = 0x138AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138ABCu;
            // 0x138ac0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1024A8u;
    if (runtime->hasFunction(0x1024A8u)) {
        auto targetFn = runtime->lookupFunction(0x1024A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138AC4u; }
        if (ctx->pc != 0x138AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x1024a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138AC4u; }
        if (ctx->pc != 0x138AC4u) { return; }
    }
    ctx->pc = 0x138AC4u;
    // 0x138ac4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x138AC4u;
    {
        const bool branch_taken_0x138ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138AC4u;
            // 0x138ac8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ac4) {
            ctx->pc = 0x138B30u;
            goto label_138b30;
        }
    }
    ctx->pc = 0x138ACCu;
label_138acc:
    // 0x138acc: 0x138823  negu        $s1, $s3
    ctx->pc = 0x138accu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x138ad0: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x138AD0u;
    {
        const bool branch_taken_0x138ad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138AD0u;
            // 0x138ad4: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ad0) {
            ctx->pc = 0x138B30u;
            goto label_138b30;
        }
    }
    ctx->pc = 0x138AD8u;
    // 0x138ad8: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x138ad8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)15u)));
    // 0x138adc: 0x2463fb98  addiu       $v1, $v1, -0x468
    ctx->pc = 0x138adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966168));
    // 0x138ae0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x138ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x138ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138ae8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x138ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138aec: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x138aecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138af0: 0xc040880  jal         func_102200
    ctx->pc = 0x138AF0u;
    SET_GPR_U32(ctx, 31, 0x138AF8u);
    ctx->pc = 0x138AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138AF0u;
            // 0x138af4: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138AF8u; }
        if (ctx->pc != 0x138AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138AF8u; }
        if (ctx->pc != 0x138AF8u) { return; }
    }
    ctx->pc = 0x138AF8u;
    // 0x138af8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x138AF8u;
    {
        const bool branch_taken_0x138af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138AF8u;
            // 0x138afc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138af8) {
            ctx->pc = 0x138B30u;
            goto label_138b30;
        }
    }
    ctx->pc = 0x138B00u;
    // 0x138b00: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x138b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x138b04: 0x2451fc60  addiu       $s1, $v0, -0x3A0
    ctx->pc = 0x138b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
label_138b08:
    // 0x138b08: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x138b08u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x138b0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B0Cu;
    {
        const bool branch_taken_0x138b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138B0Cu;
            // 0x138b10: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b0c) {
            ctx->pc = 0x138B24u;
            goto label_138b24;
        }
    }
    ctx->pc = 0x138B14u;
    // 0x138b14: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x138b14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138b18: 0xc040880  jal         func_102200
    ctx->pc = 0x138B18u;
    SET_GPR_U32(ctx, 31, 0x138B20u);
    ctx->pc = 0x138B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B18u;
            // 0x138b1c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B20u; }
        if (ctx->pc != 0x138B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B20u; }
        if (ctx->pc != 0x138B20u) { return; }
    }
    ctx->pc = 0x138B20u;
    // 0x138b20: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x138b20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138b24:
    // 0x138b24: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x138b24u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x138b28: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x138B28u;
    {
        const bool branch_taken_0x138b28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x138B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138B28u;
            // 0x138b2c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b28) {
            ctx->pc = 0x138B08u;
            goto label_138b08;
        }
    }
    ctx->pc = 0x138B30u;
label_138b30:
    // 0x138b30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x138b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138b34: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x138B34u;
    {
        const bool branch_taken_0x138b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b34) {
            ctx->pc = 0x138B88u;
            goto label_138b88;
        }
    }
    ctx->pc = 0x138B3Cu;
    // 0x138b3c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x138b3cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65472u)));
    // 0x138b40: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x138b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x138b44: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138B44u;
    SET_GPR_U32(ctx, 31, 0x138B4Cu);
    ctx->pc = 0x138B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B44u;
            // 0x138b48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B4Cu; }
        if (ctx->pc != 0x138B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B4Cu; }
        if (ctx->pc != 0x138B4Cu) { return; }
    }
    ctx->pc = 0x138B4Cu;
    // 0x138b4c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x138B4Cu;
    {
        const bool branch_taken_0x138b4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x138B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138B4Cu;
            // 0x138b50: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b4c) {
            ctx->pc = 0x138B88u;
            goto label_138b88;
        }
    }
    ctx->pc = 0x138B54u;
    // 0x138b54: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x138B54u;
    {
        const bool branch_taken_0x138b54 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x138b54) {
            ctx->pc = 0x138B88u;
            goto label_138b88;
        }
    }
    ctx->pc = 0x138B5Cu;
    // 0x138b5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x138b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x138b60: 0x188000ac  blez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x138B60u;
    {
        const bool branch_taken_0x138b60 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x138B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138B60u;
            // 0x138b64: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b60) {
            ctx->pc = 0x138E14u;
            goto label_138e14;
        }
    }
    ctx->pc = 0x138B68u;
    // 0x138b68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x138b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b6c: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x138b6cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x138b70: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x138b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x138b74: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x138b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x138b78: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x138b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x138b7c: 0xc040880  jal         func_102200
    ctx->pc = 0x138B7Cu;
    SET_GPR_U32(ctx, 31, 0x138B84u);
    ctx->pc = 0x138B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B7Cu;
            // 0x138b80: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B84u; }
        if (ctx->pc != 0x138B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B84u; }
        if (ctx->pc != 0x138B84u) { return; }
    }
    ctx->pc = 0x138B84u;
    // 0x138b84: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x138b84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138b88:
    // 0x138b88: 0xc0409de  jal         func_102778
    ctx->pc = 0x138B88u;
    SET_GPR_U32(ctx, 31, 0x138B90u);
    ctx->pc = 0x138B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B88u;
            // 0x138b8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B90u; }
        if (ctx->pc != 0x138B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B90u; }
        if (ctx->pc != 0x138B90u) { return; }
    }
    ctx->pc = 0x138B90u;
    // 0x138b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b94: 0xc040880  jal         func_102200
    ctx->pc = 0x138B94u;
    SET_GPR_U32(ctx, 31, 0x138B9Cu);
    ctx->pc = 0x138B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138B94u;
            // 0x138b98: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B9Cu; }
        if (ctx->pc != 0x138B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138B9Cu; }
        if (ctx->pc != 0x138B9Cu) { return; }
    }
    ctx->pc = 0x138B9Cu;
    // 0x138b9c: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x138b9cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32824u)));
    // 0x138ba0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x138ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x138ba4: 0xc040850  jal         func_102140
    ctx->pc = 0x138BA4u;
    SET_GPR_U32(ctx, 31, 0x138BACu);
    ctx->pc = 0x138BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138BA4u;
            // 0x138ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BACu; }
        if (ctx->pc != 0x138BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BACu; }
        if (ctx->pc != 0x138BACu) { return; }
    }
    ctx->pc = 0x138BACu;
    // 0x138bac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x138bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bb0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x138bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x138bb4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x138bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x138bb8: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x138bb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x138bbc: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x138bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x138bc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138bc4: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x138bc4u;
    SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 18), GPR_VEC(ctx, 4)));
    // 0x138bc8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x138bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x138bcc: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x138bccu;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 18), GPR_VEC(ctx, 3)));
    // 0x138bd0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x138bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138bd4: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x138BD4u;
    {
        const bool branch_taken_0x138bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138bd4) {
            ctx->pc = 0x138BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138BD4u;
            // 0x138bd8: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138C34u;
            goto label_138c34;
        }
    }
    ctx->pc = 0x138BDCu;
    // 0x138bdc: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x138bdcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32808u)));
    // 0x138be0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x138be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x138be4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x138be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138be8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x138be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x138bec: 0xc040866  jal         func_102198
    ctx->pc = 0x138BECu;
    SET_GPR_U32(ctx, 31, 0x138BF4u);
    ctx->pc = 0x138BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138BECu;
            // 0x138bf0: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BF4u; }
        if (ctx->pc != 0x138BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138BF4u; }
        if (ctx->pc != 0x138BF4u) { return; }
    }
    ctx->pc = 0x138BF4u;
    // 0x138bf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bfc: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138BFCu;
    SET_GPR_U32(ctx, 31, 0x138C04u);
    ctx->pc = 0x138C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138BFCu;
            // 0x138c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C04u; }
        if (ctx->pc != 0x138C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C04u; }
        if (ctx->pc != 0x138C04u) { return; }
    }
    ctx->pc = 0x138C04u;
    // 0x138c04: 0x1c4001ca  bgtz        $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x138C04u;
    {
        const bool branch_taken_0x138c04 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x138C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C04u;
            // 0x138c08: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c04) {
            ctx->pc = 0x139330u;
            goto label_139330;
        }
    }
    ctx->pc = 0x138C0Cu;
    // 0x138c0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c10: 0xc040866  jal         func_102198
    ctx->pc = 0x138C10u;
    SET_GPR_U32(ctx, 31, 0x138C18u);
    ctx->pc = 0x138C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C10u;
            // 0x138c14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C18u; }
        if (ctx->pc != 0x138C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C18u; }
        if (ctx->pc != 0x138C18u) { return; }
    }
    ctx->pc = 0x138C18u;
    // 0x138c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c1c: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138C1Cu;
    SET_GPR_U32(ctx, 31, 0x138C24u);
    ctx->pc = 0x138C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C1Cu;
            // 0x138c20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C24u; }
        if (ctx->pc != 0x138C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C24u; }
        if (ctx->pc != 0x138C24u) { return; }
    }
    ctx->pc = 0x138C24u;
    // 0x138c24: 0x44001be  bltz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x138C24u;
    {
        const bool branch_taken_0x138c24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x138C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C24u;
            // 0x138c28: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c24) {
            ctx->pc = 0x139320u;
            goto label_139320;
        }
    }
    ctx->pc = 0x138C2Cu;
    // 0x138c2c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x138C2Cu;
    {
        const bool branch_taken_0x138c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C2Cu;
            // 0x138c30: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c2c) {
            ctx->pc = 0x138E1Cu;
            goto label_138e1c;
        }
    }
    ctx->pc = 0x138C34u;
label_138c34:
    // 0x138c34: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x138C34u;
    {
        const bool branch_taken_0x138c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C34u;
            // 0x138c38: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c34) {
            ctx->pc = 0x138D20u;
            goto label_138d20;
        }
    }
    ctx->pc = 0x138C3Cu;
    // 0x138c3c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x138c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x138c40: 0x2463fb98  addiu       $v1, $v1, -0x468
    ctx->pc = 0x138c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966168));
    // 0x138c44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x138c44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c48: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x138c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x138c4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x138c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x138c50: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x138c50u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65408u)));
    // 0x138c54: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x138c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x138c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138c5c: 0xc04092a  jal         func_1024A8
    ctx->pc = 0x138C5Cu;
    SET_GPR_U32(ctx, 31, 0x138C64u);
    ctx->pc = 0x138C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C5Cu;
            // 0x138c60: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1024A8u;
    if (runtime->hasFunction(0x1024A8u)) {
        auto targetFn = runtime->lookupFunction(0x1024A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C64u; }
        if (ctx->pc != 0x138C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x1024a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C64u; }
        if (ctx->pc != 0x138C64u) { return; }
    }
    ctx->pc = 0x138C64u;
    // 0x138c64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c68: 0xc040866  jal         func_102198
    ctx->pc = 0x138C68u;
    SET_GPR_U32(ctx, 31, 0x138C70u);
    ctx->pc = 0x138C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C68u;
            // 0x138c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C70u; }
        if (ctx->pc != 0x138C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C70u; }
        if (ctx->pc != 0x138C70u) { return; }
    }
    ctx->pc = 0x138C70u;
    // 0x138c70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138C70u;
    {
        const bool branch_taken_0x138c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138C70u;
            // 0x138c74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c70) {
            ctx->pc = 0x138CA0u;
            goto label_138ca0;
        }
    }
    ctx->pc = 0x138C78u;
label_138c78:
    // 0x138c78: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x138c78u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x138c7c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x138c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x138c80: 0xc040880  jal         func_102200
    ctx->pc = 0x138C80u;
    SET_GPR_U32(ctx, 31, 0x138C88u);
    ctx->pc = 0x138C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C80u;
            // 0x138c84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C88u; }
        if (ctx->pc != 0x138C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C88u; }
        if (ctx->pc != 0x138C88u) { return; }
    }
    ctx->pc = 0x138C88u;
    // 0x138c88: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x138c88u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x138c8c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x138c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x138c90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x138c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c94: 0xc040880  jal         func_102200
    ctx->pc = 0x138C94u;
    SET_GPR_U32(ctx, 31, 0x138C9Cu);
    ctx->pc = 0x138C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138C94u;
            // 0x138c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C9Cu; }
        if (ctx->pc != 0x138C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138C9Cu; }
        if (ctx->pc != 0x138C9Cu) { return; }
    }
    ctx->pc = 0x138C9Cu;
    // 0x138c9c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x138c9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138ca0:
    // 0x138ca0: 0xc040a0c  jal         func_102830
    ctx->pc = 0x138CA0u;
    SET_GPR_U32(ctx, 31, 0x138CA8u);
    ctx->pc = 0x138CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138CA0u;
            // 0x138ca4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102830u;
    if (runtime->hasFunction(0x102830u)) {
        auto targetFn = runtime->lookupFunction(0x102830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CA8u; }
        if (ctx->pc != 0x138CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x102830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CA8u; }
        if (ctx->pc != 0x138CA8u) { return; }
    }
    ctx->pc = 0x138CA8u;
    // 0x138ca8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x138ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cac: 0xc0409de  jal         func_102778
    ctx->pc = 0x138CACu;
    SET_GPR_U32(ctx, 31, 0x138CB4u);
    ctx->pc = 0x138CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138CACu;
            // 0x138cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CB4u; }
        if (ctx->pc != 0x138CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CB4u; }
        if (ctx->pc != 0x138CB4u) { return; }
    }
    ctx->pc = 0x138CB4u;
    // 0x138cb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x138cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cb8: 0xc040866  jal         func_102198
    ctx->pc = 0x138CB8u;
    SET_GPR_U32(ctx, 31, 0x138CC0u);
    ctx->pc = 0x138CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138CB8u;
            // 0x138cbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CC0u; }
        if (ctx->pc != 0x138CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CC0u; }
        if (ctx->pc != 0x138CC0u) { return; }
    }
    ctx->pc = 0x138CC0u;
    // 0x138cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cc8: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x138cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cd0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x138cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x138cd4: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138CD4u;
    SET_GPR_U32(ctx, 31, 0x138CDCu);
    ctx->pc = 0x138CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138CD4u;
            // 0x138cd8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CDCu; }
        if (ctx->pc != 0x138CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CDCu; }
        if (ctx->pc != 0x138CDCu) { return; }
    }
    ctx->pc = 0x138CDCu;
    // 0x138cdc: 0x442027f  bltzl       $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x138CDCu;
    {
        const bool branch_taken_0x138cdc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x138cdc) {
            ctx->pc = 0x138CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138CDCu;
            // 0x138ce0: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1396DCu;
            goto label_1396dc;
        }
    }
    ctx->pc = 0x138CE4u;
    // 0x138ce4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x138ce4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65472u)));
    // 0x138ce8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x138ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x138cec: 0xc040866  jal         func_102198
    ctx->pc = 0x138CECu;
    SET_GPR_U32(ctx, 31, 0x138CF4u);
    ctx->pc = 0x138CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138CECu;
            // 0x138cf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CF4u; }
        if (ctx->pc != 0x138CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CF4u; }
        if (ctx->pc != 0x138CF4u) { return; }
    }
    ctx->pc = 0x138CF4u;
    // 0x138cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138cf8: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138CF8u;
    SET_GPR_U32(ctx, 31, 0x138D00u);
    ctx->pc = 0x138CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138CF8u;
            // 0x138cfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D00u; }
        if (ctx->pc != 0x138D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D00u; }
        if (ctx->pc != 0x138D00u) { return; }
    }
    ctx->pc = 0x138D00u;
    // 0x138d00: 0x4400098  bltz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x138D00u;
    {
        const bool branch_taken_0x138d00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x138D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138D00u;
            // 0x138d04: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d00) {
            ctx->pc = 0x138F64u;
            goto label_138f64;
        }
    }
    ctx->pc = 0x138D08u;
    // 0x138d08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x138d08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x138d0c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x138d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x138d10: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x138D10u;
    {
        const bool branch_taken_0x138d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138d10) {
            ctx->pc = 0x138C78u;
            goto label_138c78;
        }
    }
    ctx->pc = 0x138D18u;
    // 0x138d18: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x138D18u;
    {
        const bool branch_taken_0x138d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138D18u;
            // 0x138d1c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d18) {
            ctx->pc = 0x138E18u;
            goto label_138e18;
        }
    }
    ctx->pc = 0x138D20u;
label_138d20:
    // 0x138d20: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x138d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x138d24: 0x2463fb98  addiu       $v1, $v1, -0x468
    ctx->pc = 0x138d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966168));
    // 0x138d28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d2c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x138d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x138d30: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x138d30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138d34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x138d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x138d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d3c: 0xc040880  jal         func_102200
    ctx->pc = 0x138D3Cu;
    SET_GPR_U32(ctx, 31, 0x138D44u);
    ctx->pc = 0x138D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D3Cu;
            // 0x138d40: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D44u; }
        if (ctx->pc != 0x138D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D44u; }
        if (ctx->pc != 0x138D44u) { return; }
    }
    ctx->pc = 0x138D44u;
    // 0x138d44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x138D44u;
    {
        const bool branch_taken_0x138d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138D44u;
            // 0x138d48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d44) {
            ctx->pc = 0x138D68u;
            goto label_138d68;
        }
    }
    ctx->pc = 0x138D4Cu;
    // 0x138d4c: 0x0  nop
    ctx->pc = 0x138d4cu;
    // NOP
label_138d50:
    // 0x138d50: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x138d50u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x138d54: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x138d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x138d58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d5c: 0xc040880  jal         func_102200
    ctx->pc = 0x138D5Cu;
    SET_GPR_U32(ctx, 31, 0x138D64u);
    ctx->pc = 0x138D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D5Cu;
            // 0x138d60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D64u; }
        if (ctx->pc != 0x138D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D64u; }
        if (ctx->pc != 0x138D64u) { return; }
    }
    ctx->pc = 0x138D64u;
    // 0x138d64: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x138d64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138d68:
    // 0x138d68: 0xc040a0c  jal         func_102830
    ctx->pc = 0x138D68u;
    SET_GPR_U32(ctx, 31, 0x138D70u);
    ctx->pc = 0x138D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D68u;
            // 0x138d6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102830u;
    if (runtime->hasFunction(0x102830u)) {
        auto targetFn = runtime->lookupFunction(0x102830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D70u; }
        if (ctx->pc != 0x138D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x102830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D70u; }
        if (ctx->pc != 0x138D70u) { return; }
    }
    ctx->pc = 0x138D70u;
    // 0x138d70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x138d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d74: 0xc0409de  jal         func_102778
    ctx->pc = 0x138D74u;
    SET_GPR_U32(ctx, 31, 0x138D7Cu);
    ctx->pc = 0x138D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D74u;
            // 0x138d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D7Cu; }
        if (ctx->pc != 0x138D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D7Cu; }
        if (ctx->pc != 0x138D7Cu) { return; }
    }
    ctx->pc = 0x138D7Cu;
    // 0x138d7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x138d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d80: 0xc040866  jal         func_102198
    ctx->pc = 0x138D80u;
    SET_GPR_U32(ctx, 31, 0x138D88u);
    ctx->pc = 0x138D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D80u;
            // 0x138d84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D88u; }
        if (ctx->pc != 0x138D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D88u; }
        if (ctx->pc != 0x138D88u) { return; }
    }
    ctx->pc = 0x138D88u;
    // 0x138d88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d8c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x138d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138d90: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x138d90u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x138d94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x138d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138d98: 0x1682ffed  bne         $s4, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x138D98u;
    {
        const bool branch_taken_0x138d98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x138D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138D98u;
            // 0x138d9c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d98) {
            ctx->pc = 0x138D50u;
            goto label_138d50;
        }
    }
    ctx->pc = 0x138DA0u;
    // 0x138da0: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x138da0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65408u)));
    // 0x138da4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x138da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x138da8: 0xc040850  jal         func_102140
    ctx->pc = 0x138DA8u;
    SET_GPR_U32(ctx, 31, 0x138DB0u);
    ctx->pc = 0x138DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138DA8u;
            // 0x138dac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DB0u; }
        if (ctx->pc != 0x138DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DB0u; }
        if (ctx->pc != 0x138DB0u) { return; }
    }
    ctx->pc = 0x138DB0u;
    // 0x138db0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138db4: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138DB4u;
    SET_GPR_U32(ctx, 31, 0x138DBCu);
    ctx->pc = 0x138DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138DB4u;
            // 0x138db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DBCu; }
        if (ctx->pc != 0x138DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DBCu; }
        if (ctx->pc != 0x138DBCu) { return; }
    }
    ctx->pc = 0x138DBCu;
    // 0x138dbc: 0x5c40006a  bgtzl       $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x138DBCu;
    {
        const bool branch_taken_0x138dbc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x138dbc) {
            ctx->pc = 0x138DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138DBCu;
            // 0x138dc0: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138F68u;
            goto label_138f68;
        }
    }
    ctx->pc = 0x138DC4u;
    // 0x138dc4: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x138dc4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65408u)));
    // 0x138dc8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x138dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x138dcc: 0xc040866  jal         func_102198
    ctx->pc = 0x138DCCu;
    SET_GPR_U32(ctx, 31, 0x138DD4u);
    ctx->pc = 0x138DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138DCCu;
            // 0x138dd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DD4u; }
        if (ctx->pc != 0x138DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DD4u; }
        if (ctx->pc != 0x138DD4u) { return; }
    }
    ctx->pc = 0x138DD4u;
    // 0x138dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138dd8: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138DD8u;
    SET_GPR_U32(ctx, 31, 0x138DE0u);
    ctx->pc = 0x138DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138DD8u;
            // 0x138ddc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DE0u; }
        if (ctx->pc != 0x138DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138DE0u; }
        if (ctx->pc != 0x138DE0u) { return; }
    }
    ctx->pc = 0x138DE0u;
    // 0x138de0: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x138DE0u;
    {
        const bool branch_taken_0x138de0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x138DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138DE0u;
            // 0x138de4: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138de0) {
            ctx->pc = 0x138E18u;
            goto label_138e18;
        }
    }
    ctx->pc = 0x138DE8u;
    // 0x138de8: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x138de8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x138dec: 0x0  nop
    ctx->pc = 0x138decu;
    // NOP
label_138df0:
    // 0x138df0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x138df0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x138df4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x138df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x138df8: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x138df8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x138dfc: 0x0  nop
    ctx->pc = 0x138dfcu;
    // NOP
    // 0x138e00: 0x0  nop
    ctx->pc = 0x138e00u;
    // NOP
    // 0x138e04: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x138E04u;
    {
        const bool branch_taken_0x138e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x138e04) {
            ctx->pc = 0x138DF0u;
            goto label_138df0;
        }
    }
    ctx->pc = 0x138E0Cu;
    // 0x138e0c: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x138E0Cu;
    {
        const bool branch_taken_0x138e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E0Cu;
            // 0x138e10: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e0c) {
            ctx->pc = 0x1396DCu;
            goto label_1396dc;
        }
    }
    ctx->pc = 0x138E14u;
label_138e14:
    // 0x138e14: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x138e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_138e18:
    // 0x138e18: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x138e18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_138e1c:
    // 0x138e1c: 0x8fb3002c  lw          $s3, 0x2C($sp)
    ctx->pc = 0x138e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x138e20: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x138e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x138e24: 0x8fb50058  lw          $s5, 0x58($sp)
    ctx->pc = 0x138e24u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_138e28:
    // 0x138e28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x138e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138e2c: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x138E2Cu;
    {
        const bool branch_taken_0x138e2c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x138E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E2Cu;
            // 0x138e30: 0x2a62000f  slti        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e2c) {
            ctx->pc = 0x138FA8u;
            goto label_138fa8;
        }
    }
    ctx->pc = 0x138E34u;
    // 0x138e34: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x138E34u;
    {
        const bool branch_taken_0x138e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E34u;
            // 0x138e38: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e34) {
            ctx->pc = 0x138FA8u;
            goto label_138fa8;
        }
    }
    ctx->pc = 0x138E3Cu;
    // 0x138e3c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x138e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x138e40: 0x2442fb98  addiu       $v0, $v0, -0x468
    ctx->pc = 0x138e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966168));
    // 0x138e44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138e48: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x138e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x138e4c: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x138E4Cu;
    {
        const bool branch_taken_0x138e4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x138E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E4Cu;
            // 0x138e50: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e4c) {
            ctx->pc = 0x138E98u;
            goto label_138e98;
        }
    }
    ctx->pc = 0x138E54u;
    // 0x138e54: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x138e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138e58: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x138E58u;
    {
        const bool branch_taken_0x138e58 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x138E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E58u;
            // 0x138e5c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e58) {
            ctx->pc = 0x138EA0u;
            goto label_138ea0;
        }
    }
    ctx->pc = 0x138E60u;
    // 0x138e60: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x138e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x138e64: 0x460012e  bltz        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x138E64u;
    {
        const bool branch_taken_0x138e64 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x138E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E64u;
            // 0x138e68: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e64) {
            ctx->pc = 0x139320u;
            goto label_139320;
        }
    }
    ctx->pc = 0x138E6Cu;
    // 0x138e6c: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x138e6cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32808u)));
    // 0x138e70: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x138e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x138e74: 0xc040880  jal         func_102200
    ctx->pc = 0x138E74u;
    SET_GPR_U32(ctx, 31, 0x138E7Cu);
    ctx->pc = 0x138E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E74u;
            // 0x138e78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E7Cu; }
        if (ctx->pc != 0x138E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E7Cu; }
        if (ctx->pc != 0x138E7Cu) { return; }
    }
    ctx->pc = 0x138E7Cu;
    // 0x138e7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x138e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e80: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138E80u;
    SET_GPR_U32(ctx, 31, 0x138E88u);
    ctx->pc = 0x138E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E80u;
            // 0x138e84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E88u; }
        if (ctx->pc != 0x138E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E88u; }
        if (ctx->pc != 0x138E88u) { return; }
    }
    ctx->pc = 0x138E88u;
    // 0x138e88: 0x18400125  blez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x138E88u;
    {
        const bool branch_taken_0x138e88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x138E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E88u;
            // 0x138e8c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e88) {
            ctx->pc = 0x139320u;
            goto label_139320;
        }
    }
    ctx->pc = 0x138E90u;
    // 0x138e90: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x138E90u;
    {
        const bool branch_taken_0x138e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138E90u;
            // 0x138e94: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e90) {
            ctx->pc = 0x139334u;
            goto label_139334;
        }
    }
    ctx->pc = 0x138E98u;
label_138e98:
    // 0x138e98: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x138e98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138e9c: 0x0  nop
    ctx->pc = 0x138e9cu;
    // NOP
label_138ea0:
    // 0x138ea0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138EA0u;
    {
        const bool branch_taken_0x138ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138EA0u;
            // 0x138ea4: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ea0) {
            ctx->pc = 0x138ED0u;
            goto label_138ed0;
        }
    }
    ctx->pc = 0x138EA8u;
label_138ea8:
    // 0x138ea8: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x138ea8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x138eac: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x138eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x138eb0: 0xc040880  jal         func_102200
    ctx->pc = 0x138EB0u;
    SET_GPR_U32(ctx, 31, 0x138EB8u);
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EB8u; }
        if (ctx->pc != 0x138EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EB8u; }
        if (ctx->pc != 0x138EB8u) { return; }
    }
    ctx->pc = 0x138EB8u;
    // 0x138eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ebc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ec0: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138EC0u;
    SET_GPR_U32(ctx, 31, 0x138EC8u);
    ctx->pc = 0x138EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138EC0u;
            // 0x138ec4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EC8u; }
        if (ctx->pc != 0x138EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EC8u; }
        if (ctx->pc != 0x138EC8u) { return; }
    }
    ctx->pc = 0x138EC8u;
    // 0x138ec8: 0x10400204  beqz        $v0, . + 4 + (0x204 << 2)
    ctx->pc = 0x138EC8u;
    {
        const bool branch_taken_0x138ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138EC8u;
            // 0x138ecc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ec8) {
            ctx->pc = 0x1396DCu;
            goto label_1396dc;
        }
    }
    ctx->pc = 0x138ED0u;
label_138ed0:
    // 0x138ed0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x138ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ed4: 0xc04092a  jal         func_1024A8
    ctx->pc = 0x138ED4u;
    SET_GPR_U32(ctx, 31, 0x138EDCu);
    ctx->pc = 0x138ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138ED4u;
            // 0x138ed8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1024A8u;
    if (runtime->hasFunction(0x1024A8u)) {
        auto targetFn = runtime->lookupFunction(0x1024A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EDCu; }
        if (ctx->pc != 0x138EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x1024a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EDCu; }
        if (ctx->pc != 0x138EDCu) { return; }
    }
    ctx->pc = 0x138EDCu;
    // 0x138edc: 0xc040a0c  jal         func_102830
    ctx->pc = 0x138EDCu;
    SET_GPR_U32(ctx, 31, 0x138EE4u);
    ctx->pc = 0x138EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138EDCu;
            // 0x138ee0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102830u;
    if (runtime->hasFunction(0x102830u)) {
        auto targetFn = runtime->lookupFunction(0x102830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EE4u; }
        if (ctx->pc != 0x138EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x102830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EE4u; }
        if (ctx->pc != 0x138EE4u) { return; }
    }
    ctx->pc = 0x138EE4u;
    // 0x138ee4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x138ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ee8: 0xc0409de  jal         func_102778
    ctx->pc = 0x138EE8u;
    SET_GPR_U32(ctx, 31, 0x138EF0u);
    ctx->pc = 0x138EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138EE8u;
            // 0x138eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EF0u; }
        if (ctx->pc != 0x138EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EF0u; }
        if (ctx->pc != 0x138EF0u) { return; }
    }
    ctx->pc = 0x138EF0u;
    // 0x138ef0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ef4: 0xc040880  jal         func_102200
    ctx->pc = 0x138EF4u;
    SET_GPR_U32(ctx, 31, 0x138EFCu);
    ctx->pc = 0x138EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138EF4u;
            // 0x138ef8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EFCu; }
        if (ctx->pc != 0x138EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EFCu; }
        if (ctx->pc != 0x138EFCu) { return; }
    }
    ctx->pc = 0x138EFCu;
    // 0x138efc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x138efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f00: 0xc040866  jal         func_102198
    ctx->pc = 0x138F00u;
    SET_GPR_U32(ctx, 31, 0x138F08u);
    ctx->pc = 0x138F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F00u;
            // 0x138f04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F08u; }
        if (ctx->pc != 0x138F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F08u; }
        if (ctx->pc != 0x138F08u) { return; }
    }
    ctx->pc = 0x138F08u;
    // 0x138f08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f0c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x138f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138f10: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x138f10u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x138f14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x138f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138f18: 0x1684ffe3  bne         $s4, $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x138F18u;
    {
        const bool branch_taken_0x138f18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x138F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138F18u;
            // 0x138f1c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f18) {
            ctx->pc = 0x138EA8u;
            goto label_138ea8;
        }
    }
    ctx->pc = 0x138F20u;
    // 0x138f20: 0xc040850  jal         func_102140
    ctx->pc = 0x138F20u;
    SET_GPR_U32(ctx, 31, 0x138F28u);
    ctx->pc = 0x138F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F20u;
            // 0x138f24: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F28u; }
        if (ctx->pc != 0x138F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F28u; }
        if (ctx->pc != 0x138F28u) { return; }
    }
    ctx->pc = 0x138F28u;
    // 0x138f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f30: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138F30u;
    SET_GPR_U32(ctx, 31, 0x138F38u);
    ctx->pc = 0x138F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F30u;
            // 0x138f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F38u; }
        if (ctx->pc != 0x138F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F38u; }
        if (ctx->pc != 0x138F38u) { return; }
    }
    ctx->pc = 0x138F38u;
    // 0x138f38: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x138F38u;
    {
        const bool branch_taken_0x138f38 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x138F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138F38u;
            // 0x138f3c: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f38) {
            ctx->pc = 0x138F6Cu;
            goto label_138f6c;
        }
    }
    ctx->pc = 0x138F40u;
    // 0x138f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f44: 0xc0409ca  jal         func_102728
    ctx->pc = 0x138F44u;
    SET_GPR_U32(ctx, 31, 0x138F4Cu);
    ctx->pc = 0x138F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F44u;
            // 0x138f48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F4Cu; }
        if (ctx->pc != 0x138F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F4Cu; }
        if (ctx->pc != 0x138F4Cu) { return; }
    }
    ctx->pc = 0x138F4Cu;
    // 0x138f4c: 0x144001e3  bnez        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x138F4Cu;
    {
        const bool branch_taken_0x138f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138F4Cu;
            // 0x138f50: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f4c) {
            ctx->pc = 0x1396DCu;
            goto label_1396dc;
        }
    }
    ctx->pc = 0x138F54u;
    // 0x138f54: 0x104001e1  beqz        $v0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x138F54u;
    {
        const bool branch_taken_0x138f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138F54u;
            // 0x138f58: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f54) {
            ctx->pc = 0x1396DCu;
            goto label_1396dc;
        }
    }
    ctx->pc = 0x138F5Cu;
    // 0x138f5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138F5Cu;
    {
        const bool branch_taken_0x138f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138F5Cu;
            // 0x138f60: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f5c) {
            ctx->pc = 0x138F70u;
            goto label_138f70;
        }
    }
    ctx->pc = 0x138F64u;
label_138f64:
    // 0x138f64: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x138f64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_138f68:
    // 0x138f68: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x138f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_138f6c:
    // 0x138f6c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x138f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_138f70:
    // 0x138f70: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x138f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_138f74:
    // 0x138f74: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x138f74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x138f78: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x138F78u;
    {
        const bool branch_taken_0x138f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x138F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138F78u;
            // 0x138f7c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138f78) {
            ctx->pc = 0x138F98u;
            goto label_138f98;
        }
    }
    ctx->pc = 0x138F80u;
    // 0x138f80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x138f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x138f84: 0x56a2fffb  bnel        $s5, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x138F84u;
    {
        const bool branch_taken_0x138f84 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x138f84) {
            ctx->pc = 0x138F88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138F84u;
            // 0x138f88: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138F74u;
            goto label_138f74;
        }
    }
    ctx->pc = 0x138F8Cu;
    // 0x138f8c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x138f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x138f90: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x138f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f94: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x138f94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_138f98:
    // 0x138f98: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x138f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x138f9c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x138f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x138fa0: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x138FA0u;
    {
        const bool branch_taken_0x138fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138FA0u;
            // 0x138fa4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fa0) {
            ctx->pc = 0x1396DCu;
            goto label_1396dc;
        }
    }
    ctx->pc = 0x138FA8u;
label_138fa8:
    // 0x138fa8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x138fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x138fac: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x138facu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138fb0: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x138fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x138fb4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x138fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x138fb8: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x138FB8u;
    {
        const bool branch_taken_0x138fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138FB8u;
            // 0x138fbc: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fb8) {
            ctx->pc = 0x139068u;
            goto label_139068;
        }
    }
    ctx->pc = 0x138FC0u;
    // 0x138fc0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x138fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138fc4: 0x28570002  slti        $s7, $v0, 0x2
    ctx->pc = 0x138fc4u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138fc8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x138FC8u;
    {
        const bool branch_taken_0x138fc8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138FC8u;
            // 0x138fcc: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fc8) {
            ctx->pc = 0x138FE8u;
            goto label_138fe8;
        }
    }
    ctx->pc = 0x138FD0u;
    // 0x138fd0: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x138FD0u;
    {
        const bool branch_taken_0x138fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x138FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138FD0u;
            // 0x138fd4: 0x24740433  addiu       $s4, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fd0) {
            ctx->pc = 0x13903Cu;
            goto label_13903c;
        }
    }
    ctx->pc = 0x138FD8u;
    // 0x138fd8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x138fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x138fdc: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x138fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x138fe0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x138FE0u;
    {
        const bool branch_taken_0x138fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138FE0u;
            // 0x138fe4: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fe0) {
            ctx->pc = 0x13903Cu;
            goto label_13903c;
        }
    }
    ctx->pc = 0x138FE8u;
label_138fe8:
    // 0x138fe8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x138fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138fec: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x138fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x138ff0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x138ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x138ff4: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x138ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x138ff8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138FF8u;
    {
        const bool branch_taken_0x138ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138FF8u;
            // 0x138ffc: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ff8) {
            ctx->pc = 0x139008u;
            goto label_139008;
        }
    }
    ctx->pc = 0x139000u;
    // 0x139000: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139000u;
    {
        const bool branch_taken_0x139000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139000u;
            // 0x139004: 0x709023  subu        $s2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139000) {
            ctx->pc = 0x139024u;
            goto label_139024;
        }
    }
    ctx->pc = 0x139008u;
label_139008:
    // 0x139008: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x139008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13900c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x139010: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x139010u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x139014: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x139014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x139018: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x139018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13901c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x13901cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x139020: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x139020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_139024:
    // 0x139024: 0x8fb40020  lw          $s4, 0x20($sp)
    ctx->pc = 0x139024u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139028: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x139028u;
    {
        const bool branch_taken_0x139028 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x13902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139028u;
            // 0x13902c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139028) {
            ctx->pc = 0x139040u;
            goto label_139040;
        }
    }
    ctx->pc = 0x139030u;
    // 0x139030: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x139030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139034: 0x748823  subu        $s1, $v1, $s4
    ctx->pc = 0x139034u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x139038: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x139038u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13903c:
    // 0x13903c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x13903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_139040:
    // 0x139040: 0xc04eee4  jal         func_13BB90
    ctx->pc = 0x139040u;
    SET_GPR_U32(ctx, 31, 0x139048u);
    ctx->pc = 0x139044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139040u;
            // 0x139044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BB90u;
    if (runtime->hasFunction(0x13BB90u)) {
        auto targetFn = runtime->lookupFunction(0x13BB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139048u; }
        if (ctx->pc != 0x139048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x13bb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139048u; }
        if (ctx->pc != 0x139048u) { return; }
    }
    ctx->pc = 0x139048u;
    // 0x139048: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x139048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x13904c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139050: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x139050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139054: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x139054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x139058: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x139058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13905c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x13905cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x139060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x139060u;
    {
        const bool branch_taken_0x139060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139060u;
            // 0x139064: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139060) {
            ctx->pc = 0x139070u;
            goto label_139070;
        }
    }
    ctx->pc = 0x139068u;
label_139068:
    // 0x139068: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x139068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13906c: 0x28770002  slti        $s7, $v1, 0x2
    ctx->pc = 0x13906cu;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_139070:
    // 0x139070: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x139070u;
    {
        const bool branch_taken_0x139070 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x139074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139070u;
            // 0x139074: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139070) {
            ctx->pc = 0x1390A0u;
            goto label_1390a0;
        }
    }
    ctx->pc = 0x139078u;
    // 0x139078: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x139078u;
    {
        const bool branch_taken_0x139078 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13907Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139078u;
            // 0x13907c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139078) {
            ctx->pc = 0x1390A0u;
            goto label_1390a0;
        }
    }
    ctx->pc = 0x139080u;
    // 0x139080: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x139080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x139084: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x139084u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
    // 0x139088: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x139088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13908c: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x13908cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x139090: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x139090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x139094: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x139094u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x139098: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x139098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13909c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x13909cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1390a0:
    // 0x1390a0: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1390a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1390a4: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1390A4u;
    {
        const bool branch_taken_0x1390a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1390A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1390A4u;
            // 0x1390a8: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390a4) {
            ctx->pc = 0x139120u;
            goto label_139120;
        }
    }
    ctx->pc = 0x1390ACu;
    // 0x1390ac: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1390ACu;
    {
        const bool branch_taken_0x1390ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1390B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1390ACu;
            // 0x1390b0: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390ac) {
            ctx->pc = 0x139110u;
            goto label_139110;
        }
    }
    ctx->pc = 0x1390B4u;
    // 0x1390b4: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1390B4u;
    {
        const bool branch_taken_0x1390b4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1390B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1390B4u;
            // 0x1390b8: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390b4) {
            ctx->pc = 0x1390ECu;
            goto label_1390ec;
        }
    }
    ctx->pc = 0x1390BCu;
    // 0x1390bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1390bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390c0: 0xc04ef7e  jal         func_13BDF8
    ctx->pc = 0x1390C0u;
    SET_GPR_U32(ctx, 31, 0x1390C8u);
    ctx->pc = 0x1390C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1390C0u;
            // 0x1390c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BDF8u;
    if (runtime->hasFunction(0x13BDF8u)) {
        auto targetFn = runtime->lookupFunction(0x13BDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390C8u; }
        if (ctx->pc != 0x1390C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x13bdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390C8u; }
        if (ctx->pc != 0x1390C8u) { return; }
    }
    ctx->pc = 0x1390C8u;
    // 0x1390c8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1390c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1390cc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1390ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390d0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1390d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1390d4: 0xc04eef2  jal         func_13BBC8
    ctx->pc = 0x1390D4u;
    SET_GPR_U32(ctx, 31, 0x1390DCu);
    ctx->pc = 0x1390D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1390D4u;
            // 0x1390d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC8u;
    if (runtime->hasFunction(0x13BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x13BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390DCu; }
        if (ctx->pc != 0x1390DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x13bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390DCu; }
        if (ctx->pc != 0x1390DCu) { return; }
    }
    ctx->pc = 0x1390DCu;
    // 0x1390dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1390dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1390e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1390e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390e4: 0xc04edee  jal         func_13B7B8
    ctx->pc = 0x1390E4u;
    SET_GPR_U32(ctx, 31, 0x1390ECu);
    ctx->pc = 0x1390E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1390E4u;
            // 0x1390e8: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (runtime->hasFunction(0x13B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390ECu; }
        if (ctx->pc != 0x1390ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x13b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390ECu; }
        if (ctx->pc != 0x1390ECu) { return; }
    }
    ctx->pc = 0x1390ECu;
label_1390ec:
    // 0x1390ec: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1390ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1390f0: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x1390f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1390f4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1390F4u;
    {
        const bool branch_taken_0x1390f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1390F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1390F4u;
            // 0x1390f8: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390f4) {
            ctx->pc = 0x139120u;
            goto label_139120;
        }
    }
    ctx->pc = 0x1390FCu;
    // 0x1390fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1390fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139100: 0xc04ef7e  jal         func_13BDF8
    ctx->pc = 0x139100u;
    SET_GPR_U32(ctx, 31, 0x139108u);
    ctx->pc = 0x139104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139100u;
            // 0x139104: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BDF8u;
    if (runtime->hasFunction(0x13BDF8u)) {
        auto targetFn = runtime->lookupFunction(0x13BDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139108u; }
        if (ctx->pc != 0x139108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x13bdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139108u; }
        if (ctx->pc != 0x139108u) { return; }
    }
    ctx->pc = 0x139108u;
    // 0x139108: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x139108u;
    {
        const bool branch_taken_0x139108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139108u;
            // 0x13910c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139108) {
            ctx->pc = 0x139120u;
            goto label_139120;
        }
    }
    ctx->pc = 0x139110u;
label_139110:
    // 0x139110: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x139110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139114: 0xc04ef7e  jal         func_13BDF8
    ctx->pc = 0x139114u;
    SET_GPR_U32(ctx, 31, 0x13911Cu);
    ctx->pc = 0x139118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139114u;
            // 0x139118: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BDF8u;
    if (runtime->hasFunction(0x13BDF8u)) {
        auto targetFn = runtime->lookupFunction(0x13BDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13911Cu; }
        if (ctx->pc != 0x13911Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x13bdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13911Cu; }
        if (ctx->pc != 0x13911Cu) { return; }
    }
    ctx->pc = 0x13911Cu;
    // 0x13911c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x13911cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_139120:
    // 0x139120: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x139120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139124: 0xc04eee4  jal         func_13BB90
    ctx->pc = 0x139124u;
    SET_GPR_U32(ctx, 31, 0x13912Cu);
    ctx->pc = 0x139128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139124u;
            // 0x139128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BB90u;
    if (runtime->hasFunction(0x13BB90u)) {
        auto targetFn = runtime->lookupFunction(0x13BB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13912Cu; }
        if (ctx->pc != 0x13912Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x13bb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13912Cu; }
        if (ctx->pc != 0x13912Cu) { return; }
    }
    ctx->pc = 0x13912Cu;
    // 0x13912c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x13912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x139130: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x139130u;
    {
        const bool branch_taken_0x139130 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x139134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139130u;
            // 0x139134: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139130) {
            ctx->pc = 0x13914Cu;
            goto label_13914c;
        }
    }
    ctx->pc = 0x139138u;
    // 0x139138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x139138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13913c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x13913cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139140: 0xc04ef7e  jal         func_13BDF8
    ctx->pc = 0x139140u;
    SET_GPR_U32(ctx, 31, 0x139148u);
    ctx->pc = 0x139144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139140u;
            // 0x139144: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BDF8u;
    if (runtime->hasFunction(0x13BDF8u)) {
        auto targetFn = runtime->lookupFunction(0x13BDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139148u; }
        if (ctx->pc != 0x139148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x13bdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139148u; }
        if (ctx->pc != 0x139148u) { return; }
    }
    ctx->pc = 0x139148u;
    // 0x139148: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x139148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_13914c:
    // 0x13914c: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x13914Cu;
    {
        const bool branch_taken_0x13914c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x139150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13914Cu;
            // 0x139150: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13914c) {
            ctx->pc = 0x1391A4u;
            goto label_1391a4;
        }
    }
    ctx->pc = 0x139154u;
    // 0x139154: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x139154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x139158: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x139158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x13915c: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x13915cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 22), GPR_VEC(ctx, 2)));
    // 0x139160: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x139160u;
    {
        const bool branch_taken_0x139160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139160) {
            ctx->pc = 0x139164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139160u;
            // 0x139164: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1391A0u;
            goto label_1391a0;
        }
    }
    ctx->pc = 0x139168u;
    // 0x139168: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x139168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x13916c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x13916cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x139170: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x139170u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x139174: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x139174u;
    {
        const bool branch_taken_0x139174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139174u;
            // 0x139178: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139174) {
            ctx->pc = 0x13919Cu;
            goto label_13919c;
        }
    }
    ctx->pc = 0x13917Cu;
    // 0x13917c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13917cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139180: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139184: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x139184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139188: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x139188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x13918c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139190: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x139190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x139194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x139194u;
    {
        const bool branch_taken_0x139194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139194u;
            // 0x139198: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139194) {
            ctx->pc = 0x1391A0u;
            goto label_1391a0;
        }
    }
    ctx->pc = 0x13919Cu;
label_13919c:
    // 0x13919c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x13919cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1391a0:
    // 0x1391a0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1391a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1391a4:
    // 0x1391a4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1391A4u;
    {
        const bool branch_taken_0x1391a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1391A4u;
            // 0x1391a8: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391a4) {
            ctx->pc = 0x1391D0u;
            goto label_1391d0;
        }
    }
    ctx->pc = 0x1391ACu;
    // 0x1391ac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1391acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1391b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1391b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1391b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1391b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1391b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1391b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1391bc: 0xc04ee92  jal         func_13BA48
    ctx->pc = 0x1391BCu;
    SET_GPR_U32(ctx, 31, 0x1391C4u);
    ctx->pc = 0x1391C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1391BCu;
            // 0x1391c0: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BA48u;
    if (runtime->hasFunction(0x13BA48u)) {
        auto targetFn = runtime->lookupFunction(0x13BA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391C4u; }
        if (ctx->pc != 0x1391C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x13ba48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391C4u; }
        if (ctx->pc != 0x1391C4u) { return; }
    }
    ctx->pc = 0x1391C4u;
    // 0x1391c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1391c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1391c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1391C8u;
    {
        const bool branch_taken_0x1391c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1391C8u;
            // 0x1391cc: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391c8) {
            ctx->pc = 0x1391D8u;
            goto label_1391d8;
        }
    }
    ctx->pc = 0x1391D0u;
label_1391d0:
    // 0x1391d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1391d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1391d4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1391d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1391d8:
    // 0x1391d8: 0x3054001f  andi        $s4, $v0, 0x1F
    ctx->pc = 0x1391d8u;
    SET_GPR_VEC(ctx, 20, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
    // 0x1391dc: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1391DCu;
    {
        const bool branch_taken_0x1391dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1391DCu;
            // 0x1391e0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391dc) {
            ctx->pc = 0x1391E8u;
            goto label_1391e8;
        }
    }
    ctx->pc = 0x1391E4u;
    // 0x1391e4: 0x54a023  subu        $s4, $v0, $s4
    ctx->pc = 0x1391e4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1391e8:
    // 0x1391e8: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1391e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1391ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1391ECu;
    {
        const bool branch_taken_0x1391ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1391F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1391ECu;
            // 0x1391f0: 0x2a820004  slti        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391ec) {
            ctx->pc = 0x139218u;
            goto label_139218;
        }
    }
    ctx->pc = 0x1391F4u;
    // 0x1391f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1391f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1391f8: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x1391f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x1391fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1391fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139200: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x139200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x139204: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x139204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x139208: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x139208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13920c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x13920cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x139210: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x139210u;
    {
        const bool branch_taken_0x139210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139210u;
            // 0x139214: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139210) {
            ctx->pc = 0x13923Cu;
            goto label_13923c;
        }
    }
    ctx->pc = 0x139218u;
label_139218:
    // 0x139218: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x139218u;
    {
        const bool branch_taken_0x139218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13921Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139218u;
            // 0x13921c: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139218) {
            ctx->pc = 0x13923Cu;
            goto label_13923c;
        }
    }
    ctx->pc = 0x139220u;
    // 0x139220: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x139220u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x139224: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x139224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139228: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x139228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x13922c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x13922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x139230: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x139230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x139234: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x139234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x139238: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x139238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_13923c:
    // 0x13923c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x13923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139240: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139240u;
    {
        const bool branch_taken_0x139240 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x139244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139240u;
            // 0x139244: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139240) {
            ctx->pc = 0x139258u;
            goto label_139258;
        }
    }
    ctx->pc = 0x139248u;
    // 0x139248: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x139248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13924c: 0xc04efbe  jal         func_13BEF8
    ctx->pc = 0x13924Cu;
    SET_GPR_U32(ctx, 31, 0x139254u);
    ctx->pc = 0x139250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13924Cu;
            // 0x139250: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BEF8u;
    if (runtime->hasFunction(0x13BEF8u)) {
        auto targetFn = runtime->lookupFunction(0x13BEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139254u; }
        if (ctx->pc != 0x139254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x13bef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139254u; }
        if (ctx->pc != 0x139254u) { return; }
    }
    ctx->pc = 0x139254u;
    // 0x139254: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x139254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_139258:
    // 0x139258: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x139258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13925c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13925Cu;
    {
        const bool branch_taken_0x13925c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x139260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13925Cu;
            // 0x139260: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13925c) {
            ctx->pc = 0x139274u;
            goto label_139274;
        }
    }
    ctx->pc = 0x139264u;
    // 0x139264: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x139264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139268: 0xc04efbe  jal         func_13BEF8
    ctx->pc = 0x139268u;
    SET_GPR_U32(ctx, 31, 0x139270u);
    ctx->pc = 0x13926Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139268u;
            // 0x13926c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BEF8u;
    if (runtime->hasFunction(0x13BEF8u)) {
        auto targetFn = runtime->lookupFunction(0x13BEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139270u; }
        if (ctx->pc != 0x139270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x13bef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139270u; }
        if (ctx->pc != 0x139270u) { return; }
    }
    ctx->pc = 0x139270u;
    // 0x139270: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x139270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_139274:
    // 0x139274: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x139274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139278: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x139278u;
    {
        const bool branch_taken_0x139278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139278u;
            // 0x13927c: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139278) {
            ctx->pc = 0x1392D4u;
            goto label_1392d4;
        }
    }
    ctx->pc = 0x139280u;
    // 0x139280: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x139280u;
    SET_GPR_U32(ctx, 31, 0x139288u);
    ctx->pc = 0x139284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139280u;
            // 0x139284: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139288u; }
        if (ctx->pc != 0x139288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139288u; }
        if (ctx->pc != 0x139288u) { return; }
    }
    ctx->pc = 0x139288u;
    // 0x139288: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x139288u;
    {
        const bool branch_taken_0x139288 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13928Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139288u;
            // 0x13928c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139288) {
            ctx->pc = 0x1392D8u;
            goto label_1392d8;
        }
    }
    ctx->pc = 0x139290u;
    // 0x139290: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x139290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139294: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x139294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139298: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x139298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13929c: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x13929Cu;
    SET_GPR_U32(ctx, 31, 0x1392A4u);
    ctx->pc = 0x1392A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13929Cu;
            // 0x1392a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392A4u; }
        if (ctx->pc != 0x1392A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392A4u; }
        if (ctx->pc != 0x1392A4u) { return; }
    }
    ctx->pc = 0x1392A4u;
    // 0x1392a4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1392a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1392a8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1392a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1392ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1392ACu;
    {
        const bool branch_taken_0x1392ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1392B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1392ACu;
            // 0x1392b0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392ac) {
            ctx->pc = 0x1392CCu;
            goto label_1392cc;
        }
    }
    ctx->pc = 0x1392B4u;
    // 0x1392b4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1392b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1392b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1392b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1392bc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1392bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1392c0: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x1392C0u;
    SET_GPR_U32(ctx, 31, 0x1392C8u);
    ctx->pc = 0x1392C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1392C0u;
            // 0x1392c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392C8u; }
        if (ctx->pc != 0x1392C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1392C8u; }
        if (ctx->pc != 0x1392C8u) { return; }
    }
    ctx->pc = 0x1392C8u;
    // 0x1392c8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1392c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1392cc:
    // 0x1392cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1392ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1392d0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1392d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1392d4:
    // 0x1392d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1392d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1392d8:
    // 0x1392d8: 0x5c80001a  bgtzl       $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1392D8u;
    {
        const bool branch_taken_0x1392d8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1392d8) {
            ctx->pc = 0x1392DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1392D8u;
            // 0x1392dc: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139344u;
            goto label_139344;
        }
    }
    ctx->pc = 0x1392E0u;
    // 0x1392e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1392e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1392e4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1392e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1392e8: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1392E8u;
    {
        const bool branch_taken_0x1392e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1392e8) {
            ctx->pc = 0x1392ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1392E8u;
            // 0x1392ec: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139344u;
            goto label_139344;
        }
    }
    ctx->pc = 0x1392F0u;
    // 0x1392f0: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1392F0u;
    {
        const bool branch_taken_0x1392f0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1392F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1392F0u;
            // 0x1392f4: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392f0) {
            ctx->pc = 0x139320u;
            goto label_139320;
        }
    }
    ctx->pc = 0x1392F8u;
    // 0x1392f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1392f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1392fc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1392fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x139300: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x139300u;
    SET_GPR_U32(ctx, 31, 0x139308u);
    ctx->pc = 0x139304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139300u;
            // 0x139304: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139308u; }
        if (ctx->pc != 0x139308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139308u; }
        if (ctx->pc != 0x139308u) { return; }
    }
    ctx->pc = 0x139308u;
    // 0x139308: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x139308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x13930c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139310: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x139310u;
    SET_GPR_U32(ctx, 31, 0x139318u);
    ctx->pc = 0x139314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139310u;
            // 0x139314: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139318u; }
        if (ctx->pc != 0x139318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139318u; }
        if (ctx->pc != 0x139318u) { return; }
    }
    ctx->pc = 0x139318u;
    // 0x139318: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139318u;
    {
        const bool branch_taken_0x139318 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x13931Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139318u;
            // 0x13931c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139318) {
            ctx->pc = 0x139330u;
            goto label_139330;
        }
    }
    ctx->pc = 0x139320u;
label_139320:
    // 0x139320: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x139320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x139324: 0x49827  nor         $s3, $zero, $a0
    ctx->pc = 0x139324u;
    SET_GPR_VEC(ctx, 19, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x139328: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x139328u;
    {
        const bool branch_taken_0x139328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13932Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139328u;
            // 0x13932c: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139328) {
            ctx->pc = 0x139698u;
            goto label_139698;
        }
    }
    ctx->pc = 0x139330u;
label_139330:
    // 0x139330: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x139330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_139334:
    // 0x139334: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x139334u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x139338: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x139338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13933c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x13933Cu;
    {
        const bool branch_taken_0x13933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13933Cu;
            // 0x139340: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13933c) {
            ctx->pc = 0x139698u;
            goto label_139698;
        }
    }
    ctx->pc = 0x139344u;
label_139344:
    // 0x139344: 0x10800095  beqz        $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x139344u;
    {
        const bool branch_taken_0x139344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139344u;
            // 0x139348: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139344) {
            ctx->pc = 0x13959Cu;
            goto label_13959c;
        }
    }
    ctx->pc = 0x13934Cu;
    // 0x13934c: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13934Cu;
    {
        const bool branch_taken_0x13934c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x139350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13934Cu;
            // 0x139350: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13934c) {
            ctx->pc = 0x139364u;
            goto label_139364;
        }
    }
    ctx->pc = 0x139354u;
    // 0x139354: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x139354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139358: 0xc04efbe  jal         func_13BEF8
    ctx->pc = 0x139358u;
    SET_GPR_U32(ctx, 31, 0x139360u);
    ctx->pc = 0x13935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139358u;
            // 0x13935c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BEF8u;
    if (runtime->hasFunction(0x13BEF8u)) {
        auto targetFn = runtime->lookupFunction(0x13BEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139360u; }
        if (ctx->pc != 0x139360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x13bef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139360u; }
        if (ctx->pc != 0x139360u) { return; }
    }
    ctx->pc = 0x139360u;
    // 0x139360: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x139360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_139364:
    // 0x139364: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x139364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139368: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x139368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13936c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13936Cu;
    {
        const bool branch_taken_0x13936c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13936Cu;
            // 0x139370: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13936c) {
            ctx->pc = 0x1393B8u;
            goto label_1393b8;
        }
    }
    ctx->pc = 0x139374u;
    // 0x139374: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x139374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x139378: 0xc04edc4  jal         func_13B710
    ctx->pc = 0x139378u;
    SET_GPR_U32(ctx, 31, 0x139380u);
    ctx->pc = 0x13937Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139378u;
            // 0x13937c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B710u;
    if (runtime->hasFunction(0x13B710u)) {
        auto targetFn = runtime->lookupFunction(0x13B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139380u; }
        if (ctx->pc != 0x139380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x13b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139380u; }
        if (ctx->pc != 0x139380u) { return; }
    }
    ctx->pc = 0x139380u;
    // 0x139380: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x139380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x139384: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x139384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139388: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x139388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x13938c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13938cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x139390: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x139390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x139394: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x139394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x139398: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x139398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x13939c: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x13939Cu;
    SET_GPR_U32(ctx, 31, 0x1393A4u);
    ctx->pc = 0x1393A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13939Cu;
            // 0x1393a0: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393A4u; }
        if (ctx->pc != 0x1393A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393A4u; }
        if (ctx->pc != 0x1393A4u) { return; }
    }
    ctx->pc = 0x1393A4u;
    // 0x1393a4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1393a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1393a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1393a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393ac: 0xc04efbe  jal         func_13BEF8
    ctx->pc = 0x1393ACu;
    SET_GPR_U32(ctx, 31, 0x1393B4u);
    ctx->pc = 0x1393B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1393ACu;
            // 0x1393b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BEF8u;
    if (runtime->hasFunction(0x13BEF8u)) {
        auto targetFn = runtime->lookupFunction(0x13BEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393B4u; }
        if (ctx->pc != 0x1393B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x13bef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393B4u; }
        if (ctx->pc != 0x1393B4u) { return; }
    }
    ctx->pc = 0x1393B4u;
    // 0x1393b4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1393b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1393b8:
    // 0x1393b8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1393b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1393bc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1393BCu;
    {
        const bool branch_taken_0x1393bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1393C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1393BCu;
            // 0x1393c0: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393bc) {
            ctx->pc = 0x139440u;
            goto label_139440;
        }
    }
    ctx->pc = 0x1393C4u;
    // 0x1393c4: 0x0  nop
    ctx->pc = 0x1393c4u;
    // NOP
label_1393c8:
    // 0x1393c8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1393c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1393cc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1393ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393d0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1393d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1393d4: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x1393D4u;
    SET_GPR_U32(ctx, 31, 0x1393DCu);
    ctx->pc = 0x1393D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1393D4u;
            // 0x1393d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393DCu; }
        if (ctx->pc != 0x1393DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393DCu; }
        if (ctx->pc != 0x1393DCu) { return; }
    }
    ctx->pc = 0x1393DCu;
    // 0x1393dc: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1393dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1393e0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1393e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1393e4: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1393E4u;
    {
        const bool branch_taken_0x1393e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1393E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1393E4u;
            // 0x1393e8: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393e4) {
            ctx->pc = 0x13940Cu;
            goto label_13940c;
        }
    }
    ctx->pc = 0x1393ECu;
    // 0x1393ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1393ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393f0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1393f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1393f4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1393f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1393f8: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x1393F8u;
    SET_GPR_U32(ctx, 31, 0x139400u);
    ctx->pc = 0x1393FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1393F8u;
            // 0x1393fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139400u; }
        if (ctx->pc != 0x139400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139400u; }
        if (ctx->pc != 0x139400u) { return; }
    }
    ctx->pc = 0x139400u;
    // 0x139400: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x139400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x139404: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x139404u;
    {
        const bool branch_taken_0x139404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139404u;
            // 0x139408: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139404) {
            ctx->pc = 0x13943Cu;
            goto label_13943c;
        }
    }
    ctx->pc = 0x13940Cu;
label_13940c:
    // 0x13940c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x13940cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x139410: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x139410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139414: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x139414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x139418: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x139418u;
    SET_GPR_U32(ctx, 31, 0x139420u);
    ctx->pc = 0x13941Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139418u;
            // 0x13941c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139420u; }
        if (ctx->pc != 0x139420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139420u; }
        if (ctx->pc != 0x139420u) { return; }
    }
    ctx->pc = 0x139420u;
    // 0x139420: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x139420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139424: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x139424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139428: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x139428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x13942c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x13942cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x139430: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x139430u;
    SET_GPR_U32(ctx, 31, 0x139438u);
    ctx->pc = 0x139434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139430u;
            // 0x139434: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139438u; }
        if (ctx->pc != 0x139438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139438u; }
        if (ctx->pc != 0x139438u) { return; }
    }
    ctx->pc = 0x139438u;
    // 0x139438: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x139438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_13943c:
    // 0x13943c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13943cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_139440:
    // 0x139440: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139444: 0xc04e0d4  jal         func_138350
    ctx->pc = 0x139444u;
    SET_GPR_U32(ctx, 31, 0x13944Cu);
    ctx->pc = 0x139448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139444u;
            // 0x139448: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138350u;
    if (runtime->hasFunction(0x138350u)) {
        auto targetFn = runtime->lookupFunction(0x138350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13944Cu; }
        if (ctx->pc != 0x13944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x138350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13944Cu; }
        if (ctx->pc != 0x13944Cu) { return; }
    }
    ctx->pc = 0x13944Cu;
    // 0x13944c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x13944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139450: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x139450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x139454: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x139454u;
    SET_GPR_U32(ctx, 31, 0x13945Cu);
    ctx->pc = 0x139458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139454u;
            // 0x139458: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13945Cu; }
        if (ctx->pc != 0x13945Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13945Cu; }
        if (ctx->pc != 0x13945Cu) { return; }
    }
    ctx->pc = 0x13945Cu;
    // 0x13945c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x13945cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x139460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139464: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x139464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139468: 0xc04f036  jal         func_13C0D8
    ctx->pc = 0x139468u;
    SET_GPR_U32(ctx, 31, 0x139470u);
    ctx->pc = 0x13946Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139468u;
            // 0x13946c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C0D8u;
    if (runtime->hasFunction(0x13C0D8u)) {
        auto targetFn = runtime->lookupFunction(0x13C0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139470u; }
        if (ctx->pc != 0x139470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mdiff_0x13c0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139470u; }
        if (ctx->pc != 0x139470u) { return; }
    }
    ctx->pc = 0x139470u;
    // 0x139470: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139474: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x139474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x139478: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139478u;
    {
        const bool branch_taken_0x139478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139478u;
            // 0x13947c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139478) {
            ctx->pc = 0x139490u;
            goto label_139490;
        }
    }
    ctx->pc = 0x139480u;
    // 0x139480: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139484: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x139484u;
    SET_GPR_U32(ctx, 31, 0x13948Cu);
    ctx->pc = 0x139488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139484u;
            // 0x139488: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13948Cu; }
        if (ctx->pc != 0x13948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13948Cu; }
        if (ctx->pc != 0x13948Cu) { return; }
    }
    ctx->pc = 0x13948Cu;
    // 0x13948c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13948cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139490:
    // 0x139490: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139494: 0xc04edee  jal         func_13B7B8
    ctx->pc = 0x139494u;
    SET_GPR_U32(ctx, 31, 0x13949Cu);
    ctx->pc = 0x139498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139494u;
            // 0x139498: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (runtime->hasFunction(0x13B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13949Cu; }
        if (ctx->pc != 0x13949Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x13b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13949Cu; }
        if (ctx->pc != 0x13949Cu) { return; }
    }
    ctx->pc = 0x13949Cu;
    // 0x13949c: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x13949Cu;
    {
        const bool branch_taken_0x13949c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1394A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13949Cu;
            // 0x1394a0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13949c) {
            ctx->pc = 0x1394D4u;
            goto label_1394d4;
        }
    }
    ctx->pc = 0x1394A4u;
    // 0x1394a4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1394A4u;
    {
        const bool branch_taken_0x1394a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1394a4) {
            ctx->pc = 0x1394D4u;
            goto label_1394d4;
        }
    }
    ctx->pc = 0x1394ACu;
    // 0x1394ac: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1394acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1394b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1394b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1394b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1394b4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1394b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1394B8u;
    {
        const bool branch_taken_0x1394b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1394BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1394B8u;
            // 0x1394bc: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1394b8) {
            ctx->pc = 0x1394D4u;
            goto label_1394d4;
        }
    }
    ctx->pc = 0x1394C0u;
    // 0x1394c0: 0x1262002a  beq         $s3, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1394C0u;
    {
        const bool branch_taken_0x1394c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1394C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1394C0u;
            // 0x1394c4: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1394c0) {
            ctx->pc = 0x13956Cu;
            goto label_13956c;
        }
    }
    ctx->pc = 0x1394C8u;
    // 0x1394c8: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x1394c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1394cc: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1394CCu;
    {
        const bool branch_taken_0x1394cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1394D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1394CCu;
            // 0x1394d0: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1394cc) {
            ctx->pc = 0x139694u;
            goto label_139694;
        }
    }
    ctx->pc = 0x1394D4u;
label_1394d4:
    // 0x1394d4: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1394D4u;
    {
        const bool branch_taken_0x1394d4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1394d4) {
            ctx->pc = 0x139500u;
            goto label_139500;
        }
    }
    ctx->pc = 0x1394DCu;
    // 0x1394dc: 0x1600001f  bnez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1394DCu;
    {
        const bool branch_taken_0x1394dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1394E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1394DCu;
            // 0x1394e0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1394dc) {
            ctx->pc = 0x13955Cu;
            goto label_13955c;
        }
    }
    ctx->pc = 0x1394E4u;
    // 0x1394e4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1394E4u;
    {
        const bool branch_taken_0x1394e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1394e4) {
            ctx->pc = 0x13955Cu;
            goto label_13955c;
        }
    }
    ctx->pc = 0x1394ECu;
    // 0x1394ec: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1394ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1394f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1394f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1394f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1394f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1394f8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1394F8u;
    {
        const bool branch_taken_0x1394f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1394f8) {
            ctx->pc = 0x13955Cu;
            goto label_13955c;
        }
    }
    ctx->pc = 0x139500u;
label_139500:
    // 0x139500: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x139500u;
    {
        const bool branch_taken_0x139500 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x139504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139500u;
            // 0x139504: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139500) {
            ctx->pc = 0x139554u;
            goto label_139554;
        }
    }
    ctx->pc = 0x139508u;
    // 0x139508: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x139508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13950c: 0xc04efbe  jal         func_13BEF8
    ctx->pc = 0x13950Cu;
    SET_GPR_U32(ctx, 31, 0x139514u);
    ctx->pc = 0x139510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13950Cu;
            // 0x139510: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BEF8u;
    if (runtime->hasFunction(0x13BEF8u)) {
        auto targetFn = runtime->lookupFunction(0x13BEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139514u; }
        if (ctx->pc != 0x139514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x13bef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139514u; }
        if (ctx->pc != 0x139514u) { return; }
    }
    ctx->pc = 0x139514u;
    // 0x139514: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x139514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x139518: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x139518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x13951c: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x13951Cu;
    SET_GPR_U32(ctx, 31, 0x139524u);
    ctx->pc = 0x139520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13951Cu;
            // 0x139520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139524u; }
        if (ctx->pc != 0x139524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139524u; }
        if (ctx->pc != 0x139524u) { return; }
    }
    ctx->pc = 0x139524u;
    // 0x139524: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x139524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139528: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x139528u;
    {
        const bool branch_taken_0x139528 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x139528) {
            ctx->pc = 0x13952Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139528u;
            // 0x13952c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139548u;
            goto label_139548;
        }
    }
    ctx->pc = 0x139530u;
    // 0x139530: 0x56200058  bnel        $s1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x139530u;
    {
        const bool branch_taken_0x139530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x139530) {
            ctx->pc = 0x139534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139530u;
            // 0x139534: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139694u;
            goto label_139694;
        }
    }
    ctx->pc = 0x139538u;
    // 0x139538: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x139538u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)1u)));
    // 0x13953c: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x13953Cu;
    {
        const bool branch_taken_0x13953c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13953c) {
            ctx->pc = 0x139540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13953Cu;
            // 0x139540: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139694u;
            goto label_139694;
        }
    }
    ctx->pc = 0x139544u;
    // 0x139544: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x139544u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_139548:
    // 0x139548: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x139548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x13954c: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13954Cu;
    {
        const bool branch_taken_0x13954c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x139550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13954Cu;
            // 0x139550: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13954c) {
            ctx->pc = 0x139570u;
            goto label_139570;
        }
    }
    ctx->pc = 0x139554u;
label_139554:
    // 0x139554: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x139554u;
    {
        const bool branch_taken_0x139554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139554u;
            // 0x139558: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139554) {
            ctx->pc = 0x139694u;
            goto label_139694;
        }
    }
    ctx->pc = 0x13955Cu;
label_13955c:
    // 0x13955c: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13955Cu;
    {
        const bool branch_taken_0x13955c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x139560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13955Cu;
            // 0x139560: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13955c) {
            ctx->pc = 0x139584u;
            goto label_139584;
        }
    }
    ctx->pc = 0x139564u;
    // 0x139564: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139564u;
    {
        const bool branch_taken_0x139564 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x139568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139564u;
            // 0x139568: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139564) {
            ctx->pc = 0x13957Cu;
            goto label_13957c;
        }
    }
    ctx->pc = 0x13956Cu;
label_13956c:
    // 0x13956c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x13956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_139570:
    // 0x139570: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x139570u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x139574: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x139574u;
    {
        const bool branch_taken_0x139574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139574u;
            // 0x139578: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139574) {
            ctx->pc = 0x139628u;
            goto label_139628;
        }
    }
    ctx->pc = 0x13957Cu;
label_13957c:
    // 0x13957c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x13957Cu;
    {
        const bool branch_taken_0x13957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13957Cu;
            // 0x139580: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13957c) {
            ctx->pc = 0x139694u;
            goto label_139694;
        }
    }
    ctx->pc = 0x139584u;
label_139584:
    // 0x139584: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x139584u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x139588: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x139588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13958c: 0x1684ff8e  bne         $s4, $a0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x13958Cu;
    {
        const bool branch_taken_0x13958c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x139590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13958Cu;
            // 0x139590: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13958c) {
            ctx->pc = 0x1393C8u;
            goto label_1393c8;
        }
    }
    ctx->pc = 0x139594u;
    // 0x139594: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x139594u;
    {
        const bool branch_taken_0x139594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139594u;
            // 0x139598: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139594) {
            ctx->pc = 0x1395ECu;
            goto label_1395ec;
        }
    }
    ctx->pc = 0x13959Cu;
label_13959c:
    // 0x13959c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13959Cu;
    {
        const bool branch_taken_0x13959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1395A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13959Cu;
            // 0x1395a0: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13959c) {
            ctx->pc = 0x1395C4u;
            goto label_1395c4;
        }
    }
    ctx->pc = 0x1395A4u;
    // 0x1395a4: 0x0  nop
    ctx->pc = 0x1395a4u;
    // NOP
label_1395a8:
    // 0x1395a8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1395a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1395ac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1395acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395b0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1395b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1395b4: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x1395B4u;
    SET_GPR_U32(ctx, 31, 0x1395BCu);
    ctx->pc = 0x1395B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1395B4u;
            // 0x1395b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395BCu; }
        if (ctx->pc != 0x1395BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395BCu; }
        if (ctx->pc != 0x1395BCu) { return; }
    }
    ctx->pc = 0x1395BCu;
    // 0x1395bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1395bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1395c0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1395c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1395c4:
    // 0x1395c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1395c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1395c8: 0xc04e0d4  jal         func_138350
    ctx->pc = 0x1395C8u;
    SET_GPR_U32(ctx, 31, 0x1395D0u);
    ctx->pc = 0x1395CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1395C8u;
            // 0x1395cc: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138350u;
    if (runtime->hasFunction(0x138350u)) {
        auto targetFn = runtime->lookupFunction(0x138350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395D0u; }
        if (ctx->pc != 0x1395D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x138350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395D0u; }
        if (ctx->pc != 0x1395D0u) { return; }
    }
    ctx->pc = 0x1395D0u;
    // 0x1395d0: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x1395d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1395d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1395d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1395d8: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x1395d8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1395dc: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1395dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1395e0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1395E0u;
    {
        const bool branch_taken_0x1395e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1395E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1395E0u;
            // 0x1395e4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1395e0) {
            ctx->pc = 0x1395A8u;
            goto label_1395a8;
        }
    }
    ctx->pc = 0x1395E8u;
    // 0x1395e8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1395e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1395ec:
    // 0x1395ec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1395ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395f0: 0xc04efbe  jal         func_13BEF8
    ctx->pc = 0x1395F0u;
    SET_GPR_U32(ctx, 31, 0x1395F8u);
    ctx->pc = 0x1395F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1395F0u;
            // 0x1395f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BEF8u;
    if (runtime->hasFunction(0x13BEF8u)) {
        auto targetFn = runtime->lookupFunction(0x13BEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395F8u; }
        if (ctx->pc != 0x1395F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x13bef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395F8u; }
        if (ctx->pc != 0x1395F8u) { return; }
    }
    ctx->pc = 0x1395F8u;
    // 0x1395f8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1395f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1395fc: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1395fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x139600: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x139600u;
    SET_GPR_U32(ctx, 31, 0x139608u);
    ctx->pc = 0x139604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139600u;
            // 0x139604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139608u; }
        if (ctx->pc != 0x139608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139608u; }
        if (ctx->pc != 0x139608u) { return; }
    }
    ctx->pc = 0x139608u;
    // 0x139608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13960c: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13960Cu;
    {
        const bool branch_taken_0x13960c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x13960c) {
            ctx->pc = 0x139610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13960Cu;
            // 0x139610: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13962Cu;
            goto label_13962c;
        }
    }
    ctx->pc = 0x139614u;
    // 0x139614: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x139614u;
    {
        const bool branch_taken_0x139614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x139618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139614u;
            // 0x139618: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139614) {
            ctx->pc = 0x139678u;
            goto label_139678;
        }
    }
    ctx->pc = 0x13961Cu;
    // 0x13961c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x13961cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)1u)));
    // 0x139620: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x139620u;
    {
        const bool branch_taken_0x139620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139620) {
            ctx->pc = 0x139624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139620u;
            // 0x139624: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13967Cu;
            goto label_13967c;
        }
    }
    ctx->pc = 0x139628u;
label_139628:
    // 0x139628: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x139628u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_13962c:
    // 0x13962c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13962Cu;
    {
        const bool branch_taken_0x13962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13962Cu;
            // 0x139630: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13962c) {
            ctx->pc = 0x139644u;
            goto label_139644;
        }
    }
    ctx->pc = 0x139634u;
    // 0x139634: 0x0  nop
    ctx->pc = 0x139634u;
    // NOP
label_139638:
    // 0x139638: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13963c: 0x12a40007  beq         $s5, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13963Cu;
    {
        const bool branch_taken_0x13963c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x139640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13963Cu;
            // 0x139640: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13963c) {
            ctx->pc = 0x13965Cu;
            goto label_13965c;
        }
    }
    ctx->pc = 0x139644u;
label_139644:
    // 0x139644: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x139644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x139648: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x139648u;
    {
        const bool branch_taken_0x139648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13964Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139648u;
            // 0x13964c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139648) {
            ctx->pc = 0x139638u;
            goto label_139638;
        }
    }
    ctx->pc = 0x139650u;
    // 0x139650: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x139650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139654: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x139654u;
    {
        const bool branch_taken_0x139654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139654u;
            // 0x139658: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139654) {
            ctx->pc = 0x139694u;
            goto label_139694;
        }
    }
    ctx->pc = 0x13965Cu;
label_13965c:
    // 0x13965c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139660: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x139660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x139664: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x139664u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x139668: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x139668u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13966c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13966Cu;
    {
        const bool branch_taken_0x13966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13966Cu;
            // 0x139670: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13966c) {
            ctx->pc = 0x139698u;
            goto label_139698;
        }
    }
    ctx->pc = 0x139674u;
    // 0x139674: 0x0  nop
    ctx->pc = 0x139674u;
    // NOP
label_139678:
    // 0x139678: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x139678u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_13967c:
    // 0x13967c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x13967cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x139680: 0x0  nop
    ctx->pc = 0x139680u;
    // NOP
    // 0x139684: 0x0  nop
    ctx->pc = 0x139684u;
    // NOP
    // 0x139688: 0x0  nop
    ctx->pc = 0x139688u;
    // NOP
    // 0x13968c: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13968Cu;
    {
        const bool branch_taken_0x13968c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13968c) {
            ctx->pc = 0x139678u;
            goto label_139678;
        }
    }
    ctx->pc = 0x139694u;
label_139694:
    // 0x139694: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x139694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_139698:
    // 0x139698: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x139698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x13969c: 0xc04edee  jal         func_13B7B8
    ctx->pc = 0x13969Cu;
    SET_GPR_U32(ctx, 31, 0x1396A4u);
    ctx->pc = 0x1396A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13969Cu;
            // 0x1396a0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (runtime->hasFunction(0x13B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396A4u; }
        if (ctx->pc != 0x1396A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x13b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396A4u; }
        if (ctx->pc != 0x1396A4u) { return; }
    }
    ctx->pc = 0x1396A4u;
    // 0x1396a4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1396a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1396a8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1396A8u;
    {
        const bool branch_taken_0x1396a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1396A8u;
            // 0x1396ac: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396a8) {
            ctx->pc = 0x1396DCu;
            goto label_1396dc;
        }
    }
    ctx->pc = 0x1396B0u;
    // 0x1396b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1396B0u;
    {
        const bool branch_taken_0x1396b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1396B0u;
            // 0x1396b4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396b0) {
            ctx->pc = 0x1396CCu;
            goto label_1396cc;
        }
    }
    ctx->pc = 0x1396B8u;
    // 0x1396b8: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1396B8u;
    {
        const bool branch_taken_0x1396b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1396BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1396B8u;
            // 0x1396bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396b8) {
            ctx->pc = 0x1396C8u;
            goto label_1396c8;
        }
    }
    ctx->pc = 0x1396C0u;
    // 0x1396c0: 0xc04edee  jal         func_13B7B8
    ctx->pc = 0x1396C0u;
    SET_GPR_U32(ctx, 31, 0x1396C8u);
    ctx->pc = 0x1396C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1396C0u;
            // 0x1396c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (runtime->hasFunction(0x13B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396C8u; }
        if (ctx->pc != 0x1396C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x13b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396C8u; }
        if (ctx->pc != 0x1396C8u) { return; }
    }
    ctx->pc = 0x1396C8u;
label_1396c8:
    // 0x1396c8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1396c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1396cc:
    // 0x1396cc: 0xc04edee  jal         func_13B7B8
    ctx->pc = 0x1396CCu;
    SET_GPR_U32(ctx, 31, 0x1396D4u);
    ctx->pc = 0x1396D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1396CCu;
            // 0x1396d0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (runtime->hasFunction(0x13B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396D4u; }
        if (ctx->pc != 0x1396D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x13b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396D4u; }
        if (ctx->pc != 0x1396D4u) { return; }
    }
    ctx->pc = 0x1396D4u;
    // 0x1396d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1396D4u;
    {
        const bool branch_taken_0x1396d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1396D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1396D4u;
            // 0x1396d8: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396d4) {
            ctx->pc = 0x1396E0u;
            goto label_1396e0;
        }
    }
    ctx->pc = 0x1396DCu;
label_1396dc:
    // 0x1396dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1396dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1396e0:
    // 0x1396e0: 0xc04edee  jal         func_13B7B8
    ctx->pc = 0x1396E0u;
    SET_GPR_U32(ctx, 31, 0x1396E8u);
    ctx->pc = 0x1396E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1396E0u;
            // 0x1396e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (runtime->hasFunction(0x13B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396E8u; }
        if (ctx->pc != 0x1396E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x13b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396E8u; }
        if (ctx->pc != 0x1396E8u) { return; }
    }
    ctx->pc = 0x1396E8u;
    // 0x1396e8: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x1396e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1396ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1396ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1396f0: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x1396f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x1396f4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1396f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1396f8: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1396F8u;
    {
        const bool branch_taken_0x1396f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1396f8) {
            ctx->pc = 0x1396FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1396F8u;
            // 0x1396fc: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139700u;
            goto label_139700;
        }
    }
    ctx->pc = 0x139700u;
label_139700:
    // 0x139700: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x139700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_139704:
    // 0x139704: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x139704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x139708: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x139708u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13970c: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x13970cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x139710: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x139710u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139714: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x139714u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139718: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x139718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13971c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x13971cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x139720: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x139720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139724: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x139724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x139728: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x139728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13972c: 0x3e00008  jr          $ra
    ctx->pc = 0x13972Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13972Cu;
            // 0x139730: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1385DCu: goto label_1385dc;
            case 0x13861Cu: goto label_13861c;
            case 0x13865Cu: goto label_13865c;
            case 0x138664u: goto label_138664;
            case 0x138688u: goto label_138688;
            case 0x1386C0u: goto label_1386c0;
            case 0x1386C8u: goto label_1386c8;
            case 0x138738u: goto label_138738;
            case 0x138774u: goto label_138774;
            case 0x138780u: goto label_138780;
            case 0x1387A4u: goto label_1387a4;
            case 0x1387D0u: goto label_1387d0;
            case 0x13886Cu: goto label_13886c;
            case 0x1388A8u: goto label_1388a8;
            case 0x1388C4u: goto label_1388c4;
            case 0x1388CCu: goto label_1388cc;
            case 0x1388E8u: goto label_1388e8;
            case 0x138900u: goto label_138900;
            case 0x138928u: goto label_138928;
            case 0x138958u: goto label_138958;
            case 0x138974u: goto label_138974;
            case 0x138978u: goto label_138978;
            case 0x138998u: goto label_138998;
            case 0x13899Cu: goto label_13899c;
            case 0x1389BCu: goto label_1389bc;
            case 0x1389D8u: goto label_1389d8;
            case 0x138A00u: goto label_138a00;
            case 0x138A0Cu: goto label_138a0c;
            case 0x138A80u: goto label_138a80;
            case 0x138A90u: goto label_138a90;
            case 0x138AACu: goto label_138aac;
            case 0x138AB8u: goto label_138ab8;
            case 0x138ACCu: goto label_138acc;
            case 0x138B08u: goto label_138b08;
            case 0x138B24u: goto label_138b24;
            case 0x138B30u: goto label_138b30;
            case 0x138B88u: goto label_138b88;
            case 0x138C34u: goto label_138c34;
            case 0x138C78u: goto label_138c78;
            case 0x138CA0u: goto label_138ca0;
            case 0x138D20u: goto label_138d20;
            case 0x138D50u: goto label_138d50;
            case 0x138D68u: goto label_138d68;
            case 0x138DF0u: goto label_138df0;
            case 0x138E14u: goto label_138e14;
            case 0x138E18u: goto label_138e18;
            case 0x138E1Cu: goto label_138e1c;
            case 0x138E28u: goto label_138e28;
            case 0x138E98u: goto label_138e98;
            case 0x138EA0u: goto label_138ea0;
            case 0x138EA8u: goto label_138ea8;
            case 0x138ED0u: goto label_138ed0;
            case 0x138F64u: goto label_138f64;
            case 0x138F68u: goto label_138f68;
            case 0x138F6Cu: goto label_138f6c;
            case 0x138F70u: goto label_138f70;
            case 0x138F74u: goto label_138f74;
            case 0x138F98u: goto label_138f98;
            case 0x138FA8u: goto label_138fa8;
            case 0x138FE8u: goto label_138fe8;
            case 0x139008u: goto label_139008;
            case 0x139024u: goto label_139024;
            case 0x13903Cu: goto label_13903c;
            case 0x139040u: goto label_139040;
            case 0x139068u: goto label_139068;
            case 0x139070u: goto label_139070;
            case 0x1390A0u: goto label_1390a0;
            case 0x1390ECu: goto label_1390ec;
            case 0x139110u: goto label_139110;
            case 0x139120u: goto label_139120;
            case 0x13914Cu: goto label_13914c;
            case 0x13919Cu: goto label_13919c;
            case 0x1391A0u: goto label_1391a0;
            case 0x1391A4u: goto label_1391a4;
            case 0x1391D0u: goto label_1391d0;
            case 0x1391D8u: goto label_1391d8;
            case 0x1391E8u: goto label_1391e8;
            case 0x139218u: goto label_139218;
            case 0x13923Cu: goto label_13923c;
            case 0x139258u: goto label_139258;
            case 0x139274u: goto label_139274;
            case 0x1392CCu: goto label_1392cc;
            case 0x1392D4u: goto label_1392d4;
            case 0x1392D8u: goto label_1392d8;
            case 0x139320u: goto label_139320;
            case 0x139330u: goto label_139330;
            case 0x139334u: goto label_139334;
            case 0x139344u: goto label_139344;
            case 0x139364u: goto label_139364;
            case 0x1393B8u: goto label_1393b8;
            case 0x1393C8u: goto label_1393c8;
            case 0x13940Cu: goto label_13940c;
            case 0x13943Cu: goto label_13943c;
            case 0x139440u: goto label_139440;
            case 0x139490u: goto label_139490;
            case 0x1394D4u: goto label_1394d4;
            case 0x139500u: goto label_139500;
            case 0x139548u: goto label_139548;
            case 0x139554u: goto label_139554;
            case 0x13955Cu: goto label_13955c;
            case 0x13956Cu: goto label_13956c;
            case 0x139570u: goto label_139570;
            case 0x13957Cu: goto label_13957c;
            case 0x139584u: goto label_139584;
            case 0x13959Cu: goto label_13959c;
            case 0x1395A8u: goto label_1395a8;
            case 0x1395C4u: goto label_1395c4;
            case 0x1395ECu: goto label_1395ec;
            case 0x139628u: goto label_139628;
            case 0x13962Cu: goto label_13962c;
            case 0x139638u: goto label_139638;
            case 0x139644u: goto label_139644;
            case 0x13965Cu: goto label_13965c;
            case 0x139678u: goto label_139678;
            case 0x13967Cu: goto label_13967c;
            case 0x139694u: goto label_139694;
            case 0x139698u: goto label_139698;
            case 0x1396C8u: goto label_1396c8;
            case 0x1396CCu: goto label_1396cc;
            case 0x1396DCu: goto label_1396dc;
            case 0x1396E0u: goto label_1396e0;
            case 0x139700u: goto label_139700;
            case 0x139704u: goto label_139704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139734u;
}
