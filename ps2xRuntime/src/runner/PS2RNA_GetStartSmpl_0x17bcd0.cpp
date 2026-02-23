#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_GetStartSmpl
// Address: 0x17bcd0 - 0x17bd04
void PS2RNA_GetStartSmpl_0x17bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_GetStartSmpl");


    ctx->pc = 0x17bcd0u;

    // 0x17bcd0: 0x27bdfff0
    ctx->pc = 0x17bcd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bcd4: 0x3c04002c
    ctx->pc = 0x17bcd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17bcd8: 0xffbf0000
    ctx->pc = 0x17bcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bcdc: 0xc05114a
    ctx->pc = 0x17BCDCu;
    SET_GPR_U32(ctx, 31, 0x17BCE4u);
    ctx->pc = 0x17BCE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950456));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCE4u; }
        else if (ctx->pc != 0x17BCE4u) { ctx->pc = 0x17BCE4u; }
    }
    if (ctx->pc != 0x17BCE4u) { return; }
    ctx->pc = 0x17BCE4u;
    // 0x17bce4: 0x0
    ctx->pc = 0x17bce4u;
    // NOP
label_17bce8:
    // 0x17bce8: 0x0
    ctx->pc = 0x17bce8u;
    // NOP
    // 0x17bcec: 0x0
    ctx->pc = 0x17bcecu;
    // NOP
    // 0x17bcf0: 0x0
    ctx->pc = 0x17bcf0u;
    // NOP
    // 0x17bcf4: 0x0
    ctx->pc = 0x17bcf4u;
    // NOP
    // 0x17bcf8: 0x0
    ctx->pc = 0x17bcf8u;
    // NOP
    // 0x17bcfc: 0x1000fffa
    ctx->pc = 0x17BCFCu;
    {
        const bool branch_taken_0x17bcfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17bcfc) {
            ctx->pc = 0x17BCE8u;
            goto label_17bce8;
        }
    }
    ctx->pc = 0x17BD04u;
}
