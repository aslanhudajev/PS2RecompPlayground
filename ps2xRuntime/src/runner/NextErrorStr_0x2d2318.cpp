#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextErrorStr
// Address: 0x2d2318 - 0x2d2390
void NextErrorStr_0x2d2318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2318u;

    // 0x2d2318: 0x3c04003d
    ctx->pc = 0x2d2318u;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
    // 0x2d231c: 0x90852a59
    ctx->pc = 0x2d231cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10841)));
    // 0x2d2320: 0x90822a59
    ctx->pc = 0x2d2320u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10841)));
    // 0x2d2324: 0x24420001
    ctx->pc = 0x2d2324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2328: 0xa0822a59
    ctx->pc = 0x2d2328u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10841), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d232c: 0x304200ff
    ctx->pc = 0x2d232cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x2d2330: 0x3c03003a
    ctx->pc = 0x2d2330u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d2334: 0x8c631d08
    ctx->pc = 0x2d2334u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 7432)));
    // 0x2d2338: 0x43102a
    ctx->pc = 0x2d2338u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2d233c: 0x50400001
    ctx->pc = 0x2D233Cu;
    {
        const bool branch_taken_0x2d233c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d233c) {
            ctx->pc = 0x2D2340u;
            WRITE8(ADD32(GPR_U32(ctx, 4), 10841), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2D2344u;
            goto label_2d2344;
        }
    }
    ctx->pc = 0x2D2344u;
label_2d2344:
    // 0x2d2344: 0x3c04003d
    ctx->pc = 0x2d2344u;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
    // 0x2d2348: 0x90822a5a
    ctx->pc = 0x2d2348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10842)));
    // 0x2d234c: 0x3c03003a
    ctx->pc = 0x2d234cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d2350: 0x8c631d08
    ctx->pc = 0x2d2350u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 7432)));
    // 0x2d2354: 0x43102a
    ctx->pc = 0x2d2354u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2d2358: 0x50400005
    ctx->pc = 0x2D2358u;
    {
        const bool branch_taken_0x2d2358 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d2358) {
            ctx->pc = 0x2D235Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
            ctx->pc = 0x2D2370u;
            goto label_2d2370;
        }
    }
    ctx->pc = 0x2D2360u;
    // 0x2d2360: 0x90822a5a
    ctx->pc = 0x2d2360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10842)));
    // 0x2d2364: 0x24420001
    ctx->pc = 0x2d2364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2368: 0x10000004
    ctx->pc = 0x2D2368u;
    {
        const bool branch_taken_0x2d2368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D236Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 10842), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2d2368) {
            ctx->pc = 0x2D237Cu;
            goto label_2d237c;
        }
    }
    ctx->pc = 0x2D2370u;
label_2d2370:
    // 0x2d2370: 0x3c03003d
    ctx->pc = 0x2d2370u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2d2374: 0x90632a59
    ctx->pc = 0x2d2374u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10841)));
    // 0x2d2378: 0xa0432a58
    ctx->pc = 0x2d2378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10840), (uint8_t)GPR_U32(ctx, 3));
label_2d237c:
    // 0x2d237c: 0x51980
    ctx->pc = 0x2d237cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
    // 0x2d2380: 0x3c02003d
    ctx->pc = 0x2d2380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d2384: 0x24422a60
    ctx->pc = 0x2d2384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10848));
    // 0x2d2388: 0x3e00008
    ctx->pc = 0x2D2388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D238Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2344u: goto label_2d2344;
            case 0x2D2370u: goto label_2d2370;
            case 0x2D237Cu: goto label_2d237c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2390u;
}
