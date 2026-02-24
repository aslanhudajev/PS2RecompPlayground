#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: copy2area
// Address: 0x119418 - 0x119550
void copy2area_0x119418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119418u;

    // 0x119418: 0x27bdff60
    ctx->pc = 0x119418u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11941c: 0xffb60060
    ctx->pc = 0x11941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x119420: 0xffb10010
    ctx->pc = 0x119420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119424: 0x160b02d
    ctx->pc = 0x119424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119428: 0xffb00000
    ctx->pc = 0x119428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11942c: 0xa0882d
    ctx->pc = 0x11942cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119430: 0xffbe0080
    ctx->pc = 0x119430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x119434: 0x120802d
    ctx->pc = 0x119434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119438: 0xffb70070
    ctx->pc = 0x119438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x11943c: 0x2273821
    ctx->pc = 0x11943cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x119440: 0xffb50050
    ctx->pc = 0x119440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119444: 0x216f021
    ctx->pc = 0x119444u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x119448: 0xffb40040
    ctx->pc = 0x119448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11944c: 0xc0b82d
    ctx->pc = 0x11944cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119450: 0xffb20020
    ctx->pc = 0x119450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119454: 0x80a02d
    ctx->pc = 0x119454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119458: 0xffbf0090
    ctx->pc = 0x119458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11945c: 0x100902d
    ctx->pc = 0x11945cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119460: 0xffb30030
    ctx->pc = 0x119460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119464: 0x140a82d
    ctx->pc = 0x119464u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119468: 0xfe382a
    ctx->pc = 0x119468u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 30)));
    // 0x11946c: 0x14e0002c
    ctx->pc = 0x11946Cu;
    {
        const bool branch_taken_0x11946c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x119470u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11946c) {
            ctx->pc = 0x119520u;
            goto label_119520;
        }
    }
    ctx->pc = 0x119474u;
    // 0x119474: 0x211102a
    ctx->pc = 0x119474u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x119478: 0x14400010
    ctx->pc = 0x119478u;
    {
        const bool branch_taken_0x119478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11947Cu;
        SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x119478) {
            ctx->pc = 0x1194BCu;
            goto label_1194bc;
        }
    }
    ctx->pc = 0x119480u;
    // 0x119480: 0x280202d
    ctx->pc = 0x119480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119484: 0x240282d
    ctx->pc = 0x119484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119488: 0xc04ac33
    ctx->pc = 0x119488u;
    SET_GPR_U32(ctx, 31, 0x119490u);
    ctx->pc = 0x11948Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119490u; }
    }
    if (ctx->pc != 0x119490u) { return; }
    ctx->pc = 0x119490u;
    // 0x119490: 0x2512821
    ctx->pc = 0x119490u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x119494: 0x2e0202d
    ctx->pc = 0x119494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119498: 0xc04ac33
    ctx->pc = 0x119498u;
    SET_GPR_U32(ctx, 31, 0x1194A0u);
    ctx->pc = 0x11949Cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194A0u; }
    }
    if (ctx->pc != 0x1194A0u) { return; }
    ctx->pc = 0x1194A0u;
    // 0x1194a0: 0x2f02021
    ctx->pc = 0x1194a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1194a4: 0x2a0282d
    ctx->pc = 0x1194a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194a8: 0x912023
    ctx->pc = 0x1194a8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1194ac: 0xc04ac33
    ctx->pc = 0x1194ACu;
    SET_GPR_U32(ctx, 31, 0x1194B4u);
    ctx->pc = 0x1194B0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194B4u; }
    }
    if (ctx->pc != 0x1194B4u) { return; }
    ctx->pc = 0x1194B4u;
    // 0x1194b4: 0x1000001a
    ctx->pc = 0x1194B4u;
    {
        const bool branch_taken_0x1194b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1194B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1194b4) {
            ctx->pc = 0x119520u;
            goto label_119520;
        }
    }
    ctx->pc = 0x1194BCu;
label_1194bc:
    // 0x1194bc: 0x2d3102a
    ctx->pc = 0x1194bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 19)));
    // 0x1194c0: 0x1440000f
    ctx->pc = 0x1194C0u;
    {
        const bool branch_taken_0x1194c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1194C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1194c0) {
            ctx->pc = 0x119500u;
            goto label_119500;
        }
    }
    ctx->pc = 0x1194C8u;
    // 0x1194c8: 0x280202d
    ctx->pc = 0x1194c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194cc: 0xc04ac33
    ctx->pc = 0x1194CCu;
    SET_GPR_U32(ctx, 31, 0x1194D4u);
    ctx->pc = 0x1194D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194D4u; }
    }
    if (ctx->pc != 0x1194D4u) { return; }
    ctx->pc = 0x1194D4u;
    // 0x1194d4: 0x2902021
    ctx->pc = 0x1194d4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1194d8: 0x2a0282d
    ctx->pc = 0x1194d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194dc: 0xc04ac33
    ctx->pc = 0x1194DCu;
    SET_GPR_U32(ctx, 31, 0x1194E4u);
    ctx->pc = 0x1194E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194E4u; }
    }
    if (ctx->pc != 0x1194E4u) { return; }
    ctx->pc = 0x1194E4u;
    // 0x1194e4: 0x2b12821
    ctx->pc = 0x1194e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1194e8: 0x2d33023
    ctx->pc = 0x1194e8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1194ec: 0xb02823
    ctx->pc = 0x1194ecu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1194f0: 0xc04ac33
    ctx->pc = 0x1194F0u;
    SET_GPR_U32(ctx, 31, 0x1194F8u);
    ctx->pc = 0x1194F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194F8u; }
    }
    if (ctx->pc != 0x1194F8u) { return; }
    ctx->pc = 0x1194F8u;
    // 0x1194f8: 0x10000009
    ctx->pc = 0x1194F8u;
    {
        const bool branch_taken_0x1194f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1194FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1194f8) {
            ctx->pc = 0x119520u;
            goto label_119520;
        }
    }
    ctx->pc = 0x119500u;
label_119500:
    // 0x119500: 0x280202d
    ctx->pc = 0x119500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119504: 0xc04ac33
    ctx->pc = 0x119504u;
    SET_GPR_U32(ctx, 31, 0x11950Cu);
    ctx->pc = 0x119508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11950Cu; }
    }
    if (ctx->pc != 0x11950Cu) { return; }
    ctx->pc = 0x11950Cu;
    // 0x11950c: 0x2902021
    ctx->pc = 0x11950cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x119510: 0x2a0282d
    ctx->pc = 0x119510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119514: 0xc04ac33
    ctx->pc = 0x119514u;
    SET_GPR_U32(ctx, 31, 0x11951Cu);
    ctx->pc = 0x119518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B0CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11951Cu; }
    }
    if (ctx->pc != 0x11951Cu) { return; }
    ctx->pc = 0x11951Cu;
    // 0x11951c: 0x3c0102d
    ctx->pc = 0x11951cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_119520:
    // 0x119520: 0xdfbf0090
    ctx->pc = 0x119520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x119524: 0xdfbe0080
    ctx->pc = 0x119524u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119528: 0xdfb70070
    ctx->pc = 0x119528u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11952c: 0xdfb60060
    ctx->pc = 0x11952cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119530: 0xdfb50050
    ctx->pc = 0x119530u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119534: 0xdfb40040
    ctx->pc = 0x119534u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119538: 0xdfb30030
    ctx->pc = 0x119538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11953c: 0xdfb20020
    ctx->pc = 0x11953cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119540: 0xdfb10010
    ctx->pc = 0x119540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119544: 0xdfb00000
    ctx->pc = 0x119544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119548: 0x3e00008
    ctx->pc = 0x119548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11954Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1194BCu: goto label_1194bc;
            case 0x119500u: goto label_119500;
            case 0x119520u: goto label_119520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119550u;
}
