#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_SetStreamParent_Int
// Address: 0x1726a0 - 0x172758
void SOUND_SetStreamParent_Int_0x1726a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_SetStreamParent_Int_0x1726a0");
#endif

    ctx->pc = 0x1726a0u;

    // 0x1726a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1726a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1726a4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1726a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1726a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1726a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1726ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1726acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1726b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1726b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1726b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1726b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1726b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1726bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1726bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726c0: 0x8c220a68  lw          $v0, 0xA68($at)
    ctx->pc = 0x1726c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1726c4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1726c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1726c8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1726C8u;
    {
        const bool branch_taken_0x1726c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1726CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1726C8u;
            // 0x1726cc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1726c8) {
            ctx->pc = 0x172710u;
            goto label_172710;
        }
    }
    ctx->pc = 0x1726D0u;
    // 0x1726d0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1726d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1726d4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1726D4u;
    SET_GPR_U32(ctx, 31, 0x1726DCu);
    ctx->pc = 0x1726D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1726D4u;
            // 0x1726d8: 0x24841690  addiu       $a0, $a0, 0x1690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726DCu; }
        if (ctx->pc != 0x1726DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726DCu; }
        if (ctx->pc != 0x1726DCu) { return; }
    }
    ctx->pc = 0x1726DCu;
    // 0x1726dc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1726dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1726e0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1726e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1726e4: 0x8c220a68  lw          $v0, 0xA68($at)
    ctx->pc = 0x1726e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x1726e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1726e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726ec: 0x248415c0  addiu       $a0, $a0, 0x15C0
    ctx->pc = 0x1726ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    // 0x1726f0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1726F0u;
    SET_GPR_U32(ctx, 31, 0x1726F8u);
    ctx->pc = 0x1726F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1726F0u;
            // 0x1726f4: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726F8u; }
        if (ctx->pc != 0x1726F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726F8u; }
        if (ctx->pc != 0x1726F8u) { return; }
    }
    ctx->pc = 0x1726F8u;
    // 0x1726f8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1726f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1726fc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1726FCu;
    SET_GPR_U32(ctx, 31, 0x172704u);
    ctx->pc = 0x172700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1726FCu;
            // 0x172700: 0x248415f0  addiu       $a0, $a0, 0x15F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172704u; }
        if (ctx->pc != 0x172704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172704u; }
        if (ctx->pc != 0x172704u) { return; }
    }
    ctx->pc = 0x172704u;
    // 0x172704: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x172704u;
    {
        const bool branch_taken_0x172704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172704) {
            ctx->pc = 0x172740u;
            goto label_172740;
        }
    }
    ctx->pc = 0x17270Cu;
    // 0x17270c: 0x0  nop
    ctx->pc = 0x17270cu;
    // NOP
label_172710:
    // 0x172710: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x172710u;
    SET_GPR_U32(ctx, 31, 0x172718u);
    ctx->pc = 0x172714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172710u;
            // 0x172714: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172718u; }
        if (ctx->pc != 0x172718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172718u; }
        if (ctx->pc != 0x172718u) { return; }
    }
    ctx->pc = 0x172718u;
    // 0x172718: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x172718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x17271c: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x17271Cu;
    SET_GPR_U32(ctx, 31, 0x172724u);
    ctx->pc = 0x172720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17271Cu;
            // 0x172720: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172724u; }
        if (ctx->pc != 0x172724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172724u; }
        if (ctx->pc != 0x172724u) { return; }
    }
    ctx->pc = 0x172724u;
    // 0x172724: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x172724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x172728: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x172728u;
    SET_GPR_U32(ctx, 31, 0x172730u);
    ctx->pc = 0x17272Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172728u;
            // 0x17272c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172730u; }
        if (ctx->pc != 0x172730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172730u; }
        if (ctx->pc != 0x172730u) { return; }
    }
    ctx->pc = 0x172730u;
    // 0x172730: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172730u;
    SET_GPR_U32(ctx, 31, 0x172738u);
    ctx->pc = 0x172734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172730u;
            // 0x172734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (runtime->hasFunction(0x173A60u)) {
        auto targetFn = runtime->lookupFunction(0x173A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172738u; }
        if (ctx->pc != 0x172738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddLongData_0x173a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172738u; }
        if (ctx->pc != 0x172738u) { return; }
    }
    ctx->pc = 0x172738u;
    // 0x172738: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x172738u;
    SET_GPR_U32(ctx, 31, 0x172740u);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172740u; }
        if (ctx->pc != 0x172740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172740u; }
        if (ctx->pc != 0x172740u) { return; }
    }
    ctx->pc = 0x172740u;
label_172740:
    // 0x172740: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x172740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17274c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17274cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172750: 0x3e00008  jr          $ra
    ctx->pc = 0x172750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172750u;
            // 0x172754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172710u: goto label_172710;
            case 0x172740u: goto label_172740;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172758u;
}
