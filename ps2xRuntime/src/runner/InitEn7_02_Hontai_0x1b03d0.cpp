#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn7_02_Hontai
// Address: 0x1b03d0 - 0x1b0438
void InitEn7_02_Hontai_0x1b03d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn7_02_Hontai_0x1b03d0");
#endif

    ctx->pc = 0x1b03d0u;

    // 0x1b03d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b03d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b03d4: 0x2404010f  addiu       $a0, $zero, 0x10F
    ctx->pc = 0x1b03d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x1b03d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b03d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b03dc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1b03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1b03e0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B03E0u;
    SET_GPR_U32(ctx, 31, 0x1B03E8u);
    ctx->pc = 0x1B03E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03E0u;
            // 0x1b03e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03E8u; }
        if (ctx->pc != 0x1B03E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03E8u; }
        if (ctx->pc != 0x1B03E8u) { return; }
    }
    ctx->pc = 0x1B03E8u;
    // 0x1b03e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b03e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b03ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B03F0u;
    SET_GPR_U32(ctx, 31, 0x1B03F8u);
    ctx->pc = 0x1B03F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03F0u;
            // 0x1b03f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03F8u; }
        if (ctx->pc != 0x1B03F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03F8u; }
        if (ctx->pc != 0x1B03F8u) { return; }
    }
    ctx->pc = 0x1B03F8u;
    // 0x1b03f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b03f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03fc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B03FCu;
    SET_GPR_U32(ctx, 31, 0x1B0404u);
    ctx->pc = 0x1B0400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03FCu;
            // 0x1b0400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0404u; }
        if (ctx->pc != 0x1B0404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0404u; }
        if (ctx->pc != 0x1B0404u) { return; }
    }
    ctx->pc = 0x1B0404u;
    // 0x1b0404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0408: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B0408u;
    SET_GPR_U32(ctx, 31, 0x1B0410u);
    ctx->pc = 0x1B040Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0408u;
            // 0x1b040c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0410u; }
        if (ctx->pc != 0x1B0410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0410u; }
        if (ctx->pc != 0x1B0410u) { return; }
    }
    ctx->pc = 0x1B0410u;
    // 0x1b0410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0414: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B0414u;
    SET_GPR_U32(ctx, 31, 0x1B041Cu);
    ctx->pc = 0x1B0418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0414u;
            // 0x1b0418: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B041Cu; }
        if (ctx->pc != 0x1B041Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B041Cu; }
        if (ctx->pc != 0x1B041Cu) { return; }
    }
    ctx->pc = 0x1B041Cu;
    // 0x1b041c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0420: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B0420u;
    SET_GPR_U32(ctx, 31, 0x1B0428u);
    ctx->pc = 0x1B0424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0420u;
            // 0x1b0424: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0428u; }
        if (ctx->pc != 0x1B0428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0428u; }
        if (ctx->pc != 0x1B0428u) { return; }
    }
    ctx->pc = 0x1B0428u;
    // 0x1b0428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b042c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b042cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0430: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0430u;
            // 0x1b0434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0438u;
}
