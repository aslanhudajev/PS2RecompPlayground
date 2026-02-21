#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ItemObjectCol
// Address: 0x257538 - 0x257730
void ItemObjectCol_0x257538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x257538u;

    // 0x257538: 0x27bdff50
    ctx->pc = 0x257538u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25753c: 0xffbf0080
    ctx->pc = 0x25753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x257540: 0xffb50070
    ctx->pc = 0x257540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x257544: 0xffb40060
    ctx->pc = 0x257544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x257548: 0xffb30050
    ctx->pc = 0x257548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x25754c: 0xffb20040
    ctx->pc = 0x25754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x257550: 0xffb10030
    ctx->pc = 0x257550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x257554: 0xffb00020
    ctx->pc = 0x257554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x257558: 0xe7b600a0
    ctx->pc = 0x257558u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x25755c: 0xe7b50098
    ctx->pc = 0x25755cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x257560: 0xe7b40090
    ctx->pc = 0x257560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x257564: 0x80982d
    ctx->pc = 0x257564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257568: 0xa0802d
    ctx->pc = 0x257568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25756c: 0xc0882d
    ctx->pc = 0x25756cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257570: 0x46006506
    ctx->pc = 0x257570u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x257574: 0xe0a82d
    ctx->pc = 0x257574u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257578: 0x100a02d
    ctx->pc = 0x257578u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25757c: 0x866200d4
    ctx->pc = 0x25757cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x257580: 0x4410005
    ctx->pc = 0x257580u;
    {
        const bool branch_taken_0x257580 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x257584u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 112)));
        if (branch_taken_0x257580) {
            ctx->pc = 0x257598u;
            goto label_257598;
        }
    }
    ctx->pc = 0x257588u;
    // 0x257588: 0x3c04003b
    ctx->pc = 0x257588u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x25758c: 0x24848b38
    ctx->pc = 0x25758cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937400));
    // 0x257590: 0xc0b49a6
    ctx->pc = 0x257590u;
    SET_GPR_U32(ctx, 31, 0x257598u);
    ctx->pc = 0x257594u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257598u; }
    }
    if (ctx->pc != 0x257598u) { return; }
    ctx->pc = 0x257598u;
label_257598:
    // 0x257598: 0xc6000004
    ctx->pc = 0x257598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25759c: 0xc6210004
    ctx->pc = 0x25759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2575a0: 0x46010034
    ctx->pc = 0x2575a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2575a4: 0x0
    ctx->pc = 0x2575a4u;
    // NOP
    // 0x2575a8: 0x45020004
    ctx->pc = 0x2575A8u;
    {
        const bool branch_taken_0x2575a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2575a8) {
            ctx->pc = 0x2575ACu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2575BCu;
            goto label_2575bc;
        }
    }
    ctx->pc = 0x2575B0u;
    // 0x2575b0: 0x46140541
    ctx->pc = 0x2575b0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2575b4: 0x10000004
    ctx->pc = 0x2575B4u;
    {
        const bool branch_taken_0x2575b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2575B8u;
        ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        if (branch_taken_0x2575b4) {
            ctx->pc = 0x2575C8u;
            goto label_2575c8;
        }
    }
    ctx->pc = 0x2575BCu;
label_2575bc:
    // 0x2575bc: 0x46140541
    ctx->pc = 0x2575bcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2575c0: 0xc6000004
    ctx->pc = 0x2575c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2575c4: 0x4600a580
    ctx->pc = 0x2575c4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2575c8:
    // 0x2575c8: 0x3c020032
    ctx->pc = 0x2575c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2575cc: 0x2443f9f8
    ctx->pc = 0x2575ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x2575d0: 0x8c620058
    ctx->pc = 0x2575d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2575d4: 0x24420001
    ctx->pc = 0x2575d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2575d8: 0xac620058
    ctx->pc = 0x2575d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x2575dc: 0x28420100
    ctx->pc = 0x2575dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 256));
    // 0x2575e0: 0x54400004
    ctx->pc = 0x2575E0u;
    {
        const bool branch_taken_0x2575e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2575e0) {
            ctx->pc = 0x2575E4u;
            SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
            ctx->pc = 0x2575F4u;
            goto label_2575f4;
        }
    }
    ctx->pc = 0x2575E8u;
    // 0x2575e8: 0x24020001
    ctx->pc = 0x2575e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2575ec: 0xac620058
    ctx->pc = 0x2575ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x2575f0: 0x3c030032
    ctx->pc = 0x2575f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_2575f4:
    // 0x2575f4: 0x3c020032
    ctx->pc = 0x2575f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2575f8: 0x9042fa50
    ctx->pc = 0x2575f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294965840)));
    // 0x2575fc: 0xa062fd38
    ctx->pc = 0x2575fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966584), (uint8_t)GPR_U32(ctx, 2));
    // 0x257600: 0x3c020032
    ctx->pc = 0x257600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x257604: 0xac40fd3c
    ctx->pc = 0x257604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966588), GPR_U32(ctx, 0));
    // 0x257608: 0x200202d
    ctx->pc = 0x257608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25760c: 0x3c050032
    ctx->pc = 0x25760cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x257610: 0x24a5f9d0
    ctx->pc = 0x257610u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965712));
    // 0x257614: 0xc0b587e
    ctx->pc = 0x257614u;
    SET_GPR_U32(ctx, 31, 0x25761Cu);
    ctx->pc = 0x257618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D61F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulBodyVecMat4_0x2d61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25761Cu; }
    }
    if (ctx->pc != 0x25761Cu) { return; }
    ctx->pc = 0x25761Cu;
    // 0x25761c: 0x220202d
    ctx->pc = 0x25761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257620: 0x3c050032
    ctx->pc = 0x257620u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x257624: 0x24a5f9e0
    ctx->pc = 0x257624u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965728));
    // 0x257628: 0xc0b587e
    ctx->pc = 0x257628u;
    SET_GPR_U32(ctx, 31, 0x257630u);
    ctx->pc = 0x25762Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D61F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulBodyVecMat4_0x2d61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257630u; }
    }
    if (ctx->pc != 0x257630u) { return; }
    ctx->pc = 0x257630u;
    // 0x257630: 0xc6400034
    ctx->pc = 0x257630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257634: 0x4600a841
    ctx->pc = 0x257634u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x257638: 0xc6430014
    ctx->pc = 0x257638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25763c: 0x46030842
    ctx->pc = 0x25763cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x257640: 0x3c014280
    ctx->pc = 0x257640u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17024 << 16));
    // 0x257644: 0x44811000
    ctx->pc = 0x257644u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x257648: 0x46020842
    ctx->pc = 0x257648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x25764c: 0x46000924
    ctx->pc = 0x25764cu;
    *(int32_t*)&ctx->f[4] = FPU_CVT_W_S(ctx->f[1]);
    // 0x257650: 0x44092000
    ctx->pc = 0x257650u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[4]);
    // 0x257654: 0x94c00
    ctx->pc = 0x257654u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 16));
    // 0x257658: 0x4600b001
    ctx->pc = 0x257658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x25765c: 0x46030002
    ctx->pc = 0x25765cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x257660: 0x46020002
    ctx->pc = 0x257660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x257664: 0x46000064
    ctx->pc = 0x257664u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x257668: 0x440a0800
    ctx->pc = 0x257668u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[1]);
    // 0x25766c: 0xa5400
    ctx->pc = 0x25766cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 16));
    // 0x257670: 0x3c020032
    ctx->pc = 0x257670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x257674: 0x3c01bf00
    ctx->pc = 0x257674u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48896 << 16));
    // 0x257678: 0x44810000
    ctx->pc = 0x257678u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25767c: 0xe440fd2c
    ctx->pc = 0x25767cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966572), bits); }
    // 0x257680: 0x3c020032
    ctx->pc = 0x257680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x257684: 0x3c014000
    ctx->pc = 0x257684u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x257688: 0x44810000
    ctx->pc = 0x257688u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25768c: 0xe440fd30
    ctx->pc = 0x25768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966576), bits); }
    // 0x257690: 0x866400d4
    ctx->pc = 0x257690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x257694: 0x866500d6
    ctx->pc = 0x257694u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 214)));
    // 0x257698: 0x4600a306
    ctx->pc = 0x257698u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25769c: 0x27a60010
    ctx->pc = 0x25769cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2576a0: 0x382d
    ctx->pc = 0x2576a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576a4: 0x3a0402d
    ctx->pc = 0x2576a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576a8: 0x94c03
    ctx->pc = 0x2576a8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x2576ac: 0xa5403
    ctx->pc = 0x2576acu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x2576b0: 0xc08758e
    ctx->pc = 0x2576B0u;
    SET_GPR_U32(ctx, 31, 0x2576B8u);
    ctx->pc = 0x2576B4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21D638u;
    {
        const uint32_t __entryPc = ctx->pc;
        CTriListCollide_0x21d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2576B8u; }
    }
    if (ctx->pc != 0x2576B8u) { return; }
    ctx->pc = 0x2576B8u;
    // 0x2576b8: 0x46000506
    ctx->pc = 0x2576b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2576bc: 0x44800000
    ctx->pc = 0x2576bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2576c0: 0x46140036
    ctx->pc = 0x2576c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2576c4: 0x0
    ctx->pc = 0x2576c4u;
    // NOP
    // 0x2576c8: 0x4500000d
    ctx->pc = 0x2576C8u;
    {
        const bool branch_taken_0x2576c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2576CCu;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x2576c8) {
            ctx->pc = 0x257700u;
            goto label_257700;
        }
    }
    ctx->pc = 0x2576D0u;
    // 0x2576d0: 0x12800005
    ctx->pc = 0x2576D0u;
    {
        const bool branch_taken_0x2576d0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2576D4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2576d0) {
            ctx->pc = 0x2576E8u;
            goto label_2576e8;
        }
    }
    ctx->pc = 0x2576D8u;
    // 0x2576d8: 0x24840008
    ctx->pc = 0x2576d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x2576dc: 0x280282d
    ctx->pc = 0x2576dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576e0: 0xc0b57a2
    ctx->pc = 0x2576E0u;
    SET_GPR_U32(ctx, 31, 0x2576E8u);
    ctx->pc = 0x2576E4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2576E8u; }
    }
    if (ctx->pc != 0x2576E8u) { return; }
    ctx->pc = 0x2576E8u;
label_2576e8:
    // 0x2576e8: 0x12a00004
    ctx->pc = 0x2576E8u;
    {
        const bool branch_taken_0x2576e8 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2576ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2576e8) {
            ctx->pc = 0x2576FCu;
            goto label_2576fc;
        }
    }
    ctx->pc = 0x2576F0u;
    // 0x2576f0: 0x2a0282d
    ctx->pc = 0x2576f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576f4: 0xc0b5836
    ctx->pc = 0x2576F4u;
    SET_GPR_U32(ctx, 31, 0x2576FCu);
    ctx->pc = 0x2576F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D60D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat4_0x2d60d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2576FCu; }
    }
    if (ctx->pc != 0x2576FCu) { return; }
    ctx->pc = 0x2576FCu;
label_2576fc:
    // 0x2576fc: 0x4600a006
    ctx->pc = 0x2576fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_257700:
    // 0x257700: 0xdfbf0080
    ctx->pc = 0x257700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257704: 0xdfb50070
    ctx->pc = 0x257704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257708: 0xdfb40060
    ctx->pc = 0x257708u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25770c: 0xdfb30050
    ctx->pc = 0x25770cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257710: 0xdfb20040
    ctx->pc = 0x257710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257714: 0xdfb10030
    ctx->pc = 0x257714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257718: 0xdfb00020
    ctx->pc = 0x257718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25771c: 0xc7b600a0
    ctx->pc = 0x25771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x257720: 0xc7b50098
    ctx->pc = 0x257720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x257724: 0xc7b40090
    ctx->pc = 0x257724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x257728: 0x3e00008
    ctx->pc = 0x257728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25772Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x257598u: goto label_257598;
            case 0x2575BCu: goto label_2575bc;
            case 0x2575C8u: goto label_2575c8;
            case 0x2575F4u: goto label_2575f4;
            case 0x2576E8u: goto label_2576e8;
            case 0x2576FCu: goto label_2576fc;
            case 0x257700u: goto label_257700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x257730u;
}
