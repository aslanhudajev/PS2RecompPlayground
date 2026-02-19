#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterExpCollide
// Address: 0x29a3c0 - 0x29a534
void CritterExpCollide_0x29a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29a3c0u;

    // 0x29a3c0: 0x27bdff40
    ctx->pc = 0x29a3c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x29a3c4: 0xffbf00a0
    ctx->pc = 0x29a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29a3c8: 0xffbe0090
    ctx->pc = 0x29a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x29a3cc: 0xffb70080
    ctx->pc = 0x29a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x29a3d0: 0xffb60070
    ctx->pc = 0x29a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x29a3d4: 0xffb50060
    ctx->pc = 0x29a3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x29a3d8: 0xffb40050
    ctx->pc = 0x29a3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29a3dc: 0xffb30040
    ctx->pc = 0x29a3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29a3e0: 0xffb20030
    ctx->pc = 0x29a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29a3e4: 0xffb10020
    ctx->pc = 0x29a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29a3e8: 0xffb00010
    ctx->pc = 0x29a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29a3ec: 0xe7b500b8
    ctx->pc = 0x29a3ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x29a3f0: 0xe7b400b0
    ctx->pc = 0x29a3f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29a3f4: 0x80a02d
    ctx->pc = 0x29a3f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3f8: 0x46006546
    ctx->pc = 0x29a3f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x29a3fc: 0xa0982d
    ctx->pc = 0x29a3fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a400: 0x46006d06
    ctx->pc = 0x29a400u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x29a404: 0xe0b02d
    ctx->pc = 0x29a404u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a408: 0x882d
    ctx->pc = 0x29a408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a40c: 0x3a0902d
    ctx->pc = 0x29a40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a410: 0x3c02003c
    ctx->pc = 0x29a410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29a414: 0x3c030036
    ctx->pc = 0x29a414u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x29a418: 0x8c424170
    ctx->pc = 0x29a418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16752)));
    // 0x29a41c: 0x8c63d4c0
    ctx->pc = 0x29a41cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294956224)));
    // 0x29a420: 0x43102a
    ctx->pc = 0x29a420u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x29a424: 0x10400034
    ctx->pc = 0x29A424u;
    {
        const bool branch_taken_0x29a424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A428u;
        if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 6));
        if (branch_taken_0x29a424) {
            ctx->pc = 0x29A4F8u;
            goto label_29a4f8;
        }
    }
    ctx->pc = 0x29A42Cu;
    // 0x29a42c: 0x3c15003c
    ctx->pc = 0x29a42cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
    // 0x29a430: 0x3c1e003c
    ctx->pc = 0x29a430u;
    SET_GPR_U32(ctx, 30, ((uint32_t)60 << 16));
    // 0x29a434: 0x3c170036
    ctx->pc = 0x29a434u;
    SET_GPR_U32(ctx, 23, ((uint32_t)54 << 16));
    // 0x29a438: 0x8ea24170
    ctx->pc = 0x29a438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 16752)));
    // 0x29a43c: 0x0
    ctx->pc = 0x29a43cu;
    // NOP
label_29a440:
    // 0x29a440: 0x3c030035
    ctx->pc = 0x29a440u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x29a444: 0x24631dc0
    ctx->pc = 0x29a444u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7616));
    // 0x29a448: 0x600013
    ctx->pc = 0x29a448u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x29a44c: 0x24030b70
    ctx->pc = 0x29a44cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x29a450: 0x70438000
    ctx->pc = 0x29a450u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29a454: 0x24420001
    ctx->pc = 0x29a454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x29a458: 0xaea24170
    ctx->pc = 0x29a458u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16752), GPR_U32(ctx, 2));
    // 0x29a45c: 0x8e020004
    ctx->pc = 0x29a45cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29a460: 0x1040001f
    ctx->pc = 0x29A460u;
    {
        const bool branch_taken_0x29a460 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A464u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16756)));
        if (branch_taken_0x29a460) {
            ctx->pc = 0x29A4E0u;
            goto label_29a4e0;
        }
    }
    ctx->pc = 0x29A468u;
    // 0x29a468: 0x1202001d
    ctx->pc = 0x29A468u;
    {
        const bool branch_taken_0x29a468 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x29A46Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a468) {
            ctx->pc = 0x29A4E0u;
            goto label_29a4e0;
        }
    }
    ctx->pc = 0x29A470u;
    // 0x29a470: 0xc0a682c
    ctx->pc = 0x29A470u;
    SET_GPR_U32(ctx, 31, 0x29A478u);
    ctx->pc = 0x29A474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNoHit_0x29a0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A478u; }
    }
    if (ctx->pc != 0x29A478u) { return; }
    ctx->pc = 0x29A478u;
    // 0x29a478: 0x1440001a
    ctx->pc = 0x29A478u;
    {
        const bool branch_taken_0x29a478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A47Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x29a478) {
            ctx->pc = 0x29A4E4u;
            goto label_29a4e4;
        }
    }
    ctx->pc = 0x29A480u;
    // 0x29a480: 0x8e020004
    ctx->pc = 0x29a480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29a484: 0x8c42005c
    ctx->pc = 0x29a484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x29a488: 0x30420002
    ctx->pc = 0x29a488u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x29a48c: 0x10400008
    ctx->pc = 0x29A48Cu;
    {
        const bool branch_taken_0x29a48c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A490u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a48c) {
            ctx->pc = 0x29A4B0u;
            goto label_29a4b0;
        }
    }
    ctx->pc = 0x29A494u;
    // 0x29a494: 0x280282d
    ctx->pc = 0x29a494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a498: 0x4600ab06
    ctx->pc = 0x29a498u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29a49c: 0x260302d
    ctx->pc = 0x29a49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4a0: 0x4600a346
    ctx->pc = 0x29a4a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x29a4a4: 0xc0a688e
    ctx->pc = 0x29A4A4u;
    SET_GPR_U32(ctx, 31, 0x29A4ACu);
    ctx->pc = 0x29A4A8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A238u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterExpNodeColSub_0x29a238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A4ACu; }
    }
    if (ctx->pc != 0x29A4ACu) { return; }
    ctx->pc = 0x29A4ACu;
    // 0x29a4ac: 0x40882d
    ctx->pc = 0x29a4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a4b0:
    // 0x29a4b0: 0x16200012
    ctx->pc = 0x29A4B0u;
    {
        const bool branch_taken_0x29a4b0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A4B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a4b0) {
            ctx->pc = 0x29A4FCu;
            goto label_29a4fc;
        }
    }
    ctx->pc = 0x29A4B8u;
    // 0x29a4b8: 0x200202d
    ctx->pc = 0x29a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4bc: 0x280282d
    ctx->pc = 0x29a4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4c0: 0x4600ab06
    ctx->pc = 0x29a4c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x29a4c4: 0x260302d
    ctx->pc = 0x29a4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4c8: 0x4600a346
    ctx->pc = 0x29a4c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x29a4cc: 0xc0a6852
    ctx->pc = 0x29A4CCu;
    SET_GPR_U32(ctx, 31, 0x29A4D4u);
    ctx->pc = 0x29A4D0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A148u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterExpRootColSub_0x29a148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A4D4u; }
    }
    if (ctx->pc != 0x29A4D4u) { return; }
    ctx->pc = 0x29A4D4u;
    // 0x29a4d4: 0x40882d
    ctx->pc = 0x29a4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4d8: 0x16200008
    ctx->pc = 0x29A4D8u;
    {
        const bool branch_taken_0x29a4d8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A4DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a4d8) {
            ctx->pc = 0x29A4FCu;
            goto label_29a4fc;
        }
    }
    ctx->pc = 0x29A4E0u;
label_29a4e0:
    // 0x29a4e0: 0x3c02003c
    ctx->pc = 0x29a4e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_29a4e4:
    // 0x29a4e4: 0x8c424170
    ctx->pc = 0x29a4e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16752)));
    // 0x29a4e8: 0x8ee3d4c0
    ctx->pc = 0x29a4e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 4294956224)));
    // 0x29a4ec: 0x43102a
    ctx->pc = 0x29a4ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x29a4f0: 0x1440ffd3
    ctx->pc = 0x29A4F0u;
    {
        const bool branch_taken_0x29a4f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A4F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 16752)));
        if (branch_taken_0x29a4f0) {
            ctx->pc = 0x29A440u;
            goto label_29a440;
        }
    }
    ctx->pc = 0x29A4F8u;
label_29a4f8:
    // 0x29a4f8: 0x102d
    ctx->pc = 0x29a4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a4fc:
    // 0x29a4fc: 0xdfbf00a0
    ctx->pc = 0x29a4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29a500: 0xdfbe0090
    ctx->pc = 0x29a500u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29a504: 0xdfb70080
    ctx->pc = 0x29a504u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29a508: 0xdfb60070
    ctx->pc = 0x29a508u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29a50c: 0xdfb50060
    ctx->pc = 0x29a50cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a510: 0xdfb40050
    ctx->pc = 0x29a510u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a514: 0xdfb30040
    ctx->pc = 0x29a514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a518: 0xdfb20030
    ctx->pc = 0x29a518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a51c: 0xdfb10020
    ctx->pc = 0x29a51cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a520: 0xdfb00010
    ctx->pc = 0x29a520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a524: 0xc7b500b8
    ctx->pc = 0x29a524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29a528: 0xc7b400b0
    ctx->pc = 0x29a528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a52c: 0x3e00008
    ctx->pc = 0x29A52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A530u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A440u: goto label_29a440;
            case 0x29A4B0u: goto label_29a4b0;
            case 0x29A4E0u: goto label_29a4e0;
            case 0x29A4E4u: goto label_29a4e4;
            case 0x29A4F8u: goto label_29a4f8;
            case 0x29A4FCu: goto label_29a4fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A534u;
}
