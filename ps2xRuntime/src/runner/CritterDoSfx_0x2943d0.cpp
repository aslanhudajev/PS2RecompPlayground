#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDoSfx
// Address: 0x2943d0 - 0x294824
void CritterDoSfx_0x2943d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2943d0u;

label_2943d0:
    // 0x2943d0: 0x27bdff10
    ctx->pc = 0x2943d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2943d4: 0xffbf00e0
    ctx->pc = 0x2943d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2943d8: 0xffb700d0
    ctx->pc = 0x2943d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x2943dc: 0xffb600c0
    ctx->pc = 0x2943dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2943e0: 0xffb500b0
    ctx->pc = 0x2943e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2943e4: 0xffb400a0
    ctx->pc = 0x2943e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2943e8: 0xffb30090
    ctx->pc = 0x2943e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2943ec: 0xffb20080
    ctx->pc = 0x2943ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2943f0: 0xffb10070
    ctx->pc = 0x2943f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2943f4: 0xffb00060
    ctx->pc = 0x2943f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2943f8: 0x80882d
    ctx->pc = 0x2943f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2943fc: 0xc0a02d
    ctx->pc = 0x2943fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294400: 0xe0b02d
    ctx->pc = 0x294400u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294404: 0x100802d
    ctx->pc = 0x294404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294408: 0x2415ffff
    ctx->pc = 0x294408u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29440c: 0x4a000fa
    ctx->pc = 0x29440Cu;
    {
        const bool branch_taken_0x29440c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x294410u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x29440c) {
            ctx->pc = 0x2947F8u;
            goto label_2947f8;
        }
    }
    ctx->pc = 0x294414u;
    // 0x294414: 0x8e220004
    ctx->pc = 0x294414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x294418: 0x8c430130
    ctx->pc = 0x294418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x29441c: 0x24020050
    ctx->pc = 0x29441cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x294420: 0xa21018
    ctx->pc = 0x294420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x294424: 0x8c63004c
    ctx->pc = 0x294424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x294428: 0x439021
    ctx->pc = 0x294428u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29442c: 0x8e530000
    ctx->pc = 0x29442cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x294430: 0x32620400
    ctx->pc = 0x294430u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1024));
    // 0x294434: 0x1040000e
    ctx->pc = 0x294434u;
    {
        const bool branch_taken_0x294434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294438u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x294434) {
            ctx->pc = 0x294470u;
            goto label_294470;
        }
    }
    ctx->pc = 0x29443Cu;
    // 0x29443c: 0xdc420e28
    ctx->pc = 0x29443cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x294440: 0x30420080
    ctx->pc = 0x294440u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x294444: 0x144000ec
    ctx->pc = 0x294444u;
    {
        const bool branch_taken_0x294444 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x294448u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294444) {
            ctx->pc = 0x2947F8u;
            goto label_2947f8;
        }
    }
    ctx->pc = 0x29444Cu;
    // 0x29444c: 0x8e2400cc
    ctx->pc = 0x29444cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x294450: 0x24050001
    ctx->pc = 0x294450u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x294454: 0xc0b41b8
    ctx->pc = 0x294454u;
    SET_GPR_U32(ctx, 31, 0x29445Cu);
    ctx->pc = 0x294458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29445Cu; }
    }
    if (ctx->pc != 0x29445Cu) { return; }
    ctx->pc = 0x29445Cu;
    // 0x29445c: 0x8e2200cc
    ctx->pc = 0x29445cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x294460: 0x8c440078
    ctx->pc = 0x294460u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x294464: 0x24050002
    ctx->pc = 0x294464u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x294468: 0xc0b41b8
    ctx->pc = 0x294468u;
    SET_GPR_U32(ctx, 31, 0x294470u);
    ctx->pc = 0x29446Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294470u; }
    }
    if (ctx->pc != 0x294470u) { return; }
    ctx->pc = 0x294470u;
label_294470:
    // 0x294470: 0x8e230070
    ctx->pc = 0x294470u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x294474: 0x3c013f80
    ctx->pc = 0x294474u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x294478: 0x44810800
    ctx->pc = 0x294478u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29447c: 0x50600006
    ctx->pc = 0x29447Cu;
    {
        const bool branch_taken_0x29447c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x29447c) {
            ctx->pc = 0x294480u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x294498u;
            goto label_294498;
        }
    }
    ctx->pc = 0x294484u;
    // 0x294484: 0x8c620060
    ctx->pc = 0x294484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x294488: 0x30420008
    ctx->pc = 0x294488u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x29448c: 0x54400001
    ctx->pc = 0x29448Cu;
    {
        const bool branch_taken_0x29448c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29448c) {
            ctx->pc = 0x294490u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x294494u;
            goto label_294494;
        }
    }
    ctx->pc = 0x294494u;
label_294494:
    // 0x294494: 0xc6400030
    ctx->pc = 0x294494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294498:
    // 0x294498: 0x46000802
    ctx->pc = 0x294498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29449c: 0xe7a00050
    ctx->pc = 0x29449cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2944a0: 0xc6400034
    ctx->pc = 0x2944a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2944a4: 0x46000802
    ctx->pc = 0x2944a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2944a8: 0xe7a00054
    ctx->pc = 0x2944a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2944ac: 0xc6400038
    ctx->pc = 0x2944acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2944b0: 0x46000802
    ctx->pc = 0x2944b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2944b4: 0x3c020f00
    ctx->pc = 0x2944b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3840 << 16));
    // 0x2944b8: 0x2621024
    ctx->pc = 0x2944b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2944bc: 0x10400007
    ctx->pc = 0x2944BCu;
    {
        const bool branch_taken_0x2944bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2944C0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        if (branch_taken_0x2944bc) {
            ctx->pc = 0x2944DCu;
            goto label_2944dc;
        }
    }
    ctx->pc = 0x2944C4u;
    // 0x2944c4: 0x220202d
    ctx->pc = 0x2944c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944c8: 0x240282d
    ctx->pc = 0x2944c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944cc: 0xc0a4fbe
    ctx->pc = 0x2944CCu;
    SET_GPR_U32(ctx, 31, 0x2944D4u);
    ctx->pc = 0x2944D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x293EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoParticle_0x293ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2944D4u; }
    }
    if (ctx->pc != 0x2944D4u) { return; }
    ctx->pc = 0x2944D4u;
    // 0x2944d4: 0x1000008c
    ctx->pc = 0x2944D4u;
    {
        const bool branch_taken_0x2944d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2944D8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        if (branch_taken_0x2944d4) {
            ctx->pc = 0x294708u;
            goto label_294708;
        }
    }
    ctx->pc = 0x2944DCu;
label_2944dc:
    // 0x2944dc: 0x32620100
    ctx->pc = 0x2944dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 256));
    // 0x2944e0: 0x10400005
    ctx->pc = 0x2944E0u;
    {
        const bool branch_taken_0x2944e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2944E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2944e0) {
            ctx->pc = 0x2944F8u;
            goto label_2944f8;
        }
    }
    ctx->pc = 0x2944E8u;
    // 0x2944e8: 0xc0a503a
    ctx->pc = 0x2944E8u;
    SET_GPR_U32(ctx, 31, 0x2944F0u);
    ctx->pc = 0x2944ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2940E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoTexmodNode_0x2940e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2944F0u; }
    }
    if (ctx->pc != 0x2944F0u) { return; }
    ctx->pc = 0x2944F0u;
    // 0x2944f0: 0x10000085
    ctx->pc = 0x2944F0u;
    {
        const bool branch_taken_0x2944f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2944F4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        if (branch_taken_0x2944f0) {
            ctx->pc = 0x294708u;
            goto label_294708;
        }
    }
    ctx->pc = 0x2944F8u;
label_2944f8:
    // 0x2944f8: 0x32620200
    ctx->pc = 0x2944f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 512));
    // 0x2944fc: 0x5040002a
    ctx->pc = 0x2944FCu;
    {
        const bool branch_taken_0x2944fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2944fc) {
            ctx->pc = 0x294500u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->pc = 0x2945A8u;
            goto label_2945a8;
        }
    }
    ctx->pc = 0x294504u;
    // 0x294504: 0x8e220004
    ctx->pc = 0x294504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x294508: 0x84420118
    ctx->pc = 0x294508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x29450c: 0x1840007d
    ctx->pc = 0x29450Cu;
    {
        const bool branch_taken_0x29450c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x294510u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29450c) {
            ctx->pc = 0x294704u;
            goto label_294704;
        }
    }
    ctx->pc = 0x294514u;
    // 0x294514: 0x24170060
    ctx->pc = 0x294514u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 96));
    // 0x294518: 0x2171018
    ctx->pc = 0x294518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29451c: 0x0
    ctx->pc = 0x29451cu;
    // NOP
label_294520:
    // 0x294520: 0x24420540
    ctx->pc = 0x294520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x294524: 0x2221821
    ctx->pc = 0x294524u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x294528: 0x8c620000
    ctx->pc = 0x294528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29452c: 0x94420010
    ctx->pc = 0x29452cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x294530: 0x30420001
    ctx->pc = 0x294530u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x294534: 0x54400015
    ctx->pc = 0x294534u;
    {
        const bool branch_taken_0x294534 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x294534) {
            ctx->pc = 0x294538u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29458Cu;
            goto label_29458c;
        }
    }
    ctx->pc = 0x29453Cu;
    // 0x29453c: 0xc4600040
    ctx->pc = 0x29453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294540: 0xc7a10050
    ctx->pc = 0x294540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294544: 0x46010000
    ctx->pc = 0x294544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294548: 0xe7a00040
    ctx->pc = 0x294548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29454c: 0xc4600044
    ctx->pc = 0x29454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294550: 0xc7a10054
    ctx->pc = 0x294550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294554: 0x46010000
    ctx->pc = 0x294554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294558: 0xe7a00044
    ctx->pc = 0x294558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29455c: 0xc4600048
    ctx->pc = 0x29455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294560: 0xc7a10058
    ctx->pc = 0x294560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294564: 0x46010000
    ctx->pc = 0x294564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294568: 0xe7a00048
    ctx->pc = 0x294568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x29456c: 0x220202d
    ctx->pc = 0x29456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294570: 0x240282d
    ctx->pc = 0x294570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294574: 0x27a60040
    ctx->pc = 0x294574u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x294578: 0x382d
    ctx->pc = 0x294578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29457c: 0xc0a5054
    ctx->pc = 0x29457Cu;
    SET_GPR_U32(ctx, 31, 0x294584u);
    ctx->pc = 0x294580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x294150u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoSfxSub_0x294150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294584u; }
    }
    if (ctx->pc != 0x294584u) { return; }
    ctx->pc = 0x294584u;
    // 0x294584: 0x40a82d
    ctx->pc = 0x294584u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294588: 0x26100001
    ctx->pc = 0x294588u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_29458c:
    // 0x29458c: 0x8e220004
    ctx->pc = 0x29458cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x294590: 0x84420118
    ctx->pc = 0x294590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x294594: 0x202102a
    ctx->pc = 0x294594u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x294598: 0x1440ffe1
    ctx->pc = 0x294598u;
    {
        const bool branch_taken_0x294598 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29459Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x294598) {
            ctx->pc = 0x294520u;
            goto label_294520;
        }
    }
    ctx->pc = 0x2945A0u;
    // 0x2945a0: 0x10000059
    ctx->pc = 0x2945A0u;
    {
        const bool branch_taken_0x2945a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2945A4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        if (branch_taken_0x2945a0) {
            ctx->pc = 0x294708u;
            goto label_294708;
        }
    }
    ctx->pc = 0x2945A8u;
label_2945a8:
    // 0x2945a8: 0x4400055
    ctx->pc = 0x2945A8u;
    {
        const bool branch_taken_0x2945a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2945ACu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 2049));
        if (branch_taken_0x2945a8) {
            ctx->pc = 0x294700u;
            goto label_294700;
        }
    }
    ctx->pc = 0x2945B0u;
    // 0x2945b0: 0x10400008
    ctx->pc = 0x2945B0u;
    {
        const bool branch_taken_0x2945b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2945B4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2945b0) {
            ctx->pc = 0x2945D4u;
            goto label_2945d4;
        }
    }
    ctx->pc = 0x2945B8u;
    // 0x2945b8: 0xe7a00040
    ctx->pc = 0x2945b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2945bc: 0xc7a00054
    ctx->pc = 0x2945bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2945c0: 0xe7a00044
    ctx->pc = 0x2945c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2945c4: 0xc7a00058
    ctx->pc = 0x2945c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2945c8: 0xe7a00048
    ctx->pc = 0x2945c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2945cc: 0x10000044
    ctx->pc = 0x2945CCu;
    {
        const bool branch_taken_0x2945cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2945D0u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2945cc) {
            ctx->pc = 0x2946E0u;
            goto label_2946e0;
        }
    }
    ctx->pc = 0x2945D4u;
label_2945d4:
    // 0x2945d4: 0x32620080
    ctx->pc = 0x2945d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 128));
    // 0x2945d8: 0x1040000b
    ctx->pc = 0x2945D8u;
    {
        const bool branch_taken_0x2945d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2945DCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x2945d8) {
            ctx->pc = 0x294608u;
            goto label_294608;
        }
    }
    ctx->pc = 0x2945E0u;
    // 0x2945e0: 0xc6200460
    ctx->pc = 0x2945e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2945e4: 0x46010000
    ctx->pc = 0x2945e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2945e8: 0xe7a00040
    ctx->pc = 0x2945e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2945ec: 0xc6200464
    ctx->pc = 0x2945ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2945f0: 0xc7a10054
    ctx->pc = 0x2945f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2945f4: 0x46010000
    ctx->pc = 0x2945f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2945f8: 0xe7a00044
    ctx->pc = 0x2945f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2945fc: 0xc6200468
    ctx->pc = 0x2945fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294600: 0x10000020
    ctx->pc = 0x294600u;
    {
        const bool branch_taken_0x294600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294604u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x294600) {
            ctx->pc = 0x294684u;
            goto label_294684;
        }
    }
    ctx->pc = 0x294608u;
label_294608:
    // 0x294608: 0x32620040
    ctx->pc = 0x294608u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 64));
    // 0x29460c: 0x10400021
    ctx->pc = 0x29460Cu;
    {
        const bool branch_taken_0x29460c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29460c) {
            ctx->pc = 0x294694u;
            goto label_294694;
        }
    }
    ctx->pc = 0x294614u;
    // 0x294614: 0x8e2400dc
    ctx->pc = 0x294614u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x294618: 0x10800009
    ctx->pc = 0x294618u;
    {
        const bool branch_taken_0x294618 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x29461Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x294618) {
            ctx->pc = 0x294640u;
            goto label_294640;
        }
    }
    ctx->pc = 0x294620u;
    // 0x294620: 0xc0b4302
    ctx->pc = 0x294620u;
    SET_GPR_U32(ctx, 31, 0x294628u);
    ctx->pc = 0x294624u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294628u; }
    }
    if (ctx->pc != 0x294628u) { return; }
    ctx->pc = 0x294628u;
    // 0x294628: 0xc7a00030
    ctx->pc = 0x294628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29462c: 0xe7a00040
    ctx->pc = 0x29462cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x294630: 0xc7a00034
    ctx->pc = 0x294630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294634: 0xe7a00044
    ctx->pc = 0x294634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x294638: 0x10000006
    ctx->pc = 0x294638u;
    {
        const bool branch_taken_0x294638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29463Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x294638) {
            ctx->pc = 0x294654u;
            goto label_294654;
        }
    }
    ctx->pc = 0x294640u;
label_294640:
    // 0x294640: 0xc6200040
    ctx->pc = 0x294640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294644: 0xe7a00040
    ctx->pc = 0x294644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x294648: 0xc6200044
    ctx->pc = 0x294648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29464c: 0xe7a00044
    ctx->pc = 0x29464cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x294650: 0xc6200048
    ctx->pc = 0x294650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294654:
    // 0x294654: 0x1280000d
    ctx->pc = 0x294654u;
    {
        const bool branch_taken_0x294654 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x294658u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        if (branch_taken_0x294654) {
            ctx->pc = 0x29468Cu;
            goto label_29468c;
        }
    }
    ctx->pc = 0x29465Cu;
    // 0x29465c: 0xc6800000
    ctx->pc = 0x29465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294660: 0xc7a10040
    ctx->pc = 0x294660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294664: 0x46010000
    ctx->pc = 0x294664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294668: 0xe7a00040
    ctx->pc = 0x294668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29466c: 0xc6800004
    ctx->pc = 0x29466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294670: 0xc7a10044
    ctx->pc = 0x294670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294674: 0x46010000
    ctx->pc = 0x294674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294678: 0xe7a00044
    ctx->pc = 0x294678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29467c: 0xc6800008
    ctx->pc = 0x29467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294680: 0xc7a10048
    ctx->pc = 0x294680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294684:
    // 0x294684: 0x46010000
    ctx->pc = 0x294684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294688: 0xe7a00048
    ctx->pc = 0x294688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_29468c:
    // 0x29468c: 0x10000014
    ctx->pc = 0x29468Cu;
    {
        const bool branch_taken_0x29468c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294690u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29468c) {
            ctx->pc = 0x2946E0u;
            goto label_2946e0;
        }
    }
    ctx->pc = 0x294694u;
label_294694:
    // 0x294694: 0x1280000c
    ctx->pc = 0x294694u;
    {
        const bool branch_taken_0x294694 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x294698u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x294694) {
            ctx->pc = 0x2946C8u;
            goto label_2946c8;
        }
    }
    ctx->pc = 0x29469Cu;
    // 0x29469c: 0xc6800000
    ctx->pc = 0x29469cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2946a0: 0x46010000
    ctx->pc = 0x2946a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2946a4: 0xe7a00040
    ctx->pc = 0x2946a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2946a8: 0xc6800004
    ctx->pc = 0x2946a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2946ac: 0xc7a10054
    ctx->pc = 0x2946acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2946b0: 0x46010000
    ctx->pc = 0x2946b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2946b4: 0xe7a00044
    ctx->pc = 0x2946b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2946b8: 0xc6800008
    ctx->pc = 0x2946b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2946bc: 0xc7a10058
    ctx->pc = 0x2946bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2946c0: 0x10000006
    ctx->pc = 0x2946C0u;
    {
        const bool branch_taken_0x2946c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2946C4u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2946c0) {
            ctx->pc = 0x2946DCu;
            goto label_2946dc;
        }
    }
    ctx->pc = 0x2946C8u;
label_2946c8:
    // 0x2946c8: 0xc7a00050
    ctx->pc = 0x2946c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2946cc: 0xe7a00040
    ctx->pc = 0x2946ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2946d0: 0xc7a00054
    ctx->pc = 0x2946d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2946d4: 0xe7a00044
    ctx->pc = 0x2946d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2946d8: 0xc7a00058
    ctx->pc = 0x2946d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2946dc:
    // 0x2946dc: 0xe7a00048
    ctx->pc = 0x2946dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2946e0:
    // 0x2946e0: 0x220202d
    ctx->pc = 0x2946e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946e4: 0x240282d
    ctx->pc = 0x2946e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946e8: 0x27a60040
    ctx->pc = 0x2946e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2946ec: 0x2c0382d
    ctx->pc = 0x2946ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2946f0: 0xc0a5054
    ctx->pc = 0x2946F0u;
    SET_GPR_U32(ctx, 31, 0x2946F8u);
    ctx->pc = 0x2946F4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x294150u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoSfxSub_0x294150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2946F8u; }
    }
    if (ctx->pc != 0x2946F8u) { return; }
    ctx->pc = 0x2946F8u;
    // 0x2946f8: 0x10000002
    ctx->pc = 0x2946F8u;
    {
        const bool branch_taken_0x2946f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2946FCu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2946f8) {
            ctx->pc = 0x294704u;
            goto label_294704;
        }
    }
    ctx->pc = 0x294700u;
label_294700:
    // 0x294700: 0x2415ffff
    ctx->pc = 0x294700u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
label_294704:
    // 0x294704: 0x8e44000c
    ctx->pc = 0x294704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_294708:
    // 0x294708: 0x4800018
    ctx->pc = 0x294708u;
    {
        const bool branch_taken_0x294708 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29470Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x294708) {
            ctx->pc = 0x29476Cu;
            goto label_29476c;
        }
    }
    ctx->pc = 0x294710u;
    // 0x294710: 0x86250124
    ctx->pc = 0x294710u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x294714: 0x4a20010
    ctx->pc = 0x294714u;
    {
        const bool branch_taken_0x294714 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x294714) {
            ctx->pc = 0x294718u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->pc = 0x294758u;
            goto label_294758;
        }
    }
    ctx->pc = 0x29471Cu;
    // 0x29471c: 0x8e220004
    ctx->pc = 0x29471cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x294720: 0x8c430124
    ctx->pc = 0x294720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x294724: 0x24020090
    ctx->pc = 0x294724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x294728: 0xa21018
    ctx->pc = 0x294728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29472c: 0x431021
    ctx->pc = 0x29472cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294730: 0x8c430000
    ctx->pc = 0x294730u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294734: 0x24020011
    ctx->pc = 0x294734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x294738: 0x54620007
    ctx->pc = 0x294738u;
    {
        const bool branch_taken_0x294738 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x294738) {
            ctx->pc = 0x29473Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->pc = 0x294758u;
            goto label_294758;
        }
    }
    ctx->pc = 0x294740u;
    // 0x294740: 0x240500e0
    ctx->pc = 0x294740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x294744: 0x26260040
    ctx->pc = 0x294744u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 64));
    // 0x294748: 0xc098518
    ctx->pc = 0x294748u;
    SET_GPR_U32(ctx, 31, 0x294750u);
    ctx->pc = 0x29474Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261460u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlaySound_0x261460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294750u; }
    }
    if (ctx->pc != 0x294750u) { return; }
    ctx->pc = 0x294750u;
    // 0x294750: 0x10000006
    ctx->pc = 0x294750u;
    {
        const bool branch_taken_0x294750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x294754u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x294750) {
            ctx->pc = 0x29476Cu;
            goto label_29476c;
        }
    }
    ctx->pc = 0x294758u;
label_294758:
    // 0x294758: 0x240500e0
    ctx->pc = 0x294758u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x29475c: 0x26260040
    ctx->pc = 0x29475cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 64));
    // 0x294760: 0xc098518
    ctx->pc = 0x294760u;
    SET_GPR_U32(ctx, 31, 0x294768u);
    ctx->pc = 0x294764u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x261460u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlaySound_0x261460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294768u; }
    }
    if (ctx->pc != 0x294768u) { return; }
    ctx->pc = 0x294768u;
    // 0x294768: 0x32620002
    ctx->pc = 0x294768u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 2));
label_29476c:
    // 0x29476c: 0x10400008
    ctx->pc = 0x29476Cu;
    {
        const bool branch_taken_0x29476c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x294770u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29476c) {
            ctx->pc = 0x294790u;
            goto label_294790;
        }
    }
    ctx->pc = 0x294774u;
    // 0x294774: 0x282d
    ctx->pc = 0x294774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294778: 0x2406005a
    ctx->pc = 0x294778u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 90));
    // 0x29477c: 0x3c013dcc
    ctx->pc = 0x29477cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x294780: 0x3421cccd
    ctx->pc = 0x294780u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x294784: 0x44816000
    ctx->pc = 0x294784u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x294788: 0xc09bed8
    ctx->pc = 0x294788u;
    SET_GPR_U32(ctx, 31, 0x294790u);
    ctx->pc = 0x29478Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 100));
    ctx->pc = 0x26FB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShakeCamera_0x26fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294790u; }
    }
    if (ctx->pc != 0x294790u) { return; }
    ctx->pc = 0x294790u;
label_294790:
    // 0x294790: 0x32620020
    ctx->pc = 0x294790u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 32));
    // 0x294794: 0x50400004
    ctx->pc = 0x294794u;
    {
        const bool branch_taken_0x294794 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x294794) {
            ctx->pc = 0x294798u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2947A8u;
            goto label_2947a8;
        }
    }
    ctx->pc = 0x29479Cu;
    // 0x29479c: 0xc094d7e
    ctx->pc = 0x29479Cu;
    SET_GPR_U32(ctx, 31, 0x2947A4u);
    ctx->pc = 0x2535F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoWorldEffects_0x2535f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947A4u; }
    }
    if (ctx->pc != 0x2947A4u) { return; }
    ctx->pc = 0x2947A4u;
    // 0x2947a4: 0x8e420000
    ctx->pc = 0x2947a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2947a8:
    // 0x2947a8: 0x3c030004
    ctx->pc = 0x2947a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x2947ac: 0x431024
    ctx->pc = 0x2947acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2947b0: 0x5040000a
    ctx->pc = 0x2947B0u;
    {
        const bool branch_taken_0x2947b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2947b0) {
            ctx->pc = 0x2947B4u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x2947DCu;
            goto label_2947dc;
        }
    }
    ctx->pc = 0x2947B8u;
    // 0x2947b8: 0x86220b42
    ctx->pc = 0x2947b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2882)));
    // 0x2947bc: 0x4400005
    ctx->pc = 0x2947BCu;
    {
        const bool branch_taken_0x2947bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2947C0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2947bc) {
            ctx->pc = 0x2947D4u;
            goto label_2947d4;
        }
    }
    ctx->pc = 0x2947C4u;
    // 0x2947c4: 0xc0b492e
    ctx->pc = 0x2947C4u;
    SET_GPR_U32(ctx, 31, 0x2947CCu);
    ctx->pc = 0x2947C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959680));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947CCu; }
    }
    if (ctx->pc != 0x2947CCu) { return; }
    ctx->pc = 0x2947CCu;
    // 0x2947cc: 0x10000003
    ctx->pc = 0x2947CCu;
    {
        const bool branch_taken_0x2947cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2947D0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        if (branch_taken_0x2947cc) {
            ctx->pc = 0x2947DCu;
            goto label_2947dc;
        }
    }
    ctx->pc = 0x2947D4u;
label_2947d4:
    // 0x2947d4: 0xa6350b42
    ctx->pc = 0x2947d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2882), (uint16_t)GPR_U32(ctx, 21));
    // 0x2947d8: 0x8e450004
    ctx->pc = 0x2947d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2947dc:
    // 0x2947dc: 0x4a00005
    ctx->pc = 0x2947DCu;
    {
        const bool branch_taken_0x2947dc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2947E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2947dc) {
            ctx->pc = 0x2947F4u;
            goto label_2947f4;
        }
    }
    ctx->pc = 0x2947E4u;
    // 0x2947e4: 0x280302d
    ctx->pc = 0x2947e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2947e8: 0x2c0382d
    ctx->pc = 0x2947e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2947ec: 0xc0a50f4
    ctx->pc = 0x2947ECu;
    SET_GPR_U32(ctx, 31, 0x2947F4u);
    ctx->pc = 0x2947F0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2943D0u;
    goto label_2943d0;
    ctx->pc = 0x2947F4u;
label_2947f4:
    // 0x2947f4: 0x2a0102d
    ctx->pc = 0x2947f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2947f8:
    // 0x2947f8: 0xdfbf00e0
    ctx->pc = 0x2947f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2947fc: 0xdfb700d0
    ctx->pc = 0x2947fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x294800: 0xdfb600c0
    ctx->pc = 0x294800u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x294804: 0xdfb500b0
    ctx->pc = 0x294804u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x294808: 0xdfb400a0
    ctx->pc = 0x294808u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29480c: 0xdfb30090
    ctx->pc = 0x29480cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x294810: 0xdfb20080
    ctx->pc = 0x294810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x294814: 0xdfb10070
    ctx->pc = 0x294814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294818: 0xdfb00060
    ctx->pc = 0x294818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29481c: 0x3e00008
    ctx->pc = 0x29481Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294820u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2943D0u: goto label_2943d0;
            case 0x294470u: goto label_294470;
            case 0x294494u: goto label_294494;
            case 0x294498u: goto label_294498;
            case 0x2944DCu: goto label_2944dc;
            case 0x2944F8u: goto label_2944f8;
            case 0x294520u: goto label_294520;
            case 0x29458Cu: goto label_29458c;
            case 0x2945A8u: goto label_2945a8;
            case 0x2945D4u: goto label_2945d4;
            case 0x294608u: goto label_294608;
            case 0x294640u: goto label_294640;
            case 0x294654u: goto label_294654;
            case 0x294684u: goto label_294684;
            case 0x29468Cu: goto label_29468c;
            case 0x294694u: goto label_294694;
            case 0x2946C8u: goto label_2946c8;
            case 0x2946DCu: goto label_2946dc;
            case 0x2946E0u: goto label_2946e0;
            case 0x294700u: goto label_294700;
            case 0x294704u: goto label_294704;
            case 0x294708u: goto label_294708;
            case 0x294758u: goto label_294758;
            case 0x29476Cu: goto label_29476c;
            case 0x294790u: goto label_294790;
            case 0x2947A8u: goto label_2947a8;
            case 0x2947D4u: goto label_2947d4;
            case 0x2947DCu: goto label_2947dc;
            case 0x2947F4u: goto label_2947f4;
            case 0x2947F8u: goto label_2947f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294824u;
}
