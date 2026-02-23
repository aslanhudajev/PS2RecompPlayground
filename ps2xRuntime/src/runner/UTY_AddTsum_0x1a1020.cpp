#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_AddTsum
// Address: 0x1a1020 - 0x1a105c
void UTY_AddTsum_0x1a1020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_AddTsum");


    ctx->pc = 0x1a1020u;

    // 0x1a1020: 0xdc870008
    ctx->pc = 0x1a1020u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1024: 0xdc880010
    ctx->pc = 0x1a1024u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a1028: 0xdc860000
    ctx->pc = 0x1a1028u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a102c: 0xa7482a
    ctx->pc = 0x1a102cu;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x1a1030: 0x8c830018
    ctx->pc = 0x1a1030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a1034: 0x105102a
    ctx->pc = 0x1a1034u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 5)));
    // 0x1a1038: 0xa2400b
    ctx->pc = 0x1a1038u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
    // 0x1a103c: 0xc5302d
    ctx->pc = 0x1a103cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1a1040: 0xa9380b
    ctx->pc = 0x1a1040u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
    // 0x1a1044: 0x24630001
    ctx->pc = 0x1a1044u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1048: 0xac830018
    ctx->pc = 0x1a1048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1a104c: 0xfc860000
    ctx->pc = 0x1a104cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1a1050: 0xfc870008
    ctx->pc = 0x1a1050u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1a1054: 0x3e00008
    ctx->pc = 0x1A1054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1058u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A105Cu;
}
