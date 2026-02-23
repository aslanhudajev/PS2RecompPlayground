#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ps2rna_finish_psj
// Address: 0x17aed0 - 0x17afa4
void ps2rna_finish_psj_0x17aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2rna_finish_psj");


    ctx->pc = 0x17aed0u;

label_17aed0:
    // 0x17aed0: 0x27bdffc0
    ctx->pc = 0x17aed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_17aed4:
    // 0x17aed4: 0x8f8282bc
    ctx->pc = 0x17aed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
label_17aed8:
    // 0x17aed8: 0xffb10010
    ctx->pc = 0x17aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17aedc:
    // 0x17aedc: 0xffbf0030
    ctx->pc = 0x17aedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17aee0:
    // 0x17aee0: 0x882d
    ctx->pc = 0x17aee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17aee4:
    // 0x17aee4: 0xffb20020
    ctx->pc = 0x17aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17aee8:
    // 0x17aee8: 0x18400020
label_17aeec:
    if (ctx->pc == 0x17AEECu) {
        ctx->pc = 0x17AEECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x17AEF0u;
        goto label_17aef0;
    }
    ctx->pc = 0x17AEE8u;
    {
        const bool branch_taken_0x17aee8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17AEECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x17aee8) {
            ctx->pc = 0x17AF6Cu;
            goto label_17af6c;
        }
    }
    ctx->pc = 0x17AEF0u;
label_17aef0:
    // 0x17aef0: 0x3c120024
    ctx->pc = 0x17aef0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)36 << 16));
label_17aef4:
    // 0x17aef4: 0x24020018
    ctx->pc = 0x17aef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
label_17aef8:
    // 0x17aef8: 0x2643d7e0
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294957024));
label_17aefc:
    // 0x17aefc: 0x2221018
    ctx->pc = 0x17aefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_17af00:
    // 0x17af00: 0x438021
    ctx->pc = 0x17af00u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17af04:
    // 0x17af04: 0x8e040004
    ctx->pc = 0x17af04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17af08:
    // 0x17af08: 0x50800004
label_17af0c:
    if (ctx->pc == 0x17AF0Cu) {
        ctx->pc = 0x17AF0Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x17AF10u;
        goto label_17af10;
    }
    ctx->pc = 0x17AF08u;
    {
        const bool branch_taken_0x17af08 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x17af08) {
            ctx->pc = 0x17AF0Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x17AF1Cu;
            goto label_17af1c;
        }
    }
    ctx->pc = 0x17AF10u;
label_17af10:
    // 0x17af10: 0xc05f504
label_17af14:
    if (ctx->pc == 0x17AF14u) {
        ctx->pc = 0x17AF18u;
        goto label_17af18;
    }
    ctx->pc = 0x17AF10u;
    SET_GPR_U32(ctx, 31, 0x17AF18u);
    ctx->pc = 0x17D410u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRMT_Destroy_0x17d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF18u; }
        else if (ctx->pc != 0x17AF18u) { ctx->pc = 0x17AF18u; }
    }
    if (ctx->pc != 0x17AF18u) { return; }
    ctx->pc = 0x17AF18u;
label_17af18:
    // 0x17af18: 0x8e040008
    ctx->pc = 0x17af18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17af1c:
    // 0x17af1c: 0x50800006
label_17af20:
    if (ctx->pc == 0x17AF20u) {
        ctx->pc = 0x17AF20u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x17AF24u;
        goto label_17af24;
    }
    ctx->pc = 0x17AF1Cu;
    {
        const bool branch_taken_0x17af1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x17af1c) {
            ctx->pc = 0x17AF20u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x17AF38u;
            goto label_17af38;
        }
    }
    ctx->pc = 0x17AF24u;
label_17af24:
    // 0x17af24: 0x8c830000
    ctx->pc = 0x17af24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17af28:
    // 0x17af28: 0x8c62000c
    ctx->pc = 0x17af28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17af2c:
    // 0x17af2c: 0x40f809
label_17af30:
    if (ctx->pc == 0x17AF30u) {
        ctx->pc = 0x17AF34u;
        goto label_17af34;
    }
    ctx->pc = 0x17AF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17AF34u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AED0u: goto label_17aed0;
            case 0x17AED4u: goto label_17aed4;
            case 0x17AED8u: goto label_17aed8;
            case 0x17AEDCu: goto label_17aedc;
            case 0x17AEE0u: goto label_17aee0;
            case 0x17AEE4u: goto label_17aee4;
            case 0x17AEE8u: goto label_17aee8;
            case 0x17AEECu: goto label_17aeec;
            case 0x17AEF0u: goto label_17aef0;
            case 0x17AEF4u: goto label_17aef4;
            case 0x17AEF8u: goto label_17aef8;
            case 0x17AEFCu: goto label_17aefc;
            case 0x17AF00u: goto label_17af00;
            case 0x17AF04u: goto label_17af04;
            case 0x17AF08u: goto label_17af08;
            case 0x17AF0Cu: goto label_17af0c;
            case 0x17AF10u: goto label_17af10;
            case 0x17AF14u: goto label_17af14;
            case 0x17AF18u: goto label_17af18;
            case 0x17AF1Cu: goto label_17af1c;
            case 0x17AF20u: goto label_17af20;
            case 0x17AF24u: goto label_17af24;
            case 0x17AF28u: goto label_17af28;
            case 0x17AF2Cu: goto label_17af2c;
            case 0x17AF30u: goto label_17af30;
            case 0x17AF34u: goto label_17af34;
            case 0x17AF38u: goto label_17af38;
            case 0x17AF3Cu: goto label_17af3c;
            case 0x17AF40u: goto label_17af40;
            case 0x17AF44u: goto label_17af44;
            case 0x17AF48u: goto label_17af48;
            case 0x17AF4Cu: goto label_17af4c;
            case 0x17AF50u: goto label_17af50;
            case 0x17AF54u: goto label_17af54;
            case 0x17AF58u: goto label_17af58;
            case 0x17AF5Cu: goto label_17af5c;
            case 0x17AF60u: goto label_17af60;
            case 0x17AF64u: goto label_17af64;
            case 0x17AF68u: goto label_17af68;
            case 0x17AF6Cu: goto label_17af6c;
            case 0x17AF70u: goto label_17af70;
            case 0x17AF74u: goto label_17af74;
            case 0x17AF78u: goto label_17af78;
            case 0x17AF7Cu: goto label_17af7c;
            case 0x17AF80u: goto label_17af80;
            case 0x17AF84u: goto label_17af84;
            case 0x17AF88u: goto label_17af88;
            case 0x17AF8Cu: goto label_17af8c;
            case 0x17AF90u: goto label_17af90;
            case 0x17AF94u: goto label_17af94;
            case 0x17AF98u: goto label_17af98;
            case 0x17AF9Cu: goto label_17af9c;
            case 0x17AFA0u: goto label_17afa0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17AF34u; }
            if (ctx->pc != 0x17AF34u) { return; }
        }
    }
    ctx->pc = 0x17AF34u;
label_17af34:
    // 0x17af34: 0x8e04000c
    ctx->pc = 0x17af34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17af38:
    // 0x17af38: 0x50800004
label_17af3c:
    if (ctx->pc == 0x17AF3Cu) {
        ctx->pc = 0x17AF3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17AF40u;
        goto label_17af40;
    }
    ctx->pc = 0x17AF38u;
    {
        const bool branch_taken_0x17af38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x17af38) {
            ctx->pc = 0x17AF3Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x17AF4Cu;
            goto label_17af4c;
        }
    }
    ctx->pc = 0x17AF40u;
label_17af40:
    // 0x17af40: 0xc05f6d0
label_17af44:
    if (ctx->pc == 0x17AF44u) {
        ctx->pc = 0x17AF48u;
        goto label_17af48;
    }
    ctx->pc = 0x17AF40u;
    SET_GPR_U32(ctx, 31, 0x17AF48u);
    ctx->pc = 0x17DB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJX_Destroy_0x17db40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF48u; }
        else if (ctx->pc != 0x17AF48u) { ctx->pc = 0x17AF48u; }
    }
    if (ctx->pc != 0x17AF48u) { return; }
    ctx->pc = 0x17AF48u;
label_17af48:
    // 0x17af48: 0x200202d
    ctx->pc = 0x17af48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17af4c:
    // 0x17af4c: 0x282d
    ctx->pc = 0x17af4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af50:
    // 0x17af50: 0x24060018
    ctx->pc = 0x17af50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
label_17af54:
    // 0x17af54: 0xc050cfe
label_17af58:
    if (ctx->pc == 0x17AF58u) {
        ctx->pc = 0x17AF58u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x17AF5Cu;
        goto label_17af5c;
    }
    ctx->pc = 0x17AF54u;
    SET_GPR_U32(ctx, 31, 0x17AF5Cu);
    ctx->pc = 0x17AF58u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF5Cu; }
        else if (ctx->pc != 0x17AF5Cu) { ctx->pc = 0x17AF5Cu; }
    }
    if (ctx->pc != 0x17AF5Cu) { return; }
    ctx->pc = 0x17AF5Cu;
label_17af5c:
    // 0x17af5c: 0x8f8382bc
    ctx->pc = 0x17af5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
label_17af60:
    // 0x17af60: 0x223182a
    ctx->pc = 0x17af60u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
label_17af64:
    // 0x17af64: 0x1460ffe4
label_17af68:
    if (ctx->pc == 0x17AF68u) {
        ctx->pc = 0x17AF68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x17AF6Cu;
        goto label_17af6c;
    }
    ctx->pc = 0x17AF64u;
    {
        const bool branch_taken_0x17af64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17AF68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x17af64) {
            ctx->pc = 0x17AEF8u;
            goto label_17aef8;
        }
    }
    ctx->pc = 0x17AF6Cu;
label_17af6c:
    // 0x17af6c: 0x838382cc
    ctx->pc = 0x17af6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935244)));
label_17af70:
    // 0x17af70: 0x24020001
    ctx->pc = 0x17af70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_17af74:
    // 0x17af74: 0x14620006
label_17af78:
    if (ctx->pc == 0x17AF78u) {
        ctx->pc = 0x17AF78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17AF7Cu;
        goto label_17af7c;
    }
    ctx->pc = 0x17AF74u;
    {
        const bool branch_taken_0x17af74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17AF78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17af74) {
            ctx->pc = 0x17AF90u;
            goto label_17af90;
        }
    }
    ctx->pc = 0x17AF7Cu;
label_17af7c:
    // 0x17af7c: 0xc056e14
label_17af80:
    if (ctx->pc == 0x17AF80u) {
        ctx->pc = 0x17AF80u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
        ctx->pc = 0x17AF84u;
        goto label_17af84;
    }
    ctx->pc = 0x17AF7Cu;
    SET_GPR_U32(ctx, 31, 0x17AF84u);
    ctx->pc = 0x17AF80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
    ctx->pc = 0x15B850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x15b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF84u; }
        else if (ctx->pc != 0x17AF84u) { ctx->pc = 0x17AF84u; }
    }
    if (ctx->pc != 0x17AF84u) { return; }
    ctx->pc = 0x17AF84u;
label_17af84:
    // 0x17af84: 0xaf8082c4
    ctx->pc = 0x17af84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 0));
label_17af88:
    // 0x17af88: 0xa38082cc
    ctx->pc = 0x17af88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935244), (uint8_t)GPR_U32(ctx, 0));
label_17af8c:
    // 0x17af8c: 0xdfbf0030
    ctx->pc = 0x17af8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17af90:
    // 0x17af90: 0xdfb20020
    ctx->pc = 0x17af90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17af94:
    // 0x17af94: 0xdfb10010
    ctx->pc = 0x17af94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17af98:
    // 0x17af98: 0xdfb00000
    ctx->pc = 0x17af98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17af9c:
    // 0x17af9c: 0x3e00008
label_17afa0:
    if (ctx->pc == 0x17AFA0u) {
        ctx->pc = 0x17AFA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17AFA4u;
        goto label_fallthrough_0x17af9c;
    }
    ctx->pc = 0x17AF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AFA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AED0u: goto label_17aed0;
            case 0x17AED4u: goto label_17aed4;
            case 0x17AED8u: goto label_17aed8;
            case 0x17AEDCu: goto label_17aedc;
            case 0x17AEE0u: goto label_17aee0;
            case 0x17AEE4u: goto label_17aee4;
            case 0x17AEE8u: goto label_17aee8;
            case 0x17AEECu: goto label_17aeec;
            case 0x17AEF0u: goto label_17aef0;
            case 0x17AEF4u: goto label_17aef4;
            case 0x17AEF8u: goto label_17aef8;
            case 0x17AEFCu: goto label_17aefc;
            case 0x17AF00u: goto label_17af00;
            case 0x17AF04u: goto label_17af04;
            case 0x17AF08u: goto label_17af08;
            case 0x17AF0Cu: goto label_17af0c;
            case 0x17AF10u: goto label_17af10;
            case 0x17AF14u: goto label_17af14;
            case 0x17AF18u: goto label_17af18;
            case 0x17AF1Cu: goto label_17af1c;
            case 0x17AF20u: goto label_17af20;
            case 0x17AF24u: goto label_17af24;
            case 0x17AF28u: goto label_17af28;
            case 0x17AF2Cu: goto label_17af2c;
            case 0x17AF30u: goto label_17af30;
            case 0x17AF34u: goto label_17af34;
            case 0x17AF38u: goto label_17af38;
            case 0x17AF3Cu: goto label_17af3c;
            case 0x17AF40u: goto label_17af40;
            case 0x17AF44u: goto label_17af44;
            case 0x17AF48u: goto label_17af48;
            case 0x17AF4Cu: goto label_17af4c;
            case 0x17AF50u: goto label_17af50;
            case 0x17AF54u: goto label_17af54;
            case 0x17AF58u: goto label_17af58;
            case 0x17AF5Cu: goto label_17af5c;
            case 0x17AF60u: goto label_17af60;
            case 0x17AF64u: goto label_17af64;
            case 0x17AF68u: goto label_17af68;
            case 0x17AF6Cu: goto label_17af6c;
            case 0x17AF70u: goto label_17af70;
            case 0x17AF74u: goto label_17af74;
            case 0x17AF78u: goto label_17af78;
            case 0x17AF7Cu: goto label_17af7c;
            case 0x17AF80u: goto label_17af80;
            case 0x17AF84u: goto label_17af84;
            case 0x17AF88u: goto label_17af88;
            case 0x17AF8Cu: goto label_17af8c;
            case 0x17AF90u: goto label_17af90;
            case 0x17AF94u: goto label_17af94;
            case 0x17AF98u: goto label_17af98;
            case 0x17AF9Cu: goto label_17af9c;
            case 0x17AFA0u: goto label_17afa0;
            default: break;
        }
        return;
    }
label_fallthrough_0x17af9c:
    ctx->pc = 0x17AFA4u;
}
