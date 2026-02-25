#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ResultDispXp
// Address: 0x158830 - 0x158c94
void ResultDispXp_0x158830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ResultDispXp_0x158830");
#endif

    ctx->pc = 0x158830u;

    // 0x158830: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x158830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x158834: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15883c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x15883cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x158840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158844: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15884c: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x15884cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x158850: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158850u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158858: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x158858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x15885c: 0x24c60f28  addiu       $a2, $a2, 0xF28
    ctx->pc = 0x15885cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3880));
    // 0x158860: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x158860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x158864: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158868: 0xc060940  jal         func_182500
    ctx->pc = 0x158868u;
    SET_GPR_U32(ctx, 31, 0x158870u);
    ctx->pc = 0x15886Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158868u;
            // 0x15886c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158870u; }
        if (ctx->pc != 0x158870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158870u; }
        if (ctx->pc != 0x158870u) { return; }
    }
    ctx->pc = 0x158870u;
    // 0x158870: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x158870u;
    {
        const bool branch_taken_0x158870 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x158874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158870u;
            // 0x158874: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158870) {
            ctx->pc = 0x1588A8u;
            goto label_1588a8;
        }
    }
    ctx->pc = 0x158878u;
    // 0x158878: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15887c: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x15887cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158880: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x158880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x158884: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x158884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x158888: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x158888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x15888c: 0x24c60f30  addiu       $a2, $a2, 0xF30
    ctx->pc = 0x15888cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3888));
    // 0x158890: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158894: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158898: 0xc060940  jal         func_182500
    ctx->pc = 0x158898u;
    SET_GPR_U32(ctx, 31, 0x1588A0u);
    ctx->pc = 0x15889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158898u;
            // 0x15889c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1588A0u; }
        if (ctx->pc != 0x1588A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1588A0u; }
        if (ctx->pc != 0x1588A0u) { return; }
    }
    ctx->pc = 0x1588A0u;
    // 0x1588a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1588A0u;
    {
        const bool branch_taken_0x1588a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588a0) {
            ctx->pc = 0x1588D8u;
            goto label_1588d8;
        }
    }
    ctx->pc = 0x1588A8u;
label_1588a8:
    // 0x1588a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1588a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1588ac: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1588acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1588b0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1588b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1588b4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1588b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1588b8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x1588b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1588bc: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x1588bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1588c0: 0x24c60f40  addiu       $a2, $a2, 0xF40
    ctx->pc = 0x1588c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3904));
    // 0x1588c4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1588c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1588c8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1588c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588cc: 0xc060940  jal         func_182500
    ctx->pc = 0x1588CCu;
    SET_GPR_U32(ctx, 31, 0x1588D4u);
    ctx->pc = 0x1588D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1588CCu;
            // 0x1588d0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1588D4u; }
        if (ctx->pc != 0x1588D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1588D4u; }
        if (ctx->pc != 0x1588D4u) { return; }
    }
    ctx->pc = 0x1588D4u;
    // 0x1588d4: 0x0  nop
    ctx->pc = 0x1588d4u;
    // NOP
label_1588d8:
    // 0x1588d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1588d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1588dc: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1588dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1588e0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1588e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1588e4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1588e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1588e8: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x1588e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1588ec: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1588ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1588f0: 0x24c60f50  addiu       $a2, $a2, 0xF50
    ctx->pc = 0x1588f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
    // 0x1588f4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1588f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1588f8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1588f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588fc: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x1588FCu;
    SET_GPR_U32(ctx, 31, 0x158904u);
    ctx->pc = 0x158900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1588FCu;
            // 0x158900: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158904u; }
        if (ctx->pc != 0x158904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158904u; }
        if (ctx->pc != 0x158904u) { return; }
    }
    ctx->pc = 0x158904u;
    // 0x158904: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x158904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x158908: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x158908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x15890c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x15890cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x158910: 0x24422cc8  addiu       $v0, $v0, 0x2CC8
    ctx->pc = 0x158910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11464));
    // 0x158914: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x158914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x158918: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15891c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x15891cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x158920: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x158920u;
    SET_GPR_U32(ctx, 31, 0x158928u);
    ctx->pc = 0x158924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158920u;
            // 0x158924: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158928u; }
        if (ctx->pc != 0x158928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158928u; }
        if (ctx->pc != 0x158928u) { return; }
    }
    ctx->pc = 0x158928u;
    // 0x158928: 0xc056574  jal         func_1595D0
    ctx->pc = 0x158928u;
    SET_GPR_U32(ctx, 31, 0x158930u);
    ctx->pc = 0x15892Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158928u;
            // 0x15892c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158930u; }
        if (ctx->pc != 0x158930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158930u; }
        if (ctx->pc != 0x158930u) { return; }
    }
    ctx->pc = 0x158930u;
    // 0x158930: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158930u;
    {
        const bool branch_taken_0x158930 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158930u;
            // 0x158934: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158930) {
            ctx->pc = 0x158944u;
            goto label_158944;
        }
    }
    ctx->pc = 0x158938u;
    // 0x158938: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158938u;
    {
        const bool branch_taken_0x158938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158938) {
            ctx->pc = 0x158944u;
            goto label_158944;
        }
    }
    ctx->pc = 0x158940u;
    // 0x158940: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x158940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_158944:
    // 0x158944: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x158944u;
    {
        const bool branch_taken_0x158944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158944) {
            ctx->pc = 0x158990u;
            goto label_158990;
        }
    }
    ctx->pc = 0x15894Cu;
    // 0x15894c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15894Cu;
    {
        const bool branch_taken_0x15894c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15894Cu;
            // 0x158950: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15894c) {
            ctx->pc = 0x15895Cu;
            goto label_15895c;
        }
    }
    ctx->pc = 0x158954u;
    // 0x158954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158958: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158958u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_15895c:
    // 0x15895c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15895cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158960: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158964: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158964u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158968: 0x32023  negu        $a0, $v1
    ctx->pc = 0x158968u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x15896c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15896cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x158970: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x158970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158974: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158978: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15897c: 0xc060940  jal         func_182500
    ctx->pc = 0x15897Cu;
    SET_GPR_U32(ctx, 31, 0x158984u);
    ctx->pc = 0x158980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15897Cu;
            // 0x158980: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158984u; }
        if (ctx->pc != 0x158984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158984u; }
        if (ctx->pc != 0x158984u) { return; }
    }
    ctx->pc = 0x158984u;
    // 0x158984: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x158984u;
    {
        const bool branch_taken_0x158984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158984) {
            ctx->pc = 0x1589C8u;
            goto label_1589c8;
        }
    }
    ctx->pc = 0x15898Cu;
    // 0x15898c: 0x0  nop
    ctx->pc = 0x15898cu;
    // NOP
label_158990:
    // 0x158990: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158990u;
    {
        const bool branch_taken_0x158990 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158990u;
            // 0x158994: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158990) {
            ctx->pc = 0x1589A0u;
            goto label_1589a0;
        }
    }
    ctx->pc = 0x158998u;
    // 0x158998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15899c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15899cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1589a0:
    // 0x1589a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1589a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1589a4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1589a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1589a8: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1589a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1589ac: 0x32023  negu        $a0, $v1
    ctx->pc = 0x1589acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1589b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1589b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1589b4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1589b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1589b8: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1589b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1589bc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1589bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1589c0: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x1589C0u;
    SET_GPR_U32(ctx, 31, 0x1589C8u);
    ctx->pc = 0x1589C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1589C0u;
            // 0x1589c4: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1589C8u; }
        if (ctx->pc != 0x1589C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1589C8u; }
        if (ctx->pc != 0x1589C8u) { return; }
    }
    ctx->pc = 0x1589C8u;
label_1589c8:
    // 0x1589c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1589c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1589cc: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x1589ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x1589d0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1589d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1589d4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1589d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1589d8: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x1589d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1589dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1589dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1589e0: 0x24c60f70  addiu       $a2, $a2, 0xF70
    ctx->pc = 0x1589e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3952));
    // 0x1589e4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1589e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1589e8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1589e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1589ec: 0xc060940  jal         func_182500
    ctx->pc = 0x1589ECu;
    SET_GPR_U32(ctx, 31, 0x1589F4u);
    ctx->pc = 0x1589F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1589ECu;
            // 0x1589f0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1589F4u; }
        if (ctx->pc != 0x1589F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1589F4u; }
        if (ctx->pc != 0x1589F4u) { return; }
    }
    ctx->pc = 0x1589F4u;
    // 0x1589f4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1589f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1589f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1589f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1589fc: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1589fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x158a00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158a04: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x158a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x158a08: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x158a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x158a0c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x158A0Cu;
    SET_GPR_U32(ctx, 31, 0x158A14u);
    ctx->pc = 0x158A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A0Cu;
            // 0x158a10: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A14u; }
        if (ctx->pc != 0x158A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A14u; }
        if (ctx->pc != 0x158A14u) { return; }
    }
    ctx->pc = 0x158A14u;
    // 0x158a14: 0xc056574  jal         func_1595D0
    ctx->pc = 0x158A14u;
    SET_GPR_U32(ctx, 31, 0x158A1Cu);
    ctx->pc = 0x158A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A14u;
            // 0x158a18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A1Cu; }
        if (ctx->pc != 0x158A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A1Cu; }
        if (ctx->pc != 0x158A1Cu) { return; }
    }
    ctx->pc = 0x158A1Cu;
    // 0x158a1c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158A1Cu;
    {
        const bool branch_taken_0x158a1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158A1Cu;
            // 0x158a20: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a1c) {
            ctx->pc = 0x158A30u;
            goto label_158a30;
        }
    }
    ctx->pc = 0x158A24u;
    // 0x158a24: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158A24u;
    {
        const bool branch_taken_0x158a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a24) {
            ctx->pc = 0x158A30u;
            goto label_158a30;
        }
    }
    ctx->pc = 0x158A2Cu;
    // 0x158a2c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x158a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_158a30:
    // 0x158a30: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158A30u;
    {
        const bool branch_taken_0x158a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a30) {
            ctx->pc = 0x158A78u;
            goto label_158a78;
        }
    }
    ctx->pc = 0x158A38u;
    // 0x158a38: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158A38u;
    {
        const bool branch_taken_0x158a38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158A38u;
            // 0x158a3c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a38) {
            ctx->pc = 0x158A48u;
            goto label_158a48;
        }
    }
    ctx->pc = 0x158A40u;
    // 0x158a40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158a44: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158a44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158a48:
    // 0x158a48: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158a4c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158a50: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158a50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158a54: 0x32023  negu        $a0, $v1
    ctx->pc = 0x158a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x158a58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x158a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158a5c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x158a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158a60: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158a64: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158a64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a68: 0xc060940  jal         func_182500
    ctx->pc = 0x158A68u;
    SET_GPR_U32(ctx, 31, 0x158A70u);
    ctx->pc = 0x158A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158A68u;
            // 0x158a6c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A70u; }
        if (ctx->pc != 0x158A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158A70u; }
        if (ctx->pc != 0x158A70u) { return; }
    }
    ctx->pc = 0x158A70u;
    // 0x158a70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x158A70u;
    {
        const bool branch_taken_0x158a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158a70) {
            ctx->pc = 0x158AB0u;
            goto label_158ab0;
        }
    }
    ctx->pc = 0x158A78u;
label_158a78:
    // 0x158a78: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158A78u;
    {
        const bool branch_taken_0x158a78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158A78u;
            // 0x158a7c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a78) {
            ctx->pc = 0x158A88u;
            goto label_158a88;
        }
    }
    ctx->pc = 0x158A80u;
    // 0x158a80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158a84: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158a84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158a88:
    // 0x158a88: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158a8c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158a90: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158a90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158a94: 0x32023  negu        $a0, $v1
    ctx->pc = 0x158a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x158a98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x158a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158a9c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x158a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158aa0: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158aa4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158aa8: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x158AA8u;
    SET_GPR_U32(ctx, 31, 0x158AB0u);
    ctx->pc = 0x158AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158AA8u;
            // 0x158aac: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158AB0u; }
        if (ctx->pc != 0x158AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158AB0u; }
        if (ctx->pc != 0x158AB0u) { return; }
    }
    ctx->pc = 0x158AB0u;
label_158ab0:
    // 0x158ab0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158ab4: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158ab4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158ab8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158abc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x158abcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x158ac0: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x158ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x158ac4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x158ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158ac8: 0x24c60f90  addiu       $a2, $a2, 0xF90
    ctx->pc = 0x158ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3984));
    // 0x158acc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x158accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158ad0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ad4: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x158AD4u;
    SET_GPR_U32(ctx, 31, 0x158ADCu);
    ctx->pc = 0x158AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158AD4u;
            // 0x158ad8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158ADCu; }
        if (ctx->pc != 0x158ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158ADCu; }
        if (ctx->pc != 0x158ADCu) { return; }
    }
    ctx->pc = 0x158ADCu;
    // 0x158adc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x158adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x158ae0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x158ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x158ae4: 0x24422cb8  addiu       $v0, $v0, 0x2CB8
    ctx->pc = 0x158ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11448));
    // 0x158ae8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158aec: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x158aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x158af0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x158af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x158af4: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x158AF4u;
    SET_GPR_U32(ctx, 31, 0x158AFCu);
    ctx->pc = 0x158AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158AF4u;
            // 0x158af8: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158AFCu; }
        if (ctx->pc != 0x158AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158AFCu; }
        if (ctx->pc != 0x158AFCu) { return; }
    }
    ctx->pc = 0x158AFCu;
    // 0x158afc: 0xc056574  jal         func_1595D0
    ctx->pc = 0x158AFCu;
    SET_GPR_U32(ctx, 31, 0x158B04u);
    ctx->pc = 0x158B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158AFCu;
            // 0x158b00: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B04u; }
        if (ctx->pc != 0x158B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B04u; }
        if (ctx->pc != 0x158B04u) { return; }
    }
    ctx->pc = 0x158B04u;
    // 0x158b04: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158B04u;
    {
        const bool branch_taken_0x158b04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B04u;
            // 0x158b08: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b04) {
            ctx->pc = 0x158B18u;
            goto label_158b18;
        }
    }
    ctx->pc = 0x158B0Cu;
    // 0x158b0c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158B0Cu;
    {
        const bool branch_taken_0x158b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b0c) {
            ctx->pc = 0x158B18u;
            goto label_158b18;
        }
    }
    ctx->pc = 0x158B14u;
    // 0x158b14: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x158b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_158b18:
    // 0x158b18: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158B18u;
    {
        const bool branch_taken_0x158b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b18) {
            ctx->pc = 0x158B60u;
            goto label_158b60;
        }
    }
    ctx->pc = 0x158B20u;
    // 0x158b20: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158B20u;
    {
        const bool branch_taken_0x158b20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B20u;
            // 0x158b24: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b20) {
            ctx->pc = 0x158B30u;
            goto label_158b30;
        }
    }
    ctx->pc = 0x158B28u;
    // 0x158b28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158b2c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158b2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158b30:
    // 0x158b30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158b34: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158b38: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158b38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158b3c: 0x32023  negu        $a0, $v1
    ctx->pc = 0x158b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x158b40: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x158b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x158b44: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x158b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158b48: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158b4c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158b4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b50: 0xc060940  jal         func_182500
    ctx->pc = 0x158B50u;
    SET_GPR_U32(ctx, 31, 0x158B58u);
    ctx->pc = 0x158B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158B50u;
            // 0x158b54: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B58u; }
        if (ctx->pc != 0x158B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B58u; }
        if (ctx->pc != 0x158B58u) { return; }
    }
    ctx->pc = 0x158B58u;
    // 0x158b58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x158B58u;
    {
        const bool branch_taken_0x158b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b58) {
            ctx->pc = 0x158B98u;
            goto label_158b98;
        }
    }
    ctx->pc = 0x158B60u;
label_158b60:
    // 0x158b60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158B60u;
    {
        const bool branch_taken_0x158b60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B60u;
            // 0x158b64: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b60) {
            ctx->pc = 0x158B70u;
            goto label_158b70;
        }
    }
    ctx->pc = 0x158B68u;
    // 0x158b68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158b6c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158b6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158b70:
    // 0x158b70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158b74: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158b78: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158b78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158b7c: 0x32023  negu        $a0, $v1
    ctx->pc = 0x158b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x158b80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x158b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x158b84: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x158b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158b88: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x158b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x158b8c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158b8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b90: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x158B90u;
    SET_GPR_U32(ctx, 31, 0x158B98u);
    ctx->pc = 0x158B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158B90u;
            // 0x158b94: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B98u; }
        if (ctx->pc != 0x158B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B98u; }
        if (ctx->pc != 0x158B98u) { return; }
    }
    ctx->pc = 0x158B98u;
label_158b98:
    // 0x158b98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158b9c: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158b9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158ba0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158ba4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x158ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x158ba8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x158ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x158bac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x158bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x158bb0: 0x24c60fa8  addiu       $a2, $a2, 0xFA8
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4008));
    // 0x158bb4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x158bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158bb8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158bb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158bbc: 0xc060940  jal         func_182500
    ctx->pc = 0x158BBCu;
    SET_GPR_U32(ctx, 31, 0x158BC4u);
    ctx->pc = 0x158BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158BBCu;
            // 0x158bc0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158BC4u; }
        if (ctx->pc != 0x158BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158BC4u; }
        if (ctx->pc != 0x158BC4u) { return; }
    }
    ctx->pc = 0x158BC4u;
    // 0x158bc4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x158bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x158bc8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x158bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x158bcc: 0x24422cb0  addiu       $v0, $v0, 0x2CB0
    ctx->pc = 0x158bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11440));
    // 0x158bd0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158bd4: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x158bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x158bd8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x158bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158bdc: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x158BDCu;
    SET_GPR_U32(ctx, 31, 0x158BE4u);
    ctx->pc = 0x158BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158BDCu;
            // 0x158be0: 0x24a50f60  addiu       $a1, $a1, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158BE4u; }
        if (ctx->pc != 0x158BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158BE4u; }
        if (ctx->pc != 0x158BE4u) { return; }
    }
    ctx->pc = 0x158BE4u;
    // 0x158be4: 0xc056574  jal         func_1595D0
    ctx->pc = 0x158BE4u;
    SET_GPR_U32(ctx, 31, 0x158BECu);
    ctx->pc = 0x158BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158BE4u;
            // 0x158be8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1595D0u;
    if (runtime->hasFunction(0x1595D0u)) {
        auto targetFn = runtime->lookupFunction(0x1595D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158BECu; }
        if (ctx->pc != 0x158BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnKeta_0x1595d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158BECu; }
        if (ctx->pc != 0x158BECu) { return; }
    }
    ctx->pc = 0x158BECu;
    // 0x158bec: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158BECu;
    {
        const bool branch_taken_0x158bec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158BECu;
            // 0x158bf0: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bec) {
            ctx->pc = 0x158C00u;
            goto label_158c00;
        }
    }
    ctx->pc = 0x158BF4u;
    // 0x158bf4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158BF4u;
    {
        const bool branch_taken_0x158bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158bf4) {
            ctx->pc = 0x158C00u;
            goto label_158c00;
        }
    }
    ctx->pc = 0x158BFCu;
    // 0x158bfc: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x158bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_158c00:
    // 0x158c00: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158C00u;
    {
        const bool branch_taken_0x158c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c00) {
            ctx->pc = 0x158C48u;
            goto label_158c48;
        }
    }
    ctx->pc = 0x158C08u;
    // 0x158c08: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158C08u;
    {
        const bool branch_taken_0x158c08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C08u;
            // 0x158c0c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c08) {
            ctx->pc = 0x158C18u;
            goto label_158c18;
        }
    }
    ctx->pc = 0x158C10u;
    // 0x158c10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158c14: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158c14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158c18:
    // 0x158c18: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158c1c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158c20: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158c20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158c24: 0x32023  negu        $a0, $v1
    ctx->pc = 0x158c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x158c28: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x158c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x158c2c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x158c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158c30: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x158c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x158c34: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158c34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c38: 0xc060940  jal         func_182500
    ctx->pc = 0x158C38u;
    SET_GPR_U32(ctx, 31, 0x158C40u);
    ctx->pc = 0x158C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158C38u;
            // 0x158c3c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182500u;
    if (runtime->hasFunction(0x182500u)) {
        auto targetFn = runtime->lookupFunction(0x182500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158C40u; }
        if (ctx->pc != 0x158C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_p_RGBA_0x182500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158C40u; }
        if (ctx->pc != 0x158C40u) { return; }
    }
    ctx->pc = 0x158C40u;
    // 0x158c40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x158C40u;
    {
        const bool branch_taken_0x158c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c40) {
            ctx->pc = 0x158C80u;
            goto label_158c80;
        }
    }
    ctx->pc = 0x158C48u;
label_158c48:
    // 0x158c48: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158C48u;
    {
        const bool branch_taken_0x158c48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x158C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C48u;
            // 0x158c4c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c48) {
            ctx->pc = 0x158C58u;
            goto label_158c58;
        }
    }
    ctx->pc = 0x158C50u;
    // 0x158c50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x158c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x158c54: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x158c54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_158c58:
    // 0x158c58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x158c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x158c5c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x158c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158c60: 0x8c2b2c88  lw          $t3, 0x2C88($at)
    ctx->pc = 0x158c60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11400)));
    // 0x158c64: 0x32023  negu        $a0, $v1
    ctx->pc = 0x158c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x158c68: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x158c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x158c6c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x158c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158c70: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x158c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x158c74: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x158c74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158c78: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x158C78u;
    SET_GPR_U32(ctx, 31, 0x158C80u);
    ctx->pc = 0x158C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158C78u;
            // 0x158c7c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158C80u; }
        if (ctx->pc != 0x158C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158C80u; }
        if (ctx->pc != 0x158C80u) { return; }
    }
    ctx->pc = 0x158C80u;
label_158c80:
    // 0x158c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x158C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C8Cu;
            // 0x158c90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1588A8u: goto label_1588a8;
            case 0x1588D8u: goto label_1588d8;
            case 0x158944u: goto label_158944;
            case 0x15895Cu: goto label_15895c;
            case 0x158990u: goto label_158990;
            case 0x1589A0u: goto label_1589a0;
            case 0x1589C8u: goto label_1589c8;
            case 0x158A30u: goto label_158a30;
            case 0x158A48u: goto label_158a48;
            case 0x158A78u: goto label_158a78;
            case 0x158A88u: goto label_158a88;
            case 0x158AB0u: goto label_158ab0;
            case 0x158B18u: goto label_158b18;
            case 0x158B30u: goto label_158b30;
            case 0x158B60u: goto label_158b60;
            case 0x158B70u: goto label_158b70;
            case 0x158B98u: goto label_158b98;
            case 0x158C00u: goto label_158c00;
            case 0x158C18u: goto label_158c18;
            case 0x158C48u: goto label_158c48;
            case 0x158C58u: goto label_158c58;
            case 0x158C80u: goto label_158c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158C94u;
}
