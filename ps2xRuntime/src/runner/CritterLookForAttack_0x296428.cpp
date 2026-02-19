#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLookForAttack
// Address: 0x296428 - 0x2967e8
void CritterLookForAttack_0x296428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x296428u;

    // 0x296428: 0x27bdff40
    ctx->pc = 0x296428u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x29642c: 0xffbf00a0
    ctx->pc = 0x29642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x296430: 0xffbe0090
    ctx->pc = 0x296430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x296434: 0xffb70080
    ctx->pc = 0x296434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x296438: 0xffb60070
    ctx->pc = 0x296438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x29643c: 0xffb50060
    ctx->pc = 0x29643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x296440: 0xffb40050
    ctx->pc = 0x296440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x296444: 0xffb30040
    ctx->pc = 0x296444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x296448: 0xffb20030
    ctx->pc = 0x296448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29644c: 0xffb10020
    ctx->pc = 0x29644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x296450: 0xffb00010
    ctx->pc = 0x296450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x296454: 0xe7b500b8
    ctx->pc = 0x296454u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x296458: 0xe7b400b0
    ctx->pc = 0x296458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29645c: 0x80982d
    ctx->pc = 0x29645cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296460: 0x2417ffff
    ctx->pc = 0x296460u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296464: 0x2402ffff
    ctx->pc = 0x296464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296468: 0xafa20000
    ctx->pc = 0x296468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29646c: 0x2416ffff
    ctx->pc = 0x29646cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296470: 0x3c014974
    ctx->pc = 0x296470u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18804 << 16));
    // 0x296474: 0x342123f0
    ctx->pc = 0x296474u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 9200));
    // 0x296478: 0x4481a000
    ctx->pc = 0x296478u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29647c: 0x86650128
    ctx->pc = 0x29647cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x296480: 0x4a00017
    ctx->pc = 0x296480u;
    {
        const bool branch_taken_0x296480 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x296484u;
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 296)));
        if (branch_taken_0x296480) {
            ctx->pc = 0x2964E0u;
            goto label_2964e0;
        }
    }
    ctx->pc = 0x296488u;
    // 0x296488: 0x8662012c
    ctx->pc = 0x296488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x29648c: 0x24440001
    ctx->pc = 0x29648cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x296490: 0x28820008
    ctx->pc = 0x296490u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x296494: 0x10400013
    ctx->pc = 0x296494u;
    {
        const bool branch_taken_0x296494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x296498u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
        if (branch_taken_0x296494) {
            ctx->pc = 0x2964E4u;
            goto label_2964e4;
        }
    }
    ctx->pc = 0x29649Cu;
    // 0x29649c: 0x8c430128
    ctx->pc = 0x29649cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2964a0: 0x24020050
    ctx->pc = 0x2964a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2964a4: 0xa21018
    ctx->pc = 0x2964a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2964a8: 0x431021
    ctx->pc = 0x2964a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2964ac: 0x41840
    ctx->pc = 0x2964acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2964b0: 0x431021
    ctx->pc = 0x2964b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2964b4: 0x94420020
    ctx->pc = 0x2964b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2964b8: 0xa6620126
    ctx->pc = 0x2964b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 294), (uint16_t)GPR_U32(ctx, 2));
    // 0x2964bc: 0x21400
    ctx->pc = 0x2964bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2964c0: 0x4420008
    ctx->pc = 0x2964C0u;
    {
        const bool branch_taken_0x2964c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2964c0) {
            ctx->pc = 0x2964C4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->pc = 0x2964E4u;
            goto label_2964e4;
        }
    }
    ctx->pc = 0x2964C8u;
    // 0x2964c8: 0x100000b9
    ctx->pc = 0x2964C8u;
    {
        const bool branch_taken_0x2964c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2964CCu;
        WRITE16(ADD32(GPR_U32(ctx, 19), 298), (uint16_t)GPR_U32(ctx, 6));
        if (branch_taken_0x2964c8) {
            ctx->pc = 0x2967B0u;
            goto label_2967b0;
        }
    }
    ctx->pc = 0x2964D0u;
label_2964d0:
    // 0x2964d0: 0x80b82d
    ctx->pc = 0x2964d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2964d4: 0x2403ffff
    ctx->pc = 0x2964d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2964d8: 0x100000a4
    ctx->pc = 0x2964D8u;
    {
        const bool branch_taken_0x2964d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2964DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x2964d8) {
            ctx->pc = 0x29676Cu;
            goto label_29676c;
        }
    }
    ctx->pc = 0x2964E0u;
label_2964e0:
    // 0x2964e0: 0x8e620004
    ctx->pc = 0x2964e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2964e4:
    // 0x2964e4: 0x8c550128
    ctx->pc = 0x2964e4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2964e8: 0x84420114
    ctx->pc = 0x2964e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x2964ec: 0x18400034
    ctx->pc = 0x2964ECu;
    {
        const bool branch_taken_0x2964ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2964F0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2964ec) {
            ctx->pc = 0x2965C0u;
            goto label_2965c0;
        }
    }
    ctx->pc = 0x2964F4u;
    // 0x2964f4: 0x3c1e0031
    ctx->pc = 0x2964f4u;
    SET_GPR_U32(ctx, 30, ((uint32_t)49 << 16));
    // 0x2964f8: 0x2674035c
    ctx->pc = 0x2964f8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 860));
    // 0x2964fc: 0x24020050
    ctx->pc = 0x2964fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_296500:
    // 0x296500: 0x2421018
    ctx->pc = 0x296500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296504: 0x552821
    ctx->pc = 0x296504u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x296508: 0x86620128
    ctx->pc = 0x296508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x29650c: 0x52420027
    ctx->pc = 0x29650Cu;
    {
        const bool branch_taken_0x29650c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        if (branch_taken_0x29650c) {
            ctx->pc = 0x296510u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2965ACu;
            goto label_2965ac;
        }
    }
    ctx->pc = 0x296514u;
    // 0x296514: 0x94a20010
    ctx->pc = 0x296514u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x296518: 0x30420002
    ctx->pc = 0x296518u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x29651c: 0x50400006
    ctx->pc = 0x29651Cu;
    {
        const bool branch_taken_0x29651c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29651c) {
            ctx->pc = 0x296520u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->pc = 0x296538u;
            goto label_296538;
        }
    }
    ctx->pc = 0x296524u;
    // 0x296524: 0x82630486
    ctx->pc = 0x296524u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1158)));
    // 0x296528: 0x82620487
    ctx->pc = 0x296528u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1159)));
    // 0x29652c: 0x5462001f
    ctx->pc = 0x29652Cu;
    {
        const bool branch_taken_0x29652c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x29652c) {
            ctx->pc = 0x296530u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2965ACu;
            goto label_2965ac;
        }
    }
    ctx->pc = 0x296534u;
    // 0x296534: 0x94a20010
    ctx->pc = 0x296534u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_296538:
    // 0x296538: 0x30421000
    ctx->pc = 0x296538u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x29653c: 0x5440001b
    ctx->pc = 0x29653Cu;
    {
        const bool branch_taken_0x29653c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29653c) {
            ctx->pc = 0x296540u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2965ACu;
            goto label_2965ac;
        }
    }
    ctx->pc = 0x296544u;
    // 0x296544: 0x121080
    ctx->pc = 0x296544u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x296548: 0x2828821
    ctx->pc = 0x296548u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29654c: 0xc6210000
    ctx->pc = 0x29654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296550: 0xc4a00014
    ctx->pc = 0x296550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296554: 0x46000840
    ctx->pc = 0x296554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x296558: 0xc7c0ffa4
    ctx->pc = 0x296558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29655c: 0x46010034
    ctx->pc = 0x29655cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296560: 0x0
    ctx->pc = 0x296560u;
    // NOP
    // 0x296564: 0x45030011
    ctx->pc = 0x296564u;
    {
        const bool branch_taken_0x296564 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x296564) {
            ctx->pc = 0x296568u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2965ACu;
            goto label_2965ac;
        }
    }
    ctx->pc = 0x29656Cu;
    // 0x29656c: 0x260202d
    ctx->pc = 0x29656cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296570: 0x24a50030
    ctx->pc = 0x296570u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    // 0x296574: 0xc0a6db6
    ctx->pc = 0x296574u;
    SET_GPR_U32(ctx, 31, 0x29657Cu);
    ctx->pc = 0x296578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29B6D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterMoveGetTarget_0x29b6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29657Cu; }
    }
    if (ctx->pc != 0x29657Cu) { return; }
    ctx->pc = 0x29657Cu;
    // 0x29657c: 0x40802d
    ctx->pc = 0x29657cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296580: 0x602000a
    ctx->pc = 0x296580u;
    {
        const bool branch_taken_0x296580 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x296580) {
            ctx->pc = 0x296584u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2965ACu;
            goto label_2965ac;
        }
    }
    ctx->pc = 0x296588u;
    // 0x296588: 0xc6210000
    ctx->pc = 0x296588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29658c: 0x46140834
    ctx->pc = 0x29658cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296590: 0x0
    ctx->pc = 0x296590u;
    // NOP
    // 0x296594: 0x45020005
    ctx->pc = 0x296594u;
    {
        const bool branch_taken_0x296594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x296594) {
            ctx->pc = 0x296598u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2965ACu;
            goto label_2965ac;
        }
    }
    ctx->pc = 0x29659Cu;
    // 0x29659c: 0xafb20000
    ctx->pc = 0x29659cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x2965a0: 0x200b82d
    ctx->pc = 0x2965a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2965a4: 0x46000d06
    ctx->pc = 0x2965a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x2965a8: 0x26520001
    ctx->pc = 0x2965a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2965ac:
    // 0x2965ac: 0x8e620004
    ctx->pc = 0x2965acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2965b0: 0x84420114
    ctx->pc = 0x2965b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x2965b4: 0x242102a
    ctx->pc = 0x2965b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x2965b8: 0x1440ffd1
    ctx->pc = 0x2965B8u;
    {
        const bool branch_taken_0x2965b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2965BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x2965b8) {
            ctx->pc = 0x296500u;
            goto label_296500;
        }
    }
    ctx->pc = 0x2965C0u;
label_2965c0:
    // 0x2965c0: 0x8e620004
    ctx->pc = 0x2965c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2965c4: 0x8c550124
    ctx->pc = 0x2965c4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x2965c8: 0x84420110
    ctx->pc = 0x2965c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x2965cc: 0x18400067
    ctx->pc = 0x2965CCu;
    {
        const bool branch_taken_0x2965cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2965D0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2965cc) {
            ctx->pc = 0x29676Cu;
            goto label_29676c;
        }
    }
    ctx->pc = 0x2965D4u;
    // 0x2965d4: 0x241e0090
    ctx->pc = 0x2965d4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 144));
    // 0x2965d8: 0x4480a800
    ctx->pc = 0x2965d8u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x2965dc: 0x2674025c
    ctx->pc = 0x2965dcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 604));
    // 0x2965e0: 0x86620124
    ctx->pc = 0x2965e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x2965e4: 0x0
    ctx->pc = 0x2965e4u;
    // NOP
label_2965e8:
    // 0x2965e8: 0x1242005a
    ctx->pc = 0x2965E8u;
    {
        const bool branch_taken_0x2965e8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x2965ECu;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2965e8) {
            ctx->pc = 0x296754u;
            goto label_296754;
        }
    }
    ctx->pc = 0x2965F0u;
    // 0x2965f0: 0x558821
    ctx->pc = 0x2965f0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2965f4: 0x8e230000
    ctx->pc = 0x2965f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2965f8: 0x2c62007f
    ctx->pc = 0x2965f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 127));
    // 0x2965fc: 0x54400056
    ctx->pc = 0x2965FCu;
    {
        const bool branch_taken_0x2965fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2965fc) {
            ctx->pc = 0x296600u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x296758u;
            goto label_296758;
        }
    }
    ctx->pc = 0x296604u;
    // 0x296604: 0x2c6200f0
    ctx->pc = 0x296604u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 240));
    // 0x296608: 0x50400053
    ctx->pc = 0x296608u;
    {
        const bool branch_taken_0x296608 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x296608) {
            ctx->pc = 0x29660Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x296758u;
            goto label_296758;
        }
    }
    ctx->pc = 0x296610u;
    // 0x296610: 0x8e230004
    ctx->pc = 0x296610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x296614: 0x30620004
    ctx->pc = 0x296614u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
    // 0x296618: 0x5440004f
    ctx->pc = 0x296618u;
    {
        const bool branch_taken_0x296618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x296618) {
            ctx->pc = 0x29661Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x296758u;
            goto label_296758;
        }
    }
    ctx->pc = 0x296620u;
    // 0x296620: 0x30620002
    ctx->pc = 0x296620u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x296624: 0x50400006
    ctx->pc = 0x296624u;
    {
        const bool branch_taken_0x296624 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x296624) {
            ctx->pc = 0x296628u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x296640u;
            goto label_296640;
        }
    }
    ctx->pc = 0x29662Cu;
    // 0x29662c: 0x82630486
    ctx->pc = 0x29662cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1158)));
    // 0x296630: 0x82620487
    ctx->pc = 0x296630u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1159)));
    // 0x296634: 0x54620048
    ctx->pc = 0x296634u;
    {
        const bool branch_taken_0x296634 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x296634) {
            ctx->pc = 0x296638u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x296758u;
            goto label_296758;
        }
    }
    ctx->pc = 0x29663Cu;
    // 0x29663c: 0x8e220004
    ctx->pc = 0x29663cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_296640:
    // 0x296640: 0x30420010
    ctx->pc = 0x296640u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x296644: 0x5040000c
    ctx->pc = 0x296644u;
    {
        const bool branch_taken_0x296644 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x296644) {
            ctx->pc = 0x296648u;
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 308)));
            ctx->pc = 0x296678u;
            goto label_296678;
        }
    }
    ctx->pc = 0x29664Cu;
    // 0x29664c: 0x8622000e
    ctx->pc = 0x29664cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x296650: 0x4420041
    ctx->pc = 0x296650u;
    {
        const bool branch_taken_0x296650 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x296650) {
            ctx->pc = 0x296654u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x296758u;
            goto label_296758;
        }
    }
    ctx->pc = 0x296658u;
    // 0x296658: 0x86220054
    ctx->pc = 0x296658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x29665c: 0x4400005
    ctx->pc = 0x29665Cu;
    {
        const bool branch_taken_0x29665c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x296660u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29665c) {
            ctx->pc = 0x296674u;
            goto label_296674;
        }
    }
    ctx->pc = 0x296664u;
    // 0x296664: 0x751021
    ctx->pc = 0x296664u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x296668: 0x8442000e
    ctx->pc = 0x296668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x29666c: 0x442003a
    ctx->pc = 0x29666Cu;
    {
        const bool branch_taken_0x29666c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x29666c) {
            ctx->pc = 0x296670u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x296758u;
            goto label_296758;
        }
    }
    ctx->pc = 0x296674u;
label_296674:
    // 0x296674: 0x86640134
    ctx->pc = 0x296674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 308)));
label_296678:
    // 0x296678: 0x4800004
    ctx->pc = 0x296678u;
    {
        const bool branch_taken_0x296678 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29667Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 129));
        if (branch_taken_0x296678) {
            ctx->pc = 0x29668Cu;
            goto label_29668c;
        }
    }
    ctx->pc = 0x296680u;
    // 0x296680: 0x8e230000
    ctx->pc = 0x296680u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x296684: 0x5062ff92
    ctx->pc = 0x296684u;
    {
        const bool branch_taken_0x296684 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x296684) {
            ctx->pc = 0x296688u;
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2964D0u;
            goto label_2964d0;
        }
    }
    ctx->pc = 0x29668Cu;
label_29668c:
    // 0x29668c: 0xc6210080
    ctx->pc = 0x29668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296690: 0x4601a834
    ctx->pc = 0x296690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296694: 0x0
    ctx->pc = 0x296694u;
    // NOP
    // 0x296698: 0x4500000a
    ctx->pc = 0x296698u;
    {
        const bool branch_taken_0x296698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29669Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x296698) {
            ctx->pc = 0x2966C4u;
            goto label_2966c4;
        }
    }
    ctx->pc = 0x2966A0u;
    // 0x2966a0: 0x2821021
    ctx->pc = 0x2966a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2966a4: 0xc4400000
    ctx->pc = 0x2966a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2966a8: 0x46010000
    ctx->pc = 0x2966a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2966ac: 0x3c040031
    ctx->pc = 0x2966acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x2966b0: 0xc481ffa4
    ctx->pc = 0x2966b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2966b4: 0x46000834
    ctx->pc = 0x2966b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2966b8: 0x0
    ctx->pc = 0x2966b8u;
    // NOP
    // 0x2966bc: 0x45030026
    ctx->pc = 0x2966BCu;
    {
        const bool branch_taken_0x2966bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2966bc) {
            ctx->pc = 0x2966C0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x296758u;
            goto label_296758;
        }
    }
    ctx->pc = 0x2966C4u;
label_2966c4:
    // 0x2966c4: 0x260202d
    ctx->pc = 0x2966c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966c8: 0x26250060
    ctx->pc = 0x2966c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 96));
    // 0x2966cc: 0xc0a6db6
    ctx->pc = 0x2966CCu;
    SET_GPR_U32(ctx, 31, 0x2966D4u);
    ctx->pc = 0x2966D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29B6D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterMoveGetTarget_0x29b6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2966D4u; }
    }
    if (ctx->pc != 0x2966D4u) { return; }
    ctx->pc = 0x2966D4u;
    // 0x2966d4: 0x40802d
    ctx->pc = 0x2966d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966d8: 0x600001e
    ctx->pc = 0x2966D8u;
    {
        const bool branch_taken_0x2966d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2966DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x2966d8) {
            ctx->pc = 0x296754u;
            goto label_296754;
        }
    }
    ctx->pc = 0x2966E0u;
    // 0x2966e0: 0x2821021
    ctx->pc = 0x2966e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2966e4: 0xc4400000
    ctx->pc = 0x2966e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2966e8: 0x46140034
    ctx->pc = 0x2966e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2966ec: 0x0
    ctx->pc = 0x2966ecu;
    // NOP
    // 0x2966f0: 0x45000006
    ctx->pc = 0x2966F0u;
    {
        const bool branch_taken_0x2966f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2966F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2966f0) {
            ctx->pc = 0x29670Cu;
            goto label_29670c;
        }
    }
    ctx->pc = 0x2966F8u;
    // 0x2966f8: 0x240b02d
    ctx->pc = 0x2966f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966fc: 0x200b82d
    ctx->pc = 0x2966fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296700: 0x46000506
    ctx->pc = 0x296700u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x296704: 0x10000013
    ctx->pc = 0x296704u;
    {
        const bool branch_taken_0x296704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x296708u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x296704) {
            ctx->pc = 0x296754u;
            goto label_296754;
        }
    }
    ctx->pc = 0x29670Cu;
label_29670c:
    // 0x29670c: 0x8fa30000
    ctx->pc = 0x29670cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296710: 0x4630011
    ctx->pc = 0x296710u;
    {
        const bool branch_taken_0x296710 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x296710) {
            ctx->pc = 0x296714u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x296758u;
            goto label_296758;
        }
    }
    ctx->pc = 0x296718u;
    // 0x296718: 0x6c00007
    ctx->pc = 0x296718u;
    {
        const bool branch_taken_0x296718 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x29671Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x296718) {
            ctx->pc = 0x296738u;
            goto label_296738;
        }
    }
    ctx->pc = 0x296720u;
    // 0x296720: 0x552021
    ctx->pc = 0x296720u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x296724: 0xc0a5574
    ctx->pc = 0x296724u;
    SET_GPR_U32(ctx, 31, 0x29672Cu);
    ctx->pc = 0x296728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2955D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAnimInterrupt_0x2955d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29672Cu; }
    }
    if (ctx->pc != 0x29672Cu) { return; }
    ctx->pc = 0x29672Cu;
    // 0x29672c: 0x28420002
    ctx->pc = 0x29672cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x296730: 0x54400009
    ctx->pc = 0x296730u;
    {
        const bool branch_taken_0x296730 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x296730) {
            ctx->pc = 0x296734u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x296758u;
            goto label_296758;
        }
    }
    ctx->pc = 0x296738u;
label_296738:
    // 0x296738: 0x240b02d
    ctx->pc = 0x296738u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29673c: 0x200b82d
    ctx->pc = 0x29673cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296740: 0x161080
    ctx->pc = 0x296740u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 2));
    // 0x296744: 0x2821021
    ctx->pc = 0x296744u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x296748: 0xc4540000
    ctx->pc = 0x296748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29674c: 0x2403ffff
    ctx->pc = 0x29674cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296750: 0xafa30000
    ctx->pc = 0x296750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_296754:
    // 0x296754: 0x26520001
    ctx->pc = 0x296754u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_296758:
    // 0x296758: 0x8e620004
    ctx->pc = 0x296758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29675c: 0x84420110
    ctx->pc = 0x29675cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x296760: 0x242102a
    ctx->pc = 0x296760u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x296764: 0x5440ffa0
    ctx->pc = 0x296764u;
    {
        const bool branch_taken_0x296764 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x296764) {
            ctx->pc = 0x296768u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 292)));
            ctx->pc = 0x2965E8u;
            goto label_2965e8;
        }
    }
    ctx->pc = 0x29676Cu;
label_29676c:
    // 0x29676c: 0x8fa40000
    ctx->pc = 0x29676cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296770: 0x480000b
    ctx->pc = 0x296770u;
    {
        const bool branch_taken_0x296770 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x296770) {
            ctx->pc = 0x2967A0u;
            goto label_2967a0;
        }
    }
    ctx->pc = 0x296778u;
    // 0x296778: 0xa664012a
    ctx->pc = 0x296778u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 298), (uint16_t)GPR_U32(ctx, 4));
    // 0x29677c: 0xa6770132
    ctx->pc = 0x29677cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 23));
    // 0x296780: 0x8e620004
    ctx->pc = 0x296780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x296784: 0x8c430128
    ctx->pc = 0x296784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x296788: 0x24020050
    ctx->pc = 0x296788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x29678c: 0x821018
    ctx->pc = 0x29678cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296790: 0x431021
    ctx->pc = 0x296790u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296794: 0x94420020
    ctx->pc = 0x296794u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x296798: 0x10000005
    ctx->pc = 0x296798u;
    {
        const bool branch_taken_0x296798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29679Cu;
        WRITE16(ADD32(GPR_U32(ctx, 19), 294), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x296798) {
            ctx->pc = 0x2967B0u;
            goto label_2967b0;
        }
    }
    ctx->pc = 0x2967A0u;
label_2967a0:
    // 0x2967a0: 0x6c00004
    ctx->pc = 0x2967A0u;
    {
        const bool branch_taken_0x2967a0 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x2967A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2967a0) {
            ctx->pc = 0x2967B4u;
            goto label_2967b4;
        }
    }
    ctx->pc = 0x2967A8u;
    // 0x2967a8: 0xa6760126
    ctx->pc = 0x2967a8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 294), (uint16_t)GPR_U32(ctx, 22));
    // 0x2967ac: 0xa6770132
    ctx->pc = 0x2967acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 23));
label_2967b0:
    // 0x2967b0: 0xdfbf00a0
    ctx->pc = 0x2967b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2967b4:
    // 0x2967b4: 0xdfbe0090
    ctx->pc = 0x2967b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2967b8: 0xdfb70080
    ctx->pc = 0x2967b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2967bc: 0xdfb60070
    ctx->pc = 0x2967bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2967c0: 0xdfb50060
    ctx->pc = 0x2967c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2967c4: 0xdfb40050
    ctx->pc = 0x2967c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2967c8: 0xdfb30040
    ctx->pc = 0x2967c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2967cc: 0xdfb20030
    ctx->pc = 0x2967ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2967d0: 0xdfb10020
    ctx->pc = 0x2967d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2967d4: 0xdfb00010
    ctx->pc = 0x2967d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2967d8: 0xc7b500b8
    ctx->pc = 0x2967d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2967dc: 0xc7b400b0
    ctx->pc = 0x2967dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2967e0: 0x3e00008
    ctx->pc = 0x2967E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2967E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2964D0u: goto label_2964d0;
            case 0x2964E0u: goto label_2964e0;
            case 0x2964E4u: goto label_2964e4;
            case 0x296500u: goto label_296500;
            case 0x296538u: goto label_296538;
            case 0x2965ACu: goto label_2965ac;
            case 0x2965C0u: goto label_2965c0;
            case 0x2965E8u: goto label_2965e8;
            case 0x296640u: goto label_296640;
            case 0x296674u: goto label_296674;
            case 0x296678u: goto label_296678;
            case 0x29668Cu: goto label_29668c;
            case 0x2966C4u: goto label_2966c4;
            case 0x29670Cu: goto label_29670c;
            case 0x296738u: goto label_296738;
            case 0x296754u: goto label_296754;
            case 0x296758u: goto label_296758;
            case 0x29676Cu: goto label_29676c;
            case 0x2967A0u: goto label_2967a0;
            case 0x2967B0u: goto label_2967b0;
            case 0x2967B4u: goto label_2967b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2967E8u;
}
