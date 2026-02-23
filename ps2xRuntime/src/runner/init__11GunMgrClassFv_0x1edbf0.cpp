#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__11GunMgrClassFv
// Address: 0x1edbf0 - 0x1edc0c
void init__11GunMgrClassFv_0x1edbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__11GunMgrClassFv");


    ctx->pc = 0x1edbf0u;

    // 0x1edbf0: 0xac8000c8
    ctx->pc = 0x1edbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x1edbf4: 0xa7808b4c
    ctx->pc = 0x1edbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937420), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edbf8: 0xa7808b50
    ctx->pc = 0x1edbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937424), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edbfc: 0xa7808b54
    ctx->pc = 0x1edbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937428), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc00: 0xa7808b58
    ctx->pc = 0x1edc00u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937432), (uint16_t)GPR_U32(ctx, 0));
    // 0x1edc04: 0x3e00008
    ctx->pc = 0x1EDC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDC08u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 205), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EDC0Cu;
}
