#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _extensionAndUserData
// Address: 0x1243a8 - 0x124458
void _extensionAndUserData_0x1243a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_extensionAndUserData_0x1243a8");
#endif

    ctx->pc = 0x1243a8u;

label_1243a8:
    // 0x1243a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1243a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1243ac:
    // 0x1243ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1243acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1243b0:
    // 0x1243b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1243b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1243b4:
    // 0x1243b4: 0xc049036  jal         func_1240D8
label_1243b8:
    if (ctx->pc == 0x1243B8u) {
        ctx->pc = 0x1243B8u;
            // 0x1243b8: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->pc = 0x1243BCu;
        goto label_1243bc;
    }
    ctx->pc = 0x1243B4u;
    SET_GPR_U32(ctx, 31, 0x1243BCu);
    ctx->pc = 0x1243B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1243B4u;
            // 0x1243b8: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1240D8u;
    if (runtime->hasFunction(0x1240D8u)) {
        auto targetFn = runtime->lookupFunction(0x1240D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1243BCu; }
        if (ctx->pc != 0x1243BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1240d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1243BCu; }
        if (ctx->pc != 0x1243BCu) { return; }
    }
    ctx->pc = 0x1243BCu;
label_1243bc:
    // 0x1243bc: 0x10000019  b           . + 4 + (0x19 << 2)
label_1243c0:
    if (ctx->pc == 0x1243C0u) {
        ctx->pc = 0x1243C4u;
        goto label_1243c4;
    }
    ctx->pc = 0x1243BCu;
    {
        const bool branch_taken_0x1243bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243bc) {
            ctx->pc = 0x124424u;
            goto label_124424;
        }
    }
    ctx->pc = 0x1243C4u;
label_1243c4:
    // 0x1243c4: 0x0  nop
    ctx->pc = 0x1243c4u;
    // NOP
label_1243c8:
    // 0x1243c8: 0x14660012  bne         $v1, $a2, . + 4 + (0x12 << 2)
label_1243cc:
    if (ctx->pc == 0x1243CCu) {
        ctx->pc = 0x1243D0u;
        goto label_1243d0;
    }
    ctx->pc = 0x1243C8u;
    {
        const bool branch_taken_0x1243c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1243c8) {
            ctx->pc = 0x124414u;
            goto label_124414;
        }
    }
    ctx->pc = 0x1243D0u;
label_1243d0:
    // 0x1243d0: 0xc048f96  jal         func_123E58
label_1243d4:
    if (ctx->pc == 0x1243D4u) {
        ctx->pc = 0x1243D8u;
        goto label_1243d8;
    }
    ctx->pc = 0x1243D0u;
    SET_GPR_U32(ctx, 31, 0x1243D8u);
    ctx->pc = 0x123E58u;
    if (runtime->hasFunction(0x123E58u)) {
        auto targetFn = runtime->lookupFunction(0x123E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1243D8u; }
        if (ctx->pc != 0x1243D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1243D8u; }
        if (ctx->pc != 0x1243D8u) { return; }
    }
    ctx->pc = 0x1243D8u;
label_1243d8:
    // 0x1243d8: 0xc048fdc  jal         func_123F70
label_1243dc:
    if (ctx->pc == 0x1243DCu) {
        ctx->pc = 0x1243DCu;
            // 0x1243dc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1243E0u;
        goto label_1243e0;
    }
    ctx->pc = 0x1243D8u;
    SET_GPR_U32(ctx, 31, 0x1243E0u);
    ctx->pc = 0x1243DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1243D8u;
            // 0x1243dc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1243E0u; }
        if (ctx->pc != 0x1243E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1243E0u; }
        if (ctx->pc != 0x1243E0u) { return; }
    }
    ctx->pc = 0x1243E0u;
label_1243e0:
    // 0x1243e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1243e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1243e4:
    // 0x1243e4: 0x26042140  addiu       $a0, $s0, 0x2140
    ctx->pc = 0x1243e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8512));
label_1243e8:
    // 0x1243e8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1243e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1243ec:
    // 0x1243ec: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1243ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1243f0:
    // 0x1243f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1243f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1243f4:
    // 0x1243f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1243f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1243f8:
    // 0x1243f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1243f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1243fc:
    // 0x1243fc: 0x60f809  jalr        $v1
label_124400:
    if (ctx->pc == 0x124400u) {
        ctx->pc = 0x124404u;
        goto label_124404;
    }
    ctx->pc = 0x1243FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124404u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1243A8u: goto label_1243a8;
            case 0x1243ACu: goto label_1243ac;
            case 0x1243B0u: goto label_1243b0;
            case 0x1243B4u: goto label_1243b4;
            case 0x1243B8u: goto label_1243b8;
            case 0x1243BCu: goto label_1243bc;
            case 0x1243C0u: goto label_1243c0;
            case 0x1243C4u: goto label_1243c4;
            case 0x1243C8u: goto label_1243c8;
            case 0x1243CCu: goto label_1243cc;
            case 0x1243D0u: goto label_1243d0;
            case 0x1243D4u: goto label_1243d4;
            case 0x1243D8u: goto label_1243d8;
            case 0x1243DCu: goto label_1243dc;
            case 0x1243E0u: goto label_1243e0;
            case 0x1243E4u: goto label_1243e4;
            case 0x1243E8u: goto label_1243e8;
            case 0x1243ECu: goto label_1243ec;
            case 0x1243F0u: goto label_1243f0;
            case 0x1243F4u: goto label_1243f4;
            case 0x1243F8u: goto label_1243f8;
            case 0x1243FCu: goto label_1243fc;
            case 0x124400u: goto label_124400;
            case 0x124404u: goto label_124404;
            case 0x124408u: goto label_124408;
            case 0x12440Cu: goto label_12440c;
            case 0x124410u: goto label_124410;
            case 0x124414u: goto label_124414;
            case 0x124418u: goto label_124418;
            case 0x12441Cu: goto label_12441c;
            case 0x124420u: goto label_124420;
            case 0x124424u: goto label_124424;
            case 0x124428u: goto label_124428;
            case 0x12442Cu: goto label_12442c;
            case 0x124430u: goto label_124430;
            case 0x124434u: goto label_124434;
            case 0x124438u: goto label_124438;
            case 0x12443Cu: goto label_12443c;
            case 0x124440u: goto label_124440;
            case 0x124444u: goto label_124444;
            case 0x124448u: goto label_124448;
            case 0x12444Cu: goto label_12444c;
            case 0x124450u: goto label_124450;
            case 0x124454u: goto label_124454;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x124404u; }
            if (ctx->pc != 0x124404u) { return; }
        }
    }
    ctx->pc = 0x124404u;
label_124404:
    // 0x124404: 0xc049036  jal         func_1240D8
label_124408:
    if (ctx->pc == 0x124408u) {
        ctx->pc = 0x12440Cu;
        goto label_12440c;
    }
    ctx->pc = 0x124404u;
    SET_GPR_U32(ctx, 31, 0x12440Cu);
    ctx->pc = 0x1240D8u;
    if (runtime->hasFunction(0x1240D8u)) {
        auto targetFn = runtime->lookupFunction(0x1240D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12440Cu; }
        if (ctx->pc != 0x12440Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1240d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12440Cu; }
        if (ctx->pc != 0x12440Cu) { return; }
    }
    ctx->pc = 0x12440Cu;
label_12440c:
    // 0x12440c: 0x10000005  b           . + 4 + (0x5 << 2)
label_124410:
    if (ctx->pc == 0x124410u) {
        ctx->pc = 0x124414u;
        goto label_124414;
    }
    ctx->pc = 0x12440Cu;
    {
        const bool branch_taken_0x12440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12440c) {
            ctx->pc = 0x124424u;
            goto label_124424;
        }
    }
    ctx->pc = 0x124414u;
label_124414:
    // 0x124414: 0xc048f96  jal         func_123E58
label_124418:
    if (ctx->pc == 0x124418u) {
        ctx->pc = 0x124418u;
            // 0x124418: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x12441Cu;
        goto label_12441c;
    }
    ctx->pc = 0x124414u;
    SET_GPR_U32(ctx, 31, 0x12441Cu);
    ctx->pc = 0x124418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124414u;
            // 0x124418: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E58u;
    if (runtime->hasFunction(0x123E58u)) {
        auto targetFn = runtime->lookupFunction(0x123E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12441Cu; }
        if (ctx->pc != 0x12441Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12441Cu; }
        if (ctx->pc != 0x12441Cu) { return; }
    }
    ctx->pc = 0x12441Cu;
label_12441c:
    // 0x12441c: 0xc049036  jal         func_1240D8
label_124420:
    if (ctx->pc == 0x124420u) {
        ctx->pc = 0x124424u;
        goto label_124424;
    }
    ctx->pc = 0x12441Cu;
    SET_GPR_U32(ctx, 31, 0x124424u);
    ctx->pc = 0x1240D8u;
    if (runtime->hasFunction(0x1240D8u)) {
        auto targetFn = runtime->lookupFunction(0x1240D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124424u; }
        if (ctx->pc != 0x124424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1240d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124424u; }
        if (ctx->pc != 0x124424u) { return; }
    }
    ctx->pc = 0x124424u;
label_124424:
    // 0x124424: 0xc048f48  jal         func_123D20
label_124428:
    if (ctx->pc == 0x124428u) {
        ctx->pc = 0x124428u;
            // 0x124428: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x12442Cu;
        goto label_12442c;
    }
    ctx->pc = 0x124424u;
    SET_GPR_U32(ctx, 31, 0x12442Cu);
    ctx->pc = 0x124428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124424u;
            // 0x124428: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D20u;
    if (runtime->hasFunction(0x123D20u)) {
        auto targetFn = runtime->lookupFunction(0x123D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12442Cu; }
        if (ctx->pc != 0x12442Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x123d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12442Cu; }
        if (ctx->pc != 0x12442Cu) { return; }
    }
    ctx->pc = 0x12442Cu;
label_12442c:
    // 0x12442c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12442cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124430:
    // 0x124430: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x124430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_124434:
    // 0x124434: 0x240201b5  addiu       $v0, $zero, 0x1B5
    ctx->pc = 0x124434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_124438:
    // 0x124438: 0x240601b5  addiu       $a2, $zero, 0x1B5
    ctx->pc = 0x124438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_12443c:
    // 0x12443c: 0x1062ffe4  beq         $v1, $v0, . + 4 + (-0x1C << 2)
label_124440:
    if (ctx->pc == 0x124440u) {
        ctx->pc = 0x124440u;
            // 0x124440: 0x240501b2  addiu       $a1, $zero, 0x1B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
        ctx->pc = 0x124444u;
        goto label_124444;
    }
    ctx->pc = 0x12443Cu;
    {
        const bool branch_taken_0x12443c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x124440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12443Cu;
            // 0x124440: 0x240501b2  addiu       $a1, $zero, 0x1B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12443c) {
            ctx->pc = 0x1243D0u;
            goto label_1243d0;
        }
    }
    ctx->pc = 0x124444u;
label_124444:
    // 0x124444: 0x1065ffe0  beq         $v1, $a1, . + 4 + (-0x20 << 2)
label_124448:
    if (ctx->pc == 0x124448u) {
        ctx->pc = 0x124448u;
            // 0x124448: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x12444Cu;
        goto label_12444c;
    }
    ctx->pc = 0x124444u;
    {
        const bool branch_taken_0x124444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x124448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124444u;
            // 0x124448: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124444) {
            ctx->pc = 0x1243C8u;
            goto label_1243c8;
        }
    }
    ctx->pc = 0x12444Cu;
label_12444c:
    // 0x12444c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12444cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124450:
    // 0x124450: 0x3e00008  jr          $ra
label_124454:
    if (ctx->pc == 0x124454u) {
        ctx->pc = 0x124454u;
            // 0x124454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x124458u;
        goto label_fallthrough_0x124450;
    }
    ctx->pc = 0x124450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124450u;
            // 0x124454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1243A8u: goto label_1243a8;
            case 0x1243ACu: goto label_1243ac;
            case 0x1243B0u: goto label_1243b0;
            case 0x1243B4u: goto label_1243b4;
            case 0x1243B8u: goto label_1243b8;
            case 0x1243BCu: goto label_1243bc;
            case 0x1243C0u: goto label_1243c0;
            case 0x1243C4u: goto label_1243c4;
            case 0x1243C8u: goto label_1243c8;
            case 0x1243CCu: goto label_1243cc;
            case 0x1243D0u: goto label_1243d0;
            case 0x1243D4u: goto label_1243d4;
            case 0x1243D8u: goto label_1243d8;
            case 0x1243DCu: goto label_1243dc;
            case 0x1243E0u: goto label_1243e0;
            case 0x1243E4u: goto label_1243e4;
            case 0x1243E8u: goto label_1243e8;
            case 0x1243ECu: goto label_1243ec;
            case 0x1243F0u: goto label_1243f0;
            case 0x1243F4u: goto label_1243f4;
            case 0x1243F8u: goto label_1243f8;
            case 0x1243FCu: goto label_1243fc;
            case 0x124400u: goto label_124400;
            case 0x124404u: goto label_124404;
            case 0x124408u: goto label_124408;
            case 0x12440Cu: goto label_12440c;
            case 0x124410u: goto label_124410;
            case 0x124414u: goto label_124414;
            case 0x124418u: goto label_124418;
            case 0x12441Cu: goto label_12441c;
            case 0x124420u: goto label_124420;
            case 0x124424u: goto label_124424;
            case 0x124428u: goto label_124428;
            case 0x12442Cu: goto label_12442c;
            case 0x124430u: goto label_124430;
            case 0x124434u: goto label_124434;
            case 0x124438u: goto label_124438;
            case 0x12443Cu: goto label_12443c;
            case 0x124440u: goto label_124440;
            case 0x124444u: goto label_124444;
            case 0x124448u: goto label_124448;
            case 0x12444Cu: goto label_12444c;
            case 0x124450u: goto label_124450;
            case 0x124454u: goto label_124454;
            default: break;
        }
        return;
    }
label_fallthrough_0x124450:
    ctx->pc = 0x124458u;
}
