#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddItemInstList
// Address: 0x253208 - 0x253364
void AddItemInstList_0x253208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253208u;

    // 0x253208: 0x27bdff90
    ctx->pc = 0x253208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25320c: 0xffbf0060
    ctx->pc = 0x25320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x253210: 0xffb50050
    ctx->pc = 0x253210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x253214: 0xffb40040
    ctx->pc = 0x253214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x253218: 0xffb30030
    ctx->pc = 0x253218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25321c: 0xffb20020
    ctx->pc = 0x25321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x253220: 0xffb10010
    ctx->pc = 0x253220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x253224: 0xffb00000
    ctx->pc = 0x253224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253228: 0x3c020032
    ctx->pc = 0x253228u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25322c: 0x2442f9f8
    ctx->pc = 0x25322cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x253230: 0x8c53006c
    ctx->pc = 0x253230u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x253234: 0x8c520078
    ctx->pc = 0x253234u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x253238: 0x882d
    ctx->pc = 0x253238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25323c: 0x3c030034
    ctx->pc = 0x25323cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x253240: 0x3c02003a
    ctx->pc = 0x253240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x253244: 0x8c4222f8
    ctx->pc = 0x253244u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x253248: 0xc089802
    ctx->pc = 0x253248u;
    SET_GPR_U32(ctx, 31, 0x253250u);
    ctx->pc = 0x25324Cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954460), GPR_U32(ctx, 2));
    ctx->pc = 0x226008u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPlayerVars_0x226008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253250u; }
    }
    if (ctx->pc != 0x253250u) { return; }
    ctx->pc = 0x253250u;
    // 0x253250: 0x3c020034
    ctx->pc = 0x253250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x253254: 0x264301f4
    ctx->pc = 0x253254u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 500));
    // 0x253258: 0xac43cdd4
    ctx->pc = 0x253258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954452), GPR_U32(ctx, 3));
    // 0x25325c: 0x3c100034
    ctx->pc = 0x25325cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x253260: 0x24040110
    ctx->pc = 0x253260u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 272));
    // 0x253264: 0xc0b4f52
    ctx->pc = 0x253264u;
    SET_GPR_U32(ctx, 31, 0x25326Cu);
    ctx->pc = 0x253268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25326Cu; }
    }
    if (ctx->pc != 0x25326Cu) { return; }
    ctx->pc = 0x25326Cu;
    // 0x25326c: 0xae02cd94
    ctx->pc = 0x25326cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294954388), GPR_U32(ctx, 2));
    // 0x253270: 0x1a40001d
    ctx->pc = 0x253270u;
    {
        const bool branch_taken_0x253270 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x253274u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253270) {
            ctx->pc = 0x2532E8u;
            goto label_2532e8;
        }
    }
    ctx->pc = 0x253278u;
    // 0x253278: 0x2415003c
    ctx->pc = 0x253278u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 60));
    // 0x25327c: 0x24140001
    ctx->pc = 0x25327cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x253280: 0x2151018
    ctx->pc = 0x253280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x253284: 0x0
    ctx->pc = 0x253284u;
    // NOP
label_253288:
    // 0x253288: 0x533021
    ctx->pc = 0x253288u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x25328c: 0xc0202d
    ctx->pc = 0x25328cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253290: 0x24c50018
    ctx->pc = 0x253290u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 24));
    // 0x253294: 0xc094bf0
    ctx->pc = 0x253294u;
    SET_GPR_U32(ctx, 31, 0x25329Cu);
    ctx->pc = 0x253298u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 36));
    ctx->pc = 0x252FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewItem_0x252fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25329Cu; }
    }
    if (ctx->pc != 0x25329Cu) { return; }
    ctx->pc = 0x25329Cu;
    // 0x25329c: 0x40202d
    ctx->pc = 0x25329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532a0: 0x5080000e
    ctx->pc = 0x2532A0u;
    {
        const bool branch_taken_0x2532a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2532a0) {
            ctx->pc = 0x2532A4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2532DCu;
            goto label_2532dc;
        }
    }
    ctx->pc = 0x2532A8u;
    // 0x2532a8: 0x8c820000
    ctx->pc = 0x2532a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2532ac: 0x5040000b
    ctx->pc = 0x2532ACu;
    {
        const bool branch_taken_0x2532ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2532ac) {
            ctx->pc = 0x2532B0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2532DCu;
            goto label_2532dc;
        }
    }
    ctx->pc = 0x2532B4u;
    // 0x2532b4: 0x8c430000
    ctx->pc = 0x2532b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2532b8: 0x14740008
    ctx->pc = 0x2532B8u;
    {
        const bool branch_taken_0x2532b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 20));
        ctx->pc = 0x2532BCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2532b8) {
            ctx->pc = 0x2532DCu;
            goto label_2532dc;
        }
    }
    ctx->pc = 0x2532C0u;
    // 0x2532c0: 0x8c420004
    ctx->pc = 0x2532c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2532c4: 0x14430005
    ctx->pc = 0x2532C4u;
    {
        const bool branch_taken_0x2532c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2532c4) {
            ctx->pc = 0x2532DCu;
            goto label_2532dc;
        }
    }
    ctx->pc = 0x2532CCu;
    // 0x2532cc: 0xc09459a
    ctx->pc = 0x2532CCu;
    SET_GPR_U32(ctx, 31, 0x2532D4u);
    ctx->pc = 0x251668u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_item_0x251668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532D4u; }
    }
    if (ctx->pc != 0x2532D4u) { return; }
    ctx->pc = 0x2532D4u;
    // 0x2532d4: 0x26230001
    ctx->pc = 0x2532d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2532d8: 0x62880b
    ctx->pc = 0x2532d8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_2532dc:
    // 0x2532dc: 0x212102a
    ctx->pc = 0x2532dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x2532e0: 0x1440ffe9
    ctx->pc = 0x2532E0u;
    {
        const bool branch_taken_0x2532e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2532E4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2532e0) {
            ctx->pc = 0x253288u;
            goto label_253288;
        }
    }
    ctx->pc = 0x2532E8u;
label_2532e8:
    // 0x2532e8: 0x3c020034
    ctx->pc = 0x2532e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2532ec: 0xc0951ee
    ctx->pc = 0x2532ECu;
    SET_GPR_U32(ctx, 31, 0x2532F4u);
    ctx->pc = 0x2532F0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955804), GPR_U32(ctx, 17));
    ctx->pc = 0x2547B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessItemWobjs_0x2547b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532F4u; }
    }
    if (ctx->pc != 0x2532F4u) { return; }
    ctx->pc = 0x2532F4u;
    // 0x2532f4: 0x3c020034
    ctx->pc = 0x2532f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2532f8: 0x8c42cd98
    ctx->pc = 0x2532f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x2532fc: 0x1840000e
    ctx->pc = 0x2532FCu;
    {
        const bool branch_taken_0x2532fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x253300u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2532fc) {
            ctx->pc = 0x253338u;
            goto label_253338;
        }
    }
    ctx->pc = 0x253304u;
    // 0x253304: 0x3c130034
    ctx->pc = 0x253304u;
    SET_GPR_U32(ctx, 19, ((uint32_t)52 << 16));
    // 0x253308: 0x24120110
    ctx->pc = 0x253308u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 272));
    // 0x25330c: 0x3c110034
    ctx->pc = 0x25330cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x253310: 0x2121018
    ctx->pc = 0x253310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x253314: 0x0
    ctx->pc = 0x253314u;
    // NOP
label_253318:
    // 0x253318: 0x8e64cd94
    ctx->pc = 0x253318u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294954388)));
    // 0x25331c: 0xc094c28
    ctx->pc = 0x25331Cu;
    SET_GPR_U32(ctx, 31, 0x253324u);
    ctx->pc = 0x253320u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x2530A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceItem_0x2530a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253324u; }
    }
    if (ctx->pc != 0x253324u) { return; }
    ctx->pc = 0x253324u;
    // 0x253324: 0x26100001
    ctx->pc = 0x253324u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x253328: 0x8e22cd98
    ctx->pc = 0x253328u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294954392)));
    // 0x25332c: 0x202102a
    ctx->pc = 0x25332cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x253330: 0x1440fff9
    ctx->pc = 0x253330u;
    {
        const bool branch_taken_0x253330 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x253334u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x253330) {
            ctx->pc = 0x253318u;
            goto label_253318;
        }
    }
    ctx->pc = 0x253338u;
label_253338:
    // 0x253338: 0xc094aaa
    ctx->pc = 0x253338u;
    SET_GPR_U32(ctx, 31, 0x253340u);
    ctx->pc = 0x252AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MatchTransporters_0x252aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253340u; }
    }
    if (ctx->pc != 0x253340u) { return; }
    ctx->pc = 0x253340u;
    // 0x253340: 0xdfbf0060
    ctx->pc = 0x253340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x253344: 0xdfb50050
    ctx->pc = 0x253344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253348: 0xdfb40040
    ctx->pc = 0x253348u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25334c: 0xdfb30030
    ctx->pc = 0x25334cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253350: 0xdfb20020
    ctx->pc = 0x253350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253354: 0xdfb10010
    ctx->pc = 0x253354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253358: 0xdfb00000
    ctx->pc = 0x253358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25335c: 0x8094afc
    ctx->pc = 0x25335Cu;
    ctx->pc = 0x253360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x252BF0u;
    LinkTriggers_0x252bf0(rdram, ctx, runtime); return;
    ctx->pc = 0x253364u;
}
