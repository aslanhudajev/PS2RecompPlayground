#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: tally_playtime
// Address: 0x227528 - 0x227614
void tally_playtime_0x227528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x227528u;

    // 0x227528: 0x80282d
    ctx->pc = 0x227528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22752c: 0x3c03003c
    ctx->pc = 0x22752cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x227530: 0x24631878
    ctx->pc = 0x227530u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6264));
    // 0x227534: 0x8ca20000
    ctx->pc = 0x227534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x227538: 0x21080
    ctx->pc = 0x227538u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22753c: 0x431021
    ctx->pc = 0x22753cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227540: 0x8c460000
    ctx->pc = 0x227540u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227544: 0x3c020031
    ctx->pc = 0x227544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x227548: 0x8c42ff9c
    ctx->pc = 0x227548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x22754c: 0x14400022
    ctx->pc = 0x22754Cu;
    {
        const bool branch_taken_0x22754c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x227550u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x22754c) {
            ctx->pc = 0x2275D8u;
            goto label_2275d8;
        }
    }
    ctx->pc = 0x227554u;
    // 0x227554: 0x24631b90
    ctx->pc = 0x227554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x227558: 0x8ca20000
    ctx->pc = 0x227558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22755c: 0x2404003c
    ctx->pc = 0x22755cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x227560: 0x441018
    ctx->pc = 0x227560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x227564: 0x621821
    ctx->pc = 0x227564u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227568: 0x8c620004
    ctx->pc = 0x227568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22756c: 0x3c030f00
    ctx->pc = 0x22756cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)3840 << 16));
    // 0x227570: 0x431024
    ctx->pc = 0x227570u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227574: 0x10400002
    ctx->pc = 0x227574u;
    {
        const bool branch_taken_0x227574 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x227578u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x227574) {
            ctx->pc = 0x227580u;
            goto label_227580;
        }
    }
    ctx->pc = 0x22757Cu;
    // 0x22757c: 0xc23018
    ctx->pc = 0x22757cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_227580:
    // 0x227580: 0x3c04003c
    ctx->pc = 0x227580u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x227584: 0x24841858
    ctx->pc = 0x227584u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6232));
    // 0x227588: 0x8ca30000
    ctx->pc = 0x227588u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22758c: 0x31880
    ctx->pc = 0x22758cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x227590: 0x641821
    ctx->pc = 0x227590u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x227594: 0x8c620000
    ctx->pc = 0x227594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227598: 0xc21021
    ctx->pc = 0x227598u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22759c: 0xac620000
    ctx->pc = 0x22759cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2275a0: 0x8ca20000
    ctx->pc = 0x2275a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2275a4: 0x21080
    ctx->pc = 0x2275a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2275a8: 0x441021
    ctx->pc = 0x2275a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2275ac: 0xc4410000
    ctx->pc = 0x2275acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2275b0: 0x46800860
    ctx->pc = 0x2275b0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2275b4: 0x8ca2000c
    ctx->pc = 0x2275b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2275b8: 0x2403001c
    ctx->pc = 0x2275b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2275bc: 0x432018
    ctx->pc = 0x2275bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2275c0: 0x851021
    ctx->pc = 0x2275c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2275c4: 0xc4400b44
    ctx->pc = 0x2275c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2275c8: 0x46000834
    ctx->pc = 0x2275c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2275cc: 0x0
    ctx->pc = 0x2275ccu;
    // NOP
    // 0x2275d0: 0x45000003
    ctx->pc = 0x2275D0u;
    {
        const bool branch_taken_0x2275d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2275D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2275d0) {
            ctx->pc = 0x2275E0u;
            goto label_2275e0;
        }
    }
    ctx->pc = 0x2275D8u;
label_2275d8:
    // 0x2275d8: 0x3e00008
    ctx->pc = 0x2275D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2275DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227580u: goto label_227580;
            case 0x2275D8u: goto label_2275d8;
            case 0x2275E0u: goto label_2275e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2275E0u;
label_2275e0:
    // 0x2275e0: 0x24421858
    ctx->pc = 0x2275e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6232));
    // 0x2275e4: 0x8ca40000
    ctx->pc = 0x2275e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2275e8: 0x42080
    ctx->pc = 0x2275e8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2275ec: 0x822021
    ctx->pc = 0x2275ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2275f0: 0x8ca2000c
    ctx->pc = 0x2275f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2275f4: 0x2403001c
    ctx->pc = 0x2275f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2275f8: 0x433018
    ctx->pc = 0x2275f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2275fc: 0xc51021
    ctx->pc = 0x2275fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x227600: 0xc4400b44
    ctx->pc = 0x227600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227604: 0x46000064
    ctx->pc = 0x227604u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x227608: 0xe4810000
    ctx->pc = 0x227608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x22760c: 0x3e00008
    ctx->pc = 0x22760Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227610u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227580u: goto label_227580;
            case 0x2275D8u: goto label_2275d8;
            case 0x2275E0u: goto label_2275e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227614u;
}
