#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_Pts2Tc
// Address: 0x197018 - 0x1971f0
void sfmpv_Pts2Tc_0x197018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_Pts2Tc");


    ctx->pc = 0x197018u;

    // 0x197018: 0x27bdffa0
    ctx->pc = 0x197018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19701c: 0x3c02002c
    ctx->pc = 0x19701cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x197020: 0xffb40040
    ctx->pc = 0x197020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x197024: 0x52880
    ctx->pc = 0x197024u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x197028: 0xffb10010
    ctx->pc = 0x197028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19702c: 0x2442d5f0
    ctx->pc = 0x19702cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956528));
    // 0x197030: 0xffb00000
    ctx->pc = 0x197030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197034: 0x3c03002c
    ctx->pc = 0x197034u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x197038: 0xffbf0050
    ctx->pc = 0x197038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19703c: 0xa21021
    ctx->pc = 0x19703cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x197040: 0xffb20020
    ctx->pc = 0x197040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x197044: 0x2463d440
    ctx->pc = 0x197044u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956096));
    // 0x197048: 0xffb30030
    ctx->pc = 0x197048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19704c: 0xa32821
    ctx->pc = 0x19704cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x197050: 0x8c530000
    ctx->pc = 0x197050u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197054: 0xc0882d
    ctx->pc = 0x197054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197058: 0x8cb20000
    ctx->pc = 0x197058u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19705c: 0x3c060157
    ctx->pc = 0x19705cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)343 << 16));
    // 0x197060: 0xe0802d
    ctx->pc = 0x197060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197064: 0x100a02d
    ctx->pc = 0x197064u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197068: 0x260282d
    ctx->pc = 0x197068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19706c: 0xc063158
    ctx->pc = 0x19706Cu;
    SET_GPR_U32(ctx, 31, 0x197074u);
    ctx->pc = 0x197070u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 21152));
    ctx->pc = 0x18C560u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulDivRound_0x18c560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197074u; }
        else if (ctx->pc != 0x197074u) { ctx->pc = 0x197074u; }
    }
    if (ctx->pc != 0x197074u) { return; }
    ctx->pc = 0x197074u;
    // 0x197074: 0x503823
    ctx->pc = 0x197074u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x197078: 0x2402ffff
    ctx->pc = 0x197078u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19707c: 0x47102a
    ctx->pc = 0x19707cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 7)));
    // 0x197080: 0x1220003f
    ctx->pc = 0x197080u;
    {
        const bool branch_taken_0x197080 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x197084u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 0));
        if (branch_taken_0x197080) {
            ctx->pc = 0x197180u;
            goto label_197180;
        }
    }
    ctx->pc = 0x197088u;
    // 0x197088: 0x24027512
    ctx->pc = 0x197088u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29970));
    // 0x19708c: 0x12620007
    ctx->pc = 0x19708Cu;
    {
        const bool branch_taken_0x19708c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x197090u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 59940));
        if (branch_taken_0x19708c) {
            ctx->pc = 0x1970ACu;
            goto label_1970ac;
        }
    }
    ctx->pc = 0x197094u;
    // 0x197094: 0x5662003b
    ctx->pc = 0x197094u;
    {
        const bool branch_taken_0x197094 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        if (branch_taken_0x197094) {
            ctx->pc = 0x197098u;
            { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
            ctx->pc = 0x197184u;
            goto label_197184;
        }
    }
    ctx->pc = 0x19709Cu;
    // 0x19709c: 0x3c03002c
    ctx->pc = 0x19709cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1970a0: 0x2462d488
    ctx->pc = 0x1970a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294956168));
    // 0x1970a4: 0x10000004
    ctx->pc = 0x1970A4u;
    {
        const bool branch_taken_0x1970a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1970A8u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 4294956168)));
        if (branch_taken_0x1970a4) {
            ctx->pc = 0x1970B8u;
            goto label_1970b8;
        }
    }
    ctx->pc = 0x1970ACu;
label_1970ac:
    // 0x1970ac: 0x3c03002c
    ctx->pc = 0x1970acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1970b0: 0x2462d468
    ctx->pc = 0x1970b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294956136));
    // 0x1970b4: 0x8c68d468
    ctx->pc = 0x1970b4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 4294956136)));
label_1970b8:
    // 0x1970b8: 0x8c4d0018
    ctx->pc = 0x1970b8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1970bc: 0x8c430004
    ctx->pc = 0x1970bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1970c0: 0x8c4a0008
    ctx->pc = 0x1970c0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1970c4: 0x8c49000c
    ctx->pc = 0x1970c4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1970c8: 0x8c4b0010
    ctx->pc = 0x1970c8u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1970cc: 0x8c460014
    ctx->pc = 0x1970ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1970d0: 0xe8001a
    ctx->pc = 0x1970d0u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1970d4: 0x51000001
    ctx->pc = 0x1970D4u;
    {
        const bool branch_taken_0x1970d4 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x1970d4) {
            ctx->pc = 0x1970D8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1970DCu;
            goto label_1970dc;
        }
    }
    ctx->pc = 0x1970DCu;
label_1970dc:
    // 0x1970dc: 0x2812
    ctx->pc = 0x1970dcu;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x1970e0: 0x2010
    ctx->pc = 0x1970e0u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x1970e4: 0x83001a
    ctx->pc = 0x1970e4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1970e8: 0x1012
    ctx->pc = 0x1970e8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1970ec: 0x1810
    ctx->pc = 0x1970ecu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1970f0: 0x40602d
    ctx->pc = 0x1970f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1970f4: 0x60382d
    ctx->pc = 0x1970f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1970f8: 0xea102a
    ctx->pc = 0x1970f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 10)));
    // 0x1970fc: 0x10400009
    ctx->pc = 0x1970FCu;
    {
        const bool branch_taken_0x1970fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197100u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1970fc) {
            ctx->pc = 0x197124u;
            goto label_197124;
        }
    }
    ctx->pc = 0x197104u;
    // 0x197104: 0xe6001a
    ctx->pc = 0x197104u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x197108: 0x50c00001
    ctx->pc = 0x197108u;
    {
        const bool branch_taken_0x197108 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x197108) {
            ctx->pc = 0x19710Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x197110u;
            goto label_197110;
        }
    }
    ctx->pc = 0x197110u;
label_197110:
    // 0x197110: 0x202d
    ctx->pc = 0x197110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197114: 0x1012
    ctx->pc = 0x197114u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x197118: 0x1810
    ctx->pc = 0x197118u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x19711c: 0x10000014
    ctx->pc = 0x19711Cu;
    {
        const bool branch_taken_0x19711c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197120u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19711c) {
            ctx->pc = 0x197170u;
            goto label_197170;
        }
    }
    ctx->pc = 0x197124u;
label_197124:
    // 0x197124: 0xea3823
    ctx->pc = 0x197124u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x197128: 0x51200001
    ctx->pc = 0x197128u;
    {
        const bool branch_taken_0x197128 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x197128) {
            ctx->pc = 0x19712Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x197130u;
            goto label_197130;
        }
    }
    ctx->pc = 0x197130u;
label_197130:
    // 0x197130: 0xe9001a
    ctx->pc = 0x197130u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x197134: 0x1010
    ctx->pc = 0x197134u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x197138: 0x1812
    ctx->pc = 0x197138u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x19713c: 0x40382d
    ctx->pc = 0x19713cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197140: 0xeb102a
    ctx->pc = 0x197140u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 11)));
    // 0x197144: 0x10400003
    ctx->pc = 0x197144u;
    {
        const bool branch_taken_0x197144 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197148u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x197144) {
            ctx->pc = 0x197154u;
            goto label_197154;
        }
    }
    ctx->pc = 0x19714Cu;
    // 0x19714c: 0x10000009
    ctx->pc = 0x19714Cu;
    {
        const bool branch_taken_0x19714c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197150u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19714c) {
            ctx->pc = 0x197174u;
            goto label_197174;
        }
    }
    ctx->pc = 0x197154u;
label_197154:
    // 0x197154: 0xeb3823
    ctx->pc = 0x197154u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x197158: 0x50c00001
    ctx->pc = 0x197158u;
    {
        const bool branch_taken_0x197158 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x197158) {
            ctx->pc = 0x19715Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x197160u;
            goto label_197160;
        }
    }
    ctx->pc = 0x197160u;
label_197160:
    // 0x197160: 0xe6001a
    ctx->pc = 0x197160u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x197164: 0x1012
    ctx->pc = 0x197164u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x197168: 0x1810
    ctx->pc = 0x197168u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x19716c: 0x24450001
    ctx->pc = 0x19716cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
label_197170:
    // 0x197170: 0x60382d
    ctx->pc = 0x197170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_197174:
    // 0x197174: 0x1ac1018
    ctx->pc = 0x197174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x197178: 0x10000011
    ctx->pc = 0x197178u;
    {
        const bool branch_taken_0x197178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19717Cu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x197178) {
            ctx->pc = 0x1971C0u;
            goto label_1971c0;
        }
    }
    ctx->pc = 0x197180u;
label_197180:
    // 0x197180: 0xf2001a
    ctx->pc = 0x197180u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_197184:
    // 0x197184: 0x2403003c
    ctx->pc = 0x197184u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x197188: 0x52400001
    ctx->pc = 0x197188u;
    {
        const bool branch_taken_0x197188 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x197188) {
            ctx->pc = 0x19718Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x197190u;
            goto label_197190;
        }
    }
    ctx->pc = 0x197190u;
label_197190:
    // 0x197190: 0x2406003c
    ctx->pc = 0x197190u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
    // 0x197194: 0x2405003c
    ctx->pc = 0x197194u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    // 0x197198: 0x2404003c
    ctx->pc = 0x197198u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x19719c: 0x1012
    ctx->pc = 0x19719cu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1971a0: 0x3810
    ctx->pc = 0x1971a0u;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x1971a4: 0x43001a
    ctx->pc = 0x1971a4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1971a8: 0x1012
    ctx->pc = 0x1971a8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1971ac: 0x2810
    ctx->pc = 0x1971acu;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x1971b0: 0x43001a
    ctx->pc = 0x1971b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1971b4: 0x1012
    ctx->pc = 0x1971b4u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1971b8: 0x2010
    ctx->pc = 0x1971b8u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x1971bc: 0x40402d
    ctx->pc = 0x1971bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1971c0:
    // 0x1971c0: 0xae870014
    ctx->pc = 0x1971c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 7));
    // 0x1971c4: 0xae880008
    ctx->pc = 0x1971c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 8));
    // 0x1971c8: 0xae84000c
    ctx->pc = 0x1971c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
    // 0x1971cc: 0xae850010
    ctx->pc = 0x1971ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 5));
    // 0x1971d0: 0xdfbf0050
    ctx->pc = 0x1971d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1971d4: 0xdfb40040
    ctx->pc = 0x1971d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1971d8: 0xdfb30030
    ctx->pc = 0x1971d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1971dc: 0xdfb20020
    ctx->pc = 0x1971dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1971e0: 0xdfb10010
    ctx->pc = 0x1971e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1971e4: 0xdfb00000
    ctx->pc = 0x1971e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1971e8: 0x3e00008
    ctx->pc = 0x1971E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1971ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1970ACu: goto label_1970ac;
            case 0x1970B8u: goto label_1970b8;
            case 0x1970DCu: goto label_1970dc;
            case 0x197110u: goto label_197110;
            case 0x197124u: goto label_197124;
            case 0x197130u: goto label_197130;
            case 0x197154u: goto label_197154;
            case 0x197160u: goto label_197160;
            case 0x197170u: goto label_197170;
            case 0x197174u: goto label_197174;
            case 0x197180u: goto label_197180;
            case 0x197184u: goto label_197184;
            case 0x197190u: goto label_197190;
            case 0x1971C0u: goto label_1971c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1971F0u;
}
