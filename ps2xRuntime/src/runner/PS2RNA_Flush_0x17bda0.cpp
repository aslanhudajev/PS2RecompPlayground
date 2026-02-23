#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_Flush
// Address: 0x17bda0 - 0x17bdd4
void PS2RNA_Flush_0x17bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_Flush");


    ctx->pc = 0x17bda0u;

    // 0x17bda0: 0x27bdfff0
    ctx->pc = 0x17bda0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bda4: 0x3c04002c
    ctx->pc = 0x17bda4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17bda8: 0xffbf0000
    ctx->pc = 0x17bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bdac: 0xc05114a
    ctx->pc = 0x17BDACu;
    SET_GPR_U32(ctx, 31, 0x17BDB4u);
    ctx->pc = 0x17BDB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950576));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDB4u; }
        else if (ctx->pc != 0x17BDB4u) { ctx->pc = 0x17BDB4u; }
    }
    if (ctx->pc != 0x17BDB4u) { return; }
    ctx->pc = 0x17BDB4u;
    // 0x17bdb4: 0x0
    ctx->pc = 0x17bdb4u;
    // NOP
label_17bdb8:
    // 0x17bdb8: 0x0
    ctx->pc = 0x17bdb8u;
    // NOP
    // 0x17bdbc: 0x0
    ctx->pc = 0x17bdbcu;
    // NOP
    // 0x17bdc0: 0x0
    ctx->pc = 0x17bdc0u;
    // NOP
    // 0x17bdc4: 0x0
    ctx->pc = 0x17bdc4u;
    // NOP
    // 0x17bdc8: 0x0
    ctx->pc = 0x17bdc8u;
    // NOP
    // 0x17bdcc: 0x1000fffa
    ctx->pc = 0x17BDCCu;
    {
        const bool branch_taken_0x17bdcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17bdcc) {
            ctx->pc = 0x17BDB8u;
            goto label_17bdb8;
        }
    }
    ctx->pc = 0x17BDD4u;
}
