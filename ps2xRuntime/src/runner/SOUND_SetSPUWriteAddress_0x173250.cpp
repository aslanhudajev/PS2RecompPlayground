#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_SetSPUWriteAddress
// Address: 0x173250 - 0x173290
void SOUND_SetSPUWriteAddress_0x173250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_SetSPUWriteAddress_0x173250");
#endif

    ctx->pc = 0x173250u;

    // 0x173250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173254: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17325c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173264: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x173264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x173268: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x173268u;
    SET_GPR_U32(ctx, 31, 0x173270u);
    ctx->pc = 0x17326Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173268u;
            // 0x17326c: 0xac3009e8  sw          $s0, 0x9E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 2536), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173270u; }
        if (ctx->pc != 0x173270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173270u; }
        if (ctx->pc != 0x173270u) { return; }
    }
    ctx->pc = 0x173270u;
    // 0x173270: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x173270u;
    SET_GPR_U32(ctx, 31, 0x173278u);
    ctx->pc = 0x173274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173270u;
            // 0x173274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (runtime->hasFunction(0x173A60u)) {
        auto targetFn = runtime->lookupFunction(0x173A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173278u; }
        if (ctx->pc != 0x173278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddLongData_0x173a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173278u; }
        if (ctx->pc != 0x173278u) { return; }
    }
    ctx->pc = 0x173278u;
    // 0x173278: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x173278u;
    SET_GPR_U32(ctx, 31, 0x173280u);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173280u; }
        if (ctx->pc != 0x173280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173280u; }
        if (ctx->pc != 0x173280u) { return; }
    }
    ctx->pc = 0x173280u;
    // 0x173280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173288: 0x3e00008  jr          $ra
    ctx->pc = 0x173288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173288u;
            // 0x17328c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173290u;
}
