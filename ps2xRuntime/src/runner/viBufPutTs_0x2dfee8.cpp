#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufPutTs
// Address: 0x2dfee8 - 0x2dfffc
void viBufPutTs_0x2dfee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dfee8u;

    // 0x2dfee8: 0x27bdffc0
    ctx->pc = 0x2dfee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dfeec: 0xffbf0030
    ctx->pc = 0x2dfeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dfef0: 0xffb20020
    ctx->pc = 0x2dfef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dfef4: 0xffb10010
    ctx->pc = 0x2dfef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dfef8: 0xffb00000
    ctx->pc = 0x2dfef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dfefc: 0x80802d
    ctx->pc = 0x2dfefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff00: 0xa0882d
    ctx->pc = 0x2dff00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff04: 0x902d
    ctx->pc = 0x2dff04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dff08: 0xc0c0d88
    ctx->pc = 0x2DFF08u;
    SET_GPR_U32(ctx, 31, 0x2DFF10u);
    ctx->pc = 0x2DFF0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF10u; }
    }
    if (ctx->pc != 0x2DFF10u) { return; }
    ctx->pc = 0x2DFF10u;
    // 0x2dff10: 0x8e020058
    ctx->pc = 0x2dff10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2dff14: 0x8e030054
    ctx->pc = 0x2dff14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2dff18: 0x43102a
    ctx->pc = 0x2dff18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2dff1c: 0x1040002e
    ctx->pc = 0x2DFF1Cu;
    {
        const bool branch_taken_0x2dff1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DFF20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dff1c) {
            ctx->pc = 0x2DFFD8u;
            goto label_2dffd8;
        }
    }
    ctx->pc = 0x2DFF24u;
    // 0x2dff24: 0xc0b7f52
    ctx->pc = 0x2DFF24u;
    SET_GPR_U32(ctx, 31, 0x2DFF2Cu);
    ctx->pc = 0x2DFF28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DFD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufModifyPts_0x2dfd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFF2Cu; }
    }
    if (ctx->pc != 0x2DFF2Cu) { return; }
    ctx->pc = 0x2DFF2Cu;
    // 0x2dff2c: 0xde220000
    ctx->pc = 0x2dff2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dff30: 0x4430005
    ctx->pc = 0x2DFF30u;
    {
        const bool branch_taken_0x2dff30 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2dff30) {
            ctx->pc = 0x2DFF34u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->pc = 0x2DFF48u;
            goto label_2dff48;
        }
    }
    ctx->pc = 0x2DFF38u;
    // 0x2dff38: 0xde220008
    ctx->pc = 0x2dff38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2dff3c: 0x4400026
    ctx->pc = 0x2DFF3Cu;
    {
        const bool branch_taken_0x2dff3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2DFF40u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2dff3c) {
            ctx->pc = 0x2DFFD8u;
            goto label_2dffd8;
        }
    }
    ctx->pc = 0x2DFF44u;
    // 0x2dff44: 0x8e02005c
    ctx->pc = 0x2dff44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2dff48:
    // 0x2dff48: 0x8e030050
    ctx->pc = 0x2dff48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2dff4c: 0x24040018
    ctx->pc = 0x2dff4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2dff50: 0x441018
    ctx->pc = 0x2dff50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2dff54: 0x431021
    ctx->pc = 0x2dff54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dff58: 0xde230000
    ctx->pc = 0x2dff58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dff5c: 0xfc430000
    ctx->pc = 0x2dff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2dff60: 0x8e02005c
    ctx->pc = 0x2dff60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2dff64: 0x8e030050
    ctx->pc = 0x2dff64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2dff68: 0x441018
    ctx->pc = 0x2dff68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2dff6c: 0x431021
    ctx->pc = 0x2dff6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dff70: 0xde230008
    ctx->pc = 0x2dff70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2dff74: 0xfc430008
    ctx->pc = 0x2dff74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x2dff78: 0x8e02005c
    ctx->pc = 0x2dff78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2dff7c: 0x8e030050
    ctx->pc = 0x2dff7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2dff80: 0x441018
    ctx->pc = 0x2dff80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2dff84: 0x431021
    ctx->pc = 0x2dff84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dff88: 0x8e230010
    ctx->pc = 0x2dff88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2dff8c: 0xac430010
    ctx->pc = 0x2dff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2dff90: 0x8e02005c
    ctx->pc = 0x2dff90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2dff94: 0x8e030050
    ctx->pc = 0x2dff94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2dff98: 0x441018
    ctx->pc = 0x2dff98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2dff9c: 0x431021
    ctx->pc = 0x2dff9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dffa0: 0x8e230014
    ctx->pc = 0x2dffa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2dffa4: 0xac430014
    ctx->pc = 0x2dffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2dffa8: 0x8e020058
    ctx->pc = 0x2dffa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2dffac: 0x24420001
    ctx->pc = 0x2dffacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dffb0: 0xae020058
    ctx->pc = 0x2dffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2dffb4: 0x8e03005c
    ctx->pc = 0x2dffb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2dffb8: 0x24630001
    ctx->pc = 0x2dffb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dffbc: 0x8e020054
    ctx->pc = 0x2dffbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2dffc0: 0x62001a
    ctx->pc = 0x2dffc0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2dffc4: 0x1810
    ctx->pc = 0x2dffc4u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2dffc8: 0x50400001
    ctx->pc = 0x2DFFC8u;
    {
        const bool branch_taken_0x2dffc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dffc8) {
            ctx->pc = 0x2DFFCCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DFFD0u;
            goto label_2dffd0;
        }
    }
    ctx->pc = 0x2DFFD0u;
label_2dffd0:
    // 0x2dffd0: 0xae03005c
    ctx->pc = 0x2dffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x2dffd4: 0x24120001
    ctx->pc = 0x2dffd4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_2dffd8:
    // 0x2dffd8: 0xc0c0d80
    ctx->pc = 0x2DFFD8u;
    SET_GPR_U32(ctx, 31, 0x2DFFE0u);
    ctx->pc = 0x2DFFDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFFE0u; }
    }
    if (ctx->pc != 0x2DFFE0u) { return; }
    ctx->pc = 0x2DFFE0u;
    // 0x2dffe0: 0x240102d
    ctx->pc = 0x2dffe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffe4: 0xdfbf0030
    ctx->pc = 0x2dffe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dffe8: 0xdfb20020
    ctx->pc = 0x2dffe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dffec: 0xdfb10010
    ctx->pc = 0x2dffecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfff0: 0xdfb00000
    ctx->pc = 0x2dfff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfff4: 0x3e00008
    ctx->pc = 0x2DFFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFFF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DFF48u: goto label_2dff48;
            case 0x2DFFD0u: goto label_2dffd0;
            case 0x2DFFD8u: goto label_2dffd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DFFFCu;
}
