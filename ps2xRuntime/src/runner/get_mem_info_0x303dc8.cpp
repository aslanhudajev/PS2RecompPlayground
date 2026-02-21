#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_mem_info
// Address: 0x303dc8 - 0x303ddc
void get_mem_info_0x303dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303dc8u;

    // 0x303dc8: 0x3c020020
    ctx->pc = 0x303dc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x303dcc: 0xac800008
    ctx->pc = 0x303dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x303dd0: 0xac820000
    ctx->pc = 0x303dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x303dd4: 0x3e00008
    ctx->pc = 0x303DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303DD8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303DDCu;
}
