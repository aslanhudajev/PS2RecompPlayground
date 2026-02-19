#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalRegValue
// Address: 0x2b8630 - 0x2b8d78
void evalRegValue_0x2b8630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b8630u;

    // 0x2b8630: 0x27bdff80
    ctx->pc = 0x2b8630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b8634: 0xffbf0070
    ctx->pc = 0x2b8634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b8638: 0xffb60060
    ctx->pc = 0x2b8638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b863c: 0xffb50050
    ctx->pc = 0x2b863cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b8640: 0xffb40040
    ctx->pc = 0x2b8640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b8644: 0xffb30030
    ctx->pc = 0x2b8644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b8648: 0xffb20020
    ctx->pc = 0x2b8648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b864c: 0xffb10010
    ctx->pc = 0x2b864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b8650: 0xffb00000
    ctx->pc = 0x2b8650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8654: 0x80a82d
    ctx->pc = 0x2b8654u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8658: 0xa0b02d
    ctx->pc = 0x2b8658u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b865c: 0xc0902d
    ctx->pc = 0x2b865cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8660: 0x3c040037
    ctx->pc = 0x2b8660u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2b8664: 0x8c8220b0
    ctx->pc = 0x2b8664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8368)));
    // 0x2b8668: 0x3c03ffff
    ctx->pc = 0x2b8668u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2b866c: 0x3463fff1
    ctx->pc = 0x2b866cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65521));
    // 0x2b8670: 0x431024
    ctx->pc = 0x2b8670u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8674: 0xac8220b0
    ctx->pc = 0x2b8674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8368), GPR_U32(ctx, 2));
    // 0x2b8678: 0x82430000
    ctx->pc = 0x2b8678u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b867c: 0x24020049
    ctx->pc = 0x2b867cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 73));
    // 0x2b8680: 0x1062000f
    ctx->pc = 0x2B8680u;
    {
        const bool branch_taken_0x2b8680 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8684u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8680) {
            ctx->pc = 0x2B86C0u;
            goto label_2b86c0;
        }
    }
    ctx->pc = 0x2B8688u;
    // 0x2b8688: 0x2862004a
    ctx->pc = 0x2b8688u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 74));
    // 0x2b868c: 0x10400005
    ctx->pc = 0x2B868Cu;
    {
        const bool branch_taken_0x2b868c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8690u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
        if (branch_taken_0x2b868c) {
            ctx->pc = 0x2B86A4u;
            goto label_2b86a4;
        }
    }
    ctx->pc = 0x2B8694u;
    // 0x2b8694: 0x10620030
    ctx->pc = 0x2B8694u;
    {
        const bool branch_taken_0x2b8694 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8698u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b8694) {
            ctx->pc = 0x2B8758u;
            goto label_2b8758;
        }
    }
    ctx->pc = 0x2B869Cu;
    // 0x2b869c: 0x1000019a
    ctx->pc = 0x2B869Cu;
    {
        const bool branch_taken_0x2b869c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B86A0u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b869c) {
            ctx->pc = 0x2B8D08u;
            goto label_2b8d08;
        }
    }
    ctx->pc = 0x2B86A4u;
label_2b86a4:
    // 0x2b86a4: 0x2402004d
    ctx->pc = 0x2b86a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 77));
    // 0x2b86a8: 0x1062007d
    ctx->pc = 0x2B86A8u;
    {
        const bool branch_taken_0x2b86a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B86ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 86));
        if (branch_taken_0x2b86a8) {
            ctx->pc = 0x2B88A0u;
            goto label_2b88a0;
        }
    }
    ctx->pc = 0x2B86B0u;
    // 0x2b86b0: 0x106200a8
    ctx->pc = 0x2B86B0u;
    {
        const bool branch_taken_0x2b86b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B86B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b86b0) {
            ctx->pc = 0x2B8954u;
            goto label_2b8954;
        }
    }
    ctx->pc = 0x2B86B8u;
    // 0x2b86b8: 0x10000193
    ctx->pc = 0x2B86B8u;
    {
        const bool branch_taken_0x2b86b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B86BCu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b86b8) {
            ctx->pc = 0x2B8D08u;
            goto label_2b8d08;
        }
    }
    ctx->pc = 0x2B86C0u;
label_2b86c0:
    // 0x2b86c0: 0x82340001
    ctx->pc = 0x2b86c0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2b86c4: 0xa2200001
    ctx->pc = 0x2b86c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b86c8: 0x2c0202d
    ctx->pc = 0x2b86c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86cc: 0xc0acc8e
    ctx->pc = 0x2B86CCu;
    SET_GPR_U32(ctx, 31, 0x2B86D4u);
    ctx->pc = 0x2B86D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3238u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1IReg_0x2b3238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86D4u; }
    }
    if (ctx->pc != 0x2B86D4u) { return; }
    ctx->pc = 0x2B86D4u;
    // 0x2b86d4: 0xaea20010
    ctx->pc = 0x2b86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x2b86d8: 0xa2340001
    ctx->pc = 0x2b86d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x2b86dc: 0x3c020037
    ctx->pc = 0x2b86dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b86e0: 0x8c4220b0
    ctx->pc = 0x2b86e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x2b86e4: 0x30420001
    ctx->pc = 0x2b86e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2b86e8: 0x10400013
    ctx->pc = 0x2B86E8u;
    {
        const bool branch_taken_0x2b86e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B86ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b86e8) {
            ctx->pc = 0x2B8738u;
            goto label_2b8738;
        }
    }
    ctx->pc = 0x2B86F0u;
    // 0x2b86f0: 0x3c04003b
    ctx->pc = 0x2b86f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b86f4: 0x248454d8
    ctx->pc = 0x2b86f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21720));
    // 0x2b86f8: 0x3c06003b
    ctx->pc = 0x2b86f8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b86fc: 0x24c60d80
    ctx->pc = 0x2b86fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b8700: 0xc0ad0d6
    ctx->pc = 0x2B8700u;
    SET_GPR_U32(ctx, 31, 0x2B8708u);
    ctx->pc = 0x2B8704u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8708u; }
    }
    if (ctx->pc != 0x2B8708u) { return; }
    ctx->pc = 0x2B8708u;
    // 0x2b8708: 0x3c04003b
    ctx->pc = 0x2b8708u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b870c: 0x24844648
    ctx->pc = 0x2b870cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17992));
    // 0x2b8710: 0xc0b4a34
    ctx->pc = 0x2B8710u;
    SET_GPR_U32(ctx, 31, 0x2B8718u);
    ctx->pc = 0x2B8714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8718u; }
    }
    if (ctx->pc != 0x2B8718u) { return; }
    ctx->pc = 0x2B8718u;
    // 0x2b8718: 0x3c04003b
    ctx->pc = 0x2b8718u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b871c: 0xc0b4a34
    ctx->pc = 0x2B871Cu;
    SET_GPR_U32(ctx, 31, 0x2B8724u);
    ctx->pc = 0x2B8720u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8724u; }
    }
    if (ctx->pc != 0x2B8724u) { return; }
    ctx->pc = 0x2B8724u;
    // 0x2b8724: 0x3c020037
    ctx->pc = 0x2b8724u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b8728: 0x8c4320ac
    ctx->pc = 0x2b8728u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b872c: 0x8c620048
    ctx->pc = 0x2b872cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b8730: 0x34420002
    ctx->pc = 0x2b8730u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2b8734: 0xac620048
    ctx->pc = 0x2b8734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b8738:
    // 0x2b8738: 0x3c020037
    ctx->pc = 0x2b8738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b873c: 0x8c4220b0
    ctx->pc = 0x2b873cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x2b8740: 0x3042000e
    ctx->pc = 0x2b8740u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 14));
    // 0x2b8744: 0x1440016f
    ctx->pc = 0x2B8744u;
    {
        const bool branch_taken_0x2b8744 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B8748u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b8744) {
            ctx->pc = 0x2B8D04u;
            goto label_2b8d04;
        }
    }
    ctx->pc = 0x2B874Cu;
    // 0x2b874c: 0x24020001
    ctx->pc = 0x2b874cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8750: 0x1000017f
    ctx->pc = 0x2B8750u;
    {
        const bool branch_taken_0x2b8750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8754u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b8750) {
            ctx->pc = 0x2B8D50u;
            goto label_2b8d50;
        }
    }
    ctx->pc = 0x2B8758u;
label_2b8758:
    // 0x2b8758: 0x82240000
    ctx->pc = 0x2b8758u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b875c: 0x3c02003c
    ctx->pc = 0x2b875cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b8760: 0x2442a781
    ctx->pc = 0x2b8760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x2b8764: 0x821021
    ctx->pc = 0x2b8764u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b8768: 0x90420000
    ctx->pc = 0x2b8768u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b876c: 0x30420002
    ctx->pc = 0x2b876cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2b8770: 0x2483ffe0
    ctx->pc = 0x2b8770u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x2b8774: 0x62200b
    ctx->pc = 0x2b8774u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2b8778: 0x24020058
    ctx->pc = 0x2b8778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 88));
    // 0x2b877c: 0x1082000e
    ctx->pc = 0x2B877Cu;
    {
        const bool branch_taken_0x2b877c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8780u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 89));
        if (branch_taken_0x2b877c) {
            ctx->pc = 0x2B87B8u;
            goto label_2b87b8;
        }
    }
    ctx->pc = 0x2B8784u;
    // 0x2b8784: 0x10400005
    ctx->pc = 0x2B8784u;
    {
        const bool branch_taken_0x2b8784 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8788u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 87));
        if (branch_taken_0x2b8784) {
            ctx->pc = 0x2B879Cu;
            goto label_2b879c;
        }
    }
    ctx->pc = 0x2B878Cu;
    // 0x2b878c: 0x10820010
    ctx->pc = 0x2B878Cu;
    {
        const bool branch_taken_0x2b878c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8790u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2b878c) {
            ctx->pc = 0x2B87D0u;
            goto label_2b87d0;
        }
    }
    ctx->pc = 0x2B8794u;
    // 0x2b8794: 0x1000000f
    ctx->pc = 0x2B8794u;
    {
        const bool branch_taken_0x2b8794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b8794) {
            ctx->pc = 0x2B87D4u;
            goto label_2b87d4;
        }
    }
    ctx->pc = 0x2B879Cu;
label_2b879c:
    // 0x2b879c: 0x24020059
    ctx->pc = 0x2b879cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 89));
    // 0x2b87a0: 0x10820007
    ctx->pc = 0x2B87A0u;
    {
        const bool branch_taken_0x2b87a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B87A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
        if (branch_taken_0x2b87a0) {
            ctx->pc = 0x2B87C0u;
            goto label_2b87c0;
        }
    }
    ctx->pc = 0x2B87A8u;
    // 0x2b87a8: 0x10820007
    ctx->pc = 0x2B87A8u;
    {
        const bool branch_taken_0x2b87a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B87ACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2b87a8) {
            ctx->pc = 0x2B87C8u;
            goto label_2b87c8;
        }
    }
    ctx->pc = 0x2B87B0u;
    // 0x2b87b0: 0x10000008
    ctx->pc = 0x2B87B0u;
    {
        const bool branch_taken_0x2b87b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b87b0) {
            ctx->pc = 0x2B87D4u;
            goto label_2b87d4;
        }
    }
    ctx->pc = 0x2B87B8u;
label_2b87b8:
    // 0x2b87b8: 0x10000006
    ctx->pc = 0x2B87B8u;
    {
        const bool branch_taken_0x2b87b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B87BCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b87b8) {
            ctx->pc = 0x2B87D4u;
            goto label_2b87d4;
        }
    }
    ctx->pc = 0x2B87C0u;
label_2b87c0:
    // 0x2b87c0: 0x10000004
    ctx->pc = 0x2B87C0u;
    {
        const bool branch_taken_0x2b87c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B87C4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b87c0) {
            ctx->pc = 0x2B87D4u;
            goto label_2b87d4;
        }
    }
    ctx->pc = 0x2B87C8u;
label_2b87c8:
    // 0x2b87c8: 0x10000002
    ctx->pc = 0x2B87C8u;
    {
        const bool branch_taken_0x2b87c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B87CCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2b87c8) {
            ctx->pc = 0x2B87D4u;
            goto label_2b87d4;
        }
    }
    ctx->pc = 0x2B87D0u;
label_2b87d0:
    // 0x2b87d0: 0x24100003
    ctx->pc = 0x2b87d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
label_2b87d4:
    // 0x2b87d4: 0x6030014
    ctx->pc = 0x2B87D4u;
    {
        const bool branch_taken_0x2b87d4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2b87d4) {
            ctx->pc = 0x2B87D8u;
            SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B8828u;
            goto label_2b8828;
        }
    }
    ctx->pc = 0x2B87DCu;
    // 0x2b87dc: 0x3c04003b
    ctx->pc = 0x2b87dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b87e0: 0x24844650
    ctx->pc = 0x2b87e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b87e4: 0x24050020
    ctx->pc = 0x2b87e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b87e8: 0x3c06003b
    ctx->pc = 0x2b87e8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b87ec: 0x24c60d80
    ctx->pc = 0x2b87ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b87f0: 0xc0ad0d6
    ctx->pc = 0x2B87F0u;
    SET_GPR_U32(ctx, 31, 0x2B87F8u);
    ctx->pc = 0x2B87F4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B87F8u; }
    }
    if (ctx->pc != 0x2B87F8u) { return; }
    ctx->pc = 0x2B87F8u;
    // 0x2b87f8: 0x3c04003b
    ctx->pc = 0x2b87f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b87fc: 0xc0b4a34
    ctx->pc = 0x2B87FCu;
    SET_GPR_U32(ctx, 31, 0x2B8804u);
    ctx->pc = 0x2B8800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21736));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8804u; }
    }
    if (ctx->pc != 0x2B8804u) { return; }
    ctx->pc = 0x2B8804u;
    // 0x2b8804: 0x3c04003b
    ctx->pc = 0x2b8804u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8808: 0xc0b4a34
    ctx->pc = 0x2B8808u;
    SET_GPR_U32(ctx, 31, 0x2B8810u);
    ctx->pc = 0x2B880Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8810u; }
    }
    if (ctx->pc != 0x2B8810u) { return; }
    ctx->pc = 0x2B8810u;
    // 0x2b8810: 0x3c020037
    ctx->pc = 0x2b8810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b8814: 0x8c4320ac
    ctx->pc = 0x2b8814u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b8818: 0x8c620048
    ctx->pc = 0x2b8818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b881c: 0x34420001
    ctx->pc = 0x2b881cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b8820: 0x10000137
    ctx->pc = 0x2B8820u;
    {
        const bool branch_taken_0x2b8820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8824u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x2b8820) {
            ctx->pc = 0x2B8D00u;
            goto label_2b8d00;
        }
    }
    ctx->pc = 0x2B8828u;
label_2b8828:
    // 0x2b8828: 0xa2200000
    ctx->pc = 0x2b8828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b882c: 0x2c0202d
    ctx->pc = 0x2b882cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8830: 0x240282d
    ctx->pc = 0x2b8830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8834: 0xc0acca0
    ctx->pc = 0x2B8834u;
    SET_GPR_U32(ctx, 31, 0x2B883Cu);
    ctx->pc = 0x2B8838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3280u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1FReg_0x2b3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B883Cu; }
    }
    if (ctx->pc != 0x2B883Cu) { return; }
    ctx->pc = 0x2B883Cu;
    // 0x2b883c: 0xe6a00010
    ctx->pc = 0x2b883cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x2b8840: 0x3c130037
    ctx->pc = 0x2b8840u;
    SET_GPR_U32(ctx, 19, ((uint32_t)55 << 16));
    // 0x2b8844: 0x8e6220b0
    ctx->pc = 0x2b8844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8368)));
    // 0x2b8848: 0x3042000e
    ctx->pc = 0x2b8848u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 14));
    // 0x2b884c: 0x104000de
    ctx->pc = 0x2B884Cu;
    {
        const bool branch_taken_0x2b884c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8850u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 86));
        if (branch_taken_0x2b884c) {
            ctx->pc = 0x2B8BC8u;
            goto label_2b8bc8;
        }
    }
    ctx->pc = 0x2B8854u;
    // 0x2b8854: 0xa2420000
    ctx->pc = 0x2b8854u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8858: 0x8e6220b0
    ctx->pc = 0x2b8858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8368)));
    // 0x2b885c: 0x3c03ffff
    ctx->pc = 0x2b885cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2b8860: 0x3463fff1
    ctx->pc = 0x2b8860u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65521));
    // 0x2b8864: 0x431024
    ctx->pc = 0x2b8864u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8868: 0xae6220b0
    ctx->pc = 0x2b8868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8368), GPR_U32(ctx, 2));
    // 0x2b886c: 0x2c0202d
    ctx->pc = 0x2b886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8870: 0x240282d
    ctx->pc = 0x2b8870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8874: 0xc0acca0
    ctx->pc = 0x2B8874u;
    SET_GPR_U32(ctx, 31, 0x2B887Cu);
    ctx->pc = 0x2B8878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3280u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1FReg_0x2b3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B887Cu; }
    }
    if (ctx->pc != 0x2B887Cu) { return; }
    ctx->pc = 0x2B887Cu;
    // 0x2b887c: 0xe6a00010
    ctx->pc = 0x2b887cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x2b8880: 0x24020046
    ctx->pc = 0x2b8880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b8884: 0xa2420000
    ctx->pc = 0x2b8884u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8888: 0x8e6220b0
    ctx->pc = 0x2b8888u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8368)));
    // 0x2b888c: 0x3042000e
    ctx->pc = 0x2b888cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 14));
    // 0x2b8890: 0x104000ce
    ctx->pc = 0x2B8890u;
    {
        const bool branch_taken_0x2b8890 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8894u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b8890) {
            ctx->pc = 0x2B8BCCu;
            goto label_2b8bcc;
        }
    }
    ctx->pc = 0x2B8898u;
    // 0x2b8898: 0x10000119
    ctx->pc = 0x2B8898u;
    {
        const bool branch_taken_0x2b8898 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B889Cu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 20));
        if (branch_taken_0x2b8898) {
            ctx->pc = 0x2B8D00u;
            goto label_2b8d00;
        }
    }
    ctx->pc = 0x2B88A0u;
label_2b88a0:
    // 0x2b88a0: 0x82340001
    ctx->pc = 0x2b88a0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2b88a4: 0x82300002
    ctx->pc = 0x2b88a4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b88a8: 0xa2200002
    ctx->pc = 0x2b88a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b88ac: 0x182d
    ctx->pc = 0x2b88acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b88b0:
    // 0x2b88b0: 0x24620030
    ctx->pc = 0x2b88b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 48));
    // 0x2b88b4: 0xa2220001
    ctx->pc = 0x2b88b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b88b8: 0x24630001
    ctx->pc = 0x2b88b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b88bc: 0x28620004
    ctx->pc = 0x2b88bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x2b88c0: 0x0
    ctx->pc = 0x2b88c0u;
    // NOP
    // 0x2b88c4: 0x1440fffa
    ctx->pc = 0x2B88C4u;
    {
        const bool branch_taken_0x2b88c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b88c4) {
            ctx->pc = 0x2B88B0u;
            goto label_2b88b0;
        }
    }
    ctx->pc = 0x2B88CCu;
    // 0x2b88cc: 0xa2340001
    ctx->pc = 0x2b88ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x2b88d0: 0x3c020037
    ctx->pc = 0x2b88d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b88d4: 0x8c4220b0
    ctx->pc = 0x2b88d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x2b88d8: 0x30420001
    ctx->pc = 0x2b88d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2b88dc: 0x10400014
    ctx->pc = 0x2B88DCu;
    {
        const bool branch_taken_0x2b88dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B88E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b88dc) {
            ctx->pc = 0x2B8930u;
            goto label_2b8930;
        }
    }
    ctx->pc = 0x2B88E4u;
    // 0x2b88e4: 0x3c04003b
    ctx->pc = 0x2b88e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b88e8: 0x248454d8
    ctx->pc = 0x2b88e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21720));
    // 0x2b88ec: 0x3c06003b
    ctx->pc = 0x2b88ecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b88f0: 0x24c60d80
    ctx->pc = 0x2b88f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b88f4: 0xc0ad0d6
    ctx->pc = 0x2B88F4u;
    SET_GPR_U32(ctx, 31, 0x2B88FCu);
    ctx->pc = 0x2B88F8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B88FCu; }
    }
    if (ctx->pc != 0x2B88FCu) { return; }
    ctx->pc = 0x2B88FCu;
    // 0x2b88fc: 0x3c04003b
    ctx->pc = 0x2b88fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8900: 0x24844648
    ctx->pc = 0x2b8900u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17992));
    // 0x2b8904: 0xc0b4a34
    ctx->pc = 0x2B8904u;
    SET_GPR_U32(ctx, 31, 0x2B890Cu);
    ctx->pc = 0x2B8908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B890Cu; }
    }
    if (ctx->pc != 0x2B890Cu) { return; }
    ctx->pc = 0x2B890Cu;
    // 0x2b890c: 0x3c04003b
    ctx->pc = 0x2b890cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8910: 0xc0b4a34
    ctx->pc = 0x2B8910u;
    SET_GPR_U32(ctx, 31, 0x2B8918u);
    ctx->pc = 0x2B8914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8918u; }
    }
    if (ctx->pc != 0x2B8918u) { return; }
    ctx->pc = 0x2B8918u;
    // 0x2b8918: 0x3c020037
    ctx->pc = 0x2b8918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b891c: 0x8c4320ac
    ctx->pc = 0x2b891cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b8920: 0x8c620048
    ctx->pc = 0x2b8920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b8924: 0x34420002
    ctx->pc = 0x2b8924u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2b8928: 0xac620048
    ctx->pc = 0x2b8928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2b892c: 0x0
    ctx->pc = 0x2b892cu;
    // NOP
label_2b8930:
    // 0x2b8930: 0xa2300002
    ctx->pc = 0x2b8930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x2b8934: 0x3c020037
    ctx->pc = 0x2b8934u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b8938: 0x8c4220b0
    ctx->pc = 0x2b8938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x2b893c: 0x3042000e
    ctx->pc = 0x2b893cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 14));
    // 0x2b8940: 0x144000f0
    ctx->pc = 0x2B8940u;
    {
        const bool branch_taken_0x2b8940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B8944u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b8940) {
            ctx->pc = 0x2B8D04u;
            goto label_2b8d04;
        }
    }
    ctx->pc = 0x2B8948u;
    // 0x2b8948: 0x24020003
    ctx->pc = 0x2b8948u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b894c: 0x10000100
    ctx->pc = 0x2B894Cu;
    {
        const bool branch_taken_0x2b894c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8950u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b894c) {
            ctx->pc = 0x2B8D50u;
            goto label_2b8d50;
        }
    }
    ctx->pc = 0x2B8954u;
label_2b8954:
    // 0x2b8954: 0x82430002
    ctx->pc = 0x2b8954u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b8958: 0x3c02003c
    ctx->pc = 0x2b8958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b895c: 0x2445a781
    ctx->pc = 0x2b895cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x2b8960: 0x651021
    ctx->pc = 0x2b8960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b8964: 0x90420000
    ctx->pc = 0x2b8964u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8968: 0x30420004
    ctx->pc = 0x2b8968u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2b896c: 0x50400059
    ctx->pc = 0x2B896Cu;
    {
        const bool branch_taken_0x2b896c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b896c) {
            ctx->pc = 0x2B8970u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B8AD4u;
            goto label_2b8ad4;
        }
    }
    ctx->pc = 0x2B8974u;
    // 0x2b8974: 0x82440003
    ctx->pc = 0x2b8974u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2b8978: 0x851021
    ctx->pc = 0x2b8978u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b897c: 0x90420000
    ctx->pc = 0x2b897cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8980: 0x30420004
    ctx->pc = 0x2b8980u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2b8984: 0x10400052
    ctx->pc = 0x2B8984u;
    {
        const bool branch_taken_0x2b8984 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8988u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967248));
        if (branch_taken_0x2b8984) {
            ctx->pc = 0x2B8AD0u;
            goto label_2b8ad0;
        }
    }
    ctx->pc = 0x2B898Cu;
    // 0x2b898c: 0x2402000a
    ctx->pc = 0x2b898cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b8990: 0x621818
    ctx->pc = 0x2b8990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b8994: 0x2463ffd0
    ctx->pc = 0x2b8994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2b8998: 0x641821
    ctx->pc = 0x2b8998u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b899c: 0x82440001
    ctx->pc = 0x2b899cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2b89a0: 0x24020046
    ctx->pc = 0x2b89a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b89a4: 0x10820010
    ctx->pc = 0x2B89A4u;
    {
        const bool branch_taken_0x2b89a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B89A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 73));
        if (branch_taken_0x2b89a4) {
            ctx->pc = 0x2B89E8u;
            goto label_2b89e8;
        }
    }
    ctx->pc = 0x2B89ACu;
    // 0x2b89ac: 0x54820049
    ctx->pc = 0x2B89ACu;
    {
        const bool branch_taken_0x2b89ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b89ac) {
            ctx->pc = 0x2B89B0u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B8AD4u;
            goto label_2b8ad4;
        }
    }
    ctx->pc = 0x2B89B4u;
    // 0x2b89b4: 0x28620010
    ctx->pc = 0x2b89b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
    // 0x2b89b8: 0x10400045
    ctx->pc = 0x2B89B8u;
    {
        const bool branch_taken_0x2b89b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B89BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 3));
        if (branch_taken_0x2b89b8) {
            ctx->pc = 0x2B8AD0u;
            goto label_2b8ad0;
        }
    }
    ctx->pc = 0x2B89C0u;
    // 0x2b89c0: 0x56220044
    ctx->pc = 0x2B89C0u;
    {
        const bool branch_taken_0x2b89c0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b89c0) {
            ctx->pc = 0x2B89C4u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B8AD4u;
            goto label_2b8ad4;
        }
    }
    ctx->pc = 0x2B89C8u;
    // 0x2b89c8: 0x24020001
    ctx->pc = 0x2b89c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b89cc: 0xaea20000
    ctx->pc = 0x2b89ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2b89d0: 0x8ec20004
    ctx->pc = 0x2b89d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2b89d4: 0x31840
    ctx->pc = 0x2b89d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b89d8: 0x431021
    ctx->pc = 0x2b89d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b89dc: 0x94420220
    ctx->pc = 0x2b89dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x2b89e0: 0x100000db
    ctx->pc = 0x2B89E0u;
    {
        const bool branch_taken_0x2b89e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B89E4u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b89e0) {
            ctx->pc = 0x2B8D50u;
            goto label_2b8d50;
        }
    }
    ctx->pc = 0x2B89E8u;
label_2b89e8:
    // 0x2b89e8: 0x28620020
    ctx->pc = 0x2b89e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
    // 0x2b89ec: 0x10400038
    ctx->pc = 0x2B89ECu;
    {
        const bool branch_taken_0x2b89ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B89F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x2b89ec) {
            ctx->pc = 0x2B8AD0u;
            goto label_2b8ad0;
        }
    }
    ctx->pc = 0x2B89F4u;
    // 0x2b89f4: 0x16220024
    ctx->pc = 0x2B89F4u;
    {
        const bool branch_taken_0x2b89f4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B89F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 3));
        if (branch_taken_0x2b89f4) {
            ctx->pc = 0x2B8A88u;
            goto label_2b8a88;
        }
    }
    ctx->pc = 0x2B89FCu;
    // 0x2b89fc: 0x82440004
    ctx->pc = 0x2b89fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b8a00: 0x24020078
    ctx->pc = 0x2b8a00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
    // 0x2b8a04: 0x1082000e
    ctx->pc = 0x2B8A04u;
    {
        const bool branch_taken_0x2b8a04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8A08u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 121));
        if (branch_taken_0x2b8a04) {
            ctx->pc = 0x2B8A40u;
            goto label_2b8a40;
        }
    }
    ctx->pc = 0x2B8A0Cu;
    // 0x2b8a0c: 0x10400005
    ctx->pc = 0x2B8A0Cu;
    {
        const bool branch_taken_0x2b8a0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8A10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 119));
        if (branch_taken_0x2b8a0c) {
            ctx->pc = 0x2B8A24u;
            goto label_2b8a24;
        }
    }
    ctx->pc = 0x2B8A14u;
    // 0x2b8a14: 0x10820010
    ctx->pc = 0x2B8A14u;
    {
        const bool branch_taken_0x2b8a14 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8A18u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2b8a14) {
            ctx->pc = 0x2B8A58u;
            goto label_2b8a58;
        }
    }
    ctx->pc = 0x2B8A1Cu;
    // 0x2b8a1c: 0x10000010
    ctx->pc = 0x2B8A1Cu;
    {
        const bool branch_taken_0x2b8a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8A20u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
        if (branch_taken_0x2b8a1c) {
            ctx->pc = 0x2B8A60u;
            goto label_2b8a60;
        }
    }
    ctx->pc = 0x2B8A24u;
label_2b8a24:
    // 0x2b8a24: 0x24020079
    ctx->pc = 0x2b8a24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 121));
    // 0x2b8a28: 0x10820007
    ctx->pc = 0x2B8A28u;
    {
        const bool branch_taken_0x2b8a28 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8A2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 122));
        if (branch_taken_0x2b8a28) {
            ctx->pc = 0x2B8A48u;
            goto label_2b8a48;
        }
    }
    ctx->pc = 0x2B8A30u;
    // 0x2b8a30: 0x10820007
    ctx->pc = 0x2B8A30u;
    {
        const bool branch_taken_0x2b8a30 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8A34u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2b8a30) {
            ctx->pc = 0x2B8A50u;
            goto label_2b8a50;
        }
    }
    ctx->pc = 0x2B8A38u;
    // 0x2b8a38: 0x10000009
    ctx->pc = 0x2B8A38u;
    {
        const bool branch_taken_0x2b8a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8A3Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
        if (branch_taken_0x2b8a38) {
            ctx->pc = 0x2B8A60u;
            goto label_2b8a60;
        }
    }
    ctx->pc = 0x2B8A40u;
label_2b8a40:
    // 0x2b8a40: 0x10000006
    ctx->pc = 0x2B8A40u;
    {
        const bool branch_taken_0x2b8a40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8A44u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8a40) {
            ctx->pc = 0x2B8A5Cu;
            goto label_2b8a5c;
        }
    }
    ctx->pc = 0x2B8A48u;
label_2b8a48:
    // 0x2b8a48: 0x10000004
    ctx->pc = 0x2B8A48u;
    {
        const bool branch_taken_0x2b8a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8A4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b8a48) {
            ctx->pc = 0x2B8A5Cu;
            goto label_2b8a5c;
        }
    }
    ctx->pc = 0x2B8A50u;
label_2b8a50:
    // 0x2b8a50: 0x10000002
    ctx->pc = 0x2B8A50u;
    {
        const bool branch_taken_0x2b8a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8A54u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2b8a50) {
            ctx->pc = 0x2B8A5Cu;
            goto label_2b8a5c;
        }
    }
    ctx->pc = 0x2B8A58u;
label_2b8a58:
    // 0x2b8a58: 0x24100003
    ctx->pc = 0x2b8a58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
label_2b8a5c:
    // 0x2b8a5c: 0x2a020004
    ctx->pc = 0x2b8a5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_2b8a60:
    // 0x2b8a60: 0x1040001b
    ctx->pc = 0x2B8A60u;
    {
        const bool branch_taken_0x2b8a60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8A64u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2b8a60) {
            ctx->pc = 0x2B8AD0u;
            goto label_2b8ad0;
        }
    }
    ctx->pc = 0x2B8A68u;
    // 0x2b8a68: 0xaea00000
    ctx->pc = 0x2b8a68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x2b8a6c: 0x8ec40004
    ctx->pc = 0x2b8a6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2b8a70: 0x31900
    ctx->pc = 0x2b8a70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b8a74: 0x431021
    ctx->pc = 0x2b8a74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8a78: 0x822021
    ctx->pc = 0x2b8a78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b8a7c: 0xc4800020
    ctx->pc = 0x2b8a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8a80: 0x100000b3
    ctx->pc = 0x2B8A80u;
    {
        const bool branch_taken_0x2b8a80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8A84u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        if (branch_taken_0x2b8a80) {
            ctx->pc = 0x2B8D50u;
            goto label_2b8d50;
        }
    }
    ctx->pc = 0x2B8A88u;
label_2b8a88:
    // 0x2b8a88: 0x56220012
    ctx->pc = 0x2B8A88u;
    {
        const bool branch_taken_0x2b8a88 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b8a88) {
            ctx->pc = 0x2B8A8Cu;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B8AD4u;
            goto label_2b8ad4;
        }
    }
    ctx->pc = 0x2B8A90u;
    // 0x2b8a90: 0x802d
    ctx->pc = 0x2b8a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a94: 0x26a60010
    ctx->pc = 0x2b8a94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 16));
    // 0x2b8a98: 0x32900
    ctx->pc = 0x2b8a98u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b8a9c: 0x0
    ctx->pc = 0x2b8a9cu;
    // NOP
label_2b8aa0:
    // 0x2b8aa0: 0x101880
    ctx->pc = 0x2b8aa0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b8aa4: 0xc32021
    ctx->pc = 0x2b8aa4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b8aa8: 0x8ec20004
    ctx->pc = 0x2b8aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2b8aac: 0x651821
    ctx->pc = 0x2b8aacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b8ab0: 0x431021
    ctx->pc = 0x2b8ab0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8ab4: 0xc4400020
    ctx->pc = 0x2b8ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8ab8: 0x26100001
    ctx->pc = 0x2b8ab8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b8abc: 0x2a020004
    ctx->pc = 0x2b8abcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2b8ac0: 0x1440fff7
    ctx->pc = 0x2B8AC0u;
    {
        const bool branch_taken_0x2b8ac0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B8AC4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x2b8ac0) {
            ctx->pc = 0x2B8AA0u;
            goto label_2b8aa0;
        }
    }
    ctx->pc = 0x2B8AC8u;
    // 0x2b8ac8: 0x1000008b
    ctx->pc = 0x2B8AC8u;
    {
        const bool branch_taken_0x2b8ac8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8ACCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2b8ac8) {
            ctx->pc = 0x2B8CF8u;
            goto label_2b8cf8;
        }
    }
    ctx->pc = 0x2B8AD0u;
label_2b8ad0:
    // 0x2b8ad0: 0x82240000
    ctx->pc = 0x2b8ad0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2b8ad4:
    // 0x2b8ad4: 0x3c02003c
    ctx->pc = 0x2b8ad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b8ad8: 0x2442a781
    ctx->pc = 0x2b8ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x2b8adc: 0x821021
    ctx->pc = 0x2b8adcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b8ae0: 0x90420000
    ctx->pc = 0x2b8ae0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8ae4: 0x30420002
    ctx->pc = 0x2b8ae4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2b8ae8: 0x2483ffe0
    ctx->pc = 0x2b8ae8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x2b8aec: 0x62200b
    ctx->pc = 0x2b8aecu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2b8af0: 0x24020058
    ctx->pc = 0x2b8af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 88));
    // 0x2b8af4: 0x1082000e
    ctx->pc = 0x2B8AF4u;
    {
        const bool branch_taken_0x2b8af4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8AF8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 89));
        if (branch_taken_0x2b8af4) {
            ctx->pc = 0x2B8B30u;
            goto label_2b8b30;
        }
    }
    ctx->pc = 0x2B8AFCu;
    // 0x2b8afc: 0x10400005
    ctx->pc = 0x2B8AFCu;
    {
        const bool branch_taken_0x2b8afc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8B00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 87));
        if (branch_taken_0x2b8afc) {
            ctx->pc = 0x2B8B14u;
            goto label_2b8b14;
        }
    }
    ctx->pc = 0x2B8B04u;
    // 0x2b8b04: 0x10820010
    ctx->pc = 0x2B8B04u;
    {
        const bool branch_taken_0x2b8b04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8B08u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2b8b04) {
            ctx->pc = 0x2B8B48u;
            goto label_2b8b48;
        }
    }
    ctx->pc = 0x2B8B0Cu;
    // 0x2b8b0c: 0x10000010
    ctx->pc = 0x2B8B0Cu;
    {
        const bool branch_taken_0x2b8b0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8B10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2b8b0c) {
            ctx->pc = 0x2B8B50u;
            goto label_2b8b50;
        }
    }
    ctx->pc = 0x2B8B14u;
label_2b8b14:
    // 0x2b8b14: 0x24020059
    ctx->pc = 0x2b8b14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 89));
    // 0x2b8b18: 0x10820007
    ctx->pc = 0x2B8B18u;
    {
        const bool branch_taken_0x2b8b18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8B1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
        if (branch_taken_0x2b8b18) {
            ctx->pc = 0x2B8B38u;
            goto label_2b8b38;
        }
    }
    ctx->pc = 0x2B8B20u;
    // 0x2b8b20: 0x10820007
    ctx->pc = 0x2B8B20u;
    {
        const bool branch_taken_0x2b8b20 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8B24u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2b8b20) {
            ctx->pc = 0x2B8B40u;
            goto label_2b8b40;
        }
    }
    ctx->pc = 0x2B8B28u;
    // 0x2b8b28: 0x10000009
    ctx->pc = 0x2B8B28u;
    {
        const bool branch_taken_0x2b8b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8B2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2b8b28) {
            ctx->pc = 0x2B8B50u;
            goto label_2b8b50;
        }
    }
    ctx->pc = 0x2B8B30u;
label_2b8b30:
    // 0x2b8b30: 0x10000006
    ctx->pc = 0x2B8B30u;
    {
        const bool branch_taken_0x2b8b30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8B34u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8b30) {
            ctx->pc = 0x2B8B4Cu;
            goto label_2b8b4c;
        }
    }
    ctx->pc = 0x2B8B38u;
label_2b8b38:
    // 0x2b8b38: 0x10000004
    ctx->pc = 0x2B8B38u;
    {
        const bool branch_taken_0x2b8b38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8B3Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b8b38) {
            ctx->pc = 0x2B8B4Cu;
            goto label_2b8b4c;
        }
    }
    ctx->pc = 0x2B8B40u;
label_2b8b40:
    // 0x2b8b40: 0x10000002
    ctx->pc = 0x2B8B40u;
    {
        const bool branch_taken_0x2b8b40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8B44u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2b8b40) {
            ctx->pc = 0x2B8B4Cu;
            goto label_2b8b4c;
        }
    }
    ctx->pc = 0x2B8B48u;
label_2b8b48:
    // 0x2b8b48: 0x24100003
    ctx->pc = 0x2b8b48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
label_2b8b4c:
    // 0x2b8b4c: 0x2402ffff
    ctx->pc = 0x2b8b4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b8b50:
    // 0x2b8b50: 0x1202003d
    ctx->pc = 0x2B8B50u;
    {
        const bool branch_taken_0x2b8b50 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B8B54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8b50) {
            ctx->pc = 0x2B8C48u;
            goto label_2b8c48;
        }
    }
    ctx->pc = 0x2B8B58u;
    // 0x2b8b58: 0x82340000
    ctx->pc = 0x2b8b58u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b8b5c: 0xa2200000
    ctx->pc = 0x2b8b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8b60: 0x240282d
    ctx->pc = 0x2b8b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b64: 0xc0acca0
    ctx->pc = 0x2B8B64u;
    SET_GPR_U32(ctx, 31, 0x2B8B6Cu);
    ctx->pc = 0x2B8B68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3280u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1FReg_0x2b3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8B6Cu; }
    }
    if (ctx->pc != 0x2B8B6Cu) { return; }
    ctx->pc = 0x2B8B6Cu;
    // 0x2b8b6c: 0xe6a00010
    ctx->pc = 0x2b8b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x2b8b70: 0x3c130037
    ctx->pc = 0x2b8b70u;
    SET_GPR_U32(ctx, 19, ((uint32_t)55 << 16));
    // 0x2b8b74: 0x8e6220b0
    ctx->pc = 0x2b8b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8368)));
    // 0x2b8b78: 0x3042000e
    ctx->pc = 0x2b8b78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 14));
    // 0x2b8b7c: 0x10400012
    ctx->pc = 0x2B8B7Cu;
    {
        const bool branch_taken_0x2b8b7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8B80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 70));
        if (branch_taken_0x2b8b7c) {
            ctx->pc = 0x2B8BC8u;
            goto label_2b8bc8;
        }
    }
    ctx->pc = 0x2B8B84u;
    // 0x2b8b84: 0xa2420000
    ctx->pc = 0x2b8b84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8b88: 0x8e6220b0
    ctx->pc = 0x2b8b88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8368)));
    // 0x2b8b8c: 0x3c03ffff
    ctx->pc = 0x2b8b8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2b8b90: 0x3463fff1
    ctx->pc = 0x2b8b90u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65521));
    // 0x2b8b94: 0x431024
    ctx->pc = 0x2b8b94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8b98: 0xae6220b0
    ctx->pc = 0x2b8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8368), GPR_U32(ctx, 2));
    // 0x2b8b9c: 0x2c0202d
    ctx->pc = 0x2b8b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ba0: 0x240282d
    ctx->pc = 0x2b8ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ba4: 0xc0acca0
    ctx->pc = 0x2B8BA4u;
    SET_GPR_U32(ctx, 31, 0x2B8BACu);
    ctx->pc = 0x2B8BA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3280u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1FReg_0x2b3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BACu; }
    }
    if (ctx->pc != 0x2B8BACu) { return; }
    ctx->pc = 0x2B8BACu;
    // 0x2b8bac: 0xe6a00010
    ctx->pc = 0x2b8bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x2b8bb0: 0x24020056
    ctx->pc = 0x2b8bb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 86));
    // 0x2b8bb4: 0xa2420000
    ctx->pc = 0x2b8bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8bb8: 0x8e6220b0
    ctx->pc = 0x2b8bb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8368)));
    // 0x2b8bbc: 0x3042000e
    ctx->pc = 0x2b8bbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 14));
    // 0x2b8bc0: 0x5440001b
    ctx->pc = 0x2B8BC0u;
    {
        const bool branch_taken_0x2b8bc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b8bc0) {
            ctx->pc = 0x2B8BC4u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->pc = 0x2B8C30u;
            goto label_2b8c30;
        }
    }
    ctx->pc = 0x2B8BC8u;
label_2b8bc8:
    // 0x2b8bc8: 0x3c020037
    ctx->pc = 0x2b8bc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b8bcc:
    // 0x2b8bcc: 0x8c4220b0
    ctx->pc = 0x2b8bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x2b8bd0: 0x30420001
    ctx->pc = 0x2b8bd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2b8bd4: 0x10400013
    ctx->pc = 0x2B8BD4u;
    {
        const bool branch_taken_0x2b8bd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8BD8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b8bd4) {
            ctx->pc = 0x2B8C24u;
            goto label_2b8c24;
        }
    }
    ctx->pc = 0x2B8BDCu;
    // 0x2b8bdc: 0x3c04003b
    ctx->pc = 0x2b8bdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8be0: 0x248454d8
    ctx->pc = 0x2b8be0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21720));
    // 0x2b8be4: 0x3c06003b
    ctx->pc = 0x2b8be4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b8be8: 0x24c60d80
    ctx->pc = 0x2b8be8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b8bec: 0xc0ad0d6
    ctx->pc = 0x2B8BECu;
    SET_GPR_U32(ctx, 31, 0x2B8BF4u);
    ctx->pc = 0x2B8BF0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BF4u; }
    }
    if (ctx->pc != 0x2B8BF4u) { return; }
    ctx->pc = 0x2B8BF4u;
    // 0x2b8bf4: 0x3c04003b
    ctx->pc = 0x2b8bf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8bf8: 0x24844648
    ctx->pc = 0x2b8bf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17992));
    // 0x2b8bfc: 0xc0b4a34
    ctx->pc = 0x2B8BFCu;
    SET_GPR_U32(ctx, 31, 0x2B8C04u);
    ctx->pc = 0x2B8C00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C04u; }
    }
    if (ctx->pc != 0x2B8C04u) { return; }
    ctx->pc = 0x2B8C04u;
    // 0x2b8c04: 0x3c04003b
    ctx->pc = 0x2b8c04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8c08: 0xc0b4a34
    ctx->pc = 0x2B8C08u;
    SET_GPR_U32(ctx, 31, 0x2B8C10u);
    ctx->pc = 0x2B8C0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C10u; }
    }
    if (ctx->pc != 0x2B8C10u) { return; }
    ctx->pc = 0x2B8C10u;
    // 0x2b8c10: 0x3c020037
    ctx->pc = 0x2b8c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b8c14: 0x8c4320ac
    ctx->pc = 0x2b8c14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b8c18: 0x8c620048
    ctx->pc = 0x2b8c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b8c1c: 0x34420002
    ctx->pc = 0x2b8c1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2b8c20: 0xac620048
    ctx->pc = 0x2b8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b8c24:
    // 0x2b8c24: 0xa2340000
    ctx->pc = 0x2b8c24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x2b8c28: 0x10000049
    ctx->pc = 0x2B8C28u;
    {
        const bool branch_taken_0x2b8c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8C2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2b8c28) {
            ctx->pc = 0x2B8D50u;
            goto label_2b8d50;
        }
    }
    ctx->pc = 0x2B8C30u;
label_2b8c30:
    // 0x2b8c30: 0x3c020037
    ctx->pc = 0x2b8c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b8c34: 0x8c4320b0
    ctx->pc = 0x2b8c34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x2b8c38: 0x3c04ffff
    ctx->pc = 0x2b8c38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2b8c3c: 0x3484fff1
    ctx->pc = 0x2b8c3cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65521));
    // 0x2b8c40: 0x641824
    ctx->pc = 0x2b8c40u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b8c44: 0xac4320b0
    ctx->pc = 0x2b8c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8368), GPR_U32(ctx, 3));
label_2b8c48:
    // 0x2b8c48: 0x82340001
    ctx->pc = 0x2b8c48u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2b8c4c: 0xa2200001
    ctx->pc = 0x2b8c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8c50: 0x802d
    ctx->pc = 0x2b8c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c54: 0x26b30010
    ctx->pc = 0x2b8c54u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 21), 16));
    // 0x2b8c58: 0x2c0202d
    ctx->pc = 0x2b8c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c5c: 0x0
    ctx->pc = 0x2b8c5cu;
    // NOP
label_2b8c60:
    // 0x2b8c60: 0x240282d
    ctx->pc = 0x2b8c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c64: 0xc0acca0
    ctx->pc = 0x2B8C64u;
    SET_GPR_U32(ctx, 31, 0x2B8C6Cu);
    ctx->pc = 0x2B8C68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3280u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1FReg_0x2b3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C6Cu; }
    }
    if (ctx->pc != 0x2B8C6Cu) { return; }
    ctx->pc = 0x2B8C6Cu;
    // 0x2b8c6c: 0x101080
    ctx->pc = 0x2b8c6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b8c70: 0x2621021
    ctx->pc = 0x2b8c70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2b8c74: 0xe4400000
    ctx->pc = 0x2b8c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b8c78: 0x26100001
    ctx->pc = 0x2b8c78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b8c7c: 0x2a020004
    ctx->pc = 0x2b8c7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2b8c80: 0x1440fff7
    ctx->pc = 0x2B8C80u;
    {
        const bool branch_taken_0x2b8c80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B8C84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8c80) {
            ctx->pc = 0x2B8C60u;
            goto label_2b8c60;
        }
    }
    ctx->pc = 0x2B8C88u;
    // 0x2b8c88: 0xa2340001
    ctx->pc = 0x2b8c88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x2b8c8c: 0x3c020037
    ctx->pc = 0x2b8c8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b8c90: 0x8c4320b0
    ctx->pc = 0x2b8c90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x2b8c94: 0x3062000e
    ctx->pc = 0x2b8c94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 14));
    // 0x2b8c98: 0x1440001a
    ctx->pc = 0x2B8C98u;
    {
        const bool branch_taken_0x2b8c98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B8C9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b8c98) {
            ctx->pc = 0x2B8D04u;
            goto label_2b8d04;
        }
    }
    ctx->pc = 0x2B8CA0u;
    // 0x2b8ca0: 0x30620001
    ctx->pc = 0x2b8ca0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2b8ca4: 0x10400013
    ctx->pc = 0x2B8CA4u;
    {
        const bool branch_taken_0x2b8ca4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8CA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b8ca4) {
            ctx->pc = 0x2B8CF4u;
            goto label_2b8cf4;
        }
    }
    ctx->pc = 0x2B8CACu;
    // 0x2b8cac: 0x3c04003b
    ctx->pc = 0x2b8cacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8cb0: 0x248454d8
    ctx->pc = 0x2b8cb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21720));
    // 0x2b8cb4: 0x3c06003b
    ctx->pc = 0x2b8cb4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b8cb8: 0x24c60d80
    ctx->pc = 0x2b8cb8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b8cbc: 0xc0ad0d6
    ctx->pc = 0x2B8CBCu;
    SET_GPR_U32(ctx, 31, 0x2B8CC4u);
    ctx->pc = 0x2B8CC0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CC4u; }
    }
    if (ctx->pc != 0x2B8CC4u) { return; }
    ctx->pc = 0x2B8CC4u;
    // 0x2b8cc4: 0x3c04003b
    ctx->pc = 0x2b8cc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8cc8: 0x24844648
    ctx->pc = 0x2b8cc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17992));
    // 0x2b8ccc: 0xc0b4a34
    ctx->pc = 0x2B8CCCu;
    SET_GPR_U32(ctx, 31, 0x2B8CD4u);
    ctx->pc = 0x2B8CD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CD4u; }
    }
    if (ctx->pc != 0x2B8CD4u) { return; }
    ctx->pc = 0x2B8CD4u;
    // 0x2b8cd4: 0x3c04003b
    ctx->pc = 0x2b8cd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8cd8: 0xc0b4a34
    ctx->pc = 0x2B8CD8u;
    SET_GPR_U32(ctx, 31, 0x2B8CE0u);
    ctx->pc = 0x2B8CDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CE0u; }
    }
    if (ctx->pc != 0x2B8CE0u) { return; }
    ctx->pc = 0x2B8CE0u;
    // 0x2b8ce0: 0x3c020037
    ctx->pc = 0x2b8ce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b8ce4: 0x8c4320ac
    ctx->pc = 0x2b8ce4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b8ce8: 0x8c620048
    ctx->pc = 0x2b8ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b8cec: 0x34420002
    ctx->pc = 0x2b8cecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2b8cf0: 0xac620048
    ctx->pc = 0x2b8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b8cf4:
    // 0x2b8cf4: 0x24020002
    ctx->pc = 0x2b8cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2b8cf8:
    // 0x2b8cf8: 0x10000015
    ctx->pc = 0x2B8CF8u;
    {
        const bool branch_taken_0x2b8cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8CFCu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b8cf8) {
            ctx->pc = 0x2B8D50u;
            goto label_2b8d50;
        }
    }
    ctx->pc = 0x2B8D00u;
label_2b8d00:
    // 0x2b8d00: 0x24020020
    ctx->pc = 0x2b8d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2b8d04:
    // 0x2b8d04: 0xaea20000
    ctx->pc = 0x2b8d04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2b8d08:
    // 0x2b8d08: 0x3c04003b
    ctx->pc = 0x2b8d08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8d0c: 0x24844650
    ctx->pc = 0x2b8d0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b8d10: 0x24050020
    ctx->pc = 0x2b8d10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b8d14: 0x3c06003b
    ctx->pc = 0x2b8d14u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b8d18: 0x24c60d80
    ctx->pc = 0x2b8d18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b8d1c: 0xc0ad0d6
    ctx->pc = 0x2B8D1Cu;
    SET_GPR_U32(ctx, 31, 0x2B8D24u);
    ctx->pc = 0x2B8D20u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D24u; }
    }
    if (ctx->pc != 0x2B8D24u) { return; }
    ctx->pc = 0x2B8D24u;
    // 0x2b8d24: 0x3c04003b
    ctx->pc = 0x2b8d24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8d28: 0xc0b4a34
    ctx->pc = 0x2B8D28u;
    SET_GPR_U32(ctx, 31, 0x2B8D30u);
    ctx->pc = 0x2B8D2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21768));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D30u; }
    }
    if (ctx->pc != 0x2B8D30u) { return; }
    ctx->pc = 0x2B8D30u;
    // 0x2b8d30: 0x3c04003b
    ctx->pc = 0x2b8d30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8d34: 0xc0b4a34
    ctx->pc = 0x2B8D34u;
    SET_GPR_U32(ctx, 31, 0x2B8D3Cu);
    ctx->pc = 0x2B8D38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D3Cu; }
    }
    if (ctx->pc != 0x2B8D3Cu) { return; }
    ctx->pc = 0x2B8D3Cu;
    // 0x2b8d3c: 0x3c020037
    ctx->pc = 0x2b8d3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b8d40: 0x8c4320ac
    ctx->pc = 0x2b8d40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b8d44: 0x8c620048
    ctx->pc = 0x2b8d44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b8d48: 0x34420001
    ctx->pc = 0x2b8d48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b8d4c: 0xac620048
    ctx->pc = 0x2b8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b8d50:
    // 0x2b8d50: 0xdfbf0070
    ctx->pc = 0x2b8d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b8d54: 0xdfb60060
    ctx->pc = 0x2b8d54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b8d58: 0xdfb50050
    ctx->pc = 0x2b8d58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8d5c: 0xdfb40040
    ctx->pc = 0x2b8d5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b8d60: 0xdfb30030
    ctx->pc = 0x2b8d60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8d64: 0xdfb20020
    ctx->pc = 0x2b8d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8d68: 0xdfb10010
    ctx->pc = 0x2b8d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8d6c: 0xdfb00000
    ctx->pc = 0x2b8d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8d70: 0x3e00008
    ctx->pc = 0x2B8D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8D74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B86A4u: goto label_2b86a4;
            case 0x2B86C0u: goto label_2b86c0;
            case 0x2B8738u: goto label_2b8738;
            case 0x2B8758u: goto label_2b8758;
            case 0x2B879Cu: goto label_2b879c;
            case 0x2B87B8u: goto label_2b87b8;
            case 0x2B87C0u: goto label_2b87c0;
            case 0x2B87C8u: goto label_2b87c8;
            case 0x2B87D0u: goto label_2b87d0;
            case 0x2B87D4u: goto label_2b87d4;
            case 0x2B8828u: goto label_2b8828;
            case 0x2B88A0u: goto label_2b88a0;
            case 0x2B88B0u: goto label_2b88b0;
            case 0x2B8930u: goto label_2b8930;
            case 0x2B8954u: goto label_2b8954;
            case 0x2B89E8u: goto label_2b89e8;
            case 0x2B8A24u: goto label_2b8a24;
            case 0x2B8A40u: goto label_2b8a40;
            case 0x2B8A48u: goto label_2b8a48;
            case 0x2B8A50u: goto label_2b8a50;
            case 0x2B8A58u: goto label_2b8a58;
            case 0x2B8A5Cu: goto label_2b8a5c;
            case 0x2B8A60u: goto label_2b8a60;
            case 0x2B8A88u: goto label_2b8a88;
            case 0x2B8AA0u: goto label_2b8aa0;
            case 0x2B8AD0u: goto label_2b8ad0;
            case 0x2B8AD4u: goto label_2b8ad4;
            case 0x2B8B14u: goto label_2b8b14;
            case 0x2B8B30u: goto label_2b8b30;
            case 0x2B8B38u: goto label_2b8b38;
            case 0x2B8B40u: goto label_2b8b40;
            case 0x2B8B48u: goto label_2b8b48;
            case 0x2B8B4Cu: goto label_2b8b4c;
            case 0x2B8B50u: goto label_2b8b50;
            case 0x2B8BC8u: goto label_2b8bc8;
            case 0x2B8BCCu: goto label_2b8bcc;
            case 0x2B8C24u: goto label_2b8c24;
            case 0x2B8C30u: goto label_2b8c30;
            case 0x2B8C48u: goto label_2b8c48;
            case 0x2B8C60u: goto label_2b8c60;
            case 0x2B8CF4u: goto label_2b8cf4;
            case 0x2B8CF8u: goto label_2b8cf8;
            case 0x2B8D00u: goto label_2b8d00;
            case 0x2B8D04u: goto label_2b8d04;
            case 0x2B8D08u: goto label_2b8d08;
            case 0x2B8D50u: goto label_2b8d50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B8D78u;
}
