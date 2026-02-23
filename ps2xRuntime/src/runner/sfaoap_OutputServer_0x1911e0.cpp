#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfaoap_OutputServer
// Address: 0x1911e0 - 0x191210
void sfaoap_OutputServer_0x1911e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfaoap_OutputServer");


    ctx->pc = 0x1911e0u;

    // 0x1911e0: 0x27bdffe0
    ctx->pc = 0x1911e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1911e4: 0xffb00000
    ctx->pc = 0x1911e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1911e8: 0xffbf0010
    ctx->pc = 0x1911e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1911ec: 0xc064484
    ctx->pc = 0x1911ECu;
    SET_GPR_U32(ctx, 31, 0x1911F4u);
    ctx->pc = 0x1911F0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfaoap_ChkPrepFlg_0x191210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911F4u; }
        else if (ctx->pc != 0x1911F4u) { ctx->pc = 0x1911F4u; }
    }
    if (ctx->pc != 0x1911F4u) { return; }
    ctx->pc = 0x1911F4u;
    // 0x1911f4: 0xc06449e
    ctx->pc = 0x1911F4u;
    SET_GPR_U32(ctx, 31, 0x1911FCu);
    ctx->pc = 0x1911F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191278u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfaoap_ChkTermFlg_0x191278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911FCu; }
        else if (ctx->pc != 0x1911FCu) { ctx->pc = 0x1911FCu; }
    }
    if (ctx->pc != 0x1911FCu) { return; }
    ctx->pc = 0x1911FCu;
    // 0x1911fc: 0xdfbf0010
    ctx->pc = 0x1911fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191200: 0x102d
    ctx->pc = 0x191200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191204: 0xdfb00000
    ctx->pc = 0x191204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191208: 0x3e00008
    ctx->pc = 0x191208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19120Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x191210u;
}
