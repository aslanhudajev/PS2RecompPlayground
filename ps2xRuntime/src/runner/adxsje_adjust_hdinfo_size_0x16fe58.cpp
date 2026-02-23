#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_adjust_hdinfo_size
// Address: 0x16fe58 - 0x17008c
void adxsje_adjust_hdinfo_size_0x16fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_adjust_hdinfo_size");


    ctx->pc = 0x16fe58u;

    // 0x16fe58: 0x27bdffe0
    ctx->pc = 0x16fe58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16fe5c: 0xffb00000
    ctx->pc = 0x16fe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fe60: 0x80802d
    ctx->pc = 0x16fe60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe64: 0xffbf0010
    ctx->pc = 0x16fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16fe68: 0xc051554
    ctx->pc = 0x16FE68u;
    SET_GPR_U32(ctx, 31, 0x16FE70u);
    ctx->pc = 0x16FE6Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935048)));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FE70u; }
        else if (ctx->pc != 0x16FE70u) { ctx->pc = 0x16FE70u; }
    }
    if (ctx->pc != 0x16FE70u) { return; }
    ctx->pc = 0x16FE70u;
    // 0x16fe70: 0x8e03004c
    ctx->pc = 0x16fe70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16fe74: 0x24040001
    ctx->pc = 0x16fe74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fe78: 0x24450014
    ctx->pc = 0x16fe78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 20));
    // 0x16fe7c: 0x24470010
    ctx->pc = 0x16fe7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 16));
    // 0x16fe80: 0x2463fffd
    ctx->pc = 0x16fe80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x16fe84: 0x8e0c006c
    ctx->pc = 0x16fe84u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x16fe88: 0x83202b
    ctx->pc = 0x16fe88u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16fe8c: 0x19800071
    ctx->pc = 0x16FE8Cu;
    {
        const bool branch_taken_0x16fe8c = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x16FE90u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        if (branch_taken_0x16fe8c) {
            ctx->pc = 0x170054u;
            goto label_170054;
        }
    }
    ctx->pc = 0x16FE94u;
    // 0x16fe94: 0x8e090044
    ctx->pc = 0x16fe94u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16fe98: 0x8e080070
    ctx->pc = 0x16fe98u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x16fe9c: 0x120582d
    ctx->pc = 0x16fe9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fea0: 0x109001a
    ctx->pc = 0x16fea0u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16fea4: 0x51600001
    ctx->pc = 0x16FEA4u;
    {
        const bool branch_taken_0x16fea4 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        if (branch_taken_0x16fea4) {
            ctx->pc = 0x16FEA8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16FEACu;
            goto label_16feac;
        }
    }
    ctx->pc = 0x16FEACu;
label_16feac:
    // 0x16feac: 0x1810
    ctx->pc = 0x16feacu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x16feb0: 0x1060000d
    ctx->pc = 0x16FEB0u;
    {
        const bool branch_taken_0x16feb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FEB4u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        if (branch_taken_0x16feb0) {
            ctx->pc = 0x16FEE8u;
            goto label_16fee8;
        }
    }
    ctx->pc = 0x16FEB8u;
    // 0x16feb8: 0x8e020068
    ctx->pc = 0x16feb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x16febc: 0x8e03003c
    ctx->pc = 0x16febcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x16fec0: 0x8e040078
    ctx->pc = 0x16fec0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x16fec4: 0xc21023
    ctx->pc = 0x16fec4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16fec8: 0x1022821
    ctx->pc = 0x16fec8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x16fecc: 0x621821
    ctx->pc = 0x16feccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16fed0: 0x822021
    ctx->pc = 0x16fed0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16fed4: 0xae03003c
    ctx->pc = 0x16fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16fed8: 0xae040078
    ctx->pc = 0x16fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
    // 0x16fedc: 0xa0402d
    ctx->pc = 0x16fedcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fee0: 0xae060068
    ctx->pc = 0x16fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 6));
    // 0x16fee4: 0xae050070
    ctx->pc = 0x16fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
label_16fee8:
    // 0x16fee8: 0x24020014
    ctx->pc = 0x16fee8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x16feec: 0x8e0a0058
    ctx->pc = 0x16feecu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x16fef0: 0x1821018
    ctx->pc = 0x16fef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x16fef4: 0x8e180050
    ctx->pc = 0x16fef4u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x16fef8: 0x24e70006
    ctx->pc = 0x16fef8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 6));
    // 0x16fefc: 0x8e190060
    ctx->pc = 0x16fefcu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x16ff00: 0x140782d
    ctx->pc = 0x16ff00u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff04: 0x300702d
    ctx->pc = 0x16ff04u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff08: 0x120302d
    ctx->pc = 0x16ff08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff0c: 0x682d
    ctx->pc = 0x16ff0cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff10: 0xe23821
    ctx->pc = 0x16ff10u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16ff14: 0x240cffff
    ctx->pc = 0x16ff14u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ff18:
    // 0x16ff18: 0x106001a
    ctx->pc = 0x16ff18u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16ff1c: 0x50cd0001
    ctx->pc = 0x16FF1Cu;
    {
        const bool branch_taken_0x16ff1c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 13));
        if (branch_taken_0x16ff1c) {
            ctx->pc = 0x16FF20u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16FF24u;
            goto label_16ff24;
        }
    }
    ctx->pc = 0x16FF24u;
label_16ff24:
    // 0x16ff24: 0x1010
    ctx->pc = 0x16ff24u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x16ff28: 0x50400008
    ctx->pc = 0x16FF28u;
    {
        const bool branch_taken_0x16ff28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ff28) {
            ctx->pc = 0x16FF2Cu;
            { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
            ctx->pc = 0x16FF4Cu;
            goto label_16ff4c;
        }
    }
    ctx->pc = 0x16FF30u;
label_16ff30:
    // 0x16ff30: 0x0
    ctx->pc = 0x16ff30u;
    // NOP
    // 0x16ff34: 0x0
    ctx->pc = 0x16ff34u;
    // NOP
    // 0x16ff38: 0x0
    ctx->pc = 0x16ff38u;
    // NOP
    // 0x16ff3c: 0x0
    ctx->pc = 0x16ff3cu;
    // NOP
    // 0x16ff40: 0x0
    ctx->pc = 0x16ff40u;
    // NOP
    // 0x16ff44: 0x1000fffa
    ctx->pc = 0x16FF44u;
    {
        const bool branch_taken_0x16ff44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ff44) {
            ctx->pc = 0x16FF30u;
            goto label_16ff30;
        }
    }
    ctx->pc = 0x16FF4Cu;
label_16ff4c:
    // 0x16ff4c: 0x50cd0001
    ctx->pc = 0x16FF4Cu;
    {
        const bool branch_taken_0x16ff4c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 13));
        if (branch_taken_0x16ff4c) {
            ctx->pc = 0x16FF50u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16FF54u;
            goto label_16ff54;
        }
    }
    ctx->pc = 0x16FF54u;
label_16ff54:
    // 0x16ff54: 0x1012
    ctx->pc = 0x16ff54u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x16ff58: 0x4f1018
    ctx->pc = 0x16ff58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x16ff5c: 0x704e2818
    ctx->pc = 0x16ff5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x16ff60: 0xa71821
    ctx->pc = 0x16ff60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x16ff64: 0x246207ff
    ctx->pc = 0x16ff64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x16ff68: 0x183202a
    ctx->pc = 0x16ff68u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 12), GPR_S32(ctx, 3)));
    // 0x16ff6c: 0x64100b
    ctx->pc = 0x16ff6cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x16ff70: 0x212c3
    ctx->pc = 0x16ff70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x16ff74: 0x24420001
    ctx->pc = 0x16ff74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ff78: 0x212c0
    ctx->pc = 0x16ff78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x16ff7c: 0x453823
    ctx->pc = 0x16ff7cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16ff80: 0xae020074
    ctx->pc = 0x16ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x16ff84: 0x187102a
    ctx->pc = 0x16ff84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 12), GPR_S32(ctx, 7)));
    // 0x16ff88: 0x24e30003
    ctx->pc = 0x16ff88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 3));
    // 0x16ff8c: 0xe2180b
    ctx->pc = 0x16ff8cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x16ff90: 0x31083
    ctx->pc = 0x16ff90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x16ff94: 0x21080
    ctx->pc = 0x16ff94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ff98: 0xe21023
    ctx->pc = 0x16ff98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16ff9c: 0x10400017
    ctx->pc = 0x16FF9Cu;
    {
        const bool branch_taken_0x16ff9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FFA0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x16ff9c) {
            ctx->pc = 0x16FFFCu;
            goto label_16fffc;
        }
    }
    ctx->pc = 0x16FFA4u;
    // 0x16ffa4: 0x50400009
    ctx->pc = 0x16FFA4u;
    {
        const bool branch_taken_0x16ffa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ffa4) {
            ctx->pc = 0x16FFA8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->pc = 0x16FFCCu;
            goto label_16ffcc;
        }
    }
    ctx->pc = 0x16FFACu;
    // 0x16ffac: 0x0
    ctx->pc = 0x16ffacu;
    // NOP
label_16ffb0:
    // 0x16ffb0: 0x0
    ctx->pc = 0x16ffb0u;
    // NOP
    // 0x16ffb4: 0x0
    ctx->pc = 0x16ffb4u;
    // NOP
    // 0x16ffb8: 0x0
    ctx->pc = 0x16ffb8u;
    // NOP
    // 0x16ffbc: 0x0
    ctx->pc = 0x16ffbcu;
    // NOP
    // 0x16ffc0: 0x0
    ctx->pc = 0x16ffc0u;
    // NOP
    // 0x16ffc4: 0x1000fffa
    ctx->pc = 0x16FFC4u;
    {
        const bool branch_taken_0x16ffc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ffc4) {
            ctx->pc = 0x16FFB0u;
            goto label_16ffb0;
        }
    }
    ctx->pc = 0x16FFCCu;
label_16ffcc:
    // 0x16ffcc: 0x1062821
    ctx->pc = 0x16ffccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x16ffd0: 0x8e04003c
    ctx->pc = 0x16ffd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x16ffd4: 0xa0402d
    ctx->pc = 0x16ffd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffd8: 0x8e020078
    ctx->pc = 0x16ffd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x16ffdc: 0x661821
    ctx->pc = 0x16ffdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x16ffe0: 0x862021
    ctx->pc = 0x16ffe0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x16ffe4: 0xae030068
    ctx->pc = 0x16ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x16ffe8: 0x461021
    ctx->pc = 0x16ffe8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16ffec: 0xae04003c
    ctx->pc = 0x16ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x16fff0: 0xae020078
    ctx->pc = 0x16fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x16fff4: 0x1000ffc8
    ctx->pc = 0x16FFF4u;
    {
        const bool branch_taken_0x16fff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FFF8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
        if (branch_taken_0x16fff4) {
            ctx->pc = 0x16FF18u;
            goto label_16ff18;
        }
    }
    ctx->pc = 0x16FFFCu;
label_16fffc:
    // 0x16fffc: 0x8e020078
    ctx->pc = 0x16fffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x170000: 0x51600001
    ctx->pc = 0x170000u;
    {
        const bool branch_taken_0x170000 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        if (branch_taken_0x170000) {
            ctx->pc = 0x170004u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x170008u;
            goto label_170008;
        }
    }
    ctx->pc = 0x170008u;
label_170008:
    // 0x170008: 0x2442ffff
    ctx->pc = 0x170008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17000c: 0x4b001a
    ctx->pc = 0x17000cu;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x170010: 0x1012
    ctx->pc = 0x170010u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x170014: 0x4a1818
    ctx->pc = 0x170014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x170018: 0x6a1021
    ctx->pc = 0x170018u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x17001c: 0x582018
    ctx->pc = 0x17001cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x170020: 0x871821
    ctx->pc = 0x170020u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x170024: 0x24e7fffc
    ctx->pc = 0x170024u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x170028: 0x28e2000e
    ctx->pc = 0x170028u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 14));
    // 0x17002c: 0x1040000b
    ctx->pc = 0x17002Cu;
    {
        const bool branch_taken_0x17002c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x170030u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
        if (branch_taken_0x17002c) {
            ctx->pc = 0x17005Cu;
            goto label_17005c;
        }
    }
    ctx->pc = 0x170034u;
    // 0x170034: 0x0
    ctx->pc = 0x170034u;
    // NOP
label_170038:
    // 0x170038: 0x0
    ctx->pc = 0x170038u;
    // NOP
    // 0x17003c: 0x0
    ctx->pc = 0x17003cu;
    // NOP
    // 0x170040: 0x0
    ctx->pc = 0x170040u;
    // NOP
    // 0x170044: 0x0
    ctx->pc = 0x170044u;
    // NOP
    // 0x170048: 0x0
    ctx->pc = 0x170048u;
    // NOP
    // 0x17004c: 0x1000fffa
    ctx->pc = 0x17004Cu;
    {
        const bool branch_taken_0x17004c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17004c) {
            ctx->pc = 0x170038u;
            goto label_170038;
        }
    }
    ctx->pc = 0x170054u;
label_170054:
    // 0x170054: 0x8e090044
    ctx->pc = 0x170054u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x170058: 0x8e190060
    ctx->pc = 0x170058u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_17005c:
    // 0x17005c: 0x2722ffff
    ctx->pc = 0x17005cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x170060: 0x51200001
    ctx->pc = 0x170060u;
    {
        const bool branch_taken_0x170060 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        if (branch_taken_0x170060) {
            ctx->pc = 0x170064u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x170068u;
            goto label_170068;
        }
    }
    ctx->pc = 0x170068u;
label_170068:
    // 0x170068: 0x49001a
    ctx->pc = 0x170068u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x17006c: 0xdfbf0010
    ctx->pc = 0x17006cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170070: 0x1012
    ctx->pc = 0x170070u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x170074: 0x491818
    ctx->pc = 0x170074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x170078: 0x691021
    ctx->pc = 0x170078u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17007c: 0xae020040
    ctx->pc = 0x17007cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x170080: 0xdfb00000
    ctx->pc = 0x170080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170084: 0x3e00008
    ctx->pc = 0x170084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170088u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FEACu: goto label_16feac;
            case 0x16FEE8u: goto label_16fee8;
            case 0x16FF18u: goto label_16ff18;
            case 0x16FF24u: goto label_16ff24;
            case 0x16FF30u: goto label_16ff30;
            case 0x16FF4Cu: goto label_16ff4c;
            case 0x16FF54u: goto label_16ff54;
            case 0x16FFB0u: goto label_16ffb0;
            case 0x16FFCCu: goto label_16ffcc;
            case 0x16FFFCu: goto label_16fffc;
            case 0x170008u: goto label_170008;
            case 0x170038u: goto label_170038;
            case 0x170054u: goto label_170054;
            case 0x17005Cu: goto label_17005c;
            case 0x170068u: goto label_170068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17008Cu;
}
