#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutForEntry__10PlayerTaskFv
// Address: 0x2126e0 - 0x212b0c
void PutForEntry__10PlayerTaskFv_0x2126e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutForEntry__10PlayerTaskFv");


    ctx->pc = 0x2126e0u;

    // 0x2126e0: 0x27bdfe00
    ctx->pc = 0x2126e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x2126e4: 0x7fbf0010
    ctx->pc = 0x2126e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2126e8: 0x7fb00000
    ctx->pc = 0x2126e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2126ec: 0x8c8327fc
    ctx->pc = 0x2126ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 10236)));
    // 0x2126f0: 0x30630002
    ctx->pc = 0x2126f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x2126f4: 0x10600051
    ctx->pc = 0x2126F4u;
    {
        const bool branch_taken_0x2126f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2126F8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2126f4) {
            ctx->pc = 0x21283Cu;
            goto label_21283c;
        }
    }
    ctx->pc = 0x2126FCu;
    // 0x2126fc: 0x3c010050
    ctx->pc = 0x2126fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x212700: 0x8024fec5
    ctx->pc = 0x212700u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x212704: 0x3c02002c
    ctx->pc = 0x212704u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x212708: 0x244305b0
    ctx->pc = 0x212708u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1456));
    // 0x21270c: 0x3c023c65
    ctx->pc = 0x21270cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15461 << 16));
    // 0x212710: 0x34476042
    ctx->pc = 0x212710u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 24642));
    // 0x212714: 0x3c023f19
    ctx->pc = 0x212714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16153 << 16));
    // 0x212718: 0x42080
    ctx->pc = 0x212718u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x21271c: 0x641821
    ctx->pc = 0x21271cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212720: 0x8c630000
    ctx->pc = 0x212720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212724: 0x3446999a
    ctx->pc = 0x212724u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 39322));
    // 0x212728: 0x3c023f4c
    ctx->pc = 0x212728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16204 << 16));
    // 0x21272c: 0x3445cccd
    ctx->pc = 0x21272cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 52429));
    // 0x212730: 0x27898460
    ctx->pc = 0x212730u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 28), 4294935648));
    // 0x212734: 0x3c08432a
    ctx->pc = 0x212734u;
    SET_GPR_U32(ctx, 8, ((uint32_t)17194 << 16));
    // 0x212738: 0xafa30068
    ctx->pc = 0x212738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x21273c: 0x8e0a1cb8
    ctx->pc = 0x21273cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x212740: 0x3c033f80
    ctx->pc = 0x212740u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x212744: 0x2402ffff
    ctx->pc = 0x212744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212748: 0x27a40020
    ctx->pc = 0x212748u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x21274c: 0xa5080
    ctx->pc = 0x21274cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 2));
    // 0x212750: 0x12a4821
    ctx->pc = 0x212750u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x212754: 0xc5200000
    ctx->pc = 0x212754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212758: 0xe7a0002c
    ctx->pc = 0x212758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x21275c: 0xafa80030
    ctx->pc = 0x21275cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x212760: 0xafa70034
    ctx->pc = 0x212760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x212764: 0xafa60038
    ctx->pc = 0x212764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x212768: 0xafa5003c
    ctx->pc = 0x212768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x21276c: 0xafa00044
    ctx->pc = 0x21276cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x212770: 0xafa00040
    ctx->pc = 0x212770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x212774: 0xafa3004c
    ctx->pc = 0x212774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x212778: 0xafa30048
    ctx->pc = 0x212778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x21277c: 0xafa00050
    ctx->pc = 0x21277cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x212780: 0xafa30054
    ctx->pc = 0x212780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x212784: 0xafa20058
    ctx->pc = 0x212784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x212788: 0xc085bd8
    ctx->pc = 0x212788u;
    SET_GPR_U32(ctx, 31, 0x212790u);
    ctx->pc = 0x21278Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212790u; }
        else if (ctx->pc != 0x212790u) { ctx->pc = 0x212790u; }
    }
    if (ctx->pc != 0x212790u) { return; }
    ctx->pc = 0x212790u;
    // 0x212790: 0x8e021cbc
    ctx->pc = 0x212790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x212794: 0x8c4300b4
    ctx->pc = 0x212794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x212798: 0x4610003
    ctx->pc = 0x212798u;
    {
        const bool branch_taken_0x212798 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21279Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 12));
        if (branch_taken_0x212798) {
            ctx->pc = 0x2127A8u;
            goto label_2127a8;
        }
    }
    ctx->pc = 0x2127A0u;
    // 0x2127a0: 0x24620fff
    ctx->pc = 0x2127a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4095));
    // 0x2127a4: 0x21303
    ctx->pc = 0x2127a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
label_2127a8:
    // 0x2127a8: 0x244200c4
    ctx->pc = 0x2127a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 196));
    // 0x2127ac: 0xafa200b8
    ctx->pc = 0x2127acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2127b0: 0x3c024320
    ctx->pc = 0x2127b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17184 << 16));
    // 0x2127b4: 0x44820800
    ctx->pc = 0x2127b4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2127b8: 0x8e041cb8
    ctx->pc = 0x2127b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x2127bc: 0x3c024180
    ctx->pc = 0x2127bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16768 << 16));
    // 0x2127c0: 0x44820000
    ctx->pc = 0x2127c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2127c4: 0x27838460
    ctx->pc = 0x2127c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 28), 4294935648));
    // 0x2127c8: 0x3c084352
    ctx->pc = 0x2127c8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)17234 << 16));
    // 0x2127cc: 0x41080
    ctx->pc = 0x2127ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2127d0: 0x621021
    ctx->pc = 0x2127d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2127d4: 0xc4420000
    ctx->pc = 0x2127d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2127d8: 0x3c033f80
    ctx->pc = 0x2127d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x2127dc: 0x27a40070
    ctx->pc = 0x2127dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x2127e0: 0x46020840
    ctx->pc = 0x2127e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2127e4: 0x3c023c65
    ctx->pc = 0x2127e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15461 << 16));
    // 0x2127e8: 0x34476042
    ctx->pc = 0x2127e8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 24642));
    // 0x2127ec: 0x3c023f19
    ctx->pc = 0x2127ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16153 << 16));
    // 0x2127f0: 0x46000801
    ctx->pc = 0x2127f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2127f4: 0x3446999a
    ctx->pc = 0x2127f4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 39322));
    // 0x2127f8: 0x3c023f4c
    ctx->pc = 0x2127f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16204 << 16));
    // 0x2127fc: 0x3445cccd
    ctx->pc = 0x2127fcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 52429));
    // 0x212800: 0xe7a0007c
    ctx->pc = 0x212800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x212804: 0xafa80080
    ctx->pc = 0x212804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x212808: 0xafa70084
    ctx->pc = 0x212808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
    // 0x21280c: 0xafa60088
    ctx->pc = 0x21280cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x212810: 0xafa5008c
    ctx->pc = 0x212810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
    // 0x212814: 0xafa00094
    ctx->pc = 0x212814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x212818: 0xafa00090
    ctx->pc = 0x212818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x21281c: 0xafa3009c
    ctx->pc = 0x21281cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x212820: 0xafa30098
    ctx->pc = 0x212820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x212824: 0xafa000a0
    ctx->pc = 0x212824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x212828: 0x2402ffff
    ctx->pc = 0x212828u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21282c: 0xafa300a4
    ctx->pc = 0x21282cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x212830: 0xafa200a8
    ctx->pc = 0x212830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x212834: 0xc085bd8
    ctx->pc = 0x212834u;
    SET_GPR_U32(ctx, 31, 0x21283Cu);
    ctx->pc = 0x212838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21283Cu; }
        else if (ctx->pc != 0x21283Cu) { ctx->pc = 0x21283Cu; }
    }
    if (ctx->pc != 0x21283Cu) { return; }
    ctx->pc = 0x21283Cu;
label_21283c:
    // 0x21283c: 0x8e0327fc
    ctx->pc = 0x21283cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10236)));
    // 0x212840: 0x30630004
    ctx->pc = 0x212840u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
    // 0x212844: 0x10600021
    ctx->pc = 0x212844u;
    {
        const bool branch_taken_0x212844 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x212848u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x212844) {
            ctx->pc = 0x2128CCu;
            goto label_2128cc;
        }
    }
    ctx->pc = 0x21284Cu;
    // 0x21284c: 0x8024fec5
    ctx->pc = 0x21284cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x212850: 0x3c02002c
    ctx->pc = 0x212850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x212854: 0x244305d0
    ctx->pc = 0x212854u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1488));
    // 0x212858: 0x3c023c65
    ctx->pc = 0x212858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15461 << 16));
    // 0x21285c: 0x34456042
    ctx->pc = 0x21285cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 24642));
    // 0x212860: 0x27878468
    ctx->pc = 0x212860u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 28), 4294935656));
    // 0x212864: 0x42080
    ctx->pc = 0x212864u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x212868: 0x641821
    ctx->pc = 0x212868u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21286c: 0x8c680000
    ctx->pc = 0x21286cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212870: 0x3c06433a
    ctx->pc = 0x212870u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17210 << 16));
    // 0x212874: 0x2402ffff
    ctx->pc = 0x212874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212878: 0x27a400c0
    ctx->pc = 0x212878u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    // 0x21287c: 0xafa80108
    ctx->pc = 0x21287cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 8));
    // 0x212880: 0x8e081cb8
    ctx->pc = 0x212880u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x212884: 0x3c033f80
    ctx->pc = 0x212884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x212888: 0x84080
    ctx->pc = 0x212888u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x21288c: 0xe83821
    ctx->pc = 0x21288cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x212890: 0xc4e00000
    ctx->pc = 0x212890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212894: 0xe7a000cc
    ctx->pc = 0x212894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x212898: 0xafa600d0
    ctx->pc = 0x212898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x21289c: 0xafa500d4
    ctx->pc = 0x21289cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x2128a0: 0xafa300d8
    ctx->pc = 0x2128a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x2128a4: 0xafa300dc
    ctx->pc = 0x2128a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x2128a8: 0xafa000e4
    ctx->pc = 0x2128a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x2128ac: 0xafa000e0
    ctx->pc = 0x2128acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x2128b0: 0xafa300ec
    ctx->pc = 0x2128b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x2128b4: 0xafa300e8
    ctx->pc = 0x2128b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x2128b8: 0xafa000f0
    ctx->pc = 0x2128b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2128bc: 0xafa300f4
    ctx->pc = 0x2128bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x2128c0: 0xafa200f8
    ctx->pc = 0x2128c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2128c4: 0xc085bd8
    ctx->pc = 0x2128C4u;
    SET_GPR_U32(ctx, 31, 0x2128CCu);
    ctx->pc = 0x2128C8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128CCu; }
        else if (ctx->pc != 0x2128CCu) { ctx->pc = 0x2128CCu; }
    }
    if (ctx->pc != 0x2128CCu) { return; }
    ctx->pc = 0x2128CCu;
label_2128cc:
    // 0x2128cc: 0x8e0327fc
    ctx->pc = 0x2128ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10236)));
    // 0x2128d0: 0x30630001
    ctx->pc = 0x2128d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x2128d4: 0x10600021
    ctx->pc = 0x2128D4u;
    {
        const bool branch_taken_0x2128d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2128D8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x2128d4) {
            ctx->pc = 0x21295Cu;
            goto label_21295c;
        }
    }
    ctx->pc = 0x2128DCu;
    // 0x2128dc: 0x8024fec5
    ctx->pc = 0x2128dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x2128e0: 0x3c02002c
    ctx->pc = 0x2128e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x2128e4: 0x24430590
    ctx->pc = 0x2128e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1424));
    // 0x2128e8: 0x3c023c65
    ctx->pc = 0x2128e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15461 << 16));
    // 0x2128ec: 0x34456042
    ctx->pc = 0x2128ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 24642));
    // 0x2128f0: 0x27878458
    ctx->pc = 0x2128f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 28), 4294935640));
    // 0x2128f4: 0x42080
    ctx->pc = 0x2128f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2128f8: 0x641821
    ctx->pc = 0x2128f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2128fc: 0x8c680000
    ctx->pc = 0x2128fcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212900: 0x3c0643c9
    ctx->pc = 0x212900u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17353 << 16));
    // 0x212904: 0x2402ffff
    ctx->pc = 0x212904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212908: 0x27a40110
    ctx->pc = 0x212908u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 272));
    // 0x21290c: 0xafa80158
    ctx->pc = 0x21290cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 8));
    // 0x212910: 0x8e081cb8
    ctx->pc = 0x212910u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x212914: 0x3c033f80
    ctx->pc = 0x212914u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x212918: 0x84080
    ctx->pc = 0x212918u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x21291c: 0xe83821
    ctx->pc = 0x21291cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x212920: 0xc4e00000
    ctx->pc = 0x212920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212924: 0xe7a0011c
    ctx->pc = 0x212924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x212928: 0xafa60120
    ctx->pc = 0x212928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 6));
    // 0x21292c: 0xafa50124
    ctx->pc = 0x21292cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
    // 0x212930: 0xafa30128
    ctx->pc = 0x212930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x212934: 0xafa3012c
    ctx->pc = 0x212934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x212938: 0xafa00134
    ctx->pc = 0x212938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x21293c: 0xafa00130
    ctx->pc = 0x21293cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x212940: 0xafa3013c
    ctx->pc = 0x212940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
    // 0x212944: 0xafa30138
    ctx->pc = 0x212944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x212948: 0xafa00140
    ctx->pc = 0x212948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x21294c: 0xafa30144
    ctx->pc = 0x21294cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
    // 0x212950: 0xafa20148
    ctx->pc = 0x212950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x212954: 0xc085bd8
    ctx->pc = 0x212954u;
    SET_GPR_U32(ctx, 31, 0x21295Cu);
    ctx->pc = 0x212958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21295Cu; }
        else if (ctx->pc != 0x21295Cu) { ctx->pc = 0x21295Cu; }
    }
    if (ctx->pc != 0x21295Cu) { return; }
    ctx->pc = 0x21295Cu;
label_21295c:
    // 0x21295c: 0x8e0327fc
    ctx->pc = 0x21295cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10236)));
    // 0x212960: 0x30630010
    ctx->pc = 0x212960u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16));
    // 0x212964: 0x10600005
    ctx->pc = 0x212964u;
    {
        const bool branch_taken_0x212964 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x212964) {
            ctx->pc = 0x21297Cu;
            goto label_21297c;
        }
    }
    ctx->pc = 0x21296Cu;
    // 0x21296c: 0x8e051cb8
    ctx->pc = 0x21296cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x212970: 0x3c020050
    ctx->pc = 0x212970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x212974: 0xc075160
    ctx->pc = 0x212974u;
    SET_GPR_U32(ctx, 31, 0x21297Cu);
    ctx->pc = 0x212978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D4580u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispPlInsert__11CreditClassFi_0x1d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21297Cu; }
        else if (ctx->pc != 0x21297Cu) { ctx->pc = 0x21297Cu; }
    }
    if (ctx->pc != 0x21297Cu) { return; }
    ctx->pc = 0x21297Cu;
label_21297c:
    // 0x21297c: 0x3c010050
    ctx->pc = 0x21297cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x212980: 0x8424e504
    ctx->pc = 0x212980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x212984: 0x2403000a
    ctx->pc = 0x212984u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x212988: 0x14830009
    ctx->pc = 0x212988u;
    {
        const bool branch_taken_0x212988 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x212988) {
            ctx->pc = 0x2129B0u;
            goto label_2129b0;
        }
    }
    ctx->pc = 0x212990u;
    // 0x212990: 0x83848ba8
    ctx->pc = 0x212990u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x212994: 0x24030005
    ctx->pc = 0x212994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x212998: 0x14830005
    ctx->pc = 0x212998u;
    {
        const bool branch_taken_0x212998 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x212998) {
            ctx->pc = 0x2129B0u;
            goto label_2129b0;
        }
    }
    ctx->pc = 0x2129A0u;
    // 0x2129a0: 0x83848bac
    ctx->pc = 0x2129a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937516)));
    // 0x2129a4: 0x24030003
    ctx->pc = 0x2129a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2129a8: 0x10830054
    ctx->pc = 0x2129A8u;
    {
        const bool branch_taken_0x2129a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2129a8) {
            ctx->pc = 0x212AFCu;
            goto label_212afc;
        }
    }
    ctx->pc = 0x2129B0u;
label_2129b0:
    // 0x2129b0: 0x8e0327fc
    ctx->pc = 0x2129b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10236)));
    // 0x2129b4: 0x30630008
    ctx->pc = 0x2129b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8));
    // 0x2129b8: 0x10600050
    ctx->pc = 0x2129B8u;
    {
        const bool branch_taken_0x2129b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2129b8) {
            ctx->pc = 0x212AFCu;
            goto label_212afc;
        }
    }
    ctx->pc = 0x2129C0u;
    // 0x2129c0: 0x8f848d68
    ctx->pc = 0x2129c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
    // 0x2129c4: 0x24030002
    ctx->pc = 0x2129c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2129c8: 0x80840004
    ctx->pc = 0x2129c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2129cc: 0x10830003
    ctx->pc = 0x2129CCu;
    {
        const bool branch_taken_0x2129cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2129D0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x2129cc) {
            ctx->pc = 0x2129DCu;
            goto label_2129dc;
        }
    }
    ctx->pc = 0x2129D4u;
    // 0x2129d4: 0x1000004a
    ctx->pc = 0x2129D4u;
    {
        const bool branch_taken_0x2129d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2129D8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2129d4) {
            ctx->pc = 0x212B00u;
            goto label_212b00;
        }
    }
    ctx->pc = 0x2129DCu;
label_2129dc:
    // 0x2129dc: 0x8024fec5
    ctx->pc = 0x2129dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x2129e0: 0x8e031cb8
    ctx->pc = 0x2129e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x2129e4: 0x3c020027
    ctx->pc = 0x2129e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x2129e8: 0x24422f90
    ctx->pc = 0x2129e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12176));
    // 0x2129ec: 0x27878470
    ctx->pc = 0x2129ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 28), 4294935664));
    // 0x2129f0: 0x3c0643be
    ctx->pc = 0x2129f0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)17342 << 16));
    // 0x2129f4: 0x42100
    ctx->pc = 0x2129f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2129f8: 0x442021
    ctx->pc = 0x2129f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2129fc: 0x318c0
    ctx->pc = 0x2129fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x212a00: 0x641821
    ctx->pc = 0x212a00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212a04: 0x8c680000
    ctx->pc = 0x212a04u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212a08: 0x3c023c65
    ctx->pc = 0x212a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15461 << 16));
    // 0x212a0c: 0x34456042
    ctx->pc = 0x212a0cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 24642));
    // 0x212a10: 0x2402ffff
    ctx->pc = 0x212a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212a14: 0x27a40160
    ctx->pc = 0x212a14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 352));
    // 0x212a18: 0xafa801a8
    ctx->pc = 0x212a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 8));
    // 0x212a1c: 0x8e081cb8
    ctx->pc = 0x212a1cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x212a20: 0x3c033f80
    ctx->pc = 0x212a20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x212a24: 0x84080
    ctx->pc = 0x212a24u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x212a28: 0xe83821
    ctx->pc = 0x212a28u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x212a2c: 0xc4e00000
    ctx->pc = 0x212a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212a30: 0xe7a0016c
    ctx->pc = 0x212a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x212a34: 0xafa60170
    ctx->pc = 0x212a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
    // 0x212a38: 0xafa50174
    ctx->pc = 0x212a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 5));
    // 0x212a3c: 0xafa30178
    ctx->pc = 0x212a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x212a40: 0xafa3017c
    ctx->pc = 0x212a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x212a44: 0xafa00184
    ctx->pc = 0x212a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x212a48: 0xafa00180
    ctx->pc = 0x212a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x212a4c: 0xafa3018c
    ctx->pc = 0x212a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x212a50: 0xafa30188
    ctx->pc = 0x212a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
    // 0x212a54: 0xafa00190
    ctx->pc = 0x212a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x212a58: 0xafa30194
    ctx->pc = 0x212a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
    // 0x212a5c: 0xafa20198
    ctx->pc = 0x212a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x212a60: 0xc085bd8
    ctx->pc = 0x212A60u;
    SET_GPR_U32(ctx, 31, 0x212A68u);
    ctx->pc = 0x212A64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212A68u; }
        else if (ctx->pc != 0x212A68u) { ctx->pc = 0x212A68u; }
    }
    if (ctx->pc != 0x212A68u) { return; }
    ctx->pc = 0x212A68u;
    // 0x212a68: 0x3c010050
    ctx->pc = 0x212a68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x212a6c: 0x8024fec5
    ctx->pc = 0x212a6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x212a70: 0x8e031cb8
    ctx->pc = 0x212a70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x212a74: 0x3c020027
    ctx->pc = 0x212a74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x212a78: 0x24422f94
    ctx->pc = 0x212a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12180));
    // 0x212a7c: 0x27888470
    ctx->pc = 0x212a7cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 28), 4294935664));
    // 0x212a80: 0x3c0743be
    ctx->pc = 0x212a80u;
    SET_GPR_U32(ctx, 7, ((uint32_t)17342 << 16));
    // 0x212a84: 0x42100
    ctx->pc = 0x212a84u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x212a88: 0x442021
    ctx->pc = 0x212a88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x212a8c: 0x318c0
    ctx->pc = 0x212a8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x212a90: 0x641821
    ctx->pc = 0x212a90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212a94: 0x8c690000
    ctx->pc = 0x212a94u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212a98: 0x3c023c65
    ctx->pc = 0x212a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15461 << 16));
    // 0x212a9c: 0x34466042
    ctx->pc = 0x212a9cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 24642));
    // 0x212aa0: 0x3c053f80
    ctx->pc = 0x212aa0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x212aa4: 0x34028000
    ctx->pc = 0x212aa4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x212aa8: 0x27a401b0
    ctx->pc = 0x212aa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 432));
    // 0x212aac: 0xafa901f8
    ctx->pc = 0x212aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 9));
    // 0x212ab0: 0x8e091cb8
    ctx->pc = 0x212ab0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x212ab4: 0x2403ffff
    ctx->pc = 0x212ab4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x212ab8: 0x94880
    ctx->pc = 0x212ab8u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 2));
    // 0x212abc: 0x1094021
    ctx->pc = 0x212abcu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x212ac0: 0xc5000000
    ctx->pc = 0x212ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212ac4: 0xe7a001bc
    ctx->pc = 0x212ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x212ac8: 0xafa701c0
    ctx->pc = 0x212ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 7));
    // 0x212acc: 0xafa601c4
    ctx->pc = 0x212accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 6));
    // 0x212ad0: 0xafa501c8
    ctx->pc = 0x212ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 5));
    // 0x212ad4: 0xafa501cc
    ctx->pc = 0x212ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 5));
    // 0x212ad8: 0xafa001d4
    ctx->pc = 0x212ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 0));
    // 0x212adc: 0xafa001d0
    ctx->pc = 0x212adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
    // 0x212ae0: 0xafa501dc
    ctx->pc = 0x212ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 5));
    // 0x212ae4: 0xafa501d8
    ctx->pc = 0x212ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 5));
    // 0x212ae8: 0xafa001e0
    ctx->pc = 0x212ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 0));
    // 0x212aec: 0xafa501e4
    ctx->pc = 0x212aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 5));
    // 0x212af0: 0xafa301e8
    ctx->pc = 0x212af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 3));
    // 0x212af4: 0xc085bd8
    ctx->pc = 0x212AF4u;
    SET_GPR_U32(ctx, 31, 0x212AFCu);
    ctx->pc = 0x212AF8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AFCu; }
        else if (ctx->pc != 0x212AFCu) { ctx->pc = 0x212AFCu; }
    }
    if (ctx->pc != 0x212AFCu) { return; }
    ctx->pc = 0x212AFCu;
label_212afc:
    // 0x212afc: 0x7bbf0010
    ctx->pc = 0x212afcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_212b00:
    // 0x212b00: 0x7bb00000
    ctx->pc = 0x212b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b04: 0x3e00008
    ctx->pc = 0x212B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212B08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2127A8u: goto label_2127a8;
            case 0x21283Cu: goto label_21283c;
            case 0x2128CCu: goto label_2128cc;
            case 0x21295Cu: goto label_21295c;
            case 0x21297Cu: goto label_21297c;
            case 0x2129B0u: goto label_2129b0;
            case 0x2129DCu: goto label_2129dc;
            case 0x212AFCu: goto label_212afc;
            case 0x212B00u: goto label_212b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212B0Cu;
}
