#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_player_powerups
// Address: 0x22c1a0 - 0x22c200
void init_player_powerups_0x22c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c1a0u;

    // 0x22c1a0: 0x27bdffd0
    ctx->pc = 0x22c1a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c1a4: 0xffbf0020
    ctx->pc = 0x22c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22c1a8: 0xffb10010
    ctx->pc = 0x22c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22c1ac: 0xffb00000
    ctx->pc = 0x22c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c1b0: 0x80882d
    ctx->pc = 0x22c1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1b4: 0x802d
    ctx->pc = 0x22c1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1b8: 0x102100
    ctx->pc = 0x22c1b8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
    // 0x22c1bc: 0x0
    ctx->pc = 0x22c1bcu;
    // NOP
label_22c1c0:
    // 0x22c1c0: 0x912021
    ctx->pc = 0x22c1c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x22c1c4: 0x24840144
    ctx->pc = 0x22c1c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 324));
    // 0x22c1c8: 0x282d
    ctx->pc = 0x22c1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1cc: 0xc0becc6
    ctx->pc = 0x22C1CCu;
    SET_GPR_U32(ctx, 31, 0x22C1D4u);
    ctx->pc = 0x22C1D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C1D4u; }
    }
    if (ctx->pc != 0x22C1D4u) { return; }
    ctx->pc = 0x22C1D4u;
    // 0x22c1d4: 0x26100001
    ctx->pc = 0x22c1d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x22c1d8: 0x2a020008
    ctx->pc = 0x22c1d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x22c1dc: 0x1440fff8
    ctx->pc = 0x22C1DCu;
    {
        const bool branch_taken_0x22c1dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22C1E0u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x22c1dc) {
            ctx->pc = 0x22C1C0u;
            goto label_22c1c0;
        }
    }
    ctx->pc = 0x22C1E4u;
    // 0x22c1e4: 0xae2001c4
    ctx->pc = 0x22c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
    // 0x22c1e8: 0xae200138
    ctx->pc = 0x22c1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
    // 0x22c1ec: 0xdfbf0020
    ctx->pc = 0x22c1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c1f0: 0xdfb10010
    ctx->pc = 0x22c1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c1f4: 0xdfb00000
    ctx->pc = 0x22c1f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c1f8: 0x3e00008
    ctx->pc = 0x22C1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C1FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C1C0u: goto label_22c1c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C200u;
}
