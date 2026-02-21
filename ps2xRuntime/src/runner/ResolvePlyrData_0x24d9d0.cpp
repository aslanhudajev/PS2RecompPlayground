#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResolvePlyrData
// Address: 0x24d9d0 - 0x24da44
void ResolvePlyrData_0x24d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24d9d0u;

    // 0x24d9d0: 0x27bdffe0
    ctx->pc = 0x24d9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d9d4: 0xffbf0010
    ctx->pc = 0x24d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24d9d8: 0xffb00000
    ctx->pc = 0x24d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d9dc: 0x24062b00
    ctx->pc = 0x24d9dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x24d9e0: 0x863018
    ctx->pc = 0x24d9e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24d9e4: 0x3c050032
    ctx->pc = 0x24d9e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x24d9e8: 0x24a51bc0
    ctx->pc = 0x24d9e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7104));
    // 0x24d9ec: 0x3c020033
    ctx->pc = 0x24d9ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24d9f0: 0x24424910
    ctx->pc = 0x24d9f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18704));
    // 0x24d9f4: 0x48080
    ctx->pc = 0x24d9f4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 2));
    // 0x24d9f8: 0x2028021
    ctx->pc = 0x24d9f8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24d9fc: 0x8e070000
    ctx->pc = 0x24d9fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24da00: 0x3c030033
    ctx->pc = 0x24da00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x24da04: 0x2463c7d8
    ctx->pc = 0x24da04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952920));
    // 0x24da08: 0x2402004c
    ctx->pc = 0x24da08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x24da0c: 0x822018
    ctx->pc = 0x24da0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24da10: 0x641821
    ctx->pc = 0x24da10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24da14: 0xc52021
    ctx->pc = 0x24da14u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x24da18: 0x8ce50004
    ctx->pc = 0x24da18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x24da1c: 0x84e60000
    ctx->pc = 0x24da1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24da20: 0xc09378c
    ctx->pc = 0x24DA20u;
    SET_GPR_U32(ctx, 31, 0x24DA28u);
    ctx->pc = 0x24DA24u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->pc = 0x24DE30u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSfxInitData_0x24de30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DA28u; }
    }
    if (ctx->pc != 0x24DA28u) { return; }
    ctx->pc = 0x24DA28u;
    // 0x24da28: 0x8e030000
    ctx->pc = 0x24da28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24da2c: 0x24020001
    ctx->pc = 0x24da2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x24da30: 0xac620024
    ctx->pc = 0x24da30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x24da34: 0xdfbf0010
    ctx->pc = 0x24da34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24da38: 0xdfb00000
    ctx->pc = 0x24da38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24da3c: 0x3e00008
    ctx->pc = 0x24DA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DA40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24DA44u;
}
