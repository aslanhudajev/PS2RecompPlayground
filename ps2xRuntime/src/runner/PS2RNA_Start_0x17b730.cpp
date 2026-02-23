#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_Start
// Address: 0x17b730 - 0x17b764
void PS2RNA_Start_0x17b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_Start");


    ctx->pc = 0x17b730u;

    // 0x17b730: 0x27bdfff0
    ctx->pc = 0x17b730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b734: 0x3c04002c
    ctx->pc = 0x17b734u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17b738: 0xffbf0000
    ctx->pc = 0x17b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b73c: 0xc05114a
    ctx->pc = 0x17B73Cu;
    SET_GPR_U32(ctx, 31, 0x17B744u);
    ctx->pc = 0x17B740u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950256));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B744u; }
        else if (ctx->pc != 0x17B744u) { ctx->pc = 0x17B744u; }
    }
    if (ctx->pc != 0x17B744u) { return; }
    ctx->pc = 0x17B744u;
    // 0x17b744: 0x0
    ctx->pc = 0x17b744u;
    // NOP
label_17b748:
    // 0x17b748: 0x0
    ctx->pc = 0x17b748u;
    // NOP
    // 0x17b74c: 0x0
    ctx->pc = 0x17b74cu;
    // NOP
    // 0x17b750: 0x0
    ctx->pc = 0x17b750u;
    // NOP
    // 0x17b754: 0x0
    ctx->pc = 0x17b754u;
    // NOP
    // 0x17b758: 0x0
    ctx->pc = 0x17b758u;
    // NOP
    // 0x17b75c: 0x1000fffa
    ctx->pc = 0x17B75Cu;
    {
        const bool branch_taken_0x17b75c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b75c) {
            ctx->pc = 0x17B748u;
            goto label_17b748;
        }
    }
    ctx->pc = 0x17B764u;
}
