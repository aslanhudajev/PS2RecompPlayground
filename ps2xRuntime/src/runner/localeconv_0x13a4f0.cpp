#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: localeconv
// Address: 0x13a4f0 - 0x13a514
void localeconv_0x13a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("localeconv_0x13a4f0");
#endif

    ctx->pc = 0x13a4f0u;

    // 0x13a4f0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x13a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x13a4f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13a4f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13a4f8: 0x8c441d94  lw          $a0, 0x1D94($v0)
    ctx->pc = 0x13a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7572)));
    // 0x13a4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a500: 0xc04e92c  jal         func_13A4B0
    ctx->pc = 0x13A500u;
    SET_GPR_U32(ctx, 31, 0x13A508u);
    ctx->pc = 0x13A4B0u;
    if (runtime->hasFunction(0x13A4B0u)) {
        auto targetFn = runtime->lookupFunction(0x13A4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A508u; }
        if (ctx->pc != 0x13A508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _localeconv_r_0x13a4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A508u; }
        if (ctx->pc != 0x13A508u) { return; }
    }
    ctx->pc = 0x13A508u;
    // 0x13a508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a50c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A50Cu;
            // 0x13a510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A514u;
}
