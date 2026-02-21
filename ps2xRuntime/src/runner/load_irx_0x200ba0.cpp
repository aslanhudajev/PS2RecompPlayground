#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load_irx
// Address: 0x200ba0 - 0x200bc0
void load_irx_0x200ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x200ba0u;

    // 0x200ba0: 0x27bdfff0
    ctx->pc = 0x200ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200ba4: 0xffbf0000
    ctx->pc = 0x200ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200ba8: 0x382d
    ctx->pc = 0x200ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200bac: 0xc08028c
    ctx->pc = 0x200BACu;
    SET_GPR_U32(ctx, 31, 0x200BB4u);
    ctx->pc = 0x200BB0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_irx_args_0x200a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200BB4u; }
    }
    if (ctx->pc != 0x200BB4u) { return; }
    ctx->pc = 0x200BB4u;
    // 0x200bb4: 0xdfbf0000
    ctx->pc = 0x200bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200bb8: 0x3e00008
    ctx->pc = 0x200BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200BC0u;
}
