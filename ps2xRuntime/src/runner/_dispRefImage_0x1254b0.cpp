#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dispRefImage
// Address: 0x1254b0 - 0x1255c8
void _dispRefImage_0x1254b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1254b0u;

    // 0x1254b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1254b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1254b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1254b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1254b8: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x1254b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x1254bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1254bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1254c0: 0x8e0617bc  lw          $a2, 0x17BC($s0)
    ctx->pc = 0x1254c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6076)));
    // 0x1254c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1254c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1254c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1254cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1254ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1254d0: 0x24c70020  addiu       $a3, $a2, 0x20
    ctx->pc = 0x1254d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1254d4: 0x8cd10040  lw          $s1, 0x40($a2)
    ctx->pc = 0x1254d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1254d8: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x1254d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1254dc: 0xc0494c6  jal         func_125318
    ctx->pc = 0x1254DCu;
    SET_GPR_U32(ctx, 31, 0x1254E4u);
    ctx->pc = 0x1254E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1254DCu;
            // 0x1254e0: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125318u;
    if (runtime->hasFunction(0x125318u)) {
        auto targetFn = runtime->lookupFunction(0x125318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1254E4u; }
        if (ctx->pc != 0x1254E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x125318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1254E4u; }
        if (ctx->pc != 0x1254E4u) { return; }
    }
    ctx->pc = 0x1254E4u;
    // 0x1254e4: 0x8e0617bc  lw          $a2, 0x17BC($s0)
    ctx->pc = 0x1254e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6076)));
    // 0x1254e8: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1254e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1254ec: 0x24a52178  addiu       $a1, $a1, 0x2178
    ctx->pc = 0x1254ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8568));
    // 0x1254f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1254f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254f4: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1254f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1254f8: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1254f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1254fc: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x1254fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x125500: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x125500u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x125504: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x125504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x125508: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x125508u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x12550c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12550cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x125510: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x125510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x125514: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x125514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x125518: 0x9c450000  lwu         $a1, 0x0($v0)
    ctx->pc = 0x125518u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12551c: 0xae2300cc  sw          $v1, 0xCC($s1)
    ctx->pc = 0x12551cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
    // 0x125520: 0xfe250088  sd          $a1, 0x88($s1)
    ctx->pc = 0x125520u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 5));
    // 0x125524: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x125524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x125528: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x125528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x12552c: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x12552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x125530: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x125530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    // 0x125534: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x125534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x125538: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x125538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x12553c: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x12553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x125540: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x125540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    // 0x125544: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x125544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x125548: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x125548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x12554c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x12554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x125550: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x125550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    // 0x125554: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x125554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x125558: 0xc049414  jal         func_125050
    ctx->pc = 0x125558u;
    SET_GPR_U32(ctx, 31, 0x125560u);
    ctx->pc = 0x12555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125558u;
            // 0x12555c: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125050u;
    if (runtime->hasFunction(0x125050u)) {
        auto targetFn = runtime->lookupFunction(0x125050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125560u; }
        if (ctx->pc != 0x125560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _isOutSizeOK_0x125050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125560u; }
        if (ctx->pc != 0x125560u) { return; }
    }
    ctx->pc = 0x125560u;
    // 0x125560: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x125560u;
    {
        const bool branch_taken_0x125560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125560u;
            // 0x125564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125560) {
            ctx->pc = 0x1255B0u;
            goto label_1255b0;
        }
    }
    ctx->pc = 0x125568u;
    // 0x125568: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x125568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x12556c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12556Cu;
    {
        const bool branch_taken_0x12556c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x125570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12556Cu;
            // 0x125570: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12556c) {
            ctx->pc = 0x1255B4u;
            goto label_1255b4;
        }
    }
    ctx->pc = 0x125574u;
    // 0x125574: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x125574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x125578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125578u;
    {
        const bool branch_taken_0x125578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125578) {
            ctx->pc = 0x125590u;
            goto label_125590;
        }
    }
    ctx->pc = 0x125580u;
    // 0x125580: 0xc049714  jal         func_125C50
    ctx->pc = 0x125580u;
    SET_GPR_U32(ctx, 31, 0x125588u);
    ctx->pc = 0x125584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125580u;
            // 0x125584: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125C50u;
    if (runtime->hasFunction(0x125C50u)) {
        auto targetFn = runtime->lookupFunction(0x125C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125588u; }
        if (ctx->pc != 0x125588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _csc_storeRefImage_0x125c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125588u; }
        if (ctx->pc != 0x125588u) { return; }
    }
    ctx->pc = 0x125588u;
    // 0x125588: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x125588u;
    {
        const bool branch_taken_0x125588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125588u;
            // 0x12558c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125588) {
            ctx->pc = 0x12559Cu;
            goto label_12559c;
        }
    }
    ctx->pc = 0x125590u;
label_125590:
    // 0x125590: 0xc04943c  jal         func_1250F0
    ctx->pc = 0x125590u;
    SET_GPR_U32(ctx, 31, 0x125598u);
    ctx->pc = 0x125594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125590u;
            // 0x125594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (runtime->hasFunction(0x1250F0u)) {
        auto targetFn = runtime->lookupFunction(0x1250F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125598u; }
        if (ctx->pc != 0x125598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _cpr8_0x1250f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125598u; }
        if (ctx->pc != 0x125598u) { return; }
    }
    ctx->pc = 0x125598u;
    // 0x125598: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x125598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12559c:
    // 0x12559c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12559cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1255a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1255a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1255a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1255a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1255a8: 0x80494b8  j           func_1252E0
    ctx->pc = 0x1255A8u;
    ctx->pc = 0x1255ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1255A8u;
            // 0x1255ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1252E0u;
    if (runtime->hasFunction(0x1252E0u)) {
        auto targetFn = runtime->lookupFunction(0x1252E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _markOutput_0x1252e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1255B0u;
label_1255b0:
    // 0x1255b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1255b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1255b4:
    // 0x1255b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1255b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1255b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1255b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1255bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1255bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1255c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1255C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1255C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255C0u;
            // 0x1255c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125590u: goto label_125590;
            case 0x12559Cu: goto label_12559c;
            case 0x1255B0u: goto label_1255b0;
            case 0x1255B4u: goto label_1255b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1255C8u;
}
