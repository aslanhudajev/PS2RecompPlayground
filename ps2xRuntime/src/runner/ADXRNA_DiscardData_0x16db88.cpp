#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_DiscardData
// Address: 0x16db88 - 0x16dba4
void ADXRNA_DiscardData_0x16db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_DiscardData");


    ctx->pc = 0x16db88u;

    // 0x16db88: 0x27bdfff0
    ctx->pc = 0x16db88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16db8c: 0xffbf0000
    ctx->pc = 0x16db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16db90: 0xc05ef76
    ctx->pc = 0x16DB90u;
    SET_GPR_U32(ctx, 31, 0x16DB98u);
    ctx->pc = 0x17BDD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_DiscardData_0x17bdd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB98u; }
        else if (ctx->pc != 0x16DB98u) { ctx->pc = 0x16DB98u; }
    }
    if (ctx->pc != 0x16DB98u) { return; }
    ctx->pc = 0x16DB98u;
    // 0x16db98: 0xdfbf0000
    ctx->pc = 0x16db98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16db9c: 0x3e00008
    ctx->pc = 0x16DB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DBA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DBA4u;
}
