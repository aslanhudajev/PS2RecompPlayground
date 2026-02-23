#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofInit
// Address: 0x1a5720 - 0x1a58a8
void nlDofInit_0x1a5720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofInit");


    ctx->pc = 0x1a5720u;

    // 0x1a5720: 0x27bdffd0
    ctx->pc = 0x1a5720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5724: 0x7fbf0020
    ctx->pc = 0x1a5724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a5728: 0x7fb10010
    ctx->pc = 0x1a5728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a572c: 0x7fb00000
    ctx->pc = 0x1a572cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5730: 0x70808e28
    ctx->pc = 0x1a5730u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a5734: 0x8f848a10
    ctx->pc = 0x1a5734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1a5738: 0x24020001
    ctx->pc = 0x1a5738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a573c: 0x8c830000
    ctx->pc = 0x1a573cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5740: 0x14620045
    ctx->pc = 0x1A5740u;
    {
        const bool branch_taken_0x1a5740 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A5744u;
        SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
        if (branch_taken_0x1a5740) {
            ctx->pc = 0x1A5858u;
            goto label_1a5858;
        }
    }
    ctx->pc = 0x1A5748u;
    // 0x1a5748: 0x24423700
    ctx->pc = 0x1a5748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14080));
    // 0x1a574c: 0x10820003
    ctx->pc = 0x1A574Cu;
    {
        const bool branch_taken_0x1a574c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a574c) {
            ctx->pc = 0x1A575Cu;
            goto label_1a575c;
        }
    }
    ctx->pc = 0x1A5754u;
label_1a5754:
    // 0x1a5754: 0x1000ffff
    ctx->pc = 0x1A5754u;
    {
        const bool branch_taken_0x1a5754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5754) {
            ctx->pc = 0x1A5754u;
            goto label_1a5754;
        }
    }
    ctx->pc = 0x1A575Cu;
label_1a575c:
    // 0x1a575c: 0x3c010030
    ctx->pc = 0x1a575cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a5760: 0x84305838
    ctx->pc = 0x1a5760u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1a5764: 0x3c020030
    ctx->pc = 0x1a5764u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a5768: 0x244435b0
    ctx->pc = 0x1a5768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13744));
    // 0x1a576c: 0x3c020030
    ctx->pc = 0x1a576cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a5770: 0xc069680
    ctx->pc = 0x1A5770u;
    SET_GPR_U32(ctx, 31, 0x1A5778u);
    ctx->pc = 0x1A5774u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 13408));
    ctx->pc = 0x1A5A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetTableNF_0x1a5a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5778u; }
        else if (ctx->pc != 0x1A5778u) { ctx->pc = 0x1A5778u; }
    }
    if (ctx->pc != 0x1A5778u) { return; }
    ctx->pc = 0x1A5778u;
    // 0x1a5778: 0x3c020026
    ctx->pc = 0x1a5778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a577c: 0xc069670
    ctx->pc = 0x1A577Cu;
    SET_GPR_U32(ctx, 31, 0x1A5784u);
    ctx->pc = 0x1A5780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959552));
    ctx->pc = 0x1A59C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetMatrix_0x1a59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5784u; }
        else if (ctx->pc != 0x1A5784u) { ctx->pc = 0x1A5784u; }
    }
    if (ctx->pc != 0x1A5784u) { return; }
    ctx->pc = 0x1A5784u;
    // 0x1a5784: 0x3c024120
    ctx->pc = 0x1a5784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16672 << 16));
    // 0x1a5788: 0x44826800
    ctx->pc = 0x1a5788u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1a578c: 0x3c0240c0
    ctx->pc = 0x1a578cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16576 << 16));
    // 0x1a5790: 0x44826000
    ctx->pc = 0x1a5790u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1a5794: 0x3c0241a0
    ctx->pc = 0x1a5794u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16800 << 16));
    // 0x1a5798: 0x44827800
    ctx->pc = 0x1a5798u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 2);
    // 0x1a579c: 0xc069634
    ctx->pc = 0x1A579Cu;
    SET_GPR_U32(ctx, 31, 0x1A57A4u);
    ctx->pc = 0x1A57A0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->pc = 0x1A58D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetRangeNF_0x1a58d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A57A4u; }
        else if (ctx->pc != 0x1A57A4u) { ctx->pc = 0x1A57A4u; }
    }
    if (ctx->pc != 0x1A57A4u) { return; }
    ctx->pc = 0x1A57A4u;
    // 0x1a57a4: 0x3c023dcc
    ctx->pc = 0x1a57a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x1a57a8: 0x3442cccd
    ctx->pc = 0x1a57a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1a57ac: 0x44826000
    ctx->pc = 0x1a57acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1a57b0: 0xc069668
    ctx->pc = 0x1A57B0u;
    SET_GPR_U32(ctx, 31, 0x1A57B8u);
    ctx->pc = 0x1A59A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetNearLimit_0x1a59a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A57B8u; }
        else if (ctx->pc != 0x1A57B8u) { ctx->pc = 0x1A57B8u; }
    }
    if (ctx->pc != 0x1A57B8u) { return; }
    ctx->pc = 0x1A57B8u;
    // 0x1a57b8: 0x3c024780
    ctx->pc = 0x1a57b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x1a57bc: 0x44826000
    ctx->pc = 0x1a57bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1a57c0: 0xc06966c
    ctx->pc = 0x1A57C0u;
    SET_GPR_U32(ctx, 31, 0x1A57C8u);
    ctx->pc = 0x1A59B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetFarLimit_0x1a59b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A57C8u; }
        else if (ctx->pc != 0x1A57C8u) { ctx->pc = 0x1A57C8u; }
    }
    if (ctx->pc != 0x1A57C8u) { return; }
    ctx->pc = 0x1A57C8u;
    // 0x1a57c8: 0xaf8089f0
    ctx->pc = 0x1a57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 0));
    // 0x1a57cc: 0x6210003
    ctx->pc = 0x1A57CCu;
    {
        const bool branch_taken_0x1a57cc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A57D0u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 8));
        if (branch_taken_0x1a57cc) {
            ctx->pc = 0x1A57DCu;
            goto label_1a57dc;
        }
    }
    ctx->pc = 0x1A57D4u;
    // 0x1a57d4: 0x262300ff
    ctx->pc = 0x1a57d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 255));
    // 0x1a57d8: 0x31a03
    ctx->pc = 0x1a57d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_1a57dc:
    // 0x1a57dc: 0x8f858a10
    ctx->pc = 0x1a57dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1a57e0: 0xa78389d8
    ctx->pc = 0x1a57e0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937048), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a57e4: 0x44900000
    ctx->pc = 0x1a57e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
    // 0x1a57e8: 0x3c034200
    ctx->pc = 0x1a57e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16896 << 16));
    // 0x1a57ec: 0x46800020
    ctx->pc = 0x1a57ecu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a57f0: 0x90a40073
    ctx->pc = 0x1a57f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 115)));
    // 0x1a57f4: 0x44830800
    ctx->pc = 0x1a57f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1a57f8: 0x3084003f
    ctx->pc = 0x1a57f8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 63));
    // 0x1a57fc: 0xa78489d4
    ctx->pc = 0x1a57fcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937044), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5800: 0x94a40070
    ctx->pc = 0x1a5800u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1a5804: 0x46000803
    ctx->pc = 0x1a5804u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1a5808: 0x308401ff
    ctx->pc = 0x1a5808u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 511));
    // 0x1a580c: 0x4243c
    ctx->pc = 0x1a580cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a5810: 0x4243f
    ctx->pc = 0x1a5810u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1a5814: 0x42140
    ctx->pc = 0x1a5814u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1a5818: 0xa78489e4
    ctx->pc = 0x1a5818u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937060), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a581c: 0x94a40160
    ctx->pc = 0x1a581cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x1a5820: 0x308401ff
    ctx->pc = 0x1a5820u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 511));
    // 0x1a5824: 0x4243c
    ctx->pc = 0x1a5824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a5828: 0x4243f
    ctx->pc = 0x1a5828u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1a582c: 0x42140
    ctx->pc = 0x1a582cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1a5830: 0xa78489e6
    ctx->pc = 0x1a5830u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937062), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5834: 0x90a40072
    ctx->pc = 0x1a5834u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 114)));
    // 0x1a5838: 0x3084003f
    ctx->pc = 0x1a5838u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 63));
    // 0x1a583c: 0xa78489e0
    ctx->pc = 0x1a583cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937056), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5840: 0x90a40073
    ctx->pc = 0x1a5840u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 115)));
    // 0x1a5844: 0xaf8389cc
    ctx->pc = 0x1a5844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937036), GPR_U32(ctx, 3));
    // 0x1a5848: 0x3083003f
    ctx->pc = 0x1a5848u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 63));
    // 0x1a584c: 0xe78089c8
    ctx->pc = 0x1a584cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937032), bits); }
    // 0x1a5850: 0x10000003
    ctx->pc = 0x1A5850u;
    {
        const bool branch_taken_0x1a5850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5854u;
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937052), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1a5850) {
            ctx->pc = 0x1A5860u;
            goto label_1a5860;
        }
    }
    ctx->pc = 0x1A5858u;
label_1a5858:
    // 0x1a5858: 0x1000ffff
    ctx->pc = 0x1A5858u;
    {
        const bool branch_taken_0x1a5858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5858) {
            ctx->pc = 0x1A5858u;
            goto label_1a5858;
        }
    }
    ctx->pc = 0x1A5860u;
label_1a5860:
    // 0x1a5860: 0x3c010030
    ctx->pc = 0x1a5860u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a5864: 0x84255834
    ctx->pc = 0x1a5864u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1a5868: 0x101c3c
    ctx->pc = 0x1a5868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a586c: 0x31c3f
    ctx->pc = 0x1a586cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a5870: 0x3c010030
    ctx->pc = 0x1a5870u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a5874: 0x84245836
    ctx->pc = 0x1a5874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1a5878: 0xa78589ec
    ctx->pc = 0x1a5878u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937068), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a587c: 0x14600002
    ctx->pc = 0x1A587Cu;
    {
        const bool branch_taken_0x1a587c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5880u;
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1a587c) {
            ctx->pc = 0x1A5888u;
            goto label_1a5888;
        }
    }
    ctx->pc = 0x1A5884u;
    // 0x1a5884: 0x1cd
    ctx->pc = 0x1a5884u;
    runtime->handleBreak(rdram, ctx);
label_1a5888:
    // 0x1a5888: 0x1812
    ctx->pc = 0x1a5888u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1a588c: 0xaf8089d0
    ctx->pc = 0x1a588cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937040), GPR_U32(ctx, 0));
    // 0x1a5890: 0xa78389e8
    ctx->pc = 0x1a5890u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937064), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a5894: 0x7bbf0020
    ctx->pc = 0x1a5894u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5898: 0x7bb10010
    ctx->pc = 0x1a5898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a589c: 0x7bb00000
    ctx->pc = 0x1a589cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a58a0: 0x3e00008
    ctx->pc = 0x1A58A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A58A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5754u: goto label_1a5754;
            case 0x1A575Cu: goto label_1a575c;
            case 0x1A57DCu: goto label_1a57dc;
            case 0x1A5858u: goto label_1a5858;
            case 0x1A5860u: goto label_1a5860;
            case 0x1A5888u: goto label_1a5888;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A58A8u;
}
