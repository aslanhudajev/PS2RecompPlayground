#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>

// Function: MBDrawBlits
// Address: 0x2c27d8 - 0x2c2a08
void MBDrawBlits_0x2c27d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int _mbDrawBlits_call = 0;
    ++_mbDrawBlits_call;

    ctx->pc = 0x2c27d8u;

    printf("[MBDrawBlits #%d] ENTRY  a0(layer_head?)=0x%x  ra=0x%x  sp=0x%x\n",
        _mbDrawBlits_call, GPR_U32(ctx, 4), GPR_U32(ctx, 31), GPR_U32(ctx, 29));

    // 0x2c27d8: 0x27bdff90
    ctx->pc = 0x2c27d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c27dc: 0xffbf0050
    ctx->pc = 0x2c27dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c27e0: 0xffb40040
    ctx->pc = 0x2c27e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c27e4: 0xffb30030
    ctx->pc = 0x2c27e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c27e8: 0xffb20020
    ctx->pc = 0x2c27e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c27ec: 0xffb10010
    ctx->pc = 0x2c27ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c27f0: 0xffb00000
    ctx->pc = 0x2c27f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c27f4: 0xe7b40060
    ctx->pc = 0x2c27f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c27f8: 0x80982d
    ctx->pc = 0x2c27f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c27fc: 0x3c020036
    ctx->pc = 0x2c27fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c2800: 0x8c50dee0
    ctx->pc = 0x2c2800u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c2804: 0x8e620070
    ctx->pc = 0x2c2804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2c2808: 0x14400004
    ctx->pc = 0x2C2808u;
    {
        const bool branch_taken_0x2c2808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C280Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2c2808) {
            ctx->pc = 0x2C281Cu;
            goto label_2c281c;
        }
    }
    ctx->pc = 0x2C2810u;
    // 0x2c2810: 0x8c423198
    ctx->pc = 0x2c2810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12696)));
    // 0x2c2814: 0x16620073
    ctx->pc = 0x2C2814u;
    {
        const bool branch_taken_0x2c2814 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C2818u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2814) {
            ctx->pc = 0x2C29E4u;
            goto label_2c29e4;
        }
    }
    ctx->pc = 0x2C281Cu;
label_2c281c:
    // 0x2c281c: 0xc0b09ea
    ctx->pc = 0x2C281Cu;
    SET_GPR_U32(ctx, 31, 0x2C2824u);
    ctx->pc = 0x2C27A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBStartBlits_0x2c27a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2824u; }
    }
    if (ctx->pc != 0x2C2824u) { return; }
    ctx->pc = 0x2C2824u;
    // 0x2c2824: 0x3c04003d
    ctx->pc = 0x2c2824u;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
    // 0x2c2828: 0x8e030040
    ctx->pc = 0x2c2828u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2c282c: 0x8c620010
    ctx->pc = 0x2c282cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c2830: 0x8c630014
    ctx->pc = 0x2c2830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2c2834: 0x431021
    ctx->pc = 0x2c2834u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2838: 0x44820800
    ctx->pc = 0x2c2838u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2c283c: 0x46800860
    ctx->pc = 0x2c283cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2c2840: 0xe481b808
    ctx->pc = 0x2c2840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294948872), bits); }
    // 0x2c2844: 0x3c02003d
    ctx->pc = 0x2c2844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c2848: 0x3c013f80
    ctx->pc = 0x2c2848u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c284c: 0x44810000
    ctx->pc = 0x2c284cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c2850: 0x0
    ctx->pc = 0x2c2850u;
    // NOP
    // 0x2c2854: 0x0
    ctx->pc = 0x2c2854u;
    // NOP
    // 0x2c2858: 0x46010003
    ctx->pc = 0x2c2858u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c285c: 0xe440b80c
    ctx->pc = 0x2c285cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294948876), bits); }
    // 0x2c2860: 0x3c03003a
    ctx->pc = 0x2c2860u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c2864: 0x246422f8
    ctx->pc = 0x2c2864u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 8952));
    // 0x2c2868: 0x8c6222f8
    ctx->pc = 0x2c2868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x2c286c: 0x4400006
    ctx->pc = 0x2C286Cu;
    {
        const bool branch_taken_0x2c286c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2c286c) {
            ctx->pc = 0x2C2888u;
            goto label_2c2888;
        }
    }
    ctx->pc = 0x2C2874u;
    // 0x2c2874: 0x8c6222f8
    ctx->pc = 0x2c2874u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x2c2878: 0x4482a000
    ctx->pc = 0x2c2878u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x2c287c: 0x4680a520
    ctx->pc = 0x2c287cu;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x2c2880: 0x1000000a
    ctx->pc = 0x2C2880u;
    {
        const bool branch_taken_0x2c2880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2884u;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        if (branch_taken_0x2c2880) {
            ctx->pc = 0x2C28ACu;
            goto label_2c28ac;
        }
    }
    ctx->pc = 0x2C2888u;
label_2c2888:
    // 0x2c2888: 0x8c830000
    ctx->pc = 0x2c2888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c288c: 0x30630001
    ctx->pc = 0x2c288cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2c2890: 0x8c820000
    ctx->pc = 0x2c2890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2894: 0x21042
    ctx->pc = 0x2c2894u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c2898: 0x621825
    ctx->pc = 0x2c2898u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c289c: 0x4483a000
    ctx->pc = 0x2c289cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 3);
    // 0x2c28a0: 0x4680a520
    ctx->pc = 0x2c28a0u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x2c28a4: 0x4614a500
    ctx->pc = 0x2c28a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x2c28a8: 0x3c100037
    ctx->pc = 0x2c28a8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
label_2c28ac:
    // 0x2c28ac: 0xc60c3190
    ctx->pc = 0x2c28acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c28b0: 0x0
    ctx->pc = 0x2c28b0u;
    // NOP
    // 0x2c28b4: 0x0
    ctx->pc = 0x2c28b4u;
    // NOP
    // 0x2c28b8: 0x460ca303
    ctx->pc = 0x2c28b8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[12];
    // 0x2c28bc: 0xc0b9e10
    ctx->pc = 0x2C28BCu;
    SET_GPR_U32(ctx, 31, 0x2C28C4u);
    ctx->pc = 0x2E7840u;
    {
        const uint32_t __entryPc = ctx->pc;
        floorf_0x2e7840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28C4u; }
    }
    if (ctx->pc != 0x2C28C4u) { return; }
    ctx->pc = 0x2C28C4u;
    // 0x2c28c4: 0xc6013190
    ctx->pc = 0x2c28c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c28c8: 0x46010002
    ctx->pc = 0x2c28c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c28cc: 0x4600a501
    ctx->pc = 0x2c28ccu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2c28d0: 0x3c02003d
    ctx->pc = 0x2c28d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c28d4: 0x0
    ctx->pc = 0x2c28d4u;
    // NOP
    // 0x2c28d8: 0x0
    ctx->pc = 0x2c28d8u;
    // NOP
    // 0x2c28dc: 0x4601a043
    ctx->pc = 0x2c28dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
    // 0x2c28e0: 0xe441b804
    ctx->pc = 0x2c28e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294948868), bits); }
    // 0x2c28e4: 0x8e700070
    ctx->pc = 0x2c28e4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2c28e8: 0x1200000e
    ctx->pc = 0x2C28E8u;
    {
        const bool branch_taken_0x2c28e8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C28ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2c28e8) {
            ctx->pc = 0x2C2924u;
            goto label_2c2924;
        }
    }
    ctx->pc = 0x2C28F0u;
    // 0x2c28f0: 0x24510c20
    ctx->pc = 0x2c28f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 3104));
    // 0x2c28f4: 0x8e020000
    ctx->pc = 0x2c28f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c28f8:
    // 0x2c28f8: 0x30420001
    ctx->pc = 0x2c28f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2c28fc: 0x54400007
    ctx->pc = 0x2C28FCu;
    {
        const bool branch_taken_0x2c28fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        static int _loop_iter = 0;
        if (branch_taken_0x2c28fc) {
            _loop_iter++;
            if (_loop_iter <= 20 || (_loop_iter % 500 == 0))
                printf("[MBDrawBlits #%d] loop iter %d  s0(blit_node)=0x%x  flags&1=%u => skip_draw next=*(s0+48)\n",
                    _mbDrawBlits_call, _loop_iter, GPR_U32(ctx, 16), GPR_U32(ctx, 2));
            ctx->pc = 0x2C2900u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->pc = 0x2C291Cu;
            goto label_2c291c;
        }
        _loop_iter = 0;
    }
    ctx->pc = 0x2C2904u;
    // 0x2c2904: 0x8e220028
    ctx->pc = 0x2c2904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2c2908: 0x24420001
    ctx->pc = 0x2c2908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c290c: 0xae220028
    ctx->pc = 0x2c290cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2c2910: 0xc0b082e
    ctx->pc = 0x2C2910u;
    SET_GPR_U32(ctx, 31, 0x2C2918u);
    ctx->pc = 0x2C2914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C20B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawBlit_0x2c20b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2918u; }
    }
    if (ctx->pc != 0x2C2918u) { return; }
    ctx->pc = 0x2C2918u;
    // 0x2c2918: 0x8e100030  s0 = *(s0+48) (next blit)
    ctx->pc = 0x2c2918u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2c291c:
    // 0x2c291c: 0x5600fff6
    ctx->pc = 0x2C291Cu;
    {
        const bool branch_taken_0x2c291c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        static int _blit_iter = 0;
        if (branch_taken_0x2c291c) {
            _blit_iter++;
            if (_blit_iter <= 25 || (_blit_iter % 500 == 0))
                printf("[MBDrawBlits #%d] blit_iter %d  s0(next_node)=0x%x  *(s0+0)=0x%x  => %s\n",
                    _mbDrawBlits_call, _blit_iter, GPR_U32(ctx, 16),
                    _blit_iter <= 25 ? READ32(ADD32(GPR_U32(ctx, 16), 0)) : 0,
                    _blit_iter <= 25 ? "loop_back" : "(loop_back)");
            ctx->pc = 0x2C2920u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2C28F8u;
            goto label_2c28f8;
        }
        printf("[MBDrawBlits #%d] loop EXIT  s0=0 (normal end)\n", _mbDrawBlits_call);
        _blit_iter = 0;
    }
    ctx->pc = 0x2C2924u;
label_2c2924:
    // 0x2c2924: 0x3c020037
    ctx->pc = 0x2c2924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2928: 0x8c423198
    ctx->pc = 0x2c2928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12696)));
    // 0x2c292c: 0x1662002a
    ctx->pc = 0x2C292Cu;
    {
        const bool branch_taken_0x2c292c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C2930u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c292c) {
            ctx->pc = 0x2C29D8u;
            goto label_2c29d8;
        }
    }
    ctx->pc = 0x2C2934u;
    // 0x2c2934: 0x8c42b0c0
    ctx->pc = 0x2c2934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947008)));
    // 0x2c2938: 0x1840000e
    ctx->pc = 0x2C2938u;
    {
        const bool branch_taken_0x2c2938 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C293Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2938) {
            ctx->pc = 0x2C2974u;
            goto label_2c2974;
        }
    }
    ctx->pc = 0x2C2940u;
    // 0x2c2940: 0x24140024
    ctx->pc = 0x2c2940u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c2944: 0x3c020038
    ctx->pc = 0x2c2944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c2948: 0x24528cc0
    ctx->pc = 0x2c2948u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294937792));
    // 0x2c294c: 0x3c110038
    ctx->pc = 0x2c294cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
    // 0x2c2950: 0x2141018
    ctx->pc = 0x2c2950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c2954: 0x0
    ctx->pc = 0x2c2954u;
    // NOP
label_2c2958:
    // 0x2c2958: 0xc0b098e
    ctx->pc = 0x2C2958u;
    SET_GPR_U32(ctx, 31, 0x2C2960u);
    ctx->pc = 0x2C295Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x2C2638u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawBlitFlatQuad_0x2c2638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2960u; }
    }
    if (ctx->pc != 0x2C2960u) { return; }
    ctx->pc = 0x2C2960u;
    // 0x2c2960: 0x26100001
    ctx->pc = 0x2c2960u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c2964: 0x8e22b0c0
    ctx->pc = 0x2c2964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947008)));
    // 0x2c2968: 0x202102a
    ctx->pc = 0x2c2968u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2c296c: 0x1440fffa
    ctx->pc = 0x2C296Cu;
    {
        const bool branch_taken_0x2c296c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C2970u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2c296c) {
            ctx->pc = 0x2C2958u;
            goto label_2c2958;
        }
    }
    ctx->pc = 0x2C2974u;
label_2c2974:
    // 0x2c2974: 0x3c030038
    ctx->pc = 0x2c2974u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c2978: 0x24020001
    ctx->pc = 0x2c2978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c297c: 0xac62b0c4
    ctx->pc = 0x2c297cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947012), GPR_U32(ctx, 2));
    // 0x2c2980: 0x3c020037
    ctx->pc = 0x2c2980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2984: 0x8c423198
    ctx->pc = 0x2c2984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12696)));
    // 0x2c2988: 0x16620013
    ctx->pc = 0x2C2988u;
    {
        const bool branch_taken_0x2c2988 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C298Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c2988) {
            ctx->pc = 0x2C29D8u;
            goto label_2c29d8;
        }
    }
    ctx->pc = 0x2C2990u;
    // 0x2c2990: 0x8c428cb8
    ctx->pc = 0x2c2990u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937784)));
    // 0x2c2994: 0x1840000d
    ctx->pc = 0x2C2994u;
    {
        const bool branch_taken_0x2c2994 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C2998u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2994) {
            ctx->pc = 0x2C29CCu;
            goto label_2c29cc;
        }
    }
    ctx->pc = 0x2C299Cu;
    // 0x2c299c: 0x24130038
    ctx->pc = 0x2c299cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 56));
    // 0x2c29a0: 0x3c020038
    ctx->pc = 0x2c29a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c29a4: 0x245285b8
    ctx->pc = 0x2c29a4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294935992));
    // 0x2c29a8: 0x3c110038
    ctx->pc = 0x2c29a8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
    // 0x2c29ac: 0x2131018
    ctx->pc = 0x2c29acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2c29b0:
    // 0x2c29b0: 0xc0b082e
    ctx->pc = 0x2C29B0u;
    SET_GPR_U32(ctx, 31, 0x2C29B8u);
    ctx->pc = 0x2C29B4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x2C20B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawBlit_0x2c20b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29B8u; }
    }
    if (ctx->pc != 0x2C29B8u) { return; }
    ctx->pc = 0x2C29B8u;
    // 0x2c29b8: 0x26100001
    ctx->pc = 0x2c29b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c29bc: 0x8e228cb8
    ctx->pc = 0x2c29bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294937784)));
    // 0x2c29c0: 0x202102a
    ctx->pc = 0x2c29c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2c29c4: 0x1440fffa
    ctx->pc = 0x2C29C4u;
    {
        const bool branch_taken_0x2c29c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C29C8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2c29c4) {
            ctx->pc = 0x2C29B0u;
            goto label_2c29b0;
        }
    }
    ctx->pc = 0x2C29CCu;
label_2c29cc:
    // 0x2c29cc: 0x3c030038
    ctx->pc = 0x2c29ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c29d0: 0x24020001
    ctx->pc = 0x2c29d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c29d4: 0xac628cbc
    ctx->pc = 0x2c29d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937788), GPR_U32(ctx, 2));
label_2c29d8:
    // 0x2c29d8: 0xc0b09ec
    ctx->pc = 0x2C29D8u;
    SET_GPR_U32(ctx, 31, 0x2C29E0u);
    ctx->pc = 0x2C27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndBlits_0x2c27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29E0u; }
    }
    if (ctx->pc != 0x2C29E0u) { return; }
    ctx->pc = 0x2C29E0u;
    // 0x2c29e0: 0x102d
    ctx->pc = 0x2c29e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c29e4:
    // 0x2c29e4: 0xdfbf0050
    ctx->pc = 0x2c29e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c29e8: 0xdfb40040
    ctx->pc = 0x2c29e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c29ec: 0xdfb30030
    ctx->pc = 0x2c29ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c29f0: 0xdfb20020
    ctx->pc = 0x2c29f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c29f4: 0xdfb10010
    ctx->pc = 0x2c29f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c29f8: 0xdfb00000
    ctx->pc = 0x2c29f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c29fc: 0xc7b40060
    ctx->pc = 0x2c29fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c2a00: 0x3e00008
    ctx->pc = 0x2C2A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2A04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C281Cu: goto label_2c281c;
            case 0x2C2888u: goto label_2c2888;
            case 0x2C28ACu: goto label_2c28ac;
            case 0x2C28F8u: goto label_2c28f8;
            case 0x2C291Cu: goto label_2c291c;
            case 0x2C2924u: goto label_2c2924;
            case 0x2C2958u: goto label_2c2958;
            case 0x2C2974u: goto label_2c2974;
            case 0x2C29B0u: goto label_2c29b0;
            case 0x2C29CCu: goto label_2c29cc;
            case 0x2C29D8u: goto label_2c29d8;
            case 0x2C29E4u: goto label_2c29e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2A08u;
}
