#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeFar__11DofCtrlTaskFff
// Address: 0x1d4cc0 - 0x1d4cf0
void changeFar__11DofCtrlTaskFff_0x1d4cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeFar__11DofCtrlTaskFff");


    ctx->pc = 0x1d4cc0u;

    // 0x1d4cc0: 0x27bdfff0
    ctx->pc = 0x1d4cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4cc4: 0x7fbf0000
    ctx->pc = 0x1d4cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d4cc8: 0xe48c0010
    ctx->pc = 0x1d4cc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1d4ccc: 0xe48d0014
    ctx->pc = 0x1d4cccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1d4cd0: 0xc48d000c
    ctx->pc = 0x1d4cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d4cd4: 0xc48e0010
    ctx->pc = 0x1d4cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d4cd8: 0xc48f0014
    ctx->pc = 0x1d4cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d4cdc: 0xc069634
    ctx->pc = 0x1D4CDCu;
    SET_GPR_U32(ctx, 31, 0x1D4CE4u);
    ctx->pc = 0x1D4CE0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A58D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetRangeNF_0x1a58d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CE4u; }
        else if (ctx->pc != 0x1D4CE4u) { ctx->pc = 0x1D4CE4u; }
    }
    if (ctx->pc != 0x1D4CE4u) { return; }
    ctx->pc = 0x1D4CE4u;
    // 0x1d4ce4: 0x7bbf0000
    ctx->pc = 0x1d4ce4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4ce8: 0x3e00008
    ctx->pc = 0x1D4CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4CECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4CF0u;
}
