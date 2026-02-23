#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_FcvEffectTask__Fi4ANPOf
// Address: 0x1e1780 - 0x1e18c8
void new_FcvEffectTask__Fi4ANPOf_0x1e1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_FcvEffectTask__Fi4ANPOf");


    ctx->pc = 0x1e1780u;

    // 0x1e1780: 0x27bdff90
    ctx->pc = 0x1e1780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e1784: 0x7fbf0040
    ctx->pc = 0x1e1784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1e1788: 0x7fb20030
    ctx->pc = 0x1e1788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e178c: 0x7fb10020
    ctx->pc = 0x1e178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e1790: 0x7fb00010
    ctx->pc = 0x1e1790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e1794: 0xe7b40000
    ctx->pc = 0x1e1794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e1798: 0xc4a30000
    ctx->pc = 0x1e1798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e179c: 0xc4a20004
    ctx->pc = 0x1e179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e17a0: 0xc4a10008
    ctx->pc = 0x1e17a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e17a4: 0xc4a0000c
    ctx->pc = 0x1e17a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17a8: 0x27a20050
    ctx->pc = 0x1e17a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e17ac: 0x70808628
    ctx->pc = 0x1e17acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e17b0: 0x46006506
    ctx->pc = 0x1e17b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e17b4: 0xe4430000
    ctx->pc = 0x1e17b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e17b8: 0xe4420004
    ctx->pc = 0x1e17b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e17bc: 0xe4410008
    ctx->pc = 0x1e17bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e17c0: 0xe440000c
    ctx->pc = 0x1e17c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e17c4: 0xc4a10010
    ctx->pc = 0x1e17c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e17c8: 0xc4a00014
    ctx->pc = 0x1e17c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17cc: 0xe4410010
    ctx->pc = 0x1e17ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1e17d0: 0xe4400014
    ctx->pc = 0x1e17d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1e17d4: 0xc078540
    ctx->pc = 0x1E17D4u;
    SET_GPR_U32(ctx, 31, 0x1E17DCu);
    ctx->pc = 0x1E17D8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E1500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeFcvEffect__Fi4ANPOf_0x1e1500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17DCu; }
        else if (ctx->pc != 0x1E17DCu) { ctx->pc = 0x1E17DCu; }
    }
    if (ctx->pc != 0x1E17DCu) { return; }
    ctx->pc = 0x1E17DCu;
    // 0x1e17dc: 0x14400033
    ctx->pc = 0x1E17DCu;
    {
        const bool branch_taken_0x1e17dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E17E0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1e17dc) {
            ctx->pc = 0x1E18ACu;
            goto label_1e18ac;
        }
    }
    ctx->pc = 0x1E17E4u;
    // 0x1e17e4: 0x8423e504
    ctx->pc = 0x1e17e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1e17e8: 0x2402000a
    ctx->pc = 0x1e17e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e17ec: 0x1462001d
    ctx->pc = 0x1E17ECu;
    {
        const bool branch_taken_0x1e17ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e17ec) {
            ctx->pc = 0x1E1864u;
            goto label_1e1864;
        }
    }
    ctx->pc = 0x1E17F4u;
    // 0x1e17f4: 0x8f838bcc
    ctx->pc = 0x1e17f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1e17f8: 0x24020002
    ctx->pc = 0x1e17f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e17fc: 0x14620019
    ctx->pc = 0x1E17FCu;
    {
        const bool branch_taken_0x1e17fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e17fc) {
            ctx->pc = 0x1E1864u;
            goto label_1e1864;
        }
    }
    ctx->pc = 0x1E1804u;
    // 0x1e1804: 0x8f928ccc
    ctx->pc = 0x1e1804u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x1e1808: 0x12400003
    ctx->pc = 0x1E1808u;
    {
        const bool branch_taken_0x1e1808 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e1808) {
            ctx->pc = 0x1E1818u;
            goto label_1e1818;
        }
    }
    ctx->pc = 0x1E1810u;
    // 0x1e1810: 0x8e520000
    ctx->pc = 0x1e1810u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e1814: 0x0
    ctx->pc = 0x1e1814u;
    // NOP
label_1e1818:
    // 0x1e1818: 0xc06903c
    ctx->pc = 0x1E1818u;
    SET_GPR_U32(ctx, 31, 0x1E1820u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1820u; }
        else if (ctx->pc != 0x1E1820u) { ctx->pc = 0x1E1820u; }
    }
    if (ctx->pc != 0x1E1820u) { return; }
    ctx->pc = 0x1E1820u;
    // 0x1e1820: 0xc06903c
    ctx->pc = 0x1E1820u;
    SET_GPR_U32(ctx, 31, 0x1E1828u);
    ctx->pc = 0x1E1824u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1828u; }
        else if (ctx->pc != 0x1E1828u) { ctx->pc = 0x1E1828u; }
    }
    if (ctx->pc != 0x1E1828u) { return; }
    ctx->pc = 0x1E1828u;
    // 0x1e1828: 0x8c420010
    ctx->pc = 0x1e1828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e182c: 0x8e260010
    ctx->pc = 0x1e182cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e1830: 0x72404628
    ctx->pc = 0x1e1830u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e1834: 0x2404016c
    ctx->pc = 0x1e1834u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 364));
    // 0x1e1838: 0x8c470014
    ctx->pc = 0x1e1838u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e183c: 0xc069040
    ctx->pc = 0x1E183Cu;
    SET_GPR_U32(ctx, 31, 0x1E1844u);
    ctx->pc = 0x1E1840u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1844u; }
        else if (ctx->pc != 0x1E1844u) { ctx->pc = 0x1E1844u; }
    }
    if (ctx->pc != 0x1E1844u) { return; }
    ctx->pc = 0x1E1844u;
    // 0x1e1844: 0x70402628
    ctx->pc = 0x1e1844u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1848: 0x10800018
    ctx->pc = 0x1E1848u;
    {
        const bool branch_taken_0x1e1848 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E184Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e1848) {
            ctx->pc = 0x1E18ACu;
            goto label_1e18ac;
        }
    }
    ctx->pc = 0x1E1850u;
    // 0x1e1850: 0x4600a306
    ctx->pc = 0x1e1850u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e1854: 0xc078428
    ctx->pc = 0x1E1854u;
    SET_GPR_U32(ctx, 31, 0x1E185Cu);
    ctx->pc = 0x1E1858u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E10A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13FcvEffectTaskFi4ANPOf_0x1e10a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E185Cu; }
        else if (ctx->pc != 0x1E185Cu) { ctx->pc = 0x1E185Cu; }
    }
    if (ctx->pc != 0x1E185Cu) { return; }
    ctx->pc = 0x1E185Cu;
    // 0x1e185c: 0x10000014
    ctx->pc = 0x1E185Cu;
    {
        const bool branch_taken_0x1e185c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1860u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1e185c) {
            ctx->pc = 0x1E18B0u;
            goto label_1e18b0;
        }
    }
    ctx->pc = 0x1E1864u;
label_1e1864:
    // 0x1e1864: 0xc06903c
    ctx->pc = 0x1E1864u;
    SET_GPR_U32(ctx, 31, 0x1E186Cu);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E186Cu; }
        else if (ctx->pc != 0x1E186Cu) { ctx->pc = 0x1E186Cu; }
    }
    if (ctx->pc != 0x1E186Cu) { return; }
    ctx->pc = 0x1E186Cu;
    // 0x1e186c: 0xc06903c
    ctx->pc = 0x1E186Cu;
    SET_GPR_U32(ctx, 31, 0x1E1874u);
    ctx->pc = 0x1E1870u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1874u; }
        else if (ctx->pc != 0x1E1874u) { ctx->pc = 0x1E1874u; }
    }
    if (ctx->pc != 0x1E1874u) { return; }
    ctx->pc = 0x1E1874u;
    // 0x1e1874: 0xc06903c
    ctx->pc = 0x1E1874u;
    SET_GPR_U32(ctx, 31, 0x1E187Cu);
    ctx->pc = 0x1E1878u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E187Cu; }
        else if (ctx->pc != 0x1E187Cu) { ctx->pc = 0x1E187Cu; }
    }
    if (ctx->pc != 0x1E187Cu) { return; }
    ctx->pc = 0x1E187Cu;
    // 0x1e187c: 0x8e460010
    ctx->pc = 0x1e187cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e1880: 0x8e270014
    ctx->pc = 0x1e1880u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e1884: 0x2404016c
    ctx->pc = 0x1e1884u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 364));
    // 0x1e1888: 0x70002e28
    ctx->pc = 0x1e1888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e188c: 0xc069040
    ctx->pc = 0x1E188Cu;
    SET_GPR_U32(ctx, 31, 0x1E1894u);
    ctx->pc = 0x1E1890u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1894u; }
        else if (ctx->pc != 0x1E1894u) { ctx->pc = 0x1E1894u; }
    }
    if (ctx->pc != 0x1E1894u) { return; }
    ctx->pc = 0x1E1894u;
    // 0x1e1894: 0x70402628
    ctx->pc = 0x1e1894u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1898: 0x10800004
    ctx->pc = 0x1E1898u;
    {
        const bool branch_taken_0x1e1898 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E189Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e1898) {
            ctx->pc = 0x1E18ACu;
            goto label_1e18ac;
        }
    }
    ctx->pc = 0x1E18A0u;
    // 0x1e18a0: 0x4600a306
    ctx->pc = 0x1e18a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e18a4: 0xc078428
    ctx->pc = 0x1E18A4u;
    SET_GPR_U32(ctx, 31, 0x1E18ACu);
    ctx->pc = 0x1E18A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E10A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13FcvEffectTaskFi4ANPOf_0x1e10a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18ACu; }
        else if (ctx->pc != 0x1E18ACu) { ctx->pc = 0x1E18ACu; }
    }
    if (ctx->pc != 0x1E18ACu) { return; }
    ctx->pc = 0x1E18ACu;
label_1e18ac:
    // 0x1e18ac: 0x7bbf0040
    ctx->pc = 0x1e18acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e18b0:
    // 0x1e18b0: 0x7bb20030
    ctx->pc = 0x1e18b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e18b4: 0x7bb10020
    ctx->pc = 0x1e18b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e18b8: 0x7bb00010
    ctx->pc = 0x1e18b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e18bc: 0xc7b40000
    ctx->pc = 0x1e18bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e18c0: 0x3e00008
    ctx->pc = 0x1E18C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E18C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1818u: goto label_1e1818;
            case 0x1E1864u: goto label_1e1864;
            case 0x1E18ACu: goto label_1e18ac;
            case 0x1E18B0u: goto label_1e18b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E18C8u;
}
