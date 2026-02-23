#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_GetOutVol
// Address: 0x16db28 - 0x16db44
void ADXRNA_GetOutVol_0x16db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_GetOutVol");


    ctx->pc = 0x16db28u;

    // 0x16db28: 0x27bdfff0
    ctx->pc = 0x16db28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16db2c: 0xffbf0000
    ctx->pc = 0x16db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16db30: 0xc05ef44
    ctx->pc = 0x16DB30u;
    SET_GPR_U32(ctx, 31, 0x16DB38u);
    ctx->pc = 0x17BD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetOutVol_0x17bd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB38u; }
        else if (ctx->pc != 0x16DB38u) { ctx->pc = 0x16DB38u; }
    }
    if (ctx->pc != 0x16DB38u) { return; }
    ctx->pc = 0x16DB38u;
    // 0x16db38: 0xdfbf0000
    ctx->pc = 0x16db38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16db3c: 0x3e00008
    ctx->pc = 0x16DB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DB40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DB44u;
}
