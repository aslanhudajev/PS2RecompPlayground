#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_SetStartSmpl
// Address: 0x17bbf0 - 0x17bc24
void PS2RNA_SetStartSmpl_0x17bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_SetStartSmpl");


    ctx->pc = 0x17bbf0u;

    // 0x17bbf0: 0x27bdfff0
    ctx->pc = 0x17bbf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bbf4: 0x3c04002c
    ctx->pc = 0x17bbf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17bbf8: 0xffbf0000
    ctx->pc = 0x17bbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bbfc: 0xc05114a
    ctx->pc = 0x17BBFCu;
    SET_GPR_U32(ctx, 31, 0x17BC04u);
    ctx->pc = 0x17BC00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950368));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC04u; }
        else if (ctx->pc != 0x17BC04u) { ctx->pc = 0x17BC04u; }
    }
    if (ctx->pc != 0x17BC04u) { return; }
    ctx->pc = 0x17BC04u;
    // 0x17bc04: 0x0
    ctx->pc = 0x17bc04u;
    // NOP
label_17bc08:
    // 0x17bc08: 0x0
    ctx->pc = 0x17bc08u;
    // NOP
    // 0x17bc0c: 0x0
    ctx->pc = 0x17bc0cu;
    // NOP
    // 0x17bc10: 0x0
    ctx->pc = 0x17bc10u;
    // NOP
    // 0x17bc14: 0x0
    ctx->pc = 0x17bc14u;
    // NOP
    // 0x17bc18: 0x0
    ctx->pc = 0x17bc18u;
    // NOP
    // 0x17bc1c: 0x1000fffa
    ctx->pc = 0x17BC1Cu;
    {
        const bool branch_taken_0x17bc1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17bc1c) {
            ctx->pc = 0x17BC08u;
            goto label_17bc08;
        }
    }
    ctx->pc = 0x17BC24u;
}
