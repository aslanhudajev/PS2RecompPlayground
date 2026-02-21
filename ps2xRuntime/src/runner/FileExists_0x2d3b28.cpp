#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FileExists
// Address: 0x2d3b28 - 0x2d3b48
void FileExists_0x2d3b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3b28u;

    // 0x2d3b28: 0x27bdfef0
    ctx->pc = 0x2d3b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2d3b2c: 0xffbf0100
    ctx->pc = 0x2d3b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2d3b30: 0xc0b5346
    ctx->pc = 0x2D3B30u;
    SET_GPR_U32(ctx, 31, 0x2D3B38u);
    ctx->pc = 0x2D4D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWadInfo_0x2d4d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3B38u; }
    }
    if (ctx->pc != 0x2D3B38u) { return; }
    ctx->pc = 0x2D3B38u;
    // 0x2d3b38: 0x2102b
    ctx->pc = 0x2d3b38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2d3b3c: 0xdfbf0100
    ctx->pc = 0x2d3b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d3b40: 0x3e00008
    ctx->pc = 0x2D3B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3B44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3B48u;
}
