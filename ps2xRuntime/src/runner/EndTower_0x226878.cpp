#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EndTower
// Address: 0x226878 - 0x2268c4
void EndTower_0x226878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x226878u;

    // 0x226878: 0x27bdffe0
    ctx->pc = 0x226878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22687c: 0xffbf0010
    ctx->pc = 0x22687cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x226880: 0xffb00000
    ctx->pc = 0x226880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226884: 0x3c020032
    ctx->pc = 0x226884u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226888: 0x2410ffff
    ctx->pc = 0x226888u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22688c: 0xac50071c
    ctx->pc = 0x22688cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1820), GPR_U32(ctx, 16));
    // 0x226890: 0x3c020035
    ctx->pc = 0x226890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x226894: 0xac50a430
    ctx->pc = 0x226894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943792), GPR_U32(ctx, 16));
    // 0x226898: 0x3c020035
    ctx->pc = 0x226898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x22689c: 0xc09733e
    ctx->pc = 0x22689Cu;
    SET_GPR_U32(ctx, 31, 0x2268A4u);
    ctx->pc = 0x2268A0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943416), GPR_U32(ctx, 16));
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2268A4u; }
    }
    if (ctx->pc != 0x2268A4u) { return; }
    ctx->pc = 0x2268A4u;
    // 0x2268a4: 0x3c020034
    ctx->pc = 0x2268a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2268a8: 0xac50e808
    ctx->pc = 0x2268a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 16));
    // 0x2268ac: 0x3c020034
    ctx->pc = 0x2268acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2268b0: 0xac50e80c
    ctx->pc = 0x2268b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961164), GPR_U32(ctx, 16));
    // 0x2268b4: 0xdfbf0010
    ctx->pc = 0x2268b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2268b8: 0xdfb00000
    ctx->pc = 0x2268b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2268bc: 0x3e00008
    ctx->pc = 0x2268BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2268C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2268C4u;
}
