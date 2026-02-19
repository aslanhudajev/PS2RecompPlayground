#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: write_stage_info
// Address: 0x26b858 - 0x26bae0
void write_stage_info_0x26b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b858u;

    // 0x26b858: 0x27bdffc0
    ctx->pc = 0x26b858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26b85c: 0xffbf0020
    ctx->pc = 0x26b85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26b860: 0xffb10010
    ctx->pc = 0x26b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26b864: 0xffb00000
    ctx->pc = 0x26b864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26b868: 0xe7b40030
    ctx->pc = 0x26b868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26b86c: 0x3c02003c
    ctx->pc = 0x26b86cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26b870: 0xc45438f8
    ctx->pc = 0x26b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26b874: 0x244638f8
    ctx->pc = 0x26b874u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 14584));
    // 0x26b878: 0xc0382d
    ctx->pc = 0x26b878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b87c: 0x3c030031
    ctx->pc = 0x26b87cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26b880: 0x8c62ffbc
    ctx->pc = 0x26b880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26b884: 0x4400005
    ctx->pc = 0x26B884u;
    {
        const bool branch_taken_0x26b884 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26B888u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26b884) {
            ctx->pc = 0x26B89Cu;
            goto label_26b89c;
        }
    }
    ctx->pc = 0x26B88Cu;
    // 0x26b88c: 0x44820800
    ctx->pc = 0x26b88cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26b890: 0x46800860
    ctx->pc = 0x26b890u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26b894: 0x10000008
    ctx->pc = 0x26B894u;
    {
        const bool branch_taken_0x26b894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26b894) {
            ctx->pc = 0x26B8B8u;
            goto label_26b8b8;
        }
    }
    ctx->pc = 0x26B89Cu;
label_26b89c:
    // 0x26b89c: 0x8ca20000
    ctx->pc = 0x26b89cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26b8a0: 0x30430001
    ctx->pc = 0x26b8a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26b8a4: 0x21042
    ctx->pc = 0x26b8a4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26b8a8: 0x621825
    ctx->pc = 0x26b8a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b8ac: 0x44830800
    ctx->pc = 0x26b8acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26b8b0: 0x46800860
    ctx->pc = 0x26b8b0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26b8b4: 0x46010840
    ctx->pc = 0x26b8b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26b8b8:
    // 0x26b8b8: 0x3c013ca3
    ctx->pc = 0x26b8b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x26b8bc: 0x3421d70a
    ctx->pc = 0x26b8bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x26b8c0: 0x44810000
    ctx->pc = 0x26b8c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26b8c4: 0x46000802
    ctx->pc = 0x26b8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26b8c8: 0xc4e10000
    ctx->pc = 0x26b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b8cc: 0x46010000
    ctx->pc = 0x26b8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26b8d0: 0x28820002
    ctx->pc = 0x26b8d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
    // 0x26b8d4: 0x14400008
    ctx->pc = 0x26B8D4u;
    {
        const bool branch_taken_0x26b8d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26B8D8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        if (branch_taken_0x26b8d4) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B8DCu;
    // 0x26b8dc: 0x3c02003c
    ctx->pc = 0x26b8dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26b8e0: 0xc44138f8
    ctx->pc = 0x26b8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b8e4: 0x3c014000
    ctx->pc = 0x26b8e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x26b8e8: 0x44810000
    ctx->pc = 0x26b8e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26b8ec: 0x46010034
    ctx->pc = 0x26b8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b8f0: 0x45000005
    ctx->pc = 0x26B8F0u;
    {
        const bool branch_taken_0x26b8f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26b8f0) {
            ctx->pc = 0x26B908u;
            goto label_26b908;
        }
    }
    ctx->pc = 0x26B8F8u;
label_26b8f8:
    // 0x26b8f8: 0x3c02003c
    ctx->pc = 0x26b8f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26b8fc: 0x3c014000
    ctx->pc = 0x26b8fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x26b900: 0x44810000
    ctx->pc = 0x26b900u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26b904: 0xe44038f8
    ctx->pc = 0x26b904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14584), bits); }
label_26b908:
    // 0x26b908: 0x1c800007
    ctx->pc = 0x26B908u;
    {
        const bool branch_taken_0x26b908 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x26B90Cu;
        SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
        if (branch_taken_0x26b908) {
            ctx->pc = 0x26B928u;
            goto label_26b928;
        }
    }
    ctx->pc = 0x26B910u;
    // 0x26b910: 0xdfbf0020
    ctx->pc = 0x26b910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b914: 0xdfb10010
    ctx->pc = 0x26b914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b918: 0xdfb00000
    ctx->pc = 0x26b918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b91c: 0xc7b40030
    ctx->pc = 0x26b91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26b920: 0x8099bfa
    ctx->pc = 0x26B920u;
    ctx->pc = 0x26B924u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x266FE8u;
    del_msgs_at_start_0x266fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x26B928u;
label_26b928:
    // 0x26b928: 0xc62c38f8
    ctx->pc = 0x26b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 14584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26b92c: 0x3c014180
    ctx->pc = 0x26b92cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x26b930: 0x44810000
    ctx->pc = 0x26b930u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26b934: 0x46006002
    ctx->pc = 0x26b934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26b938: 0x46000064
    ctx->pc = 0x26b938u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x26b93c: 0x44020800
    ctx->pc = 0x26b93cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x26b940: 0x24050030
    ctx->pc = 0x26b940u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x26b944: 0x3c100034
    ctx->pc = 0x26b944u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x26b948: 0x8e08e7c8
    ctx->pc = 0x26b948u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 4294961096)));
    // 0x26b94c: 0x2404ff00
    ctx->pc = 0x26b94cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x26b950: 0xa22823
    ctx->pc = 0x26b950u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26b954: 0x24060006
    ctx->pc = 0x26b954u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x26b958: 0x3c0700ff
    ctx->pc = 0x26b958u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x26b95c: 0x34e7ffff
    ctx->pc = 0x26b95cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x26b960: 0xc080510
    ctx->pc = 0x26B960u;
    SET_GPR_U32(ctx, 31, 0x26B968u);
    ctx->pc = 0x26B964u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 20));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B968u; }
    }
    if (ctx->pc != 0x26B968u) { return; }
    ctx->pc = 0x26B968u;
    // 0x26b968: 0x8e02e7c8
    ctx->pc = 0x26b968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294961096)));
    // 0x26b96c: 0x8c420000
    ctx->pc = 0x26b96cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b970: 0x30420001
    ctx->pc = 0x26b970u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x26b974: 0x10400018
    ctx->pc = 0x26B974u;
    {
        const bool branch_taken_0x26b974 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26B978u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4204));
        if (branch_taken_0x26b974) {
            ctx->pc = 0x26B9D8u;
            goto label_26b9d8;
        }
    }
    ctx->pc = 0x26B97Cu;
    // 0x26b97c: 0x2404ff00
    ctx->pc = 0x26b97cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x26b980: 0x2406ffff
    ctx->pc = 0x26b980u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b984: 0x3c070016
    ctx->pc = 0x26b984u;
    SET_GPR_U32(ctx, 7, ((uint32_t)22 << 16));
    // 0x26b988: 0x34e70c03
    ctx->pc = 0x26b988u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3075));
    // 0x26b98c: 0x240800af
    ctx->pc = 0x26b98cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 175));
    // 0x26b990: 0xc0807a8
    ctx->pc = 0x26B990u;
    SET_GPR_U32(ctx, 31, 0x26B998u);
    ctx->pc = 0x26B994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B998u; }
    }
    if (ctx->pc != 0x26B998u) { return; }
    ctx->pc = 0x26B998u;
    // 0x26b998: 0xc62138f8
    ctx->pc = 0x26b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 14584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b99c: 0x4601a032
    ctx->pc = 0x26b99cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b9a0: 0x0
    ctx->pc = 0x26b9a0u;
    // NOP
    // 0x26b9a4: 0x45010049
    ctx->pc = 0x26B9A4u;
    {
        const bool branch_taken_0x26b9a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B9A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x26b9a4) {
            ctx->pc = 0x26BACCu;
            goto label_26bacc;
        }
    }
    ctx->pc = 0x26B9ACu;
    // 0x26b9ac: 0x3c014000
    ctx->pc = 0x26b9acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x26b9b0: 0x44810000
    ctx->pc = 0x26b9b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26b9b4: 0x46000832
    ctx->pc = 0x26b9b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b9b8: 0x0
    ctx->pc = 0x26b9b8u;
    // NOP
    // 0x26b9bc: 0x45000044
    ctx->pc = 0x26B9BCu;
    {
        const bool branch_taken_0x26b9bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B9C0u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26b9bc) {
            ctx->pc = 0x26BAD0u;
            goto label_26bad0;
        }
    }
    ctx->pc = 0x26B9C4u;
    // 0x26b9c4: 0xdfbf0020
    ctx->pc = 0x26b9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b9c8: 0xdfb00000
    ctx->pc = 0x26b9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b9cc: 0xc7b40030
    ctx->pc = 0x26b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26b9d0: 0x80981c8
    ctx->pc = 0x26B9D0u;
    ctx->pc = 0x26B9D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x260720u;
    AudioStunPlayers_0x260720(rdram, ctx, runtime); return;
    ctx->pc = 0x26B9D8u;
label_26b9d8:
    // 0x26b9d8: 0x3c020034
    ctx->pc = 0x26b9d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b9dc: 0x8c42e7c8
    ctx->pc = 0x26b9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x26b9e0: 0x8c420000
    ctx->pc = 0x26b9e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b9e4: 0x30420004
    ctx->pc = 0x26b9e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x26b9e8: 0x10400018
    ctx->pc = 0x26B9E8u;
    {
        const bool branch_taken_0x26b9e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26B9ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x26b9e8) {
            ctx->pc = 0x26BA4Cu;
            goto label_26ba4c;
        }
    }
    ctx->pc = 0x26B9F0u;
    // 0x26b9f0: 0x2406ffff
    ctx->pc = 0x26b9f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b9f4: 0x3c070016
    ctx->pc = 0x26b9f4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)22 << 16));
    // 0x26b9f8: 0x34e70c03
    ctx->pc = 0x26b9f8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3075));
    // 0x26b9fc: 0x240800b0
    ctx->pc = 0x26b9fcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 176));
    // 0x26ba00: 0xc0807a8
    ctx->pc = 0x26BA00u;
    SET_GPR_U32(ctx, 31, 0x26BA08u);
    ctx->pc = 0x26BA04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA08u; }
    }
    if (ctx->pc != 0x26BA08u) { return; }
    ctx->pc = 0x26BA08u;
    // 0x26ba08: 0x3c02003c
    ctx->pc = 0x26ba08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26ba0c: 0xc44138f8
    ctx->pc = 0x26ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ba10: 0x4601a032
    ctx->pc = 0x26ba10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ba14: 0x0
    ctx->pc = 0x26ba14u;
    // NOP
    // 0x26ba18: 0x4501002c
    ctx->pc = 0x26BA18u;
    {
        const bool branch_taken_0x26ba18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BA1Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x26ba18) {
            ctx->pc = 0x26BACCu;
            goto label_26bacc;
        }
    }
    ctx->pc = 0x26BA20u;
    // 0x26ba20: 0x3c014000
    ctx->pc = 0x26ba20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x26ba24: 0x44810000
    ctx->pc = 0x26ba24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ba28: 0x46000832
    ctx->pc = 0x26ba28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ba2c: 0x0
    ctx->pc = 0x26ba2cu;
    // NOP
    // 0x26ba30: 0x45000027
    ctx->pc = 0x26BA30u;
    {
        const bool branch_taken_0x26ba30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BA34u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26ba30) {
            ctx->pc = 0x26BAD0u;
            goto label_26bad0;
        }
    }
    ctx->pc = 0x26BA38u;
    // 0x26ba38: 0xdfbf0020
    ctx->pc = 0x26ba38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ba3c: 0xdfb00000
    ctx->pc = 0x26ba3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ba40: 0xc7b40030
    ctx->pc = 0x26ba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26ba44: 0x8097892
    ctx->pc = 0x26BA44u;
    ctx->pc = 0x26BA48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x25E248u;
    AudioGrabGold_0x25e248(rdram, ctx, runtime); return;
    ctx->pc = 0x26BA4Cu;
label_26ba4c:
    // 0x26ba4c: 0x3c02003c
    ctx->pc = 0x26ba4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26ba50: 0x8c4239c4
    ctx->pc = 0x26ba50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14788)));
    // 0x26ba54: 0x1040001c
    ctx->pc = 0x26BA54u;
    {
        const bool branch_taken_0x26ba54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BA58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26ba54) {
            ctx->pc = 0x26BAC8u;
            goto label_26bac8;
        }
    }
    ctx->pc = 0x26BA5Cu;
    // 0x26ba5c: 0x8c42e7f4
    ctx->pc = 0x26ba5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961140)));
    // 0x26ba60: 0x1440001a
    ctx->pc = 0x26BA60u;
    {
        const bool branch_taken_0x26ba60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26BA64u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x26ba60) {
            ctx->pc = 0x26BACCu;
            goto label_26bacc;
        }
    }
    ctx->pc = 0x26BA68u;
    // 0x26ba68: 0x2404ff00
    ctx->pc = 0x26ba68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x26ba6c: 0x2406ffff
    ctx->pc = 0x26ba6cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ba70: 0x3c070016
    ctx->pc = 0x26ba70u;
    SET_GPR_U32(ctx, 7, ((uint32_t)22 << 16));
    // 0x26ba74: 0x34e70c03
    ctx->pc = 0x26ba74u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3075));
    // 0x26ba78: 0x240800b1
    ctx->pc = 0x26ba78u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 177));
    // 0x26ba7c: 0xc0807a8
    ctx->pc = 0x26BA7Cu;
    SET_GPR_U32(ctx, 31, 0x26BA84u);
    ctx->pc = 0x26BA80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA84u; }
    }
    if (ctx->pc != 0x26BA84u) { return; }
    ctx->pc = 0x26BA84u;
    // 0x26ba84: 0x3c02003c
    ctx->pc = 0x26ba84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26ba88: 0xc44138f8
    ctx->pc = 0x26ba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ba8c: 0x4601a032
    ctx->pc = 0x26ba8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ba90: 0x0
    ctx->pc = 0x26ba90u;
    // NOP
    // 0x26ba94: 0x4501000d
    ctx->pc = 0x26BA94u;
    {
        const bool branch_taken_0x26ba94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BA98u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x26ba94) {
            ctx->pc = 0x26BACCu;
            goto label_26bacc;
        }
    }
    ctx->pc = 0x26BA9Cu;
    // 0x26ba9c: 0x3c014000
    ctx->pc = 0x26ba9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x26baa0: 0x44810000
    ctx->pc = 0x26baa0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26baa4: 0x46000832
    ctx->pc = 0x26baa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26baa8: 0x0
    ctx->pc = 0x26baa8u;
    // NOP
    // 0x26baac: 0x45000008
    ctx->pc = 0x26BAACu;
    {
        const bool branch_taken_0x26baac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BAB0u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26baac) {
            ctx->pc = 0x26BAD0u;
            goto label_26bad0;
        }
    }
    ctx->pc = 0x26BAB4u;
    // 0x26bab4: 0xdfbf0020
    ctx->pc = 0x26bab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bab8: 0xdfb00000
    ctx->pc = 0x26bab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26babc: 0xc7b40030
    ctx->pc = 0x26babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26bac0: 0x80981d2
    ctx->pc = 0x26BAC0u;
    ctx->pc = 0x26BAC4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x260748u;
    AudioFindExit_0x260748(rdram, ctx, runtime); return;
    ctx->pc = 0x26BAC8u;
label_26bac8:
    // 0x26bac8: 0xdfbf0020
    ctx->pc = 0x26bac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26bacc:
    // 0x26bacc: 0xdfb10010
    ctx->pc = 0x26baccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26bad0:
    // 0x26bad0: 0xdfb00000
    ctx->pc = 0x26bad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bad4: 0xc7b40030
    ctx->pc = 0x26bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26bad8: 0x3e00008
    ctx->pc = 0x26BAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BADCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B89Cu: goto label_26b89c;
            case 0x26B8B8u: goto label_26b8b8;
            case 0x26B8F8u: goto label_26b8f8;
            case 0x26B908u: goto label_26b908;
            case 0x26B928u: goto label_26b928;
            case 0x26B9D8u: goto label_26b9d8;
            case 0x26BA4Cu: goto label_26ba4c;
            case 0x26BAC8u: goto label_26bac8;
            case 0x26BACCu: goto label_26bacc;
            case 0x26BAD0u: goto label_26bad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26BAE0u;
}
