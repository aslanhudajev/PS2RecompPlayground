#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFAOAP_ExecServer
// Address: 0x1911a8 - 0x1911e0
void SFAOAP_ExecServer_0x1911a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFAOAP_ExecServer");


    ctx->pc = 0x1911a8u;

    // 0x1911a8: 0x27bdffe0
    ctx->pc = 0x1911a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1911ac: 0x24050006
    ctx->pc = 0x1911acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1911b0: 0xffb00000
    ctx->pc = 0x1911b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1911b4: 0xffbf0010
    ctx->pc = 0x1911b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1911b8: 0xc0674c2
    ctx->pc = 0x1911B8u;
    SET_GPR_U32(ctx, 31, 0x1911C0u);
    ctx->pc = 0x1911BCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911C0u; }
        else if (ctx->pc != 0x1911C0u) { ctx->pc = 0x1911C0u; }
    }
    if (ctx->pc != 0x1911C0u) { return; }
    ctx->pc = 0x1911C0u;
    // 0x1911c0: 0x10400003
    ctx->pc = 0x1911C0u;
    {
        const bool branch_taken_0x1911c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1911C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1911c0) {
            ctx->pc = 0x1911D0u;
            goto label_1911d0;
        }
    }
    ctx->pc = 0x1911C8u;
    // 0x1911c8: 0xc064478
    ctx->pc = 0x1911C8u;
    SET_GPR_U32(ctx, 31, 0x1911D0u);
    ctx->pc = 0x1911CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1911E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfaoap_OutputServer_0x1911e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911D0u; }
        else if (ctx->pc != 0x1911D0u) { ctx->pc = 0x1911D0u; }
    }
    if (ctx->pc != 0x1911D0u) { return; }
    ctx->pc = 0x1911D0u;
label_1911d0:
    // 0x1911d0: 0xdfbf0010
    ctx->pc = 0x1911d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1911d4: 0xdfb00000
    ctx->pc = 0x1911d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1911d8: 0x3e00008
    ctx->pc = 0x1911D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1911DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1911D0u: goto label_1911d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1911E0u;
}
