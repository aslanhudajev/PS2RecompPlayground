#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetupPosLights
// Address: 0x2bf9e8 - 0x2bfc18
void pbSetupPosLights_0x2bf9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bf9e8u;

    // 0x2bf9e8: 0x27bdfd90
    ctx->pc = 0x2bf9e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x2bf9ec: 0xffbf0250
    ctx->pc = 0x2bf9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 31));
    // 0x2bf9f0: 0xffbe0240
    ctx->pc = 0x2bf9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 30));
    // 0x2bf9f4: 0xffb70230
    ctx->pc = 0x2bf9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 23));
    // 0x2bf9f8: 0xffb60220
    ctx->pc = 0x2bf9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 22));
    // 0x2bf9fc: 0xffb50210
    ctx->pc = 0x2bf9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 21));
    // 0x2bfa00: 0xffb40200
    ctx->pc = 0x2bfa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 20));
    // 0x2bfa04: 0xffb301f0
    ctx->pc = 0x2bfa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 19));
    // 0x2bfa08: 0xffb201e0
    ctx->pc = 0x2bfa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 18));
    // 0x2bfa0c: 0xffb101d0
    ctx->pc = 0x2bfa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 17));
    // 0x2bfa10: 0xffb001c0
    ctx->pc = 0x2bfa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x2bfa14: 0xe7b40260
    ctx->pc = 0x2bfa14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2bfa18: 0x80a02d
    ctx->pc = 0x2bfa18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa1c: 0xa0f02d
    ctx->pc = 0x2bfa1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa20: 0xc0b82d
    ctx->pc = 0x2bfa20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa24: 0x46006506
    ctx->pc = 0x2bfa24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bfa28: 0x3c020036
    ctx->pc = 0x2bfa28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bfa2c: 0x8c55dee0
    ctx->pc = 0x2bfa2cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bfa30: 0x3a0202d
    ctx->pc = 0x2bfa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa34: 0xc0b9534
    ctx->pc = 0x2BFA34u;
    SET_GPR_U32(ctx, 31, 0x2BFA3Cu);
    ctx->pc = 0x2BFA38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E54D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InversMatrix_0x2e54d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA3Cu; }
    }
    if (ctx->pc != 0x2BFA3Cu) { return; }
    ctx->pc = 0x2BFA3Cu;
    // 0x2bfa3c: 0x982d
    ctx->pc = 0x2bfa3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa40: 0x8ea2001c
    ctx->pc = 0x2bfa40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x2bfa44: 0x40282d
    ctx->pc = 0x2bfa44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa48: 0x8c4200c8
    ctx->pc = 0x2bfa48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x2bfa4c: 0x18400034
    ctx->pc = 0x2BFA4Cu;
    {
        const bool branch_taken_0x2bfa4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BFA50u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bfa4c) {
            ctx->pc = 0x2BFB20u;
            goto label_2bfb20;
        }
    }
    ctx->pc = 0x2BFA54u;
    // 0x2bfa54: 0x27b60040
    ctx->pc = 0x2bfa54u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bfa58: 0x131140
    ctx->pc = 0x2bfa58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 5));
    // 0x2bfa5c: 0x0
    ctx->pc = 0x2bfa5cu;
    // NOP
label_2bfa60:
    // 0x2bfa60: 0x24420110
    ctx->pc = 0x2bfa60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 272));
    // 0x2bfa64: 0x458821
    ctx->pc = 0x2bfa64u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bfa68: 0x122140
    ctx->pc = 0x2bfa68u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 5));
    // 0x2bfa6c: 0x2c42021
    ctx->pc = 0x2bfa6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2bfa70: 0x220282d
    ctx->pc = 0x2bfa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa74: 0xc0b626d
    ctx->pc = 0x2BFA74u;
    SET_GPR_U32(ctx, 31, 0x2BFA7Cu);
    ctx->pc = 0x2BFA78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA7Cu; }
    }
    if (ctx->pc != 0x2BFA7Cu) { return; }
    ctx->pc = 0x2BFA7Cu;
    // 0x2bfa7c: 0x3c030037
    ctx->pc = 0x2bfa7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2bfa80: 0x8c6228a8
    ctx->pc = 0x2bfa80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10408)));
    // 0x2bfa84: 0x10400004
    ctx->pc = 0x2BFA84u;
    {
        const bool branch_taken_0x2bfa84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFA88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bfa84) {
            ctx->pc = 0x2BFA98u;
            goto label_2bfa98;
        }
    }
    ctx->pc = 0x2BFA8Cu;
    // 0x2bfa8c: 0x2e0282d
    ctx->pc = 0x2bfa8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa90: 0xc0a8fda
    ctx->pc = 0x2BFA90u;
    SET_GPR_U32(ctx, 31, 0x2BFA98u);
    ctx->pc = 0x2BFA94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A3F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbShowLightLine_0x2a3f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA98u; }
    }
    if (ctx->pc != 0x2BFA98u) { return; }
    ctx->pc = 0x2BFA98u;
label_2bfa98:
    // 0x2bfa98: 0x3c030037
    ctx->pc = 0x2bfa98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2bfa9c: 0x8c6228ac
    ctx->pc = 0x2bfa9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10412)));
    // 0x2bfaa0: 0x10400003
    ctx->pc = 0x2BFAA0u;
    {
        const bool branch_taken_0x2bfaa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFAA4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bfaa0) {
            ctx->pc = 0x2BFAB0u;
            goto label_2bfab0;
        }
    }
    ctx->pc = 0x2BFAA8u;
    // 0x2bfaa8: 0xc0a900c
    ctx->pc = 0x2BFAA8u;
    SET_GPR_U32(ctx, 31, 0x2BFAB0u);
    ctx->pc = 0x2BFAACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A4030u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbShowNormLine_0x2a4030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAB0u; }
    }
    if (ctx->pc != 0x2BFAB0u) { return; }
    ctx->pc = 0x2BFAB0u;
label_2bfab0:
    // 0x2bfab0: 0x121140
    ctx->pc = 0x2bfab0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 5));
    // 0x2bfab4: 0x2c28021
    ctx->pc = 0x2bfab4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2bfab8: 0xc0b628c
    ctx->pc = 0x2BFAB8u;
    SET_GPR_U32(ctx, 31, 0x2BFAC0u);
    ctx->pc = 0x2BFABCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8A30_0x2d8a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAC0u; }
    }
    if (ctx->pc != 0x2BFAC0u) { return; }
    ctx->pc = 0x2BFAC0u;
    // 0x2bfac0: 0x8ea2001c
    ctx->pc = 0x2bfac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x2bfac4: 0x131880
    ctx->pc = 0x2bfac4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x2bfac8: 0x431021
    ctx->pc = 0x2bfac8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfacc: 0xc4410290
    ctx->pc = 0x2bfaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfad0: 0x4601a040
    ctx->pc = 0x2bfad0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2bfad4: 0x46010842
    ctx->pc = 0x2bfad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2bfad8: 0x46010034
    ctx->pc = 0x2bfad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfadc: 0x0
    ctx->pc = 0x2bfadcu;
    // NOP
    // 0x2bfae0: 0x45000006
    ctx->pc = 0x2BFAE0u;
    {
        const bool branch_taken_0x2bfae0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BFAE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x2bfae0) {
            ctx->pc = 0x2BFAFCu;
            goto label_2bfafc;
        }
    }
    ctx->pc = 0x2BFAE8u;
    // 0x2bfae8: 0xc0b958e
    ctx->pc = 0x2BFAE8u;
    SET_GPR_U32(ctx, 31, 0x2BFAF0u);
    ctx->pc = 0x2BFAECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAF0u; }
    }
    if (ctx->pc != 0x2BFAF0u) { return; }
    ctx->pc = 0x2BFAF0u;
    // 0x2bfaf0: 0xc620000c
    ctx->pc = 0x2bfaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfaf4: 0xe600000c
    ctx->pc = 0x2bfaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2bfaf8: 0x26520001
    ctx->pc = 0x2bfaf8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2bfafc:
    // 0x2bfafc: 0x2a42000c
    ctx->pc = 0x2bfafcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 12));
    // 0x2bfb00: 0x10400007
    ctx->pc = 0x2BFB00u;
    {
        const bool branch_taken_0x2bfb00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bfb00) {
            ctx->pc = 0x2BFB20u;
            goto label_2bfb20;
        }
    }
    ctx->pc = 0x2BFB08u;
    // 0x2bfb08: 0x26730001
    ctx->pc = 0x2bfb08u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x2bfb0c: 0x8ea5001c
    ctx->pc = 0x2bfb0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x2bfb10: 0x8ca200c8
    ctx->pc = 0x2bfb10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x2bfb14: 0x262102a
    ctx->pc = 0x2bfb14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x2bfb18: 0x1440ffd1
    ctx->pc = 0x2BFB18u;
    {
        const bool branch_taken_0x2bfb18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BFB1Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 5));
        if (branch_taken_0x2bfb18) {
            ctx->pc = 0x2BFA60u;
            goto label_2bfa60;
        }
    }
    ctx->pc = 0x2BFB20u;
label_2bfb20:
    // 0x2bfb20: 0x1240002c
    ctx->pc = 0x2BFB20u;
    {
        const bool branch_taken_0x2bfb20 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFB24u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2bfb20) {
            ctx->pc = 0x2BFBD4u;
            goto label_2bfbd4;
        }
    }
    ctx->pc = 0x2BFB28u;
    // 0x2bfb28: 0x24430002
    ctx->pc = 0x2bfb28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2));
    // 0x2bfb2c: 0x54600001
    ctx->pc = 0x2BFB2Cu;
    {
        const bool branch_taken_0x2bfb2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bfb2c) {
            ctx->pc = 0x2BFB30u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
            ctx->pc = 0x2BFB34u;
            goto label_2bfb34;
        }
    }
    ctx->pc = 0x2BFB34u;
label_2bfb34:
    // 0x2bfb34: 0x3c021000
    ctx->pc = 0x2bfb34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2bfb38: 0x621825
    ctx->pc = 0x2bfb38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bfb3c: 0xae830000
    ctx->pc = 0x2bfb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2bfb40: 0xae800004
    ctx->pc = 0x2bfb40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x2bfb44: 0x3c020100
    ctx->pc = 0x2bfb44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x2bfb48: 0x34420404
    ctx->pc = 0x2bfb48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1028));
    // 0x2bfb4c: 0xae820008
    ctx->pc = 0x2bfb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x2bfb50: 0x3c021000
    ctx->pc = 0x2bfb50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2bfb54: 0xae82000c
    ctx->pc = 0x2bfb54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2bfb58: 0xae800010
    ctx->pc = 0x2bfb58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x2bfb5c: 0xae800014
    ctx->pc = 0x2bfb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x2bfb60: 0xae800018
    ctx->pc = 0x2bfb60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x2bfb64: 0x121440
    ctx->pc = 0x2bfb64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 17));
    // 0x2bfb68: 0x3c036c00
    ctx->pc = 0x2bfb68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27648 << 16));
    // 0x2bfb6c: 0x34630026
    ctx->pc = 0x2bfb6cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 38));
    // 0x2bfb70: 0x431025
    ctx->pc = 0x2bfb70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfb74: 0xae82001c
    ctx->pc = 0x2bfb74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    // 0x2bfb78: 0x26910020
    ctx->pc = 0x2bfb78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 32));
    // 0x2bfb7c: 0x27b00040
    ctx->pc = 0x2bfb7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bfb80: 0x1a40000d
    ctx->pc = 0x2BFB80u;
    {
        const bool branch_taken_0x2bfb80 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2BFB84u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bfb80) {
            ctx->pc = 0x2BFBB8u;
            goto label_2bfbb8;
        }
    }
    ctx->pc = 0x2BFB88u;
label_2bfb88:
    // 0x2bfb88: 0x220202d
    ctx->pc = 0x2bfb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb8c: 0x3c014100
    ctx->pc = 0x2bfb8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x2bfb90: 0x44816000
    ctx->pc = 0x2bfb90u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2bfb94: 0xc0b97c8
    ctx->pc = 0x2BFB94u;
    SET_GPR_U32(ctx, 31, 0x2BFB9Cu);
    ctx->pc = 0x2BFB98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x2e5f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFB9Cu; }
    }
    if (ctx->pc != 0x2BFB9Cu) { return; }
    ctx->pc = 0x2BFB9Cu;
    // 0x2bfb9c: 0x7a020010
    ctx->pc = 0x2bfb9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bfba0: 0x7e220010
    ctx->pc = 0x2bfba0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x2bfba4: 0x26310020
    ctx->pc = 0x2bfba4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 32));
    // 0x2bfba8: 0x26730001
    ctx->pc = 0x2bfba8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x2bfbac: 0x272102a
    ctx->pc = 0x2bfbacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
    // 0x2bfbb0: 0x1440fff5
    ctx->pc = 0x2BFBB0u;
    {
        const bool branch_taken_0x2bfbb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BFBB4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x2bfbb0) {
            ctx->pc = 0x2BFB88u;
            goto label_2bfb88;
        }
    }
    ctx->pc = 0x2BFBB8u;
label_2bfbb8:
    // 0x2bfbb8: 0x3c020037
    ctx->pc = 0x2bfbb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bfbbc: 0x8c43276c
    ctx->pc = 0x2bfbbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10092)));
    // 0x2bfbc0: 0x121040
    ctx->pc = 0x2bfbc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
    // 0x2bfbc4: 0x24420024
    ctx->pc = 0x2bfbc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 36));
    // 0x2bfbc8: 0xac620070
    ctx->pc = 0x2bfbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    // 0x2bfbcc: 0x10000005
    ctx->pc = 0x2BFBCCu;
    {
        const bool branch_taken_0x2bfbcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFBD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bfbcc) {
            ctx->pc = 0x2BFBE4u;
            goto label_2bfbe4;
        }
    }
    ctx->pc = 0x2BFBD4u;
label_2bfbd4:
    // 0x2bfbd4: 0x3c020037
    ctx->pc = 0x2bfbd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bfbd8: 0x8c42276c
    ctx->pc = 0x2bfbd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10092)));
    // 0x2bfbdc: 0xac400070
    ctx->pc = 0x2bfbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x2bfbe0: 0x280102d
    ctx->pc = 0x2bfbe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bfbe4:
    // 0x2bfbe4: 0xdfbf0250
    ctx->pc = 0x2bfbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2bfbe8: 0xdfbe0240
    ctx->pc = 0x2bfbe8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2bfbec: 0xdfb70230
    ctx->pc = 0x2bfbecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2bfbf0: 0xdfb60220
    ctx->pc = 0x2bfbf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2bfbf4: 0xdfb50210
    ctx->pc = 0x2bfbf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2bfbf8: 0xdfb40200
    ctx->pc = 0x2bfbf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2bfbfc: 0xdfb301f0
    ctx->pc = 0x2bfbfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2bfc00: 0xdfb201e0
    ctx->pc = 0x2bfc00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2bfc04: 0xdfb101d0
    ctx->pc = 0x2bfc04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bfc08: 0xdfb001c0
    ctx->pc = 0x2bfc08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bfc0c: 0xc7b40260
    ctx->pc = 0x2bfc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bfc10: 0x3e00008
    ctx->pc = 0x2BFC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BFA60u: goto label_2bfa60;
            case 0x2BFA98u: goto label_2bfa98;
            case 0x2BFAB0u: goto label_2bfab0;
            case 0x2BFAFCu: goto label_2bfafc;
            case 0x2BFB20u: goto label_2bfb20;
            case 0x2BFB34u: goto label_2bfb34;
            case 0x2BFB88u: goto label_2bfb88;
            case 0x2BFBB8u: goto label_2bfbb8;
            case 0x2BFBD4u: goto label_2bfbd4;
            case 0x2BFBE4u: goto label_2bfbe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BFC18u;
}
