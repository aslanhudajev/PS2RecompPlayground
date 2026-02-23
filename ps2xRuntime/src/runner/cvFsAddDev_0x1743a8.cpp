#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsAddDev
// Address: 0x1743a8 - 0x17442c
void cvFsAddDev_0x1743a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsAddDev");


    ctx->pc = 0x1743a8u;

label_1743a8:
    // 0x1743a8: 0x27bdfff0
    ctx->pc = 0x1743a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1743ac:
    // 0x1743ac: 0x3c020024
    ctx->pc = 0x1743acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_1743b0:
    // 0x1743b0: 0xffbf0000
    ctx->pc = 0x1743b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1743b4:
    // 0x1743b4: 0x8c438760
    ctx->pc = 0x1743b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294936416)));
label_1743b8:
    // 0x1743b8: 0x14800005
label_1743bc:
    if (ctx->pc == 0x1743BCu) {
        ctx->pc = 0x1743BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1743C0u;
        goto label_1743c0;
    }
    ctx->pc = 0x1743B8u;
    {
        const bool branch_taken_0x1743b8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1743BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1743b8) {
            ctx->pc = 0x1743D0u;
            goto label_1743d0;
        }
    }
    ctx->pc = 0x1743C0u;
label_1743c0:
    // 0x1743c0: 0x3c04002c
    ctx->pc = 0x1743c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1743c4:
    // 0x1743c4: 0x2484a410
    ctx->pc = 0x1743c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943760));
label_1743c8:
    // 0x1743c8: 0x805d076
label_1743cc:
    if (ctx->pc == 0x1743CCu) {
        ctx->pc = 0x1743CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1743D0u;
        goto label_1743d0;
    }
    ctx->pc = 0x1743C8u;
    ctx->pc = 0x1743CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1743D0u;
label_1743d0:
    // 0x1743d0: 0x14a00005
label_1743d4:
    if (ctx->pc == 0x1743D4u) {
        ctx->pc = 0x1743D8u;
        goto label_1743d8;
    }
    ctx->pc = 0x1743D0u;
    {
        const bool branch_taken_0x1743d0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1743d0) {
            ctx->pc = 0x1743E8u;
            goto label_1743e8;
        }
    }
    ctx->pc = 0x1743D8u;
label_1743d8:
    // 0x1743d8: 0x3c04002c
    ctx->pc = 0x1743d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1743dc:
    // 0x1743dc: 0x2484a438
    ctx->pc = 0x1743dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943800));
label_1743e0:
    // 0x1743e0: 0x805d076
label_1743e4:
    if (ctx->pc == 0x1743E4u) {
        ctx->pc = 0x1743E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1743E8u;
        goto label_1743e8;
    }
    ctx->pc = 0x1743E0u;
    ctx->pc = 0x1743E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1743E8u;
label_1743e8:
    // 0x1743e8: 0xc05d10c
label_1743ec:
    if (ctx->pc == 0x1743ECu) {
        ctx->pc = 0x1743F0u;
        goto label_1743f0;
    }
    ctx->pc = 0x1743E8u;
    SET_GPR_U32(ctx, 31, 0x1743F0u);
    ctx->pc = 0x174430u;
    {
        const uint32_t __entryPc = ctx->pc;
        addDevice_0x174430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1743F0u; }
        else if (ctx->pc != 0x1743F0u) { ctx->pc = 0x1743F0u; }
    }
    if (ctx->pc != 0x1743F0u) { return; }
    ctx->pc = 0x1743F0u;
label_1743f0:
    // 0x1743f0: 0x54400006
label_1743f4:
    if (ctx->pc == 0x1743F4u) {
        ctx->pc = 0x1743F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1743F8u;
        goto label_1743f8;
    }
    ctx->pc = 0x1743F0u;
    {
        const bool branch_taken_0x1743f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1743f0) {
            ctx->pc = 0x1743F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->pc = 0x17440Cu;
            goto label_17440c;
        }
    }
    ctx->pc = 0x1743F8u;
label_1743f8:
    // 0x1743f8: 0x3c04002c
    ctx->pc = 0x1743f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1743fc:
    // 0x1743fc: 0xdfbf0000
    ctx->pc = 0x1743fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174400:
    // 0x174400: 0x2484a460
    ctx->pc = 0x174400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943840));
label_174404:
    // 0x174404: 0x805d076
label_174408:
    if (ctx->pc == 0x174408u) {
        ctx->pc = 0x174408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17440Cu;
        goto label_17440c;
    }
    ctx->pc = 0x174404u;
    ctx->pc = 0x174408u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x17440Cu;
label_17440c:
    // 0x17440c: 0x10400004
label_174410:
    if (ctx->pc == 0x174410u) {
        ctx->pc = 0x174410u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174414u;
        goto label_174414;
    }
    ctx->pc = 0x17440Cu;
    {
        const bool branch_taken_0x17440c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174410u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17440c) {
            ctx->pc = 0x174420u;
            goto label_174420;
        }
    }
    ctx->pc = 0x174414u;
label_174414:
    // 0x174414: 0x3c040017
    ctx->pc = 0x174414u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
label_174418:
    // 0x174418: 0x40f809
label_17441c:
    if (ctx->pc == 0x17441Cu) {
        ctx->pc = 0x17441Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16808));
        ctx->pc = 0x174420u;
        goto label_174420;
    }
    ctx->pc = 0x174418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174420u);
        ctx->pc = 0x17441Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16808));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1743A8u: goto label_1743a8;
            case 0x1743ACu: goto label_1743ac;
            case 0x1743B0u: goto label_1743b0;
            case 0x1743B4u: goto label_1743b4;
            case 0x1743B8u: goto label_1743b8;
            case 0x1743BCu: goto label_1743bc;
            case 0x1743C0u: goto label_1743c0;
            case 0x1743C4u: goto label_1743c4;
            case 0x1743C8u: goto label_1743c8;
            case 0x1743CCu: goto label_1743cc;
            case 0x1743D0u: goto label_1743d0;
            case 0x1743D4u: goto label_1743d4;
            case 0x1743D8u: goto label_1743d8;
            case 0x1743DCu: goto label_1743dc;
            case 0x1743E0u: goto label_1743e0;
            case 0x1743E4u: goto label_1743e4;
            case 0x1743E8u: goto label_1743e8;
            case 0x1743ECu: goto label_1743ec;
            case 0x1743F0u: goto label_1743f0;
            case 0x1743F4u: goto label_1743f4;
            case 0x1743F8u: goto label_1743f8;
            case 0x1743FCu: goto label_1743fc;
            case 0x174400u: goto label_174400;
            case 0x174404u: goto label_174404;
            case 0x174408u: goto label_174408;
            case 0x17440Cu: goto label_17440c;
            case 0x174410u: goto label_174410;
            case 0x174414u: goto label_174414;
            case 0x174418u: goto label_174418;
            case 0x17441Cu: goto label_17441c;
            case 0x174420u: goto label_174420;
            case 0x174424u: goto label_174424;
            case 0x174428u: goto label_174428;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174420u; }
            if (ctx->pc != 0x174420u) { return; }
        }
    }
    ctx->pc = 0x174420u;
label_174420:
    // 0x174420: 0xdfbf0000
    ctx->pc = 0x174420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174424:
    // 0x174424: 0x3e00008
label_174428:
    if (ctx->pc == 0x174428u) {
        ctx->pc = 0x174428u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17442Cu;
        goto label_fallthrough_0x174424;
    }
    ctx->pc = 0x174424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174428u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1743A8u: goto label_1743a8;
            case 0x1743ACu: goto label_1743ac;
            case 0x1743B0u: goto label_1743b0;
            case 0x1743B4u: goto label_1743b4;
            case 0x1743B8u: goto label_1743b8;
            case 0x1743BCu: goto label_1743bc;
            case 0x1743C0u: goto label_1743c0;
            case 0x1743C4u: goto label_1743c4;
            case 0x1743C8u: goto label_1743c8;
            case 0x1743CCu: goto label_1743cc;
            case 0x1743D0u: goto label_1743d0;
            case 0x1743D4u: goto label_1743d4;
            case 0x1743D8u: goto label_1743d8;
            case 0x1743DCu: goto label_1743dc;
            case 0x1743E0u: goto label_1743e0;
            case 0x1743E4u: goto label_1743e4;
            case 0x1743E8u: goto label_1743e8;
            case 0x1743ECu: goto label_1743ec;
            case 0x1743F0u: goto label_1743f0;
            case 0x1743F4u: goto label_1743f4;
            case 0x1743F8u: goto label_1743f8;
            case 0x1743FCu: goto label_1743fc;
            case 0x174400u: goto label_174400;
            case 0x174404u: goto label_174404;
            case 0x174408u: goto label_174408;
            case 0x17440Cu: goto label_17440c;
            case 0x174410u: goto label_174410;
            case 0x174414u: goto label_174414;
            case 0x174418u: goto label_174418;
            case 0x17441Cu: goto label_17441c;
            case 0x174420u: goto label_174420;
            case 0x174424u: goto label_174424;
            case 0x174428u: goto label_174428;
            default: break;
        }
        return;
    }
label_fallthrough_0x174424:
    ctx->pc = 0x17442Cu;
}
