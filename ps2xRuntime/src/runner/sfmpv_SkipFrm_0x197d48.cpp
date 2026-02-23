#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SkipFrm
// Address: 0x197d48 - 0x197de0
void sfmpv_SkipFrm_0x197d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SkipFrm");


    ctx->pc = 0x197d48u;

    // 0x197d48: 0x27bdffa0
    ctx->pc = 0x197d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197d4c: 0xffb40040
    ctx->pc = 0x197d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x197d50: 0xffb30030
    ctx->pc = 0x197d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x197d54: 0xffb20020
    ctx->pc = 0x197d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x197d58: 0x80982d
    ctx->pc = 0x197d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d5c: 0xffb10010
    ctx->pc = 0x197d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x197d60: 0xc0902d
    ctx->pc = 0x197d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d64: 0xffbf0050
    ctx->pc = 0x197d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x197d68: 0xa0882d
    ctx->pc = 0x197d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d6c: 0xffb00000
    ctx->pc = 0x197d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197d70: 0x8e703740
    ctx->pc = 0x197d70u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 14144)));
    // 0x197d74: 0xc065f78
    ctx->pc = 0x197D74u;
    SET_GPR_U32(ctx, 31, 0x197D7Cu);
    ctx->pc = 0x197D78u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 14212));
    ctx->pc = 0x197DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetSkipTtu_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D7Cu; }
        else if (ctx->pc != 0x197D7Cu) { ctx->pc = 0x197D7Cu; }
    }
    if (ctx->pc != 0x197D7Cu) { return; }
    ctx->pc = 0x197D7Cu;
    // 0x197d7c: 0x200202d
    ctx->pc = 0x197d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d80: 0x220282d
    ctx->pc = 0x197d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d84: 0xc0618ce
    ctx->pc = 0x197D84u;
    SET_GPR_U32(ctx, 31, 0x197D8Cu);
    ctx->pc = 0x197D88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186338u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SkipFrm_0x186338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D8Cu; }
        else if (ctx->pc != 0x197D8Cu) { ctx->pc = 0x197D8Cu; }
    }
    if (ctx->pc != 0x197D8Cu) { return; }
    ctx->pc = 0x197D8Cu;
    // 0x197d8c: 0x3c07ff00
    ctx->pc = 0x197d8cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)65280 << 16));
    // 0x197d90: 0x8e460000
    ctx->pc = 0x197d90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x197d94: 0x40282d
    ctx->pc = 0x197d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d98: 0x260202d
    ctx->pc = 0x197d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d9c: 0xc065a64
    ctx->pc = 0x197D9Cu;
    SET_GPR_U32(ctx, 31, 0x197DA4u);
    ctx->pc = 0x197DA0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3847));
    ctx->pc = 0x196990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ChkMpvErr_0x196990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DA4u; }
        else if (ctx->pc != 0x197DA4u) { ctx->pc = 0x197DA4u; }
    }
    if (ctx->pc != 0x197DA4u) { return; }
    ctx->pc = 0x197DA4u;
    // 0x197da4: 0x14400007
    ctx->pc = 0x197DA4u;
    {
        const bool branch_taken_0x197da4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x197DA8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x197da4) {
            ctx->pc = 0x197DC4u;
            goto label_197dc4;
        }
    }
    ctx->pc = 0x197DACu;
    // 0x197dac: 0x8e860018
    ctx->pc = 0x197dacu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x197db0: 0x260202d
    ctx->pc = 0x197db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197db4: 0xc066e92
    ctx->pc = 0x197DB4u;
    SET_GPR_U32(ctx, 31, 0x197DBCu);
    ctx->pc = 0x197DB8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19BA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPLY_AddSkipPic_0x19ba48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DBCu; }
        else if (ctx->pc != 0x197DBCu) { ctx->pc = 0x197DBCu; }
    }
    if (ctx->pc != 0x197DBCu) { return; }
    ctx->pc = 0x197DBCu;
    // 0x197dbc: 0x102d
    ctx->pc = 0x197dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197dc0: 0xdfbf0050
    ctx->pc = 0x197dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_197dc4:
    // 0x197dc4: 0xdfb40040
    ctx->pc = 0x197dc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197dc8: 0xdfb30030
    ctx->pc = 0x197dc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197dcc: 0xdfb20020
    ctx->pc = 0x197dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197dd0: 0xdfb10010
    ctx->pc = 0x197dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197dd4: 0xdfb00000
    ctx->pc = 0x197dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197dd8: 0x3e00008
    ctx->pc = 0x197DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197DDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197DC4u: goto label_197dc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197DE0u;
}
