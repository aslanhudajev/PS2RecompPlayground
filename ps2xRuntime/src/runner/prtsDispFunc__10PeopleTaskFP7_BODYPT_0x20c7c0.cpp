#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: prtsDispFunc__10PeopleTaskFP7_BODYPT
// Address: 0x20c7c0 - 0x20ce10
void prtsDispFunc__10PeopleTaskFP7_BODYPT_0x20c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("prtsDispFunc__10PeopleTaskFP7_BODYPT");


    ctx->pc = 0x20c7c0u;

    // 0x20c7c0: 0x27bdff00
    ctx->pc = 0x20c7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x20c7c4: 0x7fbf0070
    ctx->pc = 0x20c7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x20c7c8: 0x7fb40060
    ctx->pc = 0x20c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x20c7cc: 0x7fb30050
    ctx->pc = 0x20c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x20c7d0: 0x7fb20040
    ctx->pc = 0x20c7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x20c7d4: 0x7fb10030
    ctx->pc = 0x20c7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20c7d8: 0x7fb00020
    ctx->pc = 0x20c7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20c7dc: 0xe7b90014
    ctx->pc = 0x20c7dcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20c7e0: 0xe7b80010
    ctx->pc = 0x20c7e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20c7e4: 0xe7b7000c
    ctx->pc = 0x20c7e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x20c7e8: 0xe7b60008
    ctx->pc = 0x20c7e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20c7ec: 0xe7b50004
    ctx->pc = 0x20c7ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20c7f0: 0xe7b40000
    ctx->pc = 0x20c7f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20c7f4: 0x84a60020
    ctx->pc = 0x20c7f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x20c7f8: 0x70808628
    ctx->pc = 0x20c7f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20c7fc: 0x24030006
    ctx->pc = 0x20c7fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x20c800: 0x62900
    ctx->pc = 0x20c800u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 4));
    // 0x20c804: 0xa62823
    ctx->pc = 0x20c804u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20c808: 0x52900
    ctx->pc = 0x20c808u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x20c80c: 0x852021
    ctx->pc = 0x20c80cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20c810: 0x10c30126
    ctx->pc = 0x20C810u;
    {
        const bool branch_taken_0x20c810 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x20C814u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 160));
        if (branch_taken_0x20c810) {
            ctx->pc = 0x20CCACu;
            goto label_20ccac;
        }
    }
    ctx->pc = 0x20C818u;
    // 0x20c818: 0x24030002
    ctx->pc = 0x20c818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c81c: 0x10c30017
    ctx->pc = 0x20C81Cu;
    {
        const bool branch_taken_0x20c81c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x20C820u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x20c81c) {
            ctx->pc = 0x20C87Cu;
            goto label_20c87c;
        }
    }
    ctx->pc = 0x20C824u;
    // 0x20c824: 0x10c3000d
    ctx->pc = 0x20C824u;
    {
        const bool branch_taken_0x20c824 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x20C828u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x20c824) {
            ctx->pc = 0x20C85Cu;
            goto label_20c85c;
        }
    }
    ctx->pc = 0x20C82Cu;
    // 0x20c82c: 0x10c3000b
    ctx->pc = 0x20C82Cu;
    {
        const bool branch_taken_0x20c82c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x20C830u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x20c82c) {
            ctx->pc = 0x20C85Cu;
            goto label_20c85c;
        }
    }
    ctx->pc = 0x20C834u;
    // 0x20c834: 0x10c30009
    ctx->pc = 0x20C834u;
    {
        const bool branch_taken_0x20c834 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x20C838u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x20c834) {
            ctx->pc = 0x20C85Cu;
            goto label_20c85c;
        }
    }
    ctx->pc = 0x20C83Cu;
    // 0x20c83c: 0x10c30007
    ctx->pc = 0x20C83Cu;
    {
        const bool branch_taken_0x20c83c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x20C840u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x20c83c) {
            ctx->pc = 0x20C85Cu;
            goto label_20c85c;
        }
    }
    ctx->pc = 0x20C844u;
    // 0x20c844: 0x10c30005
    ctx->pc = 0x20C844u;
    {
        const bool branch_taken_0x20c844 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x20C848u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x20c844) {
            ctx->pc = 0x20C85Cu;
            goto label_20c85c;
        }
    }
    ctx->pc = 0x20C84Cu;
    // 0x20c84c: 0x10c30003
    ctx->pc = 0x20C84Cu;
    {
        const bool branch_taken_0x20c84c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x20c84c) {
            ctx->pc = 0x20C85Cu;
            goto label_20c85c;
        }
    }
    ctx->pc = 0x20C854u;
    // 0x20c854: 0x10000148
    ctx->pc = 0x20C854u;
    {
        const bool branch_taken_0x20c854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C858u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20c854) {
            ctx->pc = 0x20CD78u;
            goto label_20cd78;
        }
    }
    ctx->pc = 0x20C85Cu;
label_20c85c:
    // 0x20c85c: 0x8e031d74
    ctx->pc = 0x20c85cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7540)));
    // 0x20c860: 0x30630040
    ctx->pc = 0x20c860u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 64));
    // 0x20c864: 0x10600003
    ctx->pc = 0x20C864u;
    {
        const bool branch_taken_0x20c864 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C868u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20c864) {
            ctx->pc = 0x20C874u;
            goto label_20c874;
        }
    }
    ctx->pc = 0x20C86Cu;
    // 0x20c86c: 0x10000142
    ctx->pc = 0x20C86Cu;
    {
        const bool branch_taken_0x20c86c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C870u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20c86c) {
            ctx->pc = 0x20CD78u;
            goto label_20cd78;
        }
    }
    ctx->pc = 0x20C874u;
label_20c874:
    // 0x20c874: 0x10000140
    ctx->pc = 0x20C874u;
    {
        const bool branch_taken_0x20c874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c874) {
            ctx->pc = 0x20CD78u;
            goto label_20cd78;
        }
    }
    ctx->pc = 0x20C87Cu;
label_20c87c:
    // 0x20c87c: 0x8f848c48
    ctx->pc = 0x20c87cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20c880: 0x8c830004
    ctx->pc = 0x20c880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20c884: 0x31040
    ctx->pc = 0x20c884u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20c888: 0x431021
    ctx->pc = 0x20c888u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c88c: 0x21080
    ctx->pc = 0x20c88cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c890: 0x431021
    ctx->pc = 0x20c890u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c894: 0x21100
    ctx->pc = 0x20c894u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20c898: 0x821021
    ctx->pc = 0x20c898u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20c89c: 0xc06c038
    ctx->pc = 0x20C89Cu;
    SET_GPR_U32(ctx, 31, 0x20C8A4u);
    ctx->pc = 0x20C8A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8A4u; }
        else if (ctx->pc != 0x20C8A4u) { ctx->pc = 0x20C8A4u; }
    }
    if (ctx->pc != 0x20C8A4u) { return; }
    ctx->pc = 0x20C8A4u;
    // 0x20c8a4: 0xc6200060
    ctx->pc = 0x20c8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c8a8: 0x27a400a0
    ctx->pc = 0x20c8a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x20c8ac: 0x27a500b0
    ctx->pc = 0x20c8acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    // 0x20c8b0: 0xe7a000a0
    ctx->pc = 0x20c8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x20c8b4: 0xc6200064
    ctx->pc = 0x20c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c8b8: 0xe7a000a4
    ctx->pc = 0x20c8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x20c8bc: 0xc6200068
    ctx->pc = 0x20c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c8c0: 0xc06bf00
    ctx->pc = 0x20C8C0u;
    SET_GPR_U32(ctx, 31, 0x20C8C8u);
    ctx->pc = 0x20C8C4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8C8u; }
        else if (ctx->pc != 0x20C8C8u) { ctx->pc = 0x20C8C8u; }
    }
    if (ctx->pc != 0x20C8C8u) { return; }
    ctx->pc = 0x20C8C8u;
    // 0x20c8c8: 0x8f858c48
    ctx->pc = 0x20c8c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20c8cc: 0xc7b400b0
    ctx->pc = 0x20c8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20c8d0: 0xc7b500b4
    ctx->pc = 0x20c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20c8d4: 0xc7b600b8
    ctx->pc = 0x20c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20c8d8: 0x8ca30004
    ctx->pc = 0x20c8d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20c8dc: 0x31040
    ctx->pc = 0x20c8dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20c8e0: 0x431021
    ctx->pc = 0x20c8e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c8e4: 0x21080
    ctx->pc = 0x20c8e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c8e8: 0x431021
    ctx->pc = 0x20c8e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c8ec: 0x21100
    ctx->pc = 0x20c8ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20c8f0: 0x451021
    ctx->pc = 0x20c8f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20c8f4: 0xc4570090
    ctx->pc = 0x20c8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20c8f8: 0xc4580094
    ctx->pc = 0x20c8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x20c8fc: 0xc4590098
    ctx->pc = 0x20c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x20c900: 0xc06c038
    ctx->pc = 0x20C900u;
    SET_GPR_U32(ctx, 31, 0x20C908u);
    ctx->pc = 0x20C904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 448));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C908u; }
        else if (ctx->pc != 0x20C908u) { ctx->pc = 0x20C908u; }
    }
    if (ctx->pc != 0x20C908u) { return; }
    ctx->pc = 0x20C908u;
    // 0x20c908: 0xc6001cd0
    ctx->pc = 0x20c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c90c: 0x3c023f80
    ctx->pc = 0x20c90cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x20c910: 0x44820800
    ctx->pc = 0x20c910u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x20c914: 0x0
    ctx->pc = 0x20c914u;
    // NOP
    // 0x20c918: 0x46000832
    ctx->pc = 0x20c918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c91c: 0x0
    ctx->pc = 0x20c91cu;
    // NOP
    // 0x20c920: 0x45000005
    ctx->pc = 0x20C920u;
    {
        const bool branch_taken_0x20c920 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20C924u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20c920) {
            ctx->pc = 0x20C938u;
            goto label_20c938;
        }
    }
    ctx->pc = 0x20C928u;
    // 0x20c928: 0xc0693c8
    ctx->pc = 0x20C928u;
    SET_GPR_U32(ctx, 31, 0x20C930u);
    ctx->pc = 0x1A4F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlQuickInvertMatrix_0x1a4f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C930u; }
        else if (ctx->pc != 0x20C930u) { ctx->pc = 0x20C930u; }
    }
    if (ctx->pc != 0x20C930u) { return; }
    ctx->pc = 0x20C930u;
    // 0x20c930: 0x10000004
    ctx->pc = 0x20C930u;
    {
        const bool branch_taken_0x20c930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C934u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 48));
        if (branch_taken_0x20c930) {
            ctx->pc = 0x20C944u;
            goto label_20c944;
        }
    }
    ctx->pc = 0x20C938u;
label_20c938:
    // 0x20c938: 0xc0691c4
    ctx->pc = 0x20C938u;
    SET_GPR_U32(ctx, 31, 0x20C940u);
    ctx->pc = 0x1A4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInvertMatrix_0x1a4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C940u; }
        else if (ctx->pc != 0x20C940u) { ctx->pc = 0x20C940u; }
    }
    if (ctx->pc != 0x20C940u) { return; }
    ctx->pc = 0x20C940u;
    // 0x20c940: 0x26240030
    ctx->pc = 0x20c940u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 48));
label_20c944:
    // 0x20c944: 0xc06c04e
    ctx->pc = 0x20C944u;
    SET_GPR_U32(ctx, 31, 0x20C94Cu);
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C94Cu; }
        else if (ctx->pc != 0x20C94Cu) { ctx->pc = 0x20C94Cu; }
    }
    if (ctx->pc != 0x20C94Cu) { return; }
    ctx->pc = 0x20C94Cu;
    // 0x20c94c: 0x27b20084
    ctx->pc = 0x20c94cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 132));
    // 0x20c950: 0x27b30088
    ctx->pc = 0x20c950u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 136));
    // 0x20c954: 0x27a40080
    ctx->pc = 0x20c954u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    // 0x20c958: 0x72402e28
    ctx->pc = 0x20c958u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x20c95c: 0xc072480
    ctx->pc = 0x20C95Cu;
    SET_GPR_U32(ctx, 31, 0x20C964u);
    ctx->pc = 0x20C960u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C9200u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRotYXZ__FPiPiPi_0x1c9200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C964u; }
        else if (ctx->pc != 0x20C964u) { ctx->pc = 0x20C964u; }
    }
    if (ctx->pc != 0x20C964u) { return; }
    ctx->pc = 0x20C964u;
    // 0x20c964: 0x8e03000c
    ctx->pc = 0x20c964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20c968: 0x3c020008
    ctx->pc = 0x20c968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x20c96c: 0x621024
    ctx->pc = 0x20c96cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c970: 0x1040000b
    ctx->pc = 0x20C970u;
    {
        const bool branch_taken_0x20c970 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c970) {
            ctx->pc = 0x20C9A0u;
            goto label_20c9a0;
        }
    }
    ctx->pc = 0x20C978u;
    // 0x20c978: 0x8fa30080
    ctx->pc = 0x20c978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20c97c: 0x3c023dcc
    ctx->pc = 0x20c97cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x20c980: 0x3442cccd
    ctx->pc = 0x20c980u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x20c984: 0x4482a000
    ctx->pc = 0x20c984u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x20c988: 0xafa30090
    ctx->pc = 0x20c988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x20c98c: 0x8e420000
    ctx->pc = 0x20c98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20c990: 0xafa20094
    ctx->pc = 0x20c990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x20c994: 0x8e620000
    ctx->pc = 0x20c994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20c998: 0x1000004e
    ctx->pc = 0x20C998u;
    {
        const bool branch_taken_0x20c998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C99Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
        if (branch_taken_0x20c998) {
            ctx->pc = 0x20CAD4u;
            goto label_20cad4;
        }
    }
    ctx->pc = 0x20C9A0u;
label_20c9a0:
    // 0x20c9a0: 0xc06c20d
    ctx->pc = 0x20C9A0u;
    SET_GPR_U32(ctx, 31, 0x20C9A8u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C9A8u; }
        else if (ctx->pc != 0x20C9A8u) { ctx->pc = 0x20C9A8u; }
    }
    if (ctx->pc != 0x20C9A8u) { return; }
    ctx->pc = 0x20C9A8u;
    // 0x20c9a8: 0x8f848c48
    ctx->pc = 0x20c9a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20c9ac: 0x8c830004
    ctx->pc = 0x20c9acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20c9b0: 0x31040
    ctx->pc = 0x20c9b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20c9b4: 0x431021
    ctx->pc = 0x20c9b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c9b8: 0x21080
    ctx->pc = 0x20c9b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c9bc: 0x431021
    ctx->pc = 0x20c9bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20c9c0: 0x21100
    ctx->pc = 0x20c9c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20c9c4: 0x821021
    ctx->pc = 0x20c9c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20c9c8: 0xc06c038
    ctx->pc = 0x20C9C8u;
    SET_GPR_U32(ctx, 31, 0x20C9D0u);
    ctx->pc = 0x20C9CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C9D0u; }
        else if (ctx->pc != 0x20C9D0u) { ctx->pc = 0x20C9D0u; }
    }
    if (ctx->pc != 0x20C9D0u) { return; }
    ctx->pc = 0x20C9D0u;
    // 0x20c9d0: 0xc06c04e
    ctx->pc = 0x20C9D0u;
    SET_GPR_U32(ctx, 31, 0x20C9D8u);
    ctx->pc = 0x20C9D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 448));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C9D8u; }
        else if (ctx->pc != 0x20C9D8u) { ctx->pc = 0x20C9D8u; }
    }
    if (ctx->pc != 0x20C9D8u) { return; }
    ctx->pc = 0x20C9D8u;
    // 0x20c9d8: 0xafa000c0
    ctx->pc = 0x20c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x20c9dc: 0xafa000c4
    ctx->pc = 0x20c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x20c9e0: 0x27a400c0
    ctx->pc = 0x20c9e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    // 0x20c9e4: 0xc06c1ca
    ctx->pc = 0x20C9E4u;
    SET_GPR_U32(ctx, 31, 0x20C9ECu);
    ctx->pc = 0x20C9E8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->pc = 0x1B0728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0728_0x1b0728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C9ECu; }
        else if (ctx->pc != 0x20C9ECu) { ctx->pc = 0x20C9ECu; }
    }
    if (ctx->pc != 0x20C9ECu) { return; }
    ctx->pc = 0x20C9ECu;
    // 0x20c9ec: 0xc6011cd0
    ctx->pc = 0x20c9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c9f0: 0x3c023f80
    ctx->pc = 0x20c9f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x20c9f4: 0x44820000
    ctx->pc = 0x20c9f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20c9f8: 0x0
    ctx->pc = 0x20c9f8u;
    // NOP
    // 0x20c9fc: 0x46010032
    ctx->pc = 0x20c9fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ca00: 0x0
    ctx->pc = 0x20ca00u;
    // NOP
    // 0x20ca04: 0x45000005
    ctx->pc = 0x20CA04u;
    {
        const bool branch_taken_0x20ca04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20CA08u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ca04) {
            ctx->pc = 0x20CA1Cu;
            goto label_20ca1c;
        }
    }
    ctx->pc = 0x20CA0Cu;
    // 0x20ca0c: 0xc0693c8
    ctx->pc = 0x20CA0Cu;
    SET_GPR_U32(ctx, 31, 0x20CA14u);
    ctx->pc = 0x1A4F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlQuickInvertMatrix_0x1a4f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CA14u; }
        else if (ctx->pc != 0x20CA14u) { ctx->pc = 0x20CA14u; }
    }
    if (ctx->pc != 0x20CA14u) { return; }
    ctx->pc = 0x20CA14u;
    // 0x20ca14: 0x10000004
    ctx->pc = 0x20CA14u;
    {
        const bool branch_taken_0x20ca14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CA18u;
        ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
        if (branch_taken_0x20ca14) {
            ctx->pc = 0x20CA28u;
            goto label_20ca28;
        }
    }
    ctx->pc = 0x20CA1Cu;
label_20ca1c:
    // 0x20ca1c: 0xc0691c4
    ctx->pc = 0x20CA1Cu;
    SET_GPR_U32(ctx, 31, 0x20CA24u);
    ctx->pc = 0x1A4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInvertMatrix_0x1a4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CA24u; }
        else if (ctx->pc != 0x20CA24u) { ctx->pc = 0x20CA24u; }
    }
    if (ctx->pc != 0x20CA24u) { return; }
    ctx->pc = 0x20CA24u;
    // 0x20ca24: 0x4614b801
    ctx->pc = 0x20ca24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
label_20ca28:
    // 0x20ca28: 0x27a400d0
    ctx->pc = 0x20ca28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
    // 0x20ca2c: 0x27a500e0
    ctx->pc = 0x20ca2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 224));
    // 0x20ca30: 0xe7a000d0
    ctx->pc = 0x20ca30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x20ca34: 0x4615c041
    ctx->pc = 0x20ca34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[21]);
    // 0x20ca38: 0x4616c801
    ctx->pc = 0x20ca38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[25], ctx->f[22]);
    // 0x20ca3c: 0xe7a100d4
    ctx->pc = 0x20ca3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x20ca40: 0xc06bf00
    ctx->pc = 0x20CA40u;
    SET_GPR_U32(ctx, 31, 0x20CA48u);
    ctx->pc = 0x20CA44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CA48u; }
        else if (ctx->pc != 0x20CA48u) { ctx->pc = 0x20CA48u; }
    }
    if (ctx->pc != 0x20CA48u) { return; }
    ctx->pc = 0x20CA48u;
    // 0x20ca48: 0xc7ad00e4
    ctx->pc = 0x20ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20ca4c: 0x3c023f80
    ctx->pc = 0x20ca4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x20ca50: 0x44820000
    ctx->pc = 0x20ca50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20ca54: 0x27b40094
    ctx->pc = 0x20ca54u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 148));
    // 0x20ca58: 0xc7ac00e0
    ctx->pc = 0x20ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20ca5c: 0xc7ae00e8
    ctx->pc = 0x20ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20ca60: 0x46006b40
    ctx->pc = 0x20ca60u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x20ca64: 0x27a40090
    ctx->pc = 0x20ca64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x20ca68: 0xc072348
    ctx->pc = 0x20CA68u;
    SET_GPR_U32(ctx, 31, 0x20CA70u);
    ctx->pc = 0x20CA6Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CA70u; }
        else if (ctx->pc != 0x20CA70u) { ctx->pc = 0x20CA70u; }
    }
    if (ctx->pc != 0x20CA70u) { return; }
    ctx->pc = 0x20CA70u;
    // 0x20ca70: 0x87a20090
    ctx->pc = 0x20ca70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20ca74: 0x28411801
    ctx->pc = 0x20ca74u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 6145));
    // 0x20ca78: 0x14200004
    ctx->pc = 0x20CA78u;
    {
        const bool branch_taken_0x20ca78 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x20CA7Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294959104));
        if (branch_taken_0x20ca78) {
            ctx->pc = 0x20CA8Cu;
            goto label_20ca8c;
        }
    }
    ctx->pc = 0x20CA80u;
    // 0x20ca80: 0x24021800
    ctx->pc = 0x20ca80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6144));
    // 0x20ca84: 0x10000004
    ctx->pc = 0x20CA84u;
    {
        const bool branch_taken_0x20ca84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CA88u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        if (branch_taken_0x20ca84) {
            ctx->pc = 0x20CA98u;
            goto label_20ca98;
        }
    }
    ctx->pc = 0x20CA8Cu;
label_20ca8c:
    // 0x20ca8c: 0x10200002
    ctx->pc = 0x20CA8Cu;
    {
        const bool branch_taken_0x20ca8c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CA90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294959104));
        if (branch_taken_0x20ca8c) {
            ctx->pc = 0x20CA98u;
            goto label_20ca98;
        }
    }
    ctx->pc = 0x20CA94u;
    // 0x20ca94: 0xafa20090
    ctx->pc = 0x20ca94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_20ca98:
    // 0x20ca98: 0x86820000
    ctx->pc = 0x20ca98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20ca9c: 0x28413801
    ctx->pc = 0x20ca9cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 14337));
    // 0x20caa0: 0x14200004
    ctx->pc = 0x20CAA0u;
    {
        const bool branch_taken_0x20caa0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x20CAA4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294952960));
        if (branch_taken_0x20caa0) {
            ctx->pc = 0x20CAB4u;
            goto label_20cab4;
        }
    }
    ctx->pc = 0x20CAA8u;
    // 0x20caa8: 0x24023800
    ctx->pc = 0x20caa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14336));
    // 0x20caac: 0x10000005
    ctx->pc = 0x20CAACu;
    {
        const bool branch_taken_0x20caac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CAB0u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x20caac) {
            ctx->pc = 0x20CAC4u;
            goto label_20cac4;
        }
    }
    ctx->pc = 0x20CAB4u;
label_20cab4:
    // 0x20cab4: 0x10200004
    ctx->pc = 0x20CAB4u;
    {
        const bool branch_taken_0x20cab4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CAB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16025 << 16));
        if (branch_taken_0x20cab4) {
            ctx->pc = 0x20CAC8u;
            goto label_20cac8;
        }
    }
    ctx->pc = 0x20CABCu;
    // 0x20cabc: 0x2402c800
    ctx->pc = 0x20cabcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294952960));
    // 0x20cac0: 0xae820000
    ctx->pc = 0x20cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_20cac4:
    // 0x20cac4: 0x3c023e99
    ctx->pc = 0x20cac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16025 << 16));
label_20cac8:
    // 0x20cac8: 0x3442999a
    ctx->pc = 0x20cac8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x20cacc: 0x4482a000
    ctx->pc = 0x20caccu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x20cad0: 0xafa00098
    ctx->pc = 0x20cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_20cad4:
    // 0x20cad4: 0x3c020050
    ctx->pc = 0x20cad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20cad8: 0xc07ce18
    ctx->pc = 0x20CAD8u;
    SET_GPR_U32(ctx, 31, 0x20CAE0u);
    ctx->pc = 0x20CADCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAE0u; }
        else if (ctx->pc != 0x20CAE0u) { ctx->pc = 0x20CAE0u; }
    }
    if (ctx->pc != 0x20CAE0u) { return; }
    ctx->pc = 0x20CAE0u;
    // 0x20cae0: 0x1c40000b
    ctx->pc = 0x20CAE0u;
    {
        const bool branch_taken_0x20cae0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20cae0) {
            ctx->pc = 0x20CB10u;
            goto label_20cb10;
        }
    }
    ctx->pc = 0x20CAE8u;
    // 0x20cae8: 0x8fa50090
    ctx->pc = 0x20cae8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20caec: 0x4600a306
    ctx->pc = 0x20caecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20caf0: 0xc0810a4
    ctx->pc = 0x20CAF0u;
    SET_GPR_U32(ctx, 31, 0x20CAF8u);
    ctx->pc = 0x20CAF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7708));
    ctx->pc = 0x204290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NearAng__FPiif_0x204290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAF8u; }
        else if (ctx->pc != 0x20CAF8u) { ctx->pc = 0x20CAF8u; }
    }
    if (ctx->pc != 0x20CAF8u) { return; }
    ctx->pc = 0x20CAF8u;
    // 0x20caf8: 0x8fa50094
    ctx->pc = 0x20caf8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x20cafc: 0xc0810a4
    ctx->pc = 0x20CAFCu;
    SET_GPR_U32(ctx, 31, 0x20CB04u);
    ctx->pc = 0x20CB00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7712));
    ctx->pc = 0x204290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NearAng__FPiif_0x204290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB04u; }
        else if (ctx->pc != 0x20CB04u) { ctx->pc = 0x20CB04u; }
    }
    if (ctx->pc != 0x20CB04u) { return; }
    ctx->pc = 0x20CB04u;
    // 0x20cb04: 0x8fa50098
    ctx->pc = 0x20cb04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20cb08: 0xc0810a4
    ctx->pc = 0x20CB08u;
    SET_GPR_U32(ctx, 31, 0x20CB10u);
    ctx->pc = 0x20CB0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7716));
    ctx->pc = 0x204290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NearAng__FPiif_0x204290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB10u; }
        else if (ctx->pc != 0x20CB10u) { ctx->pc = 0x20CB10u; }
    }
    if (ctx->pc != 0x20CB10u) { return; }
    ctx->pc = 0x20CB10u;
label_20cb10:
    // 0x20cb10: 0x8e031e1c
    ctx->pc = 0x20cb10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7708)));
    // 0x20cb14: 0x8fa20080
    ctx->pc = 0x20cb14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20cb18: 0x1462000a
    ctx->pc = 0x20CB18u;
    {
        const bool branch_taken_0x20cb18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20CB1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 448));
        if (branch_taken_0x20cb18) {
            ctx->pc = 0x20CB44u;
            goto label_20cb44;
        }
    }
    ctx->pc = 0x20CB20u;
    // 0x20cb20: 0x8e420000
    ctx->pc = 0x20cb20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20cb24: 0x8e031e20
    ctx->pc = 0x20cb24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7712)));
    // 0x20cb28: 0x14620005
    ctx->pc = 0x20CB28u;
    {
        const bool branch_taken_0x20cb28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20cb28) {
            ctx->pc = 0x20CB40u;
            goto label_20cb40;
        }
    }
    ctx->pc = 0x20CB30u;
    // 0x20cb30: 0x8e620000
    ctx->pc = 0x20cb30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20cb34: 0x8e031e24
    ctx->pc = 0x20cb34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7716)));
    // 0x20cb38: 0x10620016
    ctx->pc = 0x20CB38u;
    {
        const bool branch_taken_0x20cb38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20CB3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 48));
        if (branch_taken_0x20cb38) {
            ctx->pc = 0x20CB94u;
            goto label_20cb94;
        }
    }
    ctx->pc = 0x20CB40u;
label_20cb40:
    // 0x20cb40: 0x260401c0
    ctx->pc = 0x20cb40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 448));
label_20cb44:
    // 0x20cb44: 0xc06c038
    ctx->pc = 0x20CB44u;
    SET_GPR_U32(ctx, 31, 0x20CB4Cu);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB4Cu; }
        else if (ctx->pc != 0x20CB4Cu) { ctx->pc = 0x20CB4Cu; }
    }
    if (ctx->pc != 0x20CB4Cu) { return; }
    ctx->pc = 0x20CB4Cu;
    // 0x20cb4c: 0xc6200060
    ctx->pc = 0x20cb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cb50: 0x27a400f0
    ctx->pc = 0x20cb50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x20cb54: 0xe7a000f0
    ctx->pc = 0x20cb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x20cb58: 0xc6200064
    ctx->pc = 0x20cb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cb5c: 0xe7a000f4
    ctx->pc = 0x20cb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x20cb60: 0xc6200068
    ctx->pc = 0x20cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cb64: 0xc06c1ca
    ctx->pc = 0x20CB64u;
    SET_GPR_U32(ctx, 31, 0x20CB6Cu);
    ctx->pc = 0x20CB68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x1B0728u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0728_0x1b0728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB6Cu; }
        else if (ctx->pc != 0x20CB6Cu) { ctx->pc = 0x20CB6Cu; }
    }
    if (ctx->pc != 0x20CB6Cu) { return; }
    ctx->pc = 0x20CB6Cu;
    // 0x20cb6c: 0xc06c0fb
    ctx->pc = 0x20CB6Cu;
    SET_GPR_U32(ctx, 31, 0x20CB74u);
    ctx->pc = 0x20CB70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7712)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB74u; }
        else if (ctx->pc != 0x20CB74u) { ctx->pc = 0x20CB74u; }
    }
    if (ctx->pc != 0x20CB74u) { return; }
    ctx->pc = 0x20CB74u;
    // 0x20cb74: 0xc06c09f
    ctx->pc = 0x20CB74u;
    SET_GPR_U32(ctx, 31, 0x20CB7Cu);
    ctx->pc = 0x20CB78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7708)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB7Cu; }
        else if (ctx->pc != 0x20CB7Cu) { ctx->pc = 0x20CB7Cu; }
    }
    if (ctx->pc != 0x20CB7Cu) { return; }
    ctx->pc = 0x20CB7Cu;
    // 0x20cb7c: 0xc06c157
    ctx->pc = 0x20CB7Cu;
    SET_GPR_U32(ctx, 31, 0x20CB84u);
    ctx->pc = 0x20CB80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7716)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB84u; }
        else if (ctx->pc != 0x20CB84u) { ctx->pc = 0x20CB84u; }
    }
    if (ctx->pc != 0x20CB84u) { return; }
    ctx->pc = 0x20CB84u;
    // 0x20cb84: 0xc06bf55
    ctx->pc = 0x20CB84u;
    SET_GPR_U32(ctx, 31, 0x20CB8Cu);
    ctx->pc = 0x20CB88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 48));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB8Cu; }
        else if (ctx->pc != 0x20CB8Cu) { ctx->pc = 0x20CB8Cu; }
    }
    if (ctx->pc != 0x20CB8Cu) { return; }
    ctx->pc = 0x20CB8Cu;
    // 0x20cb8c: 0x10000004
    ctx->pc = 0x20CB8Cu;
    {
        const bool branch_taken_0x20cb8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CB90u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
        if (branch_taken_0x20cb8c) {
            ctx->pc = 0x20CBA0u;
            goto label_20cba0;
        }
    }
    ctx->pc = 0x20CB94u;
label_20cb94:
    // 0x20cb94: 0xc06c038
    ctx->pc = 0x20CB94u;
    SET_GPR_U32(ctx, 31, 0x20CB9Cu);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CB9Cu; }
        else if (ctx->pc != 0x20CB9Cu) { ctx->pc = 0x20CB9Cu; }
    }
    if (ctx->pc != 0x20CB9Cu) { return; }
    ctx->pc = 0x20CB9Cu;
    // 0x20cb9c: 0x8604005c
    ctx->pc = 0x20cb9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_20cba0:
    // 0x20cba0: 0x24030037
    ctx->pc = 0x20cba0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 55));
    // 0x20cba4: 0x10830026
    ctx->pc = 0x20CBA4u;
    {
        const bool branch_taken_0x20cba4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20CBA8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20cba4) {
            ctx->pc = 0x20CC40u;
            goto label_20cc40;
        }
    }
    ctx->pc = 0x20CBACu;
    // 0x20cbac: 0x2403003b
    ctx->pc = 0x20cbacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 59));
    // 0x20cbb0: 0x10830021
    ctx->pc = 0x20CBB0u;
    {
        const bool branch_taken_0x20cbb0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20CBB4u;
        SET_GPR_U32(ctx, 19, ((uint32_t)163 << 16));
        if (branch_taken_0x20cbb0) {
            ctx->pc = 0x20CC38u;
            goto label_20cc38;
        }
    }
    ctx->pc = 0x20CBB8u;
    // 0x20cbb8: 0x24030030
    ctx->pc = 0x20cbb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x20cbbc: 0x1083001c
    ctx->pc = 0x20CBBCu;
    {
        const bool branch_taken_0x20cbbc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20CBC0u;
        SET_GPR_U32(ctx, 19, ((uint32_t)158 << 16));
        if (branch_taken_0x20cbbc) {
            ctx->pc = 0x20CC30u;
            goto label_20cc30;
        }
    }
    ctx->pc = 0x20CBC4u;
    // 0x20cbc4: 0x2403002f
    ctx->pc = 0x20cbc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
    // 0x20cbc8: 0x10830017
    ctx->pc = 0x20CBC8u;
    {
        const bool branch_taken_0x20cbc8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20CBCCu;
        SET_GPR_U32(ctx, 19, ((uint32_t)157 << 16));
        if (branch_taken_0x20cbc8) {
            ctx->pc = 0x20CC28u;
            goto label_20cc28;
        }
    }
    ctx->pc = 0x20CBD0u;
    // 0x20cbd0: 0x2403002e
    ctx->pc = 0x20cbd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 46));
    // 0x20cbd4: 0x1083000c
    ctx->pc = 0x20CBD4u;
    {
        const bool branch_taken_0x20cbd4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20CBD8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 45));
        if (branch_taken_0x20cbd4) {
            ctx->pc = 0x20CC08u;
            goto label_20cc08;
        }
    }
    ctx->pc = 0x20CBDCu;
    // 0x20cbdc: 0x10830008
    ctx->pc = 0x20CBDCu;
    {
        const bool branch_taken_0x20cbdc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20CBE0u;
        SET_GPR_U32(ctx, 19, ((uint32_t)155 << 16));
        if (branch_taken_0x20cbdc) {
            ctx->pc = 0x20CC00u;
            goto label_20cc00;
        }
    }
    ctx->pc = 0x20CBE4u;
    // 0x20cbe4: 0x2403002c
    ctx->pc = 0x20cbe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x20cbe8: 0x10830003
    ctx->pc = 0x20CBE8u;
    {
        const bool branch_taken_0x20cbe8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20CBECu;
        SET_GPR_U32(ctx, 19, ((uint32_t)154 << 16));
        if (branch_taken_0x20cbe8) {
            ctx->pc = 0x20CBF8u;
            goto label_20cbf8;
        }
    }
    ctx->pc = 0x20CBF0u;
    // 0x20cbf0: 0x10000014
    ctx->pc = 0x20CBF0u;
    {
        const bool branch_taken_0x20cbf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CBF4u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20cbf0) {
            ctx->pc = 0x20CC44u;
            goto label_20cc44;
        }
    }
    ctx->pc = 0x20CBF8u;
label_20cbf8:
    // 0x20cbf8: 0x10000012
    ctx->pc = 0x20CBF8u;
    {
        const bool branch_taken_0x20cbf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20cbf8) {
            ctx->pc = 0x20CC44u;
            goto label_20cc44;
        }
    }
    ctx->pc = 0x20CC00u;
label_20cc00:
    // 0x20cc00: 0x10000010
    ctx->pc = 0x20CC00u;
    {
        const bool branch_taken_0x20cc00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20cc00) {
            ctx->pc = 0x20CC44u;
            goto label_20cc44;
        }
    }
    ctx->pc = 0x20CC08u;
label_20cc08:
    // 0x20cc08: 0x8e041e68
    ctx->pc = 0x20cc08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7784)));
    // 0x20cc0c: 0x24030004
    ctx->pc = 0x20cc0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x20cc10: 0x14830003
    ctx->pc = 0x20CC10u;
    {
        const bool branch_taken_0x20cc10 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20CC14u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20cc10) {
            ctx->pc = 0x20CC20u;
            goto label_20cc20;
        }
    }
    ctx->pc = 0x20CC18u;
    // 0x20cc18: 0x1000000a
    ctx->pc = 0x20CC18u;
    {
        const bool branch_taken_0x20cc18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CC1Cu;
        SET_GPR_U32(ctx, 19, ((uint32_t)156 << 16));
        if (branch_taken_0x20cc18) {
            ctx->pc = 0x20CC44u;
            goto label_20cc44;
        }
    }
    ctx->pc = 0x20CC20u;
label_20cc20:
    // 0x20cc20: 0x10000008
    ctx->pc = 0x20CC20u;
    {
        const bool branch_taken_0x20cc20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20cc20) {
            ctx->pc = 0x20CC44u;
            goto label_20cc44;
        }
    }
    ctx->pc = 0x20CC28u;
label_20cc28:
    // 0x20cc28: 0x10000006
    ctx->pc = 0x20CC28u;
    {
        const bool branch_taken_0x20cc28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20cc28) {
            ctx->pc = 0x20CC44u;
            goto label_20cc44;
        }
    }
    ctx->pc = 0x20CC30u;
label_20cc30:
    // 0x20cc30: 0x10000004
    ctx->pc = 0x20CC30u;
    {
        const bool branch_taken_0x20cc30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20cc30) {
            ctx->pc = 0x20CC44u;
            goto label_20cc44;
        }
    }
    ctx->pc = 0x20CC38u;
label_20cc38:
    // 0x20cc38: 0x10000002
    ctx->pc = 0x20CC38u;
    {
        const bool branch_taken_0x20cc38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20cc38) {
            ctx->pc = 0x20CC44u;
            goto label_20cc44;
        }
    }
    ctx->pc = 0x20CC40u;
label_20cc40:
    // 0x20cc40: 0x3c1300a0
    ctx->pc = 0x20cc40u;
    SET_GPR_U32(ctx, 19, ((uint32_t)160 << 16));
label_20cc44:
    // 0x20cc44: 0x1260004c
    ctx->pc = 0x20CC44u;
    {
        const bool branch_taken_0x20cc44 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x20cc44) {
            ctx->pc = 0x20CD78u;
            goto label_20cd78;
        }
    }
    ctx->pc = 0x20CC4Cu;
    // 0x20cc4c: 0x131403
    ctx->pc = 0x20cc4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 16));
    // 0x20cc50: 0x3045ffff
    ctx->pc = 0x20cc50u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
    // 0x20cc54: 0x3c020050
    ctx->pc = 0x20cc54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20cc58: 0x51900
    ctx->pc = 0x20cc58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x20cc5c: 0x2442ea20
    ctx->pc = 0x20cc5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x20cc60: 0x431021
    ctx->pc = 0x20cc60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cc64: 0x8c430000
    ctx->pc = 0x20cc64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cc68: 0x3c028000
    ctx->pc = 0x20cc68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x20cc6c: 0x621024
    ctx->pc = 0x20cc6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20cc70: 0x14400003
    ctx->pc = 0x20CC70u;
    {
        const bool branch_taken_0x20cc70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20CC74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x20cc70) {
            ctx->pc = 0x20CC80u;
            goto label_20cc80;
        }
    }
    ctx->pc = 0x20CC78u;
    // 0x20cc78: 0xc0863cc
    ctx->pc = 0x20CC78u;
    SET_GPR_U32(ctx, 31, 0x20CC80u);
    ctx->pc = 0x20CC7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC80u; }
        else if (ctx->pc != 0x20CC80u) { ctx->pc = 0x20CC80u; }
    }
    if (ctx->pc != 0x20CC80u) { return; }
    ctx->pc = 0x20CC80u;
label_20cc80:
    // 0x20cc80: 0xc06b218
    ctx->pc = 0x20CC80u;
    SET_GPR_U32(ctx, 31, 0x20CC88u);
    ctx->pc = 0x20CC84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC88u; }
        else if (ctx->pc != 0x20CC88u) { ctx->pc = 0x20CC88u; }
    }
    if (ctx->pc != 0x20CC88u) { return; }
    ctx->pc = 0x20CC88u;
    // 0x20cc88: 0xc0853ac
    ctx->pc = 0x20CC88u;
    SET_GPR_U32(ctx, 31, 0x20CC90u);
    ctx->pc = 0x20CC8Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CC90u; }
        else if (ctx->pc != 0x20CC90u) { ctx->pc = 0x20CC90u; }
    }
    if (ctx->pc != 0x20CC90u) { return; }
    ctx->pc = 0x20CC90u;
    // 0x20cc90: 0x3c03009c
    ctx->pc = 0x20cc90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)156 << 16));
    // 0x20cc94: 0x16630038
    ctx->pc = 0x20CC94u;
    {
        const bool branch_taken_0x20cc94 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 3));
        ctx->pc = 0x20CC98u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x20cc94) {
            ctx->pc = 0x20CD78u;
            goto label_20cd78;
        }
    }
    ctx->pc = 0x20CC9Cu;
    // 0x20cc9c: 0xc0853ac
    ctx->pc = 0x20CC9Cu;
    SET_GPR_U32(ctx, 31, 0x20CCA4u);
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CCA4u; }
        else if (ctx->pc != 0x20CCA4u) { ctx->pc = 0x20CCA4u; }
    }
    if (ctx->pc != 0x20CCA4u) { return; }
    ctx->pc = 0x20CCA4u;
    // 0x20cca4: 0x10000034
    ctx->pc = 0x20CCA4u;
    {
        const bool branch_taken_0x20cca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20cca4) {
            ctx->pc = 0x20CD78u;
            goto label_20cd78;
        }
    }
    ctx->pc = 0x20CCACu;
label_20ccac:
    // 0x20ccac: 0x8604005c
    ctx->pc = 0x20ccacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x20ccb0: 0x2403002e
    ctx->pc = 0x20ccb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 46));
    // 0x20ccb4: 0x10830003
    ctx->pc = 0x20CCB4u;
    {
        const bool branch_taken_0x20ccb4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20ccb4) {
            ctx->pc = 0x20CCC4u;
            goto label_20ccc4;
        }
    }
    ctx->pc = 0x20CCBCu;
    // 0x20ccbc: 0x1000002e
    ctx->pc = 0x20CCBCu;
    {
        const bool branch_taken_0x20ccbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20CCC0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20ccbc) {
            ctx->pc = 0x20CD78u;
            goto label_20cd78;
        }
    }
    ctx->pc = 0x20CCC4u;
label_20ccc4:
    // 0x20ccc4: 0x8e041e68
    ctx->pc = 0x20ccc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7784)));
    // 0x20ccc8: 0x24030004
    ctx->pc = 0x20ccc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x20cccc: 0x14830029
    ctx->pc = 0x20CCCCu;
    {
        const bool branch_taken_0x20cccc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x20cccc) {
            ctx->pc = 0x20CD74u;
            goto label_20cd74;
        }
    }
    ctx->pc = 0x20CCD4u;
    // 0x20ccd4: 0x8e040034
    ctx->pc = 0x20ccd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x20ccd8: 0x24031815
    ctx->pc = 0x20ccd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6165));
    // 0x20ccdc: 0x14830025
    ctx->pc = 0x20CCDCu;
    {
        const bool branch_taken_0x20ccdc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x20ccdc) {
            ctx->pc = 0x20CD74u;
            goto label_20cd74;
        }
    }
    ctx->pc = 0x20CCE4u;
    // 0x20cce4: 0xc6010044
    ctx->pc = 0x20cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cce8: 0x3c034270
    ctx->pc = 0x20cce8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17008 << 16));
    // 0x20ccec: 0x44830000
    ctx->pc = 0x20ccecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x20ccf0: 0x0
    ctx->pc = 0x20ccf0u;
    // NOP
    // 0x20ccf4: 0x46000834
    ctx->pc = 0x20ccf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ccf8: 0x0
    ctx->pc = 0x20ccf8u;
    // NOP
    // 0x20ccfc: 0x4501001d
    ctx->pc = 0x20CCFCu;
    {
        const bool branch_taken_0x20ccfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ccfc) {
            ctx->pc = 0x20CD74u;
            goto label_20cd74;
        }
    }
    ctx->pc = 0x20CD04u;
    // 0x20cd04: 0x4bede37d
    ctx->pc = 0x20cd04u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x20cd08: 0x4bedeb7d
    ctx->pc = 0x20cd08u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x20cd0c: 0x4bedf37d
    ctx->pc = 0x20cd0cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x20cd10: 0x4bedfb7d
    ctx->pc = 0x20cd10u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x20cd14: 0x3c02bfd4
    ctx->pc = 0x20cd14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49108 << 16));
    // 0x20cd18: 0x3442816f
    ctx->pc = 0x20cd18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 33135));
    // 0x20cd1c: 0x44826800
    ctx->pc = 0x20cd1cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x20cd20: 0x3c023f10
    ctx->pc = 0x20cd20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16144 << 16));
    // 0x20cd24: 0x34421a37
    ctx->pc = 0x20cd24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 6711));
    // 0x20cd28: 0x44826000
    ctx->pc = 0x20cd28u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x20cd2c: 0x3c023f88
    ctx->pc = 0x20cd2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16264 << 16));
    // 0x20cd30: 0x3442e8a7
    ctx->pc = 0x20cd30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 59559));
    // 0x20cd34: 0x44827000
    ctx->pc = 0x20cd34u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x20cd38: 0xc06c202
    ctx->pc = 0x20CD38u;
    SET_GPR_U32(ctx, 31, 0x20CD40u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD40u; }
        else if (ctx->pc != 0x20CD40u) { ctx->pc = 0x20CD40u; }
    }
    if (ctx->pc != 0x20CD40u) { return; }
    ctx->pc = 0x20CD40u;
    // 0x20cd40: 0xc06c157
    ctx->pc = 0x20CD40u;
    SET_GPR_U32(ctx, 31, 0x20CD48u);
    ctx->pc = 0x20CD44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8690));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD48u; }
        else if (ctx->pc != 0x20CD48u) { ctx->pc = 0x20CD48u; }
    }
    if (ctx->pc != 0x20CD48u) { return; }
    ctx->pc = 0x20CD48u;
    // 0x20cd48: 0xc06c0fb
    ctx->pc = 0x20CD48u;
    SET_GPR_U32(ctx, 31, 0x20CD50u);
    ctx->pc = 0x20CD4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12679));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD50u; }
        else if (ctx->pc != 0x20CD50u) { ctx->pc = 0x20CD50u; }
    }
    if (ctx->pc != 0x20CD50u) { return; }
    ctx->pc = 0x20CD50u;
    // 0x20cd50: 0xc06c09f
    ctx->pc = 0x20CD50u;
    SET_GPR_U32(ctx, 31, 0x20CD58u);
    ctx->pc = 0x20CD54u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 60790));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD58u; }
        else if (ctx->pc != 0x20CD58u) { ctx->pc = 0x20CD58u; }
    }
    if (ctx->pc != 0x20CD58u) { return; }
    ctx->pc = 0x20CD58u;
    // 0x20cd58: 0x3c020052
    ctx->pc = 0x20cd58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x20cd5c: 0xc0853ac
    ctx->pc = 0x20CD5Cu;
    SET_GPR_U32(ctx, 31, 0x20CD64u);
    ctx->pc = 0x20CD60u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD64u; }
        else if (ctx->pc != 0x20CD64u) { ctx->pc = 0x20CD64u; }
    }
    if (ctx->pc != 0x20CD64u) { return; }
    ctx->pc = 0x20CD64u;
    // 0x20cd64: 0x4bff6b7e
    ctx->pc = 0x20cd64u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20cd68: 0x4bfe6b7e
    ctx->pc = 0x20cd68u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20cd6c: 0x4bfd6b7e
    ctx->pc = 0x20cd6cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20cd70: 0x4bfc6b7e
    ctx->pc = 0x20cd70u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_20cd74:
    // 0x20cd74: 0x24120001
    ctx->pc = 0x20cd74u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_20cd78:
    // 0x20cd78: 0x12400017
    ctx->pc = 0x20CD78u;
    {
        const bool branch_taken_0x20cd78 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x20cd78) {
            ctx->pc = 0x20CDD8u;
            goto label_20cdd8;
        }
    }
    ctx->pc = 0x20CD80u;
    // 0x20cd80: 0x8e2300b4
    ctx->pc = 0x20cd80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x20cd84: 0x30634000
    ctx->pc = 0x20cd84u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x20cd88: 0x14600013
    ctx->pc = 0x20CD88u;
    {
        const bool branch_taken_0x20cd88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20cd88) {
            ctx->pc = 0x20CDD8u;
            goto label_20cdd8;
        }
    }
    ctx->pc = 0x20CD90u;
    // 0x20cd90: 0xc06b218
    ctx->pc = 0x20CD90u;
    SET_GPR_U32(ctx, 31, 0x20CD98u);
    ctx->pc = 0x20CD94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CD98u; }
        else if (ctx->pc != 0x20CD98u) { ctx->pc = 0x20CD98u; }
    }
    if (ctx->pc != 0x20CD98u) { return; }
    ctx->pc = 0x20CD98u;
    // 0x20cd98: 0x8e240000
    ctx->pc = 0x20cd98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20cd9c: 0x3c020050
    ctx->pc = 0x20cd9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20cda0: 0x2443ea20
    ctx->pc = 0x20cda0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x20cda4: 0x3c028000
    ctx->pc = 0x20cda4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x20cda8: 0x42403
    ctx->pc = 0x20cda8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x20cdac: 0x3085ffff
    ctx->pc = 0x20cdacu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 65535));
    // 0x20cdb0: 0x52100
    ctx->pc = 0x20cdb0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x20cdb4: 0x641821
    ctx->pc = 0x20cdb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20cdb8: 0x8c630000
    ctx->pc = 0x20cdb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20cdbc: 0x621024
    ctx->pc = 0x20cdbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20cdc0: 0x14400003
    ctx->pc = 0x20CDC0u;
    {
        const bool branch_taken_0x20cdc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20CDC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x20cdc0) {
            ctx->pc = 0x20CDD0u;
            goto label_20cdd0;
        }
    }
    ctx->pc = 0x20CDC8u;
    // 0x20cdc8: 0xc0863cc
    ctx->pc = 0x20CDC8u;
    SET_GPR_U32(ctx, 31, 0x20CDD0u);
    ctx->pc = 0x20CDCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitEntryBankObjImm__13EntryDatClassFi_0x218f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CDD0u; }
        else if (ctx->pc != 0x20CDD0u) { ctx->pc = 0x20CDD0u; }
    }
    if (ctx->pc != 0x20CDD0u) { return; }
    ctx->pc = 0x20CDD0u;
label_20cdd0:
    // 0x20cdd0: 0xc0853ac
    ctx->pc = 0x20CDD0u;
    SET_GPR_U32(ctx, 31, 0x20CDD8u);
    ctx->pc = 0x20CDD4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CDD8u; }
        else if (ctx->pc != 0x20CDD8u) { ctx->pc = 0x20CDD8u; }
    }
    if (ctx->pc != 0x20CDD8u) { return; }
    ctx->pc = 0x20CDD8u;
label_20cdd8:
    // 0x20cdd8: 0x7bbf0070
    ctx->pc = 0x20cdd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20cddc: 0x7bb40060
    ctx->pc = 0x20cddcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20cde0: 0x7bb30050
    ctx->pc = 0x20cde0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20cde4: 0x7bb20040
    ctx->pc = 0x20cde4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20cde8: 0x7bb10030
    ctx->pc = 0x20cde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cdec: 0x7bb00020
    ctx->pc = 0x20cdecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cdf0: 0xc7b90014
    ctx->pc = 0x20cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x20cdf4: 0xc7b80010
    ctx->pc = 0x20cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x20cdf8: 0xc7b7000c
    ctx->pc = 0x20cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20cdfc: 0xc7b60008
    ctx->pc = 0x20cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20ce00: 0xc7b50004
    ctx->pc = 0x20ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20ce04: 0xc7b40000
    ctx->pc = 0x20ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20ce08: 0x3e00008
    ctx->pc = 0x20CE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CE0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C85Cu: goto label_20c85c;
            case 0x20C874u: goto label_20c874;
            case 0x20C87Cu: goto label_20c87c;
            case 0x20C938u: goto label_20c938;
            case 0x20C944u: goto label_20c944;
            case 0x20C9A0u: goto label_20c9a0;
            case 0x20CA1Cu: goto label_20ca1c;
            case 0x20CA28u: goto label_20ca28;
            case 0x20CA8Cu: goto label_20ca8c;
            case 0x20CA98u: goto label_20ca98;
            case 0x20CAB4u: goto label_20cab4;
            case 0x20CAC4u: goto label_20cac4;
            case 0x20CAC8u: goto label_20cac8;
            case 0x20CAD4u: goto label_20cad4;
            case 0x20CB10u: goto label_20cb10;
            case 0x20CB40u: goto label_20cb40;
            case 0x20CB44u: goto label_20cb44;
            case 0x20CB94u: goto label_20cb94;
            case 0x20CBA0u: goto label_20cba0;
            case 0x20CBF8u: goto label_20cbf8;
            case 0x20CC00u: goto label_20cc00;
            case 0x20CC08u: goto label_20cc08;
            case 0x20CC20u: goto label_20cc20;
            case 0x20CC28u: goto label_20cc28;
            case 0x20CC30u: goto label_20cc30;
            case 0x20CC38u: goto label_20cc38;
            case 0x20CC40u: goto label_20cc40;
            case 0x20CC44u: goto label_20cc44;
            case 0x20CC80u: goto label_20cc80;
            case 0x20CCACu: goto label_20ccac;
            case 0x20CCC4u: goto label_20ccc4;
            case 0x20CD74u: goto label_20cd74;
            case 0x20CD78u: goto label_20cd78;
            case 0x20CDD0u: goto label_20cdd0;
            case 0x20CDD8u: goto label_20cdd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CE10u;
}
