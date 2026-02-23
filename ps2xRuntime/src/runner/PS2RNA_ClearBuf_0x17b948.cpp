#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_ClearBuf
// Address: 0x17b948 - 0x17b97c
void PS2RNA_ClearBuf_0x17b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_ClearBuf");


    ctx->pc = 0x17b948u;

    // 0x17b948: 0x27bdfff0
    ctx->pc = 0x17b948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b94c: 0x3c04002c
    ctx->pc = 0x17b94cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17b950: 0xffbf0000
    ctx->pc = 0x17b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b954: 0xc05114a
    ctx->pc = 0x17B954u;
    SET_GPR_U32(ctx, 31, 0x17B95Cu);
    ctx->pc = 0x17B958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950288));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B95Cu; }
        else if (ctx->pc != 0x17B95Cu) { ctx->pc = 0x17B95Cu; }
    }
    if (ctx->pc != 0x17B95Cu) { return; }
    ctx->pc = 0x17B95Cu;
    // 0x17b95c: 0x0
    ctx->pc = 0x17b95cu;
    // NOP
label_17b960:
    // 0x17b960: 0x0
    ctx->pc = 0x17b960u;
    // NOP
    // 0x17b964: 0x0
    ctx->pc = 0x17b964u;
    // NOP
    // 0x17b968: 0x0
    ctx->pc = 0x17b968u;
    // NOP
    // 0x17b96c: 0x0
    ctx->pc = 0x17b96cu;
    // NOP
    // 0x17b970: 0x0
    ctx->pc = 0x17b970u;
    // NOP
    // 0x17b974: 0x1000fffa
    ctx->pc = 0x17B974u;
    {
        const bool branch_taken_0x17b974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b974) {
            ctx->pc = 0x17B960u;
            goto label_17b960;
        }
    }
    ctx->pc = 0x17B97Cu;
}
