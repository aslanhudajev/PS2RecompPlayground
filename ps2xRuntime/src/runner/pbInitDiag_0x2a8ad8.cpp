#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitDiag
// Address: 0x2a8ad8 - 0x2a8b08
void pbInitDiag_0x2a8ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8ad8u;

    // 0x2a8ad8: 0x27bdfff0
    ctx->pc = 0x2a8ad8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a8adc: 0xffbf0000
    ctx->pc = 0x2a8adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8ae0: 0x3c020036
    ctx->pc = 0x2a8ae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8ae4: 0x8c43dee0
    ctx->pc = 0x2a8ae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8ae8: 0x3c020037
    ctx->pc = 0x2a8ae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a8aec: 0x24428220
    ctx->pc = 0x2a8aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935072));
    // 0x2a8af0: 0xac620030
    ctx->pc = 0x2a8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2a8af4: 0xc0aa2d0
    ctx->pc = 0x2A8AF4u;
    SET_GPR_U32(ctx, 31, 0x2A8AFCu);
    ctx->pc = 0x2A8AF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
    ctx->pc = 0x2A8B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitControls_0x2a8b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8AFCu; }
    }
    if (ctx->pc != 0x2A8AFCu) { return; }
    ctx->pc = 0x2A8AFCu;
    // 0x2a8afc: 0xdfbf0000
    ctx->pc = 0x2a8afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8b00: 0x80aa302
    ctx->pc = 0x2A8B00u;
    ctx->pc = 0x2A8B04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2A8C08u;
    pbInitDiagMenu_0x2a8c08(rdram, ctx, runtime); return;
    ctx->pc = 0x2A8B08u;
}
