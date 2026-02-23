#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeNear__11DofCtrlTaskFff
// Address: 0x1d4c90 - 0x1d4cc0
void changeNear__11DofCtrlTaskFff_0x1d4c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeNear__11DofCtrlTaskFff");


    ctx->pc = 0x1d4c90u;

    // 0x1d4c90: 0x27bdfff0
    ctx->pc = 0x1d4c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4c94: 0x7fbf0000
    ctx->pc = 0x1d4c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d4c98: 0xe48c0008
    ctx->pc = 0x1d4c98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d4c9c: 0xe48d000c
    ctx->pc = 0x1d4c9cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1d4ca0: 0xc48d000c
    ctx->pc = 0x1d4ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d4ca4: 0xc48e0010
    ctx->pc = 0x1d4ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d4ca8: 0xc48f0014
    ctx->pc = 0x1d4ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d4cac: 0xc069634
    ctx->pc = 0x1D4CACu;
    SET_GPR_U32(ctx, 31, 0x1D4CB4u);
    ctx->pc = 0x1D4CB0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A58D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetRangeNF_0x1a58d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CB4u; }
        else if (ctx->pc != 0x1D4CB4u) { ctx->pc = 0x1D4CB4u; }
    }
    if (ctx->pc != 0x1D4CB4u) { return; }
    ctx->pc = 0x1D4CB4u;
    // 0x1d4cb4: 0x7bbf0000
    ctx->pc = 0x1d4cb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4cb8: 0x3e00008
    ctx->pc = 0x1D4CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4CBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4CC0u;
}
