#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCalcDebugMode
// Address: 0x2a39c8 - 0x2a3a24
void pbCalcDebugMode_0x2a39c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a39c8u;

    // 0x2a39c8: 0x3c020036
    ctx->pc = 0x2a39c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a39cc: 0x40182d
    ctx->pc = 0x2a39ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39d0: 0x8c44e02c
    ctx->pc = 0x2a39d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959148)));
    // 0x2a39d4: 0x24060001
    ctx->pc = 0x2a39d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a39d8: 0x24820024
    ctx->pc = 0x2a39d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 36));
    // 0x2a39dc: 0x82102b
    ctx->pc = 0x2a39dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a39e0: 0x1040000b
    ctx->pc = 0x2A39E0u;
    {
        const bool branch_taken_0x2a39e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A39E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a39e0) {
            ctx->pc = 0x2A3A10u;
            goto label_2a3a10;
        }
    }
    ctx->pc = 0x2A39E8u;
    // 0x2a39e8: 0x8c62e02c
    ctx->pc = 0x2a39e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294959148)));
    // 0x2a39ec: 0x24470024
    ctx->pc = 0x2a39ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 36));
label_2a39f0:
    // 0x2a39f0: 0x8c820000
    ctx->pc = 0x2a39f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a39f4: 0xa61825
    ctx->pc = 0x2a39f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2a39f8: 0x62280b
    ctx->pc = 0x2a39f8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x2a39fc: 0x63040
    ctx->pc = 0x2a39fcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x2a3a00: 0x24840004
    ctx->pc = 0x2a3a00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a3a04: 0x87102b
    ctx->pc = 0x2a3a04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2a3a08: 0x1440fff9
    ctx->pc = 0x2A3A08u;
    {
        const bool branch_taken_0x2a3a08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a3a08) {
            ctx->pc = 0x2A39F0u;
            goto label_2a39f0;
        }
    }
    ctx->pc = 0x2A3A10u;
label_2a3a10:
    // 0x2a3a10: 0x3c020036
    ctx->pc = 0x2a3a10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3a14: 0x8c42e02c
    ctx->pc = 0x2a3a14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959148)));
    // 0x2a3a18: 0xac450024
    ctx->pc = 0x2a3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
    // 0x2a3a1c: 0x3e00008
    ctx->pc = 0x2A3A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3A20u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A39F0u: goto label_2a39f0;
            case 0x2A3A10u: goto label_2a3a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A3A24u;
}
