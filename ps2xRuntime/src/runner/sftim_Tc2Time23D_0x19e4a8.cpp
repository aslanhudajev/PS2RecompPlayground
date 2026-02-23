#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_Tc2Time23D
// Address: 0x19e4a8 - 0x19e518
void sftim_Tc2Time23D_0x19e4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_Tc2Time23D");


    ctx->pc = 0x19e4a8u;

    // 0x19e4a8: 0x8caa000c
    ctx->pc = 0x19e4a8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19e4ac: 0x240b000a
    ctx->pc = 0x19e4acu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 10));
    // 0x19e4b0: 0x8ca20008
    ctx->pc = 0x19e4b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19e4b4: 0x3c030001
    ctx->pc = 0x19e4b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x19e4b8: 0x14b001a
    ctx->pc = 0x19e4b8u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19e4bc: 0x8ca90010
    ctx->pc = 0x19e4bcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19e4c0: 0x34635114
    ctx->pc = 0x19e4c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 20756));
    // 0x19e4c4: 0x240d0018
    ctx->pc = 0x19e4c4u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 24));
    // 0x19e4c8: 0x240e059e
    ctx->pc = 0x19e4c8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 1438));
    // 0x19e4cc: 0x8cac0018
    ctx->pc = 0x19e4ccu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x19e4d0: 0x51600001
    ctx->pc = 0x19E4D0u;
    {
        const bool branch_taken_0x19e4d0 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        if (branch_taken_0x19e4d0) {
            ctx->pc = 0x19E4D4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x19E4D8u;
            goto label_19e4d8;
        }
    }
    ctx->pc = 0x19E4D8u;
label_19e4d8:
    // 0x19e4d8: 0x4012
    ctx->pc = 0x19e4d8u;
    SET_GPR_U32(ctx, 8, ctx->lo);
    // 0x19e4dc: 0x431018
    ctx->pc = 0x19e4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19e4e0: 0x84040
    ctx->pc = 0x19e4e0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x19e4e4: 0x8ca30014
    ctx->pc = 0x19e4e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x19e4e8: 0x12d4818
    ctx->pc = 0x19e4e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x19e4ec: 0x14e5018
    ctx->pc = 0x19e4ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x19e4f0: 0x6c1821
    ctx->pc = 0x19e4f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x19e4f4: 0x240503e8
    ctx->pc = 0x19e4f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19e4f8: 0x491021
    ctx->pc = 0x19e4f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x19e4fc: 0x10a4021
    ctx->pc = 0x19e4fcu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x19e500: 0x481021
    ctx->pc = 0x19e500u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19e504: 0x431021
    ctx->pc = 0x19e504u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e508: 0x451018
    ctx->pc = 0x19e508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19e50c: 0xacc20000
    ctx->pc = 0x19e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x19e510: 0x3e00008
    ctx->pc = 0x19E510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E514u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E4D8u: goto label_19e4d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E518u;
}
