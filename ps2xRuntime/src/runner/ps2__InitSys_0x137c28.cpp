#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _InitSys
// Address: 0x137c28 - 0x137c64
void ps2__InitSys_0x137c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__InitSys_0x137c28");
#endif

    ctx->pc = 0x137c28u;

    // 0x137c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137c30: 0xc04de80  jal         func_137A00
    ctx->pc = 0x137C30u;
    SET_GPR_U32(ctx, 31, 0x137C38u);
    ctx->pc = 0x137A00u;
    if (runtime->hasFunction(0x137A00u)) {
        auto targetFn = runtime->lookupFunction(0x137A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C38u; }
        if (ctx->pc != 0x137C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        supplement_crt0_0x137a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C38u; }
        if (ctx->pc != 0x137C38u) { return; }
    }
    ctx->pc = 0x137C38u;
    // 0x137c38: 0xc04dec6  jal         func_137B18
    ctx->pc = 0x137C38u;
    SET_GPR_U32(ctx, 31, 0x137C40u);
    ctx->pc = 0x137B18u;
    if (runtime->hasFunction(0x137B18u)) {
        auto targetFn = runtime->lookupFunction(0x137B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C40u; }
        if (ctx->pc != 0x137C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSystemCallTableAddress_0x137b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C40u; }
        if (ctx->pc != 0x137C40u) { return; }
    }
    ctx->pc = 0x137C40u;
    // 0x137c40: 0xc04e03c  jal         func_1380F0
    ctx->pc = 0x137C40u;
    SET_GPR_U32(ctx, 31, 0x137C48u);
    ctx->pc = 0x1380F0u;
    if (runtime->hasFunction(0x1380F0u)) {
        auto targetFn = runtime->lookupFunction(0x1380F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C48u; }
        if (ctx->pc != 0x137C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitAlarm_0x1380f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C48u; }
        if (ctx->pc != 0x137C48u) { return; }
    }
    ctx->pc = 0x137C48u;
    // 0x137c48: 0xc04be8e  jal         func_12FA38
    ctx->pc = 0x137C48u;
    SET_GPR_U32(ctx, 31, 0x137C50u);
    ctx->pc = 0x12FA38u;
    if (runtime->hasFunction(0x12FA38u)) {
        auto targetFn = runtime->lookupFunction(0x12FA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C50u; }
        if (ctx->pc != 0x137C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitThread_0x12fa38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C50u; }
        if (ctx->pc != 0x137C50u) { return; }
    }
    ctx->pc = 0x137C50u;
    // 0x137c50: 0xc04df4e  jal         func_137D38
    ctx->pc = 0x137C50u;
    SET_GPR_U32(ctx, 31, 0x137C58u);
    ctx->pc = 0x137D38u;
    if (runtime->hasFunction(0x137D38u)) {
        auto targetFn = runtime->lookupFunction(0x137D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C58u; }
        if (ctx->pc != 0x137C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitExecPS2_0x137d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137C58u; }
        if (ctx->pc != 0x137C58u) { return; }
    }
    ctx->pc = 0x137C58u;
    // 0x137c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137c5c: 0x804dc9a  j           func_137268
    ctx->pc = 0x137C5Cu;
    ctx->pc = 0x137C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137C5Cu;
            // 0x137c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137268u;
    if (runtime->hasFunction(0x137268u)) {
        auto targetFn = runtime->lookupFunction(0x137268u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitTLBFunctions_0x137268(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x137C64u;
}
