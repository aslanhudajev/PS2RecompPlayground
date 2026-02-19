#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioDoor
// Address: 0x260900 - 0x260944
void AudioDoor_0x260900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260900u;

    // 0x260900: 0x80302d
    ctx->pc = 0x260900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260904: 0x3c030034
    ctx->pc = 0x260904u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x260908: 0x2463dd28
    ctx->pc = 0x260908u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958376));
    // 0x26090c: 0x52880
    ctx->pc = 0x26090cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x260910: 0x3c020034
    ctx->pc = 0x260910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260914: 0x8c42e7f0
    ctx->pc = 0x260914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x260918: 0x21100
    ctx->pc = 0x260918u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x26091c: 0xa22821
    ctx->pc = 0x26091cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x260920: 0xa32821
    ctx->pc = 0x260920u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x260924: 0x8ca40000
    ctx->pc = 0x260924u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x260928: 0x4800004
    ctx->pc = 0x260928u;
    {
        const bool branch_taken_0x260928 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x26092Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260928) {
            ctx->pc = 0x26093Cu;
            goto label_26093c;
        }
    }
    ctx->pc = 0x260930u;
    // 0x260930: 0x2406007f
    ctx->pc = 0x260930u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x260934: 0x8088a62
    ctx->pc = 0x260934u;
    ctx->pc = 0x260938u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x26093Cu;
label_26093c:
    // 0x26093c: 0x3e00008
    ctx->pc = 0x26093Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26093Cu: goto label_26093c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x260944u;
}
