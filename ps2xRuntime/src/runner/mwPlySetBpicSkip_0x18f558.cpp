#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySetBpicSkip
// Address: 0x18f558 - 0x18f57c
void mwPlySetBpicSkip_0x18f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySetBpicSkip");


    ctx->pc = 0x18f558u;

    // 0x18f558: 0x14800004
    ctx->pc = 0x18F558u;
    {
        const bool branch_taken_0x18f558 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x18F55Cu;
        SET_GPR_U32(ctx, 6, XOR32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x18f558) {
            ctx->pc = 0x18F56Cu;
            goto label_18f56c;
        }
    }
    ctx->pc = 0x18F560u;
    // 0x18f560: 0x3c04002c
    ctx->pc = 0x18f560u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18f564: 0x8063dda
    ctx->pc = 0x18F564u;
    ctx->pc = 0x18F568u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955584));
    ctx->pc = 0x18F768u;
    MWSFSVM_Error_0x18f768(rdram, ctx, runtime); return;
    ctx->pc = 0x18F56Cu;
label_18f56c:
    // 0x18f56c: 0x8c840030
    ctx->pc = 0x18f56cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f570: 0x6302b
    ctx->pc = 0x18f570u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x18f574: 0x806741e
    ctx->pc = 0x18F574u;
    ctx->pc = 0x18F578u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18F57Cu;
}
