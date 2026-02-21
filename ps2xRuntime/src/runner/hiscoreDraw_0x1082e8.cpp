#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hiscoreDraw
// Address: 0x1082e8 - 0x1083c0
void hiscoreDraw_0x1082e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1082e8u;

    // 0x1082e8: 0x27bdffd0
    ctx->pc = 0x1082e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1082ec: 0x3c020014
    ctx->pc = 0x1082ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20 << 16));
    // 0x1082f0: 0xffb00010
    ctx->pc = 0x1082f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1082f4: 0xffbf0020
    ctx->pc = 0x1082f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1082f8: 0x24501698
    ctx->pc = 0x1082f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 5784));
    // 0x1082fc: 0xc6000058
    ctx->pc = 0x1082fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x108300: 0x46800020
    ctx->pc = 0x108300u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x108304: 0xc6020064
    ctx->pc = 0x108304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x108308: 0xc601005c
    ctx->pc = 0x108308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10830c: 0x46800860
    ctx->pc = 0x10830cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x108310: 0xc6030068
    ctx->pc = 0x108310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x108314: 0x8e040044
    ctx->pc = 0x108314u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x108318: 0x46020002
    ctx->pc = 0x108318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10831c: 0x8e050048
    ctx->pc = 0x10831cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x108320: 0x46030842
    ctx->pc = 0x108320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x108324: 0x8e06004c
    ctx->pc = 0x108324u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x108328: 0x8e070050
    ctx->pc = 0x108328u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x10832c: 0x460000a4
    ctx->pc = 0x10832cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x108330: 0x44091000
    ctx->pc = 0x108330u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x108334: 0x8e080054
    ctx->pc = 0x108334u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x108338: 0x46000824
    ctx->pc = 0x108338u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x10833c: 0x440a0000
    ctx->pc = 0x10833cu;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x108340: 0xc040f80
    ctx->pc = 0x108340u;
    SET_GPR_U32(ctx, 31, 0x108348u);
    ctx->pc = 0x108344u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->pc = 0x103E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw24bitImage_0x103e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108348u; }
    }
    if (ctx->pc != 0x108348u) { return; }
    ctx->pc = 0x108348u;
    // 0x108348: 0x8f8280ac
    ctx->pc = 0x108348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x10834c: 0x28420065
    ctx->pc = 0x10834cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 101));
    // 0x108350: 0x14400018
    ctx->pc = 0x108350u;
    {
        const bool branch_taken_0x108350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x108354u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x108350) {
            ctx->pc = 0x1083B4u;
            goto label_1083b4;
        }
    }
    ctx->pc = 0x108358u;
    // 0x108358: 0xc600009c
    ctx->pc = 0x108358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10835c: 0x46800020
    ctx->pc = 0x10835cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x108360: 0xc60200a8
    ctx->pc = 0x108360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x108364: 0xc60100a0
    ctx->pc = 0x108364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x108368: 0x46800860
    ctx->pc = 0x108368u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x10836c: 0xc60300ac
    ctx->pc = 0x10836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x108370: 0x3c027f00
    ctx->pc = 0x108370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32512 << 16));
    // 0x108374: 0x920b00b0
    ctx->pc = 0x108374u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x108378: 0x46020002
    ctx->pc = 0x108378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10837c: 0x8e080098
    ctx->pc = 0x10837cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x108380: 0x46030842
    ctx->pc = 0x108380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x108384: 0x344280ff
    ctx->pc = 0x108384u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 33023));
    // 0x108388: 0x8e040088
    ctx->pc = 0x108388u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x10838c: 0x460000a4
    ctx->pc = 0x10838cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x108390: 0x44091000
    ctx->pc = 0x108390u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x108394: 0x8e05008c
    ctx->pc = 0x108394u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x108398: 0x46000824
    ctx->pc = 0x108398u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x10839c: 0x440a0000
    ctx->pc = 0x10839cu;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x1083a0: 0x8e060090
    ctx->pc = 0x1083a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1083a4: 0x8e070094
    ctx->pc = 0x1083a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1083a8: 0xc041560
    ctx->pc = 0x1083A8u;
    SET_GPR_U32(ctx, 31, 0x1083B0u);
    ctx->pc = 0x1083ACu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1083B0u; }
    }
    if (ctx->pc != 0x1083B0u) { return; }
    ctx->pc = 0x1083B0u;
    // 0x1083b0: 0xdfbf0020
    ctx->pc = 0x1083b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1083b4:
    // 0x1083b4: 0xdfb00010
    ctx->pc = 0x1083b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1083b8: 0x3e00008
    ctx->pc = 0x1083B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1083BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1083B4u: goto label_1083b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1083C0u;
}
