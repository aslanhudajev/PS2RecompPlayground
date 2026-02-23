#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_Tc2Time29D
// Address: 0x19e518 - 0x19e588
void sftim_Tc2Time29D_0x19e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_Tc2Time29D");


    ctx->pc = 0x19e518u;

    // 0x19e518: 0x8caa000c
    ctx->pc = 0x19e518u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19e51c: 0x240b000a
    ctx->pc = 0x19e51cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 10));
    // 0x19e520: 0x8ca20008
    ctx->pc = 0x19e520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19e524: 0x3c030001
    ctx->pc = 0x19e524u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x19e528: 0x14b001a
    ctx->pc = 0x19e528u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19e52c: 0x8ca90010
    ctx->pc = 0x19e52cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19e530: 0x3463a574
    ctx->pc = 0x19e530u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 42356));
    // 0x19e534: 0x240d001e
    ctx->pc = 0x19e534u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 30));
    // 0x19e538: 0x240e0706
    ctx->pc = 0x19e538u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 1798));
    // 0x19e53c: 0x8cac0018
    ctx->pc = 0x19e53cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x19e540: 0x51600001
    ctx->pc = 0x19E540u;
    {
        const bool branch_taken_0x19e540 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        if (branch_taken_0x19e540) {
            ctx->pc = 0x19E544u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x19E548u;
            goto label_19e548;
        }
    }
    ctx->pc = 0x19E548u;
label_19e548:
    // 0x19e548: 0x4012
    ctx->pc = 0x19e548u;
    SET_GPR_U32(ctx, 8, ctx->lo);
    // 0x19e54c: 0x431018
    ctx->pc = 0x19e54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19e550: 0x84040
    ctx->pc = 0x19e550u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x19e554: 0x8ca30014
    ctx->pc = 0x19e554u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x19e558: 0x12d4818
    ctx->pc = 0x19e558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x19e55c: 0x14e5018
    ctx->pc = 0x19e55cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x19e560: 0x6c1821
    ctx->pc = 0x19e560u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x19e564: 0x240503e8
    ctx->pc = 0x19e564u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19e568: 0x491021
    ctx->pc = 0x19e568u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x19e56c: 0x10a4021
    ctx->pc = 0x19e56cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x19e570: 0x481021
    ctx->pc = 0x19e570u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19e574: 0x431021
    ctx->pc = 0x19e574u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e578: 0x451018
    ctx->pc = 0x19e578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19e57c: 0xacc20000
    ctx->pc = 0x19e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x19e580: 0x3e00008
    ctx->pc = 0x19E580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E584u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E548u: goto label_19e548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E588u;
}
