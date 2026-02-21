#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterCollideItems
// Address: 0x29d510 - 0x29d7d0
void CritterCollideItems_0x29d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29d510u;

    // 0x29d510: 0x27bdff30
    ctx->pc = 0x29d510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29d514: 0xffbf00a0
    ctx->pc = 0x29d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29d518: 0xffb70090
    ctx->pc = 0x29d518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x29d51c: 0xffb60080
    ctx->pc = 0x29d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x29d520: 0xffb50070
    ctx->pc = 0x29d520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x29d524: 0xffb40060
    ctx->pc = 0x29d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x29d528: 0xffb30050
    ctx->pc = 0x29d528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x29d52c: 0xffb20040
    ctx->pc = 0x29d52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x29d530: 0xffb10030
    ctx->pc = 0x29d530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x29d534: 0xffb00020
    ctx->pc = 0x29d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29d538: 0xe7b700c8
    ctx->pc = 0x29d538u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x29d53c: 0xe7b600c0
    ctx->pc = 0x29d53cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29d540: 0xe7b500b8
    ctx->pc = 0x29d540u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x29d544: 0xe7b400b0
    ctx->pc = 0x29d544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29d548: 0x80902d
    ctx->pc = 0x29d548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d54c: 0xa0882d
    ctx->pc = 0x29d54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d550: 0x3c01bf80
    ctx->pc = 0x29d550u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x29d554: 0x4481a800
    ctx->pc = 0x29d554u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x29d558: 0x26560060
    ctx->pc = 0x29d558u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 18), 96));
    // 0x29d55c: 0x8e420004
    ctx->pc = 0x29d55cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29d560: 0xc456007c
    ctx->pc = 0x29d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29d564: 0xc4570078
    ctx->pc = 0x29d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29d568: 0xc6400060
    ctx->pc = 0x29d568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d56c: 0xc6210000
    ctx->pc = 0x29d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d570: 0x46010000
    ctx->pc = 0x29d570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d574: 0xe7a00000
    ctx->pc = 0x29d574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d578: 0xc6c00004
    ctx->pc = 0x29d578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d57c: 0xc6210004
    ctx->pc = 0x29d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d580: 0x46010000
    ctx->pc = 0x29d580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d584: 0xe7a00004
    ctx->pc = 0x29d584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d588: 0xc6c00008
    ctx->pc = 0x29d588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d58c: 0xc6210008
    ctx->pc = 0x29d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d590: 0x46010000
    ctx->pc = 0x29d590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d594: 0xe7a00008
    ctx->pc = 0x29d594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29d598: 0x3a0202d
    ctx->pc = 0x29d598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d59c: 0xc0a0120
    ctx->pc = 0x29D59Cu;
    SET_GPR_U32(ctx, 31, 0x29D5A4u);
    ctx->pc = 0x29D5A0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D5A4u; }
    }
    if (ctx->pc != 0x29D5A4u) { return; }
    ctx->pc = 0x29D5A4u;
    // 0x29d5a4: 0x10000075
    ctx->pc = 0x29D5A4u;
    {
        const bool branch_taken_0x29d5a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D5A8u;
        SET_GPR_U32(ctx, 23, ((uint32_t)52 << 16));
        if (branch_taken_0x29d5a4) {
            ctx->pc = 0x29D77Cu;
            goto label_29d77c;
        }
    }
    ctx->pc = 0x29D5ACu;
    // 0x29d5ac: 0x0
    ctx->pc = 0x29d5acu;
    // NOP
label_29d5b0:
    // 0x29d5b0: 0x621018
    ctx->pc = 0x29d5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29d5b4: 0x8ee3cd94
    ctx->pc = 0x29d5b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 4294954388)));
    // 0x29d5b8: 0x439821
    ctx->pc = 0x29d5b8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d5bc: 0x240202d
    ctx->pc = 0x29d5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d5c0: 0xc096792
    ctx->pc = 0x29D5C0u;
    SET_GPR_U32(ctx, 31, 0x29D5C8u);
    ctx->pc = 0x29D5C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x259E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterColItem_0x259e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D5C8u; }
    }
    if (ctx->pc != 0x29D5C8u) { return; }
    ctx->pc = 0x29D5C8u;
    // 0x29d5c8: 0x40a02d
    ctx->pc = 0x29d5c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d5cc: 0x1280006b
    ctx->pc = 0x29D5CCu;
    {
        const bool branch_taken_0x29d5cc = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x29d5cc) {
            ctx->pc = 0x29D77Cu;
            goto label_29d77c;
        }
    }
    ctx->pc = 0x29D5D4u;
    // 0x29d5d4: 0x8e430004
    ctx->pc = 0x29d5d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29d5d8: 0x8c62005c
    ctx->pc = 0x29d5d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x29d5dc: 0x30420100
    ctx->pc = 0x29d5dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x29d5e0: 0x50400036
    ctx->pc = 0x29D5E0u;
    {
        const bool branch_taken_0x29d5e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29d5e0) {
            ctx->pc = 0x29D5E4u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x29D6BCu;
            goto label_29d6bc;
        }
    }
    ctx->pc = 0x29D5E8u;
    // 0x29d5e8: 0x84620118
    ctx->pc = 0x29d5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x29d5ec: 0x18400046
    ctx->pc = 0x29D5ECu;
    {
        const bool branch_taken_0x29d5ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29D5F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29d5ec) {
            ctx->pc = 0x29D708u;
            goto label_29d708;
        }
    }
    ctx->pc = 0x29D5F4u;
    // 0x29d5f4: 0x24150060
    ctx->pc = 0x29d5f4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 96));
    // 0x29d5f8: 0x4480a000
    ctx->pc = 0x29d5f8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x29d5fc: 0x2151018
    ctx->pc = 0x29d5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29d600:
    // 0x29d600: 0x24420540
    ctx->pc = 0x29d600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x29d604: 0x2421821
    ctx->pc = 0x29d604u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29d608: 0x8c620004
    ctx->pc = 0x29d608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29d60c: 0x50400024
    ctx->pc = 0x29D60Cu;
    {
        const bool branch_taken_0x29d60c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29d60c) {
            ctx->pc = 0x29D610u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29D6A0u;
            goto label_29d6a0;
        }
    }
    ctx->pc = 0x29D614u;
    // 0x29d614: 0xc461005c
    ctx->pc = 0x29d614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d618: 0xc4600058
    ctx->pc = 0x29d618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d61c: 0x46010036
    ctx->pc = 0x29d61cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d620: 0x0
    ctx->pc = 0x29d620u;
    // NOP
    // 0x29d624: 0x4503001e
    ctx->pc = 0x29D624u;
    {
        const bool branch_taken_0x29d624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d624) {
            ctx->pc = 0x29D628u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29D6A0u;
            goto label_29d6a0;
        }
    }
    ctx->pc = 0x29D62Cu;
    // 0x29d62c: 0x8c640000
    ctx->pc = 0x29d62cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d630: 0x94820010
    ctx->pc = 0x29d630u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29d634: 0x30420008
    ctx->pc = 0x29d634u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x29d638: 0x10400018
    ctx->pc = 0x29D638u;
    {
        const bool branch_taken_0x29d638 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D63Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x29d638) {
            ctx->pc = 0x29D69Cu;
            goto label_29d69c;
        }
    }
    ctx->pc = 0x29D640u;
    // 0x29d640: 0xc4600040
    ctx->pc = 0x29d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d644: 0xc6210000
    ctx->pc = 0x29d644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d648: 0x46010000
    ctx->pc = 0x29d648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d64c: 0xe7a00000
    ctx->pc = 0x29d64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d650: 0xc4a00004
    ctx->pc = 0x29d650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d654: 0xc6210004
    ctx->pc = 0x29d654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d658: 0x46010000
    ctx->pc = 0x29d658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d65c: 0xe7a00004
    ctx->pc = 0x29d65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d660: 0xc4a00008
    ctx->pc = 0x29d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d664: 0xc6210008
    ctx->pc = 0x29d664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d668: 0x46010000
    ctx->pc = 0x29d668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d66c: 0xe7a00008
    ctx->pc = 0x29d66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29d670: 0xc48d002c
    ctx->pc = 0x29d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29d674: 0x260202d
    ctx->pc = 0x29d674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d678: 0x3a0302d
    ctx->pc = 0x29d678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d67c: 0x27a70010
    ctx->pc = 0x29d67cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x29d680: 0xc095e6c
    ctx->pc = 0x29D680u;
    SET_GPR_U32(ctx, 31, 0x29D688u);
    ctx->pc = 0x29D684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x2579B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollSub_0x2579b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D688u; }
    }
    if (ctx->pc != 0x29D688u) { return; }
    ctx->pc = 0x29D688u;
    // 0x29d688: 0x46000546
    ctx->pc = 0x29d688u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x29d68c: 0x4615a036
    ctx->pc = 0x29d68cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d690: 0x0
    ctx->pc = 0x29d690u;
    // NOP
    // 0x29d694: 0x4503001d
    ctx->pc = 0x29D694u;
    {
        const bool branch_taken_0x29d694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d694) {
            ctx->pc = 0x29D698u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x29D70Cu;
            goto label_29d70c;
        }
    }
    ctx->pc = 0x29D69Cu;
label_29d69c:
    // 0x29d69c: 0x26100001
    ctx->pc = 0x29d69cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_29d6a0:
    // 0x29d6a0: 0x8e420004
    ctx->pc = 0x29d6a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29d6a4: 0x84420118
    ctx->pc = 0x29d6a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x29d6a8: 0x202102a
    ctx->pc = 0x29d6a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x29d6ac: 0x1440ffd4
    ctx->pc = 0x29D6ACu;
    {
        const bool branch_taken_0x29d6ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29D6B0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29d6ac) {
            ctx->pc = 0x29D600u;
            goto label_29d600;
        }
    }
    ctx->pc = 0x29D6B4u;
    // 0x29d6b4: 0x10000015
    ctx->pc = 0x29D6B4u;
    {
        const bool branch_taken_0x29d6b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D6B8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29d6b4) {
            ctx->pc = 0x29D70Cu;
            goto label_29d70c;
        }
    }
    ctx->pc = 0x29D6BCu;
label_29d6bc:
    // 0x29d6bc: 0xc4a00000
    ctx->pc = 0x29d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d6c0: 0xc6210000
    ctx->pc = 0x29d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d6c4: 0x46010000
    ctx->pc = 0x29d6c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d6c8: 0xe7a00000
    ctx->pc = 0x29d6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d6cc: 0xc4a00004
    ctx->pc = 0x29d6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d6d0: 0xc6210004
    ctx->pc = 0x29d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d6d4: 0x46010000
    ctx->pc = 0x29d6d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d6d8: 0xe7a00004
    ctx->pc = 0x29d6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d6dc: 0xc4a00008
    ctx->pc = 0x29d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d6e0: 0xc6210008
    ctx->pc = 0x29d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d6e4: 0x46010000
    ctx->pc = 0x29d6e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d6e8: 0xe7a00008
    ctx->pc = 0x29d6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29d6ec: 0x260202d
    ctx->pc = 0x29d6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6f0: 0x3a0302d
    ctx->pc = 0x29d6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6f4: 0x27a70010
    ctx->pc = 0x29d6f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x29d6f8: 0x4600b306
    ctx->pc = 0x29d6f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x29d6fc: 0xc095e6c
    ctx->pc = 0x29D6FCu;
    SET_GPR_U32(ctx, 31, 0x29D704u);
    ctx->pc = 0x29D700u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x2579B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollSub_0x2579b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D704u; }
    }
    if (ctx->pc != 0x29D704u) { return; }
    ctx->pc = 0x29D704u;
    // 0x29d704: 0x46000546
    ctx->pc = 0x29d704u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_29d708:
    // 0x29d708: 0x802d
    ctx->pc = 0x29d708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d70c:
    // 0x29d70c: 0x4480a000
    ctx->pc = 0x29d70cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x29d710: 0x4615a036
    ctx->pc = 0x29d710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d714: 0x0
    ctx->pc = 0x29d714u;
    // NOP
    // 0x29d718: 0x45000013
    ctx->pc = 0x29D718u;
    {
        const bool branch_taken_0x29d718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D71Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x29d718) {
            ctx->pc = 0x29D768u;
            goto label_29d768;
        }
    }
    ctx->pc = 0x29D720u;
    // 0x29d720: 0x12820011
    ctx->pc = 0x29D720u;
    {
        const bool branch_taken_0x29d720 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x29D724u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x29d720) {
            ctx->pc = 0x29D768u;
            goto label_29d768;
        }
    }
    ctx->pc = 0x29D728u;
    // 0x29d728: 0x5682000f
    ctx->pc = 0x29D728u;
    {
        const bool branch_taken_0x29d728 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        if (branch_taken_0x29d728) {
            ctx->pc = 0x29D72Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29D768u;
            goto label_29d768;
        }
    }
    ctx->pc = 0x29D730u;
    // 0x29d730: 0x8e430004
    ctx->pc = 0x29d730u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29d734: 0x3c020034
    ctx->pc = 0x29d734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29d738: 0x8c42e7c8
    ctx->pc = 0x29d738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x29d73c: 0xc46000b8
    ctx->pc = 0x29d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d740: 0xc44c00bc
    ctx->pc = 0x29d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29d744: 0x260202d
    ctx->pc = 0x29d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d748: 0x460c0302
    ctx->pc = 0x29d748u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x29d74c: 0x282d
    ctx->pc = 0x29d74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d750: 0xc096992
    ctx->pc = 0x29D750u;
    SET_GPR_U32(ctx, 31, 0x29D758u);
    ctx->pc = 0x29D754u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25A648u;
    {
        const uint32_t __entryPc = ctx->pc;
        DamageItem_0x25a648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D758u; }
    }
    if (ctx->pc != 0x29D758u) { return; }
    ctx->pc = 0x29D758u;
    // 0x29d758: 0x46140032
    ctx->pc = 0x29d758u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d75c: 0x0
    ctx->pc = 0x29d75cu;
    // NOP
    // 0x29d760: 0x45020001
    ctx->pc = 0x29D760u;
    {
        const bool branch_taken_0x29d760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d760) {
            ctx->pc = 0x29D764u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x29D768u;
            goto label_29d768;
        }
    }
    ctx->pc = 0x29D768u;
label_29d768:
    // 0x29d768: 0x12000004
    ctx->pc = 0x29D768u;
    {
        const bool branch_taken_0x29d768 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x29d768) {
            ctx->pc = 0x29D77Cu;
            goto label_29d77c;
        }
    }
    ctx->pc = 0x29D770u;
    // 0x29d770: 0x44800000
    ctx->pc = 0x29d770u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29d774: 0xe6200008
    ctx->pc = 0x29d774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x29d778: 0xe6200000
    ctx->pc = 0x29d778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_29d77c:
    // 0x29d77c: 0xc0a015a
    ctx->pc = 0x29D77Cu;
    SET_GPR_U32(ctx, 31, 0x29D784u);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D784u; }
    }
    if (ctx->pc != 0x29D784u) { return; }
    ctx->pc = 0x29D784u;
    // 0x29d784: 0x40182d
    ctx->pc = 0x29d784u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d788: 0x461ff89
    ctx->pc = 0x29D788u;
    {
        const bool branch_taken_0x29d788 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29D78Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
        if (branch_taken_0x29d788) {
            ctx->pc = 0x29D5B0u;
            goto label_29d5b0;
        }
    }
    ctx->pc = 0x29D790u;
    // 0x29d790: 0x102d
    ctx->pc = 0x29d790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d794: 0xdfbf00a0
    ctx->pc = 0x29d794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29d798: 0xdfb70090
    ctx->pc = 0x29d798u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29d79c: 0xdfb60080
    ctx->pc = 0x29d79cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29d7a0: 0xdfb50070
    ctx->pc = 0x29d7a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29d7a4: 0xdfb40060
    ctx->pc = 0x29d7a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d7a8: 0xdfb30050
    ctx->pc = 0x29d7a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29d7ac: 0xdfb20040
    ctx->pc = 0x29d7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d7b0: 0xdfb10030
    ctx->pc = 0x29d7b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d7b4: 0xdfb00020
    ctx->pc = 0x29d7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d7b8: 0xc7b700c8
    ctx->pc = 0x29d7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29d7bc: 0xc7b600c0
    ctx->pc = 0x29d7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29d7c0: 0xc7b500b8
    ctx->pc = 0x29d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29d7c4: 0xc7b400b0
    ctx->pc = 0x29d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29d7c8: 0x3e00008
    ctx->pc = 0x29D7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D7CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29D5B0u: goto label_29d5b0;
            case 0x29D600u: goto label_29d600;
            case 0x29D69Cu: goto label_29d69c;
            case 0x29D6A0u: goto label_29d6a0;
            case 0x29D6BCu: goto label_29d6bc;
            case 0x29D708u: goto label_29d708;
            case 0x29D70Cu: goto label_29d70c;
            case 0x29D768u: goto label_29d768;
            case 0x29D77Cu: goto label_29d77c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29D7D0u;
}
