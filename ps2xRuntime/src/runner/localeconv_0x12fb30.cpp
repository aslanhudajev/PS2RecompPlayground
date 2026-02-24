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
// Address: 0x12fb30 - 0x12fb54
void localeconv_0x12fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("localeconv_0x12fb30");
#endif

    ctx->pc = 0x12fb30u;

    // 0x12fb30: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12fb34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fb34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fb38: 0x8c442544  lw          $a0, 0x2544($v0)
    ctx->pc = 0x12fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9540)));
    // 0x12fb3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12fb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fb40: 0xc04bebc  jal         func_12FAF0
    ctx->pc = 0x12FB40u;
    SET_GPR_U32(ctx, 31, 0x12FB48u);
    ctx->pc = 0x12FAF0u;
    if (runtime->hasFunction(0x12FAF0u)) {
        auto targetFn = runtime->lookupFunction(0x12FAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB48u; }
        if (ctx->pc != 0x12FB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _localeconv_r_0x12faf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB48u; }
        if (ctx->pc != 0x12FB48u) { return; }
    }
    ctx->pc = 0x12FB48u;
    // 0x12fb48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12fb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x12FB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB4Cu;
            // 0x12fb50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FB54u;
}
