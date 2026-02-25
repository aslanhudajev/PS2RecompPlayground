#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitItemCareer_Hontai
// Address: 0x1dfbd0 - 0x1dfc4c
void InitItemCareer_Hontai_0x1dfbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitItemCareer_Hontai_0x1dfbd0");
#endif

    ctx->pc = 0x1dfbd0u;

    // 0x1dfbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfbd4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1dfbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dfbd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dfbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dfbdc: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1dfbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1dfbe0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dfbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfbe4: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x1dfbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dfbe8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1DFBE8u;
    SET_GPR_U32(ctx, 31, 0x1DFBF0u);
    ctx->pc = 0x1DFBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBE8u;
            // 0x1dfbec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBF0u; }
        if (ctx->pc != 0x1DFBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBF0u; }
        if (ctx->pc != 0x1DFBF0u) { return; }
    }
    ctx->pc = 0x1DFBF0u;
    // 0x1dfbf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dfbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dfbf4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1DFBF4u;
    SET_GPR_U32(ctx, 31, 0x1DFBFCu);
    ctx->pc = 0x1DFBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBF4u;
            // 0x1dfbf8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBFCu; }
        if (ctx->pc != 0x1DFBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBFCu; }
        if (ctx->pc != 0x1DFBFCu) { return; }
    }
    ctx->pc = 0x1DFBFCu;
    // 0x1dfbfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dfbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc04: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1DFC04u;
    SET_GPR_U32(ctx, 31, 0x1DFC0Cu);
    ctx->pc = 0x1DFC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC04u;
            // 0x1dfc08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC0Cu; }
        if (ctx->pc != 0x1DFC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC0Cu; }
        if (ctx->pc != 0x1DFC0Cu) { return; }
    }
    ctx->pc = 0x1DFC0Cu;
    // 0x1dfc0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc10: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1DFC10u;
    SET_GPR_U32(ctx, 31, 0x1DFC18u);
    ctx->pc = 0x1DFC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC10u;
            // 0x1dfc14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC18u; }
        if (ctx->pc != 0x1DFC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC18u; }
        if (ctx->pc != 0x1DFC18u) { return; }
    }
    ctx->pc = 0x1DFC18u;
    // 0x1dfc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc1c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1DFC1Cu;
    SET_GPR_U32(ctx, 31, 0x1DFC24u);
    ctx->pc = 0x1DFC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC1Cu;
            // 0x1dfc20: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC24u; }
        if (ctx->pc != 0x1DFC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC24u; }
        if (ctx->pc != 0x1DFC24u) { return; }
    }
    ctx->pc = 0x1DFC24u;
    // 0x1dfc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc28: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1DFC28u;
    SET_GPR_U32(ctx, 31, 0x1DFC30u);
    ctx->pc = 0x1DFC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC28u;
            // 0x1dfc2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC30u; }
        if (ctx->pc != 0x1DFC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC30u; }
        if (ctx->pc != 0x1DFC30u) { return; }
    }
    ctx->pc = 0x1DFC30u;
    // 0x1dfc30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc34: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1DFC34u;
    SET_GPR_U32(ctx, 31, 0x1DFC3Cu);
    ctx->pc = 0x1DFC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC34u;
            // 0x1dfc38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC3Cu; }
        if (ctx->pc != 0x1DFC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC3Cu; }
        if (ctx->pc != 0x1DFC3Cu) { return; }
    }
    ctx->pc = 0x1DFC3Cu;
    // 0x1dfc3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfc40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC44u;
            // 0x1dfc48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFC4Cu;
}
