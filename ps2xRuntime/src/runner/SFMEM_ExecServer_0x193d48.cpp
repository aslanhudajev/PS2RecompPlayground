#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMEM_ExecServer
// Address: 0x193d48 - 0x193d6c
void SFMEM_ExecServer_0x193d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMEM_ExecServer");


    ctx->pc = 0x193d48u;

    // 0x193d48: 0x27bdfff0
    ctx->pc = 0x193d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193d4c: 0x24060001
    ctx->pc = 0x193d4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x193d50: 0xffbf0000
    ctx->pc = 0x193d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193d54: 0xc064a4e
    ctx->pc = 0x193D54u;
    SET_GPR_U32(ctx, 31, 0x193D5Cu);
    ctx->pc = 0x193D58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12328)));
    ctx->pc = 0x192938u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetPrepFlg_0x192938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D5Cu; }
        else if (ctx->pc != 0x193D5Cu) { ctx->pc = 0x193D5Cu; }
    }
    if (ctx->pc != 0x193D5Cu) { return; }
    ctx->pc = 0x193D5Cu;
    // 0x193d5c: 0xdfbf0000
    ctx->pc = 0x193d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d60: 0x102d
    ctx->pc = 0x193d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d64: 0x3e00008
    ctx->pc = 0x193D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193D6Cu;
}
