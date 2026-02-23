#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dmgEftPlayer__14PostPlayerTaskFv
// Address: 0x213980 - 0x213a60
void dmgEftPlayer__14PostPlayerTaskFv_0x213980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dmgEftPlayer__14PostPlayerTaskFv");


    ctx->pc = 0x213980u;

    // 0x213980: 0x27bdfff0
    ctx->pc = 0x213980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213984: 0x7fbf0000
    ctx->pc = 0x213984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x213988: 0x3c010050
    ctx->pc = 0x213988u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21398c: 0x8c24dddc
    ctx->pc = 0x21398cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294958556)));
    // 0x213990: 0x24030001
    ctx->pc = 0x213990u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x213994: 0x14830005
    ctx->pc = 0x213994u;
    {
        const bool branch_taken_0x213994 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x213994) {
            ctx->pc = 0x2139ACu;
            goto label_2139ac;
        }
    }
    ctx->pc = 0x21399Cu;
    // 0x21399c: 0x3c010050
    ctx->pc = 0x21399cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2139a0: 0x24030028
    ctx->pc = 0x2139a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x2139a4: 0xac20dddc
    ctx->pc = 0x2139a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958556), GPR_U32(ctx, 0));
    // 0x2139a8: 0xaf838b6c
    ctx->pc = 0x2139a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937452), GPR_U32(ctx, 3));
label_2139ac:
    // 0x2139ac: 0x3c010050
    ctx->pc = 0x2139acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2139b0: 0x8c24e124
    ctx->pc = 0x2139b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294959396)));
    // 0x2139b4: 0x24030001
    ctx->pc = 0x2139b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2139b8: 0x14830004
    ctx->pc = 0x2139B8u;
    {
        const bool branch_taken_0x2139b8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x2139BCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x2139b8) {
            ctx->pc = 0x2139CCu;
            goto label_2139cc;
        }
    }
    ctx->pc = 0x2139C0u;
    // 0x2139c0: 0x24030028
    ctx->pc = 0x2139c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x2139c4: 0xac20e124
    ctx->pc = 0x2139c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959396), GPR_U32(ctx, 0));
    // 0x2139c8: 0xaf838b6c
    ctx->pc = 0x2139c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937452), GPR_U32(ctx, 3));
label_2139cc:
    // 0x2139cc: 0x8f838b6c
    ctx->pc = 0x2139ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937452)));
    // 0x2139d0: 0x2463ffff
    ctx->pc = 0x2139d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2139d4: 0x1c600002
    ctx->pc = 0x2139D4u;
    {
        const bool branch_taken_0x2139d4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2139D8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937452), GPR_U32(ctx, 3));
        if (branch_taken_0x2139d4) {
            ctx->pc = 0x2139E0u;
            goto label_2139e0;
        }
    }
    ctx->pc = 0x2139DCu;
    // 0x2139dc: 0xaf808b6c
    ctx->pc = 0x2139dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937452), GPR_U32(ctx, 0));
label_2139e0:
    // 0x2139e0: 0x8f848b6c
    ctx->pc = 0x2139e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937452)));
    // 0x2139e4: 0x10800019
    ctx->pc = 0x2139E4u;
    {
        const bool branch_taken_0x2139e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2139e4) {
            ctx->pc = 0x213A4Cu;
            goto label_213a4c;
        }
    }
    ctx->pc = 0x2139ECu;
    // 0x2139ec: 0x8f838cb0
    ctx->pc = 0x2139ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x2139f0: 0x30630010
    ctx->pc = 0x2139f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16));
    // 0x2139f4: 0x14600015
    ctx->pc = 0x2139F4u;
    {
        const bool branch_taken_0x2139f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2139f4) {
            ctx->pc = 0x213A4Cu;
            goto label_213a4c;
        }
    }
    ctx->pc = 0x2139FCu;
    // 0x2139fc: 0x41040
    ctx->pc = 0x2139fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x213a00: 0x441021
    ctx->pc = 0x213a00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x213a04: 0x222c0
    ctx->pc = 0x213a04u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 11));
    // 0x213a08: 0xc06c26d
    ctx->pc = 0x213A08u;
    SET_GPR_U32(ctx, 31, 0x213A10u);
    ctx->pc = 0x213A0Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937464), GPR_U32(ctx, 0));
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213A10u; }
        else if (ctx->pc != 0x213A10u) { ctx->pc = 0x213A10u; }
    }
    if (ctx->pc != 0x213A10u) { return; }
    ctx->pc = 0x213A10u;
    // 0x213a10: 0xc7828b6c
    ctx->pc = 0x213a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213a14: 0x3c034240
    ctx->pc = 0x213a14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16960 << 16));
    // 0x213a18: 0x44831800
    ctx->pc = 0x213a18u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
    // 0x213a1c: 0x3c033ccc
    ctx->pc = 0x213a1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15564 << 16));
    // 0x213a20: 0x3463cccd
    ctx->pc = 0x213a20u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x213a24: 0x468010a0
    ctx->pc = 0x213a24u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x213a28: 0x46021882
    ctx->pc = 0x213a28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x213a2c: 0x44830800
    ctx->pc = 0x213a2cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x213a30: 0x0
    ctx->pc = 0x213a30u;
    // NOP
    // 0x213a34: 0x46020842
    ctx->pc = 0x213a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x213a38: 0x46000802
    ctx->pc = 0x213a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213a3c: 0x46000024
    ctx->pc = 0x213a3cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x213a40: 0x44030000
    ctx->pc = 0x213a40u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x213a44: 0x10000003
    ctx->pc = 0x213A44u;
    {
        const bool branch_taken_0x213a44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213A48u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937468), GPR_U32(ctx, 3));
        if (branch_taken_0x213a44) {
            ctx->pc = 0x213A54u;
            goto label_213a54;
        }
    }
    ctx->pc = 0x213A4Cu;
label_213a4c:
    // 0x213a4c: 0xaf808b7c
    ctx->pc = 0x213a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937468), GPR_U32(ctx, 0));
    // 0x213a50: 0xaf808b78
    ctx->pc = 0x213a50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937464), GPR_U32(ctx, 0));
label_213a54:
    // 0x213a54: 0x7bbf0000
    ctx->pc = 0x213a54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213a58: 0x3e00008
    ctx->pc = 0x213A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213A5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2139ACu: goto label_2139ac;
            case 0x2139CCu: goto label_2139cc;
            case 0x2139E0u: goto label_2139e0;
            case 0x213A4Cu: goto label_213a4c;
            case 0x213A54u: goto label_213a54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213A60u;
}
