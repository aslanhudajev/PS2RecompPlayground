#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: disp_gun_sight_adjGC1__Fi
// Address: 0x1ec960 - 0x1ecb20
void disp_gun_sight_adjGC1__Fi_0x1ec960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("disp_gun_sight_adjGC1__Fi");


    ctx->pc = 0x1ec960u;

    // 0x1ec960: 0x42880
    ctx->pc = 0x1ec960u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec964: 0xa42021
    ctx->pc = 0x1ec964u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ec968: 0x41880
    ctx->pc = 0x1ec968u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec96c: 0x831821
    ctx->pc = 0x1ec96cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ec970: 0x27bdff40
    ctx->pc = 0x1ec970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ec974: 0x32080
    ctx->pc = 0x1ec974u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec978: 0x7fbf0010
    ctx->pc = 0x1ec978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ec97c: 0x3c030050
    ctx->pc = 0x1ec97cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ec980: 0x7fb00000
    ctx->pc = 0x1ec980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec984: 0x2463db70
    ctx->pc = 0x1ec984u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957936));
    // 0x1ec988: 0x648021
    ctx->pc = 0x1ec988u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ec98c: 0x86030004
    ctx->pc = 0x1ec98cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ec990: 0x1060005f
    ctx->pc = 0x1EC990u;
    {
        const bool branch_taken_0x1ec990 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec990) {
            ctx->pc = 0x1ECB10u;
            goto label_1ecb10;
        }
    }
    ctx->pc = 0x1EC998u;
    // 0x1ec998: 0x278283c8
    ctx->pc = 0x1ec998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294935496));
    // 0x1ec99c: 0x451021
    ctx->pc = 0x1ec99cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ec9a0: 0x8c420000
    ctx->pc = 0x1ec9a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec9a4: 0xafa20068
    ctx->pc = 0x1ec9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1ec9a8: 0x96020000
    ctx->pc = 0x1ec9a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec9ac: 0x4400004
    ctx->pc = 0x1EC9ACu;
    {
        const bool branch_taken_0x1ec9ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EC9B0u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1ec9ac) {
            ctx->pc = 0x1EC9C0u;
            goto label_1ec9c0;
        }
    }
    ctx->pc = 0x1EC9B4u;
    // 0x1ec9b4: 0x44820000
    ctx->pc = 0x1ec9b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ec9b8: 0x10000007
    ctx->pc = 0x1EC9B8u;
    {
        const bool branch_taken_0x1ec9b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC9BCu;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1ec9b8) {
            ctx->pc = 0x1EC9D8u;
            goto label_1ec9d8;
        }
    }
    ctx->pc = 0x1EC9C0u;
label_1ec9c0:
    // 0x1ec9c0: 0x30420001
    ctx->pc = 0x1ec9c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1ec9c4: 0x621825
    ctx->pc = 0x1ec9c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec9c8: 0x44830000
    ctx->pc = 0x1ec9c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1ec9cc: 0x0
    ctx->pc = 0x1ec9ccu;
    // NOP
    // 0x1ec9d0: 0x46800020
    ctx->pc = 0x1ec9d0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ec9d4: 0x46000000
    ctx->pc = 0x1ec9d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ec9d8:
    // 0x1ec9d8: 0xe7a0002c
    ctx->pc = 0x1ec9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1ec9dc: 0x96020002
    ctx->pc = 0x1ec9dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1ec9e0: 0x4400004
    ctx->pc = 0x1EC9E0u;
    {
        const bool branch_taken_0x1ec9e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EC9E4u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1ec9e0) {
            ctx->pc = 0x1EC9F4u;
            goto label_1ec9f4;
        }
    }
    ctx->pc = 0x1EC9E8u;
    // 0x1ec9e8: 0x44820000
    ctx->pc = 0x1ec9e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ec9ec: 0x10000007
    ctx->pc = 0x1EC9ECu;
    {
        const bool branch_taken_0x1ec9ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC9F0u;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1ec9ec) {
            ctx->pc = 0x1ECA0Cu;
            goto label_1eca0c;
        }
    }
    ctx->pc = 0x1EC9F4u;
label_1ec9f4:
    // 0x1ec9f4: 0x30420001
    ctx->pc = 0x1ec9f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1ec9f8: 0x621825
    ctx->pc = 0x1ec9f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec9fc: 0x44830000
    ctx->pc = 0x1ec9fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1eca00: 0x0
    ctx->pc = 0x1eca00u;
    // NOP
    // 0x1eca04: 0x46800020
    ctx->pc = 0x1eca04u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1eca08: 0x46000000
    ctx->pc = 0x1eca08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1eca0c:
    // 0x1eca0c: 0x3c023dcc
    ctx->pc = 0x1eca0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x1eca10: 0xe7a00030
    ctx->pc = 0x1eca10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1eca14: 0x3442cccd
    ctx->pc = 0x1eca14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1eca18: 0xafa20034
    ctx->pc = 0x1eca18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1eca1c: 0x3c023f80
    ctx->pc = 0x1eca1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1eca20: 0xafa20038
    ctx->pc = 0x1eca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1eca24: 0xafa2003c
    ctx->pc = 0x1eca24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1eca28: 0xafa00044
    ctx->pc = 0x1eca28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1eca2c: 0xafa00040
    ctx->pc = 0x1eca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1eca30: 0xafa2004c
    ctx->pc = 0x1eca30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1eca34: 0xafa20048
    ctx->pc = 0x1eca34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1eca38: 0xafa00050
    ctx->pc = 0x1eca38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1eca3c: 0xafa20054
    ctx->pc = 0x1eca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1eca40: 0x2402ffff
    ctx->pc = 0x1eca40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eca44: 0xafa20058
    ctx->pc = 0x1eca44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1eca48: 0x2402000a
    ctx->pc = 0x1eca48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eca4c: 0xafa2005c
    ctx->pc = 0x1eca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x1eca50: 0xc085bd8
    ctx->pc = 0x1ECA50u;
    SET_GPR_U32(ctx, 31, 0x1ECA58u);
    ctx->pc = 0x1ECA54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA58u; }
        else if (ctx->pc != 0x1ECA58u) { ctx->pc = 0x1ECA58u; }
    }
    if (ctx->pc != 0x1ECA58u) { return; }
    ctx->pc = 0x1ECA58u;
    // 0x1eca58: 0x240208c6
    ctx->pc = 0x1eca58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2246));
    // 0x1eca5c: 0xafa200b8
    ctx->pc = 0x1eca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1eca60: 0x96020000
    ctx->pc = 0x1eca60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eca64: 0x4400004
    ctx->pc = 0x1ECA64u;
    {
        const bool branch_taken_0x1eca64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ECA68u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1eca64) {
            ctx->pc = 0x1ECA78u;
            goto label_1eca78;
        }
    }
    ctx->pc = 0x1ECA6Cu;
    // 0x1eca6c: 0x44820000
    ctx->pc = 0x1eca6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1eca70: 0x10000007
    ctx->pc = 0x1ECA70u;
    {
        const bool branch_taken_0x1eca70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ECA74u;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1eca70) {
            ctx->pc = 0x1ECA90u;
            goto label_1eca90;
        }
    }
    ctx->pc = 0x1ECA78u;
label_1eca78:
    // 0x1eca78: 0x30420001
    ctx->pc = 0x1eca78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1eca7c: 0x621825
    ctx->pc = 0x1eca7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eca80: 0x44830000
    ctx->pc = 0x1eca80u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1eca84: 0x0
    ctx->pc = 0x1eca84u;
    // NOP
    // 0x1eca88: 0x46800020
    ctx->pc = 0x1eca88u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1eca8c: 0x46000000
    ctx->pc = 0x1eca8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1eca90:
    // 0x1eca90: 0xe7a0007c
    ctx->pc = 0x1eca90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1eca94: 0x96020002
    ctx->pc = 0x1eca94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1eca98: 0x4400004
    ctx->pc = 0x1ECA98u;
    {
        const bool branch_taken_0x1eca98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ECA9Cu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1eca98) {
            ctx->pc = 0x1ECAACu;
            goto label_1ecaac;
        }
    }
    ctx->pc = 0x1ECAA0u;
    // 0x1ecaa0: 0x44820000
    ctx->pc = 0x1ecaa0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ecaa4: 0x10000007
    ctx->pc = 0x1ECAA4u;
    {
        const bool branch_taken_0x1ecaa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ECAA8u;
        ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1ecaa4) {
            ctx->pc = 0x1ECAC4u;
            goto label_1ecac4;
        }
    }
    ctx->pc = 0x1ECAACu;
label_1ecaac:
    // 0x1ecaac: 0x30420001
    ctx->pc = 0x1ecaacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1ecab0: 0x621825
    ctx->pc = 0x1ecab0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ecab4: 0x44830000
    ctx->pc = 0x1ecab4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1ecab8: 0x0
    ctx->pc = 0x1ecab8u;
    // NOP
    // 0x1ecabc: 0x46800020
    ctx->pc = 0x1ecabcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ecac0: 0x46000000
    ctx->pc = 0x1ecac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ecac4:
    // 0x1ecac4: 0x3c023dcc
    ctx->pc = 0x1ecac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x1ecac8: 0xe7a00080
    ctx->pc = 0x1ecac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1ecacc: 0x3442cccd
    ctx->pc = 0x1ecaccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1ecad0: 0xafa20084
    ctx->pc = 0x1ecad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1ecad4: 0x3c023f80
    ctx->pc = 0x1ecad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1ecad8: 0xafa20088
    ctx->pc = 0x1ecad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1ecadc: 0xafa2008c
    ctx->pc = 0x1ecadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1ecae0: 0xafa00094
    ctx->pc = 0x1ecae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1ecae4: 0xafa00090
    ctx->pc = 0x1ecae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1ecae8: 0xafa2009c
    ctx->pc = 0x1ecae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x1ecaec: 0xafa20098
    ctx->pc = 0x1ecaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x1ecaf0: 0xafa000a0
    ctx->pc = 0x1ecaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1ecaf4: 0xafa200a4
    ctx->pc = 0x1ecaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1ecaf8: 0x2402ffff
    ctx->pc = 0x1ecaf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ecafc: 0xafa200a8
    ctx->pc = 0x1ecafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1ecb00: 0x2402000a
    ctx->pc = 0x1ecb00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ecb04: 0xafa200ac
    ctx->pc = 0x1ecb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1ecb08: 0xc085bd8
    ctx->pc = 0x1ECB08u;
    SET_GPR_U32(ctx, 31, 0x1ECB10u);
    ctx->pc = 0x1ECB0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECB10u; }
        else if (ctx->pc != 0x1ECB10u) { ctx->pc = 0x1ECB10u; }
    }
    if (ctx->pc != 0x1ECB10u) { return; }
    ctx->pc = 0x1ECB10u;
label_1ecb10:
    // 0x1ecb10: 0x7bbf0010
    ctx->pc = 0x1ecb10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecb14: 0x7bb00000
    ctx->pc = 0x1ecb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecb18: 0x3e00008
    ctx->pc = 0x1ECB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECB1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC9C0u: goto label_1ec9c0;
            case 0x1EC9D8u: goto label_1ec9d8;
            case 0x1EC9F4u: goto label_1ec9f4;
            case 0x1ECA0Cu: goto label_1eca0c;
            case 0x1ECA78u: goto label_1eca78;
            case 0x1ECA90u: goto label_1eca90;
            case 0x1ECAACu: goto label_1ecaac;
            case 0x1ECAC4u: goto label_1ecac4;
            case 0x1ECB10u: goto label_1ecb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ECB20u;
}
