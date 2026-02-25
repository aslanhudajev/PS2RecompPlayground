#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitEn8_bit_Hontai
// Address: 0x1e3350 - 0x1e337c
void UnInitEn8_bit_Hontai_0x1e3350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitEn8_bit_Hontai_0x1e3350");
#endif

    ctx->pc = 0x1e3350u;

    // 0x1e3350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3358: 0xc060680  jal         func_181A00
    ctx->pc = 0x1E3358u;
    SET_GPR_U32(ctx, 31, 0x1E3360u);
    ctx->pc = 0x1E335Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3358u;
            // 0x1e335c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3360u; }
        if (ctx->pc != 0x1E3360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3360u; }
        if (ctx->pc != 0x1E3360u) { return; }
    }
    ctx->pc = 0x1E3360u;
    // 0x1e3360: 0xc060680  jal         func_181A00
    ctx->pc = 0x1E3360u;
    SET_GPR_U32(ctx, 31, 0x1E3368u);
    ctx->pc = 0x1E3364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3360u;
            // 0x1e3364: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3368u; }
        if (ctx->pc != 0x1E3368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3368u; }
        if (ctx->pc != 0x1E3368u) { return; }
    }
    ctx->pc = 0x1E3368u;
    // 0x1e3368: 0xc060680  jal         func_181A00
    ctx->pc = 0x1E3368u;
    SET_GPR_U32(ctx, 31, 0x1E3370u);
    ctx->pc = 0x1E336Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3368u;
            // 0x1e336c: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3370u; }
        if (ctx->pc != 0x1E3370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3370u; }
        if (ctx->pc != 0x1E3370u) { return; }
    }
    ctx->pc = 0x1E3370u;
    // 0x1e3370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3374: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3374u;
            // 0x1e3378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E337Cu;
}
