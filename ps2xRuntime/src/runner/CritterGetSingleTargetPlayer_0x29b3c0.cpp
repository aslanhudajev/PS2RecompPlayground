#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGetSingleTargetPlayer
// Address: 0x29b3c0 - 0x29b57c
void CritterGetSingleTargetPlayer_0x29b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29b3c0u;

    // 0x29b3c0: 0x27bdff60
    ctx->pc = 0x29b3c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29b3c4: 0xffbf0080
    ctx->pc = 0x29b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29b3c8: 0xffb30070
    ctx->pc = 0x29b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x29b3cc: 0xffb20060
    ctx->pc = 0x29b3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x29b3d0: 0xffb10050
    ctx->pc = 0x29b3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x29b3d4: 0xffb00040
    ctx->pc = 0x29b3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29b3d8: 0xe7b40090
    ctx->pc = 0x29b3d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29b3dc: 0x80802d
    ctx->pc = 0x29b3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3e0: 0xa6000136
    ctx->pc = 0x29b3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x29b3e4: 0xc60104f4
    ctx->pc = 0x29b3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b3e8: 0x44800000
    ctx->pc = 0x29b3e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29b3ec: 0x46000836
    ctx->pc = 0x29b3ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b3f0: 0x0
    ctx->pc = 0x29b3f0u;
    // NOP
    // 0x29b3f4: 0x4501005a
    ctx->pc = 0x29B3F4u;
    {
        const bool branch_taken_0x29b3f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B3F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x29b3f4) {
            ctx->pc = 0x29B560u;
            goto label_29b560;
        }
    }
    ctx->pc = 0x29B3FCu;
    // 0x29b3fc: 0x902d
    ctx->pc = 0x29b3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b400: 0x3c020032
    ctx->pc = 0x29b400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29b404: 0x24511bc0
    ctx->pc = 0x29b404u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29b408: 0x24130001
    ctx->pc = 0x29b408u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b40c: 0x46000506
    ctx->pc = 0x29b40cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_29b410:
    // 0x29b410: 0x8e2200fc
    ctx->pc = 0x29b410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x29b414: 0x54530041
    ctx->pc = 0x29B414u;
    {
        const bool branch_taken_0x29b414 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x29b414) {
            ctx->pc = 0x29B418u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29B51Cu;
            goto label_29b51c;
        }
    }
    ctx->pc = 0x29B41Cu;
    // 0x29b41c: 0x8e220138
    ctx->pc = 0x29b41cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x29b420: 0x30420004
    ctx->pc = 0x29b420u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x29b424: 0x5440003d
    ctx->pc = 0x29B424u;
    {
        const bool branch_taken_0x29b424 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29b424) {
            ctx->pc = 0x29B428u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29B51Cu;
            goto label_29b51c;
        }
    }
    ctx->pc = 0x29B42Cu;
    // 0x29b42c: 0xc6200070
    ctx->pc = 0x29b42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b430: 0xe7a00000
    ctx->pc = 0x29b430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29b434: 0xc6200074
    ctx->pc = 0x29b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b438: 0xe7a00004
    ctx->pc = 0x29b438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29b43c: 0xc6200078
    ctx->pc = 0x29b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b440: 0xe7a00008
    ctx->pc = 0x29b440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29b444: 0x8e050004
    ctx->pc = 0x29b444u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b448: 0x200202d
    ctx->pc = 0x29b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b44c: 0x24a50080
    ctx->pc = 0x29b44cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 128));
    // 0x29b450: 0x3a0302d
    ctx->pc = 0x29b450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b454: 0xc0a6b02
    ctx->pc = 0x29B454u;
    SET_GPR_U32(ctx, 31, 0x29B45Cu);
    ctx->pc = 0x29B458u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x29AC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCalcTarget_0x29ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B45Cu; }
    }
    if (ctx->pc != 0x29B45Cu) { return; }
    ctx->pc = 0x29B45Cu;
    // 0x29b45c: 0x8e020b5c
    ctx->pc = 0x29b45cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2908)));
    // 0x29b460: 0x1040000a
    ctx->pc = 0x29B460u;
    {
        const bool branch_taken_0x29b460 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B464u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x29b460) {
            ctx->pc = 0x29B48Cu;
            goto label_29b48c;
        }
    }
    ctx->pc = 0x29B468u;
    // 0x29b468: 0xc6000b58
    ctx->pc = 0x29b468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b46c: 0x4600a034
    ctx->pc = 0x29b46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b470: 0x0
    ctx->pc = 0x29b470u;
    // NOP
    // 0x29b474: 0x45000006
    ctx->pc = 0x29B474u;
    {
        const bool branch_taken_0x29b474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B478u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29b474) {
            ctx->pc = 0x29B490u;
            goto label_29b490;
        }
    }
    ctx->pc = 0x29B47Cu;
    // 0x29b47c: 0x46020034
    ctx->pc = 0x29b47cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b480: 0x0
    ctx->pc = 0x29b480u;
    // NOP
    // 0x29b484: 0x45030025
    ctx->pc = 0x29B484u;
    {
        const bool branch_taken_0x29b484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b484) {
            ctx->pc = 0x29B488u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29B51Cu;
            goto label_29b51c;
        }
    }
    ctx->pc = 0x29B48Cu;
label_29b48c:
    // 0x29b48c: 0x3c020031
    ctx->pc = 0x29b48cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_29b490:
    // 0x29b490: 0xc441ffa4
    ctx->pc = 0x29b490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b494: 0xc62008c0
    ctx->pc = 0x29b494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b498: 0x46000834
    ctx->pc = 0x29b498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b49c: 0x0
    ctx->pc = 0x29b49cu;
    // NOP
    // 0x29b4a0: 0x45000004
    ctx->pc = 0x29B4A0u;
    {
        const bool branch_taken_0x29b4a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B4A4u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
        if (branch_taken_0x29b4a0) {
            ctx->pc = 0x29B4B4u;
            goto label_29b4b4;
        }
    }
    ctx->pc = 0x29B4A8u;
    // 0x29b4a8: 0x3c01447a
    ctx->pc = 0x29b4a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x29b4ac: 0x44810000
    ctx->pc = 0x29b4acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29b4b0: 0x46001082
    ctx->pc = 0x29b4b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_29b4b4:
    // 0x29b4b4: 0x50400007
    ctx->pc = 0x29B4B4u;
    {
        const bool branch_taken_0x29b4b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29b4b4) {
            ctx->pc = 0x29B4B8u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 19));
            ctx->pc = 0x29B4D4u;
            goto label_29b4d4;
        }
    }
    ctx->pc = 0x29B4BCu;
    // 0x29b4bc: 0xc600014c
    ctx->pc = 0x29b4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b4c0: 0x46001034
    ctx->pc = 0x29b4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b4c4: 0x0
    ctx->pc = 0x29b4c4u;
    // NOP
    // 0x29b4c8: 0x45020014
    ctx->pc = 0x29B4C8u;
    {
        const bool branch_taken_0x29b4c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b4c8) {
            ctx->pc = 0x29B4CCu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29B51Cu;
            goto label_29b51c;
        }
    }
    ctx->pc = 0x29B4D0u;
    // 0x29b4d0: 0xa6130136
    ctx->pc = 0x29b4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 19));
label_29b4d4:
    // 0x29b4d4: 0xe7a2001c
    ctx->pc = 0x29b4d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x29b4d8: 0xafb20010
    ctx->pc = 0x29b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x29b4dc: 0x3c013f80
    ctx->pc = 0x29b4dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29b4e0: 0x44810000
    ctx->pc = 0x29b4e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29b4e4: 0xe7a00020
    ctx->pc = 0x29b4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29b4e8: 0xdfa20010
    ctx->pc = 0x29b4e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b4ec: 0xfe020140
    ctx->pc = 0x29b4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 2));
    // 0x29b4f0: 0xdfa20018
    ctx->pc = 0x29b4f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29b4f4: 0xfe020148
    ctx->pc = 0x29b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 328), GPR_U64(ctx, 2));
    // 0x29b4f8: 0xdfa20020
    ctx->pc = 0x29b4f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b4fc: 0xfe020150
    ctx->pc = 0x29b4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 336), GPR_U64(ctx, 2));
    // 0x29b500: 0xdfa20028
    ctx->pc = 0x29b500u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29b504: 0xfe020158
    ctx->pc = 0x29b504u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 344), GPR_U64(ctx, 2));
    // 0x29b508: 0xdfa20030
    ctx->pc = 0x29b508u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b50c: 0xfe020160
    ctx->pc = 0x29b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 352), GPR_U64(ctx, 2));
    // 0x29b510: 0xdfa20038
    ctx->pc = 0x29b510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29b514: 0xfe020168
    ctx->pc = 0x29b514u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 360), GPR_U64(ctx, 2));
    // 0x29b518: 0x26520001
    ctx->pc = 0x29b518u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_29b51c:
    // 0x29b51c: 0x2a420004
    ctx->pc = 0x29b51cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x29b520: 0x1440ffbb
    ctx->pc = 0x29B520u;
    {
        const bool branch_taken_0x29b520 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29B524u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x29b520) {
            ctx->pc = 0x29B410u;
            goto label_29b410;
        }
    }
    ctx->pc = 0x29B528u;
    // 0x29b528: 0x86020136
    ctx->pc = 0x29b528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x29b52c: 0x1040000b
    ctx->pc = 0x29B52Cu;
    {
        const bool branch_taken_0x29b52c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B530u;
        SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
        if (branch_taken_0x29b52c) {
            ctx->pc = 0x29B55Cu;
            goto label_29b55c;
        }
    }
    ctx->pc = 0x29B534u;
    // 0x29b534: 0xae000b5c
    ctx->pc = 0x29b534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2908), GPR_U32(ctx, 0));
    // 0x29b538: 0x2463d7e8
    ctx->pc = 0x29b538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957032));
    // 0x29b53c: 0x8e020140
    ctx->pc = 0x29b53cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x29b540: 0x21080
    ctx->pc = 0x29b540u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x29b544: 0x431021
    ctx->pc = 0x29b544u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b548: 0xc4400000
    ctx->pc = 0x29b548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b54c: 0x3c013f80
    ctx->pc = 0x29b54cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29b550: 0x44810800
    ctx->pc = 0x29b550u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29b554: 0x46010000
    ctx->pc = 0x29b554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29b558: 0xe4400000
    ctx->pc = 0x29b558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29b55c:
    // 0x29b55c: 0xdfbf0080
    ctx->pc = 0x29b55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29b560:
    // 0x29b560: 0xdfb30070
    ctx->pc = 0x29b560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29b564: 0xdfb20060
    ctx->pc = 0x29b564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b568: 0xdfb10050
    ctx->pc = 0x29b568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b56c: 0xdfb00040
    ctx->pc = 0x29b56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b570: 0xc7b40090
    ctx->pc = 0x29b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b574: 0x3e00008
    ctx->pc = 0x29B574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B578u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29B410u: goto label_29b410;
            case 0x29B48Cu: goto label_29b48c;
            case 0x29B490u: goto label_29b490;
            case 0x29B4B4u: goto label_29b4b4;
            case 0x29B4D4u: goto label_29b4d4;
            case 0x29B51Cu: goto label_29b51c;
            case 0x29B55Cu: goto label_29b55c;
            case 0x29B560u: goto label_29b560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29B57Cu;
}
