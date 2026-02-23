#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__25KomonoTrnCrosetKowareTaskFv
// Address: 0x21c510 - 0x21c9d4
void ctrl__25KomonoTrnCrosetKowareTaskFv_0x21c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__25KomonoTrnCrosetKowareTaskFv");


    ctx->pc = 0x21c510u;

    // 0x21c510: 0x27bdffb0
    ctx->pc = 0x21c510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c514: 0x7fbf0040
    ctx->pc = 0x21c514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x21c518: 0x7fb30030
    ctx->pc = 0x21c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21c51c: 0x7fb20020
    ctx->pc = 0x21c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21c520: 0x7fb10010
    ctx->pc = 0x21c520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21c524: 0x7fb00000
    ctx->pc = 0x21c524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c528: 0x70808628
    ctx->pc = 0x21c528u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21c52c: 0x70008e28
    ctx->pc = 0x21c52cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c530: 0x10000043
    ctx->pc = 0x21C530u;
    {
        const bool branch_taken_0x21c530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C534u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 148));
        if (branch_taken_0x21c530) {
            ctx->pc = 0x21C640u;
            goto label_21c640;
        }
    }
    ctx->pc = 0x21C538u;
label_21c538:
    // 0x21c538: 0xc07ce18
    ctx->pc = 0x21C538u;
    SET_GPR_U32(ctx, 31, 0x21C540u);
    ctx->pc = 0x21C53Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C540u; }
        else if (ctx->pc != 0x21C540u) { ctx->pc = 0x21C540u; }
    }
    if (ctx->pc != 0x21C540u) { return; }
    ctx->pc = 0x21C540u;
    // 0x21c540: 0x5c40003e
    ctx->pc = 0x21C540u;
    {
        const bool branch_taken_0x21c540 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x21c540) {
            ctx->pc = 0x21C544u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x21C63Cu;
            goto label_21c63c;
        }
    }
    ctx->pc = 0x21C548u;
    // 0x21c548: 0xc6410004
    ctx->pc = 0x21c548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c54c: 0xc640003c
    ctx->pc = 0x21c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c550: 0x46000834
    ctx->pc = 0x21c550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c554: 0x0
    ctx->pc = 0x21c554u;
    // NOP
    // 0x21c558: 0x45000017
    ctx->pc = 0x21C558u;
    {
        const bool branch_taken_0x21c558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c558) {
            ctx->pc = 0x21C5B8u;
            goto label_21c5b8;
        }
    }
    ctx->pc = 0x21C560u;
    // 0x21c560: 0xc6410010
    ctx->pc = 0x21c560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c564: 0x3c023f66
    ctx->pc = 0x21c564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16230 << 16));
    // 0x21c568: 0x34426666
    ctx->pc = 0x21c568u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x21c56c: 0x44820000
    ctx->pc = 0x21c56cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21c570: 0x3c023f19
    ctx->pc = 0x21c570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16153 << 16));
    // 0x21c574: 0x46010002
    ctx->pc = 0x21c574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21c578: 0x3442999a
    ctx->pc = 0x21c578u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x21c57c: 0x46000801
    ctx->pc = 0x21c57cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21c580: 0xe6400010
    ctx->pc = 0x21c580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x21c584: 0xc640000c
    ctx->pc = 0x21c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c588: 0x44821000
    ctx->pc = 0x21c588u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x21c58c: 0x0
    ctx->pc = 0x21c58cu;
    // NOP
    // 0x21c590: 0x46001002
    ctx->pc = 0x21c590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21c594: 0xe640000c
    ctx->pc = 0x21c594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x21c598: 0xc6400014
    ctx->pc = 0x21c598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c59c: 0x46001002
    ctx->pc = 0x21c59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21c5a0: 0xe6400014
    ctx->pc = 0x21c5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x21c5a4: 0xc640003c
    ctx->pc = 0x21c5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c5a8: 0xe6400004
    ctx->pc = 0x21c5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x21c5ac: 0xae400030
    ctx->pc = 0x21c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x21c5b0: 0xae400034
    ctx->pc = 0x21c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x21c5b4: 0xae400038
    ctx->pc = 0x21c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_21c5b8:
    // 0x21c5b8: 0xc641001c
    ctx->pc = 0x21c5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c5bc: 0xc6400010
    ctx->pc = 0x21c5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c5c0: 0x3404ffff
    ctx->pc = 0x21c5c0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
    // 0x21c5c4: 0x46010000
    ctx->pc = 0x21c5c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c5c8: 0xe6400010
    ctx->pc = 0x21c5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x21c5cc: 0xc641000c
    ctx->pc = 0x21c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c5d0: 0xc6400000
    ctx->pc = 0x21c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c5d4: 0x46010000
    ctx->pc = 0x21c5d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c5d8: 0xe6400000
    ctx->pc = 0x21c5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x21c5dc: 0xc6410010
    ctx->pc = 0x21c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c5e0: 0xc6400004
    ctx->pc = 0x21c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c5e4: 0x46010000
    ctx->pc = 0x21c5e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c5e8: 0xe6400004
    ctx->pc = 0x21c5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x21c5ec: 0xc6410014
    ctx->pc = 0x21c5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c5f0: 0xc6400008
    ctx->pc = 0x21c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c5f4: 0x46010000
    ctx->pc = 0x21c5f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c5f8: 0xe6400008
    ctx->pc = 0x21c5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x21c5fc: 0x8e430024
    ctx->pc = 0x21c5fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x21c600: 0x8e420030
    ctx->pc = 0x21c600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x21c604: 0x621021
    ctx->pc = 0x21c604u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c608: 0x441024
    ctx->pc = 0x21c608u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21c60c: 0xae420024
    ctx->pc = 0x21c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x21c610: 0x8e430028
    ctx->pc = 0x21c610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x21c614: 0x8e420034
    ctx->pc = 0x21c614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x21c618: 0x621021
    ctx->pc = 0x21c618u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c61c: 0x3042ffff
    ctx->pc = 0x21c61cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x21c620: 0xae420028
    ctx->pc = 0x21c620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x21c624: 0x8e43002c
    ctx->pc = 0x21c624u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x21c628: 0x8e420038
    ctx->pc = 0x21c628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x21c62c: 0x621021
    ctx->pc = 0x21c62cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c630: 0x3042ffff
    ctx->pc = 0x21c630u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x21c634: 0xae42002c
    ctx->pc = 0x21c634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x21c638: 0x26310001
    ctx->pc = 0x21c638u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_21c63c:
    // 0x21c63c: 0x26520040
    ctx->pc = 0x21c63cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 64));
label_21c640:
    // 0x21c640: 0x8e020064
    ctx->pc = 0x21c640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x21c644: 0x222102a
    ctx->pc = 0x21c644u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x21c648: 0x1440ffbb
    ctx->pc = 0x21C648u;
    {
        const bool branch_taken_0x21c648 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21C64Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x21c648) {
            ctx->pc = 0x21C538u;
            goto label_21c538;
        }
    }
    ctx->pc = 0x21C650u;
    // 0x21c650: 0x3c020050
    ctx->pc = 0x21c650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x21c654: 0xc07ce18
    ctx->pc = 0x21C654u;
    SET_GPR_U32(ctx, 31, 0x21C65Cu);
    ctx->pc = 0x21C658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C65Cu; }
        else if (ctx->pc != 0x21C65Cu) { ctx->pc = 0x21C65Cu; }
    }
    if (ctx->pc != 0x21C65Cu) { return; }
    ctx->pc = 0x21C65Cu;
    // 0x21c65c: 0x1c400004
    ctx->pc = 0x21C65Cu;
    {
        const bool branch_taken_0x21c65c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x21c65c) {
            ctx->pc = 0x21C670u;
            goto label_21c670;
        }
    }
    ctx->pc = 0x21C664u;
    // 0x21c664: 0x8e032894
    ctx->pc = 0x21c664u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10388)));
    // 0x21c668: 0x24630001
    ctx->pc = 0x21c668u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21c66c: 0xae032894
    ctx->pc = 0x21c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10388), GPR_U32(ctx, 3));
label_21c670:
    // 0x21c670: 0x8e032894
    ctx->pc = 0x21c670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10388)));
    // 0x21c674: 0x2861003d
    ctx->pc = 0x21c674u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 61));
    // 0x21c678: 0x14200008
    ctx->pc = 0x21C678u;
    {
        const bool branch_taken_0x21c678 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c678) {
            ctx->pc = 0x21C69Cu;
            goto label_21c69c;
        }
    }
    ctx->pc = 0x21C680u;
    // 0x21c680: 0xc6012898
    ctx->pc = 0x21c680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c684: 0x3c033d4c
    ctx->pc = 0x21c684u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x21c688: 0x3463cccd
    ctx->pc = 0x21c688u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x21c68c: 0x44830000
    ctx->pc = 0x21c68cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x21c690: 0x0
    ctx->pc = 0x21c690u;
    // NOP
    // 0x21c694: 0x46000801
    ctx->pc = 0x21c694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21c698: 0xe6002898
    ctx->pc = 0x21c698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10392), bits); }
label_21c69c:
    // 0x21c69c: 0x8e032894
    ctx->pc = 0x21c69cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10388)));
    // 0x21c6a0: 0x28610e11
    ctx->pc = 0x21c6a0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 3601));
    // 0x21c6a4: 0x14200003
    ctx->pc = 0x21C6A4u;
    {
        const bool branch_taken_0x21c6a4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c6a4) {
            ctx->pc = 0x21C6B4u;
            goto label_21c6b4;
        }
    }
    ctx->pc = 0x21C6ACu;
    // 0x21c6ac: 0xc06898c
    ctx->pc = 0x21C6ACu;
    SET_GPR_U32(ctx, 31, 0x21C6B4u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C6B4u; }
        else if (ctx->pc != 0x21C6B4u) { ctx->pc = 0x21C6B4u; }
    }
    if (ctx->pc != 0x21C6B4u) { return; }
    ctx->pc = 0x21C6B4u;
label_21c6b4:
    // 0x21c6b4: 0xc6012898
    ctx->pc = 0x21c6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c6b8: 0x44800000
    ctx->pc = 0x21c6b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21c6bc: 0x0
    ctx->pc = 0x21c6bcu;
    // NOP
    // 0x21c6c0: 0x46000836
    ctx->pc = 0x21c6c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c6c4: 0x0
    ctx->pc = 0x21c6c4u;
    // NOP
    // 0x21c6c8: 0x450100bb
    ctx->pc = 0x21C6C8u;
    {
        const bool branch_taken_0x21c6c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c6c8) {
            ctx->pc = 0x21C9B8u;
            goto label_21c9b8;
        }
    }
    ctx->pc = 0x21C6D0u;
    // 0x21c6d0: 0x8e040040
    ctx->pc = 0x21c6d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21c6d4: 0x3c03003e
    ctx->pc = 0x21c6d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)62 << 16));
    // 0x21c6d8: 0x3463015b
    ctx->pc = 0x21c6d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 347));
    // 0x21c6dc: 0x14830022
    ctx->pc = 0x21C6DCu;
    {
        const bool branch_taken_0x21c6dc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x21C6E0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 148));
        if (branch_taken_0x21c6dc) {
            ctx->pc = 0x21C768u;
            goto label_21c768;
        }
    }
    ctx->pc = 0x21C6E4u;
    // 0x21c6e4: 0x1000001a
    ctx->pc = 0x21C6E4u;
    {
        const bool branch_taken_0x21c6e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C6E8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21c6e4) {
            ctx->pc = 0x21C750u;
            goto label_21c750;
        }
    }
    ctx->pc = 0x21C6ECu;
label_21c6ec:
    // 0x21c6ec: 0x4bede37d
    ctx->pc = 0x21c6ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21c6f0: 0x4bedeb7d
    ctx->pc = 0x21c6f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21c6f4: 0x4bedf37d
    ctx->pc = 0x21c6f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21c6f8: 0x4bedfb7d
    ctx->pc = 0x21c6f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21c6fc: 0xc66d0004
    ctx->pc = 0x21c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21c700: 0xc66e0008
    ctx->pc = 0x21c700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21c704: 0xc06c202
    ctx->pc = 0x21C704u;
    SET_GPR_U32(ctx, 31, 0x21C70Cu);
    ctx->pc = 0x21C708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C70Cu; }
        else if (ctx->pc != 0x21C70Cu) { ctx->pc = 0x21C70Cu; }
    }
    if (ctx->pc != 0x21C70Cu) { return; }
    ctx->pc = 0x21C70Cu;
    // 0x21c70c: 0xc06c157
    ctx->pc = 0x21C70Cu;
    SET_GPR_U32(ctx, 31, 0x21C714u);
    ctx->pc = 0x21C710u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C714u; }
        else if (ctx->pc != 0x21C714u) { ctx->pc = 0x21C714u; }
    }
    if (ctx->pc != 0x21C714u) { return; }
    ctx->pc = 0x21C714u;
    // 0x21c714: 0xc06c0fb
    ctx->pc = 0x21C714u;
    SET_GPR_U32(ctx, 31, 0x21C71Cu);
    ctx->pc = 0x21C718u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C71Cu; }
        else if (ctx->pc != 0x21C71Cu) { ctx->pc = 0x21C71Cu; }
    }
    if (ctx->pc != 0x21C71Cu) { return; }
    ctx->pc = 0x21C71Cu;
    // 0x21c71c: 0xc06c09f
    ctx->pc = 0x21C71Cu;
    SET_GPR_U32(ctx, 31, 0x21C724u);
    ctx->pc = 0x21C720u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C724u; }
        else if (ctx->pc != 0x21C724u) { ctx->pc = 0x21C724u; }
    }
    if (ctx->pc != 0x21C724u) { return; }
    ctx->pc = 0x21C724u;
    // 0x21c724: 0x8e020044
    ctx->pc = 0x21c724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x21c728: 0xc60c2898
    ctx->pc = 0x21c728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c72c: 0xc0853e4
    ctx->pc = 0x21C72Cu;
    SET_GPR_U32(ctx, 31, 0x21C734u);
    ctx->pc = 0x21C730u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C734u; }
        else if (ctx->pc != 0x21C734u) { ctx->pc = 0x21C734u; }
    }
    if (ctx->pc != 0x21C734u) { return; }
    ctx->pc = 0x21C734u;
    // 0x21c734: 0x4bff6b7e
    ctx->pc = 0x21c734u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21c738: 0x4bfe6b7e
    ctx->pc = 0x21c738u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21c73c: 0x4bfd6b7e
    ctx->pc = 0x21c73cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21c740: 0x4bfc6b7e
    ctx->pc = 0x21c740u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21c744: 0x26730040
    ctx->pc = 0x21c744u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 64));
    // 0x21c748: 0x26310001
    ctx->pc = 0x21c748u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x21c74c: 0x0
    ctx->pc = 0x21c74cu;
    // NOP
label_21c750:
    // 0x21c750: 0x8e030054
    ctx->pc = 0x21c750u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21c754: 0x223182a
    ctx->pc = 0x21c754u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x21c758: 0x1460ffe4
    ctx->pc = 0x21C758u;
    {
        const bool branch_taken_0x21c758 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c758) {
            ctx->pc = 0x21C6ECu;
            goto label_21c6ec;
        }
    }
    ctx->pc = 0x21C760u;
    // 0x21c760: 0x10000096
    ctx->pc = 0x21C760u;
    {
        const bool branch_taken_0x21c760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C764u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x21c760) {
            ctx->pc = 0x21C9BCu;
            goto label_21c9bc;
        }
    }
    ctx->pc = 0x21C768u;
label_21c768:
    // 0x21c768: 0x10000019
    ctx->pc = 0x21C768u;
    {
        const bool branch_taken_0x21c768 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C76Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21c768) {
            ctx->pc = 0x21C7D0u;
            goto label_21c7d0;
        }
    }
    ctx->pc = 0x21C770u;
label_21c770:
    // 0x21c770: 0x4bede37d
    ctx->pc = 0x21c770u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21c774: 0x4bedeb7d
    ctx->pc = 0x21c774u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21c778: 0x4bedf37d
    ctx->pc = 0x21c778u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21c77c: 0x4bedfb7d
    ctx->pc = 0x21c77cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21c780: 0xc66d0004
    ctx->pc = 0x21c780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21c784: 0xc66e0008
    ctx->pc = 0x21c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21c788: 0xc06c202
    ctx->pc = 0x21C788u;
    SET_GPR_U32(ctx, 31, 0x21C790u);
    ctx->pc = 0x21C78Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C790u; }
        else if (ctx->pc != 0x21C790u) { ctx->pc = 0x21C790u; }
    }
    if (ctx->pc != 0x21C790u) { return; }
    ctx->pc = 0x21C790u;
    // 0x21c790: 0xc06c157
    ctx->pc = 0x21C790u;
    SET_GPR_U32(ctx, 31, 0x21C798u);
    ctx->pc = 0x21C794u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C798u; }
        else if (ctx->pc != 0x21C798u) { ctx->pc = 0x21C798u; }
    }
    if (ctx->pc != 0x21C798u) { return; }
    ctx->pc = 0x21C798u;
    // 0x21c798: 0xc06c0fb
    ctx->pc = 0x21C798u;
    SET_GPR_U32(ctx, 31, 0x21C7A0u);
    ctx->pc = 0x21C79Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7A0u; }
        else if (ctx->pc != 0x21C7A0u) { ctx->pc = 0x21C7A0u; }
    }
    if (ctx->pc != 0x21C7A0u) { return; }
    ctx->pc = 0x21C7A0u;
    // 0x21c7a0: 0xc06c09f
    ctx->pc = 0x21C7A0u;
    SET_GPR_U32(ctx, 31, 0x21C7A8u);
    ctx->pc = 0x21C7A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7A8u; }
        else if (ctx->pc != 0x21C7A8u) { ctx->pc = 0x21C7A8u; }
    }
    if (ctx->pc != 0x21C7A8u) { return; }
    ctx->pc = 0x21C7A8u;
    // 0x21c7a8: 0x8e020044
    ctx->pc = 0x21c7a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x21c7ac: 0xc60c2898
    ctx->pc = 0x21c7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c7b0: 0xc0853e4
    ctx->pc = 0x21C7B0u;
    SET_GPR_U32(ctx, 31, 0x21C7B8u);
    ctx->pc = 0x21C7B4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C7B8u; }
        else if (ctx->pc != 0x21C7B8u) { ctx->pc = 0x21C7B8u; }
    }
    if (ctx->pc != 0x21C7B8u) { return; }
    ctx->pc = 0x21C7B8u;
    // 0x21c7b8: 0x4bff6b7e
    ctx->pc = 0x21c7b8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21c7bc: 0x4bfe6b7e
    ctx->pc = 0x21c7bcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21c7c0: 0x4bfd6b7e
    ctx->pc = 0x21c7c0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21c7c4: 0x4bfc6b7e
    ctx->pc = 0x21c7c4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21c7c8: 0x26730040
    ctx->pc = 0x21c7c8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 64));
    // 0x21c7cc: 0x26310001
    ctx->pc = 0x21c7ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_21c7d0:
    // 0x21c7d0: 0x8e030054
    ctx->pc = 0x21c7d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21c7d4: 0x223182a
    ctx->pc = 0x21c7d4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x21c7d8: 0x1460ffe5
    ctx->pc = 0x21C7D8u;
    {
        const bool branch_taken_0x21c7d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21C7DCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x21c7d8) {
            ctx->pc = 0x21C770u;
            goto label_21c770;
        }
    }
    ctx->pc = 0x21C7E0u;
    // 0x21c7e0: 0x70009628
    ctx->pc = 0x21c7e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c7e4: 0x10000026
    ctx->pc = 0x21C7E4u;
    {
        const bool branch_taken_0x21c7e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C7E8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 2128));
        if (branch_taken_0x21c7e4) {
            ctx->pc = 0x21C880u;
            goto label_21c880;
        }
    }
    ctx->pc = 0x21C7ECu;
label_21c7ec:
    // 0x21c7ec: 0x4bede37d
    ctx->pc = 0x21c7ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21c7f0: 0x4bedeb7d
    ctx->pc = 0x21c7f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21c7f4: 0x4bedf37d
    ctx->pc = 0x21c7f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21c7f8: 0x4bedfb7d
    ctx->pc = 0x21c7f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21c7fc: 0xc66d0004
    ctx->pc = 0x21c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21c800: 0xc66e0008
    ctx->pc = 0x21c800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21c804: 0xc06c202
    ctx->pc = 0x21C804u;
    SET_GPR_U32(ctx, 31, 0x21C80Cu);
    ctx->pc = 0x21C808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C80Cu; }
        else if (ctx->pc != 0x21C80Cu) { ctx->pc = 0x21C80Cu; }
    }
    if (ctx->pc != 0x21C80Cu) { return; }
    ctx->pc = 0x21C80Cu;
    // 0x21c80c: 0xc06c157
    ctx->pc = 0x21C80Cu;
    SET_GPR_U32(ctx, 31, 0x21C814u);
    ctx->pc = 0x21C810u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C814u; }
        else if (ctx->pc != 0x21C814u) { ctx->pc = 0x21C814u; }
    }
    if (ctx->pc != 0x21C814u) { return; }
    ctx->pc = 0x21C814u;
    // 0x21c814: 0xc06c0fb
    ctx->pc = 0x21C814u;
    SET_GPR_U32(ctx, 31, 0x21C81Cu);
    ctx->pc = 0x21C818u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C81Cu; }
        else if (ctx->pc != 0x21C81Cu) { ctx->pc = 0x21C81Cu; }
    }
    if (ctx->pc != 0x21C81Cu) { return; }
    ctx->pc = 0x21C81Cu;
    // 0x21c81c: 0xc06c09f
    ctx->pc = 0x21C81Cu;
    SET_GPR_U32(ctx, 31, 0x21C824u);
    ctx->pc = 0x21C820u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C824u; }
        else if (ctx->pc != 0x21C824u) { ctx->pc = 0x21C824u; }
    }
    if (ctx->pc != 0x21C824u) { return; }
    ctx->pc = 0x21C824u;
    // 0x21c824: 0x8e030040
    ctx->pc = 0x21c824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21c828: 0x3c02003e
    ctx->pc = 0x21c828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x21c82c: 0x34420001
    ctx->pc = 0x21c82cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x21c830: 0x14620006
    ctx->pc = 0x21C830u;
    {
        const bool branch_taken_0x21c830 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21c830) {
            ctx->pc = 0x21C84Cu;
            goto label_21c84c;
        }
    }
    ctx->pc = 0x21C838u;
    // 0x21c838: 0xc60c2898
    ctx->pc = 0x21c838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c83c: 0xc0853e4
    ctx->pc = 0x21C83Cu;
    SET_GPR_U32(ctx, 31, 0x21C844u);
    ctx->pc = 0x21C840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C844u; }
        else if (ctx->pc != 0x21C844u) { ctx->pc = 0x21C844u; }
    }
    if (ctx->pc != 0x21C844u) { return; }
    ctx->pc = 0x21C844u;
    // 0x21c844: 0x10000007
    ctx->pc = 0x21C844u;
    {
        const bool branch_taken_0x21c844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C848u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x21c844) {
            ctx->pc = 0x21C864u;
            goto label_21c864;
        }
    }
    ctx->pc = 0x21C84Cu;
label_21c84c:
    // 0x21c84c: 0x8e020048
    ctx->pc = 0x21c84cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21c850: 0xc60c2898
    ctx->pc = 0x21c850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c854: 0xc0853e4
    ctx->pc = 0x21C854u;
    SET_GPR_U32(ctx, 31, 0x21C85Cu);
    ctx->pc = 0x21C858u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C85Cu; }
        else if (ctx->pc != 0x21C85Cu) { ctx->pc = 0x21C85Cu; }
    }
    if (ctx->pc != 0x21C85Cu) { return; }
    ctx->pc = 0x21C85Cu;
    // 0x21c85c: 0x0
    ctx->pc = 0x21c85cu;
    // NOP
    // 0x21c860: 0x4bff6b7e
    ctx->pc = 0x21c860u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_21c864:
    // 0x21c864: 0x4bfe6b7e
    ctx->pc = 0x21c864u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21c868: 0x4bfd6b7e
    ctx->pc = 0x21c868u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21c86c: 0x4bfc6b7e
    ctx->pc = 0x21c86cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21c870: 0x26730040
    ctx->pc = 0x21c870u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 64));
    // 0x21c874: 0x26310004
    ctx->pc = 0x21c874u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x21c878: 0x26520001
    ctx->pc = 0x21c878u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x21c87c: 0x0
    ctx->pc = 0x21c87cu;
    // NOP
label_21c880:
    // 0x21c880: 0x8e030058
    ctx->pc = 0x21c880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x21c884: 0x243182a
    ctx->pc = 0x21c884u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x21c888: 0x1460ffd8
    ctx->pc = 0x21C888u;
    {
        const bool branch_taken_0x21c888 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c888) {
            ctx->pc = 0x21C7ECu;
            goto label_21c7ec;
        }
    }
    ctx->pc = 0x21C890u;
    // 0x21c890: 0x10000019
    ctx->pc = 0x21C890u;
    {
        const bool branch_taken_0x21c890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C894u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21c890) {
            ctx->pc = 0x21C8F8u;
            goto label_21c8f8;
        }
    }
    ctx->pc = 0x21C898u;
label_21c898:
    // 0x21c898: 0x4bede37d
    ctx->pc = 0x21c898u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21c89c: 0x4bedeb7d
    ctx->pc = 0x21c89cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21c8a0: 0x4bedf37d
    ctx->pc = 0x21c8a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21c8a4: 0x4bedfb7d
    ctx->pc = 0x21c8a4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21c8a8: 0xc66d0004
    ctx->pc = 0x21c8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21c8ac: 0xc66e0008
    ctx->pc = 0x21c8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21c8b0: 0xc06c202
    ctx->pc = 0x21C8B0u;
    SET_GPR_U32(ctx, 31, 0x21C8B8u);
    ctx->pc = 0x21C8B4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8B8u; }
        else if (ctx->pc != 0x21C8B8u) { ctx->pc = 0x21C8B8u; }
    }
    if (ctx->pc != 0x21C8B8u) { return; }
    ctx->pc = 0x21C8B8u;
    // 0x21c8b8: 0xc06c157
    ctx->pc = 0x21C8B8u;
    SET_GPR_U32(ctx, 31, 0x21C8C0u);
    ctx->pc = 0x21C8BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8C0u; }
        else if (ctx->pc != 0x21C8C0u) { ctx->pc = 0x21C8C0u; }
    }
    if (ctx->pc != 0x21C8C0u) { return; }
    ctx->pc = 0x21C8C0u;
    // 0x21c8c0: 0xc06c0fb
    ctx->pc = 0x21C8C0u;
    SET_GPR_U32(ctx, 31, 0x21C8C8u);
    ctx->pc = 0x21C8C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8C8u; }
        else if (ctx->pc != 0x21C8C8u) { ctx->pc = 0x21C8C8u; }
    }
    if (ctx->pc != 0x21C8C8u) { return; }
    ctx->pc = 0x21C8C8u;
    // 0x21c8c8: 0xc06c09f
    ctx->pc = 0x21C8C8u;
    SET_GPR_U32(ctx, 31, 0x21C8D0u);
    ctx->pc = 0x21C8CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8D0u; }
        else if (ctx->pc != 0x21C8D0u) { ctx->pc = 0x21C8D0u; }
    }
    if (ctx->pc != 0x21C8D0u) { return; }
    ctx->pc = 0x21C8D0u;
    // 0x21c8d0: 0x8e02004c
    ctx->pc = 0x21c8d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x21c8d4: 0xc60c2898
    ctx->pc = 0x21c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c8d8: 0xc0853e4
    ctx->pc = 0x21C8D8u;
    SET_GPR_U32(ctx, 31, 0x21C8E0u);
    ctx->pc = 0x21C8DCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C8E0u; }
        else if (ctx->pc != 0x21C8E0u) { ctx->pc = 0x21C8E0u; }
    }
    if (ctx->pc != 0x21C8E0u) { return; }
    ctx->pc = 0x21C8E0u;
    // 0x21c8e0: 0x4bff6b7e
    ctx->pc = 0x21c8e0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21c8e4: 0x4bfe6b7e
    ctx->pc = 0x21c8e4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21c8e8: 0x4bfd6b7e
    ctx->pc = 0x21c8e8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21c8ec: 0x4bfc6b7e
    ctx->pc = 0x21c8ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21c8f0: 0x26730040
    ctx->pc = 0x21c8f0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 64));
    // 0x21c8f4: 0x26310001
    ctx->pc = 0x21c8f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_21c8f8:
    // 0x21c8f8: 0x8e03005c
    ctx->pc = 0x21c8f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x21c8fc: 0x223182a
    ctx->pc = 0x21c8fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x21c900: 0x1460ffe5
    ctx->pc = 0x21C900u;
    {
        const bool branch_taken_0x21c900 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21C904u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x21c900) {
            ctx->pc = 0x21C898u;
            goto label_21c898;
        }
    }
    ctx->pc = 0x21C908u;
    // 0x21c908: 0x70009628
    ctx->pc = 0x21c908u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c90c: 0x10000026
    ctx->pc = 0x21C90Cu;
    {
        const bool branch_taken_0x21c90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C910u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 2288));
        if (branch_taken_0x21c90c) {
            ctx->pc = 0x21C9A8u;
            goto label_21c9a8;
        }
    }
    ctx->pc = 0x21C914u;
label_21c914:
    // 0x21c914: 0x4bede37d
    ctx->pc = 0x21c914u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21c918: 0x4bedeb7d
    ctx->pc = 0x21c918u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21c91c: 0x4bedf37d
    ctx->pc = 0x21c91cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21c920: 0x4bedfb7d
    ctx->pc = 0x21c920u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21c924: 0xc66d0004
    ctx->pc = 0x21c924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21c928: 0xc66e0008
    ctx->pc = 0x21c928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21c92c: 0xc06c202
    ctx->pc = 0x21C92Cu;
    SET_GPR_U32(ctx, 31, 0x21C934u);
    ctx->pc = 0x21C930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C934u; }
        else if (ctx->pc != 0x21C934u) { ctx->pc = 0x21C934u; }
    }
    if (ctx->pc != 0x21C934u) { return; }
    ctx->pc = 0x21C934u;
    // 0x21c934: 0xc06c157
    ctx->pc = 0x21C934u;
    SET_GPR_U32(ctx, 31, 0x21C93Cu);
    ctx->pc = 0x21C938u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C93Cu; }
        else if (ctx->pc != 0x21C93Cu) { ctx->pc = 0x21C93Cu; }
    }
    if (ctx->pc != 0x21C93Cu) { return; }
    ctx->pc = 0x21C93Cu;
    // 0x21c93c: 0xc06c0fb
    ctx->pc = 0x21C93Cu;
    SET_GPR_U32(ctx, 31, 0x21C944u);
    ctx->pc = 0x21C940u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C944u; }
        else if (ctx->pc != 0x21C944u) { ctx->pc = 0x21C944u; }
    }
    if (ctx->pc != 0x21C944u) { return; }
    ctx->pc = 0x21C944u;
    // 0x21c944: 0xc06c09f
    ctx->pc = 0x21C944u;
    SET_GPR_U32(ctx, 31, 0x21C94Cu);
    ctx->pc = 0x21C948u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C94Cu; }
        else if (ctx->pc != 0x21C94Cu) { ctx->pc = 0x21C94Cu; }
    }
    if (ctx->pc != 0x21C94Cu) { return; }
    ctx->pc = 0x21C94Cu;
    // 0x21c94c: 0x8e030040
    ctx->pc = 0x21c94cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21c950: 0x3c02003e
    ctx->pc = 0x21c950u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x21c954: 0x34420001
    ctx->pc = 0x21c954u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x21c958: 0x14620006
    ctx->pc = 0x21C958u;
    {
        const bool branch_taken_0x21c958 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21c958) {
            ctx->pc = 0x21C974u;
            goto label_21c974;
        }
    }
    ctx->pc = 0x21C960u;
    // 0x21c960: 0xc60c2898
    ctx->pc = 0x21c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c964: 0xc0853e4
    ctx->pc = 0x21C964u;
    SET_GPR_U32(ctx, 31, 0x21C96Cu);
    ctx->pc = 0x21C968u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C96Cu; }
        else if (ctx->pc != 0x21C96Cu) { ctx->pc = 0x21C96Cu; }
    }
    if (ctx->pc != 0x21C96Cu) { return; }
    ctx->pc = 0x21C96Cu;
    // 0x21c96c: 0x10000007
    ctx->pc = 0x21C96Cu;
    {
        const bool branch_taken_0x21c96c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C970u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x21c96c) {
            ctx->pc = 0x21C98Cu;
            goto label_21c98c;
        }
    }
    ctx->pc = 0x21C974u;
label_21c974:
    // 0x21c974: 0x8e020050
    ctx->pc = 0x21c974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21c978: 0xc60c2898
    ctx->pc = 0x21c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c97c: 0xc0853e4
    ctx->pc = 0x21C97Cu;
    SET_GPR_U32(ctx, 31, 0x21C984u);
    ctx->pc = 0x21C980u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C984u; }
        else if (ctx->pc != 0x21C984u) { ctx->pc = 0x21C984u; }
    }
    if (ctx->pc != 0x21C984u) { return; }
    ctx->pc = 0x21C984u;
    // 0x21c984: 0x0
    ctx->pc = 0x21c984u;
    // NOP
    // 0x21c988: 0x4bff6b7e
    ctx->pc = 0x21c988u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_21c98c:
    // 0x21c98c: 0x4bfe6b7e
    ctx->pc = 0x21c98cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21c990: 0x4bfd6b7e
    ctx->pc = 0x21c990u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21c994: 0x4bfc6b7e
    ctx->pc = 0x21c994u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21c998: 0x26730040
    ctx->pc = 0x21c998u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 64));
    // 0x21c99c: 0x26310004
    ctx->pc = 0x21c99cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x21c9a0: 0x26520001
    ctx->pc = 0x21c9a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x21c9a4: 0x0
    ctx->pc = 0x21c9a4u;
    // NOP
label_21c9a8:
    // 0x21c9a8: 0x8e030060
    ctx->pc = 0x21c9a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x21c9ac: 0x243182a
    ctx->pc = 0x21c9acu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x21c9b0: 0x1460ffd8
    ctx->pc = 0x21C9B0u;
    {
        const bool branch_taken_0x21c9b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21c9b0) {
            ctx->pc = 0x21C914u;
            goto label_21c914;
        }
    }
    ctx->pc = 0x21C9B8u;
label_21c9b8:
    // 0x21c9b8: 0x7bbf0040
    ctx->pc = 0x21c9b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21c9bc:
    // 0x21c9bc: 0x7bb30030
    ctx->pc = 0x21c9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c9c0: 0x7bb20020
    ctx->pc = 0x21c9c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c9c4: 0x7bb10010
    ctx->pc = 0x21c9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c9c8: 0x7bb00000
    ctx->pc = 0x21c9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c9cc: 0x3e00008
    ctx->pc = 0x21C9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C9D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C538u: goto label_21c538;
            case 0x21C5B8u: goto label_21c5b8;
            case 0x21C63Cu: goto label_21c63c;
            case 0x21C640u: goto label_21c640;
            case 0x21C670u: goto label_21c670;
            case 0x21C69Cu: goto label_21c69c;
            case 0x21C6B4u: goto label_21c6b4;
            case 0x21C6ECu: goto label_21c6ec;
            case 0x21C750u: goto label_21c750;
            case 0x21C768u: goto label_21c768;
            case 0x21C770u: goto label_21c770;
            case 0x21C7D0u: goto label_21c7d0;
            case 0x21C7ECu: goto label_21c7ec;
            case 0x21C84Cu: goto label_21c84c;
            case 0x21C864u: goto label_21c864;
            case 0x21C880u: goto label_21c880;
            case 0x21C898u: goto label_21c898;
            case 0x21C8F8u: goto label_21c8f8;
            case 0x21C914u: goto label_21c914;
            case 0x21C974u: goto label_21c974;
            case 0x21C98Cu: goto label_21c98c;
            case 0x21C9A8u: goto label_21c9a8;
            case 0x21C9B8u: goto label_21c9b8;
            case 0x21C9BCu: goto label_21c9bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C9D4u;
}
