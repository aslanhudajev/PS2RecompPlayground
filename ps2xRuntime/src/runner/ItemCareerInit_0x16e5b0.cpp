#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemCareerInit
// Address: 0x16e5b0 - 0x16e5d4
void ItemCareerInit_0x16e5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemCareerInit_0x16e5b0");
#endif

    ctx->pc = 0x16e5b0u;

    // 0x16e5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e5b8: 0xc077ef4  jal         func_1DFBD0
    ctx->pc = 0x16E5B8u;
    SET_GPR_U32(ctx, 31, 0x16E5C0u);
    ctx->pc = 0x1DFBD0u;
    if (runtime->hasFunction(0x1DFBD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E5C0u; }
        if (ctx->pc != 0x16E5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitItemCareer_Hontai_0x1dfbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E5C0u; }
        if (ctx->pc != 0x16E5C0u) { return; }
    }
    ctx->pc = 0x16E5C0u;
    // 0x16e5c0: 0xc077ebc  jal         func_1DFAF0
    ctx->pc = 0x16E5C0u;
    SET_GPR_U32(ctx, 31, 0x16E5C8u);
    ctx->pc = 0x1DFAF0u;
    if (runtime->hasFunction(0x1DFAF0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E5C8u; }
        if (ctx->pc != 0x16E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_Hontai_0x1dfaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E5C8u; }
        if (ctx->pc != 0x16E5C8u) { return; }
    }
    ctx->pc = 0x16E5C8u;
    // 0x16e5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x16E5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E5CCu;
            // 0x16e5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E5D4u;
}
