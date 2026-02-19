#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TitleMenuInit
// Address: 0x20e760 - 0x20e778
void TitleMenuInit_0x20e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20e760u;

    // 0x20e760: 0x80282d
    ctx->pc = 0x20e760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e764: 0x3c020032
    ctx->pc = 0x20e764u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20e768: 0xac40d360
    ctx->pc = 0x20e768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955872), GPR_U32(ctx, 0));
    // 0x20e76c: 0x3c040032
    ctx->pc = 0x20e76cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20e770: 0x8082c3a
    ctx->pc = 0x20E770u;
    ctx->pc = 0x20E774u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956240));
    ctx->pc = 0x20B0E8u;
    start_optmenu_0x20b0e8(rdram, ctx, runtime); return;
    ctx->pc = 0x20E778u;
}
