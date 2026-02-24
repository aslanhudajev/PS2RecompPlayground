#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initialiseSystem
// Address: 0x1024c8 - 0x102574
void initialiseSystem_0x1024c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1024c8u;

    // 0x1024c8: 0x27bdffa0
    ctx->pc = 0x1024c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1024cc: 0xffb40040
    ctx->pc = 0x1024ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1024d0: 0xffb30030
    ctx->pc = 0x1024d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1024d4: 0x3c140017
    ctx->pc = 0x1024d4u;
    SET_GPR_S32(ctx, 20, ((uint32_t)23 << 16));
    // 0x1024d8: 0xffb20020
    ctx->pc = 0x1024d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1024dc: 0x3c130017
    ctx->pc = 0x1024dcu;
    SET_GPR_S32(ctx, 19, ((uint32_t)23 << 16));
    // 0x1024e0: 0xffb10010
    ctx->pc = 0x1024e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1024e4: 0x3c120017
    ctx->pc = 0x1024e4u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
    // 0x1024e8: 0xffb00000
    ctx->pc = 0x1024e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1024ec: 0x3c110017
    ctx->pc = 0x1024ecu;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
    // 0x1024f0: 0xffbf0050
    ctx->pc = 0x1024f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1024f4: 0x3c100017
    ctx->pc = 0x1024f4u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
label_1024f8:
    // 0x1024f8: 0xc0453aa
    ctx->pc = 0x1024F8u;
    SET_GPR_U32(ctx, 31, 0x102500u);
    ctx->pc = 0x1024FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 11616));
    ctx->pc = 0x114EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifRebootIop_0x114ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102500u; }
    }
    if (ctx->pc != 0x102500u) { return; }
    ctx->pc = 0x102500u;
    // 0x102500: 0x1040fffd
    ctx->pc = 0x102500u;
    {
        const bool branch_taken_0x102500 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x102500) {
            ctx->pc = 0x1024F8u;
            goto label_1024f8;
        }
    }
    ctx->pc = 0x102508u;
label_102508:
    // 0x102508: 0xc045398
    ctx->pc = 0x102508u;
    SET_GPR_U32(ctx, 31, 0x102510u);
    ctx->pc = 0x114E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSyncIop_0x114e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102510u; }
    }
    if (ctx->pc != 0x102510u) { return; }
    ctx->pc = 0x102510u;
    // 0x102510: 0x1040fffd
    ctx->pc = 0x102510u;
    {
        const bool branch_taken_0x102510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x102510) {
            ctx->pc = 0x102508u;
            goto label_102508;
        }
    }
    ctx->pc = 0x102518u;
    // 0x102518: 0xc043f10
    ctx->pc = 0x102518u;
    SET_GPR_U32(ctx, 31, 0x102520u);
    ctx->pc = 0x10251Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FC40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x10fc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102520u; }
    }
    if (ctx->pc != 0x102520u) { return; }
    ctx->pc = 0x102520u;
    // 0x102520: 0xc046130
    ctx->pc = 0x102520u;
    SET_GPR_U32(ctx, 31, 0x102528u);
    ctx->pc = 0x102524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1184C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x1184c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102528u; }
    }
    if (ctx->pc != 0x102528u) { return; }
    ctx->pc = 0x102528u;
    // 0x102528: 0xc046266
    ctx->pc = 0x102528u;
    SET_GPR_U32(ctx, 31, 0x102530u);
    ctx->pc = 0x10252Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118998u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdMmode_0x118998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102530u; }
    }
    if (ctx->pc != 0x102530u) { return; }
    ctx->pc = 0x102530u;
    // 0x102530: 0xc0444dc
    ctx->pc = 0x102530u;
    SET_GPR_U32(ctx, 31, 0x102538u);
    ctx->pc = 0x111370u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceFsReset_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102538u; }
    }
    if (ctx->pc != 0x102538u) { return; }
    ctx->pc = 0x102538u;
    // 0x102538: 0xc04006a
    ctx->pc = 0x102538u;
    SET_GPR_U32(ctx, 31, 0x102540u);
    ctx->pc = 0x10253Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 11656));
    ctx->pc = 0x1001A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadModule_0x1001a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102540u; }
    }
    if (ctx->pc != 0x102540u) { return; }
    ctx->pc = 0x102540u;
    // 0x102540: 0xc04006a
    ctx->pc = 0x102540u;
    SET_GPR_U32(ctx, 31, 0x102548u);
    ctx->pc = 0x102544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 11696));
    ctx->pc = 0x1001A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadModule_0x1001a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102548u; }
    }
    if (ctx->pc != 0x102548u) { return; }
    ctx->pc = 0x102548u;
    // 0x102548: 0xc04006a
    ctx->pc = 0x102548u;
    SET_GPR_U32(ctx, 31, 0x102550u);
    ctx->pc = 0x10254Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 11736));
    ctx->pc = 0x1001A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadModule_0x1001a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102550u; }
    }
    if (ctx->pc != 0x102550u) { return; }
    ctx->pc = 0x102550u;
    // 0x102550: 0x26842e00
    ctx->pc = 0x102550u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 11776));
    // 0x102554: 0xdfbf0050
    ctx->pc = 0x102554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102558: 0xdfb40040
    ctx->pc = 0x102558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10255c: 0xdfb30030
    ctx->pc = 0x10255cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102560: 0xdfb20020
    ctx->pc = 0x102560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102564: 0xdfb10010
    ctx->pc = 0x102564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102568: 0xdfb00000
    ctx->pc = 0x102568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10256c: 0x804006a
    ctx->pc = 0x10256Cu;
    ctx->pc = 0x102570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1001A8u;
    loadModule_0x1001a8(rdram, ctx, runtime); return;
    ctx->pc = 0x102574u;
}
