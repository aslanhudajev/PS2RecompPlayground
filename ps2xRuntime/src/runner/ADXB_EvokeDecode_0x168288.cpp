#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_EvokeDecode
// Address: 0x168288 - 0x168360
void ADXB_EvokeDecode_0x168288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_EvokeDecode");


    ctx->pc = 0x168288u;

    // 0x168288: 0x80582d
    ctx->pc = 0x168288u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16828c: 0x25640050
    ctx->pc = 0x16828cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 11), 80));
    // 0x168290: 0x8c8a0008
    ctx->pc = 0x168290u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x168294: 0x8c860004
    ctx->pc = 0x168294u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x168298: 0x51400001
    ctx->pc = 0x168298u;
    {
        const bool branch_taken_0x168298 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        if (branch_taken_0x168298) {
            ctx->pc = 0x16829Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1682A0u;
            goto label_1682a0;
        }
    }
    ctx->pc = 0x1682A0u;
label_1682a0:
    // 0x1682a0: 0xca001a
    ctx->pc = 0x1682a0u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1682a4: 0x8c870010
    ctx->pc = 0x1682a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1682a8: 0x8c8e0028
    ctx->pc = 0x1682a8u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1682ac: 0x8c8d0018
    ctx->pc = 0x1682acu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1682b0: 0x1c71021
    ctx->pc = 0x1682b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1682b4: 0x8c8c0020
    ctx->pc = 0x1682b4u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1682b8: 0x2442ffff
    ctx->pc = 0x1682b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1682bc: 0x1ac1823
    ctx->pc = 0x1682bcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1682c0: 0x671821
    ctx->pc = 0x1682c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1682c4: 0x8c840024
    ctx->pc = 0x1682c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1682c8: 0x2463ffff
    ctx->pc = 0x1682c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1682cc: 0x3012
    ctx->pc = 0x1682ccu;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x1682d0: 0x47001a
    ctx->pc = 0x1682d0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1682d4: 0x4812
    ctx->pc = 0x1682d4u;
    SET_GPR_U32(ctx, 9, ctx->lo);
    // 0x1682d8: 0x2810
    ctx->pc = 0x1682d8u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x1682dc: 0x24a50001
    ctx->pc = 0x1682dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1682e0: 0xe52823
    ctx->pc = 0x1682e0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1682e4: 0x67001a
    ctx->pc = 0x1682e4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1682e8: 0x1812
    ctx->pc = 0x1682e8u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1682ec: 0x60402d
    ctx->pc = 0x1682ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682f0: 0x128102a
    ctx->pc = 0x1682f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x1682f4: 0x10400005
    ctx->pc = 0x1682F4u;
    {
        const bool branch_taken_0x1682f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1682F8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
        if (branch_taken_0x1682f4) {
            ctx->pc = 0x16830Cu;
            goto label_16830c;
        }
    }
    ctx->pc = 0x1682FCu;
    // 0x1682fc: 0x1831021
    ctx->pc = 0x1682fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x168300: 0x451023
    ctx->pc = 0x168300u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x168304: 0x4d102a
    ctx->pc = 0x168304u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 13)));
    // 0x168308: 0x1024021
    ctx->pc = 0x168308u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_16830c:
    // 0x16830c: 0x1c4102a
    ctx->pc = 0x16830cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 14), GPR_S32(ctx, 4)));
    // 0x168310: 0x50e00001
    ctx->pc = 0x168310u;
    {
        const bool branch_taken_0x168310 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x168310) {
            ctx->pc = 0x168314u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x168318u;
            goto label_168318;
        }
    }
    ctx->pc = 0x168318u;
label_168318:
    // 0x168318: 0x451818
    ctx->pc = 0x168318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x16831c: 0x24050002
    ctx->pc = 0x16831cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x168320: 0x642021
    ctx->pc = 0x168320u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x168324: 0x87001a
    ctx->pc = 0x168324u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x168328: 0x2012
    ctx->pc = 0x168328u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x16832c: 0x86102a
    ctx->pc = 0x16832cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x168330: 0x82300b
    ctx->pc = 0x168330u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 4));
    // 0x168334: 0x126182a
    ctx->pc = 0x168334u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 6)));
    // 0x168338: 0x123300b
    ctx->pc = 0x168338u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 9));
    // 0x16833c: 0x106102a
    ctx->pc = 0x16833cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 6)));
    // 0x168340: 0x15450004
    ctx->pc = 0x168340u;
    {
        const bool branch_taken_0x168340 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 5));
        ctx->pc = 0x168344u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 8));
        if (branch_taken_0x168340) {
            ctx->pc = 0x168354u;
            goto label_168354;
        }
    }
    ctx->pc = 0x168348u;
    // 0x168348: 0x160202d
    ctx->pc = 0x168348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16834c: 0x805a08c
    ctx->pc = 0x16834Cu;
    ctx->pc = 0x168350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168230u;
    ADXB_EvokeExpandSte_0x168230(rdram, ctx, runtime); return;
    ctx->pc = 0x168354u;
label_168354:
    // 0x168354: 0x160202d
    ctx->pc = 0x168354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168358: 0x805a07a
    ctx->pc = 0x168358u;
    ctx->pc = 0x16835Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1681E8u;
    ADXB_EvokeExpandMono_0x1681e8(rdram, ctx, runtime); return;
    ctx->pc = 0x168360u;
}
