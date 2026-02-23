#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_Create
// Address: 0x17b3e0 - 0x17b654
void PS2RNA_Create_0x17b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_Create");


    ctx->pc = 0x17b3e0u;

label_17b3e0:
    // 0x17b3e0: 0x27bdff60
    ctx->pc = 0x17b3e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_17b3e4:
    // 0x17b3e4: 0x3c020024
    ctx->pc = 0x17b3e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17b3e8:
    // 0x17b3e8: 0xffb60080
    ctx->pc = 0x17b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_17b3ec:
    // 0x17b3ec: 0xffb40060
    ctx->pc = 0x17b3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_17b3f0:
    // 0x17b3f0: 0x80b02d
    ctx->pc = 0x17b3f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b3f4:
    // 0x17b3f4: 0xffb30050
    ctx->pc = 0x17b3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_17b3f8:
    // 0x17b3f8: 0x2454e0e0
    ctx->pc = 0x17b3f8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294959328));
label_17b3fc:
    // 0x17b3fc: 0xffb10030
    ctx->pc = 0x17b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_17b400:
    // 0x17b400: 0xa0982d
    ctx->pc = 0x17b400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17b404:
    // 0x17b404: 0x8043e0e0
    ctx->pc = 0x17b404u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294959328)));
label_17b408:
    // 0x17b408: 0x882d
    ctx->pc = 0x17b408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b40c:
    // 0x17b40c: 0xffbf0090
    ctx->pc = 0x17b40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17b410:
    // 0x17b410: 0xffb50070
    ctx->pc = 0x17b410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_17b414:
    // 0x17b414: 0xffb20040
    ctx->pc = 0x17b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_17b418:
    // 0x17b418: 0x1060000b
label_17b41c:
    if (ctx->pc == 0x17B41Cu) {
        ctx->pc = 0x17B41Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->pc = 0x17B420u;
        goto label_17b420;
    }
    ctx->pc = 0x17B418u;
    {
        const bool branch_taken_0x17b418 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B41Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        if (branch_taken_0x17b418) {
            ctx->pc = 0x17B448u;
            goto label_17b448;
        }
    }
    ctx->pc = 0x17B420u;
label_17b420:
    // 0x17b420: 0x280202d
    ctx->pc = 0x17b420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17b424:
    // 0x17b424: 0x280182d
    ctx->pc = 0x17b424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17b428:
    // 0x17b428: 0x26310001
    ctx->pc = 0x17b428u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_17b42c:
    // 0x17b42c: 0x24840054
    ctx->pc = 0x17b42cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 84));
label_17b430:
    // 0x17b430: 0x2a220008
    ctx->pc = 0x17b430u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
label_17b434:
    // 0x17b434: 0x10400004
label_17b438:
    if (ctx->pc == 0x17B438u) {
        ctx->pc = 0x17B438u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 84));
        ctx->pc = 0x17B43Cu;
        goto label_17b43c;
    }
    ctx->pc = 0x17B434u;
    {
        const bool branch_taken_0x17b434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B438u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 84));
        if (branch_taken_0x17b434) {
            ctx->pc = 0x17B448u;
            goto label_17b448;
        }
    }
    ctx->pc = 0x17B43Cu;
label_17b43c:
    // 0x17b43c: 0x80820000
    ctx->pc = 0x17b43cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_17b440:
    // 0x17b440: 0x1440fff9
label_17b444:
    if (ctx->pc == 0x17B444u) {
        ctx->pc = 0x17B444u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B448u;
        goto label_17b448;
    }
    ctx->pc = 0x17B440u;
    {
        const bool branch_taken_0x17b440 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B444u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b440) {
            ctx->pc = 0x17B428u;
            goto label_17b428;
        }
    }
    ctx->pc = 0x17B448u;
label_17b448:
    // 0x17b448: 0x24020008
    ctx->pc = 0x17b448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_17b44c:
    // 0x17b44c: 0x16220003
label_17b450:
    if (ctx->pc == 0x17B450u) {
        ctx->pc = 0x17B450u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B454u;
        goto label_17b454;
    }
    ctx->pc = 0x17B44Cu;
    {
        const bool branch_taken_0x17b44c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x17B450u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b44c) {
            ctx->pc = 0x17B45Cu;
            goto label_17b45c;
        }
    }
    ctx->pc = 0x17B454u;
label_17b454:
    // 0x17b454: 0x10000075
label_17b458:
    if (ctx->pc == 0x17B458u) {
        ctx->pc = 0x17B458u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B45Cu;
        goto label_17b45c;
    }
    ctx->pc = 0x17B454u;
    {
        const bool branch_taken_0x17b454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B458u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b454) {
            ctx->pc = 0x17B62Cu;
            goto label_17b62c;
        }
    }
    ctx->pc = 0x17B45Cu;
label_17b45c:
    // 0x17b45c: 0x282d
    ctx->pc = 0x17b45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b460:
    // 0x17b460: 0x24060054
    ctx->pc = 0x17b460u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 84));
label_17b464:
    // 0x17b464: 0xc050cfe
label_17b468:
    if (ctx->pc == 0x17B468u) {
        ctx->pc = 0x17B468u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B46Cu;
        goto label_17b46c;
    }
    ctx->pc = 0x17B464u;
    SET_GPR_U32(ctx, 31, 0x17B46Cu);
    ctx->pc = 0x17B468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B46Cu; }
        else if (ctx->pc != 0x17B46Cu) { ctx->pc = 0x17B46Cu; }
    }
    if (ctx->pc != 0x17B46Cu) { return; }
    ctx->pc = 0x17B46Cu;
label_17b46c:
    // 0x17b46c: 0x1a60000f
label_17b470:
    if (ctx->pc == 0x17B470u) {
        ctx->pc = 0x17B470u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x17B474u;
        goto label_17b474;
    }
    ctx->pc = 0x17B46Cu;
    {
        const bool branch_taken_0x17b46c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17B470u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
        if (branch_taken_0x17b46c) {
            ctx->pc = 0x17B4ACu;
            goto label_17b4ac;
        }
    }
    ctx->pc = 0x17B474u;
label_17b474:
    // 0x17b474: 0x26920008
    ctx->pc = 0x17b474u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 8));
label_17b478:
    // 0x17b478: 0x27b00010
    ctx->pc = 0x17b478u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
label_17b47c:
    // 0x17b47c: 0x0
    ctx->pc = 0x17b47cu;
    // NOP
label_17b480:
    // 0x17b480: 0xc05ebea
label_17b484:
    if (ctx->pc == 0x17B484u) {
        ctx->pc = 0x17B488u;
        goto label_17b488;
    }
    ctx->pc = 0x17B480u;
    SET_GPR_U32(ctx, 31, 0x17B488u);
    ctx->pc = 0x17AFA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2rna_get_psj_0x17afa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B488u; }
        else if (ctx->pc != 0x17B488u) { ctx->pc = 0x17B488u; }
    }
    if (ctx->pc != 0x17B488u) { return; }
    ctx->pc = 0x17B488u;
label_17b488:
    // 0x17b488: 0x111880
    ctx->pc = 0x17b488u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_17b48c:
    // 0x17b48c: 0x2431821
    ctx->pc = 0x17b48cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_17b490:
    // 0x17b490: 0x26310001
    ctx->pc = 0x17b490u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_17b494:
    // 0x17b494: 0xac620000
    ctx->pc = 0x17b494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17b498:
    // 0x17b498: 0x233102a
    ctx->pc = 0x17b498u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
label_17b49c:
    // 0x17b49c: 0x1440fff8
label_17b4a0:
    if (ctx->pc == 0x17B4A0u) {
        ctx->pc = 0x17B4A4u;
        goto label_17b4a4;
    }
    ctx->pc = 0x17B49Cu;
    {
        const bool branch_taken_0x17b49c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17b49c) {
            ctx->pc = 0x17B480u;
            goto label_17b480;
        }
    }
    ctx->pc = 0x17B4A4u;
label_17b4a4:
    // 0x17b4a4: 0x10000003
label_17b4a8:
    if (ctx->pc == 0x17B4A8u) {
        ctx->pc = 0x17B4A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x17B4ACu;
        goto label_17b4ac;
    }
    ctx->pc = 0x17B4A4u;
    {
        const bool branch_taken_0x17b4a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B4A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        if (branch_taken_0x17b4a4) {
            ctx->pc = 0x17B4B4u;
            goto label_17b4b4;
        }
    }
    ctx->pc = 0x17B4ACu;
label_17b4ac:
    // 0x17b4ac: 0x27b00010
    ctx->pc = 0x17b4acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
label_17b4b0:
    // 0x17b4b0: 0xafb30000
    ctx->pc = 0x17b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_17b4b4:
    // 0x17b4b4: 0x882d
    ctx->pc = 0x17b4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b4b8:
    // 0x17b4b8: 0x1a60000e
label_17b4bc:
    if (ctx->pc == 0x17B4BCu) {
        ctx->pc = 0x17B4BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17B4C0u;
        goto label_17b4c0;
    }
    ctx->pc = 0x17B4B8u;
    {
        const bool branch_taken_0x17b4b8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17B4BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x17b4b8) {
            ctx->pc = 0x17B4F4u;
            goto label_17b4f4;
        }
    }
    ctx->pc = 0x17B4C0u;
label_17b4c0:
    // 0x17b4c0: 0x26920008
    ctx->pc = 0x17b4c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 8));
label_17b4c4:
    // 0x17b4c4: 0x0
    ctx->pc = 0x17b4c4u;
    // NOP
label_17b4c8:
    // 0x17b4c8: 0x111080
    ctx->pc = 0x17b4c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_17b4cc:
    // 0x17b4cc: 0x26230002
    ctx->pc = 0x17b4ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 2));
label_17b4d0:
    // 0x17b4d0: 0x2421021
    ctx->pc = 0x17b4d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_17b4d4:
    // 0x17b4d4: 0x31880
    ctx->pc = 0x17b4d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_17b4d8:
    // 0x17b4d8: 0x8c440000
    ctx->pc = 0x17b4d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17b4dc:
    // 0x17b4dc: 0x3a32821
    ctx->pc = 0x17b4dcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_17b4e0:
    // 0x17b4e0: 0x26310001
    ctx->pc = 0x17b4e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_17b4e4:
    // 0x17b4e4: 0x8c820004
    ctx->pc = 0x17b4e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17b4e8:
    // 0x17b4e8: 0x233182a
    ctx->pc = 0x17b4e8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
label_17b4ec:
    // 0x17b4ec: 0x1460fff6
label_17b4f0:
    if (ctx->pc == 0x17B4F0u) {
        ctx->pc = 0x17B4F0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x17B4F4u;
        goto label_17b4f4;
    }
    ctx->pc = 0x17B4ECu;
    {
        const bool branch_taken_0x17b4ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B4F0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x17b4ec) {
            ctx->pc = 0x17B4C8u;
            goto label_17b4c8;
        }
    }
    ctx->pc = 0x17B4F4u;
label_17b4f4:
    // 0x17b4f4: 0x200382d
    ctx->pc = 0x17b4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b4f8:
    // 0x17b4f8: 0x24040008
    ctx->pc = 0x17b4f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_17b4fc:
    // 0x17b4fc: 0x3a0282d
    ctx->pc = 0x17b4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17b500:
    // 0x17b500: 0x24060004
    ctx->pc = 0x17b500u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_17b504:
    // 0x17b504: 0xc05dcd2
label_17b508:
    if (ctx->pc == 0x17B508u) {
        ctx->pc = 0x17B508u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17B50Cu;
        goto label_17b50c;
    }
    ctx->pc = 0x17B504u;
    SET_GPR_U32(ctx, 31, 0x17B50Cu);
    ctx->pc = 0x17B508u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B50Cu; }
        else if (ctx->pc != 0x17B50Cu) { ctx->pc = 0x17B50Cu; }
    }
    if (ctx->pc != 0x17B50Cu) { return; }
    ctx->pc = 0x17B50Cu;
label_17b50c:
    // 0x17b50c: 0x14400006
label_17b510:
    if (ctx->pc == 0x17B510u) {
        ctx->pc = 0x17B510u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x17B514u;
        goto label_17b514;
    }
    ctx->pc = 0x17B50Cu;
    {
        const bool branch_taken_0x17b50c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B510u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x17b50c) {
            ctx->pc = 0x17B528u;
            goto label_17b528;
        }
    }
    ctx->pc = 0x17B514u;
label_17b514:
    // 0x17b514: 0x3c04002c
    ctx->pc = 0x17b514u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17b518:
    // 0x17b518: 0xc05114a
label_17b51c:
    if (ctx->pc == 0x17B51Cu) {
        ctx->pc = 0x17B51Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950216));
        ctx->pc = 0x17B520u;
        goto label_17b520;
    }
    ctx->pc = 0x17B518u;
    SET_GPR_U32(ctx, 31, 0x17B520u);
    ctx->pc = 0x17B51Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950216));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B520u; }
        else if (ctx->pc != 0x17B520u) { ctx->pc = 0x17B520u; }
    }
    if (ctx->pc != 0x17B520u) { return; }
    ctx->pc = 0x17B520u;
label_17b520:
    // 0x17b520: 0x10000042
label_17b524:
    if (ctx->pc == 0x17B524u) {
        ctx->pc = 0x17B524u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B528u;
        goto label_17b528;
    }
    ctx->pc = 0x17B520u;
    {
        const bool branch_taken_0x17b520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B524u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b520) {
            ctx->pc = 0x17B62Cu;
            goto label_17b62c;
        }
    }
    ctx->pc = 0x17B528u;
label_17b528:
    // 0x17b528: 0x1a60000f
label_17b52c:
    if (ctx->pc == 0x17B52Cu) {
        ctx->pc = 0x17B52Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B530u;
        goto label_17b530;
    }
    ctx->pc = 0x17B528u;
    {
        const bool branch_taken_0x17b528 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17B52Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b528) {
            ctx->pc = 0x17B568u;
            goto label_17b568;
        }
    }
    ctx->pc = 0x17B530u;
label_17b530:
    // 0x17b530: 0x26920008
    ctx->pc = 0x17b530u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 8));
label_17b534:
    // 0x17b534: 0x26950010
    ctx->pc = 0x17b534u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 16));
label_17b538:
    // 0x17b538: 0x118080
    ctx->pc = 0x17b538u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
label_17b53c:
    // 0x17b53c: 0x2501021
    ctx->pc = 0x17b53cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_17b540:
    // 0x17b540: 0x2161821
    ctx->pc = 0x17b540u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_17b544:
    // 0x17b544: 0x8c460000
    ctx->pc = 0x17b544u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17b548:
    // 0x17b548: 0x26310001
    ctx->pc = 0x17b548u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_17b54c:
    // 0x17b54c: 0x8c640000
    ctx->pc = 0x17b54cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17b550:
    // 0x17b550: 0xc05da9a
label_17b554:
    if (ctx->pc == 0x17B554u) {
        ctx->pc = 0x17B554u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->pc = 0x17B558u;
        goto label_17b558;
    }
    ctx->pc = 0x17B550u;
    SET_GPR_U32(ctx, 31, 0x17B558u);
    ctx->pc = 0x17B554u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->pc = 0x176A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTR_Create_0x176a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B558u; }
        else if (ctx->pc != 0x17B558u) { ctx->pc = 0x17B558u; }
    }
    if (ctx->pc != 0x17B558u) { return; }
    ctx->pc = 0x17B558u;
label_17b558:
    // 0x17b558: 0x2b08021
    ctx->pc = 0x17b558u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_17b55c:
    // 0x17b55c: 0x233182a
    ctx->pc = 0x17b55cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
label_17b560:
    // 0x17b560: 0x1460fff5
label_17b564:
    if (ctx->pc == 0x17B564u) {
        ctx->pc = 0x17B564u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x17B568u;
        goto label_17b568;
    }
    ctx->pc = 0x17B560u;
    {
        const bool branch_taken_0x17b560 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B564u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x17b560) {
            ctx->pc = 0x17B538u;
            goto label_17b538;
        }
    }
    ctx->pc = 0x17B568u;
label_17b568:
    // 0x17b568: 0x1a60000b
label_17b56c:
    if (ctx->pc == 0x17B56Cu) {
        ctx->pc = 0x17B56Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B570u;
        goto label_17b570;
    }
    ctx->pc = 0x17B568u;
    {
        const bool branch_taken_0x17b568 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17B56Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b568) {
            ctx->pc = 0x17B598u;
            goto label_17b598;
        }
    }
    ctx->pc = 0x17B570u;
label_17b570:
    // 0x17b570: 0x26850018
    ctx->pc = 0x17b570u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 24));
label_17b574:
    // 0x17b574: 0x0
    ctx->pc = 0x17b574u;
    // NOP
label_17b578:
    // 0x17b578: 0x111080
    ctx->pc = 0x17b578u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_17b57c:
    // 0x17b57c: 0x561821
    ctx->pc = 0x17b57cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_17b580:
    // 0x17b580: 0x26310001
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_17b584:
    // 0x17b584: 0x8c640000
    ctx->pc = 0x17b584u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17b588:
    // 0x17b588: 0xa21021
    ctx->pc = 0x17b588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_17b58c:
    // 0x17b58c: 0x233182a
    ctx->pc = 0x17b58cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
label_17b590:
    // 0x17b590: 0x1460fff9
label_17b594:
    if (ctx->pc == 0x17B594u) {
        ctx->pc = 0x17B594u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x17B598u;
        goto label_17b598;
    }
    ctx->pc = 0x17B590u;
    {
        const bool branch_taken_0x17b590 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B594u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x17b590) {
            ctx->pc = 0x17B578u;
            goto label_17b578;
        }
    }
    ctx->pc = 0x17B598u;
label_17b598:
    // 0x17b598: 0xa2800024
    ctx->pc = 0x17b598u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 36), (uint8_t)GPR_U32(ctx, 0));
label_17b59c:
    // 0x17b59c: 0x882d
    ctx->pc = 0x17b59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b5a0:
    // 0x17b5a0: 0xa2800025
    ctx->pc = 0x17b5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 37), (uint8_t)GPR_U32(ctx, 0));
label_17b5a4:
    // 0x17b5a4: 0xa2930026
    ctx->pc = 0x17b5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 38), (uint8_t)GPR_U32(ctx, 19));
label_17b5a8:
    // 0x17b5a8: 0xa2930027
    ctx->pc = 0x17b5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 39), (uint8_t)GPR_U32(ctx, 19));
label_17b5ac:
    // 0x17b5ac: 0xae800030
    ctx->pc = 0x17b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
label_17b5b0:
    // 0x17b5b0: 0x1a60000b
label_17b5b4:
    if (ctx->pc == 0x17B5B4u) {
        ctx->pc = 0x17B5B4u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x17B5B8u;
        goto label_17b5b8;
    }
    ctx->pc = 0x17B5B0u;
    {
        const bool branch_taken_0x17b5b0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17B5B4u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
        if (branch_taken_0x17b5b0) {
            ctx->pc = 0x17B5E0u;
            goto label_17b5e0;
        }
    }
    ctx->pc = 0x17B5B8u;
label_17b5b8:
    // 0x17b5b8: 0x26850038
    ctx->pc = 0x17b5b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 56));
label_17b5bc:
    // 0x17b5bc: 0x26840040
    ctx->pc = 0x17b5bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 64));
label_17b5c0:
    // 0x17b5c0: 0x111080
    ctx->pc = 0x17b5c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_17b5c4:
    // 0x17b5c4: 0xa21821
    ctx->pc = 0x17b5c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_17b5c8:
    // 0x17b5c8: 0x26310001
    ctx->pc = 0x17b5c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_17b5cc:
    // 0x17b5cc: 0xac600000
    ctx->pc = 0x17b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_17b5d0:
    // 0x17b5d0: 0x821021
    ctx->pc = 0x17b5d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_17b5d4:
    // 0x17b5d4: 0x233182a
    ctx->pc = 0x17b5d4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
label_17b5d8:
    // 0x17b5d8: 0x1460fff9
label_17b5dc:
    if (ctx->pc == 0x17B5DCu) {
        ctx->pc = 0x17B5DCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x17B5E0u;
        goto label_17b5e0;
    }
    ctx->pc = 0x17B5D8u;
    {
        const bool branch_taken_0x17b5d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B5DCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x17b5d8) {
            ctx->pc = 0x17B5C0u;
            goto label_17b5c0;
        }
    }
    ctx->pc = 0x17B5E0u;
label_17b5e0:
    // 0x17b5e0: 0x24110001
    ctx->pc = 0x17b5e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_17b5e4:
    // 0x17b5e4: 0xa2800048
    ctx->pc = 0x17b5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 72), (uint8_t)GPR_U32(ctx, 0));
label_17b5e8:
    // 0x17b5e8: 0xa2910049
    ctx->pc = 0x17b5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 73), (uint8_t)GPR_U32(ctx, 17));
label_17b5ec:
    // 0x17b5ec: 0xae80004c
    ctx->pc = 0x17b5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_17b5f0:
    // 0x17b5f0: 0x8ec40000
    ctx->pc = 0x17b5f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_17b5f4:
    // 0x17b5f4: 0x8c830000
    ctx->pc = 0x17b5f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b5f8:
    // 0x17b5f8: 0x8c620024
    ctx->pc = 0x17b5f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17b5fc:
    // 0x17b5fc: 0x40f809
label_17b600:
    if (ctx->pc == 0x17B600u) {
        ctx->pc = 0x17B600u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17B604u;
        goto label_17b604;
    }
    ctx->pc = 0x17B5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B604u);
        ctx->pc = 0x17B600u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B3E0u: goto label_17b3e0;
            case 0x17B3E4u: goto label_17b3e4;
            case 0x17B3E8u: goto label_17b3e8;
            case 0x17B3ECu: goto label_17b3ec;
            case 0x17B3F0u: goto label_17b3f0;
            case 0x17B3F4u: goto label_17b3f4;
            case 0x17B3F8u: goto label_17b3f8;
            case 0x17B3FCu: goto label_17b3fc;
            case 0x17B400u: goto label_17b400;
            case 0x17B404u: goto label_17b404;
            case 0x17B408u: goto label_17b408;
            case 0x17B40Cu: goto label_17b40c;
            case 0x17B410u: goto label_17b410;
            case 0x17B414u: goto label_17b414;
            case 0x17B418u: goto label_17b418;
            case 0x17B41Cu: goto label_17b41c;
            case 0x17B420u: goto label_17b420;
            case 0x17B424u: goto label_17b424;
            case 0x17B428u: goto label_17b428;
            case 0x17B42Cu: goto label_17b42c;
            case 0x17B430u: goto label_17b430;
            case 0x17B434u: goto label_17b434;
            case 0x17B438u: goto label_17b438;
            case 0x17B43Cu: goto label_17b43c;
            case 0x17B440u: goto label_17b440;
            case 0x17B444u: goto label_17b444;
            case 0x17B448u: goto label_17b448;
            case 0x17B44Cu: goto label_17b44c;
            case 0x17B450u: goto label_17b450;
            case 0x17B454u: goto label_17b454;
            case 0x17B458u: goto label_17b458;
            case 0x17B45Cu: goto label_17b45c;
            case 0x17B460u: goto label_17b460;
            case 0x17B464u: goto label_17b464;
            case 0x17B468u: goto label_17b468;
            case 0x17B46Cu: goto label_17b46c;
            case 0x17B470u: goto label_17b470;
            case 0x17B474u: goto label_17b474;
            case 0x17B478u: goto label_17b478;
            case 0x17B47Cu: goto label_17b47c;
            case 0x17B480u: goto label_17b480;
            case 0x17B484u: goto label_17b484;
            case 0x17B488u: goto label_17b488;
            case 0x17B48Cu: goto label_17b48c;
            case 0x17B490u: goto label_17b490;
            case 0x17B494u: goto label_17b494;
            case 0x17B498u: goto label_17b498;
            case 0x17B49Cu: goto label_17b49c;
            case 0x17B4A0u: goto label_17b4a0;
            case 0x17B4A4u: goto label_17b4a4;
            case 0x17B4A8u: goto label_17b4a8;
            case 0x17B4ACu: goto label_17b4ac;
            case 0x17B4B0u: goto label_17b4b0;
            case 0x17B4B4u: goto label_17b4b4;
            case 0x17B4B8u: goto label_17b4b8;
            case 0x17B4BCu: goto label_17b4bc;
            case 0x17B4C0u: goto label_17b4c0;
            case 0x17B4C4u: goto label_17b4c4;
            case 0x17B4C8u: goto label_17b4c8;
            case 0x17B4CCu: goto label_17b4cc;
            case 0x17B4D0u: goto label_17b4d0;
            case 0x17B4D4u: goto label_17b4d4;
            case 0x17B4D8u: goto label_17b4d8;
            case 0x17B4DCu: goto label_17b4dc;
            case 0x17B4E0u: goto label_17b4e0;
            case 0x17B4E4u: goto label_17b4e4;
            case 0x17B4E8u: goto label_17b4e8;
            case 0x17B4ECu: goto label_17b4ec;
            case 0x17B4F0u: goto label_17b4f0;
            case 0x17B4F4u: goto label_17b4f4;
            case 0x17B4F8u: goto label_17b4f8;
            case 0x17B4FCu: goto label_17b4fc;
            case 0x17B500u: goto label_17b500;
            case 0x17B504u: goto label_17b504;
            case 0x17B508u: goto label_17b508;
            case 0x17B50Cu: goto label_17b50c;
            case 0x17B510u: goto label_17b510;
            case 0x17B514u: goto label_17b514;
            case 0x17B518u: goto label_17b518;
            case 0x17B51Cu: goto label_17b51c;
            case 0x17B520u: goto label_17b520;
            case 0x17B524u: goto label_17b524;
            case 0x17B528u: goto label_17b528;
            case 0x17B52Cu: goto label_17b52c;
            case 0x17B530u: goto label_17b530;
            case 0x17B534u: goto label_17b534;
            case 0x17B538u: goto label_17b538;
            case 0x17B53Cu: goto label_17b53c;
            case 0x17B540u: goto label_17b540;
            case 0x17B544u: goto label_17b544;
            case 0x17B548u: goto label_17b548;
            case 0x17B54Cu: goto label_17b54c;
            case 0x17B550u: goto label_17b550;
            case 0x17B554u: goto label_17b554;
            case 0x17B558u: goto label_17b558;
            case 0x17B55Cu: goto label_17b55c;
            case 0x17B560u: goto label_17b560;
            case 0x17B564u: goto label_17b564;
            case 0x17B568u: goto label_17b568;
            case 0x17B56Cu: goto label_17b56c;
            case 0x17B570u: goto label_17b570;
            case 0x17B574u: goto label_17b574;
            case 0x17B578u: goto label_17b578;
            case 0x17B57Cu: goto label_17b57c;
            case 0x17B580u: goto label_17b580;
            case 0x17B584u: goto label_17b584;
            case 0x17B588u: goto label_17b588;
            case 0x17B58Cu: goto label_17b58c;
            case 0x17B590u: goto label_17b590;
            case 0x17B594u: goto label_17b594;
            case 0x17B598u: goto label_17b598;
            case 0x17B59Cu: goto label_17b59c;
            case 0x17B5A0u: goto label_17b5a0;
            case 0x17B5A4u: goto label_17b5a4;
            case 0x17B5A8u: goto label_17b5a8;
            case 0x17B5ACu: goto label_17b5ac;
            case 0x17B5B0u: goto label_17b5b0;
            case 0x17B5B4u: goto label_17b5b4;
            case 0x17B5B8u: goto label_17b5b8;
            case 0x17B5BCu: goto label_17b5bc;
            case 0x17B5C0u: goto label_17b5c0;
            case 0x17B5C4u: goto label_17b5c4;
            case 0x17B5C8u: goto label_17b5c8;
            case 0x17B5CCu: goto label_17b5cc;
            case 0x17B5D0u: goto label_17b5d0;
            case 0x17B5D4u: goto label_17b5d4;
            case 0x17B5D8u: goto label_17b5d8;
            case 0x17B5DCu: goto label_17b5dc;
            case 0x17B5E0u: goto label_17b5e0;
            case 0x17B5E4u: goto label_17b5e4;
            case 0x17B5E8u: goto label_17b5e8;
            case 0x17B5ECu: goto label_17b5ec;
            case 0x17B5F0u: goto label_17b5f0;
            case 0x17B5F4u: goto label_17b5f4;
            case 0x17B5F8u: goto label_17b5f8;
            case 0x17B5FCu: goto label_17b5fc;
            case 0x17B600u: goto label_17b600;
            case 0x17B604u: goto label_17b604;
            case 0x17B608u: goto label_17b608;
            case 0x17B60Cu: goto label_17b60c;
            case 0x17B610u: goto label_17b610;
            case 0x17B614u: goto label_17b614;
            case 0x17B618u: goto label_17b618;
            case 0x17B61Cu: goto label_17b61c;
            case 0x17B620u: goto label_17b620;
            case 0x17B624u: goto label_17b624;
            case 0x17B628u: goto label_17b628;
            case 0x17B62Cu: goto label_17b62c;
            case 0x17B630u: goto label_17b630;
            case 0x17B634u: goto label_17b634;
            case 0x17B638u: goto label_17b638;
            case 0x17B63Cu: goto label_17b63c;
            case 0x17B640u: goto label_17b640;
            case 0x17B644u: goto label_17b644;
            case 0x17B648u: goto label_17b648;
            case 0x17B64Cu: goto label_17b64c;
            case 0x17B650u: goto label_17b650;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17B604u; }
            if (ctx->pc != 0x17B604u) { return; }
        }
    }
    ctx->pc = 0x17B604u;
label_17b604:
    // 0x17b604: 0x8ec40000
    ctx->pc = 0x17b604u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_17b608:
    // 0x17b608: 0x40802d
    ctx->pc = 0x17b608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b60c:
    // 0x17b60c: 0x8c830000
    ctx->pc = 0x17b60cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b610:
    // 0x17b610: 0x8c620024
    ctx->pc = 0x17b610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17b614:
    // 0x17b614: 0x40f809
label_17b618:
    if (ctx->pc == 0x17B618u) {
        ctx->pc = 0x17B618u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B61Cu;
        goto label_17b61c;
    }
    ctx->pc = 0x17B614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B61Cu);
        ctx->pc = 0x17B618u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B3E0u: goto label_17b3e0;
            case 0x17B3E4u: goto label_17b3e4;
            case 0x17B3E8u: goto label_17b3e8;
            case 0x17B3ECu: goto label_17b3ec;
            case 0x17B3F0u: goto label_17b3f0;
            case 0x17B3F4u: goto label_17b3f4;
            case 0x17B3F8u: goto label_17b3f8;
            case 0x17B3FCu: goto label_17b3fc;
            case 0x17B400u: goto label_17b400;
            case 0x17B404u: goto label_17b404;
            case 0x17B408u: goto label_17b408;
            case 0x17B40Cu: goto label_17b40c;
            case 0x17B410u: goto label_17b410;
            case 0x17B414u: goto label_17b414;
            case 0x17B418u: goto label_17b418;
            case 0x17B41Cu: goto label_17b41c;
            case 0x17B420u: goto label_17b420;
            case 0x17B424u: goto label_17b424;
            case 0x17B428u: goto label_17b428;
            case 0x17B42Cu: goto label_17b42c;
            case 0x17B430u: goto label_17b430;
            case 0x17B434u: goto label_17b434;
            case 0x17B438u: goto label_17b438;
            case 0x17B43Cu: goto label_17b43c;
            case 0x17B440u: goto label_17b440;
            case 0x17B444u: goto label_17b444;
            case 0x17B448u: goto label_17b448;
            case 0x17B44Cu: goto label_17b44c;
            case 0x17B450u: goto label_17b450;
            case 0x17B454u: goto label_17b454;
            case 0x17B458u: goto label_17b458;
            case 0x17B45Cu: goto label_17b45c;
            case 0x17B460u: goto label_17b460;
            case 0x17B464u: goto label_17b464;
            case 0x17B468u: goto label_17b468;
            case 0x17B46Cu: goto label_17b46c;
            case 0x17B470u: goto label_17b470;
            case 0x17B474u: goto label_17b474;
            case 0x17B478u: goto label_17b478;
            case 0x17B47Cu: goto label_17b47c;
            case 0x17B480u: goto label_17b480;
            case 0x17B484u: goto label_17b484;
            case 0x17B488u: goto label_17b488;
            case 0x17B48Cu: goto label_17b48c;
            case 0x17B490u: goto label_17b490;
            case 0x17B494u: goto label_17b494;
            case 0x17B498u: goto label_17b498;
            case 0x17B49Cu: goto label_17b49c;
            case 0x17B4A0u: goto label_17b4a0;
            case 0x17B4A4u: goto label_17b4a4;
            case 0x17B4A8u: goto label_17b4a8;
            case 0x17B4ACu: goto label_17b4ac;
            case 0x17B4B0u: goto label_17b4b0;
            case 0x17B4B4u: goto label_17b4b4;
            case 0x17B4B8u: goto label_17b4b8;
            case 0x17B4BCu: goto label_17b4bc;
            case 0x17B4C0u: goto label_17b4c0;
            case 0x17B4C4u: goto label_17b4c4;
            case 0x17B4C8u: goto label_17b4c8;
            case 0x17B4CCu: goto label_17b4cc;
            case 0x17B4D0u: goto label_17b4d0;
            case 0x17B4D4u: goto label_17b4d4;
            case 0x17B4D8u: goto label_17b4d8;
            case 0x17B4DCu: goto label_17b4dc;
            case 0x17B4E0u: goto label_17b4e0;
            case 0x17B4E4u: goto label_17b4e4;
            case 0x17B4E8u: goto label_17b4e8;
            case 0x17B4ECu: goto label_17b4ec;
            case 0x17B4F0u: goto label_17b4f0;
            case 0x17B4F4u: goto label_17b4f4;
            case 0x17B4F8u: goto label_17b4f8;
            case 0x17B4FCu: goto label_17b4fc;
            case 0x17B500u: goto label_17b500;
            case 0x17B504u: goto label_17b504;
            case 0x17B508u: goto label_17b508;
            case 0x17B50Cu: goto label_17b50c;
            case 0x17B510u: goto label_17b510;
            case 0x17B514u: goto label_17b514;
            case 0x17B518u: goto label_17b518;
            case 0x17B51Cu: goto label_17b51c;
            case 0x17B520u: goto label_17b520;
            case 0x17B524u: goto label_17b524;
            case 0x17B528u: goto label_17b528;
            case 0x17B52Cu: goto label_17b52c;
            case 0x17B530u: goto label_17b530;
            case 0x17B534u: goto label_17b534;
            case 0x17B538u: goto label_17b538;
            case 0x17B53Cu: goto label_17b53c;
            case 0x17B540u: goto label_17b540;
            case 0x17B544u: goto label_17b544;
            case 0x17B548u: goto label_17b548;
            case 0x17B54Cu: goto label_17b54c;
            case 0x17B550u: goto label_17b550;
            case 0x17B554u: goto label_17b554;
            case 0x17B558u: goto label_17b558;
            case 0x17B55Cu: goto label_17b55c;
            case 0x17B560u: goto label_17b560;
            case 0x17B564u: goto label_17b564;
            case 0x17B568u: goto label_17b568;
            case 0x17B56Cu: goto label_17b56c;
            case 0x17B570u: goto label_17b570;
            case 0x17B574u: goto label_17b574;
            case 0x17B578u: goto label_17b578;
            case 0x17B57Cu: goto label_17b57c;
            case 0x17B580u: goto label_17b580;
            case 0x17B584u: goto label_17b584;
            case 0x17B588u: goto label_17b588;
            case 0x17B58Cu: goto label_17b58c;
            case 0x17B590u: goto label_17b590;
            case 0x17B594u: goto label_17b594;
            case 0x17B598u: goto label_17b598;
            case 0x17B59Cu: goto label_17b59c;
            case 0x17B5A0u: goto label_17b5a0;
            case 0x17B5A4u: goto label_17b5a4;
            case 0x17B5A8u: goto label_17b5a8;
            case 0x17B5ACu: goto label_17b5ac;
            case 0x17B5B0u: goto label_17b5b0;
            case 0x17B5B4u: goto label_17b5b4;
            case 0x17B5B8u: goto label_17b5b8;
            case 0x17B5BCu: goto label_17b5bc;
            case 0x17B5C0u: goto label_17b5c0;
            case 0x17B5C4u: goto label_17b5c4;
            case 0x17B5C8u: goto label_17b5c8;
            case 0x17B5CCu: goto label_17b5cc;
            case 0x17B5D0u: goto label_17b5d0;
            case 0x17B5D4u: goto label_17b5d4;
            case 0x17B5D8u: goto label_17b5d8;
            case 0x17B5DCu: goto label_17b5dc;
            case 0x17B5E0u: goto label_17b5e0;
            case 0x17B5E4u: goto label_17b5e4;
            case 0x17B5E8u: goto label_17b5e8;
            case 0x17B5ECu: goto label_17b5ec;
            case 0x17B5F0u: goto label_17b5f0;
            case 0x17B5F4u: goto label_17b5f4;
            case 0x17B5F8u: goto label_17b5f8;
            case 0x17B5FCu: goto label_17b5fc;
            case 0x17B600u: goto label_17b600;
            case 0x17B604u: goto label_17b604;
            case 0x17B608u: goto label_17b608;
            case 0x17B60Cu: goto label_17b60c;
            case 0x17B610u: goto label_17b610;
            case 0x17B614u: goto label_17b614;
            case 0x17B618u: goto label_17b618;
            case 0x17B61Cu: goto label_17b61c;
            case 0x17B620u: goto label_17b620;
            case 0x17B624u: goto label_17b624;
            case 0x17B628u: goto label_17b628;
            case 0x17B62Cu: goto label_17b62c;
            case 0x17B630u: goto label_17b630;
            case 0x17B634u: goto label_17b634;
            case 0x17B638u: goto label_17b638;
            case 0x17B63Cu: goto label_17b63c;
            case 0x17B640u: goto label_17b640;
            case 0x17B644u: goto label_17b644;
            case 0x17B648u: goto label_17b648;
            case 0x17B64Cu: goto label_17b64c;
            case 0x17B650u: goto label_17b650;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17B61Cu; }
            if (ctx->pc != 0x17B61Cu) { return; }
        }
    }
    ctx->pc = 0x17B61Cu;
label_17b61c:
    // 0x17b61c: 0x2028021
    ctx->pc = 0x17b61cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17b620:
    // 0x17b620: 0xa2910000
    ctx->pc = 0x17b620u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 17));
label_17b624:
    // 0x17b624: 0xae900050
    ctx->pc = 0x17b624u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 16));
label_17b628:
    // 0x17b628: 0x280102d
    ctx->pc = 0x17b628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17b62c:
    // 0x17b62c: 0xdfbf0090
    ctx->pc = 0x17b62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17b630:
    // 0x17b630: 0xdfb60080
    ctx->pc = 0x17b630u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17b634:
    // 0x17b634: 0xdfb50070
    ctx->pc = 0x17b634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17b638:
    // 0x17b638: 0xdfb40060
    ctx->pc = 0x17b638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17b63c:
    // 0x17b63c: 0xdfb30050
    ctx->pc = 0x17b63cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17b640:
    // 0x17b640: 0xdfb20040
    ctx->pc = 0x17b640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17b644:
    // 0x17b644: 0xdfb10030
    ctx->pc = 0x17b644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17b648:
    // 0x17b648: 0xdfb00020
    ctx->pc = 0x17b648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17b64c:
    // 0x17b64c: 0x3e00008
label_17b650:
    if (ctx->pc == 0x17B650u) {
        ctx->pc = 0x17B650u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x17B654u;
        goto label_fallthrough_0x17b64c;
    }
    ctx->pc = 0x17B64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B650u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B3E0u: goto label_17b3e0;
            case 0x17B3E4u: goto label_17b3e4;
            case 0x17B3E8u: goto label_17b3e8;
            case 0x17B3ECu: goto label_17b3ec;
            case 0x17B3F0u: goto label_17b3f0;
            case 0x17B3F4u: goto label_17b3f4;
            case 0x17B3F8u: goto label_17b3f8;
            case 0x17B3FCu: goto label_17b3fc;
            case 0x17B400u: goto label_17b400;
            case 0x17B404u: goto label_17b404;
            case 0x17B408u: goto label_17b408;
            case 0x17B40Cu: goto label_17b40c;
            case 0x17B410u: goto label_17b410;
            case 0x17B414u: goto label_17b414;
            case 0x17B418u: goto label_17b418;
            case 0x17B41Cu: goto label_17b41c;
            case 0x17B420u: goto label_17b420;
            case 0x17B424u: goto label_17b424;
            case 0x17B428u: goto label_17b428;
            case 0x17B42Cu: goto label_17b42c;
            case 0x17B430u: goto label_17b430;
            case 0x17B434u: goto label_17b434;
            case 0x17B438u: goto label_17b438;
            case 0x17B43Cu: goto label_17b43c;
            case 0x17B440u: goto label_17b440;
            case 0x17B444u: goto label_17b444;
            case 0x17B448u: goto label_17b448;
            case 0x17B44Cu: goto label_17b44c;
            case 0x17B450u: goto label_17b450;
            case 0x17B454u: goto label_17b454;
            case 0x17B458u: goto label_17b458;
            case 0x17B45Cu: goto label_17b45c;
            case 0x17B460u: goto label_17b460;
            case 0x17B464u: goto label_17b464;
            case 0x17B468u: goto label_17b468;
            case 0x17B46Cu: goto label_17b46c;
            case 0x17B470u: goto label_17b470;
            case 0x17B474u: goto label_17b474;
            case 0x17B478u: goto label_17b478;
            case 0x17B47Cu: goto label_17b47c;
            case 0x17B480u: goto label_17b480;
            case 0x17B484u: goto label_17b484;
            case 0x17B488u: goto label_17b488;
            case 0x17B48Cu: goto label_17b48c;
            case 0x17B490u: goto label_17b490;
            case 0x17B494u: goto label_17b494;
            case 0x17B498u: goto label_17b498;
            case 0x17B49Cu: goto label_17b49c;
            case 0x17B4A0u: goto label_17b4a0;
            case 0x17B4A4u: goto label_17b4a4;
            case 0x17B4A8u: goto label_17b4a8;
            case 0x17B4ACu: goto label_17b4ac;
            case 0x17B4B0u: goto label_17b4b0;
            case 0x17B4B4u: goto label_17b4b4;
            case 0x17B4B8u: goto label_17b4b8;
            case 0x17B4BCu: goto label_17b4bc;
            case 0x17B4C0u: goto label_17b4c0;
            case 0x17B4C4u: goto label_17b4c4;
            case 0x17B4C8u: goto label_17b4c8;
            case 0x17B4CCu: goto label_17b4cc;
            case 0x17B4D0u: goto label_17b4d0;
            case 0x17B4D4u: goto label_17b4d4;
            case 0x17B4D8u: goto label_17b4d8;
            case 0x17B4DCu: goto label_17b4dc;
            case 0x17B4E0u: goto label_17b4e0;
            case 0x17B4E4u: goto label_17b4e4;
            case 0x17B4E8u: goto label_17b4e8;
            case 0x17B4ECu: goto label_17b4ec;
            case 0x17B4F0u: goto label_17b4f0;
            case 0x17B4F4u: goto label_17b4f4;
            case 0x17B4F8u: goto label_17b4f8;
            case 0x17B4FCu: goto label_17b4fc;
            case 0x17B500u: goto label_17b500;
            case 0x17B504u: goto label_17b504;
            case 0x17B508u: goto label_17b508;
            case 0x17B50Cu: goto label_17b50c;
            case 0x17B510u: goto label_17b510;
            case 0x17B514u: goto label_17b514;
            case 0x17B518u: goto label_17b518;
            case 0x17B51Cu: goto label_17b51c;
            case 0x17B520u: goto label_17b520;
            case 0x17B524u: goto label_17b524;
            case 0x17B528u: goto label_17b528;
            case 0x17B52Cu: goto label_17b52c;
            case 0x17B530u: goto label_17b530;
            case 0x17B534u: goto label_17b534;
            case 0x17B538u: goto label_17b538;
            case 0x17B53Cu: goto label_17b53c;
            case 0x17B540u: goto label_17b540;
            case 0x17B544u: goto label_17b544;
            case 0x17B548u: goto label_17b548;
            case 0x17B54Cu: goto label_17b54c;
            case 0x17B550u: goto label_17b550;
            case 0x17B554u: goto label_17b554;
            case 0x17B558u: goto label_17b558;
            case 0x17B55Cu: goto label_17b55c;
            case 0x17B560u: goto label_17b560;
            case 0x17B564u: goto label_17b564;
            case 0x17B568u: goto label_17b568;
            case 0x17B56Cu: goto label_17b56c;
            case 0x17B570u: goto label_17b570;
            case 0x17B574u: goto label_17b574;
            case 0x17B578u: goto label_17b578;
            case 0x17B57Cu: goto label_17b57c;
            case 0x17B580u: goto label_17b580;
            case 0x17B584u: goto label_17b584;
            case 0x17B588u: goto label_17b588;
            case 0x17B58Cu: goto label_17b58c;
            case 0x17B590u: goto label_17b590;
            case 0x17B594u: goto label_17b594;
            case 0x17B598u: goto label_17b598;
            case 0x17B59Cu: goto label_17b59c;
            case 0x17B5A0u: goto label_17b5a0;
            case 0x17B5A4u: goto label_17b5a4;
            case 0x17B5A8u: goto label_17b5a8;
            case 0x17B5ACu: goto label_17b5ac;
            case 0x17B5B0u: goto label_17b5b0;
            case 0x17B5B4u: goto label_17b5b4;
            case 0x17B5B8u: goto label_17b5b8;
            case 0x17B5BCu: goto label_17b5bc;
            case 0x17B5C0u: goto label_17b5c0;
            case 0x17B5C4u: goto label_17b5c4;
            case 0x17B5C8u: goto label_17b5c8;
            case 0x17B5CCu: goto label_17b5cc;
            case 0x17B5D0u: goto label_17b5d0;
            case 0x17B5D4u: goto label_17b5d4;
            case 0x17B5D8u: goto label_17b5d8;
            case 0x17B5DCu: goto label_17b5dc;
            case 0x17B5E0u: goto label_17b5e0;
            case 0x17B5E4u: goto label_17b5e4;
            case 0x17B5E8u: goto label_17b5e8;
            case 0x17B5ECu: goto label_17b5ec;
            case 0x17B5F0u: goto label_17b5f0;
            case 0x17B5F4u: goto label_17b5f4;
            case 0x17B5F8u: goto label_17b5f8;
            case 0x17B5FCu: goto label_17b5fc;
            case 0x17B600u: goto label_17b600;
            case 0x17B604u: goto label_17b604;
            case 0x17B608u: goto label_17b608;
            case 0x17B60Cu: goto label_17b60c;
            case 0x17B610u: goto label_17b610;
            case 0x17B614u: goto label_17b614;
            case 0x17B618u: goto label_17b618;
            case 0x17B61Cu: goto label_17b61c;
            case 0x17B620u: goto label_17b620;
            case 0x17B624u: goto label_17b624;
            case 0x17B628u: goto label_17b628;
            case 0x17B62Cu: goto label_17b62c;
            case 0x17B630u: goto label_17b630;
            case 0x17B634u: goto label_17b634;
            case 0x17B638u: goto label_17b638;
            case 0x17B63Cu: goto label_17b63c;
            case 0x17B640u: goto label_17b640;
            case 0x17B644u: goto label_17b644;
            case 0x17B648u: goto label_17b648;
            case 0x17B64Cu: goto label_17b64c;
            case 0x17B650u: goto label_17b650;
            default: break;
        }
        return;
    }
label_fallthrough_0x17b64c:
    ctx->pc = 0x17B654u;
}
