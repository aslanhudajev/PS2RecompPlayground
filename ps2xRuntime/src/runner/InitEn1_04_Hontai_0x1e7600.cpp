#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn1_04_Hontai
// Address: 0x1e7600 - 0x1e7668
void InitEn1_04_Hontai_0x1e7600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn1_04_Hontai_0x1e7600");
#endif

    ctx->pc = 0x1e7600u;

    // 0x1e7600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7604: 0x2404006b  addiu       $a0, $zero, 0x6B
    ctx->pc = 0x1e7604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x1e7608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e760c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1e760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1e7610: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1E7610u;
    SET_GPR_U32(ctx, 31, 0x1E7618u);
    ctx->pc = 0x1E7614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7610u;
            // 0x1e7614: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7618u; }
        if (ctx->pc != 0x1E7618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7618u; }
        if (ctx->pc != 0x1E7618u) { return; }
    }
    ctx->pc = 0x1E7618u;
    // 0x1e7618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e761c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e761cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7620: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E7620u;
    SET_GPR_U32(ctx, 31, 0x1E7628u);
    ctx->pc = 0x1E7624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7620u;
            // 0x1e7624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7628u; }
        if (ctx->pc != 0x1E7628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7628u; }
        if (ctx->pc != 0x1E7628u) { return; }
    }
    ctx->pc = 0x1E7628u;
    // 0x1e7628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e762c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E762Cu;
    SET_GPR_U32(ctx, 31, 0x1E7634u);
    ctx->pc = 0x1E7630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E762Cu;
            // 0x1e7630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7634u; }
        if (ctx->pc != 0x1E7634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7634u; }
        if (ctx->pc != 0x1E7634u) { return; }
    }
    ctx->pc = 0x1E7634u;
    // 0x1e7634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7638: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E7638u;
    SET_GPR_U32(ctx, 31, 0x1E7640u);
    ctx->pc = 0x1E763Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7638u;
            // 0x1e763c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7640u; }
        if (ctx->pc != 0x1E7640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7640u; }
        if (ctx->pc != 0x1E7640u) { return; }
    }
    ctx->pc = 0x1E7640u;
    // 0x1e7640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7644: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E7644u;
    SET_GPR_U32(ctx, 31, 0x1E764Cu);
    ctx->pc = 0x1E7648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7644u;
            // 0x1e7648: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E764Cu; }
        if (ctx->pc != 0x1E764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E764Cu; }
        if (ctx->pc != 0x1E764Cu) { return; }
    }
    ctx->pc = 0x1E764Cu;
    // 0x1e764c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7650: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1E7650u;
    SET_GPR_U32(ctx, 31, 0x1E7658u);
    ctx->pc = 0x1E7654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7650u;
            // 0x1e7654: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7658u; }
        if (ctx->pc != 0x1E7658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7658u; }
        if (ctx->pc != 0x1E7658u) { return; }
    }
    ctx->pc = 0x1E7658u;
    // 0x1e7658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e765c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e765cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7660: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7660u;
            // 0x1e7664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7668u;
}
