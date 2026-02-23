#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putSub__7CFcvTRSFff
// Address: 0x1e7d60 - 0x1e8434
void putSub__7CFcvTRSFff_0x1e7d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putSub__7CFcvTRSFff");


    ctx->pc = 0x1e7d60u;

    // 0x1e7d60: 0x27bdffa0
    ctx->pc = 0x1e7d60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e7d64: 0x7fbf0040
    ctx->pc = 0x1e7d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1e7d68: 0x7fb20030
    ctx->pc = 0x1e7d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e7d6c: 0x7fb10020
    ctx->pc = 0x1e7d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e7d70: 0x7fb00010
    ctx->pc = 0x1e7d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e7d74: 0xe7b60008
    ctx->pc = 0x1e7d74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e7d78: 0xe7b50004
    ctx->pc = 0x1e7d78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e7d7c: 0xe7b40000
    ctx->pc = 0x1e7d7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e7d80: 0x84830000
    ctx->pc = 0x1e7d80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e7d84: 0x46006546
    ctx->pc = 0x1e7d84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1e7d88: 0x46006d06
    ctx->pc = 0x1e7d88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1e7d8c: 0x14600007
    ctx->pc = 0x1E7D8Cu;
    {
        const bool branch_taken_0x1e7d8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E7D90u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e7d8c) {
            ctx->pc = 0x1E7DACu;
            goto label_1e7dac;
        }
    }
    ctx->pc = 0x1E7D94u;
    // 0x1e7d94: 0x86430002
    ctx->pc = 0x1e7d94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1e7d98: 0x14600005
    ctx->pc = 0x1E7D98u;
    {
        const bool branch_taken_0x1e7d98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E7D9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x1e7d98) {
            ctx->pc = 0x1E7DB0u;
            goto label_1e7db0;
        }
    }
    ctx->pc = 0x1E7DA0u;
    // 0x1e7da0: 0x86430004
    ctx->pc = 0x1e7da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e7da4: 0x10600017
    ctx->pc = 0x1E7DA4u;
    {
        const bool branch_taken_0x1e7da4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7da4) {
            ctx->pc = 0x1E7E04u;
            goto label_1e7e04;
        }
    }
    ctx->pc = 0x1E7DACu;
label_1e7dac:
    // 0x1e7dac: 0x26440020
    ctx->pc = 0x1e7dacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 32));
label_1e7db0:
    // 0x1e7db0: 0x4600ab06
    ctx->pc = 0x1e7db0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e7db4: 0xc079bd4
    ctx->pc = 0x1E7DB4u;
    SET_GPR_U32(ctx, 31, 0x1E7DBCu);
    ctx->pc = 0x1E7DB8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DBCu; }
        else if (ctx->pc != 0x1E7DBCu) { ctx->pc = 0x1E7DBCu; }
    }
    if (ctx->pc != 0x1E7DBCu) { return; }
    ctx->pc = 0x1E7DBCu;
    // 0x1e7dbc: 0x8e4200ec
    ctx->pc = 0x1e7dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e7dc0: 0x30420001
    ctx->pc = 0x1e7dc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1e7dc4: 0x1040000b
    ctx->pc = 0x1E7DC4u;
    {
        const bool branch_taken_0x1e7dc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7dc4) {
            ctx->pc = 0x1E7DF4u;
            goto label_1e7df4;
        }
    }
    ctx->pc = 0x1E7DCCu;
    // 0x1e7dcc: 0xc64300c8
    ctx->pc = 0x1e7dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7dd0: 0xc7a20050
    ctx->pc = 0x1e7dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7dd4: 0xc7a10054
    ctx->pc = 0x1e7dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7dd8: 0xc7a00058
    ctx->pc = 0x1e7dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7ddc: 0x46031302
    ctx->pc = 0x1e7ddcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1e7de0: 0x46030b42
    ctx->pc = 0x1e7de0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e7de4: 0xc06c202
    ctx->pc = 0x1E7DE4u;
    SET_GPR_U32(ctx, 31, 0x1E7DECu);
    ctx->pc = 0x1E7DE8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DECu; }
        else if (ctx->pc != 0x1E7DECu) { ctx->pc = 0x1E7DECu; }
    }
    if (ctx->pc != 0x1E7DECu) { return; }
    ctx->pc = 0x1E7DECu;
    // 0x1e7dec: 0x10000006
    ctx->pc = 0x1E7DECu;
    {
        const bool branch_taken_0x1e7dec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7DF0u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        if (branch_taken_0x1e7dec) {
            ctx->pc = 0x1E7E08u;
            goto label_1e7e08;
        }
    }
    ctx->pc = 0x1E7DF4u;
label_1e7df4:
    // 0x1e7df4: 0xc7ad0054
    ctx->pc = 0x1e7df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e7df8: 0xc7ae0058
    ctx->pc = 0x1e7df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e7dfc: 0xc06c202
    ctx->pc = 0x1E7DFCu;
    SET_GPR_U32(ctx, 31, 0x1E7E04u);
    ctx->pc = 0x1E7E00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E04u; }
        else if (ctx->pc != 0x1E7E04u) { ctx->pc = 0x1E7E04u; }
    }
    if (ctx->pc != 0x1E7E04u) { return; }
    ctx->pc = 0x1E7E04u;
label_1e7e04:
    // 0x1e7e04: 0x86430006
    ctx->pc = 0x1e7e04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1e7e08:
    // 0x1e7e08: 0x14600008
    ctx->pc = 0x1E7E08u;
    {
        const bool branch_taken_0x1e7e08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E7E0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 60));
        if (branch_taken_0x1e7e08) {
            ctx->pc = 0x1E7E2Cu;
            goto label_1e7e2c;
        }
    }
    ctx->pc = 0x1E7E10u;
    // 0x1e7e10: 0x86430008
    ctx->pc = 0x1e7e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e7e14: 0x14600004
    ctx->pc = 0x1E7E14u;
    {
        const bool branch_taken_0x1e7e14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e7e14) {
            ctx->pc = 0x1E7E28u;
            goto label_1e7e28;
        }
    }
    ctx->pc = 0x1E7E1Cu;
    // 0x1e7e1c: 0x8643000a
    ctx->pc = 0x1e7e1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1e7e20: 0x10600035
    ctx->pc = 0x1E7E20u;
    {
        const bool branch_taken_0x1e7e20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7e20) {
            ctx->pc = 0x1E7EF8u;
            goto label_1e7ef8;
        }
    }
    ctx->pc = 0x1E7E28u;
label_1e7e28:
    // 0x1e7e28: 0x2644003c
    ctx->pc = 0x1e7e28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 60));
label_1e7e2c:
    // 0x1e7e2c: 0x4600ab06
    ctx->pc = 0x1e7e2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e7e30: 0xc079bd4
    ctx->pc = 0x1E7E30u;
    SET_GPR_U32(ctx, 31, 0x1E7E38u);
    ctx->pc = 0x1E7E34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E38u; }
        else if (ctx->pc != 0x1E7E38u) { ctx->pc = 0x1E7E38u; }
    }
    if (ctx->pc != 0x1E7E38u) { return; }
    ctx->pc = 0x1E7E38u;
    // 0x1e7e38: 0x8643000a
    ctx->pc = 0x1e7e38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1e7e3c: 0x1060000e
    ctx->pc = 0x1E7E3Cu;
    {
        const bool branch_taken_0x1e7e3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7e3c) {
            ctx->pc = 0x1E7E78u;
            goto label_1e7e78;
        }
    }
    ctx->pc = 0x1E7E44u;
    // 0x1e7e44: 0x3c023f00
    ctx->pc = 0x1e7e44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1e7e48: 0x44821000
    ctx->pc = 0x1e7e48u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1e7e4c: 0xc7a00058
    ctx->pc = 0x1e7e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7e50: 0x3c024336
    ctx->pc = 0x1e7e50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17206 << 16));
    // 0x1e7e54: 0x34420b61
    ctx->pc = 0x1e7e54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2913));
    // 0x1e7e58: 0x44820800
    ctx->pc = 0x1e7e58u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e7e5c: 0x0
    ctx->pc = 0x1e7e5cu;
    // NOP
    // 0x1e7e60: 0x46000802
    ctx->pc = 0x1e7e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e7e64: 0x46001000
    ctx->pc = 0x1e7e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e7e68: 0x46000024
    ctx->pc = 0x1e7e68u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e7e6c: 0x44020000
    ctx->pc = 0x1e7e6cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1e7e70: 0xc06c157
    ctx->pc = 0x1E7E70u;
    SET_GPR_U32(ctx, 31, 0x1E7E78u);
    ctx->pc = 0x1E7E74u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E78u; }
        else if (ctx->pc != 0x1E7E78u) { ctx->pc = 0x1E7E78u; }
    }
    if (ctx->pc != 0x1E7E78u) { return; }
    ctx->pc = 0x1E7E78u;
label_1e7e78:
    // 0x1e7e78: 0x86430008
    ctx->pc = 0x1e7e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e7e7c: 0x1060000e
    ctx->pc = 0x1E7E7Cu;
    {
        const bool branch_taken_0x1e7e7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7e7c) {
            ctx->pc = 0x1E7EB8u;
            goto label_1e7eb8;
        }
    }
    ctx->pc = 0x1E7E84u;
    // 0x1e7e84: 0x3c023f00
    ctx->pc = 0x1e7e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1e7e88: 0x44821000
    ctx->pc = 0x1e7e88u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1e7e8c: 0xc7a00054
    ctx->pc = 0x1e7e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7e90: 0x3c024336
    ctx->pc = 0x1e7e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17206 << 16));
    // 0x1e7e94: 0x34420b61
    ctx->pc = 0x1e7e94u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2913));
    // 0x1e7e98: 0x44820800
    ctx->pc = 0x1e7e98u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e7e9c: 0x0
    ctx->pc = 0x1e7e9cu;
    // NOP
    // 0x1e7ea0: 0x46000802
    ctx->pc = 0x1e7ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e7ea4: 0x46001000
    ctx->pc = 0x1e7ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e7ea8: 0x46000024
    ctx->pc = 0x1e7ea8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e7eac: 0x44020000
    ctx->pc = 0x1e7eacu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1e7eb0: 0xc06c0fb
    ctx->pc = 0x1E7EB0u;
    SET_GPR_U32(ctx, 31, 0x1E7EB8u);
    ctx->pc = 0x1E7EB4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7EB8u; }
        else if (ctx->pc != 0x1E7EB8u) { ctx->pc = 0x1E7EB8u; }
    }
    if (ctx->pc != 0x1E7EB8u) { return; }
    ctx->pc = 0x1E7EB8u;
label_1e7eb8:
    // 0x1e7eb8: 0x86430006
    ctx->pc = 0x1e7eb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1e7ebc: 0x1060000e
    ctx->pc = 0x1E7EBCu;
    {
        const bool branch_taken_0x1e7ebc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7ebc) {
            ctx->pc = 0x1E7EF8u;
            goto label_1e7ef8;
        }
    }
    ctx->pc = 0x1E7EC4u;
    // 0x1e7ec4: 0x3c023f00
    ctx->pc = 0x1e7ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1e7ec8: 0x44821000
    ctx->pc = 0x1e7ec8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1e7ecc: 0xc7a00050
    ctx->pc = 0x1e7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7ed0: 0x3c024336
    ctx->pc = 0x1e7ed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17206 << 16));
    // 0x1e7ed4: 0x34420b61
    ctx->pc = 0x1e7ed4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2913));
    // 0x1e7ed8: 0x44820800
    ctx->pc = 0x1e7ed8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e7edc: 0x0
    ctx->pc = 0x1e7edcu;
    // NOP
    // 0x1e7ee0: 0x46000802
    ctx->pc = 0x1e7ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e7ee4: 0x46001000
    ctx->pc = 0x1e7ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e7ee8: 0x46000024
    ctx->pc = 0x1e7ee8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e7eec: 0x44020000
    ctx->pc = 0x1e7eecu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1e7ef0: 0xc06c09f
    ctx->pc = 0x1E7EF0u;
    SET_GPR_U32(ctx, 31, 0x1E7EF8u);
    ctx->pc = 0x1E7EF4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7EF8u; }
        else if (ctx->pc != 0x1E7EF8u) { ctx->pc = 0x1E7EF8u; }
    }
    if (ctx->pc != 0x1E7EF8u) { return; }
    ctx->pc = 0x1E7EF8u;
label_1e7ef8:
    // 0x1e7ef8: 0x8643000c
    ctx->pc = 0x1e7ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e7efc: 0x14600008
    ctx->pc = 0x1E7EFCu;
    {
        const bool branch_taken_0x1e7efc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E7F00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 88));
        if (branch_taken_0x1e7efc) {
            ctx->pc = 0x1E7F20u;
            goto label_1e7f20;
        }
    }
    ctx->pc = 0x1E7F04u;
    // 0x1e7f04: 0x8643000e
    ctx->pc = 0x1e7f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1e7f08: 0x14600004
    ctx->pc = 0x1E7F08u;
    {
        const bool branch_taken_0x1e7f08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e7f08) {
            ctx->pc = 0x1E7F1Cu;
            goto label_1e7f1c;
        }
    }
    ctx->pc = 0x1E7F10u;
    // 0x1e7f10: 0x86430010
    ctx->pc = 0x1e7f10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e7f14: 0x1060004b
    ctx->pc = 0x1E7F14u;
    {
        const bool branch_taken_0x1e7f14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7f14) {
            ctx->pc = 0x1E8044u;
            goto label_1e8044;
        }
    }
    ctx->pc = 0x1E7F1Cu;
label_1e7f1c:
    // 0x1e7f1c: 0x26440058
    ctx->pc = 0x1e7f1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 88));
label_1e7f20:
    // 0x1e7f20: 0x4600ab06
    ctx->pc = 0x1e7f20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e7f24: 0xc079bd4
    ctx->pc = 0x1E7F24u;
    SET_GPR_U32(ctx, 31, 0x1E7F2Cu);
    ctx->pc = 0x1E7F28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1E6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F2Cu; }
        else if (ctx->pc != 0x1E7F2Cu) { ctx->pc = 0x1E7F2Cu; }
    }
    if (ctx->pc != 0x1E7F2Cu) { return; }
    ctx->pc = 0x1E7F2Cu;
    // 0x1e7f2c: 0x8642000c
    ctx->pc = 0x1e7f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e7f30: 0x14400002
    ctx->pc = 0x1E7F30u;
    {
        const bool branch_taken_0x1e7f30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E7F34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e7f30) {
            ctx->pc = 0x1E7F3Cu;
            goto label_1e7f3c;
        }
    }
    ctx->pc = 0x1E7F38u;
    // 0x1e7f38: 0xafa20050
    ctx->pc = 0x1e7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1e7f3c:
    // 0x1e7f3c: 0x8642000e
    ctx->pc = 0x1e7f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1e7f40: 0x14400002
    ctx->pc = 0x1E7F40u;
    {
        const bool branch_taken_0x1e7f40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E7F44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e7f40) {
            ctx->pc = 0x1E7F4Cu;
            goto label_1e7f4c;
        }
    }
    ctx->pc = 0x1E7F48u;
    // 0x1e7f48: 0xafa20054
    ctx->pc = 0x1e7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_1e7f4c:
    // 0x1e7f4c: 0x86420010
    ctx->pc = 0x1e7f4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e7f50: 0x14400002
    ctx->pc = 0x1E7F50u;
    {
        const bool branch_taken_0x1e7f50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E7F54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1e7f50) {
            ctx->pc = 0x1E7F5Cu;
            goto label_1e7f5c;
        }
    }
    ctx->pc = 0x1E7F58u;
    // 0x1e7f58: 0xafa20058
    ctx->pc = 0x1e7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1e7f5c:
    // 0x1e7f5c: 0x8e4200ec
    ctx->pc = 0x1e7f5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e7f60: 0x30420004
    ctx->pc = 0x1e7f60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x1e7f64: 0x10400024
    ctx->pc = 0x1E7F64u;
    {
        const bool branch_taken_0x1e7f64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7f64) {
            ctx->pc = 0x1E7FF8u;
            goto label_1e7ff8;
        }
    }
    ctx->pc = 0x1E7F6Cu;
    // 0x1e7f6c: 0xc64400d8
    ctx->pc = 0x1e7f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e7f70: 0xc7a00050
    ctx->pc = 0x1e7f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7f74: 0x27b00054
    ctx->pc = 0x1e7f74u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 84));
    // 0x1e7f78: 0x27b10058
    ctx->pc = 0x1e7f78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 88));
    // 0x1e7f7c: 0xc64300dc
    ctx->pc = 0x1e7f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7f80: 0xc6020000
    ctx->pc = 0x1e7f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7f84: 0xc64100e0
    ctx->pc = 0x1e7f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7f88: 0x46002302
    ctx->pc = 0x1e7f88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e7f8c: 0xc6200000
    ctx->pc = 0x1e7f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7f90: 0x46021b42
    ctx->pc = 0x1e7f90u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e7f94: 0xc06c1b3
    ctx->pc = 0x1E7F94u;
    SET_GPR_U32(ctx, 31, 0x1E7F9Cu);
    ctx->pc = 0x1E7F98u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F9Cu; }
        else if (ctx->pc != 0x1E7F9Cu) { ctx->pc = 0x1E7F9Cu; }
    }
    if (ctx->pc != 0x1E7F9Cu) { return; }
    ctx->pc = 0x1E7F9Cu;
    // 0x1e7f9c: 0xc6000000
    ctx->pc = 0x1e7f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7fa0: 0xc64100dc
    ctx->pc = 0x1e7fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7fa4: 0xc64300d8
    ctx->pc = 0x1e7fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7fa8: 0xc7a20050
    ctx->pc = 0x1e7fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7fac: 0x46000802
    ctx->pc = 0x1e7facu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e7fb0: 0x46021b02
    ctx->pc = 0x1e7fb0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e7fb4: 0x46006036
    ctx->pc = 0x1e7fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7fb8: 0x0
    ctx->pc = 0x1e7fb8u;
    // NOP
    // 0x1e7fbc: 0x45010002
    ctx->pc = 0x1E7FBCu;
    {
        const bool branch_taken_0x1e7fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7fbc) {
            ctx->pc = 0x1E7FC8u;
            goto label_1e7fc8;
        }
    }
    ctx->pc = 0x1E7FC4u;
    // 0x1e7fc4: 0x46000306
    ctx->pc = 0x1e7fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e7fc8:
    // 0x1e7fc8: 0xc6200000
    ctx->pc = 0x1e7fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7fcc: 0xc64100e0
    ctx->pc = 0x1e7fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7fd0: 0x46000802
    ctx->pc = 0x1e7fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e7fd4: 0x46006036
    ctx->pc = 0x1e7fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7fd8: 0x0
    ctx->pc = 0x1e7fd8u;
    // NOP
    // 0x1e7fdc: 0x45010002
    ctx->pc = 0x1E7FDCu;
    {
        const bool branch_taken_0x1e7fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7fdc) {
            ctx->pc = 0x1E7FE8u;
            goto label_1e7fe8;
        }
    }
    ctx->pc = 0x1E7FE4u;
    // 0x1e7fe4: 0x46000306
    ctx->pc = 0x1e7fe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e7fe8:
    // 0x1e7fe8: 0xc06b218
    ctx->pc = 0x1E7FE8u;
    SET_GPR_U32(ctx, 31, 0x1E7FF0u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FF0u; }
        else if (ctx->pc != 0x1E7FF0u) { ctx->pc = 0x1E7FF0u; }
    }
    if (ctx->pc != 0x1E7FF0u) { return; }
    ctx->pc = 0x1E7FF0u;
    // 0x1e7ff0: 0x1000002c
    ctx->pc = 0x1E7FF0u;
    {
        const bool branch_taken_0x1e7ff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7FF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 236)));
        if (branch_taken_0x1e7ff0) {
            ctx->pc = 0x1E80A4u;
            goto label_1e80a4;
        }
    }
    ctx->pc = 0x1E7FF8u;
label_1e7ff8:
    // 0x1e7ff8: 0xc7ac0050
    ctx->pc = 0x1e7ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e7ffc: 0xc7ad0054
    ctx->pc = 0x1e7ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e8000: 0x460c6836
    ctx->pc = 0x1e8000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8004: 0x0
    ctx->pc = 0x1e8004u;
    // NOP
    // 0x1e8008: 0x45010002
    ctx->pc = 0x1E8008u;
    {
        const bool branch_taken_0x1e8008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E800Cu;
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1e8008) {
            ctx->pc = 0x1E8014u;
            goto label_1e8014;
        }
    }
    ctx->pc = 0x1E8010u;
    // 0x1e8010: 0x46006d86
    ctx->pc = 0x1e8010u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_1e8014:
    // 0x1e8014: 0xc7ae0058
    ctx->pc = 0x1e8014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e8018: 0x46167036
    ctx->pc = 0x1e8018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e801c: 0x0
    ctx->pc = 0x1e801cu;
    // NOP
    // 0x1e8020: 0x45010002
    ctx->pc = 0x1E8020u;
    {
        const bool branch_taken_0x1e8020 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8020) {
            ctx->pc = 0x1E802Cu;
            goto label_1e802c;
        }
    }
    ctx->pc = 0x1E8028u;
    // 0x1e8028: 0x46007586
    ctx->pc = 0x1e8028u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_1e802c:
    // 0x1e802c: 0xc06c1b3
    ctx->pc = 0x1E802Cu;
    SET_GPR_U32(ctx, 31, 0x1E8034u);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8034u; }
        else if (ctx->pc != 0x1E8034u) { ctx->pc = 0x1E8034u; }
    }
    if (ctx->pc != 0x1E8034u) { return; }
    ctx->pc = 0x1E8034u;
    // 0x1e8034: 0xc06b218
    ctx->pc = 0x1E8034u;
    SET_GPR_U32(ctx, 31, 0x1E803Cu);
    ctx->pc = 0x1E8038u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E803Cu; }
        else if (ctx->pc != 0x1E803Cu) { ctx->pc = 0x1E803Cu; }
    }
    if (ctx->pc != 0x1E803Cu) { return; }
    ctx->pc = 0x1E803Cu;
    // 0x1e803c: 0x10000018
    ctx->pc = 0x1E803Cu;
    {
        const bool branch_taken_0x1e803c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e803c) {
            ctx->pc = 0x1E80A0u;
            goto label_1e80a0;
        }
    }
    ctx->pc = 0x1E8044u;
label_1e8044:
    // 0x1e8044: 0x8e4300ec
    ctx->pc = 0x1e8044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e8048: 0x30630004
    ctx->pc = 0x1e8048u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
    // 0x1e804c: 0x10600014
    ctx->pc = 0x1E804Cu;
    {
        const bool branch_taken_0x1e804c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e804c) {
            ctx->pc = 0x1E80A0u;
            goto label_1e80a0;
        }
    }
    ctx->pc = 0x1E8054u;
    // 0x1e8054: 0xc64d00dc
    ctx->pc = 0x1e8054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e8058: 0xc64e00e0
    ctx->pc = 0x1e8058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e805c: 0xc06c1b3
    ctx->pc = 0x1E805Cu;
    SET_GPR_U32(ctx, 31, 0x1E8064u);
    ctx->pc = 0x1E8060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8064u; }
        else if (ctx->pc != 0x1E8064u) { ctx->pc = 0x1E8064u; }
    }
    if (ctx->pc != 0x1E8064u) { return; }
    ctx->pc = 0x1E8064u;
    // 0x1e8064: 0xc64c00d8
    ctx->pc = 0x1e8064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e8068: 0xc64000dc
    ctx->pc = 0x1e8068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e806c: 0x46006036
    ctx->pc = 0x1e806cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8070: 0x0
    ctx->pc = 0x1e8070u;
    // NOP
    // 0x1e8074: 0x45010002
    ctx->pc = 0x1E8074u;
    {
        const bool branch_taken_0x1e8074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8074) {
            ctx->pc = 0x1E8080u;
            goto label_1e8080;
        }
    }
    ctx->pc = 0x1E807Cu;
    // 0x1e807c: 0x46000306
    ctx->pc = 0x1e807cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e8080:
    // 0x1e8080: 0xc64000e0
    ctx->pc = 0x1e8080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8084: 0x46006036
    ctx->pc = 0x1e8084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8088: 0x0
    ctx->pc = 0x1e8088u;
    // NOP
    // 0x1e808c: 0x45010002
    ctx->pc = 0x1E808Cu;
    {
        const bool branch_taken_0x1e808c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e808c) {
            ctx->pc = 0x1E8098u;
            goto label_1e8098;
        }
    }
    ctx->pc = 0x1E8094u;
    // 0x1e8094: 0x46000306
    ctx->pc = 0x1e8094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e8098:
    // 0x1e8098: 0xc06b218
    ctx->pc = 0x1E8098u;
    SET_GPR_U32(ctx, 31, 0x1E80A0u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80A0u; }
        else if (ctx->pc != 0x1E80A0u) { ctx->pc = 0x1E80A0u; }
    }
    if (ctx->pc != 0x1E80A0u) { return; }
    ctx->pc = 0x1E80A0u;
label_1e80a0:
    // 0x1e80a0: 0x8e4300ec
    ctx->pc = 0x1e80a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_1e80a4:
    // 0x1e80a4: 0x30630008
    ctx->pc = 0x1e80a4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8));
    // 0x1e80a8: 0x10600010
    ctx->pc = 0x1E80A8u;
    {
        const bool branch_taken_0x1e80a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e80a8) {
            ctx->pc = 0x1E80ECu;
            goto label_1e80ec;
        }
    }
    ctx->pc = 0x1E80B0u;
    // 0x1e80b0: 0x3c020050
    ctx->pc = 0x1e80b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e80b4: 0xc07ce18
    ctx->pc = 0x1E80B4u;
    SET_GPR_U32(ctx, 31, 0x1E80BCu);
    ctx->pc = 0x1E80B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80BCu; }
        else if (ctx->pc != 0x1E80BCu) { ctx->pc = 0x1E80BCu; }
    }
    if (ctx->pc != 0x1E80BCu) { return; }
    ctx->pc = 0x1E80BCu;
    // 0x1e80bc: 0x1c400004
    ctx->pc = 0x1E80BCu;
    {
        const bool branch_taken_0x1e80bc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e80bc) {
            ctx->pc = 0x1E80D0u;
            goto label_1e80d0;
        }
    }
    ctx->pc = 0x1E80C4u;
    // 0x1e80c4: 0x8e4300ac
    ctx->pc = 0x1e80c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1e80c8: 0x24630001
    ctx->pc = 0x1e80c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e80cc: 0xae4300ac
    ctx->pc = 0x1e80ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
label_1e80d0:
    // 0x1e80d0: 0x8e4400ac
    ctx->pc = 0x1e80d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1e80d4: 0x8e4300e8
    ctx->pc = 0x1e80d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x1e80d8: 0x64082a
    ctx->pc = 0x1e80d8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1e80dc: 0x10200003
    ctx->pc = 0x1E80DCu;
    {
        const bool branch_taken_0x1e80dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e80dc) {
            ctx->pc = 0x1E80ECu;
            goto label_1e80ec;
        }
    }
    ctx->pc = 0x1E80E4u;
    // 0x1e80e4: 0x8e4300e4
    ctx->pc = 0x1e80e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x1e80e8: 0xae4300ac
    ctx->pc = 0x1e80e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
label_1e80ec:
    // 0x1e80ec: 0x8e5000ac
    ctx->pc = 0x1e80ecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1e80f0: 0x120000c7
    ctx->pc = 0x1E80F0u;
    {
        const bool branch_taken_0x1e80f0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e80f0) {
            ctx->pc = 0x1E8410u;
            goto label_1e8410;
        }
    }
    ctx->pc = 0x1E80F8u;
    // 0x1e80f8: 0x8e4400ec
    ctx->pc = 0x1e80f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e80fc: 0x30830002
    ctx->pc = 0x1e80fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 2));
    // 0x1e8100: 0x5060003e
    ctx->pc = 0x1E8100u;
    {
        const bool branch_taken_0x1e8100 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8100) {
            ctx->pc = 0x1E8104u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E81FCu;
            goto label_1e81fc;
        }
    }
    ctx->pc = 0x1E8108u;
    // 0x1e8108: 0xc64000d4
    ctx->pc = 0x1e8108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e810c: 0x4600a834
    ctx->pc = 0x1e810cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8110: 0x0
    ctx->pc = 0x1e8110u;
    // NOP
    // 0x1e8114: 0x4503001b
    ctx->pc = 0x1E8114u;
    {
        const bool branch_taken_0x1e8114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8114) {
            ctx->pc = 0x1E8118u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E8184u;
            goto label_1e8184;
        }
    }
    ctx->pc = 0x1E811Cu;
    // 0x1e811c: 0xc64c00d0
    ctx->pc = 0x1e811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e8120: 0x44800000
    ctx->pc = 0x1e8120u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1e8124: 0x0
    ctx->pc = 0x1e8124u;
    // NOP
    // 0x1e8128: 0x46006036
    ctx->pc = 0x1e8128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e812c: 0x0
    ctx->pc = 0x1e812cu;
    // NOP
    // 0x1e8130: 0x4501000c
    ctx->pc = 0x1E8130u;
    {
        const bool branch_taken_0x1e8130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8130) {
            ctx->pc = 0x1E8164u;
            goto label_1e8164;
        }
    }
    ctx->pc = 0x1E8138u;
    // 0x1e8138: 0x30820040
    ctx->pc = 0x1e8138u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e813c: 0x10400007
    ctx->pc = 0x1E813Cu;
    {
        const bool branch_taken_0x1e813c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8140u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e813c) {
            ctx->pc = 0x1E815Cu;
            goto label_1e815c;
        }
    }
    ctx->pc = 0x1E8144u;
    // 0x1e8144: 0xc08541c
    ctx->pc = 0x1E8144u;
    SET_GPR_U32(ctx, 31, 0x1E814Cu);
    ctx->pc = 0x1E8148u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E814Cu; }
        else if (ctx->pc != 0x1E814Cu) { ctx->pc = 0x1E814Cu; }
    }
    if (ctx->pc != 0x1E814Cu) { return; }
    ctx->pc = 0x1E814Cu;
    // 0x1e814c: 0xc0853c8
    ctx->pc = 0x1E814Cu;
    SET_GPR_U32(ctx, 31, 0x1E8154u);
    ctx->pc = 0x1E8150u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8154u; }
        else if (ctx->pc != 0x1E8154u) { ctx->pc = 0x1E8154u; }
    }
    if (ctx->pc != 0x1E8154u) { return; }
    ctx->pc = 0x1E8154u;
    // 0x1e8154: 0x10000004
    ctx->pc = 0x1E8154u;
    {
        const bool branch_taken_0x1e8154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8158u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x1e8154) {
            ctx->pc = 0x1E8168u;
            goto label_1e8168;
        }
    }
    ctx->pc = 0x1E815Cu;
label_1e815c:
    // 0x1e815c: 0xc0853e4
    ctx->pc = 0x1E815Cu;
    SET_GPR_U32(ctx, 31, 0x1E8164u);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8164u; }
        else if (ctx->pc != 0x1E8164u) { ctx->pc = 0x1E8164u; }
    }
    if (ctx->pc != 0x1E8164u) { return; }
    ctx->pc = 0x1E8164u;
label_1e8164:
    // 0x1e8164: 0xc64100d0
    ctx->pc = 0x1e8164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8168:
    // 0x1e8168: 0x3c033d75
    ctx->pc = 0x1e8168u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15733 << 16));
    // 0x1e816c: 0x3463c290
    ctx->pc = 0x1e816cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49808));
    // 0x1e8170: 0x44830000
    ctx->pc = 0x1e8170u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1e8174: 0x0
    ctx->pc = 0x1e8174u;
    // NOP
    // 0x1e8178: 0x46000801
    ctx->pc = 0x1e8178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e817c: 0x1000003b
    ctx->pc = 0x1E817Cu;
    {
        const bool branch_taken_0x1e817c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8180u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
        if (branch_taken_0x1e817c) {
            ctx->pc = 0x1E826Cu;
            goto label_1e826c;
        }
    }
    ctx->pc = 0x1E8184u;
label_1e8184:
    // 0x1e8184: 0x44820000
    ctx->pc = 0x1e8184u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e8188: 0x0
    ctx->pc = 0x1e8188u;
    // NOP
    // 0x1e818c: 0x46140032
    ctx->pc = 0x1e818cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8190: 0x0
    ctx->pc = 0x1e8190u;
    // NOP
    // 0x1e8194: 0x4500000c
    ctx->pc = 0x1E8194u;
    {
        const bool branch_taken_0x1e8194 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8198u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e8194) {
            ctx->pc = 0x1E81C8u;
            goto label_1e81c8;
        }
    }
    ctx->pc = 0x1E819Cu;
    // 0x1e819c: 0x30820040
    ctx->pc = 0x1e819cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e81a0: 0x10400005
    ctx->pc = 0x1E81A0u;
    {
        const bool branch_taken_0x1e81a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E81A4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e81a0) {
            ctx->pc = 0x1E81B8u;
            goto label_1e81b8;
        }
    }
    ctx->pc = 0x1E81A8u;
    // 0x1e81a8: 0xc0853c8
    ctx->pc = 0x1E81A8u;
    SET_GPR_U32(ctx, 31, 0x1E81B0u);
    ctx->pc = 0x1E81ACu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81B0u; }
        else if (ctx->pc != 0x1E81B0u) { ctx->pc = 0x1E81B0u; }
    }
    if (ctx->pc != 0x1E81B0u) { return; }
    ctx->pc = 0x1E81B0u;
    // 0x1e81b0: 0x1000002f
    ctx->pc = 0x1E81B0u;
    {
        const bool branch_taken_0x1e81b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E81B4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 176)));
        if (branch_taken_0x1e81b0) {
            ctx->pc = 0x1E8270u;
            goto label_1e8270;
        }
    }
    ctx->pc = 0x1E81B8u;
label_1e81b8:
    // 0x1e81b8: 0xc0853ac
    ctx->pc = 0x1E81B8u;
    SET_GPR_U32(ctx, 31, 0x1E81C0u);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81C0u; }
        else if (ctx->pc != 0x1E81C0u) { ctx->pc = 0x1E81C0u; }
    }
    if (ctx->pc != 0x1E81C0u) { return; }
    ctx->pc = 0x1E81C0u;
    // 0x1e81c0: 0x1000002a
    ctx->pc = 0x1E81C0u;
    {
        const bool branch_taken_0x1e81c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e81c0) {
            ctx->pc = 0x1E826Cu;
            goto label_1e826c;
        }
    }
    ctx->pc = 0x1E81C8u;
label_1e81c8:
    // 0x1e81c8: 0x10400008
    ctx->pc = 0x1E81C8u;
    {
        const bool branch_taken_0x1e81c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E81CCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e81c8) {
            ctx->pc = 0x1E81ECu;
            goto label_1e81ec;
        }
    }
    ctx->pc = 0x1E81D0u;
    // 0x1e81d0: 0x72002628
    ctx->pc = 0x1e81d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e81d4: 0xc08541c
    ctx->pc = 0x1E81D4u;
    SET_GPR_U32(ctx, 31, 0x1E81DCu);
    ctx->pc = 0x1E81D8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81DCu; }
        else if (ctx->pc != 0x1E81DCu) { ctx->pc = 0x1E81DCu; }
    }
    if (ctx->pc != 0x1E81DCu) { return; }
    ctx->pc = 0x1E81DCu;
    // 0x1e81dc: 0xc0853c8
    ctx->pc = 0x1E81DCu;
    SET_GPR_U32(ctx, 31, 0x1E81E4u);
    ctx->pc = 0x1E81E0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81E4u; }
        else if (ctx->pc != 0x1E81E4u) { ctx->pc = 0x1E81E4u; }
    }
    if (ctx->pc != 0x1E81E4u) { return; }
    ctx->pc = 0x1E81E4u;
    // 0x1e81e4: 0x10000021
    ctx->pc = 0x1E81E4u;
    {
        const bool branch_taken_0x1e81e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e81e4) {
            ctx->pc = 0x1E826Cu;
            goto label_1e826c;
        }
    }
    ctx->pc = 0x1E81ECu;
label_1e81ec:
    // 0x1e81ec: 0xc0853e4
    ctx->pc = 0x1E81ECu;
    SET_GPR_U32(ctx, 31, 0x1E81F4u);
    ctx->pc = 0x1E81F0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81F4u; }
        else if (ctx->pc != 0x1E81F4u) { ctx->pc = 0x1E81F4u; }
    }
    if (ctx->pc != 0x1E81F4u) { return; }
    ctx->pc = 0x1E81F4u;
    // 0x1e81f4: 0x1000001d
    ctx->pc = 0x1E81F4u;
    {
        const bool branch_taken_0x1e81f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e81f4) {
            ctx->pc = 0x1E826Cu;
            goto label_1e826c;
        }
    }
    ctx->pc = 0x1E81FCu;
label_1e81fc:
    // 0x1e81fc: 0x44820000
    ctx->pc = 0x1e81fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e8200: 0x0
    ctx->pc = 0x1e8200u;
    // NOP
    // 0x1e8204: 0x46140032
    ctx->pc = 0x1e8204u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8208: 0x0
    ctx->pc = 0x1e8208u;
    // NOP
    // 0x1e820c: 0x4500000c
    ctx->pc = 0x1E820Cu;
    {
        const bool branch_taken_0x1e820c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8210u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e820c) {
            ctx->pc = 0x1E8240u;
            goto label_1e8240;
        }
    }
    ctx->pc = 0x1E8214u;
    // 0x1e8214: 0x30820040
    ctx->pc = 0x1e8214u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8218: 0x10400005
    ctx->pc = 0x1E8218u;
    {
        const bool branch_taken_0x1e8218 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E821Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8218) {
            ctx->pc = 0x1E8230u;
            goto label_1e8230;
        }
    }
    ctx->pc = 0x1E8220u;
    // 0x1e8220: 0xc0853c8
    ctx->pc = 0x1E8220u;
    SET_GPR_U32(ctx, 31, 0x1E8228u);
    ctx->pc = 0x1E8224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8228u; }
        else if (ctx->pc != 0x1E8228u) { ctx->pc = 0x1E8228u; }
    }
    if (ctx->pc != 0x1E8228u) { return; }
    ctx->pc = 0x1E8228u;
    // 0x1e8228: 0x10000010
    ctx->pc = 0x1E8228u;
    {
        const bool branch_taken_0x1e8228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8228) {
            ctx->pc = 0x1E826Cu;
            goto label_1e826c;
        }
    }
    ctx->pc = 0x1E8230u;
label_1e8230:
    // 0x1e8230: 0xc0853ac
    ctx->pc = 0x1E8230u;
    SET_GPR_U32(ctx, 31, 0x1E8238u);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8238u; }
        else if (ctx->pc != 0x1E8238u) { ctx->pc = 0x1E8238u; }
    }
    if (ctx->pc != 0x1E8238u) { return; }
    ctx->pc = 0x1E8238u;
    // 0x1e8238: 0x1000000c
    ctx->pc = 0x1E8238u;
    {
        const bool branch_taken_0x1e8238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8238) {
            ctx->pc = 0x1E826Cu;
            goto label_1e826c;
        }
    }
    ctx->pc = 0x1E8240u;
label_1e8240:
    // 0x1e8240: 0x10400008
    ctx->pc = 0x1E8240u;
    {
        const bool branch_taken_0x1e8240 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8244u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8240) {
            ctx->pc = 0x1E8264u;
            goto label_1e8264;
        }
    }
    ctx->pc = 0x1E8248u;
    // 0x1e8248: 0x72002628
    ctx->pc = 0x1e8248u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e824c: 0xc08541c
    ctx->pc = 0x1E824Cu;
    SET_GPR_U32(ctx, 31, 0x1E8254u);
    ctx->pc = 0x1E8250u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8254u; }
        else if (ctx->pc != 0x1E8254u) { ctx->pc = 0x1E8254u; }
    }
    if (ctx->pc != 0x1E8254u) { return; }
    ctx->pc = 0x1E8254u;
    // 0x1e8254: 0xc0853c8
    ctx->pc = 0x1E8254u;
    SET_GPR_U32(ctx, 31, 0x1E825Cu);
    ctx->pc = 0x1E8258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E825Cu; }
        else if (ctx->pc != 0x1E825Cu) { ctx->pc = 0x1E825Cu; }
    }
    if (ctx->pc != 0x1E825Cu) { return; }
    ctx->pc = 0x1E825Cu;
    // 0x1e825c: 0x10000003
    ctx->pc = 0x1E825Cu;
    {
        const bool branch_taken_0x1e825c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e825c) {
            ctx->pc = 0x1E826Cu;
            goto label_1e826c;
        }
    }
    ctx->pc = 0x1E8264u;
label_1e8264:
    // 0x1e8264: 0xc0853e4
    ctx->pc = 0x1E8264u;
    SET_GPR_U32(ctx, 31, 0x1E826Cu);
    ctx->pc = 0x1E8268u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E826Cu; }
        else if (ctx->pc != 0x1E826Cu) { ctx->pc = 0x1E826Cu; }
    }
    if (ctx->pc != 0x1E826Cu) { return; }
    ctx->pc = 0x1E826Cu;
label_1e826c:
    // 0x1e826c: 0x8e4300b0
    ctx->pc = 0x1e826cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_1e8270:
    // 0x1e8270: 0x10600067
    ctx->pc = 0x1E8270u;
    {
        const bool branch_taken_0x1e8270 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E8274u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8270) {
            ctx->pc = 0x1E8410u;
            goto label_1e8410;
        }
    }
    ctx->pc = 0x1E8278u;
    // 0x1e8278: 0x10000061
    ctx->pc = 0x1E8278u;
    {
        const bool branch_taken_0x1e8278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E827Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e8278) {
            ctx->pc = 0x1E8400u;
            goto label_1e8400;
        }
    }
    ctx->pc = 0x1E8280u;
label_1e8280:
    // 0x1e8280: 0x8e4400ec
    ctx->pc = 0x1e8280u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e8284: 0x30830002
    ctx->pc = 0x1e8284u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 2));
    // 0x1e8288: 0x5060003c
    ctx->pc = 0x1E8288u;
    {
        const bool branch_taken_0x1e8288 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8288) {
            ctx->pc = 0x1E828Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E837Cu;
            goto label_1e837c;
        }
    }
    ctx->pc = 0x1E8290u;
    // 0x1e8290: 0xc64000d4
    ctx->pc = 0x1e8290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8294: 0x4600a834
    ctx->pc = 0x1e8294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8298: 0x0
    ctx->pc = 0x1e8298u;
    // NOP
    // 0x1e829c: 0x45030016
    ctx->pc = 0x1E829Cu;
    {
        const bool branch_taken_0x1e829c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e829c) {
            ctx->pc = 0x1E82A0u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
            ctx->pc = 0x1E82F8u;
            goto label_1e82f8;
        }
    }
    ctx->pc = 0x1E82A4u;
    // 0x1e82a4: 0xc64c00d0
    ctx->pc = 0x1e82a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e82a8: 0x44800000
    ctx->pc = 0x1e82a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1e82ac: 0x0
    ctx->pc = 0x1e82acu;
    // NOP
    // 0x1e82b0: 0x46006036
    ctx->pc = 0x1e82b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e82b4: 0x0
    ctx->pc = 0x1e82b4u;
    // NOP
    // 0x1e82b8: 0x45030050
    ctx->pc = 0x1E82B8u;
    {
        const bool branch_taken_0x1e82b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e82b8) {
            ctx->pc = 0x1E82BCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
            ctx->pc = 0x1E83FCu;
            goto label_1e83fc;
        }
    }
    ctx->pc = 0x1E82C0u;
    // 0x1e82c0: 0x30820040
    ctx->pc = 0x1e82c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e82c4: 0x10400007
    ctx->pc = 0x1E82C4u;
    {
        const bool branch_taken_0x1e82c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e82c4) {
            ctx->pc = 0x1E82E4u;
            goto label_1e82e4;
        }
    }
    ctx->pc = 0x1E82CCu;
    // 0x1e82cc: 0xc08541c
    ctx->pc = 0x1E82CCu;
    SET_GPR_U32(ctx, 31, 0x1E82D4u);
    ctx->pc = 0x1E82D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82D4u; }
        else if (ctx->pc != 0x1E82D4u) { ctx->pc = 0x1E82D4u; }
    }
    if (ctx->pc != 0x1E82D4u) { return; }
    ctx->pc = 0x1E82D4u;
    // 0x1e82d4: 0xc0853c8
    ctx->pc = 0x1E82D4u;
    SET_GPR_U32(ctx, 31, 0x1E82DCu);
    ctx->pc = 0x1E82D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82DCu; }
        else if (ctx->pc != 0x1E82DCu) { ctx->pc = 0x1E82DCu; }
    }
    if (ctx->pc != 0x1E82DCu) { return; }
    ctx->pc = 0x1E82DCu;
    // 0x1e82dc: 0x10000046
    ctx->pc = 0x1E82DCu;
    {
        const bool branch_taken_0x1e82dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e82dc) {
            ctx->pc = 0x1E83F8u;
            goto label_1e83f8;
        }
    }
    ctx->pc = 0x1E82E4u;
label_1e82e4:
    // 0x1e82e4: 0xc0853e4
    ctx->pc = 0x1E82E4u;
    SET_GPR_U32(ctx, 31, 0x1E82ECu);
    ctx->pc = 0x1E82E8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82ECu; }
        else if (ctx->pc != 0x1E82ECu) { ctx->pc = 0x1E82ECu; }
    }
    if (ctx->pc != 0x1E82ECu) { return; }
    ctx->pc = 0x1E82ECu;
    // 0x1e82ec: 0x10000042
    ctx->pc = 0x1E82ECu;
    {
        const bool branch_taken_0x1e82ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e82ec) {
            ctx->pc = 0x1E83F8u;
            goto label_1e83f8;
        }
    }
    ctx->pc = 0x1E82F4u;
    // 0x1e82f4: 0x3c023f80
    ctx->pc = 0x1e82f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1e82f8:
    // 0x1e82f8: 0x44820000
    ctx->pc = 0x1e82f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e82fc: 0x0
    ctx->pc = 0x1e82fcu;
    // NOP
    // 0x1e8300: 0x46140032
    ctx->pc = 0x1e8300u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8304: 0x0
    ctx->pc = 0x1e8304u;
    // NOP
    // 0x1e8308: 0x4500000d
    ctx->pc = 0x1E8308u;
    {
        const bool branch_taken_0x1e8308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E830Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e8308) {
            ctx->pc = 0x1E8340u;
            goto label_1e8340;
        }
    }
    ctx->pc = 0x1E8310u;
    // 0x1e8310: 0x30820040
    ctx->pc = 0x1e8310u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8314: 0x10400005
    ctx->pc = 0x1E8314u;
    {
        const bool branch_taken_0x1e8314 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8314) {
            ctx->pc = 0x1E832Cu;
            goto label_1e832c;
        }
    }
    ctx->pc = 0x1E831Cu;
    // 0x1e831c: 0xc0853c8
    ctx->pc = 0x1E831Cu;
    SET_GPR_U32(ctx, 31, 0x1E8324u);
    ctx->pc = 0x1E8320u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8324u; }
        else if (ctx->pc != 0x1E8324u) { ctx->pc = 0x1E8324u; }
    }
    if (ctx->pc != 0x1E8324u) { return; }
    ctx->pc = 0x1E8324u;
    // 0x1e8324: 0x10000034
    ctx->pc = 0x1E8324u;
    {
        const bool branch_taken_0x1e8324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8324) {
            ctx->pc = 0x1E83F8u;
            goto label_1e83f8;
        }
    }
    ctx->pc = 0x1E832Cu;
label_1e832c:
    // 0x1e832c: 0xc0853ac
    ctx->pc = 0x1E832Cu;
    SET_GPR_U32(ctx, 31, 0x1E8334u);
    ctx->pc = 0x1E8330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8334u; }
        else if (ctx->pc != 0x1E8334u) { ctx->pc = 0x1E8334u; }
    }
    if (ctx->pc != 0x1E8334u) { return; }
    ctx->pc = 0x1E8334u;
    // 0x1e8334: 0x10000030
    ctx->pc = 0x1E8334u;
    {
        const bool branch_taken_0x1e8334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8334) {
            ctx->pc = 0x1E83F8u;
            goto label_1e83f8;
        }
    }
    ctx->pc = 0x1E833Cu;
    // 0x1e833c: 0x30820040
    ctx->pc = 0x1e833cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
label_1e8340:
    // 0x1e8340: 0x10400008
    ctx->pc = 0x1E8340u;
    {
        const bool branch_taken_0x1e8340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8340) {
            ctx->pc = 0x1E8364u;
            goto label_1e8364;
        }
    }
    ctx->pc = 0x1E8348u;
    // 0x1e8348: 0x8e2400b4
    ctx->pc = 0x1e8348u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e834c: 0xc08541c
    ctx->pc = 0x1E834Cu;
    SET_GPR_U32(ctx, 31, 0x1E8354u);
    ctx->pc = 0x1E8350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8354u; }
        else if (ctx->pc != 0x1E8354u) { ctx->pc = 0x1E8354u; }
    }
    if (ctx->pc != 0x1E8354u) { return; }
    ctx->pc = 0x1E8354u;
    // 0x1e8354: 0xc0853c8
    ctx->pc = 0x1E8354u;
    SET_GPR_U32(ctx, 31, 0x1E835Cu);
    ctx->pc = 0x1E8358u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E835Cu; }
        else if (ctx->pc != 0x1E835Cu) { ctx->pc = 0x1E835Cu; }
    }
    if (ctx->pc != 0x1E835Cu) { return; }
    ctx->pc = 0x1E835Cu;
    // 0x1e835c: 0x10000026
    ctx->pc = 0x1E835Cu;
    {
        const bool branch_taken_0x1e835c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e835c) {
            ctx->pc = 0x1E83F8u;
            goto label_1e83f8;
        }
    }
    ctx->pc = 0x1E8364u;
label_1e8364:
    // 0x1e8364: 0x8e2400b4
    ctx->pc = 0x1e8364u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e8368: 0xc0853e4
    ctx->pc = 0x1E8368u;
    SET_GPR_U32(ctx, 31, 0x1E8370u);
    ctx->pc = 0x1E836Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8370u; }
        else if (ctx->pc != 0x1E8370u) { ctx->pc = 0x1E8370u; }
    }
    if (ctx->pc != 0x1E8370u) { return; }
    ctx->pc = 0x1E8370u;
    // 0x1e8370: 0x10000021
    ctx->pc = 0x1E8370u;
    {
        const bool branch_taken_0x1e8370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8370) {
            ctx->pc = 0x1E83F8u;
            goto label_1e83f8;
        }
    }
    ctx->pc = 0x1E8378u;
    // 0x1e8378: 0x3c023f80
    ctx->pc = 0x1e8378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1e837c:
    // 0x1e837c: 0x44820000
    ctx->pc = 0x1e837cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1e8380: 0x0
    ctx->pc = 0x1e8380u;
    // NOP
    // 0x1e8384: 0x46140032
    ctx->pc = 0x1e8384u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8388: 0x0
    ctx->pc = 0x1e8388u;
    // NOP
    // 0x1e838c: 0x4500000d
    ctx->pc = 0x1E838Cu;
    {
        const bool branch_taken_0x1e838c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8390u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
        if (branch_taken_0x1e838c) {
            ctx->pc = 0x1E83C4u;
            goto label_1e83c4;
        }
    }
    ctx->pc = 0x1E8394u;
    // 0x1e8394: 0x30820040
    ctx->pc = 0x1e8394u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
    // 0x1e8398: 0x10400005
    ctx->pc = 0x1E8398u;
    {
        const bool branch_taken_0x1e8398 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e8398) {
            ctx->pc = 0x1E83B0u;
            goto label_1e83b0;
        }
    }
    ctx->pc = 0x1E83A0u;
    // 0x1e83a0: 0xc0853c8
    ctx->pc = 0x1E83A0u;
    SET_GPR_U32(ctx, 31, 0x1E83A8u);
    ctx->pc = 0x1E83A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83A8u; }
        else if (ctx->pc != 0x1E83A8u) { ctx->pc = 0x1E83A8u; }
    }
    if (ctx->pc != 0x1E83A8u) { return; }
    ctx->pc = 0x1E83A8u;
    // 0x1e83a8: 0x10000013
    ctx->pc = 0x1E83A8u;
    {
        const bool branch_taken_0x1e83a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e83a8) {
            ctx->pc = 0x1E83F8u;
            goto label_1e83f8;
        }
    }
    ctx->pc = 0x1E83B0u;
label_1e83b0:
    // 0x1e83b0: 0xc0853ac
    ctx->pc = 0x1E83B0u;
    SET_GPR_U32(ctx, 31, 0x1E83B8u);
    ctx->pc = 0x1E83B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83B8u; }
        else if (ctx->pc != 0x1E83B8u) { ctx->pc = 0x1E83B8u; }
    }
    if (ctx->pc != 0x1E83B8u) { return; }
    ctx->pc = 0x1E83B8u;
    // 0x1e83b8: 0x1000000f
    ctx->pc = 0x1E83B8u;
    {
        const bool branch_taken_0x1e83b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e83b8) {
            ctx->pc = 0x1E83F8u;
            goto label_1e83f8;
        }
    }
    ctx->pc = 0x1E83C0u;
    // 0x1e83c0: 0x30820040
    ctx->pc = 0x1e83c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 64));
label_1e83c4:
    // 0x1e83c4: 0x10400008
    ctx->pc = 0x1E83C4u;
    {
        const bool branch_taken_0x1e83c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e83c4) {
            ctx->pc = 0x1E83E8u;
            goto label_1e83e8;
        }
    }
    ctx->pc = 0x1E83CCu;
    // 0x1e83cc: 0x8e2400b4
    ctx->pc = 0x1e83ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e83d0: 0xc08541c
    ctx->pc = 0x1E83D0u;
    SET_GPR_U32(ctx, 31, 0x1E83D8u);
    ctx->pc = 0x1E83D4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x215070u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaPoly__Fif_0x215070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83D8u; }
        else if (ctx->pc != 0x1E83D8u) { ctx->pc = 0x1E83D8u; }
    }
    if (ctx->pc != 0x1E83D8u) { return; }
    ctx->pc = 0x1E83D8u;
    // 0x1e83d8: 0xc0853c8
    ctx->pc = 0x1E83D8u;
    SET_GPR_U32(ctx, 31, 0x1E83E0u);
    ctx->pc = 0x1E83DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->pc = 0x214F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatF__Fi_0x214f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83E0u; }
        else if (ctx->pc != 0x1E83E0u) { ctx->pc = 0x1E83E0u; }
    }
    if (ctx->pc != 0x1E83E0u) { return; }
    ctx->pc = 0x1E83E0u;
    // 0x1e83e0: 0x10000005
    ctx->pc = 0x1E83E0u;
    {
        const bool branch_taken_0x1e83e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e83e0) {
            ctx->pc = 0x1E83F8u;
            goto label_1e83f8;
        }
    }
    ctx->pc = 0x1E83E8u;
label_1e83e8:
    // 0x1e83e8: 0x8e2400b4
    ctx->pc = 0x1e83e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x1e83ec: 0xc0853e4
    ctx->pc = 0x1E83ECu;
    SET_GPR_U32(ctx, 31, 0x1E83F4u);
    ctx->pc = 0x1E83F0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83F4u; }
        else if (ctx->pc != 0x1E83F4u) { ctx->pc = 0x1E83F4u; }
    }
    if (ctx->pc != 0x1E83F4u) { return; }
    ctx->pc = 0x1E83F4u;
    // 0x1e83f4: 0x0
    ctx->pc = 0x1e83f4u;
    // NOP
label_1e83f8:
    // 0x1e83f8: 0x26310004
    ctx->pc = 0x1e83f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
label_1e83fc:
    // 0x1e83fc: 0x26100001
    ctx->pc = 0x1e83fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1e8400:
    // 0x1e8400: 0x8e4300b0
    ctx->pc = 0x1e8400u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x1e8404: 0x203182a
    ctx->pc = 0x1e8404u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1e8408: 0x1460ff9d
    ctx->pc = 0x1E8408u;
    {
        const bool branch_taken_0x1e8408 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e8408) {
            ctx->pc = 0x1E8280u;
            goto label_1e8280;
        }
    }
    ctx->pc = 0x1E8410u;
label_1e8410:
    // 0x1e8410: 0x7bbf0040
    ctx->pc = 0x1e8410u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8414: 0x7bb20030
    ctx->pc = 0x1e8414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8418: 0x7bb10020
    ctx->pc = 0x1e8418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e841c: 0x7bb00010
    ctx->pc = 0x1e841cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8420: 0xc7b60008
    ctx->pc = 0x1e8420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e8424: 0xc7b50004
    ctx->pc = 0x1e8424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e8428: 0xc7b40000
    ctx->pc = 0x1e8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e842c: 0x3e00008
    ctx->pc = 0x1E842Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8430u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7DACu: goto label_1e7dac;
            case 0x1E7DB0u: goto label_1e7db0;
            case 0x1E7DF4u: goto label_1e7df4;
            case 0x1E7E04u: goto label_1e7e04;
            case 0x1E7E08u: goto label_1e7e08;
            case 0x1E7E28u: goto label_1e7e28;
            case 0x1E7E2Cu: goto label_1e7e2c;
            case 0x1E7E78u: goto label_1e7e78;
            case 0x1E7EB8u: goto label_1e7eb8;
            case 0x1E7EF8u: goto label_1e7ef8;
            case 0x1E7F1Cu: goto label_1e7f1c;
            case 0x1E7F20u: goto label_1e7f20;
            case 0x1E7F3Cu: goto label_1e7f3c;
            case 0x1E7F4Cu: goto label_1e7f4c;
            case 0x1E7F5Cu: goto label_1e7f5c;
            case 0x1E7FC8u: goto label_1e7fc8;
            case 0x1E7FE8u: goto label_1e7fe8;
            case 0x1E7FF8u: goto label_1e7ff8;
            case 0x1E8014u: goto label_1e8014;
            case 0x1E802Cu: goto label_1e802c;
            case 0x1E8044u: goto label_1e8044;
            case 0x1E8080u: goto label_1e8080;
            case 0x1E8098u: goto label_1e8098;
            case 0x1E80A0u: goto label_1e80a0;
            case 0x1E80A4u: goto label_1e80a4;
            case 0x1E80D0u: goto label_1e80d0;
            case 0x1E80ECu: goto label_1e80ec;
            case 0x1E815Cu: goto label_1e815c;
            case 0x1E8164u: goto label_1e8164;
            case 0x1E8168u: goto label_1e8168;
            case 0x1E8184u: goto label_1e8184;
            case 0x1E81B8u: goto label_1e81b8;
            case 0x1E81C8u: goto label_1e81c8;
            case 0x1E81ECu: goto label_1e81ec;
            case 0x1E81FCu: goto label_1e81fc;
            case 0x1E8230u: goto label_1e8230;
            case 0x1E8240u: goto label_1e8240;
            case 0x1E8264u: goto label_1e8264;
            case 0x1E826Cu: goto label_1e826c;
            case 0x1E8270u: goto label_1e8270;
            case 0x1E8280u: goto label_1e8280;
            case 0x1E82E4u: goto label_1e82e4;
            case 0x1E82F8u: goto label_1e82f8;
            case 0x1E832Cu: goto label_1e832c;
            case 0x1E8340u: goto label_1e8340;
            case 0x1E8364u: goto label_1e8364;
            case 0x1E837Cu: goto label_1e837c;
            case 0x1E83B0u: goto label_1e83b0;
            case 0x1E83C4u: goto label_1e83c4;
            case 0x1E83E8u: goto label_1e83e8;
            case 0x1E83F8u: goto label_1e83f8;
            case 0x1E83FCu: goto label_1e83fc;
            case 0x1E8400u: goto label_1e8400;
            case 0x1E8410u: goto label_1e8410;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E8434u;
}
