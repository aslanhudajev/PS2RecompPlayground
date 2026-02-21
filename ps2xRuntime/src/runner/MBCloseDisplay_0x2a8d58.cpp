#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBCloseDisplay
// Address: 0x2a8d58 - 0x2a8d98
void MBCloseDisplay_0x2a8d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8d58u;

    // 0x2a8d58: 0x27bdfff0
    ctx->pc = 0x2a8d58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a8d5c: 0xffbf0000
    ctx->pc = 0x2a8d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8d60: 0x3c020036
    ctx->pc = 0x2a8d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8d64: 0x8c44dee0
    ctx->pc = 0x2a8d64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8d68: 0x3c020037
    ctx->pc = 0x2a8d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a8d6c: 0xac40826c
    ctx->pc = 0x2a8d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935148), GPR_U32(ctx, 0));
    // 0x2a8d70: 0x8c830010
    ctx->pc = 0x2a8d70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a8d74: 0x8c620010
    ctx->pc = 0x2a8d74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a8d78: 0xac620014
    ctx->pc = 0x2a8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2a8d7c: 0x8c830010
    ctx->pc = 0x2a8d7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a8d80: 0x24020001
    ctx->pc = 0x2a8d80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8d84: 0xc0a9764
    ctx->pc = 0x2A8D84u;
    SET_GPR_U32(ctx, 31, 0x2A8D8Cu);
    ctx->pc = 0x2A8D88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x2A5D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseDmacHandler_0x2a5d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D8Cu; }
    }
    if (ctx->pc != 0x2A8D8Cu) { return; }
    ctx->pc = 0x2A8D8Cu;
    // 0x2a8d8c: 0xdfbf0000
    ctx->pc = 0x2a8d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8d90: 0x80b00f0
    ctx->pc = 0x2A8D90u;
    ctx->pc = 0x2A8D94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2C03C0u;
    pbDmaReset_0x2c03c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2A8D98u;
}
