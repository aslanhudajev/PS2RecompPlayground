#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_StopSound
// Address: 0x173520 - 0x173578
void SOUND_StopSound_0x173520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_StopSound_0x173520");
#endif

    ctx->pc = 0x173520u;

    // 0x173520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17352c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17352cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173530: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173530u;
    {
        const bool branch_taken_0x173530 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x173534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173530u;
            // 0x173534: 0x2a010030  slti        $at, $s0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173530) {
            ctx->pc = 0x173540u;
            goto label_173540;
        }
    }
    ctx->pc = 0x173538u;
    // 0x173538: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x173538u;
    {
        const bool branch_taken_0x173538 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x173538) {
            ctx->pc = 0x173548u;
            goto label_173548;
        }
    }
    ctx->pc = 0x173540u;
label_173540:
    // 0x173540: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173540u;
    {
        const bool branch_taken_0x173540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173540u;
            // 0x173544: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173540) {
            ctx->pc = 0x173568u;
            goto label_173568;
        }
    }
    ctx->pc = 0x173548u;
label_173548:
    // 0x173548: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x173548u;
    SET_GPR_U32(ctx, 31, 0x173550u);
    ctx->pc = 0x17354Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173548u;
            // 0x17354c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173550u; }
        if (ctx->pc != 0x173550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173550u; }
        if (ctx->pc != 0x173550u) { return; }
    }
    ctx->pc = 0x173550u;
    // 0x173550: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x173550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x173554: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x173554u;
    SET_GPR_U32(ctx, 31, 0x17355Cu);
    ctx->pc = 0x173558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173554u;
            // 0x173558: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17355Cu; }
        if (ctx->pc != 0x17355Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17355Cu; }
        if (ctx->pc != 0x17355Cu) { return; }
    }
    ctx->pc = 0x17355Cu;
    // 0x17355c: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x17355Cu;
    SET_GPR_U32(ctx, 31, 0x173564u);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173564u; }
        if (ctx->pc != 0x173564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173564u; }
        if (ctx->pc != 0x173564u) { return; }
    }
    ctx->pc = 0x173564u;
    // 0x173564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173568:
    // 0x173568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17356c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17356cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173570: 0x3e00008  jr          $ra
    ctx->pc = 0x173570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173570u;
            // 0x173574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173540u: goto label_173540;
            case 0x173548u: goto label_173548;
            case 0x173568u: goto label_173568;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173578u;
}
