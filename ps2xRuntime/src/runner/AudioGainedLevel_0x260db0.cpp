#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGainedLevel
// Address: 0x260db0 - 0x260e08
void AudioGainedLevel_0x260db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260db0u;

    // 0x260db0: 0x18a0000a
    ctx->pc = 0x260DB0u;
    {
        const bool branch_taken_0x260db0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x260DB4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260db0) {
            ctx->pc = 0x260DDCu;
            goto label_260ddc;
        }
    }
    ctx->pc = 0x260DB8u;
    // 0x260db8: 0x3c014040
    ctx->pc = 0x260db8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x260dbc: 0x44816000
    ctx->pc = 0x260dbcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260dc0: 0x2404ffff
    ctx->pc = 0x260dc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260dc4: 0x40282d
    ctx->pc = 0x260dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260dc8: 0x3c060002
    ctx->pc = 0x260dc8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)2 << 16));
    // 0x260dcc: 0x34c60010
    ctx->pc = 0x260dccu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 16));
    // 0x260dd0: 0x3c070001
    ctx->pc = 0x260dd0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x260dd4: 0x8097672
    ctx->pc = 0x260DD4u;
    ctx->pc = 0x260DD8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 61));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x260DDCu;
label_260ddc:
    // 0x260ddc: 0x4a10008
    ctx->pc = 0x260DDCu;
    {
        const bool branch_taken_0x260ddc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x260DE0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x260ddc) {
            ctx->pc = 0x260E00u;
            goto label_260e00;
        }
    }
    ctx->pc = 0x260DE4u;
    // 0x260de4: 0x3c014040
    ctx->pc = 0x260de4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x260de8: 0x44816000
    ctx->pc = 0x260de8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260dec: 0x40282d
    ctx->pc = 0x260decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260df0: 0x3c060001
    ctx->pc = 0x260df0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x260df4: 0x34c6003e
    ctx->pc = 0x260df4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62));
    // 0x260df8: 0x8097672
    ctx->pc = 0x260DF8u;
    ctx->pc = 0x260DFCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x260E00u;
label_260e00:
    // 0x260e00: 0x3e00008
    ctx->pc = 0x260E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260DDCu: goto label_260ddc;
            case 0x260E00u: goto label_260e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x260E08u;
}
