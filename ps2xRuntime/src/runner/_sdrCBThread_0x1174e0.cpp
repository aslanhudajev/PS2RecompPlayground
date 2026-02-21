#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sdrCBThread
// Address: 0x1174e0 - 0x117544
void _sdrCBThread_0x1174e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1174e0u;

    // 0x1174e0: 0x27bdff80
    ctx->pc = 0x1174e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1174e4: 0xffbf0070
    ctx->pc = 0x1174e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1174e8: 0xc043f10
    ctx->pc = 0x1174E8u;
    SET_GPR_U32(ctx, 31, 0x1174F0u);
    ctx->pc = 0x1174ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FC40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x10fc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174F0u; }
    }
    if (ctx->pc != 0x1174F0u) { return; }
    ctx->pc = 0x1174F0u;
    // 0x1174f0: 0xc043864
    ctx->pc = 0x1174F0u;
    SET_GPR_U32(ctx, 31, 0x1174F8u);
    ctx->pc = 0x10E190u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x10e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174F8u; }
    }
    if (ctx->pc != 0x1174F8u) { return; }
    ctx->pc = 0x1174F8u;
    // 0x1174f8: 0x40282d
    ctx->pc = 0x1174f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174fc: 0xc0441ac
    ctx->pc = 0x1174FCu;
    SET_GPR_U32(ctx, 31, 0x117504u);
    ctx->pc = 0x117500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1106B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetRpcQueue_0x1106b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117504u; }
    }
    if (ctx->pc != 0x117504u) { return; }
    ctx->pc = 0x117504u;
    // 0x117504: 0x3c060011
    ctx->pc = 0x117504u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17 << 16));
    // 0x117508: 0x3c070018
    ctx->pc = 0x117508u;
    SET_GPR_U32(ctx, 7, ((uint32_t)24 << 16));
    // 0x11750c: 0x3c058000
    ctx->pc = 0x11750cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x117510: 0x402d
    ctx->pc = 0x117510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117514: 0x482d
    ctx->pc = 0x117514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117518: 0x3a0502d
    ctx->pc = 0x117518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11751c: 0x24c67548
    ctx->pc = 0x11751cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 30024));
    // 0x117520: 0x24e7c040
    ctx->pc = 0x117520u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294950976));
    // 0x117524: 0x27a40020
    ctx->pc = 0x117524u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x117528: 0xc0441d2
    ctx->pc = 0x117528u;
    SET_GPR_U32(ctx, 31, 0x117530u);
    ctx->pc = 0x11752Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1796));
    ctx->pc = 0x110748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifRegisterRpc_0x110748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117530u; }
    }
    if (ctx->pc != 0x117530u) { return; }
    ctx->pc = 0x117530u;
    // 0x117530: 0xc0442d8
    ctx->pc = 0x117530u;
    SET_GPR_U32(ctx, 31, 0x117538u);
    ctx->pc = 0x117534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifRpcLoop_0x110b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117538u; }
    }
    if (ctx->pc != 0x117538u) { return; }
    ctx->pc = 0x117538u;
    // 0x117538: 0xdfbf0070
    ctx->pc = 0x117538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11753c: 0x3e00008
    ctx->pc = 0x11753Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117540u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117544u;
}
