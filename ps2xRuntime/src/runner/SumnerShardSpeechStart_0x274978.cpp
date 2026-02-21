#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerShardSpeechStart
// Address: 0x274978 - 0x2749c8
void SumnerShardSpeechStart_0x274978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274978u;

    // 0x274978: 0x27bdffe0
    ctx->pc = 0x274978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27497c: 0xffbf0010
    ctx->pc = 0x27497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274980: 0xffb00000
    ctx->pc = 0x274980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274984: 0xc09d236
    ctx->pc = 0x274984u;
    SET_GPR_U32(ctx, 31, 0x27498Cu);
    ctx->pc = 0x274988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2748D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerGhostStart_0x2748d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27498Cu; }
    }
    if (ctx->pc != 0x27498Cu) { return; }
    ctx->pc = 0x27498Cu;
    // 0x27498c: 0x3c020034
    ctx->pc = 0x27498cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274990: 0x3c014040
    ctx->pc = 0x274990u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x274994: 0x44810000
    ctx->pc = 0x274994u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x274998: 0xe440fbc0
    ctx->pc = 0x274998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966208), bits); }
    // 0x27499c: 0x3c020034
    ctx->pc = 0x27499cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2749a0: 0xac50fbc4
    ctx->pc = 0x2749a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966212), GPR_U32(ctx, 16));
    // 0x2749a4: 0x3c020034
    ctx->pc = 0x2749a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2749a8: 0xc081776
    ctx->pc = 0x2749A8u;
    SET_GPR_U32(ctx, 31, 0x2749B0u);
    ctx->pc = 0x2749ACu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966216), GPR_U32(ctx, 0));
    ctx->pc = 0x205DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisablePlayerControls_0x205dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2749B0u; }
    }
    if (ctx->pc != 0x2749B0u) { return; }
    ctx->pc = 0x2749B0u;
    // 0x2749b0: 0x3c020034
    ctx->pc = 0x2749b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2749b4: 0xac40fcd8
    ctx->pc = 0x2749b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966488), GPR_U32(ctx, 0));
    // 0x2749b8: 0xdfbf0010
    ctx->pc = 0x2749b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2749bc: 0xdfb00000
    ctx->pc = 0x2749bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2749c0: 0x8099576
    ctx->pc = 0x2749C0u;
    ctx->pc = 0x2749C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2655D8u;
    CaptionTextReset_0x2655d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2749C8u;
}
