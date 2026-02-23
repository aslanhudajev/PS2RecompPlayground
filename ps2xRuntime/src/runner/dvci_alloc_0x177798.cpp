#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvci_alloc
// Address: 0x177798 - 0x1777cc
void dvci_alloc_0x177798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvci_alloc");


    ctx->pc = 0x177798u;

    // 0x177798: 0x3c020024
    ctx->pc = 0x177798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17779c: 0x282d
    ctx->pc = 0x17779cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777a0: 0x244393d8
    ctx->pc = 0x1777a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294939608));
    // 0x1777a4: 0x24040027
    ctx->pc = 0x1777a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 39));
label_1777a8:
    // 0x1777a8: 0x80620000
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1777ac: 0x2484ffff
    ctx->pc = 0x1777acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1777b0: 0x62280a
    ctx->pc = 0x1777b0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x1777b4: 0x24630040
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
    // 0x1777b8: 0x0
    ctx->pc = 0x1777b8u;
    // NOP
    // 0x1777bc: 0x481fffa
    ctx->pc = 0x1777BCu;
    {
        const bool branch_taken_0x1777bc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1777bc) {
            ctx->pc = 0x1777A8u;
            goto label_1777a8;
        }
    }
    ctx->pc = 0x1777C4u;
    // 0x1777c4: 0x3e00008
    ctx->pc = 0x1777C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1777C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1777A8u: goto label_1777a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1777CCu;
}
