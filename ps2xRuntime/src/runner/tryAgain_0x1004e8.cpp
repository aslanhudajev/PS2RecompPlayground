#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: tryAgain
// Address: 0x1004e8 - 0x10077c
void tryAgain_0x1004e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("tryAgain_0x1004e8");
#endif

    ctx->pc = 0x1004e8u;

    // 0x1004e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1004e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1004ec: 0xa7808110  sh          $zero, -0x7EF0($gp)
    ctx->pc = 0x1004ecu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934800), (uint16_t)GPR_U32(ctx, 0));
    // 0x1004f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1004f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1004f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1004f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1004f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1004f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1004fc: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1004fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x100500: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x100500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x100504: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x100504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x100508: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x100508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10050c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x100510: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x100510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x100514: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x100514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x100518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10051c: 0xaf80814c  sw          $zero, -0x7EB4($gp)
    ctx->pc = 0x10051cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
label_100520:
    // 0x100520: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x100520u;
    SET_GPR_U32(ctx, 31, 0x100528u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100528u; }
        if (ctx->pc != 0x100528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100528u; }
        if (ctx->pc != 0x100528u) { return; }
    }
    ctx->pc = 0x100528u;
    // 0x100528: 0xc041e22  jal         func_107888
    ctx->pc = 0x100528u;
    SET_GPR_U32(ctx, 31, 0x100530u);
    ctx->pc = 0x107888u;
    if (runtime->hasFunction(0x107888u)) {
        auto targetFn = runtime->lookupFunction(0x107888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100530u; }
        if (ctx->pc != 0x100530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        tryAnimate_0x107888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100530u; }
        if (ctx->pc != 0x100530u) { return; }
    }
    ctx->pc = 0x100530u;
    // 0x100530: 0xc041eaa  jal         func_107AA8
    ctx->pc = 0x100530u;
    SET_GPR_U32(ctx, 31, 0x100538u);
    ctx->pc = 0x107AA8u;
    if (runtime->hasFunction(0x107AA8u)) {
        auto targetFn = runtime->lookupFunction(0x107AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100538u; }
        if (ctx->pc != 0x100538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        tryDisplay_0x107aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100538u; }
        if (ctx->pc != 0x100538u) { return; }
    }
    ctx->pc = 0x100538u;
    // 0x100538: 0xc042378  jal         func_108DE0
    ctx->pc = 0x100538u;
    SET_GPR_U32(ctx, 31, 0x100540u);
    ctx->pc = 0x10053Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100538u;
            // 0x10053c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108DE0u;
    if (runtime->hasFunction(0x108DE0u)) {
        auto targetFn = runtime->lookupFunction(0x108DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100540u; }
        if (ctx->pc != 0x100540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeIn_0x108de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100540u; }
        if (ctx->pc != 0x100540u) { return; }
    }
    ctx->pc = 0x100540u;
    // 0x100540: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100540u;
    SET_GPR_U32(ctx, 31, 0x100548u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100548u; }
        if (ctx->pc != 0x100548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100548u; }
        if (ctx->pc != 0x100548u) { return; }
    }
    ctx->pc = 0x100548u;
    // 0x100548: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x100548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x10054c: 0x2842007f  slti        $v0, $v0, 0x7F
    ctx->pc = 0x10054cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x100550: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x100550u;
    {
        const bool branch_taken_0x100550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100550u;
            // 0x100554: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100550) {
            ctx->pc = 0x100520u;
            goto label_100520;
        }
    }
    ctx->pc = 0x100558u;
    // 0x100558: 0x3c120013  lui         $s2, 0x13
    ctx->pc = 0x100558u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    // 0x10055c: 0x2455e100  addiu       $s5, $v0, -0x1F00
    ctx->pc = 0x10055cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959360));
    // 0x100560: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x100560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100564: 0x3c1e0017  lui         $fp, 0x17
    ctx->pc = 0x100564u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)23 << 16));
    // 0x100568: 0x3c170017  lui         $s7, 0x17
    ctx->pc = 0x100568u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)23 << 16));
    // 0x10056c: 0x3c160017  lui         $s6, 0x17
    ctx->pc = 0x10056cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
    // 0x100570: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x100570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x100574: 0x0  nop
    ctx->pc = 0x100574u;
    // NOP
label_100578:
    // 0x100578: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10057c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100580: 0xc0458fe  jal         func_1163F8
    ctx->pc = 0x100580u;
    SET_GPR_U32(ctx, 31, 0x100588u);
    ctx->pc = 0x100584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100580u;
            // 0x100584: 0x2446e100  addiu       $a2, $v0, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163F8u;
    if (runtime->hasFunction(0x1163F8u)) {
        auto targetFn = runtime->lookupFunction(0x1163F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100588u; }
        if (ctx->pc != 0x100588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100588u; }
        if (ctx->pc != 0x100588u) { return; }
    }
    ctx->pc = 0x100588u;
    // 0x100588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10058c: 0xc04591e  jal         func_116478
    ctx->pc = 0x10058Cu;
    SET_GPR_U32(ctx, 31, 0x100594u);
    ctx->pc = 0x100590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10058Cu;
            // 0x100590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116478u;
    if (runtime->hasFunction(0x116478u)) {
        auto targetFn = runtime->lookupFunction(0x116478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100594u; }
        if (ctx->pc != 0x100594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100594u; }
        if (ctx->pc != 0x100594u) { return; }
    }
    ctx->pc = 0x100594u;
    // 0x100594: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x100594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100598: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x100598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10059c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10059Cu;
    {
        const bool branch_taken_0x10059c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1005A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10059Cu;
            // 0x1005a0: 0xaf838114  sw          $v1, -0x7EEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10059c) {
            ctx->pc = 0x1005B8u;
            goto label_1005b8;
        }
    }
    ctx->pc = 0x1005A4u;
    // 0x1005a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1005a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1005a8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1005A8u;
    {
        const bool branch_taken_0x1005a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1005a8) {
            ctx->pc = 0x1005ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1005A8u;
            // 0x1005ac: 0x92a20002  lbu         $v0, 0x2($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1005BCu;
            goto label_1005bc;
        }
    }
    ctx->pc = 0x1005B0u;
    // 0x1005b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1005B0u;
    {
        const bool branch_taken_0x1005b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005B0u;
            // 0x1005b4: 0xa7808112  sh          $zero, -0x7EEE($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005b0) {
            ctx->pc = 0x1005CCu;
            goto label_1005cc;
        }
    }
    ctx->pc = 0x1005B8u;
label_1005b8:
    // 0x1005b8: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x1005b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_1005bc:
    // 0x1005bc: 0x92a30003  lbu         $v1, 0x3($s5)
    ctx->pc = 0x1005bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1005c0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1005c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1005c4: 0x431027  nor         $v0, $v0, $v1
    ctx->pc = 0x1005c4u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1005c8: 0xa7828112  sh          $v0, -0x7EEE($gp)
    ctx->pc = 0x1005c8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 2));
label_1005cc:
    // 0x1005cc: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x1005CCu;
    SET_GPR_U32(ctx, 31, 0x1005D4u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005D4u; }
        if (ctx->pc != 0x1005D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005D4u; }
        if (ctx->pc != 0x1005D4u) { return; }
    }
    ctx->pc = 0x1005D4u;
    // 0x1005d4: 0xc041e22  jal         func_107888
    ctx->pc = 0x1005D4u;
    SET_GPR_U32(ctx, 31, 0x1005DCu);
    ctx->pc = 0x107888u;
    if (runtime->hasFunction(0x107888u)) {
        auto targetFn = runtime->lookupFunction(0x107888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005DCu; }
        if (ctx->pc != 0x1005DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        tryAnimate_0x107888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005DCu; }
        if (ctx->pc != 0x1005DCu) { return; }
    }
    ctx->pc = 0x1005DCu;
    // 0x1005dc: 0xc041eaa  jal         func_107AA8
    ctx->pc = 0x1005DCu;
    SET_GPR_U32(ctx, 31, 0x1005E4u);
    ctx->pc = 0x107AA8u;
    if (runtime->hasFunction(0x107AA8u)) {
        auto targetFn = runtime->lookupFunction(0x107AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005E4u; }
        if (ctx->pc != 0x1005E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        tryDisplay_0x107aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005E4u; }
        if (ctx->pc != 0x1005E4u) { return; }
    }
    ctx->pc = 0x1005E4u;
    // 0x1005e4: 0xc0414e2  jal         func_105388
    ctx->pc = 0x1005E4u;
    SET_GPR_U32(ctx, 31, 0x1005ECu);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005ECu; }
        if (ctx->pc != 0x1005ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1005ECu; }
        if (ctx->pc != 0x1005ECu) { return; }
    }
    ctx->pc = 0x1005ECu;
    // 0x1005ec: 0x97858112  lhu         $a1, -0x7EEE($gp)
    ctx->pc = 0x1005ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x1005f0: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x1005f0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32768u)));
    // 0x1005f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1005F4u;
    {
        const bool branch_taken_0x1005f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1005F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005F4u;
            // 0x1005f8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005f4) {
            ctx->pc = 0x10060Cu;
            goto label_10060c;
        }
    }
    ctx->pc = 0x1005FCu;
    // 0x1005fc: 0x26431300  addiu       $v1, $s2, 0x1300
    ctx->pc = 0x1005fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
    // 0x100600: 0x8462000c  lh          $v0, 0xC($v1)
    ctx->pc = 0x100600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x100604: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x100604u;
    {
        const bool branch_taken_0x100604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x100604) {
            ctx->pc = 0x100608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100604u;
            // 0x100608: 0xa460000c  sh          $zero, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10060Cu;
            goto label_10060c;
        }
    }
    ctx->pc = 0x10060Cu;
label_10060c:
    // 0x10060c: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x10060cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8192u)));
    // 0x100610: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100610u;
    {
        const bool branch_taken_0x100610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100610u;
            // 0x100614: 0x30820040  andi        $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100610) {
            ctx->pc = 0x10062Cu;
            goto label_10062c;
        }
    }
    ctx->pc = 0x100618u;
    // 0x100618: 0x26431300  addiu       $v1, $s2, 0x1300
    ctx->pc = 0x100618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
    // 0x10061c: 0x8462000e  lh          $v0, 0xE($v1)
    ctx->pc = 0x10061cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x100620: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x100620u;
    {
        const bool branch_taken_0x100620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x100620) {
            ctx->pc = 0x100624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100620u;
            // 0x100624: 0xa460000e  sh          $zero, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100628u;
            goto label_100628;
        }
    }
    ctx->pc = 0x100628u;
label_100628:
    // 0x100628: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x100628u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)64u)));
label_10062c:
    // 0x10062c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10062Cu;
    {
        const bool branch_taken_0x10062c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10062Cu;
            // 0x100630: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)32768u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10062c) {
            ctx->pc = 0x100648u;
            goto label_100648;
        }
    }
    ctx->pc = 0x100634u;
    // 0x100634: 0x26431300  addiu       $v1, $s2, 0x1300
    ctx->pc = 0x100634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
    // 0x100638: 0x84620012  lh          $v0, 0x12($v1)
    ctx->pc = 0x100638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x10063c: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x10063Cu;
    {
        const bool branch_taken_0x10063c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x10063c) {
            ctx->pc = 0x100640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10063Cu;
            // 0x100640: 0xa4600012  sh          $zero, 0x12($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100644u;
            goto label_100644;
        }
    }
    ctx->pc = 0x100644u;
label_100644:
    // 0x100644: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x100644u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)32768u)));
label_100648:
    // 0x100648: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x100648u;
    {
        const bool branch_taken_0x100648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10064Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100648u;
            // 0x10064c: 0x26501300  addiu       $s0, $s2, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100648) {
            ctx->pc = 0x10067Cu;
            goto label_10067c;
        }
    }
    ctx->pc = 0x100650u;
    // 0x100650: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x100650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x100654: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x100654u;
    {
        const bool branch_taken_0x100654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100654u;
            // 0x100658: 0x30a22000  andi        $v0, $a1, 0x2000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8192u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100654) {
            ctx->pc = 0x100680u;
            goto label_100680;
        }
    }
    ctx->pc = 0x10065Cu;
    // 0x10065c: 0x87828110  lh          $v0, -0x7EF0($gp)
    ctx->pc = 0x10065cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x100660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100660u;
    {
        const bool branch_taken_0x100660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100660u;
            // 0x100664: 0x30a22000  andi        $v0, $a1, 0x2000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8192u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100660) {
            ctx->pc = 0x100680u;
            goto label_100680;
        }
    }
    ctx->pc = 0x100668u;
    // 0x100668: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x100668u;
    SET_GPR_U32(ctx, 31, 0x100670u);
    ctx->pc = 0x10066Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100668u;
            // 0x10066c: 0x27c45bc8  addiu       $a0, $fp, 0x5BC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 23496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100670u; }
        if (ctx->pc != 0x100670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100670u; }
        if (ctx->pc != 0x100670u) { return; }
    }
    ctx->pc = 0x100670u;
    // 0x100670: 0xa613000c  sh          $s3, 0xC($s0)
    ctx->pc = 0x100670u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x100674: 0xa7808110  sh          $zero, -0x7EF0($gp)
    ctx->pc = 0x100674u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934800), (uint16_t)GPR_U32(ctx, 0));
    // 0x100678: 0x97858112  lhu         $a1, -0x7EEE($gp)
    ctx->pc = 0x100678u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
label_10067c:
    // 0x10067c: 0x30a22000  andi        $v0, $a1, 0x2000
    ctx->pc = 0x10067cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8192u)));
label_100680:
    // 0x100680: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x100680u;
    {
        const bool branch_taken_0x100680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100680u;
            // 0x100684: 0x26511300  addiu       $s1, $s2, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100680) {
            ctx->pc = 0x1006B8u;
            goto label_1006b8;
        }
    }
    ctx->pc = 0x100688u;
    // 0x100688: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x100688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x10068c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10068Cu;
    {
        const bool branch_taken_0x10068c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10068Cu;
            // 0x100690: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10068c) {
            ctx->pc = 0x1006BCu;
            goto label_1006bc;
        }
    }
    ctx->pc = 0x100694u;
    // 0x100694: 0x87828110  lh          $v0, -0x7EF0($gp)
    ctx->pc = 0x100694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x100698: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x100698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10069c: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10069Cu;
    {
        const bool branch_taken_0x10069c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1006A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10069Cu;
            // 0x1006a0: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10069c) {
            ctx->pc = 0x1006BCu;
            goto label_1006bc;
        }
    }
    ctx->pc = 0x1006A4u;
    // 0x1006a4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1006A4u;
    SET_GPR_U32(ctx, 31, 0x1006ACu);
    ctx->pc = 0x1006A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1006A4u;
            // 0x1006a8: 0x26e45bd0  addiu       $a0, $s7, 0x5BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 23504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006ACu; }
        if (ctx->pc != 0x1006ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006ACu; }
        if (ctx->pc != 0x1006ACu) { return; }
    }
    ctx->pc = 0x1006ACu;
    // 0x1006ac: 0xa630000e  sh          $s0, 0xE($s1)
    ctx->pc = 0x1006acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 16));
    // 0x1006b0: 0xa7908110  sh          $s0, -0x7EF0($gp)
    ctx->pc = 0x1006b0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934800), (uint16_t)GPR_U32(ctx, 16));
    // 0x1006b4: 0x97858112  lhu         $a1, -0x7EEE($gp)
    ctx->pc = 0x1006b4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
label_1006b8:
    // 0x1006b8: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x1006b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)64u)));
label_1006bc:
    // 0x1006bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1006BCu;
    {
        const bool branch_taken_0x1006bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1006C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1006BCu;
            // 0x1006c0: 0x26501300  addiu       $s0, $s2, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006bc) {
            ctx->pc = 0x1006DCu;
            goto label_1006dc;
        }
    }
    ctx->pc = 0x1006C4u;
    // 0x1006c4: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x1006c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1006c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1006C8u;
    {
        const bool branch_taken_0x1006c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1006CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1006C8u;
            // 0x1006cc: 0x26c45bd8  addiu       $a0, $s6, 0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 23512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006c8) {
            ctx->pc = 0x1006DCu;
            goto label_1006dc;
        }
    }
    ctx->pc = 0x1006D0u;
    // 0x1006d0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1006D0u;
    SET_GPR_U32(ctx, 31, 0x1006D8u);
    ctx->pc = 0x1006D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1006D0u;
            // 0x1006d4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006D8u; }
        if (ctx->pc != 0x1006D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006D8u; }
        if (ctx->pc != 0x1006D8u) { return; }
    }
    ctx->pc = 0x1006D8u;
    // 0x1006d8: 0xa6140012  sh          $s4, 0x12($s0)
    ctx->pc = 0x1006d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 20));
label_1006dc:
    // 0x1006dc: 0x1280ffa6  beqz        $s4, . + 4 + (-0x5A << 2)
    ctx->pc = 0x1006DCu;
    {
        const bool branch_taken_0x1006dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1006E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1006DCu;
            // 0x1006e0: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006dc) {
            ctx->pc = 0x100578u;
            goto label_100578;
        }
    }
    ctx->pc = 0x1006E4u;
    // 0x1006e4: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1006e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1006e8: 0xaf82814c  sw          $v0, -0x7EB4($gp)
    ctx->pc = 0x1006e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
    // 0x1006ec: 0x0  nop
    ctx->pc = 0x1006ecu;
    // NOP
label_1006f0:
    // 0x1006f0: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x1006F0u;
    SET_GPR_U32(ctx, 31, 0x1006F8u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006F8u; }
        if (ctx->pc != 0x1006F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006F8u; }
        if (ctx->pc != 0x1006F8u) { return; }
    }
    ctx->pc = 0x1006F8u;
    // 0x1006f8: 0xc041e22  jal         func_107888
    ctx->pc = 0x1006F8u;
    SET_GPR_U32(ctx, 31, 0x100700u);
    ctx->pc = 0x107888u;
    if (runtime->hasFunction(0x107888u)) {
        auto targetFn = runtime->lookupFunction(0x107888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100700u; }
        if (ctx->pc != 0x100700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        tryAnimate_0x107888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100700u; }
        if (ctx->pc != 0x100700u) { return; }
    }
    ctx->pc = 0x100700u;
    // 0x100700: 0xc041eaa  jal         func_107AA8
    ctx->pc = 0x100700u;
    SET_GPR_U32(ctx, 31, 0x100708u);
    ctx->pc = 0x107AA8u;
    if (runtime->hasFunction(0x107AA8u)) {
        auto targetFn = runtime->lookupFunction(0x107AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100708u; }
        if (ctx->pc != 0x100708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        tryDisplay_0x107aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100708u; }
        if (ctx->pc != 0x100708u) { return; }
    }
    ctx->pc = 0x100708u;
    // 0x100708: 0xc04238e  jal         func_108E38
    ctx->pc = 0x100708u;
    SET_GPR_U32(ctx, 31, 0x100710u);
    ctx->pc = 0x10070Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100708u;
            // 0x10070c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108E38u;
    if (runtime->hasFunction(0x108E38u)) {
        auto targetFn = runtime->lookupFunction(0x108E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100710u; }
        if (ctx->pc != 0x100710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100710u; }
        if (ctx->pc != 0x100710u) { return; }
    }
    ctx->pc = 0x100710u;
    // 0x100710: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100710u;
    SET_GPR_U32(ctx, 31, 0x100718u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100718u; }
        if (ctx->pc != 0x100718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100718u; }
        if (ctx->pc != 0x100718u) { return; }
    }
    ctx->pc = 0x100718u;
    // 0x100718: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x100718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x10071c: 0x1c40fff4  bgtz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10071Cu;
    {
        const bool branch_taken_0x10071c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x100720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10071Cu;
            // 0x100720: 0x87828110  lh          $v0, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10071c) {
            ctx->pc = 0x1006F0u;
            goto label_1006f0;
        }
    }
    ctx->pc = 0x100724u;
    // 0x100724: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100724u;
    {
        const bool branch_taken_0x100724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100724u;
            // 0x100728: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100724) {
            ctx->pc = 0x100744u;
            goto label_100744;
        }
    }
    ctx->pc = 0x10072Cu;
    // 0x10072c: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x10072cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x100730: 0xaf8080a4  sw          $zero, -0x7F5C($gp)
    ctx->pc = 0x100730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934692), GPR_U32(ctx, 0));
    // 0x100734: 0xa460dfc0  sh          $zero, -0x2040($v1)
    ctx->pc = 0x100734u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294959040), (uint16_t)GPR_U32(ctx, 0));
    // 0x100738: 0xaf80814c  sw          $zero, -0x7EB4($gp)
    ctx->pc = 0x100738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
    // 0x10073c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10073Cu;
    {
        const bool branch_taken_0x10073c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10073Cu;
            // 0x100740: 0xaf8080b4  sw          $zero, -0x7F4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934708), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10073c) {
            ctx->pc = 0x10074Cu;
            goto label_10074c;
        }
    }
    ctx->pc = 0x100744u;
label_100744:
    // 0x100744: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x100744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x100748: 0xa462dfc0  sh          $v0, -0x2040($v1)
    ctx->pc = 0x100748u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294959040), (uint16_t)GPR_U32(ctx, 2));
label_10074c:
    // 0x10074c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10074cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x100750: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x100750u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x100754: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x100754u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x100758: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x100758u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10075c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10075cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100760: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x100760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100764: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x100764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x100768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10076c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10076cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100774: 0x3e00008  jr          $ra
    ctx->pc = 0x100774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100774u;
            // 0x100778: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100520u: goto label_100520;
            case 0x100578u: goto label_100578;
            case 0x1005B8u: goto label_1005b8;
            case 0x1005BCu: goto label_1005bc;
            case 0x1005CCu: goto label_1005cc;
            case 0x10060Cu: goto label_10060c;
            case 0x100628u: goto label_100628;
            case 0x10062Cu: goto label_10062c;
            case 0x100644u: goto label_100644;
            case 0x100648u: goto label_100648;
            case 0x10067Cu: goto label_10067c;
            case 0x100680u: goto label_100680;
            case 0x1006B8u: goto label_1006b8;
            case 0x1006BCu: goto label_1006bc;
            case 0x1006DCu: goto label_1006dc;
            case 0x1006F0u: goto label_1006f0;
            case 0x100744u: goto label_100744;
            case 0x10074Cu: goto label_10074c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10077Cu;
}
