#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _decMB0
// Address: 0x127580 - 0x127a28
void _decMB0_0x127580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_decMB0_0x127580");
#endif

    ctx->pc = 0x127580u;

    // 0x127580: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x127580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x127584: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x127584u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x127588: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x127588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x12758c: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x12758cu;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)8208u)));
    // 0x127590: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x127590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x127594: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x127594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x127598: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x127598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x12759c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12759cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1275a0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1275a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1275a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1275a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1275a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1275ac: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1275acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275b0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1275b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1275b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1275b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275b8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x1275b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x1275bc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1275bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275c0: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x1275c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x1275c4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1275c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275c8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1275c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1275cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1275ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1275d0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1275d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x1275d4: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x1275d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1275d8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1275d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1275dc: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1275dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1275e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1275e0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1275e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1275e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1275e8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1275e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1275ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1275ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1275f0: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x1275f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x1275f4: 0xc049fca  jal         func_127F28
    ctx->pc = 0x1275F4u;
    SET_GPR_U32(ctx, 31, 0x1275FCu);
    ctx->pc = 0x1275F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1275F4u;
            // 0x1275f8: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127F28u;
    if (runtime->hasFunction(0x127F28u)) {
        auto targetFn = runtime->lookupFunction(0x127F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1275FCu; }
        if (ctx->pc != 0x1275FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x127f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1275FCu; }
        if (ctx->pc != 0x1275FCu) { return; }
    }
    ctx->pc = 0x1275FCu;
    // 0x1275fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1275fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127600: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x127600u;
    {
        const bool branch_taken_0x127600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127600u;
            // 0x127604: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127600) {
            ctx->pc = 0x127628u;
            goto label_127628;
        }
    }
    ctx->pc = 0x127608u;
    // 0x127608: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x127608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12760c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127610: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x127610u;
    SET_GPR_U32(ctx, 31, 0x127618u);
    ctx->pc = 0x127614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127610u;
            // 0x127614: 0x24a5f2b8  addiu       $a1, $a1, -0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127618u; }
        if (ctx->pc != 0x127618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127618u; }
        if (ctx->pc != 0x127618u) { return; }
    }
    ctx->pc = 0x127618u;
    // 0x127618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12761c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12761cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127620: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x127620u;
    {
        const bool branch_taken_0x127620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127620u;
            // 0x127624: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127620) {
            ctx->pc = 0x1279F8u;
            goto label_1279f8;
        }
    }
    ctx->pc = 0x127628u;
label_127628:
    // 0x127628: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x127628u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)12u)));
    // 0x12762c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12762Cu;
    {
        const bool branch_taken_0x12762c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12762Cu;
            // 0x127630: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12762c) {
            ctx->pc = 0x127664u;
            goto label_127664;
        }
    }
    ctx->pc = 0x127634u;
    // 0x127634: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x127634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x127638: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127638u;
    {
        const bool branch_taken_0x127638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127638u;
            // 0x12763c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127638) {
            ctx->pc = 0x127654u;
            goto label_127654;
        }
    }
    ctx->pc = 0x127640u;
    // 0x127640: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x127640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x127644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127644u;
    {
        const bool branch_taken_0x127644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127644u;
            // 0x127648: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127644) {
            ctx->pc = 0x127654u;
            goto label_127654;
        }
    }
    ctx->pc = 0x12764Cu;
    // 0x12764c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12764Cu;
    {
        const bool branch_taken_0x12764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12764Cu;
            // 0x127650: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12764c) {
            ctx->pc = 0x127690u;
            goto label_127690;
        }
    }
    ctx->pc = 0x127654u;
label_127654:
    // 0x127654: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x127654u;
    SET_GPR_U32(ctx, 31, 0x12765Cu);
    ctx->pc = 0x127658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127654u;
            // 0x127658: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12765Cu; }
        if (ctx->pc != 0x12765Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12765Cu; }
        if (ctx->pc != 0x12765Cu) { return; }
    }
    ctx->pc = 0x12765Cu;
    // 0x12765c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12765Cu;
    {
        const bool branch_taken_0x12765c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12765Cu;
            // 0x127660: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12765c) {
            ctx->pc = 0x127690u;
            goto label_127690;
        }
    }
    ctx->pc = 0x127664u;
label_127664:
    // 0x127664: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x127664u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x127668: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x127668u;
    {
        const bool branch_taken_0x127668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127668) {
            ctx->pc = 0x12766Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127668u;
            // 0x12766c: 0x8e060174  lw          $a2, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127694u;
            goto label_127694;
        }
    }
    ctx->pc = 0x127670u;
    // 0x127670: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x127670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x127674: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127674u;
    {
        const bool branch_taken_0x127674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127674u;
            // 0x127678: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127674) {
            ctx->pc = 0x127690u;
            goto label_127690;
        }
    }
    ctx->pc = 0x12767Cu;
    // 0x12767c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x12767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x127680: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x127680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x127684: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x127684u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x127688: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x127688u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x12768c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x12768cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_127690:
    // 0x127690: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x127690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_127694:
    // 0x127694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x127694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127698: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127698u;
    {
        const bool branch_taken_0x127698 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x12769Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127698u;
            // 0x12769c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127698) {
            ctx->pc = 0x1276BCu;
            goto label_1276bc;
        }
    }
    ctx->pc = 0x1276A0u;
    // 0x1276a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1276a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1276a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1276a8: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x1276a8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x1276ac: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x1276acu;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)2u)));
    // 0x1276b0: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x1276b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x1276b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1276B4u;
    {
        const bool branch_taken_0x1276b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276B4u;
            // 0x1276b8: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276b4) {
            ctx->pc = 0x1276D0u;
            goto label_1276d0;
        }
    }
    ctx->pc = 0x1276BCu;
label_1276bc:
    // 0x1276bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1276bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1276c0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1276c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1276c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1276c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276c8: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x1276c8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)2u)));
    // 0x1276cc: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x1276ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_1276d0:
    // 0x1276d0: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x1276d0u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)3u)));
    // 0x1276d4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1276d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276d8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1276D8u;
    {
        const bool branch_taken_0x1276d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1276DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276D8u;
            // 0x1276dc: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276d8) {
            ctx->pc = 0x1276E8u;
            goto label_1276e8;
        }
    }
    ctx->pc = 0x1276E0u;
    // 0x1276e0: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x1276e0u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)3u)));
    // 0x1276e4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1276e4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1276e8:
    // 0x1276e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1276e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1276ec: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1276ECu;
    {
        const bool branch_taken_0x1276ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1276F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276ECu;
            // 0x1276f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276ec) {
            ctx->pc = 0x127724u;
            goto label_127724;
        }
    }
    ctx->pc = 0x1276F4u;
    // 0x1276f4: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x1276f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x1276f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1276F8u;
    {
        const bool branch_taken_0x1276f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1276FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1276F8u;
            // 0x1276fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276f8) {
            ctx->pc = 0x127724u;
            goto label_127724;
        }
    }
    ctx->pc = 0x127700u;
    // 0x127700: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x127700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x127704: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x127704u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x127708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127708u;
    {
        const bool branch_taken_0x127708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12770Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127708u;
            // 0x12770c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127708) {
            ctx->pc = 0x127720u;
            goto label_127720;
        }
    }
    ctx->pc = 0x127710u;
    // 0x127710: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x127710u;
    SET_GPR_U32(ctx, 31, 0x127718u);
    ctx->pc = 0x127714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127710u;
            // 0x127714: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127718u; }
        if (ctx->pc != 0x127718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127718u; }
        if (ctx->pc != 0x127718u) { return; }
    }
    ctx->pc = 0x127718u;
    // 0x127718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x127718u;
    {
        const bool branch_taken_0x127718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127718u;
            // 0x12771c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127718) {
            ctx->pc = 0x127728u;
            goto label_127728;
        }
    }
    ctx->pc = 0x127720u;
label_127720:
    // 0x127720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127724:
    // 0x127724: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_127728:
    // 0x127728: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x127728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12772c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x127730: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x127730u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16u)));
    // 0x127734: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127734u;
    {
        const bool branch_taken_0x127734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127734u;
            // 0x127738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127734) {
            ctx->pc = 0x12774Cu;
            goto label_12774c;
        }
    }
    ctx->pc = 0x12773Cu;
    // 0x12773c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12773Cu;
    SET_GPR_U32(ctx, 31, 0x127744u);
    ctx->pc = 0x127740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12773Cu;
            // 0x127740: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127744u; }
        if (ctx->pc != 0x127744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127744u; }
        if (ctx->pc != 0x127744u) { return; }
    }
    ctx->pc = 0x127744u;
    // 0x127744: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x127744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x127748: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x127748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12774c:
    // 0x12774c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x12774cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8u)));
    // 0x127750: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127750u;
    {
        const bool branch_taken_0x127750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127750) {
            ctx->pc = 0x127754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127750u;
            // 0x127754: 0x8e020848  lw          $v0, 0x848($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127774u;
            goto label_127774;
        }
    }
    ctx->pc = 0x127758u;
    // 0x127758: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x127758u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x12775c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x12775Cu;
    {
        const bool branch_taken_0x12775c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12775c) {
            ctx->pc = 0x127760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12775Cu;
            // 0x127760: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1277E4u;
            goto label_1277e4;
        }
    }
    ctx->pc = 0x127764u;
    // 0x127764: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x127764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x127768: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x127768u;
    {
        const bool branch_taken_0x127768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127768) {
            ctx->pc = 0x12776Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127768u;
            // 0x12776c: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1277E4u;
            goto label_1277e4;
        }
    }
    ctx->pc = 0x127770u;
    // 0x127770: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x127770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_127774:
    // 0x127774: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x127774u;
    {
        const bool branch_taken_0x127774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127774u;
            // 0x127778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127774) {
            ctx->pc = 0x1277BCu;
            goto label_1277bc;
        }
    }
    ctx->pc = 0x12777Cu;
    // 0x12777c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x12777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x127780: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x127780u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x127784: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x127784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127788: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x127788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12778c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x12778cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x127790: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x127790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x127794: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x127794u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x127798: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x127798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12779c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x12779cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277a0: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x1277a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x1277a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1277a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277a8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1277a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277ac: 0xc049eac  jal         func_127AB0
    ctx->pc = 0x1277ACu;
    SET_GPR_U32(ctx, 31, 0x1277B4u);
    ctx->pc = 0x1277B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1277ACu;
            // 0x1277b0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AB0u;
    if (runtime->hasFunction(0x127AB0u)) {
        auto targetFn = runtime->lookupFunction(0x127AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1277B4u; }
        if (ctx->pc != 0x1277B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVectors_0x127ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1277B4u; }
        if (ctx->pc != 0x1277B4u) { return; }
    }
    ctx->pc = 0x1277B4u;
    // 0x1277b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1277B4u;
    {
        const bool branch_taken_0x1277b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1277B4u;
            // 0x1277b8: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277b4) {
            ctx->pc = 0x1277E4u;
            goto label_1277e4;
        }
    }
    ctx->pc = 0x1277BCu;
label_1277bc:
    // 0x1277bc: 0x8e070158  lw          $a3, 0x158($s0)
    ctx->pc = 0x1277bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1277c0: 0x8e0b0154  lw          $t3, 0x154($s0)
    ctx->pc = 0x1277c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1277c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1277c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277c8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1277c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1277cc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1277ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1277d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277d4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1277d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1277d8: 0xc049f14  jal         func_127C50
    ctx->pc = 0x1277D8u;
    SET_GPR_U32(ctx, 31, 0x1277E0u);
    ctx->pc = 0x1277DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1277D8u;
            // 0x1277dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C50u;
    if (runtime->hasFunction(0x127C50u)) {
        auto targetFn = runtime->lookupFunction(0x127C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1277E0u; }
        if (ctx->pc != 0x1277E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x127c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1277E0u; }
        if (ctx->pc != 0x1277E0u) { return; }
    }
    ctx->pc = 0x1277E0u;
    // 0x1277e0: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1277e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1277e4:
    // 0x1277e4: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x1277E4u;
    {
        const bool branch_taken_0x1277e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1277E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1277E4u;
            // 0x1277e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277e4) {
            ctx->pc = 0x1279F8u;
            goto label_1279f8;
        }
    }
    ctx->pc = 0x1277ECu;
    // 0x1277ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1277ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1277f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1277f0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4u)));
    // 0x1277f4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1277F4u;
    {
        const bool branch_taken_0x1277f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1277f4) {
            ctx->pc = 0x127870u;
            goto label_127870;
        }
    }
    ctx->pc = 0x1277FCu;
    // 0x1277fc: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x1277fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x127800: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x127800u;
    {
        const bool branch_taken_0x127800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127800u;
            // 0x127804: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127800) {
            ctx->pc = 0x127848u;
            goto label_127848;
        }
    }
    ctx->pc = 0x127808u;
    // 0x127808: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x127808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x12780c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x12780cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x127810: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x127810u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127814: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x127814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x127818: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x127818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12781c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x12781cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x127820: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x127820u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127824: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x127824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x127828: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x127828u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x12782c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12782cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x127830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127834: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x127834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127838: 0xc049eac  jal         func_127AB0
    ctx->pc = 0x127838u;
    SET_GPR_U32(ctx, 31, 0x127840u);
    ctx->pc = 0x12783Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127838u;
            // 0x12783c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AB0u;
    if (runtime->hasFunction(0x127AB0u)) {
        auto targetFn = runtime->lookupFunction(0x127AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127840u; }
        if (ctx->pc != 0x127840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVectors_0x127ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127840u; }
        if (ctx->pc != 0x127840u) { return; }
    }
    ctx->pc = 0x127840u;
    // 0x127840: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x127840u;
    {
        const bool branch_taken_0x127840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127840u;
            // 0x127844: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127840) {
            ctx->pc = 0x127870u;
            goto label_127870;
        }
    }
    ctx->pc = 0x127848u;
label_127848:
    // 0x127848: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x127848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x12784c: 0x8e0b015c  lw          $t3, 0x15C($s0)
    ctx->pc = 0x12784cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x127850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127854: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x127854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x127858: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x127858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12785c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12785cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127860: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x127860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127864: 0xc049f14  jal         func_127C50
    ctx->pc = 0x127864u;
    SET_GPR_U32(ctx, 31, 0x12786Cu);
    ctx->pc = 0x127868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127864u;
            // 0x127868: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C50u;
    if (runtime->hasFunction(0x127C50u)) {
        auto targetFn = runtime->lookupFunction(0x127C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12786Cu; }
        if (ctx->pc != 0x12786Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x127c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12786Cu; }
        if (ctx->pc != 0x12786Cu) { return; }
    }
    ctx->pc = 0x12786Cu;
    // 0x12786c: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x12786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_127870:
    // 0x127870: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x127870u;
    {
        const bool branch_taken_0x127870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127870u;
            // 0x127874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127870) {
            ctx->pc = 0x1279F8u;
            goto label_1279f8;
        }
    }
    ctx->pc = 0x127878u;
    // 0x127878: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x127878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12787c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12787cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x127880: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127880u;
    {
        const bool branch_taken_0x127880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127880u;
            // 0x127884: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127880) {
            ctx->pc = 0x1278A4u;
            goto label_1278a4;
        }
    }
    ctx->pc = 0x127888u;
    // 0x127888: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x127888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x12788c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12788Cu;
    {
        const bool branch_taken_0x12788c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12788Cu;
            // 0x127890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12788c) {
            ctx->pc = 0x1278A0u;
            goto label_1278a0;
        }
    }
    ctx->pc = 0x127894u;
    // 0x127894: 0xc04a06a  jal         func_1281A8
    ctx->pc = 0x127894u;
    SET_GPR_U32(ctx, 31, 0x12789Cu);
    ctx->pc = 0x127898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127894u;
            // 0x127898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1281A8u;
    if (runtime->hasFunction(0x1281A8u)) {
        auto targetFn = runtime->lookupFunction(0x1281A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12789Cu; }
        if (ctx->pc != 0x12789Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x1281a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12789Cu; }
        if (ctx->pc != 0x12789Cu) { return; }
    }
    ctx->pc = 0x12789Cu;
    // 0x12789c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1278a0:
    // 0x1278a0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1278a0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
label_1278a4:
    // 0x1278a4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1278A4u;
    {
        const bool branch_taken_0x1278a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1278A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1278A4u;
            // 0x1278a8: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278a4) {
            ctx->pc = 0x127918u;
            goto label_127918;
        }
    }
    ctx->pc = 0x1278ACu;
    // 0x1278ac: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1278acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1278b0: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x1278b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1278b4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1278b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1278b8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1278b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1278bc: 0xc04a6aa  jal         func_129AA8
    ctx->pc = 0x1278BCu;
    SET_GPR_U32(ctx, 31, 0x1278C4u);
    ctx->pc = 0x1278C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1278BCu;
            // 0x1278c0: 0x8c440594  lw          $a0, 0x594($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129AA8u;
    if (runtime->hasFunction(0x129AA8u)) {
        auto targetFn = runtime->lookupFunction(0x129AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278C4u; }
        if (ctx->pc != 0x1278C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        receiveDataFromIPU_0x129aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278C4u; }
        if (ctx->pc != 0x1278C4u) { return; }
    }
    ctx->pc = 0x1278C4u;
    // 0x1278c4: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x1278C4u;
    SET_GPR_U32(ctx, 31, 0x1278CCu);
    ctx->pc = 0x1278C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1278C4u;
            // 0x1278c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278CCu; }
        if (ctx->pc != 0x1278CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1278CCu; }
        if (ctx->pc != 0x1278CCu) { return; }
    }
    ctx->pc = 0x1278CCu;
    // 0x1278cc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1278ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1278d0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1278d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x1278d4: 0x8e0601b4  lw          $a2, 0x1B4($s0)
    ctx->pc = 0x1278d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1278d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1278d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278dc: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x1278dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1278e0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1278e0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x1278e4: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x1278e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1278e8: 0x52ec0  sll         $a1, $a1, 27
    ctx->pc = 0x1278e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 27));
    // 0x1278ec: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1278ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1278f0: 0x31e80  sll         $v1, $v1, 26
    ctx->pc = 0x1278f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
    // 0x1278f4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1278f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1278f8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1278f8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1278fc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1278fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x127900: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x127900u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x127904: 0x21640  sll         $v0, $v0, 25
    ctx->pc = 0x127904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
    // 0x127908: 0xc049f68  jal         func_127DA0
    ctx->pc = 0x127908u;
    SET_GPR_U32(ctx, 31, 0x127910u);
    ctx->pc = 0x12790Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127908u;
            // 0x12790c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DA0u;
    if (runtime->hasFunction(0x127DA0u)) {
        auto targetFn = runtime->lookupFunction(0x127DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127910u; }
        if (ctx->pc != 0x127910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x127da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127910u; }
        if (ctx->pc != 0x127910u) { return; }
    }
    ctx->pc = 0x127910u;
    // 0x127910: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x127910u;
    {
        const bool branch_taken_0x127910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127910u;
            // 0x127914: 0x8e02011c  lw          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127910) {
            ctx->pc = 0x127930u;
            goto label_127930;
        }
    }
    ctx->pc = 0x127918u;
label_127918:
    // 0x127918: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x127918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x12791c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127920: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x127920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x127924: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x127924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x127928: 0xac4406cc  sw          $a0, 0x6CC($v0)
    ctx->pc = 0x127928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 4));
    // 0x12792c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x12792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_127930:
    // 0x127930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127930u;
    {
        const bool branch_taken_0x127930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127930u;
            // 0x127934: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127930) {
            ctx->pc = 0x127940u;
            goto label_127940;
        }
    }
    ctx->pc = 0x127938u;
    // 0x127938: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x127938u;
    {
        const bool branch_taken_0x127938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127938u;
            // 0x12793c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127938) {
            ctx->pc = 0x1279F8u;
            goto label_1279f8;
        }
    }
    ctx->pc = 0x127940u;
label_127940:
    // 0x127940: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x127940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x127944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x127944u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x127948: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127948u;
    {
        const bool branch_taken_0x127948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127948) {
            ctx->pc = 0x12794Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127948u;
            // 0x12794c: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12796Cu;
            goto label_12796c;
        }
    }
    ctx->pc = 0x127950u;
    // 0x127950: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127954: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x127954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
    // 0x127958: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x127958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12795c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12795cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x127960: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x127960u;
    {
        const bool branch_taken_0x127960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127960) {
            ctx->pc = 0x127964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127960u;
            // 0x127964: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127998u;
            goto label_127998;
        }
    }
    ctx->pc = 0x127968u;
    // 0x127968: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x127968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_12796c:
    // 0x12796c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12796Cu;
    {
        const bool branch_taken_0x12796c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12796c) {
            ctx->pc = 0x127970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12796Cu;
            // 0x127970: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127998u;
            goto label_127998;
        }
    }
    ctx->pc = 0x127974u;
    // 0x127974: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x127974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x127978: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x127978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x12797c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x12797cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x127980: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x127980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x127984: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x127984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x127988: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x127988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x12798c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x12798cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x127990: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x127990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x127994: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x127994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_127998:
    // 0x127998: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x127998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12799c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12799Cu;
    {
        const bool branch_taken_0x12799c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1279A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12799Cu;
            // 0x1279a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12799c) {
            ctx->pc = 0x1279F8u;
            goto label_1279f8;
        }
    }
    ctx->pc = 0x1279A4u;
    // 0x1279a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1279a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1279a8: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x1279a8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9u)));
    // 0x1279ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1279ACu;
    {
        const bool branch_taken_0x1279ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1279B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1279ACu;
            // 0x1279b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279ac) {
            ctx->pc = 0x1279F8u;
            goto label_1279f8;
        }
    }
    ctx->pc = 0x1279B4u;
    // 0x1279b4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1279b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1279b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1279b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1279bc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1279bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1279c0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1279c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1279c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1279c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1279c8: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1279c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1279cc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1279CCu;
    {
        const bool branch_taken_0x1279cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1279D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1279CCu;
            // 0x1279d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279cc) {
            ctx->pc = 0x1279DCu;
            goto label_1279dc;
        }
    }
    ctx->pc = 0x1279D4u;
    // 0x1279d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1279D4u;
    {
        const bool branch_taken_0x1279d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1279D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1279D4u;
            // 0x1279d8: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279d4) {
            ctx->pc = 0x1279F4u;
            goto label_1279f4;
        }
    }
    ctx->pc = 0x1279DCu;
label_1279dc:
    // 0x1279dc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1279dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1279e0: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1279e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1279e4: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x1279e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1279e8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1279e8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2u)));
    // 0x1279ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1279ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1279f0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1279f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_1279f4:
    // 0x1279f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1279f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1279f8:
    // 0x1279f8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1279f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1279fc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1279fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x127a00: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x127a00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x127a04: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x127a04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x127a08: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x127a08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127a0c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x127a0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127a10: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x127a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127a14: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x127a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127a18: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x127a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127a1c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x127a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127a20: 0x3e00008  jr          $ra
    ctx->pc = 0x127A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A20u;
            // 0x127a24: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127628u: goto label_127628;
            case 0x127654u: goto label_127654;
            case 0x127664u: goto label_127664;
            case 0x127690u: goto label_127690;
            case 0x127694u: goto label_127694;
            case 0x1276BCu: goto label_1276bc;
            case 0x1276D0u: goto label_1276d0;
            case 0x1276E8u: goto label_1276e8;
            case 0x127720u: goto label_127720;
            case 0x127724u: goto label_127724;
            case 0x127728u: goto label_127728;
            case 0x12774Cu: goto label_12774c;
            case 0x127774u: goto label_127774;
            case 0x1277BCu: goto label_1277bc;
            case 0x1277E4u: goto label_1277e4;
            case 0x127848u: goto label_127848;
            case 0x127870u: goto label_127870;
            case 0x1278A0u: goto label_1278a0;
            case 0x1278A4u: goto label_1278a4;
            case 0x127918u: goto label_127918;
            case 0x127930u: goto label_127930;
            case 0x127940u: goto label_127940;
            case 0x12796Cu: goto label_12796c;
            case 0x127998u: goto label_127998;
            case 0x1279DCu: goto label_1279dc;
            case 0x1279F4u: goto label_1279f4;
            case 0x1279F8u: goto label_1279f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127A28u;
}
