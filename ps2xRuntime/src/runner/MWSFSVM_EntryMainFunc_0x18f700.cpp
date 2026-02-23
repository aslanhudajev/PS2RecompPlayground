#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFSVM_EntryMainFunc
// Address: 0x18f700 - 0x18f72c
void MWSFSVM_EntryMainFunc_0x18f700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFSVM_EntryMainFunc");
    ctx->pc = 0x18f700u;

    // 0x18f700: 0xa0302d
    ctx->pc = 0x18f700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f704: 0x27bdfff0
    ctx->pc = 0x18f704u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f708: 0x80282d
    ctx->pc = 0x18f708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f70c: 0xffbf0000
    ctx->pc = 0x18f70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f710: 0xc05f7ca
    ctx->pc = 0x18F710u;
    SET_GPR_U32(ctx, 31, 0x18F718u);
    ctx->pc = 0x18F714u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x17DF28u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbSvr_0x17df28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F718u; }
        else if (ctx->pc != 0x18F718u) { ctx->pc = 0x18F718u; }
    }
    if (ctx->pc != 0x18F718u) { return; }
    ctx->pc = 0x18F718u;
    // 0x18f718: 0x3c03002f
    ctx->pc = 0x18f718u;
    SET_GPR_U32(ctx, 3, ((uint32_t)47 << 16));
    // 0x18f71c: 0xdfbf0000
    ctx->pc = 0x18f71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f720: 0xac62c650
    ctx->pc = 0x18f720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952528), GPR_U32(ctx, 2));
    // 0x18f724: 0x3e00008
    ctx->pc = 0x18F724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F72Cu;
}
