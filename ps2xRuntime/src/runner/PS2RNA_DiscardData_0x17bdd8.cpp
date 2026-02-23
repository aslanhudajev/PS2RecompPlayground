#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_DiscardData
// Address: 0x17bdd8 - 0x17be0c
void PS2RNA_DiscardData_0x17bdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_DiscardData");


    ctx->pc = 0x17bdd8u;

    // 0x17bdd8: 0x27bdfff0
    ctx->pc = 0x17bdd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bddc: 0x3c04002c
    ctx->pc = 0x17bddcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17bde0: 0xffbf0000
    ctx->pc = 0x17bde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bde4: 0xc05114a
    ctx->pc = 0x17BDE4u;
    SET_GPR_U32(ctx, 31, 0x17BDECu);
    ctx->pc = 0x17BDE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950608));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDECu; }
        else if (ctx->pc != 0x17BDECu) { ctx->pc = 0x17BDECu; }
    }
    if (ctx->pc != 0x17BDECu) { return; }
    ctx->pc = 0x17BDECu;
    // 0x17bdec: 0x0
    ctx->pc = 0x17bdecu;
    // NOP
label_17bdf0:
    // 0x17bdf0: 0x0
    ctx->pc = 0x17bdf0u;
    // NOP
    // 0x17bdf4: 0x0
    ctx->pc = 0x17bdf4u;
    // NOP
    // 0x17bdf8: 0x0
    ctx->pc = 0x17bdf8u;
    // NOP
    // 0x17bdfc: 0x0
    ctx->pc = 0x17bdfcu;
    // NOP
    // 0x17be00: 0x0
    ctx->pc = 0x17be00u;
    // NOP
    // 0x17be04: 0x1000fffa
    ctx->pc = 0x17BE04u;
    {
        const bool branch_taken_0x17be04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17be04) {
            ctx->pc = 0x17BDF0u;
            goto label_17bdf0;
        }
    }
    ctx->pc = 0x17BE0Cu;
}
