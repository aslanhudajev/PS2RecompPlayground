#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DemoEnd
// Address: 0x2009b8 - 0x2009ec
void DemoEnd_0x2009b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2009b8u;

    // 0x2009b8: 0x27bdfff0
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2009bc: 0xffbf0000
    ctx->pc = 0x2009bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2009c0: 0xc09710c
    ctx->pc = 0x2009C0u;
    SET_GPR_U32(ctx, 31, 0x2009C8u);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2009C8u; }
    }
    if (ctx->pc != 0x2009C8u) { return; }
    ctx->pc = 0x2009C8u;
    // 0x2009c8: 0xc08839e
    ctx->pc = 0x2009C8u;
    SET_GPR_U32(ctx, 31, 0x2009D0u);
    ctx->pc = 0x220E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamStop_0x220e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2009D0u; }
    }
    if (ctx->pc != 0x2009D0u) { return; }
    ctx->pc = 0x2009D0u;
    // 0x2009d0: 0xc0b731e
    ctx->pc = 0x2009D0u;
    SET_GPR_U32(ctx, 31, 0x2009D8u);
    ctx->pc = 0x2DCC78u;
    {
        const uint32_t __entryPc = ctx->pc;
        KillMovie_0x2dcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2009D8u; }
    }
    if (ctx->pc != 0x2009D8u) { return; }
    ctx->pc = 0x2009D8u;
    // 0x2009d8: 0xc0c1580
    ctx->pc = 0x2009D8u;
    SET_GPR_U32(ctx, 31, 0x2009E0u);
    ctx->pc = 0x305600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifExitCmd_0x305600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2009E0u; }
    }
    if (ctx->pc != 0x2009E0u) { return; }
    ctx->pc = 0x2009E0u;
    // 0x2009e0: 0xdfbf0000
    ctx->pc = 0x2009e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2009e4: 0x80bde9e
    ctx->pc = 0x2009E4u;
    ctx->pc = 0x2009E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2F7A78u;
    sceeDemoEnd_0x2f7a78(rdram, ctx, runtime); return;
    ctx->pc = 0x2009ECu;
}
