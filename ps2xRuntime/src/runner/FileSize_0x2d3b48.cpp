#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FileSize
// Address: 0x2d3b48 - 0x2d3b74
void FileSize_0x2d3b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3b48u;

    // 0x2d3b48: 0x27bdfef0
    ctx->pc = 0x2d3b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2d3b4c: 0xffbf0100
    ctx->pc = 0x2d3b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2d3b50: 0xc0b5378
    ctx->pc = 0x2D3B50u;
    SET_GPR_U32(ctx, 31, 0x2D3B58u);
    ctx->pc = 0x2D4DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaddedFSize_0x2d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3B58u; }
    }
    if (ctx->pc != 0x2D3B58u) { return; }
    ctx->pc = 0x2D3B58u;
    // 0x2d3b58: 0x3043000f
    ctx->pc = 0x2d3b58u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 15));
    // 0x2d3b5c: 0x10600003
    ctx->pc = 0x2D3B5Cu;
    {
        const bool branch_taken_0x2d3b5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3B60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        if (branch_taken_0x2d3b5c) {
            ctx->pc = 0x2D3B6Cu;
            goto label_2d3b6c;
        }
    }
    ctx->pc = 0x2D3B64u;
    // 0x2d3b64: 0x24420010
    ctx->pc = 0x2d3b64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d3b68: 0x431023
    ctx->pc = 0x2d3b68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d3b6c:
    // 0x2d3b6c: 0x3e00008
    ctx->pc = 0x2D3B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3B70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3B6Cu: goto label_2d3b6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3B74u;
}
