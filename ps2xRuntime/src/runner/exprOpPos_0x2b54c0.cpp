#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpPos
// Address: 0x2b54c0 - 0x2b5510
void exprOpPos_0x2b54c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b54c0u;

    // 0x2b54c0: 0x24a20040
    ctx->pc = 0x2b54c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 64));
label_2b54c4:
    // 0x2b54c4: 0xdca30000
    ctx->pc = 0x2b54c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b54c8: 0xdca60008
    ctx->pc = 0x2b54c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b54cc: 0xdca70010
    ctx->pc = 0x2b54ccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b54d0: 0xdca80018
    ctx->pc = 0x2b54d0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2b54d4: 0xfc830000
    ctx->pc = 0x2b54d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2b54d8: 0xfc860008
    ctx->pc = 0x2b54d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2b54dc: 0xfc870010
    ctx->pc = 0x2b54dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2b54e0: 0xfc880018
    ctx->pc = 0x2b54e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2b54e4: 0x24a50020
    ctx->pc = 0x2b54e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x2b54e8: 0x24840020
    ctx->pc = 0x2b54e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b54ec: 0x0
    ctx->pc = 0x2b54ecu;
    // NOP
    // 0x2b54f0: 0x0
    ctx->pc = 0x2b54f0u;
    // NOP
    // 0x2b54f4: 0x14a2fff3
    ctx->pc = 0x2B54F4u;
    {
        const bool branch_taken_0x2b54f4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b54f4) {
            ctx->pc = 0x2B54C4u;
            goto label_2b54c4;
        }
    }
    ctx->pc = 0x2B54FCu;
    // 0x2b54fc: 0xdca20000
    ctx->pc = 0x2b54fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b5500: 0xdca30008
    ctx->pc = 0x2b5500u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b5504: 0xfc820000
    ctx->pc = 0x2b5504u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2b5508: 0x3e00008
    ctx->pc = 0x2B5508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B550Cu;
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B54C4u: goto label_2b54c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5510u;
}
