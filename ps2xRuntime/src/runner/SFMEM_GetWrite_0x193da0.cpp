#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMEM_GetWrite
// Address: 0x193da0 - 0x193dc0
void SFMEM_GetWrite_0x193da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMEM_GetWrite");


    ctx->pc = 0x193da0u;

    // 0x193da0: 0x27bdfff0
    ctx->pc = 0x193da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193da4: 0xa0302d
    ctx->pc = 0x193da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193da8: 0xffbf0000
    ctx->pc = 0x193da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193dac: 0xc06474c
    ctx->pc = 0x193DACu;
    SET_GPR_U32(ctx, 31, 0x193DB4u);
    ctx->pc = 0x193DB0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12328)));
    ctx->pc = 0x191D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingGetWrite_0x191d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193DB4u; }
        else if (ctx->pc != 0x193DB4u) { ctx->pc = 0x193DB4u; }
    }
    if (ctx->pc != 0x193DB4u) { return; }
    ctx->pc = 0x193DB4u;
    // 0x193db4: 0xdfbf0000
    ctx->pc = 0x193db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193db8: 0x3e00008
    ctx->pc = 0x193DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193DBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193DC0u;
}
