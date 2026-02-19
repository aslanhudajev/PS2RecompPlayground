#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoEnemyPickupItems
// Address: 0x25a500 - 0x25a5b0
void DoEnemyPickupItems_0x25a500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25a500u;

    // 0x25a500: 0x27bdff90
    ctx->pc = 0x25a500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25a504: 0xffbf0060
    ctx->pc = 0x25a504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x25a508: 0xffb50050
    ctx->pc = 0x25a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25a50c: 0xffb40040
    ctx->pc = 0x25a50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25a510: 0xffb30030
    ctx->pc = 0x25a510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25a514: 0xffb20020
    ctx->pc = 0x25a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25a518: 0xffb10010
    ctx->pc = 0x25a518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25a51c: 0xffb00000
    ctx->pc = 0x25a51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a520: 0x3c020034
    ctx->pc = 0x25a520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25a524: 0x8c42cd98
    ctx->pc = 0x25a524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x25a528: 0x18400018
    ctx->pc = 0x25A528u;
    {
        const bool branch_taken_0x25a528 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25A52Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25a528) {
            ctx->pc = 0x25A58Cu;
            goto label_25a58c;
        }
    }
    ctx->pc = 0x25A530u;
    // 0x25a530: 0x3c150034
    ctx->pc = 0x25a530u;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
    // 0x25a534: 0x24140110
    ctx->pc = 0x25a534u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 272));
    // 0x25a538: 0x24130004
    ctx->pc = 0x25a538u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4));
    // 0x25a53c: 0x3c120034
    ctx->pc = 0x25a53cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x25a540: 0x2341818
    ctx->pc = 0x25a540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25a544: 0x0
    ctx->pc = 0x25a544u;
    // NOP
label_25a548:
    // 0x25a548: 0x8ea2cd94
    ctx->pc = 0x25a548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294954388)));
    // 0x25a54c: 0x628021
    ctx->pc = 0x25a54cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a550: 0x8e020000
    ctx->pc = 0x25a550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25a554: 0x50400009
    ctx->pc = 0x25A554u;
    {
        const bool branch_taken_0x25a554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25a554) {
            ctx->pc = 0x25A558u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x25A57Cu;
            goto label_25a57c;
        }
    }
    ctx->pc = 0x25A55Cu;
    // 0x25a55c: 0x8c420000
    ctx->pc = 0x25a55cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a560: 0x54530006
    ctx->pc = 0x25A560u;
    {
        const bool branch_taken_0x25a560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x25a560) {
            ctx->pc = 0x25A564u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x25A57Cu;
            goto label_25a57c;
        }
    }
    ctx->pc = 0x25A568u;
    // 0x25a568: 0x860400f0
    ctx->pc = 0x25a568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x25a56c: 0xc0968da
    ctx->pc = 0x25A56Cu;
    SET_GPR_U32(ctx, 31, 0x25A574u);
    ctx->pc = 0x25A570u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x25A368u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyPickupItem_0x25a368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A574u; }
    }
    if (ctx->pc != 0x25A574u) { return; }
    ctx->pc = 0x25A574u;
    // 0x25a574: 0xa6020102
    ctx->pc = 0x25a574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a578: 0x26310001
    ctx->pc = 0x25a578u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_25a57c:
    // 0x25a57c: 0x8e42cd98
    ctx->pc = 0x25a57cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294954392)));
    // 0x25a580: 0x222102a
    ctx->pc = 0x25a580u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x25a584: 0x1440fff0
    ctx->pc = 0x25A584u;
    {
        const bool branch_taken_0x25a584 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25A588u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x25a584) {
            ctx->pc = 0x25A548u;
            goto label_25a548;
        }
    }
    ctx->pc = 0x25A58Cu;
label_25a58c:
    // 0x25a58c: 0xdfbf0060
    ctx->pc = 0x25a58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a590: 0xdfb50050
    ctx->pc = 0x25a590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a594: 0xdfb40040
    ctx->pc = 0x25a594u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a598: 0xdfb30030
    ctx->pc = 0x25a598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a59c: 0xdfb20020
    ctx->pc = 0x25a59cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a5a0: 0xdfb10010
    ctx->pc = 0x25a5a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a5a4: 0xdfb00000
    ctx->pc = 0x25a5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a5a8: 0x3e00008
    ctx->pc = 0x25A5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A5ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A548u: goto label_25a548;
            case 0x25A57Cu: goto label_25a57c;
            case 0x25A58Cu: goto label_25a58c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25A5B0u;
}
