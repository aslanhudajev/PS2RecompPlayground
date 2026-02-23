#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getStartFrame__15CamPathMgrClassFi
// Address: 0x1cce70 - 0x1ccec8
void getStartFrame__15CamPathMgrClassFi_0x1cce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getStartFrame__15CamPathMgrClassFi");


    ctx->pc = 0x1cce70u;

    // 0x1cce70: 0x51040
    ctx->pc = 0x1cce70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cce74: 0x3c0101fc
    ctx->pc = 0x1cce74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1cce78: 0x410821
    ctx->pc = 0x1cce78u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1cce7c: 0x3c020030
    ctx->pc = 0x1cce7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cce80: 0x24446588
    ctx->pc = 0x1cce80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 25992));
    // 0x1cce84: 0x3c020030
    ctx->pc = 0x1cce84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cce88: 0x842605e0
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1504)));
    // 0x1cce8c: 0x518c0
    ctx->pc = 0x1cce8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cce90: 0x244266b4
    ctx->pc = 0x1cce90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26292));
    // 0x1cce94: 0x431021
    ctx->pc = 0x1cce94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cce98: 0x61900
    ctx->pc = 0x1cce98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cce9c: 0x832021
    ctx->pc = 0x1cce9cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ccea0: 0x8c430000
    ctx->pc = 0x1ccea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccea4: 0x8c630000
    ctx->pc = 0x1ccea4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccea8: 0x8c820000
    ctx->pc = 0x1ccea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cceac: 0x31880
    ctx->pc = 0x1cceacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cceb0: 0x431021
    ctx->pc = 0x1cceb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cceb4: 0xc4400004
    ctx->pc = 0x1cceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cceb8: 0x46000024
    ctx->pc = 0x1cceb8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ccebc: 0x44020000
    ctx->pc = 0x1ccebcu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ccec0: 0x3e00008
    ctx->pc = 0x1CCEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CCEC8u;
}
