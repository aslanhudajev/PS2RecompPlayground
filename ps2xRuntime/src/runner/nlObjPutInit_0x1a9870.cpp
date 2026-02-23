#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutInit
// Address: 0x1a9870 - 0x1a9988
void nlObjPutInit_0x1a9870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutInit");


    ctx->pc = 0x1a9870u;

    // 0x1a9870: 0x27bdffd0
    ctx->pc = 0x1a9870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9874: 0x7fbf0020
    ctx->pc = 0x1a9874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a9878: 0x7fb10010
    ctx->pc = 0x1a9878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a987c: 0x7fb00000
    ctx->pc = 0x1a987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9880: 0x70808e28
    ctx->pc = 0x1a9880u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a9884: 0x70a08628
    ctx->pc = 0x1a9884u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a9888: 0xc0547e4
    ctx->pc = 0x1A9888u;
    SET_GPR_U32(ctx, 31, 0x1A9890u);
    ctx->pc = 0x1A988Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9890u; }
        else if (ctx->pc != 0x1A9890u) { ctx->pc = 0x1A9890u; }
    }
    if (ctx->pc != 0x1A9890u) { return; }
    ctx->pc = 0x1A9890u;
    // 0x1a9890: 0x70402628
    ctx->pc = 0x1a9890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a9894: 0x3c020026
    ctx->pc = 0x1a9894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a9898: 0xc0548b8
    ctx->pc = 0x1A9898u;
    SET_GPR_U32(ctx, 31, 0x1A98A0u);
    ctx->pc = 0x1A989Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294964384));
    ctx->pc = 0x1522E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x1522e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98A0u; }
        else if (ctx->pc != 0x1A98A0u) { ctx->pc = 0x1A98A0u; }
    }
    if (ctx->pc != 0x1A98A0u) { return; }
    ctx->pc = 0x1A98A0u;
    // 0x1a98a0: 0x3c023f80
    ctx->pc = 0x1a98a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a98a4: 0x3c010030
    ctx->pc = 0x1a98a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a98a8: 0xac22396c
    ctx->pc = 0x1a98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14700), GPR_U32(ctx, 2));
    // 0x1a98ac: 0x3c010030
    ctx->pc = 0x1a98acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a98b0: 0xac203968
    ctx->pc = 0x1a98b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14696), GPR_U32(ctx, 0));
    // 0x1a98b4: 0x3c010030
    ctx->pc = 0x1a98b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a98b8: 0xac203964
    ctx->pc = 0x1a98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14692), GPR_U32(ctx, 0));
    // 0x1a98bc: 0x3c010030
    ctx->pc = 0x1a98bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a98c0: 0xaf808a1c
    ctx->pc = 0x1a98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
    // 0x1a98c4: 0xc06aaf8
    ctx->pc = 0x1A98C4u;
    SET_GPR_U32(ctx, 31, 0x1A98CCu);
    ctx->pc = 0x1A98C8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14688), GPR_U32(ctx, 0));
    ctx->pc = 0x1AABE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutInitFadeStack_0x1aabe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98CCu; }
        else if (ctx->pc != 0x1A98CCu) { ctx->pc = 0x1A98CCu; }
    }
    if (ctx->pc != 0x1A98CCu) { return; }
    ctx->pc = 0x1A98CCu;
    // 0x1a98cc: 0x3c023f80
    ctx->pc = 0x1a98ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a98d0: 0x44826000
    ctx->pc = 0x1a98d0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1a98d4: 0x0
    ctx->pc = 0x1a98d4u;
    // NOP
    // 0x1a98d8: 0x46006346
    ctx->pc = 0x1a98d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a98dc: 0xc06aa80
    ctx->pc = 0x1A98DCu;
    SET_GPR_U32(ctx, 31, 0x1A98E4u);
    ctx->pc = 0x1A98E0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1AAA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetFadeColor_0x1aaa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A98E4u; }
        else if (ctx->pc != 0x1A98E4u) { ctx->pc = 0x1A98E4u; }
    }
    if (ctx->pc != 0x1A98E4u) { return; }
    ctx->pc = 0x1A98E4u;
    // 0x1a98e4: 0x3c033f80
    ctx->pc = 0x1a98e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1a98e8: 0x3c010030
    ctx->pc = 0x1a98e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a98ec: 0xac23397c
    ctx->pc = 0x1a98ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14716), GPR_U32(ctx, 3));
    // 0x1a98f0: 0x3c031000
    ctx->pc = 0x1a98f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1a98f4: 0x3463000d
    ctx->pc = 0x1a98f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 13));
    // 0x1a98f8: 0x3c010030
    ctx->pc = 0x1a98f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a98fc: 0xac233940
    ctx->pc = 0x1a98fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14656), GPR_U32(ctx, 3));
    // 0x1a9900: 0x3c010030
    ctx->pc = 0x1a9900u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9904: 0xac203944
    ctx->pc = 0x1a9904u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14660), GPR_U32(ctx, 0));
    // 0x1a9908: 0x3c010030
    ctx->pc = 0x1a9908u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a990c: 0xac203948
    ctx->pc = 0x1a990cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14664), GPR_U32(ctx, 0));
    // 0x1a9910: 0x3c010030
    ctx->pc = 0x1a9910u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9914: 0xac20394c
    ctx->pc = 0x1a9914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14668), GPR_U32(ctx, 0));
    // 0x1a9918: 0x3c010030
    ctx->pc = 0x1a9918u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a991c: 0xac203950
    ctx->pc = 0x1a991cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14672), GPR_U32(ctx, 0));
    // 0x1a9920: 0x3c010030
    ctx->pc = 0x1a9920u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9924: 0xac203954
    ctx->pc = 0x1a9924u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14676), GPR_U32(ctx, 0));
    // 0x1a9928: 0x3c010030
    ctx->pc = 0x1a9928u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a992c: 0xac203958
    ctx->pc = 0x1a992cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14680), GPR_U32(ctx, 0));
    // 0x1a9930: 0x3c036c0b
    ctx->pc = 0x1a9930u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27659 << 16));
    // 0x1a9934: 0x34638000
    ctx->pc = 0x1a9934u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32768));
    // 0x1a9938: 0x3c010030
    ctx->pc = 0x1a9938u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a993c: 0xac23395c
    ctx->pc = 0x1a993cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14684), GPR_U32(ctx, 3));
    // 0x1a9940: 0x3c031400
    ctx->pc = 0x1a9940u;
    SET_GPR_U32(ctx, 3, ((uint32_t)5120 << 16));
    // 0x1a9944: 0x34630008
    ctx->pc = 0x1a9944u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8));
    // 0x1a9948: 0x3c010030
    ctx->pc = 0x1a9948u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a994c: 0xac233a10
    ctx->pc = 0x1a994cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14864), GPR_U32(ctx, 3));
    // 0x1a9950: 0x3c010030
    ctx->pc = 0x1a9950u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9954: 0xac203a14
    ctx->pc = 0x1a9954u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14868), GPR_U32(ctx, 0));
    // 0x1a9958: 0x3c010030
    ctx->pc = 0x1a9958u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a995c: 0xac203a18
    ctx->pc = 0x1a995cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14872), GPR_U32(ctx, 0));
    // 0x1a9960: 0x3c010030
    ctx->pc = 0x1a9960u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9964: 0xaf908a28
    ctx->pc = 0x1a9964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 16));
    // 0x1a9968: 0xaf918a2c
    ctx->pc = 0x1a9968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 17));
    // 0x1a996c: 0xaf808a30
    ctx->pc = 0x1a996cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    // 0x1a9970: 0xac203a1c
    ctx->pc = 0x1a9970u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14876), GPR_U32(ctx, 0));
    // 0x1a9974: 0x7bbf0020
    ctx->pc = 0x1a9974u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9978: 0x7bb10010
    ctx->pc = 0x1a9978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a997c: 0x7bb00000
    ctx->pc = 0x1a997cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9980: 0x3e00008
    ctx->pc = 0x1A9980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9984u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9988u;
}
