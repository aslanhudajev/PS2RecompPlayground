#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_enemy_health
// Address: 0x238068 - 0x2380c4
void get_enemy_health_0x238068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x238068u;

    // 0x238068: 0x3c020033
    ctx->pc = 0x238068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23806c: 0x2442d8e0
    ctx->pc = 0x23806cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957280));
    // 0x238070: 0x41880
    ctx->pc = 0x238070u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x238074: 0x621821
    ctx->pc = 0x238074u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238078: 0x2402001e
    ctx->pc = 0x238078u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x23807c: 0x10820005
    ctx->pc = 0x23807Cu;
    {
        const bool branch_taken_0x23807c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x238080u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x23807c) {
            ctx->pc = 0x238094u;
            goto label_238094;
        }
    }
    ctx->pc = 0x238084u;
    // 0x238084: 0x3c020034
    ctx->pc = 0x238084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x238088: 0x8c42e7c8
    ctx->pc = 0x238088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x23808c: 0xc44000ac
    ctx->pc = 0x23808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238090: 0x46000842
    ctx->pc = 0x238090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_238094:
    // 0x238094: 0x2c82001c
    ctx->pc = 0x238094u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
    // 0x238098: 0x10400008
    ctx->pc = 0x238098u;
    {
        const bool branch_taken_0x238098 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x238098) {
            ctx->pc = 0x2380BCu;
            goto label_2380bc;
        }
    }
    ctx->pc = 0x2380A0u;
    // 0x2380a0: 0x3c013eaa
    ctx->pc = 0x2380a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16042 << 16));
    // 0x2380a4: 0x34217efa
    ctx->pc = 0x2380a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32506));
    // 0x2380a8: 0x44810000
    ctx->pc = 0x2380a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2380ac: 0x46000842
    ctx->pc = 0x2380acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2380b0: 0x44850000
    ctx->pc = 0x2380b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x2380b4: 0x46800020
    ctx->pc = 0x2380b4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2380b8: 0x46000842
    ctx->pc = 0x2380b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2380bc:
    // 0x2380bc: 0x3e00008
    ctx->pc = 0x2380BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2380C0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238094u: goto label_238094;
            case 0x2380BCu: goto label_2380bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2380C4u;
}
