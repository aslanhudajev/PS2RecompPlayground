#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySetAsync
// Address: 0x18cee0 - 0x18cf18
void mwPlySetAsync_0x18cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySetAsync");


    ctx->pc = 0x18cee0u;

    // 0x18cee0: 0x80102d
    ctx->pc = 0x18cee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cee4: 0x14a00004
    ctx->pc = 0x18CEE4u;
    {
        const bool branch_taken_0x18cee4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x18CEE8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 48)));
        if (branch_taken_0x18cee4) {
            ctx->pc = 0x18CEF8u;
            goto label_18cef8;
        }
    }
    ctx->pc = 0x18CEECu;
    // 0x18ceec: 0x2405000f
    ctx->pc = 0x18ceecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18cef0: 0x806741e
    ctx->pc = 0x18CEF0u;
    ctx->pc = 0x18CEF4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18CEF8u;
label_18cef8:
    // 0x18cef8: 0x8c43000c
    ctx->pc = 0x18cef8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18cefc: 0x24020001
    ctx->pc = 0x18cefcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cf00: 0x14620003
    ctx->pc = 0x18CF00u;
    {
        const bool branch_taken_0x18cf00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x18CF04u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x18cf00) {
            ctx->pc = 0x18CF10u;
            goto label_18cf10;
        }
    }
    ctx->pc = 0x18CF08u;
    // 0x18cf08: 0x806741e
    ctx->pc = 0x18CF08u;
    ctx->pc = 0x18CF0Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18CF10u;
label_18cf10:
    // 0x18cf10: 0x806741e
    ctx->pc = 0x18CF10u;
    ctx->pc = 0x18CF14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18CF18u;
}
