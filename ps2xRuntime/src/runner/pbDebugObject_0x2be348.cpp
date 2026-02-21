#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugObject
// Address: 0x2be348 - 0x2be57c
void pbDebugObject_0x2be348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2be348u;

    // 0x2be348: 0x27bdffe0
    ctx->pc = 0x2be348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be34c: 0xffbf0010
    ctx->pc = 0x2be34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2be350: 0xffb00000
    ctx->pc = 0x2be350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2be354: 0x8c82006c
    ctx->pc = 0x2be354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2be358: 0x22c02
    ctx->pc = 0x2be358u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 2), 16));
    // 0x2be35c: 0x3046ffff
    ctx->pc = 0x2be35cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2be360: 0x3c020037
    ctx->pc = 0x2be360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2be364: 0x8c432740
    ctx->pc = 0x2be364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2be368: 0x8c620008
    ctx->pc = 0x2be368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2be36c: 0xa2102a
    ctx->pc = 0x2be36cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x2be370: 0x1440000c
    ctx->pc = 0x2BE370u;
    {
        const bool branch_taken_0x2be370 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE374u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be370) {
            ctx->pc = 0x2BE3A4u;
            goto label_2be3a4;
        }
    }
    ctx->pc = 0x2BE378u;
    // 0x2be378: 0x8c62000c
    ctx->pc = 0x2be378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2be37c: 0x45102a
    ctx->pc = 0x2be37cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x2be380: 0x14400009
    ctx->pc = 0x2BE380u;
    {
        const bool branch_taken_0x2be380 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE384u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2be380) {
            ctx->pc = 0x2BE3A8u;
            goto label_2be3a8;
        }
    }
    ctx->pc = 0x2BE388u;
    // 0x2be388: 0x8c620010
    ctx->pc = 0x2be388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2be38c: 0xc2102a
    ctx->pc = 0x2be38cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x2be390: 0x14400005
    ctx->pc = 0x2BE390u;
    {
        const bool branch_taken_0x2be390 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE394u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2be390) {
            ctx->pc = 0x2BE3A8u;
            goto label_2be3a8;
        }
    }
    ctx->pc = 0x2BE398u;
    // 0x2be398: 0x8c620014
    ctx->pc = 0x2be398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2be39c: 0x46102a
    ctx->pc = 0x2be39cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x2be3a0: 0x38470001
    ctx->pc = 0x2be3a0u;
    SET_GPR_U32(ctx, 7, XOR32(GPR_U32(ctx, 2), 1));
label_2be3a4:
    // 0x2be3a4: 0x3c020037
    ctx->pc = 0x2be3a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2be3a8:
    // 0x2be3a8: 0x8c422740
    ctx->pc = 0x2be3a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2be3ac: 0xac470030
    ctx->pc = 0x2be3acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 7));
    // 0x2be3b0: 0x8c430004
    ctx->pc = 0x2be3b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2be3b4: 0x24020002
    ctx->pc = 0x2be3b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2be3b8: 0x1062005e
    ctx->pc = 0x2BE3B8u;
    {
        const bool branch_taken_0x2be3b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BE3BCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x2be3b8) {
            ctx->pc = 0x2BE534u;
            goto label_2be534;
        }
    }
    ctx->pc = 0x2BE3C0u;
    // 0x2be3c0: 0x10400005
    ctx->pc = 0x2BE3C0u;
    {
        const bool branch_taken_0x2be3c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE3C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2be3c0) {
            ctx->pc = 0x2BE3D8u;
            goto label_2be3d8;
        }
    }
    ctx->pc = 0x2BE3C8u;
    // 0x2be3c8: 0x10620008
    ctx->pc = 0x2BE3C8u;
    {
        const bool branch_taken_0x2be3c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BE3CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be3c8) {
            ctx->pc = 0x2BE3ECu;
            goto label_2be3ec;
        }
    }
    ctx->pc = 0x2BE3D0u;
    // 0x2be3d0: 0x10000067
    ctx->pc = 0x2BE3D0u;
    {
        const bool branch_taken_0x2be3d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE3D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2be3d0) {
            ctx->pc = 0x2BE570u;
            goto label_2be570;
        }
    }
    ctx->pc = 0x2BE3D8u;
label_2be3d8:
    // 0x2be3d8: 0x24020003
    ctx->pc = 0x2be3d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be3dc: 0x10620057
    ctx->pc = 0x2BE3DCu;
    {
        const bool branch_taken_0x2be3dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BE3E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be3dc) {
            ctx->pc = 0x2BE53Cu;
            goto label_2be53c;
        }
    }
    ctx->pc = 0x2BE3E4u;
    // 0x2be3e4: 0x10000062
    ctx->pc = 0x2BE3E4u;
    {
        const bool branch_taken_0x2be3e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE3E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2be3e4) {
            ctx->pc = 0x2BE570u;
            goto label_2be570;
        }
    }
    ctx->pc = 0x2BE3ECu;
label_2be3ec:
    // 0x2be3ec: 0x10e0005f
    ctx->pc = 0x2BE3ECu;
    {
        const bool branch_taken_0x2be3ec = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE3F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2be3ec) {
            ctx->pc = 0x2BE56Cu;
            goto label_2be56c;
        }
    }
    ctx->pc = 0x2BE3F4u;
    // 0x2be3f4: 0x3c020037
    ctx->pc = 0x2be3f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2be3f8: 0x8c422740
    ctx->pc = 0x2be3f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2be3fc: 0x8c430018
    ctx->pc = 0x2be3fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2be400: 0x2402ffff
    ctx->pc = 0x2be400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2be404: 0x10620042
    ctx->pc = 0x2BE404u;
    {
        const bool branch_taken_0x2be404 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BE408u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2be404) {
            ctx->pc = 0x2BE510u;
            goto label_2be510;
        }
    }
    ctx->pc = 0x2BE40Cu;
    // 0x2be40c: 0x8c820070
    ctx->pc = 0x2be40cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2be410: 0x8c42000c
    ctx->pc = 0x2be410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2be414: 0x62102a
    ctx->pc = 0x2be414u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2be418: 0x54400003
    ctx->pc = 0x2BE418u;
    {
        const bool branch_taken_0x2be418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2be418) {
            ctx->pc = 0x2BE41Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->pc = 0x2BE428u;
            goto label_2be428;
        }
    }
    ctx->pc = 0x2BE420u;
    // 0x2be420: 0x10000052
    ctx->pc = 0x2BE420u;
    {
        const bool branch_taken_0x2be420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE424u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2be420) {
            ctx->pc = 0x2BE56Cu;
            goto label_2be56c;
        }
    }
    ctx->pc = 0x2BE428u;
label_2be428:
    // 0x2be428: 0x3c020037
    ctx->pc = 0x2be428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2be42c: 0x40402d
    ctx->pc = 0x2be42cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be430: 0x8c462740
    ctx->pc = 0x2be430u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2be434: 0xacc400c0
    ctx->pc = 0x2be434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 192), GPR_U32(ctx, 4));
    // 0x2be438: 0x8ca2000c
    ctx->pc = 0x2be438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2be43c: 0xacc200c4
    ctx->pc = 0x2be43cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 196), GPR_U32(ctx, 2));
    // 0x2be440: 0x94a20010
    ctx->pc = 0x2be440u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2be444: 0xa4c200cc
    ctx->pc = 0x2be444u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 204), (uint16_t)GPR_U32(ctx, 2));
    // 0x2be448: 0x94a20012
    ctx->pc = 0x2be448u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x2be44c: 0xa4c200ce
    ctx->pc = 0x2be44cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 206), (uint16_t)GPR_U32(ctx, 2));
    // 0x2be450: 0x94a20014
    ctx->pc = 0x2be450u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2be454: 0xa4c200d0
    ctx->pc = 0x2be454u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 208), (uint16_t)GPR_U32(ctx, 2));
    // 0x2be458: 0x8ca2001c
    ctx->pc = 0x2be458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2be45c: 0xacc200c8
    ctx->pc = 0x2be45cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 200), GPR_U32(ctx, 2));
    // 0x2be460: 0x8cc20018
    ctx->pc = 0x2be460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2be464: 0x18400028
    ctx->pc = 0x2BE464u;
    {
        const bool branch_taken_0x2be464 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BE468u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2be464) {
            ctx->pc = 0x2BE508u;
            goto label_2be508;
        }
    }
    ctx->pc = 0x2BE46Cu;
    // 0x2be46c: 0x94a20010
    ctx->pc = 0x2be46cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2be470: 0x21100
    ctx->pc = 0x2be470u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2be474: 0x8ca3001c
    ctx->pc = 0x2be474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2be478: 0x431021
    ctx->pc = 0x2be478u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be47c: 0xaca2001c
    ctx->pc = 0x2be47cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x2be480: 0x8cc20018
    ctx->pc = 0x2be480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2be484: 0x2442ffff
    ctx->pc = 0x2be484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2be488: 0x18400011
    ctx->pc = 0x2BE488u;
    {
        const bool branch_taken_0x2be488 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BE48Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be488) {
            ctx->pc = 0x2BE4D0u;
            goto label_2be4d0;
        }
    }
    ctx->pc = 0x2BE490u;
    // 0x2be490: 0x8ca70018
    ctx->pc = 0x2be490u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2be494: 0x8d062740
    ctx->pc = 0x2be494u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 10048)));
    // 0x2be498: 0x410c0
    ctx->pc = 0x2be498u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x2be49c: 0x0
    ctx->pc = 0x2be49cu;
    // NOP
label_2be4a0:
    // 0x2be4a0: 0x471021
    ctx->pc = 0x2be4a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2be4a4: 0x94420000
    ctx->pc = 0x2be4a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be4a8: 0x21100
    ctx->pc = 0x2be4a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2be4ac: 0x8ca3001c
    ctx->pc = 0x2be4acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2be4b0: 0x431021
    ctx->pc = 0x2be4b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be4b4: 0xaca2001c
    ctx->pc = 0x2be4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x2be4b8: 0x24840001
    ctx->pc = 0x2be4b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2be4bc: 0x8cc20018
    ctx->pc = 0x2be4bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2be4c0: 0x2442ffff
    ctx->pc = 0x2be4c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2be4c4: 0x82102a
    ctx->pc = 0x2be4c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x2be4c8: 0x1440fff5
    ctx->pc = 0x2BE4C8u;
    {
        const bool branch_taken_0x2be4c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE4CCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x2be4c8) {
            ctx->pc = 0x2BE4A0u;
            goto label_2be4a0;
        }
    }
    ctx->pc = 0x2BE4D0u;
label_2be4d0:
    // 0x2be4d0: 0x3c020037
    ctx->pc = 0x2be4d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2be4d4: 0x8c422740
    ctx->pc = 0x2be4d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2be4d8: 0x8c420018
    ctx->pc = 0x2be4d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2be4dc: 0x210c0
    ctx->pc = 0x2be4dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2be4e0: 0x2442fff8
    ctx->pc = 0x2be4e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x2be4e4: 0x8ca30018
    ctx->pc = 0x2be4e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2be4e8: 0x431021
    ctx->pc = 0x2be4e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be4ec: 0x94430000
    ctx->pc = 0x2be4ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2be4f0: 0xa4a30010
    ctx->pc = 0x2be4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2be4f4: 0x94430002
    ctx->pc = 0x2be4f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2be4f8: 0xa4a30012
    ctx->pc = 0x2be4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x2be4fc: 0x94420004
    ctx->pc = 0x2be4fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2be500: 0xa4a20014
    ctx->pc = 0x2be500u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2be504: 0x24020001
    ctx->pc = 0x2be504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2be508:
    // 0x2be508: 0xaca2000c
    ctx->pc = 0x2be508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2be50c: 0x3c020037
    ctx->pc = 0x2be50cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2be510:
    // 0x2be510: 0x8c422740
    ctx->pc = 0x2be510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2be514: 0x8c44001c
    ctx->pc = 0x2be514u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2be518: 0x2402ffff
    ctx->pc = 0x2be518u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2be51c: 0x10820013
    ctx->pc = 0x2BE51Cu;
    {
        const bool branch_taken_0x2be51c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BE520u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be51c) {
            ctx->pc = 0x2BE56Cu;
            goto label_2be56c;
        }
    }
    ctx->pc = 0x2BE524u;
    // 0x2be524: 0xc0a8e9e
    ctx->pc = 0x2BE524u;
    SET_GPR_U32(ctx, 31, 0x2BE52Cu);
    ctx->pc = 0x2A3A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetOneTriMode_0x2a3a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE52Cu; }
    }
    if (ctx->pc != 0x2BE52Cu) { return; }
    ctx->pc = 0x2BE52Cu;
    // 0x2be52c: 0x1000000f
    ctx->pc = 0x2BE52Cu;
    {
        const bool branch_taken_0x2be52c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE530u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be52c) {
            ctx->pc = 0x2BE56Cu;
            goto label_2be56c;
        }
    }
    ctx->pc = 0x2BE534u;
label_2be534:
    // 0x2be534: 0x1000000d
    ctx->pc = 0x2BE534u;
    {
        const bool branch_taken_0x2be534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE538u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be534) {
            ctx->pc = 0x2BE56Cu;
            goto label_2be56c;
        }
    }
    ctx->pc = 0x2BE53Cu;
label_2be53c:
    // 0x2be53c: 0x10e0000a
    ctx->pc = 0x2BE53Cu;
    {
        const bool branch_taken_0x2be53c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE540u;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        if (branch_taken_0x2be53c) {
            ctx->pc = 0x2BE568u;
            goto label_2be568;
        }
    }
    ctx->pc = 0x2BE544u;
    // 0x2be544: 0x8e022740
    ctx->pc = 0x2be544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10048)));
    // 0x2be548: 0x3c04003b
    ctx->pc = 0x2be548u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2be54c: 0x24846ae8
    ctx->pc = 0x2be54cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27368));
    // 0x2be550: 0xc0b4a34
    ctx->pc = 0x2BE550u;
    SET_GPR_U32(ctx, 31, 0x2BE558u);
    ctx->pc = 0x2BE554u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE558u; }
    }
    if (ctx->pc != 0x2BE558u) { return; }
    ctx->pc = 0x2BE558u;
    // 0x2be558: 0x8e022740
    ctx->pc = 0x2be558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10048)));
    // 0x2be55c: 0x8c44003c
    ctx->pc = 0x2be55cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2be560: 0xc0af71e
    ctx->pc = 0x2BE560u;
    SET_GPR_U32(ctx, 31, 0x2BE568u);
    ctx->pc = 0x2BE564u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->pc = 0x2BDC78u;
    {
        const uint32_t __entryPc = ctx->pc;
        obp_0x2bdc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE568u; }
    }
    if (ctx->pc != 0x2BE568u) { return; }
    ctx->pc = 0x2BE568u;
label_2be568:
    // 0x2be568: 0x102d
    ctx->pc = 0x2be568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be56c:
    // 0x2be56c: 0xdfbf0010
    ctx->pc = 0x2be56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2be570:
    // 0x2be570: 0xdfb00000
    ctx->pc = 0x2be570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be574: 0x3e00008
    ctx->pc = 0x2BE574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE578u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BE3A4u: goto label_2be3a4;
            case 0x2BE3A8u: goto label_2be3a8;
            case 0x2BE3D8u: goto label_2be3d8;
            case 0x2BE3ECu: goto label_2be3ec;
            case 0x2BE428u: goto label_2be428;
            case 0x2BE4A0u: goto label_2be4a0;
            case 0x2BE4D0u: goto label_2be4d0;
            case 0x2BE508u: goto label_2be508;
            case 0x2BE510u: goto label_2be510;
            case 0x2BE534u: goto label_2be534;
            case 0x2BE53Cu: goto label_2be53c;
            case 0x2BE568u: goto label_2be568;
            case 0x2BE56Cu: goto label_2be56c;
            case 0x2BE570u: goto label_2be570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BE57Cu;
}
