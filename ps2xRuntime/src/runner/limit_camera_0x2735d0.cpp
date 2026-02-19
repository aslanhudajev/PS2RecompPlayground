#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: limit_camera
// Address: 0x2735d0 - 0x273828
void limit_camera_0x2735d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2735d0u;

    // 0x2735d0: 0x27bdffe0
    ctx->pc = 0x2735d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2735d4: 0x240201a0
    ctx->pc = 0x2735d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x2735d8: 0x822018
    ctx->pc = 0x2735d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2735dc: 0x3c020034
    ctx->pc = 0x2735dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2735e0: 0x2442eb60
    ctx->pc = 0x2735e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x2735e4: 0x822021
    ctx->pc = 0x2735e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2735e8: 0x3c020031
    ctx->pc = 0x2735e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2735ec: 0xc441ffa8
    ctx->pc = 0x2735ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2735f0: 0x3c014120
    ctx->pc = 0x2735f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2735f4: 0x44810000
    ctx->pc = 0x2735f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2735f8: 0x3c020032
    ctx->pc = 0x2735f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2735fc: 0x8c42080c
    ctx->pc = 0x2735fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x273600: 0x1440007c
    ctx->pc = 0x273600u;
    {
        const bool branch_taken_0x273600 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x273604u;
        ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x273600) {
            ctx->pc = 0x2737F4u;
            goto label_2737f4;
        }
    }
    ctx->pc = 0x273608u;
    // 0x273608: 0x3c020032
    ctx->pc = 0x273608u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27360c: 0x8c420810
    ctx->pc = 0x27360cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x273610: 0x54400079
    ctx->pc = 0x273610u;
    {
        const bool branch_taken_0x273610 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x273610) {
            ctx->pc = 0x273614u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
            ctx->pc = 0x2737F8u;
            goto label_2737f8;
        }
    }
    ctx->pc = 0x273618u;
    // 0x273618: 0x8c8300f8
    ctx->pc = 0x273618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x27361c: 0x24020003
    ctx->pc = 0x27361cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x273620: 0x54620075
    ctx->pc = 0x273620u;
    {
        const bool branch_taken_0x273620 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x273620) {
            ctx->pc = 0x273624u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
            ctx->pc = 0x2737F8u;
            goto label_2737f8;
        }
    }
    ctx->pc = 0x273628u;
    // 0x273628: 0x3c020034
    ctx->pc = 0x273628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27362c: 0x8c42f9d0
    ctx->pc = 0x27362cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965712)));
    // 0x273630: 0x28420003
    ctx->pc = 0x273630u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x273634: 0x1440006b
    ctx->pc = 0x273634u;
    {
        const bool branch_taken_0x273634 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x273638u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x273634) {
            ctx->pc = 0x2737E4u;
            goto label_2737e4;
        }
    }
    ctx->pc = 0x27363Cu;
    // 0x27363c: 0xc4830040
    ctx->pc = 0x27363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x273640: 0xc4800050
    ctx->pc = 0x273640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273644: 0x460018c1
    ctx->pc = 0x273644u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x273648: 0xe7a30000
    ctx->pc = 0x273648u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27364c: 0xc4820044
    ctx->pc = 0x27364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273650: 0xc4800054
    ctx->pc = 0x273650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273654: 0x46001081
    ctx->pc = 0x273654u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x273658: 0xe7a20004
    ctx->pc = 0x273658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27365c: 0xc4810048
    ctx->pc = 0x27365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273660: 0xc4800058
    ctx->pc = 0x273660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273664: 0x46000841
    ctx->pc = 0x273664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273668: 0xe7a10008
    ctx->pc = 0x273668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27366c: 0xc4800060
    ctx->pc = 0x27366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273670: 0x460018c1
    ctx->pc = 0x273670u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x273674: 0xe7a30010
    ctx->pc = 0x273674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x273678: 0xc4800064
    ctx->pc = 0x273678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27367c: 0x46001081
    ctx->pc = 0x27367cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x273680: 0xe7a20014
    ctx->pc = 0x273680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x273684: 0xc4800068
    ctx->pc = 0x273684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273688: 0x46000841
    ctx->pc = 0x273688u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27368c: 0xe7a10018
    ctx->pc = 0x27368cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x273690: 0x302d
    ctx->pc = 0x273690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273694: 0x44801000
    ctx->pc = 0x273694u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x273698: 0x27a50010
    ctx->pc = 0x273698u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x27369c: 0x24870060
    ctx->pc = 0x27369cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 96));
    // 0x2736a0: 0x61880
    ctx->pc = 0x2736a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x2736a4: 0x0
    ctx->pc = 0x2736a4u;
    // NOP
label_2736a8:
    // 0x2736a8: 0x3a31021
    ctx->pc = 0x2736a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2736ac: 0xc4400000
    ctx->pc = 0x2736acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736b0: 0x46001034
    ctx->pc = 0x2736b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2736b4: 0x0
    ctx->pc = 0x2736b4u;
    // NOP
    // 0x2736b8: 0x45000013
    ctx->pc = 0x2736B8u;
    {
        const bool branch_taken_0x2736b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2736BCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x2736b8) {
            ctx->pc = 0x273708u;
            goto label_273708;
        }
    }
    ctx->pc = 0x2736C0u;
    // 0x2736c0: 0xc4400000
    ctx->pc = 0x2736c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736c4: 0x46002034
    ctx->pc = 0x2736c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2736c8: 0x0
    ctx->pc = 0x2736c8u;
    // NOP
    // 0x2736cc: 0x45030001
    ctx->pc = 0x2736CCu;
    {
        const bool branch_taken_0x2736cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2736cc) {
            ctx->pc = 0x2736D0u;
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->pc = 0x2736D4u;
            goto label_2736d4;
        }
    }
    ctx->pc = 0x2736D4u;
label_2736d4:
    // 0x2736d4: 0x61880
    ctx->pc = 0x2736d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x2736d8: 0xe31021
    ctx->pc = 0x2736d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2736dc: 0xc4400000
    ctx->pc = 0x2736dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736e0: 0x46020034
    ctx->pc = 0x2736e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2736e4: 0x0
    ctx->pc = 0x2736e4u;
    // NOP
    // 0x2736e8: 0x45000008
    ctx->pc = 0x2736E8u;
    {
        const bool branch_taken_0x2736e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2736ECu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x2736e8) {
            ctx->pc = 0x27370Cu;
            goto label_27370c;
        }
    }
    ctx->pc = 0x2736F0u;
    // 0x2736f0: 0x46000047
    ctx->pc = 0x2736f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2736f4: 0xc4400000
    ctx->pc = 0x2736f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736f8: 0x46000834
    ctx->pc = 0x2736f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2736fc: 0x0
    ctx->pc = 0x2736fcu;
    // NOP
    // 0x273700: 0x45030002
    ctx->pc = 0x273700u;
    {
        const bool branch_taken_0x273700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273700) {
            ctx->pc = 0x273704u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->pc = 0x27370Cu;
            goto label_27370c;
        }
    }
    ctx->pc = 0x273708u;
label_273708:
    // 0x273708: 0x61880
    ctx->pc = 0x273708u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_27370c:
    // 0x27370c: 0x3a31021
    ctx->pc = 0x27370cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x273710: 0xc4400000
    ctx->pc = 0x273710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273714: 0x46020034
    ctx->pc = 0x273714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273718: 0x0
    ctx->pc = 0x273718u;
    // NOP
    // 0x27371c: 0x45000014
    ctx->pc = 0x27371Cu;
    {
        const bool branch_taken_0x27371c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273720u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x27371c) {
            ctx->pc = 0x273770u;
            goto label_273770;
        }
    }
    ctx->pc = 0x273724u;
    // 0x273724: 0x46002047
    ctx->pc = 0x273724u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x273728: 0xc4400000
    ctx->pc = 0x273728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27372c: 0x46010034
    ctx->pc = 0x27372cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273730: 0x0
    ctx->pc = 0x273730u;
    // NOP
    // 0x273734: 0x45030001
    ctx->pc = 0x273734u;
    {
        const bool branch_taken_0x273734 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273734) {
            ctx->pc = 0x273738u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->pc = 0x27373Cu;
            goto label_27373c;
        }
    }
    ctx->pc = 0x27373Cu;
label_27373c:
    // 0x27373c: 0x61880
    ctx->pc = 0x27373cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x273740: 0xe31021
    ctx->pc = 0x273740u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x273744: 0xc4400000
    ctx->pc = 0x273744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273748: 0x46001034
    ctx->pc = 0x273748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27374c: 0x0
    ctx->pc = 0x27374cu;
    // NOP
    // 0x273750: 0x45000007
    ctx->pc = 0x273750u;
    {
        const bool branch_taken_0x273750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273754u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x273750) {
            ctx->pc = 0x273770u;
            goto label_273770;
        }
    }
    ctx->pc = 0x273758u;
    // 0x273758: 0x46000047
    ctx->pc = 0x273758u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x27375c: 0xc4400000
    ctx->pc = 0x27375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273760: 0x46010034
    ctx->pc = 0x273760u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273764: 0x0
    ctx->pc = 0x273764u;
    // NOP
    // 0x273768: 0x45030001
    ctx->pc = 0x273768u;
    {
        const bool branch_taken_0x273768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273768) {
            ctx->pc = 0x27376Cu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->pc = 0x273770u;
            goto label_273770;
        }
    }
    ctx->pc = 0x273770u;
label_273770:
    // 0x273770: 0x24c60001
    ctx->pc = 0x273770u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x273774: 0x28c20003
    ctx->pc = 0x273774u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 3));
    // 0x273778: 0x1440ffcb
    ctx->pc = 0x273778u;
    {
        const bool branch_taken_0x273778 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27377Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x273778) {
            ctx->pc = 0x2736A8u;
            goto label_2736a8;
        }
    }
    ctx->pc = 0x273780u;
    // 0x273780: 0xc4830060
    ctx->pc = 0x273780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x273784: 0xc7a00010
    ctx->pc = 0x273784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273788: 0x460018c0
    ctx->pc = 0x273788u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27378c: 0xe7a30000
    ctx->pc = 0x27378cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x273790: 0xc4820064
    ctx->pc = 0x273790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x273794: 0xc7a00014
    ctx->pc = 0x273794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273798: 0x46001080
    ctx->pc = 0x273798u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27379c: 0xe7a20004
    ctx->pc = 0x27379cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2737a0: 0xc4810068
    ctx->pc = 0x2737a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2737a4: 0xc7a00018
    ctx->pc = 0x2737a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2737a8: 0x46000840
    ctx->pc = 0x2737a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2737ac: 0xe7a10008
    ctx->pc = 0x2737acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2737b0: 0xc4800050
    ctx->pc = 0x2737b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2737b4: 0x46030000
    ctx->pc = 0x2737b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2737b8: 0xe4800040
    ctx->pc = 0x2737b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2737bc: 0xc4800054
    ctx->pc = 0x2737bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2737c0: 0x46020000
    ctx->pc = 0x2737c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2737c4: 0xe4800044
    ctx->pc = 0x2737c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2737c8: 0xc4800058
    ctx->pc = 0x2737c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2737cc: 0x46010000
    ctx->pc = 0x2737ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2737d0: 0xe4800048
    ctx->pc = 0x2737d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2737d4: 0xe4830060
    ctx->pc = 0x2737d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x2737d8: 0xe4820064
    ctx->pc = 0x2737d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x2737dc: 0x1000000a
    ctx->pc = 0x2737DCu;
    {
        const bool branch_taken_0x2737dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2737E0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
        if (branch_taken_0x2737dc) {
            ctx->pc = 0x273808u;
            goto label_273808;
        }
    }
    ctx->pc = 0x2737E4u;
label_2737e4:
    // 0x2737e4: 0x8c62f9d0
    ctx->pc = 0x2737e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965712)));
    // 0x2737e8: 0x24420001
    ctx->pc = 0x2737e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2737ec: 0x10000006
    ctx->pc = 0x2737ECu;
    {
        const bool branch_taken_0x2737ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2737F0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965712), GPR_U32(ctx, 2));
        if (branch_taken_0x2737ec) {
            ctx->pc = 0x273808u;
            goto label_273808;
        }
    }
    ctx->pc = 0x2737F4u;
label_2737f4:
    // 0x2737f4: 0xac800060
    ctx->pc = 0x2737f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_2737f8:
    // 0x2737f8: 0xac800064
    ctx->pc = 0x2737f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x2737fc: 0xac800068
    ctx->pc = 0x2737fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x273800: 0x3c020034
    ctx->pc = 0x273800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x273804: 0xac40f9d0
    ctx->pc = 0x273804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965712), GPR_U32(ctx, 0));
label_273808:
    // 0x273808: 0xc4800040
    ctx->pc = 0x273808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27380c: 0xe4800050
    ctx->pc = 0x27380cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x273810: 0xc4800044
    ctx->pc = 0x273810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273814: 0xe4800054
    ctx->pc = 0x273814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x273818: 0xc4800048
    ctx->pc = 0x273818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27381c: 0xe4800058
    ctx->pc = 0x27381cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x273820: 0x3e00008
    ctx->pc = 0x273820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273824u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2736A8u: goto label_2736a8;
            case 0x2736D4u: goto label_2736d4;
            case 0x273708u: goto label_273708;
            case 0x27370Cu: goto label_27370c;
            case 0x27373Cu: goto label_27373c;
            case 0x273770u: goto label_273770;
            case 0x2737E4u: goto label_2737e4;
            case 0x2737F4u: goto label_2737f4;
            case 0x2737F8u: goto label_2737f8;
            case 0x273808u: goto label_273808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x273828u;
}
