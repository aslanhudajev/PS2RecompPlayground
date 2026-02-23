#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutFont__11TrnMojiUchiFUiPcf
// Address: 0x226250 - 0x2266b4
void PutFont__11TrnMojiUchiFUiPcf_0x226250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutFont__11TrnMojiUchiFUiPcf");


    ctx->pc = 0x226250u;

    // 0x226250: 0x27bdff20
    ctx->pc = 0x226250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x226254: 0x7fbf00a0
    ctx->pc = 0x226254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x226258: 0x7fbe0090
    ctx->pc = 0x226258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x22625c: 0x7fb70080
    ctx->pc = 0x22625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x226260: 0x7fb60070
    ctx->pc = 0x226260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x226264: 0x7fb50060
    ctx->pc = 0x226264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x226268: 0x7fb40050
    ctx->pc = 0x226268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22626c: 0x7fb30040
    ctx->pc = 0x22626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x226270: 0x7fb20030
    ctx->pc = 0x226270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x226274: 0x7fb10020
    ctx->pc = 0x226274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x226278: 0x7fb00010
    ctx->pc = 0x226278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22627c: 0xe7b50004
    ctx->pc = 0x22627cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x226280: 0xe7b40000
    ctx->pc = 0x226280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x226284: 0x51180
    ctx->pc = 0x226284u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
    // 0x226288: 0x451023
    ctx->pc = 0x226288u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22628c: 0x22880
    ctx->pc = 0x22628cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 2));
    // 0x226290: 0x3c010050
    ctx->pc = 0x226290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x226294: 0x3c02002b
    ctx->pc = 0x226294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x226298: 0x8023fec5
    ctx->pc = 0x226298u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x22629c: 0x7080a628
    ctx->pc = 0x22629cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2262a0: 0x24426538
    ctx->pc = 0x2262a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25912));
    // 0x2262a4: 0x452021
    ctx->pc = 0x2262a4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2262a8: 0x3c02002b
    ctx->pc = 0x2262a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x2262ac: 0x24426530
    ctx->pc = 0x2262acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25904));
    // 0x2262b0: 0x45a821
    ctx->pc = 0x2262b0u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2262b4: 0x310c0
    ctx->pc = 0x2262b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x2262b8: 0x431021
    ctx->pc = 0x2262b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2262bc: 0x21080
    ctx->pc = 0x2262bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2262c0: 0xafa000b0
    ctx->pc = 0x2262c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2262c4: 0xafa000c0
    ctx->pc = 0x2262c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2262c8: 0xafa000d0
    ctx->pc = 0x2262c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x2262cc: 0x441021
    ctx->pc = 0x2262ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2262d0: 0x8c570000
    ctx->pc = 0x2262d0u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2262d4: 0x4480a000
    ctx->pc = 0x2262d4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x2262d8: 0x70c09e28
    ctx->pc = 0x2262d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2262dc: 0x46006546
    ctx->pc = 0x2262dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2262e0: 0x70008628
    ctx->pc = 0x2262e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2262e4: 0x70008e28
    ctx->pc = 0x2262e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2262e8: 0x7000f628
    ctx->pc = 0x2262e8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2262ec: 0x100000d0
    ctx->pc = 0x2262ECu;
    {
        const bool branch_taken_0x2262ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2262F0u;
        SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2262ec) {
            ctx->pc = 0x226630u;
            goto label_226630;
        }
    }
    ctx->pc = 0x2262F4u;
label_2262f4:
    // 0x2262f4: 0xc089828
    ctx->pc = 0x2262F4u;
    SET_GPR_U32(ctx, 31, 0x2262FCu);
    ctx->pc = 0x2262F8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2260A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCode2__11TrnMojiUchiFPCc_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2262FCu; }
        else if (ctx->pc != 0x2262FCu) { ctx->pc = 0x2262FCu; }
    }
    if (ctx->pc != 0x2262FCu) { return; }
    ctx->pc = 0x2262FCu;
    // 0x2262fc: 0x70409628
    ctx->pc = 0x2262fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x226300: 0x2402ffff
    ctx->pc = 0x226300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226304: 0x12420004
    ctx->pc = 0x226304u;
    {
        const bool branch_taken_0x226304 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x226308u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x226304) {
            ctx->pc = 0x226318u;
            goto label_226318;
        }
    }
    ctx->pc = 0x22630Cu;
    // 0x22630c: 0x1642000c
    ctx->pc = 0x22630Cu;
    {
        const bool branch_taken_0x22630c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x226310u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x22630c) {
            ctx->pc = 0x226340u;
            goto label_226340;
        }
    }
    ctx->pc = 0x226314u;
    // 0x226314: 0x0
    ctx->pc = 0x226314u;
    // NOP
label_226318:
    // 0x226318: 0x4480a000
    ctx->pc = 0x226318u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x22631c: 0x12000005
    ctx->pc = 0x22631Cu;
    {
        const bool branch_taken_0x22631c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x226320u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x22631c) {
            ctx->pc = 0x226334u;
            goto label_226334;
        }
    }
    ctx->pc = 0x226324u;
    // 0x226324: 0x2631ffff
    ctx->pc = 0x226324u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x226328: 0x100000bf
    ctx->pc = 0x226328u;
    {
        const bool branch_taken_0x226328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22632Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x226328) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x226330u;
    // 0x226330: 0x70008628
    ctx->pc = 0x226330u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_226334:
    // 0x226334: 0x100000bd
    ctx->pc = 0x226334u;
    {
        const bool branch_taken_0x226334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226338u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x226334) {
            ctx->pc = 0x22662Cu;
            goto label_22662c;
        }
    }
    ctx->pc = 0x22633Cu;
    // 0x22633c: 0x2402fffd
    ctx->pc = 0x22633cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
label_226340:
    // 0x226340: 0x16420004
    ctx->pc = 0x226340u;
    {
        const bool branch_taken_0x226340 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x226344u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x226340) {
            ctx->pc = 0x226354u;
            goto label_226354;
        }
    }
    ctx->pc = 0x226348u;
    // 0x226348: 0x100000b7
    ctx->pc = 0x226348u;
    {
        const bool branch_taken_0x226348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22634Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x226348) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x226350u;
    // 0x226350: 0x2402fffc
    ctx->pc = 0x226350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_226354:
    // 0x226354: 0x16420005
    ctx->pc = 0x226354u;
    {
        const bool branch_taken_0x226354 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x226358u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x226354) {
            ctx->pc = 0x22636Cu;
            goto label_22636c;
        }
    }
    ctx->pc = 0x22635Cu;
    // 0x22635c: 0x24020001
    ctx->pc = 0x22635cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226360: 0x100000b1
    ctx->pc = 0x226360u;
    {
        const bool branch_taken_0x226360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226364u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        if (branch_taken_0x226360) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x226368u;
    // 0x226368: 0x2402fffa
    ctx->pc = 0x226368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
label_22636c:
    // 0x22636c: 0x16420005
    ctx->pc = 0x22636Cu;
    {
        const bool branch_taken_0x22636c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x226370u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967289));
        if (branch_taken_0x22636c) {
            ctx->pc = 0x226384u;
            goto label_226384;
        }
    }
    ctx->pc = 0x226374u;
    // 0x226374: 0x24020001
    ctx->pc = 0x226374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226378: 0x100000ab
    ctx->pc = 0x226378u;
    {
        const bool branch_taken_0x226378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22637Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        if (branch_taken_0x226378) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x226380u;
    // 0x226380: 0x2402fff9
    ctx->pc = 0x226380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967289));
label_226384:
    // 0x226384: 0x16420005
    ctx->pc = 0x226384u;
    {
        const bool branch_taken_0x226384 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x226388u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967288));
        if (branch_taken_0x226384) {
            ctx->pc = 0x22639Cu;
            goto label_22639c;
        }
    }
    ctx->pc = 0x22638Cu;
    // 0x22638c: 0x24020001
    ctx->pc = 0x22638cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226390: 0x100000a5
    ctx->pc = 0x226390u;
    {
        const bool branch_taken_0x226390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226394u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        if (branch_taken_0x226390) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x226398u;
    // 0x226398: 0x2402fff8
    ctx->pc = 0x226398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967288));
label_22639c:
    // 0x22639c: 0x16420004
    ctx->pc = 0x22639Cu;
    {
        const bool branch_taken_0x22639c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2263A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x22639c) {
            ctx->pc = 0x2263B0u;
            goto label_2263b0;
        }
    }
    ctx->pc = 0x2263A4u;
    // 0x2263a4: 0x100000a0
    ctx->pc = 0x2263A4u;
    {
        const bool branch_taken_0x2263a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2263A8u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2263a4) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x2263ACu;
    // 0x2263ac: 0x2402fffb
    ctx->pc = 0x2263acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
label_2263b0:
    // 0x2263b0: 0x16420007
    ctx->pc = 0x2263B0u;
    {
        const bool branch_taken_0x2263b0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2263B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 153));
        if (branch_taken_0x2263b0) {
            ctx->pc = 0x2263D0u;
            goto label_2263d0;
        }
    }
    ctx->pc = 0x2263B8u;
    // 0x2263b8: 0xafa000b0
    ctx->pc = 0x2263b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2263bc: 0xafa000c0
    ctx->pc = 0x2263bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2263c0: 0xafa000d0
    ctx->pc = 0x2263c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x2263c4: 0x10000098
    ctx->pc = 0x2263C4u;
    {
        const bool branch_taken_0x2263c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2263C8u;
        SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2263c4) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x2263CCu;
    // 0x2263cc: 0x24020099
    ctx->pc = 0x2263ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 153));
label_2263d0:
    // 0x2263d0: 0x12420005
    ctx->pc = 0x2263D0u;
    {
        const bool branch_taken_0x2263d0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x2263D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 162));
        if (branch_taken_0x2263d0) {
            ctx->pc = 0x2263E8u;
            goto label_2263e8;
        }
    }
    ctx->pc = 0x2263D8u;
    // 0x2263d8: 0x12420003
    ctx->pc = 0x2263D8u;
    {
        const bool branch_taken_0x2263d8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x2263DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 185));
        if (branch_taken_0x2263d8) {
            ctx->pc = 0x2263E8u;
            goto label_2263e8;
        }
    }
    ctx->pc = 0x2263E0u;
    // 0x2263e0: 0x16420005
    ctx->pc = 0x2263E0u;
    {
        const bool branch_taken_0x2263e0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x2263e0) {
            ctx->pc = 0x2263F8u;
            goto label_2263f8;
        }
    }
    ctx->pc = 0x2263E8u;
label_2263e8:
    // 0x2263e8: 0x16000003
    ctx->pc = 0x2263E8u;
    {
        const bool branch_taken_0x2263e8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2263e8) {
            ctx->pc = 0x2263F8u;
            goto label_2263f8;
        }
    }
    ctx->pc = 0x2263F0u;
    // 0x2263f0: 0x26310001
    ctx->pc = 0x2263f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2263f4: 0x72e08628
    ctx->pc = 0x2263f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_2263f8:
    // 0x2263f8: 0x3c010050
    ctx->pc = 0x2263f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2263fc: 0x8022fec5
    ctx->pc = 0x2263fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x226400: 0x1040000f
    ctx->pc = 0x226400u;
    {
        const bool branch_taken_0x226400 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x226404u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 24));
        if (branch_taken_0x226400) {
            ctx->pc = 0x226440u;
            goto label_226440;
        }
    }
    ctx->pc = 0x226408u;
    // 0x226408: 0x31e3f
    ctx->pc = 0x226408u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x22640c: 0x24020001
    ctx->pc = 0x22640cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226410: 0x14620006
    ctx->pc = 0x226410u;
    {
        const bool branch_taken_0x226410 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x226414u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x226410) {
            ctx->pc = 0x22642Cu;
            goto label_22642c;
        }
    }
    ctx->pc = 0x226418u;
    // 0x226418: 0xc7808ea0
    ctx->pc = 0x226418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22641c: 0x7000b628
    ctx->pc = 0x22641cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226420: 0x4600a500
    ctx->pc = 0x226420u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x226424: 0x0
    ctx->pc = 0x226424u;
    // NOP
    // 0x226428: 0x24020026
    ctx->pc = 0x226428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
label_22642c:
    // 0x22642c: 0x16420004
    ctx->pc = 0x22642Cu;
    {
        const bool branch_taken_0x22642c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x22642c) {
            ctx->pc = 0x226440u;
            goto label_226440;
        }
    }
    ctx->pc = 0x226434u;
    // 0x226434: 0xc7808ea0
    ctx->pc = 0x226434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226438: 0x24160001
    ctx->pc = 0x226438u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22643c: 0x4600a500
    ctx->pc = 0x22643cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_226440:
    // 0x226440: 0x4bede37d
    ctx->pc = 0x226440u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x226444: 0x4bedeb7d
    ctx->pc = 0x226444u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x226448: 0x4bedf37d
    ctx->pc = 0x226448u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x22644c: 0xc06c20d
    ctx->pc = 0x22644Cu;
    SET_GPR_U32(ctx, 31, 0x226454u);
    ctx->pc = 0x226450u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226454u; }
        else if (ctx->pc != 0x226454u) { ctx->pc = 0x226454u; }
    }
    if (ctx->pc != 0x226454u) { return; }
    ctx->pc = 0x226454u;
    // 0x226454: 0xc68d0004
    ctx->pc = 0x226454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x226458: 0xc68e0008
    ctx->pc = 0x226458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x22645c: 0xc06c202
    ctx->pc = 0x22645Cu;
    SET_GPR_U32(ctx, 31, 0x226464u);
    ctx->pc = 0x226460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226464u; }
        else if (ctx->pc != 0x226464u) { ctx->pc = 0x226464u; }
    }
    if (ctx->pc != 0x226464u) { return; }
    ctx->pc = 0x226464u;
    // 0x226464: 0x3c010050
    ctx->pc = 0x226464u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x226468: 0x8023fec5
    ctx->pc = 0x226468u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x22646c: 0x310c0
    ctx->pc = 0x22646cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x226470: 0x431021
    ctx->pc = 0x226470u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226474: 0x21080
    ctx->pc = 0x226474u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x226478: 0x2a21021
    ctx->pc = 0x226478u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x22647c: 0xc44d001c
    ctx->pc = 0x22647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x226480: 0xc44e0020
    ctx->pc = 0x226480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x226484: 0xc06c1b3
    ctx->pc = 0x226484u;
    SET_GPR_U32(ctx, 31, 0x22648Cu);
    ctx->pc = 0x226488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22648Cu; }
        else if (ctx->pc != 0x22648Cu) { ctx->pc = 0x22648Cu; }
    }
    if (ctx->pc != 0x22648Cu) { return; }
    ctx->pc = 0x22648Cu;
    // 0x22648c: 0x3c010050
    ctx->pc = 0x22648cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x226490: 0x8023fec5
    ctx->pc = 0x226490u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x226494: 0x310c0
    ctx->pc = 0x226494u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x226498: 0x431021
    ctx->pc = 0x226498u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22649c: 0x21080
    ctx->pc = 0x22649cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2264a0: 0x2a21021
    ctx->pc = 0x2264a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2264a4: 0xc06b218
    ctx->pc = 0x2264A4u;
    SET_GPR_U32(ctx, 31, 0x2264ACu);
    ctx->pc = 0x2264A8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264ACu; }
        else if (ctx->pc != 0x2264ACu) { ctx->pc = 0x2264ACu; }
    }
    if (ctx->pc != 0x2264ACu) { return; }
    ctx->pc = 0x2264ACu;
    // 0x2264ac: 0x4bede37d
    ctx->pc = 0x2264acu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2264b0: 0x4bedeb7d
    ctx->pc = 0x2264b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2264b4: 0x4bedf37d
    ctx->pc = 0x2264b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x2264b8: 0x4bedfb7d
    ctx->pc = 0x2264b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x2264bc: 0x3c010050
    ctx->pc = 0x2264bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2264c0: 0x44900800
    ctx->pc = 0x2264c0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 16);
    // 0x2264c4: 0x3c023f80
    ctx->pc = 0x2264c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2264c8: 0x44910000
    ctx->pc = 0x2264c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x2264cc: 0x8023fec5
    ctx->pc = 0x2264ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x2264d0: 0x44822000
    ctx->pc = 0x2264d0u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x2264d4: 0x468008a0
    ctx->pc = 0x2264d4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2264d8: 0x310c0
    ctx->pc = 0x2264d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x2264dc: 0x431021
    ctx->pc = 0x2264dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2264e0: 0x21080
    ctx->pc = 0x2264e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2264e4: 0x2a21021
    ctx->pc = 0x2264e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2264e8: 0xc4410004
    ctx->pc = 0x2264e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2264ec: 0xc4430000
    ctx->pc = 0x2264ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2264f0: 0x46800020
    ctx->pc = 0x2264f0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2264f4: 0x46012040
    ctx->pc = 0x2264f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2264f8: 0x46010342
    ctx->pc = 0x2264f8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2264fc: 0x460320c0
    ctx->pc = 0x2264fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x226500: 0x4603a000
    ctx->pc = 0x226500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x226504: 0x44807000
    ctx->pc = 0x226504u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x226508: 0xc06c202
    ctx->pc = 0x226508u;
    SET_GPR_U32(ctx, 31, 0x226510u);
    ctx->pc = 0x22650Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226510u; }
        else if (ctx->pc != 0x226510u) { ctx->pc = 0x226510u; }
    }
    if (ctx->pc != 0x226510u) { return; }
    ctx->pc = 0x226510u;
    // 0x226510: 0x8fa200b0
    ctx->pc = 0x226510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226514: 0x10400008
    ctx->pc = 0x226514u;
    {
        const bool branch_taken_0x226514 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x226518u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
        if (branch_taken_0x226514) {
            ctx->pc = 0x226538u;
            goto label_226538;
        }
    }
    ctx->pc = 0x22651Cu;
    // 0x22651c: 0x44826800
    ctx->pc = 0x22651cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x226520: 0x3c023f80
    ctx->pc = 0x226520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x226524: 0x44826000
    ctx->pc = 0x226524u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x226528: 0xc06aa80
    ctx->pc = 0x226528u;
    SET_GPR_U32(ctx, 31, 0x226530u);
    ctx->pc = 0x22652Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226530u; }
        else if (ctx->pc != 0x226530u) { ctx->pc = 0x226530u; }
    }
    if (ctx->pc != 0x226530u) { return; }
    ctx->pc = 0x226530u;
    // 0x226530: 0x10000024
    ctx->pc = 0x226530u;
    {
        const bool branch_taken_0x226530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226534u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x226530) {
            ctx->pc = 0x2265C4u;
            goto label_2265c4;
        }
    }
    ctx->pc = 0x226538u;
label_226538:
    // 0x226538: 0x8fa200c0
    ctx->pc = 0x226538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22653c: 0x10400008
    ctx->pc = 0x22653Cu;
    {
        const bool branch_taken_0x22653c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22653c) {
            ctx->pc = 0x226560u;
            goto label_226560;
        }
    }
    ctx->pc = 0x226544u;
    // 0x226544: 0x44806000
    ctx->pc = 0x226544u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x226548: 0x3c023f80
    ctx->pc = 0x226548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x22654c: 0x44827000
    ctx->pc = 0x22654cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x226550: 0xc06aa80
    ctx->pc = 0x226550u;
    SET_GPR_U32(ctx, 31, 0x226558u);
    ctx->pc = 0x226554u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226558u; }
        else if (ctx->pc != 0x226558u) { ctx->pc = 0x226558u; }
    }
    if (ctx->pc != 0x226558u) { return; }
    ctx->pc = 0x226558u;
    // 0x226558: 0x10000019
    ctx->pc = 0x226558u;
    {
        const bool branch_taken_0x226558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x226558) {
            ctx->pc = 0x2265C0u;
            goto label_2265c0;
        }
    }
    ctx->pc = 0x226560u;
label_226560:
    // 0x226560: 0x8fa200d0
    ctx->pc = 0x226560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x226564: 0x10400008
    ctx->pc = 0x226564u;
    {
        const bool branch_taken_0x226564 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x226564) {
            ctx->pc = 0x226588u;
            goto label_226588;
        }
    }
    ctx->pc = 0x22656Cu;
    // 0x22656c: 0x44806800
    ctx->pc = 0x22656cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x226570: 0x3c023f80
    ctx->pc = 0x226570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x226574: 0x44826000
    ctx->pc = 0x226574u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x226578: 0xc06aa80
    ctx->pc = 0x226578u;
    SET_GPR_U32(ctx, 31, 0x226580u);
    ctx->pc = 0x22657Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226580u; }
        else if (ctx->pc != 0x226580u) { ctx->pc = 0x226580u; }
    }
    if (ctx->pc != 0x226580u) { return; }
    ctx->pc = 0x226580u;
    // 0x226580: 0x1000000f
    ctx->pc = 0x226580u;
    {
        const bool branch_taken_0x226580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x226580) {
            ctx->pc = 0x2265C0u;
            goto label_2265c0;
        }
    }
    ctx->pc = 0x226588u;
label_226588:
    // 0x226588: 0x13c00008
    ctx->pc = 0x226588u;
    {
        const bool branch_taken_0x226588 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        if (branch_taken_0x226588) {
            ctx->pc = 0x2265ACu;
            goto label_2265ac;
        }
    }
    ctx->pc = 0x226590u;
    // 0x226590: 0x44806000
    ctx->pc = 0x226590u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x226594: 0x3c023f80
    ctx->pc = 0x226594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x226598: 0x44827000
    ctx->pc = 0x226598u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x22659c: 0xc06aa80
    ctx->pc = 0x22659Cu;
    SET_GPR_U32(ctx, 31, 0x2265A4u);
    ctx->pc = 0x2265A0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265A4u; }
        else if (ctx->pc != 0x2265A4u) { ctx->pc = 0x2265A4u; }
    }
    if (ctx->pc != 0x2265A4u) { return; }
    ctx->pc = 0x2265A4u;
    // 0x2265a4: 0x10000006
    ctx->pc = 0x2265A4u;
    {
        const bool branch_taken_0x2265a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2265a4) {
            ctx->pc = 0x2265C0u;
            goto label_2265c0;
        }
    }
    ctx->pc = 0x2265ACu;
label_2265ac:
    // 0x2265ac: 0x44806000
    ctx->pc = 0x2265acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2265b0: 0x0
    ctx->pc = 0x2265b0u;
    // NOP
    // 0x2265b4: 0x46006346
    ctx->pc = 0x2265b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2265b8: 0xc06aa80
    ctx->pc = 0x2265B8u;
    SET_GPR_U32(ctx, 31, 0x2265C0u);
    ctx->pc = 0x2265BCu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265C0u; }
        else if (ctx->pc != 0x2265C0u) { ctx->pc = 0x2265C0u; }
    }
    if (ctx->pc != 0x2265C0u) { return; }
    ctx->pc = 0x2265C0u;
label_2265c0:
    // 0x2265c0: 0x121080
    ctx->pc = 0x2265c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_2265c4:
    // 0x2265c4: 0x2821021
    ctx->pc = 0x2265c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2265c8: 0x8c440014
    ctx->pc = 0x2265c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2265cc: 0xc06a278
    ctx->pc = 0x2265CCu;
    SET_GPR_U32(ctx, 31, 0x2265D4u);
    ctx->pc = 0x2265D0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutTrnsl_0x1a89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265D4u; }
        else if (ctx->pc != 0x2265D4u) { ctx->pc = 0x2265D4u; }
    }
    if (ctx->pc != 0x2265D4u) { return; }
    ctx->pc = 0x2265D4u;
    // 0x2265d4: 0x3c023f80
    ctx->pc = 0x2265d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2265d8: 0x44826000
    ctx->pc = 0x2265d8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2265dc: 0x0
    ctx->pc = 0x2265dcu;
    // NOP
    // 0x2265e0: 0x46006346
    ctx->pc = 0x2265e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2265e4: 0xc06aa80
    ctx->pc = 0x2265E4u;
    SET_GPR_U32(ctx, 31, 0x2265ECu);
    ctx->pc = 0x2265E8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265ECu; }
        else if (ctx->pc != 0x2265ECu) { ctx->pc = 0x2265ECu; }
    }
    if (ctx->pc != 0x2265ECu) { return; }
    ctx->pc = 0x2265ECu;
    // 0x2265ec: 0x4bff6b7e
    ctx->pc = 0x2265ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2265f0: 0x4bfe6b7e
    ctx->pc = 0x2265f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2265f4: 0x4bfd6b7e
    ctx->pc = 0x2265f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2265f8: 0x4bfc6b7e
    ctx->pc = 0x2265f8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2265fc: 0x4bff6b7e
    ctx->pc = 0x2265fcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x226600: 0x4bfe6b7e
    ctx->pc = 0x226600u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x226604: 0x4bfd6b7e
    ctx->pc = 0x226604u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x226608: 0x4bfc6b7e
    ctx->pc = 0x226608u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22660c: 0x26100001
    ctx->pc = 0x22660cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x226610: 0x217102a
    ctx->pc = 0x226610u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 23)));
    // 0x226614: 0x14400004
    ctx->pc = 0x226614u;
    {
        const bool branch_taken_0x226614 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x226614) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x22661Cu;
    // 0x22661c: 0x4480a000
    ctx->pc = 0x22661cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x226620: 0x70008628
    ctx->pc = 0x226620u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226624: 0x2631ffff
    ctx->pc = 0x226624u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_226628:
    // 0x226628: 0x26730002
    ctx->pc = 0x226628u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 2));
label_22662c:
    // 0x22662c: 0x0
    ctx->pc = 0x22662cu;
    // NOP
label_226630:
    // 0x226630: 0x82620000
    ctx->pc = 0x226630u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x226634: 0x10400006
    ctx->pc = 0x226634u;
    {
        const bool branch_taken_0x226634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x226634) {
            ctx->pc = 0x226650u;
            goto label_226650;
        }
    }
    ctx->pc = 0x22663Cu;
    // 0x22663c: 0x8e82000c
    ctx->pc = 0x22663cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x226640: 0x2102a
    ctx->pc = 0x226640u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x226644: 0x1440ff2b
    ctx->pc = 0x226644u;
    {
        const bool branch_taken_0x226644 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x226648u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x226644) {
            ctx->pc = 0x2262F4u;
            goto label_2262f4;
        }
    }
    ctx->pc = 0x22664Cu;
    // 0x22664c: 0x0
    ctx->pc = 0x22664cu;
    // NOP
label_226650:
    // 0x226650: 0x3c020050
    ctx->pc = 0x226650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x226654: 0xc07ce18
    ctx->pc = 0x226654u;
    SET_GPR_U32(ctx, 31, 0x22665Cu);
    ctx->pc = 0x226658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22665Cu; }
        else if (ctx->pc != 0x22665Cu) { ctx->pc = 0x22665Cu; }
    }
    if (ctx->pc != 0x22665Cu) { return; }
    ctx->pc = 0x22665Cu;
    // 0x22665c: 0x28410005
    ctx->pc = 0x22665cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x226660: 0x10200006
    ctx->pc = 0x226660u;
    {
        const bool branch_taken_0x226660 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x226660) {
            ctx->pc = 0x22667Cu;
            goto label_22667c;
        }
    }
    ctx->pc = 0x226668u;
    // 0x226668: 0x8283101c
    ctx->pc = 0x226668u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4124)));
    // 0x22666c: 0x14600003
    ctx->pc = 0x22666Cu;
    {
        const bool branch_taken_0x22666c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x226670u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x22666c) {
            ctx->pc = 0x22667Cu;
            goto label_22667c;
        }
    }
    ctx->pc = 0x226674u;
    // 0x226674: 0xc089af0
    ctx->pc = 0x226674u;
    SET_GPR_U32(ctx, 31, 0x22667Cu);
    ctx->pc = 0x226BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MojiCount__11TrnMojiUchiFv_0x226bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22667Cu; }
        else if (ctx->pc != 0x22667Cu) { ctx->pc = 0x22667Cu; }
    }
    if (ctx->pc != 0x22667Cu) { return; }
    ctx->pc = 0x22667Cu;
label_22667c:
    // 0x22667c: 0x7bbf00a0
    ctx->pc = 0x22667cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226680: 0x7bbe0090
    ctx->pc = 0x226680u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226684: 0x7bb70080
    ctx->pc = 0x226684u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226688: 0x7bb60070
    ctx->pc = 0x226688u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22668c: 0x7bb50060
    ctx->pc = 0x22668cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226690: 0x7bb40050
    ctx->pc = 0x226690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226694: 0x7bb30040
    ctx->pc = 0x226694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226698: 0x7bb20030
    ctx->pc = 0x226698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22669c: 0x7bb10020
    ctx->pc = 0x22669cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2266a0: 0x7bb00010
    ctx->pc = 0x2266a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2266a4: 0xc7b50004
    ctx->pc = 0x2266a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2266a8: 0xc7b40000
    ctx->pc = 0x2266a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2266ac: 0x3e00008
    ctx->pc = 0x2266ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2262F4u: goto label_2262f4;
            case 0x226318u: goto label_226318;
            case 0x226334u: goto label_226334;
            case 0x226340u: goto label_226340;
            case 0x226354u: goto label_226354;
            case 0x22636Cu: goto label_22636c;
            case 0x226384u: goto label_226384;
            case 0x22639Cu: goto label_22639c;
            case 0x2263B0u: goto label_2263b0;
            case 0x2263D0u: goto label_2263d0;
            case 0x2263E8u: goto label_2263e8;
            case 0x2263F8u: goto label_2263f8;
            case 0x22642Cu: goto label_22642c;
            case 0x226440u: goto label_226440;
            case 0x226538u: goto label_226538;
            case 0x226560u: goto label_226560;
            case 0x226588u: goto label_226588;
            case 0x2265ACu: goto label_2265ac;
            case 0x2265C0u: goto label_2265c0;
            case 0x2265C4u: goto label_2265c4;
            case 0x226628u: goto label_226628;
            case 0x22662Cu: goto label_22662c;
            case 0x226630u: goto label_226630;
            case 0x226650u: goto label_226650;
            case 0x22667Cu: goto label_22667c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2266B4u;
}
