#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_InitCD
// Address: 0x1728c0 - 0x1728fc
void SOUND_InitCD_0x1728c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_InitCD_0x1728c0");
#endif

    ctx->pc = 0x1728c0u;

    // 0x1728c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1728c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1728c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1728c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1728c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1728c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1728cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1728ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728d0: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x1728D0u;
    SET_GPR_U32(ctx, 31, 0x1728D8u);
    ctx->pc = 0x1728D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1728D0u;
            // 0x1728d4: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728D8u; }
        if (ctx->pc != 0x1728D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728D8u; }
        if (ctx->pc != 0x1728D8u) { return; }
    }
    ctx->pc = 0x1728D8u;
    // 0x1728d8: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1728d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1728dc: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1728DCu;
    SET_GPR_U32(ctx, 31, 0x1728E4u);
    ctx->pc = 0x1728E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1728DCu;
            // 0x1728e0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728E4u; }
        if (ctx->pc != 0x1728E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728E4u; }
        if (ctx->pc != 0x1728E4u) { return; }
    }
    ctx->pc = 0x1728E4u;
    // 0x1728e4: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x1728E4u;
    SET_GPR_U32(ctx, 31, 0x1728ECu);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728ECu; }
        if (ctx->pc != 0x1728ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728ECu; }
        if (ctx->pc != 0x1728ECu) { return; }
    }
    ctx->pc = 0x1728ECu;
    // 0x1728ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1728ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1728f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1728f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1728f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1728F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1728F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1728F4u;
            // 0x1728f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1728FCu;
}
