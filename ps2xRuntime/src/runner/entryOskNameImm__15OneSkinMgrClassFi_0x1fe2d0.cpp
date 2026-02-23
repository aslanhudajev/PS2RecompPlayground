#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskNameImm__15OneSkinMgrClassFi
// Address: 0x1fe2d0 - 0x1fe4b4
void entryOskNameImm__15OneSkinMgrClassFi_0x1fe2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskNameImm__15OneSkinMgrClassFi");


    ctx->pc = 0x1fe2d0u;

    // 0x1fe2d0: 0x27bdff80
    ctx->pc = 0x1fe2d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fe2d4: 0x7fbf0070
    ctx->pc = 0x1fe2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1fe2d8: 0x7fb60060
    ctx->pc = 0x1fe2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1fe2dc: 0x7fb50050
    ctx->pc = 0x1fe2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fe2e0: 0x7fb40040
    ctx->pc = 0x1fe2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fe2e4: 0x7fb30030
    ctx->pc = 0x1fe2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fe2e8: 0x7fb20020
    ctx->pc = 0x1fe2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe2ec: 0x3c030027
    ctx->pc = 0x1fe2ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1fe2f0: 0x7fb10010
    ctx->pc = 0x1fe2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe2f4: 0x7fb00000
    ctx->pc = 0x1fe2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe2f8: 0x59080
    ctx->pc = 0x1fe2f8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fe2fc: 0x2463cfb0
    ctx->pc = 0x1fe2fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954928));
    // 0x1fe300: 0x721821
    ctx->pc = 0x1fe300u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1fe304: 0x8c740000
    ctx->pc = 0x1fe304u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe308: 0x3c030052
    ctx->pc = 0x1fe308u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1fe30c: 0x246394d0
    ctx->pc = 0x1fe30cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294939856));
    // 0x1fe310: 0x659821
    ctx->pc = 0x1fe310u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fe314: 0x82630000
    ctx->pc = 0x1fe314u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fe318: 0x1460005c
    ctx->pc = 0x1FE318u;
    {
        const bool branch_taken_0x1fe318 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FE31Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fe318) {
            ctx->pc = 0x1FE48Cu;
            goto label_1fe48c;
        }
    }
    ctx->pc = 0x1FE320u;
    // 0x1fe320: 0x3c020027
    ctx->pc = 0x1fe320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fe324: 0x2442ddf0
    ctx->pc = 0x1fe324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958576));
    // 0x1fe328: 0x521021
    ctx->pc = 0x1fe328u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fe32c: 0x8c430000
    ctx->pc = 0x1fe32cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe330: 0x8f958cf8
    ctx->pc = 0x1fe330u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x1fe334: 0x3c020027
    ctx->pc = 0x1fe334u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fe338: 0x2442b1d0
    ctx->pc = 0x1fe338u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947280));
    // 0x1fe33c: 0x31840
    ctx->pc = 0x1fe33cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe340: 0x431021
    ctx->pc = 0x1fe340u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe344: 0x84450000
    ctx->pc = 0x1fe344u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe348: 0xc05adc4
    ctx->pc = 0x1FE348u;
    SET_GPR_U32(ctx, 31, 0x1FE350u);
    ctx->pc = 0x1FE34Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_OpenAfs_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE350u; }
        else if (ctx->pc != 0x1FE350u) { ctx->pc = 0x1FE350u; }
    }
    if (ctx->pc != 0x1FE350u) { return; }
    ctx->pc = 0x1FE350u;
    // 0x1fe350: 0x3c010050
    ctx->pc = 0x1fe350u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fe354: 0xac220c80
    ctx->pc = 0x1fe354u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3200), GPR_U32(ctx, 2));
    // 0x1fe358: 0x3c010050
    ctx->pc = 0x1fe358u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fe35c: 0xc05afe2
    ctx->pc = 0x1FE35Cu;
    SET_GPR_U32(ctx, 31, 0x1FE364u);
    ctx->pc = 0x1FE360u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE364u; }
        else if (ctx->pc != 0x1FE364u) { ctx->pc = 0x1FE364u; }
    }
    if (ctx->pc != 0x1FE364u) { return; }
    ctx->pc = 0x1FE364u;
    // 0x1fe364: 0x70402e28
    ctx->pc = 0x1fe364u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe368: 0x2402ffff
    ctx->pc = 0x1fe368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe36c: 0xa2620000
    ctx->pc = 0x1fe36cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fe370: 0x3c010050
    ctx->pc = 0x1fe370u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fe374: 0x8c240c80
    ctx->pc = 0x1fe374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1fe378: 0xc05aeba
    ctx->pc = 0x1FE378u;
    SET_GPR_U32(ctx, 31, 0x1FE380u);
    ctx->pc = 0x1FE37Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE380u; }
        else if (ctx->pc != 0x1FE380u) { ctx->pc = 0x1FE380u; }
    }
    if (ctx->pc != 0x1FE380u) { return; }
    ctx->pc = 0x1FE380u;
    // 0x1fe380: 0x3c010050
    ctx->pc = 0x1fe380u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fe384: 0xc07a6a8
    ctx->pc = 0x1FE384u;
    SET_GPR_U32(ctx, 31, 0x1FE38Cu);
    ctx->pc = 0x1FE388u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x1E9AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXF_WaitReadFinish__FP7_adx_fs_0x1e9aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE38Cu; }
        else if (ctx->pc != 0x1FE38Cu) { ctx->pc = 0x1FE38Cu; }
    }
    if (ctx->pc != 0x1FE38Cu) { return; }
    ctx->pc = 0x1FE38Cu;
    // 0x1fe38c: 0x3c010050
    ctx->pc = 0x1fe38cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fe390: 0xc05ae0c
    ctx->pc = 0x1FE390u;
    SET_GPR_U32(ctx, 31, 0x1FE398u);
    ctx->pc = 0x1FE394u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE398u; }
        else if (ctx->pc != 0x1FE398u) { ctx->pc = 0x1FE398u; }
    }
    if (ctx->pc != 0x1FE398u) { return; }
    ctx->pc = 0x1FE398u;
    // 0x1fe398: 0x3c010050
    ctx->pc = 0x1fe398u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fe39c: 0x10000008
    ctx->pc = 0x1FE39Cu;
    {
        const bool branch_taken_0x1fe39c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FE3A0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 3200), GPR_U32(ctx, 0));
        if (branch_taken_0x1fe39c) {
            ctx->pc = 0x1FE3C0u;
            goto label_1fe3c0;
        }
    }
    ctx->pc = 0x1FE3A4u;
label_1fe3a4:
    // 0x1fe3a4: 0x4600039
    ctx->pc = 0x1FE3A4u;
    {
        const bool branch_taken_0x1fe3a4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fe3a4) {
            ctx->pc = 0x1FE48Cu;
            goto label_1fe48c;
        }
    }
    ctx->pc = 0x1FE3ACu;
    // 0x1fe3ac: 0x8ea30004
    ctx->pc = 0x1fe3acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1fe3b0: 0x31880
    ctx->pc = 0x1fe3b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fe3b4: 0x2a31821
    ctx->pc = 0x1fe3b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1fe3b8: 0x2475000c
    ctx->pc = 0x1fe3b8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 12));
    // 0x1fe3bc: 0x0
    ctx->pc = 0x1fe3bcu;
    // NOP
label_1fe3c0:
    // 0x1fe3c0: 0x8ea30000
    ctx->pc = 0x1fe3c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fe3c4: 0x1603fff7
    ctx->pc = 0x1FE3C4u;
    {
        const bool branch_taken_0x1fe3c4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        if (branch_taken_0x1fe3c4) {
            ctx->pc = 0x1FE3A4u;
            goto label_1fe3a4;
        }
    }
    ctx->pc = 0x1FE3CCu;
    // 0x1fe3cc: 0x8ea20008
    ctx->pc = 0x1fe3ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1fe3d0: 0xc06878c
    ctx->pc = 0x1FE3D0u;
    SET_GPR_U32(ctx, 31, 0x1FE3D8u);
    ctx->pc = 0x1FE3D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE3D8u; }
        else if (ctx->pc != 0x1FE3D8u) { ctx->pc = 0x1FE3D8u; }
    }
    if (ctx->pc != 0x1FE3D8u) { return; }
    ctx->pc = 0x1FE3D8u;
    // 0x1fe3d8: 0x70408e28
    ctx->pc = 0x1fe3d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fe3dc: 0x141403
    ctx->pc = 0x1fe3dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 16));
    // 0x1fe3e0: 0x3042ffff
    ctx->pc = 0x1fe3e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1fe3e4: 0x22900
    ctx->pc = 0x1fe3e4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fe3e8: 0x3c020050
    ctx->pc = 0x1fe3e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fe3ec: 0x2442ea24
    ctx->pc = 0x1fe3ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1fe3f0: 0x45b021
    ctx->pc = 0x1fe3f0u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fe3f4: 0x3283ffff
    ctx->pc = 0x1fe3f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), 65535));
    // 0x1fe3f8: 0x31040
    ctx->pc = 0x1fe3f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe3fc: 0x431021
    ctx->pc = 0x1fe3fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe400: 0x26a4000c
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 12));
    // 0x1fe404: 0x2a880
    ctx->pc = 0x1fe404u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe408: 0x8ec50000
    ctx->pc = 0x1fe408u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1fe40c: 0x2623003f
    ctx->pc = 0x1fe40cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 63));
    // 0x1fe410: 0x2402ffc0
    ctx->pc = 0x1fe410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fe414: 0x62a024
    ctx->pc = 0x1fe414u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe418: 0x2a51021
    ctx->pc = 0x1fe418u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1fe41c: 0xa4500004
    ctx->pc = 0x1fe41cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x1fe420: 0xc079604
    ctx->pc = 0x1FE420u;
    SET_GPR_U32(ctx, 31, 0x1FE428u);
    ctx->pc = 0x1FE424u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E5810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpandEntry_0x1e5810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE428u; }
        else if (ctx->pc != 0x1FE428u) { ctx->pc = 0x1FE428u; }
    }
    if (ctx->pc != 0x1FE428u) { return; }
    ctx->pc = 0x1FE428u;
    // 0x1fe428: 0x10000009
    ctx->pc = 0x1FE428u;
    {
        const bool branch_taken_0x1fe428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fe428) {
            ctx->pc = 0x1FE450u;
            goto label_1fe450;
        }
    }
    ctx->pc = 0x1FE430u;
label_1fe430:
    // 0x1fe430: 0xc079580
    ctx->pc = 0x1FE430u;
    SET_GPR_U32(ctx, 31, 0x1FE438u);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE438u; }
        else if (ctx->pc != 0x1FE438u) { ctx->pc = 0x1FE438u; }
    }
    if (ctx->pc != 0x1FE438u) { return; }
    ctx->pc = 0x1FE438u;
    // 0x1fe438: 0x26100001
    ctx->pc = 0x1fe438u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe43c: 0x2a021000
    ctx->pc = 0x1fe43cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4096));
    // 0x1fe440: 0x0
    ctx->pc = 0x1fe440u;
    // NOP
    // 0x1fe444: 0x0
    ctx->pc = 0x1fe444u;
    // NOP
    // 0x1fe448: 0x1440fff9
    ctx->pc = 0x1FE448u;
    {
        const bool branch_taken_0x1fe448 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fe448) {
            ctx->pc = 0x1FE430u;
            goto label_1fe430;
        }
    }
    ctx->pc = 0x1FE450u;
label_1fe450:
    // 0x1fe450: 0x3c010046
    ctx->pc = 0x1fe450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)70 << 16));
    // 0x1fe454: 0x84227cf0
    ctx->pc = 0x1fe454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 31984)));
    // 0x1fe458: 0x1440fff5
    ctx->pc = 0x1FE458u;
    {
        const bool branch_taken_0x1fe458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FE45Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fe458) {
            ctx->pc = 0x1FE430u;
            goto label_1fe430;
        }
    }
    ctx->pc = 0x1FE460u;
    // 0x1fe460: 0x8ec20000
    ctx->pc = 0x1fe460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1fe464: 0x551021
    ctx->pc = 0x1fe464u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1fe468: 0x8c440000
    ctx->pc = 0x1fe468u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe46c: 0xc06a97c
    ctx->pc = 0x1FE46Cu;
    SET_GPR_U32(ctx, 31, 0x1FE474u);
    ctx->pc = 0x1FE470u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AA5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLinkOneSkinStripData_0x1aa5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE474u; }
        else if (ctx->pc != 0x1FE474u) { ctx->pc = 0x1FE474u; }
    }
    if (ctx->pc != 0x1FE474u) { return; }
    ctx->pc = 0x1FE474u;
    // 0x1fe474: 0x3c030051
    ctx->pc = 0x1fe474u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1fe478: 0x246325f0
    ctx->pc = 0x1fe478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9712));
    // 0x1fe47c: 0x721821
    ctx->pc = 0x1fe47cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1fe480: 0xac710000
    ctx->pc = 0x1fe480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x1fe484: 0x24030001
    ctx->pc = 0x1fe484u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe488: 0xa2630000
    ctx->pc = 0x1fe488u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_1fe48c:
    // 0x1fe48c: 0x7bbf0070
    ctx->pc = 0x1fe48cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe490: 0x7bb60060
    ctx->pc = 0x1fe490u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fe494: 0x7bb50050
    ctx->pc = 0x1fe494u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe498: 0x7bb40040
    ctx->pc = 0x1fe498u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe49c: 0x7bb30030
    ctx->pc = 0x1fe49cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe4a0: 0x7bb20020
    ctx->pc = 0x1fe4a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe4a4: 0x7bb10010
    ctx->pc = 0x1fe4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe4a8: 0x7bb00000
    ctx->pc = 0x1fe4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe4ac: 0x3e00008
    ctx->pc = 0x1FE4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE4B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE3A4u: goto label_1fe3a4;
            case 0x1FE3C0u: goto label_1fe3c0;
            case 0x1FE430u: goto label_1fe430;
            case 0x1FE450u: goto label_1fe450;
            case 0x1FE48Cu: goto label_1fe48c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE4B4u;
}
