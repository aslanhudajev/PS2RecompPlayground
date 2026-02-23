#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: set_adjustY__FP11Gun_Act_tagi
// Address: 0x1ebf70 - 0x1ebfc0
void set_adjustY__FP11Gun_Act_tagi_0x1ebf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("set_adjustY__FP11Gun_Act_tagi");


    ctx->pc = 0x1ebf70u;

    // 0x1ebf70: 0x8c860000
    ctx->pc = 0x1ebf70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ebf74: 0x24a4ff7a
    ctx->pc = 0x1ebf74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294967162));
    // 0x1ebf78: 0x41900
    ctx->pc = 0x1ebf78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ebf7c: 0x642021
    ctx->pc = 0x1ebf7cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ebf80: 0x418c0
    ctx->pc = 0x1ebf80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ebf84: 0x642023
    ctx->pc = 0x1ebf84u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ebf88: 0x3c030050
    ctx->pc = 0x1ebf88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ebf8c: 0x62940
    ctx->pc = 0x1ebf8cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 5));
    // 0x1ebf90: 0x24630dbc
    ctx->pc = 0x1ebf90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3516));
    // 0x1ebf94: 0x651821
    ctx->pc = 0x1ebf94u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ebf98: 0x8c630000
    ctx->pc = 0x1ebf98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ebf9c: 0x14600002
    ctx->pc = 0x1EBF9Cu;
    {
        const bool branch_taken_0x1ebf9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EBFA0u;
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1ebf9c) {
            ctx->pc = 0x1EBFA8u;
            goto label_1ebfa8;
        }
    }
    ctx->pc = 0x1EBFA4u;
    // 0x1ebfa4: 0x1cd
    ctx->pc = 0x1ebfa4u;
    runtime->handleBreak(rdram, ctx);
label_1ebfa8:
    // 0x1ebfa8: 0x3c030050
    ctx->pc = 0x1ebfa8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ebfac: 0x24630db4
    ctx->pc = 0x1ebfacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3508));
    // 0x1ebfb0: 0x2012
    ctx->pc = 0x1ebfb0u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x1ebfb4: 0x651821
    ctx->pc = 0x1ebfb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ebfb8: 0x3e00008
    ctx->pc = 0x1EBFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBFBCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBFA8u: goto label_1ebfa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EBFC0u;
}
