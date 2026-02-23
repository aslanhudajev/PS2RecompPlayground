#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutFontCenter__11TrnMojiUchiFUiPcf
// Address: 0x2266c0 - 0x226ba4
void PutFontCenter__11TrnMojiUchiFUiPcf_0x2266c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutFontCenter__11TrnMojiUchiFUiPcf");


    ctx->pc = 0x2266c0u;

    // 0x2266c0: 0x27bdfee0
    ctx->pc = 0x2266c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2266c4: 0x7fbf00a0
    ctx->pc = 0x2266c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x2266c8: 0x7fbe0090
    ctx->pc = 0x2266c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2266cc: 0x7fb70080
    ctx->pc = 0x2266ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2266d0: 0x7fb60070
    ctx->pc = 0x2266d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2266d4: 0x7fb50060
    ctx->pc = 0x2266d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2266d8: 0x7fb40050
    ctx->pc = 0x2266d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2266dc: 0x7fb30040
    ctx->pc = 0x2266dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2266e0: 0x7fb20030
    ctx->pc = 0x2266e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2266e4: 0x7fb10020
    ctx->pc = 0x2266e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2266e8: 0x7fb00010
    ctx->pc = 0x2266e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2266ec: 0xe7b50004
    ctx->pc = 0x2266ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2266f0: 0xe7b40000
    ctx->pc = 0x2266f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2266f4: 0x3c010050
    ctx->pc = 0x2266f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2266f8: 0x51180
    ctx->pc = 0x2266f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
    // 0x2266fc: 0x451023
    ctx->pc = 0x2266fcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x226700: 0x29080
    ctx->pc = 0x226700u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 2), 2));
    // 0x226704: 0x3c02002b
    ctx->pc = 0x226704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x226708: 0x24426538
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25912));
    // 0x22670c: 0x8023fec5
    ctx->pc = 0x22670cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x226710: 0x523821
    ctx->pc = 0x226710u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x226714: 0x70c0ae28
    ctx->pc = 0x226714u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x226718: 0xafa000b0
    ctx->pc = 0x226718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x22671c: 0xafa000c0
    ctx->pc = 0x22671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x226720: 0xafa000d0
    ctx->pc = 0x226720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x226724: 0x310c0
    ctx->pc = 0x226724u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x226728: 0x431021
    ctx->pc = 0x226728u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22672c: 0x21080
    ctx->pc = 0x22672cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x226730: 0xafa000e0
    ctx->pc = 0x226730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x226734: 0x471021
    ctx->pc = 0x226734u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x226738: 0x8c560000
    ctx->pc = 0x226738u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22673c: 0x46006546
    ctx->pc = 0x22673cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x226740: 0x7080a628
    ctx->pc = 0x226740u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x226744: 0x4480a000
    ctx->pc = 0x226744u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x226748: 0x72a02e28
    ctx->pc = 0x226748u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x22674c: 0x27a600f0
    ctx->pc = 0x22674cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 240));
    // 0x226750: 0x70008628
    ctx->pc = 0x226750u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226754: 0x70008e28
    ctx->pc = 0x226754u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226758: 0xc089864
    ctx->pc = 0x226758u;
    SET_GPR_U32(ctx, 31, 0x226760u);
    ctx->pc = 0x22675Cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x226190u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckGyouNum__11TrnMojiUchiFPcPi_0x226190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226760u; }
        else if (ctx->pc != 0x226760u) { ctx->pc = 0x226760u; }
    }
    if (ctx->pc != 0x226760u) { return; }
    ctx->pc = 0x226760u;
    // 0x226760: 0x3c02002b
    ctx->pc = 0x226760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x226764: 0x24426530
    ctx->pc = 0x226764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25904));
    // 0x226768: 0x27b700f0
    ctx->pc = 0x226768u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 240));
    // 0x22676c: 0x100000ec
    ctx->pc = 0x22676Cu;
    {
        const bool branch_taken_0x22676c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226770u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        if (branch_taken_0x22676c) {
            ctx->pc = 0x226B20u;
            goto label_226b20;
        }
    }
    ctx->pc = 0x226774u;
label_226774:
    // 0x226774: 0xc089828
    ctx->pc = 0x226774u;
    SET_GPR_U32(ctx, 31, 0x22677Cu);
    ctx->pc = 0x226778u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2260A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCode2__11TrnMojiUchiFPCc_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22677Cu; }
        else if (ctx->pc != 0x22677Cu) { ctx->pc = 0x22677Cu; }
    }
    if (ctx->pc != 0x22677Cu) { return; }
    ctx->pc = 0x22677Cu;
    // 0x22677c: 0x70409628
    ctx->pc = 0x22677cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x226780: 0x2402ffff
    ctx->pc = 0x226780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226784: 0x12420004
    ctx->pc = 0x226784u;
    {
        const bool branch_taken_0x226784 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x226788u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x226784) {
            ctx->pc = 0x226798u;
            goto label_226798;
        }
    }
    ctx->pc = 0x22678Cu;
    // 0x22678c: 0x1642000b
    ctx->pc = 0x22678Cu;
    {
        const bool branch_taken_0x22678c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x226790u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x22678c) {
            ctx->pc = 0x2267BCu;
            goto label_2267bc;
        }
    }
    ctx->pc = 0x226794u;
    // 0x226794: 0x0
    ctx->pc = 0x226794u;
    // NOP
label_226798:
    // 0x226798: 0x4480a000
    ctx->pc = 0x226798u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x22679c: 0x12000004
    ctx->pc = 0x22679Cu;
    {
        const bool branch_taken_0x22679c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2267A0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 4));
        if (branch_taken_0x22679c) {
            ctx->pc = 0x2267B0u;
            goto label_2267b0;
        }
    }
    ctx->pc = 0x2267A4u;
    // 0x2267a4: 0x2631ffff
    ctx->pc = 0x2267a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2267a8: 0x100000db
    ctx->pc = 0x2267A8u;
    {
        const bool branch_taken_0x2267a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2267ACu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2267a8) {
            ctx->pc = 0x226B18u;
            goto label_226b18;
        }
    }
    ctx->pc = 0x2267B0u;
label_2267b0:
    // 0x2267b0: 0x100000d9
    ctx->pc = 0x2267B0u;
    {
        const bool branch_taken_0x2267b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2267B4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2267b0) {
            ctx->pc = 0x226B18u;
            goto label_226b18;
        }
    }
    ctx->pc = 0x2267B8u;
    // 0x2267b8: 0x2402fffd
    ctx->pc = 0x2267b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
label_2267bc:
    // 0x2267bc: 0x16420004
    ctx->pc = 0x2267BCu;
    {
        const bool branch_taken_0x2267bc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2267C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x2267bc) {
            ctx->pc = 0x2267D0u;
            goto label_2267d0;
        }
    }
    ctx->pc = 0x2267C4u;
    // 0x2267c4: 0x100000d4
    ctx->pc = 0x2267C4u;
    {
        const bool branch_taken_0x2267c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2267C8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2267c4) {
            ctx->pc = 0x226B18u;
            goto label_226b18;
        }
    }
    ctx->pc = 0x2267CCu;
    // 0x2267cc: 0x2402fffc
    ctx->pc = 0x2267ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_2267d0:
    // 0x2267d0: 0x16420005
    ctx->pc = 0x2267D0u;
    {
        const bool branch_taken_0x2267d0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2267D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x2267d0) {
            ctx->pc = 0x2267E8u;
            goto label_2267e8;
        }
    }
    ctx->pc = 0x2267D8u;
    // 0x2267d8: 0x24020001
    ctx->pc = 0x2267d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2267dc: 0x100000ce
    ctx->pc = 0x2267DCu;
    {
        const bool branch_taken_0x2267dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2267E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        if (branch_taken_0x2267dc) {
            ctx->pc = 0x226B18u;
            goto label_226b18;
        }
    }
    ctx->pc = 0x2267E4u;
    // 0x2267e4: 0x2402fffa
    ctx->pc = 0x2267e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
label_2267e8:
    // 0x2267e8: 0x16420005
    ctx->pc = 0x2267E8u;
    {
        const bool branch_taken_0x2267e8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2267ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967289));
        if (branch_taken_0x2267e8) {
            ctx->pc = 0x226800u;
            goto label_226800;
        }
    }
    ctx->pc = 0x2267F0u;
    // 0x2267f0: 0x24020001
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2267f4: 0x100000c8
    ctx->pc = 0x2267F4u;
    {
        const bool branch_taken_0x2267f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2267F8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        if (branch_taken_0x2267f4) {
            ctx->pc = 0x226B18u;
            goto label_226b18;
        }
    }
    ctx->pc = 0x2267FCu;
    // 0x2267fc: 0x2402fff9
    ctx->pc = 0x2267fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967289));
label_226800:
    // 0x226800: 0x16420005
    ctx->pc = 0x226800u;
    {
        const bool branch_taken_0x226800 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x226804u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967288));
        if (branch_taken_0x226800) {
            ctx->pc = 0x226818u;
            goto label_226818;
        }
    }
    ctx->pc = 0x226808u;
    // 0x226808: 0x24020001
    ctx->pc = 0x226808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22680c: 0x100000c2
    ctx->pc = 0x22680Cu;
    {
        const bool branch_taken_0x22680c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226810u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        if (branch_taken_0x22680c) {
            ctx->pc = 0x226B18u;
            goto label_226b18;
        }
    }
    ctx->pc = 0x226814u;
    // 0x226814: 0x2402fff8
    ctx->pc = 0x226814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967288));
label_226818:
    // 0x226818: 0x16420005
    ctx->pc = 0x226818u;
    {
        const bool branch_taken_0x226818 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x22681Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x226818) {
            ctx->pc = 0x226830u;
            goto label_226830;
        }
    }
    ctx->pc = 0x226820u;
    // 0x226820: 0x24020001
    ctx->pc = 0x226820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226824: 0x100000bc
    ctx->pc = 0x226824u;
    {
        const bool branch_taken_0x226824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226828u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        if (branch_taken_0x226824) {
            ctx->pc = 0x226B18u;
            goto label_226b18;
        }
    }
    ctx->pc = 0x22682Cu;
    // 0x22682c: 0x2402fffb
    ctx->pc = 0x22682cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
label_226830:
    // 0x226830: 0x16420007
    ctx->pc = 0x226830u;
    {
        const bool branch_taken_0x226830 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x226834u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 153));
        if (branch_taken_0x226830) {
            ctx->pc = 0x226850u;
            goto label_226850;
        }
    }
    ctx->pc = 0x226838u;
    // 0x226838: 0xafa000b0
    ctx->pc = 0x226838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x22683c: 0xafa000c0
    ctx->pc = 0x22683cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x226840: 0xafa000d0
    ctx->pc = 0x226840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x226844: 0x100000b4
    ctx->pc = 0x226844u;
    {
        const bool branch_taken_0x226844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226848u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        if (branch_taken_0x226844) {
            ctx->pc = 0x226B18u;
            goto label_226b18;
        }
    }
    ctx->pc = 0x22684Cu;
    // 0x22684c: 0x24020099
    ctx->pc = 0x22684cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 153));
label_226850:
    // 0x226850: 0x12420005
    ctx->pc = 0x226850u;
    {
        const bool branch_taken_0x226850 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x226854u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 162));
        if (branch_taken_0x226850) {
            ctx->pc = 0x226868u;
            goto label_226868;
        }
    }
    ctx->pc = 0x226858u;
    // 0x226858: 0x12420003
    ctx->pc = 0x226858u;
    {
        const bool branch_taken_0x226858 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x22685Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 185));
        if (branch_taken_0x226858) {
            ctx->pc = 0x226868u;
            goto label_226868;
        }
    }
    ctx->pc = 0x226860u;
    // 0x226860: 0x16420005
    ctx->pc = 0x226860u;
    {
        const bool branch_taken_0x226860 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x226860) {
            ctx->pc = 0x226878u;
            goto label_226878;
        }
    }
    ctx->pc = 0x226868u;
label_226868:
    // 0x226868: 0x16000003
    ctx->pc = 0x226868u;
    {
        const bool branch_taken_0x226868 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x226868) {
            ctx->pc = 0x226878u;
            goto label_226878;
        }
    }
    ctx->pc = 0x226870u;
    // 0x226870: 0x26310001
    ctx->pc = 0x226870u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x226874: 0x72c08628
    ctx->pc = 0x226874u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_226878:
    // 0x226878: 0x3c010050
    ctx->pc = 0x226878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x22687c: 0x8022fec5
    ctx->pc = 0x22687cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x226880: 0x1040000f
    ctx->pc = 0x226880u;
    {
        const bool branch_taken_0x226880 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x226884u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 24));
        if (branch_taken_0x226880) {
            ctx->pc = 0x2268C0u;
            goto label_2268c0;
        }
    }
    ctx->pc = 0x226888u;
    // 0x226888: 0x31e3f
    ctx->pc = 0x226888u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x22688c: 0x24020001
    ctx->pc = 0x22688cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226890: 0x14620006
    ctx->pc = 0x226890u;
    {
        const bool branch_taken_0x226890 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x226894u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x226890) {
            ctx->pc = 0x2268ACu;
            goto label_2268ac;
        }
    }
    ctx->pc = 0x226898u;
    // 0x226898: 0xc7808ea0
    ctx->pc = 0x226898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22689c: 0x7000f628
    ctx->pc = 0x22689cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2268a0: 0x4600a500
    ctx->pc = 0x2268a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2268a4: 0x0
    ctx->pc = 0x2268a4u;
    // NOP
    // 0x2268a8: 0x24020026
    ctx->pc = 0x2268a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
label_2268ac:
    // 0x2268ac: 0x16420004
    ctx->pc = 0x2268ACu;
    {
        const bool branch_taken_0x2268ac = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x2268ac) {
            ctx->pc = 0x2268C0u;
            goto label_2268c0;
        }
    }
    ctx->pc = 0x2268B4u;
    // 0x2268b4: 0xc7808ea0
    ctx->pc = 0x2268b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2268b8: 0x241e0001
    ctx->pc = 0x2268b8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2268bc: 0x4600a500
    ctx->pc = 0x2268bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2268c0:
    // 0x2268c0: 0x4bede37d
    ctx->pc = 0x2268c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2268c4: 0x4bedeb7d
    ctx->pc = 0x2268c4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2268c8: 0x4bedf37d
    ctx->pc = 0x2268c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2268cc: 0xc06c20d
    ctx->pc = 0x2268CCu;
    SET_GPR_U32(ctx, 31, 0x2268D4u);
    ctx->pc = 0x2268D0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2268D4u; }
        else if (ctx->pc != 0x2268D4u) { ctx->pc = 0x2268D4u; }
    }
    if (ctx->pc != 0x2268D4u) { return; }
    ctx->pc = 0x2268D4u;
    // 0x2268d4: 0xc68d0004
    ctx->pc = 0x2268d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2268d8: 0xc68e0008
    ctx->pc = 0x2268d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2268dc: 0xc06c202
    ctx->pc = 0x2268DCu;
    SET_GPR_U32(ctx, 31, 0x2268E4u);
    ctx->pc = 0x2268E0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2268E4u; }
        else if (ctx->pc != 0x2268E4u) { ctx->pc = 0x2268E4u; }
    }
    if (ctx->pc != 0x2268E4u) { return; }
    ctx->pc = 0x2268E4u;
    // 0x2268e4: 0x3c010050
    ctx->pc = 0x2268e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2268e8: 0x8023fec5
    ctx->pc = 0x2268e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x2268ec: 0x310c0
    ctx->pc = 0x2268ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x2268f0: 0x431021
    ctx->pc = 0x2268f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2268f4: 0x21080
    ctx->pc = 0x2268f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2268f8: 0x2621021
    ctx->pc = 0x2268f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2268fc: 0xc44d001c
    ctx->pc = 0x2268fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x226900: 0xc44e0020
    ctx->pc = 0x226900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x226904: 0xc06c1b3
    ctx->pc = 0x226904u;
    SET_GPR_U32(ctx, 31, 0x22690Cu);
    ctx->pc = 0x226908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22690Cu; }
        else if (ctx->pc != 0x22690Cu) { ctx->pc = 0x22690Cu; }
    }
    if (ctx->pc != 0x22690Cu) { return; }
    ctx->pc = 0x22690Cu;
    // 0x22690c: 0x3c010050
    ctx->pc = 0x22690cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x226910: 0x8023fec5
    ctx->pc = 0x226910u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x226914: 0x310c0
    ctx->pc = 0x226914u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x226918: 0x431021
    ctx->pc = 0x226918u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22691c: 0x21080
    ctx->pc = 0x22691cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x226920: 0x2621021
    ctx->pc = 0x226920u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x226924: 0xc06b218
    ctx->pc = 0x226924u;
    SET_GPR_U32(ctx, 31, 0x22692Cu);
    ctx->pc = 0x226928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22692Cu; }
        else if (ctx->pc != 0x22692Cu) { ctx->pc = 0x22692Cu; }
    }
    if (ctx->pc != 0x22692Cu) { return; }
    ctx->pc = 0x22692Cu;
    // 0x22692c: 0x4bede37d
    ctx->pc = 0x22692cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x226930: 0x4bedeb7d
    ctx->pc = 0x226930u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x226934: 0x4bedf37d
    ctx->pc = 0x226934u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x226938: 0x4bedfb7d
    ctx->pc = 0x226938u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x22693c: 0x3c010050
    ctx->pc = 0x22693cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x226940: 0x44900800
    ctx->pc = 0x226940u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 16);
    // 0x226944: 0x3c023f80
    ctx->pc = 0x226944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x226948: 0x44910000
    ctx->pc = 0x226948u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x22694c: 0x8023fec5
    ctx->pc = 0x22694cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x226950: 0x44822000
    ctx->pc = 0x226950u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x226954: 0x468008a0
    ctx->pc = 0x226954u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x226958: 0x310c0
    ctx->pc = 0x226958u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x22695c: 0x431021
    ctx->pc = 0x22695cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226960: 0x21080
    ctx->pc = 0x226960u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x226964: 0x2621021
    ctx->pc = 0x226964u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x226968: 0xc4410004
    ctx->pc = 0x226968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22696c: 0xc4430000
    ctx->pc = 0x22696cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226970: 0x46800020
    ctx->pc = 0x226970u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x226974: 0x46012040
    ctx->pc = 0x226974u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x226978: 0x46010342
    ctx->pc = 0x226978u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22697c: 0x460320c0
    ctx->pc = 0x22697cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x226980: 0x4603a000
    ctx->pc = 0x226980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x226984: 0x44807000
    ctx->pc = 0x226984u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x226988: 0xc06c202
    ctx->pc = 0x226988u;
    SET_GPR_U32(ctx, 31, 0x226990u);
    ctx->pc = 0x22698Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226990u; }
        else if (ctx->pc != 0x226990u) { ctx->pc = 0x226990u; }
    }
    if (ctx->pc != 0x226990u) { return; }
    ctx->pc = 0x226990u;
    // 0x226990: 0x3c010050
    ctx->pc = 0x226990u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x226994: 0x8026fec5
    ctx->pc = 0x226994u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x226998: 0x3c023f80
    ctx->pc = 0x226998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x22699c: 0x44820800
    ctx->pc = 0x22699cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2269a0: 0x8ee20000
    ctx->pc = 0x2269a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2269a4: 0x618c0
    ctx->pc = 0x2269a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 3));
    // 0x2269a8: 0x661821
    ctx->pc = 0x2269a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2269ac: 0x31880
    ctx->pc = 0x2269acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2269b0: 0x2631821
    ctx->pc = 0x2269b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2269b4: 0xc4620000
    ctx->pc = 0x2269b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2269b8: 0x2c21023
    ctx->pc = 0x2269b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2269bc: 0x44820000
    ctx->pc = 0x2269bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2269c0: 0x0
    ctx->pc = 0x2269c0u;
    // NOP
    // 0x2269c4: 0x46800020
    ctx->pc = 0x2269c4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2269c8: 0x46020840
    ctx->pc = 0x2269c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2269cc: 0xc0531aa
    ctx->pc = 0x2269CCu;
    SET_GPR_U32(ctx, 31, 0x2269D4u);
    ctx->pc = 0x2269D0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x14C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x14c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2269D4u; }
        else if (ctx->pc != 0x2269D4u) { ctx->pc = 0x2269D4u; }
    }
    if (ctx->pc != 0x2269D4u) { return; }
    ctx->pc = 0x2269D4u;
    // 0x2269d4: 0x3c034000
    ctx->pc = 0x2269d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x2269d8: 0x3283c
    ctx->pc = 0x2269d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2269dc: 0xc052d62
    ctx->pc = 0x2269DCu;
    SET_GPR_U32(ctx, 31, 0x2269E4u);
    ctx->pc = 0x2269E0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2269E4u; }
        else if (ctx->pc != 0x2269E4u) { ctx->pc = 0x2269E4u; }
    }
    if (ctx->pc != 0x2269E4u) { return; }
    ctx->pc = 0x2269E4u;
    // 0x2269e4: 0xc052eac
    ctx->pc = 0x2269E4u;
    SET_GPR_U32(ctx, 31, 0x2269ECu);
    ctx->pc = 0x2269E8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2269ECu; }
        else if (ctx->pc != 0x2269ECu) { ctx->pc = 0x2269ECu; }
    }
    if (ctx->pc != 0x2269ECu) { return; }
    ctx->pc = 0x2269ECu;
    // 0x2269ec: 0x44806800
    ctx->pc = 0x2269ecu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x2269f0: 0x46000306
    ctx->pc = 0x2269f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2269f4: 0xc06c202
    ctx->pc = 0x2269F4u;
    SET_GPR_U32(ctx, 31, 0x2269FCu);
    ctx->pc = 0x2269F8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2269FCu; }
        else if (ctx->pc != 0x2269FCu) { ctx->pc = 0x2269FCu; }
    }
    if (ctx->pc != 0x2269FCu) { return; }
    ctx->pc = 0x2269FCu;
    // 0x2269fc: 0x8fa200b0
    ctx->pc = 0x2269fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226a00: 0x10400008
    ctx->pc = 0x226A00u;
    {
        const bool branch_taken_0x226a00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x226A04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
        if (branch_taken_0x226a00) {
            ctx->pc = 0x226A24u;
            goto label_226a24;
        }
    }
    ctx->pc = 0x226A08u;
    // 0x226a08: 0x44826800
    ctx->pc = 0x226a08u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x226a0c: 0x3c023f80
    ctx->pc = 0x226a0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x226a10: 0x44826000
    ctx->pc = 0x226a10u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x226a14: 0xc06aa80
    ctx->pc = 0x226A14u;
    SET_GPR_U32(ctx, 31, 0x226A1Cu);
    ctx->pc = 0x226A18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A1Cu; }
        else if (ctx->pc != 0x226A1Cu) { ctx->pc = 0x226A1Cu; }
    }
    if (ctx->pc != 0x226A1Cu) { return; }
    ctx->pc = 0x226A1Cu;
    // 0x226a1c: 0x10000025
    ctx->pc = 0x226A1Cu;
    {
        const bool branch_taken_0x226a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226A20u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x226a1c) {
            ctx->pc = 0x226AB4u;
            goto label_226ab4;
        }
    }
    ctx->pc = 0x226A24u;
label_226a24:
    // 0x226a24: 0x8fa200c0
    ctx->pc = 0x226a24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226a28: 0x10400008
    ctx->pc = 0x226A28u;
    {
        const bool branch_taken_0x226a28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x226a28) {
            ctx->pc = 0x226A4Cu;
            goto label_226a4c;
        }
    }
    ctx->pc = 0x226A30u;
    // 0x226a30: 0x44806000
    ctx->pc = 0x226a30u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x226a34: 0x3c023f80
    ctx->pc = 0x226a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x226a38: 0x44827000
    ctx->pc = 0x226a38u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x226a3c: 0xc06aa80
    ctx->pc = 0x226A3Cu;
    SET_GPR_U32(ctx, 31, 0x226A44u);
    ctx->pc = 0x226A40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A44u; }
        else if (ctx->pc != 0x226A44u) { ctx->pc = 0x226A44u; }
    }
    if (ctx->pc != 0x226A44u) { return; }
    ctx->pc = 0x226A44u;
    // 0x226a44: 0x1000001a
    ctx->pc = 0x226A44u;
    {
        const bool branch_taken_0x226a44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x226a44) {
            ctx->pc = 0x226AB0u;
            goto label_226ab0;
        }
    }
    ctx->pc = 0x226A4Cu;
label_226a4c:
    // 0x226a4c: 0x8fa200d0
    ctx->pc = 0x226a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x226a50: 0x10400007
    ctx->pc = 0x226A50u;
    {
        const bool branch_taken_0x226a50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x226A54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x226a50) {
            ctx->pc = 0x226A70u;
            goto label_226a70;
        }
    }
    ctx->pc = 0x226A58u;
    // 0x226a58: 0x44806800
    ctx->pc = 0x226a58u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x226a5c: 0x44826000
    ctx->pc = 0x226a5cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x226a60: 0xc06aa80
    ctx->pc = 0x226A60u;
    SET_GPR_U32(ctx, 31, 0x226A68u);
    ctx->pc = 0x226A64u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A68u; }
        else if (ctx->pc != 0x226A68u) { ctx->pc = 0x226A68u; }
    }
    if (ctx->pc != 0x226A68u) { return; }
    ctx->pc = 0x226A68u;
    // 0x226a68: 0x10000011
    ctx->pc = 0x226A68u;
    {
        const bool branch_taken_0x226a68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x226a68) {
            ctx->pc = 0x226AB0u;
            goto label_226ab0;
        }
    }
    ctx->pc = 0x226A70u;
label_226a70:
    // 0x226a70: 0x8fa200e0
    ctx->pc = 0x226a70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x226a74: 0x10400008
    ctx->pc = 0x226A74u;
    {
        const bool branch_taken_0x226a74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x226a74) {
            ctx->pc = 0x226A98u;
            goto label_226a98;
        }
    }
    ctx->pc = 0x226A7Cu;
    // 0x226a7c: 0x44806000
    ctx->pc = 0x226a7cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x226a80: 0x3c023f80
    ctx->pc = 0x226a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x226a84: 0x44827000
    ctx->pc = 0x226a84u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x226a88: 0xc06aa80
    ctx->pc = 0x226A88u;
    SET_GPR_U32(ctx, 31, 0x226A90u);
    ctx->pc = 0x226A8Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226A90u; }
        else if (ctx->pc != 0x226A90u) { ctx->pc = 0x226A90u; }
    }
    if (ctx->pc != 0x226A90u) { return; }
    ctx->pc = 0x226A90u;
    // 0x226a90: 0x10000007
    ctx->pc = 0x226A90u;
    {
        const bool branch_taken_0x226a90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x226a90) {
            ctx->pc = 0x226AB0u;
            goto label_226ab0;
        }
    }
    ctx->pc = 0x226A98u;
label_226a98:
    // 0x226a98: 0x44806000
    ctx->pc = 0x226a98u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x226a9c: 0x0
    ctx->pc = 0x226a9cu;
    // NOP
    // 0x226aa0: 0x46006346
    ctx->pc = 0x226aa0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x226aa4: 0xc06aa80
    ctx->pc = 0x226AA4u;
    SET_GPR_U32(ctx, 31, 0x226AACu);
    ctx->pc = 0x226AA8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226AACu; }
        else if (ctx->pc != 0x226AACu) { ctx->pc = 0x226AACu; }
    }
    if (ctx->pc != 0x226AACu) { return; }
    ctx->pc = 0x226AACu;
    // 0x226aac: 0x0
    ctx->pc = 0x226aacu;
    // NOP
label_226ab0:
    // 0x226ab0: 0x121080
    ctx->pc = 0x226ab0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_226ab4:
    // 0x226ab4: 0x2821021
    ctx->pc = 0x226ab4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x226ab8: 0x8c440014
    ctx->pc = 0x226ab8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x226abc: 0xc06a278
    ctx->pc = 0x226ABCu;
    SET_GPR_U32(ctx, 31, 0x226AC4u);
    ctx->pc = 0x226AC0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutTrnsl_0x1a89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226AC4u; }
        else if (ctx->pc != 0x226AC4u) { ctx->pc = 0x226AC4u; }
    }
    if (ctx->pc != 0x226AC4u) { return; }
    ctx->pc = 0x226AC4u;
    // 0x226ac4: 0x3c023f80
    ctx->pc = 0x226ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x226ac8: 0x44826000
    ctx->pc = 0x226ac8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x226acc: 0x0
    ctx->pc = 0x226accu;
    // NOP
    // 0x226ad0: 0x46006346
    ctx->pc = 0x226ad0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x226ad4: 0xc06aa80
    ctx->pc = 0x226AD4u;
    SET_GPR_U32(ctx, 31, 0x226ADCu);
    ctx->pc = 0x226AD8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226ADCu; }
        else if (ctx->pc != 0x226ADCu) { ctx->pc = 0x226ADCu; }
    }
    if (ctx->pc != 0x226ADCu) { return; }
    ctx->pc = 0x226ADCu;
    // 0x226adc: 0x4bff6b7e
    ctx->pc = 0x226adcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x226ae0: 0x4bfe6b7e
    ctx->pc = 0x226ae0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x226ae4: 0x4bfd6b7e
    ctx->pc = 0x226ae4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x226ae8: 0x4bfc6b7e
    ctx->pc = 0x226ae8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x226aec: 0x4bff6b7e
    ctx->pc = 0x226aecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x226af0: 0x4bfe6b7e
    ctx->pc = 0x226af0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x226af4: 0x4bfd6b7e
    ctx->pc = 0x226af4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x226af8: 0x4bfc6b7e
    ctx->pc = 0x226af8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x226afc: 0x26100001
    ctx->pc = 0x226afcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x226b00: 0x216102a
    ctx->pc = 0x226b00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 22)));
    // 0x226b04: 0x54400005
    ctx->pc = 0x226B04u;
    {
        const bool branch_taken_0x226b04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x226b04) {
            ctx->pc = 0x226B08u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 2));
            ctx->pc = 0x226B1Cu;
            goto label_226b1c;
        }
    }
    ctx->pc = 0x226B0Cu;
    // 0x226b0c: 0x4480a000
    ctx->pc = 0x226b0cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x226b10: 0x70008628
    ctx->pc = 0x226b10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226b14: 0x2631ffff
    ctx->pc = 0x226b14u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_226b18:
    // 0x226b18: 0x26b50002
    ctx->pc = 0x226b18u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 2));
label_226b1c:
    // 0x226b1c: 0x0
    ctx->pc = 0x226b1cu;
    // NOP
label_226b20:
    // 0x226b20: 0x82a20000
    ctx->pc = 0x226b20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x226b24: 0x10400006
    ctx->pc = 0x226B24u;
    {
        const bool branch_taken_0x226b24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x226b24) {
            ctx->pc = 0x226B40u;
            goto label_226b40;
        }
    }
    ctx->pc = 0x226B2Cu;
    // 0x226b2c: 0x8e82000c
    ctx->pc = 0x226b2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x226b30: 0x2102a
    ctx->pc = 0x226b30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x226b34: 0x1440ff0f
    ctx->pc = 0x226B34u;
    {
        const bool branch_taken_0x226b34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x226B38u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x226b34) {
            ctx->pc = 0x226774u;
            goto label_226774;
        }
    }
    ctx->pc = 0x226B3Cu;
    // 0x226b3c: 0x0
    ctx->pc = 0x226b3cu;
    // NOP
label_226b40:
    // 0x226b40: 0x3c020050
    ctx->pc = 0x226b40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x226b44: 0xc07ce18
    ctx->pc = 0x226B44u;
    SET_GPR_U32(ctx, 31, 0x226B4Cu);
    ctx->pc = 0x226B48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B4Cu; }
        else if (ctx->pc != 0x226B4Cu) { ctx->pc = 0x226B4Cu; }
    }
    if (ctx->pc != 0x226B4Cu) { return; }
    ctx->pc = 0x226B4Cu;
    // 0x226b4c: 0x28410005
    ctx->pc = 0x226b4cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x226b50: 0x10200006
    ctx->pc = 0x226B50u;
    {
        const bool branch_taken_0x226b50 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x226b50) {
            ctx->pc = 0x226B6Cu;
            goto label_226b6c;
        }
    }
    ctx->pc = 0x226B58u;
    // 0x226b58: 0x8283101c
    ctx->pc = 0x226b58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4124)));
    // 0x226b5c: 0x14600003
    ctx->pc = 0x226B5Cu;
    {
        const bool branch_taken_0x226b5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x226B60u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x226b5c) {
            ctx->pc = 0x226B6Cu;
            goto label_226b6c;
        }
    }
    ctx->pc = 0x226B64u;
    // 0x226b64: 0xc089af0
    ctx->pc = 0x226B64u;
    SET_GPR_U32(ctx, 31, 0x226B6Cu);
    ctx->pc = 0x226BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MojiCount__11TrnMojiUchiFv_0x226bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226B6Cu; }
        else if (ctx->pc != 0x226B6Cu) { ctx->pc = 0x226B6Cu; }
    }
    if (ctx->pc != 0x226B6Cu) { return; }
    ctx->pc = 0x226B6Cu;
label_226b6c:
    // 0x226b6c: 0x7bbf00a0
    ctx->pc = 0x226b6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226b70: 0x7bbe0090
    ctx->pc = 0x226b70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226b74: 0x7bb70080
    ctx->pc = 0x226b74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226b78: 0x7bb60070
    ctx->pc = 0x226b78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226b7c: 0x7bb50060
    ctx->pc = 0x226b7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226b80: 0x7bb40050
    ctx->pc = 0x226b80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226b84: 0x7bb30040
    ctx->pc = 0x226b84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226b88: 0x7bb20030
    ctx->pc = 0x226b88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226b8c: 0x7bb10020
    ctx->pc = 0x226b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226b90: 0x7bb00010
    ctx->pc = 0x226b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226b94: 0xc7b50004
    ctx->pc = 0x226b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x226b98: 0xc7b40000
    ctx->pc = 0x226b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x226b9c: 0x3e00008
    ctx->pc = 0x226B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226BA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226774u: goto label_226774;
            case 0x226798u: goto label_226798;
            case 0x2267B0u: goto label_2267b0;
            case 0x2267BCu: goto label_2267bc;
            case 0x2267D0u: goto label_2267d0;
            case 0x2267E8u: goto label_2267e8;
            case 0x226800u: goto label_226800;
            case 0x226818u: goto label_226818;
            case 0x226830u: goto label_226830;
            case 0x226850u: goto label_226850;
            case 0x226868u: goto label_226868;
            case 0x226878u: goto label_226878;
            case 0x2268ACu: goto label_2268ac;
            case 0x2268C0u: goto label_2268c0;
            case 0x226A24u: goto label_226a24;
            case 0x226A4Cu: goto label_226a4c;
            case 0x226A70u: goto label_226a70;
            case 0x226A98u: goto label_226a98;
            case 0x226AB0u: goto label_226ab0;
            case 0x226AB4u: goto label_226ab4;
            case 0x226B18u: goto label_226b18;
            case 0x226B1Cu: goto label_226b1c;
            case 0x226B20u: goto label_226b20;
            case 0x226B40u: goto label_226b40;
            case 0x226B6Cu: goto label_226b6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226BA4u;
}
