#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_chest_ang
// Address: 0x23c4a8 - 0x23c4e4
void get_chest_ang_0x23c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c4a8u;

    // 0x23c4a8: 0x27bdfff0
    ctx->pc = 0x23c4a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c4ac: 0xffbf0000
    ctx->pc = 0x23c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c4b0: 0x80282d
    ctx->pc = 0x23c4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c4b4: 0x3c030034
    ctx->pc = 0x23c4b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x23c4b8: 0x8ca40354
    ctx->pc = 0x23c4b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 852)));
    // 0x23c4bc: 0x24020110
    ctx->pc = 0x23c4bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
    // 0x23c4c0: 0x822018
    ctx->pc = 0x23c4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23c4c4: 0x8c62cd94
    ctx->pc = 0x23c4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954388)));
    // 0x23c4c8: 0x822021
    ctx->pc = 0x23c4c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c4cc: 0x24840040
    ctx->pc = 0x23c4ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    // 0x23c4d0: 0xc09a2aa
    ctx->pc = 0x23C4D0u;
    SET_GPR_U32(ctx, 31, 0x23C4D8u);
    ctx->pc = 0x23C4D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C4D8u; }
    }
    if (ctx->pc != 0x23C4D8u) { return; }
    ctx->pc = 0x23C4D8u;
    // 0x23c4d8: 0xdfbf0000
    ctx->pc = 0x23c4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c4dc: 0x3e00008
    ctx->pc = 0x23C4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C4E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C4E4u;
}
