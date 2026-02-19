#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnterTower
// Address: 0x275748 - 0x275ce0
void EnterTower_0x275748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x275748u;

    // 0x275748: 0x27bdff30
    ctx->pc = 0x275748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x27574c: 0xffbf00c0
    ctx->pc = 0x27574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x275750: 0xffb700b0
    ctx->pc = 0x275750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x275754: 0xffb600a0
    ctx->pc = 0x275754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x275758: 0xffb50090
    ctx->pc = 0x275758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x27575c: 0xffb40080
    ctx->pc = 0x27575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x275760: 0xffb30070
    ctx->pc = 0x275760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x275764: 0xffb20060
    ctx->pc = 0x275764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x275768: 0xffb10050
    ctx->pc = 0x275768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x27576c: 0xffb00040
    ctx->pc = 0x27576cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x275770: 0x3c030034
    ctx->pc = 0x275770u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x275774: 0x8c62fa8c
    ctx->pc = 0x275774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965900)));
    // 0x275778: 0x24420001
    ctx->pc = 0x275778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27577c: 0xac62fa8c
    ctx->pc = 0x27577cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965900), GPR_U32(ctx, 2));
    // 0x275780: 0x3c020034
    ctx->pc = 0x275780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x275784: 0xac40fbb0
    ctx->pc = 0x275784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966192), GPR_U32(ctx, 0));
    // 0x275788: 0x3c020034
    ctx->pc = 0x275788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27578c: 0x8c42fa88
    ctx->pc = 0x27578cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965896)));
    // 0x275790: 0x4410004
    ctx->pc = 0x275790u;
    {
        const bool branch_taken_0x275790 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x275790) {
            ctx->pc = 0x2757A4u;
            goto label_2757a4;
        }
    }
    ctx->pc = 0x275798u;
    // 0x275798: 0x3c020034
    ctx->pc = 0x275798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27579c: 0xc09d592
    ctx->pc = 0x27579Cu;
    SET_GPR_U32(ctx, 31, 0x2757A4u);
    ctx->pc = 0x2757A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
    ctx->pc = 0x275648u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldOrder_0x275648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757A4u; }
    }
    if (ctx->pc != 0x2757A4u) { return; }
    ctx->pc = 0x2757A4u;
label_2757a4:
    // 0x2757a4: 0xc094228
    ctx->pc = 0x2757A4u;
    SET_GPR_U32(ctx, 31, 0x2757ACu);
    ctx->pc = 0x2757A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2508A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPlayerStartPos_0x2508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757ACu; }
    }
    if (ctx->pc != 0x2757ACu) { return; }
    ctx->pc = 0x2757ACu;
    // 0x2757ac: 0x3c030034
    ctx->pc = 0x2757acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2757b0: 0x2402ffff
    ctx->pc = 0x2757b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2757b4: 0xac62fa88
    ctx->pc = 0x2757b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965896), GPR_U32(ctx, 2));
    // 0x2757b8: 0x3c03003c
    ctx->pc = 0x2757b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2757bc: 0x3c020031
    ctx->pc = 0x2757bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2757c0: 0xc440ffa4
    ctx->pc = 0x2757c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2757c4: 0x3c013f80
    ctx->pc = 0x2757c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2757c8: 0x44810800
    ctx->pc = 0x2757c8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2757cc: 0x46010000
    ctx->pc = 0x2757ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2757d0: 0xe4603a00
    ctx->pc = 0x2757d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14848), bits); }
    // 0x2757d4: 0x882d
    ctx->pc = 0x2757d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757d8: 0x3c02003c
    ctx->pc = 0x2757d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2757dc: 0x24433a08
    ctx->pc = 0x2757dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 14856));
label_2757e0:
    // 0x2757e0: 0x111080
    ctx->pc = 0x2757e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2757e4: 0x431021
    ctx->pc = 0x2757e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2757e8: 0xac400000
    ctx->pc = 0x2757e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2757ec: 0x26310001
    ctx->pc = 0x2757ecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2757f0: 0x2a220009
    ctx->pc = 0x2757f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
    // 0x2757f4: 0x1440fffa
    ctx->pc = 0x2757F4u;
    {
        const bool branch_taken_0x2757f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2757f4) {
            ctx->pc = 0x2757E0u;
            goto label_2757e0;
        }
    }
    ctx->pc = 0x2757FCu;
    // 0x2757fc: 0x882d
    ctx->pc = 0x2757fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275800: 0x3c02003c
    ctx->pc = 0x275800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x275804: 0x24433a30
    ctx->pc = 0x275804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 14896));
label_275808:
    // 0x275808: 0x111080
    ctx->pc = 0x275808u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x27580c: 0x431021
    ctx->pc = 0x27580cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275810: 0xac400000
    ctx->pc = 0x275810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x275814: 0x26310001
    ctx->pc = 0x275814u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x275818: 0x2a220003
    ctx->pc = 0x275818u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x27581c: 0x1440fffa
    ctx->pc = 0x27581Cu;
    {
        const bool branch_taken_0x27581c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27581c) {
            ctx->pc = 0x275808u;
            goto label_275808;
        }
    }
    ctx->pc = 0x275824u;
    // 0x275824: 0x882d
    ctx->pc = 0x275824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275828: 0x3c130031
    ctx->pc = 0x275828u;
    SET_GPR_U32(ctx, 19, ((uint32_t)49 << 16));
    // 0x27582c: 0x24120002
    ctx->pc = 0x27582cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x275830: 0x802d
    ctx->pc = 0x275830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275834: 0x0
    ctx->pc = 0x275834u;
    // NOP
label_275838:
    // 0x275838: 0x2a020004
    ctx->pc = 0x275838u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x27583c: 0x10400014
    ctx->pc = 0x27583Cu;
    {
        const bool branch_taken_0x27583c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275840u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294963588)));
        if (branch_taken_0x27583c) {
            ctx->pc = 0x275890u;
            goto label_275890;
        }
    }
    ctx->pc = 0x275844u;
    // 0x275844: 0x14400005
    ctx->pc = 0x275844u;
    {
        const bool branch_taken_0x275844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275848u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275844) {
            ctx->pc = 0x27585Cu;
            goto label_27585c;
        }
    }
    ctx->pc = 0x27584Cu;
    // 0x27584c: 0xc09dc3e
    ctx->pc = 0x27584Cu;
    SET_GPR_U32(ctx, 31, 0x275854u);
    ctx->pc = 0x275850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2770F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasAllGargItems_0x2770f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275854u; }
    }
    if (ctx->pc != 0x275854u) { return; }
    ctx->pc = 0x275854u;
    // 0x275854: 0x5452fff8
    ctx->pc = 0x275854u;
    {
        const bool branch_taken_0x275854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x275854) {
            ctx->pc = 0x275858u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x275838u;
            goto label_275838;
        }
    }
    ctx->pc = 0x27585Cu;
label_27585c:
    // 0x27585c: 0x2a020004
    ctx->pc = 0x27585cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x275860: 0x1040000b
    ctx->pc = 0x275860u;
    {
        const bool branch_taken_0x275860 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275864u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 101));
        if (branch_taken_0x275860) {
            ctx->pc = 0x275890u;
            goto label_275890;
        }
    }
    ctx->pc = 0x275868u;
    // 0x275868: 0xc095cca
    ctx->pc = 0x275868u;
    SET_GPR_U32(ctx, 31, 0x275870u);
    ctx->pc = 0x27586Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x257328u;
    {
        const uint32_t __entryPc = ctx->pc;
        ActivateSpecialTrigger_0x257328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275870u; }
    }
    if (ctx->pc != 0x275870u) { return; }
    ctx->pc = 0x275870u;
    // 0x275870: 0x56320008
    ctx->pc = 0x275870u;
    {
        const bool branch_taken_0x275870 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 18));
        if (branch_taken_0x275870) {
            ctx->pc = 0x275874u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x275894u;
            goto label_275894;
        }
    }
    ctx->pc = 0x275878u;
    // 0x275878: 0x24040068
    ctx->pc = 0x275878u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 104));
    // 0x27587c: 0xc095cca
    ctx->pc = 0x27587Cu;
    SET_GPR_U32(ctx, 31, 0x275884u);
    ctx->pc = 0x275880u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x257328u;
    {
        const uint32_t __entryPc = ctx->pc;
        ActivateSpecialTrigger_0x257328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275884u; }
    }
    if (ctx->pc != 0x275884u) { return; }
    ctx->pc = 0x275884u;
    // 0x275884: 0x240400c7
    ctx->pc = 0x275884u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 199));
    // 0x275888: 0xc095cca
    ctx->pc = 0x275888u;
    SET_GPR_U32(ctx, 31, 0x275890u);
    ctx->pc = 0x27588Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x257328u;
    {
        const uint32_t __entryPc = ctx->pc;
        ActivateSpecialTrigger_0x257328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275890u; }
    }
    if (ctx->pc != 0x275890u) { return; }
    ctx->pc = 0x275890u;
label_275890:
    // 0x275890: 0x26310001
    ctx->pc = 0x275890u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_275894:
    // 0x275894: 0x2a220003
    ctx->pc = 0x275894u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x275898: 0x1440ffe7
    ctx->pc = 0x275898u;
    {
        const bool branch_taken_0x275898 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27589Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275898) {
            ctx->pc = 0x275838u;
            goto label_275838;
        }
    }
    ctx->pc = 0x2758A0u;
    // 0x2758a0: 0x882d
    ctx->pc = 0x2758a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758a4: 0x3c020034
    ctx->pc = 0x2758a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2758a8: 0x2454fa90
    ctx->pc = 0x2758a8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x2758ac: 0x111080
    ctx->pc = 0x2758acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_2758b0:
    // 0x2758b0: 0x541021
    ctx->pc = 0x2758b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2758b4: 0x8c420000
    ctx->pc = 0x2758b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2758b8: 0x10400011
    ctx->pc = 0x2758B8u;
    {
        const bool branch_taken_0x2758b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2758BCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2758b8) {
            ctx->pc = 0x275900u;
            goto label_275900;
        }
    }
    ctx->pc = 0x2758C0u;
    // 0x2758c0: 0x3c130031
    ctx->pc = 0x2758c0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)49 << 16));
    // 0x2758c4: 0x24120002
    ctx->pc = 0x2758c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
label_2758c8:
    // 0x2758c8: 0x2a020004
    ctx->pc = 0x2758c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2758cc: 0x1040000c
    ctx->pc = 0x2758CCu;
    {
        const bool branch_taken_0x2758cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2758D0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294963588)));
        if (branch_taken_0x2758cc) {
            ctx->pc = 0x275900u;
            goto label_275900;
        }
    }
    ctx->pc = 0x2758D4u;
    // 0x2758d4: 0x14400005
    ctx->pc = 0x2758D4u;
    {
        const bool branch_taken_0x2758d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2758D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2758d4) {
            ctx->pc = 0x2758ECu;
            goto label_2758ec;
        }
    }
    ctx->pc = 0x2758DCu;
    // 0x2758dc: 0xc09db92
    ctx->pc = 0x2758DCu;
    SET_GPR_U32(ctx, 31, 0x2758E4u);
    ctx->pc = 0x2758E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x276E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasAllCrystals_0x276e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2758E4u; }
    }
    if (ctx->pc != 0x2758E4u) { return; }
    ctx->pc = 0x2758E4u;
    // 0x2758e4: 0x5452fff8
    ctx->pc = 0x2758E4u;
    {
        const bool branch_taken_0x2758e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x2758e4) {
            ctx->pc = 0x2758E8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2758C8u;
            goto label_2758c8;
        }
    }
    ctx->pc = 0x2758ECu;
label_2758ec:
    // 0x2758ec: 0x2a020004
    ctx->pc = 0x2758ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2758f0: 0x10400003
    ctx->pc = 0x2758F0u;
    {
        const bool branch_taken_0x2758f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2758F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2758f0) {
            ctx->pc = 0x275900u;
            goto label_275900;
        }
    }
    ctx->pc = 0x2758F8u;
    // 0x2758f8: 0xc095cca
    ctx->pc = 0x2758F8u;
    SET_GPR_U32(ctx, 31, 0x275900u);
    ctx->pc = 0x2758FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x257328u;
    {
        const uint32_t __entryPc = ctx->pc;
        ActivateSpecialTrigger_0x257328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275900u; }
    }
    if (ctx->pc != 0x275900u) { return; }
    ctx->pc = 0x275900u;
label_275900:
    // 0x275900: 0x26310001
    ctx->pc = 0x275900u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x275904: 0x2a220009
    ctx->pc = 0x275904u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
    // 0x275908: 0x1440ffe9
    ctx->pc = 0x275908u;
    {
        const bool branch_taken_0x275908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27590Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x275908) {
            ctx->pc = 0x2758B0u;
            goto label_2758b0;
        }
    }
    ctx->pc = 0x275910u;
    // 0x275910: 0x902d
    ctx->pc = 0x275910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275914: 0x802d
    ctx->pc = 0x275914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275918: 0x24052b00
    ctx->pc = 0x275918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x27591c: 0x3c020032
    ctx->pc = 0x27591cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x275920: 0x24471bc0
    ctx->pc = 0x275920u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x275924: 0x240400b4
    ctx->pc = 0x275924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 180));
    // 0x275928: 0x2051018
    ctx->pc = 0x275928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27592c: 0x0
    ctx->pc = 0x27592cu;
    // NOP
label_275930:
    // 0x275930: 0x471821
    ctx->pc = 0x275930u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x275934: 0x8c6200fc
    ctx->pc = 0x275934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x275938: 0x10400006
    ctx->pc = 0x275938u;
    {
        const bool branch_taken_0x275938 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27593Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x275938) {
            ctx->pc = 0x275954u;
            goto label_275954;
        }
    }
    ctx->pc = 0x275940u;
    // 0x275940: 0x8c62000c
    ctx->pc = 0x275940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x275944: 0x443018
    ctx->pc = 0x275944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x275948: 0xc31021
    ctx->pc = 0x275948u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x27594c: 0x94421d7c
    ctx->pc = 0x27594cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 7548)));
    // 0x275950: 0x529025
    ctx->pc = 0x275950u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_275954:
    // 0x275954: 0x2a020004
    ctx->pc = 0x275954u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x275958: 0x1440fff5
    ctx->pc = 0x275958u;
    {
        const bool branch_taken_0x275958 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27595Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x275958) {
            ctx->pc = 0x275930u;
            goto label_275930;
        }
    }
    ctx->pc = 0x275960u;
    // 0x275960: 0x12400040
    ctx->pc = 0x275960u;
    {
        const bool branch_taken_0x275960 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x275964u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 510));
        if (branch_taken_0x275960) {
            ctx->pc = 0x275A64u;
            goto label_275a64;
        }
    }
    ctx->pc = 0x275968u;
    // 0x275968: 0x3c04003b
    ctx->pc = 0x275968u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x27596c: 0xc0870d4
    ctx->pc = 0x27596Cu;
    SET_GPR_U32(ctx, 31, 0x275974u);
    ctx->pc = 0x275970u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944864));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275974u; }
    }
    if (ctx->pc != 0x275974u) { return; }
    ctx->pc = 0x275974u;
    // 0x275974: 0x40802d
    ctx->pc = 0x275974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275978: 0x12000036
    ctx->pc = 0x275978u;
    {
        const bool branch_taken_0x275978 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x27597Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275978) {
            ctx->pc = 0x275A54u;
            goto label_275a54;
        }
    }
    ctx->pc = 0x275980u;
    // 0x275980: 0x8e040028
    ctx->pc = 0x275980u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x275984: 0xc0b4302
    ctx->pc = 0x275984u;
    SET_GPR_U32(ctx, 31, 0x27598Cu);
    ctx->pc = 0x275988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27598Cu; }
    }
    if (ctx->pc != 0x27598Cu) { return; }
    ctx->pc = 0x27598Cu;
    // 0x27598c: 0x24110001
    ctx->pc = 0x27598cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x275990: 0x3c02003c
    ctx->pc = 0x275990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x275994: 0x24533a40
    ctx->pc = 0x275994u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 14912));
    // 0x275998: 0x3c17003b
    ctx->pc = 0x275998u;
    SET_GPR_U32(ctx, 23, ((uint32_t)59 << 16));
    // 0x27599c: 0x241600f0
    ctx->pc = 0x27599cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 240));
    // 0x2759a0: 0x3c020034
    ctx->pc = 0x2759a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2759a4: 0x24550ec8
    ctx->pc = 0x2759a4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 3784));
    // 0x2759a8: 0x3c140031
    ctx->pc = 0x2759a8u;
    SET_GPR_U32(ctx, 20, ((uint32_t)49 << 16));
    // 0x2759ac: 0x2321007
    ctx->pc = 0x2759acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 17) & 0x1F));
label_2759b0:
    // 0x2759b0: 0x30420001
    ctx->pc = 0x2759b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2759b4: 0x10400021
    ctx->pc = 0x2759B4u;
    {
        const bool branch_taken_0x2759b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2759B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2759b4) {
            ctx->pc = 0x275A3Cu;
            goto label_275a3c;
        }
    }
    ctx->pc = 0x2759BCu;
    // 0x2759bc: 0x26e5a870
    ctx->pc = 0x2759bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 4294944880));
    // 0x2759c0: 0xc0b6252
    ctx->pc = 0x2759C0u;
    SET_GPR_U32(ctx, 31, 0x2759C8u);
    ctx->pc = 0x2759C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759C8u; }
    }
    if (ctx->pc != 0x2759C8u) { return; }
    ctx->pc = 0x2759C8u;
    // 0x2759c8: 0x202d
    ctx->pc = 0x2759c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759cc: 0x260282d
    ctx->pc = 0x2759ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759d0: 0x302d
    ctx->pc = 0x2759d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759d4: 0xc09e6d2
    ctx->pc = 0x2759D4u;
    SET_GPR_U32(ctx, 31, 0x2759DCu);
    ctx->pc = 0x2759D8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759DCu; }
    }
    if (ctx->pc != 0x2759DCu) { return; }
    ctx->pc = 0x2759DCu;
    // 0x2759dc: 0x52000018
    ctx->pc = 0x2759DCu;
    {
        const bool branch_taken_0x2759dc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2759dc) {
            ctx->pc = 0x2759E0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x275A40u;
            goto label_275a40;
        }
    }
    ctx->pc = 0x2759E4u;
    // 0x2759e4: 0x4400015
    ctx->pc = 0x2759E4u;
    {
        const bool branch_taken_0x2759e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2759E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2759e4) {
            ctx->pc = 0x275A3Cu;
            goto label_275a3c;
        }
    }
    ctx->pc = 0x2759ECu;
    // 0x2759ec: 0x27a50030
    ctx->pc = 0x2759ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2759f0: 0x44806000
    ctx->pc = 0x2759f0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2759f4: 0x3c060008
    ctx->pc = 0x2759f4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8 << 16));
    // 0x2759f8: 0xc09f5fa
    ctx->pc = 0x2759F8u;
    SET_GPR_U32(ctx, 31, 0x275A00u);
    ctx->pc = 0x2759FCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A00u; }
    }
    if (ctx->pc != 0x275A00u) { return; }
    ctx->pc = 0x275A00u;
    // 0x275a00: 0x561818
    ctx->pc = 0x275a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x275a04: 0x752021
    ctx->pc = 0x275a04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x275a08: 0x24850004
    ctx->pc = 0x275a08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4));
    // 0x275a0c: 0x84a20010
    ctx->pc = 0x275a0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x275a10: 0x44821000
    ctx->pc = 0x275a10u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x275a14: 0x468010a0
    ctx->pc = 0x275a14u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x275a18: 0x3c013d08
    ctx->pc = 0x275a18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x275a1c: 0x34218889
    ctx->pc = 0x275a1cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x275a20: 0x44810800
    ctx->pc = 0x275a20u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x275a24: 0x46011042
    ctx->pc = 0x275a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x275a28: 0xc680ffb4
    ctx->pc = 0x275a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275a2c: 0x46010001
    ctx->pc = 0x275a2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x275a30: 0xe4a00020
    ctx->pc = 0x275a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x275a34: 0xc08493e
    ctx->pc = 0x275A34u;
    SET_GPR_U32(ctx, 31, 0x275A3Cu);
    ctx->pc = 0x275A38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    ctx->pc = 0x2124F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeKillPsys_0x2124f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A3Cu; }
    }
    if (ctx->pc != 0x275A3Cu) { return; }
    ctx->pc = 0x275A3Cu;
label_275a3c:
    // 0x275a3c: 0x26310001
    ctx->pc = 0x275a3cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_275a40:
    // 0x275a40: 0x2a220009
    ctx->pc = 0x275a40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
    // 0x275a44: 0x1440ffda
    ctx->pc = 0x275A44u;
    {
        const bool branch_taken_0x275a44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275A48u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 17) & 0x1F));
        if (branch_taken_0x275a44) {
            ctx->pc = 0x2759B0u;
            goto label_2759b0;
        }
    }
    ctx->pc = 0x275A4Cu;
    // 0x275a4c: 0x10000005
    ctx->pc = 0x275A4Cu;
    {
        const bool branch_taken_0x275a4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275A50u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 510));
        if (branch_taken_0x275a4c) {
            ctx->pc = 0x275A64u;
            goto label_275a64;
        }
    }
    ctx->pc = 0x275A54u;
label_275a54:
    // 0x275a54: 0x3c04003b
    ctx->pc = 0x275a54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x275a58: 0xc0b492e
    ctx->pc = 0x275A58u;
    SET_GPR_U32(ctx, 31, 0x275A60u);
    ctx->pc = 0x275A5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944904));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A60u; }
    }
    if (ctx->pc != 0x275A60u) { return; }
    ctx->pc = 0x275A60u;
    // 0x275a60: 0x324301fe
    ctx->pc = 0x275a60u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 18), 510));
label_275a64:
    // 0x275a64: 0x240201fe
    ctx->pc = 0x275a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 510));
    // 0x275a68: 0x10620007
    ctx->pc = 0x275A68u;
    {
        const bool branch_taken_0x275a68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x275A6Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x275a68) {
            ctx->pc = 0x275A88u;
            goto label_275a88;
        }
    }
    ctx->pc = 0x275A70u;
    // 0x275a70: 0xc0870d4
    ctx->pc = 0x275A70u;
    SET_GPR_U32(ctx, 31, 0x275A78u);
    ctx->pc = 0x275A74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944888));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A78u; }
    }
    if (ctx->pc != 0x275A78u) { return; }
    ctx->pc = 0x275A78u;
    // 0x275a78: 0x8c440028
    ctx->pc = 0x275a78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x275a7c: 0x24050002
    ctx->pc = 0x275a7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x275a80: 0xc0b41b8
    ctx->pc = 0x275A80u;
    SET_GPR_U32(ctx, 31, 0x275A88u);
    ctx->pc = 0x275A84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A88u; }
    }
    if (ctx->pc != 0x275A88u) { return; }
    ctx->pc = 0x275A88u;
label_275a88:
    // 0x275a88: 0x902d
    ctx->pc = 0x275a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a8c: 0x802d
    ctx->pc = 0x275a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a90: 0x24052b00
    ctx->pc = 0x275a90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x275a94: 0x3c020032
    ctx->pc = 0x275a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x275a98: 0x24471bc0
    ctx->pc = 0x275a98u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x275a9c: 0x240400b4
    ctx->pc = 0x275a9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 180));
    // 0x275aa0: 0x2051018
    ctx->pc = 0x275aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x275aa4: 0x0
    ctx->pc = 0x275aa4u;
    // NOP
label_275aa8:
    // 0x275aa8: 0x471821
    ctx->pc = 0x275aa8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x275aac: 0x8c6200fc
    ctx->pc = 0x275aacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x275ab0: 0x10400006
    ctx->pc = 0x275AB0u;
    {
        const bool branch_taken_0x275ab0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275AB4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x275ab0) {
            ctx->pc = 0x275ACCu;
            goto label_275acc;
        }
    }
    ctx->pc = 0x275AB8u;
    // 0x275ab8: 0x8c62000c
    ctx->pc = 0x275ab8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x275abc: 0x443018
    ctx->pc = 0x275abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x275ac0: 0xc31021
    ctx->pc = 0x275ac0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x275ac4: 0x94421d7e
    ctx->pc = 0x275ac4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 7550)));
    // 0x275ac8: 0x529025
    ctx->pc = 0x275ac8u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_275acc:
    // 0x275acc: 0x2a020004
    ctx->pc = 0x275accu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x275ad0: 0x1440fff5
    ctx->pc = 0x275AD0u;
    {
        const bool branch_taken_0x275ad0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275AD4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x275ad0) {
            ctx->pc = 0x275AA8u;
            goto label_275aa8;
        }
    }
    ctx->pc = 0x275AD8u;
    // 0x275ad8: 0x12400072
    ctx->pc = 0x275AD8u;
    {
        const bool branch_taken_0x275ad8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x275ADCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 4096));
        if (branch_taken_0x275ad8) {
            ctx->pc = 0x275CA4u;
            goto label_275ca4;
        }
    }
    ctx->pc = 0x275AE0u;
    // 0x275ae0: 0x50400005
    ctx->pc = 0x275AE0u;
    {
        const bool branch_taken_0x275ae0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x275ae0) {
            ctx->pc = 0x275AE4u;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x275AF8u;
            goto label_275af8;
        }
    }
    ctx->pc = 0x275AE8u;
    // 0x275ae8: 0x240400ff
    ctx->pc = 0x275ae8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
    // 0x275aec: 0xc095cca
    ctx->pc = 0x275AECu;
    SET_GPR_U32(ctx, 31, 0x275AF4u);
    ctx->pc = 0x275AF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x257328u;
    {
        const uint32_t __entryPc = ctx->pc;
        ActivateSpecialTrigger_0x257328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275AF4u; }
    }
    if (ctx->pc != 0x275AF4u) { return; }
    ctx->pc = 0x275AF4u;
    // 0x275af4: 0x3c04003b
    ctx->pc = 0x275af4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_275af8:
    // 0x275af8: 0xc0870d4
    ctx->pc = 0x275AF8u;
    SET_GPR_U32(ctx, 31, 0x275B00u);
    ctx->pc = 0x275AFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944816));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B00u; }
    }
    if (ctx->pc != 0x275B00u) { return; }
    ctx->pc = 0x275B00u;
    // 0x275b00: 0x40802d
    ctx->pc = 0x275b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b04: 0x12000036
    ctx->pc = 0x275B04u;
    {
        const bool branch_taken_0x275b04 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x275B08u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275b04) {
            ctx->pc = 0x275BE0u;
            goto label_275be0;
        }
    }
    ctx->pc = 0x275B0Cu;
    // 0x275b0c: 0x8e040028
    ctx->pc = 0x275b0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x275b10: 0xc0b4302
    ctx->pc = 0x275B10u;
    SET_GPR_U32(ctx, 31, 0x275B18u);
    ctx->pc = 0x275B14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B18u; }
    }
    if (ctx->pc != 0x275B18u) { return; }
    ctx->pc = 0x275B18u;
    // 0x275b18: 0x882d
    ctx->pc = 0x275b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b1c: 0x3c02003c
    ctx->pc = 0x275b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x275b20: 0x24533a40
    ctx->pc = 0x275b20u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 14912));
    // 0x275b24: 0x3c17003b
    ctx->pc = 0x275b24u;
    SET_GPR_U32(ctx, 23, ((uint32_t)59 << 16));
    // 0x275b28: 0x241600f0
    ctx->pc = 0x275b28u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 240));
    // 0x275b2c: 0x3c020034
    ctx->pc = 0x275b2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x275b30: 0x24550ec8
    ctx->pc = 0x275b30u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 3784));
    // 0x275b34: 0x3c140031
    ctx->pc = 0x275b34u;
    SET_GPR_U32(ctx, 20, ((uint32_t)49 << 16));
    // 0x275b38: 0x2321007
    ctx->pc = 0x275b38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 17) & 0x1F));
    // 0x275b3c: 0x0
    ctx->pc = 0x275b3cu;
    // NOP
label_275b40:
    // 0x275b40: 0x30420001
    ctx->pc = 0x275b40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x275b44: 0x10400020
    ctx->pc = 0x275B44u;
    {
        const bool branch_taken_0x275b44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275B48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275b44) {
            ctx->pc = 0x275BC8u;
            goto label_275bc8;
        }
    }
    ctx->pc = 0x275B4Cu;
    // 0x275b4c: 0x26e5a840
    ctx->pc = 0x275b4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 4294944832));
    // 0x275b50: 0xc0b6252
    ctx->pc = 0x275B50u;
    SET_GPR_U32(ctx, 31, 0x275B58u);
    ctx->pc = 0x275B54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B58u; }
    }
    if (ctx->pc != 0x275B58u) { return; }
    ctx->pc = 0x275B58u;
    // 0x275b58: 0x202d
    ctx->pc = 0x275b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b5c: 0x260282d
    ctx->pc = 0x275b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b60: 0x302d
    ctx->pc = 0x275b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b64: 0xc09e6d2
    ctx->pc = 0x275B64u;
    SET_GPR_U32(ctx, 31, 0x275B6Cu);
    ctx->pc = 0x275B68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B6Cu; }
    }
    if (ctx->pc != 0x275B6Cu) { return; }
    ctx->pc = 0x275B6Cu;
    // 0x275b6c: 0x52000017
    ctx->pc = 0x275B6Cu;
    {
        const bool branch_taken_0x275b6c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x275b6c) {
            ctx->pc = 0x275B70u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x275BCCu;
            goto label_275bcc;
        }
    }
    ctx->pc = 0x275B74u;
    // 0x275b74: 0x4400014
    ctx->pc = 0x275B74u;
    {
        const bool branch_taken_0x275b74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x275B78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275b74) {
            ctx->pc = 0x275BC8u;
            goto label_275bc8;
        }
    }
    ctx->pc = 0x275B7Cu;
    // 0x275b7c: 0x27a50030
    ctx->pc = 0x275b7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x275b80: 0x44806000
    ctx->pc = 0x275b80u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x275b84: 0x3c060008
    ctx->pc = 0x275b84u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8 << 16));
    // 0x275b88: 0xc09f5fa
    ctx->pc = 0x275B88u;
    SET_GPR_U32(ctx, 31, 0x275B90u);
    ctx->pc = 0x275B8Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275B90u; }
    }
    if (ctx->pc != 0x275B90u) { return; }
    ctx->pc = 0x275B90u;
    // 0x275b90: 0x561818
    ctx->pc = 0x275b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x275b94: 0x751021
    ctx->pc = 0x275b94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x275b98: 0x24450004
    ctx->pc = 0x275b98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4));
    // 0x275b9c: 0x84a20010
    ctx->pc = 0x275b9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x275ba0: 0x44821000
    ctx->pc = 0x275ba0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x275ba4: 0x468010a0
    ctx->pc = 0x275ba4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x275ba8: 0x3c013d08
    ctx->pc = 0x275ba8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x275bac: 0x34218889
    ctx->pc = 0x275bacu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x275bb0: 0x44810800
    ctx->pc = 0x275bb0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x275bb4: 0x46011042
    ctx->pc = 0x275bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x275bb8: 0xc680ffb4
    ctx->pc = 0x275bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275bbc: 0x46010001
    ctx->pc = 0x275bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x275bc0: 0xe4a00020
    ctx->pc = 0x275bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x275bc4: 0xe4a20018
    ctx->pc = 0x275bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_275bc8:
    // 0x275bc8: 0x26310001
    ctx->pc = 0x275bc8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_275bcc:
    // 0x275bcc: 0x2a22000c
    ctx->pc = 0x275bccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 12));
    // 0x275bd0: 0x1440ffdb
    ctx->pc = 0x275BD0u;
    {
        const bool branch_taken_0x275bd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x275BD4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 17) & 0x1F));
        if (branch_taken_0x275bd0) {
            ctx->pc = 0x275B40u;
            goto label_275b40;
        }
    }
    ctx->pc = 0x275BD8u;
    // 0x275bd8: 0x10000005
    ctx->pc = 0x275BD8u;
    {
        const bool branch_taken_0x275bd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275BDCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x275bd8) {
            ctx->pc = 0x275BF0u;
            goto label_275bf0;
        }
    }
    ctx->pc = 0x275BE0u;
label_275be0:
    // 0x275be0: 0x3c04003b
    ctx->pc = 0x275be0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x275be4: 0xc0b492e
    ctx->pc = 0x275BE4u;
    SET_GPR_U32(ctx, 31, 0x275BECu);
    ctx->pc = 0x275BE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944840));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275BECu; }
    }
    if (ctx->pc != 0x275BECu) { return; }
    ctx->pc = 0x275BECu;
    // 0x275bec: 0x3c04003b
    ctx->pc = 0x275becu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_275bf0:
    // 0x275bf0: 0xc0870d4
    ctx->pc = 0x275BF0u;
    SET_GPR_U32(ctx, 31, 0x275BF8u);
    ctx->pc = 0x275BF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944768));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275BF8u; }
    }
    if (ctx->pc != 0x275BF8u) { return; }
    ctx->pc = 0x275BF8u;
    // 0x275bf8: 0x40802d
    ctx->pc = 0x275bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bfc: 0x12000026
    ctx->pc = 0x275BFCu;
    {
        const bool branch_taken_0x275bfc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x275C00u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 4096));
        if (branch_taken_0x275bfc) {
            ctx->pc = 0x275C98u;
            goto label_275c98;
        }
    }
    ctx->pc = 0x275C04u;
    // 0x275c04: 0x10400027
    ctx->pc = 0x275C04u;
    {
        const bool branch_taken_0x275c04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x275C08u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275c04) {
            ctx->pc = 0x275CA4u;
            goto label_275ca4;
        }
    }
    ctx->pc = 0x275C0Cu;
    // 0x275c0c: 0x8e040028
    ctx->pc = 0x275c0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x275c10: 0xc0b4302
    ctx->pc = 0x275C10u;
    SET_GPR_U32(ctx, 31, 0x275C18u);
    ctx->pc = 0x275C14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C18u; }
    }
    if (ctx->pc != 0x275C18u) { return; }
    ctx->pc = 0x275C18u;
    // 0x275c18: 0x202d
    ctx->pc = 0x275c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c1c: 0x3c05003b
    ctx->pc = 0x275c1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x275c20: 0x24a5a810
    ctx->pc = 0x275c20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294944784));
    // 0x275c24: 0x302d
    ctx->pc = 0x275c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c28: 0xc09e6d2
    ctx->pc = 0x275C28u;
    SET_GPR_U32(ctx, 31, 0x275C30u);
    ctx->pc = 0x275C2Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C30u; }
    }
    if (ctx->pc != 0x275C30u) { return; }
    ctx->pc = 0x275C30u;
    // 0x275c30: 0x440001c
    ctx->pc = 0x275C30u;
    {
        const bool branch_taken_0x275c30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x275C34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275c30) {
            ctx->pc = 0x275CA4u;
            goto label_275ca4;
        }
    }
    ctx->pc = 0x275C38u;
    // 0x275c38: 0x27a50030
    ctx->pc = 0x275c38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x275c3c: 0x44806000
    ctx->pc = 0x275c3cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x275c40: 0x3c060008
    ctx->pc = 0x275c40u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8 << 16));
    // 0x275c44: 0xc09f5fa
    ctx->pc = 0x275C44u;
    SET_GPR_U32(ctx, 31, 0x275C4Cu);
    ctx->pc = 0x275C48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C4Cu; }
    }
    if (ctx->pc != 0x275C4Cu) { return; }
    ctx->pc = 0x275C4Cu;
    // 0x275c4c: 0x240300f0
    ctx->pc = 0x275c4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x275c50: 0x432818
    ctx->pc = 0x275c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x275c54: 0x3c020034
    ctx->pc = 0x275c54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x275c58: 0x24420ec8
    ctx->pc = 0x275c58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3784));
    // 0x275c5c: 0xa22821
    ctx->pc = 0x275c5cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x275c60: 0x24a50004
    ctx->pc = 0x275c60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x275c64: 0x3c030031
    ctx->pc = 0x275c64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x275c68: 0x84a20010
    ctx->pc = 0x275c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x275c6c: 0x44821000
    ctx->pc = 0x275c6cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x275c70: 0x468010a0
    ctx->pc = 0x275c70u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x275c74: 0x3c013d08
    ctx->pc = 0x275c74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x275c78: 0x34218889
    ctx->pc = 0x275c78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x275c7c: 0x44810800
    ctx->pc = 0x275c7cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x275c80: 0x46011042
    ctx->pc = 0x275c80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x275c84: 0xc460ffb4
    ctx->pc = 0x275c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c88: 0x46010001
    ctx->pc = 0x275c88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x275c8c: 0xe4a00020
    ctx->pc = 0x275c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x275c90: 0x10000004
    ctx->pc = 0x275C90u;
    {
        const bool branch_taken_0x275c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x275C94u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        if (branch_taken_0x275c90) {
            ctx->pc = 0x275CA4u;
            goto label_275ca4;
        }
    }
    ctx->pc = 0x275C98u;
label_275c98:
    // 0x275c98: 0x3c04003b
    ctx->pc = 0x275c98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x275c9c: 0xc0b492e
    ctx->pc = 0x275C9Cu;
    SET_GPR_U32(ctx, 31, 0x275CA4u);
    ctx->pc = 0x275CA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944792));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CA4u; }
    }
    if (ctx->pc != 0x275CA4u) { return; }
    ctx->pc = 0x275CA4u;
label_275ca4:
    // 0x275ca4: 0xc096dae
    ctx->pc = 0x275CA4u;
    SET_GPR_U32(ctx, 31, 0x275CACu);
    ctx->pc = 0x25B6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        HideExits_0x25b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CACu; }
    }
    if (ctx->pc != 0x275CACu) { return; }
    ctx->pc = 0x275CACu;
    // 0x275cac: 0xc09d738
    ctx->pc = 0x275CACu;
    SET_GPR_U32(ctx, 31, 0x275CB4u);
    ctx->pc = 0x275CB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x275CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TowerCheckMessages_0x275ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CB4u; }
    }
    if (ctx->pc != 0x275CB4u) { return; }
    ctx->pc = 0x275CB4u;
    // 0x275cb4: 0xdfbf00c0
    ctx->pc = 0x275cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x275cb8: 0xdfb700b0
    ctx->pc = 0x275cb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x275cbc: 0xdfb600a0
    ctx->pc = 0x275cbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x275cc0: 0xdfb50090
    ctx->pc = 0x275cc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x275cc4: 0xdfb40080
    ctx->pc = 0x275cc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275cc8: 0xdfb30070
    ctx->pc = 0x275cc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275ccc: 0xdfb20060
    ctx->pc = 0x275cccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275cd0: 0xdfb10050
    ctx->pc = 0x275cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275cd4: 0xdfb00040
    ctx->pc = 0x275cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275cd8: 0x3e00008
    ctx->pc = 0x275CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275CDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2757A4u: goto label_2757a4;
            case 0x2757E0u: goto label_2757e0;
            case 0x275808u: goto label_275808;
            case 0x275838u: goto label_275838;
            case 0x27585Cu: goto label_27585c;
            case 0x275890u: goto label_275890;
            case 0x275894u: goto label_275894;
            case 0x2758B0u: goto label_2758b0;
            case 0x2758C8u: goto label_2758c8;
            case 0x2758ECu: goto label_2758ec;
            case 0x275900u: goto label_275900;
            case 0x275930u: goto label_275930;
            case 0x275954u: goto label_275954;
            case 0x2759B0u: goto label_2759b0;
            case 0x275A3Cu: goto label_275a3c;
            case 0x275A40u: goto label_275a40;
            case 0x275A54u: goto label_275a54;
            case 0x275A64u: goto label_275a64;
            case 0x275A88u: goto label_275a88;
            case 0x275AA8u: goto label_275aa8;
            case 0x275ACCu: goto label_275acc;
            case 0x275AF8u: goto label_275af8;
            case 0x275B40u: goto label_275b40;
            case 0x275BC8u: goto label_275bc8;
            case 0x275BCCu: goto label_275bcc;
            case 0x275BE0u: goto label_275be0;
            case 0x275BF0u: goto label_275bf0;
            case 0x275C98u: goto label_275c98;
            case 0x275CA4u: goto label_275ca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x275CE0u;
}
