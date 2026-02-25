#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_GetStatus
// Address: 0x1734a0 - 0x173520
void SOUND_GetStatus_0x1734a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_GetStatus_0x1734a0");
#endif

    ctx->pc = 0x1734a0u;

    // 0x1734a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1734a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1734a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1734a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1734a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1734a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1734ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1734acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1734b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1734b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1734b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1734b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734b8: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1734B8u;
    {
        const bool branch_taken_0x1734b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1734BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1734B8u;
            // 0x1734bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734b8) {
            ctx->pc = 0x1734D8u;
            goto label_1734d8;
        }
    }
    ctx->pc = 0x1734C0u;
    // 0x1734c0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1734c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1734c4: 0xac22a010  sw          $v0, -0x5FF0($at)
    ctx->pc = 0x1734c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942736), GPR_U32(ctx, 2));
    // 0x1734c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1734c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1734cc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1734ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1734d0: 0xac2209e0  sw          $v0, 0x9E0($at)
    ctx->pc = 0x1734d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2528), GPR_U32(ctx, 2));
    // 0x1734d4: 0x0  nop
    ctx->pc = 0x1734d4u;
    // NOP
label_1734d8:
    // 0x1734d8: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x1734D8u;
    SET_GPR_U32(ctx, 31, 0x1734E0u);
    ctx->pc = 0x1734DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1734D8u;
            // 0x1734dc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734E0u; }
        if (ctx->pc != 0x1734E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734E0u; }
        if (ctx->pc != 0x1734E0u) { return; }
    }
    ctx->pc = 0x1734E0u;
    // 0x1734e0: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1734e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1734e4: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1734E4u;
    SET_GPR_U32(ctx, 31, 0x1734ECu);
    ctx->pc = 0x1734E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1734E4u;
            // 0x1734e8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734ECu; }
        if (ctx->pc != 0x1734ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734ECu; }
        if (ctx->pc != 0x1734ECu) { return; }
    }
    ctx->pc = 0x1734ECu;
    // 0x1734ec: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1734ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1734f0: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1734F0u;
    SET_GPR_U32(ctx, 31, 0x1734F8u);
    ctx->pc = 0x1734F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1734F0u;
            // 0x1734f4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734F8u; }
        if (ctx->pc != 0x1734F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734F8u; }
        if (ctx->pc != 0x1734F8u) { return; }
    }
    ctx->pc = 0x1734F8u;
    // 0x1734f8: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x1734F8u;
    SET_GPR_U32(ctx, 31, 0x173500u);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173500u; }
        if (ctx->pc != 0x173500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173500u; }
        if (ctx->pc != 0x173500u) { return; }
    }
    ctx->pc = 0x173500u;
    // 0x173500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173504: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173508: 0xa0230a70  sb          $v1, 0xA70($at)
    ctx->pc = 0x173508u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 2672), (uint8_t)GPR_U32(ctx, 3));
    // 0x17350c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17350cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173518: 0x3e00008  jr          $ra
    ctx->pc = 0x173518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17351Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173518u;
            // 0x17351c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1734D8u: goto label_1734d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173520u;
}
