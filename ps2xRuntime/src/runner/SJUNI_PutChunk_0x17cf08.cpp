#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_PutChunk
// Address: 0x17cf08 - 0x17d06c
void SJUNI_PutChunk_0x17cf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_PutChunk");


    ctx->pc = 0x17cf08u;

label_17cf08:
    // 0x17cf08: 0x27bdffc0
    ctx->pc = 0x17cf08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_17cf0c:
    // 0x17cf0c: 0xffb20020
    ctx->pc = 0x17cf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17cf10:
    // 0x17cf10: 0xffb10010
    ctx->pc = 0x17cf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17cf14:
    // 0x17cf14: 0xa0902d
    ctx->pc = 0x17cf14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17cf18:
    // 0x17cf18: 0xffb00000
    ctx->pc = 0x17cf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17cf1c:
    // 0x17cf1c: 0xc0882d
    ctx->pc = 0x17cf1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17cf20:
    // 0x17cf20: 0xffbf0030
    ctx->pc = 0x17cf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17cf24:
    // 0x17cf24: 0x2e420004
    ctx->pc = 0x17cf24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 4));
label_17cf28:
    // 0x17cf28: 0x14400009
label_17cf2c:
    if (ctx->pc == 0x17CF2Cu) {
        ctx->pc = 0x17CF2Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17CF30u;
        goto label_17cf30;
    }
    ctx->pc = 0x17CF28u;
    {
        const bool branch_taken_0x17cf28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17CF2Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17cf28) {
            ctx->pc = 0x17CF50u;
            goto label_17cf50;
        }
    }
    ctx->pc = 0x17CF30u;
label_17cf30:
    // 0x17cf30: 0x8e020028
    ctx->pc = 0x17cf30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_17cf34:
    // 0x17cf34: 0x10400048
label_17cf38:
    if (ctx->pc == 0x17CF38u) {
        ctx->pc = 0x17CF38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17CF3Cu;
        goto label_17cf3c;
    }
    ctx->pc = 0x17CF34u;
    {
        const bool branch_taken_0x17cf34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CF38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17cf34) {
            ctx->pc = 0x17D058u;
            goto label_17d058;
        }
    }
    ctx->pc = 0x17CF3Cu;
label_17cf3c:
    // 0x17cf3c: 0x8e04002c
    ctx->pc = 0x17cf3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17cf40:
    // 0x17cf40: 0x40f809
label_17cf44:
    if (ctx->pc == 0x17CF44u) {
        ctx->pc = 0x17CF44u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17CF48u;
        goto label_17cf48;
    }
    ctx->pc = 0x17CF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17CF48u);
        ctx->pc = 0x17CF44u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CF08u: goto label_17cf08;
            case 0x17CF0Cu: goto label_17cf0c;
            case 0x17CF10u: goto label_17cf10;
            case 0x17CF14u: goto label_17cf14;
            case 0x17CF18u: goto label_17cf18;
            case 0x17CF1Cu: goto label_17cf1c;
            case 0x17CF20u: goto label_17cf20;
            case 0x17CF24u: goto label_17cf24;
            case 0x17CF28u: goto label_17cf28;
            case 0x17CF2Cu: goto label_17cf2c;
            case 0x17CF30u: goto label_17cf30;
            case 0x17CF34u: goto label_17cf34;
            case 0x17CF38u: goto label_17cf38;
            case 0x17CF3Cu: goto label_17cf3c;
            case 0x17CF40u: goto label_17cf40;
            case 0x17CF44u: goto label_17cf44;
            case 0x17CF48u: goto label_17cf48;
            case 0x17CF4Cu: goto label_17cf4c;
            case 0x17CF50u: goto label_17cf50;
            case 0x17CF54u: goto label_17cf54;
            case 0x17CF58u: goto label_17cf58;
            case 0x17CF5Cu: goto label_17cf5c;
            case 0x17CF60u: goto label_17cf60;
            case 0x17CF64u: goto label_17cf64;
            case 0x17CF68u: goto label_17cf68;
            case 0x17CF6Cu: goto label_17cf6c;
            case 0x17CF70u: goto label_17cf70;
            case 0x17CF74u: goto label_17cf74;
            case 0x17CF78u: goto label_17cf78;
            case 0x17CF7Cu: goto label_17cf7c;
            case 0x17CF80u: goto label_17cf80;
            case 0x17CF84u: goto label_17cf84;
            case 0x17CF88u: goto label_17cf88;
            case 0x17CF8Cu: goto label_17cf8c;
            case 0x17CF90u: goto label_17cf90;
            case 0x17CF94u: goto label_17cf94;
            case 0x17CF98u: goto label_17cf98;
            case 0x17CF9Cu: goto label_17cf9c;
            case 0x17CFA0u: goto label_17cfa0;
            case 0x17CFA4u: goto label_17cfa4;
            case 0x17CFA8u: goto label_17cfa8;
            case 0x17CFACu: goto label_17cfac;
            case 0x17CFB0u: goto label_17cfb0;
            case 0x17CFB4u: goto label_17cfb4;
            case 0x17CFB8u: goto label_17cfb8;
            case 0x17CFBCu: goto label_17cfbc;
            case 0x17CFC0u: goto label_17cfc0;
            case 0x17CFC4u: goto label_17cfc4;
            case 0x17CFC8u: goto label_17cfc8;
            case 0x17CFCCu: goto label_17cfcc;
            case 0x17CFD0u: goto label_17cfd0;
            case 0x17CFD4u: goto label_17cfd4;
            case 0x17CFD8u: goto label_17cfd8;
            case 0x17CFDCu: goto label_17cfdc;
            case 0x17CFE0u: goto label_17cfe0;
            case 0x17CFE4u: goto label_17cfe4;
            case 0x17CFE8u: goto label_17cfe8;
            case 0x17CFECu: goto label_17cfec;
            case 0x17CFF0u: goto label_17cff0;
            case 0x17CFF4u: goto label_17cff4;
            case 0x17CFF8u: goto label_17cff8;
            case 0x17CFFCu: goto label_17cffc;
            case 0x17D000u: goto label_17d000;
            case 0x17D004u: goto label_17d004;
            case 0x17D008u: goto label_17d008;
            case 0x17D00Cu: goto label_17d00c;
            case 0x17D010u: goto label_17d010;
            case 0x17D014u: goto label_17d014;
            case 0x17D018u: goto label_17d018;
            case 0x17D01Cu: goto label_17d01c;
            case 0x17D020u: goto label_17d020;
            case 0x17D024u: goto label_17d024;
            case 0x17D028u: goto label_17d028;
            case 0x17D02Cu: goto label_17d02c;
            case 0x17D030u: goto label_17d030;
            case 0x17D034u: goto label_17d034;
            case 0x17D038u: goto label_17d038;
            case 0x17D03Cu: goto label_17d03c;
            case 0x17D040u: goto label_17d040;
            case 0x17D044u: goto label_17d044;
            case 0x17D048u: goto label_17d048;
            case 0x17D04Cu: goto label_17d04c;
            case 0x17D050u: goto label_17d050;
            case 0x17D054u: goto label_17d054;
            case 0x17D058u: goto label_17d058;
            case 0x17D05Cu: goto label_17d05c;
            case 0x17D060u: goto label_17d060;
            case 0x17D064u: goto label_17d064;
            case 0x17D068u: goto label_17d068;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17CF48u; }
            if (ctx->pc != 0x17CF48u) { return; }
        }
    }
    ctx->pc = 0x17CF48u;
label_17cf48:
    // 0x17cf48: 0x10000043
label_17cf4c:
    if (ctx->pc == 0x17CF4Cu) {
        ctx->pc = 0x17CF4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17CF50u;
        goto label_17cf50;
    }
    ctx->pc = 0x17CF48u;
    {
        const bool branch_taken_0x17cf48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CF4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17cf48) {
            ctx->pc = 0x17D058u;
            goto label_17d058;
        }
    }
    ctx->pc = 0x17CF50u;
label_17cf50:
    // 0x17cf50: 0x8e220004
    ctx->pc = 0x17cf50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17cf54:
    // 0x17cf54: 0x18400040
label_17cf58:
    if (ctx->pc == 0x17CF58u) {
        ctx->pc = 0x17CF58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17CF5Cu;
        goto label_17cf5c;
    }
    ctx->pc = 0x17CF54u;
    {
        const bool branch_taken_0x17cf54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17CF58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17cf54) {
            ctx->pc = 0x17D058u;
            goto label_17d058;
        }
    }
    ctx->pc = 0x17CF5Cu;
label_17cf5c:
    // 0x17cf5c: 0x8e220000
    ctx->pc = 0x17cf5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17cf60:
    // 0x17cf60: 0x5040003e
label_17cf64:
    if (ctx->pc == 0x17CF64u) {
        ctx->pc = 0x17CF64u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17CF68u;
        goto label_17cf68;
    }
    ctx->pc = 0x17CF60u;
    {
        const bool branch_taken_0x17cf60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17cf60) {
            ctx->pc = 0x17CF64u;
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x17D05Cu;
            goto label_17d05c;
        }
    }
    ctx->pc = 0x17CF68u;
label_17cf68:
    // 0x17cf68: 0xc05efbc
label_17cf6c:
    if (ctx->pc == 0x17CF6Cu) {
        ctx->pc = 0x17CF70u;
        goto label_17cf70;
    }
    ctx->pc = 0x17CF68u;
    SET_GPR_U32(ctx, 31, 0x17CF70u);
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CF70u; }
        else if (ctx->pc != 0x17CF70u) { ctx->pc = 0x17CF70u; }
    }
    if (ctx->pc != 0x17CF70u) { return; }
    ctx->pc = 0x17CF70u;
label_17cf70:
    // 0x17cf70: 0x121080
    ctx->pc = 0x17cf70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_17cf74:
    // 0x17cf74: 0x24420018
    ctx->pc = 0x17cf74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24));
label_17cf78:
    // 0x17cf78: 0x2022821
    ctx->pc = 0x17cf78u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17cf7c:
    // 0x17cf7c: 0x8ca30000
    ctx->pc = 0x17cf7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17cf80:
    // 0x17cf80: 0x1060000c
label_17cf84:
    if (ctx->pc == 0x17CF84u) {
        ctx->pc = 0x17CF84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17CF88u;
        goto label_17cf88;
    }
    ctx->pc = 0x17CF80u;
    {
        const bool branch_taken_0x17cf80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CF84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17cf80) {
            ctx->pc = 0x17CFB4u;
            goto label_17cfb4;
        }
    }
    ctx->pc = 0x17CF88u;
label_17cf88:
    // 0x17cf88: 0x92020005
    ctx->pc = 0x17cf88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_17cf8c:
    // 0x17cf8c: 0x0
    ctx->pc = 0x17cf8cu;
    // NOP
label_17cf90:
    // 0x17cf90: 0x60202d
    ctx->pc = 0x17cf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17cf94:
    // 0x17cf94: 0x8c830000
    ctx->pc = 0x17cf94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17cf98:
    // 0x17cf98: 0x80282d
    ctx->pc = 0x17cf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17cf9c:
    // 0x17cf9c: 0x0
    ctx->pc = 0x17cf9cu;
    // NOP
label_17cfa0:
    // 0x17cfa0: 0x0
    ctx->pc = 0x17cfa0u;
    // NOP
label_17cfa4:
    // 0x17cfa4: 0x1460fffa
label_17cfa8:
    if (ctx->pc == 0x17CFA8u) {
        ctx->pc = 0x17CFACu;
        goto label_17cfac;
    }
    ctx->pc = 0x17CFA4u;
    {
        const bool branch_taken_0x17cfa4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x17cfa4) {
            ctx->pc = 0x17CF90u;
            goto label_17cf90;
        }
    }
    ctx->pc = 0x17CFACu;
label_17cfac:
    // 0x17cfac: 0x10000003
label_17cfb0:
    if (ctx->pc == 0x17CFB0u) {
        ctx->pc = 0x17CFB0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x17CFB4u;
        goto label_17cfb4;
    }
    ctx->pc = 0x17CFACu;
    {
        const bool branch_taken_0x17cfac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CFB0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
        if (branch_taken_0x17cfac) {
            ctx->pc = 0x17CFBCu;
            goto label_17cfbc;
        }
    }
    ctx->pc = 0x17CFB4u;
label_17cfb4:
    // 0x17cfb4: 0x92020005
    ctx->pc = 0x17cfb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_17cfb8:
    // 0x17cfb8: 0x21600
    ctx->pc = 0x17cfb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_17cfbc:
    // 0x17cfbc: 0x24030001
    ctx->pc = 0x17cfbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_17cfc0:
    // 0x17cfc0: 0x21603
    ctx->pc = 0x17cfc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_17cfc4:
    // 0x17cfc4: 0x5443000d
label_17cfc8:
    if (ctx->pc == 0x17CFC8u) {
        ctx->pc = 0x17CFC8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x17CFCCu;
        goto label_17cfcc;
    }
    ctx->pc = 0x17CFC4u;
    {
        const bool branch_taken_0x17cfc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x17cfc4) {
            ctx->pc = 0x17CFC8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x17CFFCu;
            goto label_17cffc;
        }
    }
    ctx->pc = 0x17CFCCu;
label_17cfcc:
    // 0x17cfcc: 0x5080000b
label_17cfd0:
    if (ctx->pc == 0x17CFD0u) {
        ctx->pc = 0x17CFD0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x17CFD4u;
        goto label_17cfd4;
    }
    ctx->pc = 0x17CFCCu;
    {
        const bool branch_taken_0x17cfcc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x17cfcc) {
            ctx->pc = 0x17CFD0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x17CFFCu;
            goto label_17cffc;
        }
    }
    ctx->pc = 0x17CFD4u;
label_17cfd4:
    // 0x17cfd4: 0x8c820008
    ctx->pc = 0x17cfd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17cfd8:
    // 0x17cfd8: 0x8c86000c
    ctx->pc = 0x17cfd8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17cfdc:
    // 0x17cfdc: 0x8e230000
    ctx->pc = 0x17cfdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17cfe0:
    // 0x17cfe0: 0x461021
    ctx->pc = 0x17cfe0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17cfe4:
    // 0x17cfe4: 0x54430005
label_17cfe8:
    if (ctx->pc == 0x17CFE8u) {
        ctx->pc = 0x17CFE8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x17CFECu;
        goto label_17cfec;
    }
    ctx->pc = 0x17CFE4u;
    {
        const bool branch_taken_0x17cfe4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x17cfe4) {
            ctx->pc = 0x17CFE8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x17CFFCu;
            goto label_17cffc;
        }
    }
    ctx->pc = 0x17CFECu;
label_17cfec:
    // 0x17cfec: 0x8e220004
    ctx->pc = 0x17cfecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17cff0:
    // 0x17cff0: 0xc21021
    ctx->pc = 0x17cff0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17cff4:
    // 0x17cff4: 0x10000012
label_17cff8:
    if (ctx->pc == 0x17CFF8u) {
        ctx->pc = 0x17CFF8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x17CFFCu;
        goto label_17cffc;
    }
    ctx->pc = 0x17CFF4u;
    {
        const bool branch_taken_0x17cff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CFF8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x17cff4) {
            ctx->pc = 0x17D040u;
            goto label_17d040;
        }
    }
    ctx->pc = 0x17CFFCu;
label_17cffc:
    // 0x17cffc: 0x54800009
label_17d000:
    if (ctx->pc == 0x17D000u) {
        ctx->pc = 0x17D000u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x17D004u;
        goto label_17d004;
    }
    ctx->pc = 0x17CFFCu;
    {
        const bool branch_taken_0x17cffc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x17cffc) {
            ctx->pc = 0x17D000u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x17D024u;
            goto label_17d024;
        }
    }
    ctx->pc = 0x17D004u;
label_17d004:
    // 0x17d004: 0x8e020028
    ctx->pc = 0x17d004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_17d008:
    // 0x17d008: 0x1040000e
label_17d00c:
    if (ctx->pc == 0x17D00Cu) {
        ctx->pc = 0x17D00Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17D010u;
        goto label_17d010;
    }
    ctx->pc = 0x17D008u;
    {
        const bool branch_taken_0x17d008 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D00Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17d008) {
            ctx->pc = 0x17D044u;
            goto label_17d044;
        }
    }
    ctx->pc = 0x17D010u;
label_17d010:
    // 0x17d010: 0x8e04002c
    ctx->pc = 0x17d010u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17d014:
    // 0x17d014: 0x40f809
label_17d018:
    if (ctx->pc == 0x17D018u) {
        ctx->pc = 0x17D018u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17D01Cu;
        goto label_17d01c;
    }
    ctx->pc = 0x17D014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D01Cu);
        ctx->pc = 0x17D018u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CF08u: goto label_17cf08;
            case 0x17CF0Cu: goto label_17cf0c;
            case 0x17CF10u: goto label_17cf10;
            case 0x17CF14u: goto label_17cf14;
            case 0x17CF18u: goto label_17cf18;
            case 0x17CF1Cu: goto label_17cf1c;
            case 0x17CF20u: goto label_17cf20;
            case 0x17CF24u: goto label_17cf24;
            case 0x17CF28u: goto label_17cf28;
            case 0x17CF2Cu: goto label_17cf2c;
            case 0x17CF30u: goto label_17cf30;
            case 0x17CF34u: goto label_17cf34;
            case 0x17CF38u: goto label_17cf38;
            case 0x17CF3Cu: goto label_17cf3c;
            case 0x17CF40u: goto label_17cf40;
            case 0x17CF44u: goto label_17cf44;
            case 0x17CF48u: goto label_17cf48;
            case 0x17CF4Cu: goto label_17cf4c;
            case 0x17CF50u: goto label_17cf50;
            case 0x17CF54u: goto label_17cf54;
            case 0x17CF58u: goto label_17cf58;
            case 0x17CF5Cu: goto label_17cf5c;
            case 0x17CF60u: goto label_17cf60;
            case 0x17CF64u: goto label_17cf64;
            case 0x17CF68u: goto label_17cf68;
            case 0x17CF6Cu: goto label_17cf6c;
            case 0x17CF70u: goto label_17cf70;
            case 0x17CF74u: goto label_17cf74;
            case 0x17CF78u: goto label_17cf78;
            case 0x17CF7Cu: goto label_17cf7c;
            case 0x17CF80u: goto label_17cf80;
            case 0x17CF84u: goto label_17cf84;
            case 0x17CF88u: goto label_17cf88;
            case 0x17CF8Cu: goto label_17cf8c;
            case 0x17CF90u: goto label_17cf90;
            case 0x17CF94u: goto label_17cf94;
            case 0x17CF98u: goto label_17cf98;
            case 0x17CF9Cu: goto label_17cf9c;
            case 0x17CFA0u: goto label_17cfa0;
            case 0x17CFA4u: goto label_17cfa4;
            case 0x17CFA8u: goto label_17cfa8;
            case 0x17CFACu: goto label_17cfac;
            case 0x17CFB0u: goto label_17cfb0;
            case 0x17CFB4u: goto label_17cfb4;
            case 0x17CFB8u: goto label_17cfb8;
            case 0x17CFBCu: goto label_17cfbc;
            case 0x17CFC0u: goto label_17cfc0;
            case 0x17CFC4u: goto label_17cfc4;
            case 0x17CFC8u: goto label_17cfc8;
            case 0x17CFCCu: goto label_17cfcc;
            case 0x17CFD0u: goto label_17cfd0;
            case 0x17CFD4u: goto label_17cfd4;
            case 0x17CFD8u: goto label_17cfd8;
            case 0x17CFDCu: goto label_17cfdc;
            case 0x17CFE0u: goto label_17cfe0;
            case 0x17CFE4u: goto label_17cfe4;
            case 0x17CFE8u: goto label_17cfe8;
            case 0x17CFECu: goto label_17cfec;
            case 0x17CFF0u: goto label_17cff0;
            case 0x17CFF4u: goto label_17cff4;
            case 0x17CFF8u: goto label_17cff8;
            case 0x17CFFCu: goto label_17cffc;
            case 0x17D000u: goto label_17d000;
            case 0x17D004u: goto label_17d004;
            case 0x17D008u: goto label_17d008;
            case 0x17D00Cu: goto label_17d00c;
            case 0x17D010u: goto label_17d010;
            case 0x17D014u: goto label_17d014;
            case 0x17D018u: goto label_17d018;
            case 0x17D01Cu: goto label_17d01c;
            case 0x17D020u: goto label_17d020;
            case 0x17D024u: goto label_17d024;
            case 0x17D028u: goto label_17d028;
            case 0x17D02Cu: goto label_17d02c;
            case 0x17D030u: goto label_17d030;
            case 0x17D034u: goto label_17d034;
            case 0x17D038u: goto label_17d038;
            case 0x17D03Cu: goto label_17d03c;
            case 0x17D040u: goto label_17d040;
            case 0x17D044u: goto label_17d044;
            case 0x17D048u: goto label_17d048;
            case 0x17D04Cu: goto label_17d04c;
            case 0x17D050u: goto label_17d050;
            case 0x17D054u: goto label_17d054;
            case 0x17D058u: goto label_17d058;
            case 0x17D05Cu: goto label_17d05c;
            case 0x17D060u: goto label_17d060;
            case 0x17D064u: goto label_17d064;
            case 0x17D068u: goto label_17d068;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D01Cu; }
            if (ctx->pc != 0x17D01Cu) { return; }
        }
    }
    ctx->pc = 0x17D01Cu;
label_17d01c:
    // 0x17d01c: 0x10000009
label_17d020:
    if (ctx->pc == 0x17D020u) {
        ctx->pc = 0x17D020u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17D024u;
        goto label_17d024;
    }
    ctx->pc = 0x17D01Cu;
    {
        const bool branch_taken_0x17d01c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D020u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17d01c) {
            ctx->pc = 0x17D044u;
            goto label_17d044;
        }
    }
    ctx->pc = 0x17D024u;
label_17d024:
    // 0x17d024: 0xae020014
    ctx->pc = 0x17d024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_17d028:
    // 0x17d028: 0xac800000
    ctx->pc = 0x17d028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_17d02c:
    // 0x17d02c: 0x6a220007
    ctx->pc = 0x17d02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_17d030:
    // 0x17d030: 0x6e220000
    ctx->pc = 0x17d030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_17d034:
    // 0x17d034: 0xb082000f
    ctx->pc = 0x17d034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17d038:
    // 0x17d038: 0xb4820008
    ctx->pc = 0x17d038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17d03c:
    // 0x17d03c: 0xaca40000
    ctx->pc = 0x17d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_17d040:
    // 0x17d040: 0xdfbf0030
    ctx->pc = 0x17d040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17d044:
    // 0x17d044: 0xdfb20020
    ctx->pc = 0x17d044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17d048:
    // 0x17d048: 0xdfb10010
    ctx->pc = 0x17d048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d04c:
    // 0x17d04c: 0xdfb00000
    ctx->pc = 0x17d04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d050:
    // 0x17d050: 0x805efc2
label_17d054:
    if (ctx->pc == 0x17D054u) {
        ctx->pc = 0x17D054u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17D058u;
        goto label_17d058;
    }
    ctx->pc = 0x17D050u;
    ctx->pc = 0x17D054u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
    ctx->pc = 0x17D058u;
label_17d058:
    // 0x17d058: 0xdfb20020
    ctx->pc = 0x17d058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17d05c:
    // 0x17d05c: 0xdfb10010
    ctx->pc = 0x17d05cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d060:
    // 0x17d060: 0xdfb00000
    ctx->pc = 0x17d060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d064:
    // 0x17d064: 0x3e00008
label_17d068:
    if (ctx->pc == 0x17D068u) {
        ctx->pc = 0x17D068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17D06Cu;
        goto label_fallthrough_0x17d064;
    }
    ctx->pc = 0x17D064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CF08u: goto label_17cf08;
            case 0x17CF0Cu: goto label_17cf0c;
            case 0x17CF10u: goto label_17cf10;
            case 0x17CF14u: goto label_17cf14;
            case 0x17CF18u: goto label_17cf18;
            case 0x17CF1Cu: goto label_17cf1c;
            case 0x17CF20u: goto label_17cf20;
            case 0x17CF24u: goto label_17cf24;
            case 0x17CF28u: goto label_17cf28;
            case 0x17CF2Cu: goto label_17cf2c;
            case 0x17CF30u: goto label_17cf30;
            case 0x17CF34u: goto label_17cf34;
            case 0x17CF38u: goto label_17cf38;
            case 0x17CF3Cu: goto label_17cf3c;
            case 0x17CF40u: goto label_17cf40;
            case 0x17CF44u: goto label_17cf44;
            case 0x17CF48u: goto label_17cf48;
            case 0x17CF4Cu: goto label_17cf4c;
            case 0x17CF50u: goto label_17cf50;
            case 0x17CF54u: goto label_17cf54;
            case 0x17CF58u: goto label_17cf58;
            case 0x17CF5Cu: goto label_17cf5c;
            case 0x17CF60u: goto label_17cf60;
            case 0x17CF64u: goto label_17cf64;
            case 0x17CF68u: goto label_17cf68;
            case 0x17CF6Cu: goto label_17cf6c;
            case 0x17CF70u: goto label_17cf70;
            case 0x17CF74u: goto label_17cf74;
            case 0x17CF78u: goto label_17cf78;
            case 0x17CF7Cu: goto label_17cf7c;
            case 0x17CF80u: goto label_17cf80;
            case 0x17CF84u: goto label_17cf84;
            case 0x17CF88u: goto label_17cf88;
            case 0x17CF8Cu: goto label_17cf8c;
            case 0x17CF90u: goto label_17cf90;
            case 0x17CF94u: goto label_17cf94;
            case 0x17CF98u: goto label_17cf98;
            case 0x17CF9Cu: goto label_17cf9c;
            case 0x17CFA0u: goto label_17cfa0;
            case 0x17CFA4u: goto label_17cfa4;
            case 0x17CFA8u: goto label_17cfa8;
            case 0x17CFACu: goto label_17cfac;
            case 0x17CFB0u: goto label_17cfb0;
            case 0x17CFB4u: goto label_17cfb4;
            case 0x17CFB8u: goto label_17cfb8;
            case 0x17CFBCu: goto label_17cfbc;
            case 0x17CFC0u: goto label_17cfc0;
            case 0x17CFC4u: goto label_17cfc4;
            case 0x17CFC8u: goto label_17cfc8;
            case 0x17CFCCu: goto label_17cfcc;
            case 0x17CFD0u: goto label_17cfd0;
            case 0x17CFD4u: goto label_17cfd4;
            case 0x17CFD8u: goto label_17cfd8;
            case 0x17CFDCu: goto label_17cfdc;
            case 0x17CFE0u: goto label_17cfe0;
            case 0x17CFE4u: goto label_17cfe4;
            case 0x17CFE8u: goto label_17cfe8;
            case 0x17CFECu: goto label_17cfec;
            case 0x17CFF0u: goto label_17cff0;
            case 0x17CFF4u: goto label_17cff4;
            case 0x17CFF8u: goto label_17cff8;
            case 0x17CFFCu: goto label_17cffc;
            case 0x17D000u: goto label_17d000;
            case 0x17D004u: goto label_17d004;
            case 0x17D008u: goto label_17d008;
            case 0x17D00Cu: goto label_17d00c;
            case 0x17D010u: goto label_17d010;
            case 0x17D014u: goto label_17d014;
            case 0x17D018u: goto label_17d018;
            case 0x17D01Cu: goto label_17d01c;
            case 0x17D020u: goto label_17d020;
            case 0x17D024u: goto label_17d024;
            case 0x17D028u: goto label_17d028;
            case 0x17D02Cu: goto label_17d02c;
            case 0x17D030u: goto label_17d030;
            case 0x17D034u: goto label_17d034;
            case 0x17D038u: goto label_17d038;
            case 0x17D03Cu: goto label_17d03c;
            case 0x17D040u: goto label_17d040;
            case 0x17D044u: goto label_17d044;
            case 0x17D048u: goto label_17d048;
            case 0x17D04Cu: goto label_17d04c;
            case 0x17D050u: goto label_17d050;
            case 0x17D054u: goto label_17d054;
            case 0x17D058u: goto label_17d058;
            case 0x17D05Cu: goto label_17d05c;
            case 0x17D060u: goto label_17d060;
            case 0x17D064u: goto label_17d064;
            case 0x17D068u: goto label_17d068;
            default: break;
        }
        return;
    }
label_fallthrough_0x17d064:
    ctx->pc = 0x17D06Cu;
}
