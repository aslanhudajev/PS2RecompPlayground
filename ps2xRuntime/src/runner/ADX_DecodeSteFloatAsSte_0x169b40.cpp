#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeSteFloatAsSte
// Address: 0x169b40 - 0x169de4
void ADX_DecodeSteFloatAsSte_0x169b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeSteFloatAsSte");


    ctx->pc = 0x169b40u;

    // 0x169b40: 0x27bdffd0
    ctx->pc = 0x169b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169b44: 0xe0702d
    ctx->pc = 0x169b44u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b48: 0xffb20020
    ctx->pc = 0x169b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x169b4c: 0xa5400
    ctx->pc = 0x169b4cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 16));
    // 0x169b50: 0xffb10010
    ctx->pc = 0x169b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x169b54: 0xb5c00
    ctx->pc = 0x169b54u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 16));
    // 0x169b58: 0xffb00000
    ctx->pc = 0x169b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169b5c: 0xa0c02d
    ctx->pc = 0x169b5cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b60: 0x120782d
    ctx->pc = 0x169b60u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b64: 0xa5303
    ctx->pc = 0x169b64u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x169b68: 0xb5b03
    ctx->pc = 0x169b68u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x169b6c: 0x85c70002
    ctx->pc = 0x169b6cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x169b70: 0x448a1000
    ctx->pc = 0x169b70u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 10);
    // 0x169b74: 0x468010a0
    ctx->pc = 0x169b74u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x169b78: 0x85c30000
    ctx->pc = 0x169b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x169b7c: 0x448b0800
    ctx->pc = 0x169b7cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 11);
    // 0x169b80: 0x46800860
    ctx->pc = 0x169b80u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x169b84: 0x85e90000
    ctx->pc = 0x169b84u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x169b88: 0x85e50002
    ctx->pc = 0x169b88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x169b8c: 0x73c00
    ctx->pc = 0x169b8cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
    // 0x169b90: 0x3c013780
    ctx->pc = 0x169b90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14208 << 16));
    // 0x169b94: 0x44810000
    ctx->pc = 0x169b94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x169b98: 0x1817c2
    ctx->pc = 0x169b98u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 24), 31));
    // 0x169b9c: 0x31c00
    ctx->pc = 0x169b9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x169ba0: 0x94c00
    ctx->pc = 0x169ba0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 16));
    // 0x169ba4: 0x52c00
    ctx->pc = 0x169ba4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x169ba8: 0x3021021
    ctx->pc = 0x169ba8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x169bac: 0x44874000
    ctx->pc = 0x169bacu;
    *(uint32_t*)&ctx->f[8] = GPR_U32(ctx, 7);
    // 0x169bb0: 0x46804220
    ctx->pc = 0x169bb0u;
    ctx->f[8] = FPU_CVT_S_W(*(int32_t*)&ctx->f[8]);
    // 0x169bb4: 0x21043
    ctx->pc = 0x169bb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x169bb8: 0x46000b02
    ctx->pc = 0x169bb8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169bbc: 0x80502d
    ctx->pc = 0x169bbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bc0: 0x460012c2
    ctx->pc = 0x169bc0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x169bc4: 0x44833800
    ctx->pc = 0x169bc4u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 3);
    // 0x169bc8: 0x468039e0
    ctx->pc = 0x169bc8u;
    ctx->f[7] = FPU_CVT_S_W(*(int32_t*)&ctx->f[7]);
    // 0x169bcc: 0x44893000
    ctx->pc = 0x169bccu;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 9);
    // 0x169bd0: 0x468031a0
    ctx->pc = 0x169bd0u;
    ctx->f[6] = FPU_CVT_S_W(*(int32_t*)&ctx->f[6]);
    // 0x169bd4: 0x44854800
    ctx->pc = 0x169bd4u;
    *(uint32_t*)&ctx->f[9] = GPR_U32(ctx, 5);
    // 0x169bd8: 0x46804a60
    ctx->pc = 0x169bd8u;
    ctx->f[9] = FPU_CVT_S_W(*(int32_t*)&ctx->f[9]);
    // 0x169bdc: 0x1840006b
    ctx->pc = 0x169BDCu;
    {
        const bool branch_taken_0x169bdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x169BE0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169bdc) {
            ctx->pc = 0x169D8Cu;
            goto label_169d8c;
        }
    }
    ctx->pc = 0x169BE4u;
    // 0x169be4: 0x40802d
    ctx->pc = 0x169be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169be8: 0x24c60002
    ctx->pc = 0x169be8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
    // 0x169bec: 0x2419ff00
    ctx->pc = 0x169becu;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x169bf0: 0x3c12002c
    ctx->pc = 0x169bf0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)44 << 16));
    // 0x169bf4: 0x3c11002c
    ctx->pc = 0x169bf4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)44 << 16));
    // 0x169bf8: 0x140282d
    ctx->pc = 0x169bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bfc: 0x0
    ctx->pc = 0x169bfcu;
    // NOP
label_169c00:
    // 0x169c00: 0x94a20000
    ctx->pc = 0x169c00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169c04: 0x21a00
    ctx->pc = 0x169c04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169c08: 0x791824
    ctx->pc = 0x169c08u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x169c0c: 0x21202
    ctx->pc = 0x169c0cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x169c10: 0x431025
    ctx->pc = 0x169c10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169c14: 0x21400
    ctx->pc = 0x169c14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x169c18: 0x22403
    ctx->pc = 0x169c18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x169c1c: 0x30838000
    ctx->pc = 0x169c1cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 32768));
    // 0x169c20: 0x1460000f
    ctx->pc = 0x169C20u;
    {
        const bool branch_taken_0x169c20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x169C24u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 18));
        if (branch_taken_0x169c20) {
            ctx->pc = 0x169C60u;
            goto label_169c60;
        }
    }
    ctx->pc = 0x169C28u;
    // 0x169c28: 0x95420000
    ctx->pc = 0x169c28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x169c2c: 0x30841fff
    ctx->pc = 0x169c2cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 8191));
    // 0x169c30: 0x24840001
    ctx->pc = 0x169c30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x169c34: 0x21a00
    ctx->pc = 0x169c34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169c38: 0x44846800
    ctx->pc = 0x169c38u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 4);
    // 0x169c3c: 0x46806b60
    ctx->pc = 0x169c3cu;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x169c40: 0x791824
    ctx->pc = 0x169c40u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x169c44: 0x21202
    ctx->pc = 0x169c44u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x169c48: 0x431025
    ctx->pc = 0x169c48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169c4c: 0x21400
    ctx->pc = 0x169c4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x169c50: 0x22403
    ctx->pc = 0x169c50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x169c54: 0x30838000
    ctx->pc = 0x169c54u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 32768));
    // 0x169c58: 0x10600003
    ctx->pc = 0x169C58u;
    {
        const bool branch_taken_0x169c58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x169C5Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8191));
        if (branch_taken_0x169c58) {
            ctx->pc = 0x169C68u;
            goto label_169c68;
        }
    }
    ctx->pc = 0x169C60u;
label_169c60:
    // 0x169c60: 0x1000005b
    ctx->pc = 0x169C60u;
    {
        const bool branch_taken_0x169c60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x169C64u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x169c60) {
            ctx->pc = 0x169DD0u;
            goto label_169dd0;
        }
    }
    ctx->pc = 0x169C68u;
label_169c68:
    // 0x169c68: 0x24ed0001
    ctx->pc = 0x169c68u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 7), 1));
    // 0x169c6c: 0x24420001
    ctx->pc = 0x169c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x169c70: 0x24a50002
    ctx->pc = 0x169c70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x169c74: 0x44825000
    ctx->pc = 0x169c74u;
    *(uint32_t*)&ctx->f[10] = GPR_U32(ctx, 2);
    // 0x169c78: 0x468052a0
    ctx->pc = 0x169c78u;
    ctx->f[10] = FPU_CVT_S_W(*(int32_t*)&ctx->f[10]);
    // 0x169c7c: 0x254a0002
    ctx->pc = 0x169c7cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 2));
    // 0x169c80: 0x264c98a0
    ctx->pc = 0x169c80u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 18), 4294940832));
    // 0x169c84: 0x262b9ca0
    ctx->pc = 0x169c84u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 17), 4294941856));
    // 0x169c88: 0x2409001e
    ctx->pc = 0x169c88u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 30));
    // 0x169c8c: 0x25070002
    ctx->pc = 0x169c8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 8), 2));
label_169c90:
    // 0x169c90: 0x90a30000
    ctx->pc = 0x169c90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169c94: 0x46086082
    ctx->pc = 0x169c94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x169c98: 0x46075802
    ctx->pc = 0x169c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x169c9c: 0x91440000
    ctx->pc = 0x169c9cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x169ca0: 0x31880
    ctx->pc = 0x169ca0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x169ca4: 0x460960c2
    ctx->pc = 0x169ca4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
    // 0x169ca8: 0x6c1021
    ctx->pc = 0x169ca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x169cac: 0x42080
    ctx->pc = 0x169cacu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x169cb0: 0xc4440000
    ctx->pc = 0x169cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x169cb4: 0x46020000
    ctx->pc = 0x169cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x169cb8: 0x8c1021
    ctx->pc = 0x169cb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x169cbc: 0x46065842
    ctx->pc = 0x169cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x169cc0: 0x460d2082
    ctx->pc = 0x169cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x169cc4: 0xc4450000
    ctx->pc = 0x169cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x169cc8: 0x46003a06
    ctx->pc = 0x169cc8u;
    ctx->f[8] = FPU_MOV_S(ctx->f[7]);
    // 0x169ccc: 0x46003246
    ctx->pc = 0x169cccu;
    ctx->f[9] = FPU_MOV_S(ctx->f[6]);
    // 0x169cd0: 0x46030840
    ctx->pc = 0x169cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x169cd4: 0x6b1821
    ctx->pc = 0x169cd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x169cd8: 0x460201c0
    ctx->pc = 0x169cd8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x169cdc: 0xc4640000
    ctx->pc = 0x169cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x169ce0: 0x460a2802
    ctx->pc = 0x169ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x169ce4: 0x8b2021
    ctx->pc = 0x169ce4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x169ce8: 0x460860c2
    ctx->pc = 0x169ce8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[8]);
    // 0x169cec: 0xc4850000
    ctx->pc = 0x169cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x169cf0: 0x46075882
    ctx->pc = 0x169cf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x169cf4: 0x46003a06
    ctx->pc = 0x169cf4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[7]);
    // 0x169cf8: 0x46000980
    ctx->pc = 0x169cf8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x169cfc: 0x24a50001
    ctx->pc = 0x169cfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x169d00: 0x46003824
    ctx->pc = 0x169d00u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[7]);
    // 0x169d04: 0x44030000
    ctx->pc = 0x169d04u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x169d08: 0x254a0001
    ctx->pc = 0x169d08u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x169d0c: 0x46031080
    ctx->pc = 0x169d0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x169d10: 0x25080004
    ctx->pc = 0x169d10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x169d14: 0x460d2042
    ctx->pc = 0x169d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x169d18: 0x2529fffe
    ctx->pc = 0x169d18u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967294));
    // 0x169d1c: 0x31403
    ctx->pc = 0x169d1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x169d20: 0x460960c2
    ctx->pc = 0x169d20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
    // 0x169d24: 0x46003124
    ctx->pc = 0x169d24u;
    *(int32_t*)&ctx->f[4] = FPU_CVT_W_S(ctx->f[6]);
    // 0x169d28: 0x44032000
    ctx->pc = 0x169d28u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[4]);
    // 0x169d2c: 0xa4c2fffe
    ctx->pc = 0x169d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967294), (uint16_t)GPR_U32(ctx, 2));
    // 0x169d30: 0x46065802
    ctx->pc = 0x169d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x169d34: 0x46003246
    ctx->pc = 0x169d34u;
    ctx->f[9] = FPU_MOV_S(ctx->f[6]);
    // 0x169d38: 0x460111c0
    ctx->pc = 0x169d38u;
    ctx->f[7] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x169d3c: 0x31403
    ctx->pc = 0x169d3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x169d40: 0x460a2842
    ctx->pc = 0x169d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x169d44: 0x46030000
    ctx->pc = 0x169d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x169d48: 0xa4e2fffe
    ctx->pc = 0x169d48u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294967294), (uint16_t)GPR_U32(ctx, 2));
    // 0x169d4c: 0x460038a4
    ctx->pc = 0x169d4cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[7]);
    // 0x169d50: 0x44031000
    ctx->pc = 0x169d50u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[2]);
    // 0x169d54: 0x46010180
    ctx->pc = 0x169d54u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x169d58: 0x31403
    ctx->pc = 0x169d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x169d5c: 0xa4c20000
    ctx->pc = 0x169d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x169d60: 0x46003024
    ctx->pc = 0x169d60u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[6]);
    // 0x169d64: 0x44030000
    ctx->pc = 0x169d64u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x169d68: 0x24c60004
    ctx->pc = 0x169d68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x169d6c: 0x31403
    ctx->pc = 0x169d6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x169d70: 0xa4e20000
    ctx->pc = 0x169d70u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x169d74: 0x521ffc6
    ctx->pc = 0x169D74u;
    {
        const bool branch_taken_0x169d74 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x169D78u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x169d74) {
            ctx->pc = 0x169C90u;
            goto label_169c90;
        }
    }
    ctx->pc = 0x169D7Cu;
    // 0x169d7c: 0x1a0382d
    ctx->pc = 0x169d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d80: 0xf0102a
    ctx->pc = 0x169d80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x169d84: 0x1440ff9e
    ctx->pc = 0x169D84u;
    {
        const bool branch_taken_0x169d84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x169D88u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169d84) {
            ctx->pc = 0x169C00u;
            goto label_169c00;
        }
    }
    ctx->pc = 0x169D8Cu;
label_169d8c:
    // 0x169d8c: 0x46004024
    ctx->pc = 0x169d8cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[8]);
    // 0x169d90: 0x44030000
    ctx->pc = 0x169d90u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x169d94: 0x46003824
    ctx->pc = 0x169d94u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[7]);
    // 0x169d98: 0x44040000
    ctx->pc = 0x169d98u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x169d9c: 0x46003024
    ctx->pc = 0x169d9cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[6]);
    // 0x169da0: 0x44050000
    ctx->pc = 0x169da0u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x169da4: 0x300102d
    ctx->pc = 0x169da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169da8: 0x46004824
    ctx->pc = 0x169da8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[9]);
    // 0x169dac: 0x44060000
    ctx->pc = 0x169dacu;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x169db0: 0x31c03
    ctx->pc = 0x169db0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x169db4: 0x42403
    ctx->pc = 0x169db4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x169db8: 0xa5c30002
    ctx->pc = 0x169db8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x169dbc: 0xa5c40000
    ctx->pc = 0x169dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x169dc0: 0x52c03
    ctx->pc = 0x169dc0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x169dc4: 0x63403
    ctx->pc = 0x169dc4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x169dc8: 0xa5e50000
    ctx->pc = 0x169dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x169dcc: 0xa5e60002
    ctx->pc = 0x169dccu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 2), (uint16_t)GPR_U32(ctx, 6));
label_169dd0:
    // 0x169dd0: 0xdfb20020
    ctx->pc = 0x169dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169dd4: 0xdfb10010
    ctx->pc = 0x169dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169dd8: 0xdfb00000
    ctx->pc = 0x169dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169ddc: 0x3e00008
    ctx->pc = 0x169DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169DE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169C00u: goto label_169c00;
            case 0x169C60u: goto label_169c60;
            case 0x169C68u: goto label_169c68;
            case 0x169C90u: goto label_169c90;
            case 0x169D8Cu: goto label_169d8c;
            case 0x169DD0u: goto label_169dd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169DE4u;
}
