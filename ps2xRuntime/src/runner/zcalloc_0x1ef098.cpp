#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: zcalloc
// Address: 0x1ef098 - 0x1ef0b8
void zcalloc_0x1ef098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("zcalloc_0x1ef098");
#endif

    ctx->pc = 0x1ef098u;

    // 0x1ef098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef09c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef0a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ef0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef0a4: 0xc04e082  jal         func_138208
    ctx->pc = 0x1EF0A4u;
    SET_GPR_U32(ctx, 31, 0x1EF0ACu);
    ctx->pc = 0x1EF0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0A4u;
            // 0x1ef0a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138208u;
    if (runtime->hasFunction(0x138208u)) {
        auto targetFn = runtime->lookupFunction(0x138208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0ACu; }
        if (ctx->pc != 0x1EF0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calloc_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF0ACu; }
        if (ctx->pc != 0x1EF0ACu) { return; }
    }
    ctx->pc = 0x1EF0ACu;
    // 0x1ef0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF0B0u;
            // 0x1ef0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF0B8u;
}
