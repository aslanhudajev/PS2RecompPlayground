#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: StageEnemyInit
// Address: 0x16dd10 - 0x16ddf4
void StageEnemyInit_0x16dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("StageEnemyInit_0x16dd10");
#endif

    ctx->pc = 0x16dd10u;

    // 0x16dd10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16dd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16dd14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16dd18: 0xc05b96c  jal         func_16E5B0
    ctx->pc = 0x16DD18u;
    SET_GPR_U32(ctx, 31, 0x16DD20u);
    ctx->pc = 0x16E5B0u;
    if (runtime->hasFunction(0x16E5B0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD20u; }
        if (ctx->pc != 0x16DD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCareerInit_0x16e5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD20u; }
        if (ctx->pc != 0x16DD20u) { return; }
    }
    ctx->pc = 0x16DD20u;
    // 0x16dd20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16dd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16dd24: 0x8c233514  lw          $v1, 0x3514($at)
    ctx->pc = 0x16dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x16dd28: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x16dd28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x16dd2c: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x16DD2Cu;
    {
        const bool branch_taken_0x16dd2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD2Cu;
            // 0x16dd30: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd2c) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DD34u;
    // 0x16dd34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16dd38: 0x24841140  addiu       $a0, $a0, 0x1140
    ctx->pc = 0x16dd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4416));
    // 0x16dd3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16dd40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dd44: 0x600008  jr          $v1
    ctx->pc = 0x16DD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DD50u: goto label_16dd50;
            case 0x16DD60u: goto label_16dd60;
            case 0x16DD70u: goto label_16dd70;
            case 0x16DD80u: goto label_16dd80;
            case 0x16DD90u: goto label_16dd90;
            case 0x16DDA0u: goto label_16dda0;
            case 0x16DDB0u: goto label_16ddb0;
            case 0x16DDC0u: goto label_16ddc0;
            case 0x16DDD0u: goto label_16ddd0;
            case 0x16DDE0u: goto label_16dde0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DD4Cu;
    // 0x16dd4c: 0x0  nop
    ctx->pc = 0x16dd4cu;
    // NOP
label_16dd50:
    // 0x16dd50: 0xc05b94c  jal         func_16E530
    ctx->pc = 0x16DD50u;
    SET_GPR_U32(ctx, 31, 0x16DD58u);
    ctx->pc = 0x16E530u;
    if (runtime->hasFunction(0x16E530u)) {
        auto targetFn = runtime->lookupFunction(0x16E530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD58u; }
        if (ctx->pc != 0x16DD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage1EnemyInit_0x16e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD58u; }
        if (ctx->pc != 0x16DD58u) { return; }
    }
    ctx->pc = 0x16DD58u;
    // 0x16dd58: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16DD58u;
    {
        const bool branch_taken_0x16dd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd58) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DD60u;
label_16dd60:
    // 0x16dd60: 0xc05b920  jal         func_16E480
    ctx->pc = 0x16DD60u;
    SET_GPR_U32(ctx, 31, 0x16DD68u);
    ctx->pc = 0x16E480u;
    if (runtime->hasFunction(0x16E480u)) {
        auto targetFn = runtime->lookupFunction(0x16E480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD68u; }
        if (ctx->pc != 0x16DD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage2EnemyInit_0x16e480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD68u; }
        if (ctx->pc != 0x16DD68u) { return; }
    }
    ctx->pc = 0x16DD68u;
    // 0x16dd68: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16DD68u;
    {
        const bool branch_taken_0x16dd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd68) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DD70u;
label_16dd70:
    // 0x16dd70: 0xc05b8f0  jal         func_16E3C0
    ctx->pc = 0x16DD70u;
    SET_GPR_U32(ctx, 31, 0x16DD78u);
    ctx->pc = 0x16E3C0u;
    if (runtime->hasFunction(0x16E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x16E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD78u; }
        if (ctx->pc != 0x16DD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage3EnemyInit_0x16e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD78u; }
        if (ctx->pc != 0x16DD78u) { return; }
    }
    ctx->pc = 0x16DD78u;
    // 0x16dd78: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16DD78u;
    {
        const bool branch_taken_0x16dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd78) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DD80u;
label_16dd80:
    // 0x16dd80: 0xc05b8c0  jal         func_16E300
    ctx->pc = 0x16DD80u;
    SET_GPR_U32(ctx, 31, 0x16DD88u);
    ctx->pc = 0x16E300u;
    if (runtime->hasFunction(0x16E300u)) {
        auto targetFn = runtime->lookupFunction(0x16E300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD88u; }
        if (ctx->pc != 0x16DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage4EnemyInit_0x16e300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD88u; }
        if (ctx->pc != 0x16DD88u) { return; }
    }
    ctx->pc = 0x16DD88u;
    // 0x16dd88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16DD88u;
    {
        const bool branch_taken_0x16dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd88) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DD90u;
label_16dd90:
    // 0x16dd90: 0xc05b894  jal         func_16E250
    ctx->pc = 0x16DD90u;
    SET_GPR_U32(ctx, 31, 0x16DD98u);
    ctx->pc = 0x16E250u;
    if (runtime->hasFunction(0x16E250u)) {
        auto targetFn = runtime->lookupFunction(0x16E250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD98u; }
        if (ctx->pc != 0x16DD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage5EnemyInit_0x16e250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD98u; }
        if (ctx->pc != 0x16DD98u) { return; }
    }
    ctx->pc = 0x16DD98u;
    // 0x16dd98: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16DD98u;
    {
        const bool branch_taken_0x16dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd98) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DDA0u;
label_16dda0:
    // 0x16dda0: 0xc05b858  jal         func_16E160
    ctx->pc = 0x16DDA0u;
    SET_GPR_U32(ctx, 31, 0x16DDA8u);
    ctx->pc = 0x16E160u;
    if (runtime->hasFunction(0x16E160u)) {
        auto targetFn = runtime->lookupFunction(0x16E160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDA8u; }
        if (ctx->pc != 0x16DDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage6EnemyInit_0x16e160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDA8u; }
        if (ctx->pc != 0x16DDA8u) { return; }
    }
    ctx->pc = 0x16DDA8u;
    // 0x16dda8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16DDA8u;
    {
        const bool branch_taken_0x16dda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dda8) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DDB0u;
label_16ddb0:
    // 0x16ddb0: 0xc05b828  jal         func_16E0A0
    ctx->pc = 0x16DDB0u;
    SET_GPR_U32(ctx, 31, 0x16DDB8u);
    ctx->pc = 0x16E0A0u;
    if (runtime->hasFunction(0x16E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x16E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDB8u; }
        if (ctx->pc != 0x16DDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage7EnemyInit_0x16e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDB8u; }
        if (ctx->pc != 0x16DDB8u) { return; }
    }
    ctx->pc = 0x16DDB8u;
    // 0x16ddb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16DDB8u;
    {
        const bool branch_taken_0x16ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ddb8) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DDC0u;
label_16ddc0:
    // 0x16ddc0: 0xc05b7fc  jal         func_16DFF0
    ctx->pc = 0x16DDC0u;
    SET_GPR_U32(ctx, 31, 0x16DDC8u);
    ctx->pc = 0x16DFF0u;
    if (runtime->hasFunction(0x16DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x16DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDC8u; }
        if (ctx->pc != 0x16DDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage8EnemyInit_0x16dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDC8u; }
        if (ctx->pc != 0x16DDC8u) { return; }
    }
    ctx->pc = 0x16DDC8u;
    // 0x16ddc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16DDC8u;
    {
        const bool branch_taken_0x16ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ddc8) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DDD0u;
label_16ddd0:
    // 0x16ddd0: 0xc05b7cc  jal         func_16DF30
    ctx->pc = 0x16DDD0u;
    SET_GPR_U32(ctx, 31, 0x16DDD8u);
    ctx->pc = 0x16DF30u;
    if (runtime->hasFunction(0x16DF30u)) {
        auto targetFn = runtime->lookupFunction(0x16DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDD8u; }
        if (ctx->pc != 0x16DDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX1EnemyInit_0x16df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDD8u; }
        if (ctx->pc != 0x16DDD8u) { return; }
    }
    ctx->pc = 0x16DDD8u;
    // 0x16ddd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16DDD8u;
    {
        const bool branch_taken_0x16ddd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ddd8) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DDE0u;
label_16dde0:
    // 0x16dde0: 0xc05b794  jal         func_16DE50
    ctx->pc = 0x16DDE0u;
    SET_GPR_U32(ctx, 31, 0x16DDE8u);
    ctx->pc = 0x16DE50u;
    if (runtime->hasFunction(0x16DE50u)) {
        auto targetFn = runtime->lookupFunction(0x16DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDE8u; }
        if (ctx->pc != 0x16DDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX2EnemyInit_0x16de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDE8u; }
        if (ctx->pc != 0x16DDE8u) { return; }
    }
    ctx->pc = 0x16DDE8u;
label_16dde8:
    // 0x16dde8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ddec: 0x3e00008  jr          $ra
    ctx->pc = 0x16DDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDECu;
            // 0x16ddf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DD50u: goto label_16dd50;
            case 0x16DD60u: goto label_16dd60;
            case 0x16DD70u: goto label_16dd70;
            case 0x16DD80u: goto label_16dd80;
            case 0x16DD90u: goto label_16dd90;
            case 0x16DDA0u: goto label_16dda0;
            case 0x16DDB0u: goto label_16ddb0;
            case 0x16DDC0u: goto label_16ddc0;
            case 0x16DDD0u: goto label_16ddd0;
            case 0x16DDE0u: goto label_16dde0;
            case 0x16DDE8u: goto label_16dde8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DDF4u;
}
