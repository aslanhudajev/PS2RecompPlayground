#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MEM_CopySq32
// Address: 0x1806a8 - 0x1806c4
void MEM_CopySq32_0x1806a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MEM_CopySq32");


    ctx->pc = 0x1806a8u;

    // 0x1806a8: 0x27bdfff0
    ctx->pc = 0x1806a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1806ac: 0xffbf0000
    ctx->pc = 0x1806acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1806b0: 0xc06018a
    ctx->pc = 0x1806B0u;
    SET_GPR_U32(ctx, 31, 0x1806B8u);
    ctx->pc = 0x180628u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy32_0x180628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806B8u; }
        else if (ctx->pc != 0x1806B8u) { ctx->pc = 0x1806B8u; }
    }
    if (ctx->pc != 0x1806B8u) { return; }
    ctx->pc = 0x1806B8u;
    // 0x1806b8: 0xdfbf0000
    ctx->pc = 0x1806b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1806bc: 0x3e00008
    ctx->pc = 0x1806BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1806C4u;
}
