#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBFontStringWidth
// Address: 0x2c58d8 - 0x2c5ae4
void MBFontStringWidth_0x2c58d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c58d8u;

    // 0x2c58d8: 0x27bdff70
    ctx->pc = 0x2c58d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c58dc: 0xffbf0080
    ctx->pc = 0x2c58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c58e0: 0xffb60070
    ctx->pc = 0x2c58e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2c58e4: 0xffb50060
    ctx->pc = 0x2c58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2c58e8: 0xffb40050
    ctx->pc = 0x2c58e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2c58ec: 0xffb30040
    ctx->pc = 0x2c58ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c58f0: 0xffb20030
    ctx->pc = 0x2c58f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c58f4: 0xffb10020
    ctx->pc = 0x2c58f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c58f8: 0xffb00010
    ctx->pc = 0x2c58f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c58fc: 0xa02d
    ctx->pc = 0x2c58fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5900: 0x3c03003d
    ctx->pc = 0x2c5900u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c5904: 0x8c62b8a0
    ctx->pc = 0x2c5904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294949024)));
    // 0x2c5908: 0x4410002
    ctx->pc = 0x2C5908u;
    {
        const bool branch_taken_0x2c5908 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C590Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c5908) {
            ctx->pc = 0x2C5914u;
            goto label_2c5914;
        }
    }
    ctx->pc = 0x2C5910u;
    // 0x2c5910: 0xac60b8a0
    ctx->pc = 0x2c5910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949024), GPR_U32(ctx, 0));
label_2c5914:
    // 0x2c5914: 0x3c03003d
    ctx->pc = 0x2c5914u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c5918: 0x2463b810
    ctx->pc = 0x2c5918u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294948880));
    // 0x2c591c: 0x3c02003d
    ctx->pc = 0x2c591cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c5920: 0x8c42b8a0
    ctx->pc = 0x2c5920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949024)));
    // 0x2c5924: 0x21080
    ctx->pc = 0x2c5924u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5928: 0x431021
    ctx->pc = 0x2c5928u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c592c: 0x8c520000
    ctx->pc = 0x2c592cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5930: 0x92220000
    ctx->pc = 0x2c5930u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5934: 0x10400060
    ctx->pc = 0x2C5934u;
    {
        const bool branch_taken_0x2c5934 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5938u;
        SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
        if (branch_taken_0x2c5934) {
            ctx->pc = 0x2C5AB8u;
            goto label_2c5ab8;
        }
    }
    ctx->pc = 0x2C593Cu;
    // 0x2c593c: 0x2456b810
    ctx->pc = 0x2c593cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294948880));
    // 0x2c5940: 0x3c13003d
    ctx->pc = 0x2c5940u;
    SET_GPR_U32(ctx, 19, ((uint32_t)61 << 16));
    // 0x2c5944: 0x3c02003d
    ctx->pc = 0x2c5944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c5948: 0x2455b8a8
    ctx->pc = 0x2c5948u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294949032));
    // 0x2c594c: 0x92300000
    ctx->pc = 0x2c594cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2c5950:
    // 0x2c5950: 0x2402002a
    ctx->pc = 0x2c5950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
    // 0x2c5954: 0x56020012
    ctx->pc = 0x2C5954u;
    {
        const bool branch_taken_0x2c5954 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x2c5954) {
            ctx->pc = 0x2C5958u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->pc = 0x2C59A0u;
            goto label_2c59a0;
        }
    }
    ctx->pc = 0x2C595Cu;
    // 0x2c595c: 0x92220001
    ctx->pc = 0x2c595cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2c5960: 0x2442ffbf
    ctx->pc = 0x2c5960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967231));
    // 0x2c5964: 0x2c42001a
    ctx->pc = 0x2c5964u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x2c5968: 0x1040004d
    ctx->pc = 0x2C5968u;
    {
        const bool branch_taken_0x2c5968 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C596Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294949024)));
        if (branch_taken_0x2c5968) {
            ctx->pc = 0x2C5AA0u;
            goto label_2c5aa0;
        }
    }
    ctx->pc = 0x2C5970u;
    // 0x2c5970: 0x21080
    ctx->pc = 0x2c5970u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5974: 0x561021
    ctx->pc = 0x2c5974u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2c5978: 0x8c420000
    ctx->pc = 0x2c5978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c597c: 0xc4410000
    ctx->pc = 0x2c597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5980: 0x46800860
    ctx->pc = 0x2c5980u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2c5984: 0x3c020038
    ctx->pc = 0x2c5984u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c5988: 0xc440b164
    ctx->pc = 0x2c5988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c598c: 0x46000842
    ctx->pc = 0x2c598cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5990: 0x46000824
    ctx->pc = 0x2c5990u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x2c5994: 0xe7a00000
    ctx->pc = 0x2c5994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c5998: 0x10000041
    ctx->pc = 0x2C5998u;
    {
        const bool branch_taken_0x2c5998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C599Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2c5998) {
            ctx->pc = 0x2C5AA0u;
            goto label_2c5aa0;
        }
    }
    ctx->pc = 0x2C59A0u;
label_2c59a0:
    // 0x2c59a0: 0x30420001
    ctx->pc = 0x2c59a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2c59a4: 0x10400021
    ctx->pc = 0x2C59A4u;
    {
        const bool branch_taken_0x2c59a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C59A8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 128));
        if (branch_taken_0x2c59a4) {
            ctx->pc = 0x2C5A2Cu;
            goto label_2c5a2c;
        }
    }
    ctx->pc = 0x2C59ACu;
    // 0x2c59ac: 0x14400004
    ctx->pc = 0x2C59ACu;
    {
        const bool branch_taken_0x2c59ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C59B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
        if (branch_taken_0x2c59ac) {
            ctx->pc = 0x2C59C0u;
            goto label_2c59c0;
        }
    }
    ctx->pc = 0x2C59B4u;
    // 0x2c59b4: 0x26310001
    ctx->pc = 0x2c59b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c59b8: 0x1000001c
    ctx->pc = 0x2C59B8u;
    {
        const bool branch_taken_0x2c59b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C59BCu;
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x2c59b8) {
            ctx->pc = 0x2C5A2Cu;
            goto label_2c5a2c;
        }
    }
    ctx->pc = 0x2C59C0u;
label_2c59c0:
    // 0x2c59c0: 0x16020011
    ctx->pc = 0x2C59C0u;
    {
        const bool branch_taken_0x2c59c0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C59C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967248));
        if (branch_taken_0x2c59c0) {
            ctx->pc = 0x2C5A08u;
            goto label_2c5a08;
        }
    }
    ctx->pc = 0x2C59C8u;
    // 0x2c59c8: 0x92230001
    ctx->pc = 0x2c59c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2c59cc: 0x24020066
    ctx->pc = 0x2c59ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
    // 0x2c59d0: 0x1062000a
    ctx->pc = 0x2C59D0u;
    {
        const bool branch_taken_0x2c59d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C59D4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 103));
        if (branch_taken_0x2c59d0) {
            ctx->pc = 0x2C59FCu;
            goto label_2c59fc;
        }
    }
    ctx->pc = 0x2C59D8u;
    // 0x2c59d8: 0x10400005
    ctx->pc = 0x2C59D8u;
    {
        const bool branch_taken_0x2c59d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C59DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x2c59d8) {
            ctx->pc = 0x2C59F0u;
            goto label_2c59f0;
        }
    }
    ctx->pc = 0x2C59E0u;
    // 0x2c59e0: 0x10620006
    ctx->pc = 0x2C59E0u;
    {
        const bool branch_taken_0x2c59e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C59E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x2c59e0) {
            ctx->pc = 0x2C59FCu;
            goto label_2c59fc;
        }
    }
    ctx->pc = 0x2C59E8u;
    // 0x2c59e8: 0x10000012
    ctx->pc = 0x2C59E8u;
    {
        const bool branch_taken_0x2c59e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C59ECu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2c59e8) {
            ctx->pc = 0x2C5A34u;
            goto label_2c5a34;
        }
    }
    ctx->pc = 0x2C59F0u;
label_2c59f0:
    // 0x2c59f0: 0x24020073
    ctx->pc = 0x2c59f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 115));
    // 0x2c59f4: 0x1462000e
    ctx->pc = 0x2C59F4u;
    {
        const bool branch_taken_0x2c59f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C59F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x2c59f4) {
            ctx->pc = 0x2C5A30u;
            goto label_2c5a30;
        }
    }
    ctx->pc = 0x2C59FCu;
label_2c59fc:
    // 0x2c59fc: 0x26310001
    ctx->pc = 0x2c59fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c5a00: 0x1000000a
    ctx->pc = 0x2C5A00u;
    {
        const bool branch_taken_0x2c5a00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5A04u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x2c5a00) {
            ctx->pc = 0x2C5A2Cu;
            goto label_2c5a2c;
        }
    }
    ctx->pc = 0x2C5A08u;
label_2c5a08:
    // 0x2c5a08: 0x2c42000a
    ctx->pc = 0x2c5a08u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
    // 0x2c5a0c: 0x14400008
    ctx->pc = 0x2C5A0Cu;
    {
        const bool branch_taken_0x2c5a0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C5A10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x2c5a0c) {
            ctx->pc = 0x2C5A30u;
            goto label_2c5a30;
        }
    }
    ctx->pc = 0x2C5A14u;
    // 0x2c5a14: 0x2402003a
    ctx->pc = 0x2c5a14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
    // 0x2c5a18: 0x12020005
    ctx->pc = 0x2C5A18u;
    {
        const bool branch_taken_0x2c5a18 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C5A1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
        if (branch_taken_0x2c5a18) {
            ctx->pc = 0x2C5A30u;
            goto label_2c5a30;
        }
    }
    ctx->pc = 0x2C5A20u;
    // 0x2c5a20: 0x16020020
    ctx->pc = 0x2C5A20u;
    {
        const bool branch_taken_0x2c5a20 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C5A24u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2c5a20) {
            ctx->pc = 0x2C5AA4u;
            goto label_2c5aa4;
        }
    }
    ctx->pc = 0x2C5A28u;
    // 0x2c5a28: 0x2410003b
    ctx->pc = 0x2c5a28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 59));
label_2c5a2c:
    // 0x2c5a2c: 0x24040024
    ctx->pc = 0x2c5a2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
label_2c5a30:
    // 0x2c5a30: 0x2042018
    ctx->pc = 0x2c5a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2c5a34:
    // 0x2c5a34: 0x8e420004
    ctx->pc = 0x2c5a34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c5a38: 0x822021
    ctx->pc = 0x2c5a38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5a3c: 0x3a0282d
    ctx->pc = 0x2c5a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a40: 0xc0b0d52
    ctx->pc = 0x2C5A40u;
    SET_GPR_U32(ctx, 31, 0x2C5A48u);
    ctx->pc = 0x2C5A44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3548u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetSize_0x2c3548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A48u; }
    }
    if (ctx->pc != 0x2C5A48u) { return; }
    ctx->pc = 0x2C5A48u;
    // 0x2c5a48: 0xc7a10000
    ctx->pc = 0x2c5a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5a4c: 0x46800860
    ctx->pc = 0x2c5a4cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2c5a50: 0x3c030038
    ctx->pc = 0x2c5a50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c5a54: 0xc460b164
    ctx->pc = 0x2c5a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5a58: 0x46000842
    ctx->pc = 0x2c5a58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5a5c: 0x46000824
    ctx->pc = 0x2c5a5cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x2c5a60: 0xe7a00000
    ctx->pc = 0x2c5a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c5a64: 0x8fa20000
    ctx->pc = 0x2c5a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5a68: 0x5440000f
    ctx->pc = 0x2C5A68u;
    {
        const bool branch_taken_0x2c5a68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c5a68) {
            ctx->pc = 0x2C5A6Cu;
            SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
            ctx->pc = 0x2C5AA8u;
            goto label_2c5aa8;
        }
    }
    ctx->pc = 0x2C5A70u;
    // 0x2c5a70: 0x24020020
    ctx->pc = 0x2c5a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c5a74: 0x1602000b
    ctx->pc = 0x2C5A74u;
    {
        const bool branch_taken_0x2c5a74 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C5A78u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2c5a74) {
            ctx->pc = 0x2C5AA4u;
            goto label_2c5aa4;
        }
    }
    ctx->pc = 0x2C5A7Cu;
    // 0x2c5a7c: 0x8e62b8a0
    ctx->pc = 0x2c5a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294949024)));
    // 0x2c5a80: 0x21080
    ctx->pc = 0x2c5a80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5a84: 0x551021
    ctx->pc = 0x2c5a84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2c5a88: 0xc4400000
    ctx->pc = 0x2c5a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5a8c: 0x46800020
    ctx->pc = 0x2c5a8cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c5a90: 0xc461b164
    ctx->pc = 0x2c5a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5a94: 0x46010002
    ctx->pc = 0x2c5a94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5a98: 0x46000064
    ctx->pc = 0x2c5a98u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c5a9c: 0xe7a10000
    ctx->pc = 0x2c5a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2c5aa0:
    // 0x2c5aa0: 0x8fa20000
    ctx->pc = 0x2c5aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5aa4:
    // 0x2c5aa4: 0x282a021
    ctx->pc = 0x2c5aa4u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2c5aa8:
    // 0x2c5aa8: 0x26310001
    ctx->pc = 0x2c5aa8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c5aac: 0x92220000
    ctx->pc = 0x2c5aacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5ab0: 0x5440ffa7
    ctx->pc = 0x2C5AB0u;
    {
        const bool branch_taken_0x2c5ab0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c5ab0) {
            ctx->pc = 0x2C5AB4u;
            SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2C5950u;
            goto label_2c5950;
        }
    }
    ctx->pc = 0x2C5AB8u;
label_2c5ab8:
    // 0x2c5ab8: 0x280102d
    ctx->pc = 0x2c5ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5abc: 0xdfbf0080
    ctx->pc = 0x2c5abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c5ac0: 0xdfb60070
    ctx->pc = 0x2c5ac0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c5ac4: 0xdfb50060
    ctx->pc = 0x2c5ac4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5ac8: 0xdfb40050
    ctx->pc = 0x2c5ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5acc: 0xdfb30040
    ctx->pc = 0x2c5accu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5ad0: 0xdfb20030
    ctx->pc = 0x2c5ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5ad4: 0xdfb10020
    ctx->pc = 0x2c5ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5ad8: 0xdfb00010
    ctx->pc = 0x2c5ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5adc: 0x3e00008
    ctx->pc = 0x2C5ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5AE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5914u: goto label_2c5914;
            case 0x2C5950u: goto label_2c5950;
            case 0x2C59A0u: goto label_2c59a0;
            case 0x2C59C0u: goto label_2c59c0;
            case 0x2C59F0u: goto label_2c59f0;
            case 0x2C59FCu: goto label_2c59fc;
            case 0x2C5A08u: goto label_2c5a08;
            case 0x2C5A2Cu: goto label_2c5a2c;
            case 0x2C5A30u: goto label_2c5a30;
            case 0x2C5A34u: goto label_2c5a34;
            case 0x2C5AA0u: goto label_2c5aa0;
            case 0x2C5AA4u: goto label_2c5aa4;
            case 0x2C5AA8u: goto label_2c5aa8;
            case 0x2C5AB8u: goto label_2c5ab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C5AE4u;
}
