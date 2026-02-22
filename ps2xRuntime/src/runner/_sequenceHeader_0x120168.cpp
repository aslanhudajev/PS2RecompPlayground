#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sequenceHeader
// Address: 0x120168 - 0x1202bc
void _sequenceHeader_0x120168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120168u;

    // 0x120168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12016c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x12016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120170: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x120170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x120174: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x120174u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x120178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x120178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12017c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120180: 0x8e2217bc  lw          $v0, 0x17BC($s1)
    ctx->pc = 0x120180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6076)));
    // 0x120184: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x120184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x120188: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x120188u;
    SET_GPR_U32(ctx, 31, 0x120190u);
    ctx->pc = 0x12018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120188u;
            // 0x12018c: 0xac6000d4  sw          $zero, 0xD4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120190u; }
        if (ctx->pc != 0x120190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120190u; }
        if (ctx->pc != 0x120190u) { return; }
    }
    ctx->pc = 0x120190u;
    // 0x120190: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x120190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120194: 0x3c090017  lui         $t1, 0x17
    ctx->pc = 0x120194u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)23 << 16));
    // 0x120198: 0x30a4000f  andi        $a0, $a1, 0xF
    ctx->pc = 0x120198u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)15u)));
    // 0x12019c: 0x51902  srl         $v1, $a1, 4
    ctx->pc = 0x12019cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x1201a0: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x1201a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1201a4: 0x54502  srl         $t0, $a1, 20
    ctx->pc = 0x1201a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 20));
    // 0x1201a8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1201a8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4095u)));
    // 0x1201ac: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1201acu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
    // 0x1201b0: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1201b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1201b4: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x1201b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x1201b8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1201b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1201bc: 0xad241934  sw          $a0, 0x1934($t1)
    ctx->pc = 0x1201bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 6452), GPR_U32(ctx, 4));
    // 0x1201c0: 0xaca31930  sw          $v1, 0x1930($a1)
    ctx->pc = 0x1201c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6448), GPR_U32(ctx, 3));
    // 0x1201c4: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x1201c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x1201c8: 0xacc81920  sw          $t0, 0x1920($a2)
    ctx->pc = 0x1201c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6432), GPR_U32(ctx, 8));
    // 0x1201cc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1201CCu;
    {
        const bool branch_taken_0x1201cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1201D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1201CCu;
            // 0x1201d0: 0xace21924  sw          $v0, 0x1924($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 6436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1201cc) {
            ctx->pc = 0x1201E0u;
            goto label_1201e0;
        }
    }
    ctx->pc = 0x1201D4u;
    // 0x1201d4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1201d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1201d8: 0xc048006  jal         func_120018
    ctx->pc = 0x1201D8u;
    SET_GPR_U32(ctx, 31, 0x1201E0u);
    ctx->pc = 0x1201DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1201D8u;
            // 0x1201dc: 0x24844ce8  addiu       $a0, $a0, 0x4CE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1201E0u; }
        if (ctx->pc != 0x1201E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1201E0u; }
        if (ctx->pc != 0x1201E0u) { return; }
    }
    ctx->pc = 0x1201E0u;
label_1201e0:
    // 0x1201e0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1201e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1201e4: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1201E4u;
    SET_GPR_U32(ctx, 31, 0x1201ECu);
    ctx->pc = 0x1201E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1201E4u;
            // 0x1201e8: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1201ECu; }
        if (ctx->pc != 0x1201ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1201ECu; }
        if (ctx->pc != 0x1201ECu) { return; }
    }
    ctx->pc = 0x1201ECu;
    // 0x1201ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1201ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201f0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1201f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1201f4: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x1201f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1201f8: 0x53b02  srl         $a3, $a1, 12
    ctx->pc = 0x1201f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x1201fc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1201fcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
    // 0x120200: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x120200u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1023u)));
    // 0x120204: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x120204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x120208: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x120208u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x12020c: 0xac831940  sw          $v1, 0x1940($a0)
    ctx->pc = 0x12020cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6464), GPR_U32(ctx, 3));
    // 0x120210: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x120210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120214: 0xaca2193c  sw          $v0, 0x193C($a1)
    ctx->pc = 0x120214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6460), GPR_U32(ctx, 2));
    // 0x120218: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x120218u;
    SET_GPR_U32(ctx, 31, 0x120220u);
    ctx->pc = 0x12021Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120218u;
            // 0x12021c: 0xacc71938  sw          $a3, 0x1938($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6456), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120220u; }
        if (ctx->pc != 0x120220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120220u; }
        if (ctx->pc != 0x120220u) { return; }
    }
    ctx->pc = 0x120220u;
    // 0x120220: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x120220u;
    {
        const bool branch_taken_0x120220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120220u;
            // 0x120224: 0xae0220a0  sw          $v0, 0x20A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120220) {
            ctx->pc = 0x120248u;
            goto label_120248;
        }
    }
    ctx->pc = 0x120228u;
    // 0x120228: 0xc048e84  jal         func_123A10
    ctx->pc = 0x120228u;
    SET_GPR_U32(ctx, 31, 0x120230u);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120230u; }
        if (ctx->pc != 0x120230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120230u; }
        if (ctx->pc != 0x120230u) { return; }
    }
    ctx->pc = 0x120230u;
    // 0x120230: 0xc048e78  jal         func_1239E0
    ctx->pc = 0x120230u;
    SET_GPR_U32(ctx, 31, 0x120238u);
    ctx->pc = 0x120234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120230u;
            // 0x120234: 0x3c045000  lui         $a0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1239E0u;
    if (runtime->hasFunction(0x1239E0u)) {
        auto targetFn = runtime->lookupFunction(0x1239E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120238u; }
        if (ctx->pc != 0x120238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120238u; }
        if (ctx->pc != 0x120238u) { return; }
    }
    ctx->pc = 0x120238u;
    // 0x120238: 0xc048e84  jal         func_123A10
    ctx->pc = 0x120238u;
    SET_GPR_U32(ctx, 31, 0x120240u);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120240u; }
        if (ctx->pc != 0x120240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120240u; }
        if (ctx->pc != 0x120240u) { return; }
    }
    ctx->pc = 0x120240u;
    // 0x120240: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x120240u;
    {
        const bool branch_taken_0x120240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120240u;
            // 0x120244: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120240) {
            ctx->pc = 0x12025Cu;
            goto label_12025c;
        }
    }
    ctx->pc = 0x120248u;
label_120248:
    // 0x120248: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x120248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x12024c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x12024cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x120250: 0xc0481bc  jal         func_1206F0
    ctx->pc = 0x120250u;
    SET_GPR_U32(ctx, 31, 0x120258u);
    ctx->pc = 0x120254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120250u;
            // 0x120254: 0x24a51880  addiu       $a1, $a1, 0x1880 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1206F0u;
    if (runtime->hasFunction(0x1206F0u)) {
        auto targetFn = runtime->lookupFunction(0x1206F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120258u; }
        if (ctx->pc != 0x120258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x1206f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120258u; }
        if (ctx->pc != 0x120258u) { return; }
    }
    ctx->pc = 0x120258u;
    // 0x120258: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x120258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12025c:
    // 0x12025c: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x12025Cu;
    SET_GPR_U32(ctx, 31, 0x120264u);
    ctx->pc = 0x120260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12025Cu;
            // 0x120260: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120264u; }
        if (ctx->pc != 0x120264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120264u; }
        if (ctx->pc != 0x120264u) { return; }
    }
    ctx->pc = 0x120264u;
    // 0x120264: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x120264u;
    {
        const bool branch_taken_0x120264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120264u;
            // 0x120268: 0xae0220a4  sw          $v0, 0x20A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120264) {
            ctx->pc = 0x12028Cu;
            goto label_12028c;
        }
    }
    ctx->pc = 0x12026Cu;
    // 0x12026c: 0xc048e84  jal         func_123A10
    ctx->pc = 0x12026Cu;
    SET_GPR_U32(ctx, 31, 0x120274u);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120274u; }
        if (ctx->pc != 0x120274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120274u; }
        if (ctx->pc != 0x120274u) { return; }
    }
    ctx->pc = 0x120274u;
    // 0x120274: 0xc048e78  jal         func_1239E0
    ctx->pc = 0x120274u;
    SET_GPR_U32(ctx, 31, 0x12027Cu);
    ctx->pc = 0x120278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120274u;
            // 0x120278: 0x3c045800  lui         $a0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1239E0u;
    if (runtime->hasFunction(0x1239E0u)) {
        auto targetFn = runtime->lookupFunction(0x1239E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12027Cu; }
        if (ctx->pc != 0x12027Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12027Cu; }
        if (ctx->pc != 0x12027Cu) { return; }
    }
    ctx->pc = 0x12027Cu;
    // 0x12027c: 0xc048e84  jal         func_123A10
    ctx->pc = 0x12027Cu;
    SET_GPR_U32(ctx, 31, 0x120284u);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120284u; }
        if (ctx->pc != 0x120284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120284u; }
        if (ctx->pc != 0x120284u) { return; }
    }
    ctx->pc = 0x120284u;
    // 0x120284: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x120284u;
    {
        const bool branch_taken_0x120284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120284) {
            ctx->pc = 0x12029Cu;
            goto label_12029c;
        }
    }
    ctx->pc = 0x12028Cu;
label_12028c:
    // 0x12028c: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x12028cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x120290: 0x3c045800  lui         $a0, 0x5800
    ctx->pc = 0x120290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22528 << 16));
    // 0x120294: 0xc0481bc  jal         func_1206F0
    ctx->pc = 0x120294u;
    SET_GPR_U32(ctx, 31, 0x12029Cu);
    ctx->pc = 0x120298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120294u;
            // 0x120298: 0x24a518c0  addiu       $a1, $a1, 0x18C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1206F0u;
    if (runtime->hasFunction(0x1206F0u)) {
        auto targetFn = runtime->lookupFunction(0x1206F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12029Cu; }
        if (ctx->pc != 0x12029Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x1206f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12029Cu; }
        if (ctx->pc != 0x12029Cu) { return; }
    }
    ctx->pc = 0x12029Cu;
label_12029c:
    // 0x12029c: 0xc0490ea  jal         func_1243A8
    ctx->pc = 0x12029Cu;
    SET_GPR_U32(ctx, 31, 0x1202A4u);
    ctx->pc = 0x1243A8u;
    if (runtime->hasFunction(0x1243A8u)) {
        auto targetFn = runtime->lookupFunction(0x1243A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1202A4u; }
        if (ctx->pc != 0x1202A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x1243a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1202A4u; }
        if (ctx->pc != 0x1202A4u) { return; }
    }
    ctx->pc = 0x1202A4u;
    // 0x1202a4: 0x8e2417bc  lw          $a0, 0x17BC($s1)
    ctx->pc = 0x1202a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6076)));
    // 0x1202a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1202a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1202ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1202acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1202b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1202b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1202b4: 0x80480b0  j           func_1202C0
    ctx->pc = 0x1202B4u;
    ctx->pc = 0x1202B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1202B4u;
            // 0x1202b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1202C0u;
    if (runtime->hasFunction(0x1202C0u)) {
        auto targetFn = runtime->lookupFunction(0x1202C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _initSeq_0x1202c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1202BCu;
}
