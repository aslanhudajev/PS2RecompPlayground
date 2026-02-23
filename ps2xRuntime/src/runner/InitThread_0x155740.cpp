#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InitThread
// Address: 0x155740 - 0x155814
void InitThread_0x155740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitThread");


    ctx->pc = 0x155740u;

    // 0x155740: 0x27bdff80
    ctx->pc = 0x155740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x155744: 0xffb00050
    ctx->pc = 0x155744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x155748: 0x3c100023
    ctx->pc = 0x155748u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x15574c: 0xffbf0070
    ctx->pc = 0x15574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x155750: 0x8e02a020
    ctx->pc = 0x155750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294942752)));
    // 0x155754: 0x1c40001c
    ctx->pc = 0x155754u;
    {
        const bool branch_taken_0x155754 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x155758u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        if (branch_taken_0x155754) {
            ctx->pc = 0x1557C8u;
            goto label_1557c8;
        }
    }
    ctx->pc = 0x15575Cu;
    // 0x15575c: 0x240200ff
    ctx->pc = 0x15575cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x155760: 0xafa00038
    ctx->pc = 0x155760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x155764: 0xafa20034
    ctx->pc = 0x155764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x155768: 0xc055238
    ctx->pc = 0x155768u;
    SET_GPR_U32(ctx, 31, 0x155770u);
    ctx->pc = 0x15576Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1548E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1548e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155770u; }
        else if (ctx->pc != 0x155770u) { ctx->pc = 0x155770u; }
    }
    if (ctx->pc != 0x155770u) { return; }
    ctx->pc = 0x155770u;
    // 0x155770: 0x3c11002d
    ctx->pc = 0x155770u;
    SET_GPR_U32(ctx, 17, ((uint32_t)45 << 16));
    // 0x155774: 0x4400014
    ctx->pc = 0x155774u;
    {
        const bool branch_taken_0x155774 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x155778u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 28640), GPR_U32(ctx, 2));
        if (branch_taken_0x155774) {
            ctx->pc = 0x1557C8u;
            goto label_1557c8;
        }
    }
    ctx->pc = 0x15577Cu;
    // 0x15577c: 0x3c020015
    ctx->pc = 0x15577cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)21 << 16));
    // 0x155780: 0x3c03002d
    ctx->pc = 0x155780u;
    SET_GPR_U32(ctx, 3, ((uint32_t)45 << 16));
    // 0x155784: 0x3c05002e
    ctx->pc = 0x155784u;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x155788: 0x24425668
    ctx->pc = 0x155788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22120));
    // 0x15578c: 0x24636be0
    ctx->pc = 0x15578cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 27616));
    // 0x155790: 0x24a5d670
    ctx->pc = 0x155790u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956656));
    // 0x155794: 0x24060400
    ctx->pc = 0x155794u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x155798: 0xafa20004
    ctx->pc = 0x155798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x15579c: 0xafa30008
    ctx->pc = 0x15579cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1557a0: 0x3a0202d
    ctx->pc = 0x1557a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557a4: 0xafa6000c
    ctx->pc = 0x1557a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1557a8: 0xafa50010
    ctx->pc = 0x1557a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1557ac: 0xc0551b8
    ctx->pc = 0x1557ACu;
    SET_GPR_U32(ctx, 31, 0x1557B4u);
    ctx->pc = 0x1557B0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1546E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x1546e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1557B4u; }
        else if (ctx->pc != 0x1557B4u) { ctx->pc = 0x1557B4u; }
    }
    if (ctx->pc != 0x1557B4u) { return; }
    ctx->pc = 0x1557B4u;
    // 0x1557b4: 0x40202d
    ctx->pc = 0x1557b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557b8: 0x4810005
    ctx->pc = 0x1557B8u;
    {
        const bool branch_taken_0x1557b8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1557BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942752), GPR_U32(ctx, 4));
        if (branch_taken_0x1557b8) {
            ctx->pc = 0x1557D0u;
            goto label_1557d0;
        }
    }
    ctx->pc = 0x1557C0u;
    // 0x1557c0: 0xc05523c
    ctx->pc = 0x1557C0u;
    SET_GPR_U32(ctx, 31, 0x1557C8u);
    ctx->pc = 0x1557C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28640)));
    ctx->pc = 0x1548F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1548f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1557C8u; }
        else if (ctx->pc != 0x1557C8u) { ctx->pc = 0x1557C8u; }
    }
    if (ctx->pc != 0x1557C8u) { return; }
    ctx->pc = 0x1557C8u;
label_1557c8:
    // 0x1557c8: 0x1000000d
    ctx->pc = 0x1557C8u;
    {
        const bool branch_taken_0x1557c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1557CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1557c8) {
            ctx->pc = 0x155800u;
            goto label_155800;
        }
    }
    ctx->pc = 0x1557D0u;
label_1557d0:
    // 0x1557d0: 0x3c02002d
    ctx->pc = 0x1557d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x1557d4: 0x24436fe8
    ctx->pc = 0x1557d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 28648));
    // 0x1557d8: 0xac406fe8
    ctx->pc = 0x1557d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28648), GPR_U32(ctx, 0));
    // 0x1557dc: 0x60282d
    ctx->pc = 0x1557dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557e0: 0xc0551c0
    ctx->pc = 0x1557E0u;
    SET_GPR_U32(ctx, 31, 0x1557E8u);
    ctx->pc = 0x1557E4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x154700u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x154700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1557E8u; }
        else if (ctx->pc != 0x1557E8u) { ctx->pc = 0x1557E8u; }
    }
    if (ctx->pc != 0x1557E8u) { return; }
    ctx->pc = 0x1557E8u;
    // 0x1557e8: 0xc0551f4
    ctx->pc = 0x1557E8u;
    SET_GPR_U32(ctx, 31, 0x1557F0u);
    ctx->pc = 0x1547D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x1547d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1557F0u; }
        else if (ctx->pc != 0x1557F0u) { ctx->pc = 0x1557F0u; }
    }
    if (ctx->pc != 0x1557F0u) { return; }
    ctx->pc = 0x1557F0u;
    // 0x1557f0: 0x40202d
    ctx->pc = 0x1557f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557f4: 0xc0551dc
    ctx->pc = 0x1557F4u;
    SET_GPR_U32(ctx, 31, 0x1557FCu);
    ctx->pc = 0x1557F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1557FCu; }
        else if (ctx->pc != 0x1557FCu) { ctx->pc = 0x1557FCu; }
    }
    if (ctx->pc != 0x1557FCu) { return; }
    ctx->pc = 0x1557FCu;
    // 0x1557fc: 0x8e02a020
    ctx->pc = 0x1557fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294942752)));
label_155800:
    // 0x155800: 0xdfbf0070
    ctx->pc = 0x155800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155804: 0xdfb10060
    ctx->pc = 0x155804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155808: 0xdfb00050
    ctx->pc = 0x155808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15580c: 0x3e00008
    ctx->pc = 0x15580Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155810u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1557C8u: goto label_1557c8;
            case 0x1557D0u: goto label_1557d0;
            case 0x155800u: goto label_155800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155814u;
}
