#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufEndGet
// Address: 0x2ddbb0 - 0x2ddbd4
void readBufEndGet_0x2ddbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ddbb0u;

    // 0x2ddbb0: 0x3c020005
    ctx->pc = 0x2ddbb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2ddbb4: 0x822021
    ctx->pc = 0x2ddbb4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ddbb8: 0x8c820004
    ctx->pc = 0x2ddbb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ddbbc: 0x40182d
    ctx->pc = 0x2ddbbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddbc0: 0xa2302a
    ctx->pc = 0x2ddbc0u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x2ddbc4: 0xa6100b
    ctx->pc = 0x2ddbc4u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x2ddbc8: 0x621823
    ctx->pc = 0x2ddbc8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ddbcc: 0x3e00008
    ctx->pc = 0x2DDBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDBD0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DDBD4u;
}
