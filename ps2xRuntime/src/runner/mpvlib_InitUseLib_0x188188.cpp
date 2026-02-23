#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvlib_InitUseLib
// Address: 0x188188 - 0x1881b0
void mpvlib_InitUseLib_0x188188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvlib_InitUseLib");


    ctx->pc = 0x188188u;

    // 0x188188: 0x27bdffe0
    ctx->pc = 0x188188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18818c: 0xffb00000
    ctx->pc = 0x18818cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x188190: 0xffbf0010
    ctx->pc = 0x188190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x188194: 0xc05fabe
    ctx->pc = 0x188194u;
    SET_GPR_U32(ctx, 31, 0x18819Cu);
    ctx->pc = 0x188198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17EAF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_IsrInit_0x17eaf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18819Cu; }
        else if (ctx->pc != 0x18819Cu) { ctx->pc = 0x18819Cu; }
    }
    if (ctx->pc != 0x18819Cu) { return; }
    ctx->pc = 0x18819Cu;
    // 0x18819c: 0x26040060
    ctx->pc = 0x18819cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 96));
    // 0x1881a0: 0xdfbf0010
    ctx->pc = 0x1881a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1881a4: 0xdfb00000
    ctx->pc = 0x1881a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1881a8: 0x805fb2e
    ctx->pc = 0x1881A8u;
    ctx->pc = 0x1881ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17ECB8u;
    DCT_IsrInitScaleTbl_0x17ecb8(rdram, ctx, runtime); return;
    ctx->pc = 0x1881B0u;
}
