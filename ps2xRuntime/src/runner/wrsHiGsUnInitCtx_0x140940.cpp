#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsHiGsUnInitCtx
// Address: 0x140940 - 0x14096c
void wrsHiGsUnInitCtx_0x140940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsHiGsUnInitCtx_0x140940");
#endif

    ctx->pc = 0x140940u;

    // 0x140940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140944: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14094c: 0xc044956  jal         func_112558
    ctx->pc = 0x14094Cu;
    SET_GPR_U32(ctx, 31, 0x140954u);
    ctx->pc = 0x140950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14094Cu;
            // 0x140950: 0x8c247700  lw          $a0, 0x7700($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112558u;
    if (runtime->hasFunction(0x112558u)) {
        auto targetFn = runtime->lookupFunction(0x112558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140954u; }
        if (ctx->pc != 0x140954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxDelete_0x112558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140954u; }
        if (ctx->pc != 0x140954u) { return; }
    }
    ctx->pc = 0x140954u;
    // 0x140954: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140958: 0xc044956  jal         func_112558
    ctx->pc = 0x140958u;
    SET_GPR_U32(ctx, 31, 0x140960u);
    ctx->pc = 0x14095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140958u;
            // 0x14095c: 0x8c2476c0  lw          $a0, 0x76C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112558u;
    if (runtime->hasFunction(0x112558u)) {
        auto targetFn = runtime->lookupFunction(0x112558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140960u; }
        if (ctx->pc != 0x140960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxDelete_0x112558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140960u; }
        if (ctx->pc != 0x140960u) { return; }
    }
    ctx->pc = 0x140960u;
    // 0x140960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140964: 0x3e00008  jr          $ra
    ctx->pc = 0x140964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140964u;
            // 0x140968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14096Cu;
}
