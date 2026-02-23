#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: shapeAnimation__10PeopleTaskFiPffPi
// Address: 0x20b8f0 - 0x20b9fc
void shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("shapeAnimation__10PeopleTaskFiPffPi");


    ctx->pc = 0x20b8f0u;

    // 0x20b8f0: 0x27bdffe0
    ctx->pc = 0x20b8f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b8f4: 0x7fbf0010
    ctx->pc = 0x20b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20b8f8: 0x7fb00000
    ctx->pc = 0x20b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b8fc: 0x44800800
    ctx->pc = 0x20b8fcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x20b900: 0x70008628
    ctx->pc = 0x20b900u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b904: 0x70002628
    ctx->pc = 0x20b904u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b908: 0x70e04628
    ctx->pc = 0x20b908u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20b90c: 0x10000022
    ctx->pc = 0x20B90Cu;
    {
        const bool branch_taken_0x20b90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B910u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20b90c) {
            ctx->pc = 0x20B998u;
            goto label_20b998;
        }
    }
    ctx->pc = 0x20B914u;
label_20b914:
    // 0x20b914: 0x8d030000
    ctx->pc = 0x20b914u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20b918: 0x31880
    ctx->pc = 0x20b918u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b91c: 0xc34821
    ctx->pc = 0x20b91cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20b920: 0xc5200000
    ctx->pc = 0x20b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b924: 0x46010036
    ctx->pc = 0x20b924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b928: 0x0
    ctx->pc = 0x20b928u;
    // NOP
    // 0x20b92c: 0x45030019
    ctx->pc = 0x20B92Cu;
    {
        const bool branch_taken_0x20b92c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b92c) {
            ctx->pc = 0x20B930u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
            ctx->pc = 0x20B994u;
            goto label_20b994;
        }
    }
    ctx->pc = 0x20B934u;
    // 0x20b934: 0x460c0001
    ctx->pc = 0x20b934u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x20b938: 0x46010036
    ctx->pc = 0x20b938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b93c: 0x0
    ctx->pc = 0x20b93cu;
    // NOP
    // 0x20b940: 0x45000009
    ctx->pc = 0x20B940u;
    {
        const bool branch_taken_0x20b940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B944u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        if (branch_taken_0x20b940) {
            ctx->pc = 0x20B968u;
            goto label_20b968;
        }
    }
    ctx->pc = 0x20B948u;
    // 0x20b948: 0x41080
    ctx->pc = 0x20b948u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b94c: 0xe5210000
    ctx->pc = 0x20b94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x20b950: 0x471021
    ctx->pc = 0x20b950u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20b954: 0x8c430008
    ctx->pc = 0x20b954u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20b958: 0x2402ffff
    ctx->pc = 0x20b958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b95c: 0x14620003
    ctx->pc = 0x20B95Cu;
    {
        const bool branch_taken_0x20b95c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20B960u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x20b95c) {
            ctx->pc = 0x20B96Cu;
            goto label_20b96c;
        }
    }
    ctx->pc = 0x20B964u;
    // 0x20b964: 0x24100001
    ctx->pc = 0x20b964u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_20b968:
    // 0x20b968: 0x3c023f80
    ctx->pc = 0x20b968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_20b96c:
    // 0x20b96c: 0x44820800
    ctx->pc = 0x20b96cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x20b970: 0xc5200000
    ctx->pc = 0x20b970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b974: 0x41080
    ctx->pc = 0x20b974u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b978: 0x471021
    ctx->pc = 0x20b978u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20b97c: 0x8c420004
    ctx->pc = 0x20b97cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b980: 0x46000801
    ctx->pc = 0x20b980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20b984: 0x21080
    ctx->pc = 0x20b984u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b988: 0xc21021
    ctx->pc = 0x20b988u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20b98c: 0x10000006
    ctx->pc = 0x20B98Cu;
    {
        const bool branch_taken_0x20b98c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B990u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x20b98c) {
            ctx->pc = 0x20B9A8u;
            goto label_20b9a8;
        }
    }
    ctx->pc = 0x20B994u;
label_20b994:
    // 0x20b994: 0x24840001
    ctx->pc = 0x20b994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_20b998:
    // 0x20b998: 0x8d030004
    ctx->pc = 0x20b998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x20b99c: 0x1462ffdd
    ctx->pc = 0x20B99Cu;
    {
        const bool branch_taken_0x20b99c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20b99c) {
            ctx->pc = 0x20B914u;
            goto label_20b914;
        }
    }
    ctx->pc = 0x20B9A4u;
    // 0x20b9a4: 0x0
    ctx->pc = 0x20b9a4u;
    // NOP
label_20b9a8:
    // 0x20b9a8: 0x41080
    ctx->pc = 0x20b9a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b9ac: 0x472021
    ctx->pc = 0x20b9acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20b9b0: 0x8c830004
    ctx->pc = 0x20b9b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20b9b4: 0x2402ffff
    ctx->pc = 0x20b9b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b9b8: 0x54620008
    ctx->pc = 0x20B9B8u;
    {
        const bool branch_taken_0x20b9b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20b9b8) {
            ctx->pc = 0x20B9BCu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
            ctx->pc = 0x20B9DCu;
            goto label_20b9dc;
        }
    }
    ctx->pc = 0x20B9C0u;
    // 0x20b9c0: 0x8c820000
    ctx->pc = 0x20b9c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b9c4: 0x3c033f80
    ctx->pc = 0x20b9c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x20b9c8: 0x24100001
    ctx->pc = 0x20b9c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b9cc: 0x21080
    ctx->pc = 0x20b9ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b9d0: 0xc21021
    ctx->pc = 0x20b9d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20b9d4: 0xac430000
    ctx->pc = 0x20b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x20b9d8: 0x27848cf4
    ctx->pc = 0x20b9d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
label_20b9dc:
    // 0x20b9dc: 0x70003e28
    ctx->pc = 0x20b9dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b9e0: 0xc0799e0
    ctx->pc = 0x20B9E0u;
    SET_GPR_U32(ctx, 31, 0x20B9E8u);
    ctx->pc = 0x20B9E4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6780u;
    {
        const uint32_t __entryPc = ctx->pc;
        shape__16FaceAnimMgrClassFiPfPii_0x1e6780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B9E8u; }
        else if (ctx->pc != 0x20B9E8u) { ctx->pc = 0x20B9E8u; }
    }
    if (ctx->pc != 0x20B9E8u) { return; }
    ctx->pc = 0x20B9E8u;
    // 0x20b9e8: 0x72001628
    ctx->pc = 0x20b9e8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20b9ec: 0x7bbf0010
    ctx->pc = 0x20b9ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b9f0: 0x7bb00000
    ctx->pc = 0x20b9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b9f4: 0x3e00008
    ctx->pc = 0x20B9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B9F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B914u: goto label_20b914;
            case 0x20B968u: goto label_20b968;
            case 0x20B96Cu: goto label_20b96c;
            case 0x20B994u: goto label_20b994;
            case 0x20B998u: goto label_20b998;
            case 0x20B9A8u: goto label_20b9a8;
            case 0x20B9DCu: goto label_20b9dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B9FCu;
}
