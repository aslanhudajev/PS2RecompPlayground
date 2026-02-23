#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_Tc2Time59D
// Address: 0x19e588 - 0x19e5f8
void sftim_Tc2Time59D_0x19e588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_Tc2Time59D");


    ctx->pc = 0x19e588u;

    // 0x19e588: 0x8caa000c
    ctx->pc = 0x19e588u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19e58c: 0x240b000a
    ctx->pc = 0x19e58cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 10));
    // 0x19e590: 0x8ca20008
    ctx->pc = 0x19e590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19e594: 0x3c030003
    ctx->pc = 0x19e594u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3 << 16));
    // 0x19e598: 0x14b001a
    ctx->pc = 0x19e598u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19e59c: 0x8ca90010
    ctx->pc = 0x19e59cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19e5a0: 0x34634b54
    ctx->pc = 0x19e5a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 19284));
    // 0x19e5a4: 0x240d003c
    ctx->pc = 0x19e5a4u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 60));
    // 0x19e5a8: 0x240e0e0e
    ctx->pc = 0x19e5a8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 3598));
    // 0x19e5ac: 0x8cac0018
    ctx->pc = 0x19e5acu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x19e5b0: 0x51600001
    ctx->pc = 0x19E5B0u;
    {
        const bool branch_taken_0x19e5b0 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        if (branch_taken_0x19e5b0) {
            ctx->pc = 0x19E5B4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x19E5B8u;
            goto label_19e5b8;
        }
    }
    ctx->pc = 0x19E5B8u;
label_19e5b8:
    // 0x19e5b8: 0x4012
    ctx->pc = 0x19e5b8u;
    SET_GPR_U32(ctx, 8, ctx->lo);
    // 0x19e5bc: 0x431018
    ctx->pc = 0x19e5bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19e5c0: 0x84040
    ctx->pc = 0x19e5c0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x19e5c4: 0x8ca30014
    ctx->pc = 0x19e5c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x19e5c8: 0x12d4818
    ctx->pc = 0x19e5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x19e5cc: 0x14e5018
    ctx->pc = 0x19e5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x19e5d0: 0x6c1821
    ctx->pc = 0x19e5d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x19e5d4: 0x240503e8
    ctx->pc = 0x19e5d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19e5d8: 0x491021
    ctx->pc = 0x19e5d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x19e5dc: 0x10a4021
    ctx->pc = 0x19e5dcu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x19e5e0: 0x481021
    ctx->pc = 0x19e5e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19e5e4: 0x431021
    ctx->pc = 0x19e5e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e5e8: 0x451018
    ctx->pc = 0x19e5e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19e5ec: 0xacc20000
    ctx->pc = 0x19e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x19e5f0: 0x3e00008
    ctx->pc = 0x19E5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E5F4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E5B8u: goto label_19e5b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E5F8u;
}
