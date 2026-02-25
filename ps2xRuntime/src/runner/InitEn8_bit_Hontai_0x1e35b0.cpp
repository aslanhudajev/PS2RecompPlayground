#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn8_bit_Hontai
// Address: 0x1e35b0 - 0x1e36b0
void InitEn8_bit_Hontai_0x1e35b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn8_bit_Hontai_0x1e35b0");
#endif

    ctx->pc = 0x1e35b0u;

    // 0x1e35b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e35b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e35b4: 0x2404011b  addiu       $a0, $zero, 0x11B
    ctx->pc = 0x1e35b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
    // 0x1e35b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e35b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e35bc: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1e35bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e35c0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1E35C0u;
    SET_GPR_U32(ctx, 31, 0x1E35C8u);
    ctx->pc = 0x1E35C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35C0u;
            // 0x1e35c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35C8u; }
        if (ctx->pc != 0x1E35C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35C8u; }
        if (ctx->pc != 0x1E35C8u) { return; }
    }
    ctx->pc = 0x1E35C8u;
    // 0x1e35c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e35c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e35ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35d0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E35D0u;
    SET_GPR_U32(ctx, 31, 0x1E35D8u);
    ctx->pc = 0x1E35D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35D0u;
            // 0x1e35d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35D8u; }
        if (ctx->pc != 0x1E35D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35D8u; }
        if (ctx->pc != 0x1E35D8u) { return; }
    }
    ctx->pc = 0x1E35D8u;
    // 0x1e35d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e35d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35dc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E35DCu;
    SET_GPR_U32(ctx, 31, 0x1E35E4u);
    ctx->pc = 0x1E35E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35DCu;
            // 0x1e35e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35E4u; }
        if (ctx->pc != 0x1E35E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35E4u; }
        if (ctx->pc != 0x1E35E4u) { return; }
    }
    ctx->pc = 0x1E35E4u;
    // 0x1e35e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e35e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35e8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E35E8u;
    SET_GPR_U32(ctx, 31, 0x1E35F0u);
    ctx->pc = 0x1E35ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35E8u;
            // 0x1e35ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35F0u; }
        if (ctx->pc != 0x1E35F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35F0u; }
        if (ctx->pc != 0x1E35F0u) { return; }
    }
    ctx->pc = 0x1E35F0u;
    // 0x1e35f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e35f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35f4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E35F4u;
    SET_GPR_U32(ctx, 31, 0x1E35FCu);
    ctx->pc = 0x1E35F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35F4u;
            // 0x1e35f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35FCu; }
        if (ctx->pc != 0x1E35FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35FCu; }
        if (ctx->pc != 0x1E35FCu) { return; }
    }
    ctx->pc = 0x1E35FCu;
    // 0x1e35fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e35fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3600: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E3600u;
    SET_GPR_U32(ctx, 31, 0x1E3608u);
    ctx->pc = 0x1E3604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3600u;
            // 0x1e3604: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3608u; }
        if (ctx->pc != 0x1E3608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3608u; }
        if (ctx->pc != 0x1E3608u) { return; }
    }
    ctx->pc = 0x1E3608u;
    // 0x1e3608: 0x2404011c  addiu       $a0, $zero, 0x11C
    ctx->pc = 0x1e3608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x1e360c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1E360Cu;
    SET_GPR_U32(ctx, 31, 0x1E3614u);
    ctx->pc = 0x1E3610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E360Cu;
            // 0x1e3610: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3614u; }
        if (ctx->pc != 0x1E3614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3614u; }
        if (ctx->pc != 0x1E3614u) { return; }
    }
    ctx->pc = 0x1E3614u;
    // 0x1e3614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e3614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e361c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E361Cu;
    SET_GPR_U32(ctx, 31, 0x1E3624u);
    ctx->pc = 0x1E3620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E361Cu;
            // 0x1e3620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3624u; }
        if (ctx->pc != 0x1E3624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3624u; }
        if (ctx->pc != 0x1E3624u) { return; }
    }
    ctx->pc = 0x1E3624u;
    // 0x1e3624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3628: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E3628u;
    SET_GPR_U32(ctx, 31, 0x1E3630u);
    ctx->pc = 0x1E362Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3628u;
            // 0x1e362c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3630u; }
        if (ctx->pc != 0x1E3630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3630u; }
        if (ctx->pc != 0x1E3630u) { return; }
    }
    ctx->pc = 0x1E3630u;
    // 0x1e3630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3634: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E3634u;
    SET_GPR_U32(ctx, 31, 0x1E363Cu);
    ctx->pc = 0x1E3638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3634u;
            // 0x1e3638: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E363Cu; }
        if (ctx->pc != 0x1E363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E363Cu; }
        if (ctx->pc != 0x1E363Cu) { return; }
    }
    ctx->pc = 0x1E363Cu;
    // 0x1e363c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e363cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3640: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E3640u;
    SET_GPR_U32(ctx, 31, 0x1E3648u);
    ctx->pc = 0x1E3644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3640u;
            // 0x1e3644: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3648u; }
        if (ctx->pc != 0x1E3648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3648u; }
        if (ctx->pc != 0x1E3648u) { return; }
    }
    ctx->pc = 0x1E3648u;
    // 0x1e3648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e364c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E364Cu;
    SET_GPR_U32(ctx, 31, 0x1E3654u);
    ctx->pc = 0x1E3650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E364Cu;
            // 0x1e3650: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3654u; }
        if (ctx->pc != 0x1E3654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3654u; }
        if (ctx->pc != 0x1E3654u) { return; }
    }
    ctx->pc = 0x1E3654u;
    // 0x1e3654: 0x2404011d  addiu       $a0, $zero, 0x11D
    ctx->pc = 0x1e3654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x1e3658: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1E3658u;
    SET_GPR_U32(ctx, 31, 0x1E3660u);
    ctx->pc = 0x1E365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3658u;
            // 0x1e365c: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3660u; }
        if (ctx->pc != 0x1E3660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3660u; }
        if (ctx->pc != 0x1E3660u) { return; }
    }
    ctx->pc = 0x1E3660u;
    // 0x1e3660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e3660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3668: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E3668u;
    SET_GPR_U32(ctx, 31, 0x1E3670u);
    ctx->pc = 0x1E366Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3668u;
            // 0x1e366c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3670u; }
        if (ctx->pc != 0x1E3670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3670u; }
        if (ctx->pc != 0x1E3670u) { return; }
    }
    ctx->pc = 0x1E3670u;
    // 0x1e3670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3674: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E3674u;
    SET_GPR_U32(ctx, 31, 0x1E367Cu);
    ctx->pc = 0x1E3678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3674u;
            // 0x1e3678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E367Cu; }
        if (ctx->pc != 0x1E367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E367Cu; }
        if (ctx->pc != 0x1E367Cu) { return; }
    }
    ctx->pc = 0x1E367Cu;
    // 0x1e367c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3680: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E3680u;
    SET_GPR_U32(ctx, 31, 0x1E3688u);
    ctx->pc = 0x1E3684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3680u;
            // 0x1e3684: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3688u; }
        if (ctx->pc != 0x1E3688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3688u; }
        if (ctx->pc != 0x1E3688u) { return; }
    }
    ctx->pc = 0x1E3688u;
    // 0x1e3688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e368c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E368Cu;
    SET_GPR_U32(ctx, 31, 0x1E3694u);
    ctx->pc = 0x1E3690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E368Cu;
            // 0x1e3690: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3694u; }
        if (ctx->pc != 0x1E3694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3694u; }
        if (ctx->pc != 0x1E3694u) { return; }
    }
    ctx->pc = 0x1E3694u;
    // 0x1e3694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3698: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E3698u;
    SET_GPR_U32(ctx, 31, 0x1E36A0u);
    ctx->pc = 0x1E369Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3698u;
            // 0x1e369c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E36A0u; }
        if (ctx->pc != 0x1E36A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E36A0u; }
        if (ctx->pc != 0x1E36A0u) { return; }
    }
    ctx->pc = 0x1E36A0u;
    // 0x1e36a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e36a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e36a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e36a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e36a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E36A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E36ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36A8u;
            // 0x1e36ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E36B0u;
}
