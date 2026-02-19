#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: next_rune_hint
// Address: 0x20ab08 - 0x20ace4
void next_rune_hint_0x20ab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20ab08u;

    // 0x20ab08: 0x27bdff70
    ctx->pc = 0x20ab08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20ab0c: 0xffbf0080
    ctx->pc = 0x20ab0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x20ab10: 0xffb70070
    ctx->pc = 0x20ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x20ab14: 0xffb60060
    ctx->pc = 0x20ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x20ab18: 0xffb50050
    ctx->pc = 0x20ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20ab1c: 0xffb40040
    ctx->pc = 0x20ab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20ab20: 0xffb30030
    ctx->pc = 0x20ab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20ab24: 0xffb20020
    ctx->pc = 0x20ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20ab28: 0xffb10010
    ctx->pc = 0x20ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20ab2c: 0xffb00000
    ctx->pc = 0x20ab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ab30: 0xa82d
    ctx->pc = 0x20ab30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab34: 0x1480000c
    ctx->pc = 0x20AB34u;
    {
        const bool branch_taken_0x20ab34 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AB38u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x20ab34) {
            ctx->pc = 0x20AB68u;
            goto label_20ab68;
        }
    }
    ctx->pc = 0x20AB3Cu;
    // 0x20ab3c: 0x3c020032
    ctx->pc = 0x20ab3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ab40: 0x2403ffff
    ctx->pc = 0x20ab40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ab44: 0xac43f004
    ctx->pc = 0x20ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963204), GPR_U32(ctx, 3));
    // 0x20ab48: 0x3c020032
    ctx->pc = 0x20ab48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ab4c: 0x1000005a
    ctx->pc = 0x20AB4Cu;
    {
        const bool branch_taken_0x20ab4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AB50u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963212), GPR_U32(ctx, 0));
        if (branch_taken_0x20ab4c) {
            ctx->pc = 0x20ACB8u;
            goto label_20acb8;
        }
    }
    ctx->pc = 0x20AB54u;
label_20ab54:
    // 0x20ab54: 0x24020001
    ctx->pc = 0x20ab54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ab58: 0xac62f00c
    ctx->pc = 0x20ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963212), GPR_U32(ctx, 2));
    // 0x20ab5c: 0x3c020032
    ctx->pc = 0x20ab5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ab60: 0x1000002d
    ctx->pc = 0x20AB60u;
    {
        const bool branch_taken_0x20ab60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AB64u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963204), GPR_U32(ctx, 0));
        if (branch_taken_0x20ab60) {
            ctx->pc = 0x20AC18u;
            goto label_20ac18;
        }
    }
    ctx->pc = 0x20AB68u;
label_20ab68:
    // 0x20ab68: 0x3c020032
    ctx->pc = 0x20ab68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ab6c: 0x8c42f004
    ctx->pc = 0x20ab6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963204)));
    // 0x20ab70: 0x24430001
    ctx->pc = 0x20ab70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20ab74: 0x3c140032
    ctx->pc = 0x20ab74u;
    SET_GPR_U32(ctx, 20, ((uint32_t)50 << 16));
    // 0x20ab78: 0x24160001
    ctx->pc = 0x20ab78u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ab7c: 0x3c170032
    ctx->pc = 0x20ab7cu;
    SET_GPR_U32(ctx, 23, ((uint32_t)50 << 16));
label_20ab80:
    // 0x20ab80: 0x71102a
    ctx->pc = 0x20ab80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x20ab84: 0x14400008
    ctx->pc = 0x20AB84u;
    {
        const bool branch_taken_0x20ab84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AB88u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20ab84) {
            ctx->pc = 0x20ABA8u;
            goto label_20aba8;
        }
    }
    ctx->pc = 0x20AB8Cu;
    // 0x20ab8c: 0x71001a
    ctx->pc = 0x20ab8cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x20ab90: 0x1010
    ctx->pc = 0x20ab90u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x20ab94: 0x52200001
    ctx->pc = 0x20AB94u;
    {
        const bool branch_taken_0x20ab94 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ab94) {
            ctx->pc = 0x20AB98u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x20AB9Cu;
            goto label_20ab9c;
        }
    }
    ctx->pc = 0x20AB9Cu;
label_20ab9c:
    // 0x20ab9c: 0x40182d
    ctx->pc = 0x20ab9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aba0: 0xae96f00c
    ctx->pc = 0x20aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294963212), GPR_U32(ctx, 22));
    // 0x20aba4: 0x60802d
    ctx->pc = 0x20aba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20aba8:
    // 0x20aba8: 0x3c020032
    ctx->pc = 0x20aba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20abac: 0x2453f2c0
    ctx->pc = 0x20abacu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294963904));
    // 0x20abb0: 0x3c120032
    ctx->pc = 0x20abb0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)50 << 16));
    // 0x20abb4: 0x0
    ctx->pc = 0x20abb4u;
    // NOP
label_20abb8:
    // 0x20abb8: 0x211102a
    ctx->pc = 0x20abb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x20abbc: 0x1040000b
    ctx->pc = 0x20ABBCu;
    {
        const bool branch_taken_0x20abbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ABC0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x20abbc) {
            ctx->pc = 0x20ABECu;
            goto label_20abec;
        }
    }
    ctx->pc = 0x20ABC4u;
    // 0x20abc4: 0x531021
    ctx->pc = 0x20abc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20abc8: 0x8c420000
    ctx->pc = 0x20abc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20abcc: 0x2445ffff
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20abd0: 0x8e42f00c
    ctx->pc = 0x20abd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294963212)));
    // 0x20abd4: 0x14400005
    ctx->pc = 0x20ABD4u;
    {
        const bool branch_taken_0x20abd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20abd4) {
            ctx->pc = 0x20ABECu;
            goto label_20abec;
        }
    }
    ctx->pc = 0x20ABDCu;
    // 0x20abdc: 0xc09d9fe
    ctx->pc = 0x20ABDCu;
    SET_GPR_U32(ctx, 31, 0x20ABE4u);
    ctx->pc = 0x20ABE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2767F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasRune_0x2767f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ABE4u; }
    }
    if (ctx->pc != 0x20ABE4u) { return; }
    ctx->pc = 0x20ABE4u;
    // 0x20abe4: 0x5440fff4
    ctx->pc = 0x20ABE4u;
    {
        const bool branch_taken_0x20abe4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20abe4) {
            ctx->pc = 0x20ABE8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x20ABB8u;
            goto label_20abb8;
        }
    }
    ctx->pc = 0x20ABECu;
label_20abec:
    // 0x20abec: 0x5611000a
    ctx->pc = 0x20ABECu;
    {
        const bool branch_taken_0x20abec = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        if (branch_taken_0x20abec) {
            ctx->pc = 0x20ABF0u;
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294963204), GPR_U32(ctx, 16));
            ctx->pc = 0x20AC18u;
            goto label_20ac18;
        }
    }
    ctx->pc = 0x20ABF4u;
    // 0x20abf4: 0x3c030032
    ctx->pc = 0x20abf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20abf8: 0x8c62f00c
    ctx->pc = 0x20abf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294963212)));
    // 0x20abfc: 0x28420002
    ctx->pc = 0x20abfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x20ac00: 0x1040ffd4
    ctx->pc = 0x20AC00u;
    {
        const bool branch_taken_0x20ac00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AC04u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294963212)));
        if (branch_taken_0x20ac00) {
            ctx->pc = 0x20AB54u;
            goto label_20ab54;
        }
    }
    ctx->pc = 0x20AC08u;
    // 0x20ac08: 0x24420001
    ctx->pc = 0x20ac08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20ac0c: 0xae82f00c
    ctx->pc = 0x20ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294963212), GPR_U32(ctx, 2));
    // 0x20ac10: 0x1000ffdb
    ctx->pc = 0x20AC10u;
    {
        const bool branch_taken_0x20ac10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AC14u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20ac10) {
            ctx->pc = 0x20AB80u;
            goto label_20ab80;
        }
    }
    ctx->pc = 0x20AC18u;
label_20ac18:
    // 0x20ac18: 0x802d
    ctx->pc = 0x20ac18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac1c: 0x24072b00
    ctx->pc = 0x20ac1cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x20ac20: 0x3c020032
    ctx->pc = 0x20ac20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ac24: 0x244a1bc0
    ctx->pc = 0x20ac24u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x20ac28: 0x3c030032
    ctx->pc = 0x20ac28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20ac2c: 0x2463f2c0
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963904));
    // 0x20ac30: 0x3c020032
    ctx->pc = 0x20ac30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ac34: 0x8c42f004
    ctx->pc = 0x20ac34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963204)));
    // 0x20ac38: 0x21080
    ctx->pc = 0x20ac38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ac3c: 0x431021
    ctx->pc = 0x20ac3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ac40: 0x8c420000
    ctx->pc = 0x20ac40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ac44: 0x2445ffff
    ctx->pc = 0x20ac44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20ac48: 0x240300b4
    ctx->pc = 0x20ac48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 180));
    // 0x20ac4c: 0x24060001
    ctx->pc = 0x20ac4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ac50: 0x24040002
    ctx->pc = 0x20ac50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ac54: 0x2071018
    ctx->pc = 0x20ac54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_20ac58:
    // 0x20ac58: 0x16a00009
    ctx->pc = 0x20AC58u;
    {
        const bool branch_taken_0x20ac58 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AC5Cu;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        if (branch_taken_0x20ac58) {
            ctx->pc = 0x20AC80u;
            goto label_20ac80;
        }
    }
    ctx->pc = 0x20AC60u;
    // 0x20ac60: 0x8d22000c
    ctx->pc = 0x20ac60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x20ac64: 0x434018
    ctx->pc = 0x20ac64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20ac68: 0x1091021
    ctx->pc = 0x20ac68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x20ac6c: 0x94420cf8
    ctx->pc = 0x20ac6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3320)));
    // 0x20ac70: 0xa21007
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20ac74: 0x30420001
    ctx->pc = 0x20ac74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20ac78: 0xc0a82d
    ctx->pc = 0x20ac78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac7c: 0x2a80a
    ctx->pc = 0x20ac7cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 0));
label_20ac80:
    // 0x20ac80: 0x8d22000c
    ctx->pc = 0x20ac80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x20ac84: 0x434018
    ctx->pc = 0x20ac84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20ac88: 0x1091021
    ctx->pc = 0x20ac88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x20ac8c: 0x94420cfa
    ctx->pc = 0x20ac8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3322)));
    // 0x20ac90: 0xa21007
    ctx->pc = 0x20ac90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20ac94: 0x30420001
    ctx->pc = 0x20ac94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x20ac98: 0x82a80b
    ctx->pc = 0x20ac98u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 4));
    // 0x20ac9c: 0x26100001
    ctx->pc = 0x20ac9cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x20aca0: 0x2a020004
    ctx->pc = 0x20aca0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x20aca4: 0x1440ffec
    ctx->pc = 0x20ACA4u;
    {
        const bool branch_taken_0x20aca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20ACA8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x20aca4) {
            ctx->pc = 0x20AC58u;
            goto label_20ac58;
        }
    }
    ctx->pc = 0x20ACACu;
    // 0x20acac: 0x3c030032
    ctx->pc = 0x20acacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20acb0: 0x26a20001
    ctx->pc = 0x20acb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 1));
    // 0x20acb4: 0xac62f008
    ctx->pc = 0x20acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963208), GPR_U32(ctx, 2));
label_20acb8:
    // 0x20acb8: 0xdfbf0080
    ctx->pc = 0x20acb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20acbc: 0xdfb70070
    ctx->pc = 0x20acbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20acc0: 0xdfb60060
    ctx->pc = 0x20acc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20acc4: 0xdfb50050
    ctx->pc = 0x20acc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20acc8: 0xdfb40040
    ctx->pc = 0x20acc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20accc: 0xdfb30030
    ctx->pc = 0x20acccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20acd0: 0xdfb20020
    ctx->pc = 0x20acd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20acd4: 0xdfb10010
    ctx->pc = 0x20acd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20acd8: 0xdfb00000
    ctx->pc = 0x20acd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20acdc: 0x3e00008
    ctx->pc = 0x20ACDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ACE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20AB54u: goto label_20ab54;
            case 0x20AB68u: goto label_20ab68;
            case 0x20AB80u: goto label_20ab80;
            case 0x20AB9Cu: goto label_20ab9c;
            case 0x20ABA8u: goto label_20aba8;
            case 0x20ABB8u: goto label_20abb8;
            case 0x20ABECu: goto label_20abec;
            case 0x20AC18u: goto label_20ac18;
            case 0x20AC58u: goto label_20ac58;
            case 0x20AC80u: goto label_20ac80;
            case 0x20ACB8u: goto label_20acb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20ACE4u;
}
