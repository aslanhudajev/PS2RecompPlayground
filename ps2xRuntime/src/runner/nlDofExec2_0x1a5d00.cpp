#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofExec2
// Address: 0x1a5d00 - 0x1a64ec
void nlDofExec2_0x1a5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofExec2");


    ctx->pc = 0x1a5d00u;

    // 0x1a5d00: 0x27bdfab0
    ctx->pc = 0x1a5d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965936));
    // 0x1a5d04: 0x7fbf0090
    ctx->pc = 0x1a5d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1a5d08: 0x7fbe0080
    ctx->pc = 0x1a5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1a5d0c: 0x7fb70070
    ctx->pc = 0x1a5d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a5d10: 0x7fb60060
    ctx->pc = 0x1a5d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a5d14: 0x7fb50050
    ctx->pc = 0x1a5d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a5d18: 0x7fb40040
    ctx->pc = 0x1a5d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a5d1c: 0x7fb30030
    ctx->pc = 0x1a5d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a5d20: 0x7fb20020
    ctx->pc = 0x1a5d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5d24: 0x7fb10010
    ctx->pc = 0x1a5d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5d28: 0xc069558
    ctx->pc = 0x1A5D28u;
    SET_GPR_U32(ctx, 31, 0x1A5D30u);
    ctx->pc = 0x1A5D2Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D30u; }
        else if (ctx->pc != 0x1A5D30u) { ctx->pc = 0x1A5D30u; }
    }
    if (ctx->pc != 0x1A5D30u) { return; }
    ctx->pc = 0x1A5D30u;
    // 0x1a5d30: 0xafa200bc
    ctx->pc = 0x1a5d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1a5d34: 0x8fa200bc
    ctx->pc = 0x1a5d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1a5d38: 0x14400003
    ctx->pc = 0x1A5D38u;
    {
        const bool branch_taken_0x1a5d38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5d38) {
            ctx->pc = 0x1A5D48u;
            goto label_1a5d48;
        }
    }
    ctx->pc = 0x1A5D40u;
    // 0x1a5d40: 0xc0694bc
    ctx->pc = 0x1A5D40u;
    SET_GPR_U32(ctx, 31, 0x1A5D48u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D48u; }
        else if (ctx->pc != 0x1A5D48u) { ctx->pc = 0x1A5D48u; }
    }
    if (ctx->pc != 0x1A5D48u) { return; }
    ctx->pc = 0x1A5D48u;
label_1a5d48:
    // 0x1a5d48: 0xc0696e0
    ctx->pc = 0x1A5D48u;
    SET_GPR_U32(ctx, 31, 0x1A5D50u);
    ctx->pc = 0x1A5D4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    ctx->pc = 0x1A5B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetTexture_0x1a5b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5D50u; }
        else if (ctx->pc != 0x1A5D50u) { ctx->pc = 0x1A5D50u; }
    }
    if (ctx->pc != 0x1A5D50u) { return; }
    ctx->pc = 0x1A5D50u;
    // 0x1a5d50: 0x27a20150
    ctx->pc = 0x1a5d50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1a5d54: 0xafa20390
    ctx->pc = 0x1a5d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
    // 0x1a5d58: 0x8f8289d0
    ctx->pc = 0x1a5d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x1a5d5c: 0x10400003
    ctx->pc = 0x1A5D5Cu;
    {
        const bool branch_taken_0x1a5d5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5D60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1a5d5c) {
            ctx->pc = 0x1A5D6Cu;
            goto label_1a5d6c;
        }
    }
    ctx->pc = 0x1A5D64u;
    // 0x1a5d64: 0x10000002
    ctx->pc = 0x1A5D64u;
    {
        const bool branch_taken_0x1a5d64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5D68u;
        WRITE16(ADD32(GPR_U32(ctx, 29), 916), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1a5d64) {
            ctx->pc = 0x1A5D70u;
            goto label_1a5d70;
        }
    }
    ctx->pc = 0x1A5D6Cu;
label_1a5d6c:
    // 0x1a5d6c: 0xa7a00394
    ctx->pc = 0x1a5d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 916), (uint16_t)GPR_U32(ctx, 0));
label_1a5d70:
    // 0x1a5d70: 0x878789e0
    ctx->pc = 0x1a5d70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x1a5d74: 0x878389d8
    ctx->pc = 0x1a5d74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x1a5d78: 0x878689e8
    ctx->pc = 0x1a5d78u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x1a5d7c: 0x24050002
    ctx->pc = 0x1a5d7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5d80: 0x24040030
    ctx->pc = 0x1a5d80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a5d84: 0x2402ffff
    ctx->pc = 0x1a5d84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5d88: 0x73980
    ctx->pc = 0x1a5d88u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 6));
    // 0x1a5d8c: 0xa7a70396
    ctx->pc = 0x1a5d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 918), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a5d90: 0xa7a60398
    ctx->pc = 0x1a5d90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 920), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a5d94: 0xa7a5039a
    ctx->pc = 0x1a5d94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 922), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a5d98: 0xa7a4039c
    ctx->pc = 0x1a5d98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 924), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5d9c: 0x31a00
    ctx->pc = 0x1a5d9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a5da0: 0xafa303a0
    ctx->pc = 0x1a5da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 3));
    // 0x1a5da4: 0xafa203a4
    ctx->pc = 0x1a5da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 932), GPR_U32(ctx, 2));
    // 0x1a5da8: 0x27a40390
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 912));
    // 0x1a5dac: 0xc06c44c
    ctx->pc = 0x1A5DACu;
    SET_GPR_U32(ctx, 31, 0x1A5DB4u);
    ctx->pc = 0x1A5DB0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 936), GPR_U32(ctx, 0));
    ctx->pc = 0x1B1130u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRendtxCreateEnv_0x1b1130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DB4u; }
        else if (ctx->pc != 0x1A5DB4u) { ctx->pc = 0x1A5DB4u; }
    }
    if (ctx->pc != 0x1A5DB4u) { return; }
    ctx->pc = 0x1A5DB4u;
    // 0x1a5db4: 0x3c0200ff
    ctx->pc = 0x1a5db4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
    // 0x1a5db8: 0x3442ffff
    ctx->pc = 0x1a5db8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1a5dbc: 0x2103c
    ctx->pc = 0x1a5dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5dc0: 0x2103e
    ctx->pc = 0x1a5dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a5dc4: 0x8fa70390
    ctx->pc = 0x1a5dc4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1a5dc8: 0x2283c
    ctx->pc = 0x1a5dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5dcc: 0x2402ffff
    ctx->pc = 0x1a5dccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5dd0: 0x2203c
    ctx->pc = 0x1a5dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5dd4: 0x3402ffff
    ctx->pc = 0x1a5dd4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a5dd8: 0x21438
    ctx->pc = 0x1a5dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a5ddc: 0x3443ffff
    ctx->pc = 0x1a5ddcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1a5de0: 0x641025
    ctx->pc = 0x1a5de0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5de4: 0x70432389
    ctx->pc = 0x1a5de4u;
    SET_GPR_VEC(ctx, 4, _mm_unpacklo_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1a5de8: 0x3c024180
    ctx->pc = 0x1a5de8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16768 << 16));
    // 0x1a5dec: 0xdce60020
    ctx->pc = 0x1a5decu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1a5df0: 0x44822000
    ctx->pc = 0x1a5df0u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x1a5df4: 0x24030001
    ctx->pc = 0x1a5df4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5df8: 0xc41024
    ctx->pc = 0x1a5df8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a5dfc: 0x451025
    ctx->pc = 0x1a5dfcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5e00: 0xfce20020
    ctx->pc = 0x1a5e00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
    // 0x1a5e04: 0xc7828a98
    ctx->pc = 0x1a5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a5e08: 0xc7818344
    ctx->pc = 0x1a5e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5e0c: 0xc7838a94
    ctx->pc = 0x1a5e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a5e10: 0x8f858a10
    ctx->pc = 0x1a5e10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1a5e14: 0xc7808348
    ctx->pc = 0x1a5e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5e18: 0x46022082
    ctx->pc = 0x1a5e18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1a5e1c: 0x8ca40000
    ctx->pc = 0x1a5e1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a5e20: 0x460010a4
    ctx->pc = 0x1a5e20u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1a5e24: 0x44021000
    ctx->pc = 0x1a5e24u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x1a5e28: 0x46012042
    ctx->pc = 0x1a5e28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a5e2c: 0xafa200e0
    ctx->pc = 0x1a5e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1a5e30: 0x46002082
    ctx->pc = 0x1a5e30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1a5e34: 0x46000824
    ctx->pc = 0x1a5e34u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1a5e38: 0x460320c2
    ctx->pc = 0x1a5e38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1a5e3c: 0x44170000
    ctx->pc = 0x1a5e3cu;
    SET_GPR_U32(ctx, 23, *(uint32_t*)&ctx->f[0]);
    // 0x1a5e40: 0x460018e4
    ctx->pc = 0x1a5e40u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[3]);
    // 0x1a5e44: 0x46001024
    ctx->pc = 0x1a5e44u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1a5e48: 0x44020000
    ctx->pc = 0x1a5e48u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a5e4c: 0x441e1800
    ctx->pc = 0x1a5e4cu;
    SET_GPR_U32(ctx, 30, *(uint32_t*)&ctx->f[3]);
    // 0x1a5e50: 0x14830007
    ctx->pc = 0x1A5E50u;
    {
        const bool branch_taken_0x1a5e50 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A5E54u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        if (branch_taken_0x1a5e50) {
            ctx->pc = 0x1A5E70u;
            goto label_1a5e70;
        }
    }
    ctx->pc = 0x1A5E58u;
    // 0x1a5e58: 0x3c020030
    ctx->pc = 0x1a5e58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a5e5c: 0x24423700
    ctx->pc = 0x1a5e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14080));
    // 0x1a5e60: 0x10a20006
    ctx->pc = 0x1A5E60u;
    {
        const bool branch_taken_0x1a5e60 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A5E64u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
        if (branch_taken_0x1a5e60) {
            ctx->pc = 0x1A5E7Cu;
            goto label_1a5e7c;
        }
    }
    ctx->pc = 0x1A5E68u;
label_1a5e68:
    // 0x1a5e68: 0x1000ffff
    ctx->pc = 0x1A5E68u;
    {
        const bool branch_taken_0x1a5e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5e68) {
            ctx->pc = 0x1A5E68u;
            goto label_1a5e68;
        }
    }
    ctx->pc = 0x1A5E70u;
label_1a5e70:
    // 0x1a5e70: 0x1000ffff
    ctx->pc = 0x1A5E70u;
    {
        const bool branch_taken_0x1a5e70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5e70) {
            ctx->pc = 0x1A5E70u;
            goto label_1a5e70;
        }
    }
    ctx->pc = 0x1A5E78u;
    // 0x1a5e78: 0x27a40150
    ctx->pc = 0x1a5e78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
label_1a5e7c:
    // 0x1a5e7c: 0x70002e28
    ctx->pc = 0x1a5e7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a5e80: 0xc06955c
    ctx->pc = 0x1A5E80u;
    SET_GPR_U32(ctx, 31, 0x1A5E88u);
    ctx->pc = 0x1A5E84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A5570u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_draw_env_0x1a5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E88u; }
        else if (ctx->pc != 0x1A5E88u) { ctx->pc = 0x1A5E88u; }
    }
    if (ctx->pc != 0x1A5E88u) { return; }
    ctx->pc = 0x1A5E88u;
    // 0x1a5e88: 0x8fa200e0
    ctx->pc = 0x1a5e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a5e8c: 0xafbe03b0
    ctx->pc = 0x1a5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 30));
    // 0x1a5e90: 0x2403ffff
    ctx->pc = 0x1a5e90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5e94: 0x27a403b0
    ctx->pc = 0x1a5e94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 944));
    // 0x1a5e98: 0xafa203b4
    ctx->pc = 0x1a5e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 948), GPR_U32(ctx, 2));
    // 0x1a5e9c: 0x27a203b8
    ctx->pc = 0x1a5e9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 952));
    // 0x1a5ea0: 0xac430000
    ctx->pc = 0x1a5ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a5ea4: 0x8fa20130
    ctx->pc = 0x1a5ea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a5ea8: 0xafb703bc
    ctx->pc = 0x1a5ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 23));
    // 0x1a5eac: 0xafa203c0
    ctx->pc = 0x1a5eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 2));
    // 0x1a5eb0: 0x24020400
    ctx->pc = 0x1a5eb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1a5eb4: 0xafa203c4
    ctx->pc = 0x1a5eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 964), GPR_U32(ctx, 2));
    // 0x1a5eb8: 0x24020200
    ctx->pc = 0x1a5eb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a5ebc: 0xafa203c8
    ctx->pc = 0x1a5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 968), GPR_U32(ctx, 2));
    // 0x1a5ec0: 0x27a203cc
    ctx->pc = 0x1a5ec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 972));
    // 0x1a5ec4: 0xc069568
    ctx->pc = 0x1A5EC4u;
    SET_GPR_U32(ctx, 31, 0x1A5ECCu);
    ctx->pc = 0x1A5EC8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1A55A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_alpha_frame_buffer_0x1a55a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5ECCu; }
        else if (ctx->pc != 0x1A5ECCu) { ctx->pc = 0x1A5ECCu; }
    }
    if (ctx->pc != 0x1A5ECCu) { return; }
    ctx->pc = 0x1A5ECCu;
    // 0x1a5ecc: 0x8f858a0c
    ctx->pc = 0x1a5eccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1a5ed0: 0x70002628
    ctx->pc = 0x1a5ed0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a5ed4: 0xc06955c
    ctx->pc = 0x1A5ED4u;
    SET_GPR_U32(ctx, 31, 0x1A5EDCu);
    ctx->pc = 0x1A5ED8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A5570u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_draw_env_0x1a5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EDCu; }
        else if (ctx->pc != 0x1A5EDCu) { ctx->pc = 0x1A5EDCu; }
    }
    if (ctx->pc != 0x1A5EDCu) { return; }
    ctx->pc = 0x1A5EDCu;
    // 0x1a5edc: 0xc069528
    ctx->pc = 0x1A5EDCu;
    SET_GPR_U32(ctx, 31, 0x1A5EE4u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5EE4u; }
        else if (ctx->pc != 0x1A5EE4u) { ctx->pc = 0x1A5EE4u; }
    }
    if (ctx->pc != 0x1A5EE4u) { return; }
    ctx->pc = 0x1A5EE4u;
    // 0x1a5ee4: 0x70409628
    ctx->pc = 0x1a5ee4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a5ee8: 0x3c021000
    ctx->pc = 0x1a5ee8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1a5eec: 0x3443d000
    ctx->pc = 0x1a5eecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 53248));
label_1a5ef0:
    // 0x1a5ef0: 0x8c620000
    ctx->pc = 0x1a5ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5ef4: 0x30420100
    ctx->pc = 0x1a5ef4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a5ef8: 0x0
    ctx->pc = 0x1a5ef8u;
    // NOP
    // 0x1a5efc: 0x0
    ctx->pc = 0x1a5efcu;
    // NOP
    // 0x1a5f00: 0x0
    ctx->pc = 0x1a5f00u;
    // NOP
    // 0x1a5f04: 0x1440fffa
    ctx->pc = 0x1A5F04u;
    {
        const bool branch_taken_0x1a5f04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5f04) {
            ctx->pc = 0x1A5EF0u;
            goto label_1a5ef0;
        }
    }
    ctx->pc = 0x1A5F0Cu;
    // 0x1a5f0c: 0x3c020026
    ctx->pc = 0x1a5f0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a5f10: 0x2445e0a0
    ctx->pc = 0x1a5f10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x1a5f14: 0x72402628
    ctx->pc = 0x1a5f14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a5f18: 0xc06ac36
    ctx->pc = 0x1A5F18u;
    SET_GPR_U32(ctx, 31, 0x1A5F20u);
    ctx->pc = 0x1A5F1Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F20u; }
        else if (ctx->pc != 0x1A5F20u) { ctx->pc = 0x1A5F20u; }
    }
    if (ctx->pc != 0x1A5F20u) { return; }
    ctx->pc = 0x1A5F20u;
    // 0x1a5f20: 0x878589e0
    ctx->pc = 0x1a5f20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x1a5f24: 0x878689d8
    ctx->pc = 0x1a5f24u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x1a5f28: 0x24020006
    ctx->pc = 0x1a5f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a5f2c: 0x2183c
    ctx->pc = 0x1a5f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5f30: 0x3c026800
    ctx->pc = 0x1a5f30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26624 << 16));
    // 0x1a5f34: 0x431025
    ctx->pc = 0x1a5f34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5f38: 0x51bb8
    ctx->pc = 0x1a5f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 14);
    // 0x1a5f3c: 0x878489d4
    ctx->pc = 0x1a5f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937044)));
    // 0x1a5f40: 0xc32825
    ctx->pc = 0x1a5f40u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a5f44: 0x41d38
    ctx->pc = 0x1a5f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 20);
    // 0x1a5f48: 0x651825
    ctx->pc = 0x1a5f48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a5f4c: 0x621025
    ctx->pc = 0x1a5f4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5f50: 0xfe420060
    ctx->pc = 0x1a5f50u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x1a5f54: 0x878389ec
    ctx->pc = 0x1a5f54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x1a5f58: 0x24020064
    ctx->pc = 0x1a5f58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a5f5c: 0x31900
    ctx->pc = 0x1a5f5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a5f60: 0x24630008
    ctx->pc = 0x1a5f60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a5f64: 0xae4300a0
    ctx->pc = 0x1a5f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
    // 0x1a5f68: 0x878389e8
    ctx->pc = 0x1a5f68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x1a5f6c: 0x31900
    ctx->pc = 0x1a5f6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a5f70: 0x24630008
    ctx->pc = 0x1a5f70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a5f74: 0xae4300a4
    ctx->pc = 0x1a5f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 3));
    // 0x1a5f78: 0xae420020
    ctx->pc = 0x1a5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1a5f7c: 0x8f8289fc
    ctx->pc = 0x1a5f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
    // 0x1a5f80: 0x2456ffff
    ctx->pc = 0x1a5f80u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a5f84: 0x6c00144
    ctx->pc = 0x1A5F84u;
    {
        const bool branch_taken_0x1a5f84 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x1A5F88u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1a5f84) {
            ctx->pc = 0x1A6498u;
            goto label_1a6498;
        }
    }
    ctx->pc = 0x1A5F8Cu;
    // 0x1a5f8c: 0x161080
    ctx->pc = 0x1a5f8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 2));
    // 0x1a5f90: 0xafa20120
    ctx->pc = 0x1a5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_1a5f94:
    // 0x1a5f94: 0xc7828a14
    ctx->pc = 0x1a5f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a5f98: 0xc7838a08
    ctx->pc = 0x1a5f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a5f9c: 0x24020001
    ctx->pc = 0x1a5f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5fa0: 0xafa200d0
    ctx->pc = 0x1a5fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1a5fa4: 0x8f8489f4
    ctx->pc = 0x1a5fa4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x1a5fa8: 0x8fa20120
    ctx->pc = 0x1a5fa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a5fac: 0xc7808a18
    ctx->pc = 0x1a5facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5fb0: 0x46031043
    ctx->pc = 0x1a5fb0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
    // 0x1a5fb4: 0x8f8389f8
    ctx->pc = 0x1a5fb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x1a5fb8: 0xc7868a04
    ctx->pc = 0x1a5fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a5fbc: 0x821021
    ctx->pc = 0x1a5fbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5fc0: 0xc4440000
    ctx->pc = 0x1a5fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a5fc4: 0x8fa20120
    ctx->pc = 0x1a5fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a5fc8: 0x621021
    ctx->pc = 0x1a5fc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5fcc: 0xc4450000
    ctx->pc = 0x1a5fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a5fd0: 0x46032036
    ctx->pc = 0x1a5fd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5fd4: 0x460000c7
    ctx->pc = 0x1a5fd4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x1a5fd8: 0x46011800
    ctx->pc = 0x1a5fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1a5fdc: 0x46000024
    ctx->pc = 0x1a5fdcu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a5fe0: 0x44020000
    ctx->pc = 0x1a5fe0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a5fe4: 0x46041003
    ctx->pc = 0x1a5fe4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[4];
    // 0x1a5fe8: 0x2a103
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1a5fec: 0x46001800
    ctx->pc = 0x1a5fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1a5ff0: 0x46000024
    ctx->pc = 0x1a5ff0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a5ff4: 0x44020000
    ctx->pc = 0x1a5ff4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a5ff8: 0x46051003
    ctx->pc = 0x1a5ff8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[5];
    // 0x1a5ffc: 0x21103
    ctx->pc = 0x1a5ffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1a6000: 0xafa20110
    ctx->pc = 0x1a6000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x1a6004: 0x46001800
    ctx->pc = 0x1a6004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1a6008: 0x46000024
    ctx->pc = 0x1a6008u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a600c: 0x44020000
    ctx->pc = 0x1a600cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a6010: 0x45000002
    ctx->pc = 0x1A6010u;
    {
        const bool branch_taken_0x1a6010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6014u;
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x1a6010) {
            ctx->pc = 0x1A601Cu;
            goto label_1a601c;
        }
    }
    ctx->pc = 0x1A6018u;
    // 0x1a6018: 0xafa000d0
    ctx->pc = 0x1a6018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1a601c:
    // 0x1a601c: 0x44800000
    ctx->pc = 0x1a601cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a6020: 0x0
    ctx->pc = 0x1a6020u;
    // NOP
    // 0x1a6024: 0x46002836
    ctx->pc = 0x1a6024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6028: 0x0
    ctx->pc = 0x1a6028u;
    // NOP
    // 0x1a602c: 0x45000002
    ctx->pc = 0x1A602Cu;
    {
        const bool branch_taken_0x1a602c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6030u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a602c) {
            ctx->pc = 0x1A6038u;
            goto label_1a6038;
        }
    }
    ctx->pc = 0x1A6034u;
    // 0x1a6034: 0x70001628
    ctx->pc = 0x1a6034u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a6038:
    // 0x1a6038: 0x10400006
    ctx->pc = 0x1A6038u;
    {
        const bool branch_taken_0x1a6038 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a6038) {
            ctx->pc = 0x1A6054u;
            goto label_1a6054;
        }
    }
    ctx->pc = 0x1A6040u;
    // 0x1a6040: 0x46062834
    ctx->pc = 0x1a6040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6044: 0x0
    ctx->pc = 0x1a6044u;
    // NOP
    // 0x1a6048: 0x45010002
    ctx->pc = 0x1A6048u;
    {
        const bool branch_taken_0x1a6048 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A604Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a6048) {
            ctx->pc = 0x1A6054u;
            goto label_1a6054;
        }
    }
    ctx->pc = 0x1A6050u;
    // 0x1a6050: 0x70001628
    ctx->pc = 0x1a6050u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a6054:
    // 0x1a6054: 0x10400086
    ctx->pc = 0x1A6054u;
    {
        const bool branch_taken_0x1a6054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a6054) {
            ctx->pc = 0x1A6270u;
            goto label_1a6270;
        }
    }
    ctx->pc = 0x1A605Cu;
    // 0x1a605c: 0xafa000c0
    ctx->pc = 0x1a605cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1a6060: 0xafa000a0
    ctx->pc = 0x1a6060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1a6064: 0xafa000f0
    ctx->pc = 0x1a6064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1a6068:
    // 0x1a6068: 0x8fa200a0
    ctx->pc = 0x1a6068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a606c: 0xc78089c8
    ctx->pc = 0x1a606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6070: 0x8fb500f0
    ctx->pc = 0x1a6070u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a6074: 0x70008628
    ctx->pc = 0x1a6074u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6078: 0x2442fffc
    ctx->pc = 0x1a6078u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1a607c: 0x44820800
    ctx->pc = 0x1a607cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a6080: 0x0
    ctx->pc = 0x1a6080u;
    // NOP
    // 0x1a6084: 0x46800860
    ctx->pc = 0x1a6084u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1a6088: 0x8fa200e0
    ctx->pc = 0x1a6088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a608c: 0x46000802
    ctx->pc = 0x1a608cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6090: 0x46000024
    ctx->pc = 0x1a6090u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a6094: 0x44030000
    ctx->pc = 0x1a6094u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1a6098: 0x0
    ctx->pc = 0x1a6098u;
    // NOP
    // 0x1a609c: 0x431021
    ctx->pc = 0x1a609cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a60a0: 0xae420094
    ctx->pc = 0x1a60a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    // 0x1a60a4: 0x8e430094
    ctx->pc = 0x1a60a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1a60a8: 0x8fa20130
    ctx->pc = 0x1a60a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a60ac: 0x621021
    ctx->pc = 0x1a60acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a60b0: 0xae4200b4
    ctx->pc = 0x1a60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    // 0x1a60b4: 0x0
    ctx->pc = 0x1a60b4u;
    // NOP
label_1a60b8:
    // 0x1a60b8: 0x8f828a00
    ctx->pc = 0x1a60b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
    // 0x1a60bc: 0x151880
    ctx->pc = 0x1a60bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
    // 0x1a60c0: 0x431021
    ctx->pc = 0x1a60c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a60c4: 0x8c420000
    ctx->pc = 0x1a60c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a60c8: 0x56c2005c
    ctx->pc = 0x1A60C8u;
    {
        const bool branch_taken_0x1a60c8 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a60c8) {
            ctx->pc = 0x1A60CCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1A623Cu;
            goto label_1a623c;
        }
    }
    ctx->pc = 0x1A60D0u;
    // 0x1a60d0: 0x8fa200c0
    ctx->pc = 0x1a60d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a60d4: 0x14400033
    ctx->pc = 0x1A60D4u;
    {
        const bool branch_taken_0x1a60d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A60D8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
        if (branch_taken_0x1a60d4) {
            ctx->pc = 0x1A61A4u;
            goto label_1a61a4;
        }
    }
    ctx->pc = 0x1A60DCu;
    // 0x1a60dc: 0x27a403d0
    ctx->pc = 0x1a60dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 976));
    // 0x1a60e0: 0x72402e28
    ctx->pc = 0x1a60e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a60e4: 0xc06ac36
    ctx->pc = 0x1A60E4u;
    SET_GPR_U32(ctx, 31, 0x1A60ECu);
    ctx->pc = 0x1A60E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60ECu; }
        else if (ctx->pc != 0x1A60ECu) { ctx->pc = 0x1A60ECu; }
    }
    if (ctx->pc != 0x1A60ECu) { return; }
    ctx->pc = 0x1A60ECu;
    // 0x1a60ec: 0x0
    ctx->pc = 0x1a60ecu;
    // NOP
label_1a60f0:
    // 0x1a60f0: 0x3c011001
    ctx->pc = 0x1a60f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a60f4: 0x8c22d000
    ctx->pc = 0x1a60f4u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a60f8: 0x30420100
    ctx->pc = 0x1a60f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a60fc: 0x0
    ctx->pc = 0x1a60fcu;
    // NOP
    // 0x1a6100: 0x0
    ctx->pc = 0x1a6100u;
    // NOP
    // 0x1a6104: 0x1440fffa
    ctx->pc = 0x1A6104u;
    {
        const bool branch_taken_0x1a6104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a6104) {
            ctx->pc = 0x1A60F0u;
            goto label_1a60f0;
        }
    }
    ctx->pc = 0x1A610Cu;
    // 0x1a610c: 0x27a40150
    ctx->pc = 0x1a610cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1a6110: 0x70002e28
    ctx->pc = 0x1a6110u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6114: 0xc06955c
    ctx->pc = 0x1A6114u;
    SET_GPR_U32(ctx, 31, 0x1A611Cu);
    ctx->pc = 0x1A6118u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A5570u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_draw_env_0x1a5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A611Cu; }
        else if (ctx->pc != 0x1A611Cu) { ctx->pc = 0x1A611Cu; }
    }
    if (ctx->pc != 0x1A611Cu) { return; }
    ctx->pc = 0x1A611Cu;
    // 0x1a611c: 0x2403ffff
    ctx->pc = 0x1a611cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6120: 0x27a203b8
    ctx->pc = 0x1a6120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 952));
    // 0x1a6124: 0xac430000
    ctx->pc = 0x1a6124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6128: 0x27a203cc
    ctx->pc = 0x1a6128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 972));
    // 0x1a612c: 0xac400000
    ctx->pc = 0x1a612cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a6130: 0xc069568
    ctx->pc = 0x1A6130u;
    SET_GPR_U32(ctx, 31, 0x1A6138u);
    ctx->pc = 0x1A6134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 944));
    ctx->pc = 0x1A55A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_alpha_frame_buffer_0x1a55a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6138u; }
        else if (ctx->pc != 0x1A6138u) { ctx->pc = 0x1A6138u; }
    }
    if (ctx->pc != 0x1A6138u) { return; }
    ctx->pc = 0x1A6138u;
    // 0x1a6138: 0x27a203b8
    ctx->pc = 0x1a6138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 952));
    // 0x1a613c: 0xac530000
    ctx->pc = 0x1a613cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1a6140: 0x240300ff
    ctx->pc = 0x1a6140u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6144: 0x27a203cc
    ctx->pc = 0x1a6144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 972));
    // 0x1a6148: 0xac430000
    ctx->pc = 0x1a6148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a614c: 0xc069568
    ctx->pc = 0x1A614Cu;
    SET_GPR_U32(ctx, 31, 0x1A6154u);
    ctx->pc = 0x1A6150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 944));
    ctx->pc = 0x1A55A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_alpha_frame_buffer_0x1a55a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6154u; }
        else if (ctx->pc != 0x1A6154u) { ctx->pc = 0x1A6154u; }
    }
    if (ctx->pc != 0x1A6154u) { return; }
    ctx->pc = 0x1A6154u;
    // 0x1a6154: 0x8f858a0c
    ctx->pc = 0x1a6154u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1a6158: 0x70002628
    ctx->pc = 0x1a6158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a615c: 0xc06955c
    ctx->pc = 0x1A615Cu;
    SET_GPR_U32(ctx, 31, 0x1A6164u);
    ctx->pc = 0x1A6160u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A5570u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_draw_env_0x1a5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6164u; }
        else if (ctx->pc != 0x1A6164u) { ctx->pc = 0x1A6164u; }
    }
    if (ctx->pc != 0x1A6164u) { return; }
    ctx->pc = 0x1A6164u;
    // 0x1a6164: 0x24020001
    ctx->pc = 0x1a6164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6168: 0xafa200c0
    ctx->pc = 0x1a6168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1a616c: 0x0
    ctx->pc = 0x1a616cu;
    // NOP
label_1a6170:
    // 0x1a6170: 0x3c011001
    ctx->pc = 0x1a6170u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a6174: 0x8c22d000
    ctx->pc = 0x1a6174u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a6178: 0x30420100
    ctx->pc = 0x1a6178u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a617c: 0x0
    ctx->pc = 0x1a617cu;
    // NOP
    // 0x1a6180: 0x0
    ctx->pc = 0x1a6180u;
    // NOP
    // 0x1a6184: 0x1440fffa
    ctx->pc = 0x1A6184u;
    {
        const bool branch_taken_0x1a6184 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a6184) {
            ctx->pc = 0x1A6170u;
            goto label_1a6170;
        }
    }
    ctx->pc = 0x1A618Cu;
    // 0x1a618c: 0x27a503d0
    ctx->pc = 0x1a618cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 976));
    // 0x1a6190: 0x72402628
    ctx->pc = 0x1a6190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a6194: 0xc06ac36
    ctx->pc = 0x1A6194u;
    SET_GPR_U32(ctx, 31, 0x1A619Cu);
    ctx->pc = 0x1A6198u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A619Cu; }
        else if (ctx->pc != 0x1A619Cu) { ctx->pc = 0x1A619Cu; }
    }
    if (ctx->pc != 0x1A619Cu) { return; }
    ctx->pc = 0x1A619Cu;
    // 0x1a619c: 0x0
    ctx->pc = 0x1a619cu;
    // NOP
label_1a61a0:
    // 0x1a61a0: 0x3c011001
    ctx->pc = 0x1a61a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a61a4:
    // 0x1a61a4: 0x8c22d000
    ctx->pc = 0x1a61a4u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a61a8: 0x30420100
    ctx->pc = 0x1a61a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a61ac: 0x0
    ctx->pc = 0x1a61acu;
    // NOP
    // 0x1a61b0: 0x0
    ctx->pc = 0x1a61b0u;
    // NOP
    // 0x1a61b4: 0x1440fffa
    ctx->pc = 0x1A61B4u;
    {
        const bool branch_taken_0x1a61b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a61b4) {
            ctx->pc = 0x1A61A0u;
            goto label_1a61a0;
        }
    }
    ctx->pc = 0x1A61BCu;
    // 0x1a61bc: 0x24020080
    ctx->pc = 0x1a61bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a61c0: 0x16200002
    ctx->pc = 0x1A61C0u;
    {
        const bool branch_taken_0x1a61c0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A61C4u;
        { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1a61c0) {
            ctx->pc = 0x1A61CCu;
            goto label_1a61cc;
        }
    }
    ctx->pc = 0x1A61C8u;
    // 0x1a61c8: 0x1cd
    ctx->pc = 0x1a61c8u;
    runtime->handleBreak(rdram, ctx);
label_1a61cc:
    // 0x1a61cc: 0x2602fffc
    ctx->pc = 0x1a61ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1a61d0: 0x44820000
    ctx->pc = 0x1a61d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a61d4: 0x1812
    ctx->pc = 0x1a61d4u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1a61d8: 0x46800060
    ctx->pc = 0x1a61d8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a61dc: 0x72402628
    ctx->pc = 0x1a61dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a61e0: 0xae430024
    ctx->pc = 0x1a61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x1a61e4: 0xc78089cc
    ctx->pc = 0x1a61e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a61e8: 0x46000802
    ctx->pc = 0x1a61e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a61ec: 0x46000024
    ctx->pc = 0x1a61ecu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a61f0: 0x44020000
    ctx->pc = 0x1a61f0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a61f4: 0x0
    ctx->pc = 0x1a61f4u;
    // NOP
    // 0x1a61f8: 0x3c21021
    ctx->pc = 0x1a61f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1a61fc: 0xae420090
    ctx->pc = 0x1a61fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x1a6200: 0x8e420090
    ctx->pc = 0x1a6200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1a6204: 0x571021
    ctx->pc = 0x1a6204u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1a6208: 0xae4200b0
    ctx->pc = 0x1a6208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
    // 0x1a620c: 0xae530098
    ctx->pc = 0x1a620cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 19));
    // 0x1a6210: 0xc0696f0
    ctx->pc = 0x1A6210u;
    SET_GPR_U32(ctx, 31, 0x1A6218u);
    ctx->pc = 0x1A6214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 19));
    ctx->pc = 0x1A5BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_one_0x1a5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6218u; }
        else if (ctx->pc != 0x1A6218u) { ctx->pc = 0x1A6218u; }
    }
    if (ctx->pc != 0x1A6218u) { return; }
    ctx->pc = 0x1A6218u;
label_1a6218:
    // 0x1a6218: 0x3c011001
    ctx->pc = 0x1a6218u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a621c: 0x8c22d000
    ctx->pc = 0x1a621cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a6220: 0x30420100
    ctx->pc = 0x1a6220u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a6224: 0x0
    ctx->pc = 0x1a6224u;
    // NOP
    // 0x1a6228: 0x0
    ctx->pc = 0x1a6228u;
    // NOP
    // 0x1a622c: 0x1440fffa
    ctx->pc = 0x1A622Cu;
    {
        const bool branch_taken_0x1a622c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a622c) {
            ctx->pc = 0x1A6218u;
            goto label_1a6218;
        }
    }
    ctx->pc = 0x1A6234u;
    // 0x1a6234: 0x0
    ctx->pc = 0x1a6234u;
    // NOP
    // 0x1a6238: 0x26100001
    ctx->pc = 0x1a6238u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1a623c:
    // 0x1a623c: 0x2a020009
    ctx->pc = 0x1a623cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 9));
    // 0x1a6240: 0x1440ff9d
    ctx->pc = 0x1A6240u;
    {
        const bool branch_taken_0x1a6240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A6244u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x1a6240) {
            ctx->pc = 0x1A60B8u;
            goto label_1a60b8;
        }
    }
    ctx->pc = 0x1A6248u;
    // 0x1a6248: 0x8fa200f0
    ctx->pc = 0x1a6248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a624c: 0x24420009
    ctx->pc = 0x1a624cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9));
    // 0x1a6250: 0xafa200f0
    ctx->pc = 0x1a6250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1a6254: 0x8fa200a0
    ctx->pc = 0x1a6254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a6258: 0x24420001
    ctx->pc = 0x1a6258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a625c: 0xafa200a0
    ctx->pc = 0x1a625cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1a6260: 0x8fa200a0
    ctx->pc = 0x1a6260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a6264: 0x28420009
    ctx->pc = 0x1a6264u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
    // 0x1a6268: 0x1440ff7f
    ctx->pc = 0x1A6268u;
    {
        const bool branch_taken_0x1a6268 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a6268) {
            ctx->pc = 0x1A6068u;
            goto label_1a6068;
        }
    }
    ctx->pc = 0x1A6270u;
label_1a6270:
    // 0x1a6270: 0x8fa200d0
    ctx->pc = 0x1a6270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a6274: 0x10400082
    ctx->pc = 0x1A6274u;
    {
        const bool branch_taken_0x1a6274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6278u;
        SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a6274) {
            ctx->pc = 0x1A6480u;
            goto label_1a6480;
        }
    }
    ctx->pc = 0x1A627Cu;
    // 0x1a627c: 0xafa00140
    ctx->pc = 0x1a627cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
    // 0x1a6280: 0xafa00100
    ctx->pc = 0x1a6280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1a6284: 0x0
    ctx->pc = 0x1a6284u;
    // NOP
label_1a6288:
    // 0x1a6288: 0x8fa20140
    ctx->pc = 0x1a6288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a628c: 0xc78089c8
    ctx->pc = 0x1a628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6290: 0x8fb00100
    ctx->pc = 0x1a6290u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a6294: 0x70009e28
    ctx->pc = 0x1a6294u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6298: 0x2442fffc
    ctx->pc = 0x1a6298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1a629c: 0x44820800
    ctx->pc = 0x1a629cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a62a0: 0x0
    ctx->pc = 0x1a62a0u;
    // NOP
    // 0x1a62a4: 0x46800860
    ctx->pc = 0x1a62a4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1a62a8: 0x8fa200e0
    ctx->pc = 0x1a62a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1a62ac: 0x46000802
    ctx->pc = 0x1a62acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a62b0: 0x46000024
    ctx->pc = 0x1a62b0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a62b4: 0x44030000
    ctx->pc = 0x1a62b4u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1a62b8: 0x0
    ctx->pc = 0x1a62b8u;
    // NOP
    // 0x1a62bc: 0x431021
    ctx->pc = 0x1a62bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a62c0: 0xae420094
    ctx->pc = 0x1a62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    // 0x1a62c4: 0x8e430094
    ctx->pc = 0x1a62c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x1a62c8: 0x8fa20130
    ctx->pc = 0x1a62c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a62cc: 0x621021
    ctx->pc = 0x1a62ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a62d0: 0xae4200b4
    ctx->pc = 0x1a62d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    // 0x1a62d4: 0x0
    ctx->pc = 0x1a62d4u;
    // NOP
label_1a62d8:
    // 0x1a62d8: 0x8f828a00
    ctx->pc = 0x1a62d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
    // 0x1a62dc: 0x101880
    ctx->pc = 0x1a62dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a62e0: 0x431021
    ctx->pc = 0x1a62e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a62e4: 0x8c420000
    ctx->pc = 0x1a62e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a62e8: 0x56c20058
    ctx->pc = 0x1A62E8u;
    {
        const bool branch_taken_0x1a62e8 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a62e8) {
            ctx->pc = 0x1A62ECu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x1A644Cu;
            goto label_1a644c;
        }
    }
    ctx->pc = 0x1A62F0u;
    // 0x1a62f0: 0x16a00030
    ctx->pc = 0x1A62F0u;
    {
        const bool branch_taken_0x1a62f0 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A62F4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
        if (branch_taken_0x1a62f0) {
            ctx->pc = 0x1A63B4u;
            goto label_1a63b4;
        }
    }
    ctx->pc = 0x1A62F8u;
    // 0x1a62f8: 0x27a40490
    ctx->pc = 0x1a62f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 1168));
    // 0x1a62fc: 0x72402e28
    ctx->pc = 0x1a62fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a6300: 0xc06ac36
    ctx->pc = 0x1A6300u;
    SET_GPR_U32(ctx, 31, 0x1A6308u);
    ctx->pc = 0x1A6304u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6308u; }
        else if (ctx->pc != 0x1A6308u) { ctx->pc = 0x1A6308u; }
    }
    if (ctx->pc != 0x1A6308u) { return; }
    ctx->pc = 0x1A6308u;
label_1a6308:
    // 0x1a6308: 0x3c011001
    ctx->pc = 0x1a6308u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a630c: 0x8c22d000
    ctx->pc = 0x1a630cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a6310: 0x30420100
    ctx->pc = 0x1a6310u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a6314: 0x0
    ctx->pc = 0x1a6314u;
    // NOP
    // 0x1a6318: 0x0
    ctx->pc = 0x1a6318u;
    // NOP
    // 0x1a631c: 0x1440fffa
    ctx->pc = 0x1A631Cu;
    {
        const bool branch_taken_0x1a631c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a631c) {
            ctx->pc = 0x1A6308u;
            goto label_1a6308;
        }
    }
    ctx->pc = 0x1A6324u;
    // 0x1a6324: 0x27a40150
    ctx->pc = 0x1a6324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 336));
    // 0x1a6328: 0x70002e28
    ctx->pc = 0x1a6328u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a632c: 0xc06955c
    ctx->pc = 0x1A632Cu;
    SET_GPR_U32(ctx, 31, 0x1A6334u);
    ctx->pc = 0x1A6330u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A5570u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_draw_env_0x1a5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6334u; }
        else if (ctx->pc != 0x1A6334u) { ctx->pc = 0x1A6334u; }
    }
    if (ctx->pc != 0x1A6334u) { return; }
    ctx->pc = 0x1A6334u;
    // 0x1a6334: 0x27a203b8
    ctx->pc = 0x1a6334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 952));
    // 0x1a6338: 0xac540000
    ctx->pc = 0x1a6338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x1a633c: 0x240300ff
    ctx->pc = 0x1a633cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6340: 0x27a203cc
    ctx->pc = 0x1a6340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 972));
    // 0x1a6344: 0xac430000
    ctx->pc = 0x1a6344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6348: 0xc069568
    ctx->pc = 0x1A6348u;
    SET_GPR_U32(ctx, 31, 0x1A6350u);
    ctx->pc = 0x1A634Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 944));
    ctx->pc = 0x1A55A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_alpha_frame_buffer_0x1a55a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6350u; }
        else if (ctx->pc != 0x1A6350u) { ctx->pc = 0x1A6350u; }
    }
    if (ctx->pc != 0x1A6350u) { return; }
    ctx->pc = 0x1A6350u;
    // 0x1a6350: 0x8fa30110
    ctx->pc = 0x1a6350u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a6354: 0x27a203b8
    ctx->pc = 0x1a6354u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 952));
    // 0x1a6358: 0x27a403b0
    ctx->pc = 0x1a6358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 944));
    // 0x1a635c: 0xac430000
    ctx->pc = 0x1a635cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a6360: 0x27a203cc
    ctx->pc = 0x1a6360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 972));
    // 0x1a6364: 0xc069568
    ctx->pc = 0x1A6364u;
    SET_GPR_U32(ctx, 31, 0x1A636Cu);
    ctx->pc = 0x1A6368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1A55A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_alpha_frame_buffer_0x1a55a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A636Cu; }
        else if (ctx->pc != 0x1A636Cu) { ctx->pc = 0x1A636Cu; }
    }
    if (ctx->pc != 0x1A636Cu) { return; }
    ctx->pc = 0x1A636Cu;
    // 0x1a636c: 0x8f858a0c
    ctx->pc = 0x1a636cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1a6370: 0x70002628
    ctx->pc = 0x1a6370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a6374: 0xc06955c
    ctx->pc = 0x1A6374u;
    SET_GPR_U32(ctx, 31, 0x1A637Cu);
    ctx->pc = 0x1A6378u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A5570u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_draw_env_0x1a5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A637Cu; }
        else if (ctx->pc != 0x1A637Cu) { ctx->pc = 0x1A637Cu; }
    }
    if (ctx->pc != 0x1A637Cu) { return; }
    ctx->pc = 0x1A637Cu;
    // 0x1a637c: 0x24150001
    ctx->pc = 0x1a637cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_1a6380:
    // 0x1a6380: 0x3c011001
    ctx->pc = 0x1a6380u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a6384: 0x8c22d000
    ctx->pc = 0x1a6384u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a6388: 0x30420100
    ctx->pc = 0x1a6388u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a638c: 0x0
    ctx->pc = 0x1a638cu;
    // NOP
    // 0x1a6390: 0x0
    ctx->pc = 0x1a6390u;
    // NOP
    // 0x1a6394: 0x1440fffa
    ctx->pc = 0x1A6394u;
    {
        const bool branch_taken_0x1a6394 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a6394) {
            ctx->pc = 0x1A6380u;
            goto label_1a6380;
        }
    }
    ctx->pc = 0x1A639Cu;
    // 0x1a639c: 0x27a50490
    ctx->pc = 0x1a639cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1168));
    // 0x1a63a0: 0x72402628
    ctx->pc = 0x1a63a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a63a4: 0xc06ac36
    ctx->pc = 0x1A63A4u;
    SET_GPR_U32(ctx, 31, 0x1A63ACu);
    ctx->pc = 0x1A63A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63ACu; }
        else if (ctx->pc != 0x1A63ACu) { ctx->pc = 0x1A63ACu; }
    }
    if (ctx->pc != 0x1A63ACu) { return; }
    ctx->pc = 0x1A63ACu;
    // 0x1a63ac: 0x0
    ctx->pc = 0x1a63acu;
    // NOP
label_1a63b0:
    // 0x1a63b0: 0x3c011001
    ctx->pc = 0x1a63b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a63b4:
    // 0x1a63b4: 0x8c22d000
    ctx->pc = 0x1a63b4u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a63b8: 0x30420100
    ctx->pc = 0x1a63b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a63bc: 0x0
    ctx->pc = 0x1a63bcu;
    // NOP
    // 0x1a63c0: 0x0
    ctx->pc = 0x1a63c0u;
    // NOP
    // 0x1a63c4: 0x1440fffa
    ctx->pc = 0x1A63C4u;
    {
        const bool branch_taken_0x1a63c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a63c4) {
            ctx->pc = 0x1A63B0u;
            goto label_1a63b0;
        }
    }
    ctx->pc = 0x1A63CCu;
    // 0x1a63cc: 0x24020080
    ctx->pc = 0x1a63ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a63d0: 0x16200002
    ctx->pc = 0x1A63D0u;
    {
        const bool branch_taken_0x1a63d0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A63D4u;
        { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1a63d0) {
            ctx->pc = 0x1A63DCu;
            goto label_1a63dc;
        }
    }
    ctx->pc = 0x1A63D8u;
    // 0x1a63d8: 0x1cd
    ctx->pc = 0x1a63d8u;
    runtime->handleBreak(rdram, ctx);
label_1a63dc:
    // 0x1a63dc: 0x2662fffc
    ctx->pc = 0x1a63dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x1a63e0: 0x44820000
    ctx->pc = 0x1a63e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a63e4: 0x1812
    ctx->pc = 0x1a63e4u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1a63e8: 0x46800060
    ctx->pc = 0x1a63e8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a63ec: 0x72402628
    ctx->pc = 0x1a63ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a63f0: 0xae430024
    ctx->pc = 0x1a63f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x1a63f4: 0xc78089cc
    ctx->pc = 0x1a63f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a63f8: 0x46000802
    ctx->pc = 0x1a63f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a63fc: 0x46000024
    ctx->pc = 0x1a63fcu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a6400: 0x44020000
    ctx->pc = 0x1a6400u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1a6404: 0x0
    ctx->pc = 0x1a6404u;
    // NOP
    // 0x1a6408: 0x3c21021
    ctx->pc = 0x1a6408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1a640c: 0xae420090
    ctx->pc = 0x1a640cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x1a6410: 0x8e420090
    ctx->pc = 0x1a6410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1a6414: 0x571021
    ctx->pc = 0x1a6414u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1a6418: 0xae4200b0
    ctx->pc = 0x1a6418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
    // 0x1a641c: 0xae540098
    ctx->pc = 0x1a641cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 20));
    // 0x1a6420: 0xc0696f0
    ctx->pc = 0x1A6420u;
    SET_GPR_U32(ctx, 31, 0x1A6428u);
    ctx->pc = 0x1A6424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 20));
    ctx->pc = 0x1A5BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_one_0x1a5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6428u; }
        else if (ctx->pc != 0x1A6428u) { ctx->pc = 0x1A6428u; }
    }
    if (ctx->pc != 0x1A6428u) { return; }
    ctx->pc = 0x1A6428u;
label_1a6428:
    // 0x1a6428: 0x3c011001
    ctx->pc = 0x1a6428u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a642c: 0x8c22d000
    ctx->pc = 0x1a642cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a6430: 0x30420100
    ctx->pc = 0x1a6430u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a6434: 0x0
    ctx->pc = 0x1a6434u;
    // NOP
    // 0x1a6438: 0x0
    ctx->pc = 0x1a6438u;
    // NOP
    // 0x1a643c: 0x1440fffa
    ctx->pc = 0x1A643Cu;
    {
        const bool branch_taken_0x1a643c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a643c) {
            ctx->pc = 0x1A6428u;
            goto label_1a6428;
        }
    }
    ctx->pc = 0x1A6444u;
    // 0x1a6444: 0x0
    ctx->pc = 0x1a6444u;
    // NOP
    // 0x1a6448: 0x26730001
    ctx->pc = 0x1a6448u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1a644c:
    // 0x1a644c: 0x2a620009
    ctx->pc = 0x1a644cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 9));
    // 0x1a6450: 0x1440ffa1
    ctx->pc = 0x1A6450u;
    {
        const bool branch_taken_0x1a6450 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A6454u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1a6450) {
            ctx->pc = 0x1A62D8u;
            goto label_1a62d8;
        }
    }
    ctx->pc = 0x1A6458u;
    // 0x1a6458: 0x8fa20100
    ctx->pc = 0x1a6458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a645c: 0x24420009
    ctx->pc = 0x1a645cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9));
    // 0x1a6460: 0xafa20100
    ctx->pc = 0x1a6460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1a6464: 0x8fa20140
    ctx->pc = 0x1a6464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a6468: 0x24420001
    ctx->pc = 0x1a6468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a646c: 0xafa20140
    ctx->pc = 0x1a646cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1a6470: 0x8fa20140
    ctx->pc = 0x1a6470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a6474: 0x28420009
    ctx->pc = 0x1a6474u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
    // 0x1a6478: 0x1440ff83
    ctx->pc = 0x1A6478u;
    {
        const bool branch_taken_0x1a6478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a6478) {
            ctx->pc = 0x1A6288u;
            goto label_1a6288;
        }
    }
    ctx->pc = 0x1A6480u;
label_1a6480:
    // 0x1a6480: 0x8fa20120
    ctx->pc = 0x1a6480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a6484: 0x26d6ffff
    ctx->pc = 0x1a6484u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1a6488: 0x26310001
    ctx->pc = 0x1a6488u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a648c: 0x2442fffc
    ctx->pc = 0x1a648cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1a6490: 0x6c1fec0
    ctx->pc = 0x1A6490u;
    {
        const bool branch_taken_0x1a6490 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x1A6494u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        if (branch_taken_0x1a6490) {
            ctx->pc = 0x1A5F94u;
            goto label_1a5f94;
        }
    }
    ctx->pc = 0x1A6498u;
label_1a6498:
    // 0x1a6498: 0x8f858a0c
    ctx->pc = 0x1a6498u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1a649c: 0x70002628
    ctx->pc = 0x1a649cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a64a0: 0xc06955c
    ctx->pc = 0x1A64A0u;
    SET_GPR_U32(ctx, 31, 0x1A64A8u);
    ctx->pc = 0x1A64A4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A5570u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_draw_env_0x1a5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64A8u; }
        else if (ctx->pc != 0x1A64A8u) { ctx->pc = 0x1A64A8u; }
    }
    if (ctx->pc != 0x1A64A8u) { return; }
    ctx->pc = 0x1A64A8u;
    // 0x1a64a8: 0x8fa300bc
    ctx->pc = 0x1a64a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1a64ac: 0x14600003
    ctx->pc = 0x1A64ACu;
    {
        const bool branch_taken_0x1a64ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A64B0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a64ac) {
            ctx->pc = 0x1A64BCu;
            goto label_1a64bc;
        }
    }
    ctx->pc = 0x1A64B4u;
    // 0x1a64b4: 0xc0694e8
    ctx->pc = 0x1A64B4u;
    SET_GPR_U32(ctx, 31, 0x1A64BCu);
    ctx->pc = 0x1A64B8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A64BCu; }
        else if (ctx->pc != 0x1A64BCu) { ctx->pc = 0x1A64BCu; }
    }
    if (ctx->pc != 0x1A64BCu) { return; }
    ctx->pc = 0x1A64BCu;
label_1a64bc:
    // 0x1a64bc: 0x7bbf0090
    ctx->pc = 0x1a64bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a64c0: 0x7bbe0080
    ctx->pc = 0x1a64c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a64c4: 0x7bb70070
    ctx->pc = 0x1a64c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a64c8: 0x7bb60060
    ctx->pc = 0x1a64c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a64cc: 0x7bb50050
    ctx->pc = 0x1a64ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a64d0: 0x7bb40040
    ctx->pc = 0x1a64d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a64d4: 0x7bb30030
    ctx->pc = 0x1a64d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a64d8: 0x7bb20020
    ctx->pc = 0x1a64d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a64dc: 0x7bb10010
    ctx->pc = 0x1a64dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a64e0: 0x7bb00000
    ctx->pc = 0x1a64e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a64e4: 0x3e00008
    ctx->pc = 0x1A64E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A64E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1360));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5D48u: goto label_1a5d48;
            case 0x1A5D6Cu: goto label_1a5d6c;
            case 0x1A5D70u: goto label_1a5d70;
            case 0x1A5E68u: goto label_1a5e68;
            case 0x1A5E70u: goto label_1a5e70;
            case 0x1A5E7Cu: goto label_1a5e7c;
            case 0x1A5EF0u: goto label_1a5ef0;
            case 0x1A5F94u: goto label_1a5f94;
            case 0x1A601Cu: goto label_1a601c;
            case 0x1A6038u: goto label_1a6038;
            case 0x1A6054u: goto label_1a6054;
            case 0x1A6068u: goto label_1a6068;
            case 0x1A60B8u: goto label_1a60b8;
            case 0x1A60F0u: goto label_1a60f0;
            case 0x1A6170u: goto label_1a6170;
            case 0x1A61A0u: goto label_1a61a0;
            case 0x1A61A4u: goto label_1a61a4;
            case 0x1A61CCu: goto label_1a61cc;
            case 0x1A6218u: goto label_1a6218;
            case 0x1A623Cu: goto label_1a623c;
            case 0x1A6270u: goto label_1a6270;
            case 0x1A6288u: goto label_1a6288;
            case 0x1A62D8u: goto label_1a62d8;
            case 0x1A6308u: goto label_1a6308;
            case 0x1A6380u: goto label_1a6380;
            case 0x1A63B0u: goto label_1a63b0;
            case 0x1A63B4u: goto label_1a63b4;
            case 0x1A63DCu: goto label_1a63dc;
            case 0x1A6428u: goto label_1a6428;
            case 0x1A644Cu: goto label_1a644c;
            case 0x1A6480u: goto label_1a6480;
            case 0x1A6498u: goto label_1a6498;
            case 0x1A64BCu: goto label_1a64bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A64ECu;
}
