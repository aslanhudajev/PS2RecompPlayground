#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsAdmirationPressPad
// Address: 0x1544f0 - 0x154ab4
void wrsAdmirationPressPad_0x1544f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsAdmirationPressPad_0x1544f0");
#endif

    ctx->pc = 0x1544f0u;

    // 0x1544f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1544f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1544f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1544f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1544f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1544f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1544fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1544fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x154500: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x154500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154508: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x154508u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x15450c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154510: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x154510u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x154514: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154518: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x154518u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x15451c: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x15451cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x154520: 0x26732a00  addiu       $s3, $s3, 0x2A00
    ctx->pc = 0x154520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10752));
    // 0x154524: 0x26522608  addiu       $s2, $s2, 0x2608
    ctx->pc = 0x154524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9736));
    // 0x154528: 0x263127f0  addiu       $s1, $s1, 0x27F0
    ctx->pc = 0x154528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10224));
    // 0x15452c: 0x26102a10  addiu       $s0, $s0, 0x2A10
    ctx->pc = 0x15452cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10768));
label_154530:
    // 0x154530: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x154530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154534: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x154534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154538: 0x1464014f  bne         $v1, $a0, . + 4 + (0x14F << 2)
    ctx->pc = 0x154538u;
    {
        const bool branch_taken_0x154538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x154538) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154540u;
    // 0x154540: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x154540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x154544: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x154544u;
    {
        const bool branch_taken_0x154544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x154544) {
            ctx->pc = 0x154558u;
            goto label_154558;
        }
    }
    ctx->pc = 0x15454Cu;
    // 0x15454c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x15454Cu;
    {
        const bool branch_taken_0x15454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15454c) {
            ctx->pc = 0x154960u;
            goto label_154960;
        }
    }
    ctx->pc = 0x154554u;
    // 0x154554: 0x0  nop
    ctx->pc = 0x154554u;
    // NOP
label_154558:
    // 0x154558: 0x16800081  bnez        $s4, . + 4 + (0x81 << 2)
    ctx->pc = 0x154558u;
    {
        const bool branch_taken_0x154558 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x154558) {
            ctx->pc = 0x154760u;
            goto label_154760;
        }
    }
    ctx->pc = 0x154560u;
    // 0x154560: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154568: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154568u;
    SET_GPR_U32(ctx, 31, 0x154570u);
    ctx->pc = 0x15456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154568u;
            // 0x15456c: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154570u; }
        if (ctx->pc != 0x154570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154570u; }
        if (ctx->pc != 0x154570u) { return; }
    }
    ctx->pc = 0x154570u;
    // 0x154570: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154574: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154578: 0xac222258  sw          $v0, 0x2258($at)
    ctx->pc = 0x154578u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8792), GPR_U32(ctx, 2));
    // 0x15457c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15457cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154580: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154580u;
    SET_GPR_U32(ctx, 31, 0x154588u);
    ctx->pc = 0x154584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154580u;
            // 0x154584: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154588u; }
        if (ctx->pc != 0x154588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154588u; }
        if (ctx->pc != 0x154588u) { return; }
    }
    ctx->pc = 0x154588u;
    // 0x154588: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15458c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15458cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154590: 0xac222250  sw          $v0, 0x2250($at)
    ctx->pc = 0x154590u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8784), GPR_U32(ctx, 2));
    // 0x154594: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154598: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154598u;
    SET_GPR_U32(ctx, 31, 0x1545A0u);
    ctx->pc = 0x15459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154598u;
            // 0x15459c: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545A0u; }
        if (ctx->pc != 0x1545A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545A0u; }
        if (ctx->pc != 0x1545A0u) { return; }
    }
    ctx->pc = 0x1545A0u;
    // 0x1545a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1545a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1545a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1545a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545a8: 0xac222248  sw          $v0, 0x2248($at)
    ctx->pc = 0x1545a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8776), GPR_U32(ctx, 2));
    // 0x1545ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1545acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1545b0: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x1545B0u;
    SET_GPR_U32(ctx, 31, 0x1545B8u);
    ctx->pc = 0x1545B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1545B0u;
            // 0x1545b4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545B8u; }
        if (ctx->pc != 0x1545B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545B8u; }
        if (ctx->pc != 0x1545B8u) { return; }
    }
    ctx->pc = 0x1545B8u;
    // 0x1545b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1545b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1545bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1545bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545c0: 0xac222240  sw          $v0, 0x2240($at)
    ctx->pc = 0x1545c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8768), GPR_U32(ctx, 2));
    // 0x1545c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1545c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1545c8: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x1545C8u;
    SET_GPR_U32(ctx, 31, 0x1545D0u);
    ctx->pc = 0x1545CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1545C8u;
            // 0x1545cc: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545D0u; }
        if (ctx->pc != 0x1545D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545D0u; }
        if (ctx->pc != 0x1545D0u) { return; }
    }
    ctx->pc = 0x1545D0u;
    // 0x1545d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1545d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1545d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1545d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545d8: 0xac222238  sw          $v0, 0x2238($at)
    ctx->pc = 0x1545d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8760), GPR_U32(ctx, 2));
    // 0x1545dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1545e0: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x1545E0u;
    SET_GPR_U32(ctx, 31, 0x1545E8u);
    ctx->pc = 0x1545E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1545E0u;
            // 0x1545e4: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545E8u; }
        if (ctx->pc != 0x1545E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545E8u; }
        if (ctx->pc != 0x1545E8u) { return; }
    }
    ctx->pc = 0x1545E8u;
    // 0x1545e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1545e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1545ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1545ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545f0: 0xac222230  sw          $v0, 0x2230($at)
    ctx->pc = 0x1545f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8752), GPR_U32(ctx, 2));
    // 0x1545f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1545f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1545f8: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x1545F8u;
    SET_GPR_U32(ctx, 31, 0x154600u);
    ctx->pc = 0x1545FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1545F8u;
            // 0x1545fc: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154600u; }
        if (ctx->pc != 0x154600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154600u; }
        if (ctx->pc != 0x154600u) { return; }
    }
    ctx->pc = 0x154600u;
    // 0x154600: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154604: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154608: 0xac222228  sw          $v0, 0x2228($at)
    ctx->pc = 0x154608u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8744), GPR_U32(ctx, 2));
    // 0x15460c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15460cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154610: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154610u;
    SET_GPR_U32(ctx, 31, 0x154618u);
    ctx->pc = 0x154614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154610u;
            // 0x154614: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154618u; }
        if (ctx->pc != 0x154618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154618u; }
        if (ctx->pc != 0x154618u) { return; }
    }
    ctx->pc = 0x154618u;
    // 0x154618: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15461c: 0xac222220  sw          $v0, 0x2220($at)
    ctx->pc = 0x15461cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8736), GPR_U32(ctx, 2));
    // 0x154620: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x154620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x154624: 0x8c231624  lw          $v1, 0x1624($at)
    ctx->pc = 0x154624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5668)));
    // 0x154628: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x154628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x15462c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x15462cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x154630: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x154630u;
    {
        const bool branch_taken_0x154630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154630u;
            // 0x154634: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154630) {
            ctx->pc = 0x154708u;
            goto label_154708;
        }
    }
    ctx->pc = 0x154638u;
    // 0x154638: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x154638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15463c: 0x24840c60  addiu       $a0, $a0, 0xC60
    ctx->pc = 0x15463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3168));
    // 0x154640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154644: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x154644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154648: 0x600008  jr          $v1
    ctx->pc = 0x154648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154650u: goto label_154650;
            case 0x154668u: goto label_154668;
            case 0x154680u: goto label_154680;
            case 0x154698u: goto label_154698;
            case 0x1546B0u: goto label_1546b0;
            case 0x1546C8u: goto label_1546c8;
            case 0x1546E0u: goto label_1546e0;
            case 0x1546F8u: goto label_1546f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154650u;
label_154650:
    // 0x154650: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154654: 0x8c232258  lw          $v1, 0x2258($at)
    ctx->pc = 0x154654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8792)));
    // 0x154658: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15465c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15465Cu;
    {
        const bool branch_taken_0x15465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15465Cu;
            // 0x154660: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15465c) {
            ctx->pc = 0x154708u;
            goto label_154708;
        }
    }
    ctx->pc = 0x154664u;
    // 0x154664: 0x0  nop
    ctx->pc = 0x154664u;
    // NOP
label_154668:
    // 0x154668: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15466c: 0x8c232250  lw          $v1, 0x2250($at)
    ctx->pc = 0x15466cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8784)));
    // 0x154670: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154674: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x154674u;
    {
        const bool branch_taken_0x154674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154674u;
            // 0x154678: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154674) {
            ctx->pc = 0x154708u;
            goto label_154708;
        }
    }
    ctx->pc = 0x15467Cu;
    // 0x15467c: 0x0  nop
    ctx->pc = 0x15467cu;
    // NOP
label_154680:
    // 0x154680: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154684: 0x8c232240  lw          $v1, 0x2240($at)
    ctx->pc = 0x154684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8768)));
    // 0x154688: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15468c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15468Cu;
    {
        const bool branch_taken_0x15468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15468Cu;
            // 0x154690: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15468c) {
            ctx->pc = 0x154708u;
            goto label_154708;
        }
    }
    ctx->pc = 0x154694u;
    // 0x154694: 0x0  nop
    ctx->pc = 0x154694u;
    // NOP
label_154698:
    // 0x154698: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15469c: 0x8c232248  lw          $v1, 0x2248($at)
    ctx->pc = 0x15469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8776)));
    // 0x1546a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1546a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1546a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1546A4u;
    {
        const bool branch_taken_0x1546a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1546A4u;
            // 0x1546a8: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546a4) {
            ctx->pc = 0x154708u;
            goto label_154708;
        }
    }
    ctx->pc = 0x1546ACu;
    // 0x1546ac: 0x0  nop
    ctx->pc = 0x1546acu;
    // NOP
label_1546b0:
    // 0x1546b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1546b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1546b4: 0x8c232238  lw          $v1, 0x2238($at)
    ctx->pc = 0x1546b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8760)));
    // 0x1546b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1546b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1546bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1546BCu;
    {
        const bool branch_taken_0x1546bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1546BCu;
            // 0x1546c0: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546bc) {
            ctx->pc = 0x154708u;
            goto label_154708;
        }
    }
    ctx->pc = 0x1546C4u;
    // 0x1546c4: 0x0  nop
    ctx->pc = 0x1546c4u;
    // NOP
label_1546c8:
    // 0x1546c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1546c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1546cc: 0x8c232230  lw          $v1, 0x2230($at)
    ctx->pc = 0x1546ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8752)));
    // 0x1546d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1546d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1546d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1546D4u;
    {
        const bool branch_taken_0x1546d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1546D4u;
            // 0x1546d8: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546d4) {
            ctx->pc = 0x154708u;
            goto label_154708;
        }
    }
    ctx->pc = 0x1546DCu;
    // 0x1546dc: 0x0  nop
    ctx->pc = 0x1546dcu;
    // NOP
label_1546e0:
    // 0x1546e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1546e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1546e4: 0x8c232228  lw          $v1, 0x2228($at)
    ctx->pc = 0x1546e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8744)));
    // 0x1546e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1546e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1546ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1546ECu;
    {
        const bool branch_taken_0x1546ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1546ECu;
            // 0x1546f0: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546ec) {
            ctx->pc = 0x154708u;
            goto label_154708;
        }
    }
    ctx->pc = 0x1546F4u;
    // 0x1546f4: 0x0  nop
    ctx->pc = 0x1546f4u;
    // NOP
label_1546f8:
    // 0x1546f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1546f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1546fc: 0x8c232220  lw          $v1, 0x2220($at)
    ctx->pc = 0x1546fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8736)));
    // 0x154700: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154704: 0xac2321d8  sw          $v1, 0x21D8($at)
    ctx->pc = 0x154704u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
label_154708:
    // 0x154708: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15470c: 0x8c2321b0  lw          $v1, 0x21B0($at)
    ctx->pc = 0x15470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8624)));
    // 0x154710: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154710u;
    {
        const bool branch_taken_0x154710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154710u;
            // 0x154714: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154710) {
            ctx->pc = 0x154728u;
            goto label_154728;
        }
    }
    ctx->pc = 0x154718u;
    // 0x154718: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15471c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x15471Cu;
    {
        const bool branch_taken_0x15471c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15471Cu;
            // 0x154720: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15471c) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154724u;
    // 0x154724: 0x0  nop
    ctx->pc = 0x154724u;
    // NOP
label_154728:
    // 0x154728: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15472c: 0x8c2321b8  lw          $v1, 0x21B8($at)
    ctx->pc = 0x15472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8632)));
    // 0x154730: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154730u;
    {
        const bool branch_taken_0x154730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154730u;
            // 0x154734: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154730) {
            ctx->pc = 0x154748u;
            goto label_154748;
        }
    }
    ctx->pc = 0x154738u;
    // 0x154738: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15473c: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x15473Cu;
    {
        const bool branch_taken_0x15473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15473Cu;
            // 0x154740: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15473c) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154744u;
    // 0x154744: 0x0  nop
    ctx->pc = 0x154744u;
    // NOP
label_154748:
    // 0x154748: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15474c: 0x8c2321d8  lw          $v1, 0x21D8($at)
    ctx->pc = 0x15474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8664)));
    // 0x154750: 0x146000c9  bnez        $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x154750u;
    {
        const bool branch_taken_0x154750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154750u;
            // 0x154754: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154750) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154758u;
    // 0x154758: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x154758u;
    {
        const bool branch_taken_0x154758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15475Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154758u;
            // 0x15475c: 0xac2021d8  sw          $zero, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154758) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154760u;
label_154760:
    // 0x154760: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154764: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154768: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154768u;
    SET_GPR_U32(ctx, 31, 0x154770u);
    ctx->pc = 0x15476Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154768u;
            // 0x15476c: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154770u; }
        if (ctx->pc != 0x154770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154770u; }
        if (ctx->pc != 0x154770u) { return; }
    }
    ctx->pc = 0x154770u;
    // 0x154770: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154778: 0xac222218  sw          $v0, 0x2218($at)
    ctx->pc = 0x154778u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8728), GPR_U32(ctx, 2));
    // 0x15477c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15477cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154780: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154780u;
    SET_GPR_U32(ctx, 31, 0x154788u);
    ctx->pc = 0x154784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154780u;
            // 0x154784: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154788u; }
        if (ctx->pc != 0x154788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154788u; }
        if (ctx->pc != 0x154788u) { return; }
    }
    ctx->pc = 0x154788u;
    // 0x154788: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15478c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15478cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154790: 0xac222210  sw          $v0, 0x2210($at)
    ctx->pc = 0x154790u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8720), GPR_U32(ctx, 2));
    // 0x154794: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154798: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154798u;
    SET_GPR_U32(ctx, 31, 0x1547A0u);
    ctx->pc = 0x15479Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154798u;
            // 0x15479c: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547A0u; }
        if (ctx->pc != 0x1547A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547A0u; }
        if (ctx->pc != 0x1547A0u) { return; }
    }
    ctx->pc = 0x1547A0u;
    // 0x1547a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1547a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1547a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1547a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547a8: 0xac222208  sw          $v0, 0x2208($at)
    ctx->pc = 0x1547a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8712), GPR_U32(ctx, 2));
    // 0x1547ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1547acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1547b0: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x1547B0u;
    SET_GPR_U32(ctx, 31, 0x1547B8u);
    ctx->pc = 0x1547B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1547B0u;
            // 0x1547b4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547B8u; }
        if (ctx->pc != 0x1547B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547B8u; }
        if (ctx->pc != 0x1547B8u) { return; }
    }
    ctx->pc = 0x1547B8u;
    // 0x1547b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1547b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1547bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1547bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547c0: 0xac222200  sw          $v0, 0x2200($at)
    ctx->pc = 0x1547c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8704), GPR_U32(ctx, 2));
    // 0x1547c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1547c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1547c8: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x1547C8u;
    SET_GPR_U32(ctx, 31, 0x1547D0u);
    ctx->pc = 0x1547CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1547C8u;
            // 0x1547cc: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547D0u; }
        if (ctx->pc != 0x1547D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547D0u; }
        if (ctx->pc != 0x1547D0u) { return; }
    }
    ctx->pc = 0x1547D0u;
    // 0x1547d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1547d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1547d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1547d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547d8: 0xac2221f8  sw          $v0, 0x21F8($at)
    ctx->pc = 0x1547d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8696), GPR_U32(ctx, 2));
    // 0x1547dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1547dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1547e0: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x1547E0u;
    SET_GPR_U32(ctx, 31, 0x1547E8u);
    ctx->pc = 0x1547E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1547E0u;
            // 0x1547e4: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547E8u; }
        if (ctx->pc != 0x1547E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547E8u; }
        if (ctx->pc != 0x1547E8u) { return; }
    }
    ctx->pc = 0x1547E8u;
    // 0x1547e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1547e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1547ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1547ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1547f0: 0xac2221f0  sw          $v0, 0x21F0($at)
    ctx->pc = 0x1547f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8688), GPR_U32(ctx, 2));
    // 0x1547f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1547f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1547f8: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x1547F8u;
    SET_GPR_U32(ctx, 31, 0x154800u);
    ctx->pc = 0x1547FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1547F8u;
            // 0x1547fc: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154800u; }
        if (ctx->pc != 0x154800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154800u; }
        if (ctx->pc != 0x154800u) { return; }
    }
    ctx->pc = 0x154800u;
    // 0x154800: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154804: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154808: 0xac2221e8  sw          $v0, 0x21E8($at)
    ctx->pc = 0x154808u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8680), GPR_U32(ctx, 2));
    // 0x15480c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15480cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154810: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154810u;
    SET_GPR_U32(ctx, 31, 0x154818u);
    ctx->pc = 0x154814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154810u;
            // 0x154814: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154818u; }
        if (ctx->pc != 0x154818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154818u; }
        if (ctx->pc != 0x154818u) { return; }
    }
    ctx->pc = 0x154818u;
    // 0x154818: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15481c: 0xac2221e0  sw          $v0, 0x21E0($at)
    ctx->pc = 0x15481cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8672), GPR_U32(ctx, 2));
    // 0x154820: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x154820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x154824: 0x8c231638  lw          $v1, 0x1638($at)
    ctx->pc = 0x154824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5688)));
    // 0x154828: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x154828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x15482c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x15482cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x154830: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x154830u;
    {
        const bool branch_taken_0x154830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154830u;
            // 0x154834: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154830) {
            ctx->pc = 0x154908u;
            goto label_154908;
        }
    }
    ctx->pc = 0x154838u;
    // 0x154838: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x154838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15483c: 0x24840c40  addiu       $a0, $a0, 0xC40
    ctx->pc = 0x15483cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3136));
    // 0x154840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154844: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x154844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154848: 0x600008  jr          $v1
    ctx->pc = 0x154848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154850u: goto label_154850;
            case 0x154868u: goto label_154868;
            case 0x154880u: goto label_154880;
            case 0x154898u: goto label_154898;
            case 0x1548B0u: goto label_1548b0;
            case 0x1548C8u: goto label_1548c8;
            case 0x1548E0u: goto label_1548e0;
            case 0x1548F8u: goto label_1548f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154850u;
label_154850:
    // 0x154850: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154854: 0x8c232218  lw          $v1, 0x2218($at)
    ctx->pc = 0x154854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8728)));
    // 0x154858: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15485c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15485Cu;
    {
        const bool branch_taken_0x15485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15485Cu;
            // 0x154860: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15485c) {
            ctx->pc = 0x154908u;
            goto label_154908;
        }
    }
    ctx->pc = 0x154864u;
    // 0x154864: 0x0  nop
    ctx->pc = 0x154864u;
    // NOP
label_154868:
    // 0x154868: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15486c: 0x8c232210  lw          $v1, 0x2210($at)
    ctx->pc = 0x15486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8720)));
    // 0x154870: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154874: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x154874u;
    {
        const bool branch_taken_0x154874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154874u;
            // 0x154878: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154874) {
            ctx->pc = 0x154908u;
            goto label_154908;
        }
    }
    ctx->pc = 0x15487Cu;
    // 0x15487c: 0x0  nop
    ctx->pc = 0x15487cu;
    // NOP
label_154880:
    // 0x154880: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154884: 0x8c232200  lw          $v1, 0x2200($at)
    ctx->pc = 0x154884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8704)));
    // 0x154888: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15488c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15488Cu;
    {
        const bool branch_taken_0x15488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15488Cu;
            // 0x154890: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15488c) {
            ctx->pc = 0x154908u;
            goto label_154908;
        }
    }
    ctx->pc = 0x154894u;
    // 0x154894: 0x0  nop
    ctx->pc = 0x154894u;
    // NOP
label_154898:
    // 0x154898: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15489c: 0x8c232208  lw          $v1, 0x2208($at)
    ctx->pc = 0x15489cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8712)));
    // 0x1548a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1548a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1548a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1548A4u;
    {
        const bool branch_taken_0x1548a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1548A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1548A4u;
            // 0x1548a8: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548a4) {
            ctx->pc = 0x154908u;
            goto label_154908;
        }
    }
    ctx->pc = 0x1548ACu;
    // 0x1548ac: 0x0  nop
    ctx->pc = 0x1548acu;
    // NOP
label_1548b0:
    // 0x1548b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1548b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1548b4: 0x8c2321f8  lw          $v1, 0x21F8($at)
    ctx->pc = 0x1548b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8696)));
    // 0x1548b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1548b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1548bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1548BCu;
    {
        const bool branch_taken_0x1548bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1548C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1548BCu;
            // 0x1548c0: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548bc) {
            ctx->pc = 0x154908u;
            goto label_154908;
        }
    }
    ctx->pc = 0x1548C4u;
    // 0x1548c4: 0x0  nop
    ctx->pc = 0x1548c4u;
    // NOP
label_1548c8:
    // 0x1548c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1548c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1548cc: 0x8c2321f0  lw          $v1, 0x21F0($at)
    ctx->pc = 0x1548ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8688)));
    // 0x1548d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1548d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1548d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1548D4u;
    {
        const bool branch_taken_0x1548d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1548D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1548D4u;
            // 0x1548d8: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548d4) {
            ctx->pc = 0x154908u;
            goto label_154908;
        }
    }
    ctx->pc = 0x1548DCu;
    // 0x1548dc: 0x0  nop
    ctx->pc = 0x1548dcu;
    // NOP
label_1548e0:
    // 0x1548e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1548e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1548e4: 0x8c2321e8  lw          $v1, 0x21E8($at)
    ctx->pc = 0x1548e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8680)));
    // 0x1548e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1548e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1548ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1548ECu;
    {
        const bool branch_taken_0x1548ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1548F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1548ECu;
            // 0x1548f0: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548ec) {
            ctx->pc = 0x154908u;
            goto label_154908;
        }
    }
    ctx->pc = 0x1548F4u;
    // 0x1548f4: 0x0  nop
    ctx->pc = 0x1548f4u;
    // NOP
label_1548f8:
    // 0x1548f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1548f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1548fc: 0x8c2321e0  lw          $v1, 0x21E0($at)
    ctx->pc = 0x1548fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8672)));
    // 0x154900: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154904: 0xac2321a8  sw          $v1, 0x21A8($at)
    ctx->pc = 0x154904u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
label_154908:
    // 0x154908: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15490c: 0x8c232180  lw          $v1, 0x2180($at)
    ctx->pc = 0x15490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8576)));
    // 0x154910: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154910u;
    {
        const bool branch_taken_0x154910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154910u;
            // 0x154914: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154910) {
            ctx->pc = 0x154928u;
            goto label_154928;
        }
    }
    ctx->pc = 0x154918u;
    // 0x154918: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15491c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x15491Cu;
    {
        const bool branch_taken_0x15491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15491Cu;
            // 0x154920: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15491c) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154924u;
    // 0x154924: 0x0  nop
    ctx->pc = 0x154924u;
    // NOP
label_154928:
    // 0x154928: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15492c: 0x8c232188  lw          $v1, 0x2188($at)
    ctx->pc = 0x15492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8584)));
    // 0x154930: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154930u;
    {
        const bool branch_taken_0x154930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154930u;
            // 0x154934: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154930) {
            ctx->pc = 0x154948u;
            goto label_154948;
        }
    }
    ctx->pc = 0x154938u;
    // 0x154938: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15493c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x15493Cu;
    {
        const bool branch_taken_0x15493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15493Cu;
            // 0x154940: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15493c) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154944u;
    // 0x154944: 0x0  nop
    ctx->pc = 0x154944u;
    // NOP
label_154948:
    // 0x154948: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15494c: 0x8c2321a8  lw          $v1, 0x21A8($at)
    ctx->pc = 0x15494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8616)));
    // 0x154950: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x154950u;
    {
        const bool branch_taken_0x154950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154950u;
            // 0x154954: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154950) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154958u;
    // 0x154958: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x154958u;
    {
        const bool branch_taken_0x154958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15495Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154958u;
            // 0x15495c: 0xac2021a8  sw          $zero, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154958) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154960u;
label_154960:
    // 0x154960: 0x16800023  bnez        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x154960u;
    {
        const bool branch_taken_0x154960 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x154964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154960u;
            // 0x154964: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154960) {
            ctx->pc = 0x1549F0u;
            goto label_1549f0;
        }
    }
    ctx->pc = 0x154968u;
    // 0x154968: 0xac202220  sw          $zero, 0x2220($at)
    ctx->pc = 0x154968u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8736), GPR_U32(ctx, 0));
    // 0x15496c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15496cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154970: 0xac202228  sw          $zero, 0x2228($at)
    ctx->pc = 0x154970u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8744), GPR_U32(ctx, 0));
    // 0x154974: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154978: 0xac202230  sw          $zero, 0x2230($at)
    ctx->pc = 0x154978u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8752), GPR_U32(ctx, 0));
    // 0x15497c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15497cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154980: 0xac202238  sw          $zero, 0x2238($at)
    ctx->pc = 0x154980u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8760), GPR_U32(ctx, 0));
    // 0x154984: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154988: 0xac202240  sw          $zero, 0x2240($at)
    ctx->pc = 0x154988u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8768), GPR_U32(ctx, 0));
    // 0x15498c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15498cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154990: 0xac202248  sw          $zero, 0x2248($at)
    ctx->pc = 0x154990u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8776), GPR_U32(ctx, 0));
    // 0x154994: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154998: 0xac202250  sw          $zero, 0x2250($at)
    ctx->pc = 0x154998u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8784), GPR_U32(ctx, 0));
    // 0x15499c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15499cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1549a0: 0xac202258  sw          $zero, 0x2258($at)
    ctx->pc = 0x1549a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8792), GPR_U32(ctx, 0));
    // 0x1549a4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1549a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1549a8: 0x8c2321b0  lw          $v1, 0x21B0($at)
    ctx->pc = 0x1549a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8624)));
    // 0x1549ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1549ACu;
    {
        const bool branch_taken_0x1549ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1549ACu;
            // 0x1549b0: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549ac) {
            ctx->pc = 0x1549C0u;
            goto label_1549c0;
        }
    }
    ctx->pc = 0x1549B4u;
    // 0x1549b4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1549b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1549b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1549B8u;
    {
        const bool branch_taken_0x1549b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1549B8u;
            // 0x1549bc: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549b8) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x1549C0u;
label_1549c0:
    // 0x1549c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1549c4: 0x8c2321b8  lw          $v1, 0x21B8($at)
    ctx->pc = 0x1549c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8632)));
    // 0x1549c8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1549C8u;
    {
        const bool branch_taken_0x1549c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1549C8u;
            // 0x1549cc: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549c8) {
            ctx->pc = 0x1549E0u;
            goto label_1549e0;
        }
    }
    ctx->pc = 0x1549D0u;
    // 0x1549d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1549d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1549d4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1549D4u;
    {
        const bool branch_taken_0x1549d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1549D4u;
            // 0x1549d8: 0xac2321d8  sw          $v1, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549d4) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x1549DCu;
    // 0x1549dc: 0x0  nop
    ctx->pc = 0x1549dcu;
    // NOP
label_1549e0:
    // 0x1549e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1549e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1549e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1549E4u;
    {
        const bool branch_taken_0x1549e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1549E4u;
            // 0x1549e8: 0xac2021d8  sw          $zero, 0x21D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549e4) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x1549ECu;
    // 0x1549ec: 0x0  nop
    ctx->pc = 0x1549ecu;
    // NOP
label_1549f0:
    // 0x1549f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1549f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1549f4: 0xac2021e0  sw          $zero, 0x21E0($at)
    ctx->pc = 0x1549f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8672), GPR_U32(ctx, 0));
    // 0x1549f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1549f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1549fc: 0xac2021e8  sw          $zero, 0x21E8($at)
    ctx->pc = 0x1549fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8680), GPR_U32(ctx, 0));
    // 0x154a00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a04: 0xac2021f0  sw          $zero, 0x21F0($at)
    ctx->pc = 0x154a04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8688), GPR_U32(ctx, 0));
    // 0x154a08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a0c: 0xac2021f8  sw          $zero, 0x21F8($at)
    ctx->pc = 0x154a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8696), GPR_U32(ctx, 0));
    // 0x154a10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a14: 0xac202200  sw          $zero, 0x2200($at)
    ctx->pc = 0x154a14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8704), GPR_U32(ctx, 0));
    // 0x154a18: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a1c: 0xac202208  sw          $zero, 0x2208($at)
    ctx->pc = 0x154a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8712), GPR_U32(ctx, 0));
    // 0x154a20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a24: 0xac202210  sw          $zero, 0x2210($at)
    ctx->pc = 0x154a24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8720), GPR_U32(ctx, 0));
    // 0x154a28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a2c: 0xac202218  sw          $zero, 0x2218($at)
    ctx->pc = 0x154a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8728), GPR_U32(ctx, 0));
    // 0x154a30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a34: 0x8c232180  lw          $v1, 0x2180($at)
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8576)));
    // 0x154a38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154A38u;
    {
        const bool branch_taken_0x154a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154A38u;
            // 0x154a3c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a38) {
            ctx->pc = 0x154A50u;
            goto label_154a50;
        }
    }
    ctx->pc = 0x154A40u;
    // 0x154a40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x154A44u;
    {
        const bool branch_taken_0x154a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154A44u;
            // 0x154a48: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a44) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154A4Cu;
    // 0x154a4c: 0x0  nop
    ctx->pc = 0x154a4cu;
    // NOP
label_154a50:
    // 0x154a50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a54: 0x8c232188  lw          $v1, 0x2188($at)
    ctx->pc = 0x154a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8584)));
    // 0x154a58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154A58u;
    {
        const bool branch_taken_0x154a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154A58u;
            // 0x154a5c: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a58) {
            ctx->pc = 0x154A70u;
            goto label_154a70;
        }
    }
    ctx->pc = 0x154A60u;
    // 0x154a60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154A64u;
    {
        const bool branch_taken_0x154a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154A64u;
            // 0x154a68: 0xac2321a8  sw          $v1, 0x21A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a64) {
            ctx->pc = 0x154A78u;
            goto label_154a78;
        }
    }
    ctx->pc = 0x154A6Cu;
    // 0x154a6c: 0x0  nop
    ctx->pc = 0x154a6cu;
    // NOP
label_154a70:
    // 0x154a70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154a74: 0xac2021a8  sw          $zero, 0x21A8($at)
    ctx->pc = 0x154a74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8616), GPR_U32(ctx, 0));
label_154a78:
    // 0x154a78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x154a78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x154a7c: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x154a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x154a80: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x154a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x154a84: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x154a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x154a88: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x154a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x154a8c: 0x1460fea8  bnez        $v1, . + 4 + (-0x158 << 2)
    ctx->pc = 0x154A8Cu;
    {
        const bool branch_taken_0x154a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154A8Cu;
            // 0x154a90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a8c) {
            ctx->pc = 0x154530u;
            goto label_154530;
        }
    }
    ctx->pc = 0x154A94u;
    // 0x154a94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x154a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x154a98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154a98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154a9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154aa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154aac: 0x3e00008  jr          $ra
    ctx->pc = 0x154AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154AACu;
            // 0x154ab0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154530u: goto label_154530;
            case 0x154558u: goto label_154558;
            case 0x154650u: goto label_154650;
            case 0x154668u: goto label_154668;
            case 0x154680u: goto label_154680;
            case 0x154698u: goto label_154698;
            case 0x1546B0u: goto label_1546b0;
            case 0x1546C8u: goto label_1546c8;
            case 0x1546E0u: goto label_1546e0;
            case 0x1546F8u: goto label_1546f8;
            case 0x154708u: goto label_154708;
            case 0x154728u: goto label_154728;
            case 0x154748u: goto label_154748;
            case 0x154760u: goto label_154760;
            case 0x154850u: goto label_154850;
            case 0x154868u: goto label_154868;
            case 0x154880u: goto label_154880;
            case 0x154898u: goto label_154898;
            case 0x1548B0u: goto label_1548b0;
            case 0x1548C8u: goto label_1548c8;
            case 0x1548E0u: goto label_1548e0;
            case 0x1548F8u: goto label_1548f8;
            case 0x154908u: goto label_154908;
            case 0x154928u: goto label_154928;
            case 0x154948u: goto label_154948;
            case 0x154960u: goto label_154960;
            case 0x1549C0u: goto label_1549c0;
            case 0x1549E0u: goto label_1549e0;
            case 0x1549F0u: goto label_1549f0;
            case 0x154A50u: goto label_154a50;
            case 0x154A70u: goto label_154a70;
            case 0x154A78u: goto label_154a78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154AB4u;
}
