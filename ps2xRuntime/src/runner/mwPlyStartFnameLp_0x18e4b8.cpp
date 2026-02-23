#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyStartFnameLp
// Address: 0x18e4b8 - 0x18e508
void mwPlyStartFnameLp_0x18e4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyStartFnameLp");


    ctx->pc = 0x18e4b8u;

    // 0x18e4b8: 0x27bdffd0
    ctx->pc = 0x18e4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e4bc: 0xffb10010
    ctx->pc = 0x18e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18e4c0: 0xffb00000
    ctx->pc = 0x18e4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e4c4: 0xa0882d
    ctx->pc = 0x18e4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4c8: 0xffbf0020
    ctx->pc = 0x18e4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e4cc: 0x80802d
    ctx->pc = 0x18e4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4d0: 0xc05e88e
    ctx->pc = 0x18E4D0u;
    SET_GPR_U32(ctx, 31, 0x18E4D8u);
    ctx->pc = 0x18E4D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x17A238u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Stop_0x17a238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4D8u; }
        else if (ctx->pc != 0x18E4D8u) { ctx->pc = 0x18E4D8u; }
    }
    if (ctx->pc != 0x18E4D8u) { return; }
    ctx->pc = 0x18E4D8u;
    // 0x18e4d8: 0x220282d
    ctx->pc = 0x18e4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4dc: 0xc063904
    ctx->pc = 0x18E4DCu;
    SET_GPR_U32(ctx, 31, 0x18E4E4u);
    ctx->pc = 0x18E4E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18E410u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyEntryFname_0x18e410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4E4u; }
        else if (ctx->pc != 0x18E4E4u) { ctx->pc = 0x18E4E4u; }
    }
    if (ctx->pc != 0x18E4E4u) { return; }
    ctx->pc = 0x18E4E4u;
    // 0x18e4e4: 0x200202d
    ctx->pc = 0x18e4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4e8: 0xc06392c
    ctx->pc = 0x18E4E8u;
    SET_GPR_U32(ctx, 31, 0x18E4F0u);
    ctx->pc = 0x18E4ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x18E4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySetLpFlg_0x18e4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E4F0u; }
        else if (ctx->pc != 0x18E4F0u) { ctx->pc = 0x18E4F0u; }
    }
    if (ctx->pc != 0x18E4F0u) { return; }
    ctx->pc = 0x18E4F0u;
    // 0x18e4f0: 0x200202d
    ctx->pc = 0x18e4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4f4: 0xdfbf0020
    ctx->pc = 0x18e4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e4f8: 0xdfb10010
    ctx->pc = 0x18e4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4fc: 0xdfb00000
    ctx->pc = 0x18e4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e500: 0x806391e
    ctx->pc = 0x18E500u;
    ctx->pc = 0x18E504u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x18E478u;
    mwPlyStartSeamless_0x18e478(rdram, ctx, runtime); return;
    ctx->pc = 0x18E508u;
}
