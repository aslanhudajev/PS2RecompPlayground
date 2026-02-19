#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWindowZoom
// Address: 0x2d1620 - 0x2d179c
void MBWindowZoom_0x2d1620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1620u;

    // 0x2d1620: 0x27bdff90
    ctx->pc = 0x2d1620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d1624: 0xffbf0060
    ctx->pc = 0x2d1624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d1628: 0xffb50050
    ctx->pc = 0x2d1628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d162c: 0xffb40040
    ctx->pc = 0x2d162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d1630: 0xffb30030
    ctx->pc = 0x2d1630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d1634: 0xffb20020
    ctx->pc = 0x2d1634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d1638: 0xffb10010
    ctx->pc = 0x2d1638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d163c: 0xffb00000
    ctx->pc = 0x2d163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1640: 0x80a02d
    ctx->pc = 0x2d1640u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1644: 0xa0902d
    ctx->pc = 0x2d1644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1648: 0xc0a82d
    ctx->pc = 0x2d1648u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d164c: 0x3c020036
    ctx->pc = 0x2d164cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2d1650: 0x8c53dee0
    ctx->pc = 0x2d1650u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2d1654: 0x3c02003a
    ctx->pc = 0x2d1654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d1658: 0x8c501bd0
    ctx->pc = 0x2d1658u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2d165c: 0x2478823
    ctx->pc = 0x2d165cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2d1660: 0x2631ffff
    ctx->pc = 0x2d1660u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d1664: 0xc60c001c
    ctx->pc = 0x2d1664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1668: 0xc0b4492
    ctx->pc = 0x2D1668u;
    SET_GPR_U32(ctx, 31, 0x2D1670u);
    ctx->pc = 0x2D166Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D1248u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetAng_0x2d1248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1670u; }
    }
    if (ctx->pc != 0x2D1670u) { return; }
    ctx->pc = 0x2D1670u;
    // 0x2d1670: 0x3c030038
    ctx->pc = 0x2d1670u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2d1674: 0x2463b1a8
    ctx->pc = 0x2d1674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294947240));
    // 0x2d1678: 0xac740008
    ctx->pc = 0x2d1678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 20));
    // 0x2d167c: 0xac72000c
    ctx->pc = 0x2d167cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
    // 0x2d1680: 0x8e620010
    ctx->pc = 0x2d1680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d1684: 0x8c420020
    ctx->pc = 0x2d1684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d1688: 0x2a21018
    ctx->pc = 0x2d1688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2d168c: 0xac620010
    ctx->pc = 0x2d168cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2d1690: 0x8e620010
    ctx->pc = 0x2d1690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d1694: 0x8c420024
    ctx->pc = 0x2d1694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d1698: 0x2221018
    ctx->pc = 0x2d1698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2d169c: 0xac620014
    ctx->pc = 0x2d169cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2d16a0: 0x44942800
    ctx->pc = 0x2d16a0u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 20);
    // 0x2d16a4: 0x46802960
    ctx->pc = 0x2d16a4u;
    ctx->f[5] = FPU_CVT_S_W(*(int32_t*)&ctx->f[5]);
    // 0x2d16a8: 0xc6010014
    ctx->pc = 0x2d16a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d16ac: 0x3c013f00
    ctx->pc = 0x2d16acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2d16b0: 0x44811800
    ctx->pc = 0x2d16b0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2d16b4: 0x46030982
    ctx->pc = 0x2d16b4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d16b8: 0xc602004c
    ctx->pc = 0x2d16b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d16bc: 0x46023000
    ctx->pc = 0x2d16bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x2d16c0: 0x46002942
    ctx->pc = 0x2d16c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2d16c4: 0x44950000
    ctx->pc = 0x2d16c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 21);
    // 0x2d16c8: 0x46800020
    ctx->pc = 0x2d16c8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d16cc: 0x46020840
    ctx->pc = 0x2d16ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d16d0: 0x46010002
    ctx->pc = 0x2d16d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d16d4: 0x46002941
    ctx->pc = 0x2d16d4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2d16d8: 0xe6050008
    ctx->pc = 0x2d16d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d16dc: 0x44922000
    ctx->pc = 0x2d16dcu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 18);
    // 0x2d16e0: 0x46802120
    ctx->pc = 0x2d16e0u;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
    // 0x2d16e4: 0xc6010018
    ctx->pc = 0x2d16e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d16e8: 0x460308c2
    ctx->pc = 0x2d16e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2d16ec: 0xc6020058
    ctx->pc = 0x2d16ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d16f0: 0x46021800
    ctx->pc = 0x2d16f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2d16f4: 0x46002102
    ctx->pc = 0x2d16f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2d16f8: 0x44910000
    ctx->pc = 0x2d16f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x2d16fc: 0x46800020
    ctx->pc = 0x2d16fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d1700: 0x46020840
    ctx->pc = 0x2d1700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d1704: 0x46010002
    ctx->pc = 0x2d1704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d1708: 0x46002101
    ctx->pc = 0x2d1708u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2d170c: 0xe604000c
    ctx->pc = 0x2d170cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d1710: 0xc4600008
    ctx->pc = 0x2d1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1714: 0x46800020
    ctx->pc = 0x2d1714u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d1718: 0xc6010000
    ctx->pc = 0x2d1718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d171c: 0x46010002
    ctx->pc = 0x2d171cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d1720: 0xe6000000
    ctx->pc = 0x2d1720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d1724: 0xc460000c
    ctx->pc = 0x2d1724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1728: 0x46800020
    ctx->pc = 0x2d1728u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d172c: 0xc6010004
    ctx->pc = 0x2d172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1730: 0x46010002
    ctx->pc = 0x2d1730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d1734: 0xe6000004
    ctx->pc = 0x2d1734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d1738: 0x3c013f80
    ctx->pc = 0x2d1738u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d173c: 0x44810000
    ctx->pc = 0x2d173cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d1740: 0xe6000158
    ctx->pc = 0x2d1740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 344), bits); }
    // 0x2d1744: 0xc4600008
    ctx->pc = 0x2d1744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1748: 0x46800020
    ctx->pc = 0x2d1748u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d174c: 0x46003182
    ctx->pc = 0x2d174cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2d1750: 0xe60601ac
    ctx->pc = 0x2d1750u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
    // 0x2d1754: 0xc4600008
    ctx->pc = 0x2d1754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1758: 0x46800020
    ctx->pc = 0x2d1758u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d175c: 0x460018c2
    ctx->pc = 0x2d175cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d1760: 0xe60301b0
    ctx->pc = 0x2d1760u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x2d1764: 0xc6000010
    ctx->pc = 0x2d1764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1768: 0xe60001b4
    ctx->pc = 0x2d1768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 436), bits); }
    // 0x2d176c: 0xe60501a0
    ctx->pc = 0x2d176cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2d1770: 0xe60401a4
    ctx->pc = 0x2d1770u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2d1774: 0xae0001a8
    ctx->pc = 0x2d1774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x2d1778: 0xdfbf0060
    ctx->pc = 0x2d1778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d177c: 0xdfb50050
    ctx->pc = 0x2d177cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1780: 0xdfb40040
    ctx->pc = 0x2d1780u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1784: 0xdfb30030
    ctx->pc = 0x2d1784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1788: 0xdfb20020
    ctx->pc = 0x2d1788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d178c: 0xdfb10010
    ctx->pc = 0x2d178cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1790: 0xdfb00000
    ctx->pc = 0x2d1790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1794: 0x3e00008
    ctx->pc = 0x2D1794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D179Cu;
}
