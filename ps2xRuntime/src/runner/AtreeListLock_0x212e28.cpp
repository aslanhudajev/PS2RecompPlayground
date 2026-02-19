#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeListLock
// Address: 0x212e28 - 0x212e78
void AtreeListLock_0x212e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212e28u;

    // 0x212e28: 0x3c020032
    ctx->pc = 0x212e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212e2c: 0x2442f4d8
    ctx->pc = 0x212e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964440));
    // 0x212e30: 0x42080
    ctx->pc = 0x212e30u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x212e34: 0x821021
    ctx->pc = 0x212e34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x212e38: 0x3c030032
    ctx->pc = 0x212e38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x212e3c: 0x8c63f4d0
    ctx->pc = 0x212e3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294964432)));
    // 0x212e40: 0xac430000
    ctx->pc = 0x212e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x212e44: 0x3c020032
    ctx->pc = 0x212e44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212e48: 0x2442f4f8
    ctx->pc = 0x212e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964472));
    // 0x212e4c: 0x821021
    ctx->pc = 0x212e4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x212e50: 0x3c03003c
    ctx->pc = 0x212e50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x212e54: 0x8c63cb6c
    ctx->pc = 0x212e54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294953836)));
    // 0x212e58: 0xac430000
    ctx->pc = 0x212e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x212e5c: 0x3c020032
    ctx->pc = 0x212e5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212e60: 0x2442f518
    ctx->pc = 0x212e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964504));
    // 0x212e64: 0x822021
    ctx->pc = 0x212e64u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x212e68: 0x3c02003c
    ctx->pc = 0x212e68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x212e6c: 0x8c42cb70
    ctx->pc = 0x212e6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953840)));
    // 0x212e70: 0x3e00008
    ctx->pc = 0x212E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212E74u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212E78u;
}
