#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dtx_svr_proc
// Address: 0x176cb8 - 0x176d40
void dtx_svr_proc_0x176cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dtx_svr_proc");


    ctx->pc = 0x176cb8u;

    // 0x176cb8: 0x27bdffa0
    ctx->pc = 0x176cb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x176cbc: 0xffb00040
    ctx->pc = 0x176cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x176cc0: 0xffbf0050
    ctx->pc = 0x176cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x176cc4: 0xc0551f4
    ctx->pc = 0x176CC4u;
    SET_GPR_U32(ctx, 31, 0x176CCCu);
    ctx->pc = 0x1547D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x1547d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CCCu; }
        else if (ctx->pc != 0x176CCCu) { ctx->pc = 0x176CCCu; }
    }
    if (ctx->pc != 0x176CCCu) { return; }
    ctx->pc = 0x176CCCu;
    // 0x176ccc: 0x40282d
    ctx->pc = 0x176cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176cd0: 0xc055efe
    ctx->pc = 0x176CD0u;
    SET_GPR_U32(ctx, 31, 0x176CD8u);
    ctx->pc = 0x176CD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x157BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetRpcQueue_0x157bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CD8u; }
        else if (ctx->pc != 0x176CD8u) { ctx->pc = 0x176CD8u; }
    }
    if (ctx->pc != 0x176CD8u) { return; }
    ctx->pc = 0x176CD8u;
    // 0x176cd8: 0xc0551f4
    ctx->pc = 0x176CD8u;
    SET_GPR_U32(ctx, 31, 0x176CE0u);
    ctx->pc = 0x176CDCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1547D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x1547d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CE0u; }
        else if (ctx->pc != 0x176CE0u) { ctx->pc = 0x176CE0u; }
    }
    if (ctx->pc != 0x176CE0u) { return; }
    ctx->pc = 0x176CE0u;
    // 0x176ce0: 0x200202d
    ctx->pc = 0x176ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ce4: 0xc055efe
    ctx->pc = 0x176CE4u;
    SET_GPR_U32(ctx, 31, 0x176CECu);
    ctx->pc = 0x176CE8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x157BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetRpcQueue_0x157bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CECu; }
        else if (ctx->pc != 0x176CECu) { ctx->pc = 0x176CECu; }
    }
    if (ctx->pc != 0x176CECu) { return; }
    ctx->pc = 0x176CECu;
    // 0x176cec: 0x3c040024
    ctx->pc = 0x176cecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x176cf0: 0x3c060017
    ctx->pc = 0x176cf0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
    // 0x176cf4: 0x3c070024
    ctx->pc = 0x176cf4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)36 << 16));
    // 0x176cf8: 0x8f858280
    ctx->pc = 0x176cf8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935168)));
    // 0x176cfc: 0x402d
    ctx->pc = 0x176cfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d00: 0x482d
    ctx->pc = 0x176d00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d04: 0x3a0502d
    ctx->pc = 0x176d04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d08: 0x24c66be8
    ctx->pc = 0x176d08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 27624));
    // 0x176d0c: 0x24e79060
    ctx->pc = 0x176d0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294938720));
    // 0x176d10: 0xc055f24
    ctx->pc = 0x176D10u;
    SET_GPR_U32(ctx, 31, 0x176D18u);
    ctx->pc = 0x176D14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938648));
    ctx->pc = 0x157C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifRegisterRpc_0x157c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D18u; }
        else if (ctx->pc != 0x176D18u) { ctx->pc = 0x176D18u; }
    }
    if (ctx->pc != 0x176D18u) { return; }
    ctx->pc = 0x176D18u;
    // 0x176d18: 0x24020001
    ctx->pc = 0x176d18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176d1c: 0x3a0202d
    ctx->pc = 0x176d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d20: 0xaf828284
    ctx->pc = 0x176d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935172), GPR_U32(ctx, 2));
    // 0x176d24: 0xc05602a
    ctx->pc = 0x176D24u;
    SET_GPR_U32(ctx, 31, 0x176D2Cu);
    ctx->pc = 0x1580A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifRpcLoop_0x1580a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D2Cu; }
        else if (ctx->pc != 0x176D2Cu) { ctx->pc = 0x176D2Cu; }
    }
    if (ctx->pc != 0x176D2Cu) { return; }
    ctx->pc = 0x176D2Cu;
    // 0x176d2c: 0xdfbf0050
    ctx->pc = 0x176d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176d30: 0x102d
    ctx->pc = 0x176d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d34: 0xdfb00040
    ctx->pc = 0x176d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176d38: 0x3e00008
    ctx->pc = 0x176D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176D40u;
}
