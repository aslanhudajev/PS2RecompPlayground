#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrintVAGDetails
// Address: 0x10aa88 - 0x10ad48
void PrintVAGDetails_0x10aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10aa88u;

    // 0x10aa88: 0x27bdff50
    ctx->pc = 0x10aa88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10aa8c: 0xffb10020
    ctx->pc = 0x10aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10aa90: 0x80882d
    ctx->pc = 0x10aa90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa94: 0xffbe0090
    ctx->pc = 0x10aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10aa98: 0x26220014
    ctx->pc = 0x10aa98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 20));
    // 0x10aa9c: 0x3c040017
    ctx->pc = 0x10aa9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10aaa0: 0xafa20000
    ctx->pc = 0x10aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10aaa4: 0x24843730
    ctx->pc = 0x10aaa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14128));
    // 0x10aaa8: 0x26220020
    ctx->pc = 0x10aaa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 32));
    // 0x10aaac: 0xffb70080
    ctx->pc = 0x10aaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x10aab0: 0xffb60070
    ctx->pc = 0x10aab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x10aab4: 0x26370008
    ctx->pc = 0x10aab4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 17), 8));
    // 0x10aab8: 0xffb50060
    ctx->pc = 0x10aab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10aabc: 0x3c1e0017
    ctx->pc = 0x10aabcu;
    SET_GPR_U32(ctx, 30, ((uint32_t)23 << 16));
    // 0x10aac0: 0xffb40050
    ctx->pc = 0x10aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10aac4: 0x3c150017
    ctx->pc = 0x10aac4u;
    SET_GPR_U32(ctx, 21, ((uint32_t)23 << 16));
    // 0x10aac8: 0xffb20030
    ctx->pc = 0x10aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10aacc: 0x3c140017
    ctx->pc = 0x10aaccu;
    SET_GPR_U32(ctx, 20, ((uint32_t)23 << 16));
    // 0x10aad0: 0xffb00010
    ctx->pc = 0x10aad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10aad4: 0x26320004
    ctx->pc = 0x10aad4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4));
    // 0x10aad8: 0xffbf00a0
    ctx->pc = 0x10aad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10aadc: 0x3c160017
    ctx->pc = 0x10aadcu;
    SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
    // 0x10aae0: 0xffb30040
    ctx->pc = 0x10aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10aae4: 0x220802d
    ctx->pc = 0x10aae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aae8: 0xc04ace4
    ctx->pc = 0x10AAE8u;
    SET_GPR_U32(ctx, 31, 0x10AAF0u);
    ctx->pc = 0x10AAECu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AAF0u; }
    }
    if (ctx->pc != 0x10AAF0u) { return; }
    ctx->pc = 0x10AAF0u;
    // 0x10aaf0: 0x82050000
    ctx->pc = 0x10aaf0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10aaf4: 0x0
    ctx->pc = 0x10aaf4u;
    // NOP
label_10aaf8:
    // 0x10aaf8: 0x26a45e90
    ctx->pc = 0x10aaf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 24208));
    // 0x10aafc: 0xc04ace4
    ctx->pc = 0x10AAFCu;
    SET_GPR_U32(ctx, 31, 0x10AB04u);
    ctx->pc = 0x10AB00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB04u; }
    }
    if (ctx->pc != 0x10AB04u) { return; }
    ctx->pc = 0x10AB04u;
    // 0x10ab04: 0x212182a
    ctx->pc = 0x10ab04u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x10ab08: 0x5460fffb
    ctx->pc = 0x10AB08u;
    {
        const bool branch_taken_0x10ab08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ab08) {
            ctx->pc = 0x10AB0Cu;
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x10AAF8u;
            goto label_10aaf8;
        }
    }
    ctx->pc = 0x10AB10u;
    // 0x10ab10: 0x3c040017
    ctx->pc = 0x10ab10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ab14: 0x220802d
    ctx->pc = 0x10ab14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab18: 0x24843750
    ctx->pc = 0x10ab18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14160));
    // 0x10ab1c: 0xc04ace4
    ctx->pc = 0x10AB1Cu;
    SET_GPR_U32(ctx, 31, 0x10AB24u);
    ctx->pc = 0x10AB20u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB24u; }
    }
    if (ctx->pc != 0x10AB24u) { return; }
    ctx->pc = 0x10AB24u;
    // 0x10ab24: 0x3c040017
    ctx->pc = 0x10ab24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ab28: 0xc04ace4
    ctx->pc = 0x10AB28u;
    SET_GPR_U32(ctx, 31, 0x10AB30u);
    ctx->pc = 0x10AB2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14176));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB30u; }
    }
    if (ctx->pc != 0x10AB30u) { return; }
    ctx->pc = 0x10AB30u;
    // 0x10ab30: 0x3c040017
    ctx->pc = 0x10ab30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ab34: 0xc04ace4
    ctx->pc = 0x10AB34u;
    SET_GPR_U32(ctx, 31, 0x10AB3Cu);
    ctx->pc = 0x10AB38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14192));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB3Cu; }
    }
    if (ctx->pc != 0x10AB3Cu) { return; }
    ctx->pc = 0x10AB3Cu;
    // 0x10ab3c: 0x3c050017
    ctx->pc = 0x10ab3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x10ab40: 0x220202d
    ctx->pc = 0x10ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab44: 0x24a55e88
    ctx->pc = 0x10ab44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24200));
    // 0x10ab48: 0xc04aefa
    ctx->pc = 0x10AB48u;
    SET_GPR_U32(ctx, 31, 0x10AB50u);
    ctx->pc = 0x10AB4Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x12BBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x12bbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB50u; }
    }
    if (ctx->pc != 0x10AB50u) { return; }
    ctx->pc = 0x10AB50u;
    // 0x10ab50: 0x3c040017
    ctx->pc = 0x10ab50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ab54: 0x2982b
    ctx->pc = 0x10ab54u;
    SET_GPR_U32(ctx, 19, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x10ab58: 0xc04ace4
    ctx->pc = 0x10AB58u;
    SET_GPR_U32(ctx, 31, 0x10AB60u);
    ctx->pc = 0x10AB5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14208));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB60u; }
    }
    if (ctx->pc != 0x10AB60u) { return; }
    ctx->pc = 0x10AB60u;
    // 0x10ab60: 0x82050000
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ab64: 0x0
    ctx->pc = 0x10ab64u;
    // NOP
label_10ab68:
    // 0x10ab68: 0x26a45e90
    ctx->pc = 0x10ab68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 24208));
    // 0x10ab6c: 0xc04ace4
    ctx->pc = 0x10AB6Cu;
    SET_GPR_U32(ctx, 31, 0x10AB74u);
    ctx->pc = 0x10AB70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB74u; }
    }
    if (ctx->pc != 0x10AB74u) { return; }
    ctx->pc = 0x10AB74u;
    // 0x10ab74: 0x212182a
    ctx->pc = 0x10ab74u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x10ab78: 0x5460fffb
    ctx->pc = 0x10AB78u;
    {
        const bool branch_taken_0x10ab78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ab78) {
            ctx->pc = 0x10AB7Cu;
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x10AB68u;
            goto label_10ab68;
        }
    }
    ctx->pc = 0x10AB80u;
    // 0x10ab80: 0x26845e98
    ctx->pc = 0x10ab80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 24216));
    // 0x10ab84: 0xc04ace4
    ctx->pc = 0x10AB84u;
    SET_GPR_U32(ctx, 31, 0x10AB8Cu);
    ctx->pc = 0x10AB88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 30), 24224));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB8Cu; }
    }
    if (ctx->pc != 0x10AB8Cu) { return; }
    ctx->pc = 0x10AB8Cu;
    // 0x10ab8c: 0x3c040017
    ctx->pc = 0x10ab8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ab90: 0xc04ace4
    ctx->pc = 0x10AB90u;
    SET_GPR_U32(ctx, 31, 0x10AB98u);
    ctx->pc = 0x10AB94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14224));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AB98u; }
    }
    if (ctx->pc != 0x10AB98u) { return; }
    ctx->pc = 0x10AB98u;
    // 0x10ab98: 0x56600005
    ctx->pc = 0x10AB98u;
    {
        const bool branch_taken_0x10ab98 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ab98) {
            ctx->pc = 0x10AB9Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x10ABB0u;
            goto label_10abb0;
        }
    }
    ctx->pc = 0x10ABA0u;
    // 0x10aba0: 0xc042ffc
    ctx->pc = 0x10ABA0u;
    SET_GPR_U32(ctx, 31, 0x10ABA8u);
    ctx->pc = 0x10ABA4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x10BFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABA8u; }
    }
    if (ctx->pc != 0x10ABA8u) { return; }
    ctx->pc = 0x10ABA8u;
    // 0x10aba8: 0x10000002
    ctx->pc = 0x10ABA8u;
    {
        const bool branch_taken_0x10aba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10ABACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10aba8) {
            ctx->pc = 0x10ABB4u;
            goto label_10abb4;
        }
    }
    ctx->pc = 0x10ABB0u;
label_10abb0:
    // 0x10abb0: 0x200202d
    ctx->pc = 0x10abb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10abb4:
    // 0x10abb4: 0xc04ace4
    ctx->pc = 0x10ABB4u;
    SET_GPR_U32(ctx, 31, 0x10ABBCu);
    ctx->pc = 0x10ABB8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABBCu; }
    }
    if (ctx->pc != 0x10ABBCu) { return; }
    ctx->pc = 0x10ABBCu;
    // 0x10abbc: 0x2e0802d
    ctx->pc = 0x10abbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abc0: 0x26845e98
    ctx->pc = 0x10abc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 24216));
    // 0x10abc4: 0xc04ace4
    ctx->pc = 0x10ABC4u;
    SET_GPR_U32(ctx, 31, 0x10ABCCu);
    ctx->pc = 0x10ABC8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABCCu; }
    }
    if (ctx->pc != 0x10ABCCu) { return; }
    ctx->pc = 0x10ABCCu;
    // 0x10abcc: 0x3c020017
    ctx->pc = 0x10abccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x10abd0: 0xc04ace4
    ctx->pc = 0x10ABD0u;
    SET_GPR_U32(ctx, 31, 0x10ABD8u);
    ctx->pc = 0x10ABD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABD8u; }
    }
    if (ctx->pc != 0x10ABD8u) { return; }
    ctx->pc = 0x10ABD8u;
    // 0x10abd8: 0x82050000
    ctx->pc = 0x10abd8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10abdc: 0x0
    ctx->pc = 0x10abdcu;
    // NOP
label_10abe0:
    // 0x10abe0: 0x26c45ea8
    ctx->pc = 0x10abe0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 24232));
    // 0x10abe4: 0xc04ace4
    ctx->pc = 0x10ABE4u;
    SET_GPR_U32(ctx, 31, 0x10ABECu);
    ctx->pc = 0x10ABE8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABECu; }
    }
    if (ctx->pc != 0x10ABECu) { return; }
    ctx->pc = 0x10ABECu;
    // 0x10abec: 0x212182a
    ctx->pc = 0x10abecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x10abf0: 0x5460fffb
    ctx->pc = 0x10ABF0u;
    {
        const bool branch_taken_0x10abf0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10abf0) {
            ctx->pc = 0x10ABF4u;
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x10ABE0u;
            goto label_10abe0;
        }
    }
    ctx->pc = 0x10ABF8u;
    // 0x10abf8: 0x26845e98
    ctx->pc = 0x10abf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 24216));
    // 0x10abfc: 0xc04ace4
    ctx->pc = 0x10ABFCu;
    SET_GPR_U32(ctx, 31, 0x10AC04u);
    ctx->pc = 0x10AC00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 30), 24224));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC04u; }
    }
    if (ctx->pc != 0x10AC04u) { return; }
    ctx->pc = 0x10AC04u;
    // 0x10ac04: 0x3c040017
    ctx->pc = 0x10ac04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ac08: 0xc04ace4
    ctx->pc = 0x10AC08u;
    SET_GPR_U32(ctx, 31, 0x10AC10u);
    ctx->pc = 0x10AC0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14256));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC10u; }
    }
    if (ctx->pc != 0x10AC10u) { return; }
    ctx->pc = 0x10AC10u;
    // 0x10ac10: 0x56600005
    ctx->pc = 0x10AC10u;
    {
        const bool branch_taken_0x10ac10 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ac10) {
            ctx->pc = 0x10AC14u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->pc = 0x10AC28u;
            goto label_10ac28;
        }
    }
    ctx->pc = 0x10AC18u;
    // 0x10ac18: 0xc042ffc
    ctx->pc = 0x10AC18u;
    SET_GPR_U32(ctx, 31, 0x10AC20u);
    ctx->pc = 0x10AC1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x10BFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC20u; }
    }
    if (ctx->pc != 0x10AC20u) { return; }
    ctx->pc = 0x10AC20u;
    // 0x10ac20: 0x10000002
    ctx->pc = 0x10AC20u;
    {
        const bool branch_taken_0x10ac20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10AC24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10ac20) {
            ctx->pc = 0x10AC2Cu;
            goto label_10ac2c;
        }
    }
    ctx->pc = 0x10AC28u;
label_10ac28:
    // 0x10ac28: 0x200202d
    ctx->pc = 0x10ac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ac2c:
    // 0x10ac2c: 0xc04ace4
    ctx->pc = 0x10AC2Cu;
    SET_GPR_U32(ctx, 31, 0x10AC34u);
    ctx->pc = 0x10AC30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC34u; }
    }
    if (ctx->pc != 0x10AC34u) { return; }
    ctx->pc = 0x10AC34u;
    // 0x10ac34: 0x3c030017
    ctx->pc = 0x10ac34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x10ac38: 0x26845e98
    ctx->pc = 0x10ac38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 24216));
    // 0x10ac3c: 0xc04ace4
    ctx->pc = 0x10AC3Cu;
    SET_GPR_U32(ctx, 31, 0x10AC44u);
    ctx->pc = 0x10AC40u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 14288));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC44u; }
    }
    if (ctx->pc != 0x10AC44u) { return; }
    ctx->pc = 0x10AC44u;
    // 0x10ac44: 0x3c040017
    ctx->pc = 0x10ac44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ac48: 0xc04ace4
    ctx->pc = 0x10AC48u;
    SET_GPR_U32(ctx, 31, 0x10AC50u);
    ctx->pc = 0x10AC4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14272));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC50u; }
    }
    if (ctx->pc != 0x10AC50u) { return; }
    ctx->pc = 0x10AC50u;
    // 0x10ac50: 0x56600004
    ctx->pc = 0x10AC50u;
    {
        const bool branch_taken_0x10ac50 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ac50) {
            ctx->pc = 0x10AC54u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x10AC64u;
            goto label_10ac64;
        }
    }
    ctx->pc = 0x10AC58u;
    // 0x10ac58: 0xc042ffc
    ctx->pc = 0x10AC58u;
    SET_GPR_U32(ctx, 31, 0x10AC60u);
    ctx->pc = 0x10AC5Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x10BFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC60u; }
    }
    if (ctx->pc != 0x10AC60u) { return; }
    ctx->pc = 0x10AC60u;
    // 0x10ac60: 0x40802d
    ctx->pc = 0x10ac60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ac64:
    // 0x10ac64: 0x56600005
    ctx->pc = 0x10AC64u;
    {
        const bool branch_taken_0x10ac64 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ac64) {
            ctx->pc = 0x10AC68u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x10AC7Cu;
            goto label_10ac7c;
        }
    }
    ctx->pc = 0x10AC6Cu;
    // 0x10ac6c: 0xc042ffc
    ctx->pc = 0x10AC6Cu;
    SET_GPR_U32(ctx, 31, 0x10AC74u);
    ctx->pc = 0x10AC70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x10BFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        convertEnd_0x10bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC74u; }
    }
    if (ctx->pc != 0x10AC74u) { return; }
    ctx->pc = 0x10AC74u;
    // 0x10ac74: 0x10000002
    ctx->pc = 0x10AC74u;
    {
        const bool branch_taken_0x10ac74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10AC78u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10ac74) {
            ctx->pc = 0x10AC80u;
            goto label_10ac80;
        }
    }
    ctx->pc = 0x10AC7Cu;
label_10ac7c:
    // 0x10ac7c: 0x200282d
    ctx->pc = 0x10ac7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ac80:
    // 0x10ac80: 0x240202d
    ctx->pc = 0x10ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac84: 0x8fb00000
    ctx->pc = 0x10ac84u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac88: 0xc04ace4
    ctx->pc = 0x10AC88u;
    SET_GPR_U32(ctx, 31, 0x10AC90u);
    ctx->pc = 0x10AC8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC90u; }
    }
    if (ctx->pc != 0x10AC90u) { return; }
    ctx->pc = 0x10AC90u;
    // 0x10ac90: 0x26845e98
    ctx->pc = 0x10ac90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 24216));
    // 0x10ac94: 0xc04ace4
    ctx->pc = 0x10AC94u;
    SET_GPR_U32(ctx, 31, 0x10AC9Cu);
    ctx->pc = 0x10AC98u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AC9Cu; }
    }
    if (ctx->pc != 0x10AC9Cu) { return; }
    ctx->pc = 0x10AC9Cu;
    // 0x10ac9c: 0x3c020017
    ctx->pc = 0x10ac9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x10aca0: 0xc04ace4
    ctx->pc = 0x10ACA0u;
    SET_GPR_U32(ctx, 31, 0x10ACA8u);
    ctx->pc = 0x10ACA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACA8u; }
    }
    if (ctx->pc != 0x10ACA8u) { return; }
    ctx->pc = 0x10ACA8u;
    // 0x10aca8: 0x82050000
    ctx->pc = 0x10aca8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10acac: 0x0
    ctx->pc = 0x10acacu;
    // NOP
label_10acb0:
    // 0x10acb0: 0x26c45ea8
    ctx->pc = 0x10acb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 24232));
    // 0x10acb4: 0xc04ace4
    ctx->pc = 0x10ACB4u;
    SET_GPR_U32(ctx, 31, 0x10ACBCu);
    ctx->pc = 0x10ACB8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACBCu; }
    }
    if (ctx->pc != 0x10ACBCu) { return; }
    ctx->pc = 0x10ACBCu;
    // 0x10acbc: 0x212182a
    ctx->pc = 0x10acbcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x10acc0: 0x5460fffb
    ctx->pc = 0x10ACC0u;
    {
        const bool branch_taken_0x10acc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x10acc0) {
            ctx->pc = 0x10ACC4u;
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x10ACB0u;
            goto label_10acb0;
        }
    }
    ctx->pc = 0x10ACC8u;
    // 0x10acc8: 0xc04ace4
    ctx->pc = 0x10ACC8u;
    SET_GPR_U32(ctx, 31, 0x10ACD0u);
    ctx->pc = 0x10ACCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 24216));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACD0u; }
    }
    if (ctx->pc != 0x10ACD0u) { return; }
    ctx->pc = 0x10ACD0u;
    // 0x10acd0: 0x3c040017
    ctx->pc = 0x10acd0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10acd4: 0xc04ace4
    ctx->pc = 0x10ACD4u;
    SET_GPR_U32(ctx, 31, 0x10ACDCu);
    ctx->pc = 0x10ACD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14304));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACDCu; }
    }
    if (ctx->pc != 0x10ACDCu) { return; }
    ctx->pc = 0x10ACDCu;
    // 0x10acdc: 0x82230020
    ctx->pc = 0x10acdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10ace0: 0x1060000c
    ctx->pc = 0x10ACE0u;
    {
        const bool branch_taken_0x10ace0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10ACE4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x10ace0) {
            ctx->pc = 0x10AD14u;
            goto label_10ad14;
        }
    }
    ctx->pc = 0x10ACE8u;
    // 0x10ace8: 0x26110010
    ctx->pc = 0x10ace8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 16));
    // 0x10acec: 0x82050000
    ctx->pc = 0x10acecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_10acf0:
    // 0x10acf0: 0x26a45e90
    ctx->pc = 0x10acf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 24208));
    // 0x10acf4: 0xc04ace4
    ctx->pc = 0x10ACF4u;
    SET_GPR_U32(ctx, 31, 0x10ACFCu);
    ctx->pc = 0x10ACF8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ACFCu; }
    }
    if (ctx->pc != 0x10ACFCu) { return; }
    ctx->pc = 0x10ACFCu;
    // 0x10acfc: 0x211182a
    ctx->pc = 0x10acfcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x10ad00: 0x10600005
    ctx->pc = 0x10AD00u;
    {
        const bool branch_taken_0x10ad00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10AD04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 24216));
        if (branch_taken_0x10ad00) {
            ctx->pc = 0x10AD18u;
            goto label_10ad18;
        }
    }
    ctx->pc = 0x10AD08u;
    // 0x10ad08: 0x82020000
    ctx->pc = 0x10ad08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ad0c: 0x5440fff8
    ctx->pc = 0x10AD0Cu;
    {
        const bool branch_taken_0x10ad0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10ad0c) {
            ctx->pc = 0x10AD10u;
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10AD14u;
label_10ad14:
    // 0x10ad14: 0x26845e98
    ctx->pc = 0x10ad14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 24216));
label_10ad18:
    // 0x10ad18: 0xdfbf00a0
    ctx->pc = 0x10ad18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10ad1c: 0xdfbe0090
    ctx->pc = 0x10ad1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10ad20: 0xdfb70080
    ctx->pc = 0x10ad20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10ad24: 0xdfb60070
    ctx->pc = 0x10ad24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10ad28: 0xdfb50060
    ctx->pc = 0x10ad28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10ad2c: 0xdfb40050
    ctx->pc = 0x10ad2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ad30: 0xdfb30040
    ctx->pc = 0x10ad30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ad34: 0xdfb20030
    ctx->pc = 0x10ad34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ad38: 0xdfb10020
    ctx->pc = 0x10ad38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ad3c: 0xdfb00010
    ctx->pc = 0x10ad3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ad40: 0x804ace4
    ctx->pc = 0x10AD40u;
    ctx->pc = 0x10AD44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x12B390u;
    printf_0x12b390(rdram, ctx, runtime); return;
    ctx->pc = 0x10AD48u;
}
