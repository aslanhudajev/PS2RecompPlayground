#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSoundLength
// Address: 0x220580 - 0x2205b8
void AudioSoundLength_0x220580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220580u;

    // 0x220580: 0x27bdfff0
    ctx->pc = 0x220580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220584: 0xffbf0000
    ctx->pc = 0x220584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220588: 0xc087fca
    ctx->pc = 0x220588u;
    SET_GPR_U32(ctx, 31, 0x220590u);
    ctx->pc = 0x21FF28u;
    {
        const uint32_t __entryPc = ctx->pc;
        audnum_to_index_0x21ff28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220590u; }
    }
    if (ctx->pc != 0x220590u) { return; }
    ctx->pc = 0x220590u;
    // 0x220590: 0x3c030032
    ctx->pc = 0x220590u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x220594: 0x8c63fd6c
    ctx->pc = 0x220594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294966636)));
    // 0x220598: 0x8c640014
    ctx->pc = 0x220598u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x22059c: 0x2403001c
    ctx->pc = 0x22059cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2205a0: 0x431018
    ctx->pc = 0x2205a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2205a4: 0x441021
    ctx->pc = 0x2205a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2205a8: 0xc4400014
    ctx->pc = 0x2205a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2205ac: 0xdfbf0000
    ctx->pc = 0x2205acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2205b0: 0x3e00008
    ctx->pc = 0x2205B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2205B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2205B8u;
}
