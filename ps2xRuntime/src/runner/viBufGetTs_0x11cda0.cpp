#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufGetTs
// Address: 0x11cda0 - 0x11cf2c
void viBufGetTs_0x11cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11cda0u;

    // 0x11cda0: 0x27bdff90
    ctx->pc = 0x11cda0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11cda4: 0x3c021000
    ctx->pc = 0x11cda4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11cda8: 0xffb50050
    ctx->pc = 0x11cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11cdac: 0x3442b410
    ctx->pc = 0x11cdacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x11cdb0: 0xffb40040
    ctx->pc = 0x11cdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11cdb4: 0x3c031000
    ctx->pc = 0x11cdb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11cdb8: 0xffb30030
    ctx->pc = 0x11cdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11cdbc: 0x34632020
    ctx->pc = 0x11cdbcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8224));
    // 0x11cdc0: 0xffb20020
    ctx->pc = 0x11cdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11cdc4: 0xa0a82d
    ctx->pc = 0x11cdc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdc8: 0xffbf0060
    ctx->pc = 0x11cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11cdcc: 0x80902d
    ctx->pc = 0x11cdccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdd0: 0xffb10010
    ctx->pc = 0x11cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11cdd4: 0xa02d
    ctx->pc = 0x11cdd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdd8: 0xffb00000
    ctx->pc = 0x11cdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cddc: 0x8c500000
    ctx->pc = 0x11cddcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11cde0: 0x8c620000
    ctx->pc = 0x11cde0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cde4: 0x8e510038
    ctx->pc = 0x11cde4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11cde8: 0x21a02
    ctx->pc = 0x11cde8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 8));
    // 0x11cdec: 0x8e450008
    ctx->pc = 0x11cdecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11cdf0: 0x21402
    ctx->pc = 0x11cdf0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x11cdf4: 0x3063000f
    ctx->pc = 0x11cdf4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x11cdf8: 0x30420003
    ctx->pc = 0x11cdf8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x11cdfc: 0x8e440040
    ctx->pc = 0x11cdfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11ce00: 0x431021
    ctx->pc = 0x11ce00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ce04: 0x59ac0
    ctx->pc = 0x11ce04u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 5), 11));
    // 0x11ce08: 0x21100
    ctx->pc = 0x11ce08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x11ce0c: 0x3231007f
    ctx->pc = 0x11ce0cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), 127));
    // 0x11ce10: 0xc0438b8
    ctx->pc = 0x11CE10u;
    SET_GPR_U32(ctx, 31, 0x11CE18u);
    ctx->pc = 0x11CE14u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CE18u; }
    }
    if (ctx->pc != 0x11CE18u) { return; }
    ctx->pc = 0x11CE18u;
    // 0x11ce18: 0x2402ffff
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ce1c: 0x1188c3
    ctx->pc = 0x11ce1cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
    // 0x11ce20: 0xfea20008
    ctx->pc = 0x11ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x11ce24: 0x2118021
    ctx->pc = 0x11ce24u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11ce28: 0xfea20000
    ctx->pc = 0x11ce28u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x11ce2c: 0x2138021
    ctx->pc = 0x11ce2cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x11ce30: 0x8e420000
    ctx->pc = 0x11ce30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11ce34: 0x52600001
    ctx->pc = 0x11CE34u;
    {
        const bool branch_taken_0x11ce34 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x11ce34) {
            ctx->pc = 0x11CE38u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11CE3Cu;
            goto label_11ce3c;
        }
    }
    ctx->pc = 0x11CE3Cu;
label_11ce3c:
    // 0x11ce3c: 0x8e4a0058
    ctx->pc = 0x11ce3cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11ce40: 0x482d
    ctx->pc = 0x11ce40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce44: 0x2028023
    ctx->pc = 0x11ce44u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11ce48: 0x213001b
    ctx->pc = 0x11ce48u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 16) / divisor; ctx->hi = GPR_U32(ctx, 19) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,16); } }
    // 0x11ce4c: 0x1810
    ctx->pc = 0x11ce4cu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x11ce50: 0x1940002a
    ctx->pc = 0x11CE50u;
    {
        const bool branch_taken_0x11ce50 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x11CE54u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 92)));
        if (branch_taken_0x11ce50) {
            ctx->pc = 0x11CEFCu;
            goto label_11cefc;
        }
    }
    ctx->pc = 0x11CE58u;
    // 0x11ce58: 0x8e480054
    ctx->pc = 0x11ce58u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x11ce5c: 0x8a6023
    ctx->pc = 0x11ce5cu;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x11ce60: 0x8e4b0050
    ctx->pc = 0x11ce60u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x11ce64: 0x738021
    ctx->pc = 0x11ce64u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x11ce68: 0x1881021
    ctx->pc = 0x11ce68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x11ce6c: 0x0
    ctx->pc = 0x11ce6cu;
    // NOP
label_11ce70:
    // 0x11ce70: 0x24050018
    ctx->pc = 0x11ce70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    // 0x11ce74: 0x491021
    ctx->pc = 0x11ce74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11ce78: 0x51000001
    ctx->pc = 0x11CE78u;
    {
        const bool branch_taken_0x11ce78 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x11ce78) {
            ctx->pc = 0x11CE7Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x11CE80u;
            goto label_11ce80;
        }
    }
    ctx->pc = 0x11CE80u;
label_11ce80:
    // 0x11ce80: 0x48001a
    ctx->pc = 0x11ce80u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11ce84: 0x2010
    ctx->pc = 0x11ce84u;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x11ce88: 0x851018
    ctx->pc = 0x11ce88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x11ce8c: 0x4b3821
    ctx->pc = 0x11ce8cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x11ce90: 0x8ce30010
    ctx->pc = 0x11ce90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x11ce94: 0x8ce40014
    ctx->pc = 0x11ce94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x11ce98: 0x2031823
    ctx->pc = 0x11ce98u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11ce9c: 0x73001a
    ctx->pc = 0x11ce9cu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x11cea0: 0x1010
    ctx->pc = 0x11cea0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x11cea4: 0x44102a
    ctx->pc = 0x11cea4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x11cea8: 0x1040000e
    ctx->pc = 0x11CEA8u;
    {
        const bool branch_taken_0x11cea8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CEACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11cea8) {
            ctx->pc = 0x11CEE4u;
            goto label_11cee4;
        }
    }
    ctx->pc = 0x11CEB0u;
    // 0x11ceb0: 0xdce30000
    ctx->pc = 0x11ceb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11ceb4: 0x24140001
    ctx->pc = 0x11ceb4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ceb8: 0x8e420058
    ctx->pc = 0x11ceb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11cebc: 0xfea30000
    ctx->pc = 0x11cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x11cec0: 0x40202d
    ctx->pc = 0x11cec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cec4: 0x28430002
    ctx->pc = 0x11cec4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
    // 0x11cec8: 0xdce50008
    ctx->pc = 0x11cec8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11cecc: 0x283100a
    ctx->pc = 0x11ceccu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 20));
    // 0x11ced0: 0x822023
    ctx->pc = 0x11ced0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11ced4: 0xfea50008
    ctx->pc = 0x11ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 5));
    // 0x11ced8: 0xfce60008
    ctx->pc = 0x11ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x11cedc: 0xae440058
    ctx->pc = 0x11cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 4));
    // 0x11cee0: 0xfce60000
    ctx->pc = 0x11cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
label_11cee4:
    // 0x11cee4: 0x25290001
    ctx->pc = 0x11cee4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x11cee8: 0x12a102a
    ctx->pc = 0x11cee8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 10)));
    // 0x11ceec: 0x10400003
    ctx->pc = 0x11CEECu;
    {
        const bool branch_taken_0x11ceec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11ceec) {
            ctx->pc = 0x11CEFCu;
            goto label_11cefc;
        }
    }
    ctx->pc = 0x11CEF4u;
    // 0x11cef4: 0x1280ffde
    ctx->pc = 0x11CEF4u;
    {
        const bool branch_taken_0x11cef4 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x11CEF8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        if (branch_taken_0x11cef4) {
            ctx->pc = 0x11CE70u;
            goto label_11ce70;
        }
    }
    ctx->pc = 0x11CEFCu;
label_11cefc:
    // 0x11cefc: 0xc0438b0
    ctx->pc = 0x11CEFCu;
    SET_GPR_U32(ctx, 31, 0x11CF04u);
    ctx->pc = 0x11CF00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF04u; }
    }
    if (ctx->pc != 0x11CF04u) { return; }
    ctx->pc = 0x11CF04u;
    // 0x11cf04: 0xdfbf0060
    ctx->pc = 0x11cf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11cf08: 0x24020001
    ctx->pc = 0x11cf08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cf0c: 0xdfb50050
    ctx->pc = 0x11cf0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11cf10: 0xdfb40040
    ctx->pc = 0x11cf10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11cf14: 0xdfb30030
    ctx->pc = 0x11cf14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cf18: 0xdfb20020
    ctx->pc = 0x11cf18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cf1c: 0xdfb10010
    ctx->pc = 0x11cf1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cf20: 0xdfb00000
    ctx->pc = 0x11cf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cf24: 0x3e00008
    ctx->pc = 0x11CF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CE3Cu: goto label_11ce3c;
            case 0x11CE70u: goto label_11ce70;
            case 0x11CE80u: goto label_11ce80;
            case 0x11CEE4u: goto label_11cee4;
            case 0x11CEFCu: goto label_11cefc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CF2Cu;
}
