#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calc_cam_pyr
// Address: 0x268b90 - 0x268bf4
void calc_cam_pyr_0x268b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x268b90u;

    // 0x268b90: 0x27bdffc0
    ctx->pc = 0x268b90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x268b94: 0xffbf0030
    ctx->pc = 0x268b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x268b98: 0xffb20020
    ctx->pc = 0x268b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x268b9c: 0xffb10010
    ctx->pc = 0x268b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x268ba0: 0xffb00000
    ctx->pc = 0x268ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x268ba4: 0xa0902d
    ctx->pc = 0x268ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ba8: 0x240201a0
    ctx->pc = 0x268ba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x268bac: 0x828018
    ctx->pc = 0x268bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x268bb0: 0x3c020034
    ctx->pc = 0x268bb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268bb4: 0x2442eb60
    ctx->pc = 0x268bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x268bb8: 0x2028021
    ctx->pc = 0x268bb8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x268bbc: 0x26110070
    ctx->pc = 0x268bbcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 112));
    // 0x268bc0: 0xc09a278
    ctx->pc = 0x268BC0u;
    SET_GPR_U32(ctx, 31, 0x268BC8u);
    ctx->pc = 0x268BC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2689E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_pitch_0x2689e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268BC8u; }
    }
    if (ctx->pc != 0x268BC8u) { return; }
    ctx->pc = 0x268BC8u;
    // 0x268bc8: 0xe60000b0
    ctx->pc = 0x268bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x268bcc: 0x220202d
    ctx->pc = 0x268bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bd0: 0xc09a2aa
    ctx->pc = 0x268BD0u;
    SET_GPR_U32(ctx, 31, 0x268BD8u);
    ctx->pc = 0x268BD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268BD8u; }
    }
    if (ctx->pc != 0x268BD8u) { return; }
    ctx->pc = 0x268BD8u;
    // 0x268bd8: 0xe60000b4
    ctx->pc = 0x268bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x268bdc: 0xdfbf0030
    ctx->pc = 0x268bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268be0: 0xdfb20020
    ctx->pc = 0x268be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268be4: 0xdfb10010
    ctx->pc = 0x268be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268be8: 0xdfb00000
    ctx->pc = 0x268be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268bec: 0x3e00008
    ctx->pc = 0x268BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268BF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268BF4u;
}
