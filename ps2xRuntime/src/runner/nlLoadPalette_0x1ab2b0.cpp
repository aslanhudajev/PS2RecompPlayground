#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLoadPalette
// Address: 0x1ab2b0 - 0x1ab4d8
void nlLoadPalette_0x1ab2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLoadPalette");


    ctx->pc = 0x1ab2b0u;

    // 0x1ab2b0: 0x27bdff80
    ctx->pc = 0x1ab2b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ab2b4: 0x7fbf0070
    ctx->pc = 0x1ab2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1ab2b8: 0x7fb60060
    ctx->pc = 0x1ab2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ab2bc: 0x7fb50050
    ctx->pc = 0x1ab2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ab2c0: 0x7fb40040
    ctx->pc = 0x1ab2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ab2c4: 0x7fb30030
    ctx->pc = 0x1ab2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ab2c8: 0x7fb20020
    ctx->pc = 0x1ab2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab2cc: 0x7fb10010
    ctx->pc = 0x1ab2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab2d0: 0x7fb00000
    ctx->pc = 0x1ab2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab2d4: 0x8f908a50
    ctx->pc = 0x1ab2d4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294937168)));
    // 0x1ab2d8: 0xc069558
    ctx->pc = 0x1AB2D8u;
    SET_GPR_U32(ctx, 31, 0x1AB2E0u);
    ctx->pc = 0x1AB2DCu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2E0u; }
        else if (ctx->pc != 0x1AB2E0u) { ctx->pc = 0x1AB2E0u; }
    }
    if (ctx->pc != 0x1AB2E0u) { return; }
    ctx->pc = 0x1AB2E0u;
    // 0x1ab2e0: 0x7040a628
    ctx->pc = 0x1ab2e0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ab2e4: 0x1280000e
    ctx->pc = 0x1AB2E4u;
    {
        const bool branch_taken_0x1ab2e4 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB2E8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
        if (branch_taken_0x1ab2e4) {
            ctx->pc = 0x1AB320u;
            goto label_1ab320;
        }
    }
    ctx->pc = 0x1AB2ECu;
    // 0x1ab2ec: 0xc069528
    ctx->pc = 0x1AB2ECu;
    SET_GPR_U32(ctx, 31, 0x1AB2F4u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2F4u; }
        else if (ctx->pc != 0x1AB2F4u) { ctx->pc = 0x1AB2F4u; }
    }
    if (ctx->pc != 0x1AB2F4u) { return; }
    ctx->pc = 0x1AB2F4u;
    // 0x1ab2f4: 0x70409628
    ctx->pc = 0x1ab2f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ab2f8: 0x72408e28
    ctx->pc = 0x1ab2f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1ab2fc:
    // 0x1ab2fc: 0x3c011001
    ctx->pc = 0x1ab2fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1ab300: 0x8c23d000
    ctx->pc = 0x1ab300u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1ab304: 0x30630100
    ctx->pc = 0x1ab304u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1ab308: 0x0
    ctx->pc = 0x1ab308u;
    // NOP
    // 0x1ab30c: 0x0
    ctx->pc = 0x1ab30cu;
    // NOP
    // 0x1ab310: 0x1460fffa
    ctx->pc = 0x1AB310u;
    {
        const bool branch_taken_0x1ab310 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ab310) {
            ctx->pc = 0x1AB2FCu;
            goto label_1ab2fc;
        }
    }
    ctx->pc = 0x1AB318u;
    // 0x1ab318: 0x10000003
    ctx->pc = 0x1AB318u;
    {
        const bool branch_taken_0x1ab318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB31Cu;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 28), 4294937172)));
        if (branch_taken_0x1ab318) {
            ctx->pc = 0x1AB328u;
            goto label_1ab328;
        }
    }
    ctx->pc = 0x1AB320u;
label_1ab320:
    // 0x1ab320: 0x2471f560
    ctx->pc = 0x1ab320u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294964576));
    // 0x1ab324: 0x8f958a54
    ctx->pc = 0x1ab324u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 28), 4294937172)));
label_1ab328:
    // 0x1ab328: 0x72a01e28
    ctx->pc = 0x1ab328u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ab32c: 0x1060005a
    ctx->pc = 0x1AB32Cu;
    {
        const bool branch_taken_0x1ab32c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB330u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        if (branch_taken_0x1ab32c) {
            ctx->pc = 0x1AB498u;
            goto label_1ab498;
        }
    }
    ctx->pc = 0x1AB334u;
label_1ab334:
    // 0x1ab334: 0x8603000a
    ctx->pc = 0x1ab334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1ab338: 0x30630004
    ctx->pc = 0x1ab338u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
    // 0x1ab33c: 0x10600053
    ctx->pc = 0x1AB33Cu;
    {
        const bool branch_taken_0x1ab33c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB340u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ab33c) {
            ctx->pc = 0x1AB48Cu;
            goto label_1ab48c;
        }
    }
    ctx->pc = 0x1AB344u;
    // 0x1ab344: 0x86030008
    ctx->pc = 0x1ab344u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ab348: 0x4610003
    ctx->pc = 0x1AB348u;
    {
        const bool branch_taken_0x1ab348 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB34Cu;
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x1ab348) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB350u;
    // 0x1ab350: 0x24630007
    ctx->pc = 0x1ab350u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7));
    // 0x1ab354: 0x3b0c3
    ctx->pc = 0x1ab354u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 3));
label_1ab358:
    // 0x1ab358: 0x8e030000
    ctx->pc = 0x1ab358u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ab35c: 0x31cc3
    ctx->pc = 0x1ab35cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 19));
    // 0x1ab360: 0x3063000f
    ctx->pc = 0x1ab360u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x1ab364: 0x28610002
    ctx->pc = 0x1ab364u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 2));
    // 0x1ab368: 0x10200003
    ctx->pc = 0x1AB368u;
    {
        const bool branch_taken_0x1ab368 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ab368) {
            ctx->pc = 0x1AB378u;
            goto label_1ab378;
        }
    }
    ctx->pc = 0x1AB370u;
    // 0x1ab370: 0x16b040
    ctx->pc = 0x1ab370u;
    SET_GPR_U32(ctx, 22, SLL32(GPR_U32(ctx, 22), 1));
    // 0x1ab374: 0x0
    ctx->pc = 0x1ab374u;
    // NOP
label_1ab378:
    // 0x1ab378: 0x12800007
    ctx->pc = 0x1AB378u;
    {
        const bool branch_taken_0x1ab378 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ab378) {
            ctx->pc = 0x1AB398u;
            goto label_1ab398;
        }
    }
    ctx->pc = 0x1AB380u;
    // 0x1ab380: 0x3c020026
    ctx->pc = 0x1ab380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1ab384: 0x2445f560
    ctx->pc = 0x1ab384u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294964576));
    // 0x1ab388: 0x72202628
    ctx->pc = 0x1ab388u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ab38c: 0xc06ac36
    ctx->pc = 0x1AB38Cu;
    SET_GPR_U32(ctx, 31, 0x1AB394u);
    ctx->pc = 0x1AB390u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB394u; }
        else if (ctx->pc != 0x1AB394u) { ctx->pc = 0x1AB394u; }
    }
    if (ctx->pc != 0x1AB394u) { return; }
    ctx->pc = 0x1AB394u;
    // 0x1ab394: 0x0
    ctx->pc = 0x1ab394u;
    // NOP
label_1ab398:
    // 0x1ab398: 0x8e040000
    ctx->pc = 0x1ab398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ab39c: 0x24030010
    ctx->pc = 0x1ab39cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ab3a0: 0x42143
    ctx->pc = 0x1ab3a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x1ab3a4: 0x30843fff
    ctx->pc = 0x1ab3a4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 16383));
    // 0x1ab3a8: 0xa6240024
    ctx->pc = 0x1ab3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ab3ac: 0x8e040000
    ctx->pc = 0x1ab3acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ab3b0: 0x424c3
    ctx->pc = 0x1ab3b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 19));
    // 0x1ab3b4: 0x3084000f
    ctx->pc = 0x1ab3b4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 15));
    // 0x1ab3b8: 0x42200
    ctx->pc = 0x1ab3b8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1ab3bc: 0x34840001
    ctx->pc = 0x1ab3bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 1));
    // 0x1ab3c0: 0xa6240026
    ctx->pc = 0x1ab3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ab3c4: 0x86050008
    ctx->pc = 0x1ab3c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ab3c8: 0x14a30007
    ctx->pc = 0x1AB3C8u;
    {
        const bool branch_taken_0x1ab3c8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AB3CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x1ab3c8) {
            ctx->pc = 0x1AB3E8u;
            goto label_1ab3e8;
        }
    }
    ctx->pc = 0x1AB3D0u;
    // 0x1ab3d0: 0x24030008
    ctx->pc = 0x1ab3d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ab3d4: 0xae230040
    ctx->pc = 0x1ab3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x1ab3d8: 0x24030002
    ctx->pc = 0x1ab3d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab3dc: 0x1000000e
    ctx->pc = 0x1AB3DCu;
    {
        const bool branch_taken_0x1ab3dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB3E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        if (branch_taken_0x1ab3dc) {
            ctx->pc = 0x1AB418u;
            goto label_1ab418;
        }
    }
    ctx->pc = 0x1AB3E4u;
    // 0x1ab3e4: 0x24030100
    ctx->pc = 0x1ab3e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
label_1ab3e8:
    // 0x1ab3e8: 0x14a30005
    ctx->pc = 0x1AB3E8u;
    {
        const bool branch_taken_0x1ab3e8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ab3e8) {
            ctx->pc = 0x1AB400u;
            goto label_1ab400;
        }
    }
    ctx->pc = 0x1AB3F0u;
    // 0x1ab3f0: 0x24030010
    ctx->pc = 0x1ab3f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ab3f4: 0xae230040
    ctx->pc = 0x1ab3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x1ab3f8: 0x10000007
    ctx->pc = 0x1AB3F8u;
    {
        const bool branch_taken_0x1ab3f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB3FCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        if (branch_taken_0x1ab3f8) {
            ctx->pc = 0x1AB418u;
            goto label_1ab418;
        }
    }
    ctx->pc = 0x1AB400u;
label_1ab400:
    // 0x1ab400: 0x3c020026
    ctx->pc = 0x1ab400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1ab404: 0x72a03628
    ctx->pc = 0x1ab404u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ab408: 0xc05114a
    ctx->pc = 0x1AB408u;
    SET_GPR_U32(ctx, 31, 0x1AB410u);
    ctx->pc = 0x1AB40Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964784));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB410u; }
        else if (ctx->pc != 0x1AB410u) { ctx->pc = 0x1AB410u; }
    }
    if (ctx->pc != 0x1AB410u) { return; }
    ctx->pc = 0x1AB410u;
label_1ab410:
    // 0x1ab410: 0x1000ffff
    ctx->pc = 0x1AB410u;
    {
        const bool branch_taken_0x1ab410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ab410) {
            ctx->pc = 0x1AB410u;
            goto label_1ab410;
        }
    }
    ctx->pc = 0x1AB418u;
label_1ab418:
    // 0x1ab418: 0x36c38000
    ctx->pc = 0x1ab418u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 22), 32768));
    // 0x1ab41c: 0xae230060
    ctx->pc = 0x1ab41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x1ab420: 0xa6360070
    ctx->pc = 0x1ab420u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 22));
    // 0x1ab424: 0x8e030004
    ctx->pc = 0x1ab424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ab428: 0xae230074
    ctx->pc = 0x1ab428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x1ab42c: 0x1280000b
    ctx->pc = 0x1AB42Cu;
    {
        const bool branch_taken_0x1ab42c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB430u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 22));
        if (branch_taken_0x1ab42c) {
            ctx->pc = 0x1AB45Cu;
            goto label_1ab45c;
        }
    }
    ctx->pc = 0x1AB434u;
    // 0x1ab434: 0x26730008
    ctx->pc = 0x1ab434u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
    // 0x1ab438: 0x26630008
    ctx->pc = 0x1ab438u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 8));
    // 0x1ab43c: 0x2c610201
    ctx->pc = 0x1ab43cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 513));
    // 0x1ab440: 0x1420000d
    ctx->pc = 0x1AB440u;
    {
        const bool branch_taken_0x1ab440 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AB444u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 128));
        if (branch_taken_0x1ab440) {
            ctx->pc = 0x1AB478u;
            goto label_1ab478;
        }
    }
    ctx->pc = 0x1AB448u;
    // 0x1ab448: 0xc06952c
    ctx->pc = 0x1AB448u;
    SET_GPR_U32(ctx, 31, 0x1AB450u);
    ctx->pc = 0x1AB44Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB450u; }
        else if (ctx->pc != 0x1AB450u) { ctx->pc = 0x1AB450u; }
    }
    if (ctx->pc != 0x1AB450u) { return; }
    ctx->pc = 0x1AB450u;
    // 0x1ab450: 0x70009e28
    ctx->pc = 0x1ab450u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ab454: 0x10000008
    ctx->pc = 0x1AB454u;
    {
        const bool branch_taken_0x1ab454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB458u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ab454) {
            ctx->pc = 0x1AB478u;
            goto label_1ab478;
        }
    }
    ctx->pc = 0x1AB45Cu;
label_1ab45c:
    // 0x1ab45c: 0xc0552d8
    ctx->pc = 0x1AB45Cu;
    SET_GPR_U32(ctx, 31, 0x1AB464u);
    ctx->pc = 0x1AB460u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB464u; }
        else if (ctx->pc != 0x1AB464u) { ctx->pc = 0x1AB464u; }
    }
    if (ctx->pc != 0x1AB464u) { return; }
    ctx->pc = 0x1AB464u;
    // 0x1ab464: 0xc0547e4
    ctx->pc = 0x1AB464u;
    SET_GPR_U32(ctx, 31, 0x1AB46Cu);
    ctx->pc = 0x1AB468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB46Cu; }
        else if (ctx->pc != 0x1AB46Cu) { ctx->pc = 0x1AB46Cu; }
    }
    if (ctx->pc != 0x1AB46Cu) { return; }
    ctx->pc = 0x1AB46Cu;
    // 0x1ab46c: 0x70402628
    ctx->pc = 0x1ab46cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ab470: 0xc0548b8
    ctx->pc = 0x1AB470u;
    SET_GPR_U32(ctx, 31, 0x1AB478u);
    ctx->pc = 0x1AB474u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1522E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x1522e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB478u; }
        else if (ctx->pc != 0x1AB478u) { ctx->pc = 0x1AB478u; }
    }
    if (ctx->pc != 0x1AB478u) { return; }
    ctx->pc = 0x1AB478u;
label_1ab478:
    // 0x1ab478: 0x8604000a
    ctx->pc = 0x1ab478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1ab47c: 0x2403fffb
    ctx->pc = 0x1ab47cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1ab480: 0x831824
    ctx->pc = 0x1ab480u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ab484: 0xa603000a
    ctx->pc = 0x1ab484u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ab488: 0x72a01e28
    ctx->pc = 0x1ab488u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_1ab48c:
    // 0x1ab48c: 0x2610000c
    ctx->pc = 0x1ab48cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1ab490: 0x1460ffa8
    ctx->pc = 0x1AB490u;
    {
        const bool branch_taken_0x1ab490 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AB494u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        if (branch_taken_0x1ab490) {
            ctx->pc = 0x1AB334u;
            goto label_1ab334;
        }
    }
    ctx->pc = 0x1AB498u;
label_1ab498:
    // 0x1ab498: 0x12800005
    ctx->pc = 0x1AB498u;
    {
        const bool branch_taken_0x1ab498 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ab498) {
            ctx->pc = 0x1AB4B0u;
            goto label_1ab4b0;
        }
    }
    ctx->pc = 0x1AB4A0u;
    // 0x1ab4a0: 0x1a600003
    ctx->pc = 0x1AB4A0u;
    {
        const bool branch_taken_0x1ab4a0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1AB4A4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ab4a0) {
            ctx->pc = 0x1AB4B0u;
            goto label_1ab4b0;
        }
    }
    ctx->pc = 0x1AB4A8u;
    // 0x1ab4a8: 0xc06952c
    ctx->pc = 0x1AB4A8u;
    SET_GPR_U32(ctx, 31, 0x1AB4B0u);
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4B0u; }
        else if (ctx->pc != 0x1AB4B0u) { ctx->pc = 0x1AB4B0u; }
    }
    if (ctx->pc != 0x1AB4B0u) { return; }
    ctx->pc = 0x1AB4B0u;
label_1ab4b0:
    // 0x1ab4b0: 0x7bbf0070
    ctx->pc = 0x1ab4b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ab4b4: 0x7bb60060
    ctx->pc = 0x1ab4b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ab4b8: 0x7bb50050
    ctx->pc = 0x1ab4b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ab4bc: 0x7bb40040
    ctx->pc = 0x1ab4bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab4c0: 0x7bb30030
    ctx->pc = 0x1ab4c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab4c4: 0x7bb20020
    ctx->pc = 0x1ab4c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab4c8: 0x7bb10010
    ctx->pc = 0x1ab4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab4cc: 0x7bb00000
    ctx->pc = 0x1ab4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab4d0: 0x3e00008
    ctx->pc = 0x1AB4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB4D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB2FCu: goto label_1ab2fc;
            case 0x1AB320u: goto label_1ab320;
            case 0x1AB328u: goto label_1ab328;
            case 0x1AB334u: goto label_1ab334;
            case 0x1AB358u: goto label_1ab358;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB398u: goto label_1ab398;
            case 0x1AB3E8u: goto label_1ab3e8;
            case 0x1AB400u: goto label_1ab400;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB418u: goto label_1ab418;
            case 0x1AB45Cu: goto label_1ab45c;
            case 0x1AB478u: goto label_1ab478;
            case 0x1AB48Cu: goto label_1ab48c;
            case 0x1AB498u: goto label_1ab498;
            case 0x1AB4B0u: goto label_1ab4b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB4D8u;
}
