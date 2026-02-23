#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_GetStat
// Address: 0x16da98 - 0x16dacc
void ADXRNA_GetStat_0x16da98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_GetStat");


    ctx->pc = 0x16da98u;

    // 0x16da98: 0x27bdfff0
    ctx->pc = 0x16da98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16da9c: 0x3c04002c
    ctx->pc = 0x16da9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16daa0: 0xffbf0000
    ctx->pc = 0x16daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16daa4: 0xc05114a
    ctx->pc = 0x16DAA4u;
    SET_GPR_U32(ctx, 31, 0x16DAACu);
    ctx->pc = 0x16DAA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942880));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAACu; }
        else if (ctx->pc != 0x16DAACu) { ctx->pc = 0x16DAACu; }
    }
    if (ctx->pc != 0x16DAACu) { return; }
    ctx->pc = 0x16DAACu;
    // 0x16daac: 0x0
    ctx->pc = 0x16daacu;
    // NOP
label_16dab0:
    // 0x16dab0: 0x0
    ctx->pc = 0x16dab0u;
    // NOP
    // 0x16dab4: 0x0
    ctx->pc = 0x16dab4u;
    // NOP
    // 0x16dab8: 0x0
    ctx->pc = 0x16dab8u;
    // NOP
    // 0x16dabc: 0x0
    ctx->pc = 0x16dabcu;
    // NOP
    // 0x16dac0: 0x0
    ctx->pc = 0x16dac0u;
    // NOP
    // 0x16dac4: 0x1000fffa
    ctx->pc = 0x16DAC4u;
    {
        const bool branch_taken_0x16dac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16dac4) {
            ctx->pc = 0x16DAB0u;
            goto label_16dab0;
        }
    }
    ctx->pc = 0x16DACCu;
}
