#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_NextTc
// Address: 0x1971f0 - 0x1972b0
void sfmpv_NextTc_0x1971f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_NextTc");


    ctx->pc = 0x1971f0u;

    // 0x1971f0: 0x3c02002c
    ctx->pc = 0x1971f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1971f4: 0x8c880018
    ctx->pc = 0x1971f4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1971f8: 0x2442d440
    ctx->pc = 0x1971f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956096));
    // 0x1971fc: 0x8c830014
    ctx->pc = 0x1971fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x197200: 0x52880
    ctx->pc = 0x197200u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x197204: 0x2409003c
    ctx->pc = 0x197204u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 60));
    // 0x197208: 0xa22821
    ctx->pc = 0x197208u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19720c: 0x681821
    ctx->pc = 0x19720cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x197210: 0x8ca20000
    ctx->pc = 0x197210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x197214: 0x246c0001
    ctx->pc = 0x197214u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 3), 1));
    // 0x197218: 0x8c850010
    ctx->pc = 0x197218u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19721c: 0x240a003c
    ctx->pc = 0x19721cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 60));
    // 0x197220: 0x182001a
    ctx->pc = 0x197220u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x197224: 0x50400001
    ctx->pc = 0x197224u;
    {
        const bool branch_taken_0x197224 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x197224) {
            ctx->pc = 0x197228u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x19722Cu;
            goto label_19722c;
        }
    }
    ctx->pc = 0x19722Cu;
label_19722c:
    // 0x19722c: 0x8c88000c
    ctx->pc = 0x19722cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x197230: 0x8c8d0008
    ctx->pc = 0x197230u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x197234: 0x2402003c
    ctx->pc = 0x197234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x197238: 0x2403003c
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x19723c: 0x5812
    ctx->pc = 0x19723cu;
    SET_GPR_U32(ctx, 11, ctx->lo);
    // 0x197240: 0x6010
    ctx->pc = 0x197240u;
    SET_GPR_U32(ctx, 12, ctx->hi);
    // 0x197244: 0xab2821
    ctx->pc = 0x197244u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x197248: 0xa9001a
    ctx->pc = 0x197248u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19724c: 0x2812
    ctx->pc = 0x19724cu;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x197250: 0x5010
    ctx->pc = 0x197250u;
    SET_GPR_U32(ctx, 10, ctx->hi);
    // 0x197254: 0x1054021
    ctx->pc = 0x197254u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x197258: 0x109001a
    ctx->pc = 0x197258u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19725c: 0x4012
    ctx->pc = 0x19725cu;
    SET_GPR_U32(ctx, 8, ctx->lo);
    // 0x197260: 0x2010
    ctx->pc = 0x197260u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x197264: 0x10c0000d
    ctx->pc = 0x197264u;
    {
        const bool branch_taken_0x197264 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x197268u;
        SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        if (branch_taken_0x197264) {
            ctx->pc = 0x19729Cu;
            goto label_19729c;
        }
    }
    ctx->pc = 0x19726Cu;
    // 0x19726c: 0x5540000c
    ctx->pc = 0x19726Cu;
    {
        const bool branch_taken_0x19726c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x19726c) {
            ctx->pc = 0x197270u;
            WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 12));
            ctx->pc = 0x1972A0u;
            goto label_1972a0;
        }
    }
    ctx->pc = 0x197274u;
    // 0x197274: 0x2402000a
    ctx->pc = 0x197274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x197278: 0x82001a
    ctx->pc = 0x197278u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19727c: 0x50400001
    ctx->pc = 0x19727Cu;
    {
        const bool branch_taken_0x19727c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19727c) {
            ctx->pc = 0x197280u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x197284u;
            goto label_197284;
        }
    }
    ctx->pc = 0x197284u;
label_197284:
    // 0x197284: 0x1810
    ctx->pc = 0x197284u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x197288: 0x10600004
    ctx->pc = 0x197288u;
    {
        const bool branch_taken_0x197288 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19728Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x197288) {
            ctx->pc = 0x19729Cu;
            goto label_19729c;
        }
    }
    ctx->pc = 0x197290u;
    // 0x197290: 0x24030002
    ctx->pc = 0x197290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x197294: 0x4c102b
    ctx->pc = 0x197294u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x197298: 0x62600a
    ctx->pc = 0x197298u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 12, GPR_U32(ctx, 3));
label_19729c:
    // 0x19729c: 0xacec0014
    ctx->pc = 0x19729cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 12));
label_1972a0:
    // 0x1972a0: 0xaced0008
    ctx->pc = 0x1972a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 13));
    // 0x1972a4: 0xace4000c
    ctx->pc = 0x1972a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x1972a8: 0x3e00008
    ctx->pc = 0x1972A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1972ACu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19722Cu: goto label_19722c;
            case 0x197284u: goto label_197284;
            case 0x19729Cu: goto label_19729c;
            case 0x1972A0u: goto label_1972a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1972B0u;
}
