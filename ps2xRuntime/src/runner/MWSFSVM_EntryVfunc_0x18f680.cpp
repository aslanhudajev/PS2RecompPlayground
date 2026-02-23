#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_EntryVfunc
// Address: 0x18f680 - 0x18f6ac
void MWSFSVM_EntryVfunc_0x18f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_EntryVfunc");
    ctx->pc = 0x18f680u;

    // 0x18f680: 0xa0302d
    ctx->pc = 0x18f680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f684: 0x27bdfff0
    ctx->pc = 0x18f684u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f688: 0x80282d
    ctx->pc = 0x18f688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f68c: 0xffbf0000
    ctx->pc = 0x18f68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f690: 0xc05f7ca
    ctx->pc = 0x18F690u;
    SET_GPR_U32(ctx, 31, 0x18F698u);
    ctx->pc = 0x18F694u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x17DF28u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbSvr_0x17df28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F698u; }
        else if (ctx->pc != 0x18F698u) { ctx->pc = 0x18F698u; }
    }
    if (ctx->pc != 0x18F698u) { return; }
    ctx->pc = 0x18F698u;
    // 0x18f698: 0x3c03002f
    ctx->pc = 0x18f698u;
    SET_GPR_U32(ctx, 3, ((uint32_t)47 << 16));
    // 0x18f69c: 0xdfbf0000
    ctx->pc = 0x18f69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f6a0: 0xac62c648
    ctx->pc = 0x18f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952520), GPR_U32(ctx, 2));
    // 0x18f6a4: 0x3e00008
    ctx->pc = 0x18F6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F6A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F6ACu;
}
