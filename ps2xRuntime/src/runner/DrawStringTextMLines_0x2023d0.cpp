#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DrawStringTextMLines
// Address: 0x2023d0 - 0x202604
void DrawStringTextMLines_0x2023d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2023d0u;

    // 0x2023d0: 0x27bdfeb0
    ctx->pc = 0x2023d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2023d4: 0xffbf00e0
    ctx->pc = 0x2023d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2023d8: 0xffbe00d0
    ctx->pc = 0x2023d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2023dc: 0xffb700c0
    ctx->pc = 0x2023dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2023e0: 0xffb600b0
    ctx->pc = 0x2023e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2023e4: 0xffb500a0
    ctx->pc = 0x2023e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x2023e8: 0xffb40090
    ctx->pc = 0x2023e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2023ec: 0xffb30080
    ctx->pc = 0x2023ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2023f0: 0xffb20070
    ctx->pc = 0x2023f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2023f4: 0xffb10060
    ctx->pc = 0x2023f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2023f8: 0xffb00050
    ctx->pc = 0x2023f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2023fc: 0xe7b500f8
    ctx->pc = 0x2023fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x202400: 0xe7b400f0
    ctx->pc = 0x202400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x202404: 0xafa40040
    ctx->pc = 0x202404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x202408: 0xa0882d
    ctx->pc = 0x202408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20240c: 0xc0982d
    ctx->pc = 0x20240cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202410: 0xe0b82d
    ctx->pc = 0x202410u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202414: 0xafa80044
    ctx->pc = 0x202414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
    // 0x202418: 0xffaa0140
    ctx->pc = 0x202418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 10));
    // 0x20241c: 0xffab0148
    ctx->pc = 0x20241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 11));
    // 0x202420: 0x120b02d
    ctx->pc = 0x202420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202424: 0x3c030031
    ctx->pc = 0x202424u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x202428: 0x24020014
    ctx->pc = 0x202428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x20242c: 0x2c21018
    ctx->pc = 0x20242cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202430: 0x8c63f6c0
    ctx->pc = 0x202430u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294964928)));
    // 0x202434: 0x43a021
    ctx->pc = 0x202434u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202438: 0x6610003
    ctx->pc = 0x202438u;
    {
        const bool branch_taken_0x202438 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x20243Cu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202438) {
            ctx->pc = 0x202448u;
            goto label_202448;
        }
    }
    ctx->pc = 0x202440u;
    // 0x202440: 0x3c020031
    ctx->pc = 0x202440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202444: 0x8c53f288
    ctx->pc = 0x202444u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294963848)));
label_202448:
    // 0x202448: 0x3c020031
    ctx->pc = 0x202448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20244c: 0xc681000c
    ctx->pc = 0x20244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202450: 0xc440f27c
    ctx->pc = 0x202450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202454: 0x46000d02
    ctx->pc = 0x202454u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202458: 0xc6950010
    ctx->pc = 0x202458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20245c: 0x3c030031
    ctx->pc = 0x20245cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x202460: 0x8e820008
    ctx->pc = 0x202460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x202464: 0x8c64f6b4
    ctx->pc = 0x202464u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294964916)));
    // 0x202468: 0x24030014
    ctx->pc = 0x202468u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x20246c: 0x431018
    ctx->pc = 0x20246cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202470: 0x441021
    ctx->pc = 0x202470u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202474: 0x6e00006
    ctx->pc = 0x202474u;
    {
        const bool branch_taken_0x202474 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x202478u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        if (branch_taken_0x202474) {
            ctx->pc = 0x202490u;
            goto label_202490;
        }
    }
    ctx->pc = 0x20247Cu;
    // 0x20247c: 0x2ae2000a
    ctx->pc = 0x20247cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 10));
    // 0x202480: 0x10400004
    ctx->pc = 0x202480u;
    {
        const bool branch_taken_0x202480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202484u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 10));
        if (branch_taken_0x202480) {
            ctx->pc = 0x202494u;
            goto label_202494;
        }
    }
    ctx->pc = 0x202488u;
    // 0x202488: 0x14400003
    ctx->pc = 0x202488u;
    {
        const bool branch_taken_0x202488 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20248Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202488) {
            ctx->pc = 0x202498u;
            goto label_202498;
        }
    }
    ctx->pc = 0x202490u;
label_202490:
    // 0x202490: 0x60b82d
    ctx->pc = 0x202490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_202494:
    // 0x202494: 0x2e0202d
    ctx->pc = 0x202494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_202498:
    // 0x202498: 0xc080570
    ctx->pc = 0x202498u;
    SET_GPR_U32(ctx, 31, 0x2024A0u);
    ctx->pc = 0x20249Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2024A0u; }
    }
    if (ctx->pc != 0x2024A0u) { return; }
    ctx->pc = 0x2024A0u;
    // 0x2024a0: 0x40182d
    ctx->pc = 0x2024a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024a4: 0x32221000
    ctx->pc = 0x2024a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 4096));
    // 0x2024a8: 0x1040000b
    ctx->pc = 0x2024A8u;
    {
        const bool branch_taken_0x2024a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2024ACu;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        if (branch_taken_0x2024a8) {
            ctx->pc = 0x2024D8u;
            goto label_2024d8;
        }
    }
    ctx->pc = 0x2024B0u;
    // 0x2024b0: 0x2402efff
    ctx->pc = 0x2024b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2024b4: 0x2228824
    ctx->pc = 0x2024b4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2024b8: 0x8e820000
    ctx->pc = 0x2024b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2024bc: 0x2442ffff
    ctx->pc = 0x2024bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2024c0: 0x2622018
    ctx->pc = 0x2024c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2024c4: 0x831021
    ctx->pc = 0x2024c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2024c8: 0x21fc2
    ctx->pc = 0x2024c8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x2024cc: 0x431021
    ctx->pc = 0x2024ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2024d0: 0x21043
    ctx->pc = 0x2024d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2024d4: 0x2228823
    ctx->pc = 0x2024d4u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2024d8:
    // 0x2024d8: 0x3c020031
    ctx->pc = 0x2024d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2024dc: 0xa040f778
    ctx->pc = 0x2024dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294965112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2024e0: 0x802d
    ctx->pc = 0x2024e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024e4: 0x2452f778
    ctx->pc = 0x2024e4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294965112));
    // 0x2024e8: 0x10000007
    ctx->pc = 0x2024E8u;
    {
        const bool branch_taken_0x2024e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2024ECu;
        SET_GPR_U32(ctx, 30, ((uint32_t)58 << 16));
        if (branch_taken_0x2024e8) {
            ctx->pc = 0x202508u;
            goto label_202508;
        }
    }
    ctx->pc = 0x2024F0u;
label_2024f0:
    // 0x2024f0: 0xc0bf1c1
    ctx->pc = 0x2024F0u;
    SET_GPR_U32(ctx, 31, 0x2024F8u);
    ctx->pc = 0x2024F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2024F8u; }
    }
    if (ctx->pc != 0x2024F8u) { return; }
    ctx->pc = 0x2024F8u;
    // 0x2024f8: 0x240202d
    ctx->pc = 0x2024f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024fc: 0xc0bf1c1
    ctx->pc = 0x2024FCu;
    SET_GPR_U32(ctx, 31, 0x202504u);
    ctx->pc = 0x202500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 18576));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202504u; }
    }
    if (ctx->pc != 0x202504u) { return; }
    ctx->pc = 0x202504u;
    // 0x202504: 0x26100001
    ctx->pc = 0x202504u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_202508:
    // 0x202508: 0x8e820000
    ctx->pc = 0x202508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20250c: 0x202102a
    ctx->pc = 0x20250cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x202510: 0x1040000f
    ctx->pc = 0x202510u;
    {
        const bool branch_taken_0x202510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202514u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x202510) {
            ctx->pc = 0x202550u;
            goto label_202550;
        }
    }
    ctx->pc = 0x202518u;
    // 0x202518: 0x1202000d
    ctx->pc = 0x202518u;
    {
        const bool branch_taken_0x202518 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x20251Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202518) {
            ctx->pc = 0x202550u;
            goto label_202550;
        }
    }
    ctx->pc = 0x202520u;
    // 0x202520: 0x26b50001
    ctx->pc = 0x202520u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x202524: 0x2c0202d
    ctx->pc = 0x202524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202528: 0xc08065e
    ctx->pc = 0x202528u;
    SET_GPR_U32(ctx, 31, 0x202530u);
    ctx->pc = 0x20252Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201978u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringText_0x201978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202530u; }
    }
    if (ctx->pc != 0x202530u) { return; }
    ctx->pc = 0x202530u;
    // 0x202530: 0x1440ffef
    ctx->pc = 0x202530u;
    {
        const bool branch_taken_0x202530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x202534u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202530) {
            ctx->pc = 0x2024F0u;
            goto label_2024f0;
        }
    }
    ctx->pc = 0x202538u;
    // 0x202538: 0x16000005
    ctx->pc = 0x202538u;
    {
        const bool branch_taken_0x202538 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x20253Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x202538) {
            ctx->pc = 0x202550u;
            goto label_202550;
        }
    }
    ctx->pc = 0x202540u;
    // 0x202540: 0x24444860
    ctx->pc = 0x202540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 18528));
    // 0x202544: 0x2c0282d
    ctx->pc = 0x202544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202548: 0xc0b492e
    ctx->pc = 0x202548u;
    SET_GPR_U32(ctx, 31, 0x202550u);
    ctx->pc = 0x20254Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202550u; }
    }
    if (ctx->pc != 0x202550u) { return; }
    ctx->pc = 0x202550u;
label_202550:
    // 0x202550: 0x200902d
    ctx->pc = 0x202550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202554: 0x3c100031
    ctx->pc = 0x202554u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x202558: 0x2604fb78
    ctx->pc = 0x202558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294966136));
    // 0x20255c: 0x3c050031
    ctx->pc = 0x20255cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x202560: 0x24a5f778
    ctx->pc = 0x202560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965112));
    // 0x202564: 0xc0b5d5e
    ctx->pc = 0x202564u;
    SET_GPR_U32(ctx, 31, 0x20256Cu);
    ctx->pc = 0x202568u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 320));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20256Cu; }
    }
    if (ctx->pc != 0x20256Cu) { return; }
    ctx->pc = 0x20256Cu;
    // 0x20256c: 0x2604fb78
    ctx->pc = 0x20256cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294966136));
    // 0x202570: 0x3c050031
    ctx->pc = 0x202570u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x202574: 0x24a5f2a8
    ctx->pc = 0x202574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963880));
    // 0x202578: 0xc0803e0
    ctx->pc = 0x202578u;
    SET_GPR_U32(ctx, 31, 0x202580u);
    ctx->pc = 0x20257Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixMLineText_0x200f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202580u; }
    }
    if (ctx->pc != 0x202580u) { return; }
    ctx->pc = 0x202580u;
    // 0x202580: 0x1a40000f
    ctx->pc = 0x202580u;
    {
        const bool branch_taken_0x202580 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x202584u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202580) {
            ctx->pc = 0x2025C0u;
            goto label_2025c0;
        }
    }
    ctx->pc = 0x202588u;
label_202588:
    // 0x202588: 0x101080
    ctx->pc = 0x202588u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x20258c: 0x3a21021
    ctx->pc = 0x20258cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x202590: 0x8fa40040
    ctx->pc = 0x202590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202594: 0x220282d
    ctx->pc = 0x202594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202598: 0x2e0302d
    ctx->pc = 0x202598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20259c: 0x8fa70044
    ctx->pc = 0x20259cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2025a0: 0x4600a306
    ctx->pc = 0x2025a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2025a4: 0x4600ab46
    ctx->pc = 0x2025a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2025a8: 0xc08041c
    ctx->pc = 0x2025A8u;
    SET_GPR_U32(ctx, 31, 0x2025B0u);
    ctx->pc = 0x2025ACu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x201070u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextSub_0x201070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2025B0u; }
    }
    if (ctx->pc != 0x2025B0u) { return; }
    ctx->pc = 0x2025B0u;
    // 0x2025b0: 0x26100001
    ctx->pc = 0x2025b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2025b4: 0x212102a
    ctx->pc = 0x2025b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x2025b8: 0x1440fff3
    ctx->pc = 0x2025B8u;
    {
        const bool branch_taken_0x2025b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2025BCu;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        if (branch_taken_0x2025b8) {
            ctx->pc = 0x202588u;
            goto label_202588;
        }
    }
    ctx->pc = 0x2025C0u;
label_2025c0:
    // 0x2025c0: 0x3c020031
    ctx->pc = 0x2025c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2025c4: 0xac51f284
    ctx->pc = 0x2025c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963844), GPR_U32(ctx, 17));
    // 0x2025c8: 0x220102d
    ctx->pc = 0x2025c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025cc: 0xdfbf00e0
    ctx->pc = 0x2025ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2025d0: 0xdfbe00d0
    ctx->pc = 0x2025d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2025d4: 0xdfb700c0
    ctx->pc = 0x2025d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2025d8: 0xdfb600b0
    ctx->pc = 0x2025d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2025dc: 0xdfb500a0
    ctx->pc = 0x2025dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2025e0: 0xdfb40090
    ctx->pc = 0x2025e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2025e4: 0xdfb30080
    ctx->pc = 0x2025e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2025e8: 0xdfb20070
    ctx->pc = 0x2025e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2025ec: 0xdfb10060
    ctx->pc = 0x2025ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2025f0: 0xdfb00050
    ctx->pc = 0x2025f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2025f4: 0xc7b500f8
    ctx->pc = 0x2025f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2025f8: 0xc7b400f0
    ctx->pc = 0x2025f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2025fc: 0x3e00008
    ctx->pc = 0x2025FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202600u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202448u: goto label_202448;
            case 0x202490u: goto label_202490;
            case 0x202494u: goto label_202494;
            case 0x202498u: goto label_202498;
            case 0x2024D8u: goto label_2024d8;
            case 0x2024F0u: goto label_2024f0;
            case 0x202508u: goto label_202508;
            case 0x202550u: goto label_202550;
            case 0x202588u: goto label_202588;
            case 0x2025C0u: goto label_2025c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202604u;
}
