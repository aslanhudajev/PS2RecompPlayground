#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getInput__10PlayerTaskFv
// Address: 0x20fee0 - 0x20ff40
void getInput__10PlayerTaskFv_0x20fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getInput__10PlayerTaskFv");


    ctx->pc = 0x20fee0u;

    // 0x20fee0: 0x8c871cb8
    ctx->pc = 0x20fee0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x20fee4: 0x3c030050
    ctx->pc = 0x20fee4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x20fee8: 0x2465db70
    ctx->pc = 0x20fee8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294957936));
    // 0x20feec: 0x8c831cbc
    ctx->pc = 0x20feecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20fef0: 0x73080
    ctx->pc = 0x20fef0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20fef4: 0xc73821
    ctx->pc = 0x20fef4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20fef8: 0x73080
    ctx->pc = 0x20fef8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20fefc: 0xe63021
    ctx->pc = 0x20fefcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x20ff00: 0xac600024
    ctx->pc = 0x20ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x20ff04: 0x61880
    ctx->pc = 0x20ff04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x20ff08: 0xa33021
    ctx->pc = 0x20ff08u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20ff0c: 0x84c50008
    ctx->pc = 0x20ff0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20ff10: 0x8c831cbc
    ctx->pc = 0x20ff10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20ff14: 0x44850000
    ctx->pc = 0x20ff14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x20ff18: 0x0
    ctx->pc = 0x20ff18u;
    // NOP
    // 0x20ff1c: 0x46800020
    ctx->pc = 0x20ff1cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20ff20: 0xe460001c
    ctx->pc = 0x20ff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x20ff24: 0x84c5000a
    ctx->pc = 0x20ff24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x20ff28: 0x8c831cbc
    ctx->pc = 0x20ff28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20ff2c: 0x44850000
    ctx->pc = 0x20ff2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x20ff30: 0x0
    ctx->pc = 0x20ff30u;
    // NOP
    // 0x20ff34: 0x46800020
    ctx->pc = 0x20ff34u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20ff38: 0x3e00008
    ctx->pc = 0x20FF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FF3Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FF40u;
}
