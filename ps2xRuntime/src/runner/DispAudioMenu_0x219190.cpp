#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DispAudioMenu
// Address: 0x219190 - 0x2196f4
void DispAudioMenu_0x219190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x219190u;

    // 0x219190: 0x27bdfed0
    ctx->pc = 0x219190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x219194: 0xffbf0120
    ctx->pc = 0x219194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x219198: 0xffbe0110
    ctx->pc = 0x219198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x21919c: 0xffb70100
    ctx->pc = 0x21919cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
    // 0x2191a0: 0xffb600f0
    ctx->pc = 0x2191a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x2191a4: 0xffb500e0
    ctx->pc = 0x2191a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
    // 0x2191a8: 0xffb400d0
    ctx->pc = 0x2191a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x2191ac: 0xffb300c0
    ctx->pc = 0x2191acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x2191b0: 0xffb200b0
    ctx->pc = 0x2191b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2191b4: 0xffb100a0
    ctx->pc = 0x2191b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x2191b8: 0xffb00090
    ctx->pc = 0x2191b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2191bc: 0x3c02003c
    ctx->pc = 0x2191bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2191c0: 0x8c43d568
    ctx->pc = 0x2191c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956392)));
    // 0x2191c4: 0x3402ff00
    ctx->pc = 0x2191c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65280));
    // 0x2191c8: 0xafa20084
    ctx->pc = 0x2191c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x2191cc: 0x3c0200ff
    ctx->pc = 0x2191ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
    // 0x2191d0: 0x3442ff00
    ctx->pc = 0x2191d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65280));
    // 0x2191d4: 0x8fa40084
    ctx->pc = 0x2191d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2191d8: 0x43200a
    ctx->pc = 0x2191d8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x2191dc: 0xafa40084
    ctx->pc = 0x2191dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x2191e0: 0x3c020032
    ctx->pc = 0x2191e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2191e4: 0x8c42fd6c
    ctx->pc = 0x2191e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x2191e8: 0x8c420000
    ctx->pc = 0x2191e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2191ec: 0x1840001c
    ctx->pc = 0x2191ECu;
    {
        const bool branch_taken_0x2191ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2191F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2191ec) {
            ctx->pc = 0x219260u;
            goto label_219260;
        }
    }
    ctx->pc = 0x2191F4u;
    // 0x2191f4: 0x3c110032
    ctx->pc = 0x2191f4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x2191f8: 0x24142494
    ctx->pc = 0x2191f8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 9364));
    // 0x2191fc: 0x3c13003a
    ctx->pc = 0x2191fcu;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x219200: 0x3c12003c
    ctx->pc = 0x219200u;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x219204: 0x8e22fd6c
    ctx->pc = 0x219204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966636)));
label_219208:
    // 0x219208: 0x2141818
    ctx->pc = 0x219208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21920c: 0x8c46000c
    ctx->pc = 0x21920cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x219210: 0x3a0202d
    ctx->pc = 0x219210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219214: 0x26656118
    ctx->pc = 0x219214u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 24856));
    // 0x219218: 0xc0b6252
    ctx->pc = 0x219218u;
    SET_GPR_U32(ctx, 31, 0x219220u);
    ctx->pc = 0x21921Cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219220u; }
    }
    if (ctx->pc != 0x219220u) { return; }
    ctx->pc = 0x219220u;
    // 0x219220: 0x8e42d558
    ctx->pc = 0x219220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294956376)));
    // 0x219224: 0x3c0400ff
    ctx->pc = 0x219224u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x219228: 0x3484ffff
    ctx->pc = 0x219228u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x21922c: 0x2021026
    ctx->pc = 0x21922cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x219230: 0x8fa30084
    ctx->pc = 0x219230u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x219234: 0x62200a
    ctx->pc = 0x219234u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x219238: 0x24050002
    ctx->pc = 0x219238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21923c: 0x26060005
    ctx->pc = 0x21923cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 5));
    // 0x219240: 0xc0b4724
    ctx->pc = 0x219240u;
    SET_GPR_U32(ctx, 31, 0x219248u);
    ctx->pc = 0x219244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219248u; }
    }
    if (ctx->pc != 0x219248u) { return; }
    ctx->pc = 0x219248u;
    // 0x219248: 0x26100001
    ctx->pc = 0x219248u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x21924c: 0x8e22fd6c
    ctx->pc = 0x21924cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966636)));
    // 0x219250: 0x8c420000
    ctx->pc = 0x219250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219254: 0x202102a
    ctx->pc = 0x219254u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x219258: 0x1440ffeb
    ctx->pc = 0x219258u;
    {
        const bool branch_taken_0x219258 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21925Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966636)));
        if (branch_taken_0x219258) {
            ctx->pc = 0x219208u;
            goto label_219208;
        }
    }
    ctx->pc = 0x219260u;
label_219260:
    // 0x219260: 0x3c020032
    ctx->pc = 0x219260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x219264: 0x8c44fd6c
    ctx->pc = 0x219264u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x219268: 0x3c02003c
    ctx->pc = 0x219268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21926c: 0x8c42d558
    ctx->pc = 0x21926cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956376)));
    // 0x219270: 0x24032494
    ctx->pc = 0x219270u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9364));
    // 0x219274: 0x431018
    ctx->pc = 0x219274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x219278: 0x8c83000c
    ctx->pc = 0x219278u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21927c: 0x43b821
    ctx->pc = 0x21927cu;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219280: 0x3c02003c
    ctx->pc = 0x219280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219284: 0x8c42d568
    ctx->pc = 0x219284u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956392)));
    // 0x219288: 0x3404ff00
    ctx->pc = 0x219288u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65280));
    // 0x21928c: 0xafa40084
    ctx->pc = 0x21928cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x219290: 0x3c0300ff
    ctx->pc = 0x219290u;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
    // 0x219294: 0x3463ff00
    ctx->pc = 0x219294u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
    // 0x219298: 0x38420001
    ctx->pc = 0x219298u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x21929c: 0x62200a
    ctx->pc = 0x21929cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2192a0: 0xafa40084
    ctx->pc = 0x2192a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x2192a4: 0x2412ffff
    ctx->pc = 0x2192a4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2192a8: 0x282d
    ctx->pc = 0x2192a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2192ac: 0x8ee20010
    ctx->pc = 0x2192acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2192b0: 0x1840001b
    ctx->pc = 0x2192B0u;
    {
        const bool branch_taken_0x2192b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2192B4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2192b0) {
            ctx->pc = 0x219320u;
            goto label_219320;
        }
    }
    ctx->pc = 0x2192B8u;
    // 0x2192b8: 0x24080124
    ctx->pc = 0x2192b8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 292));
    // 0x2192bc: 0x40382d
    ctx->pc = 0x2192bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2192c0:
    // 0x2192c0: 0x2281018
    ctx->pc = 0x2192c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2192c4: 0x24420014
    ctx->pc = 0x2192c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x2192c8: 0x2e2a021
    ctx->pc = 0x2192c8u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2192cc: 0x8e820018
    ctx->pc = 0x2192ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2192d0: 0x1840000f
    ctx->pc = 0x2192D0u;
    {
        const bool branch_taken_0x2192d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2192D4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2192d0) {
            ctx->pc = 0x219310u;
            goto label_219310;
        }
    }
    ctx->pc = 0x2192D8u;
    // 0x2192d8: 0x3c02003c
    ctx->pc = 0x2192d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2192dc: 0x8c44d55c
    ctx->pc = 0x2192dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956380)));
    // 0x2192e0: 0x3c02003c
    ctx->pc = 0x2192e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2192e4: 0x8c43d564
    ctx->pc = 0x2192e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956388)));
    // 0x2192e8: 0x8e860018
    ctx->pc = 0x2192e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2192ec: 0x0
    ctx->pc = 0x2192ecu;
    // NOP
label_2192f0:
    // 0x2192f0: 0x56240004
    ctx->pc = 0x2192F0u;
    {
        const bool branch_taken_0x2192f0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 4));
        if (branch_taken_0x2192f0) {
            ctx->pc = 0x2192F4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x219304u;
            goto label_219304;
        }
    }
    ctx->pc = 0x2192F8u;
    // 0x2192f8: 0x2031026
    ctx->pc = 0x2192f8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2192fc: 0xa2900a
    ctx->pc = 0x2192fcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 5));
    // 0x219300: 0x26100001
    ctx->pc = 0x219300u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_219304:
    // 0x219304: 0x206102a
    ctx->pc = 0x219304u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 6)));
    // 0x219308: 0x1440fff9
    ctx->pc = 0x219308u;
    {
        const bool branch_taken_0x219308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21930Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x219308) {
            ctx->pc = 0x2192F0u;
            goto label_2192f0;
        }
    }
    ctx->pc = 0x219310u;
label_219310:
    // 0x219310: 0x26310001
    ctx->pc = 0x219310u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x219314: 0x227102a
    ctx->pc = 0x219314u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 7)));
    // 0x219318: 0x1440ffe9
    ctx->pc = 0x219318u;
    {
        const bool branch_taken_0x219318 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21931Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x219318) {
            ctx->pc = 0x2192C0u;
            goto label_2192c0;
        }
    }
    ctx->pc = 0x219320u;
label_219320:
    // 0x219320: 0x3c020032
    ctx->pc = 0x219320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x219324: 0x8c44fd6c
    ctx->pc = 0x219324u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x219328: 0x3c02003c
    ctx->pc = 0x219328u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21932c: 0x8c42d558
    ctx->pc = 0x21932cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956376)));
    // 0x219330: 0x24032494
    ctx->pc = 0x219330u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9364));
    // 0x219334: 0x431018
    ctx->pc = 0x219334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x219338: 0x8c83000c
    ctx->pc = 0x219338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21933c: 0x43b821
    ctx->pc = 0x21933cu;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219340: 0x2653fff1
    ctx->pc = 0x219340u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 18), 4294967281));
    // 0x219344: 0x2403ffff
    ctx->pc = 0x219344u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219348: 0x73102a
    ctx->pc = 0x219348u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 19)));
    // 0x21934c: 0x2980a
    ctx->pc = 0x21934cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 0));
    // 0x219350: 0x267e001d
    ctx->pc = 0x219350u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 19), 29));
    // 0x219354: 0x3c5102a
    ctx->pc = 0x219354u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 5)));
    // 0x219358: 0x14400005
    ctx->pc = 0x219358u;
    {
        const bool branch_taken_0x219358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21935Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x219358) {
            ctx->pc = 0x219370u;
            goto label_219370;
        }
    }
    ctx->pc = 0x219360u;
    // 0x219360: 0x24beffff
    ctx->pc = 0x219360u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x219364: 0x24b3ffe2
    ctx->pc = 0x219364u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 5), 4294967266));
    // 0x219368: 0x73102a
    ctx->pc = 0x219368u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 19)));
    // 0x21936c: 0x2980a
    ctx->pc = 0x21936cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 0));
label_219370:
    // 0x219370: 0x8ee20010
    ctx->pc = 0x219370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x219374: 0x18400051
    ctx->pc = 0x219374u;
    {
        const bool branch_taken_0x219374 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x219378u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x219374) {
            ctx->pc = 0x2194BCu;
            goto label_2194bc;
        }
    }
    ctx->pc = 0x21937Cu;
    // 0x21937c: 0x24020124
    ctx->pc = 0x21937cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 292));
label_219380:
    // 0x219380: 0x2221018
    ctx->pc = 0x219380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x219384: 0x24420014
    ctx->pc = 0x219384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x219388: 0x2e2a021
    ctx->pc = 0x219388u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x21938c: 0x253102a
    ctx->pc = 0x21938cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x219390: 0x54400016
    ctx->pc = 0x219390u;
    {
        const bool branch_taken_0x219390 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x219390) {
            ctx->pc = 0x219394u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2193ECu;
            goto label_2193ec;
        }
    }
    ctx->pc = 0x219398u;
    // 0x219398: 0x3d2102a
    ctx->pc = 0x219398u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 18)));
    // 0x21939c: 0x54400013
    ctx->pc = 0x21939Cu;
    {
        const bool branch_taken_0x21939c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21939c) {
            ctx->pc = 0x2193A0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2193ECu;
            goto label_2193ec;
        }
    }
    ctx->pc = 0x2193A4u;
    // 0x2193a4: 0x3c05003a
    ctx->pc = 0x2193a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2193a8: 0x3a0202d
    ctx->pc = 0x2193a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193ac: 0x24a56118
    ctx->pc = 0x2193acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24856));
    // 0x2193b0: 0xc0b6252
    ctx->pc = 0x2193B0u;
    SET_GPR_U32(ctx, 31, 0x2193B8u);
    ctx->pc = 0x2193B4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2193B8u; }
    }
    if (ctx->pc != 0x2193B8u) { return; }
    ctx->pc = 0x2193B8u;
    // 0x2193b8: 0x3c02003c
    ctx->pc = 0x2193b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2193bc: 0x8c42d55c
    ctx->pc = 0x2193bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956380)));
    // 0x2193c0: 0x3c0400ff
    ctx->pc = 0x2193c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2193c4: 0x3484ffff
    ctx->pc = 0x2193c4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2193c8: 0x2221026
    ctx->pc = 0x2193c8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2193cc: 0x2666fffb
    ctx->pc = 0x2193ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 4294967291));
    // 0x2193d0: 0x8fa30084
    ctx->pc = 0x2193d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2193d4: 0x62200a
    ctx->pc = 0x2193d4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2193d8: 0x2405000a
    ctx->pc = 0x2193d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2193dc: 0x2463023
    ctx->pc = 0x2193dcu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2193e0: 0xc0b4724
    ctx->pc = 0x2193E0u;
    SET_GPR_U32(ctx, 31, 0x2193E8u);
    ctx->pc = 0x2193E4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2193E8u; }
    }
    if (ctx->pc != 0x2193E8u) { return; }
    ctx->pc = 0x2193E8u;
    // 0x2193e8: 0x26520001
    ctx->pc = 0x2193e8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2193ec:
    // 0x2193ec: 0x8e820018
    ctx->pc = 0x2193ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2193f0: 0x1840002d
    ctx->pc = 0x2193F0u;
    {
        const bool branch_taken_0x2193f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2193F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2193f0) {
            ctx->pc = 0x2194A8u;
            goto label_2194a8;
        }
    }
    ctx->pc = 0x2193F8u;
    // 0x2193f8: 0x2684001c
    ctx->pc = 0x2193f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 28));
    // 0x2193fc: 0xafa40088
    ctx->pc = 0x2193fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x219400: 0x2676fffb
    ctx->pc = 0x219400u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 19), 4294967291));
    // 0x219404: 0x0
    ctx->pc = 0x219404u;
    // NOP
label_219408:
    // 0x219408: 0x3c020032
    ctx->pc = 0x219408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21940c: 0x8c43fd6c
    ctx->pc = 0x21940cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x219410: 0x101080
    ctx->pc = 0x219410u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x219414: 0x8fa40088
    ctx->pc = 0x219414u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x219418: 0x821021
    ctx->pc = 0x219418u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21941c: 0x8c420000
    ctx->pc = 0x21941cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219420: 0x2404002c
    ctx->pc = 0x219420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 44));
    // 0x219424: 0x441018
    ctx->pc = 0x219424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x219428: 0x8c630010
    ctx->pc = 0x219428u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21942c: 0x43a821
    ctx->pc = 0x21942cu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219430: 0x253102a
    ctx->pc = 0x219430u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x219434: 0x54400018
    ctx->pc = 0x219434u;
    {
        const bool branch_taken_0x219434 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x219434) {
            ctx->pc = 0x219438u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x219498u;
            goto label_219498;
        }
    }
    ctx->pc = 0x21943Cu;
    // 0x21943c: 0x3d2102a
    ctx->pc = 0x21943cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 18)));
    // 0x219440: 0x54400015
    ctx->pc = 0x219440u;
    {
        const bool branch_taken_0x219440 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x219440) {
            ctx->pc = 0x219444u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x219498u;
            goto label_219498;
        }
    }
    ctx->pc = 0x219448u;
    // 0x219448: 0x3a0202d
    ctx->pc = 0x219448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21944c: 0x3c02003a
    ctx->pc = 0x21944cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x219450: 0x24456120
    ctx->pc = 0x219450u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 24864));
    // 0x219454: 0xc0b6252
    ctx->pc = 0x219454u;
    SET_GPR_U32(ctx, 31, 0x21945Cu);
    ctx->pc = 0x219458u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 16));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21945Cu; }
    }
    if (ctx->pc != 0x21945Cu) { return; }
    ctx->pc = 0x21945Cu;
    // 0x21945c: 0x3c03003c
    ctx->pc = 0x21945cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x219460: 0x8c62d55c
    ctx->pc = 0x219460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294956380)));
    // 0x219464: 0x3c0400ff
    ctx->pc = 0x219464u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x219468: 0x16220006
    ctx->pc = 0x219468u;
    {
        const bool branch_taken_0x219468 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x21946Cu;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x219468) {
            ctx->pc = 0x219484u;
            goto label_219484;
        }
    }
    ctx->pc = 0x219470u;
    // 0x219470: 0x3c03003c
    ctx->pc = 0x219470u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x219474: 0x8c62d564
    ctx->pc = 0x219474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294956388)));
    // 0x219478: 0x2021026
    ctx->pc = 0x219478u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21947c: 0x8fa30084
    ctx->pc = 0x21947cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x219480: 0x62200a
    ctx->pc = 0x219480u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_219484:
    // 0x219484: 0x2405000a
    ctx->pc = 0x219484u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x219488: 0x2563023
    ctx->pc = 0x219488u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x21948c: 0xc0b4724
    ctx->pc = 0x21948Cu;
    SET_GPR_U32(ctx, 31, 0x219494u);
    ctx->pc = 0x219490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219494u; }
    }
    if (ctx->pc != 0x219494u) { return; }
    ctx->pc = 0x219494u;
    // 0x219494: 0x26100001
    ctx->pc = 0x219494u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_219498:
    // 0x219498: 0x8e820018
    ctx->pc = 0x219498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x21949c: 0x202102a
    ctx->pc = 0x21949cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2194a0: 0x1440ffd9
    ctx->pc = 0x2194A0u;
    {
        const bool branch_taken_0x2194a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2194A4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2194a0) {
            ctx->pc = 0x219408u;
            goto label_219408;
        }
    }
    ctx->pc = 0x2194A8u;
label_2194a8:
    // 0x2194a8: 0x26310001
    ctx->pc = 0x2194a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2194ac: 0x8ee20010
    ctx->pc = 0x2194acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2194b0: 0x222102a
    ctx->pc = 0x2194b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2194b4: 0x1440ffb2
    ctx->pc = 0x2194B4u;
    {
        const bool branch_taken_0x2194b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2194B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 292));
        if (branch_taken_0x2194b4) {
            ctx->pc = 0x219380u;
            goto label_219380;
        }
    }
    ctx->pc = 0x2194BCu;
label_2194bc:
    // 0x2194bc: 0x2a42001e
    ctx->pc = 0x2194bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 30));
    // 0x2194c0: 0x1040000d
    ctx->pc = 0x2194C0u;
    {
        const bool branch_taken_0x2194c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2194C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2194c0) {
            ctx->pc = 0x2194F8u;
            goto label_2194f8;
        }
    }
    ctx->pc = 0x2194C8u;
    // 0x2194c8: 0x3c10003a
    ctx->pc = 0x2194c8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2194cc: 0x3c0400ff
    ctx->pc = 0x2194ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
label_2194d0:
    // 0x2194d0: 0x3484ffff
    ctx->pc = 0x2194d0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2194d4: 0x2405000a
    ctx->pc = 0x2194d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2194d8: 0x26460005
    ctx->pc = 0x2194d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 5));
    // 0x2194dc: 0xc0b4724
    ctx->pc = 0x2194DCu;
    SET_GPR_U32(ctx, 31, 0x2194E4u);
    ctx->pc = 0x2194E0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 24872));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2194E4u; }
    }
    if (ctx->pc != 0x2194E4u) { return; }
    ctx->pc = 0x2194E4u;
    // 0x2194e4: 0x26520001
    ctx->pc = 0x2194e4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2194e8: 0x2a42001e
    ctx->pc = 0x2194e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 30));
    // 0x2194ec: 0x1440fff8
    ctx->pc = 0x2194ECu;
    {
        const bool branch_taken_0x2194ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2194F0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
        if (branch_taken_0x2194ec) {
            ctx->pc = 0x2194D0u;
            goto label_2194d0;
        }
    }
    ctx->pc = 0x2194F4u;
    // 0x2194f4: 0x3c020032
    ctx->pc = 0x2194f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2194f8:
    // 0x2194f8: 0x8c44fd6c
    ctx->pc = 0x2194f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x2194fc: 0x3c02003c
    ctx->pc = 0x2194fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219500: 0x8c42d558
    ctx->pc = 0x219500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956376)));
    // 0x219504: 0x24032494
    ctx->pc = 0x219504u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9364));
    // 0x219508: 0x431018
    ctx->pc = 0x219508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21950c: 0x8c83000c
    ctx->pc = 0x21950cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x219510: 0x43b821
    ctx->pc = 0x219510u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219514: 0x3c02003c
    ctx->pc = 0x219514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219518: 0x8c42d55c
    ctx->pc = 0x219518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956380)));
    // 0x21951c: 0x24030124
    ctx->pc = 0x21951cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 292));
    // 0x219520: 0x431018
    ctx->pc = 0x219520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x219524: 0x24420014
    ctx->pc = 0x219524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x219528: 0x2e2a021
    ctx->pc = 0x219528u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x21952c: 0x3c02003c
    ctx->pc = 0x21952cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219530: 0x8c42d564
    ctx->pc = 0x219530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956388)));
    // 0x219534: 0x21080
    ctx->pc = 0x219534u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x219538: 0x2821021
    ctx->pc = 0x219538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x21953c: 0x8c42001c
    ctx->pc = 0x21953cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x219540: 0x2403002c
    ctx->pc = 0x219540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x219544: 0x431018
    ctx->pc = 0x219544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x219548: 0x8c830010
    ctx->pc = 0x219548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21954c: 0x43a821
    ctx->pc = 0x21954cu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219550: 0x86a20026
    ctx->pc = 0x219550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 38)));
    // 0x219554: 0x2403001c
    ctx->pc = 0x219554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x219558: 0x431018
    ctx->pc = 0x219558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21955c: 0x8c830014
    ctx->pc = 0x21955cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x219560: 0x431021
    ctx->pc = 0x219560u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219564: 0xafa20080
    ctx->pc = 0x219564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x219568: 0x3c02003c
    ctx->pc = 0x219568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21956c: 0x8c42d568
    ctx->pc = 0x21956cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956392)));
    // 0x219570: 0x3404ff00
    ctx->pc = 0x219570u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65280));
    // 0x219574: 0xafa40084
    ctx->pc = 0x219574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x219578: 0x3c0300ff
    ctx->pc = 0x219578u;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
    // 0x21957c: 0x3463ff00
    ctx->pc = 0x21957cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
    // 0x219580: 0x38420002
    ctx->pc = 0x219580u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x219584: 0x62200a
    ctx->pc = 0x219584u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x219588: 0xafa40084
    ctx->pc = 0x219588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x21958c: 0x3c02003c
    ctx->pc = 0x21958cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219590: 0x8c42d560
    ctx->pc = 0x219590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
    // 0x219594: 0x2453fff1
    ctx->pc = 0x219594u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x219598: 0x2404ffff
    ctx->pc = 0x219598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21959c: 0x93102a
    ctx->pc = 0x21959cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 19)));
    // 0x2195a0: 0x2980a
    ctx->pc = 0x2195a0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 0));
    // 0x2195a4: 0x267e001d
    ctx->pc = 0x2195a4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 19), 29));
    // 0x2195a8: 0x86a30024
    ctx->pc = 0x2195a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x2195ac: 0x3c3102a
    ctx->pc = 0x2195acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 3)));
    // 0x2195b0: 0x14400005
    ctx->pc = 0x2195B0u;
    {
        const bool branch_taken_0x2195b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2195B4u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2195b0) {
            ctx->pc = 0x2195C8u;
            goto label_2195c8;
        }
    }
    ctx->pc = 0x2195B8u;
    // 0x2195b8: 0x247effff
    ctx->pc = 0x2195b8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2195bc: 0x27d3ffe3
    ctx->pc = 0x2195bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 30), 4294967267));
    // 0x2195c0: 0x93102a
    ctx->pc = 0x2195c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 19)));
    // 0x2195c4: 0x2980a
    ctx->pc = 0x2195c4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 0));
label_2195c8:
    // 0x2195c8: 0x86a20024
    ctx->pc = 0x2195c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x2195cc: 0x1840002f
    ctx->pc = 0x2195CCu;
    {
        const bool branch_taken_0x2195cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2195D0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2195cc) {
            ctx->pc = 0x21968Cu;
            goto label_21968c;
        }
    }
    ctx->pc = 0x2195D4u;
    // 0x2195d4: 0x2697001c
    ctx->pc = 0x2195d4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 20), 28));
    // 0x2195d8: 0x2674fffb
    ctx->pc = 0x2195d8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 4294967291));
    // 0x2195dc: 0x0
    ctx->pc = 0x2195dcu;
    // NOP
label_2195e0:
    // 0x2195e0: 0x253102a
    ctx->pc = 0x2195e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x2195e4: 0x54400025
    ctx->pc = 0x2195E4u;
    {
        const bool branch_taken_0x2195e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2195e4) {
            ctx->pc = 0x2195E8u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
            ctx->pc = 0x21967Cu;
            goto label_21967c;
        }
    }
    ctx->pc = 0x2195ECu;
    // 0x2195ec: 0x3d2102a
    ctx->pc = 0x2195ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 18)));
    // 0x2195f0: 0x54400022
    ctx->pc = 0x2195F0u;
    {
        const bool branch_taken_0x2195f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2195f0) {
            ctx->pc = 0x2195F4u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
            ctx->pc = 0x21967Cu;
            goto label_21967c;
        }
    }
    ctx->pc = 0x2195F8u;
    // 0x2195f8: 0x8fa20080
    ctx->pc = 0x2195f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2195fc: 0x400013
    ctx->pc = 0x2195fcu;
    ctx->lo = GPR_U32(ctx, 2);
    // 0x219600: 0x2402001c
    ctx->pc = 0x219600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x219604: 0x72c28800
    ctx->pc = 0x219604u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x219608: 0x3c03003c
    ctx->pc = 0x219608u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21960c: 0x8c62d564
    ctx->pc = 0x21960cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294956388)));
    // 0x219610: 0x21080
    ctx->pc = 0x219610u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x219614: 0x2e21021
    ctx->pc = 0x219614u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x219618: 0x8c500000
    ctx->pc = 0x219618u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21961c: 0x32107fff
    ctx->pc = 0x21961cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 32767));
    // 0x219620: 0x108400
    ctx->pc = 0x219620u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 16));
    // 0x219624: 0x2168025
    ctx->pc = 0x219624u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x219628: 0xc0be862
    ctx->pc = 0x219628u;
    SET_GPR_U32(ctx, 31, 0x219630u);
    ctx->pc = 0x21962Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219630u; }
    }
    if (ctx->pc != 0x219630u) { return; }
    ctx->pc = 0x219630u;
    // 0x219630: 0x3a0202d
    ctx->pc = 0x219630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219634: 0x3c03003a
    ctx->pc = 0x219634u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x219638: 0x24656140
    ctx->pc = 0x219638u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 24896));
    // 0x21963c: 0x220302d
    ctx->pc = 0x21963cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219640: 0x200382d
    ctx->pc = 0x219640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219644: 0xc0b6252
    ctx->pc = 0x219644u;
    SET_GPR_U32(ctx, 31, 0x21964Cu);
    ctx->pc = 0x219648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21964Cu; }
    }
    if (ctx->pc != 0x21964Cu) { return; }
    ctx->pc = 0x21964Cu;
    // 0x21964c: 0x3c04003c
    ctx->pc = 0x21964cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x219650: 0x8c82d560
    ctx->pc = 0x219650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294956384)));
    // 0x219654: 0x3c0400ff
    ctx->pc = 0x219654u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x219658: 0x3484ffff
    ctx->pc = 0x219658u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x21965c: 0x2c21026
    ctx->pc = 0x21965cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x219660: 0x8fa30084
    ctx->pc = 0x219660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x219664: 0x62200a
    ctx->pc = 0x219664u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x219668: 0x24050019
    ctx->pc = 0x219668u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    // 0x21966c: 0x2543023
    ctx->pc = 0x21966cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x219670: 0xc0b4724
    ctx->pc = 0x219670u;
    SET_GPR_U32(ctx, 31, 0x219678u);
    ctx->pc = 0x219674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219678u; }
    }
    if (ctx->pc != 0x219678u) { return; }
    ctx->pc = 0x219678u;
    // 0x219678: 0x26d60001
    ctx->pc = 0x219678u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_21967c:
    // 0x21967c: 0x86a20024
    ctx->pc = 0x21967cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x219680: 0x2c2102a
    ctx->pc = 0x219680u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 2)));
    // 0x219684: 0x1440ffd6
    ctx->pc = 0x219684u;
    {
        const bool branch_taken_0x219684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x219688u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x219684) {
            ctx->pc = 0x2195E0u;
            goto label_2195e0;
        }
    }
    ctx->pc = 0x21968Cu;
label_21968c:
    // 0x21968c: 0x2a42001e
    ctx->pc = 0x21968cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 30));
    // 0x219690: 0x1040000c
    ctx->pc = 0x219690u;
    {
        const bool branch_taken_0x219690 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x219694u;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x219690) {
            ctx->pc = 0x2196C4u;
            goto label_2196c4;
        }
    }
    ctx->pc = 0x219698u;
    // 0x219698: 0x3c0400ff
    ctx->pc = 0x219698u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x21969c: 0x0
    ctx->pc = 0x21969cu;
    // NOP
label_2196a0:
    // 0x2196a0: 0x3484ffff
    ctx->pc = 0x2196a0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2196a4: 0x24050019
    ctx->pc = 0x2196a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    // 0x2196a8: 0x26460005
    ctx->pc = 0x2196a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 5));
    // 0x2196ac: 0xc0b4724
    ctx->pc = 0x2196ACu;
    SET_GPR_U32(ctx, 31, 0x2196B4u);
    ctx->pc = 0x2196B0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 24920));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2196B4u; }
    }
    if (ctx->pc != 0x2196B4u) { return; }
    ctx->pc = 0x2196B4u;
    // 0x2196b4: 0x26520001
    ctx->pc = 0x2196b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2196b8: 0x2a42001e
    ctx->pc = 0x2196b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 30));
    // 0x2196bc: 0x1440fff8
    ctx->pc = 0x2196BCu;
    {
        const bool branch_taken_0x2196bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2196C0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
        if (branch_taken_0x2196bc) {
            ctx->pc = 0x2196A0u;
            goto label_2196a0;
        }
    }
    ctx->pc = 0x2196C4u;
label_2196c4:
    // 0x2196c4: 0xdfbf0120
    ctx->pc = 0x2196c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2196c8: 0xdfbe0110
    ctx->pc = 0x2196c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2196cc: 0xdfb70100
    ctx->pc = 0x2196ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2196d0: 0xdfb600f0
    ctx->pc = 0x2196d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2196d4: 0xdfb500e0
    ctx->pc = 0x2196d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2196d8: 0xdfb400d0
    ctx->pc = 0x2196d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2196dc: 0xdfb300c0
    ctx->pc = 0x2196dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2196e0: 0xdfb200b0
    ctx->pc = 0x2196e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2196e4: 0xdfb100a0
    ctx->pc = 0x2196e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2196e8: 0xdfb00090
    ctx->pc = 0x2196e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2196ec: 0x3e00008
    ctx->pc = 0x2196ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2196F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219208u: goto label_219208;
            case 0x219260u: goto label_219260;
            case 0x2192C0u: goto label_2192c0;
            case 0x2192F0u: goto label_2192f0;
            case 0x219304u: goto label_219304;
            case 0x219310u: goto label_219310;
            case 0x219320u: goto label_219320;
            case 0x219370u: goto label_219370;
            case 0x219380u: goto label_219380;
            case 0x2193ECu: goto label_2193ec;
            case 0x219408u: goto label_219408;
            case 0x219484u: goto label_219484;
            case 0x219498u: goto label_219498;
            case 0x2194A8u: goto label_2194a8;
            case 0x2194BCu: goto label_2194bc;
            case 0x2194D0u: goto label_2194d0;
            case 0x2194F8u: goto label_2194f8;
            case 0x2195C8u: goto label_2195c8;
            case 0x2195E0u: goto label_2195e0;
            case 0x21967Cu: goto label_21967c;
            case 0x21968Cu: goto label_21968c;
            case 0x2196A0u: goto label_2196a0;
            case 0x2196C4u: goto label_2196c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2196F4u;
}
