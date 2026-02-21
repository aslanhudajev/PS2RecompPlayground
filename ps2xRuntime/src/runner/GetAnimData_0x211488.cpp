#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetAnimData
// Address: 0x211488 - 0x2115ac
void GetAnimData_0x211488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211488u;

    // 0x211488: 0x27bdffe0
    ctx->pc = 0x211488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21148c: 0xffbf0010
    ctx->pc = 0x21148cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211490: 0xffb00000
    ctx->pc = 0x211490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211494: 0x3c020032
    ctx->pc = 0x211494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x211498: 0x8c50f4c0
    ctx->pc = 0x211498u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294964416)));
    // 0x21149c: 0x3c020032
    ctx->pc = 0x21149cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2114a0: 0x8c42f4bc
    ctx->pc = 0x2114a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964412)));
    // 0x2114a4: 0x202102a
    ctx->pc = 0x2114a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2114a8: 0x10400019
    ctx->pc = 0x2114A8u;
    {
        const bool branch_taken_0x2114a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2114ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2114a8) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2114B0u;
    // 0x2114b0: 0x8c43cb70
    ctx->pc = 0x2114b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294953840)));
    // 0x2114b4: 0x240200a0
    ctx->pc = 0x2114b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 160));
    // 0x2114b8: 0x2021018
    ctx->pc = 0x2114b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2114bc: 0x431021
    ctx->pc = 0x2114bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2114c0: 0x8c420004
    ctx->pc = 0x2114c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2114c4: 0x1040000d
    ctx->pc = 0x2114C4u;
    {
        const bool branch_taken_0x2114c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2114C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2114c4) {
            ctx->pc = 0x2114FCu;
            goto label_2114fc;
        }
    }
    ctx->pc = 0x2114CCu;
    // 0x2114cc: 0x8c43f4bc
    ctx->pc = 0x2114ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294964412)));
    // 0x2114d0: 0x3c02003c
    ctx->pc = 0x2114d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2114d4: 0x8c46cb70
    ctx->pc = 0x2114d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294953840)));
    // 0x2114d8: 0x240400a0
    ctx->pc = 0x2114d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 160));
    // 0x2114dc: 0x26100001
    ctx->pc = 0x2114dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2114e0:
    // 0x2114e0: 0x203102a
    ctx->pc = 0x2114e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x2114e4: 0x1040000a
    ctx->pc = 0x2114E4u;
    {
        const bool branch_taken_0x2114e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2114E8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2114e4) {
            ctx->pc = 0x211510u;
            goto label_211510;
        }
    }
    ctx->pc = 0x2114ECu;
    // 0x2114ec: 0xa61021
    ctx->pc = 0x2114ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2114f0: 0x8c420004
    ctx->pc = 0x2114f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2114f4: 0x5440fffa
    ctx->pc = 0x2114F4u;
    {
        const bool branch_taken_0x2114f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2114f4) {
            ctx->pc = 0x2114F8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2114E0u;
            goto label_2114e0;
        }
    }
    ctx->pc = 0x2114FCu;
label_2114fc:
    // 0x2114fc: 0x3c020032
    ctx->pc = 0x2114fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x211500: 0x8c42f4bc
    ctx->pc = 0x211500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964412)));
    // 0x211504: 0x202102a
    ctx->pc = 0x211504u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x211508: 0x1440001b
    ctx->pc = 0x211508u;
    {
        const bool branch_taken_0x211508 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21150Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x211508) {
            ctx->pc = 0x211578u;
            goto label_211578;
        }
    }
    ctx->pc = 0x211510u;
label_211510:
    // 0x211510: 0x3c020032
    ctx->pc = 0x211510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x211514: 0x3c030032
    ctx->pc = 0x211514u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x211518: 0x8c42f4bc
    ctx->pc = 0x211518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964412)));
    // 0x21151c: 0x8c63f4c4
    ctx->pc = 0x21151cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294964420)));
    // 0x211520: 0x43102a
    ctx->pc = 0x211520u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x211524: 0x1440000b
    ctx->pc = 0x211524u;
    {
        const bool branch_taken_0x211524 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x211528u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x211524) {
            ctx->pc = 0x211554u;
            goto label_211554;
        }
    }
    ctx->pc = 0x21152Cu;
    // 0x21152c: 0x3c020037
    ctx->pc = 0x21152cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x211530: 0x3c0300ff
    ctx->pc = 0x211530u;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
    // 0x211534: 0x3463ff00
    ctx->pc = 0x211534u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
    // 0x211538: 0xac438008
    ctx->pc = 0x211538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x21153c: 0x3c04003a
    ctx->pc = 0x21153cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x211540: 0x248458d0
    ctx->pc = 0x211540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22736));
    // 0x211544: 0x3c050080
    ctx->pc = 0x211544u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x211548: 0xc0b49a6
    ctx->pc = 0x211548u;
    SET_GPR_U32(ctx, 31, 0x211550u);
    ctx->pc = 0x21154Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16480));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211550u; }
    }
    if (ctx->pc != 0x211550u) { return; }
    ctx->pc = 0x211550u;
    // 0x211550: 0x3c030032
    ctx->pc = 0x211550u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_211554:
    // 0x211554: 0x8c62f4bc
    ctx->pc = 0x211554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294964412)));
    // 0x211558: 0x24440001
    ctx->pc = 0x211558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21155c: 0xac64f4bc
    ctx->pc = 0x21155cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964412), GPR_U32(ctx, 4));
    // 0x211560: 0x3c030032
    ctx->pc = 0x211560u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x211564: 0x8c62f4cc
    ctx->pc = 0x211564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294964428)));
    // 0x211568: 0x44102a
    ctx->pc = 0x211568u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x21156c: 0x54400001
    ctx->pc = 0x21156Cu;
    {
        const bool branch_taken_0x21156c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21156c) {
            ctx->pc = 0x211570u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294964428), GPR_U32(ctx, 4));
            ctx->pc = 0x211574u;
            goto label_211574;
        }
    }
    ctx->pc = 0x211574u;
label_211574:
    // 0x211574: 0x3c030032
    ctx->pc = 0x211574u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_211578:
    // 0x211578: 0x26020001
    ctx->pc = 0x211578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
    // 0x21157c: 0xac62f4c0
    ctx->pc = 0x21157cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964416), GPR_U32(ctx, 2));
    // 0x211580: 0x3c02003c
    ctx->pc = 0x211580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x211584: 0x8c43cb70
    ctx->pc = 0x211584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294953840)));
    // 0x211588: 0x240200a0
    ctx->pc = 0x211588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 160));
    // 0x21158c: 0x2021018
    ctx->pc = 0x21158cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x211590: 0x431021
    ctx->pc = 0x211590u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211594: 0x24030001
    ctx->pc = 0x211594u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211598: 0xac430004
    ctx->pc = 0x211598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x21159c: 0xdfbf0010
    ctx->pc = 0x21159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2115a0: 0xdfb00000
    ctx->pc = 0x2115a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2115a4: 0x3e00008
    ctx->pc = 0x2115A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2115A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2114E0u: goto label_2114e0;
            case 0x2114FCu: goto label_2114fc;
            case 0x211510u: goto label_211510;
            case 0x211554u: goto label_211554;
            case 0x211574u: goto label_211574;
            case 0x211578u: goto label_211578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2115ACu;
}
