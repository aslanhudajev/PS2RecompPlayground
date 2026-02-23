#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPSLIB_CheckHn
// Address: 0x1827c0 - 0x1827e8
void MPSLIB_CheckHn_0x1827c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPSLIB_CheckHn");


    ctx->pc = 0x1827c0u;

    // 0x1827c0: 0x3c02002e
    ctx->pc = 0x1827c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x1827c4: 0x14800003
    ctx->pc = 0x1827C4u;
    {
        const bool branch_taken_0x1827c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1827C8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 17036), GPR_U32(ctx, 4));
        if (branch_taken_0x1827c4) {
            ctx->pc = 0x1827D4u;
            goto label_1827d4;
        }
    }
    ctx->pc = 0x1827CCu;
    // 0x1827cc: 0x3e00008
    ctx->pc = 0x1827CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1827D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1827D4u: goto label_1827d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1827D4u;
label_1827d4:
    // 0x1827d4: 0x8c830000
    ctx->pc = 0x1827d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1827d8: 0x2402ffff
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1827dc: 0x38630001
    ctx->pc = 0x1827dcu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x1827e0: 0x3e00008
    ctx->pc = 0x1827E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1827E4u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1827D4u: goto label_1827d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1827E8u;
}
