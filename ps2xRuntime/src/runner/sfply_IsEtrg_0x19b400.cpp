#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_IsEtrg
// Address: 0x19b400 - 0x19b4c8
void sfply_IsEtrg_0x19b400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_IsEtrg");


    ctx->pc = 0x19b400u;

    // 0x19b400: 0x27bdffb0
    ctx->pc = 0x19b400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b404: 0xffb00000
    ctx->pc = 0x19b404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b408: 0xffbf0040
    ctx->pc = 0x19b408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19b40c: 0x80802d
    ctx->pc = 0x19b40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b410: 0xffb30030
    ctx->pc = 0x19b410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19b414: 0x26030994
    ctx->pc = 0x19b414u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2452));
    // 0x19b418: 0xffb20020
    ctx->pc = 0x19b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19b41c: 0xffb10010
    ctx->pc = 0x19b41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19b420: 0x8c620018
    ctx->pc = 0x19b420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19b424: 0x14400004
    ctx->pc = 0x19B424u;
    {
        const bool branch_taken_0x19b424 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B428u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b424) {
            ctx->pc = 0x19B438u;
            goto label_19b438;
        }
    }
    ctx->pc = 0x19B42Cu;
    // 0x19b42c: 0x8c620014
    ctx->pc = 0x19b42cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x19b430: 0x1040001e
    ctx->pc = 0x19B430u;
    {
        const bool branch_taken_0x19b430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B434u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19b430) {
            ctx->pc = 0x19B4ACu;
            goto label_19b4ac;
        }
    }
    ctx->pc = 0x19B438u;
label_19b438:
    // 0x19b438: 0xc067cf0
    ctx->pc = 0x19B438u;
    SET_GPR_U32(ctx, 31, 0x19B440u);
    ctx->pc = 0x19B43Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19F3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetTermFlg_0x19f3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B440u; }
        else if (ctx->pc != 0x19B440u) { ctx->pc = 0x19B440u; }
    }
    if (ctx->pc != 0x19B440u) { return; }
    ctx->pc = 0x19B440u;
    // 0x19b440: 0x982d
    ctx->pc = 0x19b440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b444: 0x40902d
    ctx->pc = 0x19b444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b448: 0x200202d
    ctx->pc = 0x19b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b44c: 0xc067cf0
    ctx->pc = 0x19B44Cu;
    SET_GPR_U32(ctx, 31, 0x19B454u);
    ctx->pc = 0x19B450u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x19F3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetTermFlg_0x19f3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B454u; }
        else if (ctx->pc != 0x19B454u) { ctx->pc = 0x19B454u; }
    }
    if (ctx->pc != 0x19B454u) { return; }
    ctx->pc = 0x19B454u;
    // 0x19b454: 0x40882d
    ctx->pc = 0x19b454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b458: 0x200202d
    ctx->pc = 0x19b458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b45c: 0xc0674c2
    ctx->pc = 0x19B45Cu;
    SET_GPR_U32(ctx, 31, 0x19B464u);
    ctx->pc = 0x19B460u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B464u; }
        else if (ctx->pc != 0x19B464u) { ctx->pc = 0x19B464u; }
    }
    if (ctx->pc != 0x19B464u) { return; }
    ctx->pc = 0x19B464u;
    // 0x19b464: 0x40182d
    ctx->pc = 0x19b464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b468: 0x24020001
    ctx->pc = 0x19b468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b46c: 0x5062000e
    ctx->pc = 0x19B46Cu;
    {
        const bool branch_taken_0x19b46c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19b46c) {
            ctx->pc = 0x19B470u;
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x19B4A8u;
            goto label_19b4a8;
        }
    }
    ctx->pc = 0x19B474u;
    // 0x19b474: 0x1060000b
    ctx->pc = 0x19B474u;
    {
        const bool branch_taken_0x19b474 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B478u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x19b474) {
            ctx->pc = 0x19B4A4u;
            goto label_19b4a4;
        }
    }
    ctx->pc = 0x19B47Cu;
    // 0x19b47c: 0x10620005
    ctx->pc = 0x19B47Cu;
    {
        const bool branch_taken_0x19b47c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19B480u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x19b47c) {
            ctx->pc = 0x19B494u;
            goto label_19b494;
        }
    }
    ctx->pc = 0x19B484u;
    // 0x19b484: 0x10620005
    ctx->pc = 0x19B484u;
    {
        const bool branch_taken_0x19b484 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19B488u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b484) {
            ctx->pc = 0x19B49Cu;
            goto label_19b49c;
        }
    }
    ctx->pc = 0x19B48Cu;
    // 0x19b48c: 0x10000008
    ctx->pc = 0x19B48Cu;
    {
        const bool branch_taken_0x19b48c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B490u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x19b48c) {
            ctx->pc = 0x19B4B0u;
            goto label_19b4b0;
        }
    }
    ctx->pc = 0x19B494u;
label_19b494:
    // 0x19b494: 0x10000004
    ctx->pc = 0x19B494u;
    {
        const bool branch_taken_0x19b494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B498u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b494) {
            ctx->pc = 0x19B4A8u;
            goto label_19b4a8;
        }
    }
    ctx->pc = 0x19B49Cu;
label_19b49c:
    // 0x19b49c: 0x10000002
    ctx->pc = 0x19B49Cu;
    {
        const bool branch_taken_0x19b49c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B4A0u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        if (branch_taken_0x19b49c) {
            ctx->pc = 0x19B4A8u;
            goto label_19b4a8;
        }
    }
    ctx->pc = 0x19B4A4u;
label_19b4a4:
    // 0x19b4a4: 0x2329824
    ctx->pc = 0x19b4a4u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_19b4a8:
    // 0x19b4a8: 0x260102d
    ctx->pc = 0x19b4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19b4ac:
    // 0x19b4ac: 0xdfbf0040
    ctx->pc = 0x19b4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19b4b0:
    // 0x19b4b0: 0xdfb30030
    ctx->pc = 0x19b4b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b4b4: 0xdfb20020
    ctx->pc = 0x19b4b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b4b8: 0xdfb10010
    ctx->pc = 0x19b4b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b4bc: 0xdfb00000
    ctx->pc = 0x19b4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b4c0: 0x3e00008
    ctx->pc = 0x19B4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B4C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B438u: goto label_19b438;
            case 0x19B494u: goto label_19b494;
            case 0x19B49Cu: goto label_19b49c;
            case 0x19B4A4u: goto label_19b4a4;
            case 0x19B4A8u: goto label_19b4a8;
            case 0x19B4ACu: goto label_19b4ac;
            case 0x19B4B0u: goto label_19b4b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B4C8u;
}
