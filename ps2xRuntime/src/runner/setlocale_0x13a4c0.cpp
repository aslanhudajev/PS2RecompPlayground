#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setlocale
// Address: 0x13a4c0 - 0x13a4ec
void setlocale_0x13a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setlocale_0x13a4c0");
#endif

    ctx->pc = 0x13a4c0u;

    // 0x13a4c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13a4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4c4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x13a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x13a4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13a4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13a4cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x13a4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4d0: 0x8c641d94  lw          $a0, 0x1D94($v1)
    ctx->pc = 0x13a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7572)));
    // 0x13a4d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13a4d8: 0xc04e90a  jal         func_13A428
    ctx->pc = 0x13A4D8u;
    SET_GPR_U32(ctx, 31, 0x13A4E0u);
    ctx->pc = 0x13A4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4D8u;
            // 0x13a4dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A428u;
    if (runtime->hasFunction(0x13A428u)) {
        auto targetFn = runtime->lookupFunction(0x13A428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A4E0u; }
        if (ctx->pc != 0x13A4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _setlocale_r_0x13a428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A4E0u; }
        if (ctx->pc != 0x13A4E0u) { return; }
    }
    ctx->pc = 0x13A4E0u;
    // 0x13a4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13a4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4E4u;
            // 0x13a4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A4ECu;
}
