#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_CreateFileInfo
// Address: 0x1729c0 - 0x172a24
void SOUND_CreateFileInfo_0x1729c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_CreateFileInfo_0x1729c0");
#endif

    ctx->pc = 0x1729c0u;

    // 0x1729c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1729c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1729c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1729c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1729c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1729c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1729cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1729ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1729d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1729d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1729d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1729d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1729d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1729dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729e0: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x1729E0u;
    SET_GPR_U32(ctx, 31, 0x1729E8u);
    ctx->pc = 0x1729E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1729E0u;
            // 0x1729e4: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729E8u; }
        if (ctx->pc != 0x1729E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729E8u; }
        if (ctx->pc != 0x1729E8u) { return; }
    }
    ctx->pc = 0x1729E8u;
    // 0x1729e8: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1729e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1729ec: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1729ECu;
    SET_GPR_U32(ctx, 31, 0x1729F4u);
    ctx->pc = 0x1729F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1729ECu;
            // 0x1729f0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729F4u; }
        if (ctx->pc != 0x1729F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729F4u; }
        if (ctx->pc != 0x1729F4u) { return; }
    }
    ctx->pc = 0x1729F4u;
    // 0x1729f4: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1729F4u;
    SET_GPR_U32(ctx, 31, 0x1729FCu);
    ctx->pc = 0x1729F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1729F4u;
            // 0x1729f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (runtime->hasFunction(0x173A60u)) {
        auto targetFn = runtime->lookupFunction(0x173A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729FCu; }
        if (ctx->pc != 0x1729FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddLongData_0x173a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729FCu; }
        if (ctx->pc != 0x1729FCu) { return; }
    }
    ctx->pc = 0x1729FCu;
    // 0x1729fc: 0xc05ce74  jal         func_1739D0
    ctx->pc = 0x1729FCu;
    SET_GPR_U32(ctx, 31, 0x172A04u);
    ctx->pc = 0x172A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1729FCu;
            // 0x172a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1739D0u;
    if (runtime->hasFunction(0x1739D0u)) {
        auto targetFn = runtime->lookupFunction(0x1739D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A04u; }
        if (ctx->pc != 0x172A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddString_0x1739d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A04u; }
        if (ctx->pc != 0x172A04u) { return; }
    }
    ctx->pc = 0x172A04u;
    // 0x172a04: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x172A04u;
    SET_GPR_U32(ctx, 31, 0x172A0Cu);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A0Cu; }
        if (ctx->pc != 0x172A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A0Cu; }
        if (ctx->pc != 0x172A0Cu) { return; }
    }
    ctx->pc = 0x172A0Cu;
    // 0x172a0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x172a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x172A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172A1Cu;
            // 0x172a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172A24u;
}
