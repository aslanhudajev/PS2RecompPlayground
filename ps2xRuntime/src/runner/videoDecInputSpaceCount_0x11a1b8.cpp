#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecInputSpaceCount
// Address: 0x11a1b8 - 0x11a1ec
void videoDecInputSpaceCount_0x11a1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a1b8u;

    // 0x11a1b8: 0x27bdffe0
    ctx->pc = 0x11a1b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a1bc: 0xffbf0010
    ctx->pc = 0x11a1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a1c0: 0x3a0282d
    ctx->pc = 0x11a1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1c4: 0x37a60004
    ctx->pc = 0x11a1c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)4);
    // 0x11a1c8: 0x37a70008
    ctx->pc = 0x11a1c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)8);
    // 0x11a1cc: 0xc046836
    ctx->pc = 0x11A1CCu;
    SET_GPR_U32(ctx, 31, 0x11A1D4u);
    ctx->pc = 0x11A1D0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)12);
    ctx->pc = 0x11A0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut_0x11a0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1D4u; }
    }
    if (ctx->pc != 0x11A1D4u) { return; }
    ctx->pc = 0x11A1D4u;
    // 0x11a1d4: 0x8fa30004
    ctx->pc = 0x11a1d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11a1d8: 0x8fa2000c
    ctx->pc = 0x11a1d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11a1dc: 0xdfbf0010
    ctx->pc = 0x11a1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a1e0: 0x621021
    ctx->pc = 0x11a1e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a1e4: 0x3e00008
    ctx->pc = 0x11A1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A1E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A1ECu;
}
