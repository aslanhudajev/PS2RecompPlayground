#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInitMoves
// Address: 0x291fa8 - 0x292208
void CritterInitMoves_0x291fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291fa8u;

    // 0x291fa8: 0x27bdff70
    ctx->pc = 0x291fa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x291fac: 0xffbf0080
    ctx->pc = 0x291facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x291fb0: 0xffb70070
    ctx->pc = 0x291fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x291fb4: 0xffb60060
    ctx->pc = 0x291fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x291fb8: 0xffb50050
    ctx->pc = 0x291fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x291fbc: 0xffb40040
    ctx->pc = 0x291fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x291fc0: 0xffb30030
    ctx->pc = 0x291fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x291fc4: 0xffb20020
    ctx->pc = 0x291fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x291fc8: 0xffb10010
    ctx->pc = 0x291fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x291fcc: 0xffb00000
    ctx->pc = 0x291fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291fd0: 0x80882d
    ctx->pc = 0x291fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fd4: 0x8e340130
    ctx->pc = 0x291fd4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x291fd8: 0x8e350138
    ctx->pc = 0x291fd8u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x291fdc: 0x86220112
    ctx->pc = 0x291fdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    // 0x291fe0: 0x24030090
    ctx->pc = 0x291fe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x291fe4: 0x431018
    ctx->pc = 0x291fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x291fe8: 0x8e83002c
    ctx->pc = 0x291fe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x291fec: 0x43b821
    ctx->pc = 0x291fecu;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291ff0: 0x8622011a
    ctx->pc = 0x291ff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 282)));
    // 0x291ff4: 0x24030050
    ctx->pc = 0x291ff4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
    // 0x291ff8: 0x431018
    ctx->pc = 0x291ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x291ffc: 0x8e83003c
    ctx->pc = 0x291ffcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x292000: 0x12a00076
    ctx->pc = 0x292000u;
    {
        const bool branch_taken_0x292000 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x292004u;
        SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x292000) {
            ctx->pc = 0x2921DCu;
            goto label_2921dc;
        }
    }
    ctx->pc = 0x292008u;
    // 0x292008: 0x86230110
    ctx->pc = 0x292008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x29200c: 0x3c040035
    ctx->pc = 0x29200cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x292010: 0x8c821d74
    ctx->pc = 0x292010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7540)));
    // 0x292014: 0x43102a
    ctx->pc = 0x292014u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x292018: 0x54400001
    ctx->pc = 0x292018u;
    {
        const bool branch_taken_0x292018 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x292018) {
            ctx->pc = 0x29201Cu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 7540), GPR_U32(ctx, 3));
            ctx->pc = 0x292020u;
            goto label_292020;
        }
    }
    ctx->pc = 0x292020u;
label_292020:
    // 0x292020: 0x86230114
    ctx->pc = 0x292020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x292024: 0x3c040035
    ctx->pc = 0x292024u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x292028: 0x8c821d78
    ctx->pc = 0x292028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7544)));
    // 0x29202c: 0x43102a
    ctx->pc = 0x29202cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x292030: 0x54400001
    ctx->pc = 0x292030u;
    {
        const bool branch_taken_0x292030 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x292030) {
            ctx->pc = 0x292034u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 7544), GPR_U32(ctx, 3));
            ctx->pc = 0x292038u;
            goto label_292038;
        }
    }
    ctx->pc = 0x292038u;
label_292038:
    // 0x292038: 0x86230118
    ctx->pc = 0x292038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x29203c: 0x3c040035
    ctx->pc = 0x29203cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x292040: 0x8c821d7c
    ctx->pc = 0x292040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7548)));
    // 0x292044: 0x43102a
    ctx->pc = 0x292044u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x292048: 0x54400001
    ctx->pc = 0x292048u;
    {
        const bool branch_taken_0x292048 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x292048) {
            ctx->pc = 0x29204Cu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 7548), GPR_U32(ctx, 3));
            ctx->pc = 0x292050u;
            goto label_292050;
        }
    }
    ctx->pc = 0x292050u;
label_292050:
    // 0x292050: 0x86220110
    ctx->pc = 0x292050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x292054: 0x1840003e
    ctx->pc = 0x292054u;
    {
        const bool branch_taken_0x292054 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292058u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292054) {
            ctx->pc = 0x292150u;
            goto label_292150;
        }
    }
    ctx->pc = 0x29205Cu;
    // 0x29205c: 0x24020090
    ctx->pc = 0x29205cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
label_292060:
    // 0x292060: 0x2621818
    ctx->pc = 0x292060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x292064: 0x778021
    ctx->pc = 0x292064u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x292068: 0x8e020000
    ctx->pc = 0x292068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29206c: 0x2442ffd0
    ctx->pc = 0x29206cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x292070: 0x2c42000a
    ctx->pc = 0x292070u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
    // 0x292074: 0x10400004
    ctx->pc = 0x292074u;
    {
        const bool branch_taken_0x292074 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x292078u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x292074) {
            ctx->pc = 0x292088u;
            goto label_292088;
        }
    }
    ctx->pc = 0x29207Cu;
    // 0x29207c: 0x8e22005c
    ctx->pc = 0x29207cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x292080: 0x431025
    ctx->pc = 0x292080u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292084: 0xae22005c
    ctx->pc = 0x292084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_292088:
    // 0x292088: 0x8602000c
    ctx->pc = 0x292088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29208c: 0x443002c
    ctx->pc = 0x29208Cu;
    {
        const bool branch_taken_0x29208c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29208c) {
            ctx->pc = 0x292090u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x292140u;
            goto label_292140;
        }
    }
    ctx->pc = 0x292094u;
    // 0x292094: 0x82020020
    ctx->pc = 0x292094u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x292098: 0x1040000f
    ctx->pc = 0x292098u;
    {
        const bool branch_taken_0x292098 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29209Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292098) {
            ctx->pc = 0x2920D8u;
            goto label_2920d8;
        }
    }
    ctx->pc = 0x2920A0u;
    // 0x2920a0: 0x26120020
    ctx->pc = 0x2920a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 32));
    // 0x2920a4: 0xc084bda
    ctx->pc = 0x2920A4u;
    SET_GPR_U32(ctx, 31, 0x2920ACu);
    ctx->pc = 0x2920A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeHeaderFindSeq_0x212f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2920ACu; }
    }
    if (ctx->pc != 0x2920ACu) { return; }
    ctx->pc = 0x2920ACu;
    // 0x2920ac: 0xa602000c
    ctx->pc = 0x2920acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2920b0: 0x21400
    ctx->pc = 0x2920b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2920b4: 0x4410009
    ctx->pc = 0x2920B4u;
    {
        const bool branch_taken_0x2920b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2920B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2920b4) {
            ctx->pc = 0x2920DCu;
            goto label_2920dc;
        }
    }
    ctx->pc = 0x2920BCu;
    // 0x2920bc: 0x3c04003b
    ctx->pc = 0x2920bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2920c0: 0x8e250120
    ctx->pc = 0x2920c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2920c4: 0x2484e080
    ctx->pc = 0x2920c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959232));
    // 0x2920c8: 0x24a50010
    ctx->pc = 0x2920c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x2920cc: 0xc0b492e
    ctx->pc = 0x2920CCu;
    SET_GPR_U32(ctx, 31, 0x2920D4u);
    ctx->pc = 0x2920D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2920D4u; }
    }
    if (ctx->pc != 0x2920D4u) { return; }
    ctx->pc = 0x2920D4u;
    // 0x2920d4: 0xa600000c
    ctx->pc = 0x2920d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_2920d8:
    // 0x2920d8: 0x220202d
    ctx->pc = 0x2920d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2920dc:
    // 0x2920dc: 0x26050030
    ctx->pc = 0x2920dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 48));
    // 0x2920e0: 0xc0a47c8
    ctx->pc = 0x2920E0u;
    SET_GPR_U32(ctx, 31, 0x2920E8u);
    ctx->pc = 0x2920E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x291F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNodeIdx_0x291f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2920E8u; }
    }
    if (ctx->pc != 0x2920E8u) { return; }
    ctx->pc = 0x2920E8u;
    // 0x2920e8: 0xa602000e
    ctx->pc = 0x2920e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2920ec: 0x8e220120
    ctx->pc = 0x2920ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2920f0: 0x280202d
    ctx->pc = 0x2920f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920f4: 0x86050048
    ctx->pc = 0x2920f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2920f8: 0xc0a47a0
    ctx->pc = 0x2920F8u;
    SET_GPR_U32(ctx, 31, 0x292100u);
    ctx->pc = 0x2920FCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->pc = 0x291E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitDamage_0x291e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292100u; }
    }
    if (ctx->pc != 0x292100u) { return; }
    ctx->pc = 0x292100u;
    // 0x292100: 0x8e220120
    ctx->pc = 0x292100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x292104: 0x280202d
    ctx->pc = 0x292104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292108: 0x8605004a
    ctx->pc = 0x292108u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x29210c: 0xc0a47a0
    ctx->pc = 0x29210Cu;
    SET_GPR_U32(ctx, 31, 0x292114u);
    ctx->pc = 0x292110u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->pc = 0x291E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitDamage_0x291e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292114u; }
    }
    if (ctx->pc != 0x292114u) { return; }
    ctx->pc = 0x292114u;
    // 0x292114: 0x8e220120
    ctx->pc = 0x292114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x292118: 0x280202d
    ctx->pc = 0x292118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29211c: 0x86050058
    ctx->pc = 0x29211cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x292120: 0xc0a474c
    ctx->pc = 0x292120u;
    SET_GPR_U32(ctx, 31, 0x292128u);
    ctx->pc = 0x292124u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->pc = 0x291D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitSfx_0x291d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292128u; }
    }
    if (ctx->pc != 0x292128u) { return; }
    ctx->pc = 0x292128u;
    // 0x292128: 0x8e220120
    ctx->pc = 0x292128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x29212c: 0x280202d
    ctx->pc = 0x29212cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292130: 0x8605005c
    ctx->pc = 0x292130u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x292134: 0xc0a474c
    ctx->pc = 0x292134u;
    SET_GPR_U32(ctx, 31, 0x29213Cu);
    ctx->pc = 0x292138u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->pc = 0x291D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitSfx_0x291d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29213Cu; }
    }
    if (ctx->pc != 0x29213Cu) { return; }
    ctx->pc = 0x29213Cu;
    // 0x29213c: 0x26730001
    ctx->pc = 0x29213cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_292140:
    // 0x292140: 0x86220110
    ctx->pc = 0x292140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x292144: 0x262102a
    ctx->pc = 0x292144u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x292148: 0x1440ffc5
    ctx->pc = 0x292148u;
    {
        const bool branch_taken_0x292148 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29214Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
        if (branch_taken_0x292148) {
            ctx->pc = 0x292060u;
            goto label_292060;
        }
    }
    ctx->pc = 0x292150u;
label_292150:
    // 0x292150: 0x86220118
    ctx->pc = 0x292150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x292154: 0x1840000f
    ctx->pc = 0x292154u;
    {
        const bool branch_taken_0x292154 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292158u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292154) {
            ctx->pc = 0x292194u;
            goto label_292194;
        }
    }
    ctx->pc = 0x29215Cu;
    // 0x29215c: 0x24120050
    ctx->pc = 0x29215cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 80));
    // 0x292160: 0x2721018
    ctx->pc = 0x292160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x292164: 0x0
    ctx->pc = 0x292164u;
    // NOP
label_292168:
    // 0x292168: 0x568021
    ctx->pc = 0x292168u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x29216c: 0x220202d
    ctx->pc = 0x29216cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292170: 0x200282d
    ctx->pc = 0x292170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292174: 0xc0a47c8
    ctx->pc = 0x292174u;
    SET_GPR_U32(ctx, 31, 0x29217Cu);
    ctx->pc = 0x292178u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x291F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNodeIdx_0x291f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29217Cu; }
    }
    if (ctx->pc != 0x29217Cu) { return; }
    ctx->pc = 0x29217Cu;
    // 0x29217c: 0xa6020014
    ctx->pc = 0x29217cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x292180: 0x26730001
    ctx->pc = 0x292180u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x292184: 0x86220118
    ctx->pc = 0x292184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x292188: 0x262102a
    ctx->pc = 0x292188u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x29218c: 0x1440fff6
    ctx->pc = 0x29218Cu;
    {
        const bool branch_taken_0x29218c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x292190u;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29218c) {
            ctx->pc = 0x292168u;
            goto label_292168;
        }
    }
    ctx->pc = 0x292194u;
label_292194:
    // 0x292194: 0x8e220120
    ctx->pc = 0x292194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x292198: 0x280202d
    ctx->pc = 0x292198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29219c: 0x862500f4
    ctx->pc = 0x29219cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x2921a0: 0xc0a474c
    ctx->pc = 0x2921A0u;
    SET_GPR_U32(ctx, 31, 0x2921A8u);
    ctx->pc = 0x2921A4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->pc = 0x291D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitSfx_0x291d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921A8u; }
    }
    if (ctx->pc != 0x2921A8u) { return; }
    ctx->pc = 0x2921A8u;
    // 0x2921a8: 0x8e220120
    ctx->pc = 0x2921a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2921ac: 0x280202d
    ctx->pc = 0x2921acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921b0: 0x862500f6
    ctx->pc = 0x2921b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 246)));
    // 0x2921b4: 0xc0a474c
    ctx->pc = 0x2921B4u;
    SET_GPR_U32(ctx, 31, 0x2921BCu);
    ctx->pc = 0x2921B8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->pc = 0x291D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitSfx_0x291d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921BCu; }
    }
    if (ctx->pc != 0x2921BCu) { return; }
    ctx->pc = 0x2921BCu;
    // 0x2921bc: 0xae370124
    ctx->pc = 0x2921bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 23));
    // 0x2921c0: 0xae36012c
    ctx->pc = 0x2921c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 22));
    // 0x2921c4: 0x86220116
    ctx->pc = 0x2921c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 278)));
    // 0x2921c8: 0x24030050
    ctx->pc = 0x2921c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2921cc: 0x431018
    ctx->pc = 0x2921ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2921d0: 0x8e830034
    ctx->pc = 0x2921d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x2921d4: 0x431021
    ctx->pc = 0x2921d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2921d8: 0xae220128
    ctx->pc = 0x2921d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_2921dc:
    // 0x2921dc: 0xdfbf0080
    ctx->pc = 0x2921dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2921e0: 0xdfb70070
    ctx->pc = 0x2921e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2921e4: 0xdfb60060
    ctx->pc = 0x2921e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2921e8: 0xdfb50050
    ctx->pc = 0x2921e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2921ec: 0xdfb40040
    ctx->pc = 0x2921ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2921f0: 0xdfb30030
    ctx->pc = 0x2921f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2921f4: 0xdfb20020
    ctx->pc = 0x2921f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2921f8: 0xdfb10010
    ctx->pc = 0x2921f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2921fc: 0xdfb00000
    ctx->pc = 0x2921fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292200: 0x3e00008
    ctx->pc = 0x292200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292020u: goto label_292020;
            case 0x292038u: goto label_292038;
            case 0x292050u: goto label_292050;
            case 0x292060u: goto label_292060;
            case 0x292088u: goto label_292088;
            case 0x2920D8u: goto label_2920d8;
            case 0x2920DCu: goto label_2920dc;
            case 0x292140u: goto label_292140;
            case 0x292150u: goto label_292150;
            case 0x292168u: goto label_292168;
            case 0x292194u: goto label_292194;
            case 0x2921DCu: goto label_2921dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292208u;
}
