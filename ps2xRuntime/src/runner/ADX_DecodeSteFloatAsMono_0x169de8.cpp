#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeSteFloatAsMono
// Address: 0x169de8 - 0x16a090
void ADX_DecodeSteFloatAsMono_0x169de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeSteFloatAsMono");


    ctx->pc = 0x169de8u;

    // 0x169de8: 0x27bdffc0
    ctx->pc = 0x169de8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169dec: 0xe0782d
    ctx->pc = 0x169decu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169df0: 0xffb30030
    ctx->pc = 0x169df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x169df4: 0xa5400
    ctx->pc = 0x169df4u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 16));
    // 0x169df8: 0xffb20020
    ctx->pc = 0x169df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x169dfc: 0xb5c00
    ctx->pc = 0x169dfcu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 16));
    // 0x169e00: 0xffb10010
    ctx->pc = 0x169e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x169e04: 0xa0c82d
    ctx->pc = 0x169e04u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e08: 0xffb00000
    ctx->pc = 0x169e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169e0c: 0x120c02d
    ctx->pc = 0x169e0cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e10: 0xa5303
    ctx->pc = 0x169e10u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x169e14: 0xb5b03
    ctx->pc = 0x169e14u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x169e18: 0x85e70002
    ctx->pc = 0x169e18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x169e1c: 0x448a1000
    ctx->pc = 0x169e1cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 10);
    // 0x169e20: 0x468010a0
    ctx->pc = 0x169e20u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x169e24: 0x448b0800
    ctx->pc = 0x169e24u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 11);
    // 0x169e28: 0x46800860
    ctx->pc = 0x169e28u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x169e2c: 0x85e30000
    ctx->pc = 0x169e2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x169e30: 0x87090000
    ctx->pc = 0x169e30u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x169e34: 0x73c00
    ctx->pc = 0x169e34u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
    // 0x169e38: 0x87050002
    ctx->pc = 0x169e38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x169e3c: 0x1917c2
    ctx->pc = 0x169e3cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 25), 31));
    // 0x169e40: 0x3c013780
    ctx->pc = 0x169e40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14208 << 16));
    // 0x169e44: 0x44810000
    ctx->pc = 0x169e44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x169e48: 0x31c00
    ctx->pc = 0x169e48u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x169e4c: 0x94c00
    ctx->pc = 0x169e4cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 16));
    // 0x169e50: 0x52c00
    ctx->pc = 0x169e50u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x169e54: 0x3221021
    ctx->pc = 0x169e54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x169e58: 0x44874800
    ctx->pc = 0x169e58u;
    *(uint32_t*)&ctx->f[9] = GPR_U32(ctx, 7);
    // 0x169e5c: 0x46804a60
    ctx->pc = 0x169e5cu;
    ctx->f[9] = FPU_CVT_S_W(*(int32_t*)&ctx->f[9]);
    // 0x169e60: 0x46000b42
    ctx->pc = 0x169e60u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169e64: 0x21043
    ctx->pc = 0x169e64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x169e68: 0x46001302
    ctx->pc = 0x169e68u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x169e6c: 0x80502d
    ctx->pc = 0x169e6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e70: 0x44834000
    ctx->pc = 0x169e70u;
    *(uint32_t*)&ctx->f[8] = GPR_U32(ctx, 3);
    // 0x169e74: 0x46804220
    ctx->pc = 0x169e74u;
    ctx->f[8] = FPU_CVT_S_W(*(int32_t*)&ctx->f[8]);
    // 0x169e78: 0x44893800
    ctx->pc = 0x169e78u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 9);
    // 0x169e7c: 0x468039e0
    ctx->pc = 0x169e7cu;
    ctx->f[7] = FPU_CVT_S_W(*(int32_t*)&ctx->f[7]);
    // 0x169e80: 0x44855000
    ctx->pc = 0x169e80u;
    *(uint32_t*)&ctx->f[10] = GPR_U32(ctx, 5);
    // 0x169e84: 0x468052a0
    ctx->pc = 0x169e84u;
    ctx->f[10] = FPU_CVT_S_W(*(int32_t*)&ctx->f[10]);
    // 0x169e88: 0x1840006a
    ctx->pc = 0x169E88u;
    {
        const bool branch_taken_0x169e88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x169E8Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169e88) {
            ctx->pc = 0x16A034u;
            goto label_16a034;
        }
    }
    ctx->pc = 0x169E90u;
    // 0x169e90: 0x40882d
    ctx->pc = 0x169e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e94: 0x25080002
    ctx->pc = 0x169e94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x169e98: 0x2410ff00
    ctx->pc = 0x169e98u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x169e9c: 0x3c13002c
    ctx->pc = 0x169e9cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)44 << 16));
    // 0x169ea0: 0x3c12002c
    ctx->pc = 0x169ea0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)44 << 16));
    // 0x169ea4: 0x140482d
    ctx->pc = 0x169ea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_169ea8:
    // 0x169ea8: 0x95220000
    ctx->pc = 0x169ea8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x169eac: 0x21a00
    ctx->pc = 0x169eacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169eb0: 0x701824
    ctx->pc = 0x169eb0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x169eb4: 0x21202
    ctx->pc = 0x169eb4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x169eb8: 0x431025
    ctx->pc = 0x169eb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169ebc: 0x21400
    ctx->pc = 0x169ebcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x169ec0: 0x22403
    ctx->pc = 0x169ec0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x169ec4: 0x30838000
    ctx->pc = 0x169ec4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 32768));
    // 0x169ec8: 0x1460000f
    ctx->pc = 0x169EC8u;
    {
        const bool branch_taken_0x169ec8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x169ECCu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 18));
        if (branch_taken_0x169ec8) {
            ctx->pc = 0x169F08u;
            goto label_169f08;
        }
    }
    ctx->pc = 0x169ED0u;
    // 0x169ed0: 0x95420000
    ctx->pc = 0x169ed0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x169ed4: 0x30841fff
    ctx->pc = 0x169ed4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 8191));
    // 0x169ed8: 0x24840001
    ctx->pc = 0x169ed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x169edc: 0x21a00
    ctx->pc = 0x169edcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169ee0: 0x44847000
    ctx->pc = 0x169ee0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 4);
    // 0x169ee4: 0x468073a0
    ctx->pc = 0x169ee4u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x169ee8: 0x701824
    ctx->pc = 0x169ee8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x169eec: 0x21202
    ctx->pc = 0x169eecu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x169ef0: 0x431025
    ctx->pc = 0x169ef0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169ef4: 0x21400
    ctx->pc = 0x169ef4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x169ef8: 0x22403
    ctx->pc = 0x169ef8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x169efc: 0x30838000
    ctx->pc = 0x169efcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 32768));
    // 0x169f00: 0x10600003
    ctx->pc = 0x169F00u;
    {
        const bool branch_taken_0x169f00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x169F04u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8191));
        if (branch_taken_0x169f00) {
            ctx->pc = 0x169F10u;
            goto label_169f10;
        }
    }
    ctx->pc = 0x169F08u;
label_169f08:
    // 0x169f08: 0x1000005b
    ctx->pc = 0x169F08u;
    {
        const bool branch_taken_0x169f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x169F0Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x169f08) {
            ctx->pc = 0x16A078u;
            goto label_16a078;
        }
    }
    ctx->pc = 0x169F10u;
label_169f10:
    // 0x169f10: 0x24ee0001
    ctx->pc = 0x169f10u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 7), 1));
    // 0x169f14: 0x24420001
    ctx->pc = 0x169f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x169f18: 0xc78f8010
    ctx->pc = 0x169f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x169f1c: 0x44825800
    ctx->pc = 0x169f1cu;
    *(uint32_t*)&ctx->f[11] = GPR_U32(ctx, 2);
    // 0x169f20: 0x46805ae0
    ctx->pc = 0x169f20u;
    ctx->f[11] = FPU_CVT_S_W(*(int32_t*)&ctx->f[11]);
    // 0x169f24: 0x25290002
    ctx->pc = 0x169f24u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2));
    // 0x169f28: 0x254a0002
    ctx->pc = 0x169f28u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 2));
    // 0x169f2c: 0x266d98a0
    ctx->pc = 0x169f2cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 19), 4294940832));
    // 0x169f30: 0x264c9ca0
    ctx->pc = 0x169f30u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 18), 4294941856));
    // 0x169f34: 0x240b001e
    ctx->pc = 0x169f34u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 30));
    // 0x169f38: 0x24c70002
    ctx->pc = 0x169f38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 2));
    // 0x169f3c: 0x0
    ctx->pc = 0x169f3cu;
    // NOP
label_169f40:
    // 0x169f40: 0x91240000
    ctx->pc = 0x169f40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x169f44: 0x46096882
    ctx->pc = 0x169f44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x169f48: 0x91450000
    ctx->pc = 0x169f48u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x169f4c: 0x460a68c2
    ctx->pc = 0x169f4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
    // 0x169f50: 0x42080
    ctx->pc = 0x169f50u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x169f54: 0x46086002
    ctx->pc = 0x169f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x169f58: 0x52880
    ctx->pc = 0x169f58u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x169f5c: 0x46076042
    ctx->pc = 0x169f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x169f60: 0xad1821
    ctx->pc = 0x169f60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x169f64: 0x8d1021
    ctx->pc = 0x169f64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x169f68: 0xc4660000
    ctx->pc = 0x169f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x169f6c: 0x46020000
    ctx->pc = 0x169f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x169f70: 0xc4440000
    ctx->pc = 0x169f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x169f74: 0x46030840
    ctx->pc = 0x169f74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x169f78: 0x460b30c2
    ctx->pc = 0x169f78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x169f7c: 0x46004246
    ctx->pc = 0x169f7cu;
    ctx->f[9] = FPU_MOV_S(ctx->f[8]);
    // 0x169f80: 0x460e2082
    ctx->pc = 0x169f80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x169f84: 0x46003a86
    ctx->pc = 0x169f84u;
    ctx->f[10] = FPU_MOV_S(ctx->f[7]);
    // 0x169f88: 0x46096942
    ctx->pc = 0x169f88u;
    ctx->f[5] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x169f8c: 0x8c2021
    ctx->pc = 0x169f8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x169f90: 0x460309c0
    ctx->pc = 0x169f90u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x169f94: 0xac2821
    ctx->pc = 0x169f94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x169f98: 0x46020200
    ctx->pc = 0x169f98u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x169f9c: 0xc4840000
    ctx->pc = 0x169f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x169fa0: 0x460a6802
    ctx->pc = 0x169fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
    // 0x169fa4: 0xc4a60000
    ctx->pc = 0x169fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x169fa8: 0x46076042
    ctx->pc = 0x169fa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x169fac: 0x46003a86
    ctx->pc = 0x169facu;
    ctx->f[10] = FPU_MOV_S(ctx->f[7]);
    // 0x169fb0: 0x460860c2
    ctx->pc = 0x169fb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x169fb4: 0x46004246
    ctx->pc = 0x169fb4u;
    ctx->f[9] = FPU_MOV_S(ctx->f[8]);
    // 0x169fb8: 0x460b3082
    ctx->pc = 0x169fb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x169fbc: 0x25290001
    ctx->pc = 0x169fbcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x169fc0: 0x46000840
    ctx->pc = 0x169fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x169fc4: 0x254a0001
    ctx->pc = 0x169fc4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x169fc8: 0x460e2102
    ctx->pc = 0x169fc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x169fcc: 0x24c60004
    ctx->pc = 0x169fccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x169fd0: 0x460518c0
    ctx->pc = 0x169fd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x169fd4: 0x256bfffe
    ctx->pc = 0x169fd4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x169fd8: 0x46074000
    ctx->pc = 0x169fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x169fdc: 0x460209c0
    ctx->pc = 0x169fdcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x169fe0: 0x46041a00
    ctx->pc = 0x169fe0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x169fe4: 0x460f0002
    ctx->pc = 0x169fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x169fe8: 0x46074040
    ctx->pc = 0x169fe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x169fec: 0x460000a4
    ctx->pc = 0x169fecu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x169ff0: 0x44021000
    ctx->pc = 0x169ff0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x169ff4: 0x460f0842
    ctx->pc = 0x169ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x169ff8: 0x21c03
    ctx->pc = 0x169ff8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x169ffc: 0xa503fffe
    ctx->pc = 0x169ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a000: 0x46000824
    ctx->pc = 0x16a000u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x16a004: 0x44020000
    ctx->pc = 0x16a004u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x16a008: 0xa4e3fffe
    ctx->pc = 0x16a008u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a00c: 0x21c03
    ctx->pc = 0x16a00cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16a010: 0xa5030000
    ctx->pc = 0x16a010u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a014: 0xa4e30000
    ctx->pc = 0x16a014u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a018: 0x25080004
    ctx->pc = 0x16a018u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x16a01c: 0x561ffc8
    ctx->pc = 0x16A01Cu;
    {
        const bool branch_taken_0x16a01c = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x16A020u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x16a01c) {
            ctx->pc = 0x169F40u;
            goto label_169f40;
        }
    }
    ctx->pc = 0x16A024u;
    // 0x16a024: 0x1c0382d
    ctx->pc = 0x16a024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a028: 0xf1102a
    ctx->pc = 0x16a028u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 17)));
    // 0x16a02c: 0x5440ff9e
    ctx->pc = 0x16A02Cu;
    {
        const bool branch_taken_0x16a02c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a02c) {
            ctx->pc = 0x16A030u;
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x169EA8u;
            goto label_169ea8;
        }
    }
    ctx->pc = 0x16A034u;
label_16a034:
    // 0x16a034: 0x46004824
    ctx->pc = 0x16a034u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[9]);
    // 0x16a038: 0x44030000
    ctx->pc = 0x16a038u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x16a03c: 0x46004024
    ctx->pc = 0x16a03cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[8]);
    // 0x16a040: 0x44040000
    ctx->pc = 0x16a040u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x16a044: 0x46003824
    ctx->pc = 0x16a044u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[7]);
    // 0x16a048: 0x44050000
    ctx->pc = 0x16a048u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x16a04c: 0x320102d
    ctx->pc = 0x16a04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a050: 0x46005024
    ctx->pc = 0x16a050u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[10]);
    // 0x16a054: 0x44060000
    ctx->pc = 0x16a054u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x16a058: 0x31c03
    ctx->pc = 0x16a058u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x16a05c: 0x42403
    ctx->pc = 0x16a05cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a060: 0xa5e30002
    ctx->pc = 0x16a060u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a064: 0xa5e40000
    ctx->pc = 0x16a064u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a068: 0x52c03
    ctx->pc = 0x16a068u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x16a06c: 0x63403
    ctx->pc = 0x16a06cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x16a070: 0xa7050000
    ctx->pc = 0x16a070u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x16a074: 0xa7060002
    ctx->pc = 0x16a074u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 2), (uint16_t)GPR_U32(ctx, 6));
label_16a078:
    // 0x16a078: 0xdfb30030
    ctx->pc = 0x16a078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a07c: 0xdfb20020
    ctx->pc = 0x16a07cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a080: 0xdfb10010
    ctx->pc = 0x16a080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a084: 0xdfb00000
    ctx->pc = 0x16a084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a088: 0x3e00008
    ctx->pc = 0x16A088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A08Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169EA8u: goto label_169ea8;
            case 0x169F08u: goto label_169f08;
            case 0x169F10u: goto label_169f10;
            case 0x169F40u: goto label_169f40;
            case 0x16A034u: goto label_16a034;
            case 0x16A078u: goto label_16a078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A090u;
}
