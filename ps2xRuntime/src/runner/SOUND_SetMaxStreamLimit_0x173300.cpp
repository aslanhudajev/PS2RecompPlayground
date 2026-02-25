#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_SetMaxStreamLimit
// Address: 0x173300 - 0x173360
void SOUND_SetMaxStreamLimit_0x173300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_SetMaxStreamLimit_0x173300");
#endif

    ctx->pc = 0x173300u;

    // 0x173300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17330c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17330cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173310: 0x2e010030  sltiu       $at, $s0, 0x30
    ctx->pc = 0x173310u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x173314: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x173314u;
    {
        const bool branch_taken_0x173314 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x173318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173314u;
            // 0x173318: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173314) {
            ctx->pc = 0x173328u;
            goto label_173328;
        }
    }
    ctx->pc = 0x17331Cu;
    // 0x17331c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17331Cu;
    {
        const bool branch_taken_0x17331c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17331c) {
            ctx->pc = 0x173350u;
            goto label_173350;
        }
    }
    ctx->pc = 0x173324u;
    // 0x173324: 0x0  nop
    ctx->pc = 0x173324u;
    // NOP
label_173328:
    // 0x173328: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17332c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x17332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173330: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x173330u;
    SET_GPR_U32(ctx, 31, 0x173338u);
    ctx->pc = 0x173334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173330u;
            // 0x173334: 0xac300a68  sw          $s0, 0xA68($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 2664), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173338u; }
        if (ctx->pc != 0x173338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173338u; }
        if (ctx->pc != 0x173338u) { return; }
    }
    ctx->pc = 0x173338u;
    // 0x173338: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x173338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17333c: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x17333Cu;
    SET_GPR_U32(ctx, 31, 0x173344u);
    ctx->pc = 0x173340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17333Cu;
            // 0x173340: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173344u; }
        if (ctx->pc != 0x173344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173344u; }
        if (ctx->pc != 0x173344u) { return; }
    }
    ctx->pc = 0x173344u;
    // 0x173344: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x173344u;
    SET_GPR_U32(ctx, 31, 0x17334Cu);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17334Cu; }
        if (ctx->pc != 0x17334Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17334Cu; }
        if (ctx->pc != 0x17334Cu) { return; }
    }
    ctx->pc = 0x17334Cu;
    // 0x17334c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17334cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173350:
    // 0x173350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173358: 0x3e00008  jr          $ra
    ctx->pc = 0x173358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17335Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173358u;
            // 0x17335c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173328u: goto label_173328;
            case 0x173350u: goto label_173350;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173360u;
}
