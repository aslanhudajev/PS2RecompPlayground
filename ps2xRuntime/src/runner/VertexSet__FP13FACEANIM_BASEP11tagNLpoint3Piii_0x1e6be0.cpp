#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: VertexSet__FP13FACEANIM_BASEP11tagNLpoint3Piii
// Address: 0x1e6be0 - 0x1e6d7c
void VertexSet__FP13FACEANIM_BASEP11tagNLpoint3Piii_0x1e6be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("VertexSet__FP13FACEANIM_BASEP11tagNLpoint3Piii");


    ctx->pc = 0x1e6be0u;

    // 0x1e6be0: 0x27bdff90
    ctx->pc = 0x1e6be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e6be4: 0x7fbf0060
    ctx->pc = 0x1e6be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1e6be8: 0x7fb50050
    ctx->pc = 0x1e6be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e6bec: 0x7fb40040
    ctx->pc = 0x1e6becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e6bf0: 0x7fb30030
    ctx->pc = 0x1e6bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e6bf4: 0x7fb20020
    ctx->pc = 0x1e6bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e6bf8: 0x7fb10010
    ctx->pc = 0x1e6bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6bfc: 0x7fb00000
    ctx->pc = 0x1e6bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6c00: 0x7080ae28
    ctx->pc = 0x1e6c00u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6c04: 0x70a0a628
    ctx->pc = 0x1e6c04u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6c08: 0x70c09e28
    ctx->pc = 0x1e6c08u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6c0c: 0x11000037
    ctx->pc = 0x1E6C0Cu;
    {
        const bool branch_taken_0x1e6c0c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6C10u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e6c0c) {
            ctx->pc = 0x1E6CECu;
            goto label_1e6cec;
        }
    }
    ctx->pc = 0x1E6C14u;
    // 0x1e6c14: 0x12082a
    ctx->pc = 0x1e6c14u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 18)));
    // 0x1e6c18: 0x1020004f
    ctx->pc = 0x1E6C18u;
    {
        const bool branch_taken_0x1e6c18 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6C1Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e6c18) {
            ctx->pc = 0x1E6D58u;
            goto label_1e6d58;
        }
    }
    ctx->pc = 0x1E6C20u;
label_1e6c20:
    // 0x1e6c20: 0x8ea30010
    ctx->pc = 0x1e6c20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1e6c24: 0x31880
    ctx->pc = 0x1e6c24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6c28: 0x2638021
    ctx->pc = 0x1e6c28u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e6c2c: 0x8e030000
    ctx->pc = 0x1e6c2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e6c30: 0x1460001b
    ctx->pc = 0x1E6C30u;
    {
        const bool branch_taken_0x1e6c30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E6C34u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e6c30) {
            ctx->pc = 0x1E6CA0u;
            goto label_1e6ca0;
        }
    }
    ctx->pc = 0x1E6C38u;
    // 0x1e6c38: 0xc06be7f
    ctx->pc = 0x1E6C38u;
    SET_GPR_U32(ctx, 31, 0x1E6C40u);
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C40u; }
        else if (ctx->pc != 0x1E6C40u) { ctx->pc = 0x1E6C40u; }
    }
    if (ctx->pc != 0x1E6C40u) { return; }
    ctx->pc = 0x1E6C40u;
    // 0x1e6c40: 0xc6820008
    ctx->pc = 0x1e6c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e6c44: 0x3c0342fe
    ctx->pc = 0x1e6c44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17150 << 16));
    // 0x1e6c48: 0x44831800
    ctx->pc = 0x1e6c48u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
    // 0x1e6c4c: 0xc6810000
    ctx->pc = 0x1e6c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6c50: 0xc6800004
    ctx->pc = 0x1e6c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6c54: 0x46021882
    ctx->pc = 0x1e6c54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e6c58: 0x460010a4
    ctx->pc = 0x1e6c58u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1e6c5c: 0x44031000
    ctx->pc = 0x1e6c5cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[2]);
    // 0x1e6c60: 0x46011842
    ctx->pc = 0x1e6c60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1e6c64: 0x306300ff
    ctx->pc = 0x1e6c64u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1e6c68: 0x31c00
    ctx->pc = 0x1e6c68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1e6c6c: 0x46001882
    ctx->pc = 0x1e6c6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1e6c70: 0x46000824
    ctx->pc = 0x1e6c70u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1e6c74: 0x44040000
    ctx->pc = 0x1e6c74u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1e6c78: 0x46001024
    ctx->pc = 0x1e6c78u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1e6c7c: 0x308500ff
    ctx->pc = 0x1e6c7cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 255));
    // 0x1e6c80: 0x44040000
    ctx->pc = 0x1e6c80u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1e6c84: 0x0
    ctx->pc = 0x1e6c84u;
    // NOP
    // 0x1e6c88: 0x308400ff
    ctx->pc = 0x1e6c88u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x1e6c8c: 0x42200
    ctx->pc = 0x1e6c8cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x1e6c90: 0xa42025
    ctx->pc = 0x1e6c90u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e6c94: 0x641825
    ctx->pc = 0x1e6c94u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6c98: 0x1000000d
    ctx->pc = 0x1E6C98u;
    {
        const bool branch_taken_0x1e6c98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6C9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1e6c98) {
            ctx->pc = 0x1E6CD0u;
            goto label_1e6cd0;
        }
    }
    ctx->pc = 0x1E6CA0u;
label_1e6ca0:
    // 0x1e6ca0: 0x8ea30000
    ctx->pc = 0x1e6ca0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e6ca4: 0xc6a00004
    ctx->pc = 0x1e6ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6ca8: 0x31880
    ctx->pc = 0x1e6ca8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6cac: 0x2631821
    ctx->pc = 0x1e6cacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e6cb0: 0xe4600000
    ctx->pc = 0x1e6cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e6cb4: 0xc6a00008
    ctx->pc = 0x1e6cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6cb8: 0xe4600004
    ctx->pc = 0x1e6cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1e6cbc: 0xc6a0000c
    ctx->pc = 0x1e6cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6cc0: 0xe4600008
    ctx->pc = 0x1e6cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1e6cc4: 0x8ea30014
    ctx->pc = 0x1e6cc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1e6cc8: 0xae030000
    ctx->pc = 0x1e6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1e6ccc: 0x0
    ctx->pc = 0x1e6cccu;
    // NOP
label_1e6cd0:
    // 0x1e6cd0: 0x26310001
    ctx->pc = 0x1e6cd0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e6cd4: 0x232182a
    ctx->pc = 0x1e6cd4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x1e6cd8: 0x26b50018
    ctx->pc = 0x1e6cd8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 24));
    // 0x1e6cdc: 0x1460ffd0
    ctx->pc = 0x1E6CDCu;
    {
        const bool branch_taken_0x1e6cdc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E6CE0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 12));
        if (branch_taken_0x1e6cdc) {
            ctx->pc = 0x1E6C20u;
            goto label_1e6c20;
        }
    }
    ctx->pc = 0x1E6CE4u;
    // 0x1e6ce4: 0x1000001d
    ctx->pc = 0x1E6CE4u;
    {
        const bool branch_taken_0x1e6ce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6CE8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1e6ce4) {
            ctx->pc = 0x1E6D5Cu;
            goto label_1e6d5c;
        }
    }
    ctx->pc = 0x1E6CECu;
label_1e6cec:
    // 0x1e6cec: 0x12082a
    ctx->pc = 0x1e6cecu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 18)));
    // 0x1e6cf0: 0x10200019
    ctx->pc = 0x1E6CF0u;
    {
        const bool branch_taken_0x1e6cf0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6CF4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e6cf0) {
            ctx->pc = 0x1E6D58u;
            goto label_1e6d58;
        }
    }
    ctx->pc = 0x1E6CF8u;
label_1e6cf8:
    // 0x1e6cf8: 0x8ea30010
    ctx->pc = 0x1e6cf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1e6cfc: 0x31880
    ctx->pc = 0x1e6cfcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6d00: 0x2633021
    ctx->pc = 0x1e6d00u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e6d04: 0x8cc30000
    ctx->pc = 0x1e6d04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e6d08: 0x1060000b
    ctx->pc = 0x1E6D08u;
    {
        const bool branch_taken_0x1e6d08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e6d08) {
            ctx->pc = 0x1E6D38u;
            goto label_1e6d38;
        }
    }
    ctx->pc = 0x1E6D10u;
    // 0x1e6d10: 0x8ea30000
    ctx->pc = 0x1e6d10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e6d14: 0xc6a00004
    ctx->pc = 0x1e6d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6d18: 0x31880
    ctx->pc = 0x1e6d18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6d1c: 0x2631821
    ctx->pc = 0x1e6d1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e6d20: 0xe4600000
    ctx->pc = 0x1e6d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e6d24: 0xc6a00008
    ctx->pc = 0x1e6d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6d28: 0xe4600004
    ctx->pc = 0x1e6d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1e6d2c: 0xc6a0000c
    ctx->pc = 0x1e6d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6d30: 0xe4600008
    ctx->pc = 0x1e6d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1e6d34: 0x0
    ctx->pc = 0x1e6d34u;
    // NOP
label_1e6d38:
    // 0x1e6d38: 0x8ea40014
    ctx->pc = 0x1e6d38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1e6d3c: 0x24a50001
    ctx->pc = 0x1e6d3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e6d40: 0xb2182a
    ctx->pc = 0x1e6d40u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 18)));
    // 0x1e6d44: 0x2694000c
    ctx->pc = 0x1e6d44u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 12));
    // 0x1e6d48: 0xacc40000
    ctx->pc = 0x1e6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1e6d4c: 0x1460ffea
    ctx->pc = 0x1E6D4Cu;
    {
        const bool branch_taken_0x1e6d4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E6D50u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 24));
        if (branch_taken_0x1e6d4c) {
            ctx->pc = 0x1E6CF8u;
            goto label_1e6cf8;
        }
    }
    ctx->pc = 0x1E6D54u;
    // 0x1e6d54: 0x0
    ctx->pc = 0x1e6d54u;
    // NOP
label_1e6d58:
    // 0x1e6d58: 0x7bbf0060
    ctx->pc = 0x1e6d58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e6d5c:
    // 0x1e6d5c: 0x7bb50050
    ctx->pc = 0x1e6d5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6d60: 0x7bb40040
    ctx->pc = 0x1e6d60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6d64: 0x7bb30030
    ctx->pc = 0x1e6d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6d68: 0x7bb20020
    ctx->pc = 0x1e6d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6d6c: 0x7bb10010
    ctx->pc = 0x1e6d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6d70: 0x7bb00000
    ctx->pc = 0x1e6d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6d74: 0x3e00008
    ctx->pc = 0x1E6D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6D78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6C20u: goto label_1e6c20;
            case 0x1E6CA0u: goto label_1e6ca0;
            case 0x1E6CD0u: goto label_1e6cd0;
            case 0x1E6CECu: goto label_1e6cec;
            case 0x1E6CF8u: goto label_1e6cf8;
            case 0x1E6D38u: goto label_1e6d38;
            case 0x1E6D58u: goto label_1e6d58;
            case 0x1E6D5Cu: goto label_1e6d5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6D7Cu;
}
