#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_GetSfreq
// Address: 0x16db08 - 0x16db24
void ADXRNA_GetSfreq_0x16db08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_GetSfreq");


    ctx->pc = 0x16db08u;

    // 0x16db08: 0x27bdfff0
    ctx->pc = 0x16db08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16db0c: 0xffbf0000
    ctx->pc = 0x16db0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16db10: 0xc05ef42
    ctx->pc = 0x16DB10u;
    SET_GPR_U32(ctx, 31, 0x16DB18u);
    ctx->pc = 0x17BD08u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetSfreq_0x17bd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB18u; }
        else if (ctx->pc != 0x16DB18u) { ctx->pc = 0x16DB18u; }
    }
    if (ctx->pc != 0x16DB18u) { return; }
    ctx->pc = 0x16DB18u;
    // 0x16db18: 0xdfbf0000
    ctx->pc = 0x16db18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16db1c: 0x3e00008
    ctx->pc = 0x16DB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DB20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DB24u;
}
