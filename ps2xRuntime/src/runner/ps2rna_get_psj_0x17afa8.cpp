#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ps2rna_get_psj
// Address: 0x17afa8 - 0x17b060
void ps2rna_get_psj_0x17afa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2rna_get_psj");


    ctx->pc = 0x17afa8u;

label_17afa8:
    // 0x17afa8: 0x27bdffe0
    ctx->pc = 0x17afa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_17afac:
    // 0x17afac: 0x8f8482bc
    ctx->pc = 0x17afacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
label_17afb0:
    // 0x17afb0: 0xffb00000
    ctx->pc = 0x17afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17afb4:
    // 0x17afb4: 0x282d
    ctx->pc = 0x17afb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17afb8:
    // 0x17afb8: 0xffbf0010
    ctx->pc = 0x17afb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17afbc:
    // 0x17afbc: 0x18800010
label_17afc0:
    if (ctx->pc == 0x17AFC0u) {
        ctx->pc = 0x17AFC0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17AFC4u;
        goto label_17afc4;
    }
    ctx->pc = 0x17AFBCu;
    {
        const bool branch_taken_0x17afbc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x17AFC0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17afbc) {
            ctx->pc = 0x17B000u;
            goto label_17b000;
        }
    }
    ctx->pc = 0x17AFC4u;
label_17afc4:
    // 0x17afc4: 0x3c020024
    ctx->pc = 0x17afc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17afc8:
    // 0x17afc8: 0x8043d7e0
    ctx->pc = 0x17afc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957024)));
label_17afcc:
    // 0x17afcc: 0x1060000c
label_17afd0:
    if (ctx->pc == 0x17AFD0u) {
        ctx->pc = 0x17AFD0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294957024));
        ctx->pc = 0x17AFD4u;
        goto label_17afd4;
    }
    ctx->pc = 0x17AFCCu;
    {
        const bool branch_taken_0x17afcc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AFD0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294957024));
        if (branch_taken_0x17afcc) {
            ctx->pc = 0x17B000u;
            goto label_17b000;
        }
    }
    ctx->pc = 0x17AFD4u;
label_17afd4:
    // 0x17afd4: 0x80302d
    ctx->pc = 0x17afd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17afd8:
    // 0x17afd8: 0x200182d
    ctx->pc = 0x17afd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17afdc:
    // 0x17afdc: 0x200202d
    ctx->pc = 0x17afdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17afe0:
    // 0x17afe0: 0x24a50001
    ctx->pc = 0x17afe0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_17afe4:
    // 0x17afe4: 0x24840018
    ctx->pc = 0x17afe4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24));
label_17afe8:
    // 0x17afe8: 0xa6102a
    ctx->pc = 0x17afe8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
label_17afec:
    // 0x17afec: 0x10400004
label_17aff0:
    if (ctx->pc == 0x17AFF0u) {
        ctx->pc = 0x17AFF0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24));
        ctx->pc = 0x17AFF4u;
        goto label_17aff4;
    }
    ctx->pc = 0x17AFECu;
    {
        const bool branch_taken_0x17afec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AFF0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24));
        if (branch_taken_0x17afec) {
            ctx->pc = 0x17B000u;
            goto label_17b000;
        }
    }
    ctx->pc = 0x17AFF4u;
label_17aff4:
    // 0x17aff4: 0x80820000
    ctx->pc = 0x17aff4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_17aff8:
    // 0x17aff8: 0x1440fff9
label_17affc:
    if (ctx->pc == 0x17AFFCu) {
        ctx->pc = 0x17AFFCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B000u;
        goto label_17b000;
    }
    ctx->pc = 0x17AFF8u;
    {
        const bool branch_taken_0x17aff8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17AFFCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17aff8) {
            ctx->pc = 0x17AFE0u;
            goto label_17afe0;
        }
    }
    ctx->pc = 0x17B000u;
label_17b000:
    // 0x17b000: 0x24020008
    ctx->pc = 0x17b000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_17b004:
    // 0x17b004: 0x54a20003
label_17b008:
    if (ctx->pc == 0x17B008u) {
        ctx->pc = 0x17B008u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x17B00Cu;
        goto label_17b00c;
    }
    ctx->pc = 0x17B004u;
    {
        const bool branch_taken_0x17b004 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x17b004) {
            ctx->pc = 0x17B008u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x17B014u;
            goto label_17b014;
        }
    }
    ctx->pc = 0x17B00Cu;
label_17b00c:
    // 0x17b00c: 0x10000010
label_17b010:
    if (ctx->pc == 0x17B010u) {
        ctx->pc = 0x17B010u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B014u;
        goto label_17b014;
    }
    ctx->pc = 0x17B00Cu;
    {
        const bool branch_taken_0x17b00c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B010u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b00c) {
            ctx->pc = 0x17B050u;
            goto label_17b050;
        }
    }
    ctx->pc = 0x17B014u;
label_17b014:
    // 0x17b014: 0x8c830000
    ctx->pc = 0x17b014u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b018:
    // 0x17b018: 0x8c620014
    ctx->pc = 0x17b018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_17b01c:
    // 0x17b01c: 0x40f809
label_17b020:
    if (ctx->pc == 0x17B020u) {
        ctx->pc = 0x17B024u;
        goto label_17b024;
    }
    ctx->pc = 0x17B01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B024u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AFA8u: goto label_17afa8;
            case 0x17AFACu: goto label_17afac;
            case 0x17AFB0u: goto label_17afb0;
            case 0x17AFB4u: goto label_17afb4;
            case 0x17AFB8u: goto label_17afb8;
            case 0x17AFBCu: goto label_17afbc;
            case 0x17AFC0u: goto label_17afc0;
            case 0x17AFC4u: goto label_17afc4;
            case 0x17AFC8u: goto label_17afc8;
            case 0x17AFCCu: goto label_17afcc;
            case 0x17AFD0u: goto label_17afd0;
            case 0x17AFD4u: goto label_17afd4;
            case 0x17AFD8u: goto label_17afd8;
            case 0x17AFDCu: goto label_17afdc;
            case 0x17AFE0u: goto label_17afe0;
            case 0x17AFE4u: goto label_17afe4;
            case 0x17AFE8u: goto label_17afe8;
            case 0x17AFECu: goto label_17afec;
            case 0x17AFF0u: goto label_17aff0;
            case 0x17AFF4u: goto label_17aff4;
            case 0x17AFF8u: goto label_17aff8;
            case 0x17AFFCu: goto label_17affc;
            case 0x17B000u: goto label_17b000;
            case 0x17B004u: goto label_17b004;
            case 0x17B008u: goto label_17b008;
            case 0x17B00Cu: goto label_17b00c;
            case 0x17B010u: goto label_17b010;
            case 0x17B014u: goto label_17b014;
            case 0x17B018u: goto label_17b018;
            case 0x17B01Cu: goto label_17b01c;
            case 0x17B020u: goto label_17b020;
            case 0x17B024u: goto label_17b024;
            case 0x17B028u: goto label_17b028;
            case 0x17B02Cu: goto label_17b02c;
            case 0x17B030u: goto label_17b030;
            case 0x17B034u: goto label_17b034;
            case 0x17B038u: goto label_17b038;
            case 0x17B03Cu: goto label_17b03c;
            case 0x17B040u: goto label_17b040;
            case 0x17B044u: goto label_17b044;
            case 0x17B048u: goto label_17b048;
            case 0x17B04Cu: goto label_17b04c;
            case 0x17B050u: goto label_17b050;
            case 0x17B054u: goto label_17b054;
            case 0x17B058u: goto label_17b058;
            case 0x17B05Cu: goto label_17b05c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17B024u; }
            if (ctx->pc != 0x17B024u) { return; }
        }
    }
    ctx->pc = 0x17B024u;
label_17b024:
    // 0x17b024: 0x8e040008
    ctx->pc = 0x17b024u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17b028:
    // 0x17b028: 0x282d
    ctx->pc = 0x17b028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b02c:
    // 0x17b02c: 0x8c830000
    ctx->pc = 0x17b02cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b030:
    // 0x17b030: 0x8c620020
    ctx->pc = 0x17b030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17b034:
    // 0x17b034: 0x40f809
label_17b038:
    if (ctx->pc == 0x17B038u) {
        ctx->pc = 0x17B038u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x17B03Cu;
        goto label_17b03c;
    }
    ctx->pc = 0x17B034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B03Cu);
        ctx->pc = 0x17B038u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AFA8u: goto label_17afa8;
            case 0x17AFACu: goto label_17afac;
            case 0x17AFB0u: goto label_17afb0;
            case 0x17AFB4u: goto label_17afb4;
            case 0x17AFB8u: goto label_17afb8;
            case 0x17AFBCu: goto label_17afbc;
            case 0x17AFC0u: goto label_17afc0;
            case 0x17AFC4u: goto label_17afc4;
            case 0x17AFC8u: goto label_17afc8;
            case 0x17AFCCu: goto label_17afcc;
            case 0x17AFD0u: goto label_17afd0;
            case 0x17AFD4u: goto label_17afd4;
            case 0x17AFD8u: goto label_17afd8;
            case 0x17AFDCu: goto label_17afdc;
            case 0x17AFE0u: goto label_17afe0;
            case 0x17AFE4u: goto label_17afe4;
            case 0x17AFE8u: goto label_17afe8;
            case 0x17AFECu: goto label_17afec;
            case 0x17AFF0u: goto label_17aff0;
            case 0x17AFF4u: goto label_17aff4;
            case 0x17AFF8u: goto label_17aff8;
            case 0x17AFFCu: goto label_17affc;
            case 0x17B000u: goto label_17b000;
            case 0x17B004u: goto label_17b004;
            case 0x17B008u: goto label_17b008;
            case 0x17B00Cu: goto label_17b00c;
            case 0x17B010u: goto label_17b010;
            case 0x17B014u: goto label_17b014;
            case 0x17B018u: goto label_17b018;
            case 0x17B01Cu: goto label_17b01c;
            case 0x17B020u: goto label_17b020;
            case 0x17B024u: goto label_17b024;
            case 0x17B028u: goto label_17b028;
            case 0x17B02Cu: goto label_17b02c;
            case 0x17B030u: goto label_17b030;
            case 0x17B034u: goto label_17b034;
            case 0x17B038u: goto label_17b038;
            case 0x17B03Cu: goto label_17b03c;
            case 0x17B040u: goto label_17b040;
            case 0x17B044u: goto label_17b044;
            case 0x17B048u: goto label_17b048;
            case 0x17B04Cu: goto label_17b04c;
            case 0x17B050u: goto label_17b050;
            case 0x17B054u: goto label_17b054;
            case 0x17B058u: goto label_17b058;
            case 0x17B05Cu: goto label_17b05c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17B03Cu; }
            if (ctx->pc != 0x17B03Cu) { return; }
        }
    }
    ctx->pc = 0x17B03Cu;
label_17b03c:
    // 0x17b03c: 0xc05f52a
label_17b040:
    if (ctx->pc == 0x17B040u) {
        ctx->pc = 0x17B040u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x17B044u;
        goto label_17b044;
    }
    ctx->pc = 0x17B03Cu;
    SET_GPR_U32(ctx, 31, 0x17B044u);
    ctx->pc = 0x17B040u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x17D4A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRMT_Reset_0x17d4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B044u; }
        else if (ctx->pc != 0x17B044u) { ctx->pc = 0x17B044u; }
    }
    if (ctx->pc != 0x17B044u) { return; }
    ctx->pc = 0x17B044u;
label_17b044:
    // 0x17b044: 0x24030001
    ctx->pc = 0x17b044u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_17b048:
    // 0x17b048: 0x200102d
    ctx->pc = 0x17b048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b04c:
    // 0x17b04c: 0xa2030000
    ctx->pc = 0x17b04cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_17b050:
    // 0x17b050: 0xdfbf0010
    ctx->pc = 0x17b050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b054:
    // 0x17b054: 0xdfb00000
    ctx->pc = 0x17b054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b058:
    // 0x17b058: 0x3e00008
label_17b05c:
    if (ctx->pc == 0x17B05Cu) {
        ctx->pc = 0x17B05Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x17B060u;
        goto label_fallthrough_0x17b058;
    }
    ctx->pc = 0x17B058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B05Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AFA8u: goto label_17afa8;
            case 0x17AFACu: goto label_17afac;
            case 0x17AFB0u: goto label_17afb0;
            case 0x17AFB4u: goto label_17afb4;
            case 0x17AFB8u: goto label_17afb8;
            case 0x17AFBCu: goto label_17afbc;
            case 0x17AFC0u: goto label_17afc0;
            case 0x17AFC4u: goto label_17afc4;
            case 0x17AFC8u: goto label_17afc8;
            case 0x17AFCCu: goto label_17afcc;
            case 0x17AFD0u: goto label_17afd0;
            case 0x17AFD4u: goto label_17afd4;
            case 0x17AFD8u: goto label_17afd8;
            case 0x17AFDCu: goto label_17afdc;
            case 0x17AFE0u: goto label_17afe0;
            case 0x17AFE4u: goto label_17afe4;
            case 0x17AFE8u: goto label_17afe8;
            case 0x17AFECu: goto label_17afec;
            case 0x17AFF0u: goto label_17aff0;
            case 0x17AFF4u: goto label_17aff4;
            case 0x17AFF8u: goto label_17aff8;
            case 0x17AFFCu: goto label_17affc;
            case 0x17B000u: goto label_17b000;
            case 0x17B004u: goto label_17b004;
            case 0x17B008u: goto label_17b008;
            case 0x17B00Cu: goto label_17b00c;
            case 0x17B010u: goto label_17b010;
            case 0x17B014u: goto label_17b014;
            case 0x17B018u: goto label_17b018;
            case 0x17B01Cu: goto label_17b01c;
            case 0x17B020u: goto label_17b020;
            case 0x17B024u: goto label_17b024;
            case 0x17B028u: goto label_17b028;
            case 0x17B02Cu: goto label_17b02c;
            case 0x17B030u: goto label_17b030;
            case 0x17B034u: goto label_17b034;
            case 0x17B038u: goto label_17b038;
            case 0x17B03Cu: goto label_17b03c;
            case 0x17B040u: goto label_17b040;
            case 0x17B044u: goto label_17b044;
            case 0x17B048u: goto label_17b048;
            case 0x17B04Cu: goto label_17b04c;
            case 0x17B050u: goto label_17b050;
            case 0x17B054u: goto label_17b054;
            case 0x17B058u: goto label_17b058;
            case 0x17B05Cu: goto label_17b05c;
            default: break;
        }
        return;
    }
label_fallthrough_0x17b058:
    ctx->pc = 0x17B060u;
}
