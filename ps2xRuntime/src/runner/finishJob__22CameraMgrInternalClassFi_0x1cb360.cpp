#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: finishJob__22CameraMgrInternalClassFi
// Address: 0x1cb360 - 0x1cb458
void finishJob__22CameraMgrInternalClassFi_0x1cb360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("finishJob__22CameraMgrInternalClassFi");


    ctx->pc = 0x1cb360u;

    // 0x1cb360: 0x27bdffc0
    ctx->pc = 0x1cb360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cb364: 0x7fbf0030
    ctx->pc = 0x1cb364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1cb368: 0x7fb20020
    ctx->pc = 0x1cb368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb36c: 0x7fb10010
    ctx->pc = 0x1cb36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb370: 0x510c0
    ctx->pc = 0x1cb370u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cb374: 0x451021
    ctx->pc = 0x1cb374u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cb378: 0x7fb00000
    ctx->pc = 0x1cb378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb37c: 0x21180
    ctx->pc = 0x1cb37cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cb380: 0x448021
    ctx->pc = 0x1cb380u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cb384: 0x70a08e28
    ctx->pc = 0x1cb384u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cb388: 0x8e050010
    ctx->pc = 0x1cb388u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb38c: 0x3c020026
    ctx->pc = 0x1cb38cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1cb390: 0x2403ffff
    ctx->pc = 0x1cb390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb394: 0x24424f38
    ctx->pc = 0x1cb394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20280));
    // 0x1cb398: 0x528c0
    ctx->pc = 0x1cb398u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cb39c: 0xa42821
    ctx->pc = 0x1cb39cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1cb3a0: 0xa0a00908
    ctx->pc = 0x1cb3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2312), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb3a4: 0xae030000
    ctx->pc = 0x1cb3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cb3a8: 0xc4420000
    ctx->pc = 0x1cb3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb3ac: 0xc4410004
    ctx->pc = 0x1cb3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb3b0: 0xc4400008
    ctx->pc = 0x1cb3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb3b4: 0xe6020004
    ctx->pc = 0x1cb3b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1cb3b8: 0xe6010008
    ctx->pc = 0x1cb3b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1cb3bc: 0xe600000c
    ctx->pc = 0x1cb3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1cb3c0: 0x84850900
    ctx->pc = 0x1cb3c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2304)));
    // 0x1cb3c4: 0x84860902
    ctx->pc = 0x1cb3c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2306)));
    // 0x1cb3c8: 0xc5082a
    ctx->pc = 0x1cb3c8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x1cb3cc: 0x14200003
    ctx->pc = 0x1CB3CCu;
    {
        const bool branch_taken_0x1cb3cc = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB3D0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cb3cc) {
            ctx->pc = 0x1CB3DCu;
            goto label_1cb3dc;
        }
    }
    ctx->pc = 0x1CB3D4u;
    // 0x1cb3d4: 0x10000002
    ctx->pc = 0x1CB3D4u;
    {
        const bool branch_taken_0x1cb3d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB3D8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cb3d4) {
            ctx->pc = 0x1CB3E0u;
            goto label_1cb3e0;
        }
    }
    ctx->pc = 0x1CB3DCu;
label_1cb3dc:
    // 0x1cb3dc: 0x24020008
    ctx->pc = 0x1cb3dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_1cb3e0:
    // 0x1cb3e0: 0xc21821
    ctx->pc = 0x1cb3e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cb3e4: 0xa3082a
    ctx->pc = 0x1cb3e4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x1cb3e8: 0x1020000d
    ctx->pc = 0x1CB3E8u;
    {
        const bool branch_taken_0x1cb3e8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cb3e8) {
            ctx->pc = 0x1CB420u;
            goto label_1cb420;
        }
    }
    ctx->pc = 0x1CB3F0u;
    // 0x1cb3f0: 0x30a40007
    ctx->pc = 0x1cb3f0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 7));
label_1cb3f4:
    // 0x1cb3f4: 0x410c0
    ctx->pc = 0x1cb3f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cb3f8: 0x2421021
    ctx->pc = 0x1cb3f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cb3fc: 0x80420908
    ctx->pc = 0x1cb3fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2312)));
    // 0x1cb400: 0x50400003
    ctx->pc = 0x1CB400u;
    {
        const bool branch_taken_0x1cb400 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cb400) {
            ctx->pc = 0x1CB404u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x1CB410u;
            goto label_1cb410;
        }
    }
    ctx->pc = 0x1CB408u;
    // 0x1cb408: 0x10000006
    ctx->pc = 0x1CB408u;
    {
        const bool branch_taken_0x1cb408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB40Cu;
        WRITE16(ADD32(GPR_U32(ctx, 18), 2304), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1cb408) {
            ctx->pc = 0x1CB424u;
            goto label_1cb424;
        }
    }
    ctx->pc = 0x1CB410u;
label_1cb410:
    // 0x1cb410: 0xa3102a
    ctx->pc = 0x1cb410u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x1cb414: 0x1440fff7
    ctx->pc = 0x1CB414u;
    {
        const bool branch_taken_0x1cb414 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB418u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 7));
        if (branch_taken_0x1cb414) {
            ctx->pc = 0x1CB3F4u;
            goto label_1cb3f4;
        }
    }
    ctx->pc = 0x1CB41Cu;
    // 0x1cb41c: 0x0
    ctx->pc = 0x1cb41cu;
    // NOP
label_1cb420:
    // 0x1cb420: 0xa6460900
    ctx->pc = 0x1cb420u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2304), (uint16_t)GPR_U32(ctx, 6));
label_1cb424:
    // 0x1cb424: 0x72402628
    ctx->pc = 0x1cb424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1cb428: 0xc0727b8
    ctx->pc = 0x1CB428u;
    SET_GPR_U32(ctx, 31, 0x1CB430u);
    ctx->pc = 0x1CB42Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C9EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getJob__22CameraMgrInternalClassFi_0x1c9ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB430u; }
        else if (ctx->pc != 0x1CB430u) { ctx->pc = 0x1CB430u; }
    }
    if (ctx->pc != 0x1CB430u) { return; }
    ctx->pc = 0x1CB430u;
    // 0x1cb430: 0x72402628
    ctx->pc = 0x1cb430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1cb434: 0x72202e28
    ctx->pc = 0x1cb434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1cb438: 0xc071b74
    ctx->pc = 0x1CB438u;
    SET_GPR_U32(ctx, 31, 0x1CB440u);
    ctx->pc = 0x1CB43Cu;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x1C6DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ptmf_scall_0x1c6dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB440u; }
        else if (ctx->pc != 0x1CB440u) { ctx->pc = 0x1CB440u; }
    }
    if (ctx->pc != 0x1CB440u) { return; }
    ctx->pc = 0x1CB440u;
    // 0x1cb440: 0x7bbf0030
    ctx->pc = 0x1cb440u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb444: 0x7bb20020
    ctx->pc = 0x1cb444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb448: 0x7bb10010
    ctx->pc = 0x1cb448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb44c: 0x7bb00000
    ctx->pc = 0x1cb44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb450: 0x3e00008
    ctx->pc = 0x1CB450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB454u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB3DCu: goto label_1cb3dc;
            case 0x1CB3E0u: goto label_1cb3e0;
            case 0x1CB3F4u: goto label_1cb3f4;
            case 0x1CB410u: goto label_1cb410;
            case 0x1CB420u: goto label_1cb420;
            case 0x1CB424u: goto label_1cb424;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB458u;
}
