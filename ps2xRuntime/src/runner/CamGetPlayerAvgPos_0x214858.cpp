#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CamGetPlayerAvgPos
// Address: 0x214858 - 0x214a60
void CamGetPlayerAvgPos_0x214858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x214858u;

    // 0x214858: 0x27bdff30
    ctx->pc = 0x214858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21485c: 0xffbf00c0
    ctx->pc = 0x21485cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x214860: 0xffbe00b0
    ctx->pc = 0x214860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x214864: 0xffb700a0
    ctx->pc = 0x214864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x214868: 0xffb60090
    ctx->pc = 0x214868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x21486c: 0xffb50080
    ctx->pc = 0x21486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x214870: 0xffb40070
    ctx->pc = 0x214870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x214874: 0xffb30060
    ctx->pc = 0x214874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x214878: 0xffb20050
    ctx->pc = 0x214878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x21487c: 0xffb10040
    ctx->pc = 0x21487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x214880: 0xffb00030
    ctx->pc = 0x214880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x214884: 0x80982d
    ctx->pc = 0x214884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214888: 0xa0902d
    ctx->pc = 0x214888u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21488c: 0x3c01e0ad
    ctx->pc = 0x21488cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)57517 << 16));
    // 0x214890: 0x342178ec
    ctx->pc = 0x214890u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30956));
    // 0x214894: 0x44810000
    ctx->pc = 0x214894u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x214898: 0xe7a00020
    ctx->pc = 0x214898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21489c: 0xe7a00024
    ctx->pc = 0x21489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2148a0: 0xe7a00028
    ctx->pc = 0x2148a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2148a4: 0x3c0160ad
    ctx->pc = 0x2148a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)24749 << 16));
    // 0x2148a8: 0x342178ec
    ctx->pc = 0x2148a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 30956));
    // 0x2148ac: 0x44810000
    ctx->pc = 0x2148acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2148b0: 0xe7a00010
    ctx->pc = 0x2148b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2148b4: 0xe7a00014
    ctx->pc = 0x2148b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2148b8: 0xe7a00018
    ctx->pc = 0x2148b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2148bc: 0xb02d
    ctx->pc = 0x2148bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148c0: 0x882d
    ctx->pc = 0x2148c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148c4: 0x241e2b00
    ctx->pc = 0x2148c4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2148c8: 0x3c020032
    ctx->pc = 0x2148c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2148cc: 0x24571bc0
    ctx->pc = 0x2148ccu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2148d0: 0x32550002
    ctx->pc = 0x2148d0u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 18), 2));
    // 0x2148d4: 0x32540004
    ctx->pc = 0x2148d4u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 18), 4));
    // 0x2148d8: 0x23e1018
    ctx->pc = 0x2148d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2148dc: 0x0
    ctx->pc = 0x2148dcu;
    // NOP
label_2148e0:
    // 0x2148e0: 0x578021
    ctx->pc = 0x2148e0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2148e4: 0xc085208
    ctx->pc = 0x2148E4u;
    SET_GPR_U32(ctx, 31, 0x2148ECu);
    ctx->pc = 0x2148E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214820u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamIsPlayerValid_0x214820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2148ECu; }
    }
    if (ctx->pc != 0x2148ECu) { return; }
    ctx->pc = 0x2148ECu;
    // 0x2148ec: 0x5040000f
    ctx->pc = 0x2148ECu;
    {
        const bool branch_taken_0x2148ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2148ec) {
            ctx->pc = 0x2148F0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x21492Cu;
            goto label_21492c;
        }
    }
    ctx->pc = 0x2148F4u;
    // 0x2148f4: 0x12a00006
    ctx->pc = 0x2148F4u;
    {
        const bool branch_taken_0x2148f4 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2148F8u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
        if (branch_taken_0x2148f4) {
            ctx->pc = 0x214910u;
            goto label_214910;
        }
    }
    ctx->pc = 0x2148FCu;
    // 0x2148fc: 0x26040050
    ctx->pc = 0x2148fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
    // 0x214900: 0x27a50010
    ctx->pc = 0x214900u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x214904: 0x27a60020
    ctx->pc = 0x214904u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x214908: 0xc0851d0
    ctx->pc = 0x214908u;
    SET_GPR_U32(ctx, 31, 0x214910u);
    ctx->pc = 0x21490Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214740u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamMinMaxAvgPos_0x214740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214910u; }
    }
    if (ctx->pc != 0x214910u) { return; }
    ctx->pc = 0x214910u;
label_214910:
    // 0x214910: 0x12800005
    ctx->pc = 0x214910u;
    {
        const bool branch_taken_0x214910 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x214914u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 96));
        if (branch_taken_0x214910) {
            ctx->pc = 0x214928u;
            goto label_214928;
        }
    }
    ctx->pc = 0x214918u;
    // 0x214918: 0x27a50010
    ctx->pc = 0x214918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21491c: 0x27a60020
    ctx->pc = 0x21491cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x214920: 0xc0851d0
    ctx->pc = 0x214920u;
    SET_GPR_U32(ctx, 31, 0x214928u);
    ctx->pc = 0x214924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214740u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamMinMaxAvgPos_0x214740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214928u; }
    }
    if (ctx->pc != 0x214928u) { return; }
    ctx->pc = 0x214928u;
label_214928:
    // 0x214928: 0x26310001
    ctx->pc = 0x214928u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_21492c:
    // 0x21492c: 0x2a220004
    ctx->pc = 0x21492cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x214930: 0x1440ffeb
    ctx->pc = 0x214930u;
    {
        const bool branch_taken_0x214930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x214934u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x214930) {
            ctx->pc = 0x2148E0u;
            goto label_2148e0;
        }
    }
    ctx->pc = 0x214938u;
    // 0x214938: 0x882d
    ctx->pc = 0x214938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21493c: 0x27a60010
    ctx->pc = 0x21493cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x214940: 0x27a50020
    ctx->pc = 0x214940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x214944: 0x3c013f00
    ctx->pc = 0x214944u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x214948: 0x44811000
    ctx->pc = 0x214948u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x21494c: 0x0
    ctx->pc = 0x21494cu;
    // NOP
label_214950:
    // 0x214950: 0x111080
    ctx->pc = 0x214950u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x214954: 0x3a22021
    ctx->pc = 0x214954u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x214958: 0xc21821
    ctx->pc = 0x214958u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21495c: 0xa21021
    ctx->pc = 0x21495cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x214960: 0xc4600000
    ctx->pc = 0x214960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214964: 0xc4410000
    ctx->pc = 0x214964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214968: 0x46010000
    ctx->pc = 0x214968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21496c: 0x46020002
    ctx->pc = 0x21496cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x214970: 0x26310001
    ctx->pc = 0x214970u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x214974: 0x2a220003
    ctx->pc = 0x214974u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x214978: 0x1440fff5
    ctx->pc = 0x214978u;
    {
        const bool branch_taken_0x214978 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21497Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x214978) {
            ctx->pc = 0x214950u;
            goto label_214950;
        }
    }
    ctx->pc = 0x214980u;
    // 0x214980: 0x32420001
    ctx->pc = 0x214980u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
    // 0x214984: 0x10400005
    ctx->pc = 0x214984u;
    {
        const bool branch_taken_0x214984 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x214988u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x214984) {
            ctx->pc = 0x21499Cu;
            goto label_21499c;
        }
    }
    ctx->pc = 0x21498Cu;
    // 0x21498c: 0xc0b10ec
    ctx->pc = 0x21498Cu;
    SET_GPR_U32(ctx, 31, 0x214994u);
    ctx->pc = 0x214990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C43B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBScreenToWorld_0x2c43b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214994u; }
    }
    if (ctx->pc != 0x214994u) { return; }
    ctx->pc = 0x214994u;
    // 0x214994: 0x10000008
    ctx->pc = 0x214994u;
    {
        const bool branch_taken_0x214994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x214998u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x214994) {
            ctx->pc = 0x2149B8u;
            goto label_2149b8;
        }
    }
    ctx->pc = 0x21499Cu;
label_21499c:
    // 0x21499c: 0xc7a00000
    ctx->pc = 0x21499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2149a0: 0xe6600000
    ctx->pc = 0x2149a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2149a4: 0xc7a00004
    ctx->pc = 0x2149a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2149a8: 0xe6600004
    ctx->pc = 0x2149a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2149ac: 0xc7a00008
    ctx->pc = 0x2149acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2149b0: 0xe6600008
    ctx->pc = 0x2149b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2149b4: 0x282d
    ctx->pc = 0x2149b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2149b8:
    // 0x2149b8: 0x3c020034
    ctx->pc = 0x2149b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2149bc: 0x8c47e7c8
    ctx->pc = 0x2149bcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_2149c0:
    // 0x2149c0: 0x51080
    ctx->pc = 0x2149c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2149c4: 0x533021
    ctx->pc = 0x2149c4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2149c8: 0x8ce30060
    ctx->pc = 0x2149c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x2149cc: 0x621821
    ctx->pc = 0x2149ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2149d0: 0xc4c00000
    ctx->pc = 0x2149d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2149d4: 0xc461000c
    ctx->pc = 0x2149d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2149d8: 0x46010034
    ctx->pc = 0x2149d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2149dc: 0x0
    ctx->pc = 0x2149dcu;
    // NOP
    // 0x2149e0: 0x4501000e
    ctx->pc = 0x2149E0u;
    {
        const bool branch_taken_0x2149e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2149E4u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x2149e0) {
            ctx->pc = 0x214A1Cu;
            goto label_214a1c;
        }
    }
    ctx->pc = 0x2149E8u;
    // 0x2149e8: 0x51880
    ctx->pc = 0x2149e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2149ec: 0x732021
    ctx->pc = 0x2149ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2149f0: 0x8ce20060
    ctx->pc = 0x2149f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x2149f4: 0x431021
    ctx->pc = 0x2149f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2149f8: 0xc4800000
    ctx->pc = 0x2149f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2149fc: 0xc4410018
    ctx->pc = 0x2149fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214a00: 0x46000834
    ctx->pc = 0x214a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214a04: 0x0
    ctx->pc = 0x214a04u;
    // NOP
    // 0x214a08: 0x45010004
    ctx->pc = 0x214A08u;
    {
        const bool branch_taken_0x214a08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x214A0Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x214a08) {
            ctx->pc = 0x214A1Cu;
            goto label_214a1c;
        }
    }
    ctx->pc = 0x214A10u;
    // 0x214a10: 0x51080
    ctx->pc = 0x214a10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x214a14: 0x531021
    ctx->pc = 0x214a14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x214a18: 0xc4400000
    ctx->pc = 0x214a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214a1c:
    // 0x214a1c: 0x24a50001
    ctx->pc = 0x214a1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x214a20: 0x28a20003
    ctx->pc = 0x214a20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x214a24: 0x1440ffe6
    ctx->pc = 0x214A24u;
    {
        const bool branch_taken_0x214a24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x214A28u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        if (branch_taken_0x214a24) {
            ctx->pc = 0x2149C0u;
            goto label_2149c0;
        }
    }
    ctx->pc = 0x214A2Cu;
    // 0x214a2c: 0x16102a
    ctx->pc = 0x214a2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 22)));
    // 0x214a30: 0xdfbf00c0
    ctx->pc = 0x214a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x214a34: 0xdfbe00b0
    ctx->pc = 0x214a34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x214a38: 0xdfb700a0
    ctx->pc = 0x214a38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x214a3c: 0xdfb60090
    ctx->pc = 0x214a3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x214a40: 0xdfb50080
    ctx->pc = 0x214a40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x214a44: 0xdfb40070
    ctx->pc = 0x214a44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x214a48: 0xdfb30060
    ctx->pc = 0x214a48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x214a4c: 0xdfb20050
    ctx->pc = 0x214a4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214a50: 0xdfb10040
    ctx->pc = 0x214a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214a54: 0xdfb00030
    ctx->pc = 0x214a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214a58: 0x3e00008
    ctx->pc = 0x214A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214A5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2148E0u: goto label_2148e0;
            case 0x214910u: goto label_214910;
            case 0x214928u: goto label_214928;
            case 0x21492Cu: goto label_21492c;
            case 0x214950u: goto label_214950;
            case 0x21499Cu: goto label_21499c;
            case 0x2149B8u: goto label_2149b8;
            case 0x2149C0u: goto label_2149c0;
            case 0x214A1Cu: goto label_214a1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214A60u;
}
