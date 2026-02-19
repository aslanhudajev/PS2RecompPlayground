#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSkipItem
// Address: 0x27af50 - 0x27b094
void SfxSkipItem_0x27af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27af50u;

label_27af50:
    // 0x27af50: 0x8c820000
    ctx->pc = 0x27af50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27af54:
    // 0x27af54: 0x8c480004
    ctx->pc = 0x27af54u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27af58:
    // 0x27af58: 0x8c420000
    ctx->pc = 0x27af58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27af5c:
    // 0x27af5c: 0x2443ffff
    ctx->pc = 0x27af5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967295));
label_27af60:
    // 0x27af60: 0x2c62000a
    ctx->pc = 0x27af60u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_27af64:
    // 0x27af64: 0x10400041
label_27af68:
    if (ctx->pc == 0x27AF68u) {
        ctx->pc = 0x27AF68u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27AF6Cu;
        goto label_27af6c;
    }
    ctx->pc = 0x27AF64u;
    {
        const bool branch_taken_0x27af64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27AF68u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27af64) {
            ctx->pc = 0x27B06Cu;
            goto label_27b06c;
        }
    }
    ctx->pc = 0x27AF6Cu;
label_27af6c:
    // 0x27af6c: 0x3c02003b
    ctx->pc = 0x27af6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_27af70:
    // 0x27af70: 0x2442beb0
    ctx->pc = 0x27af70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950576));
label_27af74:
    // 0x27af74: 0x31880
    ctx->pc = 0x27af74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_27af78:
    // 0x27af78: 0x621821
    ctx->pc = 0x27af78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27af7c:
    // 0x27af7c: 0x8c620000
    ctx->pc = 0x27af7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27af80:
    // 0x27af80: 0x400008
label_27af84:
    if (ctx->pc == 0x27AF84u) {
        ctx->pc = 0x27AF88u;
        goto label_27af88;
    }
    ctx->pc = 0x27AF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27AF50u: goto label_27af50;
            case 0x27AF54u: goto label_27af54;
            case 0x27AF58u: goto label_27af58;
            case 0x27AF5Cu: goto label_27af5c;
            case 0x27AF60u: goto label_27af60;
            case 0x27AF64u: goto label_27af64;
            case 0x27AF68u: goto label_27af68;
            case 0x27AF6Cu: goto label_27af6c;
            case 0x27AF70u: goto label_27af70;
            case 0x27AF74u: goto label_27af74;
            case 0x27AF78u: goto label_27af78;
            case 0x27AF7Cu: goto label_27af7c;
            case 0x27AF80u: goto label_27af80;
            case 0x27AF84u: goto label_27af84;
            case 0x27AF88u: goto label_27af88;
            case 0x27AF8Cu: goto label_27af8c;
            case 0x27AF90u: goto label_27af90;
            case 0x27AF94u: goto label_27af94;
            case 0x27AF98u: goto label_27af98;
            case 0x27AF9Cu: goto label_27af9c;
            case 0x27AFA0u: goto label_27afa0;
            case 0x27AFA4u: goto label_27afa4;
            case 0x27AFA8u: goto label_27afa8;
            case 0x27AFACu: goto label_27afac;
            case 0x27AFB0u: goto label_27afb0;
            case 0x27AFB4u: goto label_27afb4;
            case 0x27AFB8u: goto label_27afb8;
            case 0x27AFBCu: goto label_27afbc;
            case 0x27AFC0u: goto label_27afc0;
            case 0x27AFC4u: goto label_27afc4;
            case 0x27AFC8u: goto label_27afc8;
            case 0x27AFCCu: goto label_27afcc;
            case 0x27AFD0u: goto label_27afd0;
            case 0x27AFD4u: goto label_27afd4;
            case 0x27AFD8u: goto label_27afd8;
            case 0x27AFDCu: goto label_27afdc;
            case 0x27AFE0u: goto label_27afe0;
            case 0x27AFE4u: goto label_27afe4;
            case 0x27AFE8u: goto label_27afe8;
            case 0x27AFECu: goto label_27afec;
            case 0x27AFF0u: goto label_27aff0;
            case 0x27AFF4u: goto label_27aff4;
            case 0x27AFF8u: goto label_27aff8;
            case 0x27AFFCu: goto label_27affc;
            case 0x27B000u: goto label_27b000;
            case 0x27B004u: goto label_27b004;
            case 0x27B008u: goto label_27b008;
            case 0x27B00Cu: goto label_27b00c;
            case 0x27B010u: goto label_27b010;
            case 0x27B014u: goto label_27b014;
            case 0x27B018u: goto label_27b018;
            case 0x27B01Cu: goto label_27b01c;
            case 0x27B020u: goto label_27b020;
            case 0x27B024u: goto label_27b024;
            case 0x27B028u: goto label_27b028;
            case 0x27B02Cu: goto label_27b02c;
            case 0x27B030u: goto label_27b030;
            case 0x27B034u: goto label_27b034;
            case 0x27B038u: goto label_27b038;
            case 0x27B03Cu: goto label_27b03c;
            case 0x27B040u: goto label_27b040;
            case 0x27B044u: goto label_27b044;
            case 0x27B048u: goto label_27b048;
            case 0x27B04Cu: goto label_27b04c;
            case 0x27B050u: goto label_27b050;
            case 0x27B054u: goto label_27b054;
            case 0x27B058u: goto label_27b058;
            case 0x27B05Cu: goto label_27b05c;
            case 0x27B060u: goto label_27b060;
            case 0x27B064u: goto label_27b064;
            case 0x27B068u: goto label_27b068;
            case 0x27B06Cu: goto label_27b06c;
            case 0x27B070u: goto label_27b070;
            case 0x27B074u: goto label_27b074;
            case 0x27B078u: goto label_27b078;
            case 0x27B07Cu: goto label_27b07c;
            case 0x27B080u: goto label_27b080;
            case 0x27B084u: goto label_27b084;
            case 0x27B088u: goto label_27b088;
            case 0x27B08Cu: goto label_27b08c;
            case 0x27B090u: goto label_27b090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27AF88u;
label_27af88:
    // 0x27af88: 0x30a31000
    ctx->pc = 0x27af88u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 4096));
label_27af8c:
    // 0x27af8c: 0x24020001
    ctx->pc = 0x27af8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_27af90:
    // 0x27af90: 0x1000003e
label_27af94:
    if (ctx->pc == 0x27AF94u) {
        ctx->pc = 0x27AF94u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
        ctx->pc = 0x27AF98u;
        goto label_27af98;
    }
    ctx->pc = 0x27AF90u;
    {
        const bool branch_taken_0x27af90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27AF94u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
        if (branch_taken_0x27af90) {
            ctx->pc = 0x27B08Cu;
            goto label_27b08c;
        }
    }
    ctx->pc = 0x27AF98u;
label_27af98:
    // 0x27af98: 0x24020029
    ctx->pc = 0x27af98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
label_27af9c:
    // 0x27af9c: 0x11020003
label_27afa0:
    if (ctx->pc == 0x27AFA0u) {
        ctx->pc = 0x27AFA0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 4096));
        ctx->pc = 0x27AFA4u;
        goto label_27afa4;
    }
    ctx->pc = 0x27AF9Cu;
    {
        const bool branch_taken_0x27af9c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x27AFA0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 4096));
        if (branch_taken_0x27af9c) {
            ctx->pc = 0x27AFACu;
            goto label_27afac;
        }
    }
    ctx->pc = 0x27AFA4u;
label_27afa4:
    // 0x27afa4: 0x24020001
    ctx->pc = 0x27afa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_27afa8:
    // 0x27afa8: 0x43380b
    ctx->pc = 0x27afa8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_27afac:
    // 0x27afac: 0x30c20200
    ctx->pc = 0x27afacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 512));
label_27afb0:
    // 0x27afb0: 0x24050001
    ctx->pc = 0x27afb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_27afb4:
    // 0x27afb4: 0xa2380b
    ctx->pc = 0x27afb4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
label_27afb8:
    // 0x27afb8: 0x808300e3
    ctx->pc = 0x27afb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 227)));
label_27afbc:
    // 0x27afbc: 0x2402ffff
    ctx->pc = 0x27afbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_27afc0:
    // 0x27afc0: 0x14620002
label_27afc4:
    if (ctx->pc == 0x27AFC4u) {
        ctx->pc = 0x27AFC4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1024));
        ctx->pc = 0x27AFC8u;
        goto label_27afc8;
    }
    ctx->pc = 0x27AFC0u;
    {
        const bool branch_taken_0x27afc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27AFC4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1024));
        if (branch_taken_0x27afc0) {
            ctx->pc = 0x27AFCCu;
            goto label_27afcc;
        }
    }
    ctx->pc = 0x27AFC8u;
label_27afc8:
    // 0x27afc8: 0xa2380a
    ctx->pc = 0x27afc8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
label_27afcc:
    // 0x27afcc: 0x10e0002f
label_27afd0:
    if (ctx->pc == 0x27AFD0u) {
        ctx->pc = 0x27AFD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
        ctx->pc = 0x27AFD4u;
        goto label_27afd4;
    }
    ctx->pc = 0x27AFCCu;
    {
        const bool branch_taken_0x27afcc = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x27AFD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
        if (branch_taken_0x27afcc) {
            ctx->pc = 0x27B08Cu;
            goto label_27b08c;
        }
    }
    ctx->pc = 0x27AFD4u;
label_27afd4:
    // 0x27afd4: 0x1000001f
label_27afd8:
    if (ctx->pc == 0x27AFD8u) {
        ctx->pc = 0x27AFD8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x27AFDCu;
        goto label_27afdc;
    }
    ctx->pc = 0x27AFD4u;
    {
        const bool branch_taken_0x27afd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27AFD8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x27afd4) {
            ctx->pc = 0x27B054u;
            goto label_27b054;
        }
    }
    ctx->pc = 0x27AFDCu;
label_27afdc:
    // 0x27afdc: 0x2402002b
    ctx->pc = 0x27afdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_27afe0:
    // 0x27afe0: 0x55020013
label_27afe4:
    if (ctx->pc == 0x27AFE4u) {
        ctx->pc = 0x27AFE4u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 227)));
        ctx->pc = 0x27AFE8u;
        goto label_27afe8;
    }
    ctx->pc = 0x27AFE0u;
    {
        const bool branch_taken_0x27afe0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        if (branch_taken_0x27afe0) {
            ctx->pc = 0x27AFE4u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 227)));
            ctx->pc = 0x27B030u;
            goto label_27b030;
        }
    }
    ctx->pc = 0x27AFE8u;
label_27afe8:
    // 0x27afe8: 0x30a31000
    ctx->pc = 0x27afe8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 4096));
label_27afec:
    // 0x27afec: 0x24020001
    ctx->pc = 0x27afecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_27aff0:
    // 0x27aff0: 0x1000000e
label_27aff4:
    if (ctx->pc == 0x27AFF4u) {
        ctx->pc = 0x27AFF4u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
        ctx->pc = 0x27AFF8u;
        goto label_27aff8;
    }
    ctx->pc = 0x27AFF0u;
    {
        const bool branch_taken_0x27aff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27AFF4u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
        if (branch_taken_0x27aff0) {
            ctx->pc = 0x27B02Cu;
            goto label_27b02c;
        }
    }
    ctx->pc = 0x27AFF8u;
label_27aff8:
    // 0x27aff8: 0x30a20100
    ctx->pc = 0x27aff8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 256));
label_27affc:
    // 0x27affc: 0x1040000b
label_27b000:
    if (ctx->pc == 0x27B000u) {
        ctx->pc = 0x27B000u;
        SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
        ctx->pc = 0x27B004u;
        goto label_27b004;
    }
    ctx->pc = 0x27AFFCu;
    {
        const bool branch_taken_0x27affc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B000u;
        SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
        if (branch_taken_0x27affc) {
            ctx->pc = 0x27B02Cu;
            goto label_27b02c;
        }
    }
    ctx->pc = 0x27B004u;
label_27b004:
    // 0x27b004: 0xc21024
    ctx->pc = 0x27b004u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27b008:
    // 0x27b008: 0x10400007
label_27b00c:
    if (ctx->pc == 0x27B00Cu) {
        ctx->pc = 0x27B00Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x27B010u;
        goto label_27b010;
    }
    ctx->pc = 0x27B008u;
    {
        const bool branch_taken_0x27b008 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B00Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x27b008) {
            ctx->pc = 0x27B028u;
            goto label_27b028;
        }
    }
    ctx->pc = 0x27B010u;
label_27b010:
    // 0x27b010: 0x11020003
label_27b014:
    if (ctx->pc == 0x27B014u) {
        ctx->pc = 0x27B014u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27B018u;
        goto label_27b018;
    }
    ctx->pc = 0x27B010u;
    {
        const bool branch_taken_0x27b010 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x27B014u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27b010) {
            ctx->pc = 0x27B020u;
            goto label_27b020;
        }
    }
    ctx->pc = 0x27B018u;
label_27b018:
    // 0x27b018: 0x15020004
label_27b01c:
    if (ctx->pc == 0x27B01Cu) {
        ctx->pc = 0x27B01Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27B020u;
        goto label_27b020;
    }
    ctx->pc = 0x27B018u;
    {
        const bool branch_taken_0x27b018 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x27B01Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27b018) {
            ctx->pc = 0x27B02Cu;
            goto label_27b02c;
        }
    }
    ctx->pc = 0x27B020u;
label_27b020:
    // 0x27b020: 0x10000002
label_27b024:
    if (ctx->pc == 0x27B024u) {
        ctx->pc = 0x27B024u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x27B028u;
        goto label_27b028;
    }
    ctx->pc = 0x27B020u;
    {
        const bool branch_taken_0x27b020 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B024u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x27b020) {
            ctx->pc = 0x27B02Cu;
            goto label_27b02c;
        }
    }
    ctx->pc = 0x27B028u;
label_27b028:
    // 0x27b028: 0x24070001
    ctx->pc = 0x27b028u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_27b02c:
    // 0x27b02c: 0x808300e3
    ctx->pc = 0x27b02cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 227)));
label_27b030:
    // 0x27b030: 0x2402ffff
    ctx->pc = 0x27b030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_27b034:
    // 0x27b034: 0x14620015
label_27b038:
    if (ctx->pc == 0x27B038u) {
        ctx->pc = 0x27B038u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 1536));
        ctx->pc = 0x27B03Cu;
        goto label_27b03c;
    }
    ctx->pc = 0x27B034u;
    {
        const bool branch_taken_0x27b034 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27B038u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 1536));
        if (branch_taken_0x27b034) {
            ctx->pc = 0x27B08Cu;
            goto label_27b08c;
        }
    }
    ctx->pc = 0x27B03Cu;
label_27b03c:
    // 0x27b03c: 0x24020001
    ctx->pc = 0x27b03cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_27b040:
    // 0x27b040: 0x10000012
label_27b044:
    if (ctx->pc == 0x27B044u) {
        ctx->pc = 0x27B044u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
        ctx->pc = 0x27B048u;
        goto label_27b048;
    }
    ctx->pc = 0x27B040u;
    {
        const bool branch_taken_0x27b040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B044u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
        if (branch_taken_0x27b040) {
            ctx->pc = 0x27B08Cu;
            goto label_27b08c;
        }
    }
    ctx->pc = 0x27B048u;
label_27b048:
    // 0x27b048: 0x3c020080
    ctx->pc = 0x27b048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
label_27b04c:
    // 0x27b04c: 0xc21024
    ctx->pc = 0x27b04cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27b050:
    // 0x27b050: 0x24070001
    ctx->pc = 0x27b050u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_27b054:
    // 0x27b054: 0x24030002
    ctx->pc = 0x27b054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_27b058:
    // 0x27b058: 0x1000000c
label_27b05c:
    if (ctx->pc == 0x27B05Cu) {
        ctx->pc = 0x27B05Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 3));
        ctx->pc = 0x27B060u;
        goto label_27b060;
    }
    ctx->pc = 0x27B058u;
    {
        const bool branch_taken_0x27b058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27B05Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 3));
        if (branch_taken_0x27b058) {
            ctx->pc = 0x27B08Cu;
            goto label_27b08c;
        }
    }
    ctx->pc = 0x27B060u;
label_27b060:
    // 0x27b060: 0x30c20200
    ctx->pc = 0x27b060u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 512));
label_27b064:
    // 0x27b064: 0x14400009
label_27b068:
    if (ctx->pc == 0x27B068u) {
        ctx->pc = 0x27B06Cu;
        goto label_27b06c;
    }
    ctx->pc = 0x27B064u;
    {
        const bool branch_taken_0x27b064 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27b064) {
            ctx->pc = 0x27B08Cu;
            goto label_27b08c;
        }
    }
    ctx->pc = 0x27B06Cu;
label_27b06c:
    // 0x27b06c: 0x30a20100
    ctx->pc = 0x27b06cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 256));
label_27b070:
    // 0x27b070: 0x24050001
    ctx->pc = 0x27b070u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_27b074:
    // 0x27b074: 0xa2380b
    ctx->pc = 0x27b074u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
label_27b078:
    // 0x27b078: 0x808300e3
    ctx->pc = 0x27b078u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 227)));
label_27b07c:
    // 0x27b07c: 0x2402ffff
    ctx->pc = 0x27b07cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_27b080:
    // 0x27b080: 0x14620002
label_27b084:
    if (ctx->pc == 0x27B084u) {
        ctx->pc = 0x27B084u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1536));
        ctx->pc = 0x27B088u;
        goto label_27b088;
    }
    ctx->pc = 0x27B080u;
    {
        const bool branch_taken_0x27b080 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27B084u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1536));
        if (branch_taken_0x27b080) {
            ctx->pc = 0x27B08Cu;
            goto label_27b08c;
        }
    }
    ctx->pc = 0x27B088u;
label_27b088:
    // 0x27b088: 0xa2380a
    ctx->pc = 0x27b088u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
label_27b08c:
    // 0x27b08c: 0x3e00008
label_27b090:
    if (ctx->pc == 0x27B090u) {
        ctx->pc = 0x27B090u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27B094u;
        goto label_fallthrough_0x27b08c;
    }
    ctx->pc = 0x27B08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B090u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27AF50u: goto label_27af50;
            case 0x27AF54u: goto label_27af54;
            case 0x27AF58u: goto label_27af58;
            case 0x27AF5Cu: goto label_27af5c;
            case 0x27AF60u: goto label_27af60;
            case 0x27AF64u: goto label_27af64;
            case 0x27AF68u: goto label_27af68;
            case 0x27AF6Cu: goto label_27af6c;
            case 0x27AF70u: goto label_27af70;
            case 0x27AF74u: goto label_27af74;
            case 0x27AF78u: goto label_27af78;
            case 0x27AF7Cu: goto label_27af7c;
            case 0x27AF80u: goto label_27af80;
            case 0x27AF84u: goto label_27af84;
            case 0x27AF88u: goto label_27af88;
            case 0x27AF8Cu: goto label_27af8c;
            case 0x27AF90u: goto label_27af90;
            case 0x27AF94u: goto label_27af94;
            case 0x27AF98u: goto label_27af98;
            case 0x27AF9Cu: goto label_27af9c;
            case 0x27AFA0u: goto label_27afa0;
            case 0x27AFA4u: goto label_27afa4;
            case 0x27AFA8u: goto label_27afa8;
            case 0x27AFACu: goto label_27afac;
            case 0x27AFB0u: goto label_27afb0;
            case 0x27AFB4u: goto label_27afb4;
            case 0x27AFB8u: goto label_27afb8;
            case 0x27AFBCu: goto label_27afbc;
            case 0x27AFC0u: goto label_27afc0;
            case 0x27AFC4u: goto label_27afc4;
            case 0x27AFC8u: goto label_27afc8;
            case 0x27AFCCu: goto label_27afcc;
            case 0x27AFD0u: goto label_27afd0;
            case 0x27AFD4u: goto label_27afd4;
            case 0x27AFD8u: goto label_27afd8;
            case 0x27AFDCu: goto label_27afdc;
            case 0x27AFE0u: goto label_27afe0;
            case 0x27AFE4u: goto label_27afe4;
            case 0x27AFE8u: goto label_27afe8;
            case 0x27AFECu: goto label_27afec;
            case 0x27AFF0u: goto label_27aff0;
            case 0x27AFF4u: goto label_27aff4;
            case 0x27AFF8u: goto label_27aff8;
            case 0x27AFFCu: goto label_27affc;
            case 0x27B000u: goto label_27b000;
            case 0x27B004u: goto label_27b004;
            case 0x27B008u: goto label_27b008;
            case 0x27B00Cu: goto label_27b00c;
            case 0x27B010u: goto label_27b010;
            case 0x27B014u: goto label_27b014;
            case 0x27B018u: goto label_27b018;
            case 0x27B01Cu: goto label_27b01c;
            case 0x27B020u: goto label_27b020;
            case 0x27B024u: goto label_27b024;
            case 0x27B028u: goto label_27b028;
            case 0x27B02Cu: goto label_27b02c;
            case 0x27B030u: goto label_27b030;
            case 0x27B034u: goto label_27b034;
            case 0x27B038u: goto label_27b038;
            case 0x27B03Cu: goto label_27b03c;
            case 0x27B040u: goto label_27b040;
            case 0x27B044u: goto label_27b044;
            case 0x27B048u: goto label_27b048;
            case 0x27B04Cu: goto label_27b04c;
            case 0x27B050u: goto label_27b050;
            case 0x27B054u: goto label_27b054;
            case 0x27B058u: goto label_27b058;
            case 0x27B05Cu: goto label_27b05c;
            case 0x27B060u: goto label_27b060;
            case 0x27B064u: goto label_27b064;
            case 0x27B068u: goto label_27b068;
            case 0x27B06Cu: goto label_27b06c;
            case 0x27B070u: goto label_27b070;
            case 0x27B074u: goto label_27b074;
            case 0x27B078u: goto label_27b078;
            case 0x27B07Cu: goto label_27b07c;
            case 0x27B080u: goto label_27b080;
            case 0x27B084u: goto label_27b084;
            case 0x27B088u: goto label_27b088;
            case 0x27B08Cu: goto label_27b08c;
            case 0x27B090u: goto label_27b090;
            default: break;
        }
        return;
    }
label_fallthrough_0x27b08c:
    ctx->pc = 0x27B094u;
}
