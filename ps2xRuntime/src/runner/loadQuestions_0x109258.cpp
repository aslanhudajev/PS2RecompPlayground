#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: loadQuestions
// Address: 0x109258 - 0x109420
void loadQuestions_0x109258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("loadQuestions_0x109258");
#endif

    ctx->pc = 0x109258u;

    // 0x109258: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x109258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x10925c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x10925cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x109260: 0xffb40440  sd          $s4, 0x440($sp)
    ctx->pc = 0x109260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 20));
    // 0x109264: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x109264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x109268: 0xffb30430  sd          $s3, 0x430($sp)
    ctx->pc = 0x109268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 19));
    // 0x10926c: 0x34a59000  ori         $a1, $a1, 0x9000
    ctx->pc = 0x10926cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)36864u)));
    // 0x109270: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x109270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x109274: 0x3c140013  lui         $s4, 0x13
    ctx->pc = 0x109274u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)19 << 16));
    // 0x109278: 0xffb10410  sd          $s1, 0x410($sp)
    ctx->pc = 0x109278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 17));
    // 0x10927c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10927cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109280: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x109280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
    // 0x109284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x109284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109288: 0xffb70470  sd          $s7, 0x470($sp)
    ctx->pc = 0x109288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 23));
    // 0x10928c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10928cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109290: 0xffb60460  sd          $s6, 0x460($sp)
    ctx->pc = 0x109290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 22));
    // 0x109294: 0xffb50450  sd          $s5, 0x450($sp)
    ctx->pc = 0x109294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 21));
    // 0x109298: 0xc04a90c  jal         func_12A430
    ctx->pc = 0x109298u;
    SET_GPR_U32(ctx, 31, 0x1092A0u);
    ctx->pc = 0x10929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109298u;
            // 0x10929c: 0xffb00400  sd          $s0, 0x400($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A430u;
    if (runtime->hasFunction(0x12A430u)) {
        auto targetFn = runtime->lookupFunction(0x12A430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092A0u; }
        if (ctx->pc != 0x1092A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x12a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092A0u; }
        if (ctx->pc != 0x1092A0u) { return; }
    }
    ctx->pc = 0x1092A0u;
    // 0x1092a0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1092a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1092a4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1092a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1092a8: 0x24843418  addiu       $a0, $a0, 0x3418
    ctx->pc = 0x1092a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13336));
    // 0x1092ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1092acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092b0: 0xaf828364  sw          $v0, -0x7C9C($gp)
    ctx->pc = 0x1092b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935396), GPR_U32(ctx, 2));
    // 0x1092b4: 0xc040a1c  jal         func_102870
    ctx->pc = 0x1092B4u;
    SET_GPR_U32(ctx, 31, 0x1092BCu);
    ctx->pc = 0x1092B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1092B4u;
            // 0x1092b8: 0x34c69000  ori         $a2, $a2, 0x9000 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)36864u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102870u;
    if (runtime->hasFunction(0x102870u)) {
        auto targetFn = runtime->lookupFunction(0x102870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092BCu; }
        if (ctx->pc != 0x1092BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092BCu; }
        if (ctx->pc != 0x1092BCu) { return; }
    }
    ctx->pc = 0x1092BCu;
    // 0x1092bc: 0xc043948  jal         func_10E520
    ctx->pc = 0x1092BCu;
    SET_GPR_U32(ctx, 31, 0x1092C4u);
    ctx->pc = 0x1092C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1092BCu;
            // 0x1092c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092C4u; }
        if (ctx->pc != 0x1092C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092C4u; }
        if (ctx->pc != 0x1092C4u) { return; }
    }
    ctx->pc = 0x1092C4u;
    // 0x1092c4: 0x8f828364  lw          $v0, -0x7C9C($gp)
    ctx->pc = 0x1092c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935396)));
    // 0x1092c8: 0x86831468  lh          $v1, 0x1468($s4)
    ctx->pc = 0x1092c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5224)));
    // 0x1092cc: 0x18600049  blez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1092CCu;
    {
        const bool branch_taken_0x1092cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1092D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1092CCu;
            // 0x1092d0: 0xaf828360  sw          $v0, -0x7CA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092cc) {
            ctx->pc = 0x1093F4u;
            goto label_1093f4;
        }
    }
    ctx->pc = 0x1092D4u;
    // 0x1092d4: 0x3c170013  lui         $s7, 0x13
    ctx->pc = 0x1092d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)19 << 16));
label_1092d8:
    // 0x1092d8: 0x8f848360  lw          $a0, -0x7CA0($gp)
    ctx->pc = 0x1092d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935392)));
    // 0x1092dc: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x1092DCu;
    SET_GPR_U32(ctx, 31, 0x1092E4u);
    ctx->pc = 0x1092E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1092DCu;
            // 0x1092e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102AC0u;
    if (runtime->hasFunction(0x102AC0u)) {
        auto targetFn = runtime->lookupFunction(0x102AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092E4u; }
        if (ctx->pc != 0x1092E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readLine_0x102ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1092E4u; }
        if (ctx->pc != 0x1092E4u) { return; }
    }
    ctx->pc = 0x1092E4u;
    // 0x1092e4: 0x24040a28  addiu       $a0, $zero, 0xA28
    ctx->pc = 0x1092e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x1092e8: 0x26e314a0  addiu       $v1, $s7, 0x14A0
    ctx->pc = 0x1092e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 5280));
    // 0x1092ec: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x1092ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1092f0: 0xaf828360  sw          $v0, -0x7CA0($gp)
    ctx->pc = 0x1092f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935392), GPR_U32(ctx, 2));
    // 0x1092f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1092f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092f8: 0xc04ae67  jal         func_12B99C
    ctx->pc = 0x1092F8u;
    SET_GPR_U32(ctx, 31, 0x109300u);
    ctx->pc = 0x1092FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1092F8u;
            // 0x1092fc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B99Cu;
    if (runtime->hasFunction(0x12B99Cu)) {
        auto targetFn = runtime->lookupFunction(0x12B99Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109300u; }
        if (ctx->pc != 0x109300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x12b99c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109300u; }
        if (ctx->pc != 0x109300u) { return; }
    }
    ctx->pc = 0x109300u;
    // 0x109300: 0x26831468  addiu       $v1, $s4, 0x1468
    ctx->pc = 0x109300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 5224));
    // 0x109304: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x109304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x109308: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x109308u;
    {
        const bool branch_taken_0x109308 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10930Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109308u;
            // 0x10930c: 0x3c150013  lui         $s5, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109308) {
            ctx->pc = 0x1093DCu;
            goto label_1093dc;
        }
    }
    ctx->pc = 0x109310u;
    // 0x109310: 0x26360001  addiu       $s6, $s1, 0x1
    ctx->pc = 0x109310u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x109314: 0x0  nop
    ctx->pc = 0x109314u;
    // NOP
label_109318:
    // 0x109318: 0x8f848360  lw          $a0, -0x7CA0($gp)
    ctx->pc = 0x109318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935392)));
    // 0x10931c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x10931Cu;
    SET_GPR_U32(ctx, 31, 0x109324u);
    ctx->pc = 0x109320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10931Cu;
            // 0x109320: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102AC0u;
    if (runtime->hasFunction(0x102AC0u)) {
        auto targetFn = runtime->lookupFunction(0x102AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109324u; }
        if (ctx->pc != 0x109324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readLine_0x102ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109324u; }
        if (ctx->pc != 0x109324u) { return; }
    }
    ctx->pc = 0x109324u;
    // 0x109324: 0x240401f4  addiu       $a0, $zero, 0x1F4
    ctx->pc = 0x109324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x109328: 0x24030a28  addiu       $v1, $zero, 0xA28
    ctx->pc = 0x109328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x10932c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x10932cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x109330: 0x72231818  mult1       $v1, $s1, $v1
    ctx->pc = 0x109330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x109334: 0x26a61504  addiu       $a2, $s5, 0x1504
    ctx->pc = 0x109334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 5380));
    // 0x109338: 0xaf828360  sw          $v0, -0x7CA0($gp)
    ctx->pc = 0x109338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935392), GPR_U32(ctx, 2));
    // 0x10933c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10933cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109340: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x109340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x109344: 0xc04ae67  jal         func_12B99C
    ctx->pc = 0x109344u;
    SET_GPR_U32(ctx, 31, 0x10934Cu);
    ctx->pc = 0x109348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109344u;
            // 0x109348: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B99Cu;
    if (runtime->hasFunction(0x12B99Cu)) {
        auto targetFn = runtime->lookupFunction(0x12B99Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10934Cu; }
        if (ctx->pc != 0x10934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x12b99c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10934Cu; }
        if (ctx->pc != 0x10934Cu) { return; }
    }
    ctx->pc = 0x10934Cu;
    // 0x10934c: 0x26831468  addiu       $v1, $s4, 0x1468
    ctx->pc = 0x10934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 5224));
    // 0x109350: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x109350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x109354: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x109354u;
    {
        const bool branch_taken_0x109354 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x109358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109354u;
            // 0x109358: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109354) {
            ctx->pc = 0x1093C0u;
            goto label_1093c0;
        }
    }
    ctx->pc = 0x10935Cu;
    // 0x10935c: 0x8f848360  lw          $a0, -0x7CA0($gp)
    ctx->pc = 0x10935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935392)));
label_109360:
    // 0x109360: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x109360u;
    SET_GPR_U32(ctx, 31, 0x109368u);
    ctx->pc = 0x109364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109360u;
            // 0x109364: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102AC0u;
    if (runtime->hasFunction(0x102AC0u)) {
        auto targetFn = runtime->lookupFunction(0x102AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109368u; }
        if (ctx->pc != 0x109368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readLine_0x102ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109368u; }
        if (ctx->pc != 0x109368u) { return; }
    }
    ctx->pc = 0x109368u;
    // 0x109368: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x109368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x10936c: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x10936cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x109370: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x109370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x109374: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x109374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x109378: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x109378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x10937c: 0x26a71504  addiu       $a3, $s5, 0x1504
    ctx->pc = 0x10937cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 5380));
    // 0x109380: 0x72263018  mult1       $a2, $s1, $a2
    ctx->pc = 0x109380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x109384: 0xaf828360  sw          $v0, -0x7CA0($gp)
    ctx->pc = 0x109384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935392), GPR_U32(ctx, 2));
    // 0x109388: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10938c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x10938cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x109390: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x109390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x109394: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x109394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x109398: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x109398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x10939c: 0xc04ae67  jal         func_12B99C
    ctx->pc = 0x10939Cu;
    SET_GPR_U32(ctx, 31, 0x1093A4u);
    ctx->pc = 0x1093A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10939Cu;
            // 0x1093a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B99Cu;
    if (runtime->hasFunction(0x12B99Cu)) {
        auto targetFn = runtime->lookupFunction(0x12B99Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1093A4u; }
        if (ctx->pc != 0x1093A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x12b99c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1093A4u; }
        if (ctx->pc != 0x1093A4u) { return; }
    }
    ctx->pc = 0x1093A4u;
    // 0x1093a4: 0x26831468  addiu       $v1, $s4, 0x1468
    ctx->pc = 0x1093a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 5224));
    // 0x1093a8: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1093a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1093ac: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1093acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1093b0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1093B0u;
    {
        const bool branch_taken_0x1093b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1093B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1093B0u;
            // 0x1093b4: 0x8f848360  lw          $a0, -0x7CA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093b0) {
            ctx->pc = 0x109360u;
            goto label_109360;
        }
    }
    ctx->pc = 0x1093B8u;
    // 0x1093b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1093B8u;
    {
        const bool branch_taken_0x1093b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1093BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1093B8u;
            // 0x1093bc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093b8) {
            ctx->pc = 0x1093C4u;
            goto label_1093c4;
        }
    }
    ctx->pc = 0x1093C0u;
label_1093c0:
    // 0x1093c0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1093c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1093c4:
    // 0x1093c4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1093c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1093c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1093c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1093cc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1093CCu;
    {
        const bool branch_taken_0x1093cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1093D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1093CCu;
            // 0x1093d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093cc) {
            ctx->pc = 0x109318u;
            goto label_109318;
        }
    }
    ctx->pc = 0x1093D4u;
    // 0x1093d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1093D4u;
    {
        const bool branch_taken_0x1093d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1093D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1093D4u;
            // 0x1093d8: 0x86821468  lh          $v0, 0x1468($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093d4) {
            ctx->pc = 0x1093E4u;
            goto label_1093e4;
        }
    }
    ctx->pc = 0x1093DCu;
label_1093dc:
    // 0x1093dc: 0x26360001  addiu       $s6, $s1, 0x1
    ctx->pc = 0x1093dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1093e0: 0x86821468  lh          $v0, 0x1468($s4)
    ctx->pc = 0x1093e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5224)));
label_1093e4:
    // 0x1093e4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1093e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093e8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1093e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1093ec: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1093ECu;
    {
        const bool branch_taken_0x1093ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1093F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1093ECu;
            // 0x1093f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1093ec) {
            ctx->pc = 0x1092D8u;
            goto label_1092d8;
        }
    }
    ctx->pc = 0x1093F4u;
label_1093f4:
    // 0x1093f4: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x1093f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x1093f8: 0xdfb70470  ld          $s7, 0x470($sp)
    ctx->pc = 0x1093f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1093fc: 0xdfb60460  ld          $s6, 0x460($sp)
    ctx->pc = 0x1093fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x109400: 0xdfb50450  ld          $s5, 0x450($sp)
    ctx->pc = 0x109400u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x109404: 0xdfb40440  ld          $s4, 0x440($sp)
    ctx->pc = 0x109404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x109408: 0xdfb30430  ld          $s3, 0x430($sp)
    ctx->pc = 0x109408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x10940c: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x10940cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x109410: 0xdfb10410  ld          $s1, 0x410($sp)
    ctx->pc = 0x109410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x109414: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x109414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x109418: 0x3e00008  jr          $ra
    ctx->pc = 0x109418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10941Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109418u;
            // 0x10941c: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1092D8u: goto label_1092d8;
            case 0x109318u: goto label_109318;
            case 0x109360u: goto label_109360;
            case 0x1093C0u: goto label_1093c0;
            case 0x1093C4u: goto label_1093c4;
            case 0x1093DCu: goto label_1093dc;
            case 0x1093E4u: goto label_1093e4;
            case 0x1093F4u: goto label_1093f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x109420u;
}
