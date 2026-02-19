#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setup_audio
// Address: 0x25c408 - 0x25c430
void setup_audio_0x25c408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25c408u;

    // 0x25c408: 0x27bdfff0
    ctx->pc = 0x25c408u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c40c: 0xffbf0000
    ctx->pc = 0x25c40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c410: 0x3c020032
    ctx->pc = 0x25c410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25c414: 0xc0881b8
    ctx->pc = 0x25C414u;
    SET_GPR_U32(ctx, 31, 0x25C41Cu);
    ctx->pc = 0x25C418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966676), GPR_U32(ctx, 0));
    ctx->pc = 0x2206E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audio_init_0x2206e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C41Cu; }
    }
    if (ctx->pc != 0x25C41Cu) { return; }
    ctx->pc = 0x25C41Cu;
    // 0x25c41c: 0xc0975e2
    ctx->pc = 0x25C41Cu;
    SET_GPR_U32(ctx, 31, 0x25C424u);
    ctx->pc = 0x25D788u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitNameAudio_0x25d788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C424u; }
    }
    if (ctx->pc != 0x25C424u) { return; }
    ctx->pc = 0x25C424u;
    // 0x25c424: 0xdfbf0000
    ctx->pc = 0x25c424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c428: 0x8097c3a
    ctx->pc = 0x25C428u;
    ctx->pc = 0x25C42Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x25F0E8u;
    InitEnemyAudio_0x25f0e8(rdram, ctx, runtime); return;
    ctx->pc = 0x25C430u;
}
