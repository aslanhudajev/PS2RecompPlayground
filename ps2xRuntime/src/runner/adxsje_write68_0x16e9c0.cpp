#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_write68
// Address: 0x16e9c0 - 0x16eb68
void adxsje_write68_0x16e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_write68");


    ctx->pc = 0x16e9c0u;

label_16e9c0:
    // 0x16e9c0: 0x27bdff90
    ctx->pc = 0x16e9c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_16e9c4:
    // 0x16e9c4: 0xffb30040
    ctx->pc = 0x16e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_16e9c8:
    // 0x16e9c8: 0xffb20030
    ctx->pc = 0x16e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_16e9cc:
    // 0x16e9cc: 0xc0982d
    ctx->pc = 0x16e9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16e9d0:
    // 0x16e9d0: 0xffb40050
    ctx->pc = 0x16e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_16e9d4:
    // 0x16e9d4: 0xa0902d
    ctx->pc = 0x16e9d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e9d8:
    // 0x16e9d8: 0xffb10020
    ctx->pc = 0x16e9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_16e9dc:
    // 0x16e9dc: 0x80a02d
    ctx->pc = 0x16e9dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e9e0:
    // 0x16e9e0: 0xffb00010
    ctx->pc = 0x16e9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16e9e4:
    // 0x16e9e4: 0xe0882d
    ctx->pc = 0x16e9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16e9e8:
    // 0x16e9e8: 0xffbf0060
    ctx->pc = 0x16e9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16e9ec:
    // 0x16e9ec: 0x2538018
    ctx->pc = 0x16e9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
label_16e9f0:
    // 0x16e9f0: 0x220202d
    ctx->pc = 0x16e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e9f4:
    // 0x16e9f4: 0x282d
    ctx->pc = 0x16e9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e9f8:
    // 0x16e9f8: 0x8e220000
    ctx->pc = 0x16e9f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e9fc:
    // 0x16e9fc: 0x3a0382d
    ctx->pc = 0x16e9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16ea00:
    // 0x16ea00: 0x8c430018
    ctx->pc = 0x16ea00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_16ea04:
    // 0x16ea04: 0x60f809
label_16ea08:
    if (ctx->pc == 0x16EA08u) {
        ctx->pc = 0x16EA08u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA0Cu;
        goto label_16ea0c;
    }
    ctx->pc = 0x16EA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16EA0Cu);
        ctx->pc = 0x16EA08u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9C4u: goto label_16e9c4;
            case 0x16E9C8u: goto label_16e9c8;
            case 0x16E9CCu: goto label_16e9cc;
            case 0x16E9D0u: goto label_16e9d0;
            case 0x16E9D4u: goto label_16e9d4;
            case 0x16E9D8u: goto label_16e9d8;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16E9E0u: goto label_16e9e0;
            case 0x16E9E4u: goto label_16e9e4;
            case 0x16E9E8u: goto label_16e9e8;
            case 0x16E9ECu: goto label_16e9ec;
            case 0x16E9F0u: goto label_16e9f0;
            case 0x16E9F4u: goto label_16e9f4;
            case 0x16E9F8u: goto label_16e9f8;
            case 0x16E9FCu: goto label_16e9fc;
            case 0x16EA00u: goto label_16ea00;
            case 0x16EA04u: goto label_16ea04;
            case 0x16EA08u: goto label_16ea08;
            case 0x16EA0Cu: goto label_16ea0c;
            case 0x16EA10u: goto label_16ea10;
            case 0x16EA14u: goto label_16ea14;
            case 0x16EA18u: goto label_16ea18;
            case 0x16EA1Cu: goto label_16ea1c;
            case 0x16EA20u: goto label_16ea20;
            case 0x16EA24u: goto label_16ea24;
            case 0x16EA28u: goto label_16ea28;
            case 0x16EA2Cu: goto label_16ea2c;
            case 0x16EA30u: goto label_16ea30;
            case 0x16EA34u: goto label_16ea34;
            case 0x16EA38u: goto label_16ea38;
            case 0x16EA3Cu: goto label_16ea3c;
            case 0x16EA40u: goto label_16ea40;
            case 0x16EA44u: goto label_16ea44;
            case 0x16EA48u: goto label_16ea48;
            case 0x16EA4Cu: goto label_16ea4c;
            case 0x16EA50u: goto label_16ea50;
            case 0x16EA54u: goto label_16ea54;
            case 0x16EA58u: goto label_16ea58;
            case 0x16EA5Cu: goto label_16ea5c;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EA64u: goto label_16ea64;
            case 0x16EA68u: goto label_16ea68;
            case 0x16EA6Cu: goto label_16ea6c;
            case 0x16EA70u: goto label_16ea70;
            case 0x16EA74u: goto label_16ea74;
            case 0x16EA78u: goto label_16ea78;
            case 0x16EA7Cu: goto label_16ea7c;
            case 0x16EA80u: goto label_16ea80;
            case 0x16EA84u: goto label_16ea84;
            case 0x16EA88u: goto label_16ea88;
            case 0x16EA8Cu: goto label_16ea8c;
            case 0x16EA90u: goto label_16ea90;
            case 0x16EA94u: goto label_16ea94;
            case 0x16EA98u: goto label_16ea98;
            case 0x16EA9Cu: goto label_16ea9c;
            case 0x16EAA0u: goto label_16eaa0;
            case 0x16EAA4u: goto label_16eaa4;
            case 0x16EAA8u: goto label_16eaa8;
            case 0x16EAACu: goto label_16eaac;
            case 0x16EAB0u: goto label_16eab0;
            case 0x16EAB4u: goto label_16eab4;
            case 0x16EAB8u: goto label_16eab8;
            case 0x16EABCu: goto label_16eabc;
            case 0x16EAC0u: goto label_16eac0;
            case 0x16EAC4u: goto label_16eac4;
            case 0x16EAC8u: goto label_16eac8;
            case 0x16EACCu: goto label_16eacc;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EAD4u: goto label_16ead4;
            case 0x16EAD8u: goto label_16ead8;
            case 0x16EADCu: goto label_16eadc;
            case 0x16EAE0u: goto label_16eae0;
            case 0x16EAE4u: goto label_16eae4;
            case 0x16EAE8u: goto label_16eae8;
            case 0x16EAECu: goto label_16eaec;
            case 0x16EAF0u: goto label_16eaf0;
            case 0x16EAF4u: goto label_16eaf4;
            case 0x16EAF8u: goto label_16eaf8;
            case 0x16EAFCu: goto label_16eafc;
            case 0x16EB00u: goto label_16eb00;
            case 0x16EB04u: goto label_16eb04;
            case 0x16EB08u: goto label_16eb08;
            case 0x16EB0Cu: goto label_16eb0c;
            case 0x16EB10u: goto label_16eb10;
            case 0x16EB14u: goto label_16eb14;
            case 0x16EB18u: goto label_16eb18;
            case 0x16EB1Cu: goto label_16eb1c;
            case 0x16EB20u: goto label_16eb20;
            case 0x16EB24u: goto label_16eb24;
            case 0x16EB28u: goto label_16eb28;
            case 0x16EB2Cu: goto label_16eb2c;
            case 0x16EB30u: goto label_16eb30;
            case 0x16EB34u: goto label_16eb34;
            case 0x16EB38u: goto label_16eb38;
            case 0x16EB3Cu: goto label_16eb3c;
            case 0x16EB40u: goto label_16eb40;
            case 0x16EB44u: goto label_16eb44;
            case 0x16EB48u: goto label_16eb48;
            case 0x16EB4Cu: goto label_16eb4c;
            case 0x16EB50u: goto label_16eb50;
            case 0x16EB54u: goto label_16eb54;
            case 0x16EB58u: goto label_16eb58;
            case 0x16EB5Cu: goto label_16eb5c;
            case 0x16EB60u: goto label_16eb60;
            case 0x16EB64u: goto label_16eb64;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EA0Cu; }
            if (ctx->pc != 0x16EA0Cu) { return; }
        }
    }
    ctx->pc = 0x16EA0Cu;
label_16ea0c:
    // 0x16ea0c: 0x8fa20004
    ctx->pc = 0x16ea0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16ea10:
    // 0x16ea10: 0x50102a
    ctx->pc = 0x16ea10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_16ea14:
    // 0x16ea14: 0x10400008
label_16ea18:
    if (ctx->pc == 0x16EA18u) {
        ctx->pc = 0x16EA18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA1Cu;
        goto label_16ea1c;
    }
    ctx->pc = 0x16EA14u;
    {
        const bool branch_taken_0x16ea14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EA18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ea14) {
            ctx->pc = 0x16EA38u;
            goto label_16ea38;
        }
    }
    ctx->pc = 0x16EA1Cu;
label_16ea1c:
    // 0x16ea1c: 0x8e230000
    ctx->pc = 0x16ea1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16ea20:
    // 0x16ea20: 0x282d
    ctx->pc = 0x16ea20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ea24:
    // 0x16ea24: 0x8c62001c
    ctx->pc = 0x16ea24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16ea28:
    // 0x16ea28: 0x40f809
label_16ea2c:
    if (ctx->pc == 0x16EA2Cu) {
        ctx->pc = 0x16EA2Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA30u;
        goto label_16ea30;
    }
    ctx->pc = 0x16EA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16EA30u);
        ctx->pc = 0x16EA2Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9C4u: goto label_16e9c4;
            case 0x16E9C8u: goto label_16e9c8;
            case 0x16E9CCu: goto label_16e9cc;
            case 0x16E9D0u: goto label_16e9d0;
            case 0x16E9D4u: goto label_16e9d4;
            case 0x16E9D8u: goto label_16e9d8;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16E9E0u: goto label_16e9e0;
            case 0x16E9E4u: goto label_16e9e4;
            case 0x16E9E8u: goto label_16e9e8;
            case 0x16E9ECu: goto label_16e9ec;
            case 0x16E9F0u: goto label_16e9f0;
            case 0x16E9F4u: goto label_16e9f4;
            case 0x16E9F8u: goto label_16e9f8;
            case 0x16E9FCu: goto label_16e9fc;
            case 0x16EA00u: goto label_16ea00;
            case 0x16EA04u: goto label_16ea04;
            case 0x16EA08u: goto label_16ea08;
            case 0x16EA0Cu: goto label_16ea0c;
            case 0x16EA10u: goto label_16ea10;
            case 0x16EA14u: goto label_16ea14;
            case 0x16EA18u: goto label_16ea18;
            case 0x16EA1Cu: goto label_16ea1c;
            case 0x16EA20u: goto label_16ea20;
            case 0x16EA24u: goto label_16ea24;
            case 0x16EA28u: goto label_16ea28;
            case 0x16EA2Cu: goto label_16ea2c;
            case 0x16EA30u: goto label_16ea30;
            case 0x16EA34u: goto label_16ea34;
            case 0x16EA38u: goto label_16ea38;
            case 0x16EA3Cu: goto label_16ea3c;
            case 0x16EA40u: goto label_16ea40;
            case 0x16EA44u: goto label_16ea44;
            case 0x16EA48u: goto label_16ea48;
            case 0x16EA4Cu: goto label_16ea4c;
            case 0x16EA50u: goto label_16ea50;
            case 0x16EA54u: goto label_16ea54;
            case 0x16EA58u: goto label_16ea58;
            case 0x16EA5Cu: goto label_16ea5c;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EA64u: goto label_16ea64;
            case 0x16EA68u: goto label_16ea68;
            case 0x16EA6Cu: goto label_16ea6c;
            case 0x16EA70u: goto label_16ea70;
            case 0x16EA74u: goto label_16ea74;
            case 0x16EA78u: goto label_16ea78;
            case 0x16EA7Cu: goto label_16ea7c;
            case 0x16EA80u: goto label_16ea80;
            case 0x16EA84u: goto label_16ea84;
            case 0x16EA88u: goto label_16ea88;
            case 0x16EA8Cu: goto label_16ea8c;
            case 0x16EA90u: goto label_16ea90;
            case 0x16EA94u: goto label_16ea94;
            case 0x16EA98u: goto label_16ea98;
            case 0x16EA9Cu: goto label_16ea9c;
            case 0x16EAA0u: goto label_16eaa0;
            case 0x16EAA4u: goto label_16eaa4;
            case 0x16EAA8u: goto label_16eaa8;
            case 0x16EAACu: goto label_16eaac;
            case 0x16EAB0u: goto label_16eab0;
            case 0x16EAB4u: goto label_16eab4;
            case 0x16EAB8u: goto label_16eab8;
            case 0x16EABCu: goto label_16eabc;
            case 0x16EAC0u: goto label_16eac0;
            case 0x16EAC4u: goto label_16eac4;
            case 0x16EAC8u: goto label_16eac8;
            case 0x16EACCu: goto label_16eacc;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EAD4u: goto label_16ead4;
            case 0x16EAD8u: goto label_16ead8;
            case 0x16EADCu: goto label_16eadc;
            case 0x16EAE0u: goto label_16eae0;
            case 0x16EAE4u: goto label_16eae4;
            case 0x16EAE8u: goto label_16eae8;
            case 0x16EAECu: goto label_16eaec;
            case 0x16EAF0u: goto label_16eaf0;
            case 0x16EAF4u: goto label_16eaf4;
            case 0x16EAF8u: goto label_16eaf8;
            case 0x16EAFCu: goto label_16eafc;
            case 0x16EB00u: goto label_16eb00;
            case 0x16EB04u: goto label_16eb04;
            case 0x16EB08u: goto label_16eb08;
            case 0x16EB0Cu: goto label_16eb0c;
            case 0x16EB10u: goto label_16eb10;
            case 0x16EB14u: goto label_16eb14;
            case 0x16EB18u: goto label_16eb18;
            case 0x16EB1Cu: goto label_16eb1c;
            case 0x16EB20u: goto label_16eb20;
            case 0x16EB24u: goto label_16eb24;
            case 0x16EB28u: goto label_16eb28;
            case 0x16EB2Cu: goto label_16eb2c;
            case 0x16EB30u: goto label_16eb30;
            case 0x16EB34u: goto label_16eb34;
            case 0x16EB38u: goto label_16eb38;
            case 0x16EB3Cu: goto label_16eb3c;
            case 0x16EB40u: goto label_16eb40;
            case 0x16EB44u: goto label_16eb44;
            case 0x16EB48u: goto label_16eb48;
            case 0x16EB4Cu: goto label_16eb4c;
            case 0x16EB50u: goto label_16eb50;
            case 0x16EB54u: goto label_16eb54;
            case 0x16EB58u: goto label_16eb58;
            case 0x16EB5Cu: goto label_16eb5c;
            case 0x16EB60u: goto label_16eb60;
            case 0x16EB64u: goto label_16eb64;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EA30u; }
            if (ctx->pc != 0x16EA30u) { return; }
        }
    }
    ctx->pc = 0x16EA30u;
label_16ea30:
    // 0x16ea30: 0x10000045
label_16ea34:
    if (ctx->pc == 0x16EA34u) {
        ctx->pc = 0x16EA34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA38u;
        goto label_16ea38;
    }
    ctx->pc = 0x16EA30u;
    {
        const bool branch_taken_0x16ea30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EA34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ea30) {
            ctx->pc = 0x16EB48u;
            goto label_16eb48;
        }
    }
    ctx->pc = 0x16EA38u;
label_16ea38:
    // 0x16ea38: 0x24020004
    ctx->pc = 0x16ea38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_16ea3c:
    // 0x16ea3c: 0x16420019
label_16ea40:
    if (ctx->pc == 0x16EA40u) {
        ctx->pc = 0x16EA40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16EA44u;
        goto label_16ea44;
    }
    ctx->pc = 0x16EA3Cu;
    {
        const bool branch_taken_0x16ea3c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x16EA40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x16ea3c) {
            ctx->pc = 0x16EAA4u;
            goto label_16eaa4;
        }
    }
    ctx->pc = 0x16EA44u;
label_16ea44:
    // 0x16ea44: 0x280482d
    ctx->pc = 0x16ea44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16ea48:
    // 0x16ea48: 0x8fa70000
    ctx->pc = 0x16ea48u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16ea4c:
    // 0x16ea4c: 0x1a600037
label_16ea50:
    if (ctx->pc == 0x16EA50u) {
        ctx->pc = 0x16EA50u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EA54u;
        goto label_16ea54;
    }
    ctx->pc = 0x16EA4Cu;
    {
        const bool branch_taken_0x16ea4c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x16EA50u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ea4c) {
            ctx->pc = 0x16EB2Cu;
            goto label_16eb2c;
        }
    }
    ctx->pc = 0x16EA54u;
label_16ea54:
    // 0x16ea54: 0x8e280000
    ctx->pc = 0x16ea54u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16ea58:
    // 0x16ea58: 0x8d240000
    ctx->pc = 0x16ea58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_16ea5c:
    // 0x16ea5c: 0x3c0200ff
    ctx->pc = 0x16ea5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
label_16ea60:
    // 0x16ea60: 0x24c60001
    ctx->pc = 0x16ea60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_16ea64:
    // 0x16ea64: 0x25290004
    ctx->pc = 0x16ea64u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
label_16ea68:
    // 0x16ea68: 0x41a00
    ctx->pc = 0x16ea68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 8));
label_16ea6c:
    // 0x16ea6c: 0x42a03
    ctx->pc = 0x16ea6cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 8));
label_16ea70:
    // 0x16ea70: 0x621824
    ctx->pc = 0x16ea70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16ea74:
    // 0x16ea74: 0x30a5ff00
    ctx->pc = 0x16ea74u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
label_16ea78:
    // 0x16ea78: 0x41602
    ctx->pc = 0x16ea78u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 24));
label_16ea7c:
    // 0x16ea7c: 0x651825
    ctx->pc = 0x16ea7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16ea80:
    // 0x16ea80: 0x42600
    ctx->pc = 0x16ea80u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
label_16ea84:
    // 0x16ea84: 0x441025
    ctx->pc = 0x16ea84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16ea88:
    // 0x16ea88: 0x431025
    ctx->pc = 0x16ea88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16ea8c:
    // 0x16ea8c: 0xd3202a
    ctx->pc = 0x16ea8cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 19)));
label_16ea90:
    // 0x16ea90: 0xace20000
    ctx->pc = 0x16ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_16ea94:
    // 0x16ea94: 0x1480fff0
label_16ea98:
    if (ctx->pc == 0x16EA98u) {
        ctx->pc = 0x16EA98u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x16EA9Cu;
        goto label_16ea9c;
    }
    ctx->pc = 0x16EA94u;
    {
        const bool branch_taken_0x16ea94 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EA98u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x16ea94) {
            ctx->pc = 0x16EA58u;
            goto label_16ea58;
        }
    }
    ctx->pc = 0x16EA9Cu;
label_16ea9c:
    // 0x16ea9c: 0x10000025
label_16eaa0:
    if (ctx->pc == 0x16EAA0u) {
        ctx->pc = 0x16EAA0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->pc = 0x16EAA4u;
        goto label_16eaa4;
    }
    ctx->pc = 0x16EA9Cu;
    {
        const bool branch_taken_0x16ea9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EAA0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 32)));
        if (branch_taken_0x16ea9c) {
            ctx->pc = 0x16EB34u;
            goto label_16eb34;
        }
    }
    ctx->pc = 0x16EAA4u;
label_16eaa4:
    // 0x16eaa4: 0x16420012
label_16eaa8:
    if (ctx->pc == 0x16EAA8u) {
        ctx->pc = 0x16EAA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16EAACu;
        goto label_16eaac;
    }
    ctx->pc = 0x16EAA4u;
    {
        const bool branch_taken_0x16eaa4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x16EAA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16eaa4) {
            ctx->pc = 0x16EAF0u;
            goto label_16eaf0;
        }
    }
    ctx->pc = 0x16EAACu;
label_16eaac:
    // 0x16eaac: 0x280282d
    ctx->pc = 0x16eaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16eab0:
    // 0x16eab0: 0x8fa70000
    ctx->pc = 0x16eab0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16eab4:
    // 0x16eab4: 0x1a60001d
label_16eab8:
    if (ctx->pc == 0x16EAB8u) {
        ctx->pc = 0x16EAB8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EABCu;
        goto label_16eabc;
    }
    ctx->pc = 0x16EAB4u;
    {
        const bool branch_taken_0x16eab4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x16EAB8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16eab4) {
            ctx->pc = 0x16EB2Cu;
            goto label_16eb2c;
        }
    }
    ctx->pc = 0x16EABCu;
label_16eabc:
    // 0x16eabc: 0x8e280000
    ctx->pc = 0x16eabcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16eac0:
    // 0x16eac0: 0x94a20000
    ctx->pc = 0x16eac0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_16eac4:
    // 0x16eac4: 0x24c60001
    ctx->pc = 0x16eac4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_16eac8:
    // 0x16eac8: 0x24a50002
    ctx->pc = 0x16eac8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_16eacc:
    // 0x16eacc: 0xd3202a
    ctx->pc = 0x16eaccu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 19)));
label_16ead0:
    // 0x16ead0: 0x21a00
    ctx->pc = 0x16ead0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_16ead4:
    // 0x16ead4: 0x21202
    ctx->pc = 0x16ead4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_16ead8:
    // 0x16ead8: 0x431025
    ctx->pc = 0x16ead8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16eadc:
    // 0x16eadc: 0xa4e20000
    ctx->pc = 0x16eadcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_16eae0:
    // 0x16eae0: 0x1480fff7
label_16eae4:
    if (ctx->pc == 0x16EAE4u) {
        ctx->pc = 0x16EAE4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x16EAE8u;
        goto label_16eae8;
    }
    ctx->pc = 0x16EAE0u;
    {
        const bool branch_taken_0x16eae0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EAE4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x16eae0) {
            ctx->pc = 0x16EAC0u;
            goto label_16eac0;
        }
    }
    ctx->pc = 0x16EAE8u;
label_16eae8:
    // 0x16eae8: 0x10000012
label_16eaec:
    if (ctx->pc == 0x16EAECu) {
        ctx->pc = 0x16EAECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 32)));
        ctx->pc = 0x16EAF0u;
        goto label_16eaf0;
    }
    ctx->pc = 0x16EAE8u;
    {
        const bool branch_taken_0x16eae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EAECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 32)));
        if (branch_taken_0x16eae8) {
            ctx->pc = 0x16EB34u;
            goto label_16eb34;
        }
    }
    ctx->pc = 0x16EAF0u;
label_16eaf0:
    // 0x16eaf0: 0x16420008
label_16eaf4:
    if (ctx->pc == 0x16EAF4u) {
        ctx->pc = 0x16EAF8u;
        goto label_16eaf8;
    }
    ctx->pc = 0x16EAF0u;
    {
        const bool branch_taken_0x16eaf0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x16eaf0) {
            ctx->pc = 0x16EB14u;
            goto label_16eb14;
        }
    }
    ctx->pc = 0x16EAF8u;
label_16eaf8:
    // 0x16eaf8: 0x8fa40000
    ctx->pc = 0x16eaf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16eafc:
    // 0x16eafc: 0x280282d
    ctx->pc = 0x16eafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16eb00:
    // 0x16eb00: 0xc050c90
label_16eb04:
    if (ctx->pc == 0x16EB04u) {
        ctx->pc = 0x16EB04u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 19), 65535));
        ctx->pc = 0x16EB08u;
        goto label_16eb08;
    }
    ctx->pc = 0x16EB00u;
    SET_GPR_U32(ctx, 31, 0x16EB08u);
    ctx->pc = 0x16EB04u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 19), 65535));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EB08u; }
        else if (ctx->pc != 0x16EB08u) { ctx->pc = 0x16EB08u; }
    }
    if (ctx->pc != 0x16EB08u) { return; }
    ctx->pc = 0x16EB08u;
label_16eb08:
    // 0x16eb08: 0x10000009
label_16eb0c:
    if (ctx->pc == 0x16EB0Cu) {
        ctx->pc = 0x16EB0Cu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16EB10u;
        goto label_16eb10;
    }
    ctx->pc = 0x16EB08u;
    {
        const bool branch_taken_0x16eb08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EB0Cu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x16eb08) {
            ctx->pc = 0x16EB30u;
            goto label_16eb30;
        }
    }
    ctx->pc = 0x16EB10u;
label_16eb10:
    // 0x16eb10: 0x0
    ctx->pc = 0x16eb10u;
    // NOP
label_16eb14:
    // 0x16eb14: 0x0
    ctx->pc = 0x16eb14u;
    // NOP
label_16eb18:
    // 0x16eb18: 0x0
    ctx->pc = 0x16eb18u;
    // NOP
label_16eb1c:
    // 0x16eb1c: 0x0
    ctx->pc = 0x16eb1cu;
    // NOP
label_16eb20:
    // 0x16eb20: 0x0
    ctx->pc = 0x16eb20u;
    // NOP
label_16eb24:
    // 0x16eb24: 0x1000fffa
label_16eb28:
    if (ctx->pc == 0x16EB28u) {
        ctx->pc = 0x16EB2Cu;
        goto label_16eb2c;
    }
    ctx->pc = 0x16EB24u;
    {
        const bool branch_taken_0x16eb24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16eb24) {
            ctx->pc = 0x16EB10u;
            goto label_16eb10;
        }
    }
    ctx->pc = 0x16EB2Cu;
label_16eb2c:
    // 0x16eb2c: 0x8e280000
    ctx->pc = 0x16eb2cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16eb30:
    // 0x16eb30: 0x8d020020
    ctx->pc = 0x16eb30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_16eb34:
    // 0x16eb34: 0x220202d
    ctx->pc = 0x16eb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16eb38:
    // 0x16eb38: 0x24050001
    ctx->pc = 0x16eb38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16eb3c:
    // 0x16eb3c: 0x40f809
label_16eb40:
    if (ctx->pc == 0x16EB40u) {
        ctx->pc = 0x16EB40u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EB44u;
        goto label_16eb44;
    }
    ctx->pc = 0x16EB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16EB44u);
        ctx->pc = 0x16EB40u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9C4u: goto label_16e9c4;
            case 0x16E9C8u: goto label_16e9c8;
            case 0x16E9CCu: goto label_16e9cc;
            case 0x16E9D0u: goto label_16e9d0;
            case 0x16E9D4u: goto label_16e9d4;
            case 0x16E9D8u: goto label_16e9d8;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16E9E0u: goto label_16e9e0;
            case 0x16E9E4u: goto label_16e9e4;
            case 0x16E9E8u: goto label_16e9e8;
            case 0x16E9ECu: goto label_16e9ec;
            case 0x16E9F0u: goto label_16e9f0;
            case 0x16E9F4u: goto label_16e9f4;
            case 0x16E9F8u: goto label_16e9f8;
            case 0x16E9FCu: goto label_16e9fc;
            case 0x16EA00u: goto label_16ea00;
            case 0x16EA04u: goto label_16ea04;
            case 0x16EA08u: goto label_16ea08;
            case 0x16EA0Cu: goto label_16ea0c;
            case 0x16EA10u: goto label_16ea10;
            case 0x16EA14u: goto label_16ea14;
            case 0x16EA18u: goto label_16ea18;
            case 0x16EA1Cu: goto label_16ea1c;
            case 0x16EA20u: goto label_16ea20;
            case 0x16EA24u: goto label_16ea24;
            case 0x16EA28u: goto label_16ea28;
            case 0x16EA2Cu: goto label_16ea2c;
            case 0x16EA30u: goto label_16ea30;
            case 0x16EA34u: goto label_16ea34;
            case 0x16EA38u: goto label_16ea38;
            case 0x16EA3Cu: goto label_16ea3c;
            case 0x16EA40u: goto label_16ea40;
            case 0x16EA44u: goto label_16ea44;
            case 0x16EA48u: goto label_16ea48;
            case 0x16EA4Cu: goto label_16ea4c;
            case 0x16EA50u: goto label_16ea50;
            case 0x16EA54u: goto label_16ea54;
            case 0x16EA58u: goto label_16ea58;
            case 0x16EA5Cu: goto label_16ea5c;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EA64u: goto label_16ea64;
            case 0x16EA68u: goto label_16ea68;
            case 0x16EA6Cu: goto label_16ea6c;
            case 0x16EA70u: goto label_16ea70;
            case 0x16EA74u: goto label_16ea74;
            case 0x16EA78u: goto label_16ea78;
            case 0x16EA7Cu: goto label_16ea7c;
            case 0x16EA80u: goto label_16ea80;
            case 0x16EA84u: goto label_16ea84;
            case 0x16EA88u: goto label_16ea88;
            case 0x16EA8Cu: goto label_16ea8c;
            case 0x16EA90u: goto label_16ea90;
            case 0x16EA94u: goto label_16ea94;
            case 0x16EA98u: goto label_16ea98;
            case 0x16EA9Cu: goto label_16ea9c;
            case 0x16EAA0u: goto label_16eaa0;
            case 0x16EAA4u: goto label_16eaa4;
            case 0x16EAA8u: goto label_16eaa8;
            case 0x16EAACu: goto label_16eaac;
            case 0x16EAB0u: goto label_16eab0;
            case 0x16EAB4u: goto label_16eab4;
            case 0x16EAB8u: goto label_16eab8;
            case 0x16EABCu: goto label_16eabc;
            case 0x16EAC0u: goto label_16eac0;
            case 0x16EAC4u: goto label_16eac4;
            case 0x16EAC8u: goto label_16eac8;
            case 0x16EACCu: goto label_16eacc;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EAD4u: goto label_16ead4;
            case 0x16EAD8u: goto label_16ead8;
            case 0x16EADCu: goto label_16eadc;
            case 0x16EAE0u: goto label_16eae0;
            case 0x16EAE4u: goto label_16eae4;
            case 0x16EAE8u: goto label_16eae8;
            case 0x16EAECu: goto label_16eaec;
            case 0x16EAF0u: goto label_16eaf0;
            case 0x16EAF4u: goto label_16eaf4;
            case 0x16EAF8u: goto label_16eaf8;
            case 0x16EAFCu: goto label_16eafc;
            case 0x16EB00u: goto label_16eb00;
            case 0x16EB04u: goto label_16eb04;
            case 0x16EB08u: goto label_16eb08;
            case 0x16EB0Cu: goto label_16eb0c;
            case 0x16EB10u: goto label_16eb10;
            case 0x16EB14u: goto label_16eb14;
            case 0x16EB18u: goto label_16eb18;
            case 0x16EB1Cu: goto label_16eb1c;
            case 0x16EB20u: goto label_16eb20;
            case 0x16EB24u: goto label_16eb24;
            case 0x16EB28u: goto label_16eb28;
            case 0x16EB2Cu: goto label_16eb2c;
            case 0x16EB30u: goto label_16eb30;
            case 0x16EB34u: goto label_16eb34;
            case 0x16EB38u: goto label_16eb38;
            case 0x16EB3Cu: goto label_16eb3c;
            case 0x16EB40u: goto label_16eb40;
            case 0x16EB44u: goto label_16eb44;
            case 0x16EB48u: goto label_16eb48;
            case 0x16EB4Cu: goto label_16eb4c;
            case 0x16EB50u: goto label_16eb50;
            case 0x16EB54u: goto label_16eb54;
            case 0x16EB58u: goto label_16eb58;
            case 0x16EB5Cu: goto label_16eb5c;
            case 0x16EB60u: goto label_16eb60;
            case 0x16EB64u: goto label_16eb64;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EB44u; }
            if (ctx->pc != 0x16EB44u) { return; }
        }
    }
    ctx->pc = 0x16EB44u;
label_16eb44:
    // 0x16eb44: 0x260102d
    ctx->pc = 0x16eb44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16eb48:
    // 0x16eb48: 0xdfbf0060
    ctx->pc = 0x16eb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16eb4c:
    // 0x16eb4c: 0xdfb40050
    ctx->pc = 0x16eb4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16eb50:
    // 0x16eb50: 0xdfb30040
    ctx->pc = 0x16eb50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16eb54:
    // 0x16eb54: 0xdfb20030
    ctx->pc = 0x16eb54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16eb58:
    // 0x16eb58: 0xdfb10020
    ctx->pc = 0x16eb58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16eb5c:
    // 0x16eb5c: 0xdfb00010
    ctx->pc = 0x16eb5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16eb60:
    // 0x16eb60: 0x3e00008
label_16eb64:
    if (ctx->pc == 0x16EB64u) {
        ctx->pc = 0x16EB64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16EB68u;
        goto label_fallthrough_0x16eb60;
    }
    ctx->pc = 0x16EB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EB64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E9C0u: goto label_16e9c0;
            case 0x16E9C4u: goto label_16e9c4;
            case 0x16E9C8u: goto label_16e9c8;
            case 0x16E9CCu: goto label_16e9cc;
            case 0x16E9D0u: goto label_16e9d0;
            case 0x16E9D4u: goto label_16e9d4;
            case 0x16E9D8u: goto label_16e9d8;
            case 0x16E9DCu: goto label_16e9dc;
            case 0x16E9E0u: goto label_16e9e0;
            case 0x16E9E4u: goto label_16e9e4;
            case 0x16E9E8u: goto label_16e9e8;
            case 0x16E9ECu: goto label_16e9ec;
            case 0x16E9F0u: goto label_16e9f0;
            case 0x16E9F4u: goto label_16e9f4;
            case 0x16E9F8u: goto label_16e9f8;
            case 0x16E9FCu: goto label_16e9fc;
            case 0x16EA00u: goto label_16ea00;
            case 0x16EA04u: goto label_16ea04;
            case 0x16EA08u: goto label_16ea08;
            case 0x16EA0Cu: goto label_16ea0c;
            case 0x16EA10u: goto label_16ea10;
            case 0x16EA14u: goto label_16ea14;
            case 0x16EA18u: goto label_16ea18;
            case 0x16EA1Cu: goto label_16ea1c;
            case 0x16EA20u: goto label_16ea20;
            case 0x16EA24u: goto label_16ea24;
            case 0x16EA28u: goto label_16ea28;
            case 0x16EA2Cu: goto label_16ea2c;
            case 0x16EA30u: goto label_16ea30;
            case 0x16EA34u: goto label_16ea34;
            case 0x16EA38u: goto label_16ea38;
            case 0x16EA3Cu: goto label_16ea3c;
            case 0x16EA40u: goto label_16ea40;
            case 0x16EA44u: goto label_16ea44;
            case 0x16EA48u: goto label_16ea48;
            case 0x16EA4Cu: goto label_16ea4c;
            case 0x16EA50u: goto label_16ea50;
            case 0x16EA54u: goto label_16ea54;
            case 0x16EA58u: goto label_16ea58;
            case 0x16EA5Cu: goto label_16ea5c;
            case 0x16EA60u: goto label_16ea60;
            case 0x16EA64u: goto label_16ea64;
            case 0x16EA68u: goto label_16ea68;
            case 0x16EA6Cu: goto label_16ea6c;
            case 0x16EA70u: goto label_16ea70;
            case 0x16EA74u: goto label_16ea74;
            case 0x16EA78u: goto label_16ea78;
            case 0x16EA7Cu: goto label_16ea7c;
            case 0x16EA80u: goto label_16ea80;
            case 0x16EA84u: goto label_16ea84;
            case 0x16EA88u: goto label_16ea88;
            case 0x16EA8Cu: goto label_16ea8c;
            case 0x16EA90u: goto label_16ea90;
            case 0x16EA94u: goto label_16ea94;
            case 0x16EA98u: goto label_16ea98;
            case 0x16EA9Cu: goto label_16ea9c;
            case 0x16EAA0u: goto label_16eaa0;
            case 0x16EAA4u: goto label_16eaa4;
            case 0x16EAA8u: goto label_16eaa8;
            case 0x16EAACu: goto label_16eaac;
            case 0x16EAB0u: goto label_16eab0;
            case 0x16EAB4u: goto label_16eab4;
            case 0x16EAB8u: goto label_16eab8;
            case 0x16EABCu: goto label_16eabc;
            case 0x16EAC0u: goto label_16eac0;
            case 0x16EAC4u: goto label_16eac4;
            case 0x16EAC8u: goto label_16eac8;
            case 0x16EACCu: goto label_16eacc;
            case 0x16EAD0u: goto label_16ead0;
            case 0x16EAD4u: goto label_16ead4;
            case 0x16EAD8u: goto label_16ead8;
            case 0x16EADCu: goto label_16eadc;
            case 0x16EAE0u: goto label_16eae0;
            case 0x16EAE4u: goto label_16eae4;
            case 0x16EAE8u: goto label_16eae8;
            case 0x16EAECu: goto label_16eaec;
            case 0x16EAF0u: goto label_16eaf0;
            case 0x16EAF4u: goto label_16eaf4;
            case 0x16EAF8u: goto label_16eaf8;
            case 0x16EAFCu: goto label_16eafc;
            case 0x16EB00u: goto label_16eb00;
            case 0x16EB04u: goto label_16eb04;
            case 0x16EB08u: goto label_16eb08;
            case 0x16EB0Cu: goto label_16eb0c;
            case 0x16EB10u: goto label_16eb10;
            case 0x16EB14u: goto label_16eb14;
            case 0x16EB18u: goto label_16eb18;
            case 0x16EB1Cu: goto label_16eb1c;
            case 0x16EB20u: goto label_16eb20;
            case 0x16EB24u: goto label_16eb24;
            case 0x16EB28u: goto label_16eb28;
            case 0x16EB2Cu: goto label_16eb2c;
            case 0x16EB30u: goto label_16eb30;
            case 0x16EB34u: goto label_16eb34;
            case 0x16EB38u: goto label_16eb38;
            case 0x16EB3Cu: goto label_16eb3c;
            case 0x16EB40u: goto label_16eb40;
            case 0x16EB44u: goto label_16eb44;
            case 0x16EB48u: goto label_16eb48;
            case 0x16EB4Cu: goto label_16eb4c;
            case 0x16EB50u: goto label_16eb50;
            case 0x16EB54u: goto label_16eb54;
            case 0x16EB58u: goto label_16eb58;
            case 0x16EB5Cu: goto label_16eb5c;
            case 0x16EB60u: goto label_16eb60;
            case 0x16EB64u: goto label_16eb64;
            default: break;
        }
        return;
    }
label_fallthrough_0x16eb60:
    ctx->pc = 0x16EB68u;
}
