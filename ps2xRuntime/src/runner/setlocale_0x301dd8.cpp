#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setlocale
// Address: 0x301dd8 - 0x301e04
void setlocale_0x301dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x301dd8u;

    // 0x301dd8: 0x80102d
    ctx->pc = 0x301dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ddc: 0x3c03003a
    ctx->pc = 0x301ddcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x301de0: 0x27bdfff0
    ctx->pc = 0x301de0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x301de4: 0xa0302d
    ctx->pc = 0x301de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301de8: 0x8c643dec
    ctx->pc = 0x301de8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 15852)));
    // 0x301dec: 0xffbf0000
    ctx->pc = 0x301decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x301df0: 0xc0c0750
    ctx->pc = 0x301DF0u;
    SET_GPR_U32(ctx, 31, 0x301DF8u);
    ctx->pc = 0x301DF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x301D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        _setlocale_r_0x301d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301DF8u; }
    }
    if (ctx->pc != 0x301DF8u) { return; }
    ctx->pc = 0x301DF8u;
    // 0x301df8: 0xdfbf0000
    ctx->pc = 0x301df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301dfc: 0x3e00008
    ctx->pc = 0x301DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301E00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x301E04u;
}
