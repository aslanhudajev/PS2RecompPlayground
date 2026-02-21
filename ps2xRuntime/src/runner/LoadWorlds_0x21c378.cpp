#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadWorlds
// Address: 0x21c378 - 0x21c3b0
void LoadWorlds_0x21c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c378u;

    // 0x21c378: 0x27bdffe0
    ctx->pc = 0x21c378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c37c: 0xffbf0010
    ctx->pc = 0x21c37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c380: 0xffb00000
    ctx->pc = 0x21c380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c384: 0x3c020032
    ctx->pc = 0x21c384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c388: 0xac40faa4
    ctx->pc = 0x21c388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965924), GPR_U32(ctx, 0));
    // 0x21c38c: 0x3c100032
    ctx->pc = 0x21c38cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x21c390: 0x3c05003a
    ctx->pc = 0x21c390u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x21c394: 0xc0b4e96
    ctx->pc = 0x21C394u;
    SET_GPR_U32(ctx, 31, 0x21C39Cu);
    ctx->pc = 0x21C398u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25656));
    ctx->pc = 0x2D3A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocFile_0x2d3a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C39Cu; }
    }
    if (ctx->pc != 0x21C39Cu) { return; }
    ctx->pc = 0x21C39Cu;
    // 0x21c39c: 0xae02faa0
    ctx->pc = 0x21c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965920), GPR_U32(ctx, 2));
    // 0x21c3a0: 0xdfbf0010
    ctx->pc = 0x21c3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c3a4: 0xdfb00000
    ctx->pc = 0x21c3a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c3a8: 0x3e00008
    ctx->pc = 0x21C3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C3ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C3B0u;
}
