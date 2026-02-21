#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDoTexmodNode
// Address: 0x2940e8 - 0x29414c
void CritterDoTexmodNode_0x2940e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2940e8u;

    // 0x2940e8: 0xc4a0003c
    ctx->pc = 0x2940e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2940ec: 0x3c0141f0
    ctx->pc = 0x2940ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2940f0: 0x44810800
    ctx->pc = 0x2940f0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2940f4: 0x46010002
    ctx->pc = 0x2940f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2940f8: 0x46000064
    ctx->pc = 0x2940f8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2940fc: 0x44060800
    ctx->pc = 0x2940fcu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x294100: 0xc4ac0040
    ctx->pc = 0x294100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x294104: 0x84a70044
    ctx->pc = 0x294104u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x294108: 0x8ca50008
    ctx->pc = 0x294108u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x29410c: 0x4a00003
    ctx->pc = 0x29410Cu;
    {
        const bool branch_taken_0x29410c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x294110u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x29410c) {
            ctx->pc = 0x29411Cu;
            goto label_29411c;
        }
    }
    ctx->pc = 0x294114u;
    // 0x294114: 0x809ffc6
    ctx->pc = 0x294114u;
    ctx->pc = 0x294118u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 236));
    ctx->pc = 0x27FF18u;
    SetSkinFX_0x27ff18(rdram, ctx, runtime); return;
    ctx->pc = 0x29411Cu;
label_29411c:
    // 0x29411c: 0x24635500
    ctx->pc = 0x29411cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 21760));
    // 0x294120: 0x8c8204fc
    ctx->pc = 0x294120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1276)));
    // 0x294124: 0x3042000f
    ctx->pc = 0x294124u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x294128: 0x21080
    ctx->pc = 0x294128u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x29412c: 0x431021
    ctx->pc = 0x29412cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294130: 0x248400ec
    ctx->pc = 0x294130u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 236));
    // 0x294134: 0x8c450000
    ctx->pc = 0x294134u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294138: 0x2406000a
    ctx->pc = 0x294138u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x29413c: 0x3c013f00
    ctx->pc = 0x29413cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x294140: 0x44816000
    ctx->pc = 0x294140u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x294144: 0x809ffc6
    ctx->pc = 0x294144u;
    ctx->pc = 0x294148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27FF18u;
    SetSkinFX_0x27ff18(rdram, ctx, runtime); return;
    ctx->pc = 0x29414Cu;
}
