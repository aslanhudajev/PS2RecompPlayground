#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audnum_to_index
// Address: 0x21ff28 - 0x21ff54
void audnum_to_index_0x21ff28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ff28u;

    // 0x21ff28: 0x41c03
    ctx->pc = 0x21ff28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x21ff2c: 0x3c020032
    ctx->pc = 0x21ff2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21ff30: 0x8c42fd6c
    ctx->pc = 0x21ff30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x21ff34: 0x8c450010
    ctx->pc = 0x21ff34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21ff38: 0x2402002c
    ctx->pc = 0x21ff38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x21ff3c: 0x621818
    ctx->pc = 0x21ff3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21ff40: 0x651821
    ctx->pc = 0x21ff40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21ff44: 0x84620026
    ctx->pc = 0x21ff44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x21ff48: 0x30840fff
    ctx->pc = 0x21ff48u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 4095));
    // 0x21ff4c: 0x3e00008
    ctx->pc = 0x21FF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FF50u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FF54u;
}
