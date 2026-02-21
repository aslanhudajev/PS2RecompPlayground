#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EELoadVAGAsync
// Address: 0x10b9f0 - 0x10bd34
void EELoadVAGAsync_0x10b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b9f0u;

    // 0x10b9f0: 0x27bdff90
    ctx->pc = 0x10b9f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10b9f4: 0x8f838390
    ctx->pc = 0x10b9f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10b9f8: 0xffb50050
    ctx->pc = 0x10b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10b9fc: 0xffb40040
    ctx->pc = 0x10b9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10ba00: 0xa0a82d
    ctx->pc = 0x10ba00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba04: 0xffb30030
    ctx->pc = 0x10ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10ba08: 0xc0a02d
    ctx->pc = 0x10ba08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba0c: 0xffbf0060
    ctx->pc = 0x10ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10ba10: 0x80982d
    ctx->pc = 0x10ba10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba14: 0xffb20020
    ctx->pc = 0x10ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ba18: 0xffb10010
    ctx->pc = 0x10ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ba1c: 0x146000a4
    ctx->pc = 0x10BA1Cu;
    {
        const bool branch_taken_0x10ba1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BA20u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x10ba1c) {
            ctx->pc = 0x10BCB0u;
            goto label_10bcb0;
        }
    }
    ctx->pc = 0x10BA24u;
    // 0x10ba24: 0x3c040017
    ctx->pc = 0x10ba24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ba28: 0xc04ace4
    ctx->pc = 0x10BA28u;
    SET_GPR_U32(ctx, 31, 0x10BA30u);
    ctx->pc = 0x10BA2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13496));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA30u; }
    }
    if (ctx->pc != 0x10BA30u) { return; }
    ctx->pc = 0x10BA30u;
    // 0x10ba30: 0x3c040017
    ctx->pc = 0x10ba30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ba34: 0x260282d
    ctx->pc = 0x10ba34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba38: 0xc04ace4
    ctx->pc = 0x10BA38u;
    SET_GPR_U32(ctx, 31, 0x10BA40u);
    ctx->pc = 0x10BA3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13528));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA40u; }
    }
    if (ctx->pc != 0x10BA40u) { return; }
    ctx->pc = 0x10BA40u;
    // 0x10ba40: 0x260202d
    ctx->pc = 0x10ba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba44: 0xc0444ea
    ctx->pc = 0x10BA44u;
    SET_GPR_U32(ctx, 31, 0x10BA4Cu);
    ctx->pc = 0x10BA48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1113A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1113a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA4Cu; }
    }
    if (ctx->pc != 0x10BA4Cu) { return; }
    ctx->pc = 0x10BA4Cu;
    // 0x10ba4c: 0x40882d
    ctx->pc = 0x10ba4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba50: 0x2402ffff
    ctx->pc = 0x10ba50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ba54: 0x56220006
    ctx->pc = 0x10BA54u;
    {
        const bool branch_taken_0x10ba54 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x10ba54) {
            ctx->pc = 0x10BA58u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10BA70u;
            goto label_10ba70;
        }
    }
    ctx->pc = 0x10BA5Cu;
    // 0x10ba5c: 0x3c040017
    ctx->pc = 0x10ba5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ba60: 0xc04ace4
    ctx->pc = 0x10BA60u;
    SET_GPR_U32(ctx, 31, 0x10BA68u);
    ctx->pc = 0x10BA64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13552));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA68u; }
    }
    if (ctx->pc != 0x10BA68u) { return; }
    ctx->pc = 0x10BA68u;
    // 0x10ba68: 0x100000a9
    ctx->pc = 0x10BA68u;
    {
        const bool branch_taken_0x10ba68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BA6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10ba68) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BA70u;
label_10ba70:
    // 0x10ba70: 0x282d
    ctx->pc = 0x10ba70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba74: 0xc0445ec
    ctx->pc = 0x10BA74u;
    SET_GPR_U32(ctx, 31, 0x10BA7Cu);
    ctx->pc = 0x10BA78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1117B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA7Cu; }
    }
    if (ctx->pc != 0x10BA7Cu) { return; }
    ctx->pc = 0x10BA7Cu;
    // 0x10ba7c: 0x40902d
    ctx->pc = 0x10ba7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba80: 0x5e400006
    ctx->pc = 0x10BA80u;
    {
        const bool branch_taken_0x10ba80 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x10ba80) {
            ctx->pc = 0x10BA84u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10BA9Cu;
            goto label_10ba9c;
        }
    }
    ctx->pc = 0x10BA88u;
    // 0x10ba88: 0x3c040017
    ctx->pc = 0x10ba88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ba8c: 0xc04ace4
    ctx->pc = 0x10BA8Cu;
    SET_GPR_U32(ctx, 31, 0x10BA94u);
    ctx->pc = 0x10BA90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13576));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BA94u; }
    }
    if (ctx->pc != 0x10BA94u) { return; }
    ctx->pc = 0x10BA94u;
    // 0x10ba94: 0x1000009e
    ctx->pc = 0x10BA94u;
    {
        const bool branch_taken_0x10ba94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BA98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10ba94) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BA9Cu;
label_10ba9c:
    // 0x10ba9c: 0x282d
    ctx->pc = 0x10ba9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10baa0: 0xc0445ec
    ctx->pc = 0x10BAA0u;
    SET_GPR_U32(ctx, 31, 0x10BAA8u);
    ctx->pc = 0x10BAA4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1117B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAA8u; }
    }
    if (ctx->pc != 0x10BAA8u) { return; }
    ctx->pc = 0x10BAA8u;
    // 0x10baa8: 0x24040040
    ctx->pc = 0x10baa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    // 0x10baac: 0xc04a90c
    ctx->pc = 0x10BAACu;
    SET_GPR_U32(ctx, 31, 0x10BAB4u);
    ctx->pc = 0x10BAB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12A430u;
    {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x12a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAB4u; }
    }
    if (ctx->pc != 0x10BAB4u) { return; }
    ctx->pc = 0x10BAB4u;
    // 0x10bab4: 0x14400006
    ctx->pc = 0x10BAB4u;
    {
        const bool branch_taken_0x10bab4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BAB8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 2));
        if (branch_taken_0x10bab4) {
            ctx->pc = 0x10BAD0u;
            goto label_10bad0;
        }
    }
    ctx->pc = 0x10BABCu;
    // 0x10babc: 0x3c040017
    ctx->pc = 0x10babcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bac0: 0xc04ace4
    ctx->pc = 0x10BAC0u;
    SET_GPR_U32(ctx, 31, 0x10BAC8u);
    ctx->pc = 0x10BAC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13600));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAC8u; }
    }
    if (ctx->pc != 0x10BAC8u) { return; }
    ctx->pc = 0x10BAC8u;
    // 0x10bac8: 0x10000091
    ctx->pc = 0x10BAC8u;
    {
        const bool branch_taken_0x10bac8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BACCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bac8) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BAD0u;
label_10bad0:
    // 0x10bad0: 0x3c040017
    ctx->pc = 0x10bad0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bad4: 0x40282d
    ctx->pc = 0x10bad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bad8: 0x24843538
    ctx->pc = 0x10bad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13624));
    // 0x10badc: 0x240302d
    ctx->pc = 0x10badcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bae0: 0xc04ace4
    ctx->pc = 0x10BAE0u;
    SET_GPR_U32(ctx, 31, 0x10BAE8u);
    ctx->pc = 0x10BAE4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAE8u; }
    }
    if (ctx->pc != 0x10BAE8u) { return; }
    ctx->pc = 0x10BAE8u;
    // 0x10bae8: 0x8f8583f0
    ctx->pc = 0x10bae8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x10baec: 0x220202d
    ctx->pc = 0x10baecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10baf0: 0xc04467a
    ctx->pc = 0x10BAF0u;
    SET_GPR_U32(ctx, 31, 0x10BAF8u);
    ctx->pc = 0x10BAF4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BAF8u; }
    }
    if (ctx->pc != 0x10BAF8u) { return; }
    ctx->pc = 0x10BAF8u;
    // 0x10baf8: 0x3c040017
    ctx->pc = 0x10baf8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bafc: 0x40282d
    ctx->pc = 0x10bafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb00: 0x24843578
    ctx->pc = 0x10bb00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13688));
    // 0x10bb04: 0xc04ace4
    ctx->pc = 0x10BB04u;
    SET_GPR_U32(ctx, 31, 0x10BB0Cu);
    ctx->pc = 0x10BB08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB0Cu; }
    }
    if (ctx->pc != 0x10BB0Cu) { return; }
    ctx->pc = 0x10BB0Cu;
    // 0x10bb0c: 0xc042aa2
    ctx->pc = 0x10BB0Cu;
    SET_GPR_U32(ctx, 31, 0x10BB14u);
    ctx->pc = 0x10BB10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    ctx->pc = 0x10AA88u;
    {
        const uint32_t __entryPc = ctx->pc;
        PrintVAGDetails_0x10aa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB14u; }
    }
    if (ctx->pc != 0x10BB14u) { return; }
    ctx->pc = 0x10BB14u;
    // 0x10bb14: 0x8f9083f0
    ctx->pc = 0x10bb14u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x10bb18: 0x3c050017
    ctx->pc = 0x10bb18u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x10bb1c: 0x24a55e88
    ctx->pc = 0x10bb1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24200));
    // 0x10bb20: 0x24060004
    ctx->pc = 0x10bb20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x10bb24: 0xc04aefa
    ctx->pc = 0x10BB24u;
    SET_GPR_U32(ctx, 31, 0x10BB2Cu);
    ctx->pc = 0x10BB28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12BBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x12bbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB2Cu; }
    }
    if (ctx->pc != 0x10BB2Cu) { return; }
    ctx->pc = 0x10BB2Cu;
    // 0x10bb2c: 0x5440000a
    ctx->pc = 0x10BB2Cu;
    {
        const bool branch_taken_0x10bb2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10bb2c) {
            ctx->pc = 0x10BB30u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x10BB58u;
            goto label_10bb58;
        }
    }
    ctx->pc = 0x10BB34u;
    // 0x10bb34: 0xc042ffc
    ctx->pc = 0x10BB34u;
    SET_GPR_U32(ctx, 31, 0x10BB3Cu);
    ctx->pc = 0x10BB38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x10BFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB3Cu; }
    }
    if (ctx->pc != 0x10BB3Cu) { return; }
    ctx->pc = 0x10BB3Cu;
    // 0x10bb3c: 0x21300
    ctx->pc = 0x10bb3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 12));
    // 0x10bb40: 0x3403bb80
    ctx->pc = 0x10bb40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 48000));
    // 0x10bb44: 0x43001a
    ctx->pc = 0x10bb44u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x10bb48: 0x50600001
    ctx->pc = 0x10BB48u;
    {
        const bool branch_taken_0x10bb48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bb48) {
            ctx->pc = 0x10BB4Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x10BB50u;
            goto label_10bb50;
        }
    }
    ctx->pc = 0x10BB50u;
label_10bb50:
    // 0x10bb50: 0x10000006
    ctx->pc = 0x10BB50u;
    {
        const bool branch_taken_0x10bb50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bb50) {
            ctx->pc = 0x10BB6Cu;
            goto label_10bb6c;
        }
    }
    ctx->pc = 0x10BB58u;
label_10bb58:
    // 0x10bb58: 0x3403bb80
    ctx->pc = 0x10bb58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 48000));
    // 0x10bb5c: 0x50600001
    ctx->pc = 0x10BB5Cu;
    {
        const bool branch_taken_0x10bb5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bb5c) {
            ctx->pc = 0x10BB60u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x10BB64u;
            goto label_10bb64;
        }
    }
    ctx->pc = 0x10BB64u;
label_10bb64:
    // 0x10bb64: 0x21300
    ctx->pc = 0x10bb64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 12));
    // 0x10bb68: 0x43001a
    ctx->pc = 0x10bb68u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_10bb6c:
    // 0x10bb6c: 0x1012
    ctx->pc = 0x10bb6cu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x10bb70: 0xaea20000
    ctx->pc = 0x10bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x10bb74: 0x220202d
    ctx->pc = 0x10bb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb78: 0x24050030
    ctx->pc = 0x10bb78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x10bb7c: 0xc0445ec
    ctx->pc = 0x10BB7Cu;
    SET_GPR_U32(ctx, 31, 0x10BB84u);
    ctx->pc = 0x10BB80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1117B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB84u; }
    }
    if (ctx->pc != 0x10BB84u) { return; }
    ctx->pc = 0x10BB84u;
    // 0x10bb84: 0x2650ffd0
    ctx->pc = 0x10bb84u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x10bb88: 0x8f8583f0
    ctx->pc = 0x10bb88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x10bb8c: 0x220202d
    ctx->pc = 0x10bb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb90: 0xc04467a
    ctx->pc = 0x10BB90u;
    SET_GPR_U32(ctx, 31, 0x10BB98u);
    ctx->pc = 0x10BB94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1119E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BB98u; }
    }
    if (ctx->pc != 0x10BB98u) { return; }
    ctx->pc = 0x10BB98u;
    // 0x10bb98: 0x3c040017
    ctx->pc = 0x10bb98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bb9c: 0x40282d
    ctx->pc = 0x10bb9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bba0: 0x248435a0
    ctx->pc = 0x10bba0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13728));
    // 0x10bba4: 0xc04ace4
    ctx->pc = 0x10BBA4u;
    SET_GPR_U32(ctx, 31, 0x10BBACu);
    ctx->pc = 0x10BBA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBACu; }
    }
    if (ctx->pc != 0x10BBACu) { return; }
    ctx->pc = 0x10BBACu;
    // 0x10bbac: 0xc04458c
    ctx->pc = 0x10BBACu;
    SET_GPR_U32(ctx, 31, 0x10BBB4u);
    ctx->pc = 0x10BBB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x111630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBB4u; }
    }
    if (ctx->pc != 0x10BBB4u) { return; }
    ctx->pc = 0x10BBB4u;
    // 0x10bbb4: 0xc043948
    ctx->pc = 0x10BBB4u;
    SET_GPR_U32(ctx, 31, 0x10BBBCu);
    ctx->pc = 0x10BBB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBBCu; }
    }
    if (ctx->pc != 0x10BBBCu) { return; }
    ctx->pc = 0x10BBBCu;
    // 0x10bbbc: 0xc045066
    ctx->pc = 0x10BBBCu;
    SET_GPR_U32(ctx, 31, 0x10BBC4u);
    ctx->pc = 0x10BBC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBC4u; }
    }
    if (ctx->pc != 0x10BBC4u) { return; }
    ctx->pc = 0x10BBC4u;
    // 0x10bbc4: 0x14400006
    ctx->pc = 0x10BBC4u;
    {
        const bool branch_taken_0x10bbc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BBC8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935436), GPR_U32(ctx, 2));
        if (branch_taken_0x10bbc4) {
            ctx->pc = 0x10BBE0u;
            goto label_10bbe0;
        }
    }
    ctx->pc = 0x10BBCCu;
    // 0x10bbcc: 0x3c040017
    ctx->pc = 0x10bbccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bbd0: 0xc04ace4
    ctx->pc = 0x10BBD0u;
    SET_GPR_U32(ctx, 31, 0x10BBD8u);
    ctx->pc = 0x10BBD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13760));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBD8u; }
    }
    if (ctx->pc != 0x10BBD8u) { return; }
    ctx->pc = 0x10BBD8u;
    // 0x10bbd8: 0x1000004d
    ctx->pc = 0x10BBD8u;
    {
        const bool branch_taken_0x10bbd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BBDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bbd8) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BBE0u;
label_10bbe0:
    // 0x10bbe0: 0x3c040017
    ctx->pc = 0x10bbe0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bbe4: 0x40282d
    ctx->pc = 0x10bbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbe8: 0x248435e0
    ctx->pc = 0x10bbe8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13792));
    // 0x10bbec: 0xc04ace4
    ctx->pc = 0x10BBECu;
    SET_GPR_U32(ctx, 31, 0x10BBF4u);
    ctx->pc = 0x10BBF0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BBF4u; }
    }
    if (ctx->pc != 0x10BBF4u) { return; }
    ctx->pc = 0x10BBF4u;
    // 0x10bbf4: 0x8f8483f0
    ctx->pc = 0x10bbf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x10bbf8: 0x200302d
    ctx->pc = 0x10bbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbfc: 0x8f85838c
    ctx->pc = 0x10bbfcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10bc00: 0xc045c60
    ctx->pc = 0x10BC00u;
    SET_GPR_U32(ctx, 31, 0x10BC08u);
    ctx->pc = 0x10BC04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x117180u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdTransToIOP_0x117180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC08u; }
    }
    if (ctx->pc != 0x10BC08u) { return; }
    ctx->pc = 0x10BC08u;
    // 0x10bc08: 0x14510006
    ctx->pc = 0x10BC08u;
    {
        const bool branch_taken_0x10bc08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10BC0Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        if (branch_taken_0x10bc08) {
            ctx->pc = 0x10BC24u;
            goto label_10bc24;
        }
    }
    ctx->pc = 0x10BC10u;
    // 0x10bc10: 0x3c040017
    ctx->pc = 0x10bc10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bc14: 0xc04ace4
    ctx->pc = 0x10BC14u;
    SET_GPR_U32(ctx, 31, 0x10BC1Cu);
    ctx->pc = 0x10BC18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13824));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC1Cu; }
    }
    if (ctx->pc != 0x10BC1Cu) { return; }
    ctx->pc = 0x10BC1Cu;
    // 0x10bc1c: 0x1000003c
    ctx->pc = 0x10BC1Cu;
    {
        const bool branch_taken_0x10bc1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BC20u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10bc1c) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BC24u;
label_10bc24:
    // 0x10bc24: 0x3043000f
    ctx->pc = 0x10bc24u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 15));
    // 0x10bc28: 0x50600005
    ctx->pc = 0x10BC28u;
    {
        const bool branch_taken_0x10bc28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bc28) {
            ctx->pc = 0x10BC2Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20496));
            ctx->pc = 0x10BC40u;
            goto label_10bc40;
        }
    }
    ctx->pc = 0x10BC30u;
    // 0x10bc30: 0x24420010
    ctx->pc = 0x10bc30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x10bc34: 0x431023
    ctx->pc = 0x10bc34u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10bc38: 0xaf828388
    ctx->pc = 0x10bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935432), GPR_U32(ctx, 2));
    // 0x10bc3c: 0x24425010
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20496));
label_10bc40:
    // 0x10bc40: 0x3c040017
    ctx->pc = 0x10bc40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bc44: 0xae820000
    ctx->pc = 0x10bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x10bc48: 0x24843620
    ctx->pc = 0x10bc48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13856));
    // 0x10bc4c: 0x200282d
    ctx->pc = 0x10bc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc50: 0x8f828388
    ctx->pc = 0x10bc50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10bc54: 0x2442ffd0
    ctx->pc = 0x10bc54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x10bc58: 0x521021
    ctx->pc = 0x10bc58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10bc5c: 0xaf828388
    ctx->pc = 0x10bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935432), GPR_U32(ctx, 2));
    // 0x10bc60: 0xc04ace4
    ctx->pc = 0x10BC60u;
    SET_GPR_U32(ctx, 31, 0x10BC68u);
    ctx->pc = 0x10BC64u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC68u; }
    }
    if (ctx->pc != 0x10BC68u) { return; }
    ctx->pc = 0x10BC68u;
    // 0x10bc68: 0x8e890000
    ctx->pc = 0x10bc68u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10bc6c: 0x200502d
    ctx->pc = 0x10bc6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc70: 0x8f88838c
    ctx->pc = 0x10bc70u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10bc74: 0x202d
    ctx->pc = 0x10bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc78: 0x340580d0
    ctx->pc = 0x10bc78u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32976));
    // 0x10bc7c: 0x302d
    ctx->pc = 0x10bc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc80: 0xc045c80
    ctx->pc = 0x10BC80u;
    SET_GPR_U32(ctx, 31, 0x10BC88u);
    ctx->pc = 0x10BC84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC88u; }
    }
    if (ctx->pc != 0x10BC88u) { return; }
    ctx->pc = 0x10BC88u;
    // 0x10bc88: 0x14510005
    ctx->pc = 0x10BC88u;
    {
        const bool branch_taken_0x10bc88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10BC8Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10bc88) {
            ctx->pc = 0x10BCA0u;
            goto label_10bca0;
        }
    }
    ctx->pc = 0x10BC90u;
    // 0x10bc90: 0x3c040017
    ctx->pc = 0x10bc90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bc94: 0xc04ace4
    ctx->pc = 0x10BC94u;
    SET_GPR_U32(ctx, 31, 0x10BC9Cu);
    ctx->pc = 0x10BC98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13896));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BC9Cu; }
    }
    if (ctx->pc != 0x10BC9Cu) { return; }
    ctx->pc = 0x10BC9Cu;
    // 0x10bc9c: 0x8f838390
    ctx->pc = 0x10bc9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
label_10bca0:
    // 0x10bca0: 0x24020001
    ctx->pc = 0x10bca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bca4: 0x24630001
    ctx->pc = 0x10bca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x10bca8: 0x10000019
    ctx->pc = 0x10BCA8u;
    {
        const bool branch_taken_0x10bca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BCACu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 3));
        if (branch_taken_0x10bca8) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BCB0u;
label_10bcb0:
    // 0x10bcb0: 0x24020001
    ctx->pc = 0x10bcb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bcb4: 0x14620006
    ctx->pc = 0x10BCB4u;
    {
        const bool branch_taken_0x10bcb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x10BCB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x10bcb4) {
            ctx->pc = 0x10BCD0u;
            goto label_10bcd0;
        }
    }
    ctx->pc = 0x10BCBCu;
    // 0x10bcbc: 0x3c040017
    ctx->pc = 0x10bcbcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bcc0: 0xc04ace4
    ctx->pc = 0x10BCC0u;
    SET_GPR_U32(ctx, 31, 0x10BCC8u);
    ctx->pc = 0x10BCC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14720));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCC8u; }
    }
    if (ctx->pc != 0x10BCC8u) { return; }
    ctx->pc = 0x10BCC8u;
    // 0x10bcc8: 0x10000011
    ctx->pc = 0x10BCC8u;
    {
        const bool branch_taken_0x10bcc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BCCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10bcc8) {
            ctx->pc = 0x10BD10u;
            goto label_10bd10;
        }
    }
    ctx->pc = 0x10BCD0u;
label_10bcd0:
    // 0x10bcd0: 0x5462000e
    ctx->pc = 0x10BCD0u;
    {
        const bool branch_taken_0x10bcd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x10bcd0) {
            ctx->pc = 0x10BCD4u;
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
            ctx->pc = 0x10BD0Cu;
            goto label_10bd0c;
        }
    }
    ctx->pc = 0x10BCD8u;
    // 0x10bcd8: 0xc045082
    ctx->pc = 0x10BCD8u;
    SET_GPR_U32(ctx, 31, 0x10BCE0u);
    ctx->pc = 0x10BCDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    ctx->pc = 0x114208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCE0u; }
    }
    if (ctx->pc != 0x10BCE0u) { return; }
    ctx->pc = 0x10BCE0u;
    // 0x10bce0: 0x50400005
    ctx->pc = 0x10BCE0u;
    {
        const bool branch_taken_0x10bce0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10bce0) {
            ctx->pc = 0x10BCE4u;
            SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
            ctx->pc = 0x10BCF8u;
            goto label_10bcf8;
        }
    }
    ctx->pc = 0x10BCE8u;
    // 0x10bce8: 0x3c040017
    ctx->pc = 0x10bce8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10bcec: 0xc04ace4
    ctx->pc = 0x10BCECu;
    SET_GPR_U32(ctx, 31, 0x10BCF4u);
    ctx->pc = 0x10BCF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13960));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BCF4u; }
    }
    if (ctx->pc != 0x10BCF4u) { return; }
    ctx->pc = 0x10BCF4u;
    // 0x10bcf4: 0x3c040017
    ctx->pc = 0x10bcf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
label_10bcf8:
    // 0x10bcf8: 0xc04ace4
    ctx->pc = 0x10BCF8u;
    SET_GPR_U32(ctx, 31, 0x10BD00u);
    ctx->pc = 0x10BCFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13992));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD00u; }
    }
    if (ctx->pc != 0x10BD00u) { return; }
    ctx->pc = 0x10BD00u;
    // 0x10bd00: 0xc04a996
    ctx->pc = 0x10BD00u;
    SET_GPR_U32(ctx, 31, 0x10BD08u);
    ctx->pc = 0x10BD04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    ctx->pc = 0x12A658u;
    {
        const uint32_t __entryPc = ctx->pc;
        free_0x12a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD08u; }
    }
    if (ctx->pc != 0x10BD08u) { return; }
    ctx->pc = 0x10BD08u;
    // 0x10bd08: 0xaf808390
    ctx->pc = 0x10bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
label_10bd0c:
    // 0x10bd0c: 0x102d
    ctx->pc = 0x10bd0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bd10:
    // 0x10bd10: 0xdfbf0060
    ctx->pc = 0x10bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10bd14: 0xdfb50050
    ctx->pc = 0x10bd14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10bd18: 0xdfb40040
    ctx->pc = 0x10bd18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10bd1c: 0xdfb30030
    ctx->pc = 0x10bd1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10bd20: 0xdfb20020
    ctx->pc = 0x10bd20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bd24: 0xdfb10010
    ctx->pc = 0x10bd24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bd28: 0xdfb00000
    ctx->pc = 0x10bd28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bd2c: 0x3e00008
    ctx->pc = 0x10BD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BD30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10BA70u: goto label_10ba70;
            case 0x10BA9Cu: goto label_10ba9c;
            case 0x10BAD0u: goto label_10bad0;
            case 0x10BB50u: goto label_10bb50;
            case 0x10BB58u: goto label_10bb58;
            case 0x10BB64u: goto label_10bb64;
            case 0x10BB6Cu: goto label_10bb6c;
            case 0x10BBE0u: goto label_10bbe0;
            case 0x10BC24u: goto label_10bc24;
            case 0x10BC40u: goto label_10bc40;
            case 0x10BCA0u: goto label_10bca0;
            case 0x10BCB0u: goto label_10bcb0;
            case 0x10BCD0u: goto label_10bcd0;
            case 0x10BCF8u: goto label_10bcf8;
            case 0x10BD0Cu: goto label_10bd0c;
            case 0x10BD10u: goto label_10bd10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10BD34u;
}
