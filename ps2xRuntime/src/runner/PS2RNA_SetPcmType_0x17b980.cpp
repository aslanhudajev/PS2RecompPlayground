#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_SetPcmType
// Address: 0x17b980 - 0x17b9b4
void PS2RNA_SetPcmType_0x17b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_SetPcmType");


    ctx->pc = 0x17b980u;

    // 0x17b980: 0x27bdfff0
    ctx->pc = 0x17b980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b984: 0x3c04002c
    ctx->pc = 0x17b984u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17b988: 0xffbf0000
    ctx->pc = 0x17b988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b98c: 0xc05114a
    ctx->pc = 0x17B98Cu;
    SET_GPR_U32(ctx, 31, 0x17B994u);
    ctx->pc = 0x17B990u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950328));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B994u; }
        else if (ctx->pc != 0x17B994u) { ctx->pc = 0x17B994u; }
    }
    if (ctx->pc != 0x17B994u) { return; }
    ctx->pc = 0x17B994u;
    // 0x17b994: 0x0
    ctx->pc = 0x17b994u;
    // NOP
label_17b998:
    // 0x17b998: 0x0
    ctx->pc = 0x17b998u;
    // NOP
    // 0x17b99c: 0x0
    ctx->pc = 0x17b99cu;
    // NOP
    // 0x17b9a0: 0x0
    ctx->pc = 0x17b9a0u;
    // NOP
    // 0x17b9a4: 0x0
    ctx->pc = 0x17b9a4u;
    // NOP
    // 0x17b9a8: 0x0
    ctx->pc = 0x17b9a8u;
    // NOP
    // 0x17b9ac: 0x1000fffa
    ctx->pc = 0x17B9ACu;
    {
        const bool branch_taken_0x17b9ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17b9ac) {
            ctx->pc = 0x17B998u;
            goto label_17b998;
        }
    }
    ctx->pc = 0x17B9B4u;
}
