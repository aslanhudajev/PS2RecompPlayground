#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: findOp
// Address: 0x2b5d08 - 0x2b61d8
void findOp_0x2b5d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5d08u;

    // 0x2b5d08: 0x27bdff50
    ctx->pc = 0x2b5d08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b5d0c: 0xffbf00a0
    ctx->pc = 0x2b5d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2b5d10: 0xffbe0090
    ctx->pc = 0x2b5d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2b5d14: 0xffb70080
    ctx->pc = 0x2b5d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b5d18: 0xffb60070
    ctx->pc = 0x2b5d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b5d1c: 0xffb50060
    ctx->pc = 0x2b5d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b5d20: 0xffb40050
    ctx->pc = 0x2b5d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b5d24: 0xffb30040
    ctx->pc = 0x2b5d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b5d28: 0xffb20030
    ctx->pc = 0x2b5d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b5d2c: 0xffb10020
    ctx->pc = 0x2b5d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b5d30: 0xffb00010
    ctx->pc = 0x2b5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b5d34: 0xafa40000
    ctx->pc = 0x2b5d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b5d38: 0xa0b02d
    ctx->pc = 0x2b5d38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d3c: 0xc0b82d
    ctx->pc = 0x2b5d3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d40: 0xa02d
    ctx->pc = 0x2b5d40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d44: 0x3c020037
    ctx->pc = 0x2b5d44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b5d48: 0x8c4220ac
    ctx->pc = 0x2b5d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b5d4c: 0x8c530040
    ctx->pc = 0x2b5d4cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2b5d50: 0x3c1e0037
    ctx->pc = 0x2b5d50u;
    SET_GPR_U32(ctx, 30, ((uint32_t)55 << 16));
    // 0x2b5d54: 0x27d221e8
    ctx->pc = 0x2b5d54u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 30), 8680));
    // 0x2b5d58: 0x92420004
    ctx->pc = 0x2b5d58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b5d5c: 0x14400065
    ctx->pc = 0x2B5D5Cu;
    {
        const bool branch_taken_0x2b5d5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B5D60u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d5c) {
            ctx->pc = 0x2B5EF4u;
            goto label_2b5ef4;
        }
    }
    ctx->pc = 0x2B5D64u;
    // 0x2b5d64: 0x3c02003c
    ctx->pc = 0x2b5d64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b5d68: 0x24506398
    ctx->pc = 0x2b5d68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 25496));
    // 0x2b5d6c: 0xa0406398
    ctx->pc = 0x2b5d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25496), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5d70: 0x3c02003c
    ctx->pc = 0x2b5d70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b5d74: 0x245163d0
    ctx->pc = 0x2b5d74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 25552));
    // 0x2b5d78: 0xa04063d0
    ctx->pc = 0x2b5d78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25552), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5d7c: 0x3c02003c
    ctx->pc = 0x2b5d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b5d80: 0xa0406408
    ctx->pc = 0x2b5d80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25608), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5d84: 0x200202d
    ctx->pc = 0x2b5d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d88: 0xc0ad71e
    ctx->pc = 0x2B5D88u;
    SET_GPR_U32(ctx, 31, 0x2B5D90u);
    ctx->pc = 0x2B5D8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x2B5C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAddC_0x2b5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D90u; }
    }
    if (ctx->pc != 0x2B5D90u) { return; }
    ctx->pc = 0x2B5D90u;
    // 0x2b5d90: 0x200202d
    ctx->pc = 0x2b5d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5d94: 0xc0ad71e
    ctx->pc = 0x2B5D94u;
    SET_GPR_U32(ctx, 31, 0x2B5D9Cu);
    ctx->pc = 0x2B5D98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 93));
    ctx->pc = 0x2B5C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAddC_0x2b5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D9Cu; }
    }
    if (ctx->pc != 0x2B5D9Cu) { return; }
    ctx->pc = 0x2B5D9Cu;
    // 0x2b5d9c: 0x200202d
    ctx->pc = 0x2b5d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5da0: 0xc0ad71e
    ctx->pc = 0x2B5DA0u;
    SET_GPR_U32(ctx, 31, 0x2B5DA8u);
    ctx->pc = 0x2B5DA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 41));
    ctx->pc = 0x2B5C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAddC_0x2b5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5DA8u; }
    }
    if (ctx->pc != 0x2B5DA8u) { return; }
    ctx->pc = 0x2B5DA8u;
    // 0x2b5da8: 0x200202d
    ctx->pc = 0x2b5da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dac: 0xc0ad71e
    ctx->pc = 0x2B5DACu;
    SET_GPR_U32(ctx, 31, 0x2B5DB4u);
    ctx->pc = 0x2B5DB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 39));
    ctx->pc = 0x2B5C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAddC_0x2b5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5DB4u; }
    }
    if (ctx->pc != 0x2B5DB4u) { return; }
    ctx->pc = 0x2B5DB4u;
    // 0x2b5db4: 0x220202d
    ctx->pc = 0x2b5db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5db8: 0xc0ad71e
    ctx->pc = 0x2B5DB8u;
    SET_GPR_U32(ctx, 31, 0x2B5DC0u);
    ctx->pc = 0x2B5DBCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x2B5C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAddC_0x2b5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5DC0u; }
    }
    if (ctx->pc != 0x2B5DC0u) { return; }
    ctx->pc = 0x2B5DC0u;
    // 0x2b5dc0: 0x220202d
    ctx->pc = 0x2b5dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dc4: 0xc0ad71e
    ctx->pc = 0x2B5DC4u;
    SET_GPR_U32(ctx, 31, 0x2B5DCCu);
    ctx->pc = 0x2B5DC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 93));
    ctx->pc = 0x2B5C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAddC_0x2b5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5DCCu; }
    }
    if (ctx->pc != 0x2B5DCCu) { return; }
    ctx->pc = 0x2B5DCCu;
    // 0x2b5dcc: 0x220202d
    ctx->pc = 0x2b5dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5dd0: 0xc0ad71e
    ctx->pc = 0x2B5DD0u;
    SET_GPR_U32(ctx, 31, 0x2B5DD8u);
    ctx->pc = 0x2B5DD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 41));
    ctx->pc = 0x2B5C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAddC_0x2b5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5DD8u; }
    }
    if (ctx->pc != 0x2B5DD8u) { return; }
    ctx->pc = 0x2B5DD8u;
    // 0x2b5dd8: 0x8fc221e8
    ctx->pc = 0x2b5dd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8680)));
    // 0x2b5ddc: 0x10400024
    ctx->pc = 0x2B5DDCu;
    {
        const bool branch_taken_0x2b5ddc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5DE0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ddc) {
            ctx->pc = 0x2B5E70u;
            goto label_2b5e70;
        }
    }
    ctx->pc = 0x2B5DE4u;
    // 0x2b5de4: 0x3c1e003c
    ctx->pc = 0x2b5de4u;
    SET_GPR_U32(ctx, 30, ((uint32_t)60 << 16));
label_2b5de8:
    // 0x2b5de8: 0xc0bf306
    ctx->pc = 0x2B5DE8u;
    SET_GPR_U32(ctx, 31, 0x2B5DF0u);
    ctx->pc = 0x2B5DECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5DF0u; }
    }
    if (ctx->pc != 0x2B5DF0u) { return; }
    ctx->pc = 0x2B5DF0u;
    // 0x2b5df0: 0xa2220004
    ctx->pc = 0x2b5df0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b5df4: 0x92220007
    ctx->pc = 0x2b5df4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x2b5df8: 0x24030001
    ctx->pc = 0x2b5df8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5dfc: 0x10430005
    ctx->pc = 0x2B5DFCu;
    {
        const bool branch_taken_0x2b5dfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2B5E00u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2b5dfc) {
            ctx->pc = 0x2B5E14u;
            goto label_2b5e14;
        }
    }
    ctx->pc = 0x2B5E04u;
    // 0x2b5e04: 0x8e220000
    ctx->pc = 0x2b5e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5e08: 0x246463d0
    ctx->pc = 0x2b5e08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 25552));
    // 0x2b5e0c: 0xc0ad71e
    ctx->pc = 0x2B5E0Cu;
    SET_GPR_U32(ctx, 31, 0x2B5E14u);
    ctx->pc = 0x2B5E10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2B5C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAddC_0x2b5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E14u; }
    }
    if (ctx->pc != 0x2B5E14u) { return; }
    ctx->pc = 0x2B5E14u;
label_2b5e14:
    // 0x2b5e14: 0x92220004
    ctx->pc = 0x2b5e14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b5e18: 0x8e230000
    ctx->pc = 0x2b5e18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5e1c: 0x431021
    ctx->pc = 0x2b5e1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5e20: 0x27c46408
    ctx->pc = 0x2b5e20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 25608));
    // 0x2b5e24: 0xc0ad71e
    ctx->pc = 0x2B5E24u;
    SET_GPR_U32(ctx, 31, 0x2B5E2Cu);
    ctx->pc = 0x2B5E28u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    ctx->pc = 0x2B5C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAddC_0x2b5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E2Cu; }
    }
    if (ctx->pc != 0x2B5E2Cu) { return; }
    ctx->pc = 0x2B5E2Cu;
    // 0x2b5e2c: 0x8e300000
    ctx->pc = 0x2b5e2cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5e30: 0x92020000
    ctx->pc = 0x2b5e30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5e34: 0x1040000a
    ctx->pc = 0x2B5E34u;
    {
        const bool branch_taken_0x2b5e34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5E38u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e34) {
            ctx->pc = 0x2B5E60u;
            goto label_2b5e60;
        }
    }
    ctx->pc = 0x2B5E3Cu;
    // 0x2b5e3c: 0x3c12003c
    ctx->pc = 0x2b5e3cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
label_2b5e40:
    // 0x2b5e40: 0x52e00
    ctx->pc = 0x2b5e40u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x2b5e44: 0x26446398
    ctx->pc = 0x2b5e44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 25496));
    // 0x2b5e48: 0xc0ad71e
    ctx->pc = 0x2B5E48u;
    SET_GPR_U32(ctx, 31, 0x2B5E50u);
    ctx->pc = 0x2B5E4Cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->pc = 0x2B5C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAddC_0x2b5c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5E50u; }
    }
    if (ctx->pc != 0x2B5E50u) { return; }
    ctx->pc = 0x2B5E50u;
    // 0x2b5e50: 0x26100001
    ctx->pc = 0x2b5e50u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b5e54: 0x82020000
    ctx->pc = 0x2b5e54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5e58: 0x1440fff9
    ctx->pc = 0x2B5E58u;
    {
        const bool branch_taken_0x2b5e58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B5E5Cu;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x2b5e58) {
            ctx->pc = 0x2B5E40u;
            goto label_2b5e40;
        }
    }
    ctx->pc = 0x2B5E60u;
label_2b5e60:
    // 0x2b5e60: 0x26310010
    ctx->pc = 0x2b5e60u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x2b5e64: 0x8e220000
    ctx->pc = 0x2b5e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5e68: 0x1440ffdf
    ctx->pc = 0x2B5E68u;
    {
        const bool branch_taken_0x2b5e68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b5e68) {
            ctx->pc = 0x2B5DE8u;
            goto label_2b5de8;
        }
    }
    ctx->pc = 0x2B5E70u;
label_2b5e70:
    // 0x2b5e70: 0x3c03003c
    ctx->pc = 0x2b5e70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2b5e74: 0x2622fff0
    ctx->pc = 0x2b5e74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x2b5e78: 0xac62643c
    ctx->pc = 0x2b5e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25660), GPR_U32(ctx, 2));
    // 0x2b5e7c: 0x3c020037
    ctx->pc = 0x2b5e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b5e80: 0x245121e8
    ctx->pc = 0x2b5e80u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 8680));
    // 0x2b5e84: 0x8c4221e8
    ctx->pc = 0x2b5e84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8680)));
    // 0x2b5e88: 0x1040000d
    ctx->pc = 0x2B5E88u;
    {
        const bool branch_taken_0x2b5e88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5E8Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b5e88) {
            ctx->pc = 0x2B5EC0u;
            goto label_2b5ec0;
        }
    }
    ctx->pc = 0x2B5E90u;
    // 0x2b5e90: 0x3c10003c
    ctx->pc = 0x2b5e90u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2b5e94: 0x92220007
    ctx->pc = 0x2b5e94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2b5e98:
    // 0x2b5e98: 0x54520006
    ctx->pc = 0x2B5E98u;
    {
        const bool branch_taken_0x2b5e98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x2b5e98) {
            ctx->pc = 0x2B5E9Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
            ctx->pc = 0x2B5EB4u;
            goto label_2b5eb4;
        }
    }
    ctx->pc = 0x2B5EA0u;
    // 0x2b5ea0: 0x8e220000
    ctx->pc = 0x2b5ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5ea4: 0x260463d0
    ctx->pc = 0x2b5ea4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 25552));
    // 0x2b5ea8: 0xc0ad732
    ctx->pc = 0x2B5EA8u;
    SET_GPR_U32(ctx, 31, 0x2B5EB0u);
    ctx->pc = 0x2B5EACu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2B5CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalRmC_0x2b5cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EB0u; }
    }
    if (ctx->pc != 0x2B5EB0u) { return; }
    ctx->pc = 0x2B5EB0u;
    // 0x2b5eb0: 0x26310010
    ctx->pc = 0x2b5eb0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
label_2b5eb4:
    // 0x2b5eb4: 0x8e220000
    ctx->pc = 0x2b5eb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5eb8: 0x5440fff7
    ctx->pc = 0x2B5EB8u;
    {
        const bool branch_taken_0x2b5eb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b5eb8) {
            ctx->pc = 0x2B5EBCu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->pc = 0x2B5E98u;
            goto label_2b5e98;
        }
    }
    ctx->pc = 0x2B5EC0u;
label_2b5ec0:
    // 0x2b5ec0: 0x3c10003c
    ctx->pc = 0x2b5ec0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2b5ec4: 0x26046408
    ctx->pc = 0x2b5ec4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 25608));
    // 0x2b5ec8: 0xc0ad732
    ctx->pc = 0x2B5EC8u;
    SET_GPR_U32(ctx, 31, 0x2B5ED0u);
    ctx->pc = 0x2B5ECCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x2B5CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalRmC_0x2b5cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5ED0u; }
    }
    if (ctx->pc != 0x2B5ED0u) { return; }
    ctx->pc = 0x2B5ED0u;
    // 0x2b5ed0: 0x26046408
    ctx->pc = 0x2b5ed0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 25608));
    // 0x2b5ed4: 0xc0ad732
    ctx->pc = 0x2B5ED4u;
    SET_GPR_U32(ctx, 31, 0x2B5EDCu);
    ctx->pc = 0x2B5ED8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 93));
    ctx->pc = 0x2B5CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalRmC_0x2b5cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EDCu; }
    }
    if (ctx->pc != 0x2B5EDCu) { return; }
    ctx->pc = 0x2B5EDCu;
    // 0x2b5edc: 0x26046408
    ctx->pc = 0x2b5edcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 25608));
    // 0x2b5ee0: 0xc0ad732
    ctx->pc = 0x2B5EE0u;
    SET_GPR_U32(ctx, 31, 0x2B5EE8u);
    ctx->pc = 0x2B5EE4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 41));
    ctx->pc = 0x2B5CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalRmC_0x2b5cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EE8u; }
    }
    if (ctx->pc != 0x2B5EE8u) { return; }
    ctx->pc = 0x2B5EE8u;
    // 0x2b5ee8: 0x26046408
    ctx->pc = 0x2b5ee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 25608));
    // 0x2b5eec: 0xc0ad732
    ctx->pc = 0x2B5EECu;
    SET_GPR_U32(ctx, 31, 0x2B5EF4u);
    ctx->pc = 0x2B5EF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 39));
    ctx->pc = 0x2B5CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalRmC_0x2b5cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EF4u; }
    }
    if (ctx->pc != 0x2B5EF4u) { return; }
    ctx->pc = 0x2B5EF4u;
label_2b5ef4:
    // 0x2b5ef4: 0x12600015
    ctx->pc = 0x2B5EF4u;
    {
        const bool branch_taken_0x2b5ef4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5EF8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b5ef4) {
            ctx->pc = 0x2B5F4Cu;
            goto label_2b5f4c;
        }
    }
    ctx->pc = 0x2B5EFCu;
    // 0x2b5efc: 0x2f62823
    ctx->pc = 0x2b5efcu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x2b5f00: 0x24844c80
    ctx->pc = 0x2b5f00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19584));
    // 0x2b5f04: 0x24a50001
    ctx->pc = 0x2b5f04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b5f08: 0xc0b4a34
    ctx->pc = 0x2B5F08u;
    SET_GPR_U32(ctx, 31, 0x2B5F10u);
    ctx->pc = 0x2B5F0Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F10u; }
    }
    if (ctx->pc != 0x2B5F10u) { return; }
    ctx->pc = 0x2B5F10u;
    // 0x2b5f10: 0x3c04003b
    ctx->pc = 0x2b5f10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b5f14: 0x24844c98
    ctx->pc = 0x2b5f14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19608));
    // 0x2b5f18: 0x3c05003c
    ctx->pc = 0x2b5f18u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2b5f1c: 0xc0b4a34
    ctx->pc = 0x2B5F1Cu;
    SET_GPR_U32(ctx, 31, 0x2B5F24u);
    ctx->pc = 0x2B5F20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25496));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F24u; }
    }
    if (ctx->pc != 0x2B5F24u) { return; }
    ctx->pc = 0x2B5F24u;
    // 0x2b5f24: 0x3c04003b
    ctx->pc = 0x2b5f24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b5f28: 0x24844cb8
    ctx->pc = 0x2b5f28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19640));
    // 0x2b5f2c: 0x3c05003c
    ctx->pc = 0x2b5f2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2b5f30: 0xc0b4a34
    ctx->pc = 0x2B5F30u;
    SET_GPR_U32(ctx, 31, 0x2B5F38u);
    ctx->pc = 0x2B5F34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25608));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F38u; }
    }
    if (ctx->pc != 0x2B5F38u) { return; }
    ctx->pc = 0x2B5F38u;
    // 0x2b5f38: 0x3c04003b
    ctx->pc = 0x2b5f38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b5f3c: 0x24844cd8
    ctx->pc = 0x2b5f3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19672));
    // 0x2b5f40: 0x3c05003c
    ctx->pc = 0x2b5f40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2b5f44: 0xc0b4a34
    ctx->pc = 0x2B5F44u;
    SET_GPR_U32(ctx, 31, 0x2B5F4Cu);
    ctx->pc = 0x2B5F48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25552));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F4Cu; }
    }
    if (ctx->pc != 0x2B5F4Cu) { return; }
    ctx->pc = 0x2B5F4Cu;
label_2b5f4c:
    // 0x2b5f4c: 0x3c02003c
    ctx->pc = 0x2b5f4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b5f50: 0x8c52643c
    ctx->pc = 0x2b5f50u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 25660)));
    // 0x2b5f54: 0x2f6102b
    ctx->pc = 0x2b5f54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x2b5f58: 0x1440007e
    ctx->pc = 0x2B5F58u;
    {
        const bool branch_taken_0x2b5f58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B5F5Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f58) {
            ctx->pc = 0x2B6154u;
            goto label_2b6154;
        }
    }
    ctx->pc = 0x2B5F60u;
    // 0x2b5f60: 0x3c04003c
    ctx->pc = 0x2b5f60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2b5f64: 0x0
    ctx->pc = 0x2b5f64u;
    // NOP
label_2b5f68:
    // 0x2b5f68: 0x24846398
    ctx->pc = 0x2b5f68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25496));
    // 0x2b5f6c: 0xc0ad05e
    ctx->pc = 0x2B5F6Cu;
    SET_GPR_U32(ctx, 31, 0x2B5F74u);
    ctx->pc = 0x2B5F70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F74u; }
    }
    if (ctx->pc != 0x2B5F74u) { return; }
    ctx->pc = 0x2B5F74u;
    // 0x2b5f74: 0x50400074
    ctx->pc = 0x2B5F74u;
    {
        const bool branch_taken_0x2b5f74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b5f74) {
            ctx->pc = 0x2B5F78u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2B6148u;
            goto label_2b6148;
        }
    }
    ctx->pc = 0x2B5F7Cu;
    // 0x2b5f7c: 0x16a00006
    ctx->pc = 0x2B5F7Cu;
    {
        const bool branch_taken_0x2b5f7c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B5F80u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b5f7c) {
            ctx->pc = 0x2B5F98u;
            goto label_2b5f98;
        }
    }
    ctx->pc = 0x2B5F84u;
    // 0x2b5f84: 0x24844cf8
    ctx->pc = 0x2b5f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19704));
    // 0x2b5f88: 0xc0ad05e
    ctx->pc = 0x2B5F88u;
    SET_GPR_U32(ctx, 31, 0x2B5F90u);
    ctx->pc = 0x2B5F8Cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F90u; }
    }
    if (ctx->pc != 0x2B5F90u) { return; }
    ctx->pc = 0x2B5F90u;
    // 0x2b5f90: 0x2683ffff
    ctx->pc = 0x2b5f90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2b5f94: 0x62a00b
    ctx->pc = 0x2b5f94u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
label_2b5f98:
    // 0x2b5f98: 0x12600006
    ctx->pc = 0x2B5F98u;
    {
        const bool branch_taken_0x2b5f98 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5F9Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b5f98) {
            ctx->pc = 0x2B5FB4u;
            goto label_2b5fb4;
        }
    }
    ctx->pc = 0x2B5FA0u;
    // 0x2b5fa0: 0x24844d00
    ctx->pc = 0x2b5fa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19712));
    // 0x2b5fa4: 0x82050000
    ctx->pc = 0x2b5fa4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5fa8: 0x280302d
    ctx->pc = 0x2b5fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5fac: 0xc0b4a34
    ctx->pc = 0x2B5FACu;
    SET_GPR_U32(ctx, 31, 0x2B5FB4u);
    ctx->pc = 0x2B5FB0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FB4u; }
    }
    if (ctx->pc != 0x2B5FB4u) { return; }
    ctx->pc = 0x2B5FB4u;
label_2b5fb4:
    // 0x2b5fb4: 0x16800051
    ctx->pc = 0x2B5FB4u;
    {
        const bool branch_taken_0x2b5fb4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b5fb4) {
            ctx->pc = 0x2B60FCu;
            goto label_2b60fc;
        }
    }
    ctx->pc = 0x2B5FBCu;
    // 0x2b5fbc: 0x56a00058
    ctx->pc = 0x2B5FBCu;
    {
        const bool branch_taken_0x2b5fbc = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b5fbc) {
            ctx->pc = 0x2B5FC0u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B6120u;
            goto label_2b6120;
        }
    }
    ctx->pc = 0x2B5FC4u;
    // 0x2b5fc4: 0x3c020037
    ctx->pc = 0x2b5fc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b5fc8: 0x10000047
    ctx->pc = 0x2B5FC8u;
    {
        const bool branch_taken_0x2b5fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5FCCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 8680));
        if (branch_taken_0x2b5fc8) {
            ctx->pc = 0x2B60E8u;
            goto label_2b60e8;
        }
    }
    ctx->pc = 0x2B5FD0u;
label_2b5fd0:
    // 0x2b5fd0: 0x80a30000
    ctx->pc = 0x2b5fd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b5fd4: 0x82020000
    ctx->pc = 0x2b5fd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5fd8: 0x54620043
    ctx->pc = 0x2B5FD8u;
    {
        const bool branch_taken_0x2b5fd8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b5fd8) {
            ctx->pc = 0x2B5FDCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
            ctx->pc = 0x2B60E8u;
            goto label_2b60e8;
        }
    }
    ctx->pc = 0x2B5FE0u;
    // 0x2b5fe0: 0x12600003
    ctx->pc = 0x2B5FE0u;
    {
        const bool branch_taken_0x2b5fe0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5FE4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b5fe0) {
            ctx->pc = 0x2B5FF0u;
            goto label_2b5ff0;
        }
    }
    ctx->pc = 0x2B5FE8u;
    // 0x2b5fe8: 0xc0b4a34
    ctx->pc = 0x2B5FE8u;
    SET_GPR_U32(ctx, 31, 0x2B5FF0u);
    ctx->pc = 0x2B5FECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19752));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FF0u; }
    }
    if (ctx->pc != 0x2B5FF0u) { return; }
    ctx->pc = 0x2B5FF0u;
label_2b5ff0:
    // 0x2b5ff0: 0x200202d
    ctx->pc = 0x2b5ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ff4: 0x8e250000
    ctx->pc = 0x2b5ff4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5ff8: 0xc0bf3c0
    ctx->pc = 0x2B5FF8u;
    SET_GPR_U32(ctx, 31, 0x2B6000u);
    ctx->pc = 0x2B5FFCu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6000u; }
    }
    if (ctx->pc != 0x2B6000u) { return; }
    ctx->pc = 0x2B6000u;
    // 0x2b6000: 0x54400039
    ctx->pc = 0x2B6000u;
    {
        const bool branch_taken_0x2b6000 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b6000) {
            ctx->pc = 0x2B6004u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
            ctx->pc = 0x2B60E8u;
            goto label_2b60e8;
        }
    }
    ctx->pc = 0x2B6008u;
    // 0x2b6008: 0x52600005
    ctx->pc = 0x2B6008u;
    {
        const bool branch_taken_0x2b6008 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b6008) {
            ctx->pc = 0x2B600Cu;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
            ctx->pc = 0x2B6020u;
            goto label_2b6020;
        }
    }
    ctx->pc = 0x2B6010u;
    // 0x2b6010: 0x3c04003b
    ctx->pc = 0x2b6010u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6014: 0xc0b4a34
    ctx->pc = 0x2B6014u;
    SET_GPR_U32(ctx, 31, 0x2B601Cu);
    ctx->pc = 0x2B6018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19760));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B601Cu; }
    }
    if (ctx->pc != 0x2B601Cu) { return; }
    ctx->pc = 0x2B601Cu;
    // 0x2b601c: 0x92230005
    ctx->pc = 0x2b601cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_2b6020:
    // 0x2b6020: 0x92420005
    ctx->pc = 0x2b6020u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x2b6024: 0x14620004
    ctx->pc = 0x2B6024u;
    {
        const bool branch_taken_0x2b6024 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b6024) {
            ctx->pc = 0x2B6038u;
            goto label_2b6038;
        }
    }
    ctx->pc = 0x2B602Cu;
    // 0x2b602c: 0x92220006
    ctx->pc = 0x2b602cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2b6030: 0x5440002d
    ctx->pc = 0x2B6030u;
    {
        const bool branch_taken_0x2b6030 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b6030) {
            ctx->pc = 0x2B6034u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
            ctx->pc = 0x2B60E8u;
            goto label_2b60e8;
        }
    }
    ctx->pc = 0x2B6038u;
label_2b6038:
    // 0x2b6038: 0x52600005
    ctx->pc = 0x2B6038u;
    {
        const bool branch_taken_0x2b6038 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b6038) {
            ctx->pc = 0x2B603Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B6050u;
            goto label_2b6050;
        }
    }
    ctx->pc = 0x2B6040u;
    // 0x2b6040: 0x3c04003b
    ctx->pc = 0x2b6040u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6044: 0xc0b4a34
    ctx->pc = 0x2B6044u;
    SET_GPR_U32(ctx, 31, 0x2B604Cu);
    ctx->pc = 0x2B6048u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19768));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B604Cu; }
    }
    if (ctx->pc != 0x2B604Cu) { return; }
    ctx->pc = 0x2B604Cu;
    // 0x2b604c: 0x82030000
    ctx->pc = 0x2b604cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b6050:
    // 0x2b6050: 0x24020027
    ctx->pc = 0x2b6050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 39));
    // 0x2b6054: 0x1062000b
    ctx->pc = 0x2B6054u;
    {
        const bool branch_taken_0x2b6054 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b6054) {
            ctx->pc = 0x2B6084u;
            goto label_2b6084;
        }
    }
    ctx->pc = 0x2B605Cu;
    // 0x2b605c: 0x92220004
    ctx->pc = 0x2b605cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b6060: 0x2021821
    ctx->pc = 0x2b6060u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b6064: 0x2462ffff
    ctx->pc = 0x2b6064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b6068: 0x1057001e
    ctx->pc = 0x2B6068u;
    {
        const bool branch_taken_0x2b6068 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 23));
        ctx->pc = 0x2B606Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2b6068) {
            ctx->pc = 0x2B60E4u;
            goto label_2b60e4;
        }
    }
    ctx->pc = 0x2B6070u;
    // 0x2b6070: 0x248463d0
    ctx->pc = 0x2b6070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25552));
    // 0x2b6074: 0xc0ad05e
    ctx->pc = 0x2B6074u;
    SET_GPR_U32(ctx, 31, 0x2B607Cu);
    ctx->pc = 0x2B6078u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B607Cu; }
    }
    if (ctx->pc != 0x2B607Cu) { return; }
    ctx->pc = 0x2B607Cu;
    // 0x2b607c: 0x5440001a
    ctx->pc = 0x2B607Cu;
    {
        const bool branch_taken_0x2b607c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b607c) {
            ctx->pc = 0x2B6080u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
            ctx->pc = 0x2B60E8u;
            goto label_2b60e8;
        }
    }
    ctx->pc = 0x2B6084u;
label_2b6084:
    // 0x2b6084: 0x52600005
    ctx->pc = 0x2B6084u;
    {
        const bool branch_taken_0x2b6084 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b6084) {
            ctx->pc = 0x2B6088u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->pc = 0x2B609Cu;
            goto label_2b609c;
        }
    }
    ctx->pc = 0x2B608Cu;
    // 0x2b608c: 0x3c04003b
    ctx->pc = 0x2b608cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6090: 0xc0b4a34
    ctx->pc = 0x2B6090u;
    SET_GPR_U32(ctx, 31, 0x2B6098u);
    ctx->pc = 0x2B6094u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19776));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6098u; }
    }
    if (ctx->pc != 0x2B6098u) { return; }
    ctx->pc = 0x2B6098u;
    // 0x2b6098: 0x92230007
    ctx->pc = 0x2b6098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2b609c:
    // 0x2b609c: 0x24020001
    ctx->pc = 0x2b609cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b60a0: 0x10620008
    ctx->pc = 0x2B60A0u;
    {
        const bool branch_taken_0x2b60a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b60a0) {
            ctx->pc = 0x2B60C4u;
            goto label_2b60c4;
        }
    }
    ctx->pc = 0x2B60A8u;
    // 0x2b60a8: 0x1216000e
    ctx->pc = 0x2B60A8u;
    {
        const bool branch_taken_0x2b60a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 22));
        ctx->pc = 0x2B60ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2b60a8) {
            ctx->pc = 0x2B60E4u;
            goto label_2b60e4;
        }
    }
    ctx->pc = 0x2B60B0u;
    // 0x2b60b0: 0x24846408
    ctx->pc = 0x2b60b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25608));
    // 0x2b60b4: 0xc0ad05e
    ctx->pc = 0x2B60B4u;
    SET_GPR_U32(ctx, 31, 0x2B60BCu);
    ctx->pc = 0x2B60B8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60BCu; }
    }
    if (ctx->pc != 0x2B60BCu) { return; }
    ctx->pc = 0x2B60BCu;
    // 0x2b60bc: 0x5440000a
    ctx->pc = 0x2B60BCu;
    {
        const bool branch_taken_0x2b60bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b60bc) {
            ctx->pc = 0x2B60C0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
            ctx->pc = 0x2B60E8u;
            goto label_2b60e8;
        }
    }
    ctx->pc = 0x2B60C4u;
label_2b60c4:
    // 0x2b60c4: 0x12600004
    ctx->pc = 0x2B60C4u;
    {
        const bool branch_taken_0x2b60c4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B60C8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b60c4) {
            ctx->pc = 0x2B60D8u;
            goto label_2b60d8;
        }
    }
    ctx->pc = 0x2B60CCu;
    // 0x2b60cc: 0x24844d48
    ctx->pc = 0x2b60ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19784));
    // 0x2b60d0: 0xc0b4a34
    ctx->pc = 0x2B60D0u;
    SET_GPR_U32(ctx, 31, 0x2B60D8u);
    ctx->pc = 0x2B60D4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60D8u; }
    }
    if (ctx->pc != 0x2B60D8u) { return; }
    ctx->pc = 0x2B60D8u;
label_2b60d8:
    // 0x2b60d8: 0x220902d
    ctx->pc = 0x2b60d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60dc: 0x8fa20000
    ctx->pc = 0x2b60dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b60e0: 0xac500000
    ctx->pc = 0x2b60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2b60e4:
    // 0x2b60e4: 0x26310010
    ctx->pc = 0x2b60e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
label_2b60e8:
    // 0x2b60e8: 0x92230005
    ctx->pc = 0x2b60e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2b60ec: 0x92420005
    ctx->pc = 0x2b60ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x2b60f0: 0x43102b
    ctx->pc = 0x2b60f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b60f4: 0x5040ffb6
    ctx->pc = 0x2B60F4u;
    {
        const bool branch_taken_0x2b60f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b60f4) {
            ctx->pc = 0x2B60F8u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B5FD0u;
            goto label_2b5fd0;
        }
    }
    ctx->pc = 0x2B60FCu;
label_2b60fc:
    // 0x2b60fc: 0x56a00008
    ctx->pc = 0x2B60FCu;
    {
        const bool branch_taken_0x2b60fc = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b60fc) {
            ctx->pc = 0x2B6100u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B6120u;
            goto label_2b6120;
        }
    }
    ctx->pc = 0x2B6104u;
    // 0x2b6104: 0x3c04003b
    ctx->pc = 0x2b6104u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6108: 0x24844d58
    ctx->pc = 0x2b6108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19800));
    // 0x2b610c: 0xc0ad05e
    ctx->pc = 0x2B610Cu;
    SET_GPR_U32(ctx, 31, 0x2B6114u);
    ctx->pc = 0x2B6110u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6114u; }
    }
    if (ctx->pc != 0x2B6114u) { return; }
    ctx->pc = 0x2B6114u;
    // 0x2b6114: 0x26830001
    ctx->pc = 0x2b6114u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b6118: 0x62a00b
    ctx->pc = 0x2b6118u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
    // 0x2b611c: 0x82020000
    ctx->pc = 0x2b611cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b6120:
    // 0x2b6120: 0x3aa30001
    ctx->pc = 0x2b6120u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 21), 1));
    // 0x2b6124: 0x38420027
    ctx->pc = 0x2b6124u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 39));
    // 0x2b6128: 0x12600006
    ctx->pc = 0x2B6128u;
    {
        const bool branch_taken_0x2b6128 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B612Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 3));
        if (branch_taken_0x2b6128) {
            ctx->pc = 0x2B6144u;
            goto label_2b6144;
        }
    }
    ctx->pc = 0x2B6130u;
    // 0x2b6130: 0x3c04003b
    ctx->pc = 0x2b6130u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6134: 0x24844d60
    ctx->pc = 0x2b6134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19808));
    // 0x2b6138: 0x280282d
    ctx->pc = 0x2b6138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b613c: 0xc0b4a34
    ctx->pc = 0x2B613Cu;
    SET_GPR_U32(ctx, 31, 0x2B6144u);
    ctx->pc = 0x2B6140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6144u; }
    }
    if (ctx->pc != 0x2B6144u) { return; }
    ctx->pc = 0x2B6144u;
label_2b6144:
    // 0x2b6144: 0x26100001
    ctx->pc = 0x2b6144u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2b6148:
    // 0x2b6148: 0x2f0102b
    ctx->pc = 0x2b6148u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x2b614c: 0x1040ff86
    ctx->pc = 0x2B614Cu;
    {
        const bool branch_taken_0x2b614c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6150u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2b614c) {
            ctx->pc = 0x2B5F68u;
            goto label_2b5f68;
        }
    }
    ctx->pc = 0x2B6154u;
label_2b6154:
    // 0x2b6154: 0x3c02003c
    ctx->pc = 0x2b6154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b6158: 0x8c42643c
    ctx->pc = 0x2b6158u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 25660)));
    // 0x2b615c: 0x16420009
    ctx->pc = 0x2B615Cu;
    {
        const bool branch_taken_0x2b615c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b615c) {
            ctx->pc = 0x2B6184u;
            goto label_2b6184;
        }
    }
    ctx->pc = 0x2B6164u;
    // 0x2b6164: 0x12600003
    ctx->pc = 0x2B6164u;
    {
        const bool branch_taken_0x2b6164 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6168u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b6164) {
            ctx->pc = 0x2B6174u;
            goto label_2b6174;
        }
    }
    ctx->pc = 0x2B616Cu;
    // 0x2b616c: 0xc0b4a34
    ctx->pc = 0x2B616Cu;
    SET_GPR_U32(ctx, 31, 0x2B6174u);
    ctx->pc = 0x2B6170u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19832));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6174u; }
    }
    if (ctx->pc != 0x2B6174u) { return; }
    ctx->pc = 0x2B6174u;
label_2b6174:
    // 0x2b6174: 0x8fa30000
    ctx->pc = 0x2b6174u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6178: 0xac600000
    ctx->pc = 0x2b6178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b617c: 0x1000000a
    ctx->pc = 0x2B617Cu;
    {
        const bool branch_taken_0x2b617c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6180u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b617c) {
            ctx->pc = 0x2B61A8u;
            goto label_2b61a8;
        }
    }
    ctx->pc = 0x2B6184u;
label_2b6184:
    // 0x2b6184: 0x12600007
    ctx->pc = 0x2B6184u;
    {
        const bool branch_taken_0x2b6184 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6188u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2b6184) {
            ctx->pc = 0x2B61A4u;
            goto label_2b61a4;
        }
    }
    ctx->pc = 0x2B618Cu;
    // 0x2b618c: 0x8c460000
    ctx->pc = 0x2b618cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6190: 0x3c04003b
    ctx->pc = 0x2b6190u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6194: 0x24844d90
    ctx->pc = 0x2b6194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19856));
    // 0x2b6198: 0x8e450000
    ctx->pc = 0x2b6198u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b619c: 0xc0b4a34
    ctx->pc = 0x2B619Cu;
    SET_GPR_U32(ctx, 31, 0x2B61A4u);
    ctx->pc = 0x2B61A0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B61A4u; }
    }
    if (ctx->pc != 0x2B61A4u) { return; }
    ctx->pc = 0x2B61A4u;
label_2b61a4:
    // 0x2b61a4: 0x240102d
    ctx->pc = 0x2b61a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b61a8:
    // 0x2b61a8: 0xdfbf00a0
    ctx->pc = 0x2b61a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b61ac: 0xdfbe0090
    ctx->pc = 0x2b61acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b61b0: 0xdfb70080
    ctx->pc = 0x2b61b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b61b4: 0xdfb60070
    ctx->pc = 0x2b61b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b61b8: 0xdfb50060
    ctx->pc = 0x2b61b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b61bc: 0xdfb40050
    ctx->pc = 0x2b61bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b61c0: 0xdfb30040
    ctx->pc = 0x2b61c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b61c4: 0xdfb20030
    ctx->pc = 0x2b61c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b61c8: 0xdfb10020
    ctx->pc = 0x2b61c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b61cc: 0xdfb00010
    ctx->pc = 0x2b61ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b61d0: 0x3e00008
    ctx->pc = 0x2B61D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B61D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5DE8u: goto label_2b5de8;
            case 0x2B5E14u: goto label_2b5e14;
            case 0x2B5E40u: goto label_2b5e40;
            case 0x2B5E60u: goto label_2b5e60;
            case 0x2B5E70u: goto label_2b5e70;
            case 0x2B5E98u: goto label_2b5e98;
            case 0x2B5EB4u: goto label_2b5eb4;
            case 0x2B5EC0u: goto label_2b5ec0;
            case 0x2B5EF4u: goto label_2b5ef4;
            case 0x2B5F4Cu: goto label_2b5f4c;
            case 0x2B5F68u: goto label_2b5f68;
            case 0x2B5F98u: goto label_2b5f98;
            case 0x2B5FB4u: goto label_2b5fb4;
            case 0x2B5FD0u: goto label_2b5fd0;
            case 0x2B5FF0u: goto label_2b5ff0;
            case 0x2B6020u: goto label_2b6020;
            case 0x2B6038u: goto label_2b6038;
            case 0x2B6050u: goto label_2b6050;
            case 0x2B6084u: goto label_2b6084;
            case 0x2B609Cu: goto label_2b609c;
            case 0x2B60C4u: goto label_2b60c4;
            case 0x2B60D8u: goto label_2b60d8;
            case 0x2B60E4u: goto label_2b60e4;
            case 0x2B60E8u: goto label_2b60e8;
            case 0x2B60FCu: goto label_2b60fc;
            case 0x2B6120u: goto label_2b6120;
            case 0x2B6144u: goto label_2b6144;
            case 0x2B6148u: goto label_2b6148;
            case 0x2B6154u: goto label_2b6154;
            case 0x2B6174u: goto label_2b6174;
            case 0x2B6184u: goto label_2b6184;
            case 0x2B61A4u: goto label_2b61a4;
            case 0x2B61A8u: goto label_2b61a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B61D8u;
}
