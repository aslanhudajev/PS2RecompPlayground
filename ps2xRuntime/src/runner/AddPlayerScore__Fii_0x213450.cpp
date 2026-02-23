#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: AddPlayerScore__Fii
// Address: 0x213450 - 0x213514
void AddPlayerScore__Fii_0x213450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AddPlayerScore__Fii");


    ctx->pc = 0x213450u;

    // 0x213450: 0x41900
    ctx->pc = 0x213450u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x213454: 0x643023
    ctx->pc = 0x213454u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213458: 0x618c0
    ctx->pc = 0x213458u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 3));
    // 0x21345c: 0x661823
    ctx->pc = 0x21345cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x213460: 0x330c0
    ctx->pc = 0x213460u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 3));
    // 0x213464: 0x3c030050
    ctx->pc = 0x213464u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x213468: 0x2463dd20
    ctx->pc = 0x213468u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958368));
    // 0x21346c: 0x661821
    ctx->pc = 0x21346cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x213470: 0x3c010050
    ctx->pc = 0x213470u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x213474: 0x8426e504
    ctx->pc = 0x213474u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x213478: 0x2467000c
    ctx->pc = 0x213478u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 12));
    // 0x21347c: 0x2403000a
    ctx->pc = 0x21347cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x213480: 0x14c3001b
    ctx->pc = 0x213480u;
    {
        const bool branch_taken_0x213480 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        if (branch_taken_0x213480) {
            ctx->pc = 0x2134F0u;
            goto label_2134f0;
        }
    }
    ctx->pc = 0x213488u;
    // 0x213488: 0x8f868bcc
    ctx->pc = 0x213488u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x21348c: 0x24030001
    ctx->pc = 0x21348cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x213490: 0x14c30017
    ctx->pc = 0x213490u;
    {
        const bool branch_taken_0x213490 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x213494u;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x213490) {
            ctx->pc = 0x2134F0u;
            goto label_2134f0;
        }
    }
    ctx->pc = 0x213498u;
    // 0x213498: 0x42080
    ctx->pc = 0x213498u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x21349c: 0x2463fc80
    ctx->pc = 0x21349cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966400));
    // 0x2134a0: 0x641821
    ctx->pc = 0x2134a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2134a4: 0x24060002
    ctx->pc = 0x2134a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2134a8: 0x24680002
    ctx->pc = 0x2134a8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 2));
label_2134ac:
    // 0x2134ac: 0x81040000
    ctx->pc = 0x2134acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2134b0: 0x24030030
    ctx->pc = 0x2134b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2134b4: 0x5083000a
    ctx->pc = 0x2134B4u;
    {
        const bool branch_taken_0x2134b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2134b4) {
            ctx->pc = 0x2134B8u;
            SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
            ctx->pc = 0x2134E0u;
            goto label_2134e0;
        }
    }
    ctx->pc = 0x2134BCu;
    // 0x2134bc: 0x2403002f
    ctx->pc = 0x2134bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
    // 0x2134c0: 0x50830004
    ctx->pc = 0x2134C0u;
    {
        const bool branch_taken_0x2134c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2134c0) {
            ctx->pc = 0x2134C4u;
            SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x2134D4u;
            goto label_2134d4;
        }
    }
    ctx->pc = 0x2134C8u;
    // 0x2134c8: 0x10000006
    ctx->pc = 0x2134C8u;
    {
        const bool branch_taken_0x2134c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2134CCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x2134c8) {
            ctx->pc = 0x2134E4u;
            goto label_2134e4;
        }
    }
    ctx->pc = 0x2134D0u;
    // 0x2134d0: 0x52840
    ctx->pc = 0x2134d0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
label_2134d4:
    // 0x2134d4: 0x10000002
    ctx->pc = 0x2134D4u;
    {
        const bool branch_taken_0x2134d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2134d4) {
            ctx->pc = 0x2134E0u;
            goto label_2134e0;
        }
    }
    ctx->pc = 0x2134DCu;
    // 0x2134dc: 0x52880
    ctx->pc = 0x2134dcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_2134e0:
    // 0x2134e0: 0x24c60001
    ctx->pc = 0x2134e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_2134e4:
    // 0x2134e4: 0x28c10004
    ctx->pc = 0x2134e4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 4));
    // 0x2134e8: 0x1420fff0
    ctx->pc = 0x2134E8u;
    {
        const bool branch_taken_0x2134e8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x2134ECu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x2134e8) {
            ctx->pc = 0x2134ACu;
            goto label_2134ac;
        }
    }
    ctx->pc = 0x2134F0u;
label_2134f0:
    // 0x2134f0: 0x8ce30000
    ctx->pc = 0x2134f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2134f4: 0x651821
    ctx->pc = 0x2134f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2134f8: 0xace30000
    ctx->pc = 0x2134f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2134fc: 0x8ce30000
    ctx->pc = 0x2134fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x213500: 0x4610002
    ctx->pc = 0x213500u;
    {
        const bool branch_taken_0x213500 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x213500) {
            ctx->pc = 0x21350Cu;
            goto label_21350c;
        }
    }
    ctx->pc = 0x213508u;
    // 0x213508: 0xace00000
    ctx->pc = 0x213508u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_21350c:
    // 0x21350c: 0x3e00008
    ctx->pc = 0x21350Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2134ACu: goto label_2134ac;
            case 0x2134D4u: goto label_2134d4;
            case 0x2134E0u: goto label_2134e0;
            case 0x2134E4u: goto label_2134e4;
            case 0x2134F0u: goto label_2134f0;
            case 0x21350Cu: goto label_21350c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213514u;
}
