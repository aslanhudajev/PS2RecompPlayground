#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_GetOutPan
// Address: 0x16db48 - 0x16db64
void ADXRNA_GetOutPan_0x16db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_GetOutPan");


    ctx->pc = 0x16db48u;

    // 0x16db48: 0x27bdfff0
    ctx->pc = 0x16db48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16db4c: 0xffbf0000
    ctx->pc = 0x16db4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16db50: 0xc05ef46
    ctx->pc = 0x16DB50u;
    SET_GPR_U32(ctx, 31, 0x16DB58u);
    ctx->pc = 0x17BD18u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetOutPan_0x17bd18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB58u; }
        else if (ctx->pc != 0x16DB58u) { ctx->pc = 0x16DB58u; }
    }
    if (ctx->pc != 0x16DB58u) { return; }
    ctx->pc = 0x16DB58u;
    // 0x16db58: 0xdfbf0000
    ctx->pc = 0x16db58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16db5c: 0x3e00008
    ctx->pc = 0x16DB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DB60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DB64u;
}
