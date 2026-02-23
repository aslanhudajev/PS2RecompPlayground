#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UrawazaInit__Fv
// Address: 0x1f2b80 - 0x1f2bb0
void UrawazaInit__Fv_0x1f2b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UrawazaInit__Fv");


    ctx->pc = 0x1f2b80u;

    // 0x1f2b80: 0x24030020
    ctx->pc = 0x1f2b80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f2b84: 0xa3838e30
    ctx->pc = 0x1f2b84u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938160), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2b88: 0xa3838e31
    ctx->pc = 0x1f2b88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938161), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2b8c: 0xa3838e32
    ctx->pc = 0x1f2b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938162), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2b90: 0xa3838e33
    ctx->pc = 0x1f2b90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938163), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2b94: 0xa3838e34
    ctx->pc = 0x1f2b94u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938164), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2b98: 0xa3838e35
    ctx->pc = 0x1f2b98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938165), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2b9c: 0xa3838e36
    ctx->pc = 0x1f2b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938166), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2ba0: 0xaf808c04
    ctx->pc = 0x1f2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937604), GPR_U32(ctx, 0));
    // 0x1f2ba4: 0xaf808e2c
    ctx->pc = 0x1f2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938156), GPR_U32(ctx, 0));
    // 0x1f2ba8: 0x3e00008
    ctx->pc = 0x1F2BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2BACu;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938167), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2BB0u;
}
