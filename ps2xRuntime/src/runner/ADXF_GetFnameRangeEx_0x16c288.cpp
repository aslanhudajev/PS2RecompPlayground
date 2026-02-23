#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_GetFnameRangeEx
// Address: 0x16c288 - 0x16c420
void ADXF_GetFnameRangeEx_0x16c288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_GetFnameRangeEx");


    ctx->pc = 0x16c288u;

    // 0x16c288: 0x27bdff50
    ctx->pc = 0x16c288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16c28c: 0xffb20030
    ctx->pc = 0x16c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16c290: 0xffb00010
    ctx->pc = 0x16c290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16c294: 0xa0902d
    ctx->pc = 0x16c294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c298: 0xffbe0090
    ctx->pc = 0x16c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x16c29c: 0x80802d
    ctx->pc = 0x16c29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2a0: 0xffb70080
    ctx->pc = 0x16c2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x16c2a4: 0x120f02d
    ctx->pc = 0x16c2a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2a8: 0xffb60070
    ctx->pc = 0x16c2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x16c2ac: 0xe0b82d
    ctx->pc = 0x16c2acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2b0: 0xffb50060
    ctx->pc = 0x16c2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x16c2b4: 0x100b02d
    ctx->pc = 0x16c2b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2b8: 0xffbf00a0
    ctx->pc = 0x16c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x16c2bc: 0xffb40050
    ctx->pc = 0x16c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x16c2c0: 0xffb30040
    ctx->pc = 0x16c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x16c2c4: 0xffb10020
    ctx->pc = 0x16c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x16c2c8: 0xc05b024
    ctx->pc = 0x16C2C8u;
    SET_GPR_U32(ctx, 31, 0x16C2D0u);
    ctx->pc = 0x16C2CCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x16C090u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_ChkPrmGfr_0x16c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C2D0u; }
        else if (ctx->pc != 0x16C2D0u) { ctx->pc = 0x16C2D0u; }
    }
    if (ctx->pc != 0x16C2D0u) { return; }
    ctx->pc = 0x16C2D0u;
    // 0x16c2d0: 0x40a82d
    ctx->pc = 0x16c2d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2d4: 0x6a30006
    ctx->pc = 0x16C2D4u;
    {
        const bool branch_taken_0x16c2d4 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x16c2d4) {
            ctx->pc = 0x16C2D8u;
            SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
            ctx->pc = 0x16C2F0u;
            goto label_16c2f0;
        }
    }
    ctx->pc = 0x16C2DCu;
    // 0x16c2dc: 0x2403ffff
    ctx->pc = 0x16c2dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c2e0: 0xaee00000
    ctx->pc = 0x16c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x16c2e4: 0xaec30000
    ctx->pc = 0x16c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x16c2e8: 0x10000041
    ctx->pc = 0x16C2E8u;
    {
        const bool branch_taken_0x16c2e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C2ECu;
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x16c2e8) {
            ctx->pc = 0x16C3F0u;
            goto label_16c3f0;
        }
    }
    ctx->pc = 0x16C2F0u;
label_16c2f0:
    // 0x16c2f0: 0x101880
    ctx->pc = 0x16c2f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x16c2f4: 0x2442c918
    ctx->pc = 0x16c2f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953240));
    // 0x16c2f8: 0x621821
    ctx->pc = 0x16c2f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c2fc: 0x8c700000
    ctx->pc = 0x16c2fcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c300: 0x8e080000
    ctx->pc = 0x16c300u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c304: 0x51000015
    ctx->pc = 0x16C304u;
    {
        const bool branch_taken_0x16c304 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x16c304) {
            ctx->pc = 0x16C308u;
            SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->pc = 0x16C35Cu;
            goto label_16c35c;
        }
    }
    ctx->pc = 0x16C30Cu;
    // 0x16c30c: 0x0
    ctx->pc = 0x16c30cu;
    // NOP
label_16c310:
    // 0x16c310: 0x9602000c
    ctx->pc = 0x16c310u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16c314: 0x26050114
    ctx->pc = 0x16c314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 276));
    // 0x16c318: 0x1040000b
    ctx->pc = 0x16C318u;
    {
        const bool branch_taken_0x16c318 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C31Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c318) {
            ctx->pc = 0x16C348u;
            goto label_16c348;
        }
    }
    ctx->pc = 0x16C320u;
    // 0x16c320: 0x40382d
    ctx->pc = 0x16c320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c324: 0xa0202d
    ctx->pc = 0x16c324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c328:
    // 0x16c328: 0x610c0
    ctx->pc = 0x16c328u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 3));
    // 0x16c32c: 0x94830000
    ctx->pc = 0x16c32cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c330: 0x10720019
    ctx->pc = 0x16C330u;
    {
        const bool branch_taken_0x16c330 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        ctx->pc = 0x16C334u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        if (branch_taken_0x16c330) {
            ctx->pc = 0x16C398u;
            goto label_16c398;
        }
    }
    ctx->pc = 0x16C338u;
    // 0x16c338: 0x24c60001
    ctx->pc = 0x16c338u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x16c33c: 0xc7102a
    ctx->pc = 0x16c33cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x16c340: 0x1440fff9
    ctx->pc = 0x16C340u;
    {
        const bool branch_taken_0x16c340 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C344u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x16c340) {
            ctx->pc = 0x16C328u;
            goto label_16c328;
        }
    }
    ctx->pc = 0x16C348u;
label_16c348:
    // 0x16c348: 0x100802d
    ctx->pc = 0x16c348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c34c: 0x8e020000
    ctx->pc = 0x16c34cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c350: 0x1440ffef
    ctx->pc = 0x16C350u;
    {
        const bool branch_taken_0x16c350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C354u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c350) {
            ctx->pc = 0x16C310u;
            goto label_16c310;
        }
    }
    ctx->pc = 0x16C358u;
    // 0x16c358: 0x96130114
    ctx->pc = 0x16c358u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_16c35c:
    // 0x16c35c: 0x26140116
    ctx->pc = 0x16c35cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 278));
    // 0x16c360: 0x1a400017
    ctx->pc = 0x16C360u;
    {
        const bool branch_taken_0x16c360 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x16C364u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c360) {
            ctx->pc = 0x16C3C0u;
            goto label_16c3c0;
        }
    }
    ctx->pc = 0x16C368u;
    // 0x16c368: 0x26050010
    ctx->pc = 0x16c368u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    // 0x16c36c: 0x128840
    ctx->pc = 0x16c36cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 18), 1));
label_16c370:
    // 0x16c370: 0x61040
    ctx->pc = 0x16c370u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x16c374: 0x541021
    ctx->pc = 0x16c374u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x16c378: 0x24c60001
    ctx->pc = 0x16c378u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x16c37c: 0x94430000
    ctx->pc = 0x16c37cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c380: 0xd2202a
    ctx->pc = 0x16c380u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 18)));
    // 0x16c384: 0x2639821
    ctx->pc = 0x16c384u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x16c388: 0x1480fff9
    ctx->pc = 0x16C388u;
    {
        const bool branch_taken_0x16c388 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x16c388) {
            ctx->pc = 0x16C370u;
            goto label_16c370;
        }
    }
    ctx->pc = 0x16C390u;
    // 0x16c390: 0x1000000e
    ctx->pc = 0x16C390u;
    {
        const bool branch_taken_0x16c390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C394u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16c390) {
            ctx->pc = 0x16C3CCu;
            goto label_16c3cc;
        }
    }
    ctx->pc = 0x16C398u;
label_16c398:
    // 0x16c398: 0x8fa40000
    ctx->pc = 0x16c398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c39c: 0x26050010
    ctx->pc = 0x16c39cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    // 0x16c3a0: 0xc05167c
    ctx->pc = 0x16C3A0u;
    SET_GPR_U32(ctx, 31, 0x16C3A8u);
    ctx->pc = 0x16C3A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C3A8u; }
        else if (ctx->pc != 0x16C3A8u) { ctx->pc = 0x16C3A8u; }
    }
    if (ctx->pc != 0x16C3A8u) { return; }
    ctx->pc = 0x16C3A8u;
    // 0x16c3a8: 0x8e230004
    ctx->pc = 0x16c3a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16c3ac: 0x2a0102d
    ctx->pc = 0x16c3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c3b0: 0x8e040110
    ctx->pc = 0x16c3b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x16c3b4: 0x96250002
    ctx->pc = 0x16c3b4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x16c3b8: 0x1000000b
    ctx->pc = 0x16C3B8u;
    {
        const bool branch_taken_0x16c3b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C3BCu;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x16c3b8) {
            ctx->pc = 0x16C3E8u;
            goto label_16c3e8;
        }
    }
    ctx->pc = 0x16C3C0u;
label_16c3c0:
    // 0x16c3c0: 0x128840
    ctx->pc = 0x16c3c0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 18), 1));
    // 0x16c3c4: 0x26050010
    ctx->pc = 0x16c3c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    // 0x16c3c8: 0x8fa40000
    ctx->pc = 0x16c3c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16c3cc:
    // 0x16c3cc: 0xc05167c
    ctx->pc = 0x16C3CCu;
    SET_GPR_U32(ctx, 31, 0x16C3D4u);
    ctx->pc = 0x16C3D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C3D4u; }
        else if (ctx->pc != 0x16C3D4u) { ctx->pc = 0x16C3D4u; }
    }
    if (ctx->pc != 0x16C3D4u) { return; }
    ctx->pc = 0x16C3D4u;
    // 0x16c3d4: 0x2341821
    ctx->pc = 0x16c3d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x16c3d8: 0x8e040110
    ctx->pc = 0x16c3d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x16c3dc: 0x94650000
    ctx->pc = 0x16c3dcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c3e0: 0x2a0102d
    ctx->pc = 0x16c3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c3e4: 0xaed30000
    ctx->pc = 0x16c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
label_16c3e8:
    // 0x16c3e8: 0xaee40000
    ctx->pc = 0x16c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x16c3ec: 0xafc50000
    ctx->pc = 0x16c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
label_16c3f0:
    // 0x16c3f0: 0xdfbf00a0
    ctx->pc = 0x16c3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c3f4: 0xdfbe0090
    ctx->pc = 0x16c3f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16c3f8: 0xdfb70080
    ctx->pc = 0x16c3f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16c3fc: 0xdfb60070
    ctx->pc = 0x16c3fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16c400: 0xdfb50060
    ctx->pc = 0x16c400u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16c404: 0xdfb40050
    ctx->pc = 0x16c404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c408: 0xdfb30040
    ctx->pc = 0x16c408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c40c: 0xdfb20030
    ctx->pc = 0x16c40cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c410: 0xdfb10020
    ctx->pc = 0x16c410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c414: 0xdfb00010
    ctx->pc = 0x16c414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c418: 0x3e00008
    ctx->pc = 0x16C418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C41Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C2F0u: goto label_16c2f0;
            case 0x16C310u: goto label_16c310;
            case 0x16C328u: goto label_16c328;
            case 0x16C348u: goto label_16c348;
            case 0x16C35Cu: goto label_16c35c;
            case 0x16C370u: goto label_16c370;
            case 0x16C398u: goto label_16c398;
            case 0x16C3C0u: goto label_16c3c0;
            case 0x16C3CCu: goto label_16c3cc;
            case 0x16C3E8u: goto label_16c3e8;
            case 0x16C3F0u: goto label_16c3f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C420u;
}
