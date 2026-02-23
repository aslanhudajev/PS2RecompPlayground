#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxb_DefAddWr
// Address: 0x167bc8 - 0x167be4
void adxb_DefAddWr_0x167bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxb_DefAddWr");


    ctx->pc = 0x167bc8u;

    // 0x167bc8: 0x8c82009c
    ctx->pc = 0x167bc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x167bcc: 0x8c830098
    ctx->pc = 0x167bccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x167bd0: 0x461021
    ctx->pc = 0x167bd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x167bd4: 0x661821
    ctx->pc = 0x167bd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x167bd8: 0xac82009c
    ctx->pc = 0x167bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
    // 0x167bdc: 0x3e00008
    ctx->pc = 0x167BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167BE0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167BE4u;
}
