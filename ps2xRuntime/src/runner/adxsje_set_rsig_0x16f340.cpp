#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_set_rsig
// Address: 0x16f340 - 0x16f5e0
void adxsje_set_rsig_0x16f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_set_rsig");


    ctx->pc = 0x16f340u;

    // 0x16f340: 0x27bdff40
    ctx->pc = 0x16f340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x16f344: 0x24060008
    ctx->pc = 0x16f344u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16f348: 0xffb30050
    ctx->pc = 0x16f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x16f34c: 0x51980
    ctx->pc = 0x16f34cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
    // 0x16f350: 0xffb10030
    ctx->pc = 0x16f350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x16f354: 0x80982d
    ctx->pc = 0x16f354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f358: 0xffbf00b0
    ctx->pc = 0x16f358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x16f35c: 0x52080
    ctx->pc = 0x16f35cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x16f360: 0xffbe00a0
    ctx->pc = 0x16f360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x16f364: 0x52900
    ctx->pc = 0x16f364u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x16f368: 0xffb70090
    ctx->pc = 0x16f368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x16f36c: 0x24a502a8
    ctx->pc = 0x16f36cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 680));
    // 0x16f370: 0xffb60080
    ctx->pc = 0x16f370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x16f374: 0x2652821
    ctx->pc = 0x16f374u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x16f378: 0xffb50070
    ctx->pc = 0x16f378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x16f37c: 0x2642021
    ctx->pc = 0x16f37cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x16f380: 0xffb40060
    ctx->pc = 0x16f380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x16f384: 0x882d
    ctx->pc = 0x16f384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f388: 0xffb20040
    ctx->pc = 0x16f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16f38c: 0xffb00020
    ctx->pc = 0x16f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16f390: 0x8e620054
    ctx->pc = 0x16f390u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x16f394: 0xc2001a
    ctx->pc = 0x16f394u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16f398: 0x3812
    ctx->pc = 0x16f398u;
    SET_GPR_U32(ctx, 7, ctx->lo);
    // 0x16f39c: 0xafa70014
    ctx->pc = 0x16f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16f3a0: 0x50400001
    ctx->pc = 0x16F3A0u;
    {
        const bool branch_taken_0x16f3a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16f3a0) {
            ctx->pc = 0x16F3A4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16F3A8u;
            goto label_16f3a8;
        }
    }
    ctx->pc = 0x16F3A8u;
label_16f3a8:
    // 0x16f3a8: 0xafa50008
    ctx->pc = 0x16f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x16f3ac: 0x24620210
    ctx->pc = 0x16f3acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 528));
    // 0x16f3b0: 0x2623021
    ctx->pc = 0x16f3b0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16f3b4: 0x2405ffff
    ctx->pc = 0x16f3b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f3b8: 0x8c840080
    ctx->pc = 0x16f3b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x16f3bc: 0x24620110
    ctx->pc = 0x16f3bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 272));
    // 0x16f3c0: 0x24630190
    ctx->pc = 0x16f3c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 400));
    // 0x16f3c4: 0xafa40010
    ctx->pc = 0x16f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16f3c8: 0x2631821
    ctx->pc = 0x16f3c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x16f3cc: 0x2622021
    ctx->pc = 0x16f3ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16f3d0: 0x8e620044
    ctx->pc = 0x16f3d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x16f3d4: 0xafa00004
    ctx->pc = 0x16f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x16f3d8: 0xafa50000
    ctx->pc = 0x16f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x16f3dc: 0x18400074
    ctx->pc = 0x16F3DCu;
    {
        const bool branch_taken_0x16f3dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16F3E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        if (branch_taken_0x16f3dc) {
            ctx->pc = 0x16F5B0u;
            goto label_16f5b0;
        }
    }
    ctx->pc = 0x16F3E4u;
    // 0x16f3e4: 0x3c07ffff
    ctx->pc = 0x16f3e4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)65535 << 16));
    // 0x16f3e8: 0x8fa20008
    ctx->pc = 0x16f3e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f3ec: 0xafa70018
    ctx->pc = 0x16f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x16f3f0: 0x60f02d
    ctx->pc = 0x16f3f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3f4: 0x34e77fff
    ctx->pc = 0x16f3f4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 32767));
    // 0x16f3f8: 0xafa6001c
    ctx->pc = 0x16f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x16f3fc: 0xafa70018
    ctx->pc = 0x16f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x16f400: 0x80b02d
    ctx->pc = 0x16f400u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f404: 0x24177fff
    ctx->pc = 0x16f404u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 32767));
    // 0x16f408: 0x24141249
    ctx->pc = 0x16f408u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4681));
    // 0x16f40c: 0x2455ffff
    ctx->pc = 0x16f40cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294967295));
label_16f410:
    // 0x16f410: 0x8fa40010
    ctx->pc = 0x16f410u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f414: 0xc05bbd0
    ctx->pc = 0x16F414u;
    SET_GPR_U32(ctx, 31, 0x16F41Cu);
    ctx->pc = 0x16F418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16EF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_get_rsig_0x16ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F41Cu; }
        else if (ctx->pc != 0x16F41Cu) { ctx->pc = 0x16F41Cu; }
    }
    if (ctx->pc != 0x16F41Cu) { return; }
    ctx->pc = 0x16F41Cu;
    // 0x16f41c: 0x22400
    ctx->pc = 0x16f41cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 16));
    // 0x16f420: 0xa6c20000
    ctx->pc = 0x16f420u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f424: 0xc052e16
    ctx->pc = 0x16F424u;
    SET_GPR_U32(ctx, 31, 0x16F42Cu);
    ctx->pc = 0x16F428u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F42Cu; }
        else if (ctx->pc != 0x16F42Cu) { ctx->pc = 0x16F42Cu; }
    }
    if (ctx->pc != 0x16F42Cu) { return; }
    ctx->pc = 0x16F42Cu;
    // 0x16f42c: 0x8fa30010
    ctx->pc = 0x16f42cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f430: 0x40202d
    ctx->pc = 0x16f430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f434: 0xdc720080
    ctx->pc = 0x16f434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x16f438: 0xc052cb8
    ctx->pc = 0x16F438u;
    SET_GPR_U32(ctx, 31, 0x16F440u);
    ctx->pc = 0x16F43Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F440u; }
        else if (ctx->pc != 0x16F440u) { ctx->pc = 0x16F440u; }
    }
    if (ctx->pc != 0x16F440u) { return; }
    ctx->pc = 0x16F440u;
    // 0x16f440: 0xc052e44
    ctx->pc = 0x16F440u;
    SET_GPR_U32(ctx, 31, 0x16F448u);
    ctx->pc = 0x16F444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F448u; }
        else if (ctx->pc != 0x16F448u) { ctx->pc = 0x16F448u; }
    }
    if (ctx->pc != 0x16F448u) { return; }
    ctx->pc = 0x16F448u;
    // 0x16f448: 0x8fa40018
    ctx->pc = 0x16f448u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f44c: 0x24068000
    ctx->pc = 0x16f44cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x16f450: 0x82182a
    ctx->pc = 0x16f450u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x16f454: 0x43300b
    ctx->pc = 0x16f454u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
    // 0x16f458: 0x2e6102a
    ctx->pc = 0x16f458u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 6)));
    // 0x16f45c: 0x2e2300b
    ctx->pc = 0x16f45cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 23));
    // 0x16f460: 0x61400
    ctx->pc = 0x16f460u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x16f464: 0x4410003
    ctx->pc = 0x16F464u;
    {
        const bool branch_taken_0x16f464 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16F468u;
        WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 6));
        if (branch_taken_0x16f464) {
            ctx->pc = 0x16F474u;
            goto label_16f474;
        }
    }
    ctx->pc = 0x16F46Cu;
    // 0x16f46c: 0x10000002
    ctx->pc = 0x16F46Cu;
    {
        const bool branch_taken_0x16f46c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F470u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294964956));
        if (branch_taken_0x16f46c) {
            ctx->pc = 0x16F478u;
            goto label_16f478;
        }
    }
    ctx->pc = 0x16F474u;
label_16f474:
    // 0x16f474: 0x24c20924
    ctx->pc = 0x16f474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 2340));
label_16f478:
    // 0x16f478: 0x52800001
    ctx->pc = 0x16F478u;
    {
        const bool branch_taken_0x16f478 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x16f478) {
            ctx->pc = 0x16F47Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16F480u;
            goto label_16f480;
        }
    }
    ctx->pc = 0x16F480u;
label_16f480:
    // 0x16f480: 0x54001a
    ctx->pc = 0x16f480u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16f484: 0x1012
    ctx->pc = 0x16f484u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x16f488: 0x40302d
    ctx->pc = 0x16f488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f48c: 0x2403fff7
    ctx->pc = 0x16f48cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x16f490: 0x2402fff8
    ctx->pc = 0x16f490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x16f494: 0x66182a
    ctx->pc = 0x16f494u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
    // 0x16f498: 0x24050007
    ctx->pc = 0x16f498u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x16f49c: 0xc3100b
    ctx->pc = 0x16f49cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x16f4a0: 0x8fa30010
    ctx->pc = 0x16f4a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f4a4: 0x8464007c
    ctx->pc = 0x16f4a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x16f4a8: 0x28430008
    ctx->pc = 0x16f4a8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 8));
    // 0x16f4ac: 0xa3100a
    ctx->pc = 0x16f4acu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x16f4b0: 0x21600
    ctx->pc = 0x16f4b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x16f4b4: 0x28603
    ctx->pc = 0x16f4b4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 24));
    // 0x16f4b8: 0xc052e16
    ctx->pc = 0x16F4B8u;
    SET_GPR_U32(ctx, 31, 0x16F4C0u);
    ctx->pc = 0x16F4BCu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F4C0u; }
        else if (ctx->pc != 0x16F4C0u) { ctx->pc = 0x16F4C0u; }
    }
    if (ctx->pc != 0x16F4C0u) { return; }
    ctx->pc = 0x16F4C0u;
    // 0x16f4c0: 0x40202d
    ctx->pc = 0x16f4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f4c4: 0xc052cb8
    ctx->pc = 0x16F4C4u;
    SET_GPR_U32(ctx, 31, 0x16F4CCu);
    ctx->pc = 0x16F4C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F4CCu; }
        else if (ctx->pc != 0x16F4CCu) { ctx->pc = 0x16F4CCu; }
    }
    if (ctx->pc != 0x16F4CCu) { return; }
    ctx->pc = 0x16F4CCu;
    // 0x16f4cc: 0xc052e44
    ctx->pc = 0x16F4CCu;
    SET_GPR_U32(ctx, 31, 0x16F4D4u);
    ctx->pc = 0x16F4D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F4D4u; }
        else if (ctx->pc != 0x16F4D4u) { ctx->pc = 0x16F4D4u; }
    }
    if (ctx->pc != 0x16F4D4u) { return; }
    ctx->pc = 0x16F4D4u;
    // 0x16f4d4: 0x8fa3000c
    ctx->pc = 0x16f4d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16f4d8: 0x24068000
    ctx->pc = 0x16f4d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x16f4dc: 0x8fa50018
    ctx->pc = 0x16f4dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f4e0: 0x223001a
    ctx->pc = 0x16f4e0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16f4e4: 0x8fa7001c
    ctx->pc = 0x16f4e4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x16f4e8: 0xa2182a
    ctx->pc = 0x16f4e8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x16f4ec: 0x43300b
    ctx->pc = 0x16f4ecu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
    // 0x16f4f0: 0x2e6102a
    ctx->pc = 0x16f4f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 6)));
    // 0x16f4f4: 0x2e2300b
    ctx->pc = 0x16f4f4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 23));
    // 0x16f4f8: 0xa4e60000
    ctx->pc = 0x16f4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f4fc: 0x8fa2000c
    ctx->pc = 0x16f4fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16f500: 0x50400001
    ctx->pc = 0x16F500u;
    {
        const bool branch_taken_0x16f500 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16f500) {
            ctx->pc = 0x16F504u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16F508u;
            goto label_16f508;
        }
    }
    ctx->pc = 0x16F508u;
label_16f508:
    // 0x16f508: 0x2010
    ctx->pc = 0x16f508u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x16f50c: 0x1480000a
    ctx->pc = 0x16F50Cu;
    {
        const bool branch_taken_0x16f50c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F510u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x16f50c) {
            ctx->pc = 0x16F538u;
            goto label_16f538;
        }
    }
    ctx->pc = 0x16F514u;
    // 0x16f514: 0x8fa30000
    ctx->pc = 0x16f514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f518: 0x26b50001
    ctx->pc = 0x16f518u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x16f51c: 0x24040001
    ctx->pc = 0x16f51cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f520: 0x2a0382d
    ctx->pc = 0x16f520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f524: 0x24630001
    ctx->pc = 0x16f524u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x16f528: 0xafa40004
    ctx->pc = 0x16f528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x16f52c: 0xafa30000
    ctx->pc = 0x16f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x16f530: 0x10000003
    ctx->pc = 0x16F530u;
    {
        const bool branch_taken_0x16f530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F534u;
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x16f530) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F538u;
label_16f538:
    // 0x16f538: 0x8fa60000
    ctx->pc = 0x16f538u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f53c: 0xa63821
    ctx->pc = 0x16f53cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16f540:
    // 0x16f540: 0x8e640054
    ctx->pc = 0x16f540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x16f544: 0x24030008
    ctx->pc = 0x16f544u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16f548: 0x8fa60004
    ctx->pc = 0x16f548u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16f54c: 0x26310001
    ctx->pc = 0x16f54cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x16f550: 0x8fa20014
    ctx->pc = 0x16f550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16f554: 0x641823
    ctx->pc = 0x16f554u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16f558: 0x27de0002
    ctx->pc = 0x16f558u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 2));
    // 0x16f55c: 0x462823
    ctx->pc = 0x16f55cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16f560: 0x701004
    ctx->pc = 0x16f560u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x16f564: 0xa42818
    ctx->pc = 0x16f564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x16f568: 0x304200ff
    ctx->pc = 0x16f568u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x16f56c: 0x8fa40004
    ctx->pc = 0x16f56cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16f570: 0x621007
    ctx->pc = 0x16f570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x16f574: 0x90e60000
    ctx->pc = 0x16f574u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16f578: 0x8fa3001c
    ctx->pc = 0x16f578u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x16f57c: 0x21600
    ctx->pc = 0x16f57cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x16f580: 0x28603
    ctx->pc = 0x16f580u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 24));
    // 0x16f584: 0x24840001
    ctx->pc = 0x16f584u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x16f588: 0x24630002
    ctx->pc = 0x16f588u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x16f58c: 0xb02804
    ctx->pc = 0x16f58cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x16f590: 0xafa40004
    ctx->pc = 0x16f590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x16f594: 0xc53025
    ctx->pc = 0x16f594u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16f598: 0xafa3001c
    ctx->pc = 0x16f598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x16f59c: 0xa0e60000
    ctx->pc = 0x16f59cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x16f5a0: 0x8e620044
    ctx->pc = 0x16f5a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x16f5a4: 0x222102a
    ctx->pc = 0x16f5a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x16f5a8: 0x1440ff99
    ctx->pc = 0x16F5A8u;
    {
        const bool branch_taken_0x16f5a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F5ACu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 2));
        if (branch_taken_0x16f5a8) {
            ctx->pc = 0x16F410u;
            goto label_16f410;
        }
    }
    ctx->pc = 0x16F5B0u;
label_16f5b0:
    // 0x16f5b0: 0xdfbf00b0
    ctx->pc = 0x16f5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16f5b4: 0xdfbe00a0
    ctx->pc = 0x16f5b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16f5b8: 0xdfb70090
    ctx->pc = 0x16f5b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16f5bc: 0xdfb60080
    ctx->pc = 0x16f5bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f5c0: 0xdfb50070
    ctx->pc = 0x16f5c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f5c4: 0xdfb40060
    ctx->pc = 0x16f5c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f5c8: 0xdfb30050
    ctx->pc = 0x16f5c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f5cc: 0xdfb20040
    ctx->pc = 0x16f5ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f5d0: 0xdfb10030
    ctx->pc = 0x16f5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f5d4: 0xdfb00020
    ctx->pc = 0x16f5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f5d8: 0x3e00008
    ctx->pc = 0x16F5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F5DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F3A8u: goto label_16f3a8;
            case 0x16F410u: goto label_16f410;
            case 0x16F474u: goto label_16f474;
            case 0x16F478u: goto label_16f478;
            case 0x16F480u: goto label_16f480;
            case 0x16F508u: goto label_16f508;
            case 0x16F538u: goto label_16f538;
            case 0x16F540u: goto label_16f540;
            case 0x16F5B0u: goto label_16f5b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F5E0u;
}
