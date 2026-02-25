#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_AllocateSpotFXMemory
// Address: 0x172900 - 0x17293c
void SOUND_AllocateSpotFXMemory_0x172900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_AllocateSpotFXMemory_0x172900");
#endif

    ctx->pc = 0x172900u;

    // 0x172900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17290c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17290cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172910: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x172910u;
    SET_GPR_U32(ctx, 31, 0x172918u);
    ctx->pc = 0x172914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172910u;
            // 0x172914: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172918u; }
        if (ctx->pc != 0x172918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172918u; }
        if (ctx->pc != 0x172918u) { return; }
    }
    ctx->pc = 0x172918u;
    // 0x172918: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x172918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17291c: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x17291Cu;
    SET_GPR_U32(ctx, 31, 0x172924u);
    ctx->pc = 0x172920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17291Cu;
            // 0x172920: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172924u; }
        if (ctx->pc != 0x172924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172924u; }
        if (ctx->pc != 0x172924u) { return; }
    }
    ctx->pc = 0x172924u;
    // 0x172924: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x172924u;
    SET_GPR_U32(ctx, 31, 0x17292Cu);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17292Cu; }
        if (ctx->pc != 0x17292Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17292Cu; }
        if (ctx->pc != 0x17292Cu) { return; }
    }
    ctx->pc = 0x17292Cu;
    // 0x17292c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17292cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172934: 0x3e00008  jr          $ra
    ctx->pc = 0x172934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172934u;
            // 0x172938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17293Cu;
}
