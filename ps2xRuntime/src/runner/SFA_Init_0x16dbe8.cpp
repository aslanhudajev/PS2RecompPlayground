#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFA_Init
// Address: 0x16dbe8 - 0x16dbfc
void SFA_Init_0x16dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFA_Init");


    ctx->pc = 0x16dbe8u;

    // 0x16dbe8: 0x8f8281f4
    ctx->pc = 0x16dbe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935028)));
    // 0x16dbec: 0x8f8381f0
    ctx->pc = 0x16dbecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935024)));
    // 0x16dbf0: 0x24420001
    ctx->pc = 0x16dbf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16dbf4: 0x3e00008
    ctx->pc = 0x16DBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DBF8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935028), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DBFCu;
}
