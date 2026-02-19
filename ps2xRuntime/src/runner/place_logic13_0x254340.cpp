#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: place_logic13
// Address: 0x254340 - 0x2543b4
void place_logic13_0x254340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x254340u;

    // 0x254340: 0x80302d
    ctx->pc = 0x254340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254344: 0x240303b0
    ctx->pc = 0x254344u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x254348: 0xa31818
    ctx->pc = 0x254348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25434c: 0x3c020033
    ctx->pc = 0x25434cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x254350: 0x2442dfd0
    ctx->pc = 0x254350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x254354: 0x623821
    ctx->pc = 0x254354u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254358: 0x80c20005
    ctx->pc = 0x254358u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x25435c: 0x4410003
    ctx->pc = 0x25435Cu;
    {
        const bool branch_taken_0x25435c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x254360u;
        SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
        if (branch_taken_0x25435c) {
            ctx->pc = 0x25436Cu;
            goto label_25436c;
        }
    }
    ctx->pc = 0x254364u;
    // 0x254364: 0x10000008
    ctx->pc = 0x254364u;
    {
        const bool branch_taken_0x254364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x254368u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x254364) {
            ctx->pc = 0x254388u;
            goto label_254388;
        }
    }
    ctx->pc = 0x25436Cu;
label_25436c:
    // 0x25436c: 0x2484dfd0
    ctx->pc = 0x25436cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959056));
    // 0x254370: 0x80c20005
    ctx->pc = 0x254370u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x254374: 0x240303b0
    ctx->pc = 0x254374u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x254378: 0x431018
    ctx->pc = 0x254378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25437c: 0x441021
    ctx->pc = 0x25437cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254380: 0xac45034c
    ctx->pc = 0x254380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 844), GPR_U32(ctx, 5));
    // 0x254384: 0x80c20005
    ctx->pc = 0x254384u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
label_254388:
    // 0x254388: 0xace20348
    ctx->pc = 0x254388u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 840), GPR_U32(ctx, 2));
    // 0x25438c: 0x2402ffff
    ctx->pc = 0x25438cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254390: 0xace2034c
    ctx->pc = 0x254390u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 844), GPR_U32(ctx, 2));
    // 0x254394: 0xa0c50005
    ctx->pc = 0x254394u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x254398: 0x90c20002
    ctx->pc = 0x254398u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x25439c: 0x24420001
    ctx->pc = 0x25439cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2543a0: 0xa0c20002
    ctx->pc = 0x2543a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2543a4: 0x90c20004
    ctx->pc = 0x2543a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2543a8: 0x24420001
    ctx->pc = 0x2543a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2543ac: 0x3e00008
    ctx->pc = 0x2543ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2543B0u;
        WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25436Cu: goto label_25436c;
            case 0x254388u: goto label_254388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2543B4u;
}
