#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_GetWrite
// Address: 0x190e40 - 0x190e60
void SFADXT_GetWrite_0x190e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_GetWrite");


    ctx->pc = 0x190e40u;

    // 0x190e40: 0x27bdfff0
    ctx->pc = 0x190e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190e44: 0x3c05ff00
    ctx->pc = 0x190e44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x190e48: 0xffbf0000
    ctx->pc = 0x190e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190e4c: 0xc064ea0
    ctx->pc = 0x190E4Cu;
    SET_GPR_U32(ctx, 31, 0x190E54u);
    ctx->pc = 0x190E50u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3075));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190E54u; }
        else if (ctx->pc != 0x190E54u) { ctx->pc = 0x190E54u; }
    }
    if (ctx->pc != 0x190E54u) { return; }
    ctx->pc = 0x190E54u;
    // 0x190e54: 0xdfbf0000
    ctx->pc = 0x190e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190e58: 0x3e00008
    ctx->pc = 0x190E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190E5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190E60u;
}
