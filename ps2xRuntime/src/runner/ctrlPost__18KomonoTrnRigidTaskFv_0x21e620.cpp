#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrlPost__18KomonoTrnRigidTaskFv
// Address: 0x21e620 - 0x21ee2c
void ctrlPost__18KomonoTrnRigidTaskFv_0x21e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrlPost__18KomonoTrnRigidTaskFv");


    ctx->pc = 0x21e620u;

    // 0x21e620: 0x27bdff50
    ctx->pc = 0x21e620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21e624: 0x7fbf0060
    ctx->pc = 0x21e624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x21e628: 0x7fb40050
    ctx->pc = 0x21e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x21e62c: 0x7fb30040
    ctx->pc = 0x21e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21e630: 0x7fb20030
    ctx->pc = 0x21e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21e634: 0x7fb10020
    ctx->pc = 0x21e634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21e638: 0x7fb00010
    ctx->pc = 0x21e638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21e63c: 0xe7b40000
    ctx->pc = 0x21e63cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21e640: 0xc4801450
    ctx->pc = 0x21e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e644: 0x27b00094
    ctx->pc = 0x21e644u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 148));
    // 0x21e648: 0x27b10098
    ctx->pc = 0x21e648u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 152));
    // 0x21e64c: 0x70809628
    ctx->pc = 0x21e64cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21e650: 0x24050001
    ctx->pc = 0x21e650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e654: 0xe7a00090
    ctx->pc = 0x21e654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21e658: 0xc4801454
    ctx->pc = 0x21e658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e65c: 0xe6000000
    ctx->pc = 0x21e65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21e660: 0xc4801458
    ctx->pc = 0x21e660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e664: 0xe6200000
    ctx->pc = 0x21e664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21e668: 0x8c84000c
    ctx->pc = 0x21e668u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21e66c: 0x30830008
    ctx->pc = 0x21e66cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 8));
    // 0x21e670: 0x3280a
    ctx->pc = 0x21e670u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x21e674: 0x10a00122
    ctx->pc = 0x21E674u;
    {
        const bool branch_taken_0x21e674 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e674) {
            ctx->pc = 0x21EB00u;
            goto label_21eb00;
        }
    }
    ctx->pc = 0x21E67Cu;
    // 0x21e67c: 0x8e430184
    ctx->pc = 0x21e67cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x21e680: 0x1460011f
    ctx->pc = 0x21E680u;
    {
        const bool branch_taken_0x21e680 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21e680) {
            ctx->pc = 0x21EB00u;
            goto label_21eb00;
        }
    }
    ctx->pc = 0x21E688u;
    // 0x21e688: 0x30850002
    ctx->pc = 0x21e688u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 2));
    // 0x21e68c: 0x24020001
    ctx->pc = 0x21e68cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e690: 0x5100a
    ctx->pc = 0x21e690u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21e694: 0x1040000f
    ctx->pc = 0x21E694u;
    {
        const bool branch_taken_0x21e694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E698u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21e694) {
            ctx->pc = 0x21E6D4u;
            goto label_21e6d4;
        }
    }
    ctx->pc = 0x21E69Cu;
    // 0x21e69c: 0x30830004
    ctx->pc = 0x21e69cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 4));
    // 0x21e6a0: 0x24020001
    ctx->pc = 0x21e6a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e6a4: 0x3100a
    ctx->pc = 0x21e6a4u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21e6a8: 0x1040000b
    ctx->pc = 0x21E6A8u;
    {
        const bool branch_taken_0x21e6a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E6ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21e6a8) {
            ctx->pc = 0x21E6D8u;
            goto label_21e6d8;
        }
    }
    ctx->pc = 0x21E6B0u;
    // 0x21e6b0: 0xc069fb8
    ctx->pc = 0x21E6B0u;
    SET_GPR_U32(ctx, 31, 0x21E6B8u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6B8u; }
        else if (ctx->pc != 0x21E6B8u) { ctx->pc = 0x21E6B8u; }
    }
    if (ctx->pc != 0x21E6B8u) { return; }
    ctx->pc = 0x21E6B8u;
    // 0x21e6b8: 0x441001a
    ctx->pc = 0x21E6B8u;
    {
        const bool branch_taken_0x21e6b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21E6BCu;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x21e6b8) {
            ctx->pc = 0x21E724u;
            goto label_21e724;
        }
    }
    ctx->pc = 0x21E6C0u;
    // 0x21e6c0: 0x12600019
    ctx->pc = 0x21E6C0u;
    {
        const bool branch_taken_0x21e6c0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E6C4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21e6c0) {
            ctx->pc = 0x21E728u;
            goto label_21e728;
        }
    }
    ctx->pc = 0x21E6C8u;
    // 0x21e6c8: 0x2673fffe
    ctx->pc = 0x21e6c8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x21e6cc: 0x10000015
    ctx->pc = 0x21E6CCu;
    {
        const bool branch_taken_0x21e6cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e6cc) {
            ctx->pc = 0x21E724u;
            goto label_21e724;
        }
    }
    ctx->pc = 0x21E6D4u;
label_21e6d4:
    // 0x21e6d4: 0x24020001
    ctx->pc = 0x21e6d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21e6d8:
    // 0x21e6d8: 0x5100a
    ctx->pc = 0x21e6d8u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21e6dc: 0x10400008
    ctx->pc = 0x21E6DCu;
    {
        const bool branch_taken_0x21e6dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E6E0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x21e6dc) {
            ctx->pc = 0x21E700u;
            goto label_21e700;
        }
    }
    ctx->pc = 0x21E6E4u;
    // 0x21e6e4: 0x8e43000c
    ctx->pc = 0x21e6e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x21e6e8: 0x2402fffd
    ctx->pc = 0x21e6e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x21e6ec: 0x70009e28
    ctx->pc = 0x21e6ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e6f0: 0x621024
    ctx->pc = 0x21e6f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e6f4: 0x1000000b
    ctx->pc = 0x21E6F4u;
    {
        const bool branch_taken_0x21e6f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E6F8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x21e6f4) {
            ctx->pc = 0x21E724u;
            goto label_21e724;
        }
    }
    ctx->pc = 0x21E6FCu;
    // 0x21e6fc: 0x30830004
    ctx->pc = 0x21e6fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 4));
label_21e700:
    // 0x21e700: 0x24020001
    ctx->pc = 0x21e700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e704: 0x3100a
    ctx->pc = 0x21e704u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21e708: 0x10400006
    ctx->pc = 0x21E708u;
    {
        const bool branch_taken_0x21e708 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e708) {
            ctx->pc = 0x21E724u;
            goto label_21e724;
        }
    }
    ctx->pc = 0x21E710u;
    // 0x21e710: 0x8e43000c
    ctx->pc = 0x21e710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x21e714: 0x2402fffb
    ctx->pc = 0x21e714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x21e718: 0x24130001
    ctx->pc = 0x21e718u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e71c: 0x621024
    ctx->pc = 0x21e71cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e720: 0xae42000c
    ctx->pc = 0x21e720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_21e724:
    // 0x21e724: 0x72602628
    ctx->pc = 0x21e724u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_21e728:
    // 0x21e728: 0xc084d14
    ctx->pc = 0x21E728u;
    SET_GPR_U32(ctx, 31, 0x21E730u);
    ctx->pc = 0x21E72Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E730u; }
        else if (ctx->pc != 0x21E730u) { ctx->pc = 0x21E730u; }
    }
    if (ctx->pc != 0x21E730u) { return; }
    ctx->pc = 0x21E730u;
    // 0x21e730: 0xc084d48
    ctx->pc = 0x21E730u;
    SET_GPR_U32(ctx, 31, 0x21E738u);
    ctx->pc = 0x21E734u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x213520u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerHitNum__Fi_0x213520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E738u; }
        else if (ctx->pc != 0x21E738u) { ctx->pc = 0x21E738u; }
    }
    if (ctx->pc != 0x21E738u) { return; }
    ctx->pc = 0x21E738u;
    // 0x21e738: 0x24020001
    ctx->pc = 0x21e738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e73c: 0xae420184
    ctx->pc = 0x21e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    // 0x21e740: 0xc7a00090
    ctx->pc = 0x21e740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e744: 0x3c03003e
    ctx->pc = 0x21e744u;
    SET_GPR_U32(ctx, 3, ((uint32_t)62 << 16));
    // 0x21e748: 0x34620001
    ctx->pc = 0x21e748u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
    // 0x21e74c: 0xe7a00070
    ctx->pc = 0x21e74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x21e750: 0xc6000000
    ctx->pc = 0x21e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e754: 0xe7a00074
    ctx->pc = 0x21e754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21e758: 0xc6200000
    ctx->pc = 0x21e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e75c: 0xe7a00078
    ctx->pc = 0x21e75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x21e760: 0x8e440050
    ctx->pc = 0x21e760u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x21e764: 0xafa4007c
    ctx->pc = 0x21e764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
    // 0x21e768: 0x8e440054
    ctx->pc = 0x21e768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x21e76c: 0xafa40080
    ctx->pc = 0x21e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x21e770: 0x8e440058
    ctx->pc = 0x21e770u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x21e774: 0xafa40084
    ctx->pc = 0x21e774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x21e778: 0x8e44016c
    ctx->pc = 0x21e778u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x21e77c: 0x1082001b
    ctx->pc = 0x21E77Cu;
    {
        const bool branch_taken_0x21e77c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x21e77c) {
            ctx->pc = 0x21E7ECu;
            goto label_21e7ec;
        }
    }
    ctx->pc = 0x21E784u;
    // 0x21e784: 0x3c020041
    ctx->pc = 0x21e784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
    // 0x21e788: 0x34420050
    ctx->pc = 0x21e788u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 80));
    // 0x21e78c: 0x10820008
    ctx->pc = 0x21E78Cu;
    {
        const bool branch_taken_0x21e78c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x21e78c) {
            ctx->pc = 0x21E7B0u;
            goto label_21e7b0;
        }
    }
    ctx->pc = 0x21E794u;
    // 0x21e794: 0x346201cf
    ctx->pc = 0x21e794u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 463));
    // 0x21e798: 0x10820005
    ctx->pc = 0x21E798u;
    {
        const bool branch_taken_0x21e798 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x21e798) {
            ctx->pc = 0x21E7B0u;
            goto label_21e7b0;
        }
    }
    ctx->pc = 0x21E7A0u;
    // 0x21e7a0: 0x10830047
    ctx->pc = 0x21E7A0u;
    {
        const bool branch_taken_0x21e7a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x21E7A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
        if (branch_taken_0x21e7a0) {
            ctx->pc = 0x21E8C0u;
            goto label_21e8c0;
        }
    }
    ctx->pc = 0x21E7A8u;
    // 0x21e7a8: 0x10000044
    ctx->pc = 0x21E7A8u;
    {
        const bool branch_taken_0x21e7a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e7a8) {
            ctx->pc = 0x21E8BCu;
            goto label_21e8bc;
        }
    }
    ctx->pc = 0x21E7B0u;
label_21e7b0:
    // 0x21e7b0: 0x3c020051
    ctx->pc = 0x21e7b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x21e7b4: 0x244434f0
    ctx->pc = 0x21e7b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x21e7b8: 0x3c020002
    ctx->pc = 0x21e7b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x21e7bc: 0x34450025
    ctx->pc = 0x21e7bcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 37));
    // 0x21e7c0: 0x70003628
    ctx->pc = 0x21e7c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e7c4: 0x70003e28
    ctx->pc = 0x21e7c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e7c8: 0xc086018
    ctx->pc = 0x21E7C8u;
    SET_GPR_U32(ctx, 31, 0x21E7D0u);
    ctx->pc = 0x21E7CCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7D0u; }
        else if (ctx->pc != 0x21E7D0u) { ctx->pc = 0x21E7D0u; }
    }
    if (ctx->pc != 0x21E7D0u) { return; }
    ctx->pc = 0x21E7D0u;
    // 0x21e7d0: 0x3c024000
    ctx->pc = 0x21e7d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x21e7d4: 0x44826000
    ctx->pc = 0x21e7d4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x21e7d8: 0x24040012
    ctx->pc = 0x21e7d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    // 0x21e7dc: 0xc0785e0
    ctx->pc = 0x21E7DCu;
    SET_GPR_U32(ctx, 31, 0x21E7E4u);
    ctx->pc = 0x21E7E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7E4u; }
        else if (ctx->pc != 0x21E7E4u) { ctx->pc = 0x21E7E4u; }
    }
    if (ctx->pc != 0x21E7E4u) { return; }
    ctx->pc = 0x21E7E4u;
    // 0x21e7e4: 0x10000035
    ctx->pc = 0x21E7E4u;
    {
        const bool branch_taken_0x21e7e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e7e4) {
            ctx->pc = 0x21E8BCu;
            goto label_21e8bc;
        }
    }
    ctx->pc = 0x21E7ECu;
label_21e7ec:
    // 0x21e7ec: 0x3c010050
    ctx->pc = 0x21e7ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21e7f0: 0x8423e504
    ctx->pc = 0x21e7f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x21e7f4: 0x2402000a
    ctx->pc = 0x21e7f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x21e7f8: 0x1462001a
    ctx->pc = 0x21E7F8u;
    {
        const bool branch_taken_0x21e7f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21e7f8) {
            ctx->pc = 0x21E864u;
            goto label_21e864;
        }
    }
    ctx->pc = 0x21E800u;
    // 0x21e800: 0x8f838bcc
    ctx->pc = 0x21e800u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x21e804: 0x24020002
    ctx->pc = 0x21e804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e808: 0x14620016
    ctx->pc = 0x21E808u;
    {
        const bool branch_taken_0x21e808 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21e808) {
            ctx->pc = 0x21E864u;
            goto label_21e864;
        }
    }
    ctx->pc = 0x21E810u;
    // 0x21e810: 0x8f888ccc
    ctx->pc = 0x21e810u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x21e814: 0x11000003
    ctx->pc = 0x21E814u;
    {
        const bool branch_taken_0x21e814 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e814) {
            ctx->pc = 0x21E824u;
            goto label_21e824;
        }
    }
    ctx->pc = 0x21E81Cu;
    // 0x21e81c: 0x8d080000
    ctx->pc = 0x21e81cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21e820: 0x0
    ctx->pc = 0x21e820u;
    // NOP
label_21e824:
    // 0x21e824: 0x8e420168
    ctx->pc = 0x21e824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 360)));
    // 0x21e828: 0x2404289c
    ctx->pc = 0x21e828u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10396));
    // 0x21e82c: 0x8c460010
    ctx->pc = 0x21e82cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21e830: 0x8cc70014
    ctx->pc = 0x21e830u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x21e834: 0xc069040
    ctx->pc = 0x21E834u;
    SET_GPR_U32(ctx, 31, 0x21E83Cu);
    ctx->pc = 0x21E838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E83Cu; }
        else if (ctx->pc != 0x21E83Cu) { ctx->pc = 0x21E83Cu; }
    }
    if (ctx->pc != 0x21E83Cu) { return; }
    ctx->pc = 0x21E83Cu;
    // 0x21e83c: 0x10400017
    ctx->pc = 0x21E83Cu;
    {
        const bool branch_taken_0x21e83c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e83c) {
            ctx->pc = 0x21E89Cu;
            goto label_21e89c;
        }
    }
    ctx->pc = 0x21E844u;
    // 0x21e844: 0x8e45016c
    ctx->pc = 0x21e844u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x21e848: 0xc64c0030
    ctx->pc = 0x21e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21e84c: 0x70402628
    ctx->pc = 0x21e84cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21e850: 0x27a60070
    ctx->pc = 0x21e850u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 112));
    // 0x21e854: 0xc086ea0
    ctx->pc = 0x21E854u;
    SET_GPR_U32(ctx, 31, 0x21E85Cu);
    ctx->pc = 0x21E858u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__25KomonoTrnCrosetKowareTaskFi4ANPOfi_0x21ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E85Cu; }
        else if (ctx->pc != 0x21E85Cu) { ctx->pc = 0x21E85Cu; }
    }
    if (ctx->pc != 0x21E85Cu) { return; }
    ctx->pc = 0x21E85Cu;
    // 0x21e85c: 0x1000000f
    ctx->pc = 0x21E85Cu;
    {
        const bool branch_taken_0x21e85c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e85c) {
            ctx->pc = 0x21E89Cu;
            goto label_21e89c;
        }
    }
    ctx->pc = 0x21E864u;
label_21e864:
    // 0x21e864: 0x8e480168
    ctx->pc = 0x21e864u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 360)));
    // 0x21e868: 0x2404289c
    ctx->pc = 0x21e868u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10396));
    // 0x21e86c: 0x8d060010
    ctx->pc = 0x21e86cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x21e870: 0x8cc70014
    ctx->pc = 0x21e870u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x21e874: 0xc069040
    ctx->pc = 0x21E874u;
    SET_GPR_U32(ctx, 31, 0x21E87Cu);
    ctx->pc = 0x21E878u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E87Cu; }
        else if (ctx->pc != 0x21E87Cu) { ctx->pc = 0x21E87Cu; }
    }
    if (ctx->pc != 0x21E87Cu) { return; }
    ctx->pc = 0x21E87Cu;
    // 0x21e87c: 0x10400007
    ctx->pc = 0x21E87Cu;
    {
        const bool branch_taken_0x21e87c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e87c) {
            ctx->pc = 0x21E89Cu;
            goto label_21e89c;
        }
    }
    ctx->pc = 0x21E884u;
    // 0x21e884: 0x8e45016c
    ctx->pc = 0x21e884u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x21e888: 0xc64c0030
    ctx->pc = 0x21e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21e88c: 0x70402628
    ctx->pc = 0x21e88cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21e890: 0x27a60070
    ctx->pc = 0x21e890u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 112));
    // 0x21e894: 0xc086ea0
    ctx->pc = 0x21E894u;
    SET_GPR_U32(ctx, 31, 0x21E89Cu);
    ctx->pc = 0x21E898u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__25KomonoTrnCrosetKowareTaskFi4ANPOfi_0x21ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E89Cu; }
        else if (ctx->pc != 0x21E89Cu) { ctx->pc = 0x21E89Cu; }
    }
    if (ctx->pc != 0x21E89Cu) { return; }
    ctx->pc = 0x21E89Cu;
label_21e89c:
    // 0x21e89c: 0x3c020051
    ctx->pc = 0x21e89cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x21e8a0: 0x244434f0
    ctx->pc = 0x21e8a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x21e8a4: 0x3c02000d
    ctx->pc = 0x21e8a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)13 << 16));
    // 0x21e8a8: 0x34450012
    ctx->pc = 0x21e8a8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 18));
    // 0x21e8ac: 0x70003628
    ctx->pc = 0x21e8acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e8b0: 0x70003e28
    ctx->pc = 0x21e8b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e8b4: 0xc086018
    ctx->pc = 0x21E8B4u;
    SET_GPR_U32(ctx, 31, 0x21E8BCu);
    ctx->pc = 0x21E8B8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E8BCu; }
        else if (ctx->pc != 0x21E8BCu) { ctx->pc = 0x21E8BCu; }
    }
    if (ctx->pc != 0x21E8BCu) { return; }
    ctx->pc = 0x21E8BCu;
label_21e8bc:
    // 0x21e8bc: 0x240200b4
    ctx->pc = 0x21e8bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
label_21e8c0:
    // 0x21e8c0: 0xae420174
    ctx->pc = 0x21e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 2));
    // 0x21e8c4: 0xc069fb8
    ctx->pc = 0x21E8C4u;
    SET_GPR_U32(ctx, 31, 0x21E8CCu);
    ctx->pc = 0x21E8C8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 0));
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E8CCu; }
        else if (ctx->pc != 0x21E8CCu) { ctx->pc = 0x21E8CCu; }
    }
    if (ctx->pc != 0x21E8CCu) { return; }
    ctx->pc = 0x21E8CCu;
    // 0x21e8cc: 0xc069fb8
    ctx->pc = 0x21E8CCu;
    SET_GPR_U32(ctx, 31, 0x21E8D4u);
    ctx->pc = 0x21E8D0u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 2), 4095));
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E8D4u; }
        else if (ctx->pc != 0x21E8D4u) { ctx->pc = 0x21E8D4u; }
    }
    if (ctx->pc != 0x21E8D4u) { return; }
    ctx->pc = 0x21E8D4u;
    // 0x21e8d4: 0x8e43016c
    ctx->pc = 0x21e8d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x21e8d8: 0x3042ffff
    ctx->pc = 0x21e8d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x21e8dc: 0x29840
    ctx->pc = 0x21e8dcu;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 2), 1));
    // 0x21e8e0: 0x3c020041
    ctx->pc = 0x21e8e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65 << 16));
    // 0x21e8e4: 0x34420050
    ctx->pc = 0x21e8e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 80));
    // 0x21e8e8: 0x10620033
    ctx->pc = 0x21E8E8u;
    {
        const bool branch_taken_0x21e8e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x21E8ECu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21e8e8) {
            ctx->pc = 0x21E9B8u;
            goto label_21e9b8;
        }
    }
    ctx->pc = 0x21E8F0u;
    // 0x21e8f0: 0x3c02003e
    ctx->pc = 0x21e8f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x21e8f4: 0x34420001
    ctx->pc = 0x21e8f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x21e8f8: 0x10620003
    ctx->pc = 0x21E8F8u;
    {
        const bool branch_taken_0x21e8f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21e8f8) {
            ctx->pc = 0x21E908u;
            goto label_21e908;
        }
    }
    ctx->pc = 0x21E900u;
    // 0x21e900: 0x1000004e
    ctx->pc = 0x21E900u;
    {
        const bool branch_taken_0x21e900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E904u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21e900) {
            ctx->pc = 0x21EA3Cu;
            goto label_21ea3c;
        }
    }
    ctx->pc = 0x21E908u;
label_21e908:
    // 0x21e908: 0xc069fb8
    ctx->pc = 0x21E908u;
    SET_GPR_U32(ctx, 31, 0x21E910u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E910u; }
        else if (ctx->pc != 0x21E910u) { ctx->pc = 0x21E910u; }
    }
    if (ctx->pc != 0x21E910u) { return; }
    ctx->pc = 0x21E910u;
    // 0x21e910: 0x30421fff
    ctx->pc = 0x21e910u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8191));
    // 0x21e914: 0x24533000
    ctx->pc = 0x21e914u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 12288));
    // 0x21e918: 0xc06c26d
    ctx->pc = 0x21E918u;
    SET_GPR_U32(ctx, 31, 0x21E920u);
    ctx->pc = 0x21E91Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E920u; }
        else if (ctx->pc != 0x21E920u) { ctx->pc = 0x21E920u; }
    }
    if (ctx->pc != 0x21E920u) { return; }
    ctx->pc = 0x21E920u;
    // 0x21e920: 0x3c023f80
    ctx->pc = 0x21e920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x21e924: 0x44820800
    ctx->pc = 0x21e924u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21e928: 0x72602628
    ctx->pc = 0x21e928u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x21e92c: 0xc06c26d
    ctx->pc = 0x21E92Cu;
    SET_GPR_U32(ctx, 31, 0x21E934u);
    ctx->pc = 0x21E930u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E934u; }
        else if (ctx->pc != 0x21E934u) { ctx->pc = 0x21E934u; }
    }
    if (ctx->pc != 0x21E934u) { return; }
    ctx->pc = 0x21E934u;
    // 0x21e934: 0x4600a002
    ctx->pc = 0x21e934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x21e938: 0x72802628
    ctx->pc = 0x21e938u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21e93c: 0xc06c24e
    ctx->pc = 0x21E93Cu;
    SET_GPR_U32(ctx, 31, 0x21E944u);
    ctx->pc = 0x21E940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E944u; }
        else if (ctx->pc != 0x21E944u) { ctx->pc = 0x21E944u; }
    }
    if (ctx->pc != 0x21E944u) { return; }
    ctx->pc = 0x21E944u;
    // 0x21e944: 0x3c023f80
    ctx->pc = 0x21e944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x21e948: 0x44820800
    ctx->pc = 0x21e948u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21e94c: 0x72802628
    ctx->pc = 0x21e94cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21e950: 0x46000802
    ctx->pc = 0x21e950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e954: 0xc06c26d
    ctx->pc = 0x21E954u;
    SET_GPR_U32(ctx, 31, 0x21E95Cu);
    ctx->pc = 0x21E958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E95Cu; }
        else if (ctx->pc != 0x21E95Cu) { ctx->pc = 0x21E95Cu; }
    }
    if (ctx->pc != 0x21E95Cu) { return; }
    ctx->pc = 0x21E95Cu;
    // 0x21e95c: 0x3c023f80
    ctx->pc = 0x21e95cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x21e960: 0x44820800
    ctx->pc = 0x21e960u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21e964: 0x72602628
    ctx->pc = 0x21e964u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x21e968: 0xc06c24e
    ctx->pc = 0x21E968u;
    SET_GPR_U32(ctx, 31, 0x21E970u);
    ctx->pc = 0x21E96Cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E970u; }
        else if (ctx->pc != 0x21E970u) { ctx->pc = 0x21E970u; }
    }
    if (ctx->pc != 0x21E970u) { return; }
    ctx->pc = 0x21E970u;
    // 0x21e970: 0x4600a002
    ctx->pc = 0x21e970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x21e974: 0xe7a000a8
    ctx->pc = 0x21e974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x21e978: 0x4bede37d
    ctx->pc = 0x21e978u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21e97c: 0x4bedeb7d
    ctx->pc = 0x21e97cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21e980: 0x4bedf37d
    ctx->pc = 0x21e980u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21e984: 0xc06c20d
    ctx->pc = 0x21E984u;
    SET_GPR_U32(ctx, 31, 0x21E98Cu);
    ctx->pc = 0x21E988u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E98Cu; }
        else if (ctx->pc != 0x21E98Cu) { ctx->pc = 0x21E98Cu; }
    }
    if (ctx->pc != 0x21E98Cu) { return; }
    ctx->pc = 0x21E98Cu;
    // 0x21e98c: 0xc06c04e
    ctx->pc = 0x21E98Cu;
    SET_GPR_U32(ctx, 31, 0x21E994u);
    ctx->pc = 0x21E990u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 400));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E994u; }
        else if (ctx->pc != 0x21E994u) { ctx->pc = 0x21E994u; }
    }
    if (ctx->pc != 0x21E994u) { return; }
    ctx->pc = 0x21E994u;
    // 0x21e994: 0x27a400a0
    ctx->pc = 0x21e994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x21e998: 0xc06bf00
    ctx->pc = 0x21E998u;
    SET_GPR_U32(ctx, 31, 0x21E9A0u);
    ctx->pc = 0x21E99Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9A0u; }
        else if (ctx->pc != 0x21E9A0u) { ctx->pc = 0x21E9A0u; }
    }
    if (ctx->pc != 0x21E9A0u) { return; }
    ctx->pc = 0x21E9A0u;
    // 0x21e9a0: 0x4bff6b7e
    ctx->pc = 0x21e9a0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21e9a4: 0x4bfe6b7e
    ctx->pc = 0x21e9a4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21e9a8: 0x4bfd6b7e
    ctx->pc = 0x21e9a8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21e9ac: 0x1000003b
    ctx->pc = 0x21E9ACu;
    {
        const bool branch_taken_0x21e9ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E9B0u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x21e9ac) {
            ctx->pc = 0x21EA9Cu;
            goto label_21ea9c;
        }
    }
    ctx->pc = 0x21E9B4u;
    // 0x21e9b4: 0x72802628
    ctx->pc = 0x21e9b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_21e9b8:
    // 0x21e9b8: 0xc06c26d
    ctx->pc = 0x21E9B8u;
    SET_GPR_U32(ctx, 31, 0x21E9C0u);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9C0u; }
        else if (ctx->pc != 0x21E9C0u) { ctx->pc = 0x21E9C0u; }
    }
    if (ctx->pc != 0x21E9C0u) { return; }
    ctx->pc = 0x21E9C0u;
    // 0x21e9c0: 0x3c023f00
    ctx->pc = 0x21e9c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x21e9c4: 0x44820800
    ctx->pc = 0x21e9c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21e9c8: 0x72602628
    ctx->pc = 0x21e9c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x21e9cc: 0xc06c26d
    ctx->pc = 0x21E9CCu;
    SET_GPR_U32(ctx, 31, 0x21E9D4u);
    ctx->pc = 0x21E9D0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9D4u; }
        else if (ctx->pc != 0x21E9D4u) { ctx->pc = 0x21E9D4u; }
    }
    if (ctx->pc != 0x21E9D4u) { return; }
    ctx->pc = 0x21E9D4u;
    // 0x21e9d4: 0x4600a002
    ctx->pc = 0x21e9d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x21e9d8: 0x72802628
    ctx->pc = 0x21e9d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21e9dc: 0xc06c24e
    ctx->pc = 0x21E9DCu;
    SET_GPR_U32(ctx, 31, 0x21E9E4u);
    ctx->pc = 0x21E9E0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9E4u; }
        else if (ctx->pc != 0x21E9E4u) { ctx->pc = 0x21E9E4u; }
    }
    if (ctx->pc != 0x21E9E4u) { return; }
    ctx->pc = 0x21E9E4u;
    // 0x21e9e4: 0x3c023f00
    ctx->pc = 0x21e9e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x21e9e8: 0x44820800
    ctx->pc = 0x21e9e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21e9ec: 0x72802628
    ctx->pc = 0x21e9ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21e9f0: 0x46000802
    ctx->pc = 0x21e9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e9f4: 0x27b400a4
    ctx->pc = 0x21e9f4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 164));
    // 0x21e9f8: 0xc06c26d
    ctx->pc = 0x21E9F8u;
    SET_GPR_U32(ctx, 31, 0x21EA00u);
    ctx->pc = 0x21E9FCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA00u; }
        else if (ctx->pc != 0x21EA00u) { ctx->pc = 0x21EA00u; }
    }
    if (ctx->pc != 0x21EA00u) { return; }
    ctx->pc = 0x21EA00u;
    // 0x21ea00: 0x3c023f00
    ctx->pc = 0x21ea00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x21ea04: 0x44820800
    ctx->pc = 0x21ea04u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21ea08: 0x72602628
    ctx->pc = 0x21ea08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x21ea0c: 0xc06c24e
    ctx->pc = 0x21EA0Cu;
    SET_GPR_U32(ctx, 31, 0x21EA14u);
    ctx->pc = 0x21EA10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA14u; }
        else if (ctx->pc != 0x21EA14u) { ctx->pc = 0x21EA14u; }
    }
    if (ctx->pc != 0x21EA14u) { return; }
    ctx->pc = 0x21EA14u;
    // 0x21ea14: 0x4600a002
    ctx->pc = 0x21ea14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x21ea18: 0x3c034040
    ctx->pc = 0x21ea18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16448 << 16));
    // 0x21ea1c: 0xe7a000a8
    ctx->pc = 0x21ea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x21ea20: 0xc6810000
    ctx->pc = 0x21ea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ea24: 0x44830000
    ctx->pc = 0x21ea24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x21ea28: 0x0
    ctx->pc = 0x21ea28u;
    // NOP
    // 0x21ea2c: 0x46000800
    ctx->pc = 0x21ea2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21ea30: 0x1000001a
    ctx->pc = 0x21EA30u;
    {
        const bool branch_taken_0x21ea30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EA34u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        if (branch_taken_0x21ea30) {
            ctx->pc = 0x21EA9Cu;
            goto label_21ea9c;
        }
    }
    ctx->pc = 0x21EA38u;
    // 0x21ea38: 0x72802628
    ctx->pc = 0x21ea38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_21ea3c:
    // 0x21ea3c: 0xc06c26d
    ctx->pc = 0x21EA3Cu;
    SET_GPR_U32(ctx, 31, 0x21EA44u);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA44u; }
        else if (ctx->pc != 0x21EA44u) { ctx->pc = 0x21EA44u; }
    }
    if (ctx->pc != 0x21EA44u) { return; }
    ctx->pc = 0x21EA44u;
    // 0x21ea44: 0x3c023fc0
    ctx->pc = 0x21ea44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16320 << 16));
    // 0x21ea48: 0x44820800
    ctx->pc = 0x21ea48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21ea4c: 0x72602628
    ctx->pc = 0x21ea4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x21ea50: 0xc06c26d
    ctx->pc = 0x21EA50u;
    SET_GPR_U32(ctx, 31, 0x21EA58u);
    ctx->pc = 0x21EA54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA58u; }
        else if (ctx->pc != 0x21EA58u) { ctx->pc = 0x21EA58u; }
    }
    if (ctx->pc != 0x21EA58u) { return; }
    ctx->pc = 0x21EA58u;
    // 0x21ea58: 0x4600a002
    ctx->pc = 0x21ea58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x21ea5c: 0x72802628
    ctx->pc = 0x21ea5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21ea60: 0xc06c24e
    ctx->pc = 0x21EA60u;
    SET_GPR_U32(ctx, 31, 0x21EA68u);
    ctx->pc = 0x21EA64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA68u; }
        else if (ctx->pc != 0x21EA68u) { ctx->pc = 0x21EA68u; }
    }
    if (ctx->pc != 0x21EA68u) { return; }
    ctx->pc = 0x21EA68u;
    // 0x21ea68: 0x3c023fc0
    ctx->pc = 0x21ea68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16320 << 16));
    // 0x21ea6c: 0x44820800
    ctx->pc = 0x21ea6cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21ea70: 0x72802628
    ctx->pc = 0x21ea70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x21ea74: 0x46000802
    ctx->pc = 0x21ea74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21ea78: 0xc06c26d
    ctx->pc = 0x21EA78u;
    SET_GPR_U32(ctx, 31, 0x21EA80u);
    ctx->pc = 0x21EA7Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA80u; }
        else if (ctx->pc != 0x21EA80u) { ctx->pc = 0x21EA80u; }
    }
    if (ctx->pc != 0x21EA80u) { return; }
    ctx->pc = 0x21EA80u;
    // 0x21ea80: 0x3c023fc0
    ctx->pc = 0x21ea80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16320 << 16));
    // 0x21ea84: 0x44820800
    ctx->pc = 0x21ea84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21ea88: 0x72602628
    ctx->pc = 0x21ea88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x21ea8c: 0xc06c24e
    ctx->pc = 0x21EA8Cu;
    SET_GPR_U32(ctx, 31, 0x21EA94u);
    ctx->pc = 0x21EA90u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA94u; }
        else if (ctx->pc != 0x21EA94u) { ctx->pc = 0x21EA94u; }
    }
    if (ctx->pc != 0x21EA94u) { return; }
    ctx->pc = 0x21EA94u;
    // 0x21ea94: 0x4600a002
    ctx->pc = 0x21ea94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x21ea98: 0xe7a000a8
    ctx->pc = 0x21ea98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_21ea9c:
    // 0x21ea9c: 0x70002628
    ctx->pc = 0x21ea9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21eaa0: 0x1000000f
    ctx->pc = 0x21EAA0u;
    {
        const bool branch_taken_0x21eaa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EAA4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21eaa0) {
            ctx->pc = 0x21EAE0u;
            goto label_21eae0;
        }
    }
    ctx->pc = 0x21EAA8u;
label_21eaa8:
    // 0x21eaa8: 0xc4a101e8
    ctx->pc = 0x21eaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eaac: 0xc7a000a0
    ctx->pc = 0x21eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eab0: 0x24840001
    ctx->pc = 0x21eab0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x21eab4: 0x46000800
    ctx->pc = 0x21eab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21eab8: 0xe4a001e8
    ctx->pc = 0x21eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 488), bits); }
    // 0x21eabc: 0xc4a101ec
    ctx->pc = 0x21eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eac0: 0xc7a000a4
    ctx->pc = 0x21eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eac4: 0x46000800
    ctx->pc = 0x21eac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21eac8: 0xe4a001ec
    ctx->pc = 0x21eac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 492), bits); }
    // 0x21eacc: 0xc4a101f0
    ctx->pc = 0x21eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ead0: 0xc7a000a8
    ctx->pc = 0x21ead0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ead4: 0x46000800
    ctx->pc = 0x21ead4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21ead8: 0xe4a001f0
    ctx->pc = 0x21ead8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 496), bits); }
    // 0x21eadc: 0x24a50128
    ctx->pc = 0x21eadcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 296));
label_21eae0:
    // 0x21eae0: 0x8e430178
    ctx->pc = 0x21eae0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x21eae4: 0x83182a
    ctx->pc = 0x21eae4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x21eae8: 0x1460ffef
    ctx->pc = 0x21EAE8u;
    {
        const bool branch_taken_0x21eae8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21eae8) {
            ctx->pc = 0x21EAA8u;
            goto label_21eaa8;
        }
    }
    ctx->pc = 0x21EAF0u;
    // 0x21eaf0: 0x8e44000c
    ctx->pc = 0x21eaf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x21eaf4: 0x2403fff7
    ctx->pc = 0x21eaf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x21eaf8: 0x831824
    ctx->pc = 0x21eaf8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21eafc: 0xae43000c
    ctx->pc = 0x21eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_21eb00:
    // 0x21eb00: 0x8e440178
    ctx->pc = 0x21eb00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x21eb04: 0x24030010
    ctx->pc = 0x21eb04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x21eb08: 0x1483000b
    ctx->pc = 0x21EB08u;
    {
        const bool branch_taken_0x21eb08 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x21EB0Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21eb08) {
            ctx->pc = 0x21EB38u;
            goto label_21eb38;
        }
    }
    ctx->pc = 0x21EB10u;
    // 0x21eb10: 0x24050001
    ctx->pc = 0x21eb10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21eb14: 0x24060003
    ctx->pc = 0x21eb14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x21eb18: 0x24040005
    ctx->pc = 0x21eb18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x21eb1c: 0x24070007
    ctx->pc = 0x21eb1cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7));
    // 0x21eb20: 0x24080009
    ctx->pc = 0x21eb20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 9));
    // 0x21eb24: 0x2409000b
    ctx->pc = 0x21eb24u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11));
    // 0x21eb28: 0x240a000d
    ctx->pc = 0x21eb28u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 13));
    // 0x21eb2c: 0x10000009
    ctx->pc = 0x21EB2Cu;
    {
        const bool branch_taken_0x21eb2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EB30u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x21eb2c) {
            ctx->pc = 0x21EB54u;
            goto label_21eb54;
        }
    }
    ctx->pc = 0x21EB34u;
    // 0x21eb34: 0x70002e28
    ctx->pc = 0x21eb34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21eb38:
    // 0x21eb38: 0x24060001
    ctx->pc = 0x21eb38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21eb3c: 0x24040002
    ctx->pc = 0x21eb3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21eb40: 0x24070003
    ctx->pc = 0x21eb40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
    // 0x21eb44: 0x24080004
    ctx->pc = 0x21eb44u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x21eb48: 0x24090005
    ctx->pc = 0x21eb48u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 5));
    // 0x21eb4c: 0x240a0006
    ctx->pc = 0x21eb4cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 6));
    // 0x21eb50: 0x240b0007
    ctx->pc = 0x21eb50u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 7));
label_21eb54:
    // 0x21eb54: 0x518c0
    ctx->pc = 0x21eb54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x21eb58: 0x651821
    ctx->pc = 0x21eb58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21eb5c: 0x31880
    ctx->pc = 0x21eb5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21eb60: 0x651821
    ctx->pc = 0x21eb60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21eb64: 0xae200000
    ctx->pc = 0x21eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x21eb68: 0xae000000
    ctx->pc = 0x21eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x21eb6c: 0x318c0
    ctx->pc = 0x21eb6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x21eb70: 0xafa00090
    ctx->pc = 0x21eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x21eb74: 0x721821
    ctx->pc = 0x21eb74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21eb78: 0xc46101d0
    ctx->pc = 0x21eb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eb7c: 0xc7a00090
    ctx->pc = 0x21eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eb80: 0x628c0
    ctx->pc = 0x21eb80u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x21eb84: 0xa62821
    ctx->pc = 0x21eb84u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21eb88: 0x52880
    ctx->pc = 0x21eb88u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x21eb8c: 0xa62821
    ctx->pc = 0x21eb8cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21eb90: 0x528c0
    ctx->pc = 0x21eb90u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x21eb94: 0x46010000
    ctx->pc = 0x21eb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21eb98: 0xb23021
    ctx->pc = 0x21eb98u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x21eb9c: 0x428c0
    ctx->pc = 0x21eb9cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 3));
    // 0x21eba0: 0xa42821
    ctx->pc = 0x21eba0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21eba4: 0xe7a00090
    ctx->pc = 0x21eba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21eba8: 0xc46101d4
    ctx->pc = 0x21eba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ebac: 0xc6000000
    ctx->pc = 0x21ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ebb0: 0x52880
    ctx->pc = 0x21ebb0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x21ebb4: 0xa42021
    ctx->pc = 0x21ebb4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21ebb8: 0x420c0
    ctx->pc = 0x21ebb8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x21ebbc: 0x922821
    ctx->pc = 0x21ebbcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x21ebc0: 0x720c0
    ctx->pc = 0x21ebc0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 3));
    // 0x21ebc4: 0x46010000
    ctx->pc = 0x21ebc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ebc8: 0x872021
    ctx->pc = 0x21ebc8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x21ebcc: 0x42080
    ctx->pc = 0x21ebccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x21ebd0: 0x872021
    ctx->pc = 0x21ebd0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x21ebd4: 0xe6000000
    ctx->pc = 0x21ebd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ebd8: 0xc46101d8
    ctx->pc = 0x21ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ebdc: 0xc6200000
    ctx->pc = 0x21ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ebe0: 0x420c0
    ctx->pc = 0x21ebe0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x21ebe4: 0x838c0
    ctx->pc = 0x21ebe4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 8), 3));
    // 0x21ebe8: 0xe83821
    ctx->pc = 0x21ebe8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x21ebec: 0x922021
    ctx->pc = 0x21ebecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x21ebf0: 0x71880
    ctx->pc = 0x21ebf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x21ebf4: 0x46010000
    ctx->pc = 0x21ebf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ebf8: 0x681821
    ctx->pc = 0x21ebf8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x21ebfc: 0x318c0
    ctx->pc = 0x21ebfcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x21ec00: 0x938c0
    ctx->pc = 0x21ec00u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 9), 3));
    // 0x21ec04: 0xe6200000
    ctx->pc = 0x21ec04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21ec08: 0xc4c101d0
    ctx->pc = 0x21ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ec0c: 0xc7a00090
    ctx->pc = 0x21ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ec10: 0xe93821
    ctx->pc = 0x21ec10u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x21ec14: 0x73880
    ctx->pc = 0x21ec14u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x21ec18: 0xe93821
    ctx->pc = 0x21ec18u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x21ec1c: 0x738c0
    ctx->pc = 0x21ec1cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
    // 0x21ec20: 0xf26021
    ctx->pc = 0x21ec20u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x21ec24: 0x46010000
    ctx->pc = 0x21ec24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21ec28: 0xa38c0
    ctx->pc = 0x21ec28u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 10), 3));
    // 0x21ec2c: 0xea3821
    ctx->pc = 0x21ec2cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x21ec30: 0x73880
    ctx->pc = 0x21ec30u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x21ec34: 0xe7a00090
    ctx->pc = 0x21ec34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21ec38: 0xc4c201d4
    ctx->pc = 0x21ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ec3c: 0xc6010000
    ctx->pc = 0x21ec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ec40: 0xea3821
    ctx->pc = 0x21ec40u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x21ec44: 0x738c0
    ctx->pc = 0x21ec44u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
    // 0x21ec48: 0xf24821
    ctx->pc = 0x21ec48u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x21ec4c: 0xb38c0
    ctx->pc = 0x21ec4cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 11), 3));
    // 0x21ec50: 0xeb3821
    ctx->pc = 0x21ec50u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x21ec54: 0x46020840
    ctx->pc = 0x21ec54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ec58: 0x73880
    ctx->pc = 0x21ec58u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x21ec5c: 0xeb3821
    ctx->pc = 0x21ec5cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x21ec60: 0x738c0
    ctx->pc = 0x21ec60u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
    // 0x21ec64: 0xe6010000
    ctx->pc = 0x21ec64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ec68: 0xc4c201d8
    ctx->pc = 0x21ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ec6c: 0xc6210000
    ctx->pc = 0x21ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ec70: 0xf24021
    ctx->pc = 0x21ec70u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x21ec74: 0x3c074100
    ctx->pc = 0x21ec74u;
    SET_GPR_U32(ctx, 7, ((uint32_t)16640 << 16));
    // 0x21ec78: 0x721821
    ctx->pc = 0x21ec78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21ec7c: 0x44870000
    ctx->pc = 0x21ec7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 7);
    // 0x21ec80: 0x0
    ctx->pc = 0x21ec80u;
    // NOP
    // 0x21ec84: 0x46020840
    ctx->pc = 0x21ec84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ec88: 0xe6210000
    ctx->pc = 0x21ec88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21ec8c: 0xc4a201d0
    ctx->pc = 0x21ec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ec90: 0xc7a10090
    ctx->pc = 0x21ec90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ec94: 0x46020840
    ctx->pc = 0x21ec94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ec98: 0xe7a10090
    ctx->pc = 0x21ec98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21ec9c: 0xc4a201d4
    ctx->pc = 0x21ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21eca0: 0xc6010000
    ctx->pc = 0x21eca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eca4: 0x46020840
    ctx->pc = 0x21eca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21eca8: 0xe6010000
    ctx->pc = 0x21eca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ecac: 0xc4a201d8
    ctx->pc = 0x21ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ecb0: 0xc6210000
    ctx->pc = 0x21ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ecb4: 0x46020840
    ctx->pc = 0x21ecb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ecb8: 0xe6210000
    ctx->pc = 0x21ecb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21ecbc: 0xc48201d0
    ctx->pc = 0x21ecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ecc0: 0xc7a10090
    ctx->pc = 0x21ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ecc4: 0x46020840
    ctx->pc = 0x21ecc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ecc8: 0xe7a10090
    ctx->pc = 0x21ecc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21eccc: 0xc48201d4
    ctx->pc = 0x21ecccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ecd0: 0xc6010000
    ctx->pc = 0x21ecd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ecd4: 0x46020840
    ctx->pc = 0x21ecd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ecd8: 0xe6010000
    ctx->pc = 0x21ecd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ecdc: 0xc48201d8
    ctx->pc = 0x21ecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ece0: 0xc6210000
    ctx->pc = 0x21ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ece4: 0x46020840
    ctx->pc = 0x21ece4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ece8: 0xe6210000
    ctx->pc = 0x21ece8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21ecec: 0xc46201d0
    ctx->pc = 0x21ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ecf0: 0xc7a10090
    ctx->pc = 0x21ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ecf4: 0x46020840
    ctx->pc = 0x21ecf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ecf8: 0xe7a10090
    ctx->pc = 0x21ecf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21ecfc: 0xc46201d4
    ctx->pc = 0x21ecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed00: 0xc6010000
    ctx->pc = 0x21ed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed04: 0x46020840
    ctx->pc = 0x21ed04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ed08: 0xe6010000
    ctx->pc = 0x21ed08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ed0c: 0xc46201d8
    ctx->pc = 0x21ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed10: 0xc6210000
    ctx->pc = 0x21ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed14: 0x46020840
    ctx->pc = 0x21ed14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ed18: 0xe6210000
    ctx->pc = 0x21ed18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21ed1c: 0xc58201d0
    ctx->pc = 0x21ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed20: 0xc7a10090
    ctx->pc = 0x21ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed24: 0x46020840
    ctx->pc = 0x21ed24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ed28: 0xe7a10090
    ctx->pc = 0x21ed28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21ed2c: 0xc58201d4
    ctx->pc = 0x21ed2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed30: 0xc6010000
    ctx->pc = 0x21ed30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed34: 0x46020840
    ctx->pc = 0x21ed34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ed38: 0xe6010000
    ctx->pc = 0x21ed38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ed3c: 0xc58201d8
    ctx->pc = 0x21ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed40: 0xc6210000
    ctx->pc = 0x21ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed44: 0x46020840
    ctx->pc = 0x21ed44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ed48: 0xe6210000
    ctx->pc = 0x21ed48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21ed4c: 0xc52201d0
    ctx->pc = 0x21ed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed50: 0xc7a10090
    ctx->pc = 0x21ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed54: 0x46020840
    ctx->pc = 0x21ed54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ed58: 0xe7a10090
    ctx->pc = 0x21ed58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21ed5c: 0xc52201d4
    ctx->pc = 0x21ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed60: 0xc6010000
    ctx->pc = 0x21ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed64: 0x46020840
    ctx->pc = 0x21ed64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ed68: 0xe6010000
    ctx->pc = 0x21ed68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ed6c: 0xc52201d8
    ctx->pc = 0x21ed6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed70: 0xc6210000
    ctx->pc = 0x21ed70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed74: 0x46020840
    ctx->pc = 0x21ed74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ed78: 0xe6210000
    ctx->pc = 0x21ed78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21ed7c: 0xc50201d0
    ctx->pc = 0x21ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed80: 0xc7a10090
    ctx->pc = 0x21ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed84: 0x46020840
    ctx->pc = 0x21ed84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ed88: 0xe7a10090
    ctx->pc = 0x21ed88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21ed8c: 0xc50201d4
    ctx->pc = 0x21ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ed90: 0xc6010000
    ctx->pc = 0x21ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ed94: 0x46020840
    ctx->pc = 0x21ed94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21ed98: 0xe6010000
    ctx->pc = 0x21ed98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ed9c: 0xc50201d8
    ctx->pc = 0x21ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21eda0: 0xc6210000
    ctx->pc = 0x21eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eda4: 0x46020840
    ctx->pc = 0x21eda4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21eda8: 0xe6210000
    ctx->pc = 0x21eda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21edac: 0xc7a10090
    ctx->pc = 0x21edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21edb0: 0x46000843
    ctx->pc = 0x21edb0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x21edb4: 0xe7a10090
    ctx->pc = 0x21edb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21edb8: 0xc6010000
    ctx->pc = 0x21edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21edbc: 0x46000843
    ctx->pc = 0x21edbcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x21edc0: 0xe6010000
    ctx->pc = 0x21edc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21edc4: 0xc6210000
    ctx->pc = 0x21edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21edc8: 0x46000803
    ctx->pc = 0x21edc8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x21edcc: 0x0
    ctx->pc = 0x21edccu;
    // NOP
    // 0x21edd0: 0xe6200000
    ctx->pc = 0x21edd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21edd4: 0x8e430184
    ctx->pc = 0x21edd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x21edd8: 0x14600006
    ctx->pc = 0x21EDD8u;
    {
        const bool branch_taken_0x21edd8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21edd8) {
            ctx->pc = 0x21EDF4u;
            goto label_21edf4;
        }
    }
    ctx->pc = 0x21EDE0u;
    // 0x21ede0: 0x27a40090
    ctx->pc = 0x21ede0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x21ede4: 0xc06bf00
    ctx->pc = 0x21EDE4u;
    SET_GPR_U32(ctx, 31, 0x21EDECu);
    ctx->pc = 0x21EDE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 92));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDECu; }
        else if (ctx->pc != 0x21EDECu) { ctx->pc = 0x21EDECu; }
    }
    if (ctx->pc != 0x21EDECu) { return; }
    ctx->pc = 0x21EDECu;
    // 0x21edec: 0xc24a964
    ctx->pc = 0x21EDECu;
    SET_GPR_U32(ctx, 31, 0x21EDF4u);
    ctx->pc = 0x21EDF0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x92A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        Enemy_Set_ColliBuff__FP9EnemyTask_0x92a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EDF4u; }
        else if (ctx->pc != 0x21EDF4u) { ctx->pc = 0x21EDF4u; }
    }
    if (ctx->pc != 0x21EDF4u) { return; }
    ctx->pc = 0x21EDF4u;
label_21edf4:
    // 0x21edf4: 0x8e430174
    ctx->pc = 0x21edf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x21edf8: 0x18600003
    ctx->pc = 0x21EDF8u;
    {
        const bool branch_taken_0x21edf8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x21edf8) {
            ctx->pc = 0x21EE08u;
            goto label_21ee08;
        }
    }
    ctx->pc = 0x21EE00u;
    // 0x21ee00: 0x2463ffff
    ctx->pc = 0x21ee00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21ee04: 0xae430174
    ctx->pc = 0x21ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 3));
label_21ee08:
    // 0x21ee08: 0x7bbf0060
    ctx->pc = 0x21ee08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ee0c: 0x7bb40050
    ctx->pc = 0x21ee0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ee10: 0x7bb30040
    ctx->pc = 0x21ee10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ee14: 0x7bb20030
    ctx->pc = 0x21ee14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ee18: 0x7bb10020
    ctx->pc = 0x21ee18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ee1c: 0x7bb00010
    ctx->pc = 0x21ee1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ee20: 0xc7b40000
    ctx->pc = 0x21ee20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21ee24: 0x3e00008
    ctx->pc = 0x21EE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EE28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E6D4u: goto label_21e6d4;
            case 0x21E6D8u: goto label_21e6d8;
            case 0x21E700u: goto label_21e700;
            case 0x21E724u: goto label_21e724;
            case 0x21E728u: goto label_21e728;
            case 0x21E7B0u: goto label_21e7b0;
            case 0x21E7ECu: goto label_21e7ec;
            case 0x21E824u: goto label_21e824;
            case 0x21E864u: goto label_21e864;
            case 0x21E89Cu: goto label_21e89c;
            case 0x21E8BCu: goto label_21e8bc;
            case 0x21E8C0u: goto label_21e8c0;
            case 0x21E908u: goto label_21e908;
            case 0x21E9B8u: goto label_21e9b8;
            case 0x21EA3Cu: goto label_21ea3c;
            case 0x21EA9Cu: goto label_21ea9c;
            case 0x21EAA8u: goto label_21eaa8;
            case 0x21EAE0u: goto label_21eae0;
            case 0x21EB00u: goto label_21eb00;
            case 0x21EB38u: goto label_21eb38;
            case 0x21EB54u: goto label_21eb54;
            case 0x21EDF4u: goto label_21edf4;
            case 0x21EE08u: goto label_21ee08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EE2Cu;
}
