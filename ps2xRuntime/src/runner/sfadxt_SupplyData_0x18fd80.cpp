#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_SupplyData
// Address: 0x18fd80 - 0x18fdfc
void sfadxt_SupplyData_0x18fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_SupplyData");


    ctx->pc = 0x18fd80u;

label_18fd80:
    // 0x18fd80: 0x27bdffb0
    ctx->pc = 0x18fd80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_18fd84:
    // 0x18fd84: 0xffb20030
    ctx->pc = 0x18fd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_18fd88:
    // 0x18fd88: 0x37a60004
    ctx->pc = 0x18fd88u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
label_18fd8c:
    // 0x18fd8c: 0xa0902d
    ctx->pc = 0x18fd8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18fd90:
    // 0x18fd90: 0xffb10020
    ctx->pc = 0x18fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_18fd94:
    // 0x18fd94: 0xffb00010
    ctx->pc = 0x18fd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_18fd98:
    // 0x18fd98: 0x3a0282d
    ctx->pc = 0x18fd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18fd9c:
    // 0x18fd9c: 0xffbf0040
    ctx->pc = 0x18fd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_18fda0:
    // 0x18fda0: 0x80802d
    ctx->pc = 0x18fda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18fda4:
    // 0x18fda4: 0xae400000
    ctx->pc = 0x18fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_18fda8:
    // 0x18fda8: 0xc0641ec
label_18fdac:
    if (ctx->pc == 0x18FDACu) {
        ctx->pc = 0x18FDACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 15904));
        ctx->pc = 0x18FDB0u;
        goto label_18fdb0;
    }
    ctx->pc = 0x18FDA8u;
    SET_GPR_U32(ctx, 31, 0x18FDB0u);
    ctx->pc = 0x18FDACu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 15904));
    ctx->pc = 0x1907B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_RingGetRead_0x1907b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDB0u; }
        else if (ctx->pc != 0x18FDB0u) { ctx->pc = 0x18FDB0u; }
    }
    if (ctx->pc != 0x18FDB0u) { return; }
    ctx->pc = 0x18FDB0u;
label_18fdb0:
    // 0x18fdb0: 0x1440000d
label_18fdb4:
    if (ctx->pc == 0x18FDB4u) {
        ctx->pc = 0x18FDB4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x18FDB8u;
        goto label_18fdb8;
    }
    ctx->pc = 0x18FDB0u;
    {
        const bool branch_taken_0x18fdb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18FDB4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x18fdb0) {
            ctx->pc = 0x18FDE8u;
            goto label_18fde8;
        }
    }
    ctx->pc = 0x18FDB8u;
label_18fdb8:
    // 0x18fdb8: 0x8fa20004
    ctx->pc = 0x18fdb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_18fdbc:
    // 0x18fdbc: 0x200202d
    ctx->pc = 0x18fdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18fdc0:
    // 0x18fdc0: 0x8fa50000
    ctx->pc = 0x18fdc0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18fdc4:
    // 0x18fdc4: 0x37a70008
    ctx->pc = 0x18fdc4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 8));
label_18fdc8:
    // 0x18fdc8: 0x8e23003c
    ctx->pc = 0x18fdc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_18fdcc:
    // 0x18fdcc: 0x40302d
    ctx->pc = 0x18fdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18fdd0:
    // 0x18fdd0: 0x60f809
label_18fdd4:
    if (ctx->pc == 0x18FDD4u) {
        ctx->pc = 0x18FDD4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x18FDD8u;
        goto label_18fdd8;
    }
    ctx->pc = 0x18FDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18FDD8u);
        ctx->pc = 0x18FDD4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FD80u: goto label_18fd80;
            case 0x18FD84u: goto label_18fd84;
            case 0x18FD88u: goto label_18fd88;
            case 0x18FD8Cu: goto label_18fd8c;
            case 0x18FD90u: goto label_18fd90;
            case 0x18FD94u: goto label_18fd94;
            case 0x18FD98u: goto label_18fd98;
            case 0x18FD9Cu: goto label_18fd9c;
            case 0x18FDA0u: goto label_18fda0;
            case 0x18FDA4u: goto label_18fda4;
            case 0x18FDA8u: goto label_18fda8;
            case 0x18FDACu: goto label_18fdac;
            case 0x18FDB0u: goto label_18fdb0;
            case 0x18FDB4u: goto label_18fdb4;
            case 0x18FDB8u: goto label_18fdb8;
            case 0x18FDBCu: goto label_18fdbc;
            case 0x18FDC0u: goto label_18fdc0;
            case 0x18FDC4u: goto label_18fdc4;
            case 0x18FDC8u: goto label_18fdc8;
            case 0x18FDCCu: goto label_18fdcc;
            case 0x18FDD0u: goto label_18fdd0;
            case 0x18FDD4u: goto label_18fdd4;
            case 0x18FDD8u: goto label_18fdd8;
            case 0x18FDDCu: goto label_18fddc;
            case 0x18FDE0u: goto label_18fde0;
            case 0x18FDE4u: goto label_18fde4;
            case 0x18FDE8u: goto label_18fde8;
            case 0x18FDECu: goto label_18fdec;
            case 0x18FDF0u: goto label_18fdf0;
            case 0x18FDF4u: goto label_18fdf4;
            case 0x18FDF8u: goto label_18fdf8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18FDD8u; }
            if (ctx->pc != 0x18FDD8u) { return; }
        }
    }
    ctx->pc = 0x18FDD8u;
label_18fdd8:
    // 0x18fdd8: 0x8fa50008
    ctx->pc = 0x18fdd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_18fddc:
    // 0x18fddc: 0xc0641fe
label_18fde0:
    if (ctx->pc == 0x18FDE0u) {
        ctx->pc = 0x18FDE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18FDE4u;
        goto label_18fde4;
    }
    ctx->pc = 0x18FDDCu;
    SET_GPR_U32(ctx, 31, 0x18FDE4u);
    ctx->pc = 0x18FDE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1907F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_RingAddRead_0x1907f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FDE4u; }
        else if (ctx->pc != 0x18FDE4u) { ctx->pc = 0x18FDE4u; }
    }
    if (ctx->pc != 0x18FDE4u) { return; }
    ctx->pc = 0x18FDE4u;
label_18fde4:
    // 0x18fde4: 0xdfbf0040
    ctx->pc = 0x18fde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18fde8:
    // 0x18fde8: 0xdfb20030
    ctx->pc = 0x18fde8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18fdec:
    // 0x18fdec: 0xdfb10020
    ctx->pc = 0x18fdecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18fdf0:
    // 0x18fdf0: 0xdfb00010
    ctx->pc = 0x18fdf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18fdf4:
    // 0x18fdf4: 0x3e00008
label_18fdf8:
    if (ctx->pc == 0x18FDF8u) {
        ctx->pc = 0x18FDF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x18FDFCu;
        goto label_fallthrough_0x18fdf4;
    }
    ctx->pc = 0x18FDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FDF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FD80u: goto label_18fd80;
            case 0x18FD84u: goto label_18fd84;
            case 0x18FD88u: goto label_18fd88;
            case 0x18FD8Cu: goto label_18fd8c;
            case 0x18FD90u: goto label_18fd90;
            case 0x18FD94u: goto label_18fd94;
            case 0x18FD98u: goto label_18fd98;
            case 0x18FD9Cu: goto label_18fd9c;
            case 0x18FDA0u: goto label_18fda0;
            case 0x18FDA4u: goto label_18fda4;
            case 0x18FDA8u: goto label_18fda8;
            case 0x18FDACu: goto label_18fdac;
            case 0x18FDB0u: goto label_18fdb0;
            case 0x18FDB4u: goto label_18fdb4;
            case 0x18FDB8u: goto label_18fdb8;
            case 0x18FDBCu: goto label_18fdbc;
            case 0x18FDC0u: goto label_18fdc0;
            case 0x18FDC4u: goto label_18fdc4;
            case 0x18FDC8u: goto label_18fdc8;
            case 0x18FDCCu: goto label_18fdcc;
            case 0x18FDD0u: goto label_18fdd0;
            case 0x18FDD4u: goto label_18fdd4;
            case 0x18FDD8u: goto label_18fdd8;
            case 0x18FDDCu: goto label_18fddc;
            case 0x18FDE0u: goto label_18fde0;
            case 0x18FDE4u: goto label_18fde4;
            case 0x18FDE8u: goto label_18fde8;
            case 0x18FDECu: goto label_18fdec;
            case 0x18FDF0u: goto label_18fdf0;
            case 0x18FDF4u: goto label_18fdf4;
            case 0x18FDF8u: goto label_18fdf8;
            default: break;
        }
        return;
    }
label_fallthrough_0x18fdf4:
    ctx->pc = 0x18FDFCu;
}
