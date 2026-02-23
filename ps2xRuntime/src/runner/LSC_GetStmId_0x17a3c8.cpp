#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_GetStmId
// Address: 0x17a3c8 - 0x17a458
void LSC_GetStmId_0x17a3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_GetStmId");


    ctx->pc = 0x17a3c8u;

    // 0x17a3c8: 0x27bdfff0
    ctx->pc = 0x17a3c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a3cc: 0x80382d
    ctx->pc = 0x17a3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3d0: 0xffbf0000
    ctx->pc = 0x17a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a3d4: 0x14e00006
    ctx->pc = 0x17A3D4u;
    {
        const bool branch_taken_0x17a3d4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A3D8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17a3d4) {
            ctx->pc = 0x17A3F0u;
            goto label_17a3f0;
        }
    }
    ctx->pc = 0x17A3DCu;
    // 0x17a3dc: 0x3c04002c
    ctx->pc = 0x17a3dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a3e0: 0xc05e9c6
    ctx->pc = 0x17A3E0u;
    SET_GPR_U32(ctx, 31, 0x17A3E8u);
    ctx->pc = 0x17A3E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A3E8u; }
        else if (ctx->pc != 0x17A3E8u) { ctx->pc = 0x17A3E8u; }
    }
    if (ctx->pc != 0x17A3E8u) { return; }
    ctx->pc = 0x17A3E8u;
    // 0x17a3e8: 0x10000018
    ctx->pc = 0x17A3E8u;
    {
        const bool branch_taken_0x17a3e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A3ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17a3e8) {
            ctx->pc = 0x17A44Cu;
            goto label_17a44c;
        }
    }
    ctx->pc = 0x17A3F0u;
label_17a3f0:
    // 0x17a3f0: 0x4c00006
    ctx->pc = 0x17A3F0u;
    {
        const bool branch_taken_0x17a3f0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x17A3F4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x17a3f0) {
            ctx->pc = 0x17A40Cu;
            goto label_17a40c;
        }
    }
    ctx->pc = 0x17A3F8u;
    // 0x17a3f8: 0x8ce20024
    ctx->pc = 0x17a3f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x17a3fc: 0xc2102a
    ctx->pc = 0x17a3fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x17a400: 0x54400007
    ctx->pc = 0x17A400u;
    {
        const bool branch_taken_0x17a400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a400) {
            ctx->pc = 0x17A404u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->pc = 0x17A420u;
            goto label_17a420;
        }
    }
    ctx->pc = 0x17A408u;
    // 0x17a408: 0x3c04002c
    ctx->pc = 0x17a408u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17a40c:
    // 0x17a40c: 0xc0282d
    ctx->pc = 0x17a40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a410: 0xc05e9c6
    ctx->pc = 0x17A410u;
    SET_GPR_U32(ctx, 31, 0x17A418u);
    ctx->pc = 0x17A414u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949560));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A418u; }
        else if (ctx->pc != 0x17A418u) { ctx->pc = 0x17A418u; }
    }
    if (ctx->pc != 0x17A418u) { return; }
    ctx->pc = 0x17A418u;
    // 0x17a418: 0x1000000c
    ctx->pc = 0x17A418u;
    {
        const bool branch_taken_0x17a418 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A41Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17a418) {
            ctx->pc = 0x17A44Cu;
            goto label_17a44c;
        }
    }
    ctx->pc = 0x17A420u;
label_17a420:
    // 0x17a420: 0x2403ffff
    ctx->pc = 0x17a420u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a424: 0xa62821
    ctx->pc = 0x17a424u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17a428: 0x65182a
    ctx->pc = 0x17a428u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x17a42c: 0x24a2000f
    ctx->pc = 0x17a42cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 15));
    // 0x17a430: 0xa3100b
    ctx->pc = 0x17a430u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x17a434: 0x21103
    ctx->pc = 0x17a434u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x17a438: 0x22100
    ctx->pc = 0x17a438u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a43c: 0xa41023
    ctx->pc = 0x17a43cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17a440: 0x21980
    ctx->pc = 0x17a440u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 6));
    // 0x17a444: 0xe31821
    ctx->pc = 0x17a444u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17a448: 0x8c620038
    ctx->pc = 0x17a448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_17a44c:
    // 0x17a44c: 0xdfbf0000
    ctx->pc = 0x17a44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a450: 0x3e00008
    ctx->pc = 0x17A450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A454u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A3F0u: goto label_17a3f0;
            case 0x17A40Cu: goto label_17a40c;
            case 0x17A420u: goto label_17a420;
            case 0x17A44Cu: goto label_17a44c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A458u;
}
