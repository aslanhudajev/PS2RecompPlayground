#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: start__11GunMgrClassFv
// Address: 0x1edc10 - 0x1edc70
void start__11GunMgrClassFv_0x1edc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("start__11GunMgrClassFv");


    ctx->pc = 0x1edc10u;

    // 0x1edc10: 0xa4800006
    ctx->pc = 0x1edc10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc14: 0xa4800000
    ctx->pc = 0x1edc14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc18: 0xa4800002
    ctx->pc = 0x1edc18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc1c: 0xa4800008
    ctx->pc = 0x1edc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc20: 0xa480000a
    ctx->pc = 0x1edc20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc24: 0xa480000c
    ctx->pc = 0x1edc24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc28: 0xa4800004
    ctx->pc = 0x1edc28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc2c: 0xa080000e
    ctx->pc = 0x1edc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc30: 0xa080000f
    ctx->pc = 0x1edc30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc34: 0xa0800010
    ctx->pc = 0x1edc34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc38: 0x24030001
    ctx->pc = 0x1edc38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc3c: 0xa483006a
    ctx->pc = 0x1edc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 3));
    // 0x1edc40: 0xa4800064
    ctx->pc = 0x1edc40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc44: 0xa4800066
    ctx->pc = 0x1edc44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc48: 0xa480006c
    ctx->pc = 0x1edc48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc4c: 0xa480006e
    ctx->pc = 0x1edc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc50: 0xa4800070
    ctx->pc = 0x1edc50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc54: 0xa4800068
    ctx->pc = 0x1edc54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc58: 0xa0800072
    ctx->pc = 0x1edc58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc5c: 0xa0800073
    ctx->pc = 0x1edc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 115), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc60: 0xa0800074
    ctx->pc = 0x1edc60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc64: 0xa08000cc
    ctx->pc = 0x1edc64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc68: 0x3e00008
    ctx->pc = 0x1EDC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDC6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EDC70u;
}
