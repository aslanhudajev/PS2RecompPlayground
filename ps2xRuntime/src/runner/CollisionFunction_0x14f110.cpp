#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CollisionFunction
// Address: 0x14f110 - 0x14f1ac
void CollisionFunction_0x14f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CollisionFunction_0x14f110");
#endif

    ctx->pc = 0x14f110u;

label_14f110:
    // 0x14f110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14f114:
    // 0x14f114: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_14f118:
    // 0x14f118: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_14f11c:
    // 0x14f11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14f120:
    // 0x14f120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14f124:
    // 0x14f124: 0x8c319d38  lw          $s1, -0x62C8($at)
    ctx->pc = 0x14f124u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942008)));
label_14f128:
    // 0x14f128: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_14f12c:
    if (ctx->pc == 0x14F12Cu) {
        ctx->pc = 0x14F130u;
        goto label_14f130;
    }
    ctx->pc = 0x14F128u;
    {
        const bool branch_taken_0x14f128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f128) {
            ctx->pc = 0x14F198u;
            goto label_14f198;
        }
    }
    ctx->pc = 0x14F130u;
label_14f130:
    // 0x14f130: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x14f130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_14f134:
    // 0x14f134: 0x8c309d30  lw          $s0, -0x62D0($at)
    ctx->pc = 0x14f134u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942000)));
label_14f138:
    // 0x14f138: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_14f13c:
    if (ctx->pc == 0x14F13Cu) {
        ctx->pc = 0x14F140u;
        goto label_14f140;
    }
    ctx->pc = 0x14F138u;
    {
        const bool branch_taken_0x14f138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f138) {
            ctx->pc = 0x14F188u;
            goto label_14f188;
        }
    }
    ctx->pc = 0x14F140u;
label_14f140:
    // 0x14f140: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x14f140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_14f144:
    // 0x14f144: 0xc053c6c  jal         func_14F1B0
label_14f148:
    if (ctx->pc == 0x14F148u) {
        ctx->pc = 0x14F148u;
            // 0x14f148: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x14F14Cu;
        goto label_14f14c;
    }
    ctx->pc = 0x14F144u;
    SET_GPR_U32(ctx, 31, 0x14F14Cu);
    ctx->pc = 0x14F148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F144u;
            // 0x14f148: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F1B0u;
    if (runtime->hasFunction(0x14F1B0u)) {
        auto targetFn = runtime->lookupFunction(0x14F1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F14Cu; }
        if (ctx->pc != 0x14F14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HitCheck_0x14f1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F14Cu; }
        if (ctx->pc != 0x14F14Cu) { return; }
    }
    ctx->pc = 0x14F14Cu;
label_14f14c:
    // 0x14f14c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_14f150:
    if (ctx->pc == 0x14F150u) {
        ctx->pc = 0x14F154u;
        goto label_14f154;
    }
    ctx->pc = 0x14F14Cu;
    {
        const bool branch_taken_0x14f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f14c) {
            ctx->pc = 0x14F178u;
            goto label_14f178;
        }
    }
    ctx->pc = 0x14F154u;
label_14f154:
    // 0x14f154: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14f158:
    // 0x14f158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14f15c:
    // 0x14f15c: 0x40f809  jalr        $v0
label_14f160:
    if (ctx->pc == 0x14F160u) {
        ctx->pc = 0x14F160u;
            // 0x14f160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14F164u;
        goto label_14f164;
    }
    ctx->pc = 0x14F15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14F164u);
        ctx->pc = 0x14F160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F15Cu;
            // 0x14f160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F110u: goto label_14f110;
            case 0x14F114u: goto label_14f114;
            case 0x14F118u: goto label_14f118;
            case 0x14F11Cu: goto label_14f11c;
            case 0x14F120u: goto label_14f120;
            case 0x14F124u: goto label_14f124;
            case 0x14F128u: goto label_14f128;
            case 0x14F12Cu: goto label_14f12c;
            case 0x14F130u: goto label_14f130;
            case 0x14F134u: goto label_14f134;
            case 0x14F138u: goto label_14f138;
            case 0x14F13Cu: goto label_14f13c;
            case 0x14F140u: goto label_14f140;
            case 0x14F144u: goto label_14f144;
            case 0x14F148u: goto label_14f148;
            case 0x14F14Cu: goto label_14f14c;
            case 0x14F150u: goto label_14f150;
            case 0x14F154u: goto label_14f154;
            case 0x14F158u: goto label_14f158;
            case 0x14F15Cu: goto label_14f15c;
            case 0x14F160u: goto label_14f160;
            case 0x14F164u: goto label_14f164;
            case 0x14F168u: goto label_14f168;
            case 0x14F16Cu: goto label_14f16c;
            case 0x14F170u: goto label_14f170;
            case 0x14F174u: goto label_14f174;
            case 0x14F178u: goto label_14f178;
            case 0x14F17Cu: goto label_14f17c;
            case 0x14F180u: goto label_14f180;
            case 0x14F184u: goto label_14f184;
            case 0x14F188u: goto label_14f188;
            case 0x14F18Cu: goto label_14f18c;
            case 0x14F190u: goto label_14f190;
            case 0x14F194u: goto label_14f194;
            case 0x14F198u: goto label_14f198;
            case 0x14F19Cu: goto label_14f19c;
            case 0x14F1A0u: goto label_14f1a0;
            case 0x14F1A4u: goto label_14f1a4;
            case 0x14F1A8u: goto label_14f1a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14F164u; }
            if (ctx->pc != 0x14F164u) { return; }
        }
    }
    ctx->pc = 0x14F164u;
label_14f164:
    // 0x14f164: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_14f168:
    // 0x14f168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14f16c:
    // 0x14f16c: 0x40f809  jalr        $v0
label_14f170:
    if (ctx->pc == 0x14F170u) {
        ctx->pc = 0x14F170u;
            // 0x14f170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14F174u;
        goto label_14f174;
    }
    ctx->pc = 0x14F16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14F174u);
        ctx->pc = 0x14F170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F16Cu;
            // 0x14f170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F110u: goto label_14f110;
            case 0x14F114u: goto label_14f114;
            case 0x14F118u: goto label_14f118;
            case 0x14F11Cu: goto label_14f11c;
            case 0x14F120u: goto label_14f120;
            case 0x14F124u: goto label_14f124;
            case 0x14F128u: goto label_14f128;
            case 0x14F12Cu: goto label_14f12c;
            case 0x14F130u: goto label_14f130;
            case 0x14F134u: goto label_14f134;
            case 0x14F138u: goto label_14f138;
            case 0x14F13Cu: goto label_14f13c;
            case 0x14F140u: goto label_14f140;
            case 0x14F144u: goto label_14f144;
            case 0x14F148u: goto label_14f148;
            case 0x14F14Cu: goto label_14f14c;
            case 0x14F150u: goto label_14f150;
            case 0x14F154u: goto label_14f154;
            case 0x14F158u: goto label_14f158;
            case 0x14F15Cu: goto label_14f15c;
            case 0x14F160u: goto label_14f160;
            case 0x14F164u: goto label_14f164;
            case 0x14F168u: goto label_14f168;
            case 0x14F16Cu: goto label_14f16c;
            case 0x14F170u: goto label_14f170;
            case 0x14F174u: goto label_14f174;
            case 0x14F178u: goto label_14f178;
            case 0x14F17Cu: goto label_14f17c;
            case 0x14F180u: goto label_14f180;
            case 0x14F184u: goto label_14f184;
            case 0x14F188u: goto label_14f188;
            case 0x14F18Cu: goto label_14f18c;
            case 0x14F190u: goto label_14f190;
            case 0x14F194u: goto label_14f194;
            case 0x14F198u: goto label_14f198;
            case 0x14F19Cu: goto label_14f19c;
            case 0x14F1A0u: goto label_14f1a0;
            case 0x14F1A4u: goto label_14f1a4;
            case 0x14F1A8u: goto label_14f1a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14F174u; }
            if (ctx->pc != 0x14F174u) { return; }
        }
    }
    ctx->pc = 0x14F174u;
label_14f174:
    // 0x14f174: 0x0  nop
    ctx->pc = 0x14f174u;
    // NOP
label_14f178:
    // 0x14f178: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x14f178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_14f17c:
    // 0x14f17c: 0x1600fff0  bnez        $s0, . + 4 + (-0x10 << 2)
label_14f180:
    if (ctx->pc == 0x14F180u) {
        ctx->pc = 0x14F184u;
        goto label_14f184;
    }
    ctx->pc = 0x14F17Cu;
    {
        const bool branch_taken_0x14f17c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f17c) {
            ctx->pc = 0x14F140u;
            goto label_14f140;
        }
    }
    ctx->pc = 0x14F184u;
label_14f184:
    // 0x14f184: 0x0  nop
    ctx->pc = 0x14f184u;
    // NOP
label_14f188:
    // 0x14f188: 0x8e310020  lw          $s1, 0x20($s1)
    ctx->pc = 0x14f188u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_14f18c:
    // 0x14f18c: 0x1620ffe8  bnez        $s1, . + 4 + (-0x18 << 2)
label_14f190:
    if (ctx->pc == 0x14F190u) {
        ctx->pc = 0x14F194u;
        goto label_14f194;
    }
    ctx->pc = 0x14F18Cu;
    {
        const bool branch_taken_0x14f18c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f18c) {
            ctx->pc = 0x14F130u;
            goto label_14f130;
        }
    }
    ctx->pc = 0x14F194u;
label_14f194:
    // 0x14f194: 0x0  nop
    ctx->pc = 0x14f194u;
    // NOP
label_14f198:
    // 0x14f198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14f19c:
    // 0x14f19c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f19cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14f1a0:
    // 0x14f1a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14f1a4:
    // 0x14f1a4: 0x3e00008  jr          $ra
label_14f1a8:
    if (ctx->pc == 0x14F1A8u) {
        ctx->pc = 0x14F1A8u;
            // 0x14f1a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x14F1ACu;
        goto label_fallthrough_0x14f1a4;
    }
    ctx->pc = 0x14F1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F1A4u;
            // 0x14f1a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F110u: goto label_14f110;
            case 0x14F114u: goto label_14f114;
            case 0x14F118u: goto label_14f118;
            case 0x14F11Cu: goto label_14f11c;
            case 0x14F120u: goto label_14f120;
            case 0x14F124u: goto label_14f124;
            case 0x14F128u: goto label_14f128;
            case 0x14F12Cu: goto label_14f12c;
            case 0x14F130u: goto label_14f130;
            case 0x14F134u: goto label_14f134;
            case 0x14F138u: goto label_14f138;
            case 0x14F13Cu: goto label_14f13c;
            case 0x14F140u: goto label_14f140;
            case 0x14F144u: goto label_14f144;
            case 0x14F148u: goto label_14f148;
            case 0x14F14Cu: goto label_14f14c;
            case 0x14F150u: goto label_14f150;
            case 0x14F154u: goto label_14f154;
            case 0x14F158u: goto label_14f158;
            case 0x14F15Cu: goto label_14f15c;
            case 0x14F160u: goto label_14f160;
            case 0x14F164u: goto label_14f164;
            case 0x14F168u: goto label_14f168;
            case 0x14F16Cu: goto label_14f16c;
            case 0x14F170u: goto label_14f170;
            case 0x14F174u: goto label_14f174;
            case 0x14F178u: goto label_14f178;
            case 0x14F17Cu: goto label_14f17c;
            case 0x14F180u: goto label_14f180;
            case 0x14F184u: goto label_14f184;
            case 0x14F188u: goto label_14f188;
            case 0x14F18Cu: goto label_14f18c;
            case 0x14F190u: goto label_14f190;
            case 0x14F194u: goto label_14f194;
            case 0x14F198u: goto label_14f198;
            case 0x14F19Cu: goto label_14f19c;
            case 0x14F1A0u: goto label_14f1a0;
            case 0x14F1A4u: goto label_14f1a4;
            case 0x14F1A8u: goto label_14f1a8;
            default: break;
        }
        return;
    }
label_fallthrough_0x14f1a4:
    ctx->pc = 0x14F1ACu;
}
