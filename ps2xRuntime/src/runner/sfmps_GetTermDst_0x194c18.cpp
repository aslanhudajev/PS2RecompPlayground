#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_GetTermDst
// Address: 0x194c18 - 0x194c84
void sfmps_GetTermDst_0x194c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_GetTermDst");


    ctx->pc = 0x194c18u;

    // 0x194c18: 0x27bdffb0
    ctx->pc = 0x194c18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194c1c: 0xffb20020
    ctx->pc = 0x194c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x194c20: 0x80902d
    ctx->pc = 0x194c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c24: 0xffb30030
    ctx->pc = 0x194c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x194c28: 0xffb10010
    ctx->pc = 0x194c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x194c2c: 0xffb00000
    ctx->pc = 0x194c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194c30: 0xffbf0040
    ctx->pc = 0x194c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x194c34: 0x26503058
    ctx->pc = 0x194c34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 12376));
    // 0x194c38: 0xc064a60
    ctx->pc = 0x194C38u;
    SET_GPR_U32(ctx, 31, 0x194C40u);
    ctx->pc = 0x194C3Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C40u; }
        else if (ctx->pc != 0x194C40u) { ctx->pc = 0x194C40u; }
    }
    if (ctx->pc != 0x194C40u) { return; }
    ctx->pc = 0x194C40u;
    // 0x194c40: 0x8e0506b0
    ctx->pc = 0x194c40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 1712)));
    // 0x194c44: 0x40882d
    ctx->pc = 0x194c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c48: 0xc064a60
    ctx->pc = 0x194C48u;
    SET_GPR_U32(ctx, 31, 0x194C50u);
    ctx->pc = 0x194C4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C50u; }
        else if (ctx->pc != 0x194C50u) { ctx->pc = 0x194C50u; }
    }
    if (ctx->pc != 0x194C50u) { return; }
    ctx->pc = 0x194C50u;
    // 0x194c50: 0x8e0506b8
    ctx->pc = 0x194c50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 1720)));
    // 0x194c54: 0x40982d
    ctx->pc = 0x194c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c58: 0xc064a60
    ctx->pc = 0x194C58u;
    SET_GPR_U32(ctx, 31, 0x194C60u);
    ctx->pc = 0x194C5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C60u; }
        else if (ctx->pc != 0x194C60u) { ctx->pc = 0x194C60u; }
    }
    if (ctx->pc != 0x194C60u) { return; }
    ctx->pc = 0x194C60u;
    // 0x194c60: 0x2338824
    ctx->pc = 0x194c60u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x194c64: 0xdfbf0040
    ctx->pc = 0x194c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194c68: 0x2221024
    ctx->pc = 0x194c68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x194c6c: 0xdfb30030
    ctx->pc = 0x194c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194c70: 0xdfb20020
    ctx->pc = 0x194c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194c74: 0xdfb10010
    ctx->pc = 0x194c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c78: 0xdfb00000
    ctx->pc = 0x194c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194c7c: 0x3e00008
    ctx->pc = 0x194C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194C80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194C84u;
}
