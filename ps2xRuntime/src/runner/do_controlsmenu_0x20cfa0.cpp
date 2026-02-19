#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_controlsmenu
// Address: 0x20cfa0 - 0x20d1dc
void do_controlsmenu_0x20cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20cfa0u;

    // 0x20cfa0: 0x27bdff60
    ctx->pc = 0x20cfa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20cfa4: 0xffbf0090
    ctx->pc = 0x20cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x20cfa8: 0xffbe0080
    ctx->pc = 0x20cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x20cfac: 0xffb70070
    ctx->pc = 0x20cfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x20cfb0: 0xffb60060
    ctx->pc = 0x20cfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x20cfb4: 0xffb50050
    ctx->pc = 0x20cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20cfb8: 0xffb40040
    ctx->pc = 0x20cfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20cfbc: 0xffb30030
    ctx->pc = 0x20cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20cfc0: 0xffb20020
    ctx->pc = 0x20cfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20cfc4: 0xffb10010
    ctx->pc = 0x20cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20cfc8: 0x4a00078
    ctx->pc = 0x20CFC8u;
    {
        const bool branch_taken_0x20cfc8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x20CFCCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x20cfc8) {
            ctx->pc = 0x20D1ACu;
            goto label_20d1ac;
        }
    }
    ctx->pc = 0x20CFD0u;
    // 0x20cfd0: 0x3c02003c
    ctx->pc = 0x20cfd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20cfd4: 0x8c57c514
    ctx->pc = 0x20cfd4u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294952212)));
    // 0x20cfd8: 0x882d
    ctx->pc = 0x20cfd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfdc: 0x24130018
    ctx->pc = 0x20cfdcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 24));
    // 0x20cfe0: 0x3c020032
    ctx->pc = 0x20cfe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20cfe4: 0x2452f3f0
    ctx->pc = 0x20cfe4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294964208));
    // 0x20cfe8: 0x2331018
    ctx->pc = 0x20cfe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20cfec: 0x0
    ctx->pc = 0x20cfecu;
    // NOP
label_20cff0:
    // 0x20cff0: 0x528021
    ctx->pc = 0x20cff0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20cff4: 0x8e040014
    ctx->pc = 0x20cff4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20cff8: 0x8e050004
    ctx->pc = 0x20cff8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20cffc: 0x3c01bf80
    ctx->pc = 0x20cffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x20d000: 0x44816000
    ctx->pc = 0x20d000u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x20d004: 0xc0b0df2
    ctx->pc = 0x20D004u;
    SET_GPR_U32(ctx, 31, 0x20D00Cu);
    ctx->pc = 0x20D008u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D00Cu; }
    }
    if (ctx->pc != 0x20D00Cu) { return; }
    ctx->pc = 0x20D00Cu;
    // 0x20d00c: 0x8e040014
    ctx->pc = 0x20d00cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20d010: 0x8e05000c
    ctx->pc = 0x20d010u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20d014: 0xc0b0cf6
    ctx->pc = 0x20D014u;
    SET_GPR_U32(ctx, 31, 0x20D01Cu);
    ctx->pc = 0x20D018u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D01Cu; }
    }
    if (ctx->pc != 0x20D01Cu) { return; }
    ctx->pc = 0x20D01Cu;
    // 0x20d01c: 0x26310001
    ctx->pc = 0x20d01cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x20d020: 0x2a220003
    ctx->pc = 0x20d020u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x20d024: 0x1440fff2
    ctx->pc = 0x20D024u;
    {
        const bool branch_taken_0x20d024 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20D028u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x20d024) {
            ctx->pc = 0x20CFF0u;
            goto label_20cff0;
        }
    }
    ctx->pc = 0x20D02Cu;
    // 0x20d02c: 0x3c020032
    ctx->pc = 0x20d02cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20d030: 0xc080750
    ctx->pc = 0x20D030u;
    SET_GPR_U32(ctx, 31, 0x20D038u);
    ctx->pc = 0x20D034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetDrawStringScale_0x201d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D038u; }
    }
    if (ctx->pc != 0x20D038u) { return; }
    ctx->pc = 0x20D038u;
    // 0x20d038: 0x3c030031
    ctx->pc = 0x20d038u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20d03c: 0x3c020032
    ctx->pc = 0x20d03cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20d040: 0x8c42f440
    ctx->pc = 0x20d040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964288)));
    // 0x20d044: 0xac62f288
    ctx->pc = 0x20d044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963848), GPR_U32(ctx, 2));
    // 0x20d048: 0x882d
    ctx->pc = 0x20d048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d04c: 0x3c160032
    ctx->pc = 0x20d04cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)50 << 16));
    // 0x20d050: 0x2413000c
    ctx->pc = 0x20d050u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 12));
    // 0x20d054: 0x3c020032
    ctx->pc = 0x20d054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20d058: 0x2454f334
    ctx->pc = 0x20d058u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294964020));
    // 0x20d05c: 0x3c020032
    ctx->pc = 0x20d05cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20d060: 0x2455d400
    ctx->pc = 0x20d060u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294956032));
    // 0x20d064: 0x3c1e0032
    ctx->pc = 0x20d064u;
    SET_GPR_U32(ctx, 30, ((uint32_t)50 << 16));
    // 0x20d068: 0x24040003
    ctx->pc = 0x20d068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20d06c: 0x0
    ctx->pc = 0x20d06cu;
    // NOP
label_20d070:
    // 0x20d070: 0xc08068c
    ctx->pc = 0x20D070u;
    SET_GPR_U32(ctx, 31, 0x20D078u);
    ctx->pc = 0x20D074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetStringListMsg_0x201a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D078u; }
    }
    if (ctx->pc != 0x20D078u) { return; }
    ctx->pc = 0x20D078u;
    // 0x20d078: 0x40902d
    ctx->pc = 0x20d078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d07c: 0x240202d
    ctx->pc = 0x20d07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d080: 0x220282d
    ctx->pc = 0x20d080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d084: 0xc0809f2
    ctx->pc = 0x20D084u;
    SET_GPR_U32(ctx, 31, 0x20D08Cu);
    ctx->pc = 0x20D088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294964284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2027C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidth_0x2027c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D08Cu; }
    }
    if (ctx->pc != 0x20D08Cu) { return; }
    ctx->pc = 0x20D08Cu;
    // 0x20d08c: 0x40802d
    ctx->pc = 0x20d08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d090: 0x240202d
    ctx->pc = 0x20d090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d094: 0x220282d
    ctx->pc = 0x20d094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d098: 0x2406ffff
    ctx->pc = 0x20d098u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d09c: 0xc080a62
    ctx->pc = 0x20D09Cu;
    SET_GPR_U32(ctx, 31, 0x20D0A4u);
    ctx->pc = 0x20D0A0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294964284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x202988u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextHeight_0x202988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0A4u; }
    }
    if (ctx->pc != 0x20D0A4u) { return; }
    ctx->pc = 0x20D0A4u;
    // 0x20d0a4: 0x40302d
    ctx->pc = 0x20d0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0a8: 0x2332018
    ctx->pc = 0x20d0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20d0ac: 0x3c030032
    ctx->pc = 0x20d0acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20d0b0: 0x2463f330
    ctx->pc = 0x20d0b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964016));
    // 0x20d0b4: 0x831021
    ctx->pc = 0x20d0b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20d0b8: 0x8c430000
    ctx->pc = 0x20d0b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d0bc: 0x24020001
    ctx->pc = 0x20d0bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d0c0: 0x14620006
    ctx->pc = 0x20D0C0u;
    {
        const bool branch_taken_0x20d0c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20D0C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x20d0c0) {
            ctx->pc = 0x20D0DCu;
            goto label_20d0dc;
        }
    }
    ctx->pc = 0x20D0C8u;
    // 0x20d0c8: 0x941021
    ctx->pc = 0x20d0c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x20d0cc: 0x8c420000
    ctx->pc = 0x20d0ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d0d0: 0x24420100
    ctx->pc = 0x20d0d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 256));
    // 0x20d0d4: 0x10000018
    ctx->pc = 0x20D0D4u;
    {
        const bool branch_taken_0x20d0d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D0D8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x20d0d4) {
            ctx->pc = 0x20D138u;
            goto label_20d138;
        }
    }
    ctx->pc = 0x20D0DCu;
label_20d0dc:
    // 0x20d0dc: 0x2462f330
    ctx->pc = 0x20d0dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294964016));
    // 0x20d0e0: 0x2332018
    ctx->pc = 0x20d0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20d0e4: 0x821021
    ctx->pc = 0x20d0e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20d0e8: 0x8c430000
    ctx->pc = 0x20d0e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d0ec: 0x24020002
    ctx->pc = 0x20d0ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d0f0: 0x14620009
    ctx->pc = 0x20D0F0u;
    {
        const bool branch_taken_0x20d0f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20D0F4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x20d0f0) {
            ctx->pc = 0x20D118u;
            goto label_20d118;
        }
    }
    ctx->pc = 0x20D0F8u;
    // 0x20d0f8: 0x1017c2
    ctx->pc = 0x20d0f8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), 31));
    // 0x20d0fc: 0x2021021
    ctx->pc = 0x20d0fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20d100: 0x21043
    ctx->pc = 0x20d100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20d104: 0x2442ff00
    ctx->pc = 0x20d104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x20d108: 0x941821
    ctx->pc = 0x20d108u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x20d10c: 0x8c630000
    ctx->pc = 0x20d10cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d110: 0x10000009
    ctx->pc = 0x20D110u;
    {
        const bool branch_taken_0x20d110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D114u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x20d110) {
            ctx->pc = 0x20D138u;
            goto label_20d138;
        }
    }
    ctx->pc = 0x20D118u;
label_20d118:
    // 0x20d118: 0x741021
    ctx->pc = 0x20d118u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x20d11c: 0x101fc2
    ctx->pc = 0x20d11cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 16), 31));
    // 0x20d120: 0x2031821
    ctx->pc = 0x20d120u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x20d124: 0x31843
    ctx->pc = 0x20d124u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20d128: 0x24630100
    ctx->pc = 0x20d128u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 256));
    // 0x20d12c: 0x8c420000
    ctx->pc = 0x20d12cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d130: 0x621821
    ctx->pc = 0x20d130u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d134: 0x32023
    ctx->pc = 0x20d134u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_20d138:
    // 0x20d138: 0x3c030032
    ctx->pc = 0x20d138u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20d13c: 0x2463f338
    ctx->pc = 0x20d13cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964024));
    // 0x20d140: 0x600013
    ctx->pc = 0x20d140u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x20d144: 0x72331000
    ctx->pc = 0x20d144u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20d148: 0x62fc2
    ctx->pc = 0x20d148u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 6), 31));
    // 0x20d14c: 0xc52821
    ctx->pc = 0x20d14cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x20d150: 0x52843
    ctx->pc = 0x20d150u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x20d154: 0x8c430000
    ctx->pc = 0x20d154u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d158: 0x3c020032
    ctx->pc = 0x20d158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20d15c: 0x9047d400
    ctx->pc = 0x20d15cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294956032)));
    // 0x20d160: 0x73c00
    ctx->pc = 0x20d160u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
    // 0x20d164: 0x92a20004
    ctx->pc = 0x20d164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x20d168: 0x21200
    ctx->pc = 0x20d168u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x20d16c: 0xe23825
    ctx->pc = 0x20d16cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20d170: 0x92a20008
    ctx->pc = 0x20d170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x20d174: 0x652823
    ctx->pc = 0x20d174u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20d178: 0x8fc6f438
    ctx->pc = 0x20d178u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 4294964280)));
    // 0x20d17c: 0xe23825
    ctx->pc = 0x20d17cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20d180: 0x240402d
    ctx->pc = 0x20d180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d184: 0xc0807a8
    ctx->pc = 0x20D184u;
    SET_GPR_U32(ctx, 31, 0x20D18Cu);
    ctx->pc = 0x20D188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawStringText_0x201ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D18Cu; }
    }
    if (ctx->pc != 0x20D18Cu) { return; }
    ctx->pc = 0x20D18Cu;
    // 0x20d18c: 0x26310001
    ctx->pc = 0x20d18cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x20d190: 0x2a220010
    ctx->pc = 0x20d190u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x20d194: 0x1440ffb6
    ctx->pc = 0x20D194u;
    {
        const bool branch_taken_0x20d194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20D198u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x20d194) {
            ctx->pc = 0x20D070u;
            goto label_20d070;
        }
    }
    ctx->pc = 0x20D19Cu;
    // 0x20d19c: 0xc080756
    ctx->pc = 0x20D19Cu;
    SET_GPR_U32(ctx, 31, 0x20D1A4u);
    ctx->pc = 0x201D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        RestoreDrawStringScale_0x201d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D1A4u; }
    }
    if (ctx->pc != 0x20D1A4u) { return; }
    ctx->pc = 0x20D1A4u;
    // 0x20d1a4: 0x3c020031
    ctx->pc = 0x20d1a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20d1a8: 0xac40f288
    ctx->pc = 0x20d1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963848), GPR_U32(ctx, 0));
label_20d1ac:
    // 0x20d1ac: 0xdfbf0090
    ctx->pc = 0x20d1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20d1b0: 0xdfbe0080
    ctx->pc = 0x20d1b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20d1b4: 0xdfb70070
    ctx->pc = 0x20d1b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20d1b8: 0xdfb60060
    ctx->pc = 0x20d1b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20d1bc: 0xdfb50050
    ctx->pc = 0x20d1bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d1c0: 0xdfb40040
    ctx->pc = 0x20d1c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d1c4: 0xdfb30030
    ctx->pc = 0x20d1c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d1c8: 0xdfb20020
    ctx->pc = 0x20d1c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d1cc: 0xdfb10010
    ctx->pc = 0x20d1ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d1d0: 0xdfb00000
    ctx->pc = 0x20d1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d1d4: 0x3e00008
    ctx->pc = 0x20D1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D1D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CFF0u: goto label_20cff0;
            case 0x20D070u: goto label_20d070;
            case 0x20D0DCu: goto label_20d0dc;
            case 0x20D118u: goto label_20d118;
            case 0x20D138u: goto label_20d138;
            case 0x20D1ACu: goto label_20d1ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D1DCu;
}
