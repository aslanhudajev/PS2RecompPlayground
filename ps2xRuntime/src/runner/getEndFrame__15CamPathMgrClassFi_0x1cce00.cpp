#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getEndFrame__15CamPathMgrClassFi
// Address: 0x1cce00 - 0x1cce70
void getEndFrame__15CamPathMgrClassFi_0x1cce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getEndFrame__15CamPathMgrClassFi");


    ctx->pc = 0x1cce00u;

    // 0x1cce00: 0x51040
    ctx->pc = 0x1cce00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cce04: 0x3c0101fc
    ctx->pc = 0x1cce04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1cce08: 0x410821
    ctx->pc = 0x1cce08u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1cce0c: 0x3c020030
    ctx->pc = 0x1cce0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cce10: 0x24446588
    ctx->pc = 0x1cce10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 25992));
    // 0x1cce14: 0x3c020030
    ctx->pc = 0x1cce14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cce18: 0x842605e0
    ctx->pc = 0x1cce18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1504)));
    // 0x1cce1c: 0x518c0
    ctx->pc = 0x1cce1cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cce20: 0x244266b4
    ctx->pc = 0x1cce20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26292));
    // 0x1cce24: 0x431021
    ctx->pc = 0x1cce24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cce28: 0x61900
    ctx->pc = 0x1cce28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cce2c: 0x831821
    ctx->pc = 0x1cce2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cce30: 0x8c440000
    ctx->pc = 0x1cce30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cce34: 0x8c630000
    ctx->pc = 0x1cce34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cce38: 0x3c023f00
    ctx->pc = 0x1cce38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1cce3c: 0x44820000
    ctx->pc = 0x1cce3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1cce40: 0x8c820000
    ctx->pc = 0x1cce40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cce44: 0x21080
    ctx->pc = 0x1cce44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cce48: 0x621821
    ctx->pc = 0x1cce48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cce4c: 0x94620000
    ctx->pc = 0x1cce4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cce50: 0x21100
    ctx->pc = 0x1cce50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cce54: 0x431021
    ctx->pc = 0x1cce54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cce58: 0xc441fff4
    ctx->pc = 0x1cce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cce5c: 0x46010000
    ctx->pc = 0x1cce5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cce60: 0x46000024
    ctx->pc = 0x1cce60u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1cce64: 0x44020000
    ctx->pc = 0x1cce64u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1cce68: 0x3e00008
    ctx->pc = 0x1CCE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CCE70u;
}
