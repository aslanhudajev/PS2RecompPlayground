#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setTRXREG
// Address: 0x11ba10 - 0x11ba3c
void setTRXREG_0x11ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setTRXREG_0x11ba10");
#endif

    ctx->pc = 0x11ba10u;

    // 0x11ba10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11ba10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ba14: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11ba14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11ba18: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11ba18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11ba1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ba1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ba20: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x11ba20u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x11ba24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ba28: 0xc046d3a  jal         func_11B4E8
    ctx->pc = 0x11BA28u;
    SET_GPR_U32(ctx, 31, 0x11BA30u);
    ctx->pc = 0x11BA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA28u;
            // 0x11ba2c: 0x24050052  addiu       $a1, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B4E8u;
    if (runtime->hasFunction(0x11B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x11B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA30u; }
        if (ctx->pc != 0x11BA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA30u; }
        if (ctx->pc != 0x11BA30u) { return; }
    }
    ctx->pc = 0x11BA30u;
    // 0x11ba30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ba30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ba34: 0x3e00008  jr          $ra
    ctx->pc = 0x11BA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA34u;
            // 0x11ba38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BA3Cu;
}
