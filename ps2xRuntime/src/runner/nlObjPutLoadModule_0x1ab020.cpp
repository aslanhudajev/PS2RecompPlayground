#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutLoadModule
// Address: 0x1ab020 - 0x1ab048
void nlObjPutLoadModule_0x1ab020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutLoadModule");


    ctx->pc = 0x1ab020u;

    // 0x1ab020: 0x3c02001b
    ctx->pc = 0x1ab020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1ab024: 0x41880
    ctx->pc = 0x1ab024u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ab028: 0x24421a40
    ctx->pc = 0x1ab028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6720));
    // 0x1ab02c: 0x431021
    ctx->pc = 0x1ab02cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ab030: 0x8c420000
    ctx->pc = 0x1ab030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ab034: 0x8c440000
    ctx->pc = 0x1ab034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ab038: 0x8c450004
    ctx->pc = 0x1ab038u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ab03c: 0x8c420008
    ctx->pc = 0x1ab03cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ab040: 0x806abc8
    ctx->pc = 0x1AB040u;
    ctx->pc = 0x1AB044u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x1AAF20u;
    nlObjPutLoadModuleI_0x1aaf20(rdram, ctx, runtime); return;
    ctx->pc = 0x1AB048u;
}
