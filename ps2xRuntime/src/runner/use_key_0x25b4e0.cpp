#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: use_key
// Address: 0x25b4e0 - 0x25b510
void use_key_0x25b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25b4e0u;

    // 0x25b4e0: 0x8c821a14
    ctx->pc = 0x25b4e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6676)));
    // 0x25b4e4: 0x58400005
    ctx->pc = 0x25B4E4u;
    {
        const bool branch_taken_0x25b4e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25b4e4) {
            ctx->pc = 0x25B4E8u;
            SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
            ctx->pc = 0x25B4FCu;
            goto label_25b4fc;
        }
    }
    ctx->pc = 0x25B4ECu;
    // 0x25b4ec: 0x2442ffff
    ctx->pc = 0x25b4ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25b4f0: 0xac821a14
    ctx->pc = 0x25b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6676), GPR_U32(ctx, 2));
    // 0x25b4f4: 0x3e00008
    ctx->pc = 0x25B4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B4F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B4FCu: goto label_25b4fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B4FCu;
label_25b4fc:
    // 0x25b4fc: 0x8c43ffec
    ctx->pc = 0x25b4fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967276)));
    // 0x25b500: 0x30630001
    ctx->pc = 0x25b500u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x25b504: 0x2402ffff
    ctx->pc = 0x25b504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25b508: 0x3e00008
    ctx->pc = 0x25B508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B50Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B4FCu: goto label_25b4fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B510u;
}
