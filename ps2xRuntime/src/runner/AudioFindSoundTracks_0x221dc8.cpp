#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioFindSoundTracks
// Address: 0x221dc8 - 0x221e2c
void AudioFindSoundTracks_0x221dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221dc8u;

    // 0x221dc8: 0x302d
    ctx->pc = 0x221dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dcc: 0x282d
    ctx->pc = 0x221dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dd0: 0x3c020032
    ctx->pc = 0x221dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221dd4: 0x244afe38
    ctx->pc = 0x221dd4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294966840));
    // 0x221dd8: 0x24090014
    ctx->pc = 0x221dd8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 20));
    // 0x221ddc: 0x3c020032
    ctx->pc = 0x221ddcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221de0: 0x2448fe3c
    ctx->pc = 0x221de0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294966844));
    // 0x221de4: 0x24070001
    ctx->pc = 0x221de4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x221de8: 0xa91818
    ctx->pc = 0x221de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221dec: 0x0
    ctx->pc = 0x221decu;
    // NOP
label_221df0:
    // 0x221df0: 0x6a1021
    ctx->pc = 0x221df0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x221df4: 0x8c420000
    ctx->pc = 0x221df4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221df8: 0x54440007
    ctx->pc = 0x221DF8u;
    {
        const bool branch_taken_0x221df8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x221df8) {
            ctx->pc = 0x221DFCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x221E18u;
            goto label_221e18;
        }
    }
    ctx->pc = 0x221E00u;
    // 0x221e00: 0x681021
    ctx->pc = 0x221e00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x221e04: 0x8c420000
    ctx->pc = 0x221e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221e08: 0x10400002
    ctx->pc = 0x221E08u;
    {
        const bool branch_taken_0x221e08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221E0Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x221e08) {
            ctx->pc = 0x221E14u;
            goto label_221e14;
        }
    }
    ctx->pc = 0x221E10u;
    // 0x221e10: 0xc23025
    ctx->pc = 0x221e10u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_221e14:
    // 0x221e14: 0x24a50001
    ctx->pc = 0x221e14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_221e18:
    // 0x221e18: 0x28a2000c
    ctx->pc = 0x221e18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 12));
    // 0x221e1c: 0x1440fff4
    ctx->pc = 0x221E1Cu;
    {
        const bool branch_taken_0x221e1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221E20u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x221e1c) {
            ctx->pc = 0x221DF0u;
            goto label_221df0;
        }
    }
    ctx->pc = 0x221E24u;
    // 0x221e24: 0x3e00008
    ctx->pc = 0x221E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221E28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221DF0u: goto label_221df0;
            case 0x221E14u: goto label_221e14;
            case 0x221E18u: goto label_221e18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221E2Cu;
}
