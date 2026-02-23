#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_GetBitPerSmpl
// Address: 0x16db68 - 0x16db84
void ADXRNA_GetBitPerSmpl_0x16db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_GetBitPerSmpl");


    ctx->pc = 0x16db68u;

    // 0x16db68: 0x27bdfff0
    ctx->pc = 0x16db68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16db6c: 0xffbf0000
    ctx->pc = 0x16db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16db70: 0xc05ef4a
    ctx->pc = 0x16DB70u;
    SET_GPR_U32(ctx, 31, 0x16DB78u);
    ctx->pc = 0x17BD28u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetBitPerSmpl_0x17bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB78u; }
        else if (ctx->pc != 0x16DB78u) { ctx->pc = 0x16DB78u; }
    }
    if (ctx->pc != 0x16DB78u) { return; }
    ctx->pc = 0x16DB78u;
    // 0x16db78: 0xdfbf0000
    ctx->pc = 0x16db78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16db7c: 0x3e00008
    ctx->pc = 0x16DB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DB80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DB84u;
}
