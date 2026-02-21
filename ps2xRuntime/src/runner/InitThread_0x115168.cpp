#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitThread
// Address: 0x115168 - 0x11523c
void InitThread_0x115168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115168u;

    // 0x115168: 0x27bdff80
    ctx->pc = 0x115168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11516c: 0xffb00050
    ctx->pc = 0x11516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x115170: 0x3c100017
    ctx->pc = 0x115170u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x115174: 0xffbf0070
    ctx->pc = 0x115174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x115178: 0x8e02fbd8
    ctx->pc = 0x115178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966232)));
    // 0x11517c: 0x1c40001c
    ctx->pc = 0x11517Cu;
    {
        const bool branch_taken_0x11517c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x115180u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        if (branch_taken_0x11517c) {
            ctx->pc = 0x1151F0u;
            goto label_1151f0;
        }
    }
    ctx->pc = 0x115184u;
    // 0x115184: 0x240200ff
    ctx->pc = 0x115184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x115188: 0xafa00038
    ctx->pc = 0x115188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x11518c: 0xafa20034
    ctx->pc = 0x11518cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x115190: 0xc0438a8
    ctx->pc = 0x115190u;
    SET_GPR_U32(ctx, 31, 0x115198u);
    ctx->pc = 0x115194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x10E2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x10e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115198u; }
    }
    if (ctx->pc != 0x115198u) { return; }
    ctx->pc = 0x115198u;
    // 0x115198: 0x3c110018
    ctx->pc = 0x115198u;
    SET_GPR_U32(ctx, 17, ((uint32_t)24 << 16));
    // 0x11519c: 0x4400014
    ctx->pc = 0x11519Cu;
    {
        const bool branch_taken_0x11519c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1151A0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294943472), GPR_U32(ctx, 2));
        if (branch_taken_0x11519c) {
            ctx->pc = 0x1151F0u;
            goto label_1151f0;
        }
    }
    ctx->pc = 0x1151A4u;
    // 0x1151a4: 0x3c020011
    ctx->pc = 0x1151a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17 << 16));
    // 0x1151a8: 0x3c030018
    ctx->pc = 0x1151a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)24 << 16));
    // 0x1151ac: 0x3c050018
    ctx->pc = 0x1151acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x1151b0: 0x24425090
    ctx->pc = 0x1151b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20624));
    // 0x1151b4: 0x24639ef0
    ctx->pc = 0x1151b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294942448));
    // 0x1151b8: 0x24a5daf0
    ctx->pc = 0x1151b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957808));
    // 0x1151bc: 0x24060400
    ctx->pc = 0x1151bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1151c0: 0xafa20004
    ctx->pc = 0x1151c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1151c4: 0xafa30008
    ctx->pc = 0x1151c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1151c8: 0x3a0202d
    ctx->pc = 0x1151c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151cc: 0xafa6000c
    ctx->pc = 0x1151ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1151d0: 0xafa50010
    ctx->pc = 0x1151d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1151d4: 0xc043828
    ctx->pc = 0x1151D4u;
    SET_GPR_U32(ctx, 31, 0x1151DCu);
    ctx->pc = 0x1151D8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x10E0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1151DCu; }
    }
    if (ctx->pc != 0x1151DCu) { return; }
    ctx->pc = 0x1151DCu;
    // 0x1151dc: 0x40202d
    ctx->pc = 0x1151dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151e0: 0x4810005
    ctx->pc = 0x1151E0u;
    {
        const bool branch_taken_0x1151e0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1151E4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294966232), GPR_U32(ctx, 4));
        if (branch_taken_0x1151e0) {
            ctx->pc = 0x1151F8u;
            goto label_1151f8;
        }
    }
    ctx->pc = 0x1151E8u;
    // 0x1151e8: 0xc0438ac
    ctx->pc = 0x1151E8u;
    SET_GPR_U32(ctx, 31, 0x1151F0u);
    ctx->pc = 0x1151ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294943472)));
    ctx->pc = 0x10E2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x10e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1151F0u; }
    }
    if (ctx->pc != 0x1151F0u) { return; }
    ctx->pc = 0x1151F0u;
label_1151f0:
    // 0x1151f0: 0x1000000d
    ctx->pc = 0x1151F0u;
    {
        const bool branch_taken_0x1151f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1151F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1151f0) {
            ctx->pc = 0x115228u;
            goto label_115228;
        }
    }
    ctx->pc = 0x1151F8u;
label_1151f8:
    // 0x1151f8: 0x3c020018
    ctx->pc = 0x1151f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x1151fc: 0x2443a2f8
    ctx->pc = 0x1151fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294943480));
    // 0x115200: 0xac40a2f8
    ctx->pc = 0x115200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943480), GPR_U32(ctx, 0));
    // 0x115204: 0x60282d
    ctx->pc = 0x115204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115208: 0xc043830
    ctx->pc = 0x115208u;
    SET_GPR_U32(ctx, 31, 0x115210u);
    ctx->pc = 0x11520Cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x10E0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115210u; }
    }
    if (ctx->pc != 0x115210u) { return; }
    ctx->pc = 0x115210u;
    // 0x115210: 0xc043864
    ctx->pc = 0x115210u;
    SET_GPR_U32(ctx, 31, 0x115218u);
    ctx->pc = 0x10E190u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x10e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115218u; }
    }
    if (ctx->pc != 0x115218u) { return; }
    ctx->pc = 0x115218u;
    // 0x115218: 0x40202d
    ctx->pc = 0x115218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11521c: 0xc04384c
    ctx->pc = 0x11521Cu;
    SET_GPR_U32(ctx, 31, 0x115224u);
    ctx->pc = 0x115220u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10E130u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x10e130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115224u; }
    }
    if (ctx->pc != 0x115224u) { return; }
    ctx->pc = 0x115224u;
    // 0x115224: 0x8e02fbd8
    ctx->pc = 0x115224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966232)));
label_115228:
    // 0x115228: 0xdfbf0070
    ctx->pc = 0x115228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11522c: 0xdfb10060
    ctx->pc = 0x11522cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115230: 0xdfb00050
    ctx->pc = 0x115230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115234: 0x3e00008
    ctx->pc = 0x115234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115238u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1151F0u: goto label_1151f0;
            case 0x1151F8u: goto label_1151f8;
            case 0x115228u: goto label_115228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11523Cu;
}
