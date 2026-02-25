#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sequenceHeader
// Address: 0x12c1f0 - 0x12c314
void _sequenceHeader_0x12c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sequenceHeader_0x12c1f0");
#endif

    ctx->pc = 0x12c1f0u;

    // 0x12c1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c1f4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x12c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12c1f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c1fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c204: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C204u;
    SET_GPR_U32(ctx, 31, 0x12C20Cu);
    ctx->pc = 0x12C208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C204u;
            // 0x12c208: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C20Cu; }
        if (ctx->pc != 0x12C20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C20Cu; }
        if (ctx->pc != 0x12C20Cu) { return; }
    }
    ctx->pc = 0x12C20Cu;
    // 0x12c20c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c20cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c210: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x12c210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x12c214: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x12c214u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4095u)));
    // 0x12c218: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x12c218u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x12c21c: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x12c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x12c220: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x12c220u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x12c224: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C224u;
    {
        const bool branch_taken_0x12c224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C224u;
            // 0x12c228: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c224) {
            ctx->pc = 0x12C23Cu;
            goto label_12c23c;
        }
    }
    ctx->pc = 0x12C22Cu;
    // 0x12c22c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12c230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c234: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x12C234u;
    SET_GPR_U32(ctx, 31, 0x12C23Cu);
    ctx->pc = 0x12C238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C234u;
            // 0x12c238: 0x24a5f508  addiu       $a1, $a1, -0xAF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C23Cu; }
        if (ctx->pc != 0x12C23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C23Cu; }
        if (ctx->pc != 0x12C23Cu) { return; }
    }
    ctx->pc = 0x12C23Cu;
label_12c23c:
    // 0x12c23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c240: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C240u;
    SET_GPR_U32(ctx, 31, 0x12C248u);
    ctx->pc = 0x12C244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C240u;
            // 0x12c244: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C248u; }
        if (ctx->pc != 0x12C248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C248u; }
        if (ctx->pc != 0x12C248u) { return; }
    }
    ctx->pc = 0x12C248u;
    // 0x12c248: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c248u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c250: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x12c250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x12c254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c258: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x12c258u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x12c25c: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x12c25cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1023u)));
    // 0x12c260: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x12c260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x12c264: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C264u;
    SET_GPR_U32(ctx, 31, 0x12C26Cu);
    ctx->pc = 0x12C268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C264u;
            // 0x12c268: 0xae020138  sw          $v0, 0x138($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C26Cu; }
        if (ctx->pc != 0x12C26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C26Cu; }
        if (ctx->pc != 0x12C26Cu) { return; }
    }
    ctx->pc = 0x12C26Cu;
    // 0x12c26c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12C26Cu;
    {
        const bool branch_taken_0x12c26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C26Cu;
            // 0x12c270: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c26c) {
            ctx->pc = 0x12C298u;
            goto label_12c298;
        }
    }
    ctx->pc = 0x12C274u;
    // 0x12c274: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x12C274u;
    SET_GPR_U32(ctx, 31, 0x12C27Cu);
    ctx->pc = 0x12C278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C274u;
            // 0x12c278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C27Cu; }
        if (ctx->pc != 0x12C27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C27Cu; }
        if (ctx->pc != 0x12C27Cu) { return; }
    }
    ctx->pc = 0x12C27Cu;
    // 0x12c27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c280: 0xc049f68  jal         func_127DA0
    ctx->pc = 0x12C280u;
    SET_GPR_U32(ctx, 31, 0x12C288u);
    ctx->pc = 0x12C284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C280u;
            // 0x12c284: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DA0u;
    if (runtime->hasFunction(0x127DA0u)) {
        auto targetFn = runtime->lookupFunction(0x127DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C288u; }
        if (ctx->pc != 0x12C288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x127da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C288u; }
        if (ctx->pc != 0x12C288u) { return; }
    }
    ctx->pc = 0x12C288u;
    // 0x12c288: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x12C288u;
    SET_GPR_U32(ctx, 31, 0x12C290u);
    ctx->pc = 0x12C28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C288u;
            // 0x12c28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C290u; }
        if (ctx->pc != 0x12C290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C290u; }
        if (ctx->pc != 0x12C290u) { return; }
    }
    ctx->pc = 0x12C290u;
    // 0x12c290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12C290u;
    {
        const bool branch_taken_0x12c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C290u;
            // 0x12c294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c290) {
            ctx->pc = 0x12C2B0u;
            goto label_12c2b0;
        }
    }
    ctx->pc = 0x12C298u;
label_12c298:
    // 0x12c298: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x12c298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x12c29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2a0: 0x24c602c0  addiu       $a2, $a2, 0x2C0
    ctx->pc = 0x12c2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 704));
    // 0x12c2a4: 0xc04b1a8  jal         func_12C6A0
    ctx->pc = 0x12C2A4u;
    SET_GPR_U32(ctx, 31, 0x12C2ACu);
    ctx->pc = 0x12C2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2A4u;
            // 0x12c2a8: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C6A0u;
    if (runtime->hasFunction(0x12C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2ACu; }
        if (ctx->pc != 0x12C2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x12c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2ACu; }
        if (ctx->pc != 0x12C2ACu) { return; }
    }
    ctx->pc = 0x12C2ACu;
    // 0x12c2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12c2b0:
    // 0x12c2b0: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C2B0u;
    SET_GPR_U32(ctx, 31, 0x12C2B8u);
    ctx->pc = 0x12C2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2B0u;
            // 0x12c2b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2B8u; }
        if (ctx->pc != 0x12C2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2B8u; }
        if (ctx->pc != 0x12C2B8u) { return; }
    }
    ctx->pc = 0x12C2B8u;
    // 0x12c2b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12C2B8u;
    {
        const bool branch_taken_0x12c2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2B8u;
            // 0x12c2bc: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2b8) {
            ctx->pc = 0x12C2E4u;
            goto label_12c2e4;
        }
    }
    ctx->pc = 0x12C2C0u;
    // 0x12c2c0: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x12C2C0u;
    SET_GPR_U32(ctx, 31, 0x12C2C8u);
    ctx->pc = 0x12C2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2C0u;
            // 0x12c2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2C8u; }
        if (ctx->pc != 0x12C2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2C8u; }
        if (ctx->pc != 0x12C2C8u) { return; }
    }
    ctx->pc = 0x12C2C8u;
    // 0x12c2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2cc: 0xc049f68  jal         func_127DA0
    ctx->pc = 0x12C2CCu;
    SET_GPR_U32(ctx, 31, 0x12C2D4u);
    ctx->pc = 0x12C2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2CCu;
            // 0x12c2d0: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DA0u;
    if (runtime->hasFunction(0x127DA0u)) {
        auto targetFn = runtime->lookupFunction(0x127DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2D4u; }
        if (ctx->pc != 0x12C2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x127da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2D4u; }
        if (ctx->pc != 0x12C2D4u) { return; }
    }
    ctx->pc = 0x12C2D4u;
    // 0x12c2d4: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x12C2D4u;
    SET_GPR_U32(ctx, 31, 0x12C2DCu);
    ctx->pc = 0x12C2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2D4u;
            // 0x12c2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2DCu; }
        if (ctx->pc != 0x12C2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2DCu; }
        if (ctx->pc != 0x12C2DCu) { return; }
    }
    ctx->pc = 0x12C2DCu;
    // 0x12c2dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12C2DCu;
    {
        const bool branch_taken_0x12c2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c2dc) {
            ctx->pc = 0x12C2F8u;
            goto label_12c2f8;
        }
    }
    ctx->pc = 0x12C2E4u;
label_12c2e4:
    // 0x12c2e4: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x12c2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x12c2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2ec: 0x24c60300  addiu       $a2, $a2, 0x300
    ctx->pc = 0x12c2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 768));
    // 0x12c2f0: 0xc04b1a8  jal         func_12C6A0
    ctx->pc = 0x12C2F0u;
    SET_GPR_U32(ctx, 31, 0x12C2F8u);
    ctx->pc = 0x12C2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2F0u;
            // 0x12c2f4: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C6A0u;
    if (runtime->hasFunction(0x12C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2F8u; }
        if (ctx->pc != 0x12C2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x12c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C2F8u; }
        if (ctx->pc != 0x12C2F8u) { return; }
    }
    ctx->pc = 0x12C2F8u;
label_12c2f8:
    // 0x12c2f8: 0xc04a1aa  jal         func_1286A8
    ctx->pc = 0x12C2F8u;
    SET_GPR_U32(ctx, 31, 0x12C300u);
    ctx->pc = 0x12C2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C2F8u;
            // 0x12c2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1286A8u;
    if (runtime->hasFunction(0x1286A8u)) {
        auto targetFn = runtime->lookupFunction(0x1286A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C300u; }
        if (ctx->pc != 0x12C300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x1286a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C300u; }
        if (ctx->pc != 0x12C300u) { return; }
    }
    ctx->pc = 0x12C300u;
    // 0x12c300: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x12c300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x12c304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c30c: 0x804b0c6  j           func_12C318
    ctx->pc = 0x12C30Cu;
    ctx->pc = 0x12C310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C30Cu;
            // 0x12c310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C318u;
    if (runtime->hasFunction(0x12C318u)) {
        auto targetFn = runtime->lookupFunction(0x12C318u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _initSeq_0x12c318(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12C314u;
}
