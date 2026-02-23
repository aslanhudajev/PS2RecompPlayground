#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: search_fstate
// Address: 0x1780a0 - 0x1781ec
void search_fstate_0x1780a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("search_fstate");


    ctx->pc = 0x1780a0u;

    // 0x1780a0: 0x27bdff30
    ctx->pc = 0x1780a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1780a4: 0xffb700a0
    ctx->pc = 0x1780a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x1780a8: 0xffb60090
    ctx->pc = 0x1780a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1780ac: 0xb82d
    ctx->pc = 0x1780acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780b0: 0xffb50080
    ctx->pc = 0x1780b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x1780b4: 0xa0b02d
    ctx->pc = 0x1780b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780b8: 0xffb40070
    ctx->pc = 0x1780b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1780bc: 0x80a82d
    ctx->pc = 0x1780bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780c0: 0xffb30060
    ctx->pc = 0x1780c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x1780c4: 0xa02d
    ctx->pc = 0x1780c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780c8: 0xffbf00c0
    ctx->pc = 0x1780c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1780cc: 0x982d
    ctx->pc = 0x1780ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1780d0: 0xffbe00b0
    ctx->pc = 0x1780d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x1780d4: 0xffb20050
    ctx->pc = 0x1780d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1780d8: 0xffb10040
    ctx->pc = 0x1780d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1780dc: 0x1ac0002d
    ctx->pc = 0x1780DCu;
    {
        const bool branch_taken_0x1780dc = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1780E0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        if (branch_taken_0x1780dc) {
            ctx->pc = 0x178194u;
            goto label_178194;
        }
    }
    ctx->pc = 0x1780E4u;
    // 0x1780e4: 0x3c1e0024
    ctx->pc = 0x1780e4u;
    SET_GPR_U32(ctx, 30, ((uint32_t)36 << 16));
    // 0x1780e8: 0x27c59f08
    ctx->pc = 0x1780e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 4294942472));
    // 0x1780ec: 0x0
    ctx->pc = 0x1780ecu;
    // NOP
label_1780f0:
    // 0x1780f0: 0x1320c0
    ctx->pc = 0x1780f0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 3));
    // 0x1780f4: 0x8ca3000c
    ctx->pc = 0x1780f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1780f8: 0x2a49021
    ctx->pc = 0x1780f8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1780fc: 0x8ca20008
    ctx->pc = 0x1780fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x178100: 0x732018
    ctx->pc = 0x178100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x178104: 0x210c0
    ctx->pc = 0x178104u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x178108: 0x931821
    ctx->pc = 0x178108u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x17810c: 0x431021
    ctx->pc = 0x17810cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178110: 0x2a28821
    ctx->pc = 0x178110u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x178114: 0x82230000
    ctx->pc = 0x178114u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x178118: 0x1060001a
    ctx->pc = 0x178118u;
    {
        const bool branch_taken_0x178118 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17811Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
        if (branch_taken_0x178118) {
            ctx->pc = 0x178184u;
            goto label_178184;
        }
    }
    ctx->pc = 0x178120u;
    // 0x178120: 0x220202d
    ctx->pc = 0x178120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178124: 0x2610a028
    ctx->pc = 0x178124u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294942760));
    // 0x178128: 0xc05df2c
    ctx->pc = 0x178128u;
    SET_GPR_U32(ctx, 31, 0x178130u);
    ctx->pc = 0x17812Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_conv_fname_0x177cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178130u; }
        else if (ctx->pc != 0x178130u) { ctx->pc = 0x178130u; }
    }
    if (ctx->pc != 0x178130u) { return; }
    ctx->pc = 0x178130u;
    // 0x178130: 0x200282d
    ctx->pc = 0x178130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178134: 0xc0543c0
    ctx->pc = 0x178134u;
    SET_GPR_U32(ctx, 31, 0x17813Cu);
    ctx->pc = 0x178138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdSearchFile_0x150f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17813Cu; }
        else if (ctx->pc != 0x17813Cu) { ctx->pc = 0x17813Cu; }
    }
    if (ctx->pc != 0x17813Cu) { return; }
    ctx->pc = 0x17813Cu;
    // 0x17813c: 0x24030001
    ctx->pc = 0x17813cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x178140: 0x1443000c
    ctx->pc = 0x178140u;
    {
        const bool branch_taken_0x178140 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x178144u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x178140) {
            ctx->pc = 0x178174u;
            goto label_178174;
        }
    }
    ctx->pc = 0x178148u;
    // 0x178148: 0x8fa20000
    ctx->pc = 0x178148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17814c: 0x3c04002c
    ctx->pc = 0x17814cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x178150: 0x8fa30004
    ctx->pc = 0x178150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x178154: 0x2484b478
    ctx->pc = 0x178154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947960));
    // 0x178158: 0xae420000
    ctx->pc = 0x178158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x17815c: 0x220282d
    ctx->pc = 0x17815cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178160: 0xae430004
    ctx->pc = 0x178160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x178164: 0xc05114a
    ctx->pc = 0x178164u;
    SET_GPR_U32(ctx, 31, 0x17816Cu);
    ctx->pc = 0x178168u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17816Cu; }
        else if (ctx->pc != 0x17816Cu) { ctx->pc = 0x17816Cu; }
    }
    if (ctx->pc != 0x17816Cu) { return; }
    ctx->pc = 0x17816Cu;
    // 0x17816c: 0x10000006
    ctx->pc = 0x17816Cu;
    {
        const bool branch_taken_0x17816c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178170u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x17816c) {
            ctx->pc = 0x178188u;
            goto label_178188;
        }
    }
    ctx->pc = 0x178174u;
label_178174:
    // 0x178174: 0x220282d
    ctx->pc = 0x178174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178178: 0x2484b490
    ctx->pc = 0x178178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947984));
    // 0x17817c: 0xc05114a
    ctx->pc = 0x17817Cu;
    SET_GPR_U32(ctx, 31, 0x178184u);
    ctx->pc = 0x178180u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178184u; }
        else if (ctx->pc != 0x178184u) { ctx->pc = 0x178184u; }
    }
    if (ctx->pc != 0x178184u) { return; }
    ctx->pc = 0x178184u;
label_178184:
    // 0x178184: 0x26730001
    ctx->pc = 0x178184u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_178188:
    // 0x178188: 0x276102a
    ctx->pc = 0x178188u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 22)));
    // 0x17818c: 0x1440ffd8
    ctx->pc = 0x17818Cu;
    {
        const bool branch_taken_0x17818c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178190u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 4294942472));
        if (branch_taken_0x17818c) {
            ctx->pc = 0x1780F0u;
            goto label_1780f0;
        }
    }
    ctx->pc = 0x178194u;
label_178194:
    // 0x178194: 0x3c02002c
    ctx->pc = 0x178194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x178198: 0x280282d
    ctx->pc = 0x178198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17819c: 0xc05114a
    ctx->pc = 0x17819Cu;
    SET_GPR_U32(ctx, 31, 0x1781A4u);
    ctx->pc = 0x1781A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294948008));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781A4u; }
        else if (ctx->pc != 0x1781A4u) { ctx->pc = 0x1781A4u; }
    }
    if (ctx->pc != 0x1781A4u) { return; }
    ctx->pc = 0x1781A4u;
    // 0x1781a4: 0x1ae00004
    ctx->pc = 0x1781A4u;
    {
        const bool branch_taken_0x1781a4 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x1781A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1781a4) {
            ctx->pc = 0x1781B8u;
            goto label_1781b8;
        }
    }
    ctx->pc = 0x1781ACu;
    // 0x1781ac: 0x3c04002c
    ctx->pc = 0x1781acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1781b0: 0xc05114a
    ctx->pc = 0x1781B0u;
    SET_GPR_U32(ctx, 31, 0x1781B8u);
    ctx->pc = 0x1781B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948032));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781B8u; }
        else if (ctx->pc != 0x1781B8u) { ctx->pc = 0x1781B8u; }
    }
    if (ctx->pc != 0x1781B8u) { return; }
    ctx->pc = 0x1781B8u;
label_1781b8:
    // 0x1781b8: 0x280102d
    ctx->pc = 0x1781b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781bc: 0xdfbf00c0
    ctx->pc = 0x1781bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1781c0: 0xdfbe00b0
    ctx->pc = 0x1781c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1781c4: 0xdfb700a0
    ctx->pc = 0x1781c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1781c8: 0xdfb60090
    ctx->pc = 0x1781c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1781cc: 0xdfb50080
    ctx->pc = 0x1781ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1781d0: 0xdfb40070
    ctx->pc = 0x1781d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1781d4: 0xdfb30060
    ctx->pc = 0x1781d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1781d8: 0xdfb20050
    ctx->pc = 0x1781d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1781dc: 0xdfb10040
    ctx->pc = 0x1781dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1781e0: 0xdfb00030
    ctx->pc = 0x1781e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1781e4: 0x3e00008
    ctx->pc = 0x1781E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1781E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1780F0u: goto label_1780f0;
            case 0x178174u: goto label_178174;
            case 0x178184u: goto label_178184;
            case 0x178188u: goto label_178188;
            case 0x178194u: goto label_178194;
            case 0x1781B8u: goto label_1781b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1781ECu;
}
