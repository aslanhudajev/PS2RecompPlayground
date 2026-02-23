#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMEM_AddRead
// Address: 0x193e08 - 0x193e28
void SFMEM_AddRead_0x193e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMEM_AddRead");


    ctx->pc = 0x193e08u;

    // 0x193e08: 0x27bdfff0
    ctx->pc = 0x193e08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193e0c: 0x3c05ff00
    ctx->pc = 0x193e0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x193e10: 0xffbf0000
    ctx->pc = 0x193e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193e14: 0xc064ea0
    ctx->pc = 0x193E14u;
    SET_GPR_U32(ctx, 31, 0x193E1Cu);
    ctx->pc = 0x193E18u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1281));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E1Cu; }
        else if (ctx->pc != 0x193E1Cu) { ctx->pc = 0x193E1Cu; }
    }
    if (ctx->pc != 0x193E1Cu) { return; }
    ctx->pc = 0x193E1Cu;
    // 0x193e1c: 0xdfbf0000
    ctx->pc = 0x193e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193e20: 0x3e00008
    ctx->pc = 0x193E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193E24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193E28u;
}
