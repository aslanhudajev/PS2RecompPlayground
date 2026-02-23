#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_Error
// Address: 0x18f768 - 0x18f7dc
void MWSFSVM_Error_0x18f768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_Error");
    ctx->pc = 0x18f768u;

    // 0x18f768: 0x27bdff50
    ctx->pc = 0x18f768u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18f76c: 0xffb00000
    ctx->pc = 0x18f76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18f770: 0xffb10010
    ctx->pc = 0x18f770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18f774: 0x3c10002f
    ctx->pc = 0x18f774u;
    SET_GPR_U32(ctx, 16, ((uint32_t)47 << 16));
    // 0x18f778: 0x2610c548
    ctx->pc = 0x18f778u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294952264));
    // 0x18f77c: 0x80882d
    ctx->pc = 0x18f77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f780: 0xffa50078
    ctx->pc = 0x18f780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 5));
    // 0x18f784: 0x200202d
    ctx->pc = 0x18f784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f788: 0xffa60080
    ctx->pc = 0x18f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
    // 0x18f78c: 0x282d
    ctx->pc = 0x18f78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f790: 0xffa70088
    ctx->pc = 0x18f790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x18f794: 0xffa80090
    ctx->pc = 0x18f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x18f798: 0xffa90098
    ctx->pc = 0x18f798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x18f79c: 0xffaa00a0
    ctx->pc = 0x18f79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x18f7a0: 0xffab00a8
    ctx->pc = 0x18f7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x18f7a4: 0xffbf0020
    ctx->pc = 0x18f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f7a8: 0xc050cfe
    ctx->pc = 0x18F7A8u;
    SET_GPR_U32(ctx, 31, 0x18F7B0u);
    ctx->pc = 0x18F7ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7B0u; }
        else if (ctx->pc != 0x18F7B0u) { ctx->pc = 0x18F7B0u; }
    }
    if (ctx->pc != 0x18F7B0u) { return; }
    ctx->pc = 0x18F7B0u;
    // 0x18f7b0: 0x220282d
    ctx->pc = 0x18f7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f7b4: 0x200202d
    ctx->pc = 0x18f7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f7b8: 0xc0520a2
    ctx->pc = 0x18F7B8u;
    SET_GPR_U32(ctx, 31, 0x18F7C0u);
    ctx->pc = 0x18F7BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
    ctx->pc = 0x148288u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x148288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7C0u; }
        else if (ctx->pc != 0x18F7C0u) { ctx->pc = 0x18F7C0u; }
    }
    if (ctx->pc != 0x18F7C0u) { return; }
    ctx->pc = 0x18F7C0u;
    // 0x18f7c0: 0xc063dfe
    ctx->pc = 0x18F7C0u;
    SET_GPR_U32(ctx, 31, 0x18F7C8u);
    ctx->pc = 0x18F7C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwl_callErrCb_0x18f7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7C8u; }
        else if (ctx->pc != 0x18F7C8u) { ctx->pc = 0x18F7C8u; }
    }
    if (ctx->pc != 0x18F7C8u) { return; }
    ctx->pc = 0x18F7C8u;
    // 0x18f7c8: 0xdfbf0020
    ctx->pc = 0x18f7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f7cc: 0xdfb10010
    ctx->pc = 0x18f7ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f7d0: 0xdfb00000
    ctx->pc = 0x18f7d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f7d4: 0x3e00008
    ctx->pc = 0x18F7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F7D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F7DCu;
}
