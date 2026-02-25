#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn1_02_Hontai
// Address: 0x1e9af0 - 0x1e9b58
void InitEn1_02_Hontai_0x1e9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn1_02_Hontai_0x1e9af0");
#endif

    ctx->pc = 0x1e9af0u;

    // 0x1e9af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9af4: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1e9af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1e9af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9afc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1e9afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1e9b00: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1E9B00u;
    SET_GPR_U32(ctx, 31, 0x1E9B08u);
    ctx->pc = 0x1E9B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B00u;
            // 0x1e9b04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B08u; }
        if (ctx->pc != 0x1E9B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B08u; }
        if (ctx->pc != 0x1E9B08u) { return; }
    }
    ctx->pc = 0x1E9B08u;
    // 0x1e9b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b10: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E9B10u;
    SET_GPR_U32(ctx, 31, 0x1E9B18u);
    ctx->pc = 0x1E9B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B10u;
            // 0x1e9b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B18u; }
        if (ctx->pc != 0x1E9B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B18u; }
        if (ctx->pc != 0x1E9B18u) { return; }
    }
    ctx->pc = 0x1E9B18u;
    // 0x1e9b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b1c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E9B1Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B24u);
    ctx->pc = 0x1E9B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B1Cu;
            // 0x1e9b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B24u; }
        if (ctx->pc != 0x1E9B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B24u; }
        if (ctx->pc != 0x1E9B24u) { return; }
    }
    ctx->pc = 0x1E9B24u;
    // 0x1e9b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b28: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E9B28u;
    SET_GPR_U32(ctx, 31, 0x1E9B30u);
    ctx->pc = 0x1E9B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B28u;
            // 0x1e9b2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B30u; }
        if (ctx->pc != 0x1E9B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B30u; }
        if (ctx->pc != 0x1E9B30u) { return; }
    }
    ctx->pc = 0x1E9B30u;
    // 0x1e9b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b34: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E9B34u;
    SET_GPR_U32(ctx, 31, 0x1E9B3Cu);
    ctx->pc = 0x1E9B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B34u;
            // 0x1e9b38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B3Cu; }
        if (ctx->pc != 0x1E9B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B3Cu; }
        if (ctx->pc != 0x1E9B3Cu) { return; }
    }
    ctx->pc = 0x1E9B3Cu;
    // 0x1e9b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9b40: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E9B40u;
    SET_GPR_U32(ctx, 31, 0x1E9B48u);
    ctx->pc = 0x1E9B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B40u;
            // 0x1e9b44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B48u; }
        if (ctx->pc != 0x1E9B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B48u; }
        if (ctx->pc != 0x1E9B48u) { return; }
    }
    ctx->pc = 0x1E9B48u;
    // 0x1e9b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9b50: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B50u;
            // 0x1e9b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9B58u;
}
