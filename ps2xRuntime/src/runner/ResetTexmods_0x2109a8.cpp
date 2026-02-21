#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResetTexmods
// Address: 0x2109a8 - 0x2109bc
void ResetTexmods_0x2109a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2109a8u;

    // 0x2109a8: 0x3c02003c
    ctx->pc = 0x2109a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2109ac: 0xac40cb68
    ctx->pc = 0x2109acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953832), GPR_U32(ctx, 0));
    // 0x2109b0: 0x3c02003c
    ctx->pc = 0x2109b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2109b4: 0x80b42b4
    ctx->pc = 0x2109B4u;
    ctx->pc = 0x2109B8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953384), GPR_U32(ctx, 0));
    ctx->pc = 0x2D0AD0u;
    MBClearTexscroll_0x2d0ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x2109BCu;
}
