#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn3_04_Hontai
// Address: 0x19f3b0 - 0x19f418
void InitEn3_04_Hontai_0x19f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn3_04_Hontai_0x19f3b0");
#endif

    ctx->pc = 0x19f3b0u;

    // 0x19f3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f3b4: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x19f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x19f3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f3bc: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x19f3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x19f3c0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x19F3C0u;
    SET_GPR_U32(ctx, 31, 0x19F3C8u);
    ctx->pc = 0x19F3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3C0u;
            // 0x19f3c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3C8u; }
        if (ctx->pc != 0x19F3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3C8u; }
        if (ctx->pc != 0x19F3C8u) { return; }
    }
    ctx->pc = 0x19F3C8u;
    // 0x19f3c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19f3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3d0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19F3D0u;
    SET_GPR_U32(ctx, 31, 0x19F3D8u);
    ctx->pc = 0x19F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3D0u;
            // 0x19f3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3D8u; }
        if (ctx->pc != 0x19F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3D8u; }
        if (ctx->pc != 0x19F3D8u) { return; }
    }
    ctx->pc = 0x19F3D8u;
    // 0x19f3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3dc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19F3DCu;
    SET_GPR_U32(ctx, 31, 0x19F3E4u);
    ctx->pc = 0x19F3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3DCu;
            // 0x19f3e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3E4u; }
        if (ctx->pc != 0x19F3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3E4u; }
        if (ctx->pc != 0x19F3E4u) { return; }
    }
    ctx->pc = 0x19F3E4u;
    // 0x19f3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3e8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19F3E8u;
    SET_GPR_U32(ctx, 31, 0x19F3F0u);
    ctx->pc = 0x19F3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3E8u;
            // 0x19f3ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3F0u; }
        if (ctx->pc != 0x19F3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3F0u; }
        if (ctx->pc != 0x19F3F0u) { return; }
    }
    ctx->pc = 0x19F3F0u;
    // 0x19f3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f3f4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19F3F4u;
    SET_GPR_U32(ctx, 31, 0x19F3FCu);
    ctx->pc = 0x19F3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F3F4u;
            // 0x19f3f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3FCu; }
        if (ctx->pc != 0x19F3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F3FCu; }
        if (ctx->pc != 0x19F3FCu) { return; }
    }
    ctx->pc = 0x19F3FCu;
    // 0x19f3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f400: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19F400u;
    SET_GPR_U32(ctx, 31, 0x19F408u);
    ctx->pc = 0x19F404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F400u;
            // 0x19f404: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F408u; }
        if (ctx->pc != 0x19F408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F408u; }
        if (ctx->pc != 0x19F408u) { return; }
    }
    ctx->pc = 0x19F408u;
    // 0x19f408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f40c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f410: 0x3e00008  jr          $ra
    ctx->pc = 0x19F410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F410u;
            // 0x19f414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F418u;
}
