#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_get_finf
// Address: 0x179a88 - 0x179abc
void htci_get_finf_0x179a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_get_finf");


    ctx->pc = 0x179a88u;

    // 0x179a88: 0x3c020024
    ctx->pc = 0x179a88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x179a8c: 0x80182d
    ctx->pc = 0x179a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a90: 0x8c46a428
    ctx->pc = 0x179a90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294943784)));
    // 0x179a94: 0x2442a428
    ctx->pc = 0x179a94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943784));
    // 0x179a98: 0xaca00000
    ctx->pc = 0x179a98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x179a9c: 0x10c00005
    ctx->pc = 0x179A9Cu;
    {
        const bool branch_taken_0x179a9c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x179AA0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x179a9c) {
            ctx->pc = 0x179AB4u;
            goto label_179ab4;
        }
    }
    ctx->pc = 0x179AA4u;
    // 0x179aa4: 0xa0202d
    ctx->pc = 0x179aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179aa8: 0x8c470004
    ctx->pc = 0x179aa8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x179aac: 0x805e668
    ctx->pc = 0x179AACu;
    ctx->pc = 0x179AB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1799A0u;
    get_fstate_0x1799a0(rdram, ctx, runtime); return;
    ctx->pc = 0x179AB4u;
label_179ab4:
    // 0x179ab4: 0x3e00008
    ctx->pc = 0x179AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179AB4u: goto label_179ab4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179ABCu;
}
