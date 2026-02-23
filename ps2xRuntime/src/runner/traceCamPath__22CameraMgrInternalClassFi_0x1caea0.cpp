#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: traceCamPath__22CameraMgrInternalClassFi
// Address: 0x1caea0 - 0x1cb084
void traceCamPath__22CameraMgrInternalClassFi_0x1caea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("traceCamPath__22CameraMgrInternalClassFi");


    ctx->pc = 0x1caea0u;

    // 0x1caea0: 0x27bdff90
    ctx->pc = 0x1caea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1caea4: 0x7fbf0050
    ctx->pc = 0x1caea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1caea8: 0x7fb40040
    ctx->pc = 0x1caea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1caeac: 0x7fb30030
    ctx->pc = 0x1caeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1caeb0: 0x7fb20020
    ctx->pc = 0x1caeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1caeb4: 0x510c0
    ctx->pc = 0x1caeb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1caeb8: 0x7fb10010
    ctx->pc = 0x1caeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1caebc: 0x451021
    ctx->pc = 0x1caebcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1caec0: 0x28980
    ctx->pc = 0x1caec0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1caec4: 0x7fb00000
    ctx->pc = 0x1caec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1caec8: 0x2241021
    ctx->pc = 0x1caec8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1caecc: 0x8c470010
    ctx->pc = 0x1caeccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1caed0: 0x51840
    ctx->pc = 0x1caed0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1caed4: 0x651821
    ctx->pc = 0x1caed4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1caed8: 0x31880
    ctx->pc = 0x1caed8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1caedc: 0x651821
    ctx->pc = 0x1caedcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1caee0: 0x39100
    ctx->pc = 0x1caee0u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1caee4: 0x738c0
    ctx->pc = 0x1caee4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
    // 0x1caee8: 0xe43821
    ctx->pc = 0x1caee8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1caeec: 0x8cf00904
    ctx->pc = 0x1caeecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 7), 2308)));
    // 0x1caef0: 0x8f868c48
    ctx->pc = 0x1caef0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1caef4: 0x24030001
    ctx->pc = 0x1caef4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caef8: 0x7080a628
    ctx->pc = 0x1caef8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1caefc: 0x70a09e28
    ctx->pc = 0x1caefcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1caf00: 0x8e070014
    ctx->pc = 0x1caf00u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1caf04: 0x2463021
    ctx->pc = 0x1caf04u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1caf08: 0xa4c700d0
    ctx->pc = 0x1caf08u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 208), (uint16_t)GPR_U32(ctx, 7));
    // 0x1caf0c: 0xa0430047
    ctx->pc = 0x1caf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x1caf10: 0x8e060018
    ctx->pc = 0x1caf10u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1caf14: 0x10c30007
    ctx->pc = 0x1CAF14u;
    {
        const bool branch_taken_0x1caf14 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CAF18u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 71));
        if (branch_taken_0x1caf14) {
            ctx->pc = 0x1CAF34u;
            goto label_1caf34;
        }
    }
    ctx->pc = 0x1CAF1Cu;
    // 0x1caf1c: 0x24030002
    ctx->pc = 0x1caf1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caf20: 0x10c30003
    ctx->pc = 0x1CAF20u;
    {
        const bool branch_taken_0x1caf20 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x1caf20) {
            ctx->pc = 0x1CAF30u;
            goto label_1caf30;
        }
    }
    ctx->pc = 0x1CAF28u;
    // 0x1caf28: 0x10000018
    ctx->pc = 0x1CAF28u;
    {
        const bool branch_taken_0x1caf28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CAF2Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x1caf28) {
            ctx->pc = 0x1CAF8Cu;
            goto label_1caf8c;
        }
    }
    ctx->pc = 0x1CAF30u;
label_1caf30:
    // 0x1caf30: 0xa1000000
    ctx->pc = 0x1caf30u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
label_1caf34:
    // 0x1caf34: 0x86030014
    ctx->pc = 0x1caf34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1caf38: 0x2341021
    ctx->pc = 0x1caf38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1caf3c: 0xa4430158
    ctx->pc = 0x1caf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x1caf40: 0xc600000c
    ctx->pc = 0x1caf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caf44: 0x8f828c48
    ctx->pc = 0x1caf44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1caf48: 0x46800060
    ctx->pc = 0x1caf48u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1caf4c: 0x2421021
    ctx->pc = 0x1caf4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1caf50: 0xc44000c4
    ctx->pc = 0x1caf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caf54: 0xc053146
    ctx->pc = 0x1CAF54u;
    SET_GPR_U32(ctx, 31, 0x1CAF5Cu);
    ctx->pc = 0x1CAF58u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF5Cu; }
        else if (ctx->pc != 0x1CAF5Cu) { ctx->pc = 0x1CAF5Cu; }
    }
    if (ctx->pc != 0x1CAF5Cu) { return; }
    ctx->pc = 0x1CAF5Cu;
    // 0x1caf5c: 0x2343021
    ctx->pc = 0x1caf5cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1caf60: 0xacc20150
    ctx->pc = 0x1caf60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 336), GPR_U32(ctx, 2));
    // 0x1caf64: 0x8f828c48
    ctx->pc = 0x1caf64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1caf68: 0x8e030010
    ctx->pc = 0x1caf68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1caf6c: 0x72802628
    ctx->pc = 0x1caf6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1caf70: 0x72602e28
    ctx->pc = 0x1caf70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1caf74: 0x2421021
    ctx->pc = 0x1caf74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1caf78: 0xac4300c8
    ctx->pc = 0x1caf78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
    // 0x1caf7c: 0xc072cd8
    ctx->pc = 0x1CAF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAF84u);
    ctx->pc = 0x1CAF80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 3));
    ctx->pc = 0x1CB360u;
    {
        const uint32_t __entryPc = ctx->pc;
        finishJob__22CameraMgrInternalClassFi_0x1cb360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAF84u; }
        else if (ctx->pc != 0x1CAF84u) { ctx->pc = 0x1CAF84u; }
    }
    if (ctx->pc != 0x1CAF84u) { return; }
    ctx->pc = 0x1CAF84u;
    // 0x1caf84: 0x10000038
    ctx->pc = 0x1CAF84u;
    {
        const bool branch_taken_0x1caf84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CAF88u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x1caf84) {
            ctx->pc = 0x1CB068u;
            goto label_1cb068;
        }
    }
    ctx->pc = 0x1CAF8Cu;
label_1caf8c:
    // 0x1caf8c: 0x8e030010
    ctx->pc = 0x1caf8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1caf90: 0x14c3001f
    ctx->pc = 0x1CAF90u;
    {
        const bool branch_taken_0x1caf90 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        if (branch_taken_0x1caf90) {
            ctx->pc = 0x1CB010u;
            goto label_1cb010;
        }
    }
    ctx->pc = 0x1CAF98u;
    // 0x1caf98: 0x44860000
    ctx->pc = 0x1caf98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x1caf9c: 0x3c020050
    ctx->pc = 0x1caf9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1cafa0: 0x8f868c48
    ctx->pc = 0x1cafa0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cafa4: 0x46800020
    ctx->pc = 0x1cafa4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1cafa8: 0x131880
    ctx->pc = 0x1cafa8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1cafac: 0x2442fb00
    ctx->pc = 0x1cafacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x1cafb0: 0x434821
    ctx->pc = 0x1cafb0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cafb4: 0x70e02e28
    ctx->pc = 0x1cafb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cafb8: 0x2461021
    ctx->pc = 0x1cafb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cafbc: 0xe44000c0
    ctx->pc = 0x1cafbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x1cafc0: 0x8f828c48
    ctx->pc = 0x1cafc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cafc4: 0x27848c70
    ctx->pc = 0x1cafc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x1cafc8: 0x27a8006c
    ctx->pc = 0x1cafc8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 108));
    // 0x1cafcc: 0x521021
    ctx->pc = 0x1cafccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1cafd0: 0xc44c00c0
    ctx->pc = 0x1cafd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cafd4: 0x24460090
    ctx->pc = 0x1cafd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 144));
    // 0x1cafd8: 0xc0731b8
    ctx->pc = 0x1CAFD8u;
    SET_GPR_U32(ctx, 31, 0x1CAFE0u);
    ctx->pc = 0x1CAFDCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 168));
    ctx->pc = 0x1CC6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCameraPath__15CamPathMgrClassFifP4ANPOP4ANPOPiPf_0x1cc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFE0u; }
        else if (ctx->pc != 0x1CAFE0u) { ctx->pc = 0x1CAFE0u; }
    }
    if (ctx->pc != 0x1CAFE0u) { return; }
    ctx->pc = 0x1CAFE0u;
    // 0x1cafe0: 0x8f828c48
    ctx->pc = 0x1cafe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cafe4: 0x8fa7006c
    ctx->pc = 0x1cafe4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1cafe8: 0x72802628
    ctx->pc = 0x1cafe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1cafec: 0x521021
    ctx->pc = 0x1cafecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1caff0: 0x24450090
    ctx->pc = 0x1caff0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 144));
    // 0x1caff4: 0xc0727a0
    ctx->pc = 0x1CAFF4u;
    SET_GPR_U32(ctx, 31, 0x1CAFFCu);
    ctx->pc = 0x1CAFF8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 168));
    ctx->pc = 0x1C9E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLookAt__22CameraMgrInternalClassFP4ANPOP4ANPOi_0x1c9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAFFCu; }
        else if (ctx->pc != 0x1CAFFCu) { ctx->pc = 0x1CAFFCu; }
    }
    if (ctx->pc != 0x1CAFFCu) { return; }
    ctx->pc = 0x1CAFFCu;
    // 0x1caffc: 0x72802628
    ctx->pc = 0x1caffcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1cb000: 0xc072cd8
    ctx->pc = 0x1CB000u;
    SET_GPR_U32(ctx, 31, 0x1CB008u);
    ctx->pc = 0x1CB004u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CB360u;
    {
        const uint32_t __entryPc = ctx->pc;
        finishJob__22CameraMgrInternalClassFi_0x1cb360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB008u; }
        else if (ctx->pc != 0x1CB008u) { ctx->pc = 0x1CB008u; }
    }
    if (ctx->pc != 0x1CB008u) { return; }
    ctx->pc = 0x1CB008u;
    // 0x1cb008: 0x10000016
    ctx->pc = 0x1CB008u;
    {
        const bool branch_taken_0x1cb008 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cb008) {
            ctx->pc = 0x1CB064u;
            goto label_1cb064;
        }
    }
    ctx->pc = 0x1CB010u;
label_1cb010:
    // 0x1cb010: 0x44860000
    ctx->pc = 0x1cb010u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x1cb014: 0x3c030026
    ctx->pc = 0x1cb014u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1cb018: 0x8f868c48
    ctx->pc = 0x1cb018u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cb01c: 0x46800020
    ctx->pc = 0x1cb01cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1cb020: 0x24634f18
    ctx->pc = 0x1cb020u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20248));
    // 0x1cb024: 0x24590004
    ctx->pc = 0x1cb024u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cb028: 0x2463021
    ctx->pc = 0x1cb028u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb02c: 0xc4c100c4
    ctx->pc = 0x1cb02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb030: 0x46010001
    ctx->pc = 0x1cb030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cb034: 0xe4c000c0
    ctx->pc = 0x1cb034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 192), bits); }
    // 0x1cb038: 0x8f868c48
    ctx->pc = 0x1cb038u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cb03c: 0x8e070010
    ctx->pc = 0x1cb03cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb040: 0x2463021
    ctx->pc = 0x1cb040u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1cb044: 0xacc700c8
    ctx->pc = 0x1cb044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 200), GPR_U32(ctx, 7));
    // 0x1cb048: 0xc4620000
    ctx->pc = 0x1cb048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb04c: 0xc4610004
    ctx->pc = 0x1cb04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb050: 0xc4600008
    ctx->pc = 0x1cb050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb054: 0xe4420004
    ctx->pc = 0x1cb054u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cb058: 0xe4410008
    ctx->pc = 0x1cb058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cb05c: 0xc071b74
    ctx->pc = 0x1CB05Cu;
    SET_GPR_U32(ctx, 31, 0x1CB064u);
    ctx->pc = 0x1CB060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->pc = 0x1C6DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ptmf_scall_0x1c6dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB064u; }
        else if (ctx->pc != 0x1CB064u) { ctx->pc = 0x1CB064u; }
    }
    if (ctx->pc != 0x1CB064u) { return; }
    ctx->pc = 0x1CB064u;
label_1cb064:
    // 0x1cb064: 0x7bbf0050
    ctx->pc = 0x1cb064u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cb068:
    // 0x1cb068: 0x7bb40040
    ctx->pc = 0x1cb068u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb06c: 0x7bb30030
    ctx->pc = 0x1cb06cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb070: 0x7bb20020
    ctx->pc = 0x1cb070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb074: 0x7bb10010
    ctx->pc = 0x1cb074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb078: 0x7bb00000
    ctx->pc = 0x1cb078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb07c: 0x3e00008
    ctx->pc = 0x1CB07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB080u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAF30u: goto label_1caf30;
            case 0x1CAF34u: goto label_1caf34;
            case 0x1CAF8Cu: goto label_1caf8c;
            case 0x1CB010u: goto label_1cb010;
            case 0x1CB064u: goto label_1cb064;
            case 0x1CB068u: goto label_1cb068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB084u;
}
