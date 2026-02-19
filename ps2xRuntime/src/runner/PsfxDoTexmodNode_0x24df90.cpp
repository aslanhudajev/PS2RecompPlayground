#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PsfxDoTexmodNode
// Address: 0x24df90 - 0x24dfb4
void PsfxDoTexmodNode_0x24df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24df90u;

    // 0x24df90: 0xa0102d
    ctx->pc = 0x24df90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df94: 0xc4400040
    ctx->pc = 0x24df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24df98: 0x248407b4
    ctx->pc = 0x24df98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1972));
    // 0x24df9c: 0x8c450008
    ctx->pc = 0x24df9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24dfa0: 0x46000064
    ctx->pc = 0x24dfa0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x24dfa4: 0x44060800
    ctx->pc = 0x24dfa4u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x24dfa8: 0xc44c0044
    ctx->pc = 0x24dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24dfac: 0x809ffc6
    ctx->pc = 0x24DFACu;
    ctx->pc = 0x24DFB0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->pc = 0x27FF18u;
    SetSkinFX_0x27ff18(rdram, ctx, runtime); return;
    ctx->pc = 0x24DFB4u;
}
