#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEnex2_02_Hontai
// Address: 0x1d2930 - 0x1d2998
void InitEnex2_02_Hontai_0x1d2930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEnex2_02_Hontai_0x1d2930");
#endif

    ctx->pc = 0x1d2930u;

    // 0x1d2930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2934: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x1d2934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1d2938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d2938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d293c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1d293cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1d2940: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1D2940u;
    SET_GPR_U32(ctx, 31, 0x1D2948u);
    ctx->pc = 0x1D2944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2940u;
            // 0x1d2944: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2948u; }
        if (ctx->pc != 0x1D2948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2948u; }
        if (ctx->pc != 0x1D2948u) { return; }
    }
    ctx->pc = 0x1D2948u;
    // 0x1d2948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d2948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d294c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d294cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2950: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D2950u;
    SET_GPR_U32(ctx, 31, 0x1D2958u);
    ctx->pc = 0x1D2954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2950u;
            // 0x1d2954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2958u; }
        if (ctx->pc != 0x1D2958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2958u; }
        if (ctx->pc != 0x1D2958u) { return; }
    }
    ctx->pc = 0x1D2958u;
    // 0x1d2958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d295c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D295Cu;
    SET_GPR_U32(ctx, 31, 0x1D2964u);
    ctx->pc = 0x1D2960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D295Cu;
            // 0x1d2960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2964u; }
        if (ctx->pc != 0x1D2964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2964u; }
        if (ctx->pc != 0x1D2964u) { return; }
    }
    ctx->pc = 0x1D2964u;
    // 0x1d2964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2968: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D2968u;
    SET_GPR_U32(ctx, 31, 0x1D2970u);
    ctx->pc = 0x1D296Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2968u;
            // 0x1d296c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2970u; }
        if (ctx->pc != 0x1D2970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2970u; }
        if (ctx->pc != 0x1D2970u) { return; }
    }
    ctx->pc = 0x1D2970u;
    // 0x1d2970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2974: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D2974u;
    SET_GPR_U32(ctx, 31, 0x1D297Cu);
    ctx->pc = 0x1D2978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2974u;
            // 0x1d2978: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D297Cu; }
        if (ctx->pc != 0x1D297Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D297Cu; }
        if (ctx->pc != 0x1D297Cu) { return; }
    }
    ctx->pc = 0x1D297Cu;
    // 0x1d297c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2980: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D2980u;
    SET_GPR_U32(ctx, 31, 0x1D2988u);
    ctx->pc = 0x1D2984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2980u;
            // 0x1d2984: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2988u; }
        if (ctx->pc != 0x1D2988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2988u; }
        if (ctx->pc != 0x1D2988u) { return; }
    }
    ctx->pc = 0x1D2988u;
    // 0x1d2988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d2988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d298c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d298cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2990: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2990u;
            // 0x1d2994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D2998u;
}
