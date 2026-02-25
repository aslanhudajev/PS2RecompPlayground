#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitEn3_01_Hontai
// Address: 0x19b570 - 0x19b59c
void UnInitEn3_01_Hontai_0x19b570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitEn3_01_Hontai_0x19b570");
#endif

    ctx->pc = 0x19b570u;

    // 0x19b570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b578: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x19B578u;
    SET_GPR_U32(ctx, 31, 0x19B580u);
    ctx->pc = 0x19B57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B578u;
            // 0x19b57c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B580u; }
        if (ctx->pc != 0x19B580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B580u; }
        if (ctx->pc != 0x19B580u) { return; }
    }
    ctx->pc = 0x19B580u;
    // 0x19b580: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x19B580u;
    SET_GPR_U32(ctx, 31, 0x19B588u);
    ctx->pc = 0x19B584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B580u;
            // 0x19b584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B588u; }
        if (ctx->pc != 0x19B588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B588u; }
        if (ctx->pc != 0x19B588u) { return; }
    }
    ctx->pc = 0x19B588u;
    // 0x19b588: 0xc060680  jal         func_181A00
    ctx->pc = 0x19B588u;
    SET_GPR_U32(ctx, 31, 0x19B590u);
    ctx->pc = 0x19B58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B588u;
            // 0x19b58c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B590u; }
        if (ctx->pc != 0x19B590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B590u; }
        if (ctx->pc != 0x19B590u) { return; }
    }
    ctx->pc = 0x19B590u;
    // 0x19b590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b594: 0x3e00008  jr          $ra
    ctx->pc = 0x19B594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B594u;
            // 0x19b598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B59Cu;
}
