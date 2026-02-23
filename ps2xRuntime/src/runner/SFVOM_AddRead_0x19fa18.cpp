#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFVOM_AddRead
// Address: 0x19fa18 - 0x19fa38
void SFVOM_AddRead_0x19fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFVOM_AddRead");


    ctx->pc = 0x19fa18u;

    // 0x19fa18: 0x27bdfff0
    ctx->pc = 0x19fa18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fa1c: 0xa0302d
    ctx->pc = 0x19fa1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa20: 0xffbf0000
    ctx->pc = 0x19fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fa24: 0xc064a34
    ctx->pc = 0x19FA24u;
    SET_GPR_U32(ctx, 31, 0x19FA2Cu);
    ctx->pc = 0x19FA28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 22884)));
    ctx->pc = 0x1928D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_VfrmAddRead_0x1928d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA2Cu; }
        else if (ctx->pc != 0x19FA2Cu) { ctx->pc = 0x19FA2Cu; }
    }
    if (ctx->pc != 0x19FA2Cu) { return; }
    ctx->pc = 0x19FA2Cu;
    // 0x19fa2c: 0xdfbf0000
    ctx->pc = 0x19fa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fa30: 0x3e00008
    ctx->pc = 0x19FA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FA34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FA38u;
}
