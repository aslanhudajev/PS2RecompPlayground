#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTMR_AddTsum
// Address: 0x19ec88 - 0x19ecc4
void SFTMR_AddTsum_0x19ec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTMR_AddTsum");


    ctx->pc = 0x19ec88u;

    // 0x19ec88: 0xdc870008
    ctx->pc = 0x19ec88u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19ec8c: 0xdc880010
    ctx->pc = 0x19ec8cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19ec90: 0xdc860000
    ctx->pc = 0x19ec90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ec94: 0xa7482a
    ctx->pc = 0x19ec94u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x19ec98: 0x8c830018
    ctx->pc = 0x19ec98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19ec9c: 0x105102a
    ctx->pc = 0x19ec9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 5)));
    // 0x19eca0: 0xa2400b
    ctx->pc = 0x19eca0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
    // 0x19eca4: 0xc5302d
    ctx->pc = 0x19eca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x19eca8: 0xa9380b
    ctx->pc = 0x19eca8u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
    // 0x19ecac: 0x24630001
    ctx->pc = 0x19ecacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ecb0: 0xac830018
    ctx->pc = 0x19ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x19ecb4: 0xfc860000
    ctx->pc = 0x19ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x19ecb8: 0xfc870008
    ctx->pc = 0x19ecb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x19ecbc: 0x3e00008
    ctx->pc = 0x19ECBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ECC0u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ECC4u;
}
