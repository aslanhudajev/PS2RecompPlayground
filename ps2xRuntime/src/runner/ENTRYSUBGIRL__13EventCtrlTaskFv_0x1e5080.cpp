#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYSUBGIRL__13EventCtrlTaskFv
// Address: 0x1e5080 - 0x1e513c
void ENTRYSUBGIRL__13EventCtrlTaskFv_0x1e5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYSUBGIRL__13EventCtrlTaskFv");


    ctx->pc = 0x1e5080u;

    // 0x1e5080: 0x27bdffe0
    ctx->pc = 0x1e5080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5084: 0x7fbf0010
    ctx->pc = 0x1e5084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e5088: 0x7fb00000
    ctx->pc = 0x1e5088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e508c: 0x70808628
    ctx->pc = 0x1e508cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e5090: 0x3c010050
    ctx->pc = 0x1e5090u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5094: 0x8424e504
    ctx->pc = 0x1e5094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1e5098: 0x2403000a
    ctx->pc = 0x1e5098u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e509c: 0x14830016
    ctx->pc = 0x1E509Cu;
    {
        const bool branch_taken_0x1e509c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E50A0u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e509c) {
            ctx->pc = 0x1E50F8u;
            goto label_1e50f8;
        }
    }
    ctx->pc = 0x1E50A4u;
    // 0x1e50a4: 0x8f848bcc
    ctx->pc = 0x1e50a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1e50a8: 0x24030001
    ctx->pc = 0x1e50a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e50ac: 0x14830012
    ctx->pc = 0x1E50ACu;
    {
        const bool branch_taken_0x1e50ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E50B0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x1e50ac) {
            ctx->pc = 0x1E50F8u;
            goto label_1e50f8;
        }
    }
    ctx->pc = 0x1E50B4u;
    // 0x1e50b4: 0x70002e28
    ctx->pc = 0x1e50b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e50b8: 0x2469fc80
    ctx->pc = 0x1e50b8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 3), 4294966400));
    // 0x1e50bc: 0x2404002e
    ctx->pc = 0x1e50bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 46));
label_1e50c0:
    // 0x1e50c0: 0x24060002
    ctx->pc = 0x1e50c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e50c4: 0x25280002
    ctx->pc = 0x1e50c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 9), 2));
label_1e50c8:
    // 0x1e50c8: 0x81030000
    ctx->pc = 0x1e50c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e50cc: 0x54640003
    ctx->pc = 0x1E50CCu;
    {
        const bool branch_taken_0x1e50cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1e50cc) {
            ctx->pc = 0x1E50D0u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x1E50DCu;
            goto label_1e50dc;
        }
    }
    ctx->pc = 0x1E50D4u;
    // 0x1e50d4: 0x24070001
    ctx->pc = 0x1e50d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e50d8: 0x24c60001
    ctx->pc = 0x1e50d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1e50dc:
    // 0x1e50dc: 0x28c10004
    ctx->pc = 0x1e50dcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 4));
    // 0x1e50e0: 0x1420fff9
    ctx->pc = 0x1E50E0u;
    {
        const bool branch_taken_0x1e50e0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E50E4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x1e50e0) {
            ctx->pc = 0x1E50C8u;
            goto label_1e50c8;
        }
    }
    ctx->pc = 0x1E50E8u;
    // 0x1e50e8: 0x24a50001
    ctx->pc = 0x1e50e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e50ec: 0x28a30002
    ctx->pc = 0x1e50ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 2));
    // 0x1e50f0: 0x1460fff3
    ctx->pc = 0x1E50F0u;
    {
        const bool branch_taken_0x1e50f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E50F4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x1e50f0) {
            ctx->pc = 0x1E50C0u;
            goto label_1e50c0;
        }
    }
    ctx->pc = 0x1E50F8u;
label_1e50f8:
    // 0x1e50f8: 0x10e00009
    ctx->pc = 0x1E50F8u;
    {
        const bool branch_taken_0x1e50f8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e50f8) {
            ctx->pc = 0x1E5120u;
            goto label_1e5120;
        }
    }
    ctx->pc = 0x1E5100u;
    // 0x1e5100: 0x3c020051
    ctx->pc = 0x1e5100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e5104: 0x244437a0
    ctx->pc = 0x1e5104u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x1e5108: 0xc0864f8
    ctx->pc = 0x1E5108u;
    SET_GPR_U32(ctx, 31, 0x1E5110u);
    ctx->pc = 0x1E510Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 173));
    ctx->pc = 0x2193E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj__13EntryDatClassFi_0x2193e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5110u; }
        else if (ctx->pc != 0x1E5110u) { ctx->pc = 0x1E5110u; }
    }
    if (ctx->pc != 0x1E5110u) { return; }
    ctx->pc = 0x1E5110u;
    // 0x1e5110: 0x3c020051
    ctx->pc = 0x1e5110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e5114: 0x244437a0
    ctx->pc = 0x1e5114u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x1e5118: 0xc086630
    ctx->pc = 0x1E5118u;
    SET_GPR_U32(ctx, 31, 0x1E5120u);
    ctx->pc = 0x1E511Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 33));
    ctx->pc = 0x2198C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskBank__13EntryDatClassFi_0x2198c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5120u; }
        else if (ctx->pc != 0x1E5120u) { ctx->pc = 0x1E5120u; }
    }
    if (ctx->pc != 0x1E5120u) { return; }
    ctx->pc = 0x1E5120u;
label_1e5120:
    // 0x1e5120: 0x8e03000c
    ctx->pc = 0x1e5120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e5124: 0x24630004
    ctx->pc = 0x1e5124u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e5128: 0xae03000c
    ctx->pc = 0x1e5128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e512c: 0x7bbf0010
    ctx->pc = 0x1e512cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5130: 0x7bb00000
    ctx->pc = 0x1e5130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5134: 0x3e00008
    ctx->pc = 0x1E5134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5138u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E50C0u: goto label_1e50c0;
            case 0x1E50C8u: goto label_1e50c8;
            case 0x1E50DCu: goto label_1e50dc;
            case 0x1E50F8u: goto label_1e50f8;
            case 0x1E5120u: goto label_1e5120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E513Cu;
}
