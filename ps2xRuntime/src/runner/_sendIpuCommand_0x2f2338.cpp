#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sendIpuCommand
// Address: 0x2f2338 - 0x2f2368
void _sendIpuCommand_0x2f2338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2338u;

    // 0x2f2338: 0x3c021000
    ctx->pc = 0x2f2338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f233c: 0x42f02
    ctx->pc = 0x2f233cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 4), 28));
    // 0x2f2340: 0x34422000
    ctx->pc = 0x2f2340u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x2f2344: 0x3c03003a
    ctx->pc = 0x2f2344u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f2348: 0xac440000
    ctx->pc = 0x2f2348u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x2f234c: 0x24633948
    ctx->pc = 0x2f234cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 14664));
    // 0x2f2350: 0x52880
    ctx->pc = 0x2f2350u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f2354: 0x3c04003a
    ctx->pc = 0x2f2354u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2f2358: 0xa32821
    ctx->pc = 0x2f2358u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f235c: 0x8ca20000
    ctx->pc = 0x2f235cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f2360: 0x3e00008
    ctx->pc = 0x2F2360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2364u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12388), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F2368u;
}
