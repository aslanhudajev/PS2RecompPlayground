#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_ExecHndl
// Address: 0x17ba30 - 0x17bb74
void PS2RNA_ExecHndl_0x17ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_ExecHndl");


    ctx->pc = 0x17ba30u;

label_17ba30:
    // 0x17ba30: 0x27bdff90
    ctx->pc = 0x17ba30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_17ba34:
    // 0x17ba34: 0x24020001
    ctx->pc = 0x17ba34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17ba38:
    // 0x17ba38: 0xffb20030
    ctx->pc = 0x17ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_17ba3c:
    // 0x17ba3c: 0xffbf0060
    ctx->pc = 0x17ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_17ba40:
    // 0x17ba40: 0x80902d
    ctx->pc = 0x17ba40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17ba44:
    // 0x17ba44: 0xffb40050
    ctx->pc = 0x17ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_17ba48:
    // 0x17ba48: 0xffb30040
    ctx->pc = 0x17ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_17ba4c:
    // 0x17ba4c: 0xffb10020
    ctx->pc = 0x17ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_17ba50:
    // 0x17ba50: 0xffb00010
    ctx->pc = 0x17ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_17ba54:
    // 0x17ba54: 0x82430024
    ctx->pc = 0x17ba54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_17ba58:
    // 0x17ba58: 0x1462003f
label_17ba5c:
    if (ctx->pc == 0x17BA5Cu) {
        ctx->pc = 0x17BA5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x17BA60u;
        goto label_17ba60;
    }
    ctx->pc = 0x17BA58u;
    {
        const bool branch_taken_0x17ba58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17BA5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x17ba58) {
            ctx->pc = 0x17BB58u;
            goto label_17bb58;
        }
    }
    ctx->pc = 0x17BA60u;
label_17ba60:
    // 0x17ba60: 0x82420048
    ctx->pc = 0x17ba60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 72)));
label_17ba64:
    // 0x17ba64: 0x1443003d
label_17ba68:
    if (ctx->pc == 0x17BA68u) {
        ctx->pc = 0x17BA68u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x17BA6Cu;
        goto label_17ba6c;
    }
    ctx->pc = 0x17BA64u;
    {
        const bool branch_taken_0x17ba64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17BA68u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x17ba64) {
            ctx->pc = 0x17BB5Cu;
            goto label_17bb5c;
        }
    }
    ctx->pc = 0x17BA6Cu;
label_17ba6c:
    // 0x17ba6c: 0x8e440018
    ctx->pc = 0x17ba6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_17ba70:
    // 0x17ba70: 0x8c830000
    ctx->pc = 0x17ba70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ba74:
    // 0x17ba74: 0x8c620024
    ctx->pc = 0x17ba74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17ba78:
    // 0x17ba78: 0x40f809
label_17ba7c:
    if (ctx->pc == 0x17BA7Cu) {
        ctx->pc = 0x17BA7Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17BA80u;
        goto label_17ba80;
    }
    ctx->pc = 0x17BA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BA80u);
        ctx->pc = 0x17BA7Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BA30u: goto label_17ba30;
            case 0x17BA34u: goto label_17ba34;
            case 0x17BA38u: goto label_17ba38;
            case 0x17BA3Cu: goto label_17ba3c;
            case 0x17BA40u: goto label_17ba40;
            case 0x17BA44u: goto label_17ba44;
            case 0x17BA48u: goto label_17ba48;
            case 0x17BA4Cu: goto label_17ba4c;
            case 0x17BA50u: goto label_17ba50;
            case 0x17BA54u: goto label_17ba54;
            case 0x17BA58u: goto label_17ba58;
            case 0x17BA5Cu: goto label_17ba5c;
            case 0x17BA60u: goto label_17ba60;
            case 0x17BA64u: goto label_17ba64;
            case 0x17BA68u: goto label_17ba68;
            case 0x17BA6Cu: goto label_17ba6c;
            case 0x17BA70u: goto label_17ba70;
            case 0x17BA74u: goto label_17ba74;
            case 0x17BA78u: goto label_17ba78;
            case 0x17BA7Cu: goto label_17ba7c;
            case 0x17BA80u: goto label_17ba80;
            case 0x17BA84u: goto label_17ba84;
            case 0x17BA88u: goto label_17ba88;
            case 0x17BA8Cu: goto label_17ba8c;
            case 0x17BA90u: goto label_17ba90;
            case 0x17BA94u: goto label_17ba94;
            case 0x17BA98u: goto label_17ba98;
            case 0x17BA9Cu: goto label_17ba9c;
            case 0x17BAA0u: goto label_17baa0;
            case 0x17BAA4u: goto label_17baa4;
            case 0x17BAA8u: goto label_17baa8;
            case 0x17BAACu: goto label_17baac;
            case 0x17BAB0u: goto label_17bab0;
            case 0x17BAB4u: goto label_17bab4;
            case 0x17BAB8u: goto label_17bab8;
            case 0x17BABCu: goto label_17babc;
            case 0x17BAC0u: goto label_17bac0;
            case 0x17BAC4u: goto label_17bac4;
            case 0x17BAC8u: goto label_17bac8;
            case 0x17BACCu: goto label_17bacc;
            case 0x17BAD0u: goto label_17bad0;
            case 0x17BAD4u: goto label_17bad4;
            case 0x17BAD8u: goto label_17bad8;
            case 0x17BADCu: goto label_17badc;
            case 0x17BAE0u: goto label_17bae0;
            case 0x17BAE4u: goto label_17bae4;
            case 0x17BAE8u: goto label_17bae8;
            case 0x17BAECu: goto label_17baec;
            case 0x17BAF0u: goto label_17baf0;
            case 0x17BAF4u: goto label_17baf4;
            case 0x17BAF8u: goto label_17baf8;
            case 0x17BAFCu: goto label_17bafc;
            case 0x17BB00u: goto label_17bb00;
            case 0x17BB04u: goto label_17bb04;
            case 0x17BB08u: goto label_17bb08;
            case 0x17BB0Cu: goto label_17bb0c;
            case 0x17BB10u: goto label_17bb10;
            case 0x17BB14u: goto label_17bb14;
            case 0x17BB18u: goto label_17bb18;
            case 0x17BB1Cu: goto label_17bb1c;
            case 0x17BB20u: goto label_17bb20;
            case 0x17BB24u: goto label_17bb24;
            case 0x17BB28u: goto label_17bb28;
            case 0x17BB2Cu: goto label_17bb2c;
            case 0x17BB30u: goto label_17bb30;
            case 0x17BB34u: goto label_17bb34;
            case 0x17BB38u: goto label_17bb38;
            case 0x17BB3Cu: goto label_17bb3c;
            case 0x17BB40u: goto label_17bb40;
            case 0x17BB44u: goto label_17bb44;
            case 0x17BB48u: goto label_17bb48;
            case 0x17BB4Cu: goto label_17bb4c;
            case 0x17BB50u: goto label_17bb50;
            case 0x17BB54u: goto label_17bb54;
            case 0x17BB58u: goto label_17bb58;
            case 0x17BB5Cu: goto label_17bb5c;
            case 0x17BB60u: goto label_17bb60;
            case 0x17BB64u: goto label_17bb64;
            case 0x17BB68u: goto label_17bb68;
            case 0x17BB6Cu: goto label_17bb6c;
            case 0x17BB70u: goto label_17bb70;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BA80u; }
            if (ctx->pc != 0x17BA80u) { return; }
        }
    }
    ctx->pc = 0x17BA80u;
label_17ba80:
    // 0x17ba80: 0x40302d
    ctx->pc = 0x17ba80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ba84:
    // 0x17ba84: 0x24c2ffff
    ctx->pc = 0x17ba84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
label_17ba88:
    // 0x17ba88: 0x2c42003f
    ctx->pc = 0x17ba88u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 63));
label_17ba8c:
    // 0x17ba8c: 0x10400031
label_17ba90:
    if (ctx->pc == 0x17BA90u) {
        ctx->pc = 0x17BA90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        ctx->pc = 0x17BA94u;
        goto label_17ba94;
    }
    ctx->pc = 0x17BA8Cu;
    {
        const bool branch_taken_0x17ba8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17BA90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x17ba8c) {
            ctx->pc = 0x17BB54u;
            goto label_17bb54;
        }
    }
    ctx->pc = 0x17BA94u;
label_17ba94:
    // 0x17ba94: 0x8e430004
    ctx->pc = 0x17ba94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17ba98:
    // 0x17ba98: 0x469823
    ctx->pc = 0x17ba98u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17ba9c:
    // 0x17ba9c: 0x1860002d
label_17baa0:
    if (ctx->pc == 0x17BAA0u) {
        ctx->pc = 0x17BAA0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BAA4u;
        goto label_17baa4;
    }
    ctx->pc = 0x17BA9Cu;
    {
        const bool branch_taken_0x17ba9c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17BAA0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17ba9c) {
            ctx->pc = 0x17BB54u;
            goto label_17bb54;
        }
    }
    ctx->pc = 0x17BAA4u;
label_17baa4:
    // 0x17baa4: 0x26540018
    ctx->pc = 0x17baa4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 24));
label_17baa8:
    // 0x17baa8: 0x118080
    ctx->pc = 0x17baa8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
label_17baac:
    // 0x17baac: 0x0
    ctx->pc = 0x17baacu;
    // NOP
label_17bab0:
    // 0x17bab0: 0x282d
    ctx->pc = 0x17bab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bab4:
    // 0x17bab4: 0x2908021
    ctx->pc = 0x17bab4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_17bab8:
    // 0x17bab8: 0x260302d
    ctx->pc = 0x17bab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17babc:
    // 0x17babc: 0x8e040000
    ctx->pc = 0x17babcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17bac0:
    // 0x17bac0: 0x3a0382d
    ctx->pc = 0x17bac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17bac4:
    // 0x17bac4: 0x8c830000
    ctx->pc = 0x17bac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bac8:
    // 0x17bac8: 0x8c620018
    ctx->pc = 0x17bac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_17bacc:
    // 0x17bacc: 0x40f809
label_17bad0:
    if (ctx->pc == 0x17BAD0u) {
        ctx->pc = 0x17BAD0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x17BAD4u;
        goto label_17bad4;
    }
    ctx->pc = 0x17BACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BAD4u);
        ctx->pc = 0x17BAD0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BA30u: goto label_17ba30;
            case 0x17BA34u: goto label_17ba34;
            case 0x17BA38u: goto label_17ba38;
            case 0x17BA3Cu: goto label_17ba3c;
            case 0x17BA40u: goto label_17ba40;
            case 0x17BA44u: goto label_17ba44;
            case 0x17BA48u: goto label_17ba48;
            case 0x17BA4Cu: goto label_17ba4c;
            case 0x17BA50u: goto label_17ba50;
            case 0x17BA54u: goto label_17ba54;
            case 0x17BA58u: goto label_17ba58;
            case 0x17BA5Cu: goto label_17ba5c;
            case 0x17BA60u: goto label_17ba60;
            case 0x17BA64u: goto label_17ba64;
            case 0x17BA68u: goto label_17ba68;
            case 0x17BA6Cu: goto label_17ba6c;
            case 0x17BA70u: goto label_17ba70;
            case 0x17BA74u: goto label_17ba74;
            case 0x17BA78u: goto label_17ba78;
            case 0x17BA7Cu: goto label_17ba7c;
            case 0x17BA80u: goto label_17ba80;
            case 0x17BA84u: goto label_17ba84;
            case 0x17BA88u: goto label_17ba88;
            case 0x17BA8Cu: goto label_17ba8c;
            case 0x17BA90u: goto label_17ba90;
            case 0x17BA94u: goto label_17ba94;
            case 0x17BA98u: goto label_17ba98;
            case 0x17BA9Cu: goto label_17ba9c;
            case 0x17BAA0u: goto label_17baa0;
            case 0x17BAA4u: goto label_17baa4;
            case 0x17BAA8u: goto label_17baa8;
            case 0x17BAACu: goto label_17baac;
            case 0x17BAB0u: goto label_17bab0;
            case 0x17BAB4u: goto label_17bab4;
            case 0x17BAB8u: goto label_17bab8;
            case 0x17BABCu: goto label_17babc;
            case 0x17BAC0u: goto label_17bac0;
            case 0x17BAC4u: goto label_17bac4;
            case 0x17BAC8u: goto label_17bac8;
            case 0x17BACCu: goto label_17bacc;
            case 0x17BAD0u: goto label_17bad0;
            case 0x17BAD4u: goto label_17bad4;
            case 0x17BAD8u: goto label_17bad8;
            case 0x17BADCu: goto label_17badc;
            case 0x17BAE0u: goto label_17bae0;
            case 0x17BAE4u: goto label_17bae4;
            case 0x17BAE8u: goto label_17bae8;
            case 0x17BAECu: goto label_17baec;
            case 0x17BAF0u: goto label_17baf0;
            case 0x17BAF4u: goto label_17baf4;
            case 0x17BAF8u: goto label_17baf8;
            case 0x17BAFCu: goto label_17bafc;
            case 0x17BB00u: goto label_17bb00;
            case 0x17BB04u: goto label_17bb04;
            case 0x17BB08u: goto label_17bb08;
            case 0x17BB0Cu: goto label_17bb0c;
            case 0x17BB10u: goto label_17bb10;
            case 0x17BB14u: goto label_17bb14;
            case 0x17BB18u: goto label_17bb18;
            case 0x17BB1Cu: goto label_17bb1c;
            case 0x17BB20u: goto label_17bb20;
            case 0x17BB24u: goto label_17bb24;
            case 0x17BB28u: goto label_17bb28;
            case 0x17BB2Cu: goto label_17bb2c;
            case 0x17BB30u: goto label_17bb30;
            case 0x17BB34u: goto label_17bb34;
            case 0x17BB38u: goto label_17bb38;
            case 0x17BB3Cu: goto label_17bb3c;
            case 0x17BB40u: goto label_17bb40;
            case 0x17BB44u: goto label_17bb44;
            case 0x17BB48u: goto label_17bb48;
            case 0x17BB4Cu: goto label_17bb4c;
            case 0x17BB50u: goto label_17bb50;
            case 0x17BB54u: goto label_17bb54;
            case 0x17BB58u: goto label_17bb58;
            case 0x17BB5Cu: goto label_17bb5c;
            case 0x17BB60u: goto label_17bb60;
            case 0x17BB64u: goto label_17bb64;
            case 0x17BB68u: goto label_17bb68;
            case 0x17BB6Cu: goto label_17bb6c;
            case 0x17BB70u: goto label_17bb70;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BAD4u; }
            if (ctx->pc != 0x17BAD4u) { return; }
        }
    }
    ctx->pc = 0x17BAD4u;
label_17bad4:
    // 0x17bad4: 0x8fa40000
    ctx->pc = 0x17bad4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17bad8:
    // 0x17bad8: 0x282d
    ctx->pc = 0x17bad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17badc:
    // 0x17badc: 0xc050cfe
label_17bae0:
    if (ctx->pc == 0x17BAE0u) {
        ctx->pc = 0x17BAE0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x17BAE4u;
        goto label_17bae4;
    }
    ctx->pc = 0x17BADCu;
    SET_GPR_U32(ctx, 31, 0x17BAE4u);
    ctx->pc = 0x17BAE0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAE4u; }
        else if (ctx->pc != 0x17BAE4u) { ctx->pc = 0x17BAE4u; }
    }
    if (ctx->pc != 0x17BAE4u) { return; }
    ctx->pc = 0x17BAE4u;
label_17bae4:
    // 0x17bae4: 0x8e040000
    ctx->pc = 0x17bae4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17bae8:
    // 0x17bae8: 0x24050001
    ctx->pc = 0x17bae8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_17baec:
    // 0x17baec: 0x8c830000
    ctx->pc = 0x17baecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17baf0:
    // 0x17baf0: 0x8c620020
    ctx->pc = 0x17baf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17baf4:
    // 0x17baf4: 0x40f809
label_17baf8:
    if (ctx->pc == 0x17BAF8u) {
        ctx->pc = 0x17BAF8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BAFCu;
        goto label_17bafc;
    }
    ctx->pc = 0x17BAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BAFCu);
        ctx->pc = 0x17BAF8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BA30u: goto label_17ba30;
            case 0x17BA34u: goto label_17ba34;
            case 0x17BA38u: goto label_17ba38;
            case 0x17BA3Cu: goto label_17ba3c;
            case 0x17BA40u: goto label_17ba40;
            case 0x17BA44u: goto label_17ba44;
            case 0x17BA48u: goto label_17ba48;
            case 0x17BA4Cu: goto label_17ba4c;
            case 0x17BA50u: goto label_17ba50;
            case 0x17BA54u: goto label_17ba54;
            case 0x17BA58u: goto label_17ba58;
            case 0x17BA5Cu: goto label_17ba5c;
            case 0x17BA60u: goto label_17ba60;
            case 0x17BA64u: goto label_17ba64;
            case 0x17BA68u: goto label_17ba68;
            case 0x17BA6Cu: goto label_17ba6c;
            case 0x17BA70u: goto label_17ba70;
            case 0x17BA74u: goto label_17ba74;
            case 0x17BA78u: goto label_17ba78;
            case 0x17BA7Cu: goto label_17ba7c;
            case 0x17BA80u: goto label_17ba80;
            case 0x17BA84u: goto label_17ba84;
            case 0x17BA88u: goto label_17ba88;
            case 0x17BA8Cu: goto label_17ba8c;
            case 0x17BA90u: goto label_17ba90;
            case 0x17BA94u: goto label_17ba94;
            case 0x17BA98u: goto label_17ba98;
            case 0x17BA9Cu: goto label_17ba9c;
            case 0x17BAA0u: goto label_17baa0;
            case 0x17BAA4u: goto label_17baa4;
            case 0x17BAA8u: goto label_17baa8;
            case 0x17BAACu: goto label_17baac;
            case 0x17BAB0u: goto label_17bab0;
            case 0x17BAB4u: goto label_17bab4;
            case 0x17BAB8u: goto label_17bab8;
            case 0x17BABCu: goto label_17babc;
            case 0x17BAC0u: goto label_17bac0;
            case 0x17BAC4u: goto label_17bac4;
            case 0x17BAC8u: goto label_17bac8;
            case 0x17BACCu: goto label_17bacc;
            case 0x17BAD0u: goto label_17bad0;
            case 0x17BAD4u: goto label_17bad4;
            case 0x17BAD8u: goto label_17bad8;
            case 0x17BADCu: goto label_17badc;
            case 0x17BAE0u: goto label_17bae0;
            case 0x17BAE4u: goto label_17bae4;
            case 0x17BAE8u: goto label_17bae8;
            case 0x17BAECu: goto label_17baec;
            case 0x17BAF0u: goto label_17baf0;
            case 0x17BAF4u: goto label_17baf4;
            case 0x17BAF8u: goto label_17baf8;
            case 0x17BAFCu: goto label_17bafc;
            case 0x17BB00u: goto label_17bb00;
            case 0x17BB04u: goto label_17bb04;
            case 0x17BB08u: goto label_17bb08;
            case 0x17BB0Cu: goto label_17bb0c;
            case 0x17BB10u: goto label_17bb10;
            case 0x17BB14u: goto label_17bb14;
            case 0x17BB18u: goto label_17bb18;
            case 0x17BB1Cu: goto label_17bb1c;
            case 0x17BB20u: goto label_17bb20;
            case 0x17BB24u: goto label_17bb24;
            case 0x17BB28u: goto label_17bb28;
            case 0x17BB2Cu: goto label_17bb2c;
            case 0x17BB30u: goto label_17bb30;
            case 0x17BB34u: goto label_17bb34;
            case 0x17BB38u: goto label_17bb38;
            case 0x17BB3Cu: goto label_17bb3c;
            case 0x17BB40u: goto label_17bb40;
            case 0x17BB44u: goto label_17bb44;
            case 0x17BB48u: goto label_17bb48;
            case 0x17BB4Cu: goto label_17bb4c;
            case 0x17BB50u: goto label_17bb50;
            case 0x17BB54u: goto label_17bb54;
            case 0x17BB58u: goto label_17bb58;
            case 0x17BB5Cu: goto label_17bb5c;
            case 0x17BB60u: goto label_17bb60;
            case 0x17BB64u: goto label_17bb64;
            case 0x17BB68u: goto label_17bb68;
            case 0x17BB6Cu: goto label_17bb6c;
            case 0x17BB70u: goto label_17bb70;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BAFCu; }
            if (ctx->pc != 0x17BAFCu) { return; }
        }
    }
    ctx->pc = 0x17BAFCu;
label_17bafc:
    // 0x17bafc: 0x8e040000
    ctx->pc = 0x17bafcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17bb00:
    // 0x17bb00: 0x282d
    ctx->pc = 0x17bb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bb04:
    // 0x17bb04: 0x8fa60004
    ctx->pc = 0x17bb04u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17bb08:
    // 0x17bb08: 0x3a0382d
    ctx->pc = 0x17bb08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17bb0c:
    // 0x17bb0c: 0x8c830000
    ctx->pc = 0x17bb0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bb10:
    // 0x17bb10: 0x8c620018
    ctx->pc = 0x17bb10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_17bb14:
    // 0x17bb14: 0x40f809
label_17bb18:
    if (ctx->pc == 0x17BB18u) {
        ctx->pc = 0x17BB18u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->pc = 0x17BB1Cu;
        goto label_17bb1c;
    }
    ctx->pc = 0x17BB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BB1Cu);
        ctx->pc = 0x17BB18u;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BA30u: goto label_17ba30;
            case 0x17BA34u: goto label_17ba34;
            case 0x17BA38u: goto label_17ba38;
            case 0x17BA3Cu: goto label_17ba3c;
            case 0x17BA40u: goto label_17ba40;
            case 0x17BA44u: goto label_17ba44;
            case 0x17BA48u: goto label_17ba48;
            case 0x17BA4Cu: goto label_17ba4c;
            case 0x17BA50u: goto label_17ba50;
            case 0x17BA54u: goto label_17ba54;
            case 0x17BA58u: goto label_17ba58;
            case 0x17BA5Cu: goto label_17ba5c;
            case 0x17BA60u: goto label_17ba60;
            case 0x17BA64u: goto label_17ba64;
            case 0x17BA68u: goto label_17ba68;
            case 0x17BA6Cu: goto label_17ba6c;
            case 0x17BA70u: goto label_17ba70;
            case 0x17BA74u: goto label_17ba74;
            case 0x17BA78u: goto label_17ba78;
            case 0x17BA7Cu: goto label_17ba7c;
            case 0x17BA80u: goto label_17ba80;
            case 0x17BA84u: goto label_17ba84;
            case 0x17BA88u: goto label_17ba88;
            case 0x17BA8Cu: goto label_17ba8c;
            case 0x17BA90u: goto label_17ba90;
            case 0x17BA94u: goto label_17ba94;
            case 0x17BA98u: goto label_17ba98;
            case 0x17BA9Cu: goto label_17ba9c;
            case 0x17BAA0u: goto label_17baa0;
            case 0x17BAA4u: goto label_17baa4;
            case 0x17BAA8u: goto label_17baa8;
            case 0x17BAACu: goto label_17baac;
            case 0x17BAB0u: goto label_17bab0;
            case 0x17BAB4u: goto label_17bab4;
            case 0x17BAB8u: goto label_17bab8;
            case 0x17BABCu: goto label_17babc;
            case 0x17BAC0u: goto label_17bac0;
            case 0x17BAC4u: goto label_17bac4;
            case 0x17BAC8u: goto label_17bac8;
            case 0x17BACCu: goto label_17bacc;
            case 0x17BAD0u: goto label_17bad0;
            case 0x17BAD4u: goto label_17bad4;
            case 0x17BAD8u: goto label_17bad8;
            case 0x17BADCu: goto label_17badc;
            case 0x17BAE0u: goto label_17bae0;
            case 0x17BAE4u: goto label_17bae4;
            case 0x17BAE8u: goto label_17bae8;
            case 0x17BAECu: goto label_17baec;
            case 0x17BAF0u: goto label_17baf0;
            case 0x17BAF4u: goto label_17baf4;
            case 0x17BAF8u: goto label_17baf8;
            case 0x17BAFCu: goto label_17bafc;
            case 0x17BB00u: goto label_17bb00;
            case 0x17BB04u: goto label_17bb04;
            case 0x17BB08u: goto label_17bb08;
            case 0x17BB0Cu: goto label_17bb0c;
            case 0x17BB10u: goto label_17bb10;
            case 0x17BB14u: goto label_17bb14;
            case 0x17BB18u: goto label_17bb18;
            case 0x17BB1Cu: goto label_17bb1c;
            case 0x17BB20u: goto label_17bb20;
            case 0x17BB24u: goto label_17bb24;
            case 0x17BB28u: goto label_17bb28;
            case 0x17BB2Cu: goto label_17bb2c;
            case 0x17BB30u: goto label_17bb30;
            case 0x17BB34u: goto label_17bb34;
            case 0x17BB38u: goto label_17bb38;
            case 0x17BB3Cu: goto label_17bb3c;
            case 0x17BB40u: goto label_17bb40;
            case 0x17BB44u: goto label_17bb44;
            case 0x17BB48u: goto label_17bb48;
            case 0x17BB4Cu: goto label_17bb4c;
            case 0x17BB50u: goto label_17bb50;
            case 0x17BB54u: goto label_17bb54;
            case 0x17BB58u: goto label_17bb58;
            case 0x17BB5Cu: goto label_17bb5c;
            case 0x17BB60u: goto label_17bb60;
            case 0x17BB64u: goto label_17bb64;
            case 0x17BB68u: goto label_17bb68;
            case 0x17BB6Cu: goto label_17bb6c;
            case 0x17BB70u: goto label_17bb70;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BB1Cu; }
            if (ctx->pc != 0x17BB1Cu) { return; }
        }
    }
    ctx->pc = 0x17BB1Cu;
label_17bb1c:
    // 0x17bb1c: 0x8fa40000
    ctx->pc = 0x17bb1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17bb20:
    // 0x17bb20: 0x282d
    ctx->pc = 0x17bb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bb24:
    // 0x17bb24: 0xc050cfe
label_17bb28:
    if (ctx->pc == 0x17BB28u) {
        ctx->pc = 0x17BB28u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x17BB2Cu;
        goto label_17bb2c;
    }
    ctx->pc = 0x17BB24u;
    SET_GPR_U32(ctx, 31, 0x17BB2Cu);
    ctx->pc = 0x17BB28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB2Cu; }
        else if (ctx->pc != 0x17BB2Cu) { ctx->pc = 0x17BB2Cu; }
    }
    if (ctx->pc != 0x17BB2Cu) { return; }
    ctx->pc = 0x17BB2Cu;
label_17bb2c:
    // 0x17bb2c: 0x8e040000
    ctx->pc = 0x17bb2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17bb30:
    // 0x17bb30: 0x24050001
    ctx->pc = 0x17bb30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_17bb34:
    // 0x17bb34: 0x8c820000
    ctx->pc = 0x17bb34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bb38:
    // 0x17bb38: 0x8c430020
    ctx->pc = 0x17bb38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_17bb3c:
    // 0x17bb3c: 0x60f809
label_17bb40:
    if (ctx->pc == 0x17BB40u) {
        ctx->pc = 0x17BB40u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BB44u;
        goto label_17bb44;
    }
    ctx->pc = 0x17BB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17BB44u);
        ctx->pc = 0x17BB40u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BA30u: goto label_17ba30;
            case 0x17BA34u: goto label_17ba34;
            case 0x17BA38u: goto label_17ba38;
            case 0x17BA3Cu: goto label_17ba3c;
            case 0x17BA40u: goto label_17ba40;
            case 0x17BA44u: goto label_17ba44;
            case 0x17BA48u: goto label_17ba48;
            case 0x17BA4Cu: goto label_17ba4c;
            case 0x17BA50u: goto label_17ba50;
            case 0x17BA54u: goto label_17ba54;
            case 0x17BA58u: goto label_17ba58;
            case 0x17BA5Cu: goto label_17ba5c;
            case 0x17BA60u: goto label_17ba60;
            case 0x17BA64u: goto label_17ba64;
            case 0x17BA68u: goto label_17ba68;
            case 0x17BA6Cu: goto label_17ba6c;
            case 0x17BA70u: goto label_17ba70;
            case 0x17BA74u: goto label_17ba74;
            case 0x17BA78u: goto label_17ba78;
            case 0x17BA7Cu: goto label_17ba7c;
            case 0x17BA80u: goto label_17ba80;
            case 0x17BA84u: goto label_17ba84;
            case 0x17BA88u: goto label_17ba88;
            case 0x17BA8Cu: goto label_17ba8c;
            case 0x17BA90u: goto label_17ba90;
            case 0x17BA94u: goto label_17ba94;
            case 0x17BA98u: goto label_17ba98;
            case 0x17BA9Cu: goto label_17ba9c;
            case 0x17BAA0u: goto label_17baa0;
            case 0x17BAA4u: goto label_17baa4;
            case 0x17BAA8u: goto label_17baa8;
            case 0x17BAACu: goto label_17baac;
            case 0x17BAB0u: goto label_17bab0;
            case 0x17BAB4u: goto label_17bab4;
            case 0x17BAB8u: goto label_17bab8;
            case 0x17BABCu: goto label_17babc;
            case 0x17BAC0u: goto label_17bac0;
            case 0x17BAC4u: goto label_17bac4;
            case 0x17BAC8u: goto label_17bac8;
            case 0x17BACCu: goto label_17bacc;
            case 0x17BAD0u: goto label_17bad0;
            case 0x17BAD4u: goto label_17bad4;
            case 0x17BAD8u: goto label_17bad8;
            case 0x17BADCu: goto label_17badc;
            case 0x17BAE0u: goto label_17bae0;
            case 0x17BAE4u: goto label_17bae4;
            case 0x17BAE8u: goto label_17bae8;
            case 0x17BAECu: goto label_17baec;
            case 0x17BAF0u: goto label_17baf0;
            case 0x17BAF4u: goto label_17baf4;
            case 0x17BAF8u: goto label_17baf8;
            case 0x17BAFCu: goto label_17bafc;
            case 0x17BB00u: goto label_17bb00;
            case 0x17BB04u: goto label_17bb04;
            case 0x17BB08u: goto label_17bb08;
            case 0x17BB0Cu: goto label_17bb0c;
            case 0x17BB10u: goto label_17bb10;
            case 0x17BB14u: goto label_17bb14;
            case 0x17BB18u: goto label_17bb18;
            case 0x17BB1Cu: goto label_17bb1c;
            case 0x17BB20u: goto label_17bb20;
            case 0x17BB24u: goto label_17bb24;
            case 0x17BB28u: goto label_17bb28;
            case 0x17BB2Cu: goto label_17bb2c;
            case 0x17BB30u: goto label_17bb30;
            case 0x17BB34u: goto label_17bb34;
            case 0x17BB38u: goto label_17bb38;
            case 0x17BB3Cu: goto label_17bb3c;
            case 0x17BB40u: goto label_17bb40;
            case 0x17BB44u: goto label_17bb44;
            case 0x17BB48u: goto label_17bb48;
            case 0x17BB4Cu: goto label_17bb4c;
            case 0x17BB50u: goto label_17bb50;
            case 0x17BB54u: goto label_17bb54;
            case 0x17BB58u: goto label_17bb58;
            case 0x17BB5Cu: goto label_17bb5c;
            case 0x17BB60u: goto label_17bb60;
            case 0x17BB64u: goto label_17bb64;
            case 0x17BB68u: goto label_17bb68;
            case 0x17BB6Cu: goto label_17bb6c;
            case 0x17BB70u: goto label_17bb70;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BB44u; }
            if (ctx->pc != 0x17BB44u) { return; }
        }
    }
    ctx->pc = 0x17BB44u;
label_17bb44:
    // 0x17bb44: 0x8e420004
    ctx->pc = 0x17bb44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17bb48:
    // 0x17bb48: 0x222102a
    ctx->pc = 0x17bb48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_17bb4c:
    // 0x17bb4c: 0x1440ffd8
label_17bb50:
    if (ctx->pc == 0x17BB50u) {
        ctx->pc = 0x17BB50u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x17BB54u;
        goto label_17bb54;
    }
    ctx->pc = 0x17BB4Cu;
    {
        const bool branch_taken_0x17bb4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17BB50u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x17bb4c) {
            ctx->pc = 0x17BAB0u;
            goto label_17bab0;
        }
    }
    ctx->pc = 0x17BB54u;
label_17bb54:
    // 0x17bb54: 0xdfbf0060
    ctx->pc = 0x17bb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17bb58:
    // 0x17bb58: 0xdfb40050
    ctx->pc = 0x17bb58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17bb5c:
    // 0x17bb5c: 0xdfb30040
    ctx->pc = 0x17bb5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17bb60:
    // 0x17bb60: 0xdfb20030
    ctx->pc = 0x17bb60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17bb64:
    // 0x17bb64: 0xdfb10020
    ctx->pc = 0x17bb64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17bb68:
    // 0x17bb68: 0xdfb00010
    ctx->pc = 0x17bb68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17bb6c:
    // 0x17bb6c: 0x3e00008
label_17bb70:
    if (ctx->pc == 0x17BB70u) {
        ctx->pc = 0x17BB70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x17BB74u;
        goto label_fallthrough_0x17bb6c;
    }
    ctx->pc = 0x17BB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BB70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BA30u: goto label_17ba30;
            case 0x17BA34u: goto label_17ba34;
            case 0x17BA38u: goto label_17ba38;
            case 0x17BA3Cu: goto label_17ba3c;
            case 0x17BA40u: goto label_17ba40;
            case 0x17BA44u: goto label_17ba44;
            case 0x17BA48u: goto label_17ba48;
            case 0x17BA4Cu: goto label_17ba4c;
            case 0x17BA50u: goto label_17ba50;
            case 0x17BA54u: goto label_17ba54;
            case 0x17BA58u: goto label_17ba58;
            case 0x17BA5Cu: goto label_17ba5c;
            case 0x17BA60u: goto label_17ba60;
            case 0x17BA64u: goto label_17ba64;
            case 0x17BA68u: goto label_17ba68;
            case 0x17BA6Cu: goto label_17ba6c;
            case 0x17BA70u: goto label_17ba70;
            case 0x17BA74u: goto label_17ba74;
            case 0x17BA78u: goto label_17ba78;
            case 0x17BA7Cu: goto label_17ba7c;
            case 0x17BA80u: goto label_17ba80;
            case 0x17BA84u: goto label_17ba84;
            case 0x17BA88u: goto label_17ba88;
            case 0x17BA8Cu: goto label_17ba8c;
            case 0x17BA90u: goto label_17ba90;
            case 0x17BA94u: goto label_17ba94;
            case 0x17BA98u: goto label_17ba98;
            case 0x17BA9Cu: goto label_17ba9c;
            case 0x17BAA0u: goto label_17baa0;
            case 0x17BAA4u: goto label_17baa4;
            case 0x17BAA8u: goto label_17baa8;
            case 0x17BAACu: goto label_17baac;
            case 0x17BAB0u: goto label_17bab0;
            case 0x17BAB4u: goto label_17bab4;
            case 0x17BAB8u: goto label_17bab8;
            case 0x17BABCu: goto label_17babc;
            case 0x17BAC0u: goto label_17bac0;
            case 0x17BAC4u: goto label_17bac4;
            case 0x17BAC8u: goto label_17bac8;
            case 0x17BACCu: goto label_17bacc;
            case 0x17BAD0u: goto label_17bad0;
            case 0x17BAD4u: goto label_17bad4;
            case 0x17BAD8u: goto label_17bad8;
            case 0x17BADCu: goto label_17badc;
            case 0x17BAE0u: goto label_17bae0;
            case 0x17BAE4u: goto label_17bae4;
            case 0x17BAE8u: goto label_17bae8;
            case 0x17BAECu: goto label_17baec;
            case 0x17BAF0u: goto label_17baf0;
            case 0x17BAF4u: goto label_17baf4;
            case 0x17BAF8u: goto label_17baf8;
            case 0x17BAFCu: goto label_17bafc;
            case 0x17BB00u: goto label_17bb00;
            case 0x17BB04u: goto label_17bb04;
            case 0x17BB08u: goto label_17bb08;
            case 0x17BB0Cu: goto label_17bb0c;
            case 0x17BB10u: goto label_17bb10;
            case 0x17BB14u: goto label_17bb14;
            case 0x17BB18u: goto label_17bb18;
            case 0x17BB1Cu: goto label_17bb1c;
            case 0x17BB20u: goto label_17bb20;
            case 0x17BB24u: goto label_17bb24;
            case 0x17BB28u: goto label_17bb28;
            case 0x17BB2Cu: goto label_17bb2c;
            case 0x17BB30u: goto label_17bb30;
            case 0x17BB34u: goto label_17bb34;
            case 0x17BB38u: goto label_17bb38;
            case 0x17BB3Cu: goto label_17bb3c;
            case 0x17BB40u: goto label_17bb40;
            case 0x17BB44u: goto label_17bb44;
            case 0x17BB48u: goto label_17bb48;
            case 0x17BB4Cu: goto label_17bb4c;
            case 0x17BB50u: goto label_17bb50;
            case 0x17BB54u: goto label_17bb54;
            case 0x17BB58u: goto label_17bb58;
            case 0x17BB5Cu: goto label_17bb5c;
            case 0x17BB60u: goto label_17bb60;
            case 0x17BB64u: goto label_17bb64;
            case 0x17BB68u: goto label_17bb68;
            case 0x17BB6Cu: goto label_17bb6c;
            case 0x17BB70u: goto label_17bb70;
            default: break;
        }
        return;
    }
label_fallthrough_0x17bb6c:
    ctx->pc = 0x17BB74u;
}
