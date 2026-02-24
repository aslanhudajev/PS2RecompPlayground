#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iEnableDmac
// Address: 0x10ec28 - 0x10ec48
void iEnableDmac_0x10ec28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iEnableDmac_0x10ec28");
#endif

    ctx->pc = 0x10ec28u;

    // 0x10ec28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ec28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ec2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ec30: 0xc043818  jal         func_10E060
    ctx->pc = 0x10EC30u;
    SET_GPR_U32(ctx, 31, 0x10EC38u);
    ctx->pc = 0x10E060u;
    if (runtime->hasFunction(0x10E060u)) {
        auto targetFn = runtime->lookupFunction(0x10E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC38u; }
        if (ctx->pc != 0x10EC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iEnableDmac_0x10e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC38u; }
        if (ctx->pc != 0x10EC38u) { return; }
    }
    ctx->pc = 0x10EC38u;
    // 0x10ec38: 0xf  sync
    ctx->pc = 0x10ec38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ec3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ec3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec40: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC40u;
            // 0x10ec44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC48u;
}
