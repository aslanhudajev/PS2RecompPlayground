#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setWorldParms
// Address: 0x2cab30 - 0x2cb764
void setWorldParms_0x2cab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cab30u;

label_2cab30:
    // 0x2cab30: 0x27bdffb0
    ctx->pc = 0x2cab30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cab34: 0xffbf0040
    ctx->pc = 0x2cab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cab38: 0xffb30030
    ctx->pc = 0x2cab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2cab3c: 0xffb20020
    ctx->pc = 0x2cab3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cab40: 0xffb10010
    ctx->pc = 0x2cab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cab44: 0xffb00000
    ctx->pc = 0x2cab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cab48: 0x80982d
    ctx->pc = 0x2cab48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab4c: 0xa0882d
    ctx->pc = 0x2cab4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab50: 0xc0802d
    ctx->pc = 0x2cab50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab54: 0x8e020000
    ctx->pc = 0x2cab54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cab58: 0x2c420100
    ctx->pc = 0x2cab58u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 256));
    // 0x2cab5c: 0x10400010
    ctx->pc = 0x2CAB5Cu;
    {
        const bool branch_taken_0x2cab5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAB60u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cab5c) {
            ctx->pc = 0x2CABA0u;
            goto label_2caba0;
        }
    }
    ctx->pc = 0x2CAB64u;
    // 0x2cab64: 0x3c04003b
    ctx->pc = 0x2cab64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2cab68: 0x248474a8
    ctx->pc = 0x2cab68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29864));
    // 0x2cab6c: 0xdfbf0040
    ctx->pc = 0x2cab6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cab70: 0xdfb30030
    ctx->pc = 0x2cab70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cab74: 0xdfb20020
    ctx->pc = 0x2cab74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cab78: 0xdfb10010
    ctx->pc = 0x2cab78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cab7c: 0xdfb00000
    ctx->pc = 0x2cab7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cab80: 0x80b492e
    ctx->pc = 0x2CAB80u;
    ctx->pc = 0x2CAB84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2D24B8u;
    Errorf_0x2d24b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2CAB88u;
label_2cab88:
    // 0x2cab88: 0x260202d
    ctx->pc = 0x2cab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab8c: 0x220282d
    ctx->pc = 0x2cab8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab90: 0xc0b2acc
    ctx->pc = 0x2CAB90u;
    SET_GPR_U32(ctx, 31, 0x2CAB98u);
    ctx->pc = 0x2CAB94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CAB30u;
    goto label_2cab30;
    ctx->pc = 0x2CAB98u;
label_2cab98:
    // 0x2cab98: 0x10000019
    ctx->pc = 0x2CAB98u;
    {
        const bool branch_taken_0x2cab98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAB9Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x2cab98) {
            ctx->pc = 0x2CAC00u;
            goto label_2cac00;
        }
    }
    ctx->pc = 0x2CABA0u;
label_2caba0:
    // 0x2caba0: 0x8e020010
    ctx->pc = 0x2caba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2caba4: 0x30420001
    ctx->pc = 0x2caba4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2caba8: 0x10400014
    ctx->pc = 0x2CABA8u;
    {
        const bool branch_taken_0x2caba8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CABACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2caba8) {
            ctx->pc = 0x2CABFCu;
            goto label_2cabfc;
        }
    }
    ctx->pc = 0x2CABB0u;
    // 0x2cabb0: 0x8443ab3c
    ctx->pc = 0x2cabb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294945596)));
    // 0x2cabb4: 0x2402ffff
    ctx->pc = 0x2cabb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cabb8: 0x10620010
    ctx->pc = 0x2CABB8u;
    {
        const bool branch_taken_0x2cabb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2CABBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cabb8) {
            ctx->pc = 0x2CABFCu;
            goto label_2cabfc;
        }
    }
    ctx->pc = 0x2CABC0u;
    // 0x2cabc0: 0x3c02003a
    ctx->pc = 0x2cabc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cabc4: 0x2448ab38
    ctx->pc = 0x2cabc4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294945592));
    // 0x2cabc8: 0x24030138
    ctx->pc = 0x2cabc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 312));
    // 0x2cabcc: 0x86050004
    ctx->pc = 0x2cabccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cabd0: 0x2407ffff
    ctx->pc = 0x2cabd0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cabd4: 0x831018
    ctx->pc = 0x2cabd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2cabd8:
    // 0x2cabd8: 0x483021
    ctx->pc = 0x2cabd8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cabdc: 0x84c20004
    ctx->pc = 0x2cabdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2cabe0: 0x1045ffe9
    ctx->pc = 0x2CABE0u;
    {
        const bool branch_taken_0x2cabe0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x2CABE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2cabe0) {
            ctx->pc = 0x2CAB88u;
            goto label_2cab88;
        }
    }
    ctx->pc = 0x2CABE8u;
    // 0x2cabe8: 0x833018
    ctx->pc = 0x2cabe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2cabec: 0xc81021
    ctx->pc = 0x2cabecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2cabf0: 0x84420004
    ctx->pc = 0x2cabf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cabf4: 0x1447fff8
    ctx->pc = 0x2CABF4u;
    {
        const bool branch_taken_0x2cabf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x2CABF8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2cabf4) {
            ctx->pc = 0x2CABD8u;
            goto label_2cabd8;
        }
    }
    ctx->pc = 0x2CABFCu;
label_2cabfc:
    // 0x2cabfc: 0x8e020010
    ctx->pc = 0x2cabfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cac00:
    // 0x2cac00: 0x30420002
    ctx->pc = 0x2cac00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2cac04: 0x50400004
    ctx->pc = 0x2CAC04u;
    {
        const bool branch_taken_0x2cac04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cac04) {
            ctx->pc = 0x2CAC08u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CAC18u;
            goto label_2cac18;
        }
    }
    ctx->pc = 0x2CAC0Cu;
    // 0x2cac0c: 0x96020014
    ctx->pc = 0x2cac0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cac10: 0xa622002e
    ctx->pc = 0x2cac10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cac14: 0x8e020010
    ctx->pc = 0x2cac14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cac18:
    // 0x2cac18: 0x30420008
    ctx->pc = 0x2cac18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x2cac1c: 0x50400004
    ctx->pc = 0x2CAC1Cu;
    {
        const bool branch_taken_0x2cac1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cac1c) {
            ctx->pc = 0x2CAC20u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CAC30u;
            goto label_2cac30;
        }
    }
    ctx->pc = 0x2CAC24u;
    // 0x2cac24: 0x9602001c
    ctx->pc = 0x2cac24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cac28: 0xa6220032
    ctx->pc = 0x2cac28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cac2c: 0x8e020010
    ctx->pc = 0x2cac2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cac30:
    // 0x2cac30: 0x30420004
    ctx->pc = 0x2cac30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2cac34: 0x50400004
    ctx->pc = 0x2CAC34u;
    {
        const bool branch_taken_0x2cac34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cac34) {
            ctx->pc = 0x2CAC38u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CAC48u;
            goto label_2cac48;
        }
    }
    ctx->pc = 0x2CAC3Cu;
    // 0x2cac3c: 0x96020018
    ctx->pc = 0x2cac3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2cac40: 0xa6220030
    ctx->pc = 0x2cac40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cac44: 0x8e020010
    ctx->pc = 0x2cac44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cac48:
    // 0x2cac48: 0x30420010
    ctx->pc = 0x2cac48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2cac4c: 0x5040004b
    ctx->pc = 0x2CAC4Cu;
    {
        const bool branch_taken_0x2cac4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cac4c) {
            ctx->pc = 0x2CAC50u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CAD7Cu;
            goto label_2cad7c;
        }
    }
    ctx->pc = 0x2CAC54u;
    // 0x2cac54: 0xc6000020
    ctx->pc = 0x2cac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cac58: 0x3c0141f0
    ctx->pc = 0x2cac58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cac5c: 0x44810800
    ctx->pc = 0x2cac5cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cac60: 0x46010002
    ctx->pc = 0x2cac60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cac64: 0x3c013f80
    ctx->pc = 0x2cac64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2cac68: 0x44810800
    ctx->pc = 0x2cac68u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cac6c: 0x46010034
    ctx->pc = 0x2cac6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cac70: 0x0
    ctx->pc = 0x2cac70u;
    // NOP
    // 0x2cac74: 0x45010012
    ctx->pc = 0x2CAC74u;
    {
        const bool branch_taken_0x2cac74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAC78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2cac74) {
            ctx->pc = 0x2CACC0u;
            goto label_2cacc0;
        }
    }
    ctx->pc = 0x2CAC7Cu;
    // 0x2cac7c: 0xc6000020
    ctx->pc = 0x2cac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cac80: 0x3c0141f0
    ctx->pc = 0x2cac80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cac84: 0x44810800
    ctx->pc = 0x2cac84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cac88: 0x46010002
    ctx->pc = 0x2cac88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cac8c: 0x3c01477f
    ctx->pc = 0x2cac8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18303 << 16));
    // 0x2cac90: 0x3421ff00
    ctx->pc = 0x2cac90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65280));
    // 0x2cac94: 0x44810800
    ctx->pc = 0x2cac94u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cac98: 0x46000834
    ctx->pc = 0x2cac98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cac9c: 0x0
    ctx->pc = 0x2cac9cu;
    // NOP
    // 0x2caca0: 0x45010007
    ctx->pc = 0x2CACA0u;
    {
        const bool branch_taken_0x2caca0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CACA4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x2caca0) {
            ctx->pc = 0x2CACC0u;
            goto label_2cacc0;
        }
    }
    ctx->pc = 0x2CACA8u;
    // 0x2caca8: 0xc6000020
    ctx->pc = 0x2caca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cacac: 0x3c0141f0
    ctx->pc = 0x2cacacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cacb0: 0x44810800
    ctx->pc = 0x2cacb0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cacb4: 0x46010002
    ctx->pc = 0x2cacb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cacb8: 0x46000064
    ctx->pc = 0x2cacb8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cacbc: 0x44020800
    ctx->pc = 0x2cacbcu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2cacc0:
    // 0x2cacc0: 0xa622003a
    ctx->pc = 0x2cacc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 58), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cacc4: 0xc6000024
    ctx->pc = 0x2cacc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cacc8: 0x3c0141f0
    ctx->pc = 0x2cacc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2caccc: 0x44810800
    ctx->pc = 0x2cacccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cacd0: 0x46010002
    ctx->pc = 0x2cacd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cacd4: 0x44800800
    ctx->pc = 0x2cacd4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2cacd8: 0x46010034
    ctx->pc = 0x2cacd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cacdc: 0x0
    ctx->pc = 0x2cacdcu;
    // NOP
    // 0x2cace0: 0x45010012
    ctx->pc = 0x2CACE0u;
    {
        const bool branch_taken_0x2cace0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CACE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cace0) {
            ctx->pc = 0x2CAD2Cu;
            goto label_2cad2c;
        }
    }
    ctx->pc = 0x2CACE8u;
    // 0x2cace8: 0xc6000024
    ctx->pc = 0x2cace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cacec: 0x3c0141f0
    ctx->pc = 0x2cacecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cacf0: 0x44810800
    ctx->pc = 0x2cacf0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cacf4: 0x46010002
    ctx->pc = 0x2cacf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cacf8: 0x3c01477f
    ctx->pc = 0x2cacf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18303 << 16));
    // 0x2cacfc: 0x3421ff00
    ctx->pc = 0x2cacfcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65280));
    // 0x2cad00: 0x44810800
    ctx->pc = 0x2cad00u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cad04: 0x46000834
    ctx->pc = 0x2cad04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cad08: 0x0
    ctx->pc = 0x2cad08u;
    // NOP
    // 0x2cad0c: 0x45010007
    ctx->pc = 0x2CAD0Cu;
    {
        const bool branch_taken_0x2cad0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAD10u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x2cad0c) {
            ctx->pc = 0x2CAD2Cu;
            goto label_2cad2c;
        }
    }
    ctx->pc = 0x2CAD14u;
    // 0x2cad14: 0xc6000024
    ctx->pc = 0x2cad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cad18: 0x3c0141f0
    ctx->pc = 0x2cad18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cad1c: 0x44810800
    ctx->pc = 0x2cad1cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cad20: 0x46010002
    ctx->pc = 0x2cad20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cad24: 0x46000064
    ctx->pc = 0x2cad24u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cad28: 0x44020800
    ctx->pc = 0x2cad28u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2cad2c:
    // 0x2cad2c: 0xa622003c
    ctx->pc = 0x2cad2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cad30: 0xc6010020
    ctx->pc = 0x2cad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cad34: 0x44800000
    ctx->pc = 0x2cad34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2cad38: 0x46000834
    ctx->pc = 0x2cad38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cad3c: 0x0
    ctx->pc = 0x2cad3cu;
    // NOP
    // 0x2cad40: 0x45000003
    ctx->pc = 0x2CAD40u;
    {
        const bool branch_taken_0x2cad40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAD44u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
        if (branch_taken_0x2cad40) {
            ctx->pc = 0x2CAD50u;
            goto label_2cad50;
        }
    }
    ctx->pc = 0x2CAD48u;
    // 0x2cad48: 0x10000008
    ctx->pc = 0x2CAD48u;
    {
        const bool branch_taken_0x2cad48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAD4Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 58), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2cad48) {
            ctx->pc = 0x2CAD6Cu;
            goto label_2cad6c;
        }
    }
    ctx->pc = 0x2CAD50u;
label_2cad50:
    // 0x2cad50: 0xc6010024
    ctx->pc = 0x2cad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cad54: 0x44800000
    ctx->pc = 0x2cad54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2cad58: 0x46000834
    ctx->pc = 0x2cad58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cad5c: 0x0
    ctx->pc = 0x2cad5cu;
    // NOP
    // 0x2cad60: 0x45020006
    ctx->pc = 0x2CAD60u;
    {
        const bool branch_taken_0x2cad60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cad60) {
            ctx->pc = 0x2CAD64u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CAD7Cu;
            goto label_2cad7c;
        }
    }
    ctx->pc = 0x2CAD68u;
    // 0x2cad68: 0xa622003c
    ctx->pc = 0x2cad68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
label_2cad6c:
    // 0x2cad6c: 0x9622002c
    ctx->pc = 0x2cad6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2cad70: 0x34420002
    ctx->pc = 0x2cad70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2cad74: 0xa622002c
    ctx->pc = 0x2cad74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cad78: 0x8e020010
    ctx->pc = 0x2cad78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cad7c:
    // 0x2cad7c: 0x30420020
    ctx->pc = 0x2cad7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x2cad80: 0x50400037
    ctx->pc = 0x2CAD80u;
    {
        const bool branch_taken_0x2cad80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cad80) {
            ctx->pc = 0x2CAD84u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CAE60u;
            goto label_2cae60;
        }
    }
    ctx->pc = 0x2CAD88u;
    // 0x2cad88: 0xc6000028
    ctx->pc = 0x2cad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cad8c: 0x3c0141f0
    ctx->pc = 0x2cad8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cad90: 0x44810800
    ctx->pc = 0x2cad90u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cad94: 0x46010002
    ctx->pc = 0x2cad94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cad98: 0x3c013f80
    ctx->pc = 0x2cad98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2cad9c: 0x44810800
    ctx->pc = 0x2cad9cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cada0: 0x46010034
    ctx->pc = 0x2cada0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cada4: 0x0
    ctx->pc = 0x2cada4u;
    // NOP
    // 0x2cada8: 0x45010011
    ctx->pc = 0x2CADA8u;
    {
        const bool branch_taken_0x2cada8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CADACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2cada8) {
            ctx->pc = 0x2CADF0u;
            goto label_2cadf0;
        }
    }
    ctx->pc = 0x2CADB0u;
    // 0x2cadb0: 0xc6000028
    ctx->pc = 0x2cadb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cadb4: 0x3c0141f0
    ctx->pc = 0x2cadb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cadb8: 0x44810800
    ctx->pc = 0x2cadb8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cadbc: 0x46010002
    ctx->pc = 0x2cadbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cadc0: 0x3c01437f
    ctx->pc = 0x2cadc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x2cadc4: 0x44810800
    ctx->pc = 0x2cadc4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cadc8: 0x46000834
    ctx->pc = 0x2cadc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cadcc: 0x0
    ctx->pc = 0x2cadccu;
    // NOP
    // 0x2cadd0: 0x45010007
    ctx->pc = 0x2CADD0u;
    {
        const bool branch_taken_0x2cadd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CADD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x2cadd0) {
            ctx->pc = 0x2CADF0u;
            goto label_2cadf0;
        }
    }
    ctx->pc = 0x2CADD8u;
    // 0x2cadd8: 0xc6000028
    ctx->pc = 0x2cadd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caddc: 0x3c0141f0
    ctx->pc = 0x2caddcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cade0: 0x44810800
    ctx->pc = 0x2cade0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cade4: 0x46010002
    ctx->pc = 0x2cade4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cade8: 0x46000064
    ctx->pc = 0x2cade8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cadec: 0x44020800
    ctx->pc = 0x2cadecu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2cadf0:
    // 0x2cadf0: 0xa2220060
    ctx->pc = 0x2cadf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cadf4: 0xc600002c
    ctx->pc = 0x2cadf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cadf8: 0x3c0141f0
    ctx->pc = 0x2cadf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cadfc: 0x44810800
    ctx->pc = 0x2cadfcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cae00: 0x46010002
    ctx->pc = 0x2cae00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cae04: 0x44800800
    ctx->pc = 0x2cae04u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2cae08: 0x46010034
    ctx->pc = 0x2cae08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cae0c: 0x0
    ctx->pc = 0x2cae0cu;
    // NOP
    // 0x2cae10: 0x45010011
    ctx->pc = 0x2CAE10u;
    {
        const bool branch_taken_0x2cae10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAE14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cae10) {
            ctx->pc = 0x2CAE58u;
            goto label_2cae58;
        }
    }
    ctx->pc = 0x2CAE18u;
    // 0x2cae18: 0xc600002c
    ctx->pc = 0x2cae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae1c: 0x3c0141f0
    ctx->pc = 0x2cae1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cae20: 0x44810800
    ctx->pc = 0x2cae20u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cae24: 0x46010002
    ctx->pc = 0x2cae24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cae28: 0x3c01437f
    ctx->pc = 0x2cae28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x2cae2c: 0x44810800
    ctx->pc = 0x2cae2cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cae30: 0x46000834
    ctx->pc = 0x2cae30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cae34: 0x0
    ctx->pc = 0x2cae34u;
    // NOP
    // 0x2cae38: 0x45010007
    ctx->pc = 0x2CAE38u;
    {
        const bool branch_taken_0x2cae38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAE3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x2cae38) {
            ctx->pc = 0x2CAE58u;
            goto label_2cae58;
        }
    }
    ctx->pc = 0x2CAE40u;
    // 0x2cae40: 0xc600002c
    ctx->pc = 0x2cae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae44: 0x3c0141f0
    ctx->pc = 0x2cae44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cae48: 0x44810800
    ctx->pc = 0x2cae48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cae4c: 0x46010002
    ctx->pc = 0x2cae4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cae50: 0x46000064
    ctx->pc = 0x2cae50u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2cae54: 0x44020800
    ctx->pc = 0x2cae54u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2cae58:
    // 0x2cae58: 0xa2220061
    ctx->pc = 0x2cae58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cae5c: 0x8e020010
    ctx->pc = 0x2cae5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cae60:
    // 0x2cae60: 0x30420040
    ctx->pc = 0x2cae60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2cae64: 0x10400003
    ctx->pc = 0x2CAE64u;
    {
        const bool branch_taken_0x2cae64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAE68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cae64) {
            ctx->pc = 0x2CAE74u;
            goto label_2cae74;
        }
    }
    ctx->pc = 0x2CAE6Cu;
    // 0x2cae6c: 0xc0b267c
    ctx->pc = 0x2CAE6Cu;
    SET_GPR_U32(ctx, 31, 0x2CAE74u);
    ctx->pc = 0x2CAE70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2C99F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAngle_0x2c99f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAE74u; }
    }
    if (ctx->pc != 0x2CAE74u) { return; }
    ctx->pc = 0x2CAE74u;
label_2cae74:
    // 0x2cae74: 0x8e020010
    ctx->pc = 0x2cae74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cae78: 0x3c030008
    ctx->pc = 0x2cae78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x2cae7c: 0x431024
    ctx->pc = 0x2cae7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cae80: 0x50400010
    ctx->pc = 0x2CAE80u;
    {
        const bool branch_taken_0x2cae80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cae80) {
            ctx->pc = 0x2CAE84u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CAEC4u;
            goto label_2caec4;
        }
    }
    ctx->pc = 0x2CAE88u;
    // 0x2cae88: 0xc60000b8
    ctx->pc = 0x2cae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae8c: 0x3c0141f0
    ctx->pc = 0x2cae8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cae90: 0x44810800
    ctx->pc = 0x2cae90u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cae94: 0x46010042
    ctx->pc = 0x2cae94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cae98: 0x44800000
    ctx->pc = 0x2cae98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2cae9c: 0x46010034
    ctx->pc = 0x2cae9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caea0: 0x0
    ctx->pc = 0x2caea0u;
    // NOP
    // 0x2caea4: 0x45000005
    ctx->pc = 0x2CAEA4u;
    {
        const bool branch_taken_0x2caea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAEA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2caea4) {
            ctx->pc = 0x2CAEBCu;
            goto label_2caebc;
        }
    }
    ctx->pc = 0x2CAEACu;
    // 0x2caeac: 0x46000824
    ctx->pc = 0x2caeacu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x2caeb0: 0x44020000
    ctx->pc = 0x2caeb0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x2caeb4: 0x10000002
    ctx->pc = 0x2CAEB4u;
    {
        const bool branch_taken_0x2caeb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAEB8u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2caeb4) {
            ctx->pc = 0x2CAEC0u;
            goto label_2caec0;
        }
    }
    ctx->pc = 0x2CAEBCu;
label_2caebc:
    // 0x2caebc: 0xa6220038
    ctx->pc = 0x2caebcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 2));
label_2caec0:
    // 0x2caec0: 0x8e020010
    ctx->pc = 0x2caec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2caec4:
    // 0x2caec4: 0x30420080
    ctx->pc = 0x2caec4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x2caec8: 0x10400008
    ctx->pc = 0x2CAEC8u;
    {
        const bool branch_taken_0x2caec8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2caec8) {
            ctx->pc = 0x2CAEECu;
            goto label_2caeec;
        }
    }
    ctx->pc = 0x2CAED0u;
    // 0x2caed0: 0xc6000060
    ctx->pc = 0x2caed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caed4: 0xe6200044
    ctx->pc = 0x2caed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2caed8: 0xc6000064
    ctx->pc = 0x2caed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caedc: 0xe6200048
    ctx->pc = 0x2caedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2caee0: 0xc6000068
    ctx->pc = 0x2caee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caee4: 0x1000001e
    ctx->pc = 0x2CAEE4u;
    {
        const bool branch_taken_0x2caee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAEE8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        if (branch_taken_0x2caee4) {
            ctx->pc = 0x2CAF60u;
            goto label_2caf60;
        }
    }
    ctx->pc = 0x2CAEECu;
label_2caeec:
    // 0x2caeec: 0x52400018
    ctx->pc = 0x2CAEECu;
    {
        const bool branch_taken_0x2caeec = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x2caeec) {
            ctx->pc = 0x2CAEF0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
            ctx->pc = 0x2CAF50u;
            goto label_2caf50;
        }
    }
    ctx->pc = 0x2CAEF4u;
    // 0x2caef4: 0xc6400000
    ctx->pc = 0x2caef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caef8: 0x44800800
    ctx->pc = 0x2caef8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2caefc: 0x46010032
    ctx->pc = 0x2caefcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caf00: 0x0
    ctx->pc = 0x2caf00u;
    // NOP
    // 0x2caf04: 0x4502000d
    ctx->pc = 0x2CAF04u;
    {
        const bool branch_taken_0x2caf04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2caf04) {
            ctx->pc = 0x2CAF08u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
            ctx->pc = 0x2CAF3Cu;
            goto label_2caf3c;
        }
    }
    ctx->pc = 0x2CAF0Cu;
    // 0x2caf0c: 0xc6400004
    ctx->pc = 0x2caf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caf10: 0x46010032
    ctx->pc = 0x2caf10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caf14: 0x0
    ctx->pc = 0x2caf14u;
    // NOP
    // 0x2caf18: 0x45020007
    ctx->pc = 0x2CAF18u;
    {
        const bool branch_taken_0x2caf18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2caf18) {
            ctx->pc = 0x2CAF1Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2CAF38u;
            goto label_2caf38;
        }
    }
    ctx->pc = 0x2CAF20u;
    // 0x2caf20: 0xc6400008
    ctx->pc = 0x2caf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caf24: 0x46010032
    ctx->pc = 0x2caf24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2caf28: 0x0
    ctx->pc = 0x2caf28u;
    // NOP
    // 0x2caf2c: 0x45030008
    ctx->pc = 0x2CAF2Cu;
    {
        const bool branch_taken_0x2caf2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2caf2c) {
            ctx->pc = 0x2CAF30u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
            ctx->pc = 0x2CAF50u;
            goto label_2caf50;
        }
    }
    ctx->pc = 0x2CAF34u;
    // 0x2caf34: 0xc6400000
    ctx->pc = 0x2caf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2caf38:
    // 0x2caf38: 0xe6200044
    ctx->pc = 0x2caf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_2caf3c:
    // 0x2caf3c: 0xc6400004
    ctx->pc = 0x2caf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caf40: 0xe6200048
    ctx->pc = 0x2caf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2caf44: 0xc6400008
    ctx->pc = 0x2caf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caf48: 0x10000005
    ctx->pc = 0x2CAF48u;
    {
        const bool branch_taken_0x2caf48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CAF4Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        if (branch_taken_0x2caf48) {
            ctx->pc = 0x2CAF60u;
            goto label_2caf60;
        }
    }
    ctx->pc = 0x2CAF50u;
label_2caf50:
    // 0x2caf50: 0x3c013f80
    ctx->pc = 0x2caf50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2caf54: 0x44810000
    ctx->pc = 0x2caf54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2caf58: 0xe6200048
    ctx->pc = 0x2caf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x2caf5c: 0xae20004c
    ctx->pc = 0x2caf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_2caf60:
    // 0x2caf60: 0x8e020010
    ctx->pc = 0x2caf60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2caf64: 0x30420100
    ctx->pc = 0x2caf64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2caf68: 0x50400008
    ctx->pc = 0x2CAF68u;
    {
        const bool branch_taken_0x2caf68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2caf68) {
            ctx->pc = 0x2CAF6Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CAF8Cu;
            goto label_2caf8c;
        }
    }
    ctx->pc = 0x2CAF70u;
    // 0x2caf70: 0xc600006c
    ctx->pc = 0x2caf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caf74: 0xe6200050
    ctx->pc = 0x2caf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2caf78: 0xc6000070
    ctx->pc = 0x2caf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caf7c: 0xe6200054
    ctx->pc = 0x2caf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x2caf80: 0xc6000074
    ctx->pc = 0x2caf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caf84: 0xe6200058
    ctx->pc = 0x2caf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x2caf88: 0x8e020010
    ctx->pc = 0x2caf88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2caf8c:
    // 0x2caf8c: 0x30420200
    ctx->pc = 0x2caf8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x2caf90: 0x50400011
    ctx->pc = 0x2CAF90u;
    {
        const bool branch_taken_0x2caf90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2caf90) {
            ctx->pc = 0x2CAF94u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CAFD8u;
            goto label_2cafd8;
        }
    }
    ctx->pc = 0x2CAF98u;
    // 0x2caf98: 0xc6000078
    ctx->pc = 0x2caf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caf9c: 0x3c013d08
    ctx->pc = 0x2caf9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x2cafa0: 0x34218889
    ctx->pc = 0x2cafa0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2cafa4: 0x44810800
    ctx->pc = 0x2cafa4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cafa8: 0x46010002
    ctx->pc = 0x2cafa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cafac: 0xe62000d0
    ctx->pc = 0x2cafacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x2cafb0: 0xc600007c
    ctx->pc = 0x2cafb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cafb4: 0x46010002
    ctx->pc = 0x2cafb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cafb8: 0xe62000d4
    ctx->pc = 0x2cafb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x2cafbc: 0xc6000080
    ctx->pc = 0x2cafbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cafc0: 0x46010002
    ctx->pc = 0x2cafc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cafc4: 0xe62000d8
    ctx->pc = 0x2cafc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x2cafc8: 0xc6000084
    ctx->pc = 0x2cafc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cafcc: 0x46010002
    ctx->pc = 0x2cafccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cafd0: 0xe62000dc
    ctx->pc = 0x2cafd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x2cafd4: 0x8e020010
    ctx->pc = 0x2cafd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cafd8:
    // 0x2cafd8: 0x30420400
    ctx->pc = 0x2cafd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x2cafdc: 0x50400008
    ctx->pc = 0x2CAFDCu;
    {
        const bool branch_taken_0x2cafdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cafdc) {
            ctx->pc = 0x2CAFE0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CB000u;
            goto label_2cb000;
        }
    }
    ctx->pc = 0x2CAFE4u;
    // 0x2cafe4: 0xc6000088
    ctx->pc = 0x2cafe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cafe8: 0x3c013c23
    ctx->pc = 0x2cafe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x2cafec: 0x3421d70a
    ctx->pc = 0x2cafecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x2caff0: 0x44810800
    ctx->pc = 0x2caff0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2caff4: 0x46010002
    ctx->pc = 0x2caff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2caff8: 0xe62000cc
    ctx->pc = 0x2caff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
    // 0x2caffc: 0x8e020010
    ctx->pc = 0x2caffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cb000:
    // 0x2cb000: 0x30420800
    ctx->pc = 0x2cb000u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x2cb004: 0x50400008
    ctx->pc = 0x2CB004u;
    {
        const bool branch_taken_0x2cb004 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb004) {
            ctx->pc = 0x2CB008u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CB028u;
            goto label_2cb028;
        }
    }
    ctx->pc = 0x2CB00Cu;
    // 0x2cb00c: 0xc600008c
    ctx->pc = 0x2cb00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb010: 0x3c01bd11
    ctx->pc = 0x2cb010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48401 << 16));
    // 0x2cb014: 0x3421a2b4
    ctx->pc = 0x2cb014u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 41652));
    // 0x2cb018: 0x44810800
    ctx->pc = 0x2cb018u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cb01c: 0x46010002
    ctx->pc = 0x2cb01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb020: 0xe6200098
    ctx->pc = 0x2cb020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x2cb024: 0x8e020010
    ctx->pc = 0x2cb024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cb028:
    // 0x2cb028: 0x30421000
    ctx->pc = 0x2cb028u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x2cb02c: 0x50400005
    ctx->pc = 0x2CB02Cu;
    {
        const bool branch_taken_0x2cb02c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb02c) {
            ctx->pc = 0x2CB030u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CB044u;
            goto label_2cb044;
        }
    }
    ctx->pc = 0x2CB034u;
    // 0x2cb034: 0xc6000090
    ctx->pc = 0x2cb034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb038: 0x46000007
    ctx->pc = 0x2cb038u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2cb03c: 0xe620009c
    ctx->pc = 0x2cb03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x2cb040: 0x8e020010
    ctx->pc = 0x2cb040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cb044:
    // 0x2cb044: 0x30422000
    ctx->pc = 0x2cb044u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8192));
    // 0x2cb048: 0x50400008
    ctx->pc = 0x2CB048u;
    {
        const bool branch_taken_0x2cb048 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb048) {
            ctx->pc = 0x2CB04Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CB06Cu;
            goto label_2cb06c;
        }
    }
    ctx->pc = 0x2CB050u;
    // 0x2cb050: 0xc6000094
    ctx->pc = 0x2cb050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb054: 0x3c013d08
    ctx->pc = 0x2cb054u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x2cb058: 0x34218889
    ctx->pc = 0x2cb058u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2cb05c: 0x44810800
    ctx->pc = 0x2cb05cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cb060: 0x46010002
    ctx->pc = 0x2cb060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cb064: 0xe6200084
    ctx->pc = 0x2cb064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x2cb068: 0x8e020010
    ctx->pc = 0x2cb068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cb06c:
    // 0x2cb06c: 0x3c030001
    ctx->pc = 0x2cb06cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2cb070: 0x431024
    ctx->pc = 0x2cb070u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb074: 0x504000cb
    ctx->pc = 0x2CB074u;
    {
        const bool branch_taken_0x2cb074 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb074) {
            ctx->pc = 0x2CB078u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CB3A4u;
            goto label_2cb3a4;
        }
    }
    ctx->pc = 0x2CB07Cu;
    // 0x2cb07c: 0x9203009a
    ctx->pc = 0x2cb07cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
    // 0x2cb080: 0x4600005
    ctx->pc = 0x2CB080u;
    {
        const bool branch_taken_0x2cb080 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB084u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cb080) {
            ctx->pc = 0x2CB098u;
            goto label_2cb098;
        }
    }
    ctx->pc = 0x2CB088u;
    // 0x2cb088: 0x44836000
    ctx->pc = 0x2cb088u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x2cb08c: 0x46806320
    ctx->pc = 0x2cb08cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2cb090: 0x10000006
    ctx->pc = 0x2CB090u;
    {
        const bool branch_taken_0x2cb090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb090) {
            ctx->pc = 0x2CB0ACu;
            goto label_2cb0ac;
        }
    }
    ctx->pc = 0x2CB098u;
label_2cb098:
    // 0x2cb098: 0x31842
    ctx->pc = 0x2cb098u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb09c: 0x431025
    ctx->pc = 0x2cb09cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb0a0: 0x44826000
    ctx->pc = 0x2cb0a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2cb0a4: 0x46806320
    ctx->pc = 0x2cb0a4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2cb0a8: 0x460c6300
    ctx->pc = 0x2cb0a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2cb0ac:
    // 0x2cb0ac: 0x3c013b80
    ctx->pc = 0x2cb0acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb0b0: 0x34218081
    ctx->pc = 0x2cb0b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb0b4: 0x44810000
    ctx->pc = 0x2cb0b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb0b8: 0x9203009e
    ctx->pc = 0x2cb0b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 158)));
    // 0x2cb0bc: 0x4600005
    ctx->pc = 0x2CB0BCu;
    {
        const bool branch_taken_0x2cb0bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB0C0u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2cb0bc) {
            ctx->pc = 0x2CB0D4u;
            goto label_2cb0d4;
        }
    }
    ctx->pc = 0x2CB0C4u;
    // 0x2cb0c4: 0x44836800
    ctx->pc = 0x2cb0c4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x2cb0c8: 0x46806b60
    ctx->pc = 0x2cb0c8u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2cb0cc: 0x1000000b
    ctx->pc = 0x2CB0CCu;
    {
        const bool branch_taken_0x2cb0cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB0D0u;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2cb0cc) {
            ctx->pc = 0x2CB0FCu;
            goto label_2cb0fc;
        }
    }
    ctx->pc = 0x2CB0D4u;
label_2cb0d4:
    // 0x2cb0d4: 0x30620001
    ctx->pc = 0x2cb0d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2cb0d8: 0x31842
    ctx->pc = 0x2cb0d8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb0dc: 0x431025
    ctx->pc = 0x2cb0dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb0e0: 0x44826800
    ctx->pc = 0x2cb0e0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2cb0e4: 0x46806b60
    ctx->pc = 0x2cb0e4u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2cb0e8: 0x460d6b40
    ctx->pc = 0x2cb0e8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2cb0ec: 0x3c013b80
    ctx->pc = 0x2cb0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb0f0: 0x34218081
    ctx->pc = 0x2cb0f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb0f4: 0x44810000
    ctx->pc = 0x2cb0f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb0f8: 0x46006b42
    ctx->pc = 0x2cb0f8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2cb0fc:
    // 0x2cb0fc: 0x920300a2
    ctx->pc = 0x2cb0fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x2cb100: 0x4600005
    ctx->pc = 0x2CB100u;
    {
        const bool branch_taken_0x2cb100 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB104u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cb100) {
            ctx->pc = 0x2CB118u;
            goto label_2cb118;
        }
    }
    ctx->pc = 0x2CB108u;
    // 0x2cb108: 0x44837000
    ctx->pc = 0x2cb108u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x2cb10c: 0x468073a0
    ctx->pc = 0x2cb10cu;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2cb110: 0x10000006
    ctx->pc = 0x2CB110u;
    {
        const bool branch_taken_0x2cb110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb110) {
            ctx->pc = 0x2CB12Cu;
            goto label_2cb12c;
        }
    }
    ctx->pc = 0x2CB118u;
label_2cb118:
    // 0x2cb118: 0x31842
    ctx->pc = 0x2cb118u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb11c: 0x431025
    ctx->pc = 0x2cb11cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb120: 0x44827000
    ctx->pc = 0x2cb120u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2cb124: 0x468073a0
    ctx->pc = 0x2cb124u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2cb128: 0x460e7380
    ctx->pc = 0x2cb128u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_2cb12c:
    // 0x2cb12c: 0x3c013b80
    ctx->pc = 0x2cb12cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb130: 0x34218081
    ctx->pc = 0x2cb130u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb134: 0x44810000
    ctx->pc = 0x2cb134u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb138: 0x920300a6
    ctx->pc = 0x2cb138u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x2cb13c: 0x4600005
    ctx->pc = 0x2CB13Cu;
    {
        const bool branch_taken_0x2cb13c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB140u;
        ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
        if (branch_taken_0x2cb13c) {
            ctx->pc = 0x2CB154u;
            goto label_2cb154;
        }
    }
    ctx->pc = 0x2CB144u;
    // 0x2cb144: 0x44830000
    ctx->pc = 0x2cb144u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2cb148: 0x46800020
    ctx->pc = 0x2cb148u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cb14c: 0x10000007
    ctx->pc = 0x2CB14Cu;
    {
        const bool branch_taken_0x2cb14c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb14c) {
            ctx->pc = 0x2CB16Cu;
            goto label_2cb16c;
        }
    }
    ctx->pc = 0x2CB154u;
label_2cb154:
    // 0x2cb154: 0x30620001
    ctx->pc = 0x2cb154u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2cb158: 0x31842
    ctx->pc = 0x2cb158u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb15c: 0x431025
    ctx->pc = 0x2cb15cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb160: 0x44820000
    ctx->pc = 0x2cb160u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2cb164: 0x46800020
    ctx->pc = 0x2cb164u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cb168: 0x46000000
    ctx->pc = 0x2cb168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cb16c:
    // 0x2cb16c: 0x3c013b80
    ctx->pc = 0x2cb16cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb170: 0x34218081
    ctx->pc = 0x2cb170u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb174: 0x44817800
    ctx->pc = 0x2cb174u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2cb178: 0x260202d
    ctx->pc = 0x2cb178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb17c: 0x24050002
    ctx->pc = 0x2cb17cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb180: 0xc0b26a6
    ctx->pc = 0x2CB180u;
    SET_GPR_U32(ctx, 31, 0x2CB188u);
    ctx->pc = 0x2CB184u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB188u; }
    }
    if (ctx->pc != 0x2CB188u) { return; }
    ctx->pc = 0x2CB188u;
    // 0x2cb188: 0x92030099
    ctx->pc = 0x2cb188u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 153)));
    // 0x2cb18c: 0x4600005
    ctx->pc = 0x2CB18Cu;
    {
        const bool branch_taken_0x2cb18c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB190u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cb18c) {
            ctx->pc = 0x2CB1A4u;
            goto label_2cb1a4;
        }
    }
    ctx->pc = 0x2CB194u;
    // 0x2cb194: 0x44836000
    ctx->pc = 0x2cb194u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x2cb198: 0x46806320
    ctx->pc = 0x2cb198u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2cb19c: 0x10000006
    ctx->pc = 0x2CB19Cu;
    {
        const bool branch_taken_0x2cb19c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb19c) {
            ctx->pc = 0x2CB1B8u;
            goto label_2cb1b8;
        }
    }
    ctx->pc = 0x2CB1A4u;
label_2cb1a4:
    // 0x2cb1a4: 0x31842
    ctx->pc = 0x2cb1a4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb1a8: 0x431025
    ctx->pc = 0x2cb1a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb1ac: 0x44826000
    ctx->pc = 0x2cb1acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2cb1b0: 0x46806320
    ctx->pc = 0x2cb1b0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2cb1b4: 0x460c6300
    ctx->pc = 0x2cb1b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2cb1b8:
    // 0x2cb1b8: 0x3c013b80
    ctx->pc = 0x2cb1b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb1bc: 0x34218081
    ctx->pc = 0x2cb1bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb1c0: 0x44810000
    ctx->pc = 0x2cb1c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb1c4: 0x9203009d
    ctx->pc = 0x2cb1c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 157)));
    // 0x2cb1c8: 0x4600005
    ctx->pc = 0x2CB1C8u;
    {
        const bool branch_taken_0x2cb1c8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB1CCu;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2cb1c8) {
            ctx->pc = 0x2CB1E0u;
            goto label_2cb1e0;
        }
    }
    ctx->pc = 0x2CB1D0u;
    // 0x2cb1d0: 0x44836800
    ctx->pc = 0x2cb1d0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x2cb1d4: 0x46806b60
    ctx->pc = 0x2cb1d4u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2cb1d8: 0x1000000b
    ctx->pc = 0x2CB1D8u;
    {
        const bool branch_taken_0x2cb1d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB1DCu;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2cb1d8) {
            ctx->pc = 0x2CB208u;
            goto label_2cb208;
        }
    }
    ctx->pc = 0x2CB1E0u;
label_2cb1e0:
    // 0x2cb1e0: 0x30620001
    ctx->pc = 0x2cb1e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2cb1e4: 0x31842
    ctx->pc = 0x2cb1e4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb1e8: 0x431025
    ctx->pc = 0x2cb1e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb1ec: 0x44826800
    ctx->pc = 0x2cb1ecu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2cb1f0: 0x46806b60
    ctx->pc = 0x2cb1f0u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2cb1f4: 0x460d6b40
    ctx->pc = 0x2cb1f4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2cb1f8: 0x3c013b80
    ctx->pc = 0x2cb1f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb1fc: 0x34218081
    ctx->pc = 0x2cb1fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb200: 0x44810000
    ctx->pc = 0x2cb200u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb204: 0x46006b42
    ctx->pc = 0x2cb204u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2cb208:
    // 0x2cb208: 0x920300a1
    ctx->pc = 0x2cb208u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 161)));
    // 0x2cb20c: 0x4600005
    ctx->pc = 0x2CB20Cu;
    {
        const bool branch_taken_0x2cb20c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB210u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cb20c) {
            ctx->pc = 0x2CB224u;
            goto label_2cb224;
        }
    }
    ctx->pc = 0x2CB214u;
    // 0x2cb214: 0x44837000
    ctx->pc = 0x2cb214u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x2cb218: 0x468073a0
    ctx->pc = 0x2cb218u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2cb21c: 0x10000006
    ctx->pc = 0x2CB21Cu;
    {
        const bool branch_taken_0x2cb21c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb21c) {
            ctx->pc = 0x2CB238u;
            goto label_2cb238;
        }
    }
    ctx->pc = 0x2CB224u;
label_2cb224:
    // 0x2cb224: 0x31842
    ctx->pc = 0x2cb224u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb228: 0x431025
    ctx->pc = 0x2cb228u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb22c: 0x44827000
    ctx->pc = 0x2cb22cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2cb230: 0x468073a0
    ctx->pc = 0x2cb230u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2cb234: 0x460e7380
    ctx->pc = 0x2cb234u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_2cb238:
    // 0x2cb238: 0x3c013b80
    ctx->pc = 0x2cb238u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb23c: 0x34218081
    ctx->pc = 0x2cb23cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb240: 0x44810000
    ctx->pc = 0x2cb240u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb244: 0x920300a5
    ctx->pc = 0x2cb244u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 165)));
    // 0x2cb248: 0x4600005
    ctx->pc = 0x2CB248u;
    {
        const bool branch_taken_0x2cb248 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB24Cu;
        ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
        if (branch_taken_0x2cb248) {
            ctx->pc = 0x2CB260u;
            goto label_2cb260;
        }
    }
    ctx->pc = 0x2CB250u;
    // 0x2cb250: 0x44830000
    ctx->pc = 0x2cb250u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2cb254: 0x46800020
    ctx->pc = 0x2cb254u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cb258: 0x10000007
    ctx->pc = 0x2CB258u;
    {
        const bool branch_taken_0x2cb258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb258) {
            ctx->pc = 0x2CB278u;
            goto label_2cb278;
        }
    }
    ctx->pc = 0x2CB260u;
label_2cb260:
    // 0x2cb260: 0x30620001
    ctx->pc = 0x2cb260u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2cb264: 0x31842
    ctx->pc = 0x2cb264u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb268: 0x431025
    ctx->pc = 0x2cb268u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb26c: 0x44820000
    ctx->pc = 0x2cb26cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2cb270: 0x46800020
    ctx->pc = 0x2cb270u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cb274: 0x46000000
    ctx->pc = 0x2cb274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cb278:
    // 0x2cb278: 0x3c013b80
    ctx->pc = 0x2cb278u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb27c: 0x34218081
    ctx->pc = 0x2cb27cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb280: 0x44817800
    ctx->pc = 0x2cb280u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2cb284: 0x260202d
    ctx->pc = 0x2cb284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb288: 0x24050001
    ctx->pc = 0x2cb288u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb28c: 0xc0b26a6
    ctx->pc = 0x2CB28Cu;
    SET_GPR_U32(ctx, 31, 0x2CB294u);
    ctx->pc = 0x2CB290u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB294u; }
    }
    if (ctx->pc != 0x2CB294u) { return; }
    ctx->pc = 0x2CB294u;
    // 0x2cb294: 0x92030098
    ctx->pc = 0x2cb294u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2cb298: 0x4600005
    ctx->pc = 0x2CB298u;
    {
        const bool branch_taken_0x2cb298 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB29Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cb298) {
            ctx->pc = 0x2CB2B0u;
            goto label_2cb2b0;
        }
    }
    ctx->pc = 0x2CB2A0u;
    // 0x2cb2a0: 0x44836000
    ctx->pc = 0x2cb2a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x2cb2a4: 0x46806320
    ctx->pc = 0x2cb2a4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2cb2a8: 0x10000006
    ctx->pc = 0x2CB2A8u;
    {
        const bool branch_taken_0x2cb2a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb2a8) {
            ctx->pc = 0x2CB2C4u;
            goto label_2cb2c4;
        }
    }
    ctx->pc = 0x2CB2B0u;
label_2cb2b0:
    // 0x2cb2b0: 0x31842
    ctx->pc = 0x2cb2b0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb2b4: 0x431025
    ctx->pc = 0x2cb2b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb2b8: 0x44826000
    ctx->pc = 0x2cb2b8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2cb2bc: 0x46806320
    ctx->pc = 0x2cb2bcu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2cb2c0: 0x460c6300
    ctx->pc = 0x2cb2c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2cb2c4:
    // 0x2cb2c4: 0x3c013b80
    ctx->pc = 0x2cb2c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb2c8: 0x34218081
    ctx->pc = 0x2cb2c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb2cc: 0x44810000
    ctx->pc = 0x2cb2ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb2d0: 0x9203009c
    ctx->pc = 0x2cb2d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2cb2d4: 0x4600005
    ctx->pc = 0x2CB2D4u;
    {
        const bool branch_taken_0x2cb2d4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB2D8u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2cb2d4) {
            ctx->pc = 0x2CB2ECu;
            goto label_2cb2ec;
        }
    }
    ctx->pc = 0x2CB2DCu;
    // 0x2cb2dc: 0x44836800
    ctx->pc = 0x2cb2dcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x2cb2e0: 0x46806b60
    ctx->pc = 0x2cb2e0u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2cb2e4: 0x1000000b
    ctx->pc = 0x2CB2E4u;
    {
        const bool branch_taken_0x2cb2e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB2E8u;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2cb2e4) {
            ctx->pc = 0x2CB314u;
            goto label_2cb314;
        }
    }
    ctx->pc = 0x2CB2ECu;
label_2cb2ec:
    // 0x2cb2ec: 0x30620001
    ctx->pc = 0x2cb2ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2cb2f0: 0x31842
    ctx->pc = 0x2cb2f0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb2f4: 0x431025
    ctx->pc = 0x2cb2f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb2f8: 0x44826800
    ctx->pc = 0x2cb2f8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2cb2fc: 0x46806b60
    ctx->pc = 0x2cb2fcu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2cb300: 0x460d6b40
    ctx->pc = 0x2cb300u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2cb304: 0x3c013b80
    ctx->pc = 0x2cb304u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb308: 0x34218081
    ctx->pc = 0x2cb308u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb30c: 0x44810000
    ctx->pc = 0x2cb30cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb310: 0x46006b42
    ctx->pc = 0x2cb310u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2cb314:
    // 0x2cb314: 0x920300a0
    ctx->pc = 0x2cb314u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2cb318: 0x4600005
    ctx->pc = 0x2CB318u;
    {
        const bool branch_taken_0x2cb318 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB31Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cb318) {
            ctx->pc = 0x2CB330u;
            goto label_2cb330;
        }
    }
    ctx->pc = 0x2CB320u;
    // 0x2cb320: 0x44837000
    ctx->pc = 0x2cb320u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x2cb324: 0x468073a0
    ctx->pc = 0x2cb324u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2cb328: 0x10000006
    ctx->pc = 0x2CB328u;
    {
        const bool branch_taken_0x2cb328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb328) {
            ctx->pc = 0x2CB344u;
            goto label_2cb344;
        }
    }
    ctx->pc = 0x2CB330u;
label_2cb330:
    // 0x2cb330: 0x31842
    ctx->pc = 0x2cb330u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb334: 0x431025
    ctx->pc = 0x2cb334u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb338: 0x44827000
    ctx->pc = 0x2cb338u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2cb33c: 0x468073a0
    ctx->pc = 0x2cb33cu;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2cb340: 0x460e7380
    ctx->pc = 0x2cb340u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_2cb344:
    // 0x2cb344: 0x3c013b80
    ctx->pc = 0x2cb344u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb348: 0x34218081
    ctx->pc = 0x2cb348u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb34c: 0x44810000
    ctx->pc = 0x2cb34cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb350: 0x920300a4
    ctx->pc = 0x2cb350u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2cb354: 0x4600005
    ctx->pc = 0x2CB354u;
    {
        const bool branch_taken_0x2cb354 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB358u;
        ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
        if (branch_taken_0x2cb354) {
            ctx->pc = 0x2CB36Cu;
            goto label_2cb36c;
        }
    }
    ctx->pc = 0x2CB35Cu;
    // 0x2cb35c: 0x44830000
    ctx->pc = 0x2cb35cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2cb360: 0x46800020
    ctx->pc = 0x2cb360u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cb364: 0x10000007
    ctx->pc = 0x2CB364u;
    {
        const bool branch_taken_0x2cb364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb364) {
            ctx->pc = 0x2CB384u;
            goto label_2cb384;
        }
    }
    ctx->pc = 0x2CB36Cu;
label_2cb36c:
    // 0x2cb36c: 0x30620001
    ctx->pc = 0x2cb36cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2cb370: 0x31842
    ctx->pc = 0x2cb370u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb374: 0x431025
    ctx->pc = 0x2cb374u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb378: 0x44820000
    ctx->pc = 0x2cb378u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2cb37c: 0x46800020
    ctx->pc = 0x2cb37cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cb380: 0x46000000
    ctx->pc = 0x2cb380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cb384:
    // 0x2cb384: 0x3c013b80
    ctx->pc = 0x2cb384u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb388: 0x34218081
    ctx->pc = 0x2cb388u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb38c: 0x44817800
    ctx->pc = 0x2cb38cu;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2cb390: 0x260202d
    ctx->pc = 0x2cb390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb394: 0x282d
    ctx->pc = 0x2cb394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb398: 0xc0b26a6
    ctx->pc = 0x2CB398u;
    SET_GPR_U32(ctx, 31, 0x2CB3A0u);
    ctx->pc = 0x2CB39Cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB3A0u; }
    }
    if (ctx->pc != 0x2CB3A0u) { return; }
    ctx->pc = 0x2CB3A0u;
    // 0x2cb3a0: 0x8e020010
    ctx->pc = 0x2cb3a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cb3a4:
    // 0x2cb3a4: 0x3c030002
    ctx->pc = 0x2cb3a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
    // 0x2cb3a8: 0x431024
    ctx->pc = 0x2cb3a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb3ac: 0x50400045
    ctx->pc = 0x2CB3ACu;
    {
        const bool branch_taken_0x2cb3ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb3ac) {
            ctx->pc = 0x2CB3B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x2CB4C4u;
            goto label_2cb4c4;
        }
    }
    ctx->pc = 0x2CB3B4u;
    // 0x2cb3b4: 0x9203009b
    ctx->pc = 0x2cb3b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 155)));
    // 0x2cb3b8: 0x4600005
    ctx->pc = 0x2CB3B8u;
    {
        const bool branch_taken_0x2cb3b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB3BCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cb3b8) {
            ctx->pc = 0x2CB3D0u;
            goto label_2cb3d0;
        }
    }
    ctx->pc = 0x2CB3C0u;
    // 0x2cb3c0: 0x44836000
    ctx->pc = 0x2cb3c0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x2cb3c4: 0x46806320
    ctx->pc = 0x2cb3c4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2cb3c8: 0x10000006
    ctx->pc = 0x2CB3C8u;
    {
        const bool branch_taken_0x2cb3c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb3c8) {
            ctx->pc = 0x2CB3E4u;
            goto label_2cb3e4;
        }
    }
    ctx->pc = 0x2CB3D0u;
label_2cb3d0:
    // 0x2cb3d0: 0x31842
    ctx->pc = 0x2cb3d0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb3d4: 0x431025
    ctx->pc = 0x2cb3d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb3d8: 0x44826000
    ctx->pc = 0x2cb3d8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2cb3dc: 0x46806320
    ctx->pc = 0x2cb3dcu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2cb3e0: 0x460c6300
    ctx->pc = 0x2cb3e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2cb3e4:
    // 0x2cb3e4: 0x3c013b80
    ctx->pc = 0x2cb3e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb3e8: 0x34218081
    ctx->pc = 0x2cb3e8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb3ec: 0x44810000
    ctx->pc = 0x2cb3ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb3f0: 0x9203009f
    ctx->pc = 0x2cb3f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 159)));
    // 0x2cb3f4: 0x4600005
    ctx->pc = 0x2CB3F4u;
    {
        const bool branch_taken_0x2cb3f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB3F8u;
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2cb3f4) {
            ctx->pc = 0x2CB40Cu;
            goto label_2cb40c;
        }
    }
    ctx->pc = 0x2CB3FCu;
    // 0x2cb3fc: 0x44836800
    ctx->pc = 0x2cb3fcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 3);
    // 0x2cb400: 0x46806b60
    ctx->pc = 0x2cb400u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2cb404: 0x1000000b
    ctx->pc = 0x2CB404u;
    {
        const bool branch_taken_0x2cb404 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB408u;
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2cb404) {
            ctx->pc = 0x2CB434u;
            goto label_2cb434;
        }
    }
    ctx->pc = 0x2CB40Cu;
label_2cb40c:
    // 0x2cb40c: 0x30620001
    ctx->pc = 0x2cb40cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2cb410: 0x31842
    ctx->pc = 0x2cb410u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb414: 0x431025
    ctx->pc = 0x2cb414u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb418: 0x44826800
    ctx->pc = 0x2cb418u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2cb41c: 0x46806b60
    ctx->pc = 0x2cb41cu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x2cb420: 0x460d6b40
    ctx->pc = 0x2cb420u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2cb424: 0x3c013b80
    ctx->pc = 0x2cb424u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb428: 0x34218081
    ctx->pc = 0x2cb428u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb42c: 0x44810000
    ctx->pc = 0x2cb42cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb430: 0x46006b42
    ctx->pc = 0x2cb430u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2cb434:
    // 0x2cb434: 0x920300a3
    ctx->pc = 0x2cb434u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 163)));
    // 0x2cb438: 0x4600005
    ctx->pc = 0x2CB438u;
    {
        const bool branch_taken_0x2cb438 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB43Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cb438) {
            ctx->pc = 0x2CB450u;
            goto label_2cb450;
        }
    }
    ctx->pc = 0x2CB440u;
    // 0x2cb440: 0x44837000
    ctx->pc = 0x2cb440u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x2cb444: 0x468073a0
    ctx->pc = 0x2cb444u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2cb448: 0x10000006
    ctx->pc = 0x2CB448u;
    {
        const bool branch_taken_0x2cb448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb448) {
            ctx->pc = 0x2CB464u;
            goto label_2cb464;
        }
    }
    ctx->pc = 0x2CB450u;
label_2cb450:
    // 0x2cb450: 0x31842
    ctx->pc = 0x2cb450u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb454: 0x431025
    ctx->pc = 0x2cb454u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb458: 0x44827000
    ctx->pc = 0x2cb458u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x2cb45c: 0x468073a0
    ctx->pc = 0x2cb45cu;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x2cb460: 0x460e7380
    ctx->pc = 0x2cb460u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_2cb464:
    // 0x2cb464: 0x3c013b80
    ctx->pc = 0x2cb464u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb468: 0x34218081
    ctx->pc = 0x2cb468u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb46c: 0x44810000
    ctx->pc = 0x2cb46cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb470: 0x920300a7
    ctx->pc = 0x2cb470u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 167)));
    // 0x2cb474: 0x4600005
    ctx->pc = 0x2CB474u;
    {
        const bool branch_taken_0x2cb474 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CB478u;
        ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
        if (branch_taken_0x2cb474) {
            ctx->pc = 0x2CB48Cu;
            goto label_2cb48c;
        }
    }
    ctx->pc = 0x2CB47Cu;
    // 0x2cb47c: 0x44830000
    ctx->pc = 0x2cb47cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2cb480: 0x46800020
    ctx->pc = 0x2cb480u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cb484: 0x10000007
    ctx->pc = 0x2CB484u;
    {
        const bool branch_taken_0x2cb484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb484) {
            ctx->pc = 0x2CB4A4u;
            goto label_2cb4a4;
        }
    }
    ctx->pc = 0x2CB48Cu;
label_2cb48c:
    // 0x2cb48c: 0x30620001
    ctx->pc = 0x2cb48cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2cb490: 0x31842
    ctx->pc = 0x2cb490u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cb494: 0x431025
    ctx->pc = 0x2cb494u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb498: 0x44820000
    ctx->pc = 0x2cb498u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2cb49c: 0x46800020
    ctx->pc = 0x2cb49cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cb4a0: 0x46000000
    ctx->pc = 0x2cb4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cb4a4:
    // 0x2cb4a4: 0x3c013b80
    ctx->pc = 0x2cb4a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x2cb4a8: 0x34218081
    ctx->pc = 0x2cb4a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2cb4ac: 0x44817800
    ctx->pc = 0x2cb4acu;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2cb4b0: 0x260202d
    ctx->pc = 0x2cb4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4b4: 0x24050003
    ctx->pc = 0x2cb4b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cb4b8: 0xc0b26a6
    ctx->pc = 0x2CB4B8u;
    SET_GPR_U32(ctx, 31, 0x2CB4C0u);
    ctx->pc = 0x2CB4BCu;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB4C0u; }
    }
    if (ctx->pc != 0x2CB4C0u) { return; }
    ctx->pc = 0x2CB4C0u;
    // 0x2cb4c0: 0x8e020010
    ctx->pc = 0x2cb4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cb4c4:
    // 0x2cb4c4: 0x3c030004
    ctx->pc = 0x2cb4c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x2cb4c8: 0x431024
    ctx->pc = 0x2cb4c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cb4cc: 0x10400007
    ctx->pc = 0x2CB4CCu;
    {
        const bool branch_taken_0x2cb4cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB4D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cb4cc) {
            ctx->pc = 0x2CB4ECu;
            goto label_2cb4ec;
        }
    }
    ctx->pc = 0x2CB4D4u;
    // 0x2cb4d4: 0x24050004
    ctx->pc = 0x2cb4d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb4d8: 0xc60c00a8
    ctx->pc = 0x2cb4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cb4dc: 0xc60d00ac
    ctx->pc = 0x2cb4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2cb4e0: 0xc60e00b0
    ctx->pc = 0x2cb4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2cb4e4: 0xc0b26a6
    ctx->pc = 0x2CB4E4u;
    SET_GPR_U32(ctx, 31, 0x2CB4ECu);
    ctx->pc = 0x2CB4E8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->pc = 0x2C9A98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPParm_0x2c9a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB4ECu; }
    }
    if (ctx->pc != 0x2CB4ECu) { return; }
    ctx->pc = 0x2CB4ECu;
label_2cb4ec:
    // 0x2cb4ec: 0x8e020010
    ctx->pc = 0x2cb4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cb4f0: 0x30424000
    ctx->pc = 0x2cb4f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x2cb4f4: 0x10400003
    ctx->pc = 0x2CB4F4u;
    {
        const bool branch_taken_0x2cb4f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB4F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cb4f4) {
            ctx->pc = 0x2CB504u;
            goto label_2cb504;
        }
    }
    ctx->pc = 0x2CB4FCu;
    // 0x2cb4fc: 0xc0b2726
    ctx->pc = 0x2CB4FCu;
    SET_GPR_U32(ctx, 31, 0x2CB504u);
    ctx->pc = 0x2CB500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x2C9C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetPTexName_0x2c9c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB504u; }
    }
    if (ctx->pc != 0x2CB504u) { return; }
    ctx->pc = 0x2CB504u;
label_2cb504:
    // 0x2cb504: 0x8e020010
    ctx->pc = 0x2cb504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cb508: 0x30428000
    ctx->pc = 0x2cb508u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x2cb50c: 0x50400004
    ctx->pc = 0x2CB50Cu;
    {
        const bool branch_taken_0x2cb50c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb50c) {
            ctx->pc = 0x2CB510u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x2CB520u;
            goto label_2cb520;
        }
    }
    ctx->pc = 0x2CB514u;
    // 0x2cb514: 0x8e02003c
    ctx->pc = 0x2cb514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2cb518: 0xae22005c
    ctx->pc = 0x2cb518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x2cb51c: 0x8e020008
    ctx->pc = 0x2cb51cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cb520:
    // 0x2cb520: 0x30420008
    ctx->pc = 0x2cb520u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x2cb524: 0x5040000c
    ctx->pc = 0x2CB524u;
    {
        const bool branch_taken_0x2cb524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb524) {
            ctx->pc = 0x2CB528u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x2CB558u;
            goto label_2cb558;
        }
    }
    ctx->pc = 0x2CB52Cu;
    // 0x2cb52c: 0xc6210098
    ctx->pc = 0x2cb52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb530: 0x44800000
    ctx->pc = 0x2cb530u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2cb534: 0x46000832
    ctx->pc = 0x2cb534u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb538: 0x0
    ctx->pc = 0x2cb538u;
    // NOP
    // 0x2cb53c: 0x45020006
    ctx->pc = 0x2CB53Cu;
    {
        const bool branch_taken_0x2cb53c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb53c) {
            ctx->pc = 0x2CB540u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x2CB558u;
            goto label_2cb558;
        }
    }
    ctx->pc = 0x2CB544u;
    // 0x2cb544: 0x3c01bd11
    ctx->pc = 0x2cb544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48401 << 16));
    // 0x2cb548: 0x3421a2b4
    ctx->pc = 0x2cb548u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 41652));
    // 0x2cb54c: 0x44810000
    ctx->pc = 0x2cb54cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb550: 0xe6200098
    ctx->pc = 0x2cb550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x2cb554: 0x8e020008
    ctx->pc = 0x2cb554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cb558:
    // 0x2cb558: 0x30420010
    ctx->pc = 0x2cb558u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2cb55c: 0x5040000b
    ctx->pc = 0x2CB55Cu;
    {
        const bool branch_taken_0x2cb55c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb55c) {
            ctx->pc = 0x2CB560u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2CB58Cu;
            goto label_2cb58c;
        }
    }
    ctx->pc = 0x2CB564u;
    // 0x2cb564: 0xc621009c
    ctx->pc = 0x2cb564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb568: 0x44800000
    ctx->pc = 0x2cb568u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2cb56c: 0x46000832
    ctx->pc = 0x2cb56cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb570: 0x0
    ctx->pc = 0x2cb570u;
    // NOP
    // 0x2cb574: 0x45020005
    ctx->pc = 0x2CB574u;
    {
        const bool branch_taken_0x2cb574 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb574) {
            ctx->pc = 0x2CB578u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2CB58Cu;
            goto label_2cb58c;
        }
    }
    ctx->pc = 0x2CB57Cu;
    // 0x2cb57c: 0x3c01bf80
    ctx->pc = 0x2cb57cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2cb580: 0x44810000
    ctx->pc = 0x2cb580u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cb584: 0xe620009c
    ctx->pc = 0x2cb584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x2cb588: 0x8e02000c
    ctx->pc = 0x2cb588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cb58c:
    // 0x2cb58c: 0x30420001
    ctx->pc = 0x2cb58cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2cb590: 0x10400006
    ctx->pc = 0x2CB590u;
    {
        const bool branch_taken_0x2cb590 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB594u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
        if (branch_taken_0x2cb590) {
            ctx->pc = 0x2CB5ACu;
            goto label_2cb5ac;
        }
    }
    ctx->pc = 0x2CB598u;
    // 0x2cb598: 0x3084ff3f
    ctx->pc = 0x2cb598u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65343));
    // 0x2cb59c: 0x8e020008
    ctx->pc = 0x2cb59cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb5a0: 0x30420001
    ctx->pc = 0x2cb5a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2cb5a4: 0x348300c0
    ctx->pc = 0x2cb5a4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 192));
    // 0x2cb5a8: 0x62200b
    ctx->pc = 0x2cb5a8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
label_2cb5ac:
    // 0x2cb5ac: 0x8e02000c
    ctx->pc = 0x2cb5acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cb5b0: 0x30420002
    ctx->pc = 0x2cb5b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2cb5b4: 0x50400009
    ctx->pc = 0x2CB5B4u;
    {
        const bool branch_taken_0x2cb5b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb5b4) {
            ctx->pc = 0x2CB5B8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2CB5DCu;
            goto label_2cb5dc;
        }
    }
    ctx->pc = 0x2CB5BCu;
    // 0x2cb5bc: 0x3c03ffff
    ctx->pc = 0x2cb5bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2cb5c0: 0x3463fffe
    ctx->pc = 0x2cb5c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65534));
    // 0x2cb5c4: 0x831824
    ctx->pc = 0x2cb5c4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cb5c8: 0x8e020008
    ctx->pc = 0x2cb5c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb5cc: 0x22043
    ctx->pc = 0x2cb5ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2cb5d0: 0x30840001
    ctx->pc = 0x2cb5d0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x2cb5d4: 0x832025
    ctx->pc = 0x2cb5d4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cb5d8: 0x8e02000c
    ctx->pc = 0x2cb5d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cb5dc:
    // 0x2cb5dc: 0x30420004
    ctx->pc = 0x2cb5dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2cb5e0: 0x50400009
    ctx->pc = 0x2CB5E0u;
    {
        const bool branch_taken_0x2cb5e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb5e0) {
            ctx->pc = 0x2CB5E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2CB608u;
            goto label_2cb608;
        }
    }
    ctx->pc = 0x2CB5E8u;
    // 0x2cb5e8: 0x3c02ffff
    ctx->pc = 0x2cb5e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2cb5ec: 0x3442fffd
    ctx->pc = 0x2cb5ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65533));
    // 0x2cb5f0: 0x822024
    ctx->pc = 0x2cb5f0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cb5f4: 0x8e020008
    ctx->pc = 0x2cb5f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb5f8: 0x30420004
    ctx->pc = 0x2cb5f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2cb5fc: 0x34830002
    ctx->pc = 0x2cb5fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 2));
    // 0x2cb600: 0x62200b
    ctx->pc = 0x2cb600u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2cb604: 0x8e02000c
    ctx->pc = 0x2cb604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cb608:
    // 0x2cb608: 0x30420040
    ctx->pc = 0x2cb608u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2cb60c: 0x50400009
    ctx->pc = 0x2CB60Cu;
    {
        const bool branch_taken_0x2cb60c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb60c) {
            ctx->pc = 0x2CB610u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2CB634u;
            goto label_2cb634;
        }
    }
    ctx->pc = 0x2CB614u;
    // 0x2cb614: 0x3c02ffff
    ctx->pc = 0x2cb614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2cb618: 0x3442ffdf
    ctx->pc = 0x2cb618u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65503));
    // 0x2cb61c: 0x822024
    ctx->pc = 0x2cb61cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cb620: 0x8e020008
    ctx->pc = 0x2cb620u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb624: 0x30420040
    ctx->pc = 0x2cb624u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2cb628: 0x34830020
    ctx->pc = 0x2cb628u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 32));
    // 0x2cb62c: 0x62200b
    ctx->pc = 0x2cb62cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2cb630: 0x8e02000c
    ctx->pc = 0x2cb630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cb634:
    // 0x2cb634: 0x30420020
    ctx->pc = 0x2cb634u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x2cb638: 0x50400009
    ctx->pc = 0x2CB638u;
    {
        const bool branch_taken_0x2cb638 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb638) {
            ctx->pc = 0x2CB63Cu;
            WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 4));
            ctx->pc = 0x2CB660u;
            goto label_2cb660;
        }
    }
    ctx->pc = 0x2CB640u;
    // 0x2cb640: 0x3c02ffff
    ctx->pc = 0x2cb640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2cb644: 0x3442ffef
    ctx->pc = 0x2cb644u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65519));
    // 0x2cb648: 0x822024
    ctx->pc = 0x2cb648u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cb64c: 0x8e020008
    ctx->pc = 0x2cb64cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb650: 0x30420020
    ctx->pc = 0x2cb650u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x2cb654: 0x34830010
    ctx->pc = 0x2cb654u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 16));
    // 0x2cb658: 0x62200b
    ctx->pc = 0x2cb658u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2cb65c: 0xa624002c
    ctx->pc = 0x2cb65cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 4));
label_2cb660:
    // 0x2cb660: 0x8e02000c
    ctx->pc = 0x2cb660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cb664: 0x30420080
    ctx->pc = 0x2cb664u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x2cb668: 0x10400009
    ctx->pc = 0x2CB668u;
    {
        const bool branch_taken_0x2cb668 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB66Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 96)));
        if (branch_taken_0x2cb668) {
            ctx->pc = 0x2CB690u;
            goto label_2cb690;
        }
    }
    ctx->pc = 0x2CB670u;
    // 0x2cb670: 0x3c02ff7f
    ctx->pc = 0x2cb670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65407 << 16));
    // 0x2cb674: 0x3442ffff
    ctx->pc = 0x2cb674u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2cb678: 0x822024
    ctx->pc = 0x2cb678u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cb67c: 0x8e020008
    ctx->pc = 0x2cb67cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb680: 0x30420080
    ctx->pc = 0x2cb680u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x2cb684: 0x10400002
    ctx->pc = 0x2CB684u;
    {
        const bool branch_taken_0x2cb684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB688u;
        SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
        if (branch_taken_0x2cb684) {
            ctx->pc = 0x2CB690u;
            goto label_2cb690;
        }
    }
    ctx->pc = 0x2CB68Cu;
    // 0x2cb68c: 0x822025
    ctx->pc = 0x2cb68cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2cb690:
    // 0x2cb690: 0x8e02000c
    ctx->pc = 0x2cb690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2cb694: 0x30420100
    ctx->pc = 0x2cb694u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2cb698: 0x5040000a
    ctx->pc = 0x2CB698u;
    {
        const bool branch_taken_0x2cb698 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb698) {
            ctx->pc = 0x2CB69Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2CB6C4u;
            goto label_2cb6c4;
        }
    }
    ctx->pc = 0x2CB6A0u;
    // 0x2cb6a0: 0x3c02bfff
    ctx->pc = 0x2cb6a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49151 << 16));
    // 0x2cb6a4: 0x3442ffff
    ctx->pc = 0x2cb6a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2cb6a8: 0x822024
    ctx->pc = 0x2cb6a8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cb6ac: 0x8e020008
    ctx->pc = 0x2cb6acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb6b0: 0x30420100
    ctx->pc = 0x2cb6b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2cb6b4: 0x10400002
    ctx->pc = 0x2CB6B4u;
    {
        const bool branch_taken_0x2cb6b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB6B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x2cb6b4) {
            ctx->pc = 0x2CB6C0u;
            goto label_2cb6c0;
        }
    }
    ctx->pc = 0x2CB6BCu;
    // 0x2cb6bc: 0x822025
    ctx->pc = 0x2cb6bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2cb6c0:
    // 0x2cb6c0: 0x8e02000c
    ctx->pc = 0x2cb6c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cb6c4:
    // 0x2cb6c4: 0x30420200
    ctx->pc = 0x2cb6c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x2cb6c8: 0x50400009
    ctx->pc = 0x2CB6C8u;
    {
        const bool branch_taken_0x2cb6c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb6c8) {
            ctx->pc = 0x2CB6CCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2CB6F0u;
            goto label_2cb6f0;
        }
    }
    ctx->pc = 0x2CB6D0u;
    // 0x2cb6d0: 0x3c02ffff
    ctx->pc = 0x2cb6d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2cb6d4: 0x3442f7ff
    ctx->pc = 0x2cb6d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 63487));
    // 0x2cb6d8: 0x822024
    ctx->pc = 0x2cb6d8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cb6dc: 0x8e020008
    ctx->pc = 0x2cb6dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb6e0: 0x30420200
    ctx->pc = 0x2cb6e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x2cb6e4: 0x34830800
    ctx->pc = 0x2cb6e4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 2048));
    // 0x2cb6e8: 0x62200b
    ctx->pc = 0x2cb6e8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2cb6ec: 0x8e02000c
    ctx->pc = 0x2cb6ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cb6f0:
    // 0x2cb6f0: 0x30420400
    ctx->pc = 0x2cb6f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x2cb6f4: 0x50400009
    ctx->pc = 0x2CB6F4u;
    {
        const bool branch_taken_0x2cb6f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb6f4) {
            ctx->pc = 0x2CB6F8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2CB71Cu;
            goto label_2cb71c;
        }
    }
    ctx->pc = 0x2CB6FCu;
    // 0x2cb6fc: 0x3c02ffff
    ctx->pc = 0x2cb6fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2cb700: 0x3442ffbf
    ctx->pc = 0x2cb700u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65471));
    // 0x2cb704: 0x822024
    ctx->pc = 0x2cb704u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cb708: 0x8e020008
    ctx->pc = 0x2cb708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb70c: 0x30420400
    ctx->pc = 0x2cb70cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x2cb710: 0x34830040
    ctx->pc = 0x2cb710u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 64));
    // 0x2cb714: 0x62200b
    ctx->pc = 0x2cb714u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2cb718: 0x8e02000c
    ctx->pc = 0x2cb718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cb71c:
    // 0x2cb71c: 0x30420800
    ctx->pc = 0x2cb71cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x2cb720: 0x50400009
    ctx->pc = 0x2CB720u;
    {
        const bool branch_taken_0x2cb720 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb720) {
            ctx->pc = 0x2CB724u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 4));
            ctx->pc = 0x2CB748u;
            goto label_2cb748;
        }
    }
    ctx->pc = 0x2CB728u;
    // 0x2cb728: 0x3c02ffff
    ctx->pc = 0x2cb728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2cb72c: 0x3442ff7f
    ctx->pc = 0x2cb72cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65407));
    // 0x2cb730: 0x822024
    ctx->pc = 0x2cb730u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cb734: 0x8e020008
    ctx->pc = 0x2cb734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cb738: 0x30420800
    ctx->pc = 0x2cb738u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x2cb73c: 0x34830080
    ctx->pc = 0x2cb73cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 128));
    // 0x2cb740: 0x62200b
    ctx->pc = 0x2cb740u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2cb744: 0xae640060
    ctx->pc = 0x2cb744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 4));
label_2cb748:
    // 0x2cb748: 0xdfbf0040
    ctx->pc = 0x2cb748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb74c: 0xdfb30030
    ctx->pc = 0x2cb74cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb750: 0xdfb20020
    ctx->pc = 0x2cb750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb754: 0xdfb10010
    ctx->pc = 0x2cb754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb758: 0xdfb00000
    ctx->pc = 0x2cb758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb75c: 0x3e00008
    ctx->pc = 0x2CB75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB760u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CAB30u: goto label_2cab30;
            case 0x2CAB88u: goto label_2cab88;
            case 0x2CAB98u: goto label_2cab98;
            case 0x2CABA0u: goto label_2caba0;
            case 0x2CABD8u: goto label_2cabd8;
            case 0x2CABFCu: goto label_2cabfc;
            case 0x2CAC00u: goto label_2cac00;
            case 0x2CAC18u: goto label_2cac18;
            case 0x2CAC30u: goto label_2cac30;
            case 0x2CAC48u: goto label_2cac48;
            case 0x2CACC0u: goto label_2cacc0;
            case 0x2CAD2Cu: goto label_2cad2c;
            case 0x2CAD50u: goto label_2cad50;
            case 0x2CAD6Cu: goto label_2cad6c;
            case 0x2CAD7Cu: goto label_2cad7c;
            case 0x2CADF0u: goto label_2cadf0;
            case 0x2CAE58u: goto label_2cae58;
            case 0x2CAE60u: goto label_2cae60;
            case 0x2CAE74u: goto label_2cae74;
            case 0x2CAEBCu: goto label_2caebc;
            case 0x2CAEC0u: goto label_2caec0;
            case 0x2CAEC4u: goto label_2caec4;
            case 0x2CAEECu: goto label_2caeec;
            case 0x2CAF38u: goto label_2caf38;
            case 0x2CAF3Cu: goto label_2caf3c;
            case 0x2CAF50u: goto label_2caf50;
            case 0x2CAF60u: goto label_2caf60;
            case 0x2CAF8Cu: goto label_2caf8c;
            case 0x2CAFD8u: goto label_2cafd8;
            case 0x2CB000u: goto label_2cb000;
            case 0x2CB028u: goto label_2cb028;
            case 0x2CB044u: goto label_2cb044;
            case 0x2CB06Cu: goto label_2cb06c;
            case 0x2CB098u: goto label_2cb098;
            case 0x2CB0ACu: goto label_2cb0ac;
            case 0x2CB0D4u: goto label_2cb0d4;
            case 0x2CB0FCu: goto label_2cb0fc;
            case 0x2CB118u: goto label_2cb118;
            case 0x2CB12Cu: goto label_2cb12c;
            case 0x2CB154u: goto label_2cb154;
            case 0x2CB16Cu: goto label_2cb16c;
            case 0x2CB1A4u: goto label_2cb1a4;
            case 0x2CB1B8u: goto label_2cb1b8;
            case 0x2CB1E0u: goto label_2cb1e0;
            case 0x2CB208u: goto label_2cb208;
            case 0x2CB224u: goto label_2cb224;
            case 0x2CB238u: goto label_2cb238;
            case 0x2CB260u: goto label_2cb260;
            case 0x2CB278u: goto label_2cb278;
            case 0x2CB2B0u: goto label_2cb2b0;
            case 0x2CB2C4u: goto label_2cb2c4;
            case 0x2CB2ECu: goto label_2cb2ec;
            case 0x2CB314u: goto label_2cb314;
            case 0x2CB330u: goto label_2cb330;
            case 0x2CB344u: goto label_2cb344;
            case 0x2CB36Cu: goto label_2cb36c;
            case 0x2CB384u: goto label_2cb384;
            case 0x2CB3A4u: goto label_2cb3a4;
            case 0x2CB3D0u: goto label_2cb3d0;
            case 0x2CB3E4u: goto label_2cb3e4;
            case 0x2CB40Cu: goto label_2cb40c;
            case 0x2CB434u: goto label_2cb434;
            case 0x2CB450u: goto label_2cb450;
            case 0x2CB464u: goto label_2cb464;
            case 0x2CB48Cu: goto label_2cb48c;
            case 0x2CB4A4u: goto label_2cb4a4;
            case 0x2CB4C4u: goto label_2cb4c4;
            case 0x2CB4ECu: goto label_2cb4ec;
            case 0x2CB504u: goto label_2cb504;
            case 0x2CB520u: goto label_2cb520;
            case 0x2CB558u: goto label_2cb558;
            case 0x2CB58Cu: goto label_2cb58c;
            case 0x2CB5ACu: goto label_2cb5ac;
            case 0x2CB5DCu: goto label_2cb5dc;
            case 0x2CB608u: goto label_2cb608;
            case 0x2CB634u: goto label_2cb634;
            case 0x2CB660u: goto label_2cb660;
            case 0x2CB690u: goto label_2cb690;
            case 0x2CB6C0u: goto label_2cb6c0;
            case 0x2CB6C4u: goto label_2cb6c4;
            case 0x2CB6F0u: goto label_2cb6f0;
            case 0x2CB71Cu: goto label_2cb71c;
            case 0x2CB748u: goto label_2cb748;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CB764u;
}
