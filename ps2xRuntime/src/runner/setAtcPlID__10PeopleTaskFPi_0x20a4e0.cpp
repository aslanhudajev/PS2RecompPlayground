#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setAtcPlID__10PeopleTaskFPi
// Address: 0x20a4e0 - 0x20a6b0
void setAtcPlID__10PeopleTaskFPi_0x20a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setAtcPlID__10PeopleTaskFPi");


    ctx->pc = 0x20a4e0u;

    // 0x20a4e0: 0x27bdff90
    ctx->pc = 0x20a4e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20a4e4: 0x7fbf0060
    ctx->pc = 0x20a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x20a4e8: 0x7fb40050
    ctx->pc = 0x20a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x20a4ec: 0x7fb30040
    ctx->pc = 0x20a4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x20a4f0: 0x7fb20030
    ctx->pc = 0x20a4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20a4f4: 0x7fb10020
    ctx->pc = 0x20a4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20a4f8: 0x7fb00010
    ctx->pc = 0x20a4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20a4fc: 0xe7b40000
    ctx->pc = 0x20a4fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20a500: 0xa0801e00
    ctx->pc = 0x20a500u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7680), (uint8_t)GPR_U32(ctx, 0));
    // 0x20a504: 0x7080a628
    ctx->pc = 0x20a504u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20a508: 0x3c010050
    ctx->pc = 0x20a508u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20a50c: 0x8424e3e8
    ctx->pc = 0x20a50cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960104)));
    // 0x20a510: 0x24030002
    ctx->pc = 0x20a510u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a514: 0x10830009
    ctx->pc = 0x20A514u;
    {
        const bool branch_taken_0x20a514 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20A518u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20a514) {
            ctx->pc = 0x20A53Cu;
            goto label_20a53c;
        }
    }
    ctx->pc = 0x20A51Cu;
    // 0x20a51c: 0x24030001
    ctx->pc = 0x20a51cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a520: 0x10830003
    ctx->pc = 0x20A520u;
    {
        const bool branch_taken_0x20a520 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20a520) {
            ctx->pc = 0x20A530u;
            goto label_20a530;
        }
    }
    ctx->pc = 0x20A528u;
    // 0x20a528: 0x1000003e
    ctx->pc = 0x20A528u;
    {
        const bool branch_taken_0x20a528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A52Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937440)));
        if (branch_taken_0x20a528) {
            ctx->pc = 0x20A624u;
            goto label_20a624;
        }
    }
    ctx->pc = 0x20A530u;
label_20a530:
    // 0x20a530: 0x83838b8c
    ctx->pc = 0x20a530u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937484)));
    // 0x20a534: 0x1000003a
    ctx->pc = 0x20A534u;
    {
        const bool branch_taken_0x20a534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A538u;
        WRITE8(ADD32(GPR_U32(ctx, 20), 7680), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x20a534) {
            ctx->pc = 0x20A620u;
            goto label_20a620;
        }
    }
    ctx->pc = 0x20A53Cu;
label_20a53c:
    // 0x20a53c: 0x8f838b74
    ctx->pc = 0x20a53cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x20a540: 0x10600003
    ctx->pc = 0x20A540u;
    {
        const bool branch_taken_0x20a540 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a540) {
            ctx->pc = 0x20A550u;
            goto label_20a550;
        }
    }
    ctx->pc = 0x20A548u;
    // 0x20a548: 0x10000035
    ctx->pc = 0x20A548u;
    {
        const bool branch_taken_0x20a548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A54Cu;
        WRITE8(ADD32(GPR_U32(ctx, 20), 7680), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x20a548) {
            ctx->pc = 0x20A620u;
            goto label_20a620;
        }
    }
    ctx->pc = 0x20A550u;
label_20a550:
    // 0x20a550: 0x8f838b70
    ctx->pc = 0x20a550u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x20a554: 0x10600004
    ctx->pc = 0x20A554u;
    {
        const bool branch_taken_0x20a554 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A558u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x20a554) {
            ctx->pc = 0x20A568u;
            goto label_20a568;
        }
    }
    ctx->pc = 0x20A55Cu;
    // 0x20a55c: 0x24030001
    ctx->pc = 0x20a55cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a560: 0x1000002f
    ctx->pc = 0x20A560u;
    {
        const bool branch_taken_0x20a560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A564u;
        WRITE8(ADD32(GPR_U32(ctx, 20), 7680), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x20a560) {
            ctx->pc = 0x20A620u;
            goto label_20a620;
        }
    }
    ctx->pc = 0x20A568u;
label_20a568:
    // 0x20a568: 0x8c23dd30
    ctx->pc = 0x20a568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294958384)));
    // 0x20a56c: 0x3c010050
    ctx->pc = 0x20a56cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20a570: 0x8c22e078
    ctx->pc = 0x20a570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294959224)));
    // 0x20a574: 0x43082a
    ctx->pc = 0x20a574u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x20a578: 0x10200004
    ctx->pc = 0x20A578u;
    {
        const bool branch_taken_0x20a578 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A57Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20a578) {
            ctx->pc = 0x20A58Cu;
            goto label_20a58c;
        }
    }
    ctx->pc = 0x20A580u;
    // 0x20a580: 0x70008628
    ctx->pc = 0x20a580u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a584: 0x10000002
    ctx->pc = 0x20A584u;
    {
        const bool branch_taken_0x20a584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A588u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20a584) {
            ctx->pc = 0x20A590u;
            goto label_20a590;
        }
    }
    ctx->pc = 0x20A58Cu;
label_20a58c:
    // 0x20a58c: 0x70008e28
    ctx->pc = 0x20a58cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20a590:
    // 0x20a590: 0x111100
    ctx->pc = 0x20a590u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
    // 0x20a594: 0x511823
    ctx->pc = 0x20a594u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20a598: 0x310c0
    ctx->pc = 0x20a598u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x20a59c: 0x431023
    ctx->pc = 0x20a59cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a5a0: 0x218c0
    ctx->pc = 0x20a5a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x20a5a4: 0x3c020050
    ctx->pc = 0x20a5a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20a5a8: 0x2442dd30
    ctx->pc = 0x20a5a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958384));
    // 0x20a5ac: 0x431021
    ctx->pc = 0x20a5acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a5b0: 0x8c520000
    ctx->pc = 0x20a5b0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a5b4: 0x101100
    ctx->pc = 0x20a5b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
    // 0x20a5b8: 0x501823
    ctx->pc = 0x20a5b8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20a5bc: 0x310c0
    ctx->pc = 0x20a5bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x20a5c0: 0x431023
    ctx->pc = 0x20a5c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a5c4: 0x218c0
    ctx->pc = 0x20a5c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x20a5c8: 0x3c020050
    ctx->pc = 0x20a5c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20a5cc: 0x2442dd30
    ctx->pc = 0x20a5ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958384));
    // 0x20a5d0: 0x431021
    ctx->pc = 0x20a5d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a5d4: 0x8c420000
    ctx->pc = 0x20a5d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a5d8: 0x521021
    ctx->pc = 0x20a5d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20a5dc: 0x44820000
    ctx->pc = 0x20a5dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20a5e0: 0xc069fc4
    ctx->pc = 0x20A5E0u;
    SET_GPR_U32(ctx, 31, 0x20A5E8u);
    ctx->pc = 0x20A5E4u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x1A7F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRandom_0x1a7f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A5E8u; }
        else if (ctx->pc != 0x20A5E8u) { ctx->pc = 0x20A5E8u; }
    }
    if (ctx->pc != 0x20A5E8u) { return; }
    ctx->pc = 0x20A5E8u;
    // 0x20a5e8: 0x4600a042
    ctx->pc = 0x20a5e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x20a5ec: 0x44920000
    ctx->pc = 0x20a5ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 18);
    // 0x20a5f0: 0x0
    ctx->pc = 0x20a5f0u;
    // NOP
    // 0x20a5f4: 0x46800020
    ctx->pc = 0x20a5f4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20a5f8: 0x46000834
    ctx->pc = 0x20a5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a5fc: 0x0
    ctx->pc = 0x20a5fcu;
    // NOP
    // 0x20a600: 0x45010002
    ctx->pc = 0x20A600u;
    {
        const bool branch_taken_0x20a600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A604u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20a600) {
            ctx->pc = 0x20A60Cu;
            goto label_20a60c;
        }
    }
    ctx->pc = 0x20A608u;
    // 0x20a608: 0x70001e28
    ctx->pc = 0x20a608u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20a60c:
    // 0x20a60c: 0x10600003
    ctx->pc = 0x20A60Cu;
    {
        const bool branch_taken_0x20a60c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a60c) {
            ctx->pc = 0x20A61Cu;
            goto label_20a61c;
        }
    }
    ctx->pc = 0x20A614u;
    // 0x20a614: 0x10000002
    ctx->pc = 0x20A614u;
    {
        const bool branch_taken_0x20a614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A618u;
        WRITE8(ADD32(GPR_U32(ctx, 20), 7680), (uint8_t)GPR_U32(ctx, 17));
        if (branch_taken_0x20a614) {
            ctx->pc = 0x20A620u;
            goto label_20a620;
        }
    }
    ctx->pc = 0x20A61Cu;
label_20a61c:
    // 0x20a61c: 0xa2901e00
    ctx->pc = 0x20a61cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7680), (uint8_t)GPR_U32(ctx, 16));
label_20a620:
    // 0x20a620: 0x8f838b60
    ctx->pc = 0x20a620u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937440)));
label_20a624:
    // 0x20a624: 0x14600005
    ctx->pc = 0x20A624u;
    {
        const bool branch_taken_0x20a624 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A628u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x20a624) {
            ctx->pc = 0x20A63Cu;
            goto label_20a63c;
        }
    }
    ctx->pc = 0x20A62Cu;
    // 0x20a62c: 0x8f838b64
    ctx->pc = 0x20a62cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x20a630: 0x10600004
    ctx->pc = 0x20A630u;
    {
        const bool branch_taken_0x20a630 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a630) {
            ctx->pc = 0x20A644u;
            goto label_20a644;
        }
    }
    ctx->pc = 0x20A638u;
    // 0x20a638: 0x2403ffff
    ctx->pc = 0x20a638u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20a63c:
    // 0x20a63c: 0x10000013
    ctx->pc = 0x20A63Cu;
    {
        const bool branch_taken_0x20a63c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A640u;
        WRITE8(ADD32(GPR_U32(ctx, 20), 7680), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x20a63c) {
            ctx->pc = 0x20A68Cu;
            goto label_20a68c;
        }
    }
    ctx->pc = 0x20A644u;
label_20a644:
    // 0x20a644: 0x82831e00
    ctx->pc = 0x20a644u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 7680)));
    // 0x20a648: 0x27828b60
    ctx->pc = 0x20a648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
    // 0x20a64c: 0x24040001
    ctx->pc = 0x20a64cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a650: 0x31880
    ctx->pc = 0x20a650u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a654: 0x431021
    ctx->pc = 0x20a654u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a658: 0xc069fb8
    ctx->pc = 0x20A658u;
    SET_GPR_U32(ctx, 31, 0x20A660u);
    ctx->pc = 0x20A65Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A660u; }
        else if (ctx->pc != 0x20A660u) { ctx->pc = 0x20A660u; }
    }
    if (ctx->pc != 0x20A660u) { return; }
    ctx->pc = 0x20A660u;
    // 0x20a660: 0x8e630004
    ctx->pc = 0x20a660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x20a664: 0x14600002
    ctx->pc = 0x20A664u;
    {
        const bool branch_taken_0x20a664 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20A668u;
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x20a664) {
            ctx->pc = 0x20A670u;
            goto label_20a670;
        }
    }
    ctx->pc = 0x20A66Cu;
    // 0x20a66c: 0x1cd
    ctx->pc = 0x20a66cu;
    runtime->handleBreak(rdram, ctx);
label_20a670:
    // 0x20a670: 0x2810
    ctx->pc = 0x20a670u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x20a674: 0x8e630000
    ctx->pc = 0x20a674u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20a678: 0x52040
    ctx->pc = 0x20a678u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x20a67c: 0x852021
    ctx->pc = 0x20a67cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20a680: 0x42080
    ctx->pc = 0x20a680u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20a684: 0x641821
    ctx->pc = 0x20a684u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20a688: 0xae831dec
    ctx->pc = 0x20a688u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7660), GPR_U32(ctx, 3));
label_20a68c:
    // 0x20a68c: 0x7bbf0060
    ctx->pc = 0x20a68cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20a690: 0x7bb40050
    ctx->pc = 0x20a690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20a694: 0x7bb30040
    ctx->pc = 0x20a694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a698: 0x7bb20030
    ctx->pc = 0x20a698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a69c: 0x7bb10020
    ctx->pc = 0x20a69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a6a0: 0x7bb00010
    ctx->pc = 0x20a6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a6a4: 0xc7b40000
    ctx->pc = 0x20a6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20a6a8: 0x3e00008
    ctx->pc = 0x20A6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A6ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A530u: goto label_20a530;
            case 0x20A53Cu: goto label_20a53c;
            case 0x20A550u: goto label_20a550;
            case 0x20A568u: goto label_20a568;
            case 0x20A58Cu: goto label_20a58c;
            case 0x20A590u: goto label_20a590;
            case 0x20A60Cu: goto label_20a60c;
            case 0x20A61Cu: goto label_20a61c;
            case 0x20A620u: goto label_20a620;
            case 0x20A624u: goto label_20a624;
            case 0x20A63Cu: goto label_20a63c;
            case 0x20A644u: goto label_20a644;
            case 0x20A670u: goto label_20a670;
            case 0x20A68Cu: goto label_20a68c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A6B0u;
}
