#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_GetViBufInf
// Address: 0x199e00 - 0x199e60
void SFMPVP_GetViBufInf_0x199e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_GetViBufInf");


    ctx->pc = 0x199e00u;

    // 0x199e00: 0x24843d78
    ctx->pc = 0x199e00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15736));
    // 0x199e04: 0x8c830018
    ctx->pc = 0x199e04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x199e08: 0xaca30000
    ctx->pc = 0x199e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x199e0c: 0x8c82000c
    ctx->pc = 0x199e0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x199e10: 0x212c0
    ctx->pc = 0x199e10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x199e14: 0xace20000
    ctx->pc = 0x199e14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x199e18: 0x8c850010
    ctx->pc = 0x199e18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x199e1c: 0x8c83000c
    ctx->pc = 0x199e1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x199e20: 0x8c870014
    ctx->pc = 0x199e20u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x199e24: 0x651821
    ctx->pc = 0x199e24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x199e28: 0x8c820018
    ctx->pc = 0x199e28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x199e2c: 0x31ac0
    ctx->pc = 0x199e2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x199e30: 0x671821
    ctx->pc = 0x199e30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x199e34: 0x50400001
    ctx->pc = 0x199E34u;
    {
        const bool branch_taken_0x199e34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x199e34) {
            ctx->pc = 0x199E38u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x199E3Cu;
            goto label_199e3c;
        }
    }
    ctx->pc = 0x199E3Cu;
label_199e3c:
    // 0x199e3c: 0x62001a
    ctx->pc = 0x199e3cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x199e40: 0x2810
    ctx->pc = 0x199e40u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x199e44: 0xacc50000
    ctx->pc = 0x199e44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x199e48: 0x8c820010
    ctx->pc = 0x199e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x199e4c: 0x8c830014
    ctx->pc = 0x199e4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x199e50: 0x212c0
    ctx->pc = 0x199e50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x199e54: 0x431021
    ctx->pc = 0x199e54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199e58: 0x3e00008
    ctx->pc = 0x199E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199E5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199E3Cu: goto label_199e3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199E60u;
}
