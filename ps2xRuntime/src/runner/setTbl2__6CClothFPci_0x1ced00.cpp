#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setTbl2__6CClothFPci
// Address: 0x1ced00 - 0x1ced3c
void setTbl2__6CClothFPci_0x1ced00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setTbl2__6CClothFPci");


    ctx->pc = 0x1ced00u;

    // 0x1ced00: 0x3c03002c
    ctx->pc = 0x1ced00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1ced04: 0x63900
    ctx->pc = 0x1ced04u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1ced08: 0x2463e380
    ctx->pc = 0x1ced08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960000));
    // 0x1ced0c: 0xac850008
    ctx->pc = 0x1ced0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1ced10: 0x671821
    ctx->pc = 0x1ced10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ced14: 0x8c660000
    ctx->pc = 0x1ced14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ced18: 0x3c03002c
    ctx->pc = 0x1ced18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1ced1c: 0x2463e384
    ctx->pc = 0x1ced1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960004));
    // 0x1ced20: 0xa63021
    ctx->pc = 0x1ced20u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ced24: 0x671821
    ctx->pc = 0x1ced24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ced28: 0xac860010
    ctx->pc = 0x1ced28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1ced2c: 0x8c630000
    ctx->pc = 0x1ced2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ced30: 0xa31821
    ctx->pc = 0x1ced30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ced34: 0x3e00008
    ctx->pc = 0x1CED34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED38u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CED3Cu;
}
