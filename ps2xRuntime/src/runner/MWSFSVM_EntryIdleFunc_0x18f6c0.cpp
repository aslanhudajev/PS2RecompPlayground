#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_EntryIdleFunc
// Address: 0x18f6c0 - 0x18f6ec
void MWSFSVM_EntryIdleFunc_0x18f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_EntryIdleFunc");
    ctx->pc = 0x18f6c0u;

    // 0x18f6c0: 0xa0302d
    ctx->pc = 0x18f6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f6c4: 0x27bdfff0
    ctx->pc = 0x18f6c4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f6c8: 0x80282d
    ctx->pc = 0x18f6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f6cc: 0xffbf0000
    ctx->pc = 0x18f6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f6d0: 0xc05f7ca
    ctx->pc = 0x18F6D0u;
    SET_GPR_U32(ctx, 31, 0x18F6D8u);
    ctx->pc = 0x18F6D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x17DF28u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbSvr_0x17df28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6D8u; }
        else if (ctx->pc != 0x18F6D8u) { ctx->pc = 0x18F6D8u; }
    }
    if (ctx->pc != 0x18F6D8u) { return; }
    ctx->pc = 0x18F6D8u;
    // 0x18f6d8: 0x3c03002f
    ctx->pc = 0x18f6d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)47 << 16));
    // 0x18f6dc: 0xdfbf0000
    ctx->pc = 0x18f6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f6e0: 0xac62c64c
    ctx->pc = 0x18f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952524), GPR_U32(ctx, 2));
    // 0x18f6e4: 0x3e00008
    ctx->pc = 0x18F6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F6E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F6ECu;
}
