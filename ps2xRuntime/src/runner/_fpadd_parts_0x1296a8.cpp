#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _fpadd_parts
// Address: 0x1296a8 - 0x1298dc
void _fpadd_parts_0x1296a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1296a8u;

    // 0x1296a8: 0x80482d
    ctx->pc = 0x1296a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296ac: 0x8d240000
    ctx->pc = 0x1296acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1296b0: 0x2c820002
    ctx->pc = 0x1296b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x1296b4: 0x50400003
    ctx->pc = 0x1296B4u;
    {
        const bool branch_taken_0x1296b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1296b4) {
            ctx->pc = 0x1296B8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x1296C4u;
            goto label_1296c4;
        }
    }
    ctx->pc = 0x1296BCu;
label_1296bc:
    // 0x1296bc: 0x3e00008
    ctx->pc = 0x1296BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D8u: goto label_1296d8;
            case 0x129700u: goto label_129700;
            case 0x129750u: goto label_129750;
            case 0x129790u: goto label_129790;
            case 0x1297B4u: goto label_1297b4;
            case 0x1297BCu: goto label_1297bc;
            case 0x1297C8u: goto label_1297c8;
            case 0x1297ECu: goto label_1297ec;
            case 0x129804u: goto label_129804;
            case 0x129810u: goto label_129810;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x12984Cu: goto label_12984c;
            case 0x129870u: goto label_129870;
            case 0x12989Cu: goto label_12989c;
            case 0x1298ACu: goto label_1298ac;
            case 0x1298D4u: goto label_1298d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1296C4u;
label_1296c4:
    // 0x1296c4: 0x2c620002
    ctx->pc = 0x1296c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x1296c8: 0x10400003
    ctx->pc = 0x1296C8u;
    {
        const bool branch_taken_0x1296c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1296CCu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1296c8) {
            ctx->pc = 0x1296D8u;
            goto label_1296d8;
        }
    }
    ctx->pc = 0x1296D0u;
label_1296d0:
    // 0x1296d0: 0x3e00008
    ctx->pc = 0x1296D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D8u: goto label_1296d8;
            case 0x129700u: goto label_129700;
            case 0x129750u: goto label_129750;
            case 0x129790u: goto label_129790;
            case 0x1297B4u: goto label_1297b4;
            case 0x1297BCu: goto label_1297bc;
            case 0x1297C8u: goto label_1297c8;
            case 0x1297ECu: goto label_1297ec;
            case 0x129804u: goto label_129804;
            case 0x129810u: goto label_129810;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x12984Cu: goto label_12984c;
            case 0x129870u: goto label_129870;
            case 0x12989Cu: goto label_12989c;
            case 0x1298ACu: goto label_1298ac;
            case 0x1298D4u: goto label_1298d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1296D8u;
label_1296d8:
    // 0x1296d8: 0x14400009
    ctx->pc = 0x1296D8u;
    {
        const bool branch_taken_0x1296d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1296DCu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1296d8) {
            ctx->pc = 0x129700u;
            goto label_129700;
        }
    }
    ctx->pc = 0x1296E0u;
    // 0x1296e0: 0x1440fff6
    ctx->pc = 0x1296E0u;
    {
        const bool branch_taken_0x1296e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1296e0) {
            ctx->pc = 0x1296BCu;
            goto label_1296bc;
        }
    }
    ctx->pc = 0x1296E8u;
    // 0x1296e8: 0x8ca30004
    ctx->pc = 0x1296e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1296ec: 0x8d220004
    ctx->pc = 0x1296ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1296f0: 0x1043fff2
    ctx->pc = 0x1296F0u;
    {
        const bool branch_taken_0x1296f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1296F4u;
        SET_GPR_S32(ctx, 2, ((uint32_t)117 << 16));
        if (branch_taken_0x1296f0) {
            ctx->pc = 0x1296BCu;
            goto label_1296bc;
        }
    }
    ctx->pc = 0x1296F8u;
    // 0x1296f8: 0x3e00008
    ctx->pc = 0x1296F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960392));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D8u: goto label_1296d8;
            case 0x129700u: goto label_129700;
            case 0x129750u: goto label_129750;
            case 0x129790u: goto label_129790;
            case 0x1297B4u: goto label_1297b4;
            case 0x1297BCu: goto label_1297bc;
            case 0x1297C8u: goto label_1297c8;
            case 0x1297ECu: goto label_1297ec;
            case 0x129804u: goto label_129804;
            case 0x129810u: goto label_129810;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x12984Cu: goto label_12984c;
            case 0x129870u: goto label_129870;
            case 0x12989Cu: goto label_12989c;
            case 0x1298ACu: goto label_1298ac;
            case 0x1298D4u: goto label_1298d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129700u;
label_129700:
    // 0x129700: 0x1040fff3
    ctx->pc = 0x129700u;
    {
        const bool branch_taken_0x129700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x129704u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x129700) {
            ctx->pc = 0x1296D0u;
            goto label_1296d0;
        }
    }
    ctx->pc = 0x129708u;
    // 0x129708: 0x14400011
    ctx->pc = 0x129708u;
    {
        const bool branch_taken_0x129708 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12970Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x129708) {
            ctx->pc = 0x129750u;
            goto label_129750;
        }
    }
    ctx->pc = 0x129710u;
    // 0x129710: 0x1440ffea
    ctx->pc = 0x129710u;
    {
        const bool branch_taken_0x129710 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x129710) {
            ctx->pc = 0x1296BCu;
            goto label_1296bc;
        }
    }
    ctx->pc = 0x129718u;
    // 0x129718: 0x69220007
    ctx->pc = 0x129718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x12971c: 0x6d220000
    ctx->pc = 0x12971cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x129720: 0x6923000f
    ctx->pc = 0x129720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x129724: 0x6d230008
    ctx->pc = 0x129724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x129728: 0xb0c20007
    ctx->pc = 0x129728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12972c: 0xb4c20000
    ctx->pc = 0x12972cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129730: 0xb0c3000f
    ctx->pc = 0x129730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129734: 0xb4c30008
    ctx->pc = 0x129734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129738: 0x8d230004
    ctx->pc = 0x129738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x12973c: 0xc0102d
    ctx->pc = 0x12973cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129740: 0x8ca40004
    ctx->pc = 0x129740u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x129744: 0x641824
    ctx->pc = 0x129744u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x129748: 0x3e00008
    ctx->pc = 0x129748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12974Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D8u: goto label_1296d8;
            case 0x129700u: goto label_129700;
            case 0x129750u: goto label_129750;
            case 0x129790u: goto label_129790;
            case 0x1297B4u: goto label_1297b4;
            case 0x1297BCu: goto label_1297bc;
            case 0x1297C8u: goto label_1297c8;
            case 0x1297ECu: goto label_1297ec;
            case 0x129804u: goto label_129804;
            case 0x129810u: goto label_129810;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x12984Cu: goto label_12984c;
            case 0x129870u: goto label_129870;
            case 0x12989Cu: goto label_12989c;
            case 0x1298ACu: goto label_1298ac;
            case 0x1298D4u: goto label_1298d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129750u;
label_129750:
    // 0x129750: 0x1040ffdf
    ctx->pc = 0x129750u;
    {
        const bool branch_taken_0x129750 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x129754u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x129750) {
            ctx->pc = 0x1296D0u;
            goto label_1296d0;
        }
    }
    ctx->pc = 0x129758u;
    // 0x129758: 0x8d270008
    ctx->pc = 0x129758u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x12975c: 0x8ca80008
    ctx->pc = 0x12975cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x129760: 0x8d2b000c
    ctx->pc = 0x129760u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x129764: 0xe81823
    ctx->pc = 0x129764u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x129768: 0x43102a
    ctx->pc = 0x129768u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x12976c: 0x32023
    ctx->pc = 0x12976cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x129770: 0x82180a
    ctx->pc = 0x129770u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x129774: 0x28630020
    ctx->pc = 0x129774u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 32));
    // 0x129778: 0x1060001c
    ctx->pc = 0x129778u;
    {
        const bool branch_taken_0x129778 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12977Cu;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 12)));
        if (branch_taken_0x129778) {
            ctx->pc = 0x1297ECu;
            goto label_1297ec;
        }
    }
    ctx->pc = 0x129780u;
    // 0x129780: 0x107102a
    ctx->pc = 0x129780u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x129784: 0x1040000b
    ctx->pc = 0x129784u;
    {
        const bool branch_taken_0x129784 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x129788u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 4)));
        if (branch_taken_0x129784) {
            ctx->pc = 0x1297B4u;
            goto label_1297b4;
        }
    }
    ctx->pc = 0x12978Cu;
    // 0x12978c: 0x8ca50004
    ctx->pc = 0x12978cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_129790:
    // 0x129790: 0xa1042
    ctx->pc = 0x129790u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 10), 1));
    // 0x129794: 0x25080001
    ctx->pc = 0x129794u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x129798: 0x31430001
    ctx->pc = 0x129798u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 10), 1));
    // 0x12979c: 0x107202a
    ctx->pc = 0x12979cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x1297a0: 0x625025
    ctx->pc = 0x1297a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1297a4: 0x1480fffa
    ctx->pc = 0x1297A4u;
    {
        const bool branch_taken_0x1297a4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1297a4) {
            ctx->pc = 0x129790u;
            goto label_129790;
        }
    }
    ctx->pc = 0x1297ACu;
    // 0x1297ac: 0x10000003
    ctx->pc = 0x1297ACu;
    {
        const bool branch_taken_0x1297ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1297B0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
        if (branch_taken_0x1297ac) {
            ctx->pc = 0x1297BCu;
            goto label_1297bc;
        }
    }
    ctx->pc = 0x1297B4u;
label_1297b4:
    // 0x1297b4: 0x8ca50004
    ctx->pc = 0x1297b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1297b8: 0xe8102a
    ctx->pc = 0x1297b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
label_1297bc:
    // 0x1297bc: 0x10400014
    ctx->pc = 0x1297BCu;
    {
        const bool branch_taken_0x1297bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1297bc) {
            ctx->pc = 0x129810u;
            goto label_129810;
        }
    }
    ctx->pc = 0x1297C4u;
    // 0x1297c4: 0x1073823
    ctx->pc = 0x1297c4u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1297c8:
    // 0x1297c8: 0xb1842
    ctx->pc = 0x1297c8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 11), 1));
    // 0x1297cc: 0x31620001
    ctx->pc = 0x1297ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), 1));
    // 0x1297d0: 0x435825
    ctx->pc = 0x1297d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1297d4: 0x24e7ffff
    ctx->pc = 0x1297d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1297d8: 0x0
    ctx->pc = 0x1297d8u;
    // NOP
    // 0x1297dc: 0x14e0fffa
    ctx->pc = 0x1297DCu;
    {
        const bool branch_taken_0x1297dc = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x1297dc) {
            ctx->pc = 0x1297C8u;
            goto label_1297c8;
        }
    }
    ctx->pc = 0x1297E4u;
    // 0x1297e4: 0x1000000a
    ctx->pc = 0x1297E4u;
    {
        const bool branch_taken_0x1297e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1297E8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1297e4) {
            ctx->pc = 0x129810u;
            goto label_129810;
        }
    }
    ctx->pc = 0x1297ECu;
label_1297ec:
    // 0x1297ec: 0x107102a
    ctx->pc = 0x1297ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x1297f0: 0x10400004
    ctx->pc = 0x1297F0u;
    {
        const bool branch_taken_0x1297f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1297F4u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 4)));
        if (branch_taken_0x1297f0) {
            ctx->pc = 0x129804u;
            goto label_129804;
        }
    }
    ctx->pc = 0x1297F8u;
    // 0x1297f8: 0x502d
    ctx->pc = 0x1297f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297fc: 0x10000004
    ctx->pc = 0x1297FCu;
    {
        const bool branch_taken_0x1297fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129800u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x1297fc) {
            ctx->pc = 0x129810u;
            goto label_129810;
        }
    }
    ctx->pc = 0x129804u;
label_129804:
    // 0x129804: 0x100382d
    ctx->pc = 0x129804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129808: 0x8ca50004
    ctx->pc = 0x129808u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12980c: 0x582d
    ctx->pc = 0x12980cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129810:
    // 0x129810: 0x11250022
    ctx->pc = 0x129810u;
    {
        const bool branch_taken_0x129810 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        ctx->pc = 0x129814u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        if (branch_taken_0x129810) {
            ctx->pc = 0x12989Cu;
            goto label_12989c;
        }
    }
    ctx->pc = 0x129818u;
    // 0x129818: 0x15200002
    ctx->pc = 0x129818u;
    {
        const bool branch_taken_0x129818 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x12981Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        if (branch_taken_0x129818) {
            ctx->pc = 0x129824u;
            goto label_129824;
        }
    }
    ctx->pc = 0x129820u;
    // 0x129820: 0x16a1023
    ctx->pc = 0x129820u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_129824:
    // 0x129824: 0x4400005
    ctx->pc = 0x129824u;
    {
        const bool branch_taken_0x129824 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x129828u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x129824) {
            ctx->pc = 0x12983Cu;
            goto label_12983c;
        }
    }
    ctx->pc = 0x12982Cu;
    // 0x12982c: 0xacc70008
    ctx->pc = 0x12982cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x129830: 0xacc2000c
    ctx->pc = 0x129830u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x129834: 0x10000005
    ctx->pc = 0x129834u;
    {
        const bool branch_taken_0x129834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129838u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x129834) {
            ctx->pc = 0x12984Cu;
            goto label_12984c;
        }
    }
    ctx->pc = 0x12983Cu;
label_12983c:
    // 0x12983c: 0xacc70008
    ctx->pc = 0x12983cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x129840: 0x24020001
    ctx->pc = 0x129840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x129844: 0xacc3000c
    ctx->pc = 0x129844u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x129848: 0xacc20004
    ctx->pc = 0x129848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_12984c:
    // 0x12984c: 0x8cc5000c
    ctx->pc = 0x12984cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x129850: 0x3c023fff
    ctx->pc = 0x129850u;
    SET_GPR_S32(ctx, 2, ((uint32_t)16383 << 16));
    // 0x129854: 0x3442fffe
    ctx->pc = 0x129854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65534);
    // 0x129858: 0x24a3ffff
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12985c: 0x43102b
    ctx->pc = 0x12985cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129860: 0x14400012
    ctx->pc = 0x129860u;
    {
        const bool branch_taken_0x129860 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x129864u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129860) {
            ctx->pc = 0x1298ACu;
            goto label_1298ac;
        }
    }
    ctx->pc = 0x129868u;
    // 0x129868: 0x3c053fff
    ctx->pc = 0x129868u;
    SET_GPR_S32(ctx, 5, ((uint32_t)16383 << 16));
    // 0x12986c: 0x34a5fffe
    ctx->pc = 0x12986cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)65534);
label_129870:
    // 0x129870: 0x8cc20008
    ctx->pc = 0x129870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x129874: 0x72040
    ctx->pc = 0x129874u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 1));
    // 0x129878: 0x2483ffff
    ctx->pc = 0x129878u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12987c: 0xacc4000c
    ctx->pc = 0x12987cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x129880: 0x2442ffff
    ctx->pc = 0x129880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x129884: 0xa3182b
    ctx->pc = 0x129884u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x129888: 0xacc20008
    ctx->pc = 0x129888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x12988c: 0x1060fff8
    ctx->pc = 0x12988Cu;
    {
        const bool branch_taken_0x12988c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x129890u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12988c) {
            ctx->pc = 0x129870u;
            goto label_129870;
        }
    }
    ctx->pc = 0x129894u;
    // 0x129894: 0x10000005
    ctx->pc = 0x129894u;
    {
        const bool branch_taken_0x129894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129898u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129894) {
            ctx->pc = 0x1298ACu;
            goto label_1298ac;
        }
    }
    ctx->pc = 0x12989Cu;
label_12989c:
    // 0x12989c: 0xacc90004
    ctx->pc = 0x12989cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x1298a0: 0xacc70008
    ctx->pc = 0x1298a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x1298a4: 0x40282d
    ctx->pc = 0x1298a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298a8: 0xacc2000c
    ctx->pc = 0x1298a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1298ac:
    // 0x1298ac: 0x24020003
    ctx->pc = 0x1298acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1298b0: 0x4a10008
    ctx->pc = 0x1298B0u;
    {
        const bool branch_taken_0x1298b0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1298B4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1298b0) {
            ctx->pc = 0x1298D4u;
            goto label_1298d4;
        }
    }
    ctx->pc = 0x1298B8u;
    // 0x1298b8: 0x8cc20008
    ctx->pc = 0x1298b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1298bc: 0x52042
    ctx->pc = 0x1298bcu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 5), 1));
    // 0x1298c0: 0x30a30001
    ctx->pc = 0x1298c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x1298c4: 0x641825
    ctx->pc = 0x1298c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1298c8: 0x24420001
    ctx->pc = 0x1298c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1298cc: 0xacc3000c
    ctx->pc = 0x1298ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1298d0: 0xacc20008
    ctx->pc = 0x1298d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1298d4:
    // 0x1298d4: 0x3e00008
    ctx->pc = 0x1298D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1298D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1296BCu: goto label_1296bc;
            case 0x1296C4u: goto label_1296c4;
            case 0x1296D0u: goto label_1296d0;
            case 0x1296D8u: goto label_1296d8;
            case 0x129700u: goto label_129700;
            case 0x129750u: goto label_129750;
            case 0x129790u: goto label_129790;
            case 0x1297B4u: goto label_1297b4;
            case 0x1297BCu: goto label_1297bc;
            case 0x1297C8u: goto label_1297c8;
            case 0x1297ECu: goto label_1297ec;
            case 0x129804u: goto label_129804;
            case 0x129810u: goto label_129810;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x12984Cu: goto label_12984c;
            case 0x129870u: goto label_129870;
            case 0x12989Cu: goto label_12989c;
            case 0x1298ACu: goto label_1298ac;
            case 0x1298D4u: goto label_1298d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1298DCu;
}
