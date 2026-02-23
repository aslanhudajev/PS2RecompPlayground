#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: open_file_all
// Address: 0x1796f0 - 0x179870
void open_file_all_0x1796f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("open_file_all");


    ctx->pc = 0x1796f0u;

    // 0x1796f0: 0x27bdfe60
    ctx->pc = 0x1796f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1796f4: 0x24060100
    ctx->pc = 0x1796f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1796f8: 0xffb60160
    ctx->pc = 0x1796f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x1796fc: 0xffb40140
    ctx->pc = 0x1796fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x179700: 0x80b02d
    ctx->pc = 0x179700u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179704: 0xa0a02d
    ctx->pc = 0x179704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179708: 0xffb70170
    ctx->pc = 0x179708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x17970c: 0xffb50150
    ctx->pc = 0x17970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x179710: 0x3a0202d
    ctx->pc = 0x179710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179714: 0xffb30130
    ctx->pc = 0x179714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x179718: 0x282d
    ctx->pc = 0x179718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17971c: 0xffbf0190
    ctx->pc = 0x17971cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x179720: 0xb82d
    ctx->pc = 0x179720u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179724: 0xffbe0180
    ctx->pc = 0x179724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x179728: 0x982d
    ctx->pc = 0x179728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17972c: 0xffb20120
    ctx->pc = 0x17972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x179730: 0xa82d
    ctx->pc = 0x179730u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179734: 0xffb10110
    ctx->pc = 0x179734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x179738: 0xc050cfe
    ctx->pc = 0x179738u;
    SET_GPR_U32(ctx, 31, 0x179740u);
    ctx->pc = 0x17973Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179740u; }
        else if (ctx->pc != 0x179740u) { ctx->pc = 0x179740u; }
    }
    if (ctx->pc != 0x179740u) { return; }
    ctx->pc = 0x179740u;
    // 0x179740: 0x2a83000e
    ctx->pc = 0x179740u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), 14));
    // 0x179744: 0x2402000d
    ctx->pc = 0x179744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x179748: 0x43a00a
    ctx->pc = 0x179748u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 2));
    // 0x17974c: 0x1a800032
    ctx->pc = 0x17974Cu;
    {
        const bool branch_taken_0x17974c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x179750u;
        SET_GPR_U32(ctx, 30, ((uint32_t)36 << 16));
        if (branch_taken_0x17974c) {
            ctx->pc = 0x179818u;
            goto label_179818;
        }
    }
    ctx->pc = 0x179754u;
    // 0x179754: 0x27c5a428
    ctx->pc = 0x179754u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 4294943784));
label_179758:
    // 0x179758: 0x1318c0
    ctx->pc = 0x179758u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
    // 0x17975c: 0x8ca4000c
    ctx->pc = 0x17975cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x179760: 0x2c39021
    ctx->pc = 0x179760u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x179764: 0x8ca20008
    ctx->pc = 0x179764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x179768: 0x931818
    ctx->pc = 0x179768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x17976c: 0x3a0282d
    ctx->pc = 0x17976cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179770: 0x210c0
    ctx->pc = 0x179770u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x179774: 0x732021
    ctx->pc = 0x179774u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x179778: 0x441021
    ctx->pc = 0x179778u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17977c: 0x2c28821
    ctx->pc = 0x17977cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x179780: 0xc05e4aa
    ctx->pc = 0x179780u;
    SET_GPR_U32(ctx, 31, 0x179788u);
    ctx->pc = 0x179784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1792A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_conv_fname_0x1792a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179788u; }
        else if (ctx->pc != 0x179788u) { ctx->pc = 0x179788u; }
    }
    if (ctx->pc != 0x179788u) { return; }
    ctx->pc = 0x179788u;
    // 0x179788: 0x82220000
    ctx->pc = 0x179788u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17978c: 0x5040001f
    ctx->pc = 0x17978Cu;
    {
        const bool branch_taken_0x17978c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17978c) {
            ctx->pc = 0x179790u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x17980Cu;
            goto label_17980c;
        }
    }
    ctx->pc = 0x179794u;
    // 0x179794: 0x3a0202d
    ctx->pc = 0x179794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179798: 0xc05623e
    ctx->pc = 0x179798u;
    SET_GPR_U32(ctx, 31, 0x1797A0u);
    ctx->pc = 0x17979Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1588F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1588f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797A0u; }
        else if (ctx->pc != 0x1797A0u) { ctx->pc = 0x1797A0u; }
    }
    if (ctx->pc != 0x1797A0u) { return; }
    ctx->pc = 0x1797A0u;
    // 0x1797a0: 0x40802d
    ctx->pc = 0x1797a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797a4: 0x6030008
    ctx->pc = 0x1797A4u;
    {
        const bool branch_taken_0x1797a4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1797a4) {
            ctx->pc = 0x1797A8u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->pc = 0x1797C8u;
            goto label_1797c8;
        }
    }
    ctx->pc = 0x1797ACu;
    // 0x1797ac: 0x3c04002c
    ctx->pc = 0x1797acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1797b0: 0x3a0282d
    ctx->pc = 0x1797b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797b4: 0x2484b8a0
    ctx->pc = 0x1797b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949024));
    // 0x1797b8: 0xc05114a
    ctx->pc = 0x1797B8u;
    SET_GPR_U32(ctx, 31, 0x1797C0u);
    ctx->pc = 0x1797BCu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797C0u; }
        else if (ctx->pc != 0x1797C0u) { ctx->pc = 0x1797C0u; }
    }
    if (ctx->pc != 0x1797C0u) { return; }
    ctx->pc = 0x1797C0u;
    // 0x1797c0: 0x10000012
    ctx->pc = 0x1797C0u;
    {
        const bool branch_taken_0x1797c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1797C4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x1797c0) {
            ctx->pc = 0x17980Cu;
            goto label_17980c;
        }
    }
    ctx->pc = 0x1797C8u;
label_1797c8:
    // 0x1797c8: 0x200202d
    ctx->pc = 0x1797c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797cc: 0xc05e2f2
    ctx->pc = 0x1797CCu;
    SET_GPR_U32(ctx, 31, 0x1797D4u);
    ctx->pc = 0x1797D0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x178BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_get_fsize_opened_0x178bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797D4u; }
        else if (ctx->pc != 0x1797D4u) { ctx->pc = 0x1797D4u; }
    }
    if (ctx->pc != 0x1797D4u) { return; }
    ctx->pc = 0x1797D4u;
    // 0x1797d4: 0x3c04002c
    ctx->pc = 0x1797d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1797d8: 0xae420004
    ctx->pc = 0x1797d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1797dc: 0x2484b8c8
    ctx->pc = 0x1797dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1797e0: 0xc05114a
    ctx->pc = 0x1797E0u;
    SET_GPR_U32(ctx, 31, 0x1797E8u);
    ctx->pc = 0x1797E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797E8u; }
        else if (ctx->pc != 0x1797E8u) { ctx->pc = 0x1797E8u; }
    }
    if (ctx->pc != 0x1797E8u) { return; }
    ctx->pc = 0x1797E8u;
    // 0x1797e8: 0xc0562e0
    ctx->pc = 0x1797E8u;
    SET_GPR_U32(ctx, 31, 0x1797F0u);
    ctx->pc = 0x1797ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797F0u; }
        else if (ctx->pc != 0x1797F0u) { ctx->pc = 0x1797F0u; }
    }
    if (ctx->pc != 0x1797F0u) { return; }
    ctx->pc = 0x1797F0u;
    // 0x1797f0: 0x3c030024
    ctx->pc = 0x1797f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1797f4: 0x3a0202d
    ctx->pc = 0x1797f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797f8: 0xc05623e
    ctx->pc = 0x1797F8u;
    SET_GPR_U32(ctx, 31, 0x179800u);
    ctx->pc = 0x1797FCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294943800)));
    ctx->pc = 0x1588F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1588f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179800u; }
        else if (ctx->pc != 0x179800u) { ctx->pc = 0x179800u; }
    }
    if (ctx->pc != 0x179800u) { return; }
    ctx->pc = 0x179800u;
    // 0x179800: 0xc05e21c
    ctx->pc = 0x179800u;
    SET_GPR_U32(ctx, 31, 0x179808u);
    ctx->pc = 0x179804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178870u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_by_fd_0x178870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179808u; }
        else if (ctx->pc != 0x179808u) { ctx->pc = 0x179808u; }
    }
    if (ctx->pc != 0x179808u) { return; }
    ctx->pc = 0x179808u;
    // 0x179808: 0x26730001
    ctx->pc = 0x179808u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_17980c:
    // 0x17980c: 0x274102a
    ctx->pc = 0x17980cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 20)));
    // 0x179810: 0x1440ffd1
    ctx->pc = 0x179810u;
    {
        const bool branch_taken_0x179810 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x179814u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 4294943784));
        if (branch_taken_0x179810) {
            ctx->pc = 0x179758u;
            goto label_179758;
        }
    }
    ctx->pc = 0x179818u;
label_179818:
    // 0x179818: 0x3c02002c
    ctx->pc = 0x179818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x17981c: 0x2a0282d
    ctx->pc = 0x17981cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179820: 0xc05114a
    ctx->pc = 0x179820u;
    SET_GPR_U32(ctx, 31, 0x179828u);
    ctx->pc = 0x179824u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294949096));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179828u; }
        else if (ctx->pc != 0x179828u) { ctx->pc = 0x179828u; }
    }
    if (ctx->pc != 0x179828u) { return; }
    ctx->pc = 0x179828u;
    // 0x179828: 0x1ae00004
    ctx->pc = 0x179828u;
    {
        const bool branch_taken_0x179828 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x17982Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x179828) {
            ctx->pc = 0x17983Cu;
            goto label_17983c;
        }
    }
    ctx->pc = 0x179830u;
    // 0x179830: 0x3c04002c
    ctx->pc = 0x179830u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x179834: 0xc05114a
    ctx->pc = 0x179834u;
    SET_GPR_U32(ctx, 31, 0x17983Cu);
    ctx->pc = 0x179838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949120));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17983Cu; }
        else if (ctx->pc != 0x17983Cu) { ctx->pc = 0x17983Cu; }
    }
    if (ctx->pc != 0x17983Cu) { return; }
    ctx->pc = 0x17983Cu;
label_17983c:
    // 0x17983c: 0x2a0102d
    ctx->pc = 0x17983cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179840: 0xdfbf0190
    ctx->pc = 0x179840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x179844: 0xdfbe0180
    ctx->pc = 0x179844u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x179848: 0xdfb70170
    ctx->pc = 0x179848u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x17984c: 0xdfb60160
    ctx->pc = 0x17984cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x179850: 0xdfb50150
    ctx->pc = 0x179850u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x179854: 0xdfb40140
    ctx->pc = 0x179854u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x179858: 0xdfb30130
    ctx->pc = 0x179858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17985c: 0xdfb20120
    ctx->pc = 0x17985cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179860: 0xdfb10110
    ctx->pc = 0x179860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x179864: 0xdfb00100
    ctx->pc = 0x179864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x179868: 0x3e00008
    ctx->pc = 0x179868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17986Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179758u: goto label_179758;
            case 0x1797C8u: goto label_1797c8;
            case 0x17980Cu: goto label_17980c;
            case 0x179818u: goto label_179818;
            case 0x17983Cu: goto label_17983c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179870u;
}
