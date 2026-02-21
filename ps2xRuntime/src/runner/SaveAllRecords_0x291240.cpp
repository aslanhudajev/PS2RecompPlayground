#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SaveAllRecords
// Address: 0x291240 - 0x2913c0
void SaveAllRecords_0x291240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291240u;

    // 0x291240: 0x27bdfff0
    ctx->pc = 0x291240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291244: 0xffbf0000
    ctx->pc = 0x291244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291248: 0x3c040034
    ctx->pc = 0x291248u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x29124c: 0x2484eb60
    ctx->pc = 0x29124cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962016));
    // 0x291250: 0x3c05003c
    ctx->pc = 0x291250u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x291254: 0xc099ca8
    ctx->pc = 0x291254u;
    SET_GPR_U32(ctx, 31, 0x29125Cu);
    ctx->pc = 0x291258u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16144));
    ctx->pc = 0x2672A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyCam_0x2672a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29125Cu; }
    }
    if (ctx->pc != 0x29125Cu) { return; }
    ctx->pc = 0x29125Cu;
    // 0x29125c: 0x282d
    ctx->pc = 0x29125cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291260: 0x3c02003c
    ctx->pc = 0x291260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x291264: 0x244e40e0
    ctx->pc = 0x291264u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 2), 16608));
    // 0x291268: 0x240d000c
    ctx->pc = 0x291268u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 12));
    // 0x29126c: 0x3c020034
    ctx->pc = 0x29126cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291270: 0x244cf958
    ctx->pc = 0x291270u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 4294965592));
    // 0x291274: 0x3c02003c
    ctx->pc = 0x291274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x291278: 0x244b40e4
    ctx->pc = 0x291278u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 16612));
    // 0x29127c: 0x3c020034
    ctx->pc = 0x29127cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291280: 0x244af95c
    ctx->pc = 0x291280u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294965596));
    // 0x291284: 0x3c02003c
    ctx->pc = 0x291284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x291288: 0x244940e8
    ctx->pc = 0x291288u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 16616));
    // 0x29128c: 0x3c020034
    ctx->pc = 0x29128cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291290: 0x2448f960
    ctx->pc = 0x291290u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294965600));
    // 0x291294: 0x3c02003c
    ctx->pc = 0x291294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x291298: 0x24474138
    ctx->pc = 0x291298u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 16696));
    // 0x29129c: 0x3c020034
    ctx->pc = 0x29129cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2912a0: 0x2446f9b0
    ctx->pc = 0x2912a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294965680));
    // 0x2912a4: 0x0
    ctx->pc = 0x2912a4u;
    // NOP
label_2912a8:
    // 0x2912a8: 0xad1818
    ctx->pc = 0x2912a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2912ac: 0x6e2021
    ctx->pc = 0x2912acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2912b0: 0x6c1021
    ctx->pc = 0x2912b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2912b4: 0xc4400000
    ctx->pc = 0x2912b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912b8: 0xe4800000
    ctx->pc = 0x2912b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2912bc: 0x6b2021
    ctx->pc = 0x2912bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2912c0: 0x6a1021
    ctx->pc = 0x2912c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2912c4: 0xc4400000
    ctx->pc = 0x2912c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912c8: 0xe4800000
    ctx->pc = 0x2912c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2912cc: 0x691021
    ctx->pc = 0x2912ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2912d0: 0x681821
    ctx->pc = 0x2912d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2912d4: 0xc4600000
    ctx->pc = 0x2912d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912d8: 0xe4400000
    ctx->pc = 0x2912d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2912dc: 0x51080
    ctx->pc = 0x2912dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2912e0: 0x471821
    ctx->pc = 0x2912e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2912e4: 0x461021
    ctx->pc = 0x2912e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2912e8: 0xc4400000
    ctx->pc = 0x2912e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2912ec: 0x24a50001
    ctx->pc = 0x2912ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2912f0: 0x28a20007
    ctx->pc = 0x2912f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 7));
    // 0x2912f4: 0x1440ffec
    ctx->pc = 0x2912F4u;
    {
        const bool branch_taken_0x2912f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2912F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x2912f4) {
            ctx->pc = 0x2912A8u;
            goto label_2912a8;
        }
    }
    ctx->pc = 0x2912FCu;
    // 0x2912fc: 0x3c03003c
    ctx->pc = 0x2912fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x291300: 0x3c020034
    ctx->pc = 0x291300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291304: 0x8c42f90c
    ctx->pc = 0x291304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965516)));
    // 0x291308: 0xac624154
    ctx->pc = 0x291308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16724), GPR_U32(ctx, 2));
    // 0x29130c: 0x3c03003c
    ctx->pc = 0x29130cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x291310: 0x3c020034
    ctx->pc = 0x291310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291314: 0x8c42f928
    ctx->pc = 0x291314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x291318: 0xac6240b0
    ctx->pc = 0x291318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16560), GPR_U32(ctx, 2));
    // 0x29131c: 0x3c03003c
    ctx->pc = 0x29131cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x291320: 0x3c020034
    ctx->pc = 0x291320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291324: 0x8c42f92c
    ctx->pc = 0x291324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965548)));
    // 0x291328: 0xac6240b4
    ctx->pc = 0x291328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16564), GPR_U32(ctx, 2));
    // 0x29132c: 0x3c03003c
    ctx->pc = 0x29132cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x291330: 0x3c020034
    ctx->pc = 0x291330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291334: 0x8c42f930
    ctx->pc = 0x291334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965552)));
    // 0x291338: 0xac6240b8
    ctx->pc = 0x291338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16568), GPR_U32(ctx, 2));
    // 0x29133c: 0x3c03003c
    ctx->pc = 0x29133cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x291340: 0x3c020034
    ctx->pc = 0x291340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291344: 0xc440f8f4
    ctx->pc = 0x291344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291348: 0xe46040bc
    ctx->pc = 0x291348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16572), bits); }
    // 0x29134c: 0x3c03003c
    ctx->pc = 0x29134cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x291350: 0x3c020034
    ctx->pc = 0x291350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291354: 0xc440f8f8
    ctx->pc = 0x291354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291358: 0xe46040c0
    ctx->pc = 0x291358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16576), bits); }
    // 0x29135c: 0x3c03003c
    ctx->pc = 0x29135cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x291360: 0x246540c8
    ctx->pc = 0x291360u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 16584));
    // 0x291364: 0x3c020034
    ctx->pc = 0x291364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291368: 0x2444fa08
    ctx->pc = 0x291368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294965768));
    // 0x29136c: 0xc440fa08
    ctx->pc = 0x29136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291370: 0xe46040c8
    ctx->pc = 0x291370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16584), bits); }
    // 0x291374: 0xc4800004
    ctx->pc = 0x291374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291378: 0xe4a00004
    ctx->pc = 0x291378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x29137c: 0xc4800008
    ctx->pc = 0x29137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291380: 0xe4a00008
    ctx->pc = 0x291380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x291384: 0x3c03003c
    ctx->pc = 0x291384u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x291388: 0x3c020034
    ctx->pc = 0x291388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29138c: 0x8c42fa04
    ctx->pc = 0x29138cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965764)));
    // 0x291390: 0xac6240d4
    ctx->pc = 0x291390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16596), GPR_U32(ctx, 2));
    // 0x291394: 0x3c03003c
    ctx->pc = 0x291394u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x291398: 0x3c020034
    ctx->pc = 0x291398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29139c: 0xc440fa14
    ctx->pc = 0x29139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913a0: 0xe46040d8
    ctx->pc = 0x2913a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16600), bits); }
    // 0x2913a4: 0x3c03003c
    ctx->pc = 0x2913a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2913a8: 0x3c020034
    ctx->pc = 0x2913a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2913ac: 0xc440fa18
    ctx->pc = 0x2913acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2913b0: 0xe46040dc
    ctx->pc = 0x2913b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16604), bits); }
    // 0x2913b4: 0xdfbf0000
    ctx->pc = 0x2913b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2913b8: 0x3e00008
    ctx->pc = 0x2913B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2913BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2912A8u: goto label_2912a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2913C0u;
}
