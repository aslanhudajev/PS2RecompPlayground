#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: draw_inventory_panel
// Address: 0x2297c0 - 0x229d98
void draw_inventory_panel_0x2297c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2297c0u;

    // 0x2297c0: 0x27bdff40
    ctx->pc = 0x2297c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2297c4: 0xffbf00a0
    ctx->pc = 0x2297c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2297c8: 0xffbe0090
    ctx->pc = 0x2297c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2297cc: 0xffb70080
    ctx->pc = 0x2297ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2297d0: 0xffb60070
    ctx->pc = 0x2297d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2297d4: 0xffb50060
    ctx->pc = 0x2297d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2297d8: 0xffb40050
    ctx->pc = 0x2297d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2297dc: 0xffb30040
    ctx->pc = 0x2297dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2297e0: 0xffb20030
    ctx->pc = 0x2297e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2297e4: 0xffb10020
    ctx->pc = 0x2297e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2297e8: 0xffb00010
    ctx->pc = 0x2297e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2297ec: 0xe7b400b0
    ctx->pc = 0x2297ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2297f0: 0x80902d
    ctx->pc = 0x2297f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297f4: 0xafa00000
    ctx->pc = 0x2297f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2297f8: 0xafa00004
    ctx->pc = 0x2297f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2297fc: 0x24032b00
    ctx->pc = 0x2297fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x229800: 0x2431818
    ctx->pc = 0x229800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229804: 0x3c020032
    ctx->pc = 0x229804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229808: 0x24421bc0
    ctx->pc = 0x229808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x22980c: 0x62b821
    ctx->pc = 0x22980cu;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229810: 0x3c02003c
    ctx->pc = 0x229810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229814: 0x244218a0
    ctx->pc = 0x229814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6304));
    // 0x229818: 0x121880
    ctx->pc = 0x229818u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x22981c: 0x621021
    ctx->pc = 0x22981cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229820: 0x8c550000
    ctx->pc = 0x229820u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229824: 0x16a0000a
    ctx->pc = 0x229824u;
    {
        const bool branch_taken_0x229824 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x229828u;
        SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 18), 7));
        if (branch_taken_0x229824) {
            ctx->pc = 0x229850u;
            goto label_229850;
        }
    }
    ctx->pc = 0x22982Cu;
    // 0x22982c: 0x3c02003c
    ctx->pc = 0x22982cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229830: 0x244218b0
    ctx->pc = 0x229830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6320));
    // 0x229834: 0x621021
    ctx->pc = 0x229834u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229838: 0xc4540000
    ctx->pc = 0x229838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22983c: 0x4680a520
    ctx->pc = 0x22983cu;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x229840: 0x3c0142f0
    ctx->pc = 0x229840u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17136 << 16));
    // 0x229844: 0x44810000
    ctx->pc = 0x229844u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x229848: 0x10000009
    ctx->pc = 0x229848u;
    {
        const bool branch_taken_0x229848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x229848) {
            ctx->pc = 0x229870u;
            goto label_229870;
        }
    }
    ctx->pc = 0x229850u;
label_229850:
    // 0x229850: 0x3c02003c
    ctx->pc = 0x229850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229854: 0x244218b0
    ctx->pc = 0x229854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6320));
    // 0x229858: 0x121880
    ctx->pc = 0x229858u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
    // 0x22985c: 0x621821
    ctx->pc = 0x22985cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229860: 0xc4740000
    ctx->pc = 0x229860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229864: 0x4680a520
    ctx->pc = 0x229864u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x229868: 0x3c014170
    ctx->pc = 0x229868u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x22986c: 0x44810000
    ctx->pc = 0x22986cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_229870:
    // 0x229870: 0x0
    ctx->pc = 0x229870u;
    // NOP
    // 0x229874: 0x0
    ctx->pc = 0x229874u;
    // NOP
    // 0x229878: 0x4600a503
    ctx->pc = 0x229878u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x22987c: 0x8ee200fc
    ctx->pc = 0x22987cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 252)));
    // 0x229880: 0x14400003
    ctx->pc = 0x229880u;
    {
        const bool branch_taken_0x229880 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229884u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x229880) {
            ctx->pc = 0x229890u;
            goto label_229890;
        }
    }
    ctx->pc = 0x229888u;
    // 0x229888: 0x10000136
    ctx->pc = 0x229888u;
    {
        const bool branch_taken_0x229888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22988Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x229888) {
            ctx->pc = 0x229D64u;
            goto label_229d64;
        }
    }
    ctx->pc = 0x229890u;
label_229890:
    // 0x229890: 0x246310c8
    ctx->pc = 0x229890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4296));
    // 0x229894: 0x24020030
    ctx->pc = 0x229894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x229898: 0x2421018
    ctx->pc = 0x229898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22989c: 0x431021
    ctx->pc = 0x22989cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2298a0: 0x8c420000
    ctx->pc = 0x2298a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2298a4: 0x14400050
    ctx->pc = 0x2298A4u;
    {
        const bool branch_taken_0x2298a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2298A8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2298a4) {
            ctx->pc = 0x2299E8u;
            goto label_2299e8;
        }
    }
    ctx->pc = 0x2298ACu;
    // 0x2298ac: 0x241e0024
    ctx->pc = 0x2298acu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2298b0: 0x3c020032
    ctx->pc = 0x2298b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2298b4: 0x24560b00
    ctx->pc = 0x2298b4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 2816));
    // 0x2298b8: 0x3c020032
    ctx->pc = 0x2298b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2298bc: 0x245410c8
    ctx->pc = 0x2298bcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4296));
    // 0x2298c0: 0x24020030
    ctx->pc = 0x2298c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2298c4: 0x2428818
    ctx->pc = 0x2298c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2298c8: 0x21e1018
    ctx->pc = 0x2298c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2298cc: 0x0
    ctx->pc = 0x2298ccu;
    // NOP
label_2298d0:
    // 0x2298d0: 0x562021
    ctx->pc = 0x2298d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2298d4: 0x260282d
    ctx->pc = 0x2298d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298d8: 0xc08a508
    ctx->pc = 0x2298D8u;
    SET_GPR_U32(ctx, 31, 0x2298E0u);
    ctx->pc = 0x2298DCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229420u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_piece_0x229420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2298E0u; }
    }
    if (ctx->pc != 0x2298E0u) { return; }
    ctx->pc = 0x2298E0u;
    // 0x2298e0: 0x101880
    ctx->pc = 0x2298e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2298e4: 0x711821
    ctx->pc = 0x2298e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2298e8: 0x741821
    ctx->pc = 0x2298e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2298ec: 0xac620000
    ctx->pc = 0x2298ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2298f0: 0x26100001
    ctx->pc = 0x2298f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2298f4: 0x2a02000c
    ctx->pc = 0x2298f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 12));
    // 0x2298f8: 0x1440fff5
    ctx->pc = 0x2298F8u;
    {
        const bool branch_taken_0x2298f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2298FCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2298f8) {
            ctx->pc = 0x2298D0u;
            goto label_2298d0;
        }
    }
    ctx->pc = 0x229900u;
    // 0x229900: 0x802d
    ctx->pc = 0x229900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229904: 0x3c020032
    ctx->pc = 0x229904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229908: 0x245e0e88
    ctx->pc = 0x229908u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 3720));
    // 0x22990c: 0x3c16003a
    ctx->pc = 0x22990cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)58 << 16));
    // 0x229910: 0x3c020032
    ctx->pc = 0x229910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229914: 0x245411c8
    ctx->pc = 0x229914u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4552));
    // 0x229918: 0x24020030
    ctx->pc = 0x229918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x22991c: 0x2428818
    ctx->pc = 0x22991cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229920: 0x240202d
    ctx->pc = 0x229920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229924: 0x0
    ctx->pc = 0x229924u;
    // NOP
label_229928:
    // 0x229928: 0xc09dad6
    ctx->pc = 0x229928u;
    SET_GPR_U32(ctx, 31, 0x229930u);
    ctx->pc = 0x22992Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x276B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasLegendItem_0x276b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229930u; }
    }
    if (ctx->pc != 0x229930u) { return; }
    ctx->pc = 0x229930u;
    // 0x229930: 0x24030024
    ctx->pc = 0x229930u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
    // 0x229934: 0x2031818
    ctx->pc = 0x229934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229938: 0x7e2021
    ctx->pc = 0x229938u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x22993c: 0x14400002
    ctx->pc = 0x22993Cu;
    {
        const bool branch_taken_0x22993c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229940u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22993c) {
            ctx->pc = 0x229948u;
            goto label_229948;
        }
    }
    ctx->pc = 0x229944u;
    // 0x229944: 0x26c66ff8
    ctx->pc = 0x229944u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 22), 28664));
label_229948:
    // 0x229948: 0xc08a508
    ctx->pc = 0x229948u;
    SET_GPR_U32(ctx, 31, 0x229950u);
    ctx->pc = 0x22994Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229420u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_piece_0x229420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229950u; }
    }
    if (ctx->pc != 0x229950u) { return; }
    ctx->pc = 0x229950u;
    // 0x229950: 0x101880
    ctx->pc = 0x229950u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x229954: 0x711821
    ctx->pc = 0x229954u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x229958: 0x741821
    ctx->pc = 0x229958u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x22995c: 0xac620000
    ctx->pc = 0x22995cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x229960: 0x26100001
    ctx->pc = 0x229960u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x229964: 0x2e02000c
    ctx->pc = 0x229964u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 12));
    // 0x229968: 0x1440ffef
    ctx->pc = 0x229968u;
    {
        const bool branch_taken_0x229968 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22996Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x229968) {
            ctx->pc = 0x229928u;
            goto label_229928;
        }
    }
    ctx->pc = 0x229970u;
    // 0x229970: 0x802d
    ctx->pc = 0x229970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229974: 0x24160024
    ctx->pc = 0x229974u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 36));
    // 0x229978: 0x3c020032
    ctx->pc = 0x229978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22997c: 0x245e0cb0
    ctx->pc = 0x22997cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 3248));
    // 0x229980: 0x3c020032
    ctx->pc = 0x229980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229984: 0x24541288
    ctx->pc = 0x229984u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4744));
    // 0x229988: 0x2568818
    ctx->pc = 0x229988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22998c: 0x0
    ctx->pc = 0x22998cu;
    // NOP
label_229990:
    // 0x229990: 0xc09da6e
    ctx->pc = 0x229990u;
    SET_GPR_U32(ctx, 31, 0x229998u);
    ctx->pc = 0x229994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2769B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasShard_0x2769b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229998u; }
    }
    if (ctx->pc != 0x229998u) { return; }
    ctx->pc = 0x229998u;
    // 0x229998: 0x1040000a
    ctx->pc = 0x229998u;
    {
        const bool branch_taken_0x229998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22999Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x229998) {
            ctx->pc = 0x2299C4u;
            goto label_2299c4;
        }
    }
    ctx->pc = 0x2299A0u;
    // 0x2299a0: 0x5e2021
    ctx->pc = 0x2299a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2299a4: 0x260282d
    ctx->pc = 0x2299a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2299a8: 0xc08a508
    ctx->pc = 0x2299A8u;
    SET_GPR_U32(ctx, 31, 0x2299B0u);
    ctx->pc = 0x2299ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229420u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_piece_0x229420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2299B0u; }
    }
    if (ctx->pc != 0x2299B0u) { return; }
    ctx->pc = 0x2299B0u;
    // 0x2299b0: 0x101880
    ctx->pc = 0x2299b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2299b4: 0x711821
    ctx->pc = 0x2299b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2299b8: 0x741821
    ctx->pc = 0x2299b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2299bc: 0x10000005
    ctx->pc = 0x2299BCu;
    {
        const bool branch_taken_0x2299bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2299C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2299bc) {
            ctx->pc = 0x2299D4u;
            goto label_2299d4;
        }
    }
    ctx->pc = 0x2299C4u;
label_2299c4:
    // 0x2299c4: 0x101080
    ctx->pc = 0x2299c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2299c8: 0x511021
    ctx->pc = 0x2299c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2299cc: 0x541021
    ctx->pc = 0x2299ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2299d0: 0xac400000
    ctx->pc = 0x2299d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2299d4:
    // 0x2299d4: 0x26100001
    ctx->pc = 0x2299d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2299d8: 0x2e020009
    ctx->pc = 0x2299d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 9));
    // 0x2299dc: 0x1440ffec
    ctx->pc = 0x2299DCu;
    {
        const bool branch_taken_0x2299dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2299E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2299dc) {
            ctx->pc = 0x229990u;
            goto label_229990;
        }
    }
    ctx->pc = 0x2299E4u;
    // 0x2299e4: 0x802d
    ctx->pc = 0x2299e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2299e8:
    // 0x2299e8: 0x241e0024
    ctx->pc = 0x2299e8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2299ec: 0x3c020032
    ctx->pc = 0x2299ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2299f0: 0x24560b00
    ctx->pc = 0x2299f0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 2816));
    // 0x2299f4: 0x3c020032
    ctx->pc = 0x2299f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2299f8: 0x245410c8
    ctx->pc = 0x2299f8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4296));
    // 0x2299fc: 0x24020030
    ctx->pc = 0x2299fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x229a00: 0x2428818
    ctx->pc = 0x229a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229a04: 0x101080
    ctx->pc = 0x229a04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_229a08:
    // 0x229a08: 0x511021
    ctx->pc = 0x229a08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x229a0c: 0x541021
    ctx->pc = 0x229a0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x229a10: 0x21e1818
    ctx->pc = 0x229a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229a14: 0x762021
    ctx->pc = 0x229a14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x229a18: 0x8c450000
    ctx->pc = 0x229a18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229a1c: 0x260302d
    ctx->pc = 0x229a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a20: 0x2a0382d
    ctx->pc = 0x229a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a24: 0xc08a546
    ctx->pc = 0x229A24u;
    SET_GPR_U32(ctx, 31, 0x229A2Cu);
    ctx->pc = 0x229A28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x229518u;
    {
        const uint32_t __entryPc = ctx->pc;
        animate_panel_piece_0x229518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A2Cu; }
    }
    if (ctx->pc != 0x229A2Cu) { return; }
    ctx->pc = 0x229A2Cu;
    // 0x229a2c: 0x26100001
    ctx->pc = 0x229a2cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x229a30: 0x2a02000c
    ctx->pc = 0x229a30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 12));
    // 0x229a34: 0x1440fff4
    ctx->pc = 0x229A34u;
    {
        const bool branch_taken_0x229a34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229A38u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x229a34) {
            ctx->pc = 0x229A08u;
            goto label_229a08;
        }
    }
    ctx->pc = 0x229A3Cu;
    // 0x229a3c: 0x802d
    ctx->pc = 0x229a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a40: 0x241e0024
    ctx->pc = 0x229a40u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 36));
    // 0x229a44: 0x3c020032
    ctx->pc = 0x229a44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229a48: 0x24560e88
    ctx->pc = 0x229a48u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 3720));
    // 0x229a4c: 0x3c020032
    ctx->pc = 0x229a4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229a50: 0x245411c8
    ctx->pc = 0x229a50u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4552));
    // 0x229a54: 0x24020030
    ctx->pc = 0x229a54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x229a58: 0x2428818
    ctx->pc = 0x229a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229a5c: 0x101080
    ctx->pc = 0x229a5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_229a60:
    // 0x229a60: 0x511021
    ctx->pc = 0x229a60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x229a64: 0x541021
    ctx->pc = 0x229a64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x229a68: 0x21e1818
    ctx->pc = 0x229a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229a6c: 0x762021
    ctx->pc = 0x229a6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x229a70: 0x8c450000
    ctx->pc = 0x229a70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229a74: 0x260302d
    ctx->pc = 0x229a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a78: 0x2a0382d
    ctx->pc = 0x229a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a7c: 0xc08a546
    ctx->pc = 0x229A7Cu;
    SET_GPR_U32(ctx, 31, 0x229A84u);
    ctx->pc = 0x229A80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x229518u;
    {
        const uint32_t __entryPc = ctx->pc;
        animate_panel_piece_0x229518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229A84u; }
    }
    if (ctx->pc != 0x229A84u) { return; }
    ctx->pc = 0x229A84u;
    // 0x229a84: 0x26100001
    ctx->pc = 0x229a84u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x229a88: 0x2e02000c
    ctx->pc = 0x229a88u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 12));
    // 0x229a8c: 0x1440fff4
    ctx->pc = 0x229A8Cu;
    {
        const bool branch_taken_0x229a8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229A90u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x229a8c) {
            ctx->pc = 0x229A60u;
            goto label_229a60;
        }
    }
    ctx->pc = 0x229A94u;
    // 0x229a94: 0x802d
    ctx->pc = 0x229a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229a98: 0x24110024
    ctx->pc = 0x229a98u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 36));
    // 0x229a9c: 0x3c020032
    ctx->pc = 0x229a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229aa0: 0x245e0cb0
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 3248));
    // 0x229aa4: 0x3c020032
    ctx->pc = 0x229aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229aa8: 0x24561288
    ctx->pc = 0x229aa8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4744));
    // 0x229aac: 0x251a018
    ctx->pc = 0x229aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229ab0: 0x101080
    ctx->pc = 0x229ab0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x229ab4: 0x0
    ctx->pc = 0x229ab4u;
    // NOP
label_229ab8:
    // 0x229ab8: 0x541021
    ctx->pc = 0x229ab8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x229abc: 0x561021
    ctx->pc = 0x229abcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x229ac0: 0x2111818
    ctx->pc = 0x229ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229ac4: 0x7e2021
    ctx->pc = 0x229ac4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x229ac8: 0x8c450000
    ctx->pc = 0x229ac8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229acc: 0x260302d
    ctx->pc = 0x229accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ad0: 0x2a0382d
    ctx->pc = 0x229ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ad4: 0xc08a546
    ctx->pc = 0x229AD4u;
    SET_GPR_U32(ctx, 31, 0x229ADCu);
    ctx->pc = 0x229AD8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x229518u;
    {
        const uint32_t __entryPc = ctx->pc;
        animate_panel_piece_0x229518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229ADCu; }
    }
    if (ctx->pc != 0x229ADCu) { return; }
    ctx->pc = 0x229ADCu;
    // 0x229adc: 0x26100001
    ctx->pc = 0x229adcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x229ae0: 0x2e020009
    ctx->pc = 0x229ae0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 9));
    // 0x229ae4: 0x1440fff4
    ctx->pc = 0x229AE4u;
    {
        const bool branch_taken_0x229ae4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229AE8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x229ae4) {
            ctx->pc = 0x229AB8u;
            goto label_229ab8;
        }
    }
    ctx->pc = 0x229AECu;
    // 0x229aec: 0x24020001
    ctx->pc = 0x229aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x229af0: 0x52a20016
    ctx->pc = 0x229AF0u;
    {
        const bool branch_taken_0x229af0 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        if (branch_taken_0x229af0) {
            ctx->pc = 0x229AF4u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x229B4Cu;
            goto label_229b4c;
        }
    }
    ctx->pc = 0x229AF8u;
    // 0x229af8: 0x12a00005
    ctx->pc = 0x229AF8u;
    {
        const bool branch_taken_0x229af8 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x229AFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x229af8) {
            ctx->pc = 0x229B10u;
            goto label_229b10;
        }
    }
    ctx->pc = 0x229B00u;
    // 0x229b00: 0x12a2000d
    ctx->pc = 0x229B00u;
    {
        const bool branch_taken_0x229b00 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        if (branch_taken_0x229b00) {
            ctx->pc = 0x229B38u;
            goto label_229b38;
        }
    }
    ctx->pc = 0x229B08u;
    // 0x229b08: 0x10000011
    ctx->pc = 0x229B08u;
    {
        const bool branch_taken_0x229b08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229B0Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 12)));
        if (branch_taken_0x229b08) {
            ctx->pc = 0x229B50u;
            goto label_229b50;
        }
    }
    ctx->pc = 0x229B10u;
label_229b10:
    // 0x229b10: 0x3c013f80
    ctx->pc = 0x229b10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x229b14: 0x44810000
    ctx->pc = 0x229b14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x229b18: 0x46140001
    ctx->pc = 0x229b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x229b1c: 0x3c01437f
    ctx->pc = 0x229b1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x229b20: 0x44810800
    ctx->pc = 0x229b20u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x229b24: 0x46010002
    ctx->pc = 0x229b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x229b28: 0x46000064
    ctx->pc = 0x229b28u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x229b2c: 0xe7a10000
    ctx->pc = 0x229b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x229b30: 0x10000007
    ctx->pc = 0x229B30u;
    {
        const bool branch_taken_0x229b30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229B34u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 12)));
        if (branch_taken_0x229b30) {
            ctx->pc = 0x229B50u;
            goto label_229b50;
        }
    }
    ctx->pc = 0x229B38u;
label_229b38:
    // 0x229b38: 0x3c01437f
    ctx->pc = 0x229b38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x229b3c: 0x44810000
    ctx->pc = 0x229b3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x229b40: 0x4600a002
    ctx->pc = 0x229b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x229b44: 0x46000064
    ctx->pc = 0x229b44u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x229b48: 0xe7a10000
    ctx->pc = 0x229b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_229b4c:
    // 0x229b4c: 0x8ee2000c
    ctx->pc = 0x229b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_229b50:
    // 0x229b50: 0x241000b4
    ctx->pc = 0x229b50u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 180));
    // 0x229b54: 0x501818
    ctx->pc = 0x229b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229b58: 0x771021
    ctx->pc = 0x229b58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x229b5c: 0x24040001
    ctx->pc = 0x229b5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x229b60: 0x84450d04
    ctx->pc = 0x229b60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3332)));
    // 0x229b64: 0x2406000c
    ctx->pc = 0x229b64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x229b68: 0x260382d
    ctx->pc = 0x229b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b6c: 0xc08a4b0
    ctx->pc = 0x229B6Cu;
    SET_GPR_U32(ctx, 31, 0x229B74u);
    ctx->pc = 0x229B70u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2292C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        print_n_of_m_0x2292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B74u; }
    }
    if (ctx->pc != 0x229B74u) { return; }
    ctx->pc = 0x229B74u;
    // 0x229b74: 0x8ee2000c
    ctx->pc = 0x229b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x229b78: 0x501818
    ctx->pc = 0x229b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229b7c: 0x771021
    ctx->pc = 0x229b7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x229b80: 0x24040002
    ctx->pc = 0x229b80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x229b84: 0x84450d06
    ctx->pc = 0x229b84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3334)));
    // 0x229b88: 0x24060014
    ctx->pc = 0x229b88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    // 0x229b8c: 0x260382d
    ctx->pc = 0x229b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b90: 0xc08a4b0
    ctx->pc = 0x229B90u;
    SET_GPR_U32(ctx, 31, 0x229B98u);
    ctx->pc = 0x229B94u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2292C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        print_n_of_m_0x2292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229B98u; }
    }
    if (ctx->pc != 0x229B98u) { return; }
    ctx->pc = 0x229B98u;
    // 0x229b98: 0x8ee2000c
    ctx->pc = 0x229b98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x229b9c: 0x501818
    ctx->pc = 0x229b9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229ba0: 0x771021
    ctx->pc = 0x229ba0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x229ba4: 0x24040003
    ctx->pc = 0x229ba4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x229ba8: 0x84450d08
    ctx->pc = 0x229ba8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3336)));
    // 0x229bac: 0x2406001c
    ctx->pc = 0x229bacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 28));
    // 0x229bb0: 0x260382d
    ctx->pc = 0x229bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229bb4: 0xc08a4b0
    ctx->pc = 0x229BB4u;
    SET_GPR_U32(ctx, 31, 0x229BBCu);
    ctx->pc = 0x229BB8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2292C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        print_n_of_m_0x2292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229BBCu; }
    }
    if (ctx->pc != 0x229BBCu) { return; }
    ctx->pc = 0x229BBCu;
    // 0x229bbc: 0x202d
    ctx->pc = 0x229bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229bc0: 0x241500b4
    ctx->pc = 0x229bc0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 180));
    // 0x229bc4: 0x26f10d0a
    ctx->pc = 0x229bc4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 23), 3338));
    // 0x229bc8: 0x3c020034
    ctx->pc = 0x229bc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x229bcc: 0x2454fa90
    ctx->pc = 0x229bccu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x229bd0: 0x24900001
    ctx->pc = 0x229bd0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 1));
    // 0x229bd4: 0x0
    ctx->pc = 0x229bd4u;
    // NOP
label_229bd8:
    // 0x229bd8: 0x101840
    ctx->pc = 0x229bd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
    // 0x229bdc: 0x8ee2000c
    ctx->pc = 0x229bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x229be0: 0x551018
    ctx->pc = 0x229be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229be4: 0x621821
    ctx->pc = 0x229be4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229be8: 0x2231821
    ctx->pc = 0x229be8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x229bec: 0x101080
    ctx->pc = 0x229becu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x229bf0: 0x541021
    ctx->pc = 0x229bf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x229bf4: 0x24840004
    ctx->pc = 0x229bf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x229bf8: 0x84650000
    ctx->pc = 0x229bf8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229bfc: 0x8c460000
    ctx->pc = 0x229bfcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229c00: 0x260382d
    ctx->pc = 0x229c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c04: 0xc08a4b0
    ctx->pc = 0x229C04u;
    SET_GPR_U32(ctx, 31, 0x229C0Cu);
    ctx->pc = 0x229C08u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2292C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        print_n_of_m_0x2292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229C0Cu; }
    }
    if (ctx->pc != 0x229C0Cu) { return; }
    ctx->pc = 0x229C0Cu;
    // 0x229c0c: 0x200202d
    ctx->pc = 0x229c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c10: 0x28820009
    ctx->pc = 0x229c10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 9));
    // 0x229c14: 0x5440fff0
    ctx->pc = 0x229C14u;
    {
        const bool branch_taken_0x229c14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x229c14) {
            ctx->pc = 0x229C18u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x229BD8u;
            goto label_229bd8;
        }
    }
    ctx->pc = 0x229C1Cu;
    // 0x229c1c: 0x3c03003c
    ctx->pc = 0x229c1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x229c20: 0x246318a0
    ctx->pc = 0x229c20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6304));
    // 0x229c24: 0x121080
    ctx->pc = 0x229c24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x229c28: 0x431021
    ctx->pc = 0x229c28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229c2c: 0x8c430000
    ctx->pc = 0x229c2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229c30: 0x10600005
    ctx->pc = 0x229C30u;
    {
        const bool branch_taken_0x229c30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x229C34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x229c30) {
            ctx->pc = 0x229C48u;
            goto label_229c48;
        }
    }
    ctx->pc = 0x229C38u;
    // 0x229c38: 0x10620018
    ctx->pc = 0x229C38u;
    {
        const bool branch_taken_0x229c38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x229C3Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x229c38) {
            ctx->pc = 0x229C9Cu;
            goto label_229c9c;
        }
    }
    ctx->pc = 0x229C40u;
    // 0x229c40: 0x10000029
    ctx->pc = 0x229C40u;
    {
        const bool branch_taken_0x229c40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229C44u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6304));
        if (branch_taken_0x229c40) {
            ctx->pc = 0x229CE8u;
            goto label_229ce8;
        }
    }
    ctx->pc = 0x229C48u;
label_229c48:
    // 0x229c48: 0x3c04003c
    ctx->pc = 0x229c48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x229c4c: 0x248418b0
    ctx->pc = 0x229c4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6320));
    // 0x229c50: 0x122880
    ctx->pc = 0x229c50u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 2));
    // 0x229c54: 0xa42021
    ctx->pc = 0x229c54u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x229c58: 0x3c020032
    ctx->pc = 0x229c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229c5c: 0x3c030031
    ctx->pc = 0x229c5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x229c60: 0x8c421040
    ctx->pc = 0x229c60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4160)));
    // 0x229c64: 0x8c63ffc0
    ctx->pc = 0x229c64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
    // 0x229c68: 0x431018
    ctx->pc = 0x229c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229c6c: 0x8c830000
    ctx->pc = 0x229c6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229c70: 0x431021
    ctx->pc = 0x229c70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229c74: 0xac820000
    ctx->pc = 0x229c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x229c78: 0x28420078
    ctx->pc = 0x229c78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 120));
    // 0x229c7c: 0x14400019
    ctx->pc = 0x229C7Cu;
    {
        const bool branch_taken_0x229c7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229C80u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x229c7c) {
            ctx->pc = 0x229CE4u;
            goto label_229ce4;
        }
    }
    ctx->pc = 0x229C84u;
    // 0x229c84: 0x3c02003c
    ctx->pc = 0x229c84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229c88: 0x244218a0
    ctx->pc = 0x229c88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6304));
    // 0x229c8c: 0xa21021
    ctx->pc = 0x229c8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x229c90: 0x24030001
    ctx->pc = 0x229c90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x229c94: 0x10000012
    ctx->pc = 0x229C94u;
    {
        const bool branch_taken_0x229c94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229C98u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x229c94) {
            ctx->pc = 0x229CE0u;
            goto label_229ce0;
        }
    }
    ctx->pc = 0x229C9Cu;
label_229c9c:
    // 0x229c9c: 0x3c02003c
    ctx->pc = 0x229c9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229ca0: 0x244218b0
    ctx->pc = 0x229ca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6320));
    // 0x229ca4: 0x122080
    ctx->pc = 0x229ca4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 2));
    // 0x229ca8: 0x822021
    ctx->pc = 0x229ca8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x229cac: 0x3c020032
    ctx->pc = 0x229cacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229cb0: 0x3c030031
    ctx->pc = 0x229cb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x229cb4: 0x8c421040
    ctx->pc = 0x229cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4160)));
    // 0x229cb8: 0x8c63ffc0
    ctx->pc = 0x229cb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
    // 0x229cbc: 0x431018
    ctx->pc = 0x229cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x229cc0: 0x8c830000
    ctx->pc = 0x229cc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229cc4: 0x431021
    ctx->pc = 0x229cc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229cc8: 0xac820000
    ctx->pc = 0x229cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x229ccc: 0x2842000f
    ctx->pc = 0x229cccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 15));
    // 0x229cd0: 0x24030001
    ctx->pc = 0x229cd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x229cd4: 0x8fa40004
    ctx->pc = 0x229cd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x229cd8: 0x62200a
    ctx->pc = 0x229cd8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x229cdc: 0xafa40004
    ctx->pc = 0x229cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_229ce0:
    // 0x229ce0: 0x3c03003c
    ctx->pc = 0x229ce0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_229ce4:
    // 0x229ce4: 0x246318a0
    ctx->pc = 0x229ce4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6304));
label_229ce8:
    // 0x229ce8: 0x121080
    ctx->pc = 0x229ce8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x229cec: 0x431021
    ctx->pc = 0x229cecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229cf0: 0x8c430000
    ctx->pc = 0x229cf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229cf4: 0x24020002
    ctx->pc = 0x229cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x229cf8: 0x1062000e
    ctx->pc = 0x229CF8u;
    {
        const bool branch_taken_0x229cf8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x229CFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x229cf8) {
            ctx->pc = 0x229D34u;
            goto label_229d34;
        }
    }
    ctx->pc = 0x229D00u;
    // 0x229d00: 0x8c44b154
    ctx->pc = 0x229d00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
    // 0x229d04: 0x26650010
    ctx->pc = 0x229d04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 16));
    // 0x229d08: 0x24060118
    ctx->pc = 0x229d08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 280));
    // 0x229d0c: 0x24070010
    ctx->pc = 0x229d0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x229d10: 0xc0b0c6a
    ctx->pc = 0x229D10u;
    SET_GPR_U32(ctx, 31, 0x229D18u);
    ctx->pc = 0x229D14u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D18u; }
    }
    if (ctx->pc != 0x229D18u) { return; }
    ctx->pc = 0x229D18u;
    // 0x229d18: 0x26640028
    ctx->pc = 0x229d18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 40));
    // 0x229d1c: 0x24050118
    ctx->pc = 0x229d1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 280));
    // 0x229d20: 0x3c013f00
    ctx->pc = 0x229d20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x229d24: 0x44816000
    ctx->pc = 0x229d24u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x229d28: 0x3c06003a
    ctx->pc = 0x229d28u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x229d2c: 0xc080a9a
    ctx->pc = 0x229D2Cu;
    SET_GPR_U32(ctx, 31, 0x229D34u);
    ctx->pc = 0x229D30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 28672));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D34u; }
    }
    if (ctx->pc != 0x229D34u) { return; }
    ctx->pc = 0x229D34u;
label_229d34:
    // 0x229d34: 0x26640040
    ctx->pc = 0x229d34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
    // 0x229d38: 0x42023
    ctx->pc = 0x229d38u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x229d3c: 0x24050008
    ctx->pc = 0x229d3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x229d40: 0x24060006
    ctx->pc = 0x229d40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x229d44: 0x382d
    ctx->pc = 0x229d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d48: 0x3c013ee6
    ctx->pc = 0x229d48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16102 << 16));
    // 0x229d4c: 0x34216666
    ctx->pc = 0x229d4cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x229d50: 0x44816000
    ctx->pc = 0x229d50u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x229d54: 0x3c08003a
    ctx->pc = 0x229d54u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x229d58: 0xc080510
    ctx->pc = 0x229D58u;
    SET_GPR_U32(ctx, 31, 0x229D60u);
    ctx->pc = 0x229D5Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 28688));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229D60u; }
    }
    if (ctx->pc != 0x229D60u) { return; }
    ctx->pc = 0x229D60u;
    // 0x229d60: 0x8fa20004
    ctx->pc = 0x229d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_229d64:
    // 0x229d64: 0xdfbf00a0
    ctx->pc = 0x229d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x229d68: 0xdfbe0090
    ctx->pc = 0x229d68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x229d6c: 0xdfb70080
    ctx->pc = 0x229d6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x229d70: 0xdfb60070
    ctx->pc = 0x229d70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229d74: 0xdfb50060
    ctx->pc = 0x229d74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229d78: 0xdfb40050
    ctx->pc = 0x229d78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229d7c: 0xdfb30040
    ctx->pc = 0x229d7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229d80: 0xdfb20030
    ctx->pc = 0x229d80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229d84: 0xdfb10020
    ctx->pc = 0x229d84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229d88: 0xdfb00010
    ctx->pc = 0x229d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229d8c: 0xc7b400b0
    ctx->pc = 0x229d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x229d90: 0x3e00008
    ctx->pc = 0x229D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229D94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229850u: goto label_229850;
            case 0x229870u: goto label_229870;
            case 0x229890u: goto label_229890;
            case 0x2298D0u: goto label_2298d0;
            case 0x229928u: goto label_229928;
            case 0x229948u: goto label_229948;
            case 0x229990u: goto label_229990;
            case 0x2299C4u: goto label_2299c4;
            case 0x2299D4u: goto label_2299d4;
            case 0x2299E8u: goto label_2299e8;
            case 0x229A08u: goto label_229a08;
            case 0x229A60u: goto label_229a60;
            case 0x229AB8u: goto label_229ab8;
            case 0x229B10u: goto label_229b10;
            case 0x229B38u: goto label_229b38;
            case 0x229B4Cu: goto label_229b4c;
            case 0x229B50u: goto label_229b50;
            case 0x229BD8u: goto label_229bd8;
            case 0x229C48u: goto label_229c48;
            case 0x229C9Cu: goto label_229c9c;
            case 0x229CE0u: goto label_229ce0;
            case 0x229CE4u: goto label_229ce4;
            case 0x229CE8u: goto label_229ce8;
            case 0x229D34u: goto label_229d34;
            case 0x229D64u: goto label_229d64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229D98u;
}
