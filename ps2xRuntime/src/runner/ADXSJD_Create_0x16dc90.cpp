#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <iostream>

// Function: ADXSJD_Create
// Address: 0x16dc90 - 0x16ddf8
void ADXSJD_Create_0x16dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_Create");

    std::cerr << "[ADXSJD_Create] entry" << std::endl;
    ctx->pc = 0x16dc90u;

    // 0x16dc90: 0x27bdff80
    ctx->pc = 0x16dc90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16dc94: 0x3c030023
    ctx->pc = 0x16dc94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16dc98: 0xffb60060
    ctx->pc = 0x16dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x16dc9c: 0xffb50050
    ctx->pc = 0x16dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x16dca0: 0x80b02d
    ctx->pc = 0x16dca0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dca4: 0xffb40040
    ctx->pc = 0x16dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16dca8: 0xc0a82d
    ctx->pc = 0x16dca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcac: 0xffbf0070
    ctx->pc = 0x16dcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x16dcb0: 0xa0a02d
    ctx->pc = 0x16dcb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcb4: 0xffb20020
    ctx->pc = 0x16dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16dcb8: 0x282d
    ctx->pc = 0x16dcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcbc: 0xffb10010
    ctx->pc = 0x16dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16dcc0: 0xffb00000
    ctx->pc = 0x16dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16dcc4: 0xffb30030
    ctx->pc = 0x16dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16dcc8: 0x806256e0
    ctx->pc = 0x16dcc8u;
    std::cerr << "[ADXSJD_Create] before READ8" << std::endl;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22240)));
    // 0x16dccc: 0x1040000a
    ctx->pc = 0x16DCCCu;
    {
        const bool branch_taken_0x16dccc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DCD0u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x16dccc) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DCD4u;
    // 0x16dcd4: 0x246456e0
    ctx->pc = 0x16dcd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 22240));
    // 0x16dcd8: 0x24a50001
    ctx->pc = 0x16dcd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x16dcdc: 0x0
    ctx->pc = 0x16dcdcu;
    // NOP
label_16dce0:
    { static int _n=0; if (++_n<=20 || (_n%5000)==0) std::cerr << "[ADXSJD_Create] loop_16dce0 r5=" << GPR_S32(ctx,5) << " (n=" << _n << ")" << std::endl; }
    // 0x16dce0: 0x28a20008
    ctx->pc = 0x16dce0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x16dce4: 0x10400004
    ctx->pc = 0x16DCE4u;
    {
        const bool branch_taken_0x16dce4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DCE8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 156));
        if (branch_taken_0x16dce4) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DCECu;
    // 0x16dcec: 0x80820000
    ctx->pc = 0x16dcecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16dcf0: 0x5440fffb
    ctx->pc = 0x16DCF0u;
    {
        const bool branch_taken_0x16dcf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16dcf0) {
            ctx->pc = 0x16DCF4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x16DCE0u;
            goto label_16dce0;
        }
    }
    ctx->pc = 0x16DCF8u;
label_16dcf8:
    // 0x16dcf8: 0x24020008
    ctx->pc = 0x16dcf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16dcfc: 0x10a2001b
    ctx->pc = 0x16DCFCu;
    {
        const bool branch_taken_0x16dcfc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x16DD00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 156));
        if (branch_taken_0x16dcfc) {
            ctx->pc = 0x16DD6Cu;
            goto label_16dd6c;
        }
    }
    ctx->pc = 0x16DD04u;
    // 0x16dd04: 0x246356e0
    ctx->pc = 0x16dd04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 22240));
    // 0x16dd08: 0xa21018
    ctx->pc = 0x16dd08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x16dd0c: 0x260202d
    ctx->pc = 0x16dd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd10: 0xc05f2bc
    ctx->pc = 0x16DD10u;
    SET_GPR_U32(ctx, 31, 0x16DD18u);
    ctx->pc = 0x16DD14u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x17CAF0u;
    std::cerr << "[ADXSJD_Create] before SJRBF_GetBufPtr" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_GetBufPtr_0x17caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD18u; }
        else if (ctx->pc != 0x16DD18u) { ctx->pc = 0x16DD18u; }
    }
    if (ctx->pc != 0x16DD18u) { return; }
    ctx->pc = 0x16DD18u;
    // 0x16dd18: 0x40882d
    ctx->pc = 0x16dd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd1c: 0xc05f2be
    ctx->pc = 0x16DD1Cu;
    SET_GPR_U32(ctx, 31, 0x16DD24u);
    ctx->pc = 0x16DD20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17CAF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_GetBufSize_0x17caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD24u; }
        else if (ctx->pc != 0x16DD24u) { ctx->pc = 0x16DD24u; }
    }
    if (ctx->pc != 0x16DD24u) { return; }
    ctx->pc = 0x16DD24u;
    // 0x16dd24: 0x28042
    ctx->pc = 0x16dd24u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 2), 1));
    // 0x16dd28: 0xc05f2c0
    ctx->pc = 0x16DD28u;
    SET_GPR_U32(ctx, 31, 0x16DD30u);
    ctx->pc = 0x16DD2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17CB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_GetXtrSize_0x17cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD30u; }
        else if (ctx->pc != 0x16DD30u) { ctx->pc = 0x16DD30u; }
    }
    if (ctx->pc != 0x16DD30u) { return; }
    ctx->pc = 0x16DD30u;
    // 0x16dd30: 0x21042
    ctx->pc = 0x16dd30u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x16dd34: 0x200302d
    ctx->pc = 0x16dd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd38: 0xc23821
    ctx->pc = 0x16dd38u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16dd3c: 0x220282d
    ctx->pc = 0x16dd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd40: 0xc059efa
    ctx->pc = 0x16DD40u;
    SET_GPR_U32(ctx, 31, 0x16DD48u);
    ctx->pc = 0x16DD44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167BE8u;
    std::cerr << "[ADXSJD_Create] before ADXB_Create" << std::endl;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_Create_0x167be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD48u; }
        else if (ctx->pc != 0x16DD48u) { ctx->pc = 0x16DD48u; }
    }
    if (ctx->pc != 0x16DD48u) { return; }
    ctx->pc = 0x16DD48u;
    // 0x16dd48: 0x3c050017
    ctx->pc = 0x16dd48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x16dd4c: 0x40202d
    ctx->pc = 0x16dd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd50: 0x24a5e078
    ctx->pc = 0x16dd50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959224));
    // 0x16dd54: 0xae420004
    ctx->pc = 0x16dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x16dd58: 0xc059ff0
    ctx->pc = 0x16DD58u;
    SET_GPR_U32(ctx, 31, 0x16DD60u);
    ctx->pc = 0x16DD5Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_EntryGetWrFunc_0x167fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD60u; }
        else if (ctx->pc != 0x16DD60u) { ctx->pc = 0x16DD60u; }
    }
    if (ctx->pc != 0x16DD60u) { return; }
    ctx->pc = 0x16DD60u;
    // 0x16dd60: 0x8e420004
    ctx->pc = 0x16dd60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16dd64: 0x54400003
    ctx->pc = 0x16DD64u;
    {
        const bool branch_taken_0x16dd64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16dd64) {
            ctx->pc = 0x16DD68u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 22));
            ctx->pc = 0x16DD74u;
            goto label_16dd74;
        }
    }
    ctx->pc = 0x16DD6Cu;
label_16dd6c:
    // 0x16dd6c: 0x10000018
    ctx->pc = 0x16DD6Cu;
    {
        const bool branch_taken_0x16dd6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DD70u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16dd6c) {
            ctx->pc = 0x16DDD0u;
            goto label_16ddd0;
        }
    }
    ctx->pc = 0x16DD74u;
label_16dd74:
    // 0x16dd74: 0x282d
    ctx->pc = 0x16dd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd78: 0x1a80000b
    ctx->pc = 0x16DD78u;
    {
        const bool branch_taken_0x16dd78 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x16DD7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 20));
        if (branch_taken_0x16dd78) {
            ctx->pc = 0x16DDA8u;
            goto label_16dda8;
        }
    }
    ctx->pc = 0x16DD80u;
    // 0x16dd80: 0x2646000c
    ctx->pc = 0x16dd80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 12));
    // 0x16dd84: 0x0
    ctx->pc = 0x16dd84u;
    // NOP
label_16dd88:
    // 0x16dd88: 0x51080
    ctx->pc = 0x16dd88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x16dd8c: 0x551821
    ctx->pc = 0x16dd8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16dd90: 0x24a50001
    ctx->pc = 0x16dd90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x16dd94: 0x8c640000
    ctx->pc = 0x16dd94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dd98: 0xc21021
    ctx->pc = 0x16dd98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16dd9c: 0xb4182a
    ctx->pc = 0x16dd9cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 20)));
    // 0x16dda0: 0x1460fff9
    ctx->pc = 0x16DDA0u;
    {
        const bool branch_taken_0x16dda0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16DDA4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x16dda0) {
            ctx->pc = 0x16DD88u;
            goto label_16dd88;
        }
    }
    ctx->pc = 0x16DDA8u;
label_16dda8:
    // 0x16dda8: 0xa2400001
    ctx->pc = 0x16dda8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x16ddac: 0xc05b716
    ctx->pc = 0x16DDACu;
    SET_GPR_U32(ctx, 31, 0x16DDB4u);
    ctx->pc = 0x16DDB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DC58u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsjd_clear_0x16dc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DDB4u; }
        else if (ctx->pc != 0x16DDB4u) { ctx->pc = 0x16DDB4u; }
    }
    if (ctx->pc != 0x16DDB4u) { return; }
    ctx->pc = 0x16DDB4u;
    // 0x16ddb4: 0x24020001
    ctx->pc = 0x16ddb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ddb8: 0xae400048
    ctx->pc = 0x16ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x16ddbc: 0xa2420000
    ctx->pc = 0x16ddbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16ddc0: 0xae40004c
    ctx->pc = 0x16ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x16ddc4: 0x240102d
    ctx->pc = 0x16ddc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ddc8: 0xae400050
    ctx->pc = 0x16ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x16ddcc: 0xae400054
    ctx->pc = 0x16ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_16ddd0:
    // 0x16ddd0: 0xdfbf0070
    ctx->pc = 0x16ddd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16ddd4: 0xdfb60060
    ctx->pc = 0x16ddd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16ddd8: 0xdfb50050
    ctx->pc = 0x16ddd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16dddc: 0xdfb40040
    ctx->pc = 0x16dddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16dde0: 0xdfb30030
    ctx->pc = 0x16dde0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dde4: 0xdfb20020
    ctx->pc = 0x16dde4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dde8: 0xdfb10010
    ctx->pc = 0x16dde8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ddec: 0xdfb00000
    ctx->pc = 0x16ddecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ddf0: 0x3e00008
    ctx->pc = 0x16DDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DDF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DCE0u: goto label_16dce0;
            case 0x16DCF8u: goto label_16dcf8;
            case 0x16DD6Cu: goto label_16dd6c;
            case 0x16DD74u: goto label_16dd74;
            case 0x16DD88u: goto label_16dd88;
            case 0x16DDA8u: goto label_16dda8;
            case 0x16DDD0u: goto label_16ddd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DDF8u;
}
