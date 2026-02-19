#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: scalbnf
// Address: 0x2ecbf0 - 0x2ecd50
void scalbnf_0x2ecbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ecbf0u;

    // 0x2ecbf0: 0x27bdffe0
    ctx->pc = 0x2ecbf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ecbf4: 0x44056000
    ctx->pc = 0x2ecbf4u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[12]);
    // 0x2ecbf8: 0xffbf0000
    ctx->pc = 0x2ecbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ecbfc: 0xa0302d
    ctx->pc = 0x2ecbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc00: 0x3c077f80
    ctx->pc = 0x2ecc00u;
    SET_GPR_U32(ctx, 7, ((uint32_t)32640 << 16));
    // 0x2ecc04: 0xc71024
    ctx->pc = 0x2ecc04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2ecc08: 0x21dc3
    ctx->pc = 0x2ecc08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x2ecc0c: 0x1460001c
    ctx->pc = 0x2ECC0Cu;
    {
        const bool branch_taken_0x2ecc0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ECC10u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        if (branch_taken_0x2ecc0c) {
            ctx->pc = 0x2ECC80u;
            goto label_2ecc80;
        }
    }
    ctx->pc = 0x2ECC14u;
    // 0x2ecc14: 0x3c027fff
    ctx->pc = 0x2ecc14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x2ecc18: 0x3442ffff
    ctx->pc = 0x2ecc18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ecc1c: 0xc21024
    ctx->pc = 0x2ecc1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ecc20: 0x14400005
    ctx->pc = 0x2ECC20u;
    {
        const bool branch_taken_0x2ecc20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ECC24u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2ecc20) {
            ctx->pc = 0x2ECC38u;
            goto label_2ecc38;
        }
    }
    ctx->pc = 0x2ECC28u;
    // 0x2ecc28: 0x44850000
    ctx->pc = 0x2ecc28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x2ecc2c: 0x10000046
    ctx->pc = 0x2ECC2Cu;
    {
        const bool branch_taken_0x2ecc2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECC30u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x2ecc2c) {
            ctx->pc = 0x2ECD48u;
            goto label_2ecd48;
        }
    }
    ctx->pc = 0x2ECC34u;
    // 0x2ecc34: 0x0
    ctx->pc = 0x2ecc34u;
    // NOP
label_2ecc38:
    // 0x2ecc38: 0x3c014c00
    ctx->pc = 0x2ecc38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19456 << 16));
    // 0x2ecc3c: 0x44810000
    ctx->pc = 0x2ecc3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ecc40: 0x44850800
    ctx->pc = 0x2ecc40u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 5);
    // 0x2ecc44: 0x46000842
    ctx->pc = 0x2ecc44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecc48: 0x44050800
    ctx->pc = 0x2ecc48u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x2ecc4c: 0xa0302d
    ctx->pc = 0x2ecc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc50: 0xa71824
    ctx->pc = 0x2ecc50u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2ecc54: 0x3c02ffff
    ctx->pc = 0x2ecc54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2ecc58: 0x31dc3
    ctx->pc = 0x2ecc58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x2ecc5c: 0x34423cb0
    ctx->pc = 0x2ecc5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15536));
    // 0x2ecc60: 0x82102a
    ctx->pc = 0x2ecc60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x2ecc64: 0x10400006
    ctx->pc = 0x2ECC64u;
    {
        const bool branch_taken_0x2ecc64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECC68u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967271));
        if (branch_taken_0x2ecc64) {
            ctx->pc = 0x2ECC80u;
            goto label_2ecc80;
        }
    }
    ctx->pc = 0x2ECC6Cu;
    // 0x2ecc6c: 0x3c010da2
    ctx->pc = 0x2ecc6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)3490 << 16));
    // 0x2ecc70: 0x34214260
    ctx->pc = 0x2ecc70u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16992));
    // 0x2ecc74: 0x44810000
    ctx->pc = 0x2ecc74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ecc78: 0x10000031
    ctx->pc = 0x2ECC78u;
    {
        const bool branch_taken_0x2ecc78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECC7Cu;
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2ecc78) {
            ctx->pc = 0x2ECD40u;
            goto label_2ecd40;
        }
    }
    ctx->pc = 0x2ECC80u;
label_2ecc80:
    // 0x2ecc80: 0x240200ff
    ctx->pc = 0x2ecc80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ecc84: 0x14620004
    ctx->pc = 0x2ECC84u;
    {
        const bool branch_taken_0x2ecc84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2ECC88u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x2ecc84) {
            ctx->pc = 0x2ECC98u;
            goto label_2ecc98;
        }
    }
    ctx->pc = 0x2ECC8Cu;
    // 0x2ecc8c: 0x44851000
    ctx->pc = 0x2ecc8cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 5);
    // 0x2ecc90: 0x1000002b
    ctx->pc = 0x2ECC90u;
    {
        const bool branch_taken_0x2ecc90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECC94u;
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        if (branch_taken_0x2ecc90) {
            ctx->pc = 0x2ECD40u;
            goto label_2ecd40;
        }
    }
    ctx->pc = 0x2ECC98u;
label_2ecc98:
    // 0x2ecc98: 0x286200ff
    ctx->pc = 0x2ecc98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 255));
    // 0x2ecc9c: 0x10400015
    ctx->pc = 0x2ECC9Cu;
    {
        const bool branch_taken_0x2ecc9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ecc9c) {
            ctx->pc = 0x2ECCF4u;
            goto label_2eccf4;
        }
    }
    ctx->pc = 0x2ECCA4u;
    // 0x2ecca4: 0x1860000a
    ctx->pc = 0x2ECCA4u;
    {
        const bool branch_taken_0x2ecca4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ECCA8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2ecca4) {
            ctx->pc = 0x2ECCD0u;
            goto label_2eccd0;
        }
    }
    ctx->pc = 0x2ECCACu;
    // 0x2eccac: 0x3c02807f
    ctx->pc = 0x2eccacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32895 << 16));
    // 0x2eccb0: 0x31dc0
    ctx->pc = 0x2eccb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 23));
    // 0x2eccb4: 0x3442ffff
    ctx->pc = 0x2eccb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2eccb8: 0xc21024
    ctx->pc = 0x2eccb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eccbc: 0x432825
    ctx->pc = 0x2eccbcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eccc0: 0x44850000
    ctx->pc = 0x2eccc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x2eccc4: 0x10000020
    ctx->pc = 0x2ECCC4u;
    {
        const bool branch_taken_0x2eccc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECCC8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x2eccc4) {
            ctx->pc = 0x2ECD48u;
            goto label_2ecd48;
        }
    }
    ctx->pc = 0x2ECCCCu;
    // 0x2ecccc: 0x0
    ctx->pc = 0x2eccccu;
    // NOP
label_2eccd0:
    // 0x2eccd0: 0x2862ffe8
    ctx->pc = 0x2eccd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967272));
    // 0x2eccd4: 0x1040000f
    ctx->pc = 0x2ECCD4u;
    {
        const bool branch_taken_0x2eccd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECCD8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        if (branch_taken_0x2eccd4) {
            ctx->pc = 0x2ECD14u;
            goto label_2ecd14;
        }
    }
    ctx->pc = 0x2ECCDCu;
    // 0x2eccdc: 0x44102a
    ctx->pc = 0x2eccdcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2ecce0: 0x3c010da2
    ctx->pc = 0x2ecce0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)3490 << 16));
    // 0x2ecce4: 0x34214260
    ctx->pc = 0x2ecce4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16992));
    // 0x2ecce8: 0x4481a000
    ctx->pc = 0x2ecce8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2eccec: 0x10400004
    ctx->pc = 0x2ECCECu;
    {
        const bool branch_taken_0x2eccec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2eccec) {
            ctx->pc = 0x2ECD00u;
            goto label_2ecd00;
        }
    }
    ctx->pc = 0x2ECCF4u;
label_2eccf4:
    // 0x2eccf4: 0x3c017149
    ctx->pc = 0x2eccf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x2eccf8: 0x3421f2ca
    ctx->pc = 0x2eccf8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62154));
    // 0x2eccfc: 0x4481a000
    ctx->pc = 0x2eccfcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_2ecd00:
    // 0x2ecd00: 0x44856800
    ctx->pc = 0x2ecd00u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 5);
    // 0x2ecd04: 0xc0bb366
    ctx->pc = 0x2ECD04u;
    SET_GPR_U32(ctx, 31, 0x2ECD0Cu);
    ctx->pc = 0x2ECD08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2ECD98u;
    {
        const uint32_t __entryPc = ctx->pc;
        copysignf_0x2ecd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD0Cu; }
    }
    if (ctx->pc != 0x2ECD0Cu) { return; }
    ctx->pc = 0x2ECD0Cu;
    // 0x2ecd0c: 0x1000000c
    ctx->pc = 0x2ECD0Cu;
    {
        const bool branch_taken_0x2ecd0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECD10u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        if (branch_taken_0x2ecd0c) {
            ctx->pc = 0x2ECD40u;
            goto label_2ecd40;
        }
    }
    ctx->pc = 0x2ECD14u;
label_2ecd14:
    // 0x2ecd14: 0x24630019
    ctx->pc = 0x2ecd14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 25));
    // 0x2ecd18: 0x3c02807f
    ctx->pc = 0x2ecd18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32895 << 16));
    // 0x2ecd1c: 0x3442ffff
    ctx->pc = 0x2ecd1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ecd20: 0x31dc0
    ctx->pc = 0x2ecd20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 23));
    // 0x2ecd24: 0xc21024
    ctx->pc = 0x2ecd24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ecd28: 0x432825
    ctx->pc = 0x2ecd28u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecd2c: 0x3c013300
    ctx->pc = 0x2ecd2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)13056 << 16));
    // 0x2ecd30: 0x44810000
    ctx->pc = 0x2ecd30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ecd34: 0x44850800
    ctx->pc = 0x2ecd34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 5);
    // 0x2ecd38: 0x46000802
    ctx->pc = 0x2ecd38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecd3c: 0x0
    ctx->pc = 0x2ecd3cu;
    // NOP
label_2ecd40:
    // 0x2ecd40: 0xdfbf0000
    ctx->pc = 0x2ecd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecd44: 0xc7b40010
    ctx->pc = 0x2ecd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ecd48:
    // 0x2ecd48: 0x3e00008
    ctx->pc = 0x2ECD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECD4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ECC38u: goto label_2ecc38;
            case 0x2ECC80u: goto label_2ecc80;
            case 0x2ECC98u: goto label_2ecc98;
            case 0x2ECCD0u: goto label_2eccd0;
            case 0x2ECCF4u: goto label_2eccf4;
            case 0x2ECD00u: goto label_2ecd00;
            case 0x2ECD14u: goto label_2ecd14;
            case 0x2ECD40u: goto label_2ecd40;
            case 0x2ECD48u: goto label_2ecd48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ECD50u;
}
