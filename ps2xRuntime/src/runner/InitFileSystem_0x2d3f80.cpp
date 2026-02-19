#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitFileSystem
// Address: 0x2d3f80 - 0x2d3fc0
void InitFileSystem_0x2d3f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3f80u;

    // 0x2d3f80: 0x182d
    ctx->pc = 0x2d3f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f84: 0x3c02003d
    ctx->pc = 0x2d3f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d3f88: 0x24472d00
    ctx->pc = 0x2d3f88u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 11520));
    // 0x2d3f8c: 0x2405012c
    ctx->pc = 0x2d3f8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 300));
    // 0x2d3f90: 0x2404ffff
    ctx->pc = 0x2d3f90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3f94: 0x0
    ctx->pc = 0x2d3f94u;
    // NOP
label_2d3f98:
    // 0x2d3f98: 0x653018
    ctx->pc = 0x2d3f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2d3f9c: 0xc71021
    ctx->pc = 0x2d3f9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d3fa0: 0xac440010
    ctx->pc = 0x2d3fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x2d3fa4: 0x24630001
    ctx->pc = 0x2d3fa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d3fa8: 0x0
    ctx->pc = 0x2d3fa8u;
    // NOP
    // 0x2d3fac: 0x0
    ctx->pc = 0x2d3facu;
    // NOP
    // 0x2d3fb0: 0x1860fff9
    ctx->pc = 0x2D3FB0u;
    {
        const bool branch_taken_0x2d3fb0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2d3fb0) {
            ctx->pc = 0x2D3F98u;
            goto label_2d3f98;
        }
    }
    ctx->pc = 0x2D3FB8u;
    // 0x2d3fb8: 0x80b522a
    ctx->pc = 0x2D3FB8u;
    ctx->pc = 0x2D48A8u;
    rpsInit_0x2d48a8(rdram, ctx, runtime); return;
    ctx->pc = 0x2D3FC0u;
}
