#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyStartAfsLp
// Address: 0x18e600 - 0x18e660
void mwPlyStartAfsLp_0x18e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyStartAfsLp");


    ctx->pc = 0x18e600u;

    // 0x18e600: 0x27bdffc0
    ctx->pc = 0x18e600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18e604: 0xffb20020
    ctx->pc = 0x18e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18e608: 0xffb10010
    ctx->pc = 0x18e608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18e60c: 0xa0902d
    ctx->pc = 0x18e60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e610: 0xffb00000
    ctx->pc = 0x18e610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e614: 0xc0882d
    ctx->pc = 0x18e614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e618: 0xffbf0030
    ctx->pc = 0x18e618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18e61c: 0x80802d
    ctx->pc = 0x18e61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e620: 0xc05e88e
    ctx->pc = 0x18E620u;
    SET_GPR_U32(ctx, 31, 0x18E628u);
    ctx->pc = 0x18E624u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x17A238u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Stop_0x17a238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E628u; }
        else if (ctx->pc != 0x18E628u) { ctx->pc = 0x18E628u; }
    }
    if (ctx->pc != 0x18E628u) { return; }
    ctx->pc = 0x18E628u;
    // 0x18e628: 0x220302d
    ctx->pc = 0x18e628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e62c: 0x240282d
    ctx->pc = 0x18e62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e630: 0xc063958
    ctx->pc = 0x18E630u;
    SET_GPR_U32(ctx, 31, 0x18E638u);
    ctx->pc = 0x18E634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18E560u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyEntryAfs_0x18e560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E638u; }
        else if (ctx->pc != 0x18E638u) { ctx->pc = 0x18E638u; }
    }
    if (ctx->pc != 0x18E638u) { return; }
    ctx->pc = 0x18E638u;
    // 0x18e638: 0x200202d
    ctx->pc = 0x18e638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e63c: 0xc06392c
    ctx->pc = 0x18E63Cu;
    SET_GPR_U32(ctx, 31, 0x18E644u);
    ctx->pc = 0x18E640u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x18E4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySetLpFlg_0x18e4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E644u; }
        else if (ctx->pc != 0x18E644u) { ctx->pc = 0x18E644u; }
    }
    if (ctx->pc != 0x18E644u) { return; }
    ctx->pc = 0x18E644u;
    // 0x18e644: 0x200202d
    ctx->pc = 0x18e644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e648: 0xdfbf0030
    ctx->pc = 0x18e648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e64c: 0xdfb20020
    ctx->pc = 0x18e64cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e650: 0xdfb10010
    ctx->pc = 0x18e650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e654: 0xdfb00000
    ctx->pc = 0x18e654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e658: 0x806391e
    ctx->pc = 0x18E658u;
    ctx->pc = 0x18E65Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x18E478u;
    mwPlyStartSeamless_0x18e478(rdram, ctx, runtime); return;
    ctx->pc = 0x18E660u;
}
