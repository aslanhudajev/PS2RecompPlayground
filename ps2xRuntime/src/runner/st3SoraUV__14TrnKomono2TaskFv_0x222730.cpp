#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st3SoraUV__14TrnKomono2TaskFv
// Address: 0x222730 - 0x222988
void st3SoraUV__14TrnKomono2TaskFv_0x222730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st3SoraUV__14TrnKomono2TaskFv");


    ctx->pc = 0x222730u;

    // 0x222730: 0x27bdffe0
    ctx->pc = 0x222730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222734: 0x7fbf0010
    ctx->pc = 0x222734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x222738: 0x7fb00000
    ctx->pc = 0x222738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22273c: 0x8f858c48
    ctx->pc = 0x22273cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x222740: 0x70808628
    ctx->pc = 0x222740u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x222744: 0x2402020d
    ctx->pc = 0x222744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 525));
    // 0x222748: 0x8ca40004
    ctx->pc = 0x222748u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22274c: 0x41840
    ctx->pc = 0x22274cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x222750: 0x641821
    ctx->pc = 0x222750u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222754: 0x31880
    ctx->pc = 0x222754u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x222758: 0x641821
    ctx->pc = 0x222758u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22275c: 0x31900
    ctx->pc = 0x22275cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x222760: 0x652021
    ctx->pc = 0x222760u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x222764: 0x848300d0
    ctx->pc = 0x222764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x222768: 0x1462000b
    ctx->pc = 0x222768u;
    {
        const bool branch_taken_0x222768 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x222768) {
            ctx->pc = 0x222798u;
            goto label_222798;
        }
    }
    ctx->pc = 0x222770u;
    // 0x222770: 0xc48100c0
    ctx->pc = 0x222770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222774: 0x3c024341
    ctx->pc = 0x222774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17217 << 16));
    // 0x222778: 0x44820000
    ctx->pc = 0x222778u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x22277c: 0x0
    ctx->pc = 0x22277cu;
    // NOP
    // 0x222780: 0x46000836
    ctx->pc = 0x222780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222784: 0x0
    ctx->pc = 0x222784u;
    // NOP
    // 0x222788: 0x45010003
    ctx->pc = 0x222788u;
    {
        const bool branch_taken_0x222788 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x222788) {
            ctx->pc = 0x222798u;
            goto label_222798;
        }
    }
    ctx->pc = 0x222790u;
    // 0x222790: 0xc06898c
    ctx->pc = 0x222790u;
    SET_GPR_U32(ctx, 31, 0x222798u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222798u; }
        else if (ctx->pc != 0x222798u) { ctx->pc = 0x222798u; }
    }
    if (ctx->pc != 0x222798u) { return; }
    ctx->pc = 0x222798u;
label_222798:
    // 0x222798: 0x8f858c48
    ctx->pc = 0x222798u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x22279c: 0x24020224
    ctx->pc = 0x22279cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 548));
    // 0x2227a0: 0x8ca40004
    ctx->pc = 0x2227a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2227a4: 0x41840
    ctx->pc = 0x2227a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2227a8: 0x641821
    ctx->pc = 0x2227a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2227ac: 0x31880
    ctx->pc = 0x2227acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2227b0: 0x641821
    ctx->pc = 0x2227b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2227b4: 0x31900
    ctx->pc = 0x2227b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2227b8: 0x651821
    ctx->pc = 0x2227b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2227bc: 0x846300d0
    ctx->pc = 0x2227bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x2227c0: 0x14620003
    ctx->pc = 0x2227C0u;
    {
        const bool branch_taken_0x2227c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2227c0) {
            ctx->pc = 0x2227D0u;
            goto label_2227d0;
        }
    }
    ctx->pc = 0x2227C8u;
    // 0x2227c8: 0xc06898c
    ctx->pc = 0x2227C8u;
    SET_GPR_U32(ctx, 31, 0x2227D0u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2227D0u; }
        else if (ctx->pc != 0x2227D0u) { ctx->pc = 0x2227D0u; }
    }
    if (ctx->pc != 0x2227D0u) { return; }
    ctx->pc = 0x2227D0u;
label_2227d0:
    // 0x2227d0: 0xae00005c
    ctx->pc = 0x2227d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2227d4: 0x8f858c48
    ctx->pc = 0x2227d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2227d8: 0x24020234
    ctx->pc = 0x2227d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 564));
    // 0x2227dc: 0x8ca40004
    ctx->pc = 0x2227dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2227e0: 0x41840
    ctx->pc = 0x2227e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2227e4: 0x641821
    ctx->pc = 0x2227e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2227e8: 0x31880
    ctx->pc = 0x2227e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2227ec: 0x641821
    ctx->pc = 0x2227ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2227f0: 0x31900
    ctx->pc = 0x2227f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2227f4: 0x652021
    ctx->pc = 0x2227f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2227f8: 0x848300d0
    ctx->pc = 0x2227f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x2227fc: 0x1462000a
    ctx->pc = 0x2227FCu;
    {
        const bool branch_taken_0x2227fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2227fc) {
            ctx->pc = 0x222828u;
            goto label_222828;
        }
    }
    ctx->pc = 0x222804u;
    // 0x222804: 0xc48100c0
    ctx->pc = 0x222804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222808: 0x3c024334
    ctx->pc = 0x222808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17204 << 16));
    // 0x22280c: 0x44820000
    ctx->pc = 0x22280cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x222810: 0x0
    ctx->pc = 0x222810u;
    // NOP
    // 0x222814: 0x46000834
    ctx->pc = 0x222814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222818: 0x0
    ctx->pc = 0x222818u;
    // NOP
    // 0x22281c: 0x45010002
    ctx->pc = 0x22281Cu;
    {
        const bool branch_taken_0x22281c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x222820u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22281c) {
            ctx->pc = 0x222828u;
            goto label_222828;
        }
    }
    ctx->pc = 0x222824u;
    // 0x222824: 0xae02005c
    ctx->pc = 0x222824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_222828:
    // 0x222828: 0x8f858c48
    ctx->pc = 0x222828u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x22282c: 0x2402020c
    ctx->pc = 0x22282cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 524));
    // 0x222830: 0x8ca40004
    ctx->pc = 0x222830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x222834: 0x41840
    ctx->pc = 0x222834u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x222838: 0x641821
    ctx->pc = 0x222838u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22283c: 0x31880
    ctx->pc = 0x22283cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x222840: 0x641821
    ctx->pc = 0x222840u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222844: 0x31900
    ctx->pc = 0x222844u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x222848: 0x651821
    ctx->pc = 0x222848u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22284c: 0x846300d0
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x222850: 0x14620002
    ctx->pc = 0x222850u;
    {
        const bool branch_taken_0x222850 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x222854u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x222850) {
            ctx->pc = 0x22285Cu;
            goto label_22285c;
        }
    }
    ctx->pc = 0x222858u;
    // 0x222858: 0xae02005c
    ctx->pc = 0x222858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_22285c:
    // 0x22285c: 0x8f858c48
    ctx->pc = 0x22285cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x222860: 0x2402020d
    ctx->pc = 0x222860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 525));
    // 0x222864: 0x8ca40004
    ctx->pc = 0x222864u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x222868: 0x41840
    ctx->pc = 0x222868u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x22286c: 0x641821
    ctx->pc = 0x22286cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222870: 0x31880
    ctx->pc = 0x222870u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x222874: 0x641821
    ctx->pc = 0x222874u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x222878: 0x31900
    ctx->pc = 0x222878u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x22287c: 0x652021
    ctx->pc = 0x22287cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x222880: 0x848300d0
    ctx->pc = 0x222880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x222884: 0x1462000a
    ctx->pc = 0x222884u;
    {
        const bool branch_taken_0x222884 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x222884) {
            ctx->pc = 0x2228B0u;
            goto label_2228b0;
        }
    }
    ctx->pc = 0x22288Cu;
    // 0x22288c: 0xc48100c0
    ctx->pc = 0x22288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x222890: 0x3c024341
    ctx->pc = 0x222890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17217 << 16));
    // 0x222894: 0x44820000
    ctx->pc = 0x222894u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x222898: 0x0
    ctx->pc = 0x222898u;
    // NOP
    // 0x22289c: 0x46000836
    ctx->pc = 0x22289cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2228a0: 0x0
    ctx->pc = 0x2228a0u;
    // NOP
    // 0x2228a4: 0x45000002
    ctx->pc = 0x2228A4u;
    {
        const bool branch_taken_0x2228a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2228A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2228a4) {
            ctx->pc = 0x2228B0u;
            goto label_2228b0;
        }
    }
    ctx->pc = 0x2228ACu;
    // 0x2228ac: 0xae02005c
    ctx->pc = 0x2228acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_2228b0:
    // 0x2228b0: 0x8f858c48
    ctx->pc = 0x2228b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2228b4: 0x24020218
    ctx->pc = 0x2228b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 536));
    // 0x2228b8: 0x8ca40004
    ctx->pc = 0x2228b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2228bc: 0x41840
    ctx->pc = 0x2228bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2228c0: 0x641821
    ctx->pc = 0x2228c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2228c4: 0x31880
    ctx->pc = 0x2228c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2228c8: 0x641821
    ctx->pc = 0x2228c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2228cc: 0x31900
    ctx->pc = 0x2228ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2228d0: 0x651821
    ctx->pc = 0x2228d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2228d4: 0x846300d0
    ctx->pc = 0x2228d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x2228d8: 0x14620003
    ctx->pc = 0x2228D8u;
    {
        const bool branch_taken_0x2228d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2228d8) {
            ctx->pc = 0x2228E8u;
            goto label_2228e8;
        }
    }
    ctx->pc = 0x2228E0u;
    // 0x2228e0: 0x24020001
    ctx->pc = 0x2228e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2228e4: 0xae02005c
    ctx->pc = 0x2228e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_2228e8:
    // 0x2228e8: 0x3c020050
    ctx->pc = 0x2228e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2228ec: 0xc07ce18
    ctx->pc = 0x2228ECu;
    SET_GPR_U32(ctx, 31, 0x2228F4u);
    ctx->pc = 0x2228F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228F4u; }
        else if (ctx->pc != 0x2228F4u) { ctx->pc = 0x2228F4u; }
    }
    if (ctx->pc != 0x2228F4u) { return; }
    ctx->pc = 0x2228F4u;
    // 0x2228f4: 0x1c400020
    ctx->pc = 0x2228F4u;
    {
        const bool branch_taken_0x2228f4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2228f4) {
            ctx->pc = 0x222978u;
            goto label_222978;
        }
    }
    ctx->pc = 0x2228FCu;
    // 0x2228fc: 0x8e03005c
    ctx->pc = 0x2228fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x222900: 0x1060001d
    ctx->pc = 0x222900u;
    {
        const bool branch_taken_0x222900 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x222900) {
            ctx->pc = 0x222978u;
            goto label_222978;
        }
    }
    ctx->pc = 0x222908u;
    // 0x222908: 0x3c0200db
    ctx->pc = 0x222908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)219 << 16));
    // 0x22290c: 0x3450007c
    ctx->pc = 0x22290cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 2), 124));
    // 0x222910: 0x3c023a83
    ctx->pc = 0x222910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)14979 << 16));
label_222914:
    // 0x222914: 0x3442126f
    ctx->pc = 0x222914u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4719));
    // 0x222918: 0x44826000
    ctx->pc = 0x222918u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x22291c: 0x72002628
    ctx->pc = 0x22291cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x222920: 0xc24af3c
    ctx->pc = 0x222920u;
    SET_GPR_U32(ctx, 31, 0x222928u);
    ctx->pc = 0x222924u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x92BCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphUV__Fiff_0x92bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222928u; }
        else if (ctx->pc != 0x222928u) { ctx->pc = 0x222928u; }
    }
    if (ctx->pc != 0x222928u) { return; }
    ctx->pc = 0x222928u;
    // 0x222928: 0x3c0100db
    ctx->pc = 0x222928u;
    SET_GPR_U32(ctx, 1, ((uint32_t)219 << 16));
    // 0x22292c: 0x26100001
    ctx->pc = 0x22292cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x222930: 0x3421013c
    ctx->pc = 0x222930u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 316));
    // 0x222934: 0x201082a
    ctx->pc = 0x222934u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 1)));
    // 0x222938: 0x1420fff6
    ctx->pc = 0x222938u;
    {
        const bool branch_taken_0x222938 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x22293Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)14979 << 16));
        if (branch_taken_0x222938) {
            ctx->pc = 0x222914u;
            goto label_222914;
        }
    }
    ctx->pc = 0x222940u;
    // 0x222940: 0x3c1000db
    ctx->pc = 0x222940u;
    SET_GPR_U32(ctx, 16, ((uint32_t)219 << 16));
    // 0x222944: 0x3c0239d1
    ctx->pc = 0x222944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)14801 << 16));
label_222948:
    // 0x222948: 0x3442b717
    ctx->pc = 0x222948u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46871));
    // 0x22294c: 0x44826000
    ctx->pc = 0x22294cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x222950: 0x44806800
    ctx->pc = 0x222950u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x222954: 0xc24af3c
    ctx->pc = 0x222954u;
    SET_GPR_U32(ctx, 31, 0x22295Cu);
    ctx->pc = 0x222958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x92BCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphUV__Fiff_0x92bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22295Cu; }
        else if (ctx->pc != 0x22295Cu) { ctx->pc = 0x22295Cu; }
    }
    if (ctx->pc != 0x22295Cu) { return; }
    ctx->pc = 0x22295Cu;
    // 0x22295c: 0x3c0100db
    ctx->pc = 0x22295cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)219 << 16));
    // 0x222960: 0x26100001
    ctx->pc = 0x222960u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x222964: 0x3421007c
    ctx->pc = 0x222964u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 124));
    // 0x222968: 0x201082a
    ctx->pc = 0x222968u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 1)));
    // 0x22296c: 0x5420fff6
    ctx->pc = 0x22296Cu;
    {
        const bool branch_taken_0x22296c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x22296c) {
            ctx->pc = 0x222970u;
            SET_GPR_U32(ctx, 2, ((uint32_t)14801 << 16));
            ctx->pc = 0x222948u;
            goto label_222948;
        }
    }
    ctx->pc = 0x222974u;
    // 0x222974: 0x0
    ctx->pc = 0x222974u;
    // NOP
label_222978:
    // 0x222978: 0x7bbf0010
    ctx->pc = 0x222978u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22297c: 0x7bb00000
    ctx->pc = 0x22297cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222980: 0x3e00008
    ctx->pc = 0x222980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222984u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222798u: goto label_222798;
            case 0x2227D0u: goto label_2227d0;
            case 0x222828u: goto label_222828;
            case 0x22285Cu: goto label_22285c;
            case 0x2228B0u: goto label_2228b0;
            case 0x2228E8u: goto label_2228e8;
            case 0x222914u: goto label_222914;
            case 0x222948u: goto label_222948;
            case 0x222978u: goto label_222978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222988u;
}
