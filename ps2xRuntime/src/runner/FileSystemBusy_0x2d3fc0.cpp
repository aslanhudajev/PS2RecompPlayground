#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FileSystemBusy
// Address: 0x2d3fc0 - 0x2d4000
void FileSystemBusy_0x2d3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3fc0u;

    // 0x2d3fc0: 0x202d
    ctx->pc = 0x2d3fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3fc4: 0x182d
    ctx->pc = 0x2d3fc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3fc8: 0x3c02003d
    ctx->pc = 0x2d3fc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d3fcc: 0x24482d00
    ctx->pc = 0x2d3fccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 11520));
    // 0x2d3fd0: 0x2406012c
    ctx->pc = 0x2d3fd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 300));
    // 0x2d3fd4: 0x24050001
    ctx->pc = 0x2d3fd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2d3fd8:
    // 0x2d3fd8: 0x663818
    ctx->pc = 0x2d3fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2d3fdc: 0xe81021
    ctx->pc = 0x2d3fdcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2d3fe0: 0x8c420010
    ctx->pc = 0x2d3fe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d3fe4: 0x21027
    ctx->pc = 0x2d3fe4u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2d3fe8: 0xa2200b
    ctx->pc = 0x2d3fe8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
    // 0x2d3fec: 0x24630001
    ctx->pc = 0x2d3fecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3ff0: 0x1860fff9
    ctx->pc = 0x2D3FF0u;
    {
        const bool branch_taken_0x2d3ff0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2d3ff0) {
            ctx->pc = 0x2D3FD8u;
            goto label_2d3fd8;
        }
    }
    ctx->pc = 0x2D3FF8u;
    // 0x2d3ff8: 0x3e00008
    ctx->pc = 0x2D3FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3FFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3FD8u: goto label_2d3fd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D4000u;
}
