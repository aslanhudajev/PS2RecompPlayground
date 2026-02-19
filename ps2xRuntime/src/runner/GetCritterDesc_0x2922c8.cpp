#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetCritterDesc
// Address: 0x2922c8 - 0x292390
void GetCritterDesc_0x2922c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2922c8u;

    // 0x2922c8: 0x27bdfff0
    ctx->pc = 0x2922c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2922cc: 0xffbf0000
    ctx->pc = 0x2922ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2922d0: 0xa0302d
    ctx->pc = 0x2922d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922d4: 0x84c30020
    ctx->pc = 0x2922d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2922d8: 0x24020007
    ctx->pc = 0x2922d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2922dc: 0x10620012
    ctx->pc = 0x2922DCu;
    {
        const bool branch_taken_0x2922dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2922E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
        if (branch_taken_0x2922dc) {
            ctx->pc = 0x292328u;
            goto label_292328;
        }
    }
    ctx->pc = 0x2922E4u;
    // 0x2922e4: 0x10400005
    ctx->pc = 0x2922E4u;
    {
        const bool branch_taken_0x2922e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2922E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2922e4) {
            ctx->pc = 0x2922FCu;
            goto label_2922fc;
        }
    }
    ctx->pc = 0x2922ECu;
    // 0x2922ec: 0x10620006
    ctx->pc = 0x2922ECu;
    {
        const bool branch_taken_0x2922ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2922F0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x2922ec) {
            ctx->pc = 0x292308u;
            goto label_292308;
        }
    }
    ctx->pc = 0x2922F4u;
    // 0x2922f4: 0x10000020
    ctx->pc = 0x2922F4u;
    {
        const bool branch_taken_0x2922f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2922F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959304));
        if (branch_taken_0x2922f4) {
            ctx->pc = 0x292378u;
            goto label_292378;
        }
    }
    ctx->pc = 0x2922FCu;
label_2922fc:
    // 0x2922fc: 0x24020008
    ctx->pc = 0x2922fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x292300: 0x1462001c
    ctx->pc = 0x292300u;
    {
        const bool branch_taken_0x292300 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x292304u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x292300) {
            ctx->pc = 0x292374u;
            goto label_292374;
        }
    }
    ctx->pc = 0x292308u;
label_292308:
    // 0x292308: 0x3c020034
    ctx->pc = 0x292308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29230c: 0x8c47e7c0
    ctx->pc = 0x29230cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x292310: 0x3c05003b
    ctx->pc = 0x292310u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x292314: 0x24a5e0a8
    ctx->pc = 0x292314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959272));
    // 0x292318: 0x24e70004
    ctx->pc = 0x292318u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
    // 0x29231c: 0xdfbf0000
    ctx->pc = 0x29231cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292320: 0x80b6252
    ctx->pc = 0x292320u;
    ctx->pc = 0x292324u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D8948u;
    sprintf_0x2d8948(rdram, ctx, runtime); return;
    ctx->pc = 0x292328u;
label_292328:
    // 0x292328: 0x182d
    ctx->pc = 0x292328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29232c: 0x3c020034
    ctx->pc = 0x29232cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x292330: 0x2449e8a8
    ctx->pc = 0x292330u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294961320));
    // 0x292334: 0x24080020
    ctx->pc = 0x292334u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x292338: 0x3c05003b
    ctx->pc = 0x292338u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x29233c: 0x0
    ctx->pc = 0x29233cu;
    // NOP
label_292340:
    // 0x292340: 0x28620008
    ctx->pc = 0x292340u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x292344: 0x1040000f
    ctx->pc = 0x292344u;
    {
        const bool branch_taken_0x292344 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x292348u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x292344) {
            ctx->pc = 0x292384u;
            goto label_292384;
        }
    }
    ctx->pc = 0x29234Cu;
    // 0x29234c: 0x491021
    ctx->pc = 0x29234cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x292350: 0x8c470000
    ctx->pc = 0x292350u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292354: 0x8ce20000
    ctx->pc = 0x292354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x292358: 0x1448fff9
    ctx->pc = 0x292358u;
    {
        const bool branch_taken_0x292358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        ctx->pc = 0x29235Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x292358) {
            ctx->pc = 0x292340u;
            goto label_292340;
        }
    }
    ctx->pc = 0x292360u;
    // 0x292360: 0x24a5e0b8
    ctx->pc = 0x292360u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959288));
    // 0x292364: 0xc0b6252
    ctx->pc = 0x292364u;
    SET_GPR_U32(ctx, 31, 0x29236Cu);
    ctx->pc = 0x292368u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29236Cu; }
    }
    if (ctx->pc != 0x29236Cu) { return; }
    ctx->pc = 0x29236Cu;
    // 0x29236c: 0x10000006
    ctx->pc = 0x29236Cu;
    {
        const bool branch_taken_0x29236c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292370u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x29236c) {
            ctx->pc = 0x292388u;
            goto label_292388;
        }
    }
    ctx->pc = 0x292374u;
label_292374:
    // 0x292374: 0x24a5e0c8
    ctx->pc = 0x292374u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959304));
label_292378:
    // 0x292378: 0xdfbf0000
    ctx->pc = 0x292378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29237c: 0x80b6252
    ctx->pc = 0x29237Cu;
    ctx->pc = 0x292380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D8948u;
    sprintf_0x2d8948(rdram, ctx, runtime); return;
    ctx->pc = 0x292384u;
label_292384:
    // 0x292384: 0xdfbf0000
    ctx->pc = 0x292384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_292388:
    // 0x292388: 0x3e00008
    ctx->pc = 0x292388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29238Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2922FCu: goto label_2922fc;
            case 0x292308u: goto label_292308;
            case 0x292328u: goto label_292328;
            case 0x292340u: goto label_292340;
            case 0x292374u: goto label_292374;
            case 0x292378u: goto label_292378;
            case 0x292384u: goto label_292384;
            case 0x292388u: goto label_292388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292390u;
}
