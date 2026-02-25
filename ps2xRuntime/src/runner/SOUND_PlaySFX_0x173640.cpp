#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_PlaySFX
// Address: 0x173640 - 0x17372c
void SOUND_PlaySFX_0x173640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_PlaySFX_0x173640");
#endif

    ctx->pc = 0x173640u;

    // 0x173640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x173640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x173644: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x173644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x173648: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x173648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17364c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17364cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x173650: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x173650u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173654: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x173654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x173658: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x173658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17365c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17365cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173660: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x173660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173668: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x173668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17366c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173670: 0x6800005  bltz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x173670u;
    {
        const bool branch_taken_0x173670 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x173674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173670u;
            // 0x173674: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173670) {
            ctx->pc = 0x173688u;
            goto label_173688;
        }
    }
    ctx->pc = 0x173678u;
    // 0x173678: 0x2a810030  slti        $at, $s4, 0x30
    ctx->pc = 0x173678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x17367c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17367Cu;
    {
        const bool branch_taken_0x17367c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17367c) {
            ctx->pc = 0x173690u;
            goto label_173690;
        }
    }
    ctx->pc = 0x173684u;
    // 0x173684: 0x0  nop
    ctx->pc = 0x173684u;
    // NOP
label_173688:
    // 0x173688: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x173688u;
    {
        const bool branch_taken_0x173688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17368Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173688u;
            // 0x17368c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173688) {
            ctx->pc = 0x173708u;
            goto label_173708;
        }
    }
    ctx->pc = 0x173690u;
label_173690:
    // 0x173690: 0xa1200  sll         $v0, $t2, 8
    ctx->pc = 0x173690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x173694: 0x1228021  addu        $s0, $t1, $v0
    ctx->pc = 0x173694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x173698: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x173698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17369c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x17369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1736a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1736a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736a4: 0x24420a80  addiu       $v0, $v0, 0xA80
    ctx->pc = 0x1736a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1736a8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1736ac: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x1736ACu;
    SET_GPR_U32(ctx, 31, 0x1736B4u);
    ctx->pc = 0x1736B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736ACu;
            // 0x1736b0: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736B4u; }
        if (ctx->pc != 0x1736B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736B4u; }
        if (ctx->pc != 0x1736B4u) { return; }
    }
    ctx->pc = 0x1736B4u;
    // 0x1736b4: 0x15243c  dsll32      $a0, $s5, 16
    ctx->pc = 0x1736b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 16));
    // 0x1736b8: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1736B8u;
    SET_GPR_U32(ctx, 31, 0x1736C0u);
    ctx->pc = 0x1736BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736B8u;
            // 0x1736bc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736C0u; }
        if (ctx->pc != 0x1736C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736C0u; }
        if (ctx->pc != 0x1736C0u) { return; }
    }
    ctx->pc = 0x1736C0u;
    // 0x1736c0: 0x14243c  dsll32      $a0, $s4, 16
    ctx->pc = 0x1736c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1736c4: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1736C4u;
    SET_GPR_U32(ctx, 31, 0x1736CCu);
    ctx->pc = 0x1736C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736C4u;
            // 0x1736c8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736CCu; }
        if (ctx->pc != 0x1736CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736CCu; }
        if (ctx->pc != 0x1736CCu) { return; }
    }
    ctx->pc = 0x1736CCu;
    // 0x1736cc: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x1736ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1736d0: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1736D0u;
    SET_GPR_U32(ctx, 31, 0x1736D8u);
    ctx->pc = 0x1736D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736D0u;
            // 0x1736d4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736D8u; }
        if (ctx->pc != 0x1736D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736D8u; }
        if (ctx->pc != 0x1736D8u) { return; }
    }
    ctx->pc = 0x1736D8u;
    // 0x1736d8: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1736d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1736dc: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1736DCu;
    SET_GPR_U32(ctx, 31, 0x1736E4u);
    ctx->pc = 0x1736E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736DCu;
            // 0x1736e0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736E4u; }
        if (ctx->pc != 0x1736E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736E4u; }
        if (ctx->pc != 0x1736E4u) { return; }
    }
    ctx->pc = 0x1736E4u;
    // 0x1736e4: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1736e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1736e8: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1736E8u;
    SET_GPR_U32(ctx, 31, 0x1736F0u);
    ctx->pc = 0x1736ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736E8u;
            // 0x1736ec: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736F0u; }
        if (ctx->pc != 0x1736F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736F0u; }
        if (ctx->pc != 0x1736F0u) { return; }
    }
    ctx->pc = 0x1736F0u;
    // 0x1736f0: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1736f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1736f4: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1736F4u;
    SET_GPR_U32(ctx, 31, 0x1736FCu);
    ctx->pc = 0x1736F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1736F4u;
            // 0x1736f8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736FCu; }
        if (ctx->pc != 0x1736FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736FCu; }
        if (ctx->pc != 0x1736FCu) { return; }
    }
    ctx->pc = 0x1736FCu;
    // 0x1736fc: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x1736FCu;
    SET_GPR_U32(ctx, 31, 0x173704u);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173704u; }
        if (ctx->pc != 0x173704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173704u; }
        if (ctx->pc != 0x173704u) { return; }
    }
    ctx->pc = 0x173704u;
    // 0x173704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173708:
    // 0x173708: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x173708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17370c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17370cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173710: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x173710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173714: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x173714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173718: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17371c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17371cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173724: 0x3e00008  jr          $ra
    ctx->pc = 0x173724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173724u;
            // 0x173728: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173688u: goto label_173688;
            case 0x173690u: goto label_173690;
            case 0x173708u: goto label_173708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17372Cu;
}
