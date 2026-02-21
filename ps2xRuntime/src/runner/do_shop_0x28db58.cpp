#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_shop
// Address: 0x28db58 - 0x28dfb8
void do_shop_0x28db58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28db58u;

label_28db58:
    // 0x28db58: 0x27bdffa0
    ctx->pc = 0x28db58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_28db5c:
    // 0x28db5c: 0xffbf0050
    ctx->pc = 0x28db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28db60:
    // 0x28db60: 0xffb40040
    ctx->pc = 0x28db60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_28db64:
    // 0x28db64: 0xffb30030
    ctx->pc = 0x28db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_28db68:
    // 0x28db68: 0xffb20020
    ctx->pc = 0x28db68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_28db6c:
    // 0x28db6c: 0xffb10010
    ctx->pc = 0x28db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28db70:
    // 0x28db70: 0xffb00000
    ctx->pc = 0x28db70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28db74:
    // 0x28db74: 0x24120001
    ctx->pc = 0x28db74u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_28db78:
    // 0x28db78: 0xc0a179e
label_28db7c:
    if (ctx->pc == 0x28DB7Cu) {
        ctx->pc = 0x28DB7Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DB80u;
        goto label_28db80;
    }
    ctx->pc = 0x28DB78u;
    SET_GPR_U32(ctx, 31, 0x28DB80u);
    ctx->pc = 0x28DB7Cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x285E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SelectLoadDone_0x285e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DB80u; }
    }
    if (ctx->pc != 0x28DB80u) { return; }
    ctx->pc = 0x28DB80u;
label_28db80:
    // 0x28db80: 0x40802d
    ctx->pc = 0x28db80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28db84:
    // 0x28db84: 0x12000006
label_28db88:
    if (ctx->pc == 0x28DB88u) {
        ctx->pc = 0x28DB88u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x28DB8Cu;
        goto label_28db8c;
    }
    ctx->pc = 0x28DB84u;
    {
        const bool branch_taken_0x28db84 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DB88u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x28db84) {
            ctx->pc = 0x28DBA0u;
            goto label_28dba0;
        }
    }
    ctx->pc = 0x28DB8Cu;
label_28db8c:
    // 0x28db8c: 0x8c423ef0
    ctx->pc = 0x28db8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16112)));
label_28db90:
    // 0x28db90: 0x14400003
label_28db94:
    if (ctx->pc == 0x28DB94u) {
        ctx->pc = 0x28DB98u;
        goto label_28db98;
    }
    ctx->pc = 0x28DB90u;
    {
        const bool branch_taken_0x28db90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28db90) {
            ctx->pc = 0x28DBA0u;
            goto label_28dba0;
        }
    }
    ctx->pc = 0x28DB98u;
label_28db98:
    // 0x28db98: 0xc0a2dea
label_28db9c:
    if (ctx->pc == 0x28DB9Cu) {
        ctx->pc = 0x28DBA0u;
        goto label_28dba0;
    }
    ctx->pc = 0x28DB98u;
    SET_GPR_U32(ctx, 31, 0x28DBA0u);
    ctx->pc = 0x28B7A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        shop_setup_0x28b7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DBA0u; }
    }
    if (ctx->pc != 0x28DBA0u) { return; }
    ctx->pc = 0x28DBA0u;
label_28dba0:
    // 0x28dba0: 0xc08da4e
label_28dba4:
    if (ctx->pc == 0x28DBA4u) {
        ctx->pc = 0x28DBA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28DBA8u;
        goto label_28dba8;
    }
    ctx->pc = 0x28DBA0u;
    SET_GPR_U32(ctx, 31, 0x28DBA8u);
    ctx->pc = 0x28DBA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DBA8u; }
    }
    if (ctx->pc != 0x28DBA8u) { return; }
    ctx->pc = 0x28DBA8u;
label_28dba8:
    // 0x28dba8: 0x1600000c
label_28dbac:
    if (ctx->pc == 0x28DBACu) {
        ctx->pc = 0x28DBACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x28DBB0u;
        goto label_28dbb0;
    }
    ctx->pc = 0x28DBA8u;
    {
        const bool branch_taken_0x28dba8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x28DBACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28dba8) {
            ctx->pc = 0x28DBDCu;
            goto label_28dbdc;
        }
    }
    ctx->pc = 0x28DBB0u;
label_28dbb0:
    // 0x28dbb0: 0xc089a32
label_28dbb4:
    if (ctx->pc == 0x28DBB4u) {
        ctx->pc = 0x28DBB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DBB8u;
        goto label_28dbb8;
    }
    ctx->pc = 0x28DBB0u;
    SET_GPR_U32(ctx, 31, 0x28DBB8u);
    ctx->pc = 0x28DBB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2268C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransitionBlitShow_0x2268c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DBB8u; }
    }
    if (ctx->pc != 0x28DBB8u) { return; }
    ctx->pc = 0x28DBB8u;
label_28dbb8:
    // 0x28dbb8: 0x24040154
    ctx->pc = 0x28dbb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 340));
label_28dbbc:
    // 0x28dbbc: 0x24050104
    ctx->pc = 0x28dbbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 260));
label_28dbc0:
    // 0x28dbc0: 0x3c013f80
    ctx->pc = 0x28dbc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_28dbc4:
    // 0x28dbc4: 0x44816000
    ctx->pc = 0x28dbc4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28dbc8:
    // 0x28dbc8: 0x3c06003b
    ctx->pc = 0x28dbc8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_28dbcc:
    // 0x28dbcc: 0xc080a9a
label_28dbd0:
    if (ctx->pc == 0x28DBD0u) {
        ctx->pc = 0x28DBD0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294958120));
        ctx->pc = 0x28DBD4u;
        goto label_28dbd4;
    }
    ctx->pc = 0x28DBCCu;
    SET_GPR_U32(ctx, 31, 0x28DBD4u);
    ctx->pc = 0x28DBD0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294958120));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DBD4u; }
    }
    if (ctx->pc != 0x28DBD4u) { return; }
    ctx->pc = 0x28DBD4u;
label_28dbd4:
    // 0x28dbd4: 0x100000f0
label_28dbd8:
    if (ctx->pc == 0x28DBD8u) {
        ctx->pc = 0x28DBD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DBDCu;
        goto label_28dbdc;
    }
    ctx->pc = 0x28DBD4u;
    {
        const bool branch_taken_0x28dbd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DBD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28dbd4) {
            ctx->pc = 0x28DF98u;
            goto label_28df98;
        }
    }
    ctx->pc = 0x28DBDCu;
label_28dbdc:
    // 0x28dbdc: 0x8c42b45c
    ctx->pc = 0x28dbdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947932)));
label_28dbe0:
    // 0x28dbe0: 0x144000d4
label_28dbe4:
    if (ctx->pc == 0x28DBE4u) {
        ctx->pc = 0x28DBE8u;
        goto label_28dbe8;
    }
    ctx->pc = 0x28DBE0u;
    {
        const bool branch_taken_0x28dbe0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28dbe0) {
            ctx->pc = 0x28DF34u;
            goto label_28df34;
        }
    }
    ctx->pc = 0x28DBE8u;
label_28dbe8:
    // 0x28dbe8: 0xc089a64
label_28dbec:
    if (ctx->pc == 0x28DBECu) {
        ctx->pc = 0x28DBF0u;
        goto label_28dbf0;
    }
    ctx->pc = 0x28DBE8u;
    SET_GPR_U32(ctx, 31, 0x28DBF0u);
    ctx->pc = 0x226990u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransitionBlitHide_0x226990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DBF0u; }
    }
    if (ctx->pc != 0x28DBF0u) { return; }
    ctx->pc = 0x28DBF0u;
label_28dbf0:
    // 0x28dbf0: 0x3c020031
    ctx->pc = 0x28dbf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_28dbf4:
    // 0x28dbf4: 0x8c42ff9c
    ctx->pc = 0x28dbf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_28dbf8:
    // 0x28dbf8: 0x544000ce
label_28dbfc:
    if (ctx->pc == 0x28DBFCu) {
        ctx->pc = 0x28DBFCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DC00u;
        goto label_28dc00;
    }
    ctx->pc = 0x28DBF8u;
    {
        const bool branch_taken_0x28dbf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28dbf8) {
            ctx->pc = 0x28DBFCu;
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x28DF34u;
            goto label_28df34;
        }
    }
    ctx->pc = 0x28DC00u;
label_28dc00:
    // 0x28dc00: 0x3c020035
    ctx->pc = 0x28dc00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28dc04:
    // 0x28dc04: 0x8c429b88
    ctx->pc = 0x28dc04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941576)));
label_28dc08:
    // 0x28dc08: 0x10400003
label_28dc0c:
    if (ctx->pc == 0x28DC0Cu) {
        ctx->pc = 0x28DC0Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DC10u;
        goto label_28dc10;
    }
    ctx->pc = 0x28DC08u;
    {
        const bool branch_taken_0x28dc08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DC0Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28dc08) {
            ctx->pc = 0x28DC18u;
            goto label_28dc18;
        }
    }
    ctx->pc = 0x28DC10u;
label_28dc10:
    // 0x28dc10: 0x100000c8
label_28dc14:
    if (ctx->pc == 0x28DC14u) {
        ctx->pc = 0x28DC14u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DC18u;
        goto label_28dc18;
    }
    ctx->pc = 0x28DC10u;
    {
        const bool branch_taken_0x28dc10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DC14u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28dc10) {
            ctx->pc = 0x28DF34u;
            goto label_28df34;
        }
    }
    ctx->pc = 0x28DC18u;
label_28dc18:
    // 0x28dc18: 0x3c020032
    ctx->pc = 0x28dc18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_28dc1c:
    // 0x28dc1c: 0x24501bc0
    ctx->pc = 0x28dc1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
label_28dc20:
    // 0x28dc20: 0x8e0300fc
    ctx->pc = 0x28dc20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_28dc24:
    // 0x28dc24: 0x24020001
    ctx->pc = 0x28dc24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_28dc28:
    // 0x28dc28: 0x10620003
label_28dc2c:
    if (ctx->pc == 0x28DC2Cu) {
        ctx->pc = 0x28DC2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x28DC30u;
        goto label_28dc30;
    }
    ctx->pc = 0x28DC28u;
    {
        const bool branch_taken_0x28dc28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28DC2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x28dc28) {
            ctx->pc = 0x28DC38u;
            goto label_28dc38;
        }
    }
    ctx->pc = 0x28DC30u;
label_28dc30:
    // 0x28dc30: 0x546200bb
label_28dc34:
    if (ctx->pc == 0x28DC34u) {
        ctx->pc = 0x28DC34u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x28DC38u;
        goto label_28dc38;
    }
    ctx->pc = 0x28DC30u;
    {
        const bool branch_taken_0x28dc30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x28dc30) {
            ctx->pc = 0x28DC34u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x28DF20u;
            goto label_28df20;
        }
    }
    ctx->pc = 0x28DC38u;
label_28dc38:
    // 0x28dc38: 0x982d
    ctx->pc = 0x28dc38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28dc3c:
    // 0x28dc3c: 0x220202d
    ctx->pc = 0x28dc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28dc40:
    // 0x28dc40: 0x8e05000c
    ctx->pc = 0x28dc40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_28dc44:
    // 0x28dc44: 0xc093692
label_28dc48:
    if (ctx->pc == 0x28DC48u) {
        ctx->pc = 0x28DC48u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DC4Cu;
        goto label_28dc4c;
    }
    ctx->pc = 0x28DC44u;
    SET_GPR_U32(ctx, 31, 0x28DC4Cu);
    ctx->pc = 0x28DC48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DC4Cu; }
    }
    if (ctx->pc != 0x28DC4Cu) { return; }
    ctx->pc = 0x28DC4Cu;
label_28dc4c:
    // 0x28dc4c: 0x8e030980
    ctx->pc = 0x28dc4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_28dc50:
    // 0x28dc50: 0x2c620065
    ctx->pc = 0x28dc50u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 101));
label_28dc54:
    // 0x28dc54: 0x104000a9
label_28dc58:
    if (ctx->pc == 0x28DC58u) {
        ctx->pc = 0x28DC58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x28DC5Cu;
        goto label_28dc5c;
    }
    ctx->pc = 0x28DC54u;
    {
        const bool branch_taken_0x28dc54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DC58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x28dc54) {
            ctx->pc = 0x28DEFCu;
            goto label_28defc;
        }
    }
    ctx->pc = 0x28DC5Cu;
label_28dc5c:
    // 0x28dc5c: 0x2442dc40
    ctx->pc = 0x28dc5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958144));
label_28dc60:
    // 0x28dc60: 0x31880
    ctx->pc = 0x28dc60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_28dc64:
    // 0x28dc64: 0x621821
    ctx->pc = 0x28dc64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28dc68:
    // 0x28dc68: 0x8c620000
    ctx->pc = 0x28dc68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28dc6c:
    // 0x28dc6c: 0x400008
label_28dc70:
    if (ctx->pc == 0x28DC70u) {
        ctx->pc = 0x28DC74u;
        goto label_28dc74;
    }
    ctx->pc = 0x28DC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28DB58u: goto label_28db58;
            case 0x28DB5Cu: goto label_28db5c;
            case 0x28DB60u: goto label_28db60;
            case 0x28DB64u: goto label_28db64;
            case 0x28DB68u: goto label_28db68;
            case 0x28DB6Cu: goto label_28db6c;
            case 0x28DB70u: goto label_28db70;
            case 0x28DB74u: goto label_28db74;
            case 0x28DB78u: goto label_28db78;
            case 0x28DB7Cu: goto label_28db7c;
            case 0x28DB80u: goto label_28db80;
            case 0x28DB84u: goto label_28db84;
            case 0x28DB88u: goto label_28db88;
            case 0x28DB8Cu: goto label_28db8c;
            case 0x28DB90u: goto label_28db90;
            case 0x28DB94u: goto label_28db94;
            case 0x28DB98u: goto label_28db98;
            case 0x28DB9Cu: goto label_28db9c;
            case 0x28DBA0u: goto label_28dba0;
            case 0x28DBA4u: goto label_28dba4;
            case 0x28DBA8u: goto label_28dba8;
            case 0x28DBACu: goto label_28dbac;
            case 0x28DBB0u: goto label_28dbb0;
            case 0x28DBB4u: goto label_28dbb4;
            case 0x28DBB8u: goto label_28dbb8;
            case 0x28DBBCu: goto label_28dbbc;
            case 0x28DBC0u: goto label_28dbc0;
            case 0x28DBC4u: goto label_28dbc4;
            case 0x28DBC8u: goto label_28dbc8;
            case 0x28DBCCu: goto label_28dbcc;
            case 0x28DBD0u: goto label_28dbd0;
            case 0x28DBD4u: goto label_28dbd4;
            case 0x28DBD8u: goto label_28dbd8;
            case 0x28DBDCu: goto label_28dbdc;
            case 0x28DBE0u: goto label_28dbe0;
            case 0x28DBE4u: goto label_28dbe4;
            case 0x28DBE8u: goto label_28dbe8;
            case 0x28DBECu: goto label_28dbec;
            case 0x28DBF0u: goto label_28dbf0;
            case 0x28DBF4u: goto label_28dbf4;
            case 0x28DBF8u: goto label_28dbf8;
            case 0x28DBFCu: goto label_28dbfc;
            case 0x28DC00u: goto label_28dc00;
            case 0x28DC04u: goto label_28dc04;
            case 0x28DC08u: goto label_28dc08;
            case 0x28DC0Cu: goto label_28dc0c;
            case 0x28DC10u: goto label_28dc10;
            case 0x28DC14u: goto label_28dc14;
            case 0x28DC18u: goto label_28dc18;
            case 0x28DC1Cu: goto label_28dc1c;
            case 0x28DC20u: goto label_28dc20;
            case 0x28DC24u: goto label_28dc24;
            case 0x28DC28u: goto label_28dc28;
            case 0x28DC2Cu: goto label_28dc2c;
            case 0x28DC30u: goto label_28dc30;
            case 0x28DC34u: goto label_28dc34;
            case 0x28DC38u: goto label_28dc38;
            case 0x28DC3Cu: goto label_28dc3c;
            case 0x28DC40u: goto label_28dc40;
            case 0x28DC44u: goto label_28dc44;
            case 0x28DC48u: goto label_28dc48;
            case 0x28DC4Cu: goto label_28dc4c;
            case 0x28DC50u: goto label_28dc50;
            case 0x28DC54u: goto label_28dc54;
            case 0x28DC58u: goto label_28dc58;
            case 0x28DC5Cu: goto label_28dc5c;
            case 0x28DC60u: goto label_28dc60;
            case 0x28DC64u: goto label_28dc64;
            case 0x28DC68u: goto label_28dc68;
            case 0x28DC6Cu: goto label_28dc6c;
            case 0x28DC70u: goto label_28dc70;
            case 0x28DC74u: goto label_28dc74;
            case 0x28DC78u: goto label_28dc78;
            case 0x28DC7Cu: goto label_28dc7c;
            case 0x28DC80u: goto label_28dc80;
            case 0x28DC84u: goto label_28dc84;
            case 0x28DC88u: goto label_28dc88;
            case 0x28DC8Cu: goto label_28dc8c;
            case 0x28DC90u: goto label_28dc90;
            case 0x28DC94u: goto label_28dc94;
            case 0x28DC98u: goto label_28dc98;
            case 0x28DC9Cu: goto label_28dc9c;
            case 0x28DCA0u: goto label_28dca0;
            case 0x28DCA4u: goto label_28dca4;
            case 0x28DCA8u: goto label_28dca8;
            case 0x28DCACu: goto label_28dcac;
            case 0x28DCB0u: goto label_28dcb0;
            case 0x28DCB4u: goto label_28dcb4;
            case 0x28DCB8u: goto label_28dcb8;
            case 0x28DCBCu: goto label_28dcbc;
            case 0x28DCC0u: goto label_28dcc0;
            case 0x28DCC4u: goto label_28dcc4;
            case 0x28DCC8u: goto label_28dcc8;
            case 0x28DCCCu: goto label_28dccc;
            case 0x28DCD0u: goto label_28dcd0;
            case 0x28DCD4u: goto label_28dcd4;
            case 0x28DCD8u: goto label_28dcd8;
            case 0x28DCDCu: goto label_28dcdc;
            case 0x28DCE0u: goto label_28dce0;
            case 0x28DCE4u: goto label_28dce4;
            case 0x28DCE8u: goto label_28dce8;
            case 0x28DCECu: goto label_28dcec;
            case 0x28DCF0u: goto label_28dcf0;
            case 0x28DCF4u: goto label_28dcf4;
            case 0x28DCF8u: goto label_28dcf8;
            case 0x28DCFCu: goto label_28dcfc;
            case 0x28DD00u: goto label_28dd00;
            case 0x28DD04u: goto label_28dd04;
            case 0x28DD08u: goto label_28dd08;
            case 0x28DD0Cu: goto label_28dd0c;
            case 0x28DD10u: goto label_28dd10;
            case 0x28DD14u: goto label_28dd14;
            case 0x28DD18u: goto label_28dd18;
            case 0x28DD1Cu: goto label_28dd1c;
            case 0x28DD20u: goto label_28dd20;
            case 0x28DD24u: goto label_28dd24;
            case 0x28DD28u: goto label_28dd28;
            case 0x28DD2Cu: goto label_28dd2c;
            case 0x28DD30u: goto label_28dd30;
            case 0x28DD34u: goto label_28dd34;
            case 0x28DD38u: goto label_28dd38;
            case 0x28DD3Cu: goto label_28dd3c;
            case 0x28DD40u: goto label_28dd40;
            case 0x28DD44u: goto label_28dd44;
            case 0x28DD48u: goto label_28dd48;
            case 0x28DD4Cu: goto label_28dd4c;
            case 0x28DD50u: goto label_28dd50;
            case 0x28DD54u: goto label_28dd54;
            case 0x28DD58u: goto label_28dd58;
            case 0x28DD5Cu: goto label_28dd5c;
            case 0x28DD60u: goto label_28dd60;
            case 0x28DD64u: goto label_28dd64;
            case 0x28DD68u: goto label_28dd68;
            case 0x28DD6Cu: goto label_28dd6c;
            case 0x28DD70u: goto label_28dd70;
            case 0x28DD74u: goto label_28dd74;
            case 0x28DD78u: goto label_28dd78;
            case 0x28DD7Cu: goto label_28dd7c;
            case 0x28DD80u: goto label_28dd80;
            case 0x28DD84u: goto label_28dd84;
            case 0x28DD88u: goto label_28dd88;
            case 0x28DD8Cu: goto label_28dd8c;
            case 0x28DD90u: goto label_28dd90;
            case 0x28DD94u: goto label_28dd94;
            case 0x28DD98u: goto label_28dd98;
            case 0x28DD9Cu: goto label_28dd9c;
            case 0x28DDA0u: goto label_28dda0;
            case 0x28DDA4u: goto label_28dda4;
            case 0x28DDA8u: goto label_28dda8;
            case 0x28DDACu: goto label_28ddac;
            case 0x28DDB0u: goto label_28ddb0;
            case 0x28DDB4u: goto label_28ddb4;
            case 0x28DDB8u: goto label_28ddb8;
            case 0x28DDBCu: goto label_28ddbc;
            case 0x28DDC0u: goto label_28ddc0;
            case 0x28DDC4u: goto label_28ddc4;
            case 0x28DDC8u: goto label_28ddc8;
            case 0x28DDCCu: goto label_28ddcc;
            case 0x28DDD0u: goto label_28ddd0;
            case 0x28DDD4u: goto label_28ddd4;
            case 0x28DDD8u: goto label_28ddd8;
            case 0x28DDDCu: goto label_28dddc;
            case 0x28DDE0u: goto label_28dde0;
            case 0x28DDE4u: goto label_28dde4;
            case 0x28DDE8u: goto label_28dde8;
            case 0x28DDECu: goto label_28ddec;
            case 0x28DDF0u: goto label_28ddf0;
            case 0x28DDF4u: goto label_28ddf4;
            case 0x28DDF8u: goto label_28ddf8;
            case 0x28DDFCu: goto label_28ddfc;
            case 0x28DE00u: goto label_28de00;
            case 0x28DE04u: goto label_28de04;
            case 0x28DE08u: goto label_28de08;
            case 0x28DE0Cu: goto label_28de0c;
            case 0x28DE10u: goto label_28de10;
            case 0x28DE14u: goto label_28de14;
            case 0x28DE18u: goto label_28de18;
            case 0x28DE1Cu: goto label_28de1c;
            case 0x28DE20u: goto label_28de20;
            case 0x28DE24u: goto label_28de24;
            case 0x28DE28u: goto label_28de28;
            case 0x28DE2Cu: goto label_28de2c;
            case 0x28DE30u: goto label_28de30;
            case 0x28DE34u: goto label_28de34;
            case 0x28DE38u: goto label_28de38;
            case 0x28DE3Cu: goto label_28de3c;
            case 0x28DE40u: goto label_28de40;
            case 0x28DE44u: goto label_28de44;
            case 0x28DE48u: goto label_28de48;
            case 0x28DE4Cu: goto label_28de4c;
            case 0x28DE50u: goto label_28de50;
            case 0x28DE54u: goto label_28de54;
            case 0x28DE58u: goto label_28de58;
            case 0x28DE5Cu: goto label_28de5c;
            case 0x28DE60u: goto label_28de60;
            case 0x28DE64u: goto label_28de64;
            case 0x28DE68u: goto label_28de68;
            case 0x28DE6Cu: goto label_28de6c;
            case 0x28DE70u: goto label_28de70;
            case 0x28DE74u: goto label_28de74;
            case 0x28DE78u: goto label_28de78;
            case 0x28DE7Cu: goto label_28de7c;
            case 0x28DE80u: goto label_28de80;
            case 0x28DE84u: goto label_28de84;
            case 0x28DE88u: goto label_28de88;
            case 0x28DE8Cu: goto label_28de8c;
            case 0x28DE90u: goto label_28de90;
            case 0x28DE94u: goto label_28de94;
            case 0x28DE98u: goto label_28de98;
            case 0x28DE9Cu: goto label_28de9c;
            case 0x28DEA0u: goto label_28dea0;
            case 0x28DEA4u: goto label_28dea4;
            case 0x28DEA8u: goto label_28dea8;
            case 0x28DEACu: goto label_28deac;
            case 0x28DEB0u: goto label_28deb0;
            case 0x28DEB4u: goto label_28deb4;
            case 0x28DEB8u: goto label_28deb8;
            case 0x28DEBCu: goto label_28debc;
            case 0x28DEC0u: goto label_28dec0;
            case 0x28DEC4u: goto label_28dec4;
            case 0x28DEC8u: goto label_28dec8;
            case 0x28DECCu: goto label_28decc;
            case 0x28DED0u: goto label_28ded0;
            case 0x28DED4u: goto label_28ded4;
            case 0x28DED8u: goto label_28ded8;
            case 0x28DEDCu: goto label_28dedc;
            case 0x28DEE0u: goto label_28dee0;
            case 0x28DEE4u: goto label_28dee4;
            case 0x28DEE8u: goto label_28dee8;
            case 0x28DEECu: goto label_28deec;
            case 0x28DEF0u: goto label_28def0;
            case 0x28DEF4u: goto label_28def4;
            case 0x28DEF8u: goto label_28def8;
            case 0x28DEFCu: goto label_28defc;
            case 0x28DF00u: goto label_28df00;
            case 0x28DF04u: goto label_28df04;
            case 0x28DF08u: goto label_28df08;
            case 0x28DF0Cu: goto label_28df0c;
            case 0x28DF10u: goto label_28df10;
            case 0x28DF14u: goto label_28df14;
            case 0x28DF18u: goto label_28df18;
            case 0x28DF1Cu: goto label_28df1c;
            case 0x28DF20u: goto label_28df20;
            case 0x28DF24u: goto label_28df24;
            case 0x28DF28u: goto label_28df28;
            case 0x28DF2Cu: goto label_28df2c;
            case 0x28DF30u: goto label_28df30;
            case 0x28DF34u: goto label_28df34;
            case 0x28DF38u: goto label_28df38;
            case 0x28DF3Cu: goto label_28df3c;
            case 0x28DF40u: goto label_28df40;
            case 0x28DF44u: goto label_28df44;
            case 0x28DF48u: goto label_28df48;
            case 0x28DF4Cu: goto label_28df4c;
            case 0x28DF50u: goto label_28df50;
            case 0x28DF54u: goto label_28df54;
            case 0x28DF58u: goto label_28df58;
            case 0x28DF5Cu: goto label_28df5c;
            case 0x28DF60u: goto label_28df60;
            case 0x28DF64u: goto label_28df64;
            case 0x28DF68u: goto label_28df68;
            case 0x28DF6Cu: goto label_28df6c;
            case 0x28DF70u: goto label_28df70;
            case 0x28DF74u: goto label_28df74;
            case 0x28DF78u: goto label_28df78;
            case 0x28DF7Cu: goto label_28df7c;
            case 0x28DF80u: goto label_28df80;
            case 0x28DF84u: goto label_28df84;
            case 0x28DF88u: goto label_28df88;
            case 0x28DF8Cu: goto label_28df8c;
            case 0x28DF90u: goto label_28df90;
            case 0x28DF94u: goto label_28df94;
            case 0x28DF98u: goto label_28df98;
            case 0x28DF9Cu: goto label_28df9c;
            case 0x28DFA0u: goto label_28dfa0;
            case 0x28DFA4u: goto label_28dfa4;
            case 0x28DFA8u: goto label_28dfa8;
            case 0x28DFACu: goto label_28dfac;
            case 0x28DFB0u: goto label_28dfb0;
            case 0x28DFB4u: goto label_28dfb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28DC74u;
label_28dc74:
    // 0x28dc74: 0x3c020035
    ctx->pc = 0x28dc74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28dc78:
    // 0x28dc78: 0x2442b4b8
    ctx->pc = 0x28dc78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948024));
label_28dc7c:
    // 0x28dc7c: 0x112080
    ctx->pc = 0x28dc7cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
label_28dc80:
    // 0x28dc80: 0x821021
    ctx->pc = 0x28dc80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28dc84:
    // 0x28dc84: 0xac400000
    ctx->pc = 0x28dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_28dc88:
    // 0x28dc88: 0x3c03003c
    ctx->pc = 0x28dc88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_28dc8c:
    // 0x28dc8c: 0x24633da0
    ctx->pc = 0x28dc8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15776));
label_28dc90:
    // 0x28dc90: 0x831821
    ctx->pc = 0x28dc90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28dc94:
    // 0x28dc94: 0x3c02003c
    ctx->pc = 0x28dc94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28dc98:
    // 0x28dc98: 0x24423db0
    ctx->pc = 0x28dc98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15792));
label_28dc9c:
    // 0x28dc9c: 0x821021
    ctx->pc = 0x28dc9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28dca0:
    // 0x28dca0: 0xac400000
    ctx->pc = 0x28dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_28dca4:
    // 0x28dca4: 0xac600000
    ctx->pc = 0x28dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_28dca8:
    // 0x28dca8: 0x3c02003c
    ctx->pc = 0x28dca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28dcac:
    // 0x28dcac: 0x24423dc0
    ctx->pc = 0x28dcacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15808));
label_28dcb0:
    // 0x28dcb0: 0x822021
    ctx->pc = 0x28dcb0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28dcb4:
    // 0x28dcb4: 0xac800000
    ctx->pc = 0x28dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_28dcb8:
    // 0x28dcb8: 0xc0a2f8c
label_28dcbc:
    if (ctx->pc == 0x28DCBCu) {
        ctx->pc = 0x28DCBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DCC0u;
        goto label_28dcc0;
    }
    ctx->pc = 0x28DCB8u;
    SET_GPR_U32(ctx, 31, 0x28DCC0u);
    ctx->pc = 0x28DCBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28BE30u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_piles_0x28be30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCC0u; }
    }
    if (ctx->pc != 0x28DCC0u) { return; }
    ctx->pc = 0x28DCC0u;
label_28dcc0:
    // 0x28dcc0: 0xae000988
    ctx->pc = 0x28dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2440), GPR_U32(ctx, 0));
label_28dcc4:
    // 0x28dcc4: 0xae00098c
    ctx->pc = 0x28dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2444), GPR_U32(ctx, 0));
label_28dcc8:
    // 0x28dcc8: 0xae000990
    ctx->pc = 0x28dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2448), GPR_U32(ctx, 0));
label_28dccc:
    // 0x28dccc: 0xae000994
    ctx->pc = 0x28dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2452), GPR_U32(ctx, 0));
label_28dcd0:
    // 0x28dcd0: 0xae000998
    ctx->pc = 0x28dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2456), GPR_U32(ctx, 0));
label_28dcd4:
    // 0x28dcd4: 0x3c02003c
    ctx->pc = 0x28dcd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28dcd8:
    // 0x28dcd8: 0x8c423ef4
    ctx->pc = 0x28dcd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16116)));
label_28dcdc:
    // 0x28dcdc: 0x50400084
label_28dce0:
    if (ctx->pc == 0x28DCE0u) {
        ctx->pc = 0x28DCE0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->pc = 0x28DCE4u;
        goto label_28dce4;
    }
    ctx->pc = 0x28DCDCu;
    {
        const bool branch_taken_0x28dcdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28dcdc) {
            ctx->pc = 0x28DCE0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
            ctx->pc = 0x28DEF0u;
            goto label_28def0;
        }
    }
    ctx->pc = 0x28DCE4u;
label_28dce4:
    // 0x28dce4: 0xc0a31ca
label_28dce8:
    if (ctx->pc == 0x28DCE8u) {
        ctx->pc = 0x28DCE8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DCECu;
        goto label_28dcec;
    }
    ctx->pc = 0x28DCE4u;
    SET_GPR_U32(ctx, 31, 0x28DCECu);
    ctx->pc = 0x28DCE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28C728u;
    {
        const uint32_t __entryPc = ctx->pc;
        hide_piles_0x28c728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCECu; }
    }
    if (ctx->pc != 0x28DCECu) { return; }
    ctx->pc = 0x28DCECu;
label_28dcec:
    // 0x28dcec: 0xc0a3114
label_28dcf0:
    if (ctx->pc == 0x28DCF0u) {
        ctx->pc = 0x28DCF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DCF4u;
        goto label_28dcf4;
    }
    ctx->pc = 0x28DCECu;
    SET_GPR_U32(ctx, 31, 0x28DCF4u);
    ctx->pc = 0x28DCF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28C450u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_show_gold_0x28c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCF4u; }
    }
    if (ctx->pc != 0x28DCF4u) { return; }
    ctx->pc = 0x28DCF4u;
label_28dcf4:
    // 0x28dcf4: 0x24020006
    ctx->pc = 0x28dcf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_28dcf8:
    // 0x28dcf8: 0x10000083
label_28dcfc:
    if (ctx->pc == 0x28DCFCu) {
        ctx->pc = 0x28DCFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        ctx->pc = 0x28DD00u;
        goto label_28dd00;
    }
    ctx->pc = 0x28DCF8u;
    {
        const bool branch_taken_0x28dcf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DCFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        if (branch_taken_0x28dcf8) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DD00u;
label_28dd00:
    // 0x28dd00: 0xc0a3054
label_28dd04:
    if (ctx->pc == 0x28DD04u) {
        ctx->pc = 0x28DD04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DD08u;
        goto label_28dd08;
    }
    ctx->pc = 0x28DD00u;
    SET_GPR_U32(ctx, 31, 0x28DD08u);
    ctx->pc = 0x28DD04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28C150u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_piles_0x28c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DD08u; }
    }
    if (ctx->pc != 0x28DD08u) { return; }
    ctx->pc = 0x28DD08u;
label_28dd08:
    // 0x28dd08: 0x5440007f
label_28dd0c:
    if (ctx->pc == 0x28DD0Cu) {
        ctx->pc = 0x28DD0Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28DD10u;
        goto label_28dd10;
    }
    ctx->pc = 0x28DD08u;
    {
        const bool branch_taken_0x28dd08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28dd08) {
            ctx->pc = 0x28DD0Cu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DD10u;
label_28dd10:
    // 0x28dd10: 0x3c040031
    ctx->pc = 0x28dd10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_28dd14:
    // 0x28dd14: 0x24841b90
    ctx->pc = 0x28dd14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7056));
label_28dd18:
    // 0x28dd18: 0x8e020000
    ctx->pc = 0x28dd18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28dd1c:
    // 0x28dd1c: 0x2403003c
    ctx->pc = 0x28dd1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
label_28dd20:
    // 0x28dd20: 0x431018
    ctx->pc = 0x28dd20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28dd24:
    // 0x28dd24: 0x822021
    ctx->pc = 0x28dd24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28dd28:
    // 0x28dd28: 0x8c820008
    ctx->pc = 0x28dd28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_28dd2c:
    // 0x28dd2c: 0x3c030200
    ctx->pc = 0x28dd2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
label_28dd30:
    // 0x28dd30: 0x431024
    ctx->pc = 0x28dd30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28dd34:
    // 0x28dd34: 0x10400074
label_28dd38:
    if (ctx->pc == 0x28DD38u) {
        ctx->pc = 0x28DD3Cu;
        goto label_28dd3c;
    }
    ctx->pc = 0x28DD34u;
    {
        const bool branch_taken_0x28dd34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28dd34) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DD3Cu;
label_28dd3c:
    // 0x28dd3c: 0xc0981a6
label_28dd40:
    if (ctx->pc == 0x28DD40u) {
        ctx->pc = 0x28DD44u;
        goto label_28dd44;
    }
    ctx->pc = 0x28DD3Cu;
    SET_GPR_U32(ctx, 31, 0x28DD44u);
    ctx->pc = 0x260698u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorSelect_0x260698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DD44u; }
    }
    if (ctx->pc != 0x28DD44u) { return; }
    ctx->pc = 0x28DD44u;
label_28dd44:
    // 0x28dd44: 0xc0a31ca
label_28dd48:
    if (ctx->pc == 0x28DD48u) {
        ctx->pc = 0x28DD48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DD4Cu;
        goto label_28dd4c;
    }
    ctx->pc = 0x28DD44u;
    SET_GPR_U32(ctx, 31, 0x28DD4Cu);
    ctx->pc = 0x28DD48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28C728u;
    {
        const uint32_t __entryPc = ctx->pc;
        hide_piles_0x28c728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DD4Cu; }
    }
    if (ctx->pc != 0x28DD4Cu) { return; }
    ctx->pc = 0x28DD4Cu;
label_28dd4c:
    // 0x28dd4c: 0x24020004
    ctx->pc = 0x28dd4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_28dd50:
    // 0x28dd50: 0xae020980
    ctx->pc = 0x28dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
label_28dd54:
    // 0x28dd54: 0x1000006c
label_28dd58:
    if (ctx->pc == 0x28DD58u) {
        ctx->pc = 0x28DD58u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2440), GPR_U32(ctx, 0));
        ctx->pc = 0x28DD5Cu;
        goto label_28dd5c;
    }
    ctx->pc = 0x28DD54u;
    {
        const bool branch_taken_0x28dd54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DD58u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2440), GPR_U32(ctx, 0));
        if (branch_taken_0x28dd54) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DD5Cu;
label_28dd5c:
    // 0x28dd5c: 0x200202d
    ctx->pc = 0x28dd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28dd60:
    // 0x28dd60: 0xc0a3316
label_28dd64:
    if (ctx->pc == 0x28DD64u) {
        ctx->pc = 0x28DD64u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DD68u;
        goto label_28dd68;
    }
    ctx->pc = 0x28DD60u;
    SET_GPR_U32(ctx, 31, 0x28DD68u);
    ctx->pc = 0x28DD64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28CC58u;
    {
        const uint32_t __entryPc = ctx->pc;
        shop_show_lv_0x28cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DD68u; }
    }
    if (ctx->pc != 0x28DD68u) { return; }
    ctx->pc = 0x28DD68u;
label_28dd68:
    // 0x28dd68: 0x10400067
label_28dd6c:
    if (ctx->pc == 0x28DD6Cu) {
        ctx->pc = 0x28DD6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x28DD70u;
        goto label_28dd70;
    }
    ctx->pc = 0x28DD68u;
    {
        const bool branch_taken_0x28dd68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DD6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x28dd68) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DD70u;
label_28dd70:
    // 0x28dd70: 0x8c43e800
    ctx->pc = 0x28dd70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961152)));
label_28dd74:
    // 0x28dd74: 0x24020008
    ctx->pc = 0x28dd74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_28dd78:
    // 0x28dd78: 0x5462005d
label_28dd7c:
    if (ctx->pc == 0x28DD7Cu) {
        ctx->pc = 0x28DD7Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->pc = 0x28DD80u;
        goto label_28dd80;
    }
    ctx->pc = 0x28DD78u;
    {
        const bool branch_taken_0x28dd78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x28dd78) {
            ctx->pc = 0x28DD7Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
            ctx->pc = 0x28DEF0u;
            goto label_28def0;
        }
    }
    ctx->pc = 0x28DD80u;
label_28dd80:
    // 0x28dd80: 0x3c020034
    ctx->pc = 0x28dd80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_28dd84:
    // 0x28dd84: 0x8c43e804
    ctx->pc = 0x28dd84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961156)));
label_28dd88:
    // 0x28dd88: 0x24020003
    ctx->pc = 0x28dd88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_28dd8c:
    // 0x28dd8c: 0x54620058
label_28dd90:
    if (ctx->pc == 0x28DD90u) {
        ctx->pc = 0x28DD90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->pc = 0x28DD94u;
        goto label_28dd94;
    }
    ctx->pc = 0x28DD8Cu;
    {
        const bool branch_taken_0x28dd8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x28dd8c) {
            ctx->pc = 0x28DD90u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
            ctx->pc = 0x28DEF0u;
            goto label_28def0;
        }
    }
    ctx->pc = 0x28DD94u;
label_28dd94:
    // 0x28dd94: 0x24020014
    ctx->pc = 0x28dd94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_28dd98:
    // 0x28dd98: 0x1000005b
label_28dd9c:
    if (ctx->pc == 0x28DD9Cu) {
        ctx->pc = 0x28DD9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        ctx->pc = 0x28DDA0u;
        goto label_28dda0;
    }
    ctx->pc = 0x28DD98u;
    {
        const bool branch_taken_0x28dd98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DD9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        if (branch_taken_0x28dd98) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DDA0u;
label_28dda0:
    // 0x28dda0: 0xc0a3114
label_28dda4:
    if (ctx->pc == 0x28DDA4u) {
        ctx->pc = 0x28DDA4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DDA8u;
        goto label_28dda8;
    }
    ctx->pc = 0x28DDA0u;
    SET_GPR_U32(ctx, 31, 0x28DDA8u);
    ctx->pc = 0x28DDA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28C450u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_show_gold_0x28c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DDA8u; }
    }
    if (ctx->pc != 0x28DDA8u) { return; }
    ctx->pc = 0x28DDA8u;
label_28dda8:
    // 0x28dda8: 0x10000051
label_28ddac:
    if (ctx->pc == 0x28DDACu) {
        ctx->pc = 0x28DDACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->pc = 0x28DDB0u;
        goto label_28ddb0;
    }
    ctx->pc = 0x28DDA8u;
    {
        const bool branch_taken_0x28dda8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DDACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        if (branch_taken_0x28dda8) {
            ctx->pc = 0x28DEF0u;
            goto label_28def0;
        }
    }
    ctx->pc = 0x28DDB0u;
label_28ddb0:
    // 0x28ddb0: 0x3c02003c
    ctx->pc = 0x28ddb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28ddb4:
    // 0x28ddb4: 0x8c433ef4
    ctx->pc = 0x28ddb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16116)));
label_28ddb8:
    // 0x28ddb8: 0x24020002
    ctx->pc = 0x28ddb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_28ddbc:
    // 0x28ddbc: 0x14620006
label_28ddc0:
    if (ctx->pc == 0x28DDC0u) {
        ctx->pc = 0x28DDC4u;
        goto label_28ddc4;
    }
    ctx->pc = 0x28DDBCu;
    {
        const bool branch_taken_0x28ddbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x28ddbc) {
            ctx->pc = 0x28DDD8u;
            goto label_28ddd8;
        }
    }
    ctx->pc = 0x28DDC4u;
label_28ddc4:
    // 0x28ddc4: 0xc0a2d20
label_28ddc8:
    if (ctx->pc == 0x28DDC8u) {
        ctx->pc = 0x28DDC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DDCCu;
        goto label_28ddcc;
    }
    ctx->pc = 0x28DDC4u;
    SET_GPR_U32(ctx, 31, 0x28DDCCu);
    ctx->pc = 0x28DDC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28B480u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_shop_player_blits_0x28b480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DDCCu; }
    }
    if (ctx->pc != 0x28DDCCu) { return; }
    ctx->pc = 0x28DDCCu;
label_28ddcc:
    // 0x28ddcc: 0x24020009
    ctx->pc = 0x28ddccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_28ddd0:
    // 0x28ddd0: 0x1000004d
label_28ddd4:
    if (ctx->pc == 0x28DDD4u) {
        ctx->pc = 0x28DDD4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        ctx->pc = 0x28DDD8u;
        goto label_28ddd8;
    }
    ctx->pc = 0x28DDD0u;
    {
        const bool branch_taken_0x28ddd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DDD4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        if (branch_taken_0x28ddd0) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DDD8u;
label_28ddd8:
    // 0x28ddd8: 0xc0a2f52
label_28dddc:
    if (ctx->pc == 0x28DDDCu) {
        ctx->pc = 0x28DDDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DDE0u;
        goto label_28dde0;
    }
    ctx->pc = 0x28DDD8u;
    SET_GPR_U32(ctx, 31, 0x28DDE0u);
    ctx->pc = 0x28DDDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28BD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_shop_screen_0x28bd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DDE0u; }
    }
    if (ctx->pc != 0x28DDE0u) { return; }
    ctx->pc = 0x28DDE0u;
label_28dde0:
    // 0x28dde0: 0x8e020980
    ctx->pc = 0x28dde0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_28dde4:
    // 0x28dde4: 0x24420001
    ctx->pc = 0x28dde4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_28dde8:
    // 0x28dde8: 0xae020980
    ctx->pc = 0x28dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
label_28ddec:
    // 0x28ddec: 0xc0a3140
label_28ddf0:
    if (ctx->pc == 0x28DDF0u) {
        ctx->pc = 0x28DDF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DDF4u;
        goto label_28ddf4;
    }
    ctx->pc = 0x28DDECu;
    SET_GPR_U32(ctx, 31, 0x28DDF4u);
    ctx->pc = 0x28DDF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28C500u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_gold_0x28c500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DDF4u; }
    }
    if (ctx->pc != 0x28DDF4u) { return; }
    ctx->pc = 0x28DDF4u;
label_28ddf4:
    // 0x28ddf4: 0xc0a2a7e
label_28ddf8:
    if (ctx->pc == 0x28DDF8u) {
        ctx->pc = 0x28DDF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DDFCu;
        goto label_28ddfc;
    }
    ctx->pc = 0x28DDF4u;
    SET_GPR_U32(ctx, 31, 0x28DDFCu);
    ctx->pc = 0x28DDF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28A9F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_shopping_0x28a9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DDFCu; }
    }
    if (ctx->pc != 0x28DDFCu) { return; }
    ctx->pc = 0x28DDFCu;
label_28ddfc:
    // 0x28ddfc: 0x10400006
label_28de00:
    if (ctx->pc == 0x28DE00u) {
        ctx->pc = 0x28DE04u;
        goto label_28de04;
    }
    ctx->pc = 0x28DDFCu;
    {
        const bool branch_taken_0x28ddfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28ddfc) {
            ctx->pc = 0x28DE18u;
            goto label_28de18;
        }
    }
    ctx->pc = 0x28DE04u;
label_28de04:
    // 0x28de04: 0xc0a2d20
label_28de08:
    if (ctx->pc == 0x28DE08u) {
        ctx->pc = 0x28DE08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DE0Cu;
        goto label_28de0c;
    }
    ctx->pc = 0x28DE04u;
    SET_GPR_U32(ctx, 31, 0x28DE0Cu);
    ctx->pc = 0x28DE08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28B480u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_shop_player_blits_0x28b480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE0Cu; }
    }
    if (ctx->pc != 0x28DE0Cu) { return; }
    ctx->pc = 0x28DE0Cu;
label_28de0c:
    // 0x28de0c: 0x8e020980
    ctx->pc = 0x28de0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_28de10:
    // 0x28de10: 0x24420001
    ctx->pc = 0x28de10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_28de14:
    // 0x28de14: 0xae020980
    ctx->pc = 0x28de14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
label_28de18:
    // 0x28de18: 0xc0a27cc
label_28de1c:
    if (ctx->pc == 0x28DE1Cu) {
        ctx->pc = 0x28DE1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DE20u;
        goto label_28de20;
    }
    ctx->pc = 0x28DE18u;
    SET_GPR_U32(ctx, 31, 0x28DE20u);
    ctx->pc = 0x28DE1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x289F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        move_cursor_0x289f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE20u; }
    }
    if (ctx->pc != 0x28DE20u) { return; }
    ctx->pc = 0x28DE20u;
label_28de20:
    // 0x28de20: 0x10000039
label_28de24:
    if (ctx->pc == 0x28DE24u) {
        ctx->pc = 0x28DE28u;
        goto label_28de28;
    }
    ctx->pc = 0x28DE20u;
    {
        const bool branch_taken_0x28de20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28de20) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DE28u;
label_28de28:
    // 0x28de28: 0x200202d
    ctx->pc = 0x28de28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28de2c:
    // 0x28de2c: 0xc0a3316
label_28de30:
    if (ctx->pc == 0x28DE30u) {
        ctx->pc = 0x28DE30u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28DE34u;
        goto label_28de34;
    }
    ctx->pc = 0x28DE2Cu;
    SET_GPR_U32(ctx, 31, 0x28DE34u);
    ctx->pc = 0x28DE30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x28CC58u;
    {
        const uint32_t __entryPc = ctx->pc;
        shop_show_lv_0x28cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE34u; }
    }
    if (ctx->pc != 0x28DE34u) { return; }
    ctx->pc = 0x28DE34u;
label_28de34:
    // 0x28de34: 0x1000002b
label_28de38:
    if (ctx->pc == 0x28DE38u) {
        ctx->pc = 0x28DE3Cu;
        goto label_28de3c;
    }
    ctx->pc = 0x28DE34u;
    {
        const bool branch_taken_0x28de34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28de34) {
            ctx->pc = 0x28DEE4u;
            goto label_28dee4;
        }
    }
    ctx->pc = 0x28DE3Cu;
label_28de3c:
    // 0x28de3c: 0x3c02003c
    ctx->pc = 0x28de3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28de40:
    // 0x28de40: 0x8c433ef4
    ctx->pc = 0x28de40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16116)));
label_28de44:
    // 0x28de44: 0x24020001
    ctx->pc = 0x28de44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_28de48:
    // 0x28de48: 0x10620022
label_28de4c:
    if (ctx->pc == 0x28DE4Cu) {
        ctx->pc = 0x28DE4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x28DE50u;
        goto label_28de50;
    }
    ctx->pc = 0x28DE48u;
    {
        const bool branch_taken_0x28de48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28DE4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
        if (branch_taken_0x28de48) {
            ctx->pc = 0x28DED4u;
            goto label_28ded4;
        }
    }
    ctx->pc = 0x28DE50u;
label_28de50:
    // 0x28de50: 0xc08a79e
label_28de54:
    if (ctx->pc == 0x28DE54u) {
        ctx->pc = 0x28DE54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DE58u;
        goto label_28de58;
    }
    ctx->pc = 0x28DE50u;
    SET_GPR_U32(ctx, 31, 0x28DE58u);
    ctx->pc = 0x28DE54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_inventory_panel_0x229e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE58u; }
    }
    if (ctx->pc != 0x28DE58u) { return; }
    ctx->pc = 0x28DE58u;
label_28de58:
    // 0x28de58: 0xc0984d0
label_28de5c:
    if (ctx->pc == 0x28DE5Cu) {
        ctx->pc = 0x28DE5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x28DE60u;
        goto label_28de60;
    }
    ctx->pc = 0x28DE58u;
    SET_GPR_U32(ctx, 31, 0x28DE60u);
    ctx->pc = 0x28DE5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x261340u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTowerFX_0x261340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE60u; }
    }
    if (ctx->pc != 0x28DE60u) { return; }
    ctx->pc = 0x28DE60u;
label_28de60:
    // 0x28de60: 0x10000023
label_28de64:
    if (ctx->pc == 0x28DE64u) {
        ctx->pc = 0x28DE64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->pc = 0x28DE68u;
        goto label_28de68;
    }
    ctx->pc = 0x28DE60u;
    {
        const bool branch_taken_0x28de60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DE64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        if (branch_taken_0x28de60) {
            ctx->pc = 0x28DEF0u;
            goto label_28def0;
        }
    }
    ctx->pc = 0x28DE68u;
label_28de68:
    // 0x28de68: 0xc08a5f0
label_28de6c:
    if (ctx->pc == 0x28DE6Cu) {
        ctx->pc = 0x28DE6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DE70u;
        goto label_28de70;
    }
    ctx->pc = 0x28DE68u;
    SET_GPR_U32(ctx, 31, 0x28DE70u);
    ctx->pc = 0x28DE6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2297C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_inventory_panel_0x2297c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE70u; }
    }
    if (ctx->pc != 0x28DE70u) { return; }
    ctx->pc = 0x28DE70u;
label_28de70:
    // 0x28de70: 0x3c030031
    ctx->pc = 0x28de70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_28de74:
    // 0x28de74: 0x24631b90
    ctx->pc = 0x28de74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
label_28de78:
    // 0x28de78: 0x2402003c
    ctx->pc = 0x28de78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_28de7c:
    // 0x28de7c: 0x2221018
    ctx->pc = 0x28de7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28de80:
    // 0x28de80: 0x621821
    ctx->pc = 0x28de80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28de84:
    // 0x28de84: 0x8c620008
    ctx->pc = 0x28de84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_28de88:
    // 0x28de88: 0x3c030200
    ctx->pc = 0x28de88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
label_28de8c:
    // 0x28de8c: 0x431024
    ctx->pc = 0x28de8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28de90:
    // 0x28de90: 0x1040001d
label_28de94:
    if (ctx->pc == 0x28DE94u) {
        ctx->pc = 0x28DE98u;
        goto label_28de98;
    }
    ctx->pc = 0x28DE90u;
    {
        const bool branch_taken_0x28de90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28de90) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DE98u;
label_28de98:
    // 0x28de98: 0xc0981a6
label_28de9c:
    if (ctx->pc == 0x28DE9Cu) {
        ctx->pc = 0x28DEA0u;
        goto label_28dea0;
    }
    ctx->pc = 0x28DE98u;
    SET_GPR_U32(ctx, 31, 0x28DEA0u);
    ctx->pc = 0x260698u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorSelect_0x260698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DEA0u; }
    }
    if (ctx->pc != 0x28DEA0u) { return; }
    ctx->pc = 0x28DEA0u;
label_28dea0:
    // 0x28dea0: 0xc08a7b4
label_28dea4:
    if (ctx->pc == 0x28DEA4u) {
        ctx->pc = 0x28DEA4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DEA8u;
        goto label_28dea8;
    }
    ctx->pc = 0x28DEA0u;
    SET_GPR_U32(ctx, 31, 0x28DEA8u);
    ctx->pc = 0x28DEA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_inventory_panel_0x229ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DEA8u; }
    }
    if (ctx->pc != 0x28DEA8u) { return; }
    ctx->pc = 0x28DEA8u;
label_28dea8:
    // 0x28dea8: 0x10000011
label_28deac:
    if (ctx->pc == 0x28DEACu) {
        ctx->pc = 0x28DEACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->pc = 0x28DEB0u;
        goto label_28deb0;
    }
    ctx->pc = 0x28DEA8u;
    {
        const bool branch_taken_0x28dea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DEACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        if (branch_taken_0x28dea8) {
            ctx->pc = 0x28DEF0u;
            goto label_28def0;
        }
    }
    ctx->pc = 0x28DEB0u;
label_28deb0:
    // 0x28deb0: 0xc08a5f0
label_28deb4:
    if (ctx->pc == 0x28DEB4u) {
        ctx->pc = 0x28DEB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DEB8u;
        goto label_28deb8;
    }
    ctx->pc = 0x28DEB0u;
    SET_GPR_U32(ctx, 31, 0x28DEB8u);
    ctx->pc = 0x28DEB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2297C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_inventory_panel_0x2297c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DEB8u; }
    }
    if (ctx->pc != 0x28DEB8u) { return; }
    ctx->pc = 0x28DEB8u;
label_28deb8:
    // 0x28deb8: 0x10400013
label_28debc:
    if (ctx->pc == 0x28DEBCu) {
        ctx->pc = 0x28DEC0u;
        goto label_28dec0;
    }
    ctx->pc = 0x28DEB8u;
    {
        const bool branch_taken_0x28deb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28deb8) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DEC0u;
label_28dec0:
    // 0x28dec0: 0xc08a7c0
label_28dec4:
    if (ctx->pc == 0x28DEC4u) {
        ctx->pc = 0x28DEC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DEC8u;
        goto label_28dec8;
    }
    ctx->pc = 0x28DEC0u;
    SET_GPR_U32(ctx, 31, 0x28DEC8u);
    ctx->pc = 0x28DEC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x229F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_inventory_panel_0x229f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DEC8u; }
    }
    if (ctx->pc != 0x28DEC8u) { return; }
    ctx->pc = 0x28DEC8u;
label_28dec8:
    // 0x28dec8: 0x10000009
label_28decc:
    if (ctx->pc == 0x28DECCu) {
        ctx->pc = 0x28DECCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->pc = 0x28DED0u;
        goto label_28ded0;
    }
    ctx->pc = 0x28DEC8u;
    {
        const bool branch_taken_0x28dec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DECCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        if (branch_taken_0x28dec8) {
            ctx->pc = 0x28DEF0u;
            goto label_28def0;
        }
    }
    ctx->pc = 0x28DED0u;
label_28ded0:
    // 0x28ded0: 0x24020064
    ctx->pc = 0x28ded0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
label_28ded4:
    // 0x28ded4: 0x1000000c
label_28ded8:
    if (ctx->pc == 0x28DED8u) {
        ctx->pc = 0x28DED8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        ctx->pc = 0x28DEDCu;
        goto label_28dedc;
    }
    ctx->pc = 0x28DED4u;
    {
        const bool branch_taken_0x28ded4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DED8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        if (branch_taken_0x28ded4) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DEDCu;
label_28dedc:
    // 0x28dedc: 0xc0a3572
label_28dee0:
    if (ctx->pc == 0x28DEE0u) {
        ctx->pc = 0x28DEE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DEE4u;
        goto label_28dee4;
    }
    ctx->pc = 0x28DEDCu;
    SET_GPR_U32(ctx, 31, 0x28DEE4u);
    ctx->pc = 0x28DEE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28D5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        shop_show_final_stats_0x28d5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DEE4u; }
    }
    if (ctx->pc != 0x28DEE4u) { return; }
    ctx->pc = 0x28DEE4u;
label_28dee4:
    // 0x28dee4: 0x10400008
label_28dee8:
    if (ctx->pc == 0x28DEE8u) {
        ctx->pc = 0x28DEECu;
        goto label_28deec;
    }
    ctx->pc = 0x28DEE4u;
    {
        const bool branch_taken_0x28dee4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28dee4) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DEECu;
label_28deec:
    // 0x28deec: 0x8e020980
    ctx->pc = 0x28deecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_28def0:
    // 0x28def0: 0x24420001
    ctx->pc = 0x28def0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_28def4:
    // 0x28def4: 0x10000004
label_28def8:
    if (ctx->pc == 0x28DEF8u) {
        ctx->pc = 0x28DEF8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        ctx->pc = 0x28DEFCu;
        goto label_28defc;
    }
    ctx->pc = 0x28DEF4u;
    {
        const bool branch_taken_0x28def4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DEF8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
        if (branch_taken_0x28def4) {
            ctx->pc = 0x28DF08u;
            goto label_28df08;
        }
    }
    ctx->pc = 0x28DEFCu;
label_28defc:
    // 0x28defc: 0x24020064
    ctx->pc = 0x28defcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
label_28df00:
    // 0x28df00: 0xae020980
    ctx->pc = 0x28df00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
label_28df04:
    // 0x28df04: 0x24130001
    ctx->pc = 0x28df04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_28df08:
    // 0x28df08: 0x12600003
label_28df0c:
    if (ctx->pc == 0x28DF0Cu) {
        ctx->pc = 0x28DF0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x28DF10u;
        goto label_28df10;
    }
    ctx->pc = 0x28DF08u;
    {
        const bool branch_taken_0x28df08 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DF0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x28df08) {
            ctx->pc = 0x28DF18u;
            goto label_28df18;
        }
    }
    ctx->pc = 0x28DF10u;
label_28df10:
    // 0x28df10: 0x10000002
label_28df14:
    if (ctx->pc == 0x28DF14u) {
        ctx->pc = 0x28DF14u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->pc = 0x28DF18u;
        goto label_28df18;
    }
    ctx->pc = 0x28DF10u;
    {
        const bool branch_taken_0x28df10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DF14u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        if (branch_taken_0x28df10) {
            ctx->pc = 0x28DF1Cu;
            goto label_28df1c;
        }
    }
    ctx->pc = 0x28DF18u;
label_28df18:
    // 0x28df18: 0x902d
    ctx->pc = 0x28df18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28df1c:
    // 0x28df1c: 0x26310001
    ctx->pc = 0x28df1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_28df20:
    // 0x28df20: 0x2a220004
    ctx->pc = 0x28df20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
label_28df24:
    // 0x28df24: 0x1440ff3e
label_28df28:
    if (ctx->pc == 0x28DF28u) {
        ctx->pc = 0x28DF28u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        ctx->pc = 0x28DF2Cu;
        goto label_28df2c;
    }
    ctx->pc = 0x28DF24u;
    {
        const bool branch_taken_0x28df24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28DF28u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x28df24) {
            ctx->pc = 0x28DC20u;
            goto label_28dc20;
        }
    }
    ctx->pc = 0x28DF2Cu;
label_28df2c:
    // 0x28df2c: 0xc09780a
label_28df30:
    if (ctx->pc == 0x28DF30u) {
        ctx->pc = 0x28DF30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DF34u;
        goto label_28df34;
    }
    ctx->pc = 0x28DF2Cu;
    SET_GPR_U32(ctx, 31, 0x28DF34u);
    ctx->pc = 0x28DF30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25E028u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoAudioTallySFX_0x25e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF34u; }
    }
    if (ctx->pc != 0x28DF34u) { return; }
    ctx->pc = 0x28DF34u;
label_28df34:
    // 0x28df34: 0xc089a16
label_28df38:
    if (ctx->pc == 0x28DF38u) {
        ctx->pc = 0x28DF3Cu;
        goto label_28df3c;
    }
    ctx->pc = 0x28DF34u;
    SET_GPR_U32(ctx, 31, 0x28DF3Cu);
    ctx->pc = 0x226858u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadTowerDone_0x226858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF3Cu; }
    }
    if (ctx->pc != 0x28DF3Cu) { return; }
    ctx->pc = 0x28DF3Cu;
label_28df3c:
    // 0x28df3c: 0x1440000a
label_28df40:
    if (ctx->pc == 0x28DF40u) {
        ctx->pc = 0x28DF44u;
        goto label_28df44;
    }
    ctx->pc = 0x28DF3Cu;
    {
        const bool branch_taken_0x28df3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28df3c) {
            ctx->pc = 0x28DF68u;
            goto label_28df68;
        }
    }
    ctx->pc = 0x28DF44u;
label_28df44:
    // 0x28df44: 0x12400007
label_28df48:
    if (ctx->pc == 0x28DF48u) {
        ctx->pc = 0x28DF48u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 340));
        ctx->pc = 0x28DF4Cu;
        goto label_28df4c;
    }
    ctx->pc = 0x28DF44u;
    {
        const bool branch_taken_0x28df44 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DF48u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 340));
        if (branch_taken_0x28df44) {
            ctx->pc = 0x28DF64u;
            goto label_28df64;
        }
    }
    ctx->pc = 0x28DF4Cu;
label_28df4c:
    // 0x28df4c: 0x24050104
    ctx->pc = 0x28df4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 260));
label_28df50:
    // 0x28df50: 0x3c013f80
    ctx->pc = 0x28df50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_28df54:
    // 0x28df54: 0x44816000
    ctx->pc = 0x28df54u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_28df58:
    // 0x28df58: 0x3c06003b
    ctx->pc = 0x28df58u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_28df5c:
    // 0x28df5c: 0xc080a9a
label_28df60:
    if (ctx->pc == 0x28DF60u) {
        ctx->pc = 0x28DF60u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294958120));
        ctx->pc = 0x28DF64u;
        goto label_28df64;
    }
    ctx->pc = 0x28DF5Cu;
    SET_GPR_U32(ctx, 31, 0x28DF64u);
    ctx->pc = 0x28DF60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294958120));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF64u; }
    }
    if (ctx->pc != 0x28DF64u) { return; }
    ctx->pc = 0x28DF64u;
label_28df64:
    // 0x28df64: 0x902d
    ctx->pc = 0x28df64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28df68:
    // 0x28df68: 0xc088b7e
label_28df6c:
    if (ctx->pc == 0x28DF6Cu) {
        ctx->pc = 0x28DF6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28DF70u;
        goto label_28df70;
    }
    ctx->pc = 0x28DF68u;
    SET_GPR_U32(ctx, 31, 0x28DF70u);
    ctx->pc = 0x28DF6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x222DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillPlaying_0x222df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF70u; }
    }
    if (ctx->pc != 0x28DF70u) { return; }
    ctx->pc = 0x28DF70u;
label_28df70:
    // 0x28df70: 0x2900b
    ctx->pc = 0x28df70u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
label_28df74:
    // 0x28df74: 0x12400008
label_28df78:
    if (ctx->pc == 0x28DF78u) {
        ctx->pc = 0x28DF78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28DF7Cu;
        goto label_28df7c;
    }
    ctx->pc = 0x28DF74u;
    {
        const bool branch_taken_0x28df74 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x28DF78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28df74) {
            ctx->pc = 0x28DF98u;
            goto label_28df98;
        }
    }
    ctx->pc = 0x28DF7Cu;
label_28df7c:
    // 0x28df7c: 0xc097420
label_28df80:
    if (ctx->pc == 0x28DF80u) {
        ctx->pc = 0x28DF84u;
        goto label_28df84;
    }
    ctx->pc = 0x28DF7Cu;
    SET_GPR_U32(ctx, 31, 0x28DF84u);
    ctx->pc = 0x25D080u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShopMusicEnd_0x25d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF84u; }
    }
    if (ctx->pc != 0x28DF84u) { return; }
    ctx->pc = 0x28DF84u;
label_28df84:
    // 0x28df84: 0x3c02003c
    ctx->pc = 0x28df84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28df88:
    // 0x28df88: 0x8c433ef4
    ctx->pc = 0x28df88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16116)));
label_28df8c:
    // 0x28df8c: 0x24020002
    ctx->pc = 0x28df8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_28df90:
    // 0x28df90: 0x43900a
    ctx->pc = 0x28df90u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
label_28df94:
    // 0x28df94: 0x240102d
    ctx->pc = 0x28df94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28df98:
    // 0x28df98: 0xdfbf0050
    ctx->pc = 0x28df98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28df9c:
    // 0x28df9c: 0xdfb40040
    ctx->pc = 0x28df9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28dfa0:
    // 0x28dfa0: 0xdfb30030
    ctx->pc = 0x28dfa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28dfa4:
    // 0x28dfa4: 0xdfb20020
    ctx->pc = 0x28dfa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28dfa8:
    // 0x28dfa8: 0xdfb10010
    ctx->pc = 0x28dfa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28dfac:
    // 0x28dfac: 0xdfb00000
    ctx->pc = 0x28dfacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28dfb0:
    // 0x28dfb0: 0x3e00008
label_28dfb4:
    if (ctx->pc == 0x28DFB4u) {
        ctx->pc = 0x28DFB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28DFB8u;
        goto label_fallthrough_0x28dfb0;
    }
    ctx->pc = 0x28DFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DFB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28DB58u: goto label_28db58;
            case 0x28DB5Cu: goto label_28db5c;
            case 0x28DB60u: goto label_28db60;
            case 0x28DB64u: goto label_28db64;
            case 0x28DB68u: goto label_28db68;
            case 0x28DB6Cu: goto label_28db6c;
            case 0x28DB70u: goto label_28db70;
            case 0x28DB74u: goto label_28db74;
            case 0x28DB78u: goto label_28db78;
            case 0x28DB7Cu: goto label_28db7c;
            case 0x28DB80u: goto label_28db80;
            case 0x28DB84u: goto label_28db84;
            case 0x28DB88u: goto label_28db88;
            case 0x28DB8Cu: goto label_28db8c;
            case 0x28DB90u: goto label_28db90;
            case 0x28DB94u: goto label_28db94;
            case 0x28DB98u: goto label_28db98;
            case 0x28DB9Cu: goto label_28db9c;
            case 0x28DBA0u: goto label_28dba0;
            case 0x28DBA4u: goto label_28dba4;
            case 0x28DBA8u: goto label_28dba8;
            case 0x28DBACu: goto label_28dbac;
            case 0x28DBB0u: goto label_28dbb0;
            case 0x28DBB4u: goto label_28dbb4;
            case 0x28DBB8u: goto label_28dbb8;
            case 0x28DBBCu: goto label_28dbbc;
            case 0x28DBC0u: goto label_28dbc0;
            case 0x28DBC4u: goto label_28dbc4;
            case 0x28DBC8u: goto label_28dbc8;
            case 0x28DBCCu: goto label_28dbcc;
            case 0x28DBD0u: goto label_28dbd0;
            case 0x28DBD4u: goto label_28dbd4;
            case 0x28DBD8u: goto label_28dbd8;
            case 0x28DBDCu: goto label_28dbdc;
            case 0x28DBE0u: goto label_28dbe0;
            case 0x28DBE4u: goto label_28dbe4;
            case 0x28DBE8u: goto label_28dbe8;
            case 0x28DBECu: goto label_28dbec;
            case 0x28DBF0u: goto label_28dbf0;
            case 0x28DBF4u: goto label_28dbf4;
            case 0x28DBF8u: goto label_28dbf8;
            case 0x28DBFCu: goto label_28dbfc;
            case 0x28DC00u: goto label_28dc00;
            case 0x28DC04u: goto label_28dc04;
            case 0x28DC08u: goto label_28dc08;
            case 0x28DC0Cu: goto label_28dc0c;
            case 0x28DC10u: goto label_28dc10;
            case 0x28DC14u: goto label_28dc14;
            case 0x28DC18u: goto label_28dc18;
            case 0x28DC1Cu: goto label_28dc1c;
            case 0x28DC20u: goto label_28dc20;
            case 0x28DC24u: goto label_28dc24;
            case 0x28DC28u: goto label_28dc28;
            case 0x28DC2Cu: goto label_28dc2c;
            case 0x28DC30u: goto label_28dc30;
            case 0x28DC34u: goto label_28dc34;
            case 0x28DC38u: goto label_28dc38;
            case 0x28DC3Cu: goto label_28dc3c;
            case 0x28DC40u: goto label_28dc40;
            case 0x28DC44u: goto label_28dc44;
            case 0x28DC48u: goto label_28dc48;
            case 0x28DC4Cu: goto label_28dc4c;
            case 0x28DC50u: goto label_28dc50;
            case 0x28DC54u: goto label_28dc54;
            case 0x28DC58u: goto label_28dc58;
            case 0x28DC5Cu: goto label_28dc5c;
            case 0x28DC60u: goto label_28dc60;
            case 0x28DC64u: goto label_28dc64;
            case 0x28DC68u: goto label_28dc68;
            case 0x28DC6Cu: goto label_28dc6c;
            case 0x28DC70u: goto label_28dc70;
            case 0x28DC74u: goto label_28dc74;
            case 0x28DC78u: goto label_28dc78;
            case 0x28DC7Cu: goto label_28dc7c;
            case 0x28DC80u: goto label_28dc80;
            case 0x28DC84u: goto label_28dc84;
            case 0x28DC88u: goto label_28dc88;
            case 0x28DC8Cu: goto label_28dc8c;
            case 0x28DC90u: goto label_28dc90;
            case 0x28DC94u: goto label_28dc94;
            case 0x28DC98u: goto label_28dc98;
            case 0x28DC9Cu: goto label_28dc9c;
            case 0x28DCA0u: goto label_28dca0;
            case 0x28DCA4u: goto label_28dca4;
            case 0x28DCA8u: goto label_28dca8;
            case 0x28DCACu: goto label_28dcac;
            case 0x28DCB0u: goto label_28dcb0;
            case 0x28DCB4u: goto label_28dcb4;
            case 0x28DCB8u: goto label_28dcb8;
            case 0x28DCBCu: goto label_28dcbc;
            case 0x28DCC0u: goto label_28dcc0;
            case 0x28DCC4u: goto label_28dcc4;
            case 0x28DCC8u: goto label_28dcc8;
            case 0x28DCCCu: goto label_28dccc;
            case 0x28DCD0u: goto label_28dcd0;
            case 0x28DCD4u: goto label_28dcd4;
            case 0x28DCD8u: goto label_28dcd8;
            case 0x28DCDCu: goto label_28dcdc;
            case 0x28DCE0u: goto label_28dce0;
            case 0x28DCE4u: goto label_28dce4;
            case 0x28DCE8u: goto label_28dce8;
            case 0x28DCECu: goto label_28dcec;
            case 0x28DCF0u: goto label_28dcf0;
            case 0x28DCF4u: goto label_28dcf4;
            case 0x28DCF8u: goto label_28dcf8;
            case 0x28DCFCu: goto label_28dcfc;
            case 0x28DD00u: goto label_28dd00;
            case 0x28DD04u: goto label_28dd04;
            case 0x28DD08u: goto label_28dd08;
            case 0x28DD0Cu: goto label_28dd0c;
            case 0x28DD10u: goto label_28dd10;
            case 0x28DD14u: goto label_28dd14;
            case 0x28DD18u: goto label_28dd18;
            case 0x28DD1Cu: goto label_28dd1c;
            case 0x28DD20u: goto label_28dd20;
            case 0x28DD24u: goto label_28dd24;
            case 0x28DD28u: goto label_28dd28;
            case 0x28DD2Cu: goto label_28dd2c;
            case 0x28DD30u: goto label_28dd30;
            case 0x28DD34u: goto label_28dd34;
            case 0x28DD38u: goto label_28dd38;
            case 0x28DD3Cu: goto label_28dd3c;
            case 0x28DD40u: goto label_28dd40;
            case 0x28DD44u: goto label_28dd44;
            case 0x28DD48u: goto label_28dd48;
            case 0x28DD4Cu: goto label_28dd4c;
            case 0x28DD50u: goto label_28dd50;
            case 0x28DD54u: goto label_28dd54;
            case 0x28DD58u: goto label_28dd58;
            case 0x28DD5Cu: goto label_28dd5c;
            case 0x28DD60u: goto label_28dd60;
            case 0x28DD64u: goto label_28dd64;
            case 0x28DD68u: goto label_28dd68;
            case 0x28DD6Cu: goto label_28dd6c;
            case 0x28DD70u: goto label_28dd70;
            case 0x28DD74u: goto label_28dd74;
            case 0x28DD78u: goto label_28dd78;
            case 0x28DD7Cu: goto label_28dd7c;
            case 0x28DD80u: goto label_28dd80;
            case 0x28DD84u: goto label_28dd84;
            case 0x28DD88u: goto label_28dd88;
            case 0x28DD8Cu: goto label_28dd8c;
            case 0x28DD90u: goto label_28dd90;
            case 0x28DD94u: goto label_28dd94;
            case 0x28DD98u: goto label_28dd98;
            case 0x28DD9Cu: goto label_28dd9c;
            case 0x28DDA0u: goto label_28dda0;
            case 0x28DDA4u: goto label_28dda4;
            case 0x28DDA8u: goto label_28dda8;
            case 0x28DDACu: goto label_28ddac;
            case 0x28DDB0u: goto label_28ddb0;
            case 0x28DDB4u: goto label_28ddb4;
            case 0x28DDB8u: goto label_28ddb8;
            case 0x28DDBCu: goto label_28ddbc;
            case 0x28DDC0u: goto label_28ddc0;
            case 0x28DDC4u: goto label_28ddc4;
            case 0x28DDC8u: goto label_28ddc8;
            case 0x28DDCCu: goto label_28ddcc;
            case 0x28DDD0u: goto label_28ddd0;
            case 0x28DDD4u: goto label_28ddd4;
            case 0x28DDD8u: goto label_28ddd8;
            case 0x28DDDCu: goto label_28dddc;
            case 0x28DDE0u: goto label_28dde0;
            case 0x28DDE4u: goto label_28dde4;
            case 0x28DDE8u: goto label_28dde8;
            case 0x28DDECu: goto label_28ddec;
            case 0x28DDF0u: goto label_28ddf0;
            case 0x28DDF4u: goto label_28ddf4;
            case 0x28DDF8u: goto label_28ddf8;
            case 0x28DDFCu: goto label_28ddfc;
            case 0x28DE00u: goto label_28de00;
            case 0x28DE04u: goto label_28de04;
            case 0x28DE08u: goto label_28de08;
            case 0x28DE0Cu: goto label_28de0c;
            case 0x28DE10u: goto label_28de10;
            case 0x28DE14u: goto label_28de14;
            case 0x28DE18u: goto label_28de18;
            case 0x28DE1Cu: goto label_28de1c;
            case 0x28DE20u: goto label_28de20;
            case 0x28DE24u: goto label_28de24;
            case 0x28DE28u: goto label_28de28;
            case 0x28DE2Cu: goto label_28de2c;
            case 0x28DE30u: goto label_28de30;
            case 0x28DE34u: goto label_28de34;
            case 0x28DE38u: goto label_28de38;
            case 0x28DE3Cu: goto label_28de3c;
            case 0x28DE40u: goto label_28de40;
            case 0x28DE44u: goto label_28de44;
            case 0x28DE48u: goto label_28de48;
            case 0x28DE4Cu: goto label_28de4c;
            case 0x28DE50u: goto label_28de50;
            case 0x28DE54u: goto label_28de54;
            case 0x28DE58u: goto label_28de58;
            case 0x28DE5Cu: goto label_28de5c;
            case 0x28DE60u: goto label_28de60;
            case 0x28DE64u: goto label_28de64;
            case 0x28DE68u: goto label_28de68;
            case 0x28DE6Cu: goto label_28de6c;
            case 0x28DE70u: goto label_28de70;
            case 0x28DE74u: goto label_28de74;
            case 0x28DE78u: goto label_28de78;
            case 0x28DE7Cu: goto label_28de7c;
            case 0x28DE80u: goto label_28de80;
            case 0x28DE84u: goto label_28de84;
            case 0x28DE88u: goto label_28de88;
            case 0x28DE8Cu: goto label_28de8c;
            case 0x28DE90u: goto label_28de90;
            case 0x28DE94u: goto label_28de94;
            case 0x28DE98u: goto label_28de98;
            case 0x28DE9Cu: goto label_28de9c;
            case 0x28DEA0u: goto label_28dea0;
            case 0x28DEA4u: goto label_28dea4;
            case 0x28DEA8u: goto label_28dea8;
            case 0x28DEACu: goto label_28deac;
            case 0x28DEB0u: goto label_28deb0;
            case 0x28DEB4u: goto label_28deb4;
            case 0x28DEB8u: goto label_28deb8;
            case 0x28DEBCu: goto label_28debc;
            case 0x28DEC0u: goto label_28dec0;
            case 0x28DEC4u: goto label_28dec4;
            case 0x28DEC8u: goto label_28dec8;
            case 0x28DECCu: goto label_28decc;
            case 0x28DED0u: goto label_28ded0;
            case 0x28DED4u: goto label_28ded4;
            case 0x28DED8u: goto label_28ded8;
            case 0x28DEDCu: goto label_28dedc;
            case 0x28DEE0u: goto label_28dee0;
            case 0x28DEE4u: goto label_28dee4;
            case 0x28DEE8u: goto label_28dee8;
            case 0x28DEECu: goto label_28deec;
            case 0x28DEF0u: goto label_28def0;
            case 0x28DEF4u: goto label_28def4;
            case 0x28DEF8u: goto label_28def8;
            case 0x28DEFCu: goto label_28defc;
            case 0x28DF00u: goto label_28df00;
            case 0x28DF04u: goto label_28df04;
            case 0x28DF08u: goto label_28df08;
            case 0x28DF0Cu: goto label_28df0c;
            case 0x28DF10u: goto label_28df10;
            case 0x28DF14u: goto label_28df14;
            case 0x28DF18u: goto label_28df18;
            case 0x28DF1Cu: goto label_28df1c;
            case 0x28DF20u: goto label_28df20;
            case 0x28DF24u: goto label_28df24;
            case 0x28DF28u: goto label_28df28;
            case 0x28DF2Cu: goto label_28df2c;
            case 0x28DF30u: goto label_28df30;
            case 0x28DF34u: goto label_28df34;
            case 0x28DF38u: goto label_28df38;
            case 0x28DF3Cu: goto label_28df3c;
            case 0x28DF40u: goto label_28df40;
            case 0x28DF44u: goto label_28df44;
            case 0x28DF48u: goto label_28df48;
            case 0x28DF4Cu: goto label_28df4c;
            case 0x28DF50u: goto label_28df50;
            case 0x28DF54u: goto label_28df54;
            case 0x28DF58u: goto label_28df58;
            case 0x28DF5Cu: goto label_28df5c;
            case 0x28DF60u: goto label_28df60;
            case 0x28DF64u: goto label_28df64;
            case 0x28DF68u: goto label_28df68;
            case 0x28DF6Cu: goto label_28df6c;
            case 0x28DF70u: goto label_28df70;
            case 0x28DF74u: goto label_28df74;
            case 0x28DF78u: goto label_28df78;
            case 0x28DF7Cu: goto label_28df7c;
            case 0x28DF80u: goto label_28df80;
            case 0x28DF84u: goto label_28df84;
            case 0x28DF88u: goto label_28df88;
            case 0x28DF8Cu: goto label_28df8c;
            case 0x28DF90u: goto label_28df90;
            case 0x28DF94u: goto label_28df94;
            case 0x28DF98u: goto label_28df98;
            case 0x28DF9Cu: goto label_28df9c;
            case 0x28DFA0u: goto label_28dfa0;
            case 0x28DFA4u: goto label_28dfa4;
            case 0x28DFA8u: goto label_28dfa8;
            case 0x28DFACu: goto label_28dfac;
            case 0x28DFB0u: goto label_28dfb0;
            case 0x28DFB4u: goto label_28dfb4;
            default: break;
        }
        return;
    }
label_fallthrough_0x28dfb0:
    ctx->pc = 0x28DFB8u;
}
