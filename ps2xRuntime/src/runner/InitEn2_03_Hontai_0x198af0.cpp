#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn2_03_Hontai
// Address: 0x198af0 - 0x198b58
void InitEn2_03_Hontai_0x198af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn2_03_Hontai_0x198af0");
#endif

    ctx->pc = 0x198af0u;

    // 0x198af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198af4: 0x2404008b  addiu       $a0, $zero, 0x8B
    ctx->pc = 0x198af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x198af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x198afc: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x198afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x198b00: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x198B00u;
    SET_GPR_U32(ctx, 31, 0x198B08u);
    ctx->pc = 0x198B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B00u;
            // 0x198b04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B08u; }
        if (ctx->pc != 0x198B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B08u; }
        if (ctx->pc != 0x198B08u) { return; }
    }
    ctx->pc = 0x198B08u;
    // 0x198b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b10: 0xc060630  jal         func_1818C0
    ctx->pc = 0x198B10u;
    SET_GPR_U32(ctx, 31, 0x198B18u);
    ctx->pc = 0x198B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B10u;
            // 0x198b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B18u; }
        if (ctx->pc != 0x198B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B18u; }
        if (ctx->pc != 0x198B18u) { return; }
    }
    ctx->pc = 0x198B18u;
    // 0x198b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b1c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x198B1Cu;
    SET_GPR_U32(ctx, 31, 0x198B24u);
    ctx->pc = 0x198B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B1Cu;
            // 0x198b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B24u; }
        if (ctx->pc != 0x198B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B24u; }
        if (ctx->pc != 0x198B24u) { return; }
    }
    ctx->pc = 0x198B24u;
    // 0x198b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b28: 0xc060630  jal         func_1818C0
    ctx->pc = 0x198B28u;
    SET_GPR_U32(ctx, 31, 0x198B30u);
    ctx->pc = 0x198B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B28u;
            // 0x198b2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B30u; }
        if (ctx->pc != 0x198B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B30u; }
        if (ctx->pc != 0x198B30u) { return; }
    }
    ctx->pc = 0x198B30u;
    // 0x198b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b34: 0xc060630  jal         func_1818C0
    ctx->pc = 0x198B34u;
    SET_GPR_U32(ctx, 31, 0x198B3Cu);
    ctx->pc = 0x198B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B34u;
            // 0x198b38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B3Cu; }
        if (ctx->pc != 0x198B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B3Cu; }
        if (ctx->pc != 0x198B3Cu) { return; }
    }
    ctx->pc = 0x198B3Cu;
    // 0x198b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b40: 0xc060630  jal         func_1818C0
    ctx->pc = 0x198B40u;
    SET_GPR_U32(ctx, 31, 0x198B48u);
    ctx->pc = 0x198B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198B40u;
            // 0x198b44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B48u; }
        if (ctx->pc != 0x198B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B48u; }
        if (ctx->pc != 0x198B48u) { return; }
    }
    ctx->pc = 0x198B48u;
    // 0x198b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x198b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198b50: 0x3e00008  jr          $ra
    ctx->pc = 0x198B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198B50u;
            // 0x198b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198B58u;
}
