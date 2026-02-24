#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iDisableIntc
// Address: 0x10ec08 - 0x10ec28
void iDisableIntc_0x10ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iDisableIntc_0x10ec08");
#endif

    ctx->pc = 0x10ec08u;

    // 0x10ec08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ec0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ec10: 0xc043814  jal         func_10E050
    ctx->pc = 0x10EC10u;
    SET_GPR_U32(ctx, 31, 0x10EC18u);
    ctx->pc = 0x10E050u;
    if (runtime->hasFunction(0x10E050u)) {
        auto targetFn = runtime->lookupFunction(0x10E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC18u; }
        if (ctx->pc != 0x10EC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iDisableIntc_0x10e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC18u; }
        if (ctx->pc != 0x10EC18u) { return; }
    }
    ctx->pc = 0x10EC18u;
    // 0x10ec18: 0xf  sync
    ctx->pc = 0x10ec18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ec1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ec1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec20: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC20u;
            // 0x10ec24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC28u;
}
