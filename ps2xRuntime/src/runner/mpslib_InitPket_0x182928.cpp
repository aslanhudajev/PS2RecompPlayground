#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpslib_InitPket
// Address: 0x182928 - 0x182958
void mpslib_InitPket_0x182928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpslib_InitPket");


    ctx->pc = 0x182928u;

    // 0x182928: 0x3c02ffff
    ctx->pc = 0x182928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x18292c: 0x2403ffff
    ctx->pc = 0x18292cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182930: 0x3442ffff
    ctx->pc = 0x182930u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x182934: 0xac83001c
    ctx->pc = 0x182934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x182938: 0xac820004
    ctx->pc = 0x182938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x18293c: 0xac830000
    ctx->pc = 0x18293cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x182940: 0xac830008
    ctx->pc = 0x182940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x182944: 0xac83000c
    ctx->pc = 0x182944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x182948: 0xac830010
    ctx->pc = 0x182948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x18294c: 0xac830014
    ctx->pc = 0x18294cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x182950: 0x3e00008
    ctx->pc = 0x182950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182954u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182958u;
}
