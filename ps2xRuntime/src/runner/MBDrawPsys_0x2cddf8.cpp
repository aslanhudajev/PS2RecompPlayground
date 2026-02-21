#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDrawPsys
// Address: 0x2cddf8 - 0x2ce9cc
void MBDrawPsys_0x2cddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cddf8u;

label_2cddf8:
    // 0x2cddf8: 0x27bdfea0
    ctx->pc = 0x2cddf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966944));
label_2cddfc:
    // 0x2cddfc: 0xffbf0120
    ctx->pc = 0x2cddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_2cde00:
    // 0x2cde00: 0xffbe0110
    ctx->pc = 0x2cde00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
label_2cde04:
    // 0x2cde04: 0xffb70100
    ctx->pc = 0x2cde04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
label_2cde08:
    // 0x2cde08: 0xffb600f0
    ctx->pc = 0x2cde08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
label_2cde0c:
    // 0x2cde0c: 0xffb500e0
    ctx->pc = 0x2cde0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
label_2cde10:
    // 0x2cde10: 0xffb400d0
    ctx->pc = 0x2cde10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
label_2cde14:
    // 0x2cde14: 0xffb300c0
    ctx->pc = 0x2cde14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
label_2cde18:
    // 0x2cde18: 0xffb200b0
    ctx->pc = 0x2cde18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_2cde1c:
    // 0x2cde1c: 0xffb100a0
    ctx->pc = 0x2cde1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
label_2cde20:
    // 0x2cde20: 0xffb00090
    ctx->pc = 0x2cde20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_2cde24:
    // 0x2cde24: 0xe7b80150
    ctx->pc = 0x2cde24u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2cde28:
    // 0x2cde28: 0xe7b70148
    ctx->pc = 0x2cde28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_2cde2c:
    // 0x2cde2c: 0xe7b60140
    ctx->pc = 0x2cde2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2cde30:
    // 0x2cde30: 0xe7b50138
    ctx->pc = 0x2cde30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_2cde34:
    // 0x2cde34: 0xe7b40130
    ctx->pc = 0x2cde34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2cde38:
    // 0x2cde38: 0xafa40060
    ctx->pc = 0x2cde38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_2cde3c:
    // 0x2cde3c: 0xa0b02d
    ctx->pc = 0x2cde3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cde40:
    // 0x2cde40: 0x3c02003a
    ctx->pc = 0x2cde40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2cde44:
    // 0x2cde44: 0x2444aa38
    ctx->pc = 0x2cde44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294945336));
label_2cde48:
    // 0x2cde48: 0x3c01447a
    ctx->pc = 0x2cde48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
label_2cde4c:
    // 0x2cde4c: 0x4481b000
    ctx->pc = 0x2cde4cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
label_2cde50:
    // 0x2cde50: 0xafa0007c
    ctx->pc = 0x2cde50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_2cde54:
    // 0x2cde54: 0x8fa20060
    ctx->pc = 0x2cde54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2cde58:
    // 0x2cde58: 0x8c510070
    ctx->pc = 0x2cde58u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2cde5c:
    // 0x2cde5c: 0x2402ffff
    ctx->pc = 0x2cde5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cde60:
    // 0x2cde60: 0xa4820054
    ctx->pc = 0x2cde60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 2));
label_2cde64:
    // 0x2cde64: 0xa4820056
    ctx->pc = 0x2cde64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 2));
label_2cde68:
    // 0x2cde68: 0x8c830014
    ctx->pc = 0x2cde68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2cde6c:
    // 0x2cde6c: 0x8e220090
    ctx->pc = 0x2cde6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2cde70:
    // 0x2cde70: 0x621823
    ctx->pc = 0x2cde70u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cde74:
    // 0x2cde74: 0xafa30064
    ctx->pc = 0x2cde74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_2cde78:
    // 0x2cde78: 0x2c630010
    ctx->pc = 0x2cde78u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 16));
label_2cde7c:
    // 0x2cde7c: 0x24020001
    ctx->pc = 0x2cde7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2cde80:
    // 0x2cde80: 0x8fa50064
    ctx->pc = 0x2cde80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2cde84:
    // 0x2cde84: 0x43280a
    ctx->pc = 0x2cde84u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_2cde88:
    // 0x2cde88: 0xafa50064
    ctx->pc = 0x2cde88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
label_2cde8c:
    // 0x2cde8c: 0x8e220094
    ctx->pc = 0x2cde8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2cde90:
    // 0x2cde90: 0xa28021
    ctx->pc = 0x2cde90u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2cde94:
    // 0x2cde94: 0x6000005
label_2cde98:
    if (ctx->pc == 0x2CDE98u) {
        ctx->pc = 0x2CDE98u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2CDE9Cu;
        goto label_2cde9c;
    }
    ctx->pc = 0x2CDE94u;
    {
        const bool branch_taken_0x2cde94 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2CDE98u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2cde94) {
            ctx->pc = 0x2CDEACu;
            goto label_2cdeac;
        }
    }
    ctx->pc = 0x2CDE9Cu;
label_2cde9c:
    // 0x2cde9c: 0x4490a000
    ctx->pc = 0x2cde9cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 16);
label_2cdea0:
    // 0x2cdea0: 0x4680a520
    ctx->pc = 0x2cdea0u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
label_2cdea4:
    // 0x2cdea4: 0x10000007
label_2cdea8:
    if (ctx->pc == 0x2CDEA8u) {
        ctx->pc = 0x2CDEA8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x2CDEACu;
        goto label_2cdeac;
    }
    ctx->pc = 0x2CDEA4u;
    {
        const bool branch_taken_0x2cdea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDEA8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        if (branch_taken_0x2cdea4) {
            ctx->pc = 0x2CDEC4u;
            goto label_2cdec4;
        }
    }
    ctx->pc = 0x2CDEACu;
label_2cdeac:
    // 0x2cdeac: 0x101842
    ctx->pc = 0x2cdeacu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 16), 1));
label_2cdeb0:
    // 0x2cdeb0: 0x431025
    ctx->pc = 0x2cdeb0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cdeb4:
    // 0x2cdeb4: 0x4482a000
    ctx->pc = 0x2cdeb4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
label_2cdeb8:
    // 0x2cdeb8: 0x4680a520
    ctx->pc = 0x2cdeb8u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
label_2cdebc:
    // 0x2cdebc: 0x4614a500
    ctx->pc = 0x2cdebcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2cdec0:
    // 0x2cdec0: 0x8c820014
    ctx->pc = 0x2cdec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2cdec4:
    // 0x2cdec4: 0xae220090
    ctx->pc = 0x2cdec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_2cdec8:
    // 0x2cdec8: 0x92230037
    ctx->pc = 0x2cdec8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
label_2cdecc:
    // 0x2cdecc: 0x2c620009
    ctx->pc = 0x2cdeccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 9));
label_2cded0:
    // 0x2cded0: 0x10400068
label_2cded4:
    if (ctx->pc == 0x2CDED4u) {
        ctx->pc = 0x2CDED4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2CDED8u;
        goto label_2cded8;
    }
    ctx->pc = 0x2CDED0u;
    {
        const bool branch_taken_0x2cded0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDED4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2cded0) {
            ctx->pc = 0x2CE074u;
            goto label_2ce074;
        }
    }
    ctx->pc = 0x2CDED8u;
label_2cded8:
    // 0x2cded8: 0x24427610
    ctx->pc = 0x2cded8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30224));
label_2cdedc:
    // 0x2cdedc: 0x31880
    ctx->pc = 0x2cdedcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2cdee0:
    // 0x2cdee0: 0x621821
    ctx->pc = 0x2cdee0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cdee4:
    // 0x2cdee4: 0x8c620000
    ctx->pc = 0x2cdee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cdee8:
    // 0x2cdee8: 0x400008
label_2cdeec:
    if (ctx->pc == 0x2CDEECu) {
        ctx->pc = 0x2CDEF0u;
        goto label_2cdef0;
    }
    ctx->pc = 0x2CDEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CDDF8u: goto label_2cddf8;
            case 0x2CDDFCu: goto label_2cddfc;
            case 0x2CDE00u: goto label_2cde00;
            case 0x2CDE04u: goto label_2cde04;
            case 0x2CDE08u: goto label_2cde08;
            case 0x2CDE0Cu: goto label_2cde0c;
            case 0x2CDE10u: goto label_2cde10;
            case 0x2CDE14u: goto label_2cde14;
            case 0x2CDE18u: goto label_2cde18;
            case 0x2CDE1Cu: goto label_2cde1c;
            case 0x2CDE20u: goto label_2cde20;
            case 0x2CDE24u: goto label_2cde24;
            case 0x2CDE28u: goto label_2cde28;
            case 0x2CDE2Cu: goto label_2cde2c;
            case 0x2CDE30u: goto label_2cde30;
            case 0x2CDE34u: goto label_2cde34;
            case 0x2CDE38u: goto label_2cde38;
            case 0x2CDE3Cu: goto label_2cde3c;
            case 0x2CDE40u: goto label_2cde40;
            case 0x2CDE44u: goto label_2cde44;
            case 0x2CDE48u: goto label_2cde48;
            case 0x2CDE4Cu: goto label_2cde4c;
            case 0x2CDE50u: goto label_2cde50;
            case 0x2CDE54u: goto label_2cde54;
            case 0x2CDE58u: goto label_2cde58;
            case 0x2CDE5Cu: goto label_2cde5c;
            case 0x2CDE60u: goto label_2cde60;
            case 0x2CDE64u: goto label_2cde64;
            case 0x2CDE68u: goto label_2cde68;
            case 0x2CDE6Cu: goto label_2cde6c;
            case 0x2CDE70u: goto label_2cde70;
            case 0x2CDE74u: goto label_2cde74;
            case 0x2CDE78u: goto label_2cde78;
            case 0x2CDE7Cu: goto label_2cde7c;
            case 0x2CDE80u: goto label_2cde80;
            case 0x2CDE84u: goto label_2cde84;
            case 0x2CDE88u: goto label_2cde88;
            case 0x2CDE8Cu: goto label_2cde8c;
            case 0x2CDE90u: goto label_2cde90;
            case 0x2CDE94u: goto label_2cde94;
            case 0x2CDE98u: goto label_2cde98;
            case 0x2CDE9Cu: goto label_2cde9c;
            case 0x2CDEA0u: goto label_2cdea0;
            case 0x2CDEA4u: goto label_2cdea4;
            case 0x2CDEA8u: goto label_2cdea8;
            case 0x2CDEACu: goto label_2cdeac;
            case 0x2CDEB0u: goto label_2cdeb0;
            case 0x2CDEB4u: goto label_2cdeb4;
            case 0x2CDEB8u: goto label_2cdeb8;
            case 0x2CDEBCu: goto label_2cdebc;
            case 0x2CDEC0u: goto label_2cdec0;
            case 0x2CDEC4u: goto label_2cdec4;
            case 0x2CDEC8u: goto label_2cdec8;
            case 0x2CDECCu: goto label_2cdecc;
            case 0x2CDED0u: goto label_2cded0;
            case 0x2CDED4u: goto label_2cded4;
            case 0x2CDED8u: goto label_2cded8;
            case 0x2CDEDCu: goto label_2cdedc;
            case 0x2CDEE0u: goto label_2cdee0;
            case 0x2CDEE4u: goto label_2cdee4;
            case 0x2CDEE8u: goto label_2cdee8;
            case 0x2CDEECu: goto label_2cdeec;
            case 0x2CDEF0u: goto label_2cdef0;
            case 0x2CDEF4u: goto label_2cdef4;
            case 0x2CDEF8u: goto label_2cdef8;
            case 0x2CDEFCu: goto label_2cdefc;
            case 0x2CDF00u: goto label_2cdf00;
            case 0x2CDF04u: goto label_2cdf04;
            case 0x2CDF08u: goto label_2cdf08;
            case 0x2CDF0Cu: goto label_2cdf0c;
            case 0x2CDF10u: goto label_2cdf10;
            case 0x2CDF14u: goto label_2cdf14;
            case 0x2CDF18u: goto label_2cdf18;
            case 0x2CDF1Cu: goto label_2cdf1c;
            case 0x2CDF20u: goto label_2cdf20;
            case 0x2CDF24u: goto label_2cdf24;
            case 0x2CDF28u: goto label_2cdf28;
            case 0x2CDF2Cu: goto label_2cdf2c;
            case 0x2CDF30u: goto label_2cdf30;
            case 0x2CDF34u: goto label_2cdf34;
            case 0x2CDF38u: goto label_2cdf38;
            case 0x2CDF3Cu: goto label_2cdf3c;
            case 0x2CDF40u: goto label_2cdf40;
            case 0x2CDF44u: goto label_2cdf44;
            case 0x2CDF48u: goto label_2cdf48;
            case 0x2CDF4Cu: goto label_2cdf4c;
            case 0x2CDF50u: goto label_2cdf50;
            case 0x2CDF54u: goto label_2cdf54;
            case 0x2CDF58u: goto label_2cdf58;
            case 0x2CDF5Cu: goto label_2cdf5c;
            case 0x2CDF60u: goto label_2cdf60;
            case 0x2CDF64u: goto label_2cdf64;
            case 0x2CDF68u: goto label_2cdf68;
            case 0x2CDF6Cu: goto label_2cdf6c;
            case 0x2CDF70u: goto label_2cdf70;
            case 0x2CDF74u: goto label_2cdf74;
            case 0x2CDF78u: goto label_2cdf78;
            case 0x2CDF7Cu: goto label_2cdf7c;
            case 0x2CDF80u: goto label_2cdf80;
            case 0x2CDF84u: goto label_2cdf84;
            case 0x2CDF88u: goto label_2cdf88;
            case 0x2CDF8Cu: goto label_2cdf8c;
            case 0x2CDF90u: goto label_2cdf90;
            case 0x2CDF94u: goto label_2cdf94;
            case 0x2CDF98u: goto label_2cdf98;
            case 0x2CDF9Cu: goto label_2cdf9c;
            case 0x2CDFA0u: goto label_2cdfa0;
            case 0x2CDFA4u: goto label_2cdfa4;
            case 0x2CDFA8u: goto label_2cdfa8;
            case 0x2CDFACu: goto label_2cdfac;
            case 0x2CDFB0u: goto label_2cdfb0;
            case 0x2CDFB4u: goto label_2cdfb4;
            case 0x2CDFB8u: goto label_2cdfb8;
            case 0x2CDFBCu: goto label_2cdfbc;
            case 0x2CDFC0u: goto label_2cdfc0;
            case 0x2CDFC4u: goto label_2cdfc4;
            case 0x2CDFC8u: goto label_2cdfc8;
            case 0x2CDFCCu: goto label_2cdfcc;
            case 0x2CDFD0u: goto label_2cdfd0;
            case 0x2CDFD4u: goto label_2cdfd4;
            case 0x2CDFD8u: goto label_2cdfd8;
            case 0x2CDFDCu: goto label_2cdfdc;
            case 0x2CDFE0u: goto label_2cdfe0;
            case 0x2CDFE4u: goto label_2cdfe4;
            case 0x2CDFE8u: goto label_2cdfe8;
            case 0x2CDFECu: goto label_2cdfec;
            case 0x2CDFF0u: goto label_2cdff0;
            case 0x2CDFF4u: goto label_2cdff4;
            case 0x2CDFF8u: goto label_2cdff8;
            case 0x2CDFFCu: goto label_2cdffc;
            case 0x2CE000u: goto label_2ce000;
            case 0x2CE004u: goto label_2ce004;
            case 0x2CE008u: goto label_2ce008;
            case 0x2CE00Cu: goto label_2ce00c;
            case 0x2CE010u: goto label_2ce010;
            case 0x2CE014u: goto label_2ce014;
            case 0x2CE018u: goto label_2ce018;
            case 0x2CE01Cu: goto label_2ce01c;
            case 0x2CE020u: goto label_2ce020;
            case 0x2CE024u: goto label_2ce024;
            case 0x2CE028u: goto label_2ce028;
            case 0x2CE02Cu: goto label_2ce02c;
            case 0x2CE030u: goto label_2ce030;
            case 0x2CE034u: goto label_2ce034;
            case 0x2CE038u: goto label_2ce038;
            case 0x2CE03Cu: goto label_2ce03c;
            case 0x2CE040u: goto label_2ce040;
            case 0x2CE044u: goto label_2ce044;
            case 0x2CE048u: goto label_2ce048;
            case 0x2CE04Cu: goto label_2ce04c;
            case 0x2CE050u: goto label_2ce050;
            case 0x2CE054u: goto label_2ce054;
            case 0x2CE058u: goto label_2ce058;
            case 0x2CE05Cu: goto label_2ce05c;
            case 0x2CE060u: goto label_2ce060;
            case 0x2CE064u: goto label_2ce064;
            case 0x2CE068u: goto label_2ce068;
            case 0x2CE06Cu: goto label_2ce06c;
            case 0x2CE070u: goto label_2ce070;
            case 0x2CE074u: goto label_2ce074;
            case 0x2CE078u: goto label_2ce078;
            case 0x2CE07Cu: goto label_2ce07c;
            case 0x2CE080u: goto label_2ce080;
            case 0x2CE084u: goto label_2ce084;
            case 0x2CE088u: goto label_2ce088;
            case 0x2CE08Cu: goto label_2ce08c;
            case 0x2CE090u: goto label_2ce090;
            case 0x2CE094u: goto label_2ce094;
            case 0x2CE098u: goto label_2ce098;
            case 0x2CE09Cu: goto label_2ce09c;
            case 0x2CE0A0u: goto label_2ce0a0;
            case 0x2CE0A4u: goto label_2ce0a4;
            case 0x2CE0A8u: goto label_2ce0a8;
            case 0x2CE0ACu: goto label_2ce0ac;
            case 0x2CE0B0u: goto label_2ce0b0;
            case 0x2CE0B4u: goto label_2ce0b4;
            case 0x2CE0B8u: goto label_2ce0b8;
            case 0x2CE0BCu: goto label_2ce0bc;
            case 0x2CE0C0u: goto label_2ce0c0;
            case 0x2CE0C4u: goto label_2ce0c4;
            case 0x2CE0C8u: goto label_2ce0c8;
            case 0x2CE0CCu: goto label_2ce0cc;
            case 0x2CE0D0u: goto label_2ce0d0;
            case 0x2CE0D4u: goto label_2ce0d4;
            case 0x2CE0D8u: goto label_2ce0d8;
            case 0x2CE0DCu: goto label_2ce0dc;
            case 0x2CE0E0u: goto label_2ce0e0;
            case 0x2CE0E4u: goto label_2ce0e4;
            case 0x2CE0E8u: goto label_2ce0e8;
            case 0x2CE0ECu: goto label_2ce0ec;
            case 0x2CE0F0u: goto label_2ce0f0;
            case 0x2CE0F4u: goto label_2ce0f4;
            case 0x2CE0F8u: goto label_2ce0f8;
            case 0x2CE0FCu: goto label_2ce0fc;
            case 0x2CE100u: goto label_2ce100;
            case 0x2CE104u: goto label_2ce104;
            case 0x2CE108u: goto label_2ce108;
            case 0x2CE10Cu: goto label_2ce10c;
            case 0x2CE110u: goto label_2ce110;
            case 0x2CE114u: goto label_2ce114;
            case 0x2CE118u: goto label_2ce118;
            case 0x2CE11Cu: goto label_2ce11c;
            case 0x2CE120u: goto label_2ce120;
            case 0x2CE124u: goto label_2ce124;
            case 0x2CE128u: goto label_2ce128;
            case 0x2CE12Cu: goto label_2ce12c;
            case 0x2CE130u: goto label_2ce130;
            case 0x2CE134u: goto label_2ce134;
            case 0x2CE138u: goto label_2ce138;
            case 0x2CE13Cu: goto label_2ce13c;
            case 0x2CE140u: goto label_2ce140;
            case 0x2CE144u: goto label_2ce144;
            case 0x2CE148u: goto label_2ce148;
            case 0x2CE14Cu: goto label_2ce14c;
            case 0x2CE150u: goto label_2ce150;
            case 0x2CE154u: goto label_2ce154;
            case 0x2CE158u: goto label_2ce158;
            case 0x2CE15Cu: goto label_2ce15c;
            case 0x2CE160u: goto label_2ce160;
            case 0x2CE164u: goto label_2ce164;
            case 0x2CE168u: goto label_2ce168;
            case 0x2CE16Cu: goto label_2ce16c;
            case 0x2CE170u: goto label_2ce170;
            case 0x2CE174u: goto label_2ce174;
            case 0x2CE178u: goto label_2ce178;
            case 0x2CE17Cu: goto label_2ce17c;
            case 0x2CE180u: goto label_2ce180;
            case 0x2CE184u: goto label_2ce184;
            case 0x2CE188u: goto label_2ce188;
            case 0x2CE18Cu: goto label_2ce18c;
            case 0x2CE190u: goto label_2ce190;
            case 0x2CE194u: goto label_2ce194;
            case 0x2CE198u: goto label_2ce198;
            case 0x2CE19Cu: goto label_2ce19c;
            case 0x2CE1A0u: goto label_2ce1a0;
            case 0x2CE1A4u: goto label_2ce1a4;
            case 0x2CE1A8u: goto label_2ce1a8;
            case 0x2CE1ACu: goto label_2ce1ac;
            case 0x2CE1B0u: goto label_2ce1b0;
            case 0x2CE1B4u: goto label_2ce1b4;
            case 0x2CE1B8u: goto label_2ce1b8;
            case 0x2CE1BCu: goto label_2ce1bc;
            case 0x2CE1C0u: goto label_2ce1c0;
            case 0x2CE1C4u: goto label_2ce1c4;
            case 0x2CE1C8u: goto label_2ce1c8;
            case 0x2CE1CCu: goto label_2ce1cc;
            case 0x2CE1D0u: goto label_2ce1d0;
            case 0x2CE1D4u: goto label_2ce1d4;
            case 0x2CE1D8u: goto label_2ce1d8;
            case 0x2CE1DCu: goto label_2ce1dc;
            case 0x2CE1E0u: goto label_2ce1e0;
            case 0x2CE1E4u: goto label_2ce1e4;
            case 0x2CE1E8u: goto label_2ce1e8;
            case 0x2CE1ECu: goto label_2ce1ec;
            case 0x2CE1F0u: goto label_2ce1f0;
            case 0x2CE1F4u: goto label_2ce1f4;
            case 0x2CE1F8u: goto label_2ce1f8;
            case 0x2CE1FCu: goto label_2ce1fc;
            case 0x2CE200u: goto label_2ce200;
            case 0x2CE204u: goto label_2ce204;
            case 0x2CE208u: goto label_2ce208;
            case 0x2CE20Cu: goto label_2ce20c;
            case 0x2CE210u: goto label_2ce210;
            case 0x2CE214u: goto label_2ce214;
            case 0x2CE218u: goto label_2ce218;
            case 0x2CE21Cu: goto label_2ce21c;
            case 0x2CE220u: goto label_2ce220;
            case 0x2CE224u: goto label_2ce224;
            case 0x2CE228u: goto label_2ce228;
            case 0x2CE22Cu: goto label_2ce22c;
            case 0x2CE230u: goto label_2ce230;
            case 0x2CE234u: goto label_2ce234;
            case 0x2CE238u: goto label_2ce238;
            case 0x2CE23Cu: goto label_2ce23c;
            case 0x2CE240u: goto label_2ce240;
            case 0x2CE244u: goto label_2ce244;
            case 0x2CE248u: goto label_2ce248;
            case 0x2CE24Cu: goto label_2ce24c;
            case 0x2CE250u: goto label_2ce250;
            case 0x2CE254u: goto label_2ce254;
            case 0x2CE258u: goto label_2ce258;
            case 0x2CE25Cu: goto label_2ce25c;
            case 0x2CE260u: goto label_2ce260;
            case 0x2CE264u: goto label_2ce264;
            case 0x2CE268u: goto label_2ce268;
            case 0x2CE26Cu: goto label_2ce26c;
            case 0x2CE270u: goto label_2ce270;
            case 0x2CE274u: goto label_2ce274;
            case 0x2CE278u: goto label_2ce278;
            case 0x2CE27Cu: goto label_2ce27c;
            case 0x2CE280u: goto label_2ce280;
            case 0x2CE284u: goto label_2ce284;
            case 0x2CE288u: goto label_2ce288;
            case 0x2CE28Cu: goto label_2ce28c;
            case 0x2CE290u: goto label_2ce290;
            case 0x2CE294u: goto label_2ce294;
            case 0x2CE298u: goto label_2ce298;
            case 0x2CE29Cu: goto label_2ce29c;
            case 0x2CE2A0u: goto label_2ce2a0;
            case 0x2CE2A4u: goto label_2ce2a4;
            case 0x2CE2A8u: goto label_2ce2a8;
            case 0x2CE2ACu: goto label_2ce2ac;
            case 0x2CE2B0u: goto label_2ce2b0;
            case 0x2CE2B4u: goto label_2ce2b4;
            case 0x2CE2B8u: goto label_2ce2b8;
            case 0x2CE2BCu: goto label_2ce2bc;
            case 0x2CE2C0u: goto label_2ce2c0;
            case 0x2CE2C4u: goto label_2ce2c4;
            case 0x2CE2C8u: goto label_2ce2c8;
            case 0x2CE2CCu: goto label_2ce2cc;
            case 0x2CE2D0u: goto label_2ce2d0;
            case 0x2CE2D4u: goto label_2ce2d4;
            case 0x2CE2D8u: goto label_2ce2d8;
            case 0x2CE2DCu: goto label_2ce2dc;
            case 0x2CE2E0u: goto label_2ce2e0;
            case 0x2CE2E4u: goto label_2ce2e4;
            case 0x2CE2E8u: goto label_2ce2e8;
            case 0x2CE2ECu: goto label_2ce2ec;
            case 0x2CE2F0u: goto label_2ce2f0;
            case 0x2CE2F4u: goto label_2ce2f4;
            case 0x2CE2F8u: goto label_2ce2f8;
            case 0x2CE2FCu: goto label_2ce2fc;
            case 0x2CE300u: goto label_2ce300;
            case 0x2CE304u: goto label_2ce304;
            case 0x2CE308u: goto label_2ce308;
            case 0x2CE30Cu: goto label_2ce30c;
            case 0x2CE310u: goto label_2ce310;
            case 0x2CE314u: goto label_2ce314;
            case 0x2CE318u: goto label_2ce318;
            case 0x2CE31Cu: goto label_2ce31c;
            case 0x2CE320u: goto label_2ce320;
            case 0x2CE324u: goto label_2ce324;
            case 0x2CE328u: goto label_2ce328;
            case 0x2CE32Cu: goto label_2ce32c;
            case 0x2CE330u: goto label_2ce330;
            case 0x2CE334u: goto label_2ce334;
            case 0x2CE338u: goto label_2ce338;
            case 0x2CE33Cu: goto label_2ce33c;
            case 0x2CE340u: goto label_2ce340;
            case 0x2CE344u: goto label_2ce344;
            case 0x2CE348u: goto label_2ce348;
            case 0x2CE34Cu: goto label_2ce34c;
            case 0x2CE350u: goto label_2ce350;
            case 0x2CE354u: goto label_2ce354;
            case 0x2CE358u: goto label_2ce358;
            case 0x2CE35Cu: goto label_2ce35c;
            case 0x2CE360u: goto label_2ce360;
            case 0x2CE364u: goto label_2ce364;
            case 0x2CE368u: goto label_2ce368;
            case 0x2CE36Cu: goto label_2ce36c;
            case 0x2CE370u: goto label_2ce370;
            case 0x2CE374u: goto label_2ce374;
            case 0x2CE378u: goto label_2ce378;
            case 0x2CE37Cu: goto label_2ce37c;
            case 0x2CE380u: goto label_2ce380;
            case 0x2CE384u: goto label_2ce384;
            case 0x2CE388u: goto label_2ce388;
            case 0x2CE38Cu: goto label_2ce38c;
            case 0x2CE390u: goto label_2ce390;
            case 0x2CE394u: goto label_2ce394;
            case 0x2CE398u: goto label_2ce398;
            case 0x2CE39Cu: goto label_2ce39c;
            case 0x2CE3A0u: goto label_2ce3a0;
            case 0x2CE3A4u: goto label_2ce3a4;
            case 0x2CE3A8u: goto label_2ce3a8;
            case 0x2CE3ACu: goto label_2ce3ac;
            case 0x2CE3B0u: goto label_2ce3b0;
            case 0x2CE3B4u: goto label_2ce3b4;
            case 0x2CE3B8u: goto label_2ce3b8;
            case 0x2CE3BCu: goto label_2ce3bc;
            case 0x2CE3C0u: goto label_2ce3c0;
            case 0x2CE3C4u: goto label_2ce3c4;
            case 0x2CE3C8u: goto label_2ce3c8;
            case 0x2CE3CCu: goto label_2ce3cc;
            case 0x2CE3D0u: goto label_2ce3d0;
            case 0x2CE3D4u: goto label_2ce3d4;
            case 0x2CE3D8u: goto label_2ce3d8;
            case 0x2CE3DCu: goto label_2ce3dc;
            case 0x2CE3E0u: goto label_2ce3e0;
            case 0x2CE3E4u: goto label_2ce3e4;
            case 0x2CE3E8u: goto label_2ce3e8;
            case 0x2CE3ECu: goto label_2ce3ec;
            case 0x2CE3F0u: goto label_2ce3f0;
            case 0x2CE3F4u: goto label_2ce3f4;
            case 0x2CE3F8u: goto label_2ce3f8;
            case 0x2CE3FCu: goto label_2ce3fc;
            case 0x2CE400u: goto label_2ce400;
            case 0x2CE404u: goto label_2ce404;
            case 0x2CE408u: goto label_2ce408;
            case 0x2CE40Cu: goto label_2ce40c;
            case 0x2CE410u: goto label_2ce410;
            case 0x2CE414u: goto label_2ce414;
            case 0x2CE418u: goto label_2ce418;
            case 0x2CE41Cu: goto label_2ce41c;
            case 0x2CE420u: goto label_2ce420;
            case 0x2CE424u: goto label_2ce424;
            case 0x2CE428u: goto label_2ce428;
            case 0x2CE42Cu: goto label_2ce42c;
            case 0x2CE430u: goto label_2ce430;
            case 0x2CE434u: goto label_2ce434;
            case 0x2CE438u: goto label_2ce438;
            case 0x2CE43Cu: goto label_2ce43c;
            case 0x2CE440u: goto label_2ce440;
            case 0x2CE444u: goto label_2ce444;
            case 0x2CE448u: goto label_2ce448;
            case 0x2CE44Cu: goto label_2ce44c;
            case 0x2CE450u: goto label_2ce450;
            case 0x2CE454u: goto label_2ce454;
            case 0x2CE458u: goto label_2ce458;
            case 0x2CE45Cu: goto label_2ce45c;
            case 0x2CE460u: goto label_2ce460;
            case 0x2CE464u: goto label_2ce464;
            case 0x2CE468u: goto label_2ce468;
            case 0x2CE46Cu: goto label_2ce46c;
            case 0x2CE470u: goto label_2ce470;
            case 0x2CE474u: goto label_2ce474;
            case 0x2CE478u: goto label_2ce478;
            case 0x2CE47Cu: goto label_2ce47c;
            case 0x2CE480u: goto label_2ce480;
            case 0x2CE484u: goto label_2ce484;
            case 0x2CE488u: goto label_2ce488;
            case 0x2CE48Cu: goto label_2ce48c;
            case 0x2CE490u: goto label_2ce490;
            case 0x2CE494u: goto label_2ce494;
            case 0x2CE498u: goto label_2ce498;
            case 0x2CE49Cu: goto label_2ce49c;
            case 0x2CE4A0u: goto label_2ce4a0;
            case 0x2CE4A4u: goto label_2ce4a4;
            case 0x2CE4A8u: goto label_2ce4a8;
            case 0x2CE4ACu: goto label_2ce4ac;
            case 0x2CE4B0u: goto label_2ce4b0;
            case 0x2CE4B4u: goto label_2ce4b4;
            case 0x2CE4B8u: goto label_2ce4b8;
            case 0x2CE4BCu: goto label_2ce4bc;
            case 0x2CE4C0u: goto label_2ce4c0;
            case 0x2CE4C4u: goto label_2ce4c4;
            case 0x2CE4C8u: goto label_2ce4c8;
            case 0x2CE4CCu: goto label_2ce4cc;
            case 0x2CE4D0u: goto label_2ce4d0;
            case 0x2CE4D4u: goto label_2ce4d4;
            case 0x2CE4D8u: goto label_2ce4d8;
            case 0x2CE4DCu: goto label_2ce4dc;
            case 0x2CE4E0u: goto label_2ce4e0;
            case 0x2CE4E4u: goto label_2ce4e4;
            case 0x2CE4E8u: goto label_2ce4e8;
            case 0x2CE4ECu: goto label_2ce4ec;
            case 0x2CE4F0u: goto label_2ce4f0;
            case 0x2CE4F4u: goto label_2ce4f4;
            case 0x2CE4F8u: goto label_2ce4f8;
            case 0x2CE4FCu: goto label_2ce4fc;
            case 0x2CE500u: goto label_2ce500;
            case 0x2CE504u: goto label_2ce504;
            case 0x2CE508u: goto label_2ce508;
            case 0x2CE50Cu: goto label_2ce50c;
            case 0x2CE510u: goto label_2ce510;
            case 0x2CE514u: goto label_2ce514;
            case 0x2CE518u: goto label_2ce518;
            case 0x2CE51Cu: goto label_2ce51c;
            case 0x2CE520u: goto label_2ce520;
            case 0x2CE524u: goto label_2ce524;
            case 0x2CE528u: goto label_2ce528;
            case 0x2CE52Cu: goto label_2ce52c;
            case 0x2CE530u: goto label_2ce530;
            case 0x2CE534u: goto label_2ce534;
            case 0x2CE538u: goto label_2ce538;
            case 0x2CE53Cu: goto label_2ce53c;
            case 0x2CE540u: goto label_2ce540;
            case 0x2CE544u: goto label_2ce544;
            case 0x2CE548u: goto label_2ce548;
            case 0x2CE54Cu: goto label_2ce54c;
            case 0x2CE550u: goto label_2ce550;
            case 0x2CE554u: goto label_2ce554;
            case 0x2CE558u: goto label_2ce558;
            case 0x2CE55Cu: goto label_2ce55c;
            case 0x2CE560u: goto label_2ce560;
            case 0x2CE564u: goto label_2ce564;
            case 0x2CE568u: goto label_2ce568;
            case 0x2CE56Cu: goto label_2ce56c;
            case 0x2CE570u: goto label_2ce570;
            case 0x2CE574u: goto label_2ce574;
            case 0x2CE578u: goto label_2ce578;
            case 0x2CE57Cu: goto label_2ce57c;
            case 0x2CE580u: goto label_2ce580;
            case 0x2CE584u: goto label_2ce584;
            case 0x2CE588u: goto label_2ce588;
            case 0x2CE58Cu: goto label_2ce58c;
            case 0x2CE590u: goto label_2ce590;
            case 0x2CE594u: goto label_2ce594;
            case 0x2CE598u: goto label_2ce598;
            case 0x2CE59Cu: goto label_2ce59c;
            case 0x2CE5A0u: goto label_2ce5a0;
            case 0x2CE5A4u: goto label_2ce5a4;
            case 0x2CE5A8u: goto label_2ce5a8;
            case 0x2CE5ACu: goto label_2ce5ac;
            case 0x2CE5B0u: goto label_2ce5b0;
            case 0x2CE5B4u: goto label_2ce5b4;
            case 0x2CE5B8u: goto label_2ce5b8;
            case 0x2CE5BCu: goto label_2ce5bc;
            case 0x2CE5C0u: goto label_2ce5c0;
            case 0x2CE5C4u: goto label_2ce5c4;
            case 0x2CE5C8u: goto label_2ce5c8;
            case 0x2CE5CCu: goto label_2ce5cc;
            case 0x2CE5D0u: goto label_2ce5d0;
            case 0x2CE5D4u: goto label_2ce5d4;
            case 0x2CE5D8u: goto label_2ce5d8;
            case 0x2CE5DCu: goto label_2ce5dc;
            case 0x2CE5E0u: goto label_2ce5e0;
            case 0x2CE5E4u: goto label_2ce5e4;
            case 0x2CE5E8u: goto label_2ce5e8;
            case 0x2CE5ECu: goto label_2ce5ec;
            case 0x2CE5F0u: goto label_2ce5f0;
            case 0x2CE5F4u: goto label_2ce5f4;
            case 0x2CE5F8u: goto label_2ce5f8;
            case 0x2CE5FCu: goto label_2ce5fc;
            case 0x2CE600u: goto label_2ce600;
            case 0x2CE604u: goto label_2ce604;
            case 0x2CE608u: goto label_2ce608;
            case 0x2CE60Cu: goto label_2ce60c;
            case 0x2CE610u: goto label_2ce610;
            case 0x2CE614u: goto label_2ce614;
            case 0x2CE618u: goto label_2ce618;
            case 0x2CE61Cu: goto label_2ce61c;
            case 0x2CE620u: goto label_2ce620;
            case 0x2CE624u: goto label_2ce624;
            case 0x2CE628u: goto label_2ce628;
            case 0x2CE62Cu: goto label_2ce62c;
            case 0x2CE630u: goto label_2ce630;
            case 0x2CE634u: goto label_2ce634;
            case 0x2CE638u: goto label_2ce638;
            case 0x2CE63Cu: goto label_2ce63c;
            case 0x2CE640u: goto label_2ce640;
            case 0x2CE644u: goto label_2ce644;
            case 0x2CE648u: goto label_2ce648;
            case 0x2CE64Cu: goto label_2ce64c;
            case 0x2CE650u: goto label_2ce650;
            case 0x2CE654u: goto label_2ce654;
            case 0x2CE658u: goto label_2ce658;
            case 0x2CE65Cu: goto label_2ce65c;
            case 0x2CE660u: goto label_2ce660;
            case 0x2CE664u: goto label_2ce664;
            case 0x2CE668u: goto label_2ce668;
            case 0x2CE66Cu: goto label_2ce66c;
            case 0x2CE670u: goto label_2ce670;
            case 0x2CE674u: goto label_2ce674;
            case 0x2CE678u: goto label_2ce678;
            case 0x2CE67Cu: goto label_2ce67c;
            case 0x2CE680u: goto label_2ce680;
            case 0x2CE684u: goto label_2ce684;
            case 0x2CE688u: goto label_2ce688;
            case 0x2CE68Cu: goto label_2ce68c;
            case 0x2CE690u: goto label_2ce690;
            case 0x2CE694u: goto label_2ce694;
            case 0x2CE698u: goto label_2ce698;
            case 0x2CE69Cu: goto label_2ce69c;
            case 0x2CE6A0u: goto label_2ce6a0;
            case 0x2CE6A4u: goto label_2ce6a4;
            case 0x2CE6A8u: goto label_2ce6a8;
            case 0x2CE6ACu: goto label_2ce6ac;
            case 0x2CE6B0u: goto label_2ce6b0;
            case 0x2CE6B4u: goto label_2ce6b4;
            case 0x2CE6B8u: goto label_2ce6b8;
            case 0x2CE6BCu: goto label_2ce6bc;
            case 0x2CE6C0u: goto label_2ce6c0;
            case 0x2CE6C4u: goto label_2ce6c4;
            case 0x2CE6C8u: goto label_2ce6c8;
            case 0x2CE6CCu: goto label_2ce6cc;
            case 0x2CE6D0u: goto label_2ce6d0;
            case 0x2CE6D4u: goto label_2ce6d4;
            case 0x2CE6D8u: goto label_2ce6d8;
            case 0x2CE6DCu: goto label_2ce6dc;
            case 0x2CE6E0u: goto label_2ce6e0;
            case 0x2CE6E4u: goto label_2ce6e4;
            case 0x2CE6E8u: goto label_2ce6e8;
            case 0x2CE6ECu: goto label_2ce6ec;
            case 0x2CE6F0u: goto label_2ce6f0;
            case 0x2CE6F4u: goto label_2ce6f4;
            case 0x2CE6F8u: goto label_2ce6f8;
            case 0x2CE6FCu: goto label_2ce6fc;
            case 0x2CE700u: goto label_2ce700;
            case 0x2CE704u: goto label_2ce704;
            case 0x2CE708u: goto label_2ce708;
            case 0x2CE70Cu: goto label_2ce70c;
            case 0x2CE710u: goto label_2ce710;
            case 0x2CE714u: goto label_2ce714;
            case 0x2CE718u: goto label_2ce718;
            case 0x2CE71Cu: goto label_2ce71c;
            case 0x2CE720u: goto label_2ce720;
            case 0x2CE724u: goto label_2ce724;
            case 0x2CE728u: goto label_2ce728;
            case 0x2CE72Cu: goto label_2ce72c;
            case 0x2CE730u: goto label_2ce730;
            case 0x2CE734u: goto label_2ce734;
            case 0x2CE738u: goto label_2ce738;
            case 0x2CE73Cu: goto label_2ce73c;
            case 0x2CE740u: goto label_2ce740;
            case 0x2CE744u: goto label_2ce744;
            case 0x2CE748u: goto label_2ce748;
            case 0x2CE74Cu: goto label_2ce74c;
            case 0x2CE750u: goto label_2ce750;
            case 0x2CE754u: goto label_2ce754;
            case 0x2CE758u: goto label_2ce758;
            case 0x2CE75Cu: goto label_2ce75c;
            case 0x2CE760u: goto label_2ce760;
            case 0x2CE764u: goto label_2ce764;
            case 0x2CE768u: goto label_2ce768;
            case 0x2CE76Cu: goto label_2ce76c;
            case 0x2CE770u: goto label_2ce770;
            case 0x2CE774u: goto label_2ce774;
            case 0x2CE778u: goto label_2ce778;
            case 0x2CE77Cu: goto label_2ce77c;
            case 0x2CE780u: goto label_2ce780;
            case 0x2CE784u: goto label_2ce784;
            case 0x2CE788u: goto label_2ce788;
            case 0x2CE78Cu: goto label_2ce78c;
            case 0x2CE790u: goto label_2ce790;
            case 0x2CE794u: goto label_2ce794;
            case 0x2CE798u: goto label_2ce798;
            case 0x2CE79Cu: goto label_2ce79c;
            case 0x2CE7A0u: goto label_2ce7a0;
            case 0x2CE7A4u: goto label_2ce7a4;
            case 0x2CE7A8u: goto label_2ce7a8;
            case 0x2CE7ACu: goto label_2ce7ac;
            case 0x2CE7B0u: goto label_2ce7b0;
            case 0x2CE7B4u: goto label_2ce7b4;
            case 0x2CE7B8u: goto label_2ce7b8;
            case 0x2CE7BCu: goto label_2ce7bc;
            case 0x2CE7C0u: goto label_2ce7c0;
            case 0x2CE7C4u: goto label_2ce7c4;
            case 0x2CE7C8u: goto label_2ce7c8;
            case 0x2CE7CCu: goto label_2ce7cc;
            case 0x2CE7D0u: goto label_2ce7d0;
            case 0x2CE7D4u: goto label_2ce7d4;
            case 0x2CE7D8u: goto label_2ce7d8;
            case 0x2CE7DCu: goto label_2ce7dc;
            case 0x2CE7E0u: goto label_2ce7e0;
            case 0x2CE7E4u: goto label_2ce7e4;
            case 0x2CE7E8u: goto label_2ce7e8;
            case 0x2CE7ECu: goto label_2ce7ec;
            case 0x2CE7F0u: goto label_2ce7f0;
            case 0x2CE7F4u: goto label_2ce7f4;
            case 0x2CE7F8u: goto label_2ce7f8;
            case 0x2CE7FCu: goto label_2ce7fc;
            case 0x2CE800u: goto label_2ce800;
            case 0x2CE804u: goto label_2ce804;
            case 0x2CE808u: goto label_2ce808;
            case 0x2CE80Cu: goto label_2ce80c;
            case 0x2CE810u: goto label_2ce810;
            case 0x2CE814u: goto label_2ce814;
            case 0x2CE818u: goto label_2ce818;
            case 0x2CE81Cu: goto label_2ce81c;
            case 0x2CE820u: goto label_2ce820;
            case 0x2CE824u: goto label_2ce824;
            case 0x2CE828u: goto label_2ce828;
            case 0x2CE82Cu: goto label_2ce82c;
            case 0x2CE830u: goto label_2ce830;
            case 0x2CE834u: goto label_2ce834;
            case 0x2CE838u: goto label_2ce838;
            case 0x2CE83Cu: goto label_2ce83c;
            case 0x2CE840u: goto label_2ce840;
            case 0x2CE844u: goto label_2ce844;
            case 0x2CE848u: goto label_2ce848;
            case 0x2CE84Cu: goto label_2ce84c;
            case 0x2CE850u: goto label_2ce850;
            case 0x2CE854u: goto label_2ce854;
            case 0x2CE858u: goto label_2ce858;
            case 0x2CE85Cu: goto label_2ce85c;
            case 0x2CE860u: goto label_2ce860;
            case 0x2CE864u: goto label_2ce864;
            case 0x2CE868u: goto label_2ce868;
            case 0x2CE86Cu: goto label_2ce86c;
            case 0x2CE870u: goto label_2ce870;
            case 0x2CE874u: goto label_2ce874;
            case 0x2CE878u: goto label_2ce878;
            case 0x2CE87Cu: goto label_2ce87c;
            case 0x2CE880u: goto label_2ce880;
            case 0x2CE884u: goto label_2ce884;
            case 0x2CE888u: goto label_2ce888;
            case 0x2CE88Cu: goto label_2ce88c;
            case 0x2CE890u: goto label_2ce890;
            case 0x2CE894u: goto label_2ce894;
            case 0x2CE898u: goto label_2ce898;
            case 0x2CE89Cu: goto label_2ce89c;
            case 0x2CE8A0u: goto label_2ce8a0;
            case 0x2CE8A4u: goto label_2ce8a4;
            case 0x2CE8A8u: goto label_2ce8a8;
            case 0x2CE8ACu: goto label_2ce8ac;
            case 0x2CE8B0u: goto label_2ce8b0;
            case 0x2CE8B4u: goto label_2ce8b4;
            case 0x2CE8B8u: goto label_2ce8b8;
            case 0x2CE8BCu: goto label_2ce8bc;
            case 0x2CE8C0u: goto label_2ce8c0;
            case 0x2CE8C4u: goto label_2ce8c4;
            case 0x2CE8C8u: goto label_2ce8c8;
            case 0x2CE8CCu: goto label_2ce8cc;
            case 0x2CE8D0u: goto label_2ce8d0;
            case 0x2CE8D4u: goto label_2ce8d4;
            case 0x2CE8D8u: goto label_2ce8d8;
            case 0x2CE8DCu: goto label_2ce8dc;
            case 0x2CE8E0u: goto label_2ce8e0;
            case 0x2CE8E4u: goto label_2ce8e4;
            case 0x2CE8E8u: goto label_2ce8e8;
            case 0x2CE8ECu: goto label_2ce8ec;
            case 0x2CE8F0u: goto label_2ce8f0;
            case 0x2CE8F4u: goto label_2ce8f4;
            case 0x2CE8F8u: goto label_2ce8f8;
            case 0x2CE8FCu: goto label_2ce8fc;
            case 0x2CE900u: goto label_2ce900;
            case 0x2CE904u: goto label_2ce904;
            case 0x2CE908u: goto label_2ce908;
            case 0x2CE90Cu: goto label_2ce90c;
            case 0x2CE910u: goto label_2ce910;
            case 0x2CE914u: goto label_2ce914;
            case 0x2CE918u: goto label_2ce918;
            case 0x2CE91Cu: goto label_2ce91c;
            case 0x2CE920u: goto label_2ce920;
            case 0x2CE924u: goto label_2ce924;
            case 0x2CE928u: goto label_2ce928;
            case 0x2CE92Cu: goto label_2ce92c;
            case 0x2CE930u: goto label_2ce930;
            case 0x2CE934u: goto label_2ce934;
            case 0x2CE938u: goto label_2ce938;
            case 0x2CE93Cu: goto label_2ce93c;
            case 0x2CE940u: goto label_2ce940;
            case 0x2CE944u: goto label_2ce944;
            case 0x2CE948u: goto label_2ce948;
            case 0x2CE94Cu: goto label_2ce94c;
            case 0x2CE950u: goto label_2ce950;
            case 0x2CE954u: goto label_2ce954;
            case 0x2CE958u: goto label_2ce958;
            case 0x2CE95Cu: goto label_2ce95c;
            case 0x2CE960u: goto label_2ce960;
            case 0x2CE964u: goto label_2ce964;
            case 0x2CE968u: goto label_2ce968;
            case 0x2CE96Cu: goto label_2ce96c;
            case 0x2CE970u: goto label_2ce970;
            case 0x2CE974u: goto label_2ce974;
            case 0x2CE978u: goto label_2ce978;
            case 0x2CE97Cu: goto label_2ce97c;
            case 0x2CE980u: goto label_2ce980;
            case 0x2CE984u: goto label_2ce984;
            case 0x2CE988u: goto label_2ce988;
            case 0x2CE98Cu: goto label_2ce98c;
            case 0x2CE990u: goto label_2ce990;
            case 0x2CE994u: goto label_2ce994;
            case 0x2CE998u: goto label_2ce998;
            case 0x2CE99Cu: goto label_2ce99c;
            case 0x2CE9A0u: goto label_2ce9a0;
            case 0x2CE9A4u: goto label_2ce9a4;
            case 0x2CE9A8u: goto label_2ce9a8;
            case 0x2CE9ACu: goto label_2ce9ac;
            case 0x2CE9B0u: goto label_2ce9b0;
            case 0x2CE9B4u: goto label_2ce9b4;
            case 0x2CE9B8u: goto label_2ce9b8;
            case 0x2CE9BCu: goto label_2ce9bc;
            case 0x2CE9C0u: goto label_2ce9c0;
            case 0x2CE9C4u: goto label_2ce9c4;
            case 0x2CE9C8u: goto label_2ce9c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CDEF0u;
label_2cdef0:
    // 0x2cdef0: 0x96220038
    ctx->pc = 0x2cdef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_2cdef4:
    // 0x2cdef4: 0x10400007
label_2cdef8:
    if (ctx->pc == 0x2CDEF8u) {
        ctx->pc = 0x2CDEF8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x2CDEFCu;
        goto label_2cdefc;
    }
    ctx->pc = 0x2CDEF4u;
    {
        const bool branch_taken_0x2cdef4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDEF8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x2cdef4) {
            ctx->pc = 0x2CDF14u;
            goto label_2cdf14;
        }
    }
    ctx->pc = 0x2CDEFCu;
label_2cdefc:
    // 0x2cdefc: 0x54400003
label_2cdf00:
    if (ctx->pc == 0x2CDF00u) {
        ctx->pc = 0x2CDF00u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x2CDF04u;
        goto label_2cdf04;
    }
    ctx->pc = 0x2CDEFCu;
    {
        const bool branch_taken_0x2cdefc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cdefc) {
            ctx->pc = 0x2CDF00u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->pc = 0x2CDF0Cu;
            goto label_2cdf0c;
        }
    }
    ctx->pc = 0x2CDF04u;
label_2cdf04:
    // 0x2cdf04: 0x1000029f
label_2cdf08:
    if (ctx->pc == 0x2CDF08u) {
        ctx->pc = 0x2CDF08u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 16));
        ctx->pc = 0x2CDF0Cu;
        goto label_2cdf0c;
    }
    ctx->pc = 0x2CDF04u;
    {
        const bool branch_taken_0x2cdf04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDF08u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 16));
        if (branch_taken_0x2cdf04) {
            ctx->pc = 0x2CE984u;
            goto label_2ce984;
        }
    }
    ctx->pc = 0x2CDF0Cu;
label_2cdf0c:
    // 0x2cdf0c: 0x2028023
    ctx->pc = 0x2cdf0cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2cdf10:
    // 0x2cdf10: 0xafb00064
    ctx->pc = 0x2cdf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 16));
label_2cdf14:
    // 0x2cdf14: 0x24020001
    ctx->pc = 0x2cdf14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2cdf18:
    // 0x2cdf18: 0xa2220037
    ctx->pc = 0x2cdf18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
label_2cdf1c:
    // 0x2cdf1c: 0xc0b31ee
label_2cdf20:
    if (ctx->pc == 0x2CDF20u) {
        ctx->pc = 0x2CDF20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF24u;
        goto label_2cdf24;
    }
    ctx->pc = 0x2CDF1Cu;
    SET_GPR_U32(ctx, 31, 0x2CDF24u);
    ctx->pc = 0x2CDF20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CC7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setupPsys_0x2cc7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF24u; }
    }
    if (ctx->pc != 0x2CDF24u) { return; }
    ctx->pc = 0x2CDF24u;
label_2cdf24:
    // 0x2cdf24: 0x8e220008
    ctx->pc = 0x2cdf24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2cdf28:
    // 0x2cdf28: 0x1040004d
label_2cdf2c:
    if (ctx->pc == 0x2CDF2Cu) {
        ctx->pc = 0x2CDF2Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->pc = 0x2CDF30u;
        goto label_2cdf30;
    }
    ctx->pc = 0x2CDF28u;
    {
        const bool branch_taken_0x2cdf28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDF2Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 100)));
        if (branch_taken_0x2cdf28) {
            ctx->pc = 0x2CE060u;
            goto label_2ce060;
        }
    }
    ctx->pc = 0x2CDF30u;
label_2cdf30:
    // 0x2cdf30: 0x14c00007
label_2cdf34:
    if (ctx->pc == 0x2CDF34u) {
        ctx->pc = 0x2CDF34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CDF38u;
        goto label_2cdf38;
    }
    ctx->pc = 0x2CDF30u;
    {
        const bool branch_taken_0x2cdf30 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CDF34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2cdf30) {
            ctx->pc = 0x2CDF50u;
            goto label_2cdf50;
        }
    }
    ctx->pc = 0x2CDF38u;
label_2cdf38:
    // 0x2cdf38: 0x24070001
    ctx->pc = 0x2cdf38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_2cdf3c:
    // 0x2cdf3c: 0xafa70064
    ctx->pc = 0x2cdf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
label_2cdf40:
    // 0x2cdf40: 0x26100001
    ctx->pc = 0x2cdf40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2cdf44:
    // 0x2cdf44: 0x3c013f80
    ctx->pc = 0x2cdf44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2cdf48:
    // 0x2cdf48: 0x44810000
    ctx->pc = 0x2cdf48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2cdf4c:
    // 0x2cdf4c: 0x4600a500
    ctx->pc = 0x2cdf4cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2cdf50:
    // 0x2cdf50: 0xa2220037
    ctx->pc = 0x2cdf50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
label_2cdf54:
    // 0x2cdf54: 0x9622002c
    ctx->pc = 0x2cdf54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_2cdf58:
    // 0x2cdf58: 0x30420001
    ctx->pc = 0x2cdf58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_2cdf5c:
    // 0x2cdf5c: 0x10400009
label_2cdf60:
    if (ctx->pc == 0x2CDF60u) {
        ctx->pc = 0x2CDF60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CDF64u;
        goto label_2cdf64;
    }
    ctx->pc = 0x2CDF5Cu;
    {
        const bool branch_taken_0x2cdf5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDF60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2cdf5c) {
            ctx->pc = 0x2CDF84u;
            goto label_2cdf84;
        }
    }
    ctx->pc = 0x2CDF64u;
label_2cdf64:
    // 0x2cdf64: 0x3c0147c3
    ctx->pc = 0x2cdf64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
label_2cdf68:
    // 0x2cdf68: 0x34215000
    ctx->pc = 0x2cdf68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
label_2cdf6c:
    // 0x2cdf6c: 0x4481b000
    ctx->pc = 0x2cdf6cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
label_2cdf70:
    // 0x2cdf70: 0xafa20064
    ctx->pc = 0x2cdf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_2cdf74:
    // 0x2cdf74: 0x24100001
    ctx->pc = 0x2cdf74u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_2cdf78:
    // 0x2cdf78: 0x24020006
    ctx->pc = 0x2cdf78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2cdf7c:
    // 0x2cdf7c: 0x1000003d
label_2cdf80:
    if (ctx->pc == 0x2CDF80u) {
        ctx->pc = 0x2CDF80u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2CDF84u;
        goto label_2cdf84;
    }
    ctx->pc = 0x2CDF7Cu;
    {
        const bool branch_taken_0x2cdf7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDF80u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2cdf7c) {
            ctx->pc = 0x2CE074u;
            goto label_2ce074;
        }
    }
    ctx->pc = 0x2CDF84u;
label_2cdf84:
    // 0x2cdf84: 0x9622002c
    ctx->pc = 0x2cdf84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_2cdf88:
    // 0x2cdf88: 0x30420002
    ctx->pc = 0x2cdf88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_2cdf8c:
    // 0x2cdf8c: 0x10400006
label_2cdf90:
    if (ctx->pc == 0x2CDF90u) {
        ctx->pc = 0x2CDF90u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        ctx->pc = 0x2CDF94u;
        goto label_2cdf94;
    }
    ctx->pc = 0x2CDF8Cu;
    {
        const bool branch_taken_0x2cdf8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDF90u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x2cdf8c) {
            ctx->pc = 0x2CDFA8u;
            goto label_2cdfa8;
        }
    }
    ctx->pc = 0x2CDF94u;
label_2cdf94:
    // 0x2cdf94: 0x9623003a
    ctx->pc = 0x2cdf94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
label_2cdf98:
    // 0x2cdf98: 0x54620004
label_2cdf9c:
    if (ctx->pc == 0x2CDF9Cu) {
        ctx->pc = 0x2CDF9Cu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
        ctx->pc = 0x2CDFA0u;
        goto label_2cdfa0;
    }
    ctx->pc = 0x2CDF98u;
    {
        const bool branch_taken_0x2cdf98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2cdf98) {
            ctx->pc = 0x2CDF9Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
            ctx->pc = 0x2CDFACu;
            goto label_2cdfac;
        }
    }
    ctx->pc = 0x2CDFA0u;
label_2cdfa0:
    // 0x2cdfa0: 0x10000025
label_2cdfa4:
    if (ctx->pc == 0x2CDFA4u) {
        ctx->pc = 0x2CDFA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2CDFA8u;
        goto label_2cdfa8;
    }
    ctx->pc = 0x2CDFA0u;
    {
        const bool branch_taken_0x2cdfa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDFA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2cdfa0) {
            ctx->pc = 0x2CE038u;
            goto label_2ce038;
        }
    }
    ctx->pc = 0x2CDFA8u;
label_2cdfa8:
    // 0x2cdfa8: 0x9622003a
    ctx->pc = 0x2cdfa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
label_2cdfac:
    // 0x2cdfac: 0x50102b
    ctx->pc = 0x2cdfacu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2cdfb0:
    // 0x2cdfb0: 0x54400006
label_2cdfb4:
    if (ctx->pc == 0x2CDFB4u) {
        ctx->pc = 0x2CDFB4u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x2CDFB8u;
        goto label_2cdfb8;
    }
    ctx->pc = 0x2CDFB0u;
    {
        const bool branch_taken_0x2cdfb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cdfb0) {
            ctx->pc = 0x2CDFB4u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->pc = 0x2CDFCCu;
            goto label_2cdfcc;
        }
    }
    ctx->pc = 0x2CDFB8u;
label_2cdfb8:
    // 0x2cdfb8: 0xc62000d4
    ctx->pc = 0x2cdfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cdfbc:
    // 0x2cdfbc: 0x4600a582
    ctx->pc = 0x2cdfbcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2cdfc0:
    // 0x2cdfc0: 0xc62000d0
    ctx->pc = 0x2cdfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cdfc4:
    // 0x2cdfc4: 0x1000002b
label_2cdfc8:
    if (ctx->pc == 0x2CDFC8u) {
        ctx->pc = 0x2CDFC8u;
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x2CDFCCu;
        goto label_2cdfcc;
    }
    ctx->pc = 0x2CDFC4u;
    {
        const bool branch_taken_0x2cdfc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDFC8u;
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        if (branch_taken_0x2cdfc4) {
            ctx->pc = 0x2CE074u;
            goto label_2ce074;
        }
    }
    ctx->pc = 0x2CDFCCu;
label_2cdfcc:
    // 0x2cdfcc: 0x30420002
    ctx->pc = 0x2cdfccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_2cdfd0:
    // 0x2cdfd0: 0x10400008
label_2cdfd4:
    if (ctx->pc == 0x2CDFD4u) {
        ctx->pc = 0x2CDFD4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        ctx->pc = 0x2CDFD8u;
        goto label_2cdfd8;
    }
    ctx->pc = 0x2CDFD0u;
    {
        const bool branch_taken_0x2cdfd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDFD4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x2cdfd0) {
            ctx->pc = 0x2CDFF4u;
            goto label_2cdff4;
        }
    }
    ctx->pc = 0x2CDFD8u;
label_2cdfd8:
    // 0x2cdfd8: 0x9623003c
    ctx->pc = 0x2cdfd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_2cdfdc:
    // 0x2cdfdc: 0x14620006
label_2cdfe0:
    if (ctx->pc == 0x2CDFE0u) {
        ctx->pc = 0x2CDFE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2CDFE4u;
        goto label_2cdfe4;
    }
    ctx->pc = 0x2CDFDCu;
    {
        const bool branch_taken_0x2cdfdc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2CDFE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2cdfdc) {
            ctx->pc = 0x2CDFF8u;
            goto label_2cdff8;
        }
    }
    ctx->pc = 0x2CDFE4u;
label_2cdfe4:
    // 0x2cdfe4: 0x24020005
    ctx->pc = 0x2cdfe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2cdfe8:
    // 0x2cdfe8: 0xa2220037
    ctx->pc = 0x2cdfe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
label_2cdfec:
    // 0x2cdfec: 0x10000021
label_2cdff0:
    if (ctx->pc == 0x2CDFF0u) {
        ctx->pc = 0x2CDFF0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->pc = 0x2CDFF4u;
        goto label_2cdff4;
    }
    ctx->pc = 0x2CDFECu;
    {
        const bool branch_taken_0x2cdfec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CDFF0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        if (branch_taken_0x2cdfec) {
            ctx->pc = 0x2CE074u;
            goto label_2ce074;
        }
    }
    ctx->pc = 0x2CDFF4u;
label_2cdff4:
    // 0x2cdff4: 0x24020003
    ctx->pc = 0x2cdff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2cdff8:
    // 0x2cdff8: 0xa2220037
    ctx->pc = 0x2cdff8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
label_2cdffc:
    // 0x2cdffc: 0x9622003a
    ctx->pc = 0x2cdffcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
label_2ce000:
    // 0x2ce000: 0x9623003c
    ctx->pc = 0x2ce000u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_2ce004:
    // 0x2ce004: 0x431021
    ctx->pc = 0x2ce004u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ce008:
    // 0x2ce008: 0x50102b
    ctx->pc = 0x2ce008u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2ce00c:
    // 0x2ce00c: 0x54400006
label_2ce010:
    if (ctx->pc == 0x2CE010u) {
        ctx->pc = 0x2CE010u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x2CE014u;
        goto label_2ce014;
    }
    ctx->pc = 0x2CE00Cu;
    {
        const bool branch_taken_0x2ce00c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ce00c) {
            ctx->pc = 0x2CE010u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->pc = 0x2CE028u;
            goto label_2ce028;
        }
    }
    ctx->pc = 0x2CE014u;
label_2ce014:
    // 0x2ce014: 0xc62000dc
    ctx->pc = 0x2ce014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce018:
    // 0x2ce018: 0x4600a582
    ctx->pc = 0x2ce018u;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2ce01c:
    // 0x2ce01c: 0xc62000d8
    ctx->pc = 0x2ce01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce020:
    // 0x2ce020: 0x10000014
label_2ce024:
    if (ctx->pc == 0x2CE024u) {
        ctx->pc = 0x2CE024u;
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x2CE028u;
        goto label_2ce028;
    }
    ctx->pc = 0x2CE020u;
    {
        const bool branch_taken_0x2ce020 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE024u;
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        if (branch_taken_0x2ce020) {
            ctx->pc = 0x2CE074u;
            goto label_2ce074;
        }
    }
    ctx->pc = 0x2CE028u;
label_2ce028:
    // 0x2ce028: 0x30420002
    ctx->pc = 0x2ce028u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_2ce02c:
    // 0x2ce02c: 0x10400005
label_2ce030:
    if (ctx->pc == 0x2CE030u) {
        ctx->pc = 0x2CE030u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CE034u;
        goto label_2ce034;
    }
    ctx->pc = 0x2CE02Cu;
    {
        const bool branch_taken_0x2ce02c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE030u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2ce02c) {
            ctx->pc = 0x2CE044u;
            goto label_2ce044;
        }
    }
    ctx->pc = 0x2CE034u;
label_2ce034:
    // 0x2ce034: 0x802d
    ctx->pc = 0x2ce034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce038:
    // 0x2ce038: 0xa2220037
    ctx->pc = 0x2ce038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
label_2ce03c:
    // 0x2ce03c: 0x1000000d
label_2ce040:
    if (ctx->pc == 0x2CE040u) {
        ctx->pc = 0x2CE040u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->pc = 0x2CE044u;
        goto label_2ce044;
    }
    ctx->pc = 0x2CE03Cu;
    {
        const bool branch_taken_0x2ce03c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE040u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        if (branch_taken_0x2ce03c) {
            ctx->pc = 0x2CE074u;
            goto label_2ce074;
        }
    }
    ctx->pc = 0x2CE044u;
label_2ce044:
    // 0x2ce044: 0x24020006
    ctx->pc = 0x2ce044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2ce048:
    // 0x2ce048: 0xa2220037
    ctx->pc = 0x2ce048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
label_2ce04c:
    // 0x2ce04c: 0x4480b000
    ctx->pc = 0x2ce04cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
label_2ce050:
    // 0x2ce050: 0xe636007c
    ctx->pc = 0x2ce050u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_2ce054:
    // 0x2ce054: 0x8e220070
    ctx->pc = 0x2ce054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2ce058:
    // 0x2ce058: 0x54400007
label_2ce05c:
    if (ctx->pc == 0x2CE05Cu) {
        ctx->pc = 0x2CE05Cu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
        ctx->pc = 0x2CE060u;
        goto label_2ce060;
    }
    ctx->pc = 0x2CE058u;
    {
        const bool branch_taken_0x2ce058 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ce058) {
            ctx->pc = 0x2CE05Cu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
            ctx->pc = 0x2CE078u;
            goto label_2ce078;
        }
    }
    ctx->pc = 0x2CE060u;
label_2ce060:
    // 0x2ce060: 0xc0b2478
label_2ce064:
    if (ctx->pc == 0x2CE064u) {
        ctx->pc = 0x2CE064u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE068u;
        goto label_2ce068;
    }
    ctx->pc = 0x2CE060u;
    SET_GPR_U32(ctx, 31, 0x2CE068u);
    ctx->pc = 0x2CE064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C91E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        queuePsysRemove_0x2c91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE068u; }
    }
    if (ctx->pc != 0x2CE068u) { return; }
    ctx->pc = 0x2CE068u;
label_2ce068:
    // 0x2ce068: 0x24020008
    ctx->pc = 0x2ce068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_2ce06c:
    // 0x2ce06c: 0x10000245
label_2ce070:
    if (ctx->pc == 0x2CE070u) {
        ctx->pc = 0x2CE070u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2CE074u;
        goto label_2ce074;
    }
    ctx->pc = 0x2CE06Cu;
    {
        const bool branch_taken_0x2ce06c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE070u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2ce06c) {
            ctx->pc = 0x2CE984u;
            goto label_2ce984;
        }
    }
    ctx->pc = 0x2CE074u;
label_2ce074:
    // 0x2ce074: 0x86220082
    ctx->pc = 0x2ce074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
label_2ce078:
    // 0x2ce078: 0x10400006
label_2ce07c:
    if (ctx->pc == 0x2CE07Cu) {
        ctx->pc = 0x2CE07Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2CE080u;
        goto label_2ce080;
    }
    ctx->pc = 0x2CE078u;
    {
        const bool branch_taken_0x2ce078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE07Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x2ce078) {
            ctx->pc = 0x2CE094u;
            goto label_2ce094;
        }
    }
    ctx->pc = 0x2CE080u;
label_2ce080:
    // 0x2ce080: 0x8c620060
    ctx->pc = 0x2ce080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2ce084:
    // 0x2ce084: 0x3c030020
    ctx->pc = 0x2ce084u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
label_2ce088:
    // 0x2ce088: 0x431024
    ctx->pc = 0x2ce088u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ce08c:
    // 0x2ce08c: 0x50400003
label_2ce090:
    if (ctx->pc == 0x2CE090u) {
        ctx->pc = 0x2CE090u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 16));
        ctx->pc = 0x2CE094u;
        goto label_2ce094;
    }
    ctx->pc = 0x2CE08Cu;
    {
        const bool branch_taken_0x2ce08c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ce08c) {
            ctx->pc = 0x2CE090u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 16));
            ctx->pc = 0x2CE09Cu;
            goto label_2ce09c;
        }
    }
    ctx->pc = 0x2CE094u;
label_2ce094:
    // 0x2ce094: 0x4480b000
    ctx->pc = 0x2ce094u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
label_2ce098:
    // 0x2ce098: 0xae300094
    ctx->pc = 0x2ce098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 16));
label_2ce09c:
    // 0x2ce09c: 0x8e370008
    ctx->pc = 0x2ce09cu;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ce0a0:
    // 0x2ce0a0: 0x9622002e
    ctx->pc = 0x2ce0a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_2ce0a4:
    // 0x2ce0a4: 0x21040
    ctx->pc = 0x2ce0a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_2ce0a8:
    // 0x2ce0a8: 0x2e21021
    ctx->pc = 0x2ce0a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2ce0ac:
    // 0x2ce0ac: 0x44800000
    ctx->pc = 0x2ce0acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2ce0b0:
    // 0x2ce0b0: 0x46160034
    ctx->pc = 0x2ce0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce0b4:
    // 0x2ce0b4: 0x0
    ctx->pc = 0x2ce0b4u;
    // NOP
label_2ce0b8:
    // 0x2ce0b8: 0x4500001e
label_2ce0bc:
    if (ctx->pc == 0x2CE0BCu) {
        ctx->pc = 0x2CE0BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x2CE0C0u;
        goto label_2ce0c0;
    }
    ctx->pc = 0x2CE0B8u;
    {
        const bool branch_taken_0x2ce0b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE0BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        if (branch_taken_0x2ce0b8) {
            ctx->pc = 0x2CE134u;
            goto label_2ce134;
        }
    }
    ctx->pc = 0x2CE0C0u;
label_2ce0c0:
    // 0x2ce0c0: 0xc63400cc
    ctx->pc = 0x2ce0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ce0c4:
    // 0x2ce0c4: 0x46140034
    ctx->pc = 0x2ce0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce0c8:
    // 0x2ce0c8: 0x0
    ctx->pc = 0x2ce0c8u;
    // NOP
label_2ce0cc:
    // 0x2ce0cc: 0x4500001a
label_2ce0d0:
    if (ctx->pc == 0x2CE0D0u) {
        ctx->pc = 0x2CE0D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2CE0D4u;
        goto label_2ce0d4;
    }
    ctx->pc = 0x2CE0CCu;
    {
        const bool branch_taken_0x2ce0cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE0D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x2ce0cc) {
            ctx->pc = 0x2CE138u;
            goto label_2ce138;
        }
    }
    ctx->pc = 0x2CE0D4u;
label_2ce0d4:
    // 0x2ce0d4: 0xc0abc06
label_2ce0d8:
    if (ctx->pc == 0x2CE0D8u) {
        ctx->pc = 0x2CE0DCu;
        goto label_2ce0dc;
    }
    ctx->pc = 0x2CE0D4u;
    SET_GPR_U32(ctx, 31, 0x2CE0DCu);
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE0DCu; }
    }
    if (ctx->pc != 0x2CE0DCu) { return; }
    ctx->pc = 0x2CE0DCu;
label_2ce0dc:
    // 0x2ce0dc: 0x30437fff
    ctx->pc = 0x2ce0dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
label_2ce0e0:
    // 0x2ce0e0: 0x4600005
label_2ce0e4:
    if (ctx->pc == 0x2CE0E4u) {
        ctx->pc = 0x2CE0E4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2CE0E8u;
        goto label_2ce0e8;
    }
    ctx->pc = 0x2CE0E0u;
    {
        const bool branch_taken_0x2ce0e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CE0E4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2ce0e0) {
            ctx->pc = 0x2CE0F8u;
            goto label_2ce0f8;
        }
    }
    ctx->pc = 0x2CE0E8u;
label_2ce0e8:
    // 0x2ce0e8: 0x44830800
    ctx->pc = 0x2ce0e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2ce0ec:
    // 0x2ce0ec: 0x46800860
    ctx->pc = 0x2ce0ecu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2ce0f0:
    // 0x2ce0f0: 0x10000006
label_2ce0f4:
    if (ctx->pc == 0x2CE0F4u) {
        ctx->pc = 0x2CE0F8u;
        goto label_2ce0f8;
    }
    ctx->pc = 0x2CE0F0u;
    {
        const bool branch_taken_0x2ce0f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ce0f0) {
            ctx->pc = 0x2CE10Cu;
            goto label_2ce10c;
        }
    }
    ctx->pc = 0x2CE0F8u;
label_2ce0f8:
    // 0x2ce0f8: 0x31842
    ctx->pc = 0x2ce0f8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2ce0fc:
    // 0x2ce0fc: 0x431025
    ctx->pc = 0x2ce0fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ce100:
    // 0x2ce100: 0x44820800
    ctx->pc = 0x2ce100u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2ce104:
    // 0x2ce104: 0x46800860
    ctx->pc = 0x2ce104u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2ce108:
    // 0x2ce108: 0x46010840
    ctx->pc = 0x2ce108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ce10c:
    // 0x2ce10c: 0x3c013880
    ctx->pc = 0x2ce10cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14464 << 16));
label_2ce110:
    // 0x2ce110: 0x34210100
    ctx->pc = 0x2ce110u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 256));
label_2ce114:
    // 0x2ce114: 0x44810000
    ctx->pc = 0x2ce114u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2ce118:
    // 0x2ce118: 0x46000802
    ctx->pc = 0x2ce118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ce11c:
    // 0x2ce11c: 0x3c013f80
    ctx->pc = 0x2ce11cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2ce120:
    // 0x2ce120: 0x44810800
    ctx->pc = 0x2ce120u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2ce124:
    // 0x2ce124: 0x46010001
    ctx->pc = 0x2ce124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2ce128:
    // 0x2ce128: 0x46140002
    ctx->pc = 0x2ce128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2ce12c:
    // 0x2ce12c: 0x46010000
    ctx->pc = 0x2ce12cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ce130:
    // 0x2ce130: 0x4600b582
    ctx->pc = 0x2ce130u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2ce134:
    // 0x2ce134: 0x8fa40060
    ctx->pc = 0x2ce134u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ce138:
    // 0x2ce138: 0x8e22008c
    ctx->pc = 0x2ce138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_2ce13c:
    // 0x2ce13c: 0x10400009
label_2ce140:
    if (ctx->pc == 0x2CE140u) {
        ctx->pc = 0x2CE140u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x2CE144u;
        goto label_2ce144;
    }
    ctx->pc = 0x2CE13Cu;
    {
        const bool branch_taken_0x2ce13c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE140u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 96)));
        if (branch_taken_0x2ce13c) {
            ctx->pc = 0x2CE164u;
            goto label_2ce164;
        }
    }
    ctx->pc = 0x2CE144u;
label_2ce144:
    // 0x2ce144: 0xc0b0608
label_2ce148:
    if (ctx->pc == 0x2CE148u) {
        ctx->pc = 0x2CE148u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2CE14Cu;
        goto label_2ce14c;
    }
    ctx->pc = 0x2CE144u;
    SET_GPR_U32(ctx, 31, 0x2CE14Cu);
    ctx->pc = 0x2CE148u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->pc = 0x2C1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBlitSetTexture_0x2c1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE14Cu; }
    }
    if (ctx->pc != 0x2CE14Cu) { return; }
    ctx->pc = 0x2CE14Cu;
label_2ce14c:
    // 0x2ce14c: 0x8e22008c
    ctx->pc = 0x2ce14cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_2ce150:
    // 0x2ce150: 0x94450016
    ctx->pc = 0x2ce150u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
label_2ce154:
    // 0x2ce154: 0xafa50088
    ctx->pc = 0x2ce154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
label_2ce158:
    // 0x2ce158: 0x94420018
    ctx->pc = 0x2ce158u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2ce15c:
    // 0x2ce15c: 0x10000005
label_2ce160:
    if (ctx->pc == 0x2CE160u) {
        ctx->pc = 0x2CE160u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x2CE164u;
        goto label_2ce164;
    }
    ctx->pc = 0x2CE15Cu;
    {
        const bool branch_taken_0x2ce15c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE160u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        if (branch_taken_0x2ce15c) {
            ctx->pc = 0x2CE174u;
            goto label_2ce174;
        }
    }
    ctx->pc = 0x2CE164u;
label_2ce164:
    // 0x2ce164: 0x24060010
    ctx->pc = 0x2ce164u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
label_2ce168:
    // 0x2ce168: 0xafa60088
    ctx->pc = 0x2ce168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
label_2ce16c:
    // 0x2ce16c: 0x24070010
    ctx->pc = 0x2ce16cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
label_2ce170:
    // 0x2ce170: 0xafa7008c
    ctx->pc = 0x2ce170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 7));
label_2ce174:
    // 0x2ce174: 0x9622002c
    ctx->pc = 0x2ce174u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_2ce178:
    // 0x2ce178: 0x30420020
    ctx->pc = 0x2ce178u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
label_2ce17c:
    // 0x2ce17c: 0x10400007
label_2ce180:
    if (ctx->pc == 0x2CE180u) {
        ctx->pc = 0x2CE180u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE184u;
        goto label_2ce184;
    }
    ctx->pc = 0x2CE17Cu;
    {
        const bool branch_taken_0x2ce17c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE180u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ce17c) {
            ctx->pc = 0x2CE19Cu;
            goto label_2ce19c;
        }
    }
    ctx->pc = 0x2CE184u;
label_2ce184:
    // 0x2ce184: 0x1000000a
label_2ce188:
    if (ctx->pc == 0x2CE188u) {
        ctx->pc = 0x2CE188u;
        SET_GPR_U32(ctx, 4, ((uint32_t)16 << 16));
        ctx->pc = 0x2CE18Cu;
        goto label_2ce18c;
    }
    ctx->pc = 0x2CE184u;
    {
        const bool branch_taken_0x2ce184 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE188u;
        SET_GPR_U32(ctx, 4, ((uint32_t)16 << 16));
        if (branch_taken_0x2ce184) {
            ctx->pc = 0x2CE1B0u;
            goto label_2ce1b0;
        }
    }
    ctx->pc = 0x2CE18Cu;
label_2ce18c:
    // 0x2ce18c: 0xa82d
    ctx->pc = 0x2ce18cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce190:
    // 0x2ce190: 0x8fa2006c
    ctx->pc = 0x2ce190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2ce194:
    // 0x2ce194: 0x10000044
label_2ce198:
    if (ctx->pc == 0x2CE198u) {
        ctx->pc = 0x2CE198u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->pc = 0x2CE19Cu;
        goto label_2ce19c;
    }
    ctx->pc = 0x2CE194u;
    {
        const bool branch_taken_0x2ce194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE198u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967294));
        if (branch_taken_0x2ce194) {
            ctx->pc = 0x2CE2A8u;
            goto label_2ce2a8;
        }
    }
    ctx->pc = 0x2CE19Cu;
label_2ce19c:
    // 0x2ce19c: 0x9622002c
    ctx->pc = 0x2ce19cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_2ce1a0:
    // 0x2ce1a0: 0x30420010
    ctx->pc = 0x2ce1a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_2ce1a4:
    // 0x2ce1a4: 0x10400002
label_2ce1a8:
    if (ctx->pc == 0x2CE1A8u) {
        ctx->pc = 0x2CE1A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
        ctx->pc = 0x2CE1ACu;
        goto label_2ce1ac;
    }
    ctx->pc = 0x2CE1A4u;
    {
        const bool branch_taken_0x2ce1a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE1A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
        if (branch_taken_0x2ce1a4) {
            ctx->pc = 0x2CE1B0u;
            goto label_2ce1b0;
        }
    }
    ctx->pc = 0x2CE1ACu;
label_2ce1ac:
    // 0x2ce1ac: 0x822025
    ctx->pc = 0x2ce1acu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ce1b0:
    // 0x2ce1b0: 0x200282d
    ctx->pc = 0x2ce1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce1b4:
    // 0x2ce1b4: 0xc0b0664
label_2ce1b8:
    if (ctx->pc == 0x2CE1B8u) {
        ctx->pc = 0x2CE1B8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE1BCu;
        goto label_2ce1bc;
    }
    ctx->pc = 0x2CE1B4u;
    SET_GPR_U32(ctx, 31, 0x2CE1BCu);
    ctx->pc = 0x2CE1B8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C1990u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBlitSetDrawRegs_0x2c1990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1BCu; }
    }
    if (ctx->pc != 0x2CE1BCu) { return; }
    ctx->pc = 0x2CE1BCu;
label_2ce1bc:
    // 0x2ce1bc: 0x92240034
    ctx->pc = 0x2ce1bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_2ce1c0:
    // 0x2ce1c0: 0x24030001
    ctx->pc = 0x2ce1c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2ce1c4:
    // 0x2ce1c4: 0x831004
    ctx->pc = 0x2ce1c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_2ce1c8:
    // 0x2ce1c8: 0x2442ffff
    ctx->pc = 0x2ce1c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ce1cc:
    // 0x2ce1cc: 0x305effff
    ctx->pc = 0x2ce1ccu;
    SET_GPR_U32(ctx, 30, AND32(GPR_U32(ctx, 2), 65535));
label_2ce1d0:
    // 0x2ce1d0: 0x92220035
    ctx->pc = 0x2ce1d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_2ce1d4:
    // 0x2ce1d4: 0x431804
    ctx->pc = 0x2ce1d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2ce1d8:
    // 0x2ce1d8: 0x2463ffff
    ctx->pc = 0x2ce1d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ce1dc:
    // 0x2ce1dc: 0x3063ffff
    ctx->pc = 0x2ce1dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
label_2ce1e0:
    // 0x2ce1e0: 0xafa30070
    ctx->pc = 0x2ce1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_2ce1e4:
    // 0x2ce1e4: 0xafa40074
    ctx->pc = 0x2ce1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
label_2ce1e8:
    // 0x2ce1e8: 0x441021
    ctx->pc = 0x2ce1e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ce1ec:
    // 0x2ce1ec: 0xafa20078
    ctx->pc = 0x2ce1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_2ce1f0:
    // 0x2ce1f0: 0x92250060
    ctx->pc = 0x2ce1f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
label_2ce1f4:
    // 0x2ce1f4: 0x92220061
    ctx->pc = 0x2ce1f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
label_2ce1f8:
    // 0x2ce1f8: 0xa22821
    ctx->pc = 0x2ce1f8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2ce1fc:
    // 0x2ce1fc: 0x96220078
    ctx->pc = 0x2ce1fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_2ce200:
    // 0x2ce200: 0x8fa30064
    ctx->pc = 0x2ce200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2ce204:
    // 0x2ce204: 0x622021
    ctx->pc = 0x2ce204u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ce208:
    // 0x2ce208: 0x852023
    ctx->pc = 0x2ce208u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2ce20c:
    // 0x2ce20c: 0x8e300074
    ctx->pc = 0x2ce20cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2ce210:
    // 0x2ce210: 0x4800032
label_2ce214:
    if (ctx->pc == 0x2CE214u) {
        ctx->pc = 0x2CE214u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x2CE218u;
        goto label_2ce218;
    }
    ctx->pc = 0x2CE210u;
    {
        const bool branch_taken_0x2ce210 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2CE214u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        if (branch_taken_0x2ce210) {
            ctx->pc = 0x2CE2DCu;
            goto label_2ce2dc;
        }
    }
    ctx->pc = 0x2CE218u;
label_2ce218:
    // 0x2ce218: 0x12a00030
label_2ce21c:
    if (ctx->pc == 0x2CE21Cu) {
        ctx->pc = 0x2CE21Cu;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->pc = 0x2CE220u;
        goto label_2ce220;
    }
    ctx->pc = 0x2CE218u;
    {
        const bool branch_taken_0x2ce218 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE21Cu;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        if (branch_taken_0x2ce218) {
            ctx->pc = 0x2CE2DCu;
            goto label_2ce2dc;
        }
    }
    ctx->pc = 0x2CE220u;
label_2ce220:
    // 0x2ce220: 0x96b30000
    ctx->pc = 0x2ce220u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_2ce224:
    // 0x2ce224: 0x8fa6006c
    ctx->pc = 0x2ce224u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2ce228:
    // 0x2ce228: 0x24c2fffe
    ctx->pc = 0x2ce228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967294));
label_2ce22c:
    // 0x2ce22c: 0x40a02d
    ctx->pc = 0x2ce22cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce230:
    // 0x2ce230: 0x203a00a
    ctx->pc = 0x2ce230u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 16));
label_2ce234:
    // 0x2ce234: 0x8e230018
    ctx->pc = 0x2ce234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ce238:
    // 0x2ce238: 0x10600006
label_2ce23c:
    if (ctx->pc == 0x2CE23Cu) {
        ctx->pc = 0x2CE23Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->pc = 0x2CE240u;
        goto label_2ce240;
    }
    ctx->pc = 0x2CE238u;
    {
        const bool branch_taken_0x2ce238 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE23Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 120)));
        if (branch_taken_0x2ce238) {
            ctx->pc = 0x2CE254u;
            goto label_2ce254;
        }
    }
    ctx->pc = 0x2CE240u;
label_2ce240:
    // 0x2ce240: 0xf39007
    ctx->pc = 0x2ce240u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 7) & 0x1F));
label_2ce244:
    // 0x2ce244: 0x721821
    ctx->pc = 0x2ce244u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2ce248:
    // 0x2ce248: 0x90620000
    ctx->pc = 0x2ce248u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2ce24c:
    // 0x2ce24c: 0x2442ffff
    ctx->pc = 0x2ce24cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ce250:
    // 0x2ce250: 0xa0620000
    ctx->pc = 0x2ce250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ce254:
    // 0x2ce254: 0x8e230014
    ctx->pc = 0x2ce254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ce258:
    // 0x2ce258: 0x10600008
label_2ce25c:
    if (ctx->pc == 0x2CE25Cu) {
        ctx->pc = 0x2CE25Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->pc = 0x2CE260u;
        goto label_2ce260;
    }
    ctx->pc = 0x2CE258u;
    {
        const bool branch_taken_0x2ce258 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE25Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 116)));
        if (branch_taken_0x2ce258) {
            ctx->pc = 0x2CE27Cu;
            goto label_2ce27c;
        }
    }
    ctx->pc = 0x2CE260u;
label_2ce260:
    // 0x2ce260: 0xd31007
    ctx->pc = 0x2ce260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
label_2ce264:
    // 0x2ce264: 0x8fa70070
    ctx->pc = 0x2ce264u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2ce268:
    // 0x2ce268: 0x473024
    ctx->pc = 0x2ce268u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2ce26c:
    // 0x2ce26c: 0x661821
    ctx->pc = 0x2ce26cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2ce270:
    // 0x2ce270: 0x90620000
    ctx->pc = 0x2ce270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2ce274:
    // 0x2ce274: 0x2442ffff
    ctx->pc = 0x2ce274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ce278:
    // 0x2ce278: 0xa0620000
    ctx->pc = 0x2ce278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ce27c:
    // 0x2ce27c: 0x16b40005
label_2ce280:
    if (ctx->pc == 0x2CE280u) {
        ctx->pc = 0x2CE280u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x2CE284u;
        goto label_2ce284;
    }
    ctx->pc = 0x2CE27Cu;
    {
        const bool branch_taken_0x2ce27c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 20));
        ctx->pc = 0x2CE280u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x2ce27c) {
            ctx->pc = 0x2CE294u;
            goto label_2ce294;
        }
    }
    ctx->pc = 0x2CE284u;
label_2ce284:
    // 0x2ce284: 0x1290ffc1
label_2ce288:
    if (ctx->pc == 0x2CE288u) {
        ctx->pc = 0x2CE288u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 23), 4294967294));
        ctx->pc = 0x2CE28Cu;
        goto label_2ce28c;
    }
    ctx->pc = 0x2CE284u;
    {
        const bool branch_taken_0x2ce284 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 16));
        ctx->pc = 0x2CE288u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 23), 4294967294));
        if (branch_taken_0x2ce284) {
            ctx->pc = 0x2CE18Cu;
            goto label_2ce18c;
        }
    }
    ctx->pc = 0x2CE28Cu;
label_2ce28c:
    // 0x2ce28c: 0x200a02d
    ctx->pc = 0x2ce28cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce290:
    // 0x2ce290: 0x26b50002
    ctx->pc = 0x2ce290u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 2));
label_2ce294:
    // 0x2ce294: 0x96b30000
    ctx->pc = 0x2ce294u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_2ce298:
    // 0x2ce298: 0x27e1024
    ctx->pc = 0x2ce298u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_2ce29c:
    // 0x2ce29c: 0x822023
    ctx->pc = 0x2ce29cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ce2a0:
    // 0x2ce2a0: 0x483ffe5
label_2ce2a4:
    if (ctx->pc == 0x2CE2A4u) {
        ctx->pc = 0x2CE2A4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x2CE2A8u;
        goto label_2ce2a8;
    }
    ctx->pc = 0x2CE2A0u;
    {
        const bool branch_taken_0x2ce2a0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2ce2a0) {
            ctx->pc = 0x2CE2A4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->pc = 0x2CE238u;
            goto label_2ce238;
        }
    }
    ctx->pc = 0x2CE2A8u;
label_2ce2a8:
    // 0x2ce2a8: 0x12a00009
label_2ce2ac:
    if (ctx->pc == 0x2CE2ACu) {
        ctx->pc = 0x2CE2ACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->pc = 0x2CE2B0u;
        goto label_2ce2b0;
    }
    ctx->pc = 0x2CE2A8u;
    {
        const bool branch_taken_0x2ce2a8 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE2ACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 120)));
        if (branch_taken_0x2ce2a8) {
            ctx->pc = 0x2CE2D0u;
            goto label_2ce2d0;
        }
    }
    ctx->pc = 0x2CE2B0u;
label_2ce2b0:
    // 0x2ce2b0: 0x539007
    ctx->pc = 0x2ce2b0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
label_2ce2b4:
    // 0x2ce2b4: 0x8fa30074
    ctx->pc = 0x2ce2b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2ce2b8:
    // 0x2ce2b8: 0x733007
    ctx->pc = 0x2ce2b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
label_2ce2bc:
    // 0x2ce2bc: 0x8fa70070
    ctx->pc = 0x2ce2bcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2ce2c0:
    // 0x2ce2c0: 0xc73024
    ctx->pc = 0x2ce2c0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2ce2c4:
    // 0x2ce2c4: 0xa6320022
    ctx->pc = 0x2ce2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 18));
label_2ce2c8:
    // 0x2ce2c8: 0x10000004
label_2ce2cc:
    if (ctx->pc == 0x2CE2CCu) {
        ctx->pc = 0x2CE2CCu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = 0x2CE2D0u;
        goto label_2ce2d0;
    }
    ctx->pc = 0x2CE2C8u;
    {
        const bool branch_taken_0x2ce2c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE2CCu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 6));
        if (branch_taken_0x2ce2c8) {
            ctx->pc = 0x2CE2DCu;
            goto label_2ce2dc;
        }
    }
    ctx->pc = 0x2CE2D0u;
label_2ce2d0:
    // 0x2ce2d0: 0x3402ffff
    ctx->pc = 0x2ce2d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
label_2ce2d4:
    // 0x2ce2d4: 0xa6220022
    ctx->pc = 0x2ce2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
label_2ce2d8:
    // 0x2ce2d8: 0xa622001e
    ctx->pc = 0x2ce2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 2));
label_2ce2dc:
    // 0x2ce2dc: 0xa41021
    ctx->pc = 0x2ce2dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2ce2e0:
    // 0x2ce2e0: 0xa6220078
    ctx->pc = 0x2ce2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 2));
label_2ce2e4:
    // 0x2ce2e4: 0x8fa20064
    ctx->pc = 0x2ce2e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2ce2e8:
    // 0x2ce2e8: 0x4400005
label_2ce2ec:
    if (ctx->pc == 0x2CE2ECu) {
        ctx->pc = 0x2CE2ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->pc = 0x2CE2F0u;
        goto label_2ce2f0;
    }
    ctx->pc = 0x2CE2E8u;
    {
        const bool branch_taken_0x2ce2e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CE2ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 100)));
        if (branch_taken_0x2ce2e8) {
            ctx->pc = 0x2CE300u;
            goto label_2ce300;
        }
    }
    ctx->pc = 0x2CE2F0u;
label_2ce2f0:
    // 0x2ce2f0: 0x44820000
    ctx->pc = 0x2ce2f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2ce2f4:
    // 0x2ce2f4: 0x46800020
    ctx->pc = 0x2ce2f4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2ce2f8:
    // 0x2ce2f8: 0x10000008
label_2ce2fc:
    if (ctx->pc == 0x2CE2FCu) {
        ctx->pc = 0x2CE2FCu;
        ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x2CE300u;
        goto label_2ce300;
    }
    ctx->pc = 0x2CE2F8u;
    {
        const bool branch_taken_0x2ce2f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE2FCu;
        ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        if (branch_taken_0x2ce2f8) {
            ctx->pc = 0x2CE31Cu;
            goto label_2ce31c;
        }
    }
    ctx->pc = 0x2CE300u;
label_2ce300:
    // 0x2ce300: 0x30620001
    ctx->pc = 0x2ce300u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_2ce304:
    // 0x2ce304: 0x31842
    ctx->pc = 0x2ce304u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_2ce308:
    // 0x2ce308: 0x431025
    ctx->pc = 0x2ce308u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ce30c:
    // 0x2ce30c: 0x44820000
    ctx->pc = 0x2ce30cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2ce310:
    // 0x2ce310: 0x46800020
    ctx->pc = 0x2ce310u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2ce314:
    // 0x2ce314: 0x46000000
    ctx->pc = 0x2ce314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ce318:
    // 0x2ce318: 0x4600b502
    ctx->pc = 0x2ce318u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2ce31c:
    // 0x2ce31c: 0xc620007c
    ctx->pc = 0x2ce31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce320:
    // 0x2ce320: 0x215102b
    ctx->pc = 0x2ce320u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2ce324:
    // 0x2ce324: 0x8fb4006c
    ctx->pc = 0x2ce324u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2ce328:
    // 0x2ce328: 0x2a2a00b
    ctx->pc = 0x2ce328u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 21));
label_2ce32c:
    // 0x2ce32c: 0x8fa4006c
    ctx->pc = 0x2ce32cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2ce330:
    // 0x2ce330: 0x2482fffe
    ctx->pc = 0x2ce330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967294));
label_2ce334:
    // 0x2ce334: 0x26030002
    ctx->pc = 0x2ce334u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2));
label_2ce338:
    // 0x2ce338: 0x2021026
    ctx->pc = 0x2ce338u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ce33c:
    // 0x2ce33c: 0x60982d
    ctx->pc = 0x2ce33cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ce340:
    // 0x2ce340: 0x2e2980a
    ctx->pc = 0x2ce340u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 23));
label_2ce344:
    // 0x2ce344: 0x260802d
    ctx->pc = 0x2ce344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ce348:
    // 0x2ce348: 0x16150009
label_2ce34c:
    if (ctx->pc == 0x2CE34Cu) {
        ctx->pc = 0x2CE34Cu;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x2CE350u;
        goto label_2ce350;
    }
    ctx->pc = 0x2CE348u;
    {
        const bool branch_taken_0x2ce348 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 21));
        ctx->pc = 0x2CE34Cu;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2ce348) {
            ctx->pc = 0x2CE370u;
            goto label_2ce370;
        }
    }
    ctx->pc = 0x2CE350u;
label_2ce350:
    // 0x2ce350: 0xae20007c
    ctx->pc = 0x2ce350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_2ce354:
    // 0x2ce354: 0x9622007a
    ctx->pc = 0x2ce354u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
label_2ce358:
    // 0x2ce358: 0x8fa50064
    ctx->pc = 0x2ce358u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2ce35c:
    // 0x2ce35c: 0x10000092
label_2ce360:
    if (ctx->pc == 0x2CE360u) {
        ctx->pc = 0x2CE360u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = 0x2CE364u;
        goto label_2ce364;
    }
    ctx->pc = 0x2CE35Cu;
    {
        const bool branch_taken_0x2ce35c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE360u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        if (branch_taken_0x2ce35c) {
            ctx->pc = 0x2CE5A8u;
            goto label_2ce5a8;
        }
    }
    ctx->pc = 0x2CE364u;
label_2ce364:
    // 0x2ce364: 0xa6250078
    ctx->pc = 0x2ce364u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 120), (uint16_t)GPR_U32(ctx, 5));
label_2ce368:
    // 0x2ce368: 0x10000090
label_2ce36c:
    if (ctx->pc == 0x2CE36Cu) {
        ctx->pc = 0x2CE36Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2CE370u;
        goto label_2ce370;
    }
    ctx->pc = 0x2CE368u;
    {
        const bool branch_taken_0x2ce368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE36Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2ce368) {
            ctx->pc = 0x2CE5ACu;
            goto label_2ce5ac;
        }
    }
    ctx->pc = 0x2CE370u;
label_2ce370:
    // 0x2ce370: 0x4480c000
    ctx->pc = 0x2ce370u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 0);
label_2ce374:
    // 0x2ce374: 0x3c013f80
    ctx->pc = 0x2ce374u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2ce378:
    // 0x2ce378: 0x4481b800
    ctx->pc = 0x2ce378u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 1);
label_2ce37c:
    // 0x2ce37c: 0x10000066
label_2ce380:
    if (ctx->pc == 0x2CE380u) {
        ctx->pc = 0x2CE380u;
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2CE384u;
        goto label_2ce384;
    }
    ctx->pc = 0x2CE37Cu;
    {
        const bool branch_taken_0x2ce37c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE380u;
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x2ce37c) {
            ctx->pc = 0x2CE518u;
            goto label_2ce518;
        }
    }
    ctx->pc = 0x2CE384u;
label_2ce384:
    // 0x2ce384: 0x0
    ctx->pc = 0x2ce384u;
    // NOP
label_2ce388:
    // 0x2ce388: 0x27e1824
    ctx->pc = 0x2ce388u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_2ce38c:
    // 0x2ce38c: 0x982d
    ctx->pc = 0x2ce38cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce390:
    // 0x2ce390: 0x1000004c
label_2ce394:
    if (ctx->pc == 0x2CE394u) {
        ctx->pc = 0x2CE394u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2CE398u;
        goto label_2ce398;
    }
    ctx->pc = 0x2CE390u;
    {
        const bool branch_taken_0x2ce390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE394u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x2ce390) {
            ctx->pc = 0x2CE4C4u;
            goto label_2ce4c4;
        }
    }
    ctx->pc = 0x2CE398u;
label_2ce398:
    // 0x2ce398: 0x275a80a
    ctx->pc = 0x2ce398u;
    if (GPR_U32(ctx, 21) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 19));
label_2ce39c:
    // 0x2ce39c: 0x2603fffe
    ctx->pc = 0x2ce39cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967294));
label_2ce3a0:
    // 0x2ce3a0: 0x8fa6006c
    ctx->pc = 0x2ce3a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2ce3a4:
    // 0x2ce3a4: 0x24c4fffe
    ctx->pc = 0x2ce3a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4294967294));
label_2ce3a8:
    // 0x2ce3a8: 0x2171026
    ctx->pc = 0x2ce3a8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_2ce3ac:
    // 0x2ce3ac: 0x82180a
    ctx->pc = 0x2ce3acu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_2ce3b0:
    // 0x2ce3b0: 0xae230074
    ctx->pc = 0x2ce3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
label_2ce3b4:
    // 0x2ce3b4: 0x282d
    ctx->pc = 0x2ce3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce3b8:
    // 0x2ce3b8: 0x200b02d
    ctx->pc = 0x2ce3b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce3bc:
    // 0x2ce3bc: 0x276182b
    ctx->pc = 0x2ce3bcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_2ce3c0:
    // 0x2ce3c0: 0x26e2fffe
    ctx->pc = 0x2ce3c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967294));
label_2ce3c4:
    // 0x2ce3c4: 0x40a02d
    ctx->pc = 0x2ce3c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce3c8:
    // 0x2ce3c8: 0x263a00b
    ctx->pc = 0x2ce3c8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 19));
label_2ce3cc:
    // 0x2ce3cc: 0x26d0fffe
    ctx->pc = 0x2ce3ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 22), 4294967294));
label_2ce3d0:
    // 0x2ce3d0: 0x16140007
label_2ce3d4:
    if (ctx->pc == 0x2CE3D4u) {
        ctx->pc = 0x2CE3D4u;
        ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
        ctx->pc = 0x2CE3D8u;
        goto label_2ce3d8;
    }
    ctx->pc = 0x2CE3D0u;
    {
        const bool branch_taken_0x2ce3d0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 20));
        ctx->pc = 0x2CE3D4u;
        ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
        if (branch_taken_0x2ce3d0) {
            ctx->pc = 0x2CE3F0u;
            goto label_2ce3f0;
        }
    }
    ctx->pc = 0x2CE3D8u;
label_2ce3d8:
    // 0x2ce3d8: 0x1293001e
label_2ce3dc:
    if (ctx->pc == 0x2CE3DCu) {
        ctx->pc = 0x2CE3DCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE3E0u;
        goto label_2ce3e0;
    }
    ctx->pc = 0x2CE3D8u;
    {
        const bool branch_taken_0x2ce3d8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 19));
        ctx->pc = 0x2CE3DCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3d8) {
            ctx->pc = 0x2CE454u;
            goto label_2ce454;
        }
    }
    ctx->pc = 0x2CE3E0u;
label_2ce3e0:
    // 0x2ce3e0: 0x80802d
    ctx->pc = 0x2ce3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce3e4:
    // 0x2ce3e4: 0x1214001b
label_2ce3e8:
    if (ctx->pc == 0x2CE3E8u) {
        ctx->pc = 0x2CE3ECu;
        goto label_2ce3ec;
    }
    ctx->pc = 0x2CE3E4u;
    {
        const bool branch_taken_0x2ce3e4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 20));
        if (branch_taken_0x2ce3e4) {
            ctx->pc = 0x2CE454u;
            goto label_2ce454;
        }
    }
    ctx->pc = 0x2CE3ECu;
label_2ce3ec:
    // 0x2ce3ec: 0x0
    ctx->pc = 0x2ce3ecu;
    // NOP
label_2ce3f0:
    // 0x2ce3f0: 0x4618a036
    ctx->pc = 0x2ce3f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce3f4:
    // 0x2ce3f4: 0x0
    ctx->pc = 0x2ce3f4u;
    // NOP
label_2ce3f8:
    // 0x2ce3f8: 0x4500000d
label_2ce3fc:
    if (ctx->pc == 0x2CE3FCu) {
        ctx->pc = 0x2CE3FCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE400u;
        goto label_2ce400;
    }
    ctx->pc = 0x2CE3F8u;
    {
        const bool branch_taken_0x2ce3f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE3FCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3f8) {
            ctx->pc = 0x2CE430u;
            goto label_2ce430;
        }
    }
    ctx->pc = 0x2CE400u;
label_2ce400:
    // 0x2ce400: 0x44800000
    ctx->pc = 0x2ce400u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2ce404:
    // 0x2ce404: 0x4616a500
    ctx->pc = 0x2ce404u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_2ce408:
    // 0x2ce408: 0x24630001
    ctx->pc = 0x2ce408u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ce40c:
    // 0x2ce40c: 0x4600a036
    ctx->pc = 0x2ce40cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce410:
    // 0x2ce410: 0x0
    ctx->pc = 0x2ce410u;
    // NOP
label_2ce414:
    // 0x2ce414: 0x45000003
label_2ce418:
    if (ctx->pc == 0x2CE418u) {
        ctx->pc = 0x2CE418u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2CE41Cu;
        goto label_2ce41c;
    }
    ctx->pc = 0x2CE414u;
    {
        const bool branch_taken_0x2ce414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE418u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2ce414) {
            ctx->pc = 0x2CE424u;
            goto label_2ce424;
        }
    }
    ctx->pc = 0x2CE41Cu;
label_2ce41c:
    // 0x2ce41c: 0x547efffa
label_2ce420:
    if (ctx->pc == 0x2CE420u) {
        ctx->pc = 0x2CE420u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->pc = 0x2CE424u;
        goto label_2ce424;
    }
    ctx->pc = 0x2CE41Cu;
    {
        const bool branch_taken_0x2ce41c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 30));
        if (branch_taken_0x2ce41c) {
            ctx->pc = 0x2CE420u;
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
            ctx->pc = 0x2CE408u;
            goto label_2ce408;
        }
    }
    ctx->pc = 0x2CE424u;
label_2ce424:
    // 0x2ce424: 0x96020000
    ctx->pc = 0x2ce424u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce428:
    // 0x2ce428: 0x431025
    ctx->pc = 0x2ce428u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ce42c:
    // 0x2ce42c: 0xa6020000
    ctx->pc = 0x2ce42cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2ce430:
    // 0x2ce430: 0x2610fffe
    ctx->pc = 0x2ce430u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967294));
label_2ce434:
    // 0x2ce434: 0x1614ffee
label_2ce438:
    if (ctx->pc == 0x2CE438u) {
        ctx->pc = 0x2CE438u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
        ctx->pc = 0x2CE43Cu;
        goto label_2ce43c;
    }
    ctx->pc = 0x2CE434u;
    {
        const bool branch_taken_0x2ce434 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 20));
        ctx->pc = 0x2CE438u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
        if (branch_taken_0x2ce434) {
            ctx->pc = 0x2CE3F0u;
            goto label_2ce3f0;
        }
    }
    ctx->pc = 0x2CE43Cu;
label_2ce43c:
    // 0x2ce43c: 0x12930005
label_2ce440:
    if (ctx->pc == 0x2CE440u) {
        ctx->pc = 0x2CE440u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->pc = 0x2CE444u;
        goto label_2ce444;
    }
    ctx->pc = 0x2CE43Cu;
    {
        const bool branch_taken_0x2ce43c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 19));
        ctx->pc = 0x2CE440u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 108)));
        if (branch_taken_0x2ce43c) {
            ctx->pc = 0x2CE454u;
            goto label_2ce454;
        }
    }
    ctx->pc = 0x2CE444u;
label_2ce444:
    // 0x2ce444: 0x24f0fffe
    ctx->pc = 0x2ce444u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 4294967294));
label_2ce448:
    // 0x2ce448: 0x260a02d
    ctx->pc = 0x2ce448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ce44c:
    // 0x2ce44c: 0x1614ffe8
label_2ce450:
    if (ctx->pc == 0x2CE450u) {
        ctx->pc = 0x2CE454u;
        goto label_2ce454;
    }
    ctx->pc = 0x2CE44Cu;
    {
        const bool branch_taken_0x2ce44c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 20));
        if (branch_taken_0x2ce44c) {
            ctx->pc = 0x2CE3F0u;
            goto label_2ce3f0;
        }
    }
    ctx->pc = 0x2CE454u;
label_2ce454:
    // 0x2ce454: 0x12b3ffc3
label_2ce458:
    if (ctx->pc == 0x2CE458u) {
        ctx->pc = 0x2CE458u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->pc = 0x2CE45Cu;
        goto label_2ce45c;
    }
    ctx->pc = 0x2CE454u;
    {
        const bool branch_taken_0x2ce454 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 19));
        ctx->pc = 0x2CE458u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 100)));
        if (branch_taken_0x2ce454) {
            ctx->pc = 0x2CE364u;
            goto label_2ce364;
        }
    }
    ctx->pc = 0x2CE45Cu;
label_2ce45c:
    // 0x2ce45c: 0x9623007a
    ctx->pc = 0x2ce45cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
label_2ce460:
    // 0x2ce460: 0x621821
    ctx->pc = 0x2ce460u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ce464:
    // 0x2ce464: 0x651823
    ctx->pc = 0x2ce464u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ce468:
    // 0x2ce468: 0xa620007a
    ctx->pc = 0x2ce468u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 0));
label_2ce46c:
    // 0x2ce46c: 0x216102b
    ctx->pc = 0x2ce46cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_2ce470:
    // 0x2ce470: 0x8fb4006c
    ctx->pc = 0x2ce470u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2ce474:
    // 0x2ce474: 0x2c2a00b
    ctx->pc = 0x2ce474u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 22));
label_2ce478:
    // 0x2ce478: 0x3c3102a
    ctx->pc = 0x2ce478u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 3)));
label_2ce47c:
    // 0x2ce47c: 0x10400013
label_2ce480:
    if (ctx->pc == 0x2CE480u) {
        ctx->pc = 0x2CE480u;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2CE484u;
        goto label_2ce484;
    }
    ctx->pc = 0x2CE47Cu;
    {
        const bool branch_taken_0x2ce47c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE480u;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x2ce47c) {
            ctx->pc = 0x2CE4CCu;
            goto label_2ce4cc;
        }
    }
    ctx->pc = 0x2CE484u;
label_2ce484:
    // 0x2ce484: 0x27e1025
    ctx->pc = 0x2ce484u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_2ce488:
    // 0x2ce488: 0xa6020000
    ctx->pc = 0x2ce488u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2ce48c:
    // 0x2ce48c: 0x26100002
    ctx->pc = 0x2ce48cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
label_2ce490:
    // 0x2ce490: 0x56140006
label_2ce494:
    if (ctx->pc == 0x2CE494u) {
        ctx->pc = 0x2CE494u;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2CE498u;
        goto label_2ce498;
    }
    ctx->pc = 0x2CE490u;
    {
        const bool branch_taken_0x2ce490 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 20));
        if (branch_taken_0x2ce490) {
            ctx->pc = 0x2CE494u;
            SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2CE4ACu;
            goto label_2ce4ac;
        }
    }
    ctx->pc = 0x2CE498u;
label_2ce498:
    // 0x2ce498: 0x5296ffbb
label_2ce49c:
    if (ctx->pc == 0x2CE49Cu) {
        ctx->pc = 0x2CE49Cu;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x2CE4A0u;
        goto label_2ce4a0;
    }
    ctx->pc = 0x2CE498u;
    {
        const bool branch_taken_0x2ce498 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 22));
        if (branch_taken_0x2ce498) {
            ctx->pc = 0x2CE49Cu;
            SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->pc = 0x2CE388u;
            goto label_2ce388;
        }
    }
    ctx->pc = 0x2CE4A0u;
label_2ce4a0:
    // 0x2ce4a0: 0x2c0a02d
    ctx->pc = 0x2ce4a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4a4:
    // 0x2ce4a4: 0x2e0802d
    ctx->pc = 0x2ce4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4a8:
    // 0x2ce4a8: 0x96f30000
    ctx->pc = 0x2ce4a8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_2ce4ac:
    // 0x2ce4ac: 0x27e1024
    ctx->pc = 0x2ce4acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_2ce4b0:
    // 0x2ce4b0: 0x5e1023
    ctx->pc = 0x2ce4b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2ce4b4:
    // 0x2ce4b4: 0x621821
    ctx->pc = 0x2ce4b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ce4b8:
    // 0x2ce4b8: 0x3c3102a
    ctx->pc = 0x2ce4b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 3)));
label_2ce4bc:
    // 0x2ce4bc: 0x1440fff2
label_2ce4c0:
    if (ctx->pc == 0x2CE4C0u) {
        ctx->pc = 0x2CE4C0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
        ctx->pc = 0x2CE4C4u;
        goto label_2ce4c4;
    }
    ctx->pc = 0x2CE4BCu;
    {
        const bool branch_taken_0x2ce4bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CE4C0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
        if (branch_taken_0x2ce4bc) {
            ctx->pc = 0x2CE488u;
            goto label_2ce488;
        }
    }
    ctx->pc = 0x2CE4C4u;
label_2ce4c4:
    // 0x2ce4c4: 0x1e1027
    ctx->pc = 0x2ce4c4u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
label_2ce4c8:
    // 0x2ce4c8: 0x2629824
    ctx->pc = 0x2ce4c8u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2ce4cc:
    // 0x2ce4cc: 0x2631025
    ctx->pc = 0x2ce4ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2ce4d0:
    // 0x2ce4d0: 0x10000036
label_2ce4d4:
    if (ctx->pc == 0x2CE4D4u) {
        ctx->pc = 0x2CE4D4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2CE4D8u;
        goto label_2ce4d8;
    }
    ctx->pc = 0x2CE4D0u;
    {
        const bool branch_taken_0x2ce4d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE4D4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2ce4d0) {
            ctx->pc = 0x2CE5ACu;
            goto label_2ce5ac;
        }
    }
    ctx->pc = 0x2CE4D8u;
label_2ce4d8:
    // 0x2ce4d8: 0x721004
    ctx->pc = 0x2ce4d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
label_2ce4dc:
    // 0x2ce4dc: 0x8fa40074
    ctx->pc = 0x2ce4dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2ce4e0:
    // 0x2ce4e0: 0x861804
    ctx->pc = 0x2ce4e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_2ce4e4:
    // 0x2ce4e4: 0x431025
    ctx->pc = 0x2ce4e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ce4e8:
    // 0x2ce4e8: 0xa6020000
    ctx->pc = 0x2ce4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_2ce4ec:
    // 0x2ce4ec: 0x26100002
    ctx->pc = 0x2ce4ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
label_2ce4f0:
    // 0x2ce4f0: 0x16140009
label_2ce4f4:
    if (ctx->pc == 0x2CE4F4u) {
        ctx->pc = 0x2CE4F4u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
        ctx->pc = 0x2CE4F8u;
        goto label_2ce4f8;
    }
    ctx->pc = 0x2CE4F0u;
    {
        const bool branch_taken_0x2ce4f0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 20));
        ctx->pc = 0x2CE4F4u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
        if (branch_taken_0x2ce4f0) {
            ctx->pc = 0x2CE518u;
            goto label_2ce518;
        }
    }
    ctx->pc = 0x2CE4F8u;
label_2ce4f8:
    // 0x2ce4f8: 0x8fa5006c
    ctx->pc = 0x2ce4f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2ce4fc:
    // 0x2ce4fc: 0x1685001e
label_2ce500:
    if (ctx->pc == 0x2CE500u) {
        ctx->pc = 0x2CE504u;
        goto label_2ce504;
    }
    ctx->pc = 0x2CE4FCu;
    {
        const bool branch_taken_0x2ce4fc = (GPR_U32(ctx, 20) != GPR_U32(ctx, 5));
        if (branch_taken_0x2ce4fc) {
            ctx->pc = 0x2CE578u;
            goto label_2ce578;
        }
    }
    ctx->pc = 0x2CE504u;
label_2ce504:
    // 0x2ce504: 0x275a80a
    ctx->pc = 0x2ce504u;
    if (GPR_U32(ctx, 21) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 19));
label_2ce508:
    // 0x2ce508: 0x12b7001b
label_2ce50c:
    if (ctx->pc == 0x2CE50Cu) {
        ctx->pc = 0x2CE510u;
        goto label_2ce510;
    }
    ctx->pc = 0x2CE508u;
    {
        const bool branch_taken_0x2ce508 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 23));
        if (branch_taken_0x2ce508) {
            ctx->pc = 0x2CE578u;
            goto label_2ce578;
        }
    }
    ctx->pc = 0x2CE510u;
label_2ce510:
    // 0x2ce510: 0x2e0802d
    ctx->pc = 0x2ce510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ce514:
    // 0x2ce514: 0x2a0a02d
    ctx->pc = 0x2ce514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ce518:
    // 0x2ce518: 0x4614c034
    ctx->pc = 0x2ce518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce51c:
    // 0x2ce51c: 0x0
    ctx->pc = 0x2ce51cu;
    // NOP
label_2ce520:
    // 0x2ce520: 0x45000015
label_2ce524:
    if (ctx->pc == 0x2CE524u) {
        ctx->pc = 0x2CE524u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE528u;
        goto label_2ce528;
    }
    ctx->pc = 0x2CE520u;
    {
        const bool branch_taken_0x2ce520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE524u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ce520) {
            ctx->pc = 0x2CE578u;
            goto label_2ce578;
        }
    }
    ctx->pc = 0x2CE528u;
label_2ce528:
    // 0x2ce528: 0x8e220068
    ctx->pc = 0x2ce528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2ce52c:
    // 0x2ce52c: 0x2c0282d
    ctx->pc = 0x2ce52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ce530:
    // 0x2ce530: 0x40f809
label_2ce534:
    if (ctx->pc == 0x2CE534u) {
        ctx->pc = 0x2CE534u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE538u;
        goto label_2ce538;
    }
    ctx->pc = 0x2CE530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CE538u);
        ctx->pc = 0x2CE534u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CDDF8u: goto label_2cddf8;
            case 0x2CDDFCu: goto label_2cddfc;
            case 0x2CDE00u: goto label_2cde00;
            case 0x2CDE04u: goto label_2cde04;
            case 0x2CDE08u: goto label_2cde08;
            case 0x2CDE0Cu: goto label_2cde0c;
            case 0x2CDE10u: goto label_2cde10;
            case 0x2CDE14u: goto label_2cde14;
            case 0x2CDE18u: goto label_2cde18;
            case 0x2CDE1Cu: goto label_2cde1c;
            case 0x2CDE20u: goto label_2cde20;
            case 0x2CDE24u: goto label_2cde24;
            case 0x2CDE28u: goto label_2cde28;
            case 0x2CDE2Cu: goto label_2cde2c;
            case 0x2CDE30u: goto label_2cde30;
            case 0x2CDE34u: goto label_2cde34;
            case 0x2CDE38u: goto label_2cde38;
            case 0x2CDE3Cu: goto label_2cde3c;
            case 0x2CDE40u: goto label_2cde40;
            case 0x2CDE44u: goto label_2cde44;
            case 0x2CDE48u: goto label_2cde48;
            case 0x2CDE4Cu: goto label_2cde4c;
            case 0x2CDE50u: goto label_2cde50;
            case 0x2CDE54u: goto label_2cde54;
            case 0x2CDE58u: goto label_2cde58;
            case 0x2CDE5Cu: goto label_2cde5c;
            case 0x2CDE60u: goto label_2cde60;
            case 0x2CDE64u: goto label_2cde64;
            case 0x2CDE68u: goto label_2cde68;
            case 0x2CDE6Cu: goto label_2cde6c;
            case 0x2CDE70u: goto label_2cde70;
            case 0x2CDE74u: goto label_2cde74;
            case 0x2CDE78u: goto label_2cde78;
            case 0x2CDE7Cu: goto label_2cde7c;
            case 0x2CDE80u: goto label_2cde80;
            case 0x2CDE84u: goto label_2cde84;
            case 0x2CDE88u: goto label_2cde88;
            case 0x2CDE8Cu: goto label_2cde8c;
            case 0x2CDE90u: goto label_2cde90;
            case 0x2CDE94u: goto label_2cde94;
            case 0x2CDE98u: goto label_2cde98;
            case 0x2CDE9Cu: goto label_2cde9c;
            case 0x2CDEA0u: goto label_2cdea0;
            case 0x2CDEA4u: goto label_2cdea4;
            case 0x2CDEA8u: goto label_2cdea8;
            case 0x2CDEACu: goto label_2cdeac;
            case 0x2CDEB0u: goto label_2cdeb0;
            case 0x2CDEB4u: goto label_2cdeb4;
            case 0x2CDEB8u: goto label_2cdeb8;
            case 0x2CDEBCu: goto label_2cdebc;
            case 0x2CDEC0u: goto label_2cdec0;
            case 0x2CDEC4u: goto label_2cdec4;
            case 0x2CDEC8u: goto label_2cdec8;
            case 0x2CDECCu: goto label_2cdecc;
            case 0x2CDED0u: goto label_2cded0;
            case 0x2CDED4u: goto label_2cded4;
            case 0x2CDED8u: goto label_2cded8;
            case 0x2CDEDCu: goto label_2cdedc;
            case 0x2CDEE0u: goto label_2cdee0;
            case 0x2CDEE4u: goto label_2cdee4;
            case 0x2CDEE8u: goto label_2cdee8;
            case 0x2CDEECu: goto label_2cdeec;
            case 0x2CDEF0u: goto label_2cdef0;
            case 0x2CDEF4u: goto label_2cdef4;
            case 0x2CDEF8u: goto label_2cdef8;
            case 0x2CDEFCu: goto label_2cdefc;
            case 0x2CDF00u: goto label_2cdf00;
            case 0x2CDF04u: goto label_2cdf04;
            case 0x2CDF08u: goto label_2cdf08;
            case 0x2CDF0Cu: goto label_2cdf0c;
            case 0x2CDF10u: goto label_2cdf10;
            case 0x2CDF14u: goto label_2cdf14;
            case 0x2CDF18u: goto label_2cdf18;
            case 0x2CDF1Cu: goto label_2cdf1c;
            case 0x2CDF20u: goto label_2cdf20;
            case 0x2CDF24u: goto label_2cdf24;
            case 0x2CDF28u: goto label_2cdf28;
            case 0x2CDF2Cu: goto label_2cdf2c;
            case 0x2CDF30u: goto label_2cdf30;
            case 0x2CDF34u: goto label_2cdf34;
            case 0x2CDF38u: goto label_2cdf38;
            case 0x2CDF3Cu: goto label_2cdf3c;
            case 0x2CDF40u: goto label_2cdf40;
            case 0x2CDF44u: goto label_2cdf44;
            case 0x2CDF48u: goto label_2cdf48;
            case 0x2CDF4Cu: goto label_2cdf4c;
            case 0x2CDF50u: goto label_2cdf50;
            case 0x2CDF54u: goto label_2cdf54;
            case 0x2CDF58u: goto label_2cdf58;
            case 0x2CDF5Cu: goto label_2cdf5c;
            case 0x2CDF60u: goto label_2cdf60;
            case 0x2CDF64u: goto label_2cdf64;
            case 0x2CDF68u: goto label_2cdf68;
            case 0x2CDF6Cu: goto label_2cdf6c;
            case 0x2CDF70u: goto label_2cdf70;
            case 0x2CDF74u: goto label_2cdf74;
            case 0x2CDF78u: goto label_2cdf78;
            case 0x2CDF7Cu: goto label_2cdf7c;
            case 0x2CDF80u: goto label_2cdf80;
            case 0x2CDF84u: goto label_2cdf84;
            case 0x2CDF88u: goto label_2cdf88;
            case 0x2CDF8Cu: goto label_2cdf8c;
            case 0x2CDF90u: goto label_2cdf90;
            case 0x2CDF94u: goto label_2cdf94;
            case 0x2CDF98u: goto label_2cdf98;
            case 0x2CDF9Cu: goto label_2cdf9c;
            case 0x2CDFA0u: goto label_2cdfa0;
            case 0x2CDFA4u: goto label_2cdfa4;
            case 0x2CDFA8u: goto label_2cdfa8;
            case 0x2CDFACu: goto label_2cdfac;
            case 0x2CDFB0u: goto label_2cdfb0;
            case 0x2CDFB4u: goto label_2cdfb4;
            case 0x2CDFB8u: goto label_2cdfb8;
            case 0x2CDFBCu: goto label_2cdfbc;
            case 0x2CDFC0u: goto label_2cdfc0;
            case 0x2CDFC4u: goto label_2cdfc4;
            case 0x2CDFC8u: goto label_2cdfc8;
            case 0x2CDFCCu: goto label_2cdfcc;
            case 0x2CDFD0u: goto label_2cdfd0;
            case 0x2CDFD4u: goto label_2cdfd4;
            case 0x2CDFD8u: goto label_2cdfd8;
            case 0x2CDFDCu: goto label_2cdfdc;
            case 0x2CDFE0u: goto label_2cdfe0;
            case 0x2CDFE4u: goto label_2cdfe4;
            case 0x2CDFE8u: goto label_2cdfe8;
            case 0x2CDFECu: goto label_2cdfec;
            case 0x2CDFF0u: goto label_2cdff0;
            case 0x2CDFF4u: goto label_2cdff4;
            case 0x2CDFF8u: goto label_2cdff8;
            case 0x2CDFFCu: goto label_2cdffc;
            case 0x2CE000u: goto label_2ce000;
            case 0x2CE004u: goto label_2ce004;
            case 0x2CE008u: goto label_2ce008;
            case 0x2CE00Cu: goto label_2ce00c;
            case 0x2CE010u: goto label_2ce010;
            case 0x2CE014u: goto label_2ce014;
            case 0x2CE018u: goto label_2ce018;
            case 0x2CE01Cu: goto label_2ce01c;
            case 0x2CE020u: goto label_2ce020;
            case 0x2CE024u: goto label_2ce024;
            case 0x2CE028u: goto label_2ce028;
            case 0x2CE02Cu: goto label_2ce02c;
            case 0x2CE030u: goto label_2ce030;
            case 0x2CE034u: goto label_2ce034;
            case 0x2CE038u: goto label_2ce038;
            case 0x2CE03Cu: goto label_2ce03c;
            case 0x2CE040u: goto label_2ce040;
            case 0x2CE044u: goto label_2ce044;
            case 0x2CE048u: goto label_2ce048;
            case 0x2CE04Cu: goto label_2ce04c;
            case 0x2CE050u: goto label_2ce050;
            case 0x2CE054u: goto label_2ce054;
            case 0x2CE058u: goto label_2ce058;
            case 0x2CE05Cu: goto label_2ce05c;
            case 0x2CE060u: goto label_2ce060;
            case 0x2CE064u: goto label_2ce064;
            case 0x2CE068u: goto label_2ce068;
            case 0x2CE06Cu: goto label_2ce06c;
            case 0x2CE070u: goto label_2ce070;
            case 0x2CE074u: goto label_2ce074;
            case 0x2CE078u: goto label_2ce078;
            case 0x2CE07Cu: goto label_2ce07c;
            case 0x2CE080u: goto label_2ce080;
            case 0x2CE084u: goto label_2ce084;
            case 0x2CE088u: goto label_2ce088;
            case 0x2CE08Cu: goto label_2ce08c;
            case 0x2CE090u: goto label_2ce090;
            case 0x2CE094u: goto label_2ce094;
            case 0x2CE098u: goto label_2ce098;
            case 0x2CE09Cu: goto label_2ce09c;
            case 0x2CE0A0u: goto label_2ce0a0;
            case 0x2CE0A4u: goto label_2ce0a4;
            case 0x2CE0A8u: goto label_2ce0a8;
            case 0x2CE0ACu: goto label_2ce0ac;
            case 0x2CE0B0u: goto label_2ce0b0;
            case 0x2CE0B4u: goto label_2ce0b4;
            case 0x2CE0B8u: goto label_2ce0b8;
            case 0x2CE0BCu: goto label_2ce0bc;
            case 0x2CE0C0u: goto label_2ce0c0;
            case 0x2CE0C4u: goto label_2ce0c4;
            case 0x2CE0C8u: goto label_2ce0c8;
            case 0x2CE0CCu: goto label_2ce0cc;
            case 0x2CE0D0u: goto label_2ce0d0;
            case 0x2CE0D4u: goto label_2ce0d4;
            case 0x2CE0D8u: goto label_2ce0d8;
            case 0x2CE0DCu: goto label_2ce0dc;
            case 0x2CE0E0u: goto label_2ce0e0;
            case 0x2CE0E4u: goto label_2ce0e4;
            case 0x2CE0E8u: goto label_2ce0e8;
            case 0x2CE0ECu: goto label_2ce0ec;
            case 0x2CE0F0u: goto label_2ce0f0;
            case 0x2CE0F4u: goto label_2ce0f4;
            case 0x2CE0F8u: goto label_2ce0f8;
            case 0x2CE0FCu: goto label_2ce0fc;
            case 0x2CE100u: goto label_2ce100;
            case 0x2CE104u: goto label_2ce104;
            case 0x2CE108u: goto label_2ce108;
            case 0x2CE10Cu: goto label_2ce10c;
            case 0x2CE110u: goto label_2ce110;
            case 0x2CE114u: goto label_2ce114;
            case 0x2CE118u: goto label_2ce118;
            case 0x2CE11Cu: goto label_2ce11c;
            case 0x2CE120u: goto label_2ce120;
            case 0x2CE124u: goto label_2ce124;
            case 0x2CE128u: goto label_2ce128;
            case 0x2CE12Cu: goto label_2ce12c;
            case 0x2CE130u: goto label_2ce130;
            case 0x2CE134u: goto label_2ce134;
            case 0x2CE138u: goto label_2ce138;
            case 0x2CE13Cu: goto label_2ce13c;
            case 0x2CE140u: goto label_2ce140;
            case 0x2CE144u: goto label_2ce144;
            case 0x2CE148u: goto label_2ce148;
            case 0x2CE14Cu: goto label_2ce14c;
            case 0x2CE150u: goto label_2ce150;
            case 0x2CE154u: goto label_2ce154;
            case 0x2CE158u: goto label_2ce158;
            case 0x2CE15Cu: goto label_2ce15c;
            case 0x2CE160u: goto label_2ce160;
            case 0x2CE164u: goto label_2ce164;
            case 0x2CE168u: goto label_2ce168;
            case 0x2CE16Cu: goto label_2ce16c;
            case 0x2CE170u: goto label_2ce170;
            case 0x2CE174u: goto label_2ce174;
            case 0x2CE178u: goto label_2ce178;
            case 0x2CE17Cu: goto label_2ce17c;
            case 0x2CE180u: goto label_2ce180;
            case 0x2CE184u: goto label_2ce184;
            case 0x2CE188u: goto label_2ce188;
            case 0x2CE18Cu: goto label_2ce18c;
            case 0x2CE190u: goto label_2ce190;
            case 0x2CE194u: goto label_2ce194;
            case 0x2CE198u: goto label_2ce198;
            case 0x2CE19Cu: goto label_2ce19c;
            case 0x2CE1A0u: goto label_2ce1a0;
            case 0x2CE1A4u: goto label_2ce1a4;
            case 0x2CE1A8u: goto label_2ce1a8;
            case 0x2CE1ACu: goto label_2ce1ac;
            case 0x2CE1B0u: goto label_2ce1b0;
            case 0x2CE1B4u: goto label_2ce1b4;
            case 0x2CE1B8u: goto label_2ce1b8;
            case 0x2CE1BCu: goto label_2ce1bc;
            case 0x2CE1C0u: goto label_2ce1c0;
            case 0x2CE1C4u: goto label_2ce1c4;
            case 0x2CE1C8u: goto label_2ce1c8;
            case 0x2CE1CCu: goto label_2ce1cc;
            case 0x2CE1D0u: goto label_2ce1d0;
            case 0x2CE1D4u: goto label_2ce1d4;
            case 0x2CE1D8u: goto label_2ce1d8;
            case 0x2CE1DCu: goto label_2ce1dc;
            case 0x2CE1E0u: goto label_2ce1e0;
            case 0x2CE1E4u: goto label_2ce1e4;
            case 0x2CE1E8u: goto label_2ce1e8;
            case 0x2CE1ECu: goto label_2ce1ec;
            case 0x2CE1F0u: goto label_2ce1f0;
            case 0x2CE1F4u: goto label_2ce1f4;
            case 0x2CE1F8u: goto label_2ce1f8;
            case 0x2CE1FCu: goto label_2ce1fc;
            case 0x2CE200u: goto label_2ce200;
            case 0x2CE204u: goto label_2ce204;
            case 0x2CE208u: goto label_2ce208;
            case 0x2CE20Cu: goto label_2ce20c;
            case 0x2CE210u: goto label_2ce210;
            case 0x2CE214u: goto label_2ce214;
            case 0x2CE218u: goto label_2ce218;
            case 0x2CE21Cu: goto label_2ce21c;
            case 0x2CE220u: goto label_2ce220;
            case 0x2CE224u: goto label_2ce224;
            case 0x2CE228u: goto label_2ce228;
            case 0x2CE22Cu: goto label_2ce22c;
            case 0x2CE230u: goto label_2ce230;
            case 0x2CE234u: goto label_2ce234;
            case 0x2CE238u: goto label_2ce238;
            case 0x2CE23Cu: goto label_2ce23c;
            case 0x2CE240u: goto label_2ce240;
            case 0x2CE244u: goto label_2ce244;
            case 0x2CE248u: goto label_2ce248;
            case 0x2CE24Cu: goto label_2ce24c;
            case 0x2CE250u: goto label_2ce250;
            case 0x2CE254u: goto label_2ce254;
            case 0x2CE258u: goto label_2ce258;
            case 0x2CE25Cu: goto label_2ce25c;
            case 0x2CE260u: goto label_2ce260;
            case 0x2CE264u: goto label_2ce264;
            case 0x2CE268u: goto label_2ce268;
            case 0x2CE26Cu: goto label_2ce26c;
            case 0x2CE270u: goto label_2ce270;
            case 0x2CE274u: goto label_2ce274;
            case 0x2CE278u: goto label_2ce278;
            case 0x2CE27Cu: goto label_2ce27c;
            case 0x2CE280u: goto label_2ce280;
            case 0x2CE284u: goto label_2ce284;
            case 0x2CE288u: goto label_2ce288;
            case 0x2CE28Cu: goto label_2ce28c;
            case 0x2CE290u: goto label_2ce290;
            case 0x2CE294u: goto label_2ce294;
            case 0x2CE298u: goto label_2ce298;
            case 0x2CE29Cu: goto label_2ce29c;
            case 0x2CE2A0u: goto label_2ce2a0;
            case 0x2CE2A4u: goto label_2ce2a4;
            case 0x2CE2A8u: goto label_2ce2a8;
            case 0x2CE2ACu: goto label_2ce2ac;
            case 0x2CE2B0u: goto label_2ce2b0;
            case 0x2CE2B4u: goto label_2ce2b4;
            case 0x2CE2B8u: goto label_2ce2b8;
            case 0x2CE2BCu: goto label_2ce2bc;
            case 0x2CE2C0u: goto label_2ce2c0;
            case 0x2CE2C4u: goto label_2ce2c4;
            case 0x2CE2C8u: goto label_2ce2c8;
            case 0x2CE2CCu: goto label_2ce2cc;
            case 0x2CE2D0u: goto label_2ce2d0;
            case 0x2CE2D4u: goto label_2ce2d4;
            case 0x2CE2D8u: goto label_2ce2d8;
            case 0x2CE2DCu: goto label_2ce2dc;
            case 0x2CE2E0u: goto label_2ce2e0;
            case 0x2CE2E4u: goto label_2ce2e4;
            case 0x2CE2E8u: goto label_2ce2e8;
            case 0x2CE2ECu: goto label_2ce2ec;
            case 0x2CE2F0u: goto label_2ce2f0;
            case 0x2CE2F4u: goto label_2ce2f4;
            case 0x2CE2F8u: goto label_2ce2f8;
            case 0x2CE2FCu: goto label_2ce2fc;
            case 0x2CE300u: goto label_2ce300;
            case 0x2CE304u: goto label_2ce304;
            case 0x2CE308u: goto label_2ce308;
            case 0x2CE30Cu: goto label_2ce30c;
            case 0x2CE310u: goto label_2ce310;
            case 0x2CE314u: goto label_2ce314;
            case 0x2CE318u: goto label_2ce318;
            case 0x2CE31Cu: goto label_2ce31c;
            case 0x2CE320u: goto label_2ce320;
            case 0x2CE324u: goto label_2ce324;
            case 0x2CE328u: goto label_2ce328;
            case 0x2CE32Cu: goto label_2ce32c;
            case 0x2CE330u: goto label_2ce330;
            case 0x2CE334u: goto label_2ce334;
            case 0x2CE338u: goto label_2ce338;
            case 0x2CE33Cu: goto label_2ce33c;
            case 0x2CE340u: goto label_2ce340;
            case 0x2CE344u: goto label_2ce344;
            case 0x2CE348u: goto label_2ce348;
            case 0x2CE34Cu: goto label_2ce34c;
            case 0x2CE350u: goto label_2ce350;
            case 0x2CE354u: goto label_2ce354;
            case 0x2CE358u: goto label_2ce358;
            case 0x2CE35Cu: goto label_2ce35c;
            case 0x2CE360u: goto label_2ce360;
            case 0x2CE364u: goto label_2ce364;
            case 0x2CE368u: goto label_2ce368;
            case 0x2CE36Cu: goto label_2ce36c;
            case 0x2CE370u: goto label_2ce370;
            case 0x2CE374u: goto label_2ce374;
            case 0x2CE378u: goto label_2ce378;
            case 0x2CE37Cu: goto label_2ce37c;
            case 0x2CE380u: goto label_2ce380;
            case 0x2CE384u: goto label_2ce384;
            case 0x2CE388u: goto label_2ce388;
            case 0x2CE38Cu: goto label_2ce38c;
            case 0x2CE390u: goto label_2ce390;
            case 0x2CE394u: goto label_2ce394;
            case 0x2CE398u: goto label_2ce398;
            case 0x2CE39Cu: goto label_2ce39c;
            case 0x2CE3A0u: goto label_2ce3a0;
            case 0x2CE3A4u: goto label_2ce3a4;
            case 0x2CE3A8u: goto label_2ce3a8;
            case 0x2CE3ACu: goto label_2ce3ac;
            case 0x2CE3B0u: goto label_2ce3b0;
            case 0x2CE3B4u: goto label_2ce3b4;
            case 0x2CE3B8u: goto label_2ce3b8;
            case 0x2CE3BCu: goto label_2ce3bc;
            case 0x2CE3C0u: goto label_2ce3c0;
            case 0x2CE3C4u: goto label_2ce3c4;
            case 0x2CE3C8u: goto label_2ce3c8;
            case 0x2CE3CCu: goto label_2ce3cc;
            case 0x2CE3D0u: goto label_2ce3d0;
            case 0x2CE3D4u: goto label_2ce3d4;
            case 0x2CE3D8u: goto label_2ce3d8;
            case 0x2CE3DCu: goto label_2ce3dc;
            case 0x2CE3E0u: goto label_2ce3e0;
            case 0x2CE3E4u: goto label_2ce3e4;
            case 0x2CE3E8u: goto label_2ce3e8;
            case 0x2CE3ECu: goto label_2ce3ec;
            case 0x2CE3F0u: goto label_2ce3f0;
            case 0x2CE3F4u: goto label_2ce3f4;
            case 0x2CE3F8u: goto label_2ce3f8;
            case 0x2CE3FCu: goto label_2ce3fc;
            case 0x2CE400u: goto label_2ce400;
            case 0x2CE404u: goto label_2ce404;
            case 0x2CE408u: goto label_2ce408;
            case 0x2CE40Cu: goto label_2ce40c;
            case 0x2CE410u: goto label_2ce410;
            case 0x2CE414u: goto label_2ce414;
            case 0x2CE418u: goto label_2ce418;
            case 0x2CE41Cu: goto label_2ce41c;
            case 0x2CE420u: goto label_2ce420;
            case 0x2CE424u: goto label_2ce424;
            case 0x2CE428u: goto label_2ce428;
            case 0x2CE42Cu: goto label_2ce42c;
            case 0x2CE430u: goto label_2ce430;
            case 0x2CE434u: goto label_2ce434;
            case 0x2CE438u: goto label_2ce438;
            case 0x2CE43Cu: goto label_2ce43c;
            case 0x2CE440u: goto label_2ce440;
            case 0x2CE444u: goto label_2ce444;
            case 0x2CE448u: goto label_2ce448;
            case 0x2CE44Cu: goto label_2ce44c;
            case 0x2CE450u: goto label_2ce450;
            case 0x2CE454u: goto label_2ce454;
            case 0x2CE458u: goto label_2ce458;
            case 0x2CE45Cu: goto label_2ce45c;
            case 0x2CE460u: goto label_2ce460;
            case 0x2CE464u: goto label_2ce464;
            case 0x2CE468u: goto label_2ce468;
            case 0x2CE46Cu: goto label_2ce46c;
            case 0x2CE470u: goto label_2ce470;
            case 0x2CE474u: goto label_2ce474;
            case 0x2CE478u: goto label_2ce478;
            case 0x2CE47Cu: goto label_2ce47c;
            case 0x2CE480u: goto label_2ce480;
            case 0x2CE484u: goto label_2ce484;
            case 0x2CE488u: goto label_2ce488;
            case 0x2CE48Cu: goto label_2ce48c;
            case 0x2CE490u: goto label_2ce490;
            case 0x2CE494u: goto label_2ce494;
            case 0x2CE498u: goto label_2ce498;
            case 0x2CE49Cu: goto label_2ce49c;
            case 0x2CE4A0u: goto label_2ce4a0;
            case 0x2CE4A4u: goto label_2ce4a4;
            case 0x2CE4A8u: goto label_2ce4a8;
            case 0x2CE4ACu: goto label_2ce4ac;
            case 0x2CE4B0u: goto label_2ce4b0;
            case 0x2CE4B4u: goto label_2ce4b4;
            case 0x2CE4B8u: goto label_2ce4b8;
            case 0x2CE4BCu: goto label_2ce4bc;
            case 0x2CE4C0u: goto label_2ce4c0;
            case 0x2CE4C4u: goto label_2ce4c4;
            case 0x2CE4C8u: goto label_2ce4c8;
            case 0x2CE4CCu: goto label_2ce4cc;
            case 0x2CE4D0u: goto label_2ce4d0;
            case 0x2CE4D4u: goto label_2ce4d4;
            case 0x2CE4D8u: goto label_2ce4d8;
            case 0x2CE4DCu: goto label_2ce4dc;
            case 0x2CE4E0u: goto label_2ce4e0;
            case 0x2CE4E4u: goto label_2ce4e4;
            case 0x2CE4E8u: goto label_2ce4e8;
            case 0x2CE4ECu: goto label_2ce4ec;
            case 0x2CE4F0u: goto label_2ce4f0;
            case 0x2CE4F4u: goto label_2ce4f4;
            case 0x2CE4F8u: goto label_2ce4f8;
            case 0x2CE4FCu: goto label_2ce4fc;
            case 0x2CE500u: goto label_2ce500;
            case 0x2CE504u: goto label_2ce504;
            case 0x2CE508u: goto label_2ce508;
            case 0x2CE50Cu: goto label_2ce50c;
            case 0x2CE510u: goto label_2ce510;
            case 0x2CE514u: goto label_2ce514;
            case 0x2CE518u: goto label_2ce518;
            case 0x2CE51Cu: goto label_2ce51c;
            case 0x2CE520u: goto label_2ce520;
            case 0x2CE524u: goto label_2ce524;
            case 0x2CE528u: goto label_2ce528;
            case 0x2CE52Cu: goto label_2ce52c;
            case 0x2CE530u: goto label_2ce530;
            case 0x2CE534u: goto label_2ce534;
            case 0x2CE538u: goto label_2ce538;
            case 0x2CE53Cu: goto label_2ce53c;
            case 0x2CE540u: goto label_2ce540;
            case 0x2CE544u: goto label_2ce544;
            case 0x2CE548u: goto label_2ce548;
            case 0x2CE54Cu: goto label_2ce54c;
            case 0x2CE550u: goto label_2ce550;
            case 0x2CE554u: goto label_2ce554;
            case 0x2CE558u: goto label_2ce558;
            case 0x2CE55Cu: goto label_2ce55c;
            case 0x2CE560u: goto label_2ce560;
            case 0x2CE564u: goto label_2ce564;
            case 0x2CE568u: goto label_2ce568;
            case 0x2CE56Cu: goto label_2ce56c;
            case 0x2CE570u: goto label_2ce570;
            case 0x2CE574u: goto label_2ce574;
            case 0x2CE578u: goto label_2ce578;
            case 0x2CE57Cu: goto label_2ce57c;
            case 0x2CE580u: goto label_2ce580;
            case 0x2CE584u: goto label_2ce584;
            case 0x2CE588u: goto label_2ce588;
            case 0x2CE58Cu: goto label_2ce58c;
            case 0x2CE590u: goto label_2ce590;
            case 0x2CE594u: goto label_2ce594;
            case 0x2CE598u: goto label_2ce598;
            case 0x2CE59Cu: goto label_2ce59c;
            case 0x2CE5A0u: goto label_2ce5a0;
            case 0x2CE5A4u: goto label_2ce5a4;
            case 0x2CE5A8u: goto label_2ce5a8;
            case 0x2CE5ACu: goto label_2ce5ac;
            case 0x2CE5B0u: goto label_2ce5b0;
            case 0x2CE5B4u: goto label_2ce5b4;
            case 0x2CE5B8u: goto label_2ce5b8;
            case 0x2CE5BCu: goto label_2ce5bc;
            case 0x2CE5C0u: goto label_2ce5c0;
            case 0x2CE5C4u: goto label_2ce5c4;
            case 0x2CE5C8u: goto label_2ce5c8;
            case 0x2CE5CCu: goto label_2ce5cc;
            case 0x2CE5D0u: goto label_2ce5d0;
            case 0x2CE5D4u: goto label_2ce5d4;
            case 0x2CE5D8u: goto label_2ce5d8;
            case 0x2CE5DCu: goto label_2ce5dc;
            case 0x2CE5E0u: goto label_2ce5e0;
            case 0x2CE5E4u: goto label_2ce5e4;
            case 0x2CE5E8u: goto label_2ce5e8;
            case 0x2CE5ECu: goto label_2ce5ec;
            case 0x2CE5F0u: goto label_2ce5f0;
            case 0x2CE5F4u: goto label_2ce5f4;
            case 0x2CE5F8u: goto label_2ce5f8;
            case 0x2CE5FCu: goto label_2ce5fc;
            case 0x2CE600u: goto label_2ce600;
            case 0x2CE604u: goto label_2ce604;
            case 0x2CE608u: goto label_2ce608;
            case 0x2CE60Cu: goto label_2ce60c;
            case 0x2CE610u: goto label_2ce610;
            case 0x2CE614u: goto label_2ce614;
            case 0x2CE618u: goto label_2ce618;
            case 0x2CE61Cu: goto label_2ce61c;
            case 0x2CE620u: goto label_2ce620;
            case 0x2CE624u: goto label_2ce624;
            case 0x2CE628u: goto label_2ce628;
            case 0x2CE62Cu: goto label_2ce62c;
            case 0x2CE630u: goto label_2ce630;
            case 0x2CE634u: goto label_2ce634;
            case 0x2CE638u: goto label_2ce638;
            case 0x2CE63Cu: goto label_2ce63c;
            case 0x2CE640u: goto label_2ce640;
            case 0x2CE644u: goto label_2ce644;
            case 0x2CE648u: goto label_2ce648;
            case 0x2CE64Cu: goto label_2ce64c;
            case 0x2CE650u: goto label_2ce650;
            case 0x2CE654u: goto label_2ce654;
            case 0x2CE658u: goto label_2ce658;
            case 0x2CE65Cu: goto label_2ce65c;
            case 0x2CE660u: goto label_2ce660;
            case 0x2CE664u: goto label_2ce664;
            case 0x2CE668u: goto label_2ce668;
            case 0x2CE66Cu: goto label_2ce66c;
            case 0x2CE670u: goto label_2ce670;
            case 0x2CE674u: goto label_2ce674;
            case 0x2CE678u: goto label_2ce678;
            case 0x2CE67Cu: goto label_2ce67c;
            case 0x2CE680u: goto label_2ce680;
            case 0x2CE684u: goto label_2ce684;
            case 0x2CE688u: goto label_2ce688;
            case 0x2CE68Cu: goto label_2ce68c;
            case 0x2CE690u: goto label_2ce690;
            case 0x2CE694u: goto label_2ce694;
            case 0x2CE698u: goto label_2ce698;
            case 0x2CE69Cu: goto label_2ce69c;
            case 0x2CE6A0u: goto label_2ce6a0;
            case 0x2CE6A4u: goto label_2ce6a4;
            case 0x2CE6A8u: goto label_2ce6a8;
            case 0x2CE6ACu: goto label_2ce6ac;
            case 0x2CE6B0u: goto label_2ce6b0;
            case 0x2CE6B4u: goto label_2ce6b4;
            case 0x2CE6B8u: goto label_2ce6b8;
            case 0x2CE6BCu: goto label_2ce6bc;
            case 0x2CE6C0u: goto label_2ce6c0;
            case 0x2CE6C4u: goto label_2ce6c4;
            case 0x2CE6C8u: goto label_2ce6c8;
            case 0x2CE6CCu: goto label_2ce6cc;
            case 0x2CE6D0u: goto label_2ce6d0;
            case 0x2CE6D4u: goto label_2ce6d4;
            case 0x2CE6D8u: goto label_2ce6d8;
            case 0x2CE6DCu: goto label_2ce6dc;
            case 0x2CE6E0u: goto label_2ce6e0;
            case 0x2CE6E4u: goto label_2ce6e4;
            case 0x2CE6E8u: goto label_2ce6e8;
            case 0x2CE6ECu: goto label_2ce6ec;
            case 0x2CE6F0u: goto label_2ce6f0;
            case 0x2CE6F4u: goto label_2ce6f4;
            case 0x2CE6F8u: goto label_2ce6f8;
            case 0x2CE6FCu: goto label_2ce6fc;
            case 0x2CE700u: goto label_2ce700;
            case 0x2CE704u: goto label_2ce704;
            case 0x2CE708u: goto label_2ce708;
            case 0x2CE70Cu: goto label_2ce70c;
            case 0x2CE710u: goto label_2ce710;
            case 0x2CE714u: goto label_2ce714;
            case 0x2CE718u: goto label_2ce718;
            case 0x2CE71Cu: goto label_2ce71c;
            case 0x2CE720u: goto label_2ce720;
            case 0x2CE724u: goto label_2ce724;
            case 0x2CE728u: goto label_2ce728;
            case 0x2CE72Cu: goto label_2ce72c;
            case 0x2CE730u: goto label_2ce730;
            case 0x2CE734u: goto label_2ce734;
            case 0x2CE738u: goto label_2ce738;
            case 0x2CE73Cu: goto label_2ce73c;
            case 0x2CE740u: goto label_2ce740;
            case 0x2CE744u: goto label_2ce744;
            case 0x2CE748u: goto label_2ce748;
            case 0x2CE74Cu: goto label_2ce74c;
            case 0x2CE750u: goto label_2ce750;
            case 0x2CE754u: goto label_2ce754;
            case 0x2CE758u: goto label_2ce758;
            case 0x2CE75Cu: goto label_2ce75c;
            case 0x2CE760u: goto label_2ce760;
            case 0x2CE764u: goto label_2ce764;
            case 0x2CE768u: goto label_2ce768;
            case 0x2CE76Cu: goto label_2ce76c;
            case 0x2CE770u: goto label_2ce770;
            case 0x2CE774u: goto label_2ce774;
            case 0x2CE778u: goto label_2ce778;
            case 0x2CE77Cu: goto label_2ce77c;
            case 0x2CE780u: goto label_2ce780;
            case 0x2CE784u: goto label_2ce784;
            case 0x2CE788u: goto label_2ce788;
            case 0x2CE78Cu: goto label_2ce78c;
            case 0x2CE790u: goto label_2ce790;
            case 0x2CE794u: goto label_2ce794;
            case 0x2CE798u: goto label_2ce798;
            case 0x2CE79Cu: goto label_2ce79c;
            case 0x2CE7A0u: goto label_2ce7a0;
            case 0x2CE7A4u: goto label_2ce7a4;
            case 0x2CE7A8u: goto label_2ce7a8;
            case 0x2CE7ACu: goto label_2ce7ac;
            case 0x2CE7B0u: goto label_2ce7b0;
            case 0x2CE7B4u: goto label_2ce7b4;
            case 0x2CE7B8u: goto label_2ce7b8;
            case 0x2CE7BCu: goto label_2ce7bc;
            case 0x2CE7C0u: goto label_2ce7c0;
            case 0x2CE7C4u: goto label_2ce7c4;
            case 0x2CE7C8u: goto label_2ce7c8;
            case 0x2CE7CCu: goto label_2ce7cc;
            case 0x2CE7D0u: goto label_2ce7d0;
            case 0x2CE7D4u: goto label_2ce7d4;
            case 0x2CE7D8u: goto label_2ce7d8;
            case 0x2CE7DCu: goto label_2ce7dc;
            case 0x2CE7E0u: goto label_2ce7e0;
            case 0x2CE7E4u: goto label_2ce7e4;
            case 0x2CE7E8u: goto label_2ce7e8;
            case 0x2CE7ECu: goto label_2ce7ec;
            case 0x2CE7F0u: goto label_2ce7f0;
            case 0x2CE7F4u: goto label_2ce7f4;
            case 0x2CE7F8u: goto label_2ce7f8;
            case 0x2CE7FCu: goto label_2ce7fc;
            case 0x2CE800u: goto label_2ce800;
            case 0x2CE804u: goto label_2ce804;
            case 0x2CE808u: goto label_2ce808;
            case 0x2CE80Cu: goto label_2ce80c;
            case 0x2CE810u: goto label_2ce810;
            case 0x2CE814u: goto label_2ce814;
            case 0x2CE818u: goto label_2ce818;
            case 0x2CE81Cu: goto label_2ce81c;
            case 0x2CE820u: goto label_2ce820;
            case 0x2CE824u: goto label_2ce824;
            case 0x2CE828u: goto label_2ce828;
            case 0x2CE82Cu: goto label_2ce82c;
            case 0x2CE830u: goto label_2ce830;
            case 0x2CE834u: goto label_2ce834;
            case 0x2CE838u: goto label_2ce838;
            case 0x2CE83Cu: goto label_2ce83c;
            case 0x2CE840u: goto label_2ce840;
            case 0x2CE844u: goto label_2ce844;
            case 0x2CE848u: goto label_2ce848;
            case 0x2CE84Cu: goto label_2ce84c;
            case 0x2CE850u: goto label_2ce850;
            case 0x2CE854u: goto label_2ce854;
            case 0x2CE858u: goto label_2ce858;
            case 0x2CE85Cu: goto label_2ce85c;
            case 0x2CE860u: goto label_2ce860;
            case 0x2CE864u: goto label_2ce864;
            case 0x2CE868u: goto label_2ce868;
            case 0x2CE86Cu: goto label_2ce86c;
            case 0x2CE870u: goto label_2ce870;
            case 0x2CE874u: goto label_2ce874;
            case 0x2CE878u: goto label_2ce878;
            case 0x2CE87Cu: goto label_2ce87c;
            case 0x2CE880u: goto label_2ce880;
            case 0x2CE884u: goto label_2ce884;
            case 0x2CE888u: goto label_2ce888;
            case 0x2CE88Cu: goto label_2ce88c;
            case 0x2CE890u: goto label_2ce890;
            case 0x2CE894u: goto label_2ce894;
            case 0x2CE898u: goto label_2ce898;
            case 0x2CE89Cu: goto label_2ce89c;
            case 0x2CE8A0u: goto label_2ce8a0;
            case 0x2CE8A4u: goto label_2ce8a4;
            case 0x2CE8A8u: goto label_2ce8a8;
            case 0x2CE8ACu: goto label_2ce8ac;
            case 0x2CE8B0u: goto label_2ce8b0;
            case 0x2CE8B4u: goto label_2ce8b4;
            case 0x2CE8B8u: goto label_2ce8b8;
            case 0x2CE8BCu: goto label_2ce8bc;
            case 0x2CE8C0u: goto label_2ce8c0;
            case 0x2CE8C4u: goto label_2ce8c4;
            case 0x2CE8C8u: goto label_2ce8c8;
            case 0x2CE8CCu: goto label_2ce8cc;
            case 0x2CE8D0u: goto label_2ce8d0;
            case 0x2CE8D4u: goto label_2ce8d4;
            case 0x2CE8D8u: goto label_2ce8d8;
            case 0x2CE8DCu: goto label_2ce8dc;
            case 0x2CE8E0u: goto label_2ce8e0;
            case 0x2CE8E4u: goto label_2ce8e4;
            case 0x2CE8E8u: goto label_2ce8e8;
            case 0x2CE8ECu: goto label_2ce8ec;
            case 0x2CE8F0u: goto label_2ce8f0;
            case 0x2CE8F4u: goto label_2ce8f4;
            case 0x2CE8F8u: goto label_2ce8f8;
            case 0x2CE8FCu: goto label_2ce8fc;
            case 0x2CE900u: goto label_2ce900;
            case 0x2CE904u: goto label_2ce904;
            case 0x2CE908u: goto label_2ce908;
            case 0x2CE90Cu: goto label_2ce90c;
            case 0x2CE910u: goto label_2ce910;
            case 0x2CE914u: goto label_2ce914;
            case 0x2CE918u: goto label_2ce918;
            case 0x2CE91Cu: goto label_2ce91c;
            case 0x2CE920u: goto label_2ce920;
            case 0x2CE924u: goto label_2ce924;
            case 0x2CE928u: goto label_2ce928;
            case 0x2CE92Cu: goto label_2ce92c;
            case 0x2CE930u: goto label_2ce930;
            case 0x2CE934u: goto label_2ce934;
            case 0x2CE938u: goto label_2ce938;
            case 0x2CE93Cu: goto label_2ce93c;
            case 0x2CE940u: goto label_2ce940;
            case 0x2CE944u: goto label_2ce944;
            case 0x2CE948u: goto label_2ce948;
            case 0x2CE94Cu: goto label_2ce94c;
            case 0x2CE950u: goto label_2ce950;
            case 0x2CE954u: goto label_2ce954;
            case 0x2CE958u: goto label_2ce958;
            case 0x2CE95Cu: goto label_2ce95c;
            case 0x2CE960u: goto label_2ce960;
            case 0x2CE964u: goto label_2ce964;
            case 0x2CE968u: goto label_2ce968;
            case 0x2CE96Cu: goto label_2ce96c;
            case 0x2CE970u: goto label_2ce970;
            case 0x2CE974u: goto label_2ce974;
            case 0x2CE978u: goto label_2ce978;
            case 0x2CE97Cu: goto label_2ce97c;
            case 0x2CE980u: goto label_2ce980;
            case 0x2CE984u: goto label_2ce984;
            case 0x2CE988u: goto label_2ce988;
            case 0x2CE98Cu: goto label_2ce98c;
            case 0x2CE990u: goto label_2ce990;
            case 0x2CE994u: goto label_2ce994;
            case 0x2CE998u: goto label_2ce998;
            case 0x2CE99Cu: goto label_2ce99c;
            case 0x2CE9A0u: goto label_2ce9a0;
            case 0x2CE9A4u: goto label_2ce9a4;
            case 0x2CE9A8u: goto label_2ce9a8;
            case 0x2CE9ACu: goto label_2ce9ac;
            case 0x2CE9B0u: goto label_2ce9b0;
            case 0x2CE9B4u: goto label_2ce9b4;
            case 0x2CE9B8u: goto label_2ce9b8;
            case 0x2CE9BCu: goto label_2ce9bc;
            case 0x2CE9C0u: goto label_2ce9c0;
            case 0x2CE9C4u: goto label_2ce9c4;
            case 0x2CE9C8u: goto label_2ce9c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CE538u; }
            if (ctx->pc != 0x2CE538u) { return; }
        }
    }
    ctx->pc = 0x2CE538u;
label_2ce538:
    // 0x2ce538: 0x40902d
    ctx->pc = 0x2ce538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce53c:
    // 0x2ce53c: 0x640000e
label_2ce540:
    if (ctx->pc == 0x2CE540u) {
        ctx->pc = 0x2CE540u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE544u;
        goto label_2ce544;
    }
    ctx->pc = 0x2CE53Cu;
    {
        const bool branch_taken_0x2ce53c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2CE540u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ce53c) {
            ctx->pc = 0x2CE578u;
            goto label_2ce578;
        }
    }
    ctx->pc = 0x2CE544u;
label_2ce544:
    // 0x2ce544: 0x8e220064
    ctx->pc = 0x2ce544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_2ce548:
    // 0x2ce548: 0x2c0282d
    ctx->pc = 0x2ce548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ce54c:
    // 0x2ce54c: 0x40f809
label_2ce550:
    if (ctx->pc == 0x2CE550u) {
        ctx->pc = 0x2CE550u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CE554u;
        goto label_2ce554;
    }
    ctx->pc = 0x2CE54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CE554u);
        ctx->pc = 0x2CE550u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CDDF8u: goto label_2cddf8;
            case 0x2CDDFCu: goto label_2cddfc;
            case 0x2CDE00u: goto label_2cde00;
            case 0x2CDE04u: goto label_2cde04;
            case 0x2CDE08u: goto label_2cde08;
            case 0x2CDE0Cu: goto label_2cde0c;
            case 0x2CDE10u: goto label_2cde10;
            case 0x2CDE14u: goto label_2cde14;
            case 0x2CDE18u: goto label_2cde18;
            case 0x2CDE1Cu: goto label_2cde1c;
            case 0x2CDE20u: goto label_2cde20;
            case 0x2CDE24u: goto label_2cde24;
            case 0x2CDE28u: goto label_2cde28;
            case 0x2CDE2Cu: goto label_2cde2c;
            case 0x2CDE30u: goto label_2cde30;
            case 0x2CDE34u: goto label_2cde34;
            case 0x2CDE38u: goto label_2cde38;
            case 0x2CDE3Cu: goto label_2cde3c;
            case 0x2CDE40u: goto label_2cde40;
            case 0x2CDE44u: goto label_2cde44;
            case 0x2CDE48u: goto label_2cde48;
            case 0x2CDE4Cu: goto label_2cde4c;
            case 0x2CDE50u: goto label_2cde50;
            case 0x2CDE54u: goto label_2cde54;
            case 0x2CDE58u: goto label_2cde58;
            case 0x2CDE5Cu: goto label_2cde5c;
            case 0x2CDE60u: goto label_2cde60;
            case 0x2CDE64u: goto label_2cde64;
            case 0x2CDE68u: goto label_2cde68;
            case 0x2CDE6Cu: goto label_2cde6c;
            case 0x2CDE70u: goto label_2cde70;
            case 0x2CDE74u: goto label_2cde74;
            case 0x2CDE78u: goto label_2cde78;
            case 0x2CDE7Cu: goto label_2cde7c;
            case 0x2CDE80u: goto label_2cde80;
            case 0x2CDE84u: goto label_2cde84;
            case 0x2CDE88u: goto label_2cde88;
            case 0x2CDE8Cu: goto label_2cde8c;
            case 0x2CDE90u: goto label_2cde90;
            case 0x2CDE94u: goto label_2cde94;
            case 0x2CDE98u: goto label_2cde98;
            case 0x2CDE9Cu: goto label_2cde9c;
            case 0x2CDEA0u: goto label_2cdea0;
            case 0x2CDEA4u: goto label_2cdea4;
            case 0x2CDEA8u: goto label_2cdea8;
            case 0x2CDEACu: goto label_2cdeac;
            case 0x2CDEB0u: goto label_2cdeb0;
            case 0x2CDEB4u: goto label_2cdeb4;
            case 0x2CDEB8u: goto label_2cdeb8;
            case 0x2CDEBCu: goto label_2cdebc;
            case 0x2CDEC0u: goto label_2cdec0;
            case 0x2CDEC4u: goto label_2cdec4;
            case 0x2CDEC8u: goto label_2cdec8;
            case 0x2CDECCu: goto label_2cdecc;
            case 0x2CDED0u: goto label_2cded0;
            case 0x2CDED4u: goto label_2cded4;
            case 0x2CDED8u: goto label_2cded8;
            case 0x2CDEDCu: goto label_2cdedc;
            case 0x2CDEE0u: goto label_2cdee0;
            case 0x2CDEE4u: goto label_2cdee4;
            case 0x2CDEE8u: goto label_2cdee8;
            case 0x2CDEECu: goto label_2cdeec;
            case 0x2CDEF0u: goto label_2cdef0;
            case 0x2CDEF4u: goto label_2cdef4;
            case 0x2CDEF8u: goto label_2cdef8;
            case 0x2CDEFCu: goto label_2cdefc;
            case 0x2CDF00u: goto label_2cdf00;
            case 0x2CDF04u: goto label_2cdf04;
            case 0x2CDF08u: goto label_2cdf08;
            case 0x2CDF0Cu: goto label_2cdf0c;
            case 0x2CDF10u: goto label_2cdf10;
            case 0x2CDF14u: goto label_2cdf14;
            case 0x2CDF18u: goto label_2cdf18;
            case 0x2CDF1Cu: goto label_2cdf1c;
            case 0x2CDF20u: goto label_2cdf20;
            case 0x2CDF24u: goto label_2cdf24;
            case 0x2CDF28u: goto label_2cdf28;
            case 0x2CDF2Cu: goto label_2cdf2c;
            case 0x2CDF30u: goto label_2cdf30;
            case 0x2CDF34u: goto label_2cdf34;
            case 0x2CDF38u: goto label_2cdf38;
            case 0x2CDF3Cu: goto label_2cdf3c;
            case 0x2CDF40u: goto label_2cdf40;
            case 0x2CDF44u: goto label_2cdf44;
            case 0x2CDF48u: goto label_2cdf48;
            case 0x2CDF4Cu: goto label_2cdf4c;
            case 0x2CDF50u: goto label_2cdf50;
            case 0x2CDF54u: goto label_2cdf54;
            case 0x2CDF58u: goto label_2cdf58;
            case 0x2CDF5Cu: goto label_2cdf5c;
            case 0x2CDF60u: goto label_2cdf60;
            case 0x2CDF64u: goto label_2cdf64;
            case 0x2CDF68u: goto label_2cdf68;
            case 0x2CDF6Cu: goto label_2cdf6c;
            case 0x2CDF70u: goto label_2cdf70;
            case 0x2CDF74u: goto label_2cdf74;
            case 0x2CDF78u: goto label_2cdf78;
            case 0x2CDF7Cu: goto label_2cdf7c;
            case 0x2CDF80u: goto label_2cdf80;
            case 0x2CDF84u: goto label_2cdf84;
            case 0x2CDF88u: goto label_2cdf88;
            case 0x2CDF8Cu: goto label_2cdf8c;
            case 0x2CDF90u: goto label_2cdf90;
            case 0x2CDF94u: goto label_2cdf94;
            case 0x2CDF98u: goto label_2cdf98;
            case 0x2CDF9Cu: goto label_2cdf9c;
            case 0x2CDFA0u: goto label_2cdfa0;
            case 0x2CDFA4u: goto label_2cdfa4;
            case 0x2CDFA8u: goto label_2cdfa8;
            case 0x2CDFACu: goto label_2cdfac;
            case 0x2CDFB0u: goto label_2cdfb0;
            case 0x2CDFB4u: goto label_2cdfb4;
            case 0x2CDFB8u: goto label_2cdfb8;
            case 0x2CDFBCu: goto label_2cdfbc;
            case 0x2CDFC0u: goto label_2cdfc0;
            case 0x2CDFC4u: goto label_2cdfc4;
            case 0x2CDFC8u: goto label_2cdfc8;
            case 0x2CDFCCu: goto label_2cdfcc;
            case 0x2CDFD0u: goto label_2cdfd0;
            case 0x2CDFD4u: goto label_2cdfd4;
            case 0x2CDFD8u: goto label_2cdfd8;
            case 0x2CDFDCu: goto label_2cdfdc;
            case 0x2CDFE0u: goto label_2cdfe0;
            case 0x2CDFE4u: goto label_2cdfe4;
            case 0x2CDFE8u: goto label_2cdfe8;
            case 0x2CDFECu: goto label_2cdfec;
            case 0x2CDFF0u: goto label_2cdff0;
            case 0x2CDFF4u: goto label_2cdff4;
            case 0x2CDFF8u: goto label_2cdff8;
            case 0x2CDFFCu: goto label_2cdffc;
            case 0x2CE000u: goto label_2ce000;
            case 0x2CE004u: goto label_2ce004;
            case 0x2CE008u: goto label_2ce008;
            case 0x2CE00Cu: goto label_2ce00c;
            case 0x2CE010u: goto label_2ce010;
            case 0x2CE014u: goto label_2ce014;
            case 0x2CE018u: goto label_2ce018;
            case 0x2CE01Cu: goto label_2ce01c;
            case 0x2CE020u: goto label_2ce020;
            case 0x2CE024u: goto label_2ce024;
            case 0x2CE028u: goto label_2ce028;
            case 0x2CE02Cu: goto label_2ce02c;
            case 0x2CE030u: goto label_2ce030;
            case 0x2CE034u: goto label_2ce034;
            case 0x2CE038u: goto label_2ce038;
            case 0x2CE03Cu: goto label_2ce03c;
            case 0x2CE040u: goto label_2ce040;
            case 0x2CE044u: goto label_2ce044;
            case 0x2CE048u: goto label_2ce048;
            case 0x2CE04Cu: goto label_2ce04c;
            case 0x2CE050u: goto label_2ce050;
            case 0x2CE054u: goto label_2ce054;
            case 0x2CE058u: goto label_2ce058;
            case 0x2CE05Cu: goto label_2ce05c;
            case 0x2CE060u: goto label_2ce060;
            case 0x2CE064u: goto label_2ce064;
            case 0x2CE068u: goto label_2ce068;
            case 0x2CE06Cu: goto label_2ce06c;
            case 0x2CE070u: goto label_2ce070;
            case 0x2CE074u: goto label_2ce074;
            case 0x2CE078u: goto label_2ce078;
            case 0x2CE07Cu: goto label_2ce07c;
            case 0x2CE080u: goto label_2ce080;
            case 0x2CE084u: goto label_2ce084;
            case 0x2CE088u: goto label_2ce088;
            case 0x2CE08Cu: goto label_2ce08c;
            case 0x2CE090u: goto label_2ce090;
            case 0x2CE094u: goto label_2ce094;
            case 0x2CE098u: goto label_2ce098;
            case 0x2CE09Cu: goto label_2ce09c;
            case 0x2CE0A0u: goto label_2ce0a0;
            case 0x2CE0A4u: goto label_2ce0a4;
            case 0x2CE0A8u: goto label_2ce0a8;
            case 0x2CE0ACu: goto label_2ce0ac;
            case 0x2CE0B0u: goto label_2ce0b0;
            case 0x2CE0B4u: goto label_2ce0b4;
            case 0x2CE0B8u: goto label_2ce0b8;
            case 0x2CE0BCu: goto label_2ce0bc;
            case 0x2CE0C0u: goto label_2ce0c0;
            case 0x2CE0C4u: goto label_2ce0c4;
            case 0x2CE0C8u: goto label_2ce0c8;
            case 0x2CE0CCu: goto label_2ce0cc;
            case 0x2CE0D0u: goto label_2ce0d0;
            case 0x2CE0D4u: goto label_2ce0d4;
            case 0x2CE0D8u: goto label_2ce0d8;
            case 0x2CE0DCu: goto label_2ce0dc;
            case 0x2CE0E0u: goto label_2ce0e0;
            case 0x2CE0E4u: goto label_2ce0e4;
            case 0x2CE0E8u: goto label_2ce0e8;
            case 0x2CE0ECu: goto label_2ce0ec;
            case 0x2CE0F0u: goto label_2ce0f0;
            case 0x2CE0F4u: goto label_2ce0f4;
            case 0x2CE0F8u: goto label_2ce0f8;
            case 0x2CE0FCu: goto label_2ce0fc;
            case 0x2CE100u: goto label_2ce100;
            case 0x2CE104u: goto label_2ce104;
            case 0x2CE108u: goto label_2ce108;
            case 0x2CE10Cu: goto label_2ce10c;
            case 0x2CE110u: goto label_2ce110;
            case 0x2CE114u: goto label_2ce114;
            case 0x2CE118u: goto label_2ce118;
            case 0x2CE11Cu: goto label_2ce11c;
            case 0x2CE120u: goto label_2ce120;
            case 0x2CE124u: goto label_2ce124;
            case 0x2CE128u: goto label_2ce128;
            case 0x2CE12Cu: goto label_2ce12c;
            case 0x2CE130u: goto label_2ce130;
            case 0x2CE134u: goto label_2ce134;
            case 0x2CE138u: goto label_2ce138;
            case 0x2CE13Cu: goto label_2ce13c;
            case 0x2CE140u: goto label_2ce140;
            case 0x2CE144u: goto label_2ce144;
            case 0x2CE148u: goto label_2ce148;
            case 0x2CE14Cu: goto label_2ce14c;
            case 0x2CE150u: goto label_2ce150;
            case 0x2CE154u: goto label_2ce154;
            case 0x2CE158u: goto label_2ce158;
            case 0x2CE15Cu: goto label_2ce15c;
            case 0x2CE160u: goto label_2ce160;
            case 0x2CE164u: goto label_2ce164;
            case 0x2CE168u: goto label_2ce168;
            case 0x2CE16Cu: goto label_2ce16c;
            case 0x2CE170u: goto label_2ce170;
            case 0x2CE174u: goto label_2ce174;
            case 0x2CE178u: goto label_2ce178;
            case 0x2CE17Cu: goto label_2ce17c;
            case 0x2CE180u: goto label_2ce180;
            case 0x2CE184u: goto label_2ce184;
            case 0x2CE188u: goto label_2ce188;
            case 0x2CE18Cu: goto label_2ce18c;
            case 0x2CE190u: goto label_2ce190;
            case 0x2CE194u: goto label_2ce194;
            case 0x2CE198u: goto label_2ce198;
            case 0x2CE19Cu: goto label_2ce19c;
            case 0x2CE1A0u: goto label_2ce1a0;
            case 0x2CE1A4u: goto label_2ce1a4;
            case 0x2CE1A8u: goto label_2ce1a8;
            case 0x2CE1ACu: goto label_2ce1ac;
            case 0x2CE1B0u: goto label_2ce1b0;
            case 0x2CE1B4u: goto label_2ce1b4;
            case 0x2CE1B8u: goto label_2ce1b8;
            case 0x2CE1BCu: goto label_2ce1bc;
            case 0x2CE1C0u: goto label_2ce1c0;
            case 0x2CE1C4u: goto label_2ce1c4;
            case 0x2CE1C8u: goto label_2ce1c8;
            case 0x2CE1CCu: goto label_2ce1cc;
            case 0x2CE1D0u: goto label_2ce1d0;
            case 0x2CE1D4u: goto label_2ce1d4;
            case 0x2CE1D8u: goto label_2ce1d8;
            case 0x2CE1DCu: goto label_2ce1dc;
            case 0x2CE1E0u: goto label_2ce1e0;
            case 0x2CE1E4u: goto label_2ce1e4;
            case 0x2CE1E8u: goto label_2ce1e8;
            case 0x2CE1ECu: goto label_2ce1ec;
            case 0x2CE1F0u: goto label_2ce1f0;
            case 0x2CE1F4u: goto label_2ce1f4;
            case 0x2CE1F8u: goto label_2ce1f8;
            case 0x2CE1FCu: goto label_2ce1fc;
            case 0x2CE200u: goto label_2ce200;
            case 0x2CE204u: goto label_2ce204;
            case 0x2CE208u: goto label_2ce208;
            case 0x2CE20Cu: goto label_2ce20c;
            case 0x2CE210u: goto label_2ce210;
            case 0x2CE214u: goto label_2ce214;
            case 0x2CE218u: goto label_2ce218;
            case 0x2CE21Cu: goto label_2ce21c;
            case 0x2CE220u: goto label_2ce220;
            case 0x2CE224u: goto label_2ce224;
            case 0x2CE228u: goto label_2ce228;
            case 0x2CE22Cu: goto label_2ce22c;
            case 0x2CE230u: goto label_2ce230;
            case 0x2CE234u: goto label_2ce234;
            case 0x2CE238u: goto label_2ce238;
            case 0x2CE23Cu: goto label_2ce23c;
            case 0x2CE240u: goto label_2ce240;
            case 0x2CE244u: goto label_2ce244;
            case 0x2CE248u: goto label_2ce248;
            case 0x2CE24Cu: goto label_2ce24c;
            case 0x2CE250u: goto label_2ce250;
            case 0x2CE254u: goto label_2ce254;
            case 0x2CE258u: goto label_2ce258;
            case 0x2CE25Cu: goto label_2ce25c;
            case 0x2CE260u: goto label_2ce260;
            case 0x2CE264u: goto label_2ce264;
            case 0x2CE268u: goto label_2ce268;
            case 0x2CE26Cu: goto label_2ce26c;
            case 0x2CE270u: goto label_2ce270;
            case 0x2CE274u: goto label_2ce274;
            case 0x2CE278u: goto label_2ce278;
            case 0x2CE27Cu: goto label_2ce27c;
            case 0x2CE280u: goto label_2ce280;
            case 0x2CE284u: goto label_2ce284;
            case 0x2CE288u: goto label_2ce288;
            case 0x2CE28Cu: goto label_2ce28c;
            case 0x2CE290u: goto label_2ce290;
            case 0x2CE294u: goto label_2ce294;
            case 0x2CE298u: goto label_2ce298;
            case 0x2CE29Cu: goto label_2ce29c;
            case 0x2CE2A0u: goto label_2ce2a0;
            case 0x2CE2A4u: goto label_2ce2a4;
            case 0x2CE2A8u: goto label_2ce2a8;
            case 0x2CE2ACu: goto label_2ce2ac;
            case 0x2CE2B0u: goto label_2ce2b0;
            case 0x2CE2B4u: goto label_2ce2b4;
            case 0x2CE2B8u: goto label_2ce2b8;
            case 0x2CE2BCu: goto label_2ce2bc;
            case 0x2CE2C0u: goto label_2ce2c0;
            case 0x2CE2C4u: goto label_2ce2c4;
            case 0x2CE2C8u: goto label_2ce2c8;
            case 0x2CE2CCu: goto label_2ce2cc;
            case 0x2CE2D0u: goto label_2ce2d0;
            case 0x2CE2D4u: goto label_2ce2d4;
            case 0x2CE2D8u: goto label_2ce2d8;
            case 0x2CE2DCu: goto label_2ce2dc;
            case 0x2CE2E0u: goto label_2ce2e0;
            case 0x2CE2E4u: goto label_2ce2e4;
            case 0x2CE2E8u: goto label_2ce2e8;
            case 0x2CE2ECu: goto label_2ce2ec;
            case 0x2CE2F0u: goto label_2ce2f0;
            case 0x2CE2F4u: goto label_2ce2f4;
            case 0x2CE2F8u: goto label_2ce2f8;
            case 0x2CE2FCu: goto label_2ce2fc;
            case 0x2CE300u: goto label_2ce300;
            case 0x2CE304u: goto label_2ce304;
            case 0x2CE308u: goto label_2ce308;
            case 0x2CE30Cu: goto label_2ce30c;
            case 0x2CE310u: goto label_2ce310;
            case 0x2CE314u: goto label_2ce314;
            case 0x2CE318u: goto label_2ce318;
            case 0x2CE31Cu: goto label_2ce31c;
            case 0x2CE320u: goto label_2ce320;
            case 0x2CE324u: goto label_2ce324;
            case 0x2CE328u: goto label_2ce328;
            case 0x2CE32Cu: goto label_2ce32c;
            case 0x2CE330u: goto label_2ce330;
            case 0x2CE334u: goto label_2ce334;
            case 0x2CE338u: goto label_2ce338;
            case 0x2CE33Cu: goto label_2ce33c;
            case 0x2CE340u: goto label_2ce340;
            case 0x2CE344u: goto label_2ce344;
            case 0x2CE348u: goto label_2ce348;
            case 0x2CE34Cu: goto label_2ce34c;
            case 0x2CE350u: goto label_2ce350;
            case 0x2CE354u: goto label_2ce354;
            case 0x2CE358u: goto label_2ce358;
            case 0x2CE35Cu: goto label_2ce35c;
            case 0x2CE360u: goto label_2ce360;
            case 0x2CE364u: goto label_2ce364;
            case 0x2CE368u: goto label_2ce368;
            case 0x2CE36Cu: goto label_2ce36c;
            case 0x2CE370u: goto label_2ce370;
            case 0x2CE374u: goto label_2ce374;
            case 0x2CE378u: goto label_2ce378;
            case 0x2CE37Cu: goto label_2ce37c;
            case 0x2CE380u: goto label_2ce380;
            case 0x2CE384u: goto label_2ce384;
            case 0x2CE388u: goto label_2ce388;
            case 0x2CE38Cu: goto label_2ce38c;
            case 0x2CE390u: goto label_2ce390;
            case 0x2CE394u: goto label_2ce394;
            case 0x2CE398u: goto label_2ce398;
            case 0x2CE39Cu: goto label_2ce39c;
            case 0x2CE3A0u: goto label_2ce3a0;
            case 0x2CE3A4u: goto label_2ce3a4;
            case 0x2CE3A8u: goto label_2ce3a8;
            case 0x2CE3ACu: goto label_2ce3ac;
            case 0x2CE3B0u: goto label_2ce3b0;
            case 0x2CE3B4u: goto label_2ce3b4;
            case 0x2CE3B8u: goto label_2ce3b8;
            case 0x2CE3BCu: goto label_2ce3bc;
            case 0x2CE3C0u: goto label_2ce3c0;
            case 0x2CE3C4u: goto label_2ce3c4;
            case 0x2CE3C8u: goto label_2ce3c8;
            case 0x2CE3CCu: goto label_2ce3cc;
            case 0x2CE3D0u: goto label_2ce3d0;
            case 0x2CE3D4u: goto label_2ce3d4;
            case 0x2CE3D8u: goto label_2ce3d8;
            case 0x2CE3DCu: goto label_2ce3dc;
            case 0x2CE3E0u: goto label_2ce3e0;
            case 0x2CE3E4u: goto label_2ce3e4;
            case 0x2CE3E8u: goto label_2ce3e8;
            case 0x2CE3ECu: goto label_2ce3ec;
            case 0x2CE3F0u: goto label_2ce3f0;
            case 0x2CE3F4u: goto label_2ce3f4;
            case 0x2CE3F8u: goto label_2ce3f8;
            case 0x2CE3FCu: goto label_2ce3fc;
            case 0x2CE400u: goto label_2ce400;
            case 0x2CE404u: goto label_2ce404;
            case 0x2CE408u: goto label_2ce408;
            case 0x2CE40Cu: goto label_2ce40c;
            case 0x2CE410u: goto label_2ce410;
            case 0x2CE414u: goto label_2ce414;
            case 0x2CE418u: goto label_2ce418;
            case 0x2CE41Cu: goto label_2ce41c;
            case 0x2CE420u: goto label_2ce420;
            case 0x2CE424u: goto label_2ce424;
            case 0x2CE428u: goto label_2ce428;
            case 0x2CE42Cu: goto label_2ce42c;
            case 0x2CE430u: goto label_2ce430;
            case 0x2CE434u: goto label_2ce434;
            case 0x2CE438u: goto label_2ce438;
            case 0x2CE43Cu: goto label_2ce43c;
            case 0x2CE440u: goto label_2ce440;
            case 0x2CE444u: goto label_2ce444;
            case 0x2CE448u: goto label_2ce448;
            case 0x2CE44Cu: goto label_2ce44c;
            case 0x2CE450u: goto label_2ce450;
            case 0x2CE454u: goto label_2ce454;
            case 0x2CE458u: goto label_2ce458;
            case 0x2CE45Cu: goto label_2ce45c;
            case 0x2CE460u: goto label_2ce460;
            case 0x2CE464u: goto label_2ce464;
            case 0x2CE468u: goto label_2ce468;
            case 0x2CE46Cu: goto label_2ce46c;
            case 0x2CE470u: goto label_2ce470;
            case 0x2CE474u: goto label_2ce474;
            case 0x2CE478u: goto label_2ce478;
            case 0x2CE47Cu: goto label_2ce47c;
            case 0x2CE480u: goto label_2ce480;
            case 0x2CE484u: goto label_2ce484;
            case 0x2CE488u: goto label_2ce488;
            case 0x2CE48Cu: goto label_2ce48c;
            case 0x2CE490u: goto label_2ce490;
            case 0x2CE494u: goto label_2ce494;
            case 0x2CE498u: goto label_2ce498;
            case 0x2CE49Cu: goto label_2ce49c;
            case 0x2CE4A0u: goto label_2ce4a0;
            case 0x2CE4A4u: goto label_2ce4a4;
            case 0x2CE4A8u: goto label_2ce4a8;
            case 0x2CE4ACu: goto label_2ce4ac;
            case 0x2CE4B0u: goto label_2ce4b0;
            case 0x2CE4B4u: goto label_2ce4b4;
            case 0x2CE4B8u: goto label_2ce4b8;
            case 0x2CE4BCu: goto label_2ce4bc;
            case 0x2CE4C0u: goto label_2ce4c0;
            case 0x2CE4C4u: goto label_2ce4c4;
            case 0x2CE4C8u: goto label_2ce4c8;
            case 0x2CE4CCu: goto label_2ce4cc;
            case 0x2CE4D0u: goto label_2ce4d0;
            case 0x2CE4D4u: goto label_2ce4d4;
            case 0x2CE4D8u: goto label_2ce4d8;
            case 0x2CE4DCu: goto label_2ce4dc;
            case 0x2CE4E0u: goto label_2ce4e0;
            case 0x2CE4E4u: goto label_2ce4e4;
            case 0x2CE4E8u: goto label_2ce4e8;
            case 0x2CE4ECu: goto label_2ce4ec;
            case 0x2CE4F0u: goto label_2ce4f0;
            case 0x2CE4F4u: goto label_2ce4f4;
            case 0x2CE4F8u: goto label_2ce4f8;
            case 0x2CE4FCu: goto label_2ce4fc;
            case 0x2CE500u: goto label_2ce500;
            case 0x2CE504u: goto label_2ce504;
            case 0x2CE508u: goto label_2ce508;
            case 0x2CE50Cu: goto label_2ce50c;
            case 0x2CE510u: goto label_2ce510;
            case 0x2CE514u: goto label_2ce514;
            case 0x2CE518u: goto label_2ce518;
            case 0x2CE51Cu: goto label_2ce51c;
            case 0x2CE520u: goto label_2ce520;
            case 0x2CE524u: goto label_2ce524;
            case 0x2CE528u: goto label_2ce528;
            case 0x2CE52Cu: goto label_2ce52c;
            case 0x2CE530u: goto label_2ce530;
            case 0x2CE534u: goto label_2ce534;
            case 0x2CE538u: goto label_2ce538;
            case 0x2CE53Cu: goto label_2ce53c;
            case 0x2CE540u: goto label_2ce540;
            case 0x2CE544u: goto label_2ce544;
            case 0x2CE548u: goto label_2ce548;
            case 0x2CE54Cu: goto label_2ce54c;
            case 0x2CE550u: goto label_2ce550;
            case 0x2CE554u: goto label_2ce554;
            case 0x2CE558u: goto label_2ce558;
            case 0x2CE55Cu: goto label_2ce55c;
            case 0x2CE560u: goto label_2ce560;
            case 0x2CE564u: goto label_2ce564;
            case 0x2CE568u: goto label_2ce568;
            case 0x2CE56Cu: goto label_2ce56c;
            case 0x2CE570u: goto label_2ce570;
            case 0x2CE574u: goto label_2ce574;
            case 0x2CE578u: goto label_2ce578;
            case 0x2CE57Cu: goto label_2ce57c;
            case 0x2CE580u: goto label_2ce580;
            case 0x2CE584u: goto label_2ce584;
            case 0x2CE588u: goto label_2ce588;
            case 0x2CE58Cu: goto label_2ce58c;
            case 0x2CE590u: goto label_2ce590;
            case 0x2CE594u: goto label_2ce594;
            case 0x2CE598u: goto label_2ce598;
            case 0x2CE59Cu: goto label_2ce59c;
            case 0x2CE5A0u: goto label_2ce5a0;
            case 0x2CE5A4u: goto label_2ce5a4;
            case 0x2CE5A8u: goto label_2ce5a8;
            case 0x2CE5ACu: goto label_2ce5ac;
            case 0x2CE5B0u: goto label_2ce5b0;
            case 0x2CE5B4u: goto label_2ce5b4;
            case 0x2CE5B8u: goto label_2ce5b8;
            case 0x2CE5BCu: goto label_2ce5bc;
            case 0x2CE5C0u: goto label_2ce5c0;
            case 0x2CE5C4u: goto label_2ce5c4;
            case 0x2CE5C8u: goto label_2ce5c8;
            case 0x2CE5CCu: goto label_2ce5cc;
            case 0x2CE5D0u: goto label_2ce5d0;
            case 0x2CE5D4u: goto label_2ce5d4;
            case 0x2CE5D8u: goto label_2ce5d8;
            case 0x2CE5DCu: goto label_2ce5dc;
            case 0x2CE5E0u: goto label_2ce5e0;
            case 0x2CE5E4u: goto label_2ce5e4;
            case 0x2CE5E8u: goto label_2ce5e8;
            case 0x2CE5ECu: goto label_2ce5ec;
            case 0x2CE5F0u: goto label_2ce5f0;
            case 0x2CE5F4u: goto label_2ce5f4;
            case 0x2CE5F8u: goto label_2ce5f8;
            case 0x2CE5FCu: goto label_2ce5fc;
            case 0x2CE600u: goto label_2ce600;
            case 0x2CE604u: goto label_2ce604;
            case 0x2CE608u: goto label_2ce608;
            case 0x2CE60Cu: goto label_2ce60c;
            case 0x2CE610u: goto label_2ce610;
            case 0x2CE614u: goto label_2ce614;
            case 0x2CE618u: goto label_2ce618;
            case 0x2CE61Cu: goto label_2ce61c;
            case 0x2CE620u: goto label_2ce620;
            case 0x2CE624u: goto label_2ce624;
            case 0x2CE628u: goto label_2ce628;
            case 0x2CE62Cu: goto label_2ce62c;
            case 0x2CE630u: goto label_2ce630;
            case 0x2CE634u: goto label_2ce634;
            case 0x2CE638u: goto label_2ce638;
            case 0x2CE63Cu: goto label_2ce63c;
            case 0x2CE640u: goto label_2ce640;
            case 0x2CE644u: goto label_2ce644;
            case 0x2CE648u: goto label_2ce648;
            case 0x2CE64Cu: goto label_2ce64c;
            case 0x2CE650u: goto label_2ce650;
            case 0x2CE654u: goto label_2ce654;
            case 0x2CE658u: goto label_2ce658;
            case 0x2CE65Cu: goto label_2ce65c;
            case 0x2CE660u: goto label_2ce660;
            case 0x2CE664u: goto label_2ce664;
            case 0x2CE668u: goto label_2ce668;
            case 0x2CE66Cu: goto label_2ce66c;
            case 0x2CE670u: goto label_2ce670;
            case 0x2CE674u: goto label_2ce674;
            case 0x2CE678u: goto label_2ce678;
            case 0x2CE67Cu: goto label_2ce67c;
            case 0x2CE680u: goto label_2ce680;
            case 0x2CE684u: goto label_2ce684;
            case 0x2CE688u: goto label_2ce688;
            case 0x2CE68Cu: goto label_2ce68c;
            case 0x2CE690u: goto label_2ce690;
            case 0x2CE694u: goto label_2ce694;
            case 0x2CE698u: goto label_2ce698;
            case 0x2CE69Cu: goto label_2ce69c;
            case 0x2CE6A0u: goto label_2ce6a0;
            case 0x2CE6A4u: goto label_2ce6a4;
            case 0x2CE6A8u: goto label_2ce6a8;
            case 0x2CE6ACu: goto label_2ce6ac;
            case 0x2CE6B0u: goto label_2ce6b0;
            case 0x2CE6B4u: goto label_2ce6b4;
            case 0x2CE6B8u: goto label_2ce6b8;
            case 0x2CE6BCu: goto label_2ce6bc;
            case 0x2CE6C0u: goto label_2ce6c0;
            case 0x2CE6C4u: goto label_2ce6c4;
            case 0x2CE6C8u: goto label_2ce6c8;
            case 0x2CE6CCu: goto label_2ce6cc;
            case 0x2CE6D0u: goto label_2ce6d0;
            case 0x2CE6D4u: goto label_2ce6d4;
            case 0x2CE6D8u: goto label_2ce6d8;
            case 0x2CE6DCu: goto label_2ce6dc;
            case 0x2CE6E0u: goto label_2ce6e0;
            case 0x2CE6E4u: goto label_2ce6e4;
            case 0x2CE6E8u: goto label_2ce6e8;
            case 0x2CE6ECu: goto label_2ce6ec;
            case 0x2CE6F0u: goto label_2ce6f0;
            case 0x2CE6F4u: goto label_2ce6f4;
            case 0x2CE6F8u: goto label_2ce6f8;
            case 0x2CE6FCu: goto label_2ce6fc;
            case 0x2CE700u: goto label_2ce700;
            case 0x2CE704u: goto label_2ce704;
            case 0x2CE708u: goto label_2ce708;
            case 0x2CE70Cu: goto label_2ce70c;
            case 0x2CE710u: goto label_2ce710;
            case 0x2CE714u: goto label_2ce714;
            case 0x2CE718u: goto label_2ce718;
            case 0x2CE71Cu: goto label_2ce71c;
            case 0x2CE720u: goto label_2ce720;
            case 0x2CE724u: goto label_2ce724;
            case 0x2CE728u: goto label_2ce728;
            case 0x2CE72Cu: goto label_2ce72c;
            case 0x2CE730u: goto label_2ce730;
            case 0x2CE734u: goto label_2ce734;
            case 0x2CE738u: goto label_2ce738;
            case 0x2CE73Cu: goto label_2ce73c;
            case 0x2CE740u: goto label_2ce740;
            case 0x2CE744u: goto label_2ce744;
            case 0x2CE748u: goto label_2ce748;
            case 0x2CE74Cu: goto label_2ce74c;
            case 0x2CE750u: goto label_2ce750;
            case 0x2CE754u: goto label_2ce754;
            case 0x2CE758u: goto label_2ce758;
            case 0x2CE75Cu: goto label_2ce75c;
            case 0x2CE760u: goto label_2ce760;
            case 0x2CE764u: goto label_2ce764;
            case 0x2CE768u: goto label_2ce768;
            case 0x2CE76Cu: goto label_2ce76c;
            case 0x2CE770u: goto label_2ce770;
            case 0x2CE774u: goto label_2ce774;
            case 0x2CE778u: goto label_2ce778;
            case 0x2CE77Cu: goto label_2ce77c;
            case 0x2CE780u: goto label_2ce780;
            case 0x2CE784u: goto label_2ce784;
            case 0x2CE788u: goto label_2ce788;
            case 0x2CE78Cu: goto label_2ce78c;
            case 0x2CE790u: goto label_2ce790;
            case 0x2CE794u: goto label_2ce794;
            case 0x2CE798u: goto label_2ce798;
            case 0x2CE79Cu: goto label_2ce79c;
            case 0x2CE7A0u: goto label_2ce7a0;
            case 0x2CE7A4u: goto label_2ce7a4;
            case 0x2CE7A8u: goto label_2ce7a8;
            case 0x2CE7ACu: goto label_2ce7ac;
            case 0x2CE7B0u: goto label_2ce7b0;
            case 0x2CE7B4u: goto label_2ce7b4;
            case 0x2CE7B8u: goto label_2ce7b8;
            case 0x2CE7BCu: goto label_2ce7bc;
            case 0x2CE7C0u: goto label_2ce7c0;
            case 0x2CE7C4u: goto label_2ce7c4;
            case 0x2CE7C8u: goto label_2ce7c8;
            case 0x2CE7CCu: goto label_2ce7cc;
            case 0x2CE7D0u: goto label_2ce7d0;
            case 0x2CE7D4u: goto label_2ce7d4;
            case 0x2CE7D8u: goto label_2ce7d8;
            case 0x2CE7DCu: goto label_2ce7dc;
            case 0x2CE7E0u: goto label_2ce7e0;
            case 0x2CE7E4u: goto label_2ce7e4;
            case 0x2CE7E8u: goto label_2ce7e8;
            case 0x2CE7ECu: goto label_2ce7ec;
            case 0x2CE7F0u: goto label_2ce7f0;
            case 0x2CE7F4u: goto label_2ce7f4;
            case 0x2CE7F8u: goto label_2ce7f8;
            case 0x2CE7FCu: goto label_2ce7fc;
            case 0x2CE800u: goto label_2ce800;
            case 0x2CE804u: goto label_2ce804;
            case 0x2CE808u: goto label_2ce808;
            case 0x2CE80Cu: goto label_2ce80c;
            case 0x2CE810u: goto label_2ce810;
            case 0x2CE814u: goto label_2ce814;
            case 0x2CE818u: goto label_2ce818;
            case 0x2CE81Cu: goto label_2ce81c;
            case 0x2CE820u: goto label_2ce820;
            case 0x2CE824u: goto label_2ce824;
            case 0x2CE828u: goto label_2ce828;
            case 0x2CE82Cu: goto label_2ce82c;
            case 0x2CE830u: goto label_2ce830;
            case 0x2CE834u: goto label_2ce834;
            case 0x2CE838u: goto label_2ce838;
            case 0x2CE83Cu: goto label_2ce83c;
            case 0x2CE840u: goto label_2ce840;
            case 0x2CE844u: goto label_2ce844;
            case 0x2CE848u: goto label_2ce848;
            case 0x2CE84Cu: goto label_2ce84c;
            case 0x2CE850u: goto label_2ce850;
            case 0x2CE854u: goto label_2ce854;
            case 0x2CE858u: goto label_2ce858;
            case 0x2CE85Cu: goto label_2ce85c;
            case 0x2CE860u: goto label_2ce860;
            case 0x2CE864u: goto label_2ce864;
            case 0x2CE868u: goto label_2ce868;
            case 0x2CE86Cu: goto label_2ce86c;
            case 0x2CE870u: goto label_2ce870;
            case 0x2CE874u: goto label_2ce874;
            case 0x2CE878u: goto label_2ce878;
            case 0x2CE87Cu: goto label_2ce87c;
            case 0x2CE880u: goto label_2ce880;
            case 0x2CE884u: goto label_2ce884;
            case 0x2CE888u: goto label_2ce888;
            case 0x2CE88Cu: goto label_2ce88c;
            case 0x2CE890u: goto label_2ce890;
            case 0x2CE894u: goto label_2ce894;
            case 0x2CE898u: goto label_2ce898;
            case 0x2CE89Cu: goto label_2ce89c;
            case 0x2CE8A0u: goto label_2ce8a0;
            case 0x2CE8A4u: goto label_2ce8a4;
            case 0x2CE8A8u: goto label_2ce8a8;
            case 0x2CE8ACu: goto label_2ce8ac;
            case 0x2CE8B0u: goto label_2ce8b0;
            case 0x2CE8B4u: goto label_2ce8b4;
            case 0x2CE8B8u: goto label_2ce8b8;
            case 0x2CE8BCu: goto label_2ce8bc;
            case 0x2CE8C0u: goto label_2ce8c0;
            case 0x2CE8C4u: goto label_2ce8c4;
            case 0x2CE8C8u: goto label_2ce8c8;
            case 0x2CE8CCu: goto label_2ce8cc;
            case 0x2CE8D0u: goto label_2ce8d0;
            case 0x2CE8D4u: goto label_2ce8d4;
            case 0x2CE8D8u: goto label_2ce8d8;
            case 0x2CE8DCu: goto label_2ce8dc;
            case 0x2CE8E0u: goto label_2ce8e0;
            case 0x2CE8E4u: goto label_2ce8e4;
            case 0x2CE8E8u: goto label_2ce8e8;
            case 0x2CE8ECu: goto label_2ce8ec;
            case 0x2CE8F0u: goto label_2ce8f0;
            case 0x2CE8F4u: goto label_2ce8f4;
            case 0x2CE8F8u: goto label_2ce8f8;
            case 0x2CE8FCu: goto label_2ce8fc;
            case 0x2CE900u: goto label_2ce900;
            case 0x2CE904u: goto label_2ce904;
            case 0x2CE908u: goto label_2ce908;
            case 0x2CE90Cu: goto label_2ce90c;
            case 0x2CE910u: goto label_2ce910;
            case 0x2CE914u: goto label_2ce914;
            case 0x2CE918u: goto label_2ce918;
            case 0x2CE91Cu: goto label_2ce91c;
            case 0x2CE920u: goto label_2ce920;
            case 0x2CE924u: goto label_2ce924;
            case 0x2CE928u: goto label_2ce928;
            case 0x2CE92Cu: goto label_2ce92c;
            case 0x2CE930u: goto label_2ce930;
            case 0x2CE934u: goto label_2ce934;
            case 0x2CE938u: goto label_2ce938;
            case 0x2CE93Cu: goto label_2ce93c;
            case 0x2CE940u: goto label_2ce940;
            case 0x2CE944u: goto label_2ce944;
            case 0x2CE948u: goto label_2ce948;
            case 0x2CE94Cu: goto label_2ce94c;
            case 0x2CE950u: goto label_2ce950;
            case 0x2CE954u: goto label_2ce954;
            case 0x2CE958u: goto label_2ce958;
            case 0x2CE95Cu: goto label_2ce95c;
            case 0x2CE960u: goto label_2ce960;
            case 0x2CE964u: goto label_2ce964;
            case 0x2CE968u: goto label_2ce968;
            case 0x2CE96Cu: goto label_2ce96c;
            case 0x2CE970u: goto label_2ce970;
            case 0x2CE974u: goto label_2ce974;
            case 0x2CE978u: goto label_2ce978;
            case 0x2CE97Cu: goto label_2ce97c;
            case 0x2CE980u: goto label_2ce980;
            case 0x2CE984u: goto label_2ce984;
            case 0x2CE988u: goto label_2ce988;
            case 0x2CE98Cu: goto label_2ce98c;
            case 0x2CE990u: goto label_2ce990;
            case 0x2CE994u: goto label_2ce994;
            case 0x2CE998u: goto label_2ce998;
            case 0x2CE99Cu: goto label_2ce99c;
            case 0x2CE9A0u: goto label_2ce9a0;
            case 0x2CE9A4u: goto label_2ce9a4;
            case 0x2CE9A8u: goto label_2ce9a8;
            case 0x2CE9ACu: goto label_2ce9ac;
            case 0x2CE9B0u: goto label_2ce9b0;
            case 0x2CE9B4u: goto label_2ce9b4;
            case 0x2CE9B8u: goto label_2ce9b8;
            case 0x2CE9BCu: goto label_2ce9bc;
            case 0x2CE9C0u: goto label_2ce9c0;
            case 0x2CE9C4u: goto label_2ce9c4;
            case 0x2CE9C8u: goto label_2ce9c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CE554u; }
            if (ctx->pc != 0x2CE554u) { return; }
        }
    }
    ctx->pc = 0x2CE554u;
label_2ce554:
    // 0x2ce554: 0x40302d
    ctx->pc = 0x2ce554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce558:
    // 0x2ce558: 0x4c1ffdf
label_2ce55c:
    if (ctx->pc == 0x2CE55Cu) {
        ctx->pc = 0x2CE55Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->pc = 0x2CE560u;
        goto label_2ce560;
    }
    ctx->pc = 0x2CE558u;
    {
        const bool branch_taken_0x2ce558 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2CE55Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 120)));
        if (branch_taken_0x2ce558) {
            ctx->pc = 0x2CE4D8u;
            goto label_2ce4d8;
        }
    }
    ctx->pc = 0x2CE560u;
label_2ce560:
    // 0x2ce560: 0x8e230018
    ctx->pc = 0x2ce560u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2ce564:
    // 0x2ce564: 0x10600004
label_2ce568:
    if (ctx->pc == 0x2CE568u) {
        ctx->pc = 0x2CE568u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->pc = 0x2CE56Cu;
        goto label_2ce56c;
    }
    ctx->pc = 0x2CE564u;
    {
        const bool branch_taken_0x2ce564 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE568u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        if (branch_taken_0x2ce564) {
            ctx->pc = 0x2CE578u;
            goto label_2ce578;
        }
    }
    ctx->pc = 0x2CE56Cu;
label_2ce56c:
    // 0x2ce56c: 0x90620000
    ctx->pc = 0x2ce56cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2ce570:
    // 0x2ce570: 0x2442ffff
    ctx->pc = 0x2ce570u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ce574:
    // 0x2ce574: 0xa0620000
    ctx->pc = 0x2ce574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ce578:
    // 0x2ce578: 0x44800000
    ctx->pc = 0x2ce578u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2ce57c:
    // 0x2ce57c: 0x46140034
    ctx->pc = 0x2ce57cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce580:
    // 0x2ce580: 0x0
    ctx->pc = 0x2ce580u;
    // NOP
label_2ce584:
    // 0x2ce584: 0x45020002
label_2ce588:
    if (ctx->pc == 0x2CE588u) {
        ctx->pc = 0x2CE588u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->pc = 0x2CE58Cu;
        goto label_2ce58c;
    }
    ctx->pc = 0x2CE584u;
    {
        const bool branch_taken_0x2ce584 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce584) {
            ctx->pc = 0x2CE588u;
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
            ctx->pc = 0x2CE590u;
            goto label_2ce590;
        }
    }
    ctx->pc = 0x2CE58Cu;
label_2ce58c:
    // 0x2ce58c: 0xe620007c
    ctx->pc = 0x2ce58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_2ce590:
    // 0x2ce590: 0x4615a032
    ctx->pc = 0x2ce590u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce594:
    // 0x2ce594: 0x0
    ctx->pc = 0x2ce594u;
    // NOP
label_2ce598:
    // 0x2ce598: 0x4500ff7f
label_2ce59c:
    if (ctx->pc == 0x2CE59Cu) {
        ctx->pc = 0x2CE59Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->pc = 0x2CE5A0u;
        goto label_2ce5a0;
    }
    ctx->pc = 0x2CE598u;
    {
        const bool branch_taken_0x2ce598 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE59Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 100)));
        if (branch_taken_0x2ce598) {
            ctx->pc = 0x2CE398u;
            goto label_2ce398;
        }
    }
    ctx->pc = 0x2CE5A0u;
label_2ce5a0:
    // 0x2ce5a0: 0x9622007a
    ctx->pc = 0x2ce5a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
label_2ce5a4:
    // 0x2ce5a4: 0x461021
    ctx->pc = 0x2ce5a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2ce5a8:
    // 0x2ce5a8: 0xa622007a
    ctx->pc = 0x2ce5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 122), (uint16_t)GPR_U32(ctx, 2));
label_2ce5ac:
    // 0x2ce5ac: 0xae350070
    ctx->pc = 0x2ce5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 21));
label_2ce5b0:
    // 0x2ce5b0: 0x3c10ffff
    ctx->pc = 0x2ce5b0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)65535 << 16));
label_2ce5b4:
    // 0x2ce5b4: 0x3610ffff
    ctx->pc = 0x2ce5b4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 65535));
label_2ce5b8:
    // 0x2ce5b8: 0xafa00084
    ctx->pc = 0x2ce5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_2ce5bc:
    // 0x2ce5bc: 0x92220060
    ctx->pc = 0x2ce5bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
label_2ce5c0:
    // 0x2ce5c0: 0x4482a800
    ctx->pc = 0x2ce5c0u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 2);
label_2ce5c4:
    // 0x2ce5c4: 0x4680ad60
    ctx->pc = 0x2ce5c4u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
label_2ce5c8:
    // 0x2ce5c8: 0x9622007a
    ctx->pc = 0x2ce5c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
label_2ce5cc:
    // 0x2ce5cc: 0x4482a000
    ctx->pc = 0x2ce5ccu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
label_2ce5d0:
    // 0x2ce5d0: 0x4680a520
    ctx->pc = 0x2ce5d0u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
label_2ce5d4:
    // 0x2ce5d4: 0x8e270074
    ctx->pc = 0x2ce5d4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2ce5d8:
    // 0x2ce5d8: 0xafa70068
    ctx->pc = 0x2ce5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
label_2ce5dc:
    // 0x2ce5dc: 0x26b6fffe
    ctx->pc = 0x2ce5dcu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 21), 4294967294));
label_2ce5e0:
    // 0x2ce5e0: 0xf5182b
    ctx->pc = 0x2ce5e0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_2ce5e4:
    // 0x2ce5e4: 0x26e2fffe
    ctx->pc = 0x2ce5e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967294));
label_2ce5e8:
    // 0x2ce5e8: 0x40a02d
    ctx->pc = 0x2ce5e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce5ec:
    // 0x2ce5ec: 0x2c3a00a
    ctx->pc = 0x2ce5ecu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 22));
label_2ce5f0:
    // 0x2ce5f0: 0x4615a034
    ctx->pc = 0x2ce5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce5f4:
    // 0x2ce5f4: 0x0
    ctx->pc = 0x2ce5f4u;
    // NOP
label_2ce5f8:
    // 0x2ce5f8: 0x45000032
label_2ce5fc:
    if (ctx->pc == 0x2CE5FCu) {
        ctx->pc = 0x2CE5FCu;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->pc = 0x2CE600u;
        goto label_2ce600;
    }
    ctx->pc = 0x2CE5F8u;
    {
        const bool branch_taken_0x2ce5f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE5FCu;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        if (branch_taken_0x2ce5f8) {
            ctx->pc = 0x2CE6C4u;
            goto label_2ce6c4;
        }
    }
    ctx->pc = 0x2CE600u;
label_2ce600:
    // 0x2ce600: 0x27a40050
    ctx->pc = 0x2ce600u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
label_2ce604:
    // 0x2ce604: 0x26250120
    ctx->pc = 0x2ce604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 288));
label_2ce608:
    // 0x2ce608: 0xafa0007c
    ctx->pc = 0x2ce608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_2ce60c:
    // 0x2ce60c: 0x27a70040
    ctx->pc = 0x2ce60cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 64));
label_2ce610:
    // 0x2ce610: 0x240800ff
    ctx->pc = 0x2ce610u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 255));
label_2ce614:
    // 0x2ce614: 0x27a60010
    ctx->pc = 0x2ce614u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
label_2ce618:
    // 0x2ce618: 0x8ca20004
    ctx->pc = 0x2ce618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ce61c:
    // 0x2ce61c: 0x14400003
label_2ce620:
    if (ctx->pc == 0x2CE620u) {
        ctx->pc = 0x2CE620u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2CE624u;
        goto label_2ce624;
    }
    ctx->pc = 0x2CE61Cu;
    {
        const bool branch_taken_0x2ce61c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CE620u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2ce61c) {
            ctx->pc = 0x2CE62Cu;
            goto label_2ce62c;
        }
    }
    ctx->pc = 0x2CE624u;
label_2ce624:
    // 0x2ce624: 0x10000011
label_2ce628:
    if (ctx->pc == 0x2CE628u) {
        ctx->pc = 0x2CE628u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x2CE62Cu;
        goto label_2ce62c;
    }
    ctx->pc = 0x2CE624u;
    {
        const bool branch_taken_0x2ce624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE628u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x2ce624) {
            ctx->pc = 0x2CE66Cu;
            goto label_2ce66c;
        }
    }
    ctx->pc = 0x2CE62Cu;
label_2ce62c:
    // 0x2ce62c: 0xe4800004
    ctx->pc = 0x2ce62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2ce630:
    // 0x2ce630: 0xc4a00004
    ctx->pc = 0x2ce630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce634:
    // 0x2ce634: 0xe4800008
    ctx->pc = 0x2ce634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2ce638:
    // 0x2ce638: 0x8fa2007c
    ctx->pc = 0x2ce638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2ce63c:
    // 0x2ce63c: 0xac82000c
    ctx->pc = 0x2ce63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2ce640:
    // 0x2ce640: 0xafa4007c
    ctx->pc = 0x2ce640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
label_2ce644:
    // 0x2ce644: 0xe4102b
    ctx->pc = 0x2ce644u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2ce648:
    // 0x2ce648: 0x14400008
label_2ce64c:
    if (ctx->pc == 0x2CE64Cu) {
        ctx->pc = 0x2CE64Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2CE650u;
        goto label_2ce650;
    }
    ctx->pc = 0x2CE648u;
    {
        const bool branch_taken_0x2ce648 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CE64Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x2ce648) {
            ctx->pc = 0x2CE66Cu;
            goto label_2ce66c;
        }
    }
    ctx->pc = 0x2CE650u;
label_2ce650:
    // 0x2ce650: 0x831023
    ctx->pc = 0x2ce650u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2ce654:
    // 0x2ce654: 0x21103
    ctx->pc = 0x2ce654u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2ce658:
    // 0x2ce658: 0x210c0
    ctx->pc = 0x2ce658u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_2ce65c:
    // 0x2ce65c: 0x481004
    ctx->pc = 0x2ce65cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
label_2ce660:
    // 0x2ce660: 0x8fa30084
    ctx->pc = 0x2ce660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2ce664:
    // 0x2ce664: 0x621825
    ctx->pc = 0x2ce664u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ce668:
    // 0x2ce668: 0xafa30084
    ctx->pc = 0x2ce668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
label_2ce66c:
    // 0x2ce66c: 0x24a5fff0
    ctx->pc = 0x2ce66cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967280));
label_2ce670:
    // 0x2ce670: 0x80102d
    ctx->pc = 0x2ce670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce674:
    // 0x2ce674: 0x1446ffe8
label_2ce678:
    if (ctx->pc == 0x2CE678u) {
        ctx->pc = 0x2CE678u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x2CE67Cu;
        goto label_2ce67c;
    }
    ctx->pc = 0x2CE674u;
    {
        const bool branch_taken_0x2ce674 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x2CE678u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
        if (branch_taken_0x2ce674) {
            ctx->pc = 0x2CE618u;
            goto label_2ce618;
        }
    }
    ctx->pc = 0x2CE67Cu;
label_2ce67c:
    // 0x2ce67c: 0xc62000e0
    ctx->pc = 0x2ce67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce680:
    // 0x2ce680: 0x46000064
    ctx->pc = 0x2ce680u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2ce684:
    // 0x2ce684: 0x44100800
    ctx->pc = 0x2ce684u;
    SET_GPR_U32(ctx, 16, *(uint32_t*)&ctx->f[1]);
label_2ce688:
    // 0x2ce688: 0xc62000f0
    ctx->pc = 0x2ce688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce68c:
    // 0x2ce68c: 0x46000064
    ctx->pc = 0x2ce68cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2ce690:
    // 0x2ce690: 0x44020800
    ctx->pc = 0x2ce690u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2ce694:
    // 0x2ce694: 0x21200
    ctx->pc = 0x2ce694u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_2ce698:
    // 0x2ce698: 0x2028025
    ctx->pc = 0x2ce698u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ce69c:
    // 0x2ce69c: 0xc6200100
    ctx->pc = 0x2ce69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce6a0:
    // 0x2ce6a0: 0x46000064
    ctx->pc = 0x2ce6a0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2ce6a4:
    // 0x2ce6a4: 0x44020800
    ctx->pc = 0x2ce6a4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2ce6a8:
    // 0x2ce6a8: 0x21400
    ctx->pc = 0x2ce6a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_2ce6ac:
    // 0x2ce6ac: 0x2028025
    ctx->pc = 0x2ce6acu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ce6b0:
    // 0x2ce6b0: 0xc6200110
    ctx->pc = 0x2ce6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce6b4:
    // 0x2ce6b4: 0x46000064
    ctx->pc = 0x2ce6b4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2ce6b8:
    // 0x2ce6b8: 0x44020800
    ctx->pc = 0x2ce6b8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2ce6bc:
    // 0x2ce6bc: 0x21600
    ctx->pc = 0x2ce6bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2ce6c0:
    // 0x2ce6c0: 0x2028025
    ctx->pc = 0x2ce6c0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ce6c4:
    // 0x2ce6c4: 0x8e22006c
    ctx->pc = 0x2ce6c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_2ce6c8:
    // 0x2ce6c8: 0xafa20080
    ctx->pc = 0x2ce6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_2ce6cc:
    // 0x2ce6cc: 0x3c020036
    ctx->pc = 0x2ce6ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2ce6d0:
    // 0x2ce6d0: 0x8c42dee0
    ctx->pc = 0x2ce6d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
label_2ce6d4:
    // 0x2ce6d4: 0x3c05003d
    ctx->pc = 0x2ce6d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)61 << 16));
label_2ce6d8:
    // 0x2ce6d8: 0x8c440040
    ctx->pc = 0x2ce6d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2ce6dc:
    // 0x2ce6dc: 0x8c820008
    ctx->pc = 0x2ce6dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2ce6e0:
    // 0x2ce6e0: 0x2443ff00
    ctx->pc = 0x2ce6e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967040));
label_2ce6e4:
    // 0x2ce6e4: 0xaca32230
    ctx->pc = 0x2ce6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8752), GPR_U32(ctx, 3));
label_2ce6e8:
    // 0x2ce6e8: 0x3c05003d
    ctx->pc = 0x2ce6e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)61 << 16));
label_2ce6ec:
    // 0x2ce6ec: 0x8c830010
    ctx->pc = 0x2ce6ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2ce6f0:
    // 0x2ce6f0: 0x431021
    ctx->pc = 0x2ce6f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ce6f4:
    // 0x2ce6f4: 0x24420100
    ctx->pc = 0x2ce6f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 256));
label_2ce6f8:
    // 0x2ce6f8: 0xaca22234
    ctx->pc = 0x2ce6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8756), GPR_U32(ctx, 2));
label_2ce6fc:
    // 0x2ce6fc: 0x3c05003d
    ctx->pc = 0x2ce6fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)61 << 16));
label_2ce700:
    // 0x2ce700: 0x8c82000c
    ctx->pc = 0x2ce700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ce704:
    // 0x2ce704: 0x2443ff00
    ctx->pc = 0x2ce704u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967040));
label_2ce708:
    // 0x2ce708: 0xaca32238
    ctx->pc = 0x2ce708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8760), GPR_U32(ctx, 3));
label_2ce70c:
    // 0x2ce70c: 0x3c05003d
    ctx->pc = 0x2ce70cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)61 << 16));
label_2ce710:
    // 0x2ce710: 0x8c830014
    ctx->pc = 0x2ce710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2ce714:
    // 0x2ce714: 0x431021
    ctx->pc = 0x2ce714u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ce718:
    // 0x2ce718: 0x2442ff00
    ctx->pc = 0x2ce718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967040));
label_2ce71c:
    // 0x2ce71c: 0xaca2223c
    ctx->pc = 0x2ce71cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8764), GPR_U32(ctx, 2));
label_2ce720:
    // 0x2ce720: 0x12a00098
label_2ce724:
    if (ctx->pc == 0x2CE724u) {
        ctx->pc = 0x2CE724u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2CE728u;
        goto label_2ce728;
    }
    ctx->pc = 0x2CE720u;
    {
        const bool branch_taken_0x2ce720 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE724u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2ce720) {
            ctx->pc = 0x2CE984u;
            goto label_2ce984;
        }
    }
    ctx->pc = 0x2CE728u;
label_2ce728:
    // 0x2ce728: 0x2415000c
    ctx->pc = 0x2ce728u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 12));
label_2ce72c:
    // 0x2ce72c: 0x3c02003a
    ctx->pc = 0x2ce72cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2ce730:
    // 0x2ce730: 0x2457aad8
    ctx->pc = 0x2ce730u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294945496));
label_2ce734:
    // 0x2ce734: 0x0
    ctx->pc = 0x2ce734u;
    // NOP
label_2ce738:
    // 0x2ce738: 0x8fa30074
    ctx->pc = 0x2ce738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2ce73c:
    // 0x2ce73c: 0x731007
    ctx->pc = 0x2ce73cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
label_2ce740:
    // 0x2ce740: 0x8fa40070
    ctx->pc = 0x2ce740u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2ce744:
    // 0x2ce744: 0x443024
    ctx->pc = 0x2ce744u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ce748:
    // 0x2ce748: 0x8fa50078
    ctx->pc = 0x2ce748u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2ce74c:
    // 0x2ce74c: 0x4614a836
    ctx->pc = 0x2ce74cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce750:
    // 0x2ce750: 0x0
    ctx->pc = 0x2ce750u;
    // NOP
label_2ce754:
    // 0x2ce754: 0x45000035
label_2ce758:
    if (ctx->pc == 0x2CE758u) {
        ctx->pc = 0x2CE758u;
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x2CE75Cu;
        goto label_2ce75c;
    }
    ctx->pc = 0x2CE754u;
    {
        const bool branch_taken_0x2ce754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CE758u;
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x2ce754) {
            ctx->pc = 0x2CE82Cu;
            goto label_2ce82c;
        }
    }
    ctx->pc = 0x2CE75Cu;
label_2ce75c:
    // 0x2ce75c: 0x3c014780
    ctx->pc = 0x2ce75cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18304 << 16));
label_2ce760:
    // 0x2ce760: 0x4481a800
    ctx->pc = 0x2ce760u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_2ce764:
    // 0x2ce764: 0x27a40050
    ctx->pc = 0x2ce764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
label_2ce768:
    // 0x2ce768: 0x26250120
    ctx->pc = 0x2ce768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 288));
label_2ce76c:
    // 0x2ce76c: 0xafa00084
    ctx->pc = 0x2ce76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_2ce770:
    // 0x2ce770: 0xafa0007c
    ctx->pc = 0x2ce770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_2ce774:
    // 0x2ce774: 0x27a80040
    ctx->pc = 0x2ce774u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 64));
label_2ce778:
    // 0x2ce778: 0x240900ff
    ctx->pc = 0x2ce778u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 255));
label_2ce77c:
    // 0x2ce77c: 0x27a70010
    ctx->pc = 0x2ce77cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
label_2ce780:
    // 0x2ce780: 0x8ca2000c
    ctx->pc = 0x2ce780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2ce784:
    // 0x2ce784: 0x14400003
label_2ce788:
    if (ctx->pc == 0x2CE788u) {
        ctx->pc = 0x2CE788u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2CE78Cu;
        goto label_2ce78c;
    }
    ctx->pc = 0x2CE784u;
    {
        const bool branch_taken_0x2ce784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CE788u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2ce784) {
            ctx->pc = 0x2CE794u;
            goto label_2ce794;
        }
    }
    ctx->pc = 0x2CE78Cu;
label_2ce78c:
    // 0x2ce78c: 0x10000011
label_2ce790:
    if (ctx->pc == 0x2CE790u) {
        ctx->pc = 0x2CE790u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x2CE794u;
        goto label_2ce794;
    }
    ctx->pc = 0x2CE78Cu;
    {
        const bool branch_taken_0x2ce78c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE790u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x2ce78c) {
            ctx->pc = 0x2CE7D4u;
            goto label_2ce7d4;
        }
    }
    ctx->pc = 0x2CE794u;
label_2ce794:
    // 0x2ce794: 0xe4800004
    ctx->pc = 0x2ce794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2ce798:
    // 0x2ce798: 0xc4a0000c
    ctx->pc = 0x2ce798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce79c:
    // 0x2ce79c: 0xe4800008
    ctx->pc = 0x2ce79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2ce7a0:
    // 0x2ce7a0: 0x8fa2007c
    ctx->pc = 0x2ce7a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2ce7a4:
    // 0x2ce7a4: 0xac82000c
    ctx->pc = 0x2ce7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2ce7a8:
    // 0x2ce7a8: 0xafa4007c
    ctx->pc = 0x2ce7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
label_2ce7ac:
    // 0x2ce7ac: 0x104102b
    ctx->pc = 0x2ce7acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_2ce7b0:
    // 0x2ce7b0: 0x14400008
label_2ce7b4:
    if (ctx->pc == 0x2CE7B4u) {
        ctx->pc = 0x2CE7B4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2CE7B8u;
        goto label_2ce7b8;
    }
    ctx->pc = 0x2CE7B0u;
    {
        const bool branch_taken_0x2ce7b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CE7B4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x2ce7b0) {
            ctx->pc = 0x2CE7D4u;
            goto label_2ce7d4;
        }
    }
    ctx->pc = 0x2CE7B8u;
label_2ce7b8:
    // 0x2ce7b8: 0x831023
    ctx->pc = 0x2ce7b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2ce7bc:
    // 0x2ce7bc: 0x21103
    ctx->pc = 0x2ce7bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2ce7c0:
    // 0x2ce7c0: 0x210c0
    ctx->pc = 0x2ce7c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_2ce7c4:
    // 0x2ce7c4: 0x491004
    ctx->pc = 0x2ce7c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_2ce7c8:
    // 0x2ce7c8: 0x8fa30084
    ctx->pc = 0x2ce7c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2ce7cc:
    // 0x2ce7cc: 0x621825
    ctx->pc = 0x2ce7ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ce7d0:
    // 0x2ce7d0: 0xafa30084
    ctx->pc = 0x2ce7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
label_2ce7d4:
    // 0x2ce7d4: 0x24a5fff0
    ctx->pc = 0x2ce7d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967280));
label_2ce7d8:
    // 0x2ce7d8: 0x80102d
    ctx->pc = 0x2ce7d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7dc:
    // 0x2ce7dc: 0x1447ffe8
label_2ce7e0:
    if (ctx->pc == 0x2CE7E0u) {
        ctx->pc = 0x2CE7E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x2CE7E4u;
        goto label_2ce7e4;
    }
    ctx->pc = 0x2CE7DCu;
    {
        const bool branch_taken_0x2ce7dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x2CE7E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
        if (branch_taken_0x2ce7dc) {
            ctx->pc = 0x2CE780u;
            goto label_2ce780;
        }
    }
    ctx->pc = 0x2CE7E4u;
label_2ce7e4:
    // 0x2ce7e4: 0xc62000e8
    ctx->pc = 0x2ce7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce7e8:
    // 0x2ce7e8: 0x46000064
    ctx->pc = 0x2ce7e8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2ce7ec:
    // 0x2ce7ec: 0x44030800
    ctx->pc = 0x2ce7ecu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
label_2ce7f0:
    // 0x2ce7f0: 0xc62000f8
    ctx->pc = 0x2ce7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce7f4:
    // 0x2ce7f4: 0x46000064
    ctx->pc = 0x2ce7f4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2ce7f8:
    // 0x2ce7f8: 0x44020800
    ctx->pc = 0x2ce7f8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2ce7fc:
    // 0x2ce7fc: 0x21200
    ctx->pc = 0x2ce7fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_2ce800:
    // 0x2ce800: 0x621825
    ctx->pc = 0x2ce800u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ce804:
    // 0x2ce804: 0xc6200108
    ctx->pc = 0x2ce804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce808:
    // 0x2ce808: 0x46000064
    ctx->pc = 0x2ce808u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2ce80c:
    // 0x2ce80c: 0x44020800
    ctx->pc = 0x2ce80cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2ce810:
    // 0x2ce810: 0x21400
    ctx->pc = 0x2ce810u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_2ce814:
    // 0x2ce814: 0x621825
    ctx->pc = 0x2ce814u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ce818:
    // 0x2ce818: 0xc6200118
    ctx->pc = 0x2ce818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce81c:
    // 0x2ce81c: 0x46000064
    ctx->pc = 0x2ce81cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2ce820:
    // 0x2ce820: 0x44020800
    ctx->pc = 0x2ce820u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2ce824:
    // 0x2ce824: 0x21600
    ctx->pc = 0x2ce824u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2ce828:
    // 0x2ce828: 0x628025
    ctx->pc = 0x2ce828u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ce82c:
    // 0x2ce82c: 0xd51818
    ctx->pc = 0x2ce82cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2ce830:
    // 0x2ce830: 0x8e26000c
    ctx->pc = 0x2ce830u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ce834:
    // 0x2ce834: 0x2551018
    ctx->pc = 0x2ce834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2ce838:
    // 0x2ce838: 0x8e270010
    ctx->pc = 0x2ce838u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ce83c:
    // 0x2ce83c: 0x220202d
    ctx->pc = 0x2ce83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ce840:
    // 0x2ce840: 0x3a0282d
    ctx->pc = 0x2ce840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ce844:
    // 0x2ce844: 0x663021
    ctx->pc = 0x2ce844u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2ce848:
    // 0x2ce848: 0x473821
    ctx->pc = 0x2ce848u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2ce84c:
    // 0x2ce84c: 0x8fa20080
    ctx->pc = 0x2ce84cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2ce850:
    // 0x2ce850: 0x40f809
label_2ce854:
    if (ctx->pc == 0x2CE854u) {
        ctx->pc = 0x2CE854u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2CE858u;
        goto label_2ce858;
    }
    ctx->pc = 0x2CE850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CE858u);
        ctx->pc = 0x2CE854u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CDDF8u: goto label_2cddf8;
            case 0x2CDDFCu: goto label_2cddfc;
            case 0x2CDE00u: goto label_2cde00;
            case 0x2CDE04u: goto label_2cde04;
            case 0x2CDE08u: goto label_2cde08;
            case 0x2CDE0Cu: goto label_2cde0c;
            case 0x2CDE10u: goto label_2cde10;
            case 0x2CDE14u: goto label_2cde14;
            case 0x2CDE18u: goto label_2cde18;
            case 0x2CDE1Cu: goto label_2cde1c;
            case 0x2CDE20u: goto label_2cde20;
            case 0x2CDE24u: goto label_2cde24;
            case 0x2CDE28u: goto label_2cde28;
            case 0x2CDE2Cu: goto label_2cde2c;
            case 0x2CDE30u: goto label_2cde30;
            case 0x2CDE34u: goto label_2cde34;
            case 0x2CDE38u: goto label_2cde38;
            case 0x2CDE3Cu: goto label_2cde3c;
            case 0x2CDE40u: goto label_2cde40;
            case 0x2CDE44u: goto label_2cde44;
            case 0x2CDE48u: goto label_2cde48;
            case 0x2CDE4Cu: goto label_2cde4c;
            case 0x2CDE50u: goto label_2cde50;
            case 0x2CDE54u: goto label_2cde54;
            case 0x2CDE58u: goto label_2cde58;
            case 0x2CDE5Cu: goto label_2cde5c;
            case 0x2CDE60u: goto label_2cde60;
            case 0x2CDE64u: goto label_2cde64;
            case 0x2CDE68u: goto label_2cde68;
            case 0x2CDE6Cu: goto label_2cde6c;
            case 0x2CDE70u: goto label_2cde70;
            case 0x2CDE74u: goto label_2cde74;
            case 0x2CDE78u: goto label_2cde78;
            case 0x2CDE7Cu: goto label_2cde7c;
            case 0x2CDE80u: goto label_2cde80;
            case 0x2CDE84u: goto label_2cde84;
            case 0x2CDE88u: goto label_2cde88;
            case 0x2CDE8Cu: goto label_2cde8c;
            case 0x2CDE90u: goto label_2cde90;
            case 0x2CDE94u: goto label_2cde94;
            case 0x2CDE98u: goto label_2cde98;
            case 0x2CDE9Cu: goto label_2cde9c;
            case 0x2CDEA0u: goto label_2cdea0;
            case 0x2CDEA4u: goto label_2cdea4;
            case 0x2CDEA8u: goto label_2cdea8;
            case 0x2CDEACu: goto label_2cdeac;
            case 0x2CDEB0u: goto label_2cdeb0;
            case 0x2CDEB4u: goto label_2cdeb4;
            case 0x2CDEB8u: goto label_2cdeb8;
            case 0x2CDEBCu: goto label_2cdebc;
            case 0x2CDEC0u: goto label_2cdec0;
            case 0x2CDEC4u: goto label_2cdec4;
            case 0x2CDEC8u: goto label_2cdec8;
            case 0x2CDECCu: goto label_2cdecc;
            case 0x2CDED0u: goto label_2cded0;
            case 0x2CDED4u: goto label_2cded4;
            case 0x2CDED8u: goto label_2cded8;
            case 0x2CDEDCu: goto label_2cdedc;
            case 0x2CDEE0u: goto label_2cdee0;
            case 0x2CDEE4u: goto label_2cdee4;
            case 0x2CDEE8u: goto label_2cdee8;
            case 0x2CDEECu: goto label_2cdeec;
            case 0x2CDEF0u: goto label_2cdef0;
            case 0x2CDEF4u: goto label_2cdef4;
            case 0x2CDEF8u: goto label_2cdef8;
            case 0x2CDEFCu: goto label_2cdefc;
            case 0x2CDF00u: goto label_2cdf00;
            case 0x2CDF04u: goto label_2cdf04;
            case 0x2CDF08u: goto label_2cdf08;
            case 0x2CDF0Cu: goto label_2cdf0c;
            case 0x2CDF10u: goto label_2cdf10;
            case 0x2CDF14u: goto label_2cdf14;
            case 0x2CDF18u: goto label_2cdf18;
            case 0x2CDF1Cu: goto label_2cdf1c;
            case 0x2CDF20u: goto label_2cdf20;
            case 0x2CDF24u: goto label_2cdf24;
            case 0x2CDF28u: goto label_2cdf28;
            case 0x2CDF2Cu: goto label_2cdf2c;
            case 0x2CDF30u: goto label_2cdf30;
            case 0x2CDF34u: goto label_2cdf34;
            case 0x2CDF38u: goto label_2cdf38;
            case 0x2CDF3Cu: goto label_2cdf3c;
            case 0x2CDF40u: goto label_2cdf40;
            case 0x2CDF44u: goto label_2cdf44;
            case 0x2CDF48u: goto label_2cdf48;
            case 0x2CDF4Cu: goto label_2cdf4c;
            case 0x2CDF50u: goto label_2cdf50;
            case 0x2CDF54u: goto label_2cdf54;
            case 0x2CDF58u: goto label_2cdf58;
            case 0x2CDF5Cu: goto label_2cdf5c;
            case 0x2CDF60u: goto label_2cdf60;
            case 0x2CDF64u: goto label_2cdf64;
            case 0x2CDF68u: goto label_2cdf68;
            case 0x2CDF6Cu: goto label_2cdf6c;
            case 0x2CDF70u: goto label_2cdf70;
            case 0x2CDF74u: goto label_2cdf74;
            case 0x2CDF78u: goto label_2cdf78;
            case 0x2CDF7Cu: goto label_2cdf7c;
            case 0x2CDF80u: goto label_2cdf80;
            case 0x2CDF84u: goto label_2cdf84;
            case 0x2CDF88u: goto label_2cdf88;
            case 0x2CDF8Cu: goto label_2cdf8c;
            case 0x2CDF90u: goto label_2cdf90;
            case 0x2CDF94u: goto label_2cdf94;
            case 0x2CDF98u: goto label_2cdf98;
            case 0x2CDF9Cu: goto label_2cdf9c;
            case 0x2CDFA0u: goto label_2cdfa0;
            case 0x2CDFA4u: goto label_2cdfa4;
            case 0x2CDFA8u: goto label_2cdfa8;
            case 0x2CDFACu: goto label_2cdfac;
            case 0x2CDFB0u: goto label_2cdfb0;
            case 0x2CDFB4u: goto label_2cdfb4;
            case 0x2CDFB8u: goto label_2cdfb8;
            case 0x2CDFBCu: goto label_2cdfbc;
            case 0x2CDFC0u: goto label_2cdfc0;
            case 0x2CDFC4u: goto label_2cdfc4;
            case 0x2CDFC8u: goto label_2cdfc8;
            case 0x2CDFCCu: goto label_2cdfcc;
            case 0x2CDFD0u: goto label_2cdfd0;
            case 0x2CDFD4u: goto label_2cdfd4;
            case 0x2CDFD8u: goto label_2cdfd8;
            case 0x2CDFDCu: goto label_2cdfdc;
            case 0x2CDFE0u: goto label_2cdfe0;
            case 0x2CDFE4u: goto label_2cdfe4;
            case 0x2CDFE8u: goto label_2cdfe8;
            case 0x2CDFECu: goto label_2cdfec;
            case 0x2CDFF0u: goto label_2cdff0;
            case 0x2CDFF4u: goto label_2cdff4;
            case 0x2CDFF8u: goto label_2cdff8;
            case 0x2CDFFCu: goto label_2cdffc;
            case 0x2CE000u: goto label_2ce000;
            case 0x2CE004u: goto label_2ce004;
            case 0x2CE008u: goto label_2ce008;
            case 0x2CE00Cu: goto label_2ce00c;
            case 0x2CE010u: goto label_2ce010;
            case 0x2CE014u: goto label_2ce014;
            case 0x2CE018u: goto label_2ce018;
            case 0x2CE01Cu: goto label_2ce01c;
            case 0x2CE020u: goto label_2ce020;
            case 0x2CE024u: goto label_2ce024;
            case 0x2CE028u: goto label_2ce028;
            case 0x2CE02Cu: goto label_2ce02c;
            case 0x2CE030u: goto label_2ce030;
            case 0x2CE034u: goto label_2ce034;
            case 0x2CE038u: goto label_2ce038;
            case 0x2CE03Cu: goto label_2ce03c;
            case 0x2CE040u: goto label_2ce040;
            case 0x2CE044u: goto label_2ce044;
            case 0x2CE048u: goto label_2ce048;
            case 0x2CE04Cu: goto label_2ce04c;
            case 0x2CE050u: goto label_2ce050;
            case 0x2CE054u: goto label_2ce054;
            case 0x2CE058u: goto label_2ce058;
            case 0x2CE05Cu: goto label_2ce05c;
            case 0x2CE060u: goto label_2ce060;
            case 0x2CE064u: goto label_2ce064;
            case 0x2CE068u: goto label_2ce068;
            case 0x2CE06Cu: goto label_2ce06c;
            case 0x2CE070u: goto label_2ce070;
            case 0x2CE074u: goto label_2ce074;
            case 0x2CE078u: goto label_2ce078;
            case 0x2CE07Cu: goto label_2ce07c;
            case 0x2CE080u: goto label_2ce080;
            case 0x2CE084u: goto label_2ce084;
            case 0x2CE088u: goto label_2ce088;
            case 0x2CE08Cu: goto label_2ce08c;
            case 0x2CE090u: goto label_2ce090;
            case 0x2CE094u: goto label_2ce094;
            case 0x2CE098u: goto label_2ce098;
            case 0x2CE09Cu: goto label_2ce09c;
            case 0x2CE0A0u: goto label_2ce0a0;
            case 0x2CE0A4u: goto label_2ce0a4;
            case 0x2CE0A8u: goto label_2ce0a8;
            case 0x2CE0ACu: goto label_2ce0ac;
            case 0x2CE0B0u: goto label_2ce0b0;
            case 0x2CE0B4u: goto label_2ce0b4;
            case 0x2CE0B8u: goto label_2ce0b8;
            case 0x2CE0BCu: goto label_2ce0bc;
            case 0x2CE0C0u: goto label_2ce0c0;
            case 0x2CE0C4u: goto label_2ce0c4;
            case 0x2CE0C8u: goto label_2ce0c8;
            case 0x2CE0CCu: goto label_2ce0cc;
            case 0x2CE0D0u: goto label_2ce0d0;
            case 0x2CE0D4u: goto label_2ce0d4;
            case 0x2CE0D8u: goto label_2ce0d8;
            case 0x2CE0DCu: goto label_2ce0dc;
            case 0x2CE0E0u: goto label_2ce0e0;
            case 0x2CE0E4u: goto label_2ce0e4;
            case 0x2CE0E8u: goto label_2ce0e8;
            case 0x2CE0ECu: goto label_2ce0ec;
            case 0x2CE0F0u: goto label_2ce0f0;
            case 0x2CE0F4u: goto label_2ce0f4;
            case 0x2CE0F8u: goto label_2ce0f8;
            case 0x2CE0FCu: goto label_2ce0fc;
            case 0x2CE100u: goto label_2ce100;
            case 0x2CE104u: goto label_2ce104;
            case 0x2CE108u: goto label_2ce108;
            case 0x2CE10Cu: goto label_2ce10c;
            case 0x2CE110u: goto label_2ce110;
            case 0x2CE114u: goto label_2ce114;
            case 0x2CE118u: goto label_2ce118;
            case 0x2CE11Cu: goto label_2ce11c;
            case 0x2CE120u: goto label_2ce120;
            case 0x2CE124u: goto label_2ce124;
            case 0x2CE128u: goto label_2ce128;
            case 0x2CE12Cu: goto label_2ce12c;
            case 0x2CE130u: goto label_2ce130;
            case 0x2CE134u: goto label_2ce134;
            case 0x2CE138u: goto label_2ce138;
            case 0x2CE13Cu: goto label_2ce13c;
            case 0x2CE140u: goto label_2ce140;
            case 0x2CE144u: goto label_2ce144;
            case 0x2CE148u: goto label_2ce148;
            case 0x2CE14Cu: goto label_2ce14c;
            case 0x2CE150u: goto label_2ce150;
            case 0x2CE154u: goto label_2ce154;
            case 0x2CE158u: goto label_2ce158;
            case 0x2CE15Cu: goto label_2ce15c;
            case 0x2CE160u: goto label_2ce160;
            case 0x2CE164u: goto label_2ce164;
            case 0x2CE168u: goto label_2ce168;
            case 0x2CE16Cu: goto label_2ce16c;
            case 0x2CE170u: goto label_2ce170;
            case 0x2CE174u: goto label_2ce174;
            case 0x2CE178u: goto label_2ce178;
            case 0x2CE17Cu: goto label_2ce17c;
            case 0x2CE180u: goto label_2ce180;
            case 0x2CE184u: goto label_2ce184;
            case 0x2CE188u: goto label_2ce188;
            case 0x2CE18Cu: goto label_2ce18c;
            case 0x2CE190u: goto label_2ce190;
            case 0x2CE194u: goto label_2ce194;
            case 0x2CE198u: goto label_2ce198;
            case 0x2CE19Cu: goto label_2ce19c;
            case 0x2CE1A0u: goto label_2ce1a0;
            case 0x2CE1A4u: goto label_2ce1a4;
            case 0x2CE1A8u: goto label_2ce1a8;
            case 0x2CE1ACu: goto label_2ce1ac;
            case 0x2CE1B0u: goto label_2ce1b0;
            case 0x2CE1B4u: goto label_2ce1b4;
            case 0x2CE1B8u: goto label_2ce1b8;
            case 0x2CE1BCu: goto label_2ce1bc;
            case 0x2CE1C0u: goto label_2ce1c0;
            case 0x2CE1C4u: goto label_2ce1c4;
            case 0x2CE1C8u: goto label_2ce1c8;
            case 0x2CE1CCu: goto label_2ce1cc;
            case 0x2CE1D0u: goto label_2ce1d0;
            case 0x2CE1D4u: goto label_2ce1d4;
            case 0x2CE1D8u: goto label_2ce1d8;
            case 0x2CE1DCu: goto label_2ce1dc;
            case 0x2CE1E0u: goto label_2ce1e0;
            case 0x2CE1E4u: goto label_2ce1e4;
            case 0x2CE1E8u: goto label_2ce1e8;
            case 0x2CE1ECu: goto label_2ce1ec;
            case 0x2CE1F0u: goto label_2ce1f0;
            case 0x2CE1F4u: goto label_2ce1f4;
            case 0x2CE1F8u: goto label_2ce1f8;
            case 0x2CE1FCu: goto label_2ce1fc;
            case 0x2CE200u: goto label_2ce200;
            case 0x2CE204u: goto label_2ce204;
            case 0x2CE208u: goto label_2ce208;
            case 0x2CE20Cu: goto label_2ce20c;
            case 0x2CE210u: goto label_2ce210;
            case 0x2CE214u: goto label_2ce214;
            case 0x2CE218u: goto label_2ce218;
            case 0x2CE21Cu: goto label_2ce21c;
            case 0x2CE220u: goto label_2ce220;
            case 0x2CE224u: goto label_2ce224;
            case 0x2CE228u: goto label_2ce228;
            case 0x2CE22Cu: goto label_2ce22c;
            case 0x2CE230u: goto label_2ce230;
            case 0x2CE234u: goto label_2ce234;
            case 0x2CE238u: goto label_2ce238;
            case 0x2CE23Cu: goto label_2ce23c;
            case 0x2CE240u: goto label_2ce240;
            case 0x2CE244u: goto label_2ce244;
            case 0x2CE248u: goto label_2ce248;
            case 0x2CE24Cu: goto label_2ce24c;
            case 0x2CE250u: goto label_2ce250;
            case 0x2CE254u: goto label_2ce254;
            case 0x2CE258u: goto label_2ce258;
            case 0x2CE25Cu: goto label_2ce25c;
            case 0x2CE260u: goto label_2ce260;
            case 0x2CE264u: goto label_2ce264;
            case 0x2CE268u: goto label_2ce268;
            case 0x2CE26Cu: goto label_2ce26c;
            case 0x2CE270u: goto label_2ce270;
            case 0x2CE274u: goto label_2ce274;
            case 0x2CE278u: goto label_2ce278;
            case 0x2CE27Cu: goto label_2ce27c;
            case 0x2CE280u: goto label_2ce280;
            case 0x2CE284u: goto label_2ce284;
            case 0x2CE288u: goto label_2ce288;
            case 0x2CE28Cu: goto label_2ce28c;
            case 0x2CE290u: goto label_2ce290;
            case 0x2CE294u: goto label_2ce294;
            case 0x2CE298u: goto label_2ce298;
            case 0x2CE29Cu: goto label_2ce29c;
            case 0x2CE2A0u: goto label_2ce2a0;
            case 0x2CE2A4u: goto label_2ce2a4;
            case 0x2CE2A8u: goto label_2ce2a8;
            case 0x2CE2ACu: goto label_2ce2ac;
            case 0x2CE2B0u: goto label_2ce2b0;
            case 0x2CE2B4u: goto label_2ce2b4;
            case 0x2CE2B8u: goto label_2ce2b8;
            case 0x2CE2BCu: goto label_2ce2bc;
            case 0x2CE2C0u: goto label_2ce2c0;
            case 0x2CE2C4u: goto label_2ce2c4;
            case 0x2CE2C8u: goto label_2ce2c8;
            case 0x2CE2CCu: goto label_2ce2cc;
            case 0x2CE2D0u: goto label_2ce2d0;
            case 0x2CE2D4u: goto label_2ce2d4;
            case 0x2CE2D8u: goto label_2ce2d8;
            case 0x2CE2DCu: goto label_2ce2dc;
            case 0x2CE2E0u: goto label_2ce2e0;
            case 0x2CE2E4u: goto label_2ce2e4;
            case 0x2CE2E8u: goto label_2ce2e8;
            case 0x2CE2ECu: goto label_2ce2ec;
            case 0x2CE2F0u: goto label_2ce2f0;
            case 0x2CE2F4u: goto label_2ce2f4;
            case 0x2CE2F8u: goto label_2ce2f8;
            case 0x2CE2FCu: goto label_2ce2fc;
            case 0x2CE300u: goto label_2ce300;
            case 0x2CE304u: goto label_2ce304;
            case 0x2CE308u: goto label_2ce308;
            case 0x2CE30Cu: goto label_2ce30c;
            case 0x2CE310u: goto label_2ce310;
            case 0x2CE314u: goto label_2ce314;
            case 0x2CE318u: goto label_2ce318;
            case 0x2CE31Cu: goto label_2ce31c;
            case 0x2CE320u: goto label_2ce320;
            case 0x2CE324u: goto label_2ce324;
            case 0x2CE328u: goto label_2ce328;
            case 0x2CE32Cu: goto label_2ce32c;
            case 0x2CE330u: goto label_2ce330;
            case 0x2CE334u: goto label_2ce334;
            case 0x2CE338u: goto label_2ce338;
            case 0x2CE33Cu: goto label_2ce33c;
            case 0x2CE340u: goto label_2ce340;
            case 0x2CE344u: goto label_2ce344;
            case 0x2CE348u: goto label_2ce348;
            case 0x2CE34Cu: goto label_2ce34c;
            case 0x2CE350u: goto label_2ce350;
            case 0x2CE354u: goto label_2ce354;
            case 0x2CE358u: goto label_2ce358;
            case 0x2CE35Cu: goto label_2ce35c;
            case 0x2CE360u: goto label_2ce360;
            case 0x2CE364u: goto label_2ce364;
            case 0x2CE368u: goto label_2ce368;
            case 0x2CE36Cu: goto label_2ce36c;
            case 0x2CE370u: goto label_2ce370;
            case 0x2CE374u: goto label_2ce374;
            case 0x2CE378u: goto label_2ce378;
            case 0x2CE37Cu: goto label_2ce37c;
            case 0x2CE380u: goto label_2ce380;
            case 0x2CE384u: goto label_2ce384;
            case 0x2CE388u: goto label_2ce388;
            case 0x2CE38Cu: goto label_2ce38c;
            case 0x2CE390u: goto label_2ce390;
            case 0x2CE394u: goto label_2ce394;
            case 0x2CE398u: goto label_2ce398;
            case 0x2CE39Cu: goto label_2ce39c;
            case 0x2CE3A0u: goto label_2ce3a0;
            case 0x2CE3A4u: goto label_2ce3a4;
            case 0x2CE3A8u: goto label_2ce3a8;
            case 0x2CE3ACu: goto label_2ce3ac;
            case 0x2CE3B0u: goto label_2ce3b0;
            case 0x2CE3B4u: goto label_2ce3b4;
            case 0x2CE3B8u: goto label_2ce3b8;
            case 0x2CE3BCu: goto label_2ce3bc;
            case 0x2CE3C0u: goto label_2ce3c0;
            case 0x2CE3C4u: goto label_2ce3c4;
            case 0x2CE3C8u: goto label_2ce3c8;
            case 0x2CE3CCu: goto label_2ce3cc;
            case 0x2CE3D0u: goto label_2ce3d0;
            case 0x2CE3D4u: goto label_2ce3d4;
            case 0x2CE3D8u: goto label_2ce3d8;
            case 0x2CE3DCu: goto label_2ce3dc;
            case 0x2CE3E0u: goto label_2ce3e0;
            case 0x2CE3E4u: goto label_2ce3e4;
            case 0x2CE3E8u: goto label_2ce3e8;
            case 0x2CE3ECu: goto label_2ce3ec;
            case 0x2CE3F0u: goto label_2ce3f0;
            case 0x2CE3F4u: goto label_2ce3f4;
            case 0x2CE3F8u: goto label_2ce3f8;
            case 0x2CE3FCu: goto label_2ce3fc;
            case 0x2CE400u: goto label_2ce400;
            case 0x2CE404u: goto label_2ce404;
            case 0x2CE408u: goto label_2ce408;
            case 0x2CE40Cu: goto label_2ce40c;
            case 0x2CE410u: goto label_2ce410;
            case 0x2CE414u: goto label_2ce414;
            case 0x2CE418u: goto label_2ce418;
            case 0x2CE41Cu: goto label_2ce41c;
            case 0x2CE420u: goto label_2ce420;
            case 0x2CE424u: goto label_2ce424;
            case 0x2CE428u: goto label_2ce428;
            case 0x2CE42Cu: goto label_2ce42c;
            case 0x2CE430u: goto label_2ce430;
            case 0x2CE434u: goto label_2ce434;
            case 0x2CE438u: goto label_2ce438;
            case 0x2CE43Cu: goto label_2ce43c;
            case 0x2CE440u: goto label_2ce440;
            case 0x2CE444u: goto label_2ce444;
            case 0x2CE448u: goto label_2ce448;
            case 0x2CE44Cu: goto label_2ce44c;
            case 0x2CE450u: goto label_2ce450;
            case 0x2CE454u: goto label_2ce454;
            case 0x2CE458u: goto label_2ce458;
            case 0x2CE45Cu: goto label_2ce45c;
            case 0x2CE460u: goto label_2ce460;
            case 0x2CE464u: goto label_2ce464;
            case 0x2CE468u: goto label_2ce468;
            case 0x2CE46Cu: goto label_2ce46c;
            case 0x2CE470u: goto label_2ce470;
            case 0x2CE474u: goto label_2ce474;
            case 0x2CE478u: goto label_2ce478;
            case 0x2CE47Cu: goto label_2ce47c;
            case 0x2CE480u: goto label_2ce480;
            case 0x2CE484u: goto label_2ce484;
            case 0x2CE488u: goto label_2ce488;
            case 0x2CE48Cu: goto label_2ce48c;
            case 0x2CE490u: goto label_2ce490;
            case 0x2CE494u: goto label_2ce494;
            case 0x2CE498u: goto label_2ce498;
            case 0x2CE49Cu: goto label_2ce49c;
            case 0x2CE4A0u: goto label_2ce4a0;
            case 0x2CE4A4u: goto label_2ce4a4;
            case 0x2CE4A8u: goto label_2ce4a8;
            case 0x2CE4ACu: goto label_2ce4ac;
            case 0x2CE4B0u: goto label_2ce4b0;
            case 0x2CE4B4u: goto label_2ce4b4;
            case 0x2CE4B8u: goto label_2ce4b8;
            case 0x2CE4BCu: goto label_2ce4bc;
            case 0x2CE4C0u: goto label_2ce4c0;
            case 0x2CE4C4u: goto label_2ce4c4;
            case 0x2CE4C8u: goto label_2ce4c8;
            case 0x2CE4CCu: goto label_2ce4cc;
            case 0x2CE4D0u: goto label_2ce4d0;
            case 0x2CE4D4u: goto label_2ce4d4;
            case 0x2CE4D8u: goto label_2ce4d8;
            case 0x2CE4DCu: goto label_2ce4dc;
            case 0x2CE4E0u: goto label_2ce4e0;
            case 0x2CE4E4u: goto label_2ce4e4;
            case 0x2CE4E8u: goto label_2ce4e8;
            case 0x2CE4ECu: goto label_2ce4ec;
            case 0x2CE4F0u: goto label_2ce4f0;
            case 0x2CE4F4u: goto label_2ce4f4;
            case 0x2CE4F8u: goto label_2ce4f8;
            case 0x2CE4FCu: goto label_2ce4fc;
            case 0x2CE500u: goto label_2ce500;
            case 0x2CE504u: goto label_2ce504;
            case 0x2CE508u: goto label_2ce508;
            case 0x2CE50Cu: goto label_2ce50c;
            case 0x2CE510u: goto label_2ce510;
            case 0x2CE514u: goto label_2ce514;
            case 0x2CE518u: goto label_2ce518;
            case 0x2CE51Cu: goto label_2ce51c;
            case 0x2CE520u: goto label_2ce520;
            case 0x2CE524u: goto label_2ce524;
            case 0x2CE528u: goto label_2ce528;
            case 0x2CE52Cu: goto label_2ce52c;
            case 0x2CE530u: goto label_2ce530;
            case 0x2CE534u: goto label_2ce534;
            case 0x2CE538u: goto label_2ce538;
            case 0x2CE53Cu: goto label_2ce53c;
            case 0x2CE540u: goto label_2ce540;
            case 0x2CE544u: goto label_2ce544;
            case 0x2CE548u: goto label_2ce548;
            case 0x2CE54Cu: goto label_2ce54c;
            case 0x2CE550u: goto label_2ce550;
            case 0x2CE554u: goto label_2ce554;
            case 0x2CE558u: goto label_2ce558;
            case 0x2CE55Cu: goto label_2ce55c;
            case 0x2CE560u: goto label_2ce560;
            case 0x2CE564u: goto label_2ce564;
            case 0x2CE568u: goto label_2ce568;
            case 0x2CE56Cu: goto label_2ce56c;
            case 0x2CE570u: goto label_2ce570;
            case 0x2CE574u: goto label_2ce574;
            case 0x2CE578u: goto label_2ce578;
            case 0x2CE57Cu: goto label_2ce57c;
            case 0x2CE580u: goto label_2ce580;
            case 0x2CE584u: goto label_2ce584;
            case 0x2CE588u: goto label_2ce588;
            case 0x2CE58Cu: goto label_2ce58c;
            case 0x2CE590u: goto label_2ce590;
            case 0x2CE594u: goto label_2ce594;
            case 0x2CE598u: goto label_2ce598;
            case 0x2CE59Cu: goto label_2ce59c;
            case 0x2CE5A0u: goto label_2ce5a0;
            case 0x2CE5A4u: goto label_2ce5a4;
            case 0x2CE5A8u: goto label_2ce5a8;
            case 0x2CE5ACu: goto label_2ce5ac;
            case 0x2CE5B0u: goto label_2ce5b0;
            case 0x2CE5B4u: goto label_2ce5b4;
            case 0x2CE5B8u: goto label_2ce5b8;
            case 0x2CE5BCu: goto label_2ce5bc;
            case 0x2CE5C0u: goto label_2ce5c0;
            case 0x2CE5C4u: goto label_2ce5c4;
            case 0x2CE5C8u: goto label_2ce5c8;
            case 0x2CE5CCu: goto label_2ce5cc;
            case 0x2CE5D0u: goto label_2ce5d0;
            case 0x2CE5D4u: goto label_2ce5d4;
            case 0x2CE5D8u: goto label_2ce5d8;
            case 0x2CE5DCu: goto label_2ce5dc;
            case 0x2CE5E0u: goto label_2ce5e0;
            case 0x2CE5E4u: goto label_2ce5e4;
            case 0x2CE5E8u: goto label_2ce5e8;
            case 0x2CE5ECu: goto label_2ce5ec;
            case 0x2CE5F0u: goto label_2ce5f0;
            case 0x2CE5F4u: goto label_2ce5f4;
            case 0x2CE5F8u: goto label_2ce5f8;
            case 0x2CE5FCu: goto label_2ce5fc;
            case 0x2CE600u: goto label_2ce600;
            case 0x2CE604u: goto label_2ce604;
            case 0x2CE608u: goto label_2ce608;
            case 0x2CE60Cu: goto label_2ce60c;
            case 0x2CE610u: goto label_2ce610;
            case 0x2CE614u: goto label_2ce614;
            case 0x2CE618u: goto label_2ce618;
            case 0x2CE61Cu: goto label_2ce61c;
            case 0x2CE620u: goto label_2ce620;
            case 0x2CE624u: goto label_2ce624;
            case 0x2CE628u: goto label_2ce628;
            case 0x2CE62Cu: goto label_2ce62c;
            case 0x2CE630u: goto label_2ce630;
            case 0x2CE634u: goto label_2ce634;
            case 0x2CE638u: goto label_2ce638;
            case 0x2CE63Cu: goto label_2ce63c;
            case 0x2CE640u: goto label_2ce640;
            case 0x2CE644u: goto label_2ce644;
            case 0x2CE648u: goto label_2ce648;
            case 0x2CE64Cu: goto label_2ce64c;
            case 0x2CE650u: goto label_2ce650;
            case 0x2CE654u: goto label_2ce654;
            case 0x2CE658u: goto label_2ce658;
            case 0x2CE65Cu: goto label_2ce65c;
            case 0x2CE660u: goto label_2ce660;
            case 0x2CE664u: goto label_2ce664;
            case 0x2CE668u: goto label_2ce668;
            case 0x2CE66Cu: goto label_2ce66c;
            case 0x2CE670u: goto label_2ce670;
            case 0x2CE674u: goto label_2ce674;
            case 0x2CE678u: goto label_2ce678;
            case 0x2CE67Cu: goto label_2ce67c;
            case 0x2CE680u: goto label_2ce680;
            case 0x2CE684u: goto label_2ce684;
            case 0x2CE688u: goto label_2ce688;
            case 0x2CE68Cu: goto label_2ce68c;
            case 0x2CE690u: goto label_2ce690;
            case 0x2CE694u: goto label_2ce694;
            case 0x2CE698u: goto label_2ce698;
            case 0x2CE69Cu: goto label_2ce69c;
            case 0x2CE6A0u: goto label_2ce6a0;
            case 0x2CE6A4u: goto label_2ce6a4;
            case 0x2CE6A8u: goto label_2ce6a8;
            case 0x2CE6ACu: goto label_2ce6ac;
            case 0x2CE6B0u: goto label_2ce6b0;
            case 0x2CE6B4u: goto label_2ce6b4;
            case 0x2CE6B8u: goto label_2ce6b8;
            case 0x2CE6BCu: goto label_2ce6bc;
            case 0x2CE6C0u: goto label_2ce6c0;
            case 0x2CE6C4u: goto label_2ce6c4;
            case 0x2CE6C8u: goto label_2ce6c8;
            case 0x2CE6CCu: goto label_2ce6cc;
            case 0x2CE6D0u: goto label_2ce6d0;
            case 0x2CE6D4u: goto label_2ce6d4;
            case 0x2CE6D8u: goto label_2ce6d8;
            case 0x2CE6DCu: goto label_2ce6dc;
            case 0x2CE6E0u: goto label_2ce6e0;
            case 0x2CE6E4u: goto label_2ce6e4;
            case 0x2CE6E8u: goto label_2ce6e8;
            case 0x2CE6ECu: goto label_2ce6ec;
            case 0x2CE6F0u: goto label_2ce6f0;
            case 0x2CE6F4u: goto label_2ce6f4;
            case 0x2CE6F8u: goto label_2ce6f8;
            case 0x2CE6FCu: goto label_2ce6fc;
            case 0x2CE700u: goto label_2ce700;
            case 0x2CE704u: goto label_2ce704;
            case 0x2CE708u: goto label_2ce708;
            case 0x2CE70Cu: goto label_2ce70c;
            case 0x2CE710u: goto label_2ce710;
            case 0x2CE714u: goto label_2ce714;
            case 0x2CE718u: goto label_2ce718;
            case 0x2CE71Cu: goto label_2ce71c;
            case 0x2CE720u: goto label_2ce720;
            case 0x2CE724u: goto label_2ce724;
            case 0x2CE728u: goto label_2ce728;
            case 0x2CE72Cu: goto label_2ce72c;
            case 0x2CE730u: goto label_2ce730;
            case 0x2CE734u: goto label_2ce734;
            case 0x2CE738u: goto label_2ce738;
            case 0x2CE73Cu: goto label_2ce73c;
            case 0x2CE740u: goto label_2ce740;
            case 0x2CE744u: goto label_2ce744;
            case 0x2CE748u: goto label_2ce748;
            case 0x2CE74Cu: goto label_2ce74c;
            case 0x2CE750u: goto label_2ce750;
            case 0x2CE754u: goto label_2ce754;
            case 0x2CE758u: goto label_2ce758;
            case 0x2CE75Cu: goto label_2ce75c;
            case 0x2CE760u: goto label_2ce760;
            case 0x2CE764u: goto label_2ce764;
            case 0x2CE768u: goto label_2ce768;
            case 0x2CE76Cu: goto label_2ce76c;
            case 0x2CE770u: goto label_2ce770;
            case 0x2CE774u: goto label_2ce774;
            case 0x2CE778u: goto label_2ce778;
            case 0x2CE77Cu: goto label_2ce77c;
            case 0x2CE780u: goto label_2ce780;
            case 0x2CE784u: goto label_2ce784;
            case 0x2CE788u: goto label_2ce788;
            case 0x2CE78Cu: goto label_2ce78c;
            case 0x2CE790u: goto label_2ce790;
            case 0x2CE794u: goto label_2ce794;
            case 0x2CE798u: goto label_2ce798;
            case 0x2CE79Cu: goto label_2ce79c;
            case 0x2CE7A0u: goto label_2ce7a0;
            case 0x2CE7A4u: goto label_2ce7a4;
            case 0x2CE7A8u: goto label_2ce7a8;
            case 0x2CE7ACu: goto label_2ce7ac;
            case 0x2CE7B0u: goto label_2ce7b0;
            case 0x2CE7B4u: goto label_2ce7b4;
            case 0x2CE7B8u: goto label_2ce7b8;
            case 0x2CE7BCu: goto label_2ce7bc;
            case 0x2CE7C0u: goto label_2ce7c0;
            case 0x2CE7C4u: goto label_2ce7c4;
            case 0x2CE7C8u: goto label_2ce7c8;
            case 0x2CE7CCu: goto label_2ce7cc;
            case 0x2CE7D0u: goto label_2ce7d0;
            case 0x2CE7D4u: goto label_2ce7d4;
            case 0x2CE7D8u: goto label_2ce7d8;
            case 0x2CE7DCu: goto label_2ce7dc;
            case 0x2CE7E0u: goto label_2ce7e0;
            case 0x2CE7E4u: goto label_2ce7e4;
            case 0x2CE7E8u: goto label_2ce7e8;
            case 0x2CE7ECu: goto label_2ce7ec;
            case 0x2CE7F0u: goto label_2ce7f0;
            case 0x2CE7F4u: goto label_2ce7f4;
            case 0x2CE7F8u: goto label_2ce7f8;
            case 0x2CE7FCu: goto label_2ce7fc;
            case 0x2CE800u: goto label_2ce800;
            case 0x2CE804u: goto label_2ce804;
            case 0x2CE808u: goto label_2ce808;
            case 0x2CE80Cu: goto label_2ce80c;
            case 0x2CE810u: goto label_2ce810;
            case 0x2CE814u: goto label_2ce814;
            case 0x2CE818u: goto label_2ce818;
            case 0x2CE81Cu: goto label_2ce81c;
            case 0x2CE820u: goto label_2ce820;
            case 0x2CE824u: goto label_2ce824;
            case 0x2CE828u: goto label_2ce828;
            case 0x2CE82Cu: goto label_2ce82c;
            case 0x2CE830u: goto label_2ce830;
            case 0x2CE834u: goto label_2ce834;
            case 0x2CE838u: goto label_2ce838;
            case 0x2CE83Cu: goto label_2ce83c;
            case 0x2CE840u: goto label_2ce840;
            case 0x2CE844u: goto label_2ce844;
            case 0x2CE848u: goto label_2ce848;
            case 0x2CE84Cu: goto label_2ce84c;
            case 0x2CE850u: goto label_2ce850;
            case 0x2CE854u: goto label_2ce854;
            case 0x2CE858u: goto label_2ce858;
            case 0x2CE85Cu: goto label_2ce85c;
            case 0x2CE860u: goto label_2ce860;
            case 0x2CE864u: goto label_2ce864;
            case 0x2CE868u: goto label_2ce868;
            case 0x2CE86Cu: goto label_2ce86c;
            case 0x2CE870u: goto label_2ce870;
            case 0x2CE874u: goto label_2ce874;
            case 0x2CE878u: goto label_2ce878;
            case 0x2CE87Cu: goto label_2ce87c;
            case 0x2CE880u: goto label_2ce880;
            case 0x2CE884u: goto label_2ce884;
            case 0x2CE888u: goto label_2ce888;
            case 0x2CE88Cu: goto label_2ce88c;
            case 0x2CE890u: goto label_2ce890;
            case 0x2CE894u: goto label_2ce894;
            case 0x2CE898u: goto label_2ce898;
            case 0x2CE89Cu: goto label_2ce89c;
            case 0x2CE8A0u: goto label_2ce8a0;
            case 0x2CE8A4u: goto label_2ce8a4;
            case 0x2CE8A8u: goto label_2ce8a8;
            case 0x2CE8ACu: goto label_2ce8ac;
            case 0x2CE8B0u: goto label_2ce8b0;
            case 0x2CE8B4u: goto label_2ce8b4;
            case 0x2CE8B8u: goto label_2ce8b8;
            case 0x2CE8BCu: goto label_2ce8bc;
            case 0x2CE8C0u: goto label_2ce8c0;
            case 0x2CE8C4u: goto label_2ce8c4;
            case 0x2CE8C8u: goto label_2ce8c8;
            case 0x2CE8CCu: goto label_2ce8cc;
            case 0x2CE8D0u: goto label_2ce8d0;
            case 0x2CE8D4u: goto label_2ce8d4;
            case 0x2CE8D8u: goto label_2ce8d8;
            case 0x2CE8DCu: goto label_2ce8dc;
            case 0x2CE8E0u: goto label_2ce8e0;
            case 0x2CE8E4u: goto label_2ce8e4;
            case 0x2CE8E8u: goto label_2ce8e8;
            case 0x2CE8ECu: goto label_2ce8ec;
            case 0x2CE8F0u: goto label_2ce8f0;
            case 0x2CE8F4u: goto label_2ce8f4;
            case 0x2CE8F8u: goto label_2ce8f8;
            case 0x2CE8FCu: goto label_2ce8fc;
            case 0x2CE900u: goto label_2ce900;
            case 0x2CE904u: goto label_2ce904;
            case 0x2CE908u: goto label_2ce908;
            case 0x2CE90Cu: goto label_2ce90c;
            case 0x2CE910u: goto label_2ce910;
            case 0x2CE914u: goto label_2ce914;
            case 0x2CE918u: goto label_2ce918;
            case 0x2CE91Cu: goto label_2ce91c;
            case 0x2CE920u: goto label_2ce920;
            case 0x2CE924u: goto label_2ce924;
            case 0x2CE928u: goto label_2ce928;
            case 0x2CE92Cu: goto label_2ce92c;
            case 0x2CE930u: goto label_2ce930;
            case 0x2CE934u: goto label_2ce934;
            case 0x2CE938u: goto label_2ce938;
            case 0x2CE93Cu: goto label_2ce93c;
            case 0x2CE940u: goto label_2ce940;
            case 0x2CE944u: goto label_2ce944;
            case 0x2CE948u: goto label_2ce948;
            case 0x2CE94Cu: goto label_2ce94c;
            case 0x2CE950u: goto label_2ce950;
            case 0x2CE954u: goto label_2ce954;
            case 0x2CE958u: goto label_2ce958;
            case 0x2CE95Cu: goto label_2ce95c;
            case 0x2CE960u: goto label_2ce960;
            case 0x2CE964u: goto label_2ce964;
            case 0x2CE968u: goto label_2ce968;
            case 0x2CE96Cu: goto label_2ce96c;
            case 0x2CE970u: goto label_2ce970;
            case 0x2CE974u: goto label_2ce974;
            case 0x2CE978u: goto label_2ce978;
            case 0x2CE97Cu: goto label_2ce97c;
            case 0x2CE980u: goto label_2ce980;
            case 0x2CE984u: goto label_2ce984;
            case 0x2CE988u: goto label_2ce988;
            case 0x2CE98Cu: goto label_2ce98c;
            case 0x2CE990u: goto label_2ce990;
            case 0x2CE994u: goto label_2ce994;
            case 0x2CE998u: goto label_2ce998;
            case 0x2CE99Cu: goto label_2ce99c;
            case 0x2CE9A0u: goto label_2ce9a0;
            case 0x2CE9A4u: goto label_2ce9a4;
            case 0x2CE9A8u: goto label_2ce9a8;
            case 0x2CE9ACu: goto label_2ce9ac;
            case 0x2CE9B0u: goto label_2ce9b0;
            case 0x2CE9B4u: goto label_2ce9b4;
            case 0x2CE9B8u: goto label_2ce9b8;
            case 0x2CE9BCu: goto label_2ce9bc;
            case 0x2CE9C0u: goto label_2ce9c0;
            case 0x2CE9C4u: goto label_2ce9c4;
            case 0x2CE9C8u: goto label_2ce9c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CE858u; }
            if (ctx->pc != 0x2CE858u) { return; }
        }
    }
    ctx->pc = 0x2CE858u;
label_2ce858:
    // 0x2ce858: 0x3c013f80
    ctx->pc = 0x2ce858u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2ce85c:
    // 0x2ce85c: 0x44810000
    ctx->pc = 0x2ce85cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2ce860:
    // 0x2ce860: 0xe7a0000c
    ctx->pc = 0x2ce860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2ce864:
    // 0x2ce864: 0x8fa30084
    ctx->pc = 0x2ce864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2ce868:
    // 0x2ce868: 0x1060001a
label_2ce86c:
    if (ctx->pc == 0x2CE86Cu) {
        ctx->pc = 0x2CE86Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->pc = 0x2CE870u;
        goto label_2ce870;
    }
    ctx->pc = 0x2CE868u;
    {
        const bool branch_taken_0x2ce868 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE86Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 124)));
        if (branch_taken_0x2ce868) {
            ctx->pc = 0x2CE8D4u;
            goto label_2ce8d4;
        }
    }
    ctx->pc = 0x2CE870u;
label_2ce870:
    // 0x2ce870: 0x31027
    ctx->pc = 0x2ce870u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2ce874:
    // 0x2ce874: 0x10800022
label_2ce878:
    if (ctx->pc == 0x2CE878u) {
        ctx->pc = 0x2CE878u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x2CE87Cu;
        goto label_2ce87c;
    }
    ctx->pc = 0x2CE874u;
    {
        const bool branch_taken_0x2ce874 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE878u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x2ce874) {
            ctx->pc = 0x2CE900u;
            goto label_2ce900;
        }
    }
    ctx->pc = 0x2CE87Cu;
label_2ce87c:
    // 0x2ce87c: 0x27a20040
    ctx->pc = 0x2ce87cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 64));
label_2ce880:
    // 0x2ce880: 0x40302d
    ctx->pc = 0x2ce880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce884:
    // 0x2ce884: 0x44102b
    ctx->pc = 0x2ce884u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ce888:
    // 0x2ce888: 0x14400012
label_2ce88c:
    if (ctx->pc == 0x2CE88Cu) {
        ctx->pc = 0x2CE88Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2CE890u;
        goto label_2ce890;
    }
    ctx->pc = 0x2CE888u;
    {
        const bool branch_taken_0x2ce888 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CE88Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x2ce888) {
            ctx->pc = 0x2CE8D4u;
            goto label_2ce8d4;
        }
    }
    ctx->pc = 0x2CE890u;
label_2ce890:
    // 0x2ce890: 0xc4800008
    ctx->pc = 0x2ce890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce894:
    // 0x2ce894: 0x0
    ctx->pc = 0x2ce894u;
    // NOP
label_2ce898:
    // 0x2ce898: 0x4600a002
    ctx->pc = 0x2ce898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2ce89c:
    // 0x2ce89c: 0xc4810004
    ctx->pc = 0x2ce89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce8a0:
    // 0x2ce8a0: 0x46010000
    ctx->pc = 0x2ce8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ce8a4:
    // 0x2ce8a4: 0x46000064
    ctx->pc = 0x2ce8a4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2ce8a8:
    // 0x2ce8a8: 0x44030800
    ctx->pc = 0x2ce8a8u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
label_2ce8ac:
    // 0x2ce8ac: 0x851023
    ctx->pc = 0x2ce8acu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2ce8b0:
    // 0x2ce8b0: 0x21103
    ctx->pc = 0x2ce8b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2ce8b4:
    // 0x2ce8b4: 0x210c0
    ctx->pc = 0x2ce8b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_2ce8b8:
    // 0x2ce8b8: 0x431804
    ctx->pc = 0x2ce8b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2ce8bc:
    // 0x2ce8bc: 0x8c84000c
    ctx->pc = 0x2ce8bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ce8c0:
    // 0x2ce8c0: 0x1080000f
label_2ce8c4:
    if (ctx->pc == 0x2CE8C4u) {
        ctx->pc = 0x2CE8C4u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x2CE8C8u;
        goto label_2ce8c8;
    }
    ctx->pc = 0x2CE8C0u;
    {
        const bool branch_taken_0x2ce8c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE8C4u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        if (branch_taken_0x2ce8c0) {
            ctx->pc = 0x2CE900u;
            goto label_2ce900;
        }
    }
    ctx->pc = 0x2CE8C8u;
label_2ce8c8:
    // 0x2ce8c8: 0xc4102b
    ctx->pc = 0x2ce8c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2ce8cc:
    // 0x2ce8cc: 0x5040fff2
label_2ce8d0:
    if (ctx->pc == 0x2CE8D0u) {
        ctx->pc = 0x2CE8D0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2CE8D4u;
        goto label_2ce8d4;
    }
    ctx->pc = 0x2CE8CCu;
    {
        const bool branch_taken_0x2ce8cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ce8cc) {
            ctx->pc = 0x2CE8D0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2CE898u;
            goto label_2ce898;
        }
    }
    ctx->pc = 0x2CE8D4u;
label_2ce8d4:
    // 0x2ce8d4: 0x5080000b
label_2ce8d8:
    if (ctx->pc == 0x2CE8D8u) {
        ctx->pc = 0x2CE8D8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2CE8DCu;
        goto label_2ce8dc;
    }
    ctx->pc = 0x2CE8D4u;
    {
        const bool branch_taken_0x2ce8d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ce8d4) {
            ctx->pc = 0x2CE8D8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x2CE904u;
            goto label_2ce904;
        }
    }
    ctx->pc = 0x2CE8DCu;
label_2ce8dc:
    // 0x2ce8dc: 0x0
    ctx->pc = 0x2ce8dcu;
    // NOP
label_2ce8e0:
    // 0x2ce8e0: 0xc4800008
    ctx->pc = 0x2ce8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce8e4:
    // 0x2ce8e4: 0x4600a002
    ctx->pc = 0x2ce8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2ce8e8:
    // 0x2ce8e8: 0xc4810004
    ctx->pc = 0x2ce8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce8ec:
    // 0x2ce8ec: 0x46010000
    ctx->pc = 0x2ce8ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ce8f0:
    // 0x2ce8f0: 0xe4800000
    ctx->pc = 0x2ce8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2ce8f4:
    // 0x2ce8f4: 0x8c84000c
    ctx->pc = 0x2ce8f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ce8f8:
    // 0x2ce8f8: 0x1480fff9
label_2ce8fc:
    if (ctx->pc == 0x2CE8FCu) {
        ctx->pc = 0x2CE900u;
        goto label_2ce900;
    }
    ctx->pc = 0x2CE8F8u;
    {
        const bool branch_taken_0x2ce8f8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ce8f8) {
            ctx->pc = 0x2CE8E0u;
            goto label_2ce8e0;
        }
    }
    ctx->pc = 0x2CE900u;
label_2ce900:
    // 0x2ce900: 0xc7ac0050
    ctx->pc = 0x2ce900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ce904:
    // 0x2ce904: 0xc6e00040
    ctx->pc = 0x2ce904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce908:
    // 0x2ce908: 0x0
    ctx->pc = 0x2ce908u;
    // NOP
label_2ce90c:
    // 0x2ce90c: 0x0
    ctx->pc = 0x2ce90cu;
    // NOP
label_2ce910:
    // 0x2ce910: 0x46006303
    ctx->pc = 0x2ce910u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
label_2ce914:
    // 0x2ce914: 0x8fa20060
    ctx->pc = 0x2ce914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ce918:
    // 0x2ce918: 0xc4400044
    ctx->pc = 0x2ce918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce91c:
    // 0x2ce91c: 0x96220080
    ctx->pc = 0x2ce91cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
label_2ce920:
    // 0x2ce920: 0x24420001
    ctx->pc = 0x2ce920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ce924:
    // 0x2ce924: 0xa6220080
    ctx->pc = 0x2ce924u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 2));
label_2ce928:
    // 0x2ce928: 0x3a0202d
    ctx->pc = 0x2ce928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ce92c:
    // 0x2ce92c: 0x200282d
    ctx->pc = 0x2ce92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce930:
    // 0x2ce930: 0x46006302
    ctx->pc = 0x2ce930u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2ce934:
    // 0x2ce934: 0x8e260088
    ctx->pc = 0x2ce934u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2ce938:
    // 0x2ce938: 0x8fa70088
    ctx->pc = 0x2ce938u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2ce93c:
    // 0x2ce93c: 0xc0b362a
label_2ce940:
    if (ctx->pc == 0x2CE940u) {
        ctx->pc = 0x2CE940u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->pc = 0x2CE944u;
        goto label_2ce944;
    }
    ctx->pc = 0x2CE93Cu;
    SET_GPR_U32(ctx, 31, 0x2CE944u);
    ctx->pc = 0x2CE940u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 140)));
    ctx->pc = 0x2CD8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawPsysSub_0x2cd8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE944u; }
    }
    if (ctx->pc != 0x2CE944u) { return; }
    ctx->pc = 0x2CE944u;
label_2ce944:
    // 0x2ce944: 0x8fa30068
    ctx->pc = 0x2ce944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2ce948:
    // 0x2ce948: 0x2463fffe
    ctx->pc = 0x2ce948u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
label_2ce94c:
    // 0x2ce94c: 0x14740006
label_2ce950:
    if (ctx->pc == 0x2CE950u) {
        ctx->pc = 0x2CE950u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->pc = 0x2CE954u;
        goto label_2ce954;
    }
    ctx->pc = 0x2CE94Cu;
    {
        const bool branch_taken_0x2ce94c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 20));
        ctx->pc = 0x2CE950u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        if (branch_taken_0x2ce94c) {
            ctx->pc = 0x2CE968u;
            goto label_2ce968;
        }
    }
    ctx->pc = 0x2CE954u;
label_2ce954:
    // 0x2ce954: 0x1076000b
label_2ce958:
    if (ctx->pc == 0x2CE958u) {
        ctx->pc = 0x2CE958u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->pc = 0x2CE95Cu;
        goto label_2ce95c;
    }
    ctx->pc = 0x2CE954u;
    {
        const bool branch_taken_0x2ce954 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 22));
        ctx->pc = 0x2CE958u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 108)));
        if (branch_taken_0x2ce954) {
            ctx->pc = 0x2CE984u;
            goto label_2ce984;
        }
    }
    ctx->pc = 0x2CE95Cu;
label_2ce95c:
    // 0x2ce95c: 0x2484fffe
    ctx->pc = 0x2ce95cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_2ce960:
    // 0x2ce960: 0xafa40068
    ctx->pc = 0x2ce960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_2ce964:
    // 0x2ce964: 0x2c0a02d
    ctx->pc = 0x2ce964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ce968:
    // 0x2ce968: 0x27e1024
    ctx->pc = 0x2ce968u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_2ce96c:
    // 0x2ce96c: 0x44820000
    ctx->pc = 0x2ce96cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2ce970:
    // 0x2ce970: 0x46800020
    ctx->pc = 0x2ce970u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2ce974:
    // 0x2ce974: 0x4600a500
    ctx->pc = 0x2ce974u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2ce978:
    // 0x2ce978: 0x8fa50068
    ctx->pc = 0x2ce978u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2ce97c:
    // 0x2ce97c: 0x1000ff6e
label_2ce980:
    if (ctx->pc == 0x2CE980u) {
        ctx->pc = 0x2CE980u;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x2CE984u;
        goto label_2ce984;
    }
    ctx->pc = 0x2CE97Cu;
    {
        const bool branch_taken_0x2ce97c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CE980u;
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2ce97c) {
            ctx->pc = 0x2CE738u;
            goto label_2ce738;
        }
    }
    ctx->pc = 0x2CE984u;
label_2ce984:
    // 0x2ce984: 0x102d
    ctx->pc = 0x2ce984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce988:
    // 0x2ce988: 0xdfbf0120
    ctx->pc = 0x2ce988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2ce98c:
    // 0x2ce98c: 0xdfbe0110
    ctx->pc = 0x2ce98cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2ce990:
    // 0x2ce990: 0xdfb70100
    ctx->pc = 0x2ce990u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2ce994:
    // 0x2ce994: 0xdfb600f0
    ctx->pc = 0x2ce994u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2ce998:
    // 0x2ce998: 0xdfb500e0
    ctx->pc = 0x2ce998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2ce99c:
    // 0x2ce99c: 0xdfb400d0
    ctx->pc = 0x2ce99cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2ce9a0:
    // 0x2ce9a0: 0xdfb300c0
    ctx->pc = 0x2ce9a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2ce9a4:
    // 0x2ce9a4: 0xdfb200b0
    ctx->pc = 0x2ce9a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2ce9a8:
    // 0x2ce9a8: 0xdfb100a0
    ctx->pc = 0x2ce9a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2ce9ac:
    // 0x2ce9ac: 0xdfb00090
    ctx->pc = 0x2ce9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ce9b0:
    // 0x2ce9b0: 0xc7b80150
    ctx->pc = 0x2ce9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2ce9b4:
    // 0x2ce9b4: 0xc7b70148
    ctx->pc = 0x2ce9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2ce9b8:
    // 0x2ce9b8: 0xc7b60140
    ctx->pc = 0x2ce9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2ce9bc:
    // 0x2ce9bc: 0xc7b50138
    ctx->pc = 0x2ce9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ce9c0:
    // 0x2ce9c0: 0xc7b40130
    ctx->pc = 0x2ce9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ce9c4:
    // 0x2ce9c4: 0x3e00008
label_2ce9c8:
    if (ctx->pc == 0x2CE9C8u) {
        ctx->pc = 0x2CE9C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x2CE9CCu;
        goto label_fallthrough_0x2ce9c4;
    }
    ctx->pc = 0x2CE9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE9C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CDDF8u: goto label_2cddf8;
            case 0x2CDDFCu: goto label_2cddfc;
            case 0x2CDE00u: goto label_2cde00;
            case 0x2CDE04u: goto label_2cde04;
            case 0x2CDE08u: goto label_2cde08;
            case 0x2CDE0Cu: goto label_2cde0c;
            case 0x2CDE10u: goto label_2cde10;
            case 0x2CDE14u: goto label_2cde14;
            case 0x2CDE18u: goto label_2cde18;
            case 0x2CDE1Cu: goto label_2cde1c;
            case 0x2CDE20u: goto label_2cde20;
            case 0x2CDE24u: goto label_2cde24;
            case 0x2CDE28u: goto label_2cde28;
            case 0x2CDE2Cu: goto label_2cde2c;
            case 0x2CDE30u: goto label_2cde30;
            case 0x2CDE34u: goto label_2cde34;
            case 0x2CDE38u: goto label_2cde38;
            case 0x2CDE3Cu: goto label_2cde3c;
            case 0x2CDE40u: goto label_2cde40;
            case 0x2CDE44u: goto label_2cde44;
            case 0x2CDE48u: goto label_2cde48;
            case 0x2CDE4Cu: goto label_2cde4c;
            case 0x2CDE50u: goto label_2cde50;
            case 0x2CDE54u: goto label_2cde54;
            case 0x2CDE58u: goto label_2cde58;
            case 0x2CDE5Cu: goto label_2cde5c;
            case 0x2CDE60u: goto label_2cde60;
            case 0x2CDE64u: goto label_2cde64;
            case 0x2CDE68u: goto label_2cde68;
            case 0x2CDE6Cu: goto label_2cde6c;
            case 0x2CDE70u: goto label_2cde70;
            case 0x2CDE74u: goto label_2cde74;
            case 0x2CDE78u: goto label_2cde78;
            case 0x2CDE7Cu: goto label_2cde7c;
            case 0x2CDE80u: goto label_2cde80;
            case 0x2CDE84u: goto label_2cde84;
            case 0x2CDE88u: goto label_2cde88;
            case 0x2CDE8Cu: goto label_2cde8c;
            case 0x2CDE90u: goto label_2cde90;
            case 0x2CDE94u: goto label_2cde94;
            case 0x2CDE98u: goto label_2cde98;
            case 0x2CDE9Cu: goto label_2cde9c;
            case 0x2CDEA0u: goto label_2cdea0;
            case 0x2CDEA4u: goto label_2cdea4;
            case 0x2CDEA8u: goto label_2cdea8;
            case 0x2CDEACu: goto label_2cdeac;
            case 0x2CDEB0u: goto label_2cdeb0;
            case 0x2CDEB4u: goto label_2cdeb4;
            case 0x2CDEB8u: goto label_2cdeb8;
            case 0x2CDEBCu: goto label_2cdebc;
            case 0x2CDEC0u: goto label_2cdec0;
            case 0x2CDEC4u: goto label_2cdec4;
            case 0x2CDEC8u: goto label_2cdec8;
            case 0x2CDECCu: goto label_2cdecc;
            case 0x2CDED0u: goto label_2cded0;
            case 0x2CDED4u: goto label_2cded4;
            case 0x2CDED8u: goto label_2cded8;
            case 0x2CDEDCu: goto label_2cdedc;
            case 0x2CDEE0u: goto label_2cdee0;
            case 0x2CDEE4u: goto label_2cdee4;
            case 0x2CDEE8u: goto label_2cdee8;
            case 0x2CDEECu: goto label_2cdeec;
            case 0x2CDEF0u: goto label_2cdef0;
            case 0x2CDEF4u: goto label_2cdef4;
            case 0x2CDEF8u: goto label_2cdef8;
            case 0x2CDEFCu: goto label_2cdefc;
            case 0x2CDF00u: goto label_2cdf00;
            case 0x2CDF04u: goto label_2cdf04;
            case 0x2CDF08u: goto label_2cdf08;
            case 0x2CDF0Cu: goto label_2cdf0c;
            case 0x2CDF10u: goto label_2cdf10;
            case 0x2CDF14u: goto label_2cdf14;
            case 0x2CDF18u: goto label_2cdf18;
            case 0x2CDF1Cu: goto label_2cdf1c;
            case 0x2CDF20u: goto label_2cdf20;
            case 0x2CDF24u: goto label_2cdf24;
            case 0x2CDF28u: goto label_2cdf28;
            case 0x2CDF2Cu: goto label_2cdf2c;
            case 0x2CDF30u: goto label_2cdf30;
            case 0x2CDF34u: goto label_2cdf34;
            case 0x2CDF38u: goto label_2cdf38;
            case 0x2CDF3Cu: goto label_2cdf3c;
            case 0x2CDF40u: goto label_2cdf40;
            case 0x2CDF44u: goto label_2cdf44;
            case 0x2CDF48u: goto label_2cdf48;
            case 0x2CDF4Cu: goto label_2cdf4c;
            case 0x2CDF50u: goto label_2cdf50;
            case 0x2CDF54u: goto label_2cdf54;
            case 0x2CDF58u: goto label_2cdf58;
            case 0x2CDF5Cu: goto label_2cdf5c;
            case 0x2CDF60u: goto label_2cdf60;
            case 0x2CDF64u: goto label_2cdf64;
            case 0x2CDF68u: goto label_2cdf68;
            case 0x2CDF6Cu: goto label_2cdf6c;
            case 0x2CDF70u: goto label_2cdf70;
            case 0x2CDF74u: goto label_2cdf74;
            case 0x2CDF78u: goto label_2cdf78;
            case 0x2CDF7Cu: goto label_2cdf7c;
            case 0x2CDF80u: goto label_2cdf80;
            case 0x2CDF84u: goto label_2cdf84;
            case 0x2CDF88u: goto label_2cdf88;
            case 0x2CDF8Cu: goto label_2cdf8c;
            case 0x2CDF90u: goto label_2cdf90;
            case 0x2CDF94u: goto label_2cdf94;
            case 0x2CDF98u: goto label_2cdf98;
            case 0x2CDF9Cu: goto label_2cdf9c;
            case 0x2CDFA0u: goto label_2cdfa0;
            case 0x2CDFA4u: goto label_2cdfa4;
            case 0x2CDFA8u: goto label_2cdfa8;
            case 0x2CDFACu: goto label_2cdfac;
            case 0x2CDFB0u: goto label_2cdfb0;
            case 0x2CDFB4u: goto label_2cdfb4;
            case 0x2CDFB8u: goto label_2cdfb8;
            case 0x2CDFBCu: goto label_2cdfbc;
            case 0x2CDFC0u: goto label_2cdfc0;
            case 0x2CDFC4u: goto label_2cdfc4;
            case 0x2CDFC8u: goto label_2cdfc8;
            case 0x2CDFCCu: goto label_2cdfcc;
            case 0x2CDFD0u: goto label_2cdfd0;
            case 0x2CDFD4u: goto label_2cdfd4;
            case 0x2CDFD8u: goto label_2cdfd8;
            case 0x2CDFDCu: goto label_2cdfdc;
            case 0x2CDFE0u: goto label_2cdfe0;
            case 0x2CDFE4u: goto label_2cdfe4;
            case 0x2CDFE8u: goto label_2cdfe8;
            case 0x2CDFECu: goto label_2cdfec;
            case 0x2CDFF0u: goto label_2cdff0;
            case 0x2CDFF4u: goto label_2cdff4;
            case 0x2CDFF8u: goto label_2cdff8;
            case 0x2CDFFCu: goto label_2cdffc;
            case 0x2CE000u: goto label_2ce000;
            case 0x2CE004u: goto label_2ce004;
            case 0x2CE008u: goto label_2ce008;
            case 0x2CE00Cu: goto label_2ce00c;
            case 0x2CE010u: goto label_2ce010;
            case 0x2CE014u: goto label_2ce014;
            case 0x2CE018u: goto label_2ce018;
            case 0x2CE01Cu: goto label_2ce01c;
            case 0x2CE020u: goto label_2ce020;
            case 0x2CE024u: goto label_2ce024;
            case 0x2CE028u: goto label_2ce028;
            case 0x2CE02Cu: goto label_2ce02c;
            case 0x2CE030u: goto label_2ce030;
            case 0x2CE034u: goto label_2ce034;
            case 0x2CE038u: goto label_2ce038;
            case 0x2CE03Cu: goto label_2ce03c;
            case 0x2CE040u: goto label_2ce040;
            case 0x2CE044u: goto label_2ce044;
            case 0x2CE048u: goto label_2ce048;
            case 0x2CE04Cu: goto label_2ce04c;
            case 0x2CE050u: goto label_2ce050;
            case 0x2CE054u: goto label_2ce054;
            case 0x2CE058u: goto label_2ce058;
            case 0x2CE05Cu: goto label_2ce05c;
            case 0x2CE060u: goto label_2ce060;
            case 0x2CE064u: goto label_2ce064;
            case 0x2CE068u: goto label_2ce068;
            case 0x2CE06Cu: goto label_2ce06c;
            case 0x2CE070u: goto label_2ce070;
            case 0x2CE074u: goto label_2ce074;
            case 0x2CE078u: goto label_2ce078;
            case 0x2CE07Cu: goto label_2ce07c;
            case 0x2CE080u: goto label_2ce080;
            case 0x2CE084u: goto label_2ce084;
            case 0x2CE088u: goto label_2ce088;
            case 0x2CE08Cu: goto label_2ce08c;
            case 0x2CE090u: goto label_2ce090;
            case 0x2CE094u: goto label_2ce094;
            case 0x2CE098u: goto label_2ce098;
            case 0x2CE09Cu: goto label_2ce09c;
            case 0x2CE0A0u: goto label_2ce0a0;
            case 0x2CE0A4u: goto label_2ce0a4;
            case 0x2CE0A8u: goto label_2ce0a8;
            case 0x2CE0ACu: goto label_2ce0ac;
            case 0x2CE0B0u: goto label_2ce0b0;
            case 0x2CE0B4u: goto label_2ce0b4;
            case 0x2CE0B8u: goto label_2ce0b8;
            case 0x2CE0BCu: goto label_2ce0bc;
            case 0x2CE0C0u: goto label_2ce0c0;
            case 0x2CE0C4u: goto label_2ce0c4;
            case 0x2CE0C8u: goto label_2ce0c8;
            case 0x2CE0CCu: goto label_2ce0cc;
            case 0x2CE0D0u: goto label_2ce0d0;
            case 0x2CE0D4u: goto label_2ce0d4;
            case 0x2CE0D8u: goto label_2ce0d8;
            case 0x2CE0DCu: goto label_2ce0dc;
            case 0x2CE0E0u: goto label_2ce0e0;
            case 0x2CE0E4u: goto label_2ce0e4;
            case 0x2CE0E8u: goto label_2ce0e8;
            case 0x2CE0ECu: goto label_2ce0ec;
            case 0x2CE0F0u: goto label_2ce0f0;
            case 0x2CE0F4u: goto label_2ce0f4;
            case 0x2CE0F8u: goto label_2ce0f8;
            case 0x2CE0FCu: goto label_2ce0fc;
            case 0x2CE100u: goto label_2ce100;
            case 0x2CE104u: goto label_2ce104;
            case 0x2CE108u: goto label_2ce108;
            case 0x2CE10Cu: goto label_2ce10c;
            case 0x2CE110u: goto label_2ce110;
            case 0x2CE114u: goto label_2ce114;
            case 0x2CE118u: goto label_2ce118;
            case 0x2CE11Cu: goto label_2ce11c;
            case 0x2CE120u: goto label_2ce120;
            case 0x2CE124u: goto label_2ce124;
            case 0x2CE128u: goto label_2ce128;
            case 0x2CE12Cu: goto label_2ce12c;
            case 0x2CE130u: goto label_2ce130;
            case 0x2CE134u: goto label_2ce134;
            case 0x2CE138u: goto label_2ce138;
            case 0x2CE13Cu: goto label_2ce13c;
            case 0x2CE140u: goto label_2ce140;
            case 0x2CE144u: goto label_2ce144;
            case 0x2CE148u: goto label_2ce148;
            case 0x2CE14Cu: goto label_2ce14c;
            case 0x2CE150u: goto label_2ce150;
            case 0x2CE154u: goto label_2ce154;
            case 0x2CE158u: goto label_2ce158;
            case 0x2CE15Cu: goto label_2ce15c;
            case 0x2CE160u: goto label_2ce160;
            case 0x2CE164u: goto label_2ce164;
            case 0x2CE168u: goto label_2ce168;
            case 0x2CE16Cu: goto label_2ce16c;
            case 0x2CE170u: goto label_2ce170;
            case 0x2CE174u: goto label_2ce174;
            case 0x2CE178u: goto label_2ce178;
            case 0x2CE17Cu: goto label_2ce17c;
            case 0x2CE180u: goto label_2ce180;
            case 0x2CE184u: goto label_2ce184;
            case 0x2CE188u: goto label_2ce188;
            case 0x2CE18Cu: goto label_2ce18c;
            case 0x2CE190u: goto label_2ce190;
            case 0x2CE194u: goto label_2ce194;
            case 0x2CE198u: goto label_2ce198;
            case 0x2CE19Cu: goto label_2ce19c;
            case 0x2CE1A0u: goto label_2ce1a0;
            case 0x2CE1A4u: goto label_2ce1a4;
            case 0x2CE1A8u: goto label_2ce1a8;
            case 0x2CE1ACu: goto label_2ce1ac;
            case 0x2CE1B0u: goto label_2ce1b0;
            case 0x2CE1B4u: goto label_2ce1b4;
            case 0x2CE1B8u: goto label_2ce1b8;
            case 0x2CE1BCu: goto label_2ce1bc;
            case 0x2CE1C0u: goto label_2ce1c0;
            case 0x2CE1C4u: goto label_2ce1c4;
            case 0x2CE1C8u: goto label_2ce1c8;
            case 0x2CE1CCu: goto label_2ce1cc;
            case 0x2CE1D0u: goto label_2ce1d0;
            case 0x2CE1D4u: goto label_2ce1d4;
            case 0x2CE1D8u: goto label_2ce1d8;
            case 0x2CE1DCu: goto label_2ce1dc;
            case 0x2CE1E0u: goto label_2ce1e0;
            case 0x2CE1E4u: goto label_2ce1e4;
            case 0x2CE1E8u: goto label_2ce1e8;
            case 0x2CE1ECu: goto label_2ce1ec;
            case 0x2CE1F0u: goto label_2ce1f0;
            case 0x2CE1F4u: goto label_2ce1f4;
            case 0x2CE1F8u: goto label_2ce1f8;
            case 0x2CE1FCu: goto label_2ce1fc;
            case 0x2CE200u: goto label_2ce200;
            case 0x2CE204u: goto label_2ce204;
            case 0x2CE208u: goto label_2ce208;
            case 0x2CE20Cu: goto label_2ce20c;
            case 0x2CE210u: goto label_2ce210;
            case 0x2CE214u: goto label_2ce214;
            case 0x2CE218u: goto label_2ce218;
            case 0x2CE21Cu: goto label_2ce21c;
            case 0x2CE220u: goto label_2ce220;
            case 0x2CE224u: goto label_2ce224;
            case 0x2CE228u: goto label_2ce228;
            case 0x2CE22Cu: goto label_2ce22c;
            case 0x2CE230u: goto label_2ce230;
            case 0x2CE234u: goto label_2ce234;
            case 0x2CE238u: goto label_2ce238;
            case 0x2CE23Cu: goto label_2ce23c;
            case 0x2CE240u: goto label_2ce240;
            case 0x2CE244u: goto label_2ce244;
            case 0x2CE248u: goto label_2ce248;
            case 0x2CE24Cu: goto label_2ce24c;
            case 0x2CE250u: goto label_2ce250;
            case 0x2CE254u: goto label_2ce254;
            case 0x2CE258u: goto label_2ce258;
            case 0x2CE25Cu: goto label_2ce25c;
            case 0x2CE260u: goto label_2ce260;
            case 0x2CE264u: goto label_2ce264;
            case 0x2CE268u: goto label_2ce268;
            case 0x2CE26Cu: goto label_2ce26c;
            case 0x2CE270u: goto label_2ce270;
            case 0x2CE274u: goto label_2ce274;
            case 0x2CE278u: goto label_2ce278;
            case 0x2CE27Cu: goto label_2ce27c;
            case 0x2CE280u: goto label_2ce280;
            case 0x2CE284u: goto label_2ce284;
            case 0x2CE288u: goto label_2ce288;
            case 0x2CE28Cu: goto label_2ce28c;
            case 0x2CE290u: goto label_2ce290;
            case 0x2CE294u: goto label_2ce294;
            case 0x2CE298u: goto label_2ce298;
            case 0x2CE29Cu: goto label_2ce29c;
            case 0x2CE2A0u: goto label_2ce2a0;
            case 0x2CE2A4u: goto label_2ce2a4;
            case 0x2CE2A8u: goto label_2ce2a8;
            case 0x2CE2ACu: goto label_2ce2ac;
            case 0x2CE2B0u: goto label_2ce2b0;
            case 0x2CE2B4u: goto label_2ce2b4;
            case 0x2CE2B8u: goto label_2ce2b8;
            case 0x2CE2BCu: goto label_2ce2bc;
            case 0x2CE2C0u: goto label_2ce2c0;
            case 0x2CE2C4u: goto label_2ce2c4;
            case 0x2CE2C8u: goto label_2ce2c8;
            case 0x2CE2CCu: goto label_2ce2cc;
            case 0x2CE2D0u: goto label_2ce2d0;
            case 0x2CE2D4u: goto label_2ce2d4;
            case 0x2CE2D8u: goto label_2ce2d8;
            case 0x2CE2DCu: goto label_2ce2dc;
            case 0x2CE2E0u: goto label_2ce2e0;
            case 0x2CE2E4u: goto label_2ce2e4;
            case 0x2CE2E8u: goto label_2ce2e8;
            case 0x2CE2ECu: goto label_2ce2ec;
            case 0x2CE2F0u: goto label_2ce2f0;
            case 0x2CE2F4u: goto label_2ce2f4;
            case 0x2CE2F8u: goto label_2ce2f8;
            case 0x2CE2FCu: goto label_2ce2fc;
            case 0x2CE300u: goto label_2ce300;
            case 0x2CE304u: goto label_2ce304;
            case 0x2CE308u: goto label_2ce308;
            case 0x2CE30Cu: goto label_2ce30c;
            case 0x2CE310u: goto label_2ce310;
            case 0x2CE314u: goto label_2ce314;
            case 0x2CE318u: goto label_2ce318;
            case 0x2CE31Cu: goto label_2ce31c;
            case 0x2CE320u: goto label_2ce320;
            case 0x2CE324u: goto label_2ce324;
            case 0x2CE328u: goto label_2ce328;
            case 0x2CE32Cu: goto label_2ce32c;
            case 0x2CE330u: goto label_2ce330;
            case 0x2CE334u: goto label_2ce334;
            case 0x2CE338u: goto label_2ce338;
            case 0x2CE33Cu: goto label_2ce33c;
            case 0x2CE340u: goto label_2ce340;
            case 0x2CE344u: goto label_2ce344;
            case 0x2CE348u: goto label_2ce348;
            case 0x2CE34Cu: goto label_2ce34c;
            case 0x2CE350u: goto label_2ce350;
            case 0x2CE354u: goto label_2ce354;
            case 0x2CE358u: goto label_2ce358;
            case 0x2CE35Cu: goto label_2ce35c;
            case 0x2CE360u: goto label_2ce360;
            case 0x2CE364u: goto label_2ce364;
            case 0x2CE368u: goto label_2ce368;
            case 0x2CE36Cu: goto label_2ce36c;
            case 0x2CE370u: goto label_2ce370;
            case 0x2CE374u: goto label_2ce374;
            case 0x2CE378u: goto label_2ce378;
            case 0x2CE37Cu: goto label_2ce37c;
            case 0x2CE380u: goto label_2ce380;
            case 0x2CE384u: goto label_2ce384;
            case 0x2CE388u: goto label_2ce388;
            case 0x2CE38Cu: goto label_2ce38c;
            case 0x2CE390u: goto label_2ce390;
            case 0x2CE394u: goto label_2ce394;
            case 0x2CE398u: goto label_2ce398;
            case 0x2CE39Cu: goto label_2ce39c;
            case 0x2CE3A0u: goto label_2ce3a0;
            case 0x2CE3A4u: goto label_2ce3a4;
            case 0x2CE3A8u: goto label_2ce3a8;
            case 0x2CE3ACu: goto label_2ce3ac;
            case 0x2CE3B0u: goto label_2ce3b0;
            case 0x2CE3B4u: goto label_2ce3b4;
            case 0x2CE3B8u: goto label_2ce3b8;
            case 0x2CE3BCu: goto label_2ce3bc;
            case 0x2CE3C0u: goto label_2ce3c0;
            case 0x2CE3C4u: goto label_2ce3c4;
            case 0x2CE3C8u: goto label_2ce3c8;
            case 0x2CE3CCu: goto label_2ce3cc;
            case 0x2CE3D0u: goto label_2ce3d0;
            case 0x2CE3D4u: goto label_2ce3d4;
            case 0x2CE3D8u: goto label_2ce3d8;
            case 0x2CE3DCu: goto label_2ce3dc;
            case 0x2CE3E0u: goto label_2ce3e0;
            case 0x2CE3E4u: goto label_2ce3e4;
            case 0x2CE3E8u: goto label_2ce3e8;
            case 0x2CE3ECu: goto label_2ce3ec;
            case 0x2CE3F0u: goto label_2ce3f0;
            case 0x2CE3F4u: goto label_2ce3f4;
            case 0x2CE3F8u: goto label_2ce3f8;
            case 0x2CE3FCu: goto label_2ce3fc;
            case 0x2CE400u: goto label_2ce400;
            case 0x2CE404u: goto label_2ce404;
            case 0x2CE408u: goto label_2ce408;
            case 0x2CE40Cu: goto label_2ce40c;
            case 0x2CE410u: goto label_2ce410;
            case 0x2CE414u: goto label_2ce414;
            case 0x2CE418u: goto label_2ce418;
            case 0x2CE41Cu: goto label_2ce41c;
            case 0x2CE420u: goto label_2ce420;
            case 0x2CE424u: goto label_2ce424;
            case 0x2CE428u: goto label_2ce428;
            case 0x2CE42Cu: goto label_2ce42c;
            case 0x2CE430u: goto label_2ce430;
            case 0x2CE434u: goto label_2ce434;
            case 0x2CE438u: goto label_2ce438;
            case 0x2CE43Cu: goto label_2ce43c;
            case 0x2CE440u: goto label_2ce440;
            case 0x2CE444u: goto label_2ce444;
            case 0x2CE448u: goto label_2ce448;
            case 0x2CE44Cu: goto label_2ce44c;
            case 0x2CE450u: goto label_2ce450;
            case 0x2CE454u: goto label_2ce454;
            case 0x2CE458u: goto label_2ce458;
            case 0x2CE45Cu: goto label_2ce45c;
            case 0x2CE460u: goto label_2ce460;
            case 0x2CE464u: goto label_2ce464;
            case 0x2CE468u: goto label_2ce468;
            case 0x2CE46Cu: goto label_2ce46c;
            case 0x2CE470u: goto label_2ce470;
            case 0x2CE474u: goto label_2ce474;
            case 0x2CE478u: goto label_2ce478;
            case 0x2CE47Cu: goto label_2ce47c;
            case 0x2CE480u: goto label_2ce480;
            case 0x2CE484u: goto label_2ce484;
            case 0x2CE488u: goto label_2ce488;
            case 0x2CE48Cu: goto label_2ce48c;
            case 0x2CE490u: goto label_2ce490;
            case 0x2CE494u: goto label_2ce494;
            case 0x2CE498u: goto label_2ce498;
            case 0x2CE49Cu: goto label_2ce49c;
            case 0x2CE4A0u: goto label_2ce4a0;
            case 0x2CE4A4u: goto label_2ce4a4;
            case 0x2CE4A8u: goto label_2ce4a8;
            case 0x2CE4ACu: goto label_2ce4ac;
            case 0x2CE4B0u: goto label_2ce4b0;
            case 0x2CE4B4u: goto label_2ce4b4;
            case 0x2CE4B8u: goto label_2ce4b8;
            case 0x2CE4BCu: goto label_2ce4bc;
            case 0x2CE4C0u: goto label_2ce4c0;
            case 0x2CE4C4u: goto label_2ce4c4;
            case 0x2CE4C8u: goto label_2ce4c8;
            case 0x2CE4CCu: goto label_2ce4cc;
            case 0x2CE4D0u: goto label_2ce4d0;
            case 0x2CE4D4u: goto label_2ce4d4;
            case 0x2CE4D8u: goto label_2ce4d8;
            case 0x2CE4DCu: goto label_2ce4dc;
            case 0x2CE4E0u: goto label_2ce4e0;
            case 0x2CE4E4u: goto label_2ce4e4;
            case 0x2CE4E8u: goto label_2ce4e8;
            case 0x2CE4ECu: goto label_2ce4ec;
            case 0x2CE4F0u: goto label_2ce4f0;
            case 0x2CE4F4u: goto label_2ce4f4;
            case 0x2CE4F8u: goto label_2ce4f8;
            case 0x2CE4FCu: goto label_2ce4fc;
            case 0x2CE500u: goto label_2ce500;
            case 0x2CE504u: goto label_2ce504;
            case 0x2CE508u: goto label_2ce508;
            case 0x2CE50Cu: goto label_2ce50c;
            case 0x2CE510u: goto label_2ce510;
            case 0x2CE514u: goto label_2ce514;
            case 0x2CE518u: goto label_2ce518;
            case 0x2CE51Cu: goto label_2ce51c;
            case 0x2CE520u: goto label_2ce520;
            case 0x2CE524u: goto label_2ce524;
            case 0x2CE528u: goto label_2ce528;
            case 0x2CE52Cu: goto label_2ce52c;
            case 0x2CE530u: goto label_2ce530;
            case 0x2CE534u: goto label_2ce534;
            case 0x2CE538u: goto label_2ce538;
            case 0x2CE53Cu: goto label_2ce53c;
            case 0x2CE540u: goto label_2ce540;
            case 0x2CE544u: goto label_2ce544;
            case 0x2CE548u: goto label_2ce548;
            case 0x2CE54Cu: goto label_2ce54c;
            case 0x2CE550u: goto label_2ce550;
            case 0x2CE554u: goto label_2ce554;
            case 0x2CE558u: goto label_2ce558;
            case 0x2CE55Cu: goto label_2ce55c;
            case 0x2CE560u: goto label_2ce560;
            case 0x2CE564u: goto label_2ce564;
            case 0x2CE568u: goto label_2ce568;
            case 0x2CE56Cu: goto label_2ce56c;
            case 0x2CE570u: goto label_2ce570;
            case 0x2CE574u: goto label_2ce574;
            case 0x2CE578u: goto label_2ce578;
            case 0x2CE57Cu: goto label_2ce57c;
            case 0x2CE580u: goto label_2ce580;
            case 0x2CE584u: goto label_2ce584;
            case 0x2CE588u: goto label_2ce588;
            case 0x2CE58Cu: goto label_2ce58c;
            case 0x2CE590u: goto label_2ce590;
            case 0x2CE594u: goto label_2ce594;
            case 0x2CE598u: goto label_2ce598;
            case 0x2CE59Cu: goto label_2ce59c;
            case 0x2CE5A0u: goto label_2ce5a0;
            case 0x2CE5A4u: goto label_2ce5a4;
            case 0x2CE5A8u: goto label_2ce5a8;
            case 0x2CE5ACu: goto label_2ce5ac;
            case 0x2CE5B0u: goto label_2ce5b0;
            case 0x2CE5B4u: goto label_2ce5b4;
            case 0x2CE5B8u: goto label_2ce5b8;
            case 0x2CE5BCu: goto label_2ce5bc;
            case 0x2CE5C0u: goto label_2ce5c0;
            case 0x2CE5C4u: goto label_2ce5c4;
            case 0x2CE5C8u: goto label_2ce5c8;
            case 0x2CE5CCu: goto label_2ce5cc;
            case 0x2CE5D0u: goto label_2ce5d0;
            case 0x2CE5D4u: goto label_2ce5d4;
            case 0x2CE5D8u: goto label_2ce5d8;
            case 0x2CE5DCu: goto label_2ce5dc;
            case 0x2CE5E0u: goto label_2ce5e0;
            case 0x2CE5E4u: goto label_2ce5e4;
            case 0x2CE5E8u: goto label_2ce5e8;
            case 0x2CE5ECu: goto label_2ce5ec;
            case 0x2CE5F0u: goto label_2ce5f0;
            case 0x2CE5F4u: goto label_2ce5f4;
            case 0x2CE5F8u: goto label_2ce5f8;
            case 0x2CE5FCu: goto label_2ce5fc;
            case 0x2CE600u: goto label_2ce600;
            case 0x2CE604u: goto label_2ce604;
            case 0x2CE608u: goto label_2ce608;
            case 0x2CE60Cu: goto label_2ce60c;
            case 0x2CE610u: goto label_2ce610;
            case 0x2CE614u: goto label_2ce614;
            case 0x2CE618u: goto label_2ce618;
            case 0x2CE61Cu: goto label_2ce61c;
            case 0x2CE620u: goto label_2ce620;
            case 0x2CE624u: goto label_2ce624;
            case 0x2CE628u: goto label_2ce628;
            case 0x2CE62Cu: goto label_2ce62c;
            case 0x2CE630u: goto label_2ce630;
            case 0x2CE634u: goto label_2ce634;
            case 0x2CE638u: goto label_2ce638;
            case 0x2CE63Cu: goto label_2ce63c;
            case 0x2CE640u: goto label_2ce640;
            case 0x2CE644u: goto label_2ce644;
            case 0x2CE648u: goto label_2ce648;
            case 0x2CE64Cu: goto label_2ce64c;
            case 0x2CE650u: goto label_2ce650;
            case 0x2CE654u: goto label_2ce654;
            case 0x2CE658u: goto label_2ce658;
            case 0x2CE65Cu: goto label_2ce65c;
            case 0x2CE660u: goto label_2ce660;
            case 0x2CE664u: goto label_2ce664;
            case 0x2CE668u: goto label_2ce668;
            case 0x2CE66Cu: goto label_2ce66c;
            case 0x2CE670u: goto label_2ce670;
            case 0x2CE674u: goto label_2ce674;
            case 0x2CE678u: goto label_2ce678;
            case 0x2CE67Cu: goto label_2ce67c;
            case 0x2CE680u: goto label_2ce680;
            case 0x2CE684u: goto label_2ce684;
            case 0x2CE688u: goto label_2ce688;
            case 0x2CE68Cu: goto label_2ce68c;
            case 0x2CE690u: goto label_2ce690;
            case 0x2CE694u: goto label_2ce694;
            case 0x2CE698u: goto label_2ce698;
            case 0x2CE69Cu: goto label_2ce69c;
            case 0x2CE6A0u: goto label_2ce6a0;
            case 0x2CE6A4u: goto label_2ce6a4;
            case 0x2CE6A8u: goto label_2ce6a8;
            case 0x2CE6ACu: goto label_2ce6ac;
            case 0x2CE6B0u: goto label_2ce6b0;
            case 0x2CE6B4u: goto label_2ce6b4;
            case 0x2CE6B8u: goto label_2ce6b8;
            case 0x2CE6BCu: goto label_2ce6bc;
            case 0x2CE6C0u: goto label_2ce6c0;
            case 0x2CE6C4u: goto label_2ce6c4;
            case 0x2CE6C8u: goto label_2ce6c8;
            case 0x2CE6CCu: goto label_2ce6cc;
            case 0x2CE6D0u: goto label_2ce6d0;
            case 0x2CE6D4u: goto label_2ce6d4;
            case 0x2CE6D8u: goto label_2ce6d8;
            case 0x2CE6DCu: goto label_2ce6dc;
            case 0x2CE6E0u: goto label_2ce6e0;
            case 0x2CE6E4u: goto label_2ce6e4;
            case 0x2CE6E8u: goto label_2ce6e8;
            case 0x2CE6ECu: goto label_2ce6ec;
            case 0x2CE6F0u: goto label_2ce6f0;
            case 0x2CE6F4u: goto label_2ce6f4;
            case 0x2CE6F8u: goto label_2ce6f8;
            case 0x2CE6FCu: goto label_2ce6fc;
            case 0x2CE700u: goto label_2ce700;
            case 0x2CE704u: goto label_2ce704;
            case 0x2CE708u: goto label_2ce708;
            case 0x2CE70Cu: goto label_2ce70c;
            case 0x2CE710u: goto label_2ce710;
            case 0x2CE714u: goto label_2ce714;
            case 0x2CE718u: goto label_2ce718;
            case 0x2CE71Cu: goto label_2ce71c;
            case 0x2CE720u: goto label_2ce720;
            case 0x2CE724u: goto label_2ce724;
            case 0x2CE728u: goto label_2ce728;
            case 0x2CE72Cu: goto label_2ce72c;
            case 0x2CE730u: goto label_2ce730;
            case 0x2CE734u: goto label_2ce734;
            case 0x2CE738u: goto label_2ce738;
            case 0x2CE73Cu: goto label_2ce73c;
            case 0x2CE740u: goto label_2ce740;
            case 0x2CE744u: goto label_2ce744;
            case 0x2CE748u: goto label_2ce748;
            case 0x2CE74Cu: goto label_2ce74c;
            case 0x2CE750u: goto label_2ce750;
            case 0x2CE754u: goto label_2ce754;
            case 0x2CE758u: goto label_2ce758;
            case 0x2CE75Cu: goto label_2ce75c;
            case 0x2CE760u: goto label_2ce760;
            case 0x2CE764u: goto label_2ce764;
            case 0x2CE768u: goto label_2ce768;
            case 0x2CE76Cu: goto label_2ce76c;
            case 0x2CE770u: goto label_2ce770;
            case 0x2CE774u: goto label_2ce774;
            case 0x2CE778u: goto label_2ce778;
            case 0x2CE77Cu: goto label_2ce77c;
            case 0x2CE780u: goto label_2ce780;
            case 0x2CE784u: goto label_2ce784;
            case 0x2CE788u: goto label_2ce788;
            case 0x2CE78Cu: goto label_2ce78c;
            case 0x2CE790u: goto label_2ce790;
            case 0x2CE794u: goto label_2ce794;
            case 0x2CE798u: goto label_2ce798;
            case 0x2CE79Cu: goto label_2ce79c;
            case 0x2CE7A0u: goto label_2ce7a0;
            case 0x2CE7A4u: goto label_2ce7a4;
            case 0x2CE7A8u: goto label_2ce7a8;
            case 0x2CE7ACu: goto label_2ce7ac;
            case 0x2CE7B0u: goto label_2ce7b0;
            case 0x2CE7B4u: goto label_2ce7b4;
            case 0x2CE7B8u: goto label_2ce7b8;
            case 0x2CE7BCu: goto label_2ce7bc;
            case 0x2CE7C0u: goto label_2ce7c0;
            case 0x2CE7C4u: goto label_2ce7c4;
            case 0x2CE7C8u: goto label_2ce7c8;
            case 0x2CE7CCu: goto label_2ce7cc;
            case 0x2CE7D0u: goto label_2ce7d0;
            case 0x2CE7D4u: goto label_2ce7d4;
            case 0x2CE7D8u: goto label_2ce7d8;
            case 0x2CE7DCu: goto label_2ce7dc;
            case 0x2CE7E0u: goto label_2ce7e0;
            case 0x2CE7E4u: goto label_2ce7e4;
            case 0x2CE7E8u: goto label_2ce7e8;
            case 0x2CE7ECu: goto label_2ce7ec;
            case 0x2CE7F0u: goto label_2ce7f0;
            case 0x2CE7F4u: goto label_2ce7f4;
            case 0x2CE7F8u: goto label_2ce7f8;
            case 0x2CE7FCu: goto label_2ce7fc;
            case 0x2CE800u: goto label_2ce800;
            case 0x2CE804u: goto label_2ce804;
            case 0x2CE808u: goto label_2ce808;
            case 0x2CE80Cu: goto label_2ce80c;
            case 0x2CE810u: goto label_2ce810;
            case 0x2CE814u: goto label_2ce814;
            case 0x2CE818u: goto label_2ce818;
            case 0x2CE81Cu: goto label_2ce81c;
            case 0x2CE820u: goto label_2ce820;
            case 0x2CE824u: goto label_2ce824;
            case 0x2CE828u: goto label_2ce828;
            case 0x2CE82Cu: goto label_2ce82c;
            case 0x2CE830u: goto label_2ce830;
            case 0x2CE834u: goto label_2ce834;
            case 0x2CE838u: goto label_2ce838;
            case 0x2CE83Cu: goto label_2ce83c;
            case 0x2CE840u: goto label_2ce840;
            case 0x2CE844u: goto label_2ce844;
            case 0x2CE848u: goto label_2ce848;
            case 0x2CE84Cu: goto label_2ce84c;
            case 0x2CE850u: goto label_2ce850;
            case 0x2CE854u: goto label_2ce854;
            case 0x2CE858u: goto label_2ce858;
            case 0x2CE85Cu: goto label_2ce85c;
            case 0x2CE860u: goto label_2ce860;
            case 0x2CE864u: goto label_2ce864;
            case 0x2CE868u: goto label_2ce868;
            case 0x2CE86Cu: goto label_2ce86c;
            case 0x2CE870u: goto label_2ce870;
            case 0x2CE874u: goto label_2ce874;
            case 0x2CE878u: goto label_2ce878;
            case 0x2CE87Cu: goto label_2ce87c;
            case 0x2CE880u: goto label_2ce880;
            case 0x2CE884u: goto label_2ce884;
            case 0x2CE888u: goto label_2ce888;
            case 0x2CE88Cu: goto label_2ce88c;
            case 0x2CE890u: goto label_2ce890;
            case 0x2CE894u: goto label_2ce894;
            case 0x2CE898u: goto label_2ce898;
            case 0x2CE89Cu: goto label_2ce89c;
            case 0x2CE8A0u: goto label_2ce8a0;
            case 0x2CE8A4u: goto label_2ce8a4;
            case 0x2CE8A8u: goto label_2ce8a8;
            case 0x2CE8ACu: goto label_2ce8ac;
            case 0x2CE8B0u: goto label_2ce8b0;
            case 0x2CE8B4u: goto label_2ce8b4;
            case 0x2CE8B8u: goto label_2ce8b8;
            case 0x2CE8BCu: goto label_2ce8bc;
            case 0x2CE8C0u: goto label_2ce8c0;
            case 0x2CE8C4u: goto label_2ce8c4;
            case 0x2CE8C8u: goto label_2ce8c8;
            case 0x2CE8CCu: goto label_2ce8cc;
            case 0x2CE8D0u: goto label_2ce8d0;
            case 0x2CE8D4u: goto label_2ce8d4;
            case 0x2CE8D8u: goto label_2ce8d8;
            case 0x2CE8DCu: goto label_2ce8dc;
            case 0x2CE8E0u: goto label_2ce8e0;
            case 0x2CE8E4u: goto label_2ce8e4;
            case 0x2CE8E8u: goto label_2ce8e8;
            case 0x2CE8ECu: goto label_2ce8ec;
            case 0x2CE8F0u: goto label_2ce8f0;
            case 0x2CE8F4u: goto label_2ce8f4;
            case 0x2CE8F8u: goto label_2ce8f8;
            case 0x2CE8FCu: goto label_2ce8fc;
            case 0x2CE900u: goto label_2ce900;
            case 0x2CE904u: goto label_2ce904;
            case 0x2CE908u: goto label_2ce908;
            case 0x2CE90Cu: goto label_2ce90c;
            case 0x2CE910u: goto label_2ce910;
            case 0x2CE914u: goto label_2ce914;
            case 0x2CE918u: goto label_2ce918;
            case 0x2CE91Cu: goto label_2ce91c;
            case 0x2CE920u: goto label_2ce920;
            case 0x2CE924u: goto label_2ce924;
            case 0x2CE928u: goto label_2ce928;
            case 0x2CE92Cu: goto label_2ce92c;
            case 0x2CE930u: goto label_2ce930;
            case 0x2CE934u: goto label_2ce934;
            case 0x2CE938u: goto label_2ce938;
            case 0x2CE93Cu: goto label_2ce93c;
            case 0x2CE940u: goto label_2ce940;
            case 0x2CE944u: goto label_2ce944;
            case 0x2CE948u: goto label_2ce948;
            case 0x2CE94Cu: goto label_2ce94c;
            case 0x2CE950u: goto label_2ce950;
            case 0x2CE954u: goto label_2ce954;
            case 0x2CE958u: goto label_2ce958;
            case 0x2CE95Cu: goto label_2ce95c;
            case 0x2CE960u: goto label_2ce960;
            case 0x2CE964u: goto label_2ce964;
            case 0x2CE968u: goto label_2ce968;
            case 0x2CE96Cu: goto label_2ce96c;
            case 0x2CE970u: goto label_2ce970;
            case 0x2CE974u: goto label_2ce974;
            case 0x2CE978u: goto label_2ce978;
            case 0x2CE97Cu: goto label_2ce97c;
            case 0x2CE980u: goto label_2ce980;
            case 0x2CE984u: goto label_2ce984;
            case 0x2CE988u: goto label_2ce988;
            case 0x2CE98Cu: goto label_2ce98c;
            case 0x2CE990u: goto label_2ce990;
            case 0x2CE994u: goto label_2ce994;
            case 0x2CE998u: goto label_2ce998;
            case 0x2CE99Cu: goto label_2ce99c;
            case 0x2CE9A0u: goto label_2ce9a0;
            case 0x2CE9A4u: goto label_2ce9a4;
            case 0x2CE9A8u: goto label_2ce9a8;
            case 0x2CE9ACu: goto label_2ce9ac;
            case 0x2CE9B0u: goto label_2ce9b0;
            case 0x2CE9B4u: goto label_2ce9b4;
            case 0x2CE9B8u: goto label_2ce9b8;
            case 0x2CE9BCu: goto label_2ce9bc;
            case 0x2CE9C0u: goto label_2ce9c0;
            case 0x2CE9C4u: goto label_2ce9c4;
            case 0x2CE9C8u: goto label_2ce9c8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2ce9c4:
    ctx->pc = 0x2CE9CCu;
}
