#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVLIB_CheckHn
// Address: 0x188508 - 0x188530
void MPVLIB_CheckHn_0x188508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVLIB_CheckHn");


    ctx->pc = 0x188508u;

    // 0x188508: 0x3c02002e
    ctx->pc = 0x188508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x18850c: 0x14800003
    ctx->pc = 0x18850Cu;
    {
        const bool branch_taken_0x18850c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x188510u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 17100), GPR_U32(ctx, 4));
        if (branch_taken_0x18850c) {
            ctx->pc = 0x18851Cu;
            goto label_18851c;
        }
    }
    ctx->pc = 0x188514u;
    // 0x188514: 0x3e00008
    ctx->pc = 0x188514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188518u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18851Cu: goto label_18851c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18851Cu;
label_18851c:
    // 0x18851c: 0x8c830160
    ctx->pc = 0x18851cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x188520: 0x2402ffff
    ctx->pc = 0x188520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188524: 0x38630002
    ctx->pc = 0x188524u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 2));
    // 0x188528: 0x3e00008
    ctx->pc = 0x188528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18852Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18851Cu: goto label_18851c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188530u;
}
