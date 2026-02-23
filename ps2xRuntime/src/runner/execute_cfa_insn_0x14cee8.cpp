#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: execute_cfa_insn
// Address: 0x14cee8 - 0x14d280
void execute_cfa_insn_0x14cee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("execute_cfa_insn");


    ctx->pc = 0x14cee8u;

label_14cee8:
    // 0x14cee8: 0x27bdffb0
    ctx->pc = 0x14cee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_14ceec:
    // 0x14ceec: 0xffb20030
    ctx->pc = 0x14ceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_14cef0:
    // 0x14cef0: 0xffb10020
    ctx->pc = 0x14cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_14cef4:
    // 0x14cef4: 0xc0902d
    ctx->pc = 0x14cef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14cef8:
    // 0x14cef8: 0xffb00010
    ctx->pc = 0x14cef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_14cefc:
    // 0x14cefc: 0xa0882d
    ctx->pc = 0x14cefcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14cf00:
    // 0x14cf00: 0xffbf0040
    ctx->pc = 0x14cf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_14cf04:
    // 0x14cf04: 0x80802d
    ctx->pc = 0x14cf04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14cf08:
    // 0x14cf08: 0x92030000
    ctx->pc = 0x14cf08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14cf0c:
    // 0x14cf0c: 0x30620040
    ctx->pc = 0x14cf0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
label_14cf10:
    // 0x14cf10: 0x10400006
label_14cf14:
    if (ctx->pc == 0x14CF14u) {
        ctx->pc = 0x14CF14u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x14CF18u;
        goto label_14cf18;
    }
    ctx->pc = 0x14CF10u;
    {
        const bool branch_taken_0x14cf10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CF14u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x14cf10) {
            ctx->pc = 0x14CF2Cu;
            goto label_14cf2c;
        }
    }
    ctx->pc = 0x14CF18u;
label_14cf18:
    // 0x14cf18: 0x8e440008
    ctx->pc = 0x14cf18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_14cf1c:
    // 0x14cf1c: 0x3062003f
    ctx->pc = 0x14cf1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 63));
label_14cf20:
    // 0x14cf20: 0x8ce30000
    ctx->pc = 0x14cf20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_14cf24:
    // 0x14cf24: 0x10000027
label_14cf28:
    if (ctx->pc == 0x14CF28u) {
        ctx->pc = 0x14CF28u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        ctx->pc = 0x14CF2Cu;
        goto label_14cf2c;
    }
    ctx->pc = 0x14CF24u;
    {
        const bool branch_taken_0x14cf24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CF28u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        if (branch_taken_0x14cf24) {
            ctx->pc = 0x14CFC4u;
            goto label_14cfc4;
        }
    }
    ctx->pc = 0x14CF2Cu;
label_14cf2c:
    // 0x14cf2c: 0x30620080
    ctx->pc = 0x14cf2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
label_14cf30:
    // 0x14cf30: 0x10400004
label_14cf34:
    if (ctx->pc == 0x14CF34u) {
        ctx->pc = 0x14CF34u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 63));
        ctx->pc = 0x14CF38u;
        goto label_14cf38;
    }
    ctx->pc = 0x14CF30u;
    {
        const bool branch_taken_0x14cf30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CF34u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 63));
        if (branch_taken_0x14cf30) {
            ctx->pc = 0x14CF44u;
            goto label_14cf44;
        }
    }
    ctx->pc = 0x14CF38u;
label_14cf38:
    // 0x14cf38: 0x200202d
    ctx->pc = 0x14cf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14cf3c:
    // 0x14cf3c: 0x1000002f
label_14cf40:
    if (ctx->pc == 0x14CF40u) {
        ctx->pc = 0x14CF40u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x14CF44u;
        goto label_14cf44;
    }
    ctx->pc = 0x14CF3Cu;
    {
        const bool branch_taken_0x14cf3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CF40u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x14cf3c) {
            ctx->pc = 0x14CFFCu;
            goto label_14cffc;
        }
    }
    ctx->pc = 0x14CF44u;
label_14cf44:
    // 0x14cf44: 0x306200c0
    ctx->pc = 0x14cf44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 192));
label_14cf48:
    // 0x14cf48: 0x10400005
label_14cf4c:
    if (ctx->pc == 0x14CF4Cu) {
        ctx->pc = 0x14CF4Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 63));
        ctx->pc = 0x14CF50u;
        goto label_14cf50;
    }
    ctx->pc = 0x14CF48u;
    {
        const bool branch_taken_0x14cf48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CF4Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 63));
        if (branch_taken_0x14cf48) {
            ctx->pc = 0x14CF60u;
            goto label_14cf60;
        }
    }
    ctx->pc = 0x14CF50u;
label_14cf50:
    // 0x14cf50: 0x2221821
    ctx->pc = 0x14cf50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_14cf54:
    // 0x14cf54: 0xafa20004
    ctx->pc = 0x14cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_14cf58:
    // 0x14cf58: 0x100000c2
label_14cf5c:
    if (ctx->pc == 0x14CF5Cu) {
        ctx->pc = 0x14CF5Cu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x14CF60u;
        goto label_14cf60;
    }
    ctx->pc = 0x14CF58u;
    {
        const bool branch_taken_0x14cf58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CF5Cu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x14cf58) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14CF60u;
label_14cf60:
    // 0x14cf60: 0x2c62002f
    ctx->pc = 0x14cf60u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 47));
label_14cf64:
    // 0x14cf64: 0x104000bd
label_14cf68:
    if (ctx->pc == 0x14CF68u) {
        ctx->pc = 0x14CF68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        ctx->pc = 0x14CF6Cu;
        goto label_14cf6c;
    }
    ctx->pc = 0x14CF64u;
    {
        const bool branch_taken_0x14cf64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CF68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
        if (branch_taken_0x14cf64) {
            ctx->pc = 0x14D25Cu;
            goto label_14d25c;
        }
    }
    ctx->pc = 0x14CF6Cu;
label_14cf6c:
    // 0x14cf6c: 0x31880
    ctx->pc = 0x14cf6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_14cf70:
    // 0x14cf70: 0x244278e0
    ctx->pc = 0x14cf70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30944));
label_14cf74:
    // 0x14cf74: 0x621821
    ctx->pc = 0x14cf74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14cf78:
    // 0x14cf78: 0x8c640000
    ctx->pc = 0x14cf78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14cf7c:
    // 0x14cf7c: 0x800008
label_14cf80:
    if (ctx->pc == 0x14CF80u) {
        ctx->pc = 0x14CF84u;
        goto label_14cf84;
    }
    ctx->pc = 0x14CF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CEE8u: goto label_14cee8;
            case 0x14CEECu: goto label_14ceec;
            case 0x14CEF0u: goto label_14cef0;
            case 0x14CEF4u: goto label_14cef4;
            case 0x14CEF8u: goto label_14cef8;
            case 0x14CEFCu: goto label_14cefc;
            case 0x14CF00u: goto label_14cf00;
            case 0x14CF04u: goto label_14cf04;
            case 0x14CF08u: goto label_14cf08;
            case 0x14CF0Cu: goto label_14cf0c;
            case 0x14CF10u: goto label_14cf10;
            case 0x14CF14u: goto label_14cf14;
            case 0x14CF18u: goto label_14cf18;
            case 0x14CF1Cu: goto label_14cf1c;
            case 0x14CF20u: goto label_14cf20;
            case 0x14CF24u: goto label_14cf24;
            case 0x14CF28u: goto label_14cf28;
            case 0x14CF2Cu: goto label_14cf2c;
            case 0x14CF30u: goto label_14cf30;
            case 0x14CF34u: goto label_14cf34;
            case 0x14CF38u: goto label_14cf38;
            case 0x14CF3Cu: goto label_14cf3c;
            case 0x14CF40u: goto label_14cf40;
            case 0x14CF44u: goto label_14cf44;
            case 0x14CF48u: goto label_14cf48;
            case 0x14CF4Cu: goto label_14cf4c;
            case 0x14CF50u: goto label_14cf50;
            case 0x14CF54u: goto label_14cf54;
            case 0x14CF58u: goto label_14cf58;
            case 0x14CF5Cu: goto label_14cf5c;
            case 0x14CF60u: goto label_14cf60;
            case 0x14CF64u: goto label_14cf64;
            case 0x14CF68u: goto label_14cf68;
            case 0x14CF6Cu: goto label_14cf6c;
            case 0x14CF70u: goto label_14cf70;
            case 0x14CF74u: goto label_14cf74;
            case 0x14CF78u: goto label_14cf78;
            case 0x14CF7Cu: goto label_14cf7c;
            case 0x14CF80u: goto label_14cf80;
            case 0x14CF84u: goto label_14cf84;
            case 0x14CF88u: goto label_14cf88;
            case 0x14CF8Cu: goto label_14cf8c;
            case 0x14CF90u: goto label_14cf90;
            case 0x14CF94u: goto label_14cf94;
            case 0x14CF98u: goto label_14cf98;
            case 0x14CF9Cu: goto label_14cf9c;
            case 0x14CFA0u: goto label_14cfa0;
            case 0x14CFA4u: goto label_14cfa4;
            case 0x14CFA8u: goto label_14cfa8;
            case 0x14CFACu: goto label_14cfac;
            case 0x14CFB0u: goto label_14cfb0;
            case 0x14CFB4u: goto label_14cfb4;
            case 0x14CFB8u: goto label_14cfb8;
            case 0x14CFBCu: goto label_14cfbc;
            case 0x14CFC0u: goto label_14cfc0;
            case 0x14CFC4u: goto label_14cfc4;
            case 0x14CFC8u: goto label_14cfc8;
            case 0x14CFCCu: goto label_14cfcc;
            case 0x14CFD0u: goto label_14cfd0;
            case 0x14CFD4u: goto label_14cfd4;
            case 0x14CFD8u: goto label_14cfd8;
            case 0x14CFDCu: goto label_14cfdc;
            case 0x14CFE0u: goto label_14cfe0;
            case 0x14CFE4u: goto label_14cfe4;
            case 0x14CFE8u: goto label_14cfe8;
            case 0x14CFECu: goto label_14cfec;
            case 0x14CFF0u: goto label_14cff0;
            case 0x14CFF4u: goto label_14cff4;
            case 0x14CFF8u: goto label_14cff8;
            case 0x14CFFCu: goto label_14cffc;
            case 0x14D000u: goto label_14d000;
            case 0x14D004u: goto label_14d004;
            case 0x14D008u: goto label_14d008;
            case 0x14D00Cu: goto label_14d00c;
            case 0x14D010u: goto label_14d010;
            case 0x14D014u: goto label_14d014;
            case 0x14D018u: goto label_14d018;
            case 0x14D01Cu: goto label_14d01c;
            case 0x14D020u: goto label_14d020;
            case 0x14D024u: goto label_14d024;
            case 0x14D028u: goto label_14d028;
            case 0x14D02Cu: goto label_14d02c;
            case 0x14D030u: goto label_14d030;
            case 0x14D034u: goto label_14d034;
            case 0x14D038u: goto label_14d038;
            case 0x14D03Cu: goto label_14d03c;
            case 0x14D040u: goto label_14d040;
            case 0x14D044u: goto label_14d044;
            case 0x14D048u: goto label_14d048;
            case 0x14D04Cu: goto label_14d04c;
            case 0x14D050u: goto label_14d050;
            case 0x14D054u: goto label_14d054;
            case 0x14D058u: goto label_14d058;
            case 0x14D05Cu: goto label_14d05c;
            case 0x14D060u: goto label_14d060;
            case 0x14D064u: goto label_14d064;
            case 0x14D068u: goto label_14d068;
            case 0x14D06Cu: goto label_14d06c;
            case 0x14D070u: goto label_14d070;
            case 0x14D074u: goto label_14d074;
            case 0x14D078u: goto label_14d078;
            case 0x14D07Cu: goto label_14d07c;
            case 0x14D080u: goto label_14d080;
            case 0x14D084u: goto label_14d084;
            case 0x14D088u: goto label_14d088;
            case 0x14D08Cu: goto label_14d08c;
            case 0x14D090u: goto label_14d090;
            case 0x14D094u: goto label_14d094;
            case 0x14D098u: goto label_14d098;
            case 0x14D09Cu: goto label_14d09c;
            case 0x14D0A0u: goto label_14d0a0;
            case 0x14D0A4u: goto label_14d0a4;
            case 0x14D0A8u: goto label_14d0a8;
            case 0x14D0ACu: goto label_14d0ac;
            case 0x14D0B0u: goto label_14d0b0;
            case 0x14D0B4u: goto label_14d0b4;
            case 0x14D0B8u: goto label_14d0b8;
            case 0x14D0BCu: goto label_14d0bc;
            case 0x14D0C0u: goto label_14d0c0;
            case 0x14D0C4u: goto label_14d0c4;
            case 0x14D0C8u: goto label_14d0c8;
            case 0x14D0CCu: goto label_14d0cc;
            case 0x14D0D0u: goto label_14d0d0;
            case 0x14D0D4u: goto label_14d0d4;
            case 0x14D0D8u: goto label_14d0d8;
            case 0x14D0DCu: goto label_14d0dc;
            case 0x14D0E0u: goto label_14d0e0;
            case 0x14D0E4u: goto label_14d0e4;
            case 0x14D0E8u: goto label_14d0e8;
            case 0x14D0ECu: goto label_14d0ec;
            case 0x14D0F0u: goto label_14d0f0;
            case 0x14D0F4u: goto label_14d0f4;
            case 0x14D0F8u: goto label_14d0f8;
            case 0x14D0FCu: goto label_14d0fc;
            case 0x14D100u: goto label_14d100;
            case 0x14D104u: goto label_14d104;
            case 0x14D108u: goto label_14d108;
            case 0x14D10Cu: goto label_14d10c;
            case 0x14D110u: goto label_14d110;
            case 0x14D114u: goto label_14d114;
            case 0x14D118u: goto label_14d118;
            case 0x14D11Cu: goto label_14d11c;
            case 0x14D120u: goto label_14d120;
            case 0x14D124u: goto label_14d124;
            case 0x14D128u: goto label_14d128;
            case 0x14D12Cu: goto label_14d12c;
            case 0x14D130u: goto label_14d130;
            case 0x14D134u: goto label_14d134;
            case 0x14D138u: goto label_14d138;
            case 0x14D13Cu: goto label_14d13c;
            case 0x14D140u: goto label_14d140;
            case 0x14D144u: goto label_14d144;
            case 0x14D148u: goto label_14d148;
            case 0x14D14Cu: goto label_14d14c;
            case 0x14D150u: goto label_14d150;
            case 0x14D154u: goto label_14d154;
            case 0x14D158u: goto label_14d158;
            case 0x14D15Cu: goto label_14d15c;
            case 0x14D160u: goto label_14d160;
            case 0x14D164u: goto label_14d164;
            case 0x14D168u: goto label_14d168;
            case 0x14D16Cu: goto label_14d16c;
            case 0x14D170u: goto label_14d170;
            case 0x14D174u: goto label_14d174;
            case 0x14D178u: goto label_14d178;
            case 0x14D17Cu: goto label_14d17c;
            case 0x14D180u: goto label_14d180;
            case 0x14D184u: goto label_14d184;
            case 0x14D188u: goto label_14d188;
            case 0x14D18Cu: goto label_14d18c;
            case 0x14D190u: goto label_14d190;
            case 0x14D194u: goto label_14d194;
            case 0x14D198u: goto label_14d198;
            case 0x14D19Cu: goto label_14d19c;
            case 0x14D1A0u: goto label_14d1a0;
            case 0x14D1A4u: goto label_14d1a4;
            case 0x14D1A8u: goto label_14d1a8;
            case 0x14D1ACu: goto label_14d1ac;
            case 0x14D1B0u: goto label_14d1b0;
            case 0x14D1B4u: goto label_14d1b4;
            case 0x14D1B8u: goto label_14d1b8;
            case 0x14D1BCu: goto label_14d1bc;
            case 0x14D1C0u: goto label_14d1c0;
            case 0x14D1C4u: goto label_14d1c4;
            case 0x14D1C8u: goto label_14d1c8;
            case 0x14D1CCu: goto label_14d1cc;
            case 0x14D1D0u: goto label_14d1d0;
            case 0x14D1D4u: goto label_14d1d4;
            case 0x14D1D8u: goto label_14d1d8;
            case 0x14D1DCu: goto label_14d1dc;
            case 0x14D1E0u: goto label_14d1e0;
            case 0x14D1E4u: goto label_14d1e4;
            case 0x14D1E8u: goto label_14d1e8;
            case 0x14D1ECu: goto label_14d1ec;
            case 0x14D1F0u: goto label_14d1f0;
            case 0x14D1F4u: goto label_14d1f4;
            case 0x14D1F8u: goto label_14d1f8;
            case 0x14D1FCu: goto label_14d1fc;
            case 0x14D200u: goto label_14d200;
            case 0x14D204u: goto label_14d204;
            case 0x14D208u: goto label_14d208;
            case 0x14D20Cu: goto label_14d20c;
            case 0x14D210u: goto label_14d210;
            case 0x14D214u: goto label_14d214;
            case 0x14D218u: goto label_14d218;
            case 0x14D21Cu: goto label_14d21c;
            case 0x14D220u: goto label_14d220;
            case 0x14D224u: goto label_14d224;
            case 0x14D228u: goto label_14d228;
            case 0x14D22Cu: goto label_14d22c;
            case 0x14D230u: goto label_14d230;
            case 0x14D234u: goto label_14d234;
            case 0x14D238u: goto label_14d238;
            case 0x14D23Cu: goto label_14d23c;
            case 0x14D240u: goto label_14d240;
            case 0x14D244u: goto label_14d244;
            case 0x14D248u: goto label_14d248;
            case 0x14D24Cu: goto label_14d24c;
            case 0x14D250u: goto label_14d250;
            case 0x14D254u: goto label_14d254;
            case 0x14D258u: goto label_14d258;
            case 0x14D25Cu: goto label_14d25c;
            case 0x14D260u: goto label_14d260;
            case 0x14D264u: goto label_14d264;
            case 0x14D268u: goto label_14d268;
            case 0x14D26Cu: goto label_14d26c;
            case 0x14D270u: goto label_14d270;
            case 0x14D274u: goto label_14d274;
            case 0x14D278u: goto label_14d278;
            case 0x14D27Cu: goto label_14d27c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CF84u;
label_14cf84:
    // 0x14cf84: 0x8a020003
    ctx->pc = 0x14cf84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word << shift) & mask)); }
label_14cf88:
    // 0x14cf88: 0x9a020000
    ctx->pc = 0x14cf88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word >> shift) & mask)); }
label_14cf8c:
    // 0x14cf8c: 0x26100004
    ctx->pc = 0x14cf8cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_14cf90:
    // 0x14cf90: 0x100000b4
label_14cf94:
    if (ctx->pc == 0x14CF94u) {
        ctx->pc = 0x14CF94u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x14CF98u;
        goto label_14cf98;
    }
    ctx->pc = 0x14CF90u;
    {
        const bool branch_taken_0x14cf90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CF94u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x14cf90) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14CF98u;
label_14cf98:
    // 0x14cf98: 0x92030000
    ctx->pc = 0x14cf98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14cf9c:
    // 0x14cf9c: 0x8ce20000
    ctx->pc = 0x14cf9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_14cfa0:
    // 0x14cfa0: 0x1000000f
label_14cfa4:
    if (ctx->pc == 0x14CFA4u) {
        ctx->pc = 0x14CFA4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x14CFA8u;
        goto label_14cfa8;
    }
    ctx->pc = 0x14CFA0u;
    {
        const bool branch_taken_0x14cfa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CFA4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x14cfa0) {
            ctx->pc = 0x14CFE0u;
            goto label_14cfe0;
        }
    }
    ctx->pc = 0x14CFA8u;
label_14cfa8:
    // 0x14cfa8: 0x92020001
    ctx->pc = 0x14cfa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_14cfac:
    // 0x14cfac: 0x92040000
    ctx->pc = 0x14cfacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14cfb0:
    // 0x14cfb0: 0x21238
    ctx->pc = 0x14cfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_14cfb4:
    // 0x14cfb4: 0x8ce30000
    ctx->pc = 0x14cfb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_14cfb8:
    // 0x14cfb8: 0x441025
    ctx->pc = 0x14cfb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14cfbc:
    // 0x14cfbc: 0x26100002
    ctx->pc = 0x14cfbcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
label_14cfc0:
    // 0x14cfc0: 0x3042ffff
    ctx->pc = 0x14cfc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_14cfc4:
    // 0x14cfc4: 0x621821
    ctx->pc = 0x14cfc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14cfc8:
    // 0x14cfc8: 0x100000a6
label_14cfcc:
    if (ctx->pc == 0x14CFCCu) {
        ctx->pc = 0x14CFCCu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x14CFD0u;
        goto label_14cfd0;
    }
    ctx->pc = 0x14CFC8u;
    {
        const bool branch_taken_0x14cfc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CFCCu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x14cfc8) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14CFD0u;
label_14cfd0:
    // 0x14cfd0: 0x8a030003
    ctx->pc = 0x14cfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
label_14cfd4:
    // 0x14cfd4: 0x9a030000
    ctx->pc = 0x14cfd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
label_14cfd8:
    // 0x14cfd8: 0x8ce20000
    ctx->pc = 0x14cfd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_14cfdc:
    // 0x14cfdc: 0x26100004
    ctx->pc = 0x14cfdcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_14cfe0:
    // 0x14cfe0: 0x431021
    ctx->pc = 0x14cfe0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14cfe4:
    // 0x14cfe4: 0x1000009f
label_14cfe8:
    if (ctx->pc == 0x14CFE8u) {
        ctx->pc = 0x14CFE8u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x14CFECu;
        goto label_14cfec;
    }
    ctx->pc = 0x14CFE4u;
    {
        const bool branch_taken_0x14cfe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CFE8u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x14cfe4) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14CFECu;
label_14cfec:
    // 0x14cfec: 0x200202d
    ctx->pc = 0x14cfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14cff0:
    // 0x14cff0: 0xc0531ba
label_14cff4:
    if (ctx->pc == 0x14CFF4u) {
        ctx->pc = 0x14CFF4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x14CFF8u;
        goto label_14cff8;
    }
    ctx->pc = 0x14CFF0u;
    SET_GPR_U32(ctx, 31, 0x14CFF8u);
    ctx->pc = 0x14CFF4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CFF8u; }
        else if (ctx->pc != 0x14CFF8u) { ctx->pc = 0x14CFF8u; }
    }
    if (ctx->pc != 0x14CFF8u) { return; }
    ctx->pc = 0x14CFF8u;
label_14cff8:
    // 0x14cff8: 0x40202d
    ctx->pc = 0x14cff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cffc:
    // 0x14cffc: 0xc0531ba
label_14d000:
    if (ctx->pc == 0x14D000u) {
        ctx->pc = 0x14D000u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14D004u;
        goto label_14d004;
    }
    ctx->pc = 0x14CFFCu;
    SET_GPR_U32(ctx, 31, 0x14D004u);
    ctx->pc = 0x14D000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D004u; }
        else if (ctx->pc != 0x14D004u) { ctx->pc = 0x14D004u; }
    }
    if (ctx->pc != 0x14D004u) { return; }
    ctx->pc = 0x14D004u;
label_14d004:
    // 0x14d004: 0x8fa40000
    ctx->pc = 0x14d004u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14d008:
    // 0x14d008: 0x40802d
    ctx->pc = 0x14d008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d00c:
    // 0x14d00c: 0x8e45000c
    ctx->pc = 0x14d00cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_14d010:
    // 0x14d010: 0x24060001
    ctx->pc = 0x14d010u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_14d014:
    // 0x14d014: 0x8fa20004
    ctx->pc = 0x14d014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_14d018:
    // 0x14d018: 0x852018
    ctx->pc = 0x14d018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_14d01c:
    // 0x14d01c: 0x218c0
    ctx->pc = 0x14d01cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
label_14d020:
    // 0x14d020: 0x2221021
    ctx->pc = 0x14d020u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_14d024:
    // 0x14d024: 0x2231821
    ctx->pc = 0x14d024u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_14d028:
    // 0x14d028: 0xa046029c
    ctx->pc = 0x14d028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 668), (uint8_t)GPR_U32(ctx, 6));
label_14d02c:
    // 0x14d02c: 0xafa40000
    ctx->pc = 0x14d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_14d030:
    // 0x14d030: 0x80102d
    ctx->pc = 0x14d030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14d034:
    // 0x14d034: 0x1000008b
label_14d038:
    if (ctx->pc == 0x14D038u) {
        ctx->pc = 0x14D038u;
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        ctx->pc = 0x14D03Cu;
        goto label_14d03c;
    }
    ctx->pc = 0x14D034u;
    {
        const bool branch_taken_0x14d034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D038u;
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        if (branch_taken_0x14d034) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14D03Cu;
label_14d03c:
    // 0x14d03c: 0x200202d
    ctx->pc = 0x14d03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d040:
    // 0x14d040: 0xc0531ba
label_14d044:
    if (ctx->pc == 0x14D044u) {
        ctx->pc = 0x14D044u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x14D048u;
        goto label_14d048;
    }
    ctx->pc = 0x14D040u;
    SET_GPR_U32(ctx, 31, 0x14D048u);
    ctx->pc = 0x14D044u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D048u; }
        else if (ctx->pc != 0x14D048u) { ctx->pc = 0x14D048u; }
    }
    if (ctx->pc != 0x14D048u) { return; }
    ctx->pc = 0x14D048u;
label_14d048:
    // 0x14d048: 0x8fa30004
    ctx->pc = 0x14d048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_14d04c:
    // 0x14d04c: 0x40802d
    ctx->pc = 0x14d04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d050:
    // 0x14d050: 0x2231821
    ctx->pc = 0x14d050u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_14d054:
    // 0x14d054: 0x10000083
label_14d058:
    if (ctx->pc == 0x14D058u) {
        ctx->pc = 0x14D058u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x14D05Cu;
        goto label_14d05c;
    }
    ctx->pc = 0x14D054u;
    {
        const bool branch_taken_0x14d054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D058u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x14d054) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14D05Cu;
label_14d05c:
    // 0x14d05c: 0x200202d
    ctx->pc = 0x14d05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d060:
    // 0x14d060: 0xc0531ba
label_14d064:
    if (ctx->pc == 0x14D064u) {
        ctx->pc = 0x14D064u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x14D068u;
        goto label_14d068;
    }
    ctx->pc = 0x14D060u;
    SET_GPR_U32(ctx, 31, 0x14D068u);
    ctx->pc = 0x14D064u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D068u; }
        else if (ctx->pc != 0x14D068u) { ctx->pc = 0x14D068u; }
    }
    if (ctx->pc != 0x14D068u) { return; }
    ctx->pc = 0x14D068u;
label_14d068:
    // 0x14d068: 0x40202d
    ctx->pc = 0x14d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d06c:
    // 0x14d06c: 0xc0531ba
label_14d070:
    if (ctx->pc == 0x14D070u) {
        ctx->pc = 0x14D070u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x14D074u;
        goto label_14d074;
    }
    ctx->pc = 0x14D06Cu;
    SET_GPR_U32(ctx, 31, 0x14D074u);
    ctx->pc = 0x14D070u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D074u; }
        else if (ctx->pc != 0x14D074u) { ctx->pc = 0x14D074u; }
    }
    if (ctx->pc != 0x14D074u) { return; }
    ctx->pc = 0x14D074u;
label_14d074:
    // 0x14d074: 0x8fa40004
    ctx->pc = 0x14d074u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_14d078:
    // 0x14d078: 0x40802d
    ctx->pc = 0x14d078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d07c:
    // 0x14d07c: 0x8fa30008
    ctx->pc = 0x14d07cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_14d080:
    // 0x14d080: 0x24050002
    ctx->pc = 0x14d080u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_14d084:
    // 0x14d084: 0x410c0
    ctx->pc = 0x14d084u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
label_14d088:
    // 0x14d088: 0x2242021
    ctx->pc = 0x14d088u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_14d08c:
    // 0x14d08c: 0x3183c
    ctx->pc = 0x14d08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_14d090:
    // 0x14d090: 0xa085029c
    ctx->pc = 0x14d090u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 668), (uint8_t)GPR_U32(ctx, 5));
label_14d094:
    // 0x14d094: 0x2221021
    ctx->pc = 0x14d094u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_14d098:
    // 0x14d098: 0x3183e
    ctx->pc = 0x14d098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_14d09c:
    // 0x14d09c: 0x10000071
label_14d0a0:
    if (ctx->pc == 0x14D0A0u) {
        ctx->pc = 0x14D0A0u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
        ctx->pc = 0x14D0A4u;
        goto label_14d0a4;
    }
    ctx->pc = 0x14D09Cu;
    {
        const bool branch_taken_0x14d09c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D0A0u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
        if (branch_taken_0x14d09c) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14D0A4u;
label_14d0a4:
    // 0x14d0a4: 0x200202d
    ctx->pc = 0x14d0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d0a8:
    // 0x14d0a8: 0xc0531ba
label_14d0ac:
    if (ctx->pc == 0x14D0ACu) {
        ctx->pc = 0x14D0ACu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x14D0B0u;
        goto label_14d0b0;
    }
    ctx->pc = 0x14D0A8u;
    SET_GPR_U32(ctx, 31, 0x14D0B0u);
    ctx->pc = 0x14D0ACu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0B0u; }
        else if (ctx->pc != 0x14D0B0u) { ctx->pc = 0x14D0B0u; }
    }
    if (ctx->pc != 0x14D0B0u) { return; }
    ctx->pc = 0x14D0B0u;
label_14d0b0:
    // 0x14d0b0: 0x40202d
    ctx->pc = 0x14d0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d0b4:
    // 0x14d0b4: 0xc0531ba
label_14d0b8:
    if (ctx->pc == 0x14D0B8u) {
        ctx->pc = 0x14D0B8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14D0BCu;
        goto label_14d0bc;
    }
    ctx->pc = 0x14D0B4u;
    SET_GPR_U32(ctx, 31, 0x14D0BCu);
    ctx->pc = 0x14D0B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0BCu; }
        else if (ctx->pc != 0x14D0BCu) { ctx->pc = 0x14D0BCu; }
    }
    if (ctx->pc != 0x14D0BCu) { return; }
    ctx->pc = 0x14D0BCu;
label_14d0bc:
    // 0x14d0bc: 0x40802d
    ctx->pc = 0x14d0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d0c0:
    // 0x14d0c0: 0x97a30004
    ctx->pc = 0x14d0c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
label_14d0c4:
    // 0x14d0c4: 0x8fa20000
    ctx->pc = 0x14d0c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14d0c8:
    // 0x14d0c8: 0xa6230298
    ctx->pc = 0x14d0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
label_14d0cc:
    // 0x14d0cc: 0x10000065
label_14d0d0:
    if (ctx->pc == 0x14D0D0u) {
        ctx->pc = 0x14D0D0u;
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->pc = 0x14D0D4u;
        goto label_14d0d4;
    }
    ctx->pc = 0x14D0CCu;
    {
        const bool branch_taken_0x14d0cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D0D0u;
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        if (branch_taken_0x14d0cc) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14D0D4u;
label_14d0d4:
    // 0x14d0d4: 0x200202d
    ctx->pc = 0x14d0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d0d8:
    // 0x14d0d8: 0xc0531ba
label_14d0dc:
    if (ctx->pc == 0x14D0DCu) {
        ctx->pc = 0x14D0DCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x14D0E0u;
        goto label_14d0e0;
    }
    ctx->pc = 0x14D0D8u;
    SET_GPR_U32(ctx, 31, 0x14D0E0u);
    ctx->pc = 0x14D0DCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0E0u; }
        else if (ctx->pc != 0x14D0E0u) { ctx->pc = 0x14D0E0u; }
    }
    if (ctx->pc != 0x14D0E0u) { return; }
    ctx->pc = 0x14D0E0u;
label_14d0e0:
    // 0x14d0e0: 0x97a30004
    ctx->pc = 0x14d0e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
label_14d0e4:
    // 0x14d0e4: 0x40802d
    ctx->pc = 0x14d0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d0e8:
    // 0x14d0e8: 0x1000005e
label_14d0ec:
    if (ctx->pc == 0x14D0ECu) {
        ctx->pc = 0x14D0ECu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x14D0F0u;
        goto label_14d0f0;
    }
    ctx->pc = 0x14D0E8u;
    {
        const bool branch_taken_0x14d0e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D0ECu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x14d0e8) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14D0F0u;
label_14d0f0:
    // 0x14d0f0: 0x200202d
    ctx->pc = 0x14d0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d0f4:
    // 0x14d0f4: 0xc0531ba
label_14d0f8:
    if (ctx->pc == 0x14D0F8u) {
        ctx->pc = 0x14D0F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14D0FCu;
        goto label_14d0fc;
    }
    ctx->pc = 0x14D0F4u;
    SET_GPR_U32(ctx, 31, 0x14D0FCu);
    ctx->pc = 0x14D0F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0FCu; }
        else if (ctx->pc != 0x14D0FCu) { ctx->pc = 0x14D0FCu; }
    }
    if (ctx->pc != 0x14D0FCu) { return; }
    ctx->pc = 0x14D0FCu;
label_14d0fc:
    // 0x14d0fc: 0x8fa30000
    ctx->pc = 0x14d0fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14d100:
    // 0x14d100: 0x40802d
    ctx->pc = 0x14d100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d104:
    // 0x14d104: 0x10000057
label_14d108:
    if (ctx->pc == 0x14D108u) {
        ctx->pc = 0x14D108u;
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
        ctx->pc = 0x14D10Cu;
        goto label_14d10c;
    }
    ctx->pc = 0x14D104u;
    {
        const bool branch_taken_0x14d104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D108u;
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
        if (branch_taken_0x14d104) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14D10Cu;
label_14d10c:
    // 0x14d10c: 0xc0509a0
label_14d110:
    if (ctx->pc == 0x14D110u) {
        ctx->pc = 0x14D110u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 760));
        ctx->pc = 0x14D114u;
        goto label_14d114;
    }
    ctx->pc = 0x14D10Cu;
    SET_GPR_U32(ctx, 31, 0x14D114u);
    ctx->pc = 0x14D110u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 760));
    ctx->pc = 0x142680u;
    {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x142680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D114u; }
        else if (ctx->pc != 0x14D114u) { ctx->pc = 0x14D114u; }
    }
    if (ctx->pc != 0x14D114u) { return; }
    ctx->pc = 0x14D114u;
label_14d114:
    // 0x14d114: 0x262502e0
    ctx->pc = 0x14d114u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 736));
label_14d118:
    // 0x14d118: 0x40202d
    ctx->pc = 0x14d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d11c:
    // 0x14d11c: 0x220182d
    ctx->pc = 0x14d11cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14d120:
    // 0x14d120: 0xdc660000
    ctx->pc = 0x14d120u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_14d124:
    // 0x14d124: 0xdc670008
    ctx->pc = 0x14d124u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_14d128:
    // 0x14d128: 0xdc680010
    ctx->pc = 0x14d128u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_14d12c:
    // 0x14d12c: 0xdc690018
    ctx->pc = 0x14d12cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_14d130:
    // 0x14d130: 0xfc860000
    ctx->pc = 0x14d130u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
label_14d134:
    // 0x14d134: 0xfc870008
    ctx->pc = 0x14d134u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
label_14d138:
    // 0x14d138: 0xfc880010
    ctx->pc = 0x14d138u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
label_14d13c:
    // 0x14d13c: 0xfc890018
    ctx->pc = 0x14d13cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
label_14d140:
    // 0x14d140: 0x24630020
    ctx->pc = 0x14d140u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
label_14d144:
    // 0x14d144: 0x24840020
    ctx->pc = 0x14d144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
label_14d148:
    // 0x14d148: 0x0
    ctx->pc = 0x14d148u;
    // NOP
label_14d14c:
    // 0x14d14c: 0x1465fff4
label_14d150:
    if (ctx->pc == 0x14D150u) {
        ctx->pc = 0x14D154u;
        goto label_14d154;
    }
    ctx->pc = 0x14D14Cu;
    {
        const bool branch_taken_0x14d14c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        if (branch_taken_0x14d14c) {
            ctx->pc = 0x14D120u;
            goto label_14d120;
        }
    }
    ctx->pc = 0x14D154u;
label_14d154:
    // 0x14d154: 0xdc650000
    ctx->pc = 0x14d154u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_14d158:
    // 0x14d158: 0xdc660008
    ctx->pc = 0x14d158u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_14d15c:
    // 0x14d15c: 0xdc670010
    ctx->pc = 0x14d15cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_14d160:
    // 0x14d160: 0xfc850000
    ctx->pc = 0x14d160u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_14d164:
    // 0x14d164: 0xfc860008
    ctx->pc = 0x14d164u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_14d168:
    // 0x14d168: 0xfc870010
    ctx->pc = 0x14d168u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_14d16c:
    // 0x14d16c: 0x1000003d
label_14d170:
    if (ctx->pc == 0x14D170u) {
        ctx->pc = 0x14D170u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
        ctx->pc = 0x14D174u;
        goto label_14d174;
    }
    ctx->pc = 0x14D16Cu;
    {
        const bool branch_taken_0x14d16c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D170u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
        if (branch_taken_0x14d16c) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14D174u;
label_14d174:
    // 0x14d174: 0x8e2402f0
    ctx->pc = 0x14d174u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 752)));
label_14d178:
    // 0x14d178: 0x220282d
    ctx->pc = 0x14d178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14d17c:
    // 0x14d17c: 0x248202e0
    ctx->pc = 0x14d17cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 736));
label_14d180:
    // 0x14d180: 0x80302d
    ctx->pc = 0x14d180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14d184:
    // 0x14d184: 0xdcc90000
    ctx->pc = 0x14d184u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_14d188:
    // 0x14d188: 0xdcc30008
    ctx->pc = 0x14d188u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_14d18c:
    // 0x14d18c: 0xdcc70010
    ctx->pc = 0x14d18cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_14d190:
    // 0x14d190: 0xdcc80018
    ctx->pc = 0x14d190u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_14d194:
    // 0x14d194: 0xfca90000
    ctx->pc = 0x14d194u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
label_14d198:
    // 0x14d198: 0xfca30008
    ctx->pc = 0x14d198u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
label_14d19c:
    // 0x14d19c: 0xfca70010
    ctx->pc = 0x14d19cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_14d1a0:
    // 0x14d1a0: 0xfca80018
    ctx->pc = 0x14d1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
label_14d1a4:
    // 0x14d1a4: 0x24c60020
    ctx->pc = 0x14d1a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
label_14d1a8:
    // 0x14d1a8: 0x24a50020
    ctx->pc = 0x14d1a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
label_14d1ac:
    // 0x14d1ac: 0x0
    ctx->pc = 0x14d1acu;
    // NOP
label_14d1b0:
    // 0x14d1b0: 0x14c2fff4
label_14d1b4:
    if (ctx->pc == 0x14D1B4u) {
        ctx->pc = 0x14D1B8u;
        goto label_14d1b8;
    }
    ctx->pc = 0x14D1B0u;
    {
        const bool branch_taken_0x14d1b0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x14d1b0) {
            ctx->pc = 0x14D184u;
            goto label_14d184;
        }
    }
    ctx->pc = 0x14D1B8u;
label_14d1b8:
    // 0x14d1b8: 0xdcc90000
    ctx->pc = 0x14d1b8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_14d1bc:
    // 0x14d1bc: 0xdcc20008
    ctx->pc = 0x14d1bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_14d1c0:
    // 0x14d1c0: 0xdcc30010
    ctx->pc = 0x14d1c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_14d1c4:
    // 0x14d1c4: 0xfca90000
    ctx->pc = 0x14d1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
label_14d1c8:
    // 0x14d1c8: 0xfca20008
    ctx->pc = 0x14d1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
label_14d1cc:
    // 0x14d1cc: 0xc0509aa
label_14d1d0:
    if (ctx->pc == 0x14D1D0u) {
        ctx->pc = 0x14D1D0u;
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->pc = 0x14D1D4u;
        goto label_14d1d4;
    }
    ctx->pc = 0x14D1CCu;
    SET_GPR_U32(ctx, 31, 0x14D1D4u);
    ctx->pc = 0x14D1D0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    ctx->pc = 0x1426A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        free_0x1426a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D1D4u; }
        else if (ctx->pc != 0x14D1D4u) { ctx->pc = 0x14D1D4u; }
    }
    if (ctx->pc != 0x14D1D4u) { return; }
    ctx->pc = 0x14D1D4u;
label_14d1d4:
    // 0x14d1d4: 0x10000024
label_14d1d8:
    if (ctx->pc == 0x14D1D8u) {
        ctx->pc = 0x14D1D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14D1DCu;
        goto label_14d1dc;
    }
    ctx->pc = 0x14D1D4u;
    {
        const bool branch_taken_0x14d1d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D1D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14d1d4) {
            ctx->pc = 0x14D268u;
            goto label_14d268;
        }
    }
    ctx->pc = 0x14D1DCu;
label_14d1dc:
    // 0x14d1dc: 0x24020010
    ctx->pc = 0x14d1dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_14d1e0:
    // 0x14d1e0: 0x24040010
    ctx->pc = 0x14d1e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
label_14d1e4:
    // 0x14d1e4: 0xafa20004
    ctx->pc = 0x14d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_14d1e8:
    // 0x14d1e8: 0x24070010
    ctx->pc = 0x14d1e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
label_14d1ec:
    // 0x14d1ec: 0x2629029c
    ctx->pc = 0x14d1ecu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 17), 668));
label_14d1f0:
    // 0x14d1f0: 0x26280018
    ctx->pc = 0x14d1f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 24));
label_14d1f4:
    // 0x14d1f4: 0x0
    ctx->pc = 0x14d1f4u;
    // NOP
label_14d1f8:
    // 0x14d1f8: 0x2482fff0
    ctx->pc = 0x14d1f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967280));
label_14d1fc:
    // 0x14d1fc: 0x24860001
    ctx->pc = 0x14d1fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 1));
label_14d200:
    // 0x14d200: 0x1272821
    ctx->pc = 0x14d200u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_14d204:
    // 0x14d204: 0x21080
    ctx->pc = 0x14d204u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_14d208:
    // 0x14d208: 0x24030001
    ctx->pc = 0x14d208u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_14d20c:
    // 0x14d20c: 0x420c0
    ctx->pc = 0x14d20cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_14d210:
    // 0x14d210: 0xa0a30000
    ctx->pc = 0x14d210u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_14d214:
    // 0x14d214: 0x2103c
    ctx->pc = 0x14d214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_14d218:
    // 0x14d218: 0x1042021
    ctx->pc = 0x14d218u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_14d21c:
    // 0x14d21c: 0x2103e
    ctx->pc = 0x14d21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_14d220:
    // 0x14d220: 0xafa60004
    ctx->pc = 0x14d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_14d224:
    // 0x14d224: 0xc0382d
    ctx->pc = 0x14d224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_14d228:
    // 0x14d228: 0xfc820000
    ctx->pc = 0x14d228u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_14d22c:
    // 0x14d22c: 0x2ce20020
    ctx->pc = 0x14d22cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 32));
label_14d230:
    // 0x14d230: 0x1440fff1
label_14d234:
    if (ctx->pc == 0x14D234u) {
        ctx->pc = 0x14D234u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14D238u;
        goto label_14d238;
    }
    ctx->pc = 0x14D230u;
    {
        const bool branch_taken_0x14d230 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14D234u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14d230) {
            ctx->pc = 0x14D1F8u;
            goto label_14d1f8;
        }
    }
    ctx->pc = 0x14D238u;
label_14d238:
    // 0x14d238: 0x1000000b
label_14d23c:
    if (ctx->pc == 0x14D23Cu) {
        ctx->pc = 0x14D23Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14D240u;
        goto label_14d240;
    }
    ctx->pc = 0x14D238u;
    {
        const bool branch_taken_0x14d238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D23Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14d238) {
            ctx->pc = 0x14D268u;
            goto label_14d268;
        }
    }
    ctx->pc = 0x14D240u;
label_14d240:
    // 0x14d240: 0x200202d
    ctx->pc = 0x14d240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d244:
    // 0x14d244: 0xc0531ba
label_14d248:
    if (ctx->pc == 0x14D248u) {
        ctx->pc = 0x14D248u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14D24Cu;
        goto label_14d24c;
    }
    ctx->pc = 0x14D244u;
    SET_GPR_U32(ctx, 31, 0x14D24Cu);
    ctx->pc = 0x14D248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        decode_uleb128_0x14c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D24Cu; }
        else if (ctx->pc != 0x14D24Cu) { ctx->pc = 0x14D24Cu; }
    }
    if (ctx->pc != 0x14D24Cu) { return; }
    ctx->pc = 0x14D24Cu;
label_14d24c:
    // 0x14d24c: 0x8fa30000
    ctx->pc = 0x14d24cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_14d250:
    // 0x14d250: 0x40802d
    ctx->pc = 0x14d250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d254:
    // 0x14d254: 0x10000003
label_14d258:
    if (ctx->pc == 0x14D258u) {
        ctx->pc = 0x14D258u;
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
        ctx->pc = 0x14D25Cu;
        goto label_14d25c;
    }
    ctx->pc = 0x14D254u;
    {
        const bool branch_taken_0x14d254 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14D258u;
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
        if (branch_taken_0x14d254) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14D25Cu;
label_14d25c:
    // 0x14d25c: 0xc050034
label_14d260:
    if (ctx->pc == 0x14D260u) {
        ctx->pc = 0x14D264u;
        goto label_14d264;
    }
    ctx->pc = 0x14D25Cu;
    SET_GPR_U32(ctx, 31, 0x14D264u);
    ctx->pc = 0x1400D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        abort_0x1400d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D264u; }
        else if (ctx->pc != 0x14D264u) { ctx->pc = 0x14D264u; }
    }
    if (ctx->pc != 0x14D264u) { return; }
    ctx->pc = 0x14D264u;
label_14d264:
    // 0x14d264: 0x200102d
    ctx->pc = 0x14d264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14d268:
    // 0x14d268: 0xdfbf0040
    ctx->pc = 0x14d268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14d26c:
    // 0x14d26c: 0xdfb20030
    ctx->pc = 0x14d26cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14d270:
    // 0x14d270: 0xdfb10020
    ctx->pc = 0x14d270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14d274:
    // 0x14d274: 0xdfb00010
    ctx->pc = 0x14d274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14d278:
    // 0x14d278: 0x3e00008
label_14d27c:
    if (ctx->pc == 0x14D27Cu) {
        ctx->pc = 0x14D27Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x14D280u;
        goto label_fallthrough_0x14d278;
    }
    ctx->pc = 0x14D278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D27Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CEE8u: goto label_14cee8;
            case 0x14CEECu: goto label_14ceec;
            case 0x14CEF0u: goto label_14cef0;
            case 0x14CEF4u: goto label_14cef4;
            case 0x14CEF8u: goto label_14cef8;
            case 0x14CEFCu: goto label_14cefc;
            case 0x14CF00u: goto label_14cf00;
            case 0x14CF04u: goto label_14cf04;
            case 0x14CF08u: goto label_14cf08;
            case 0x14CF0Cu: goto label_14cf0c;
            case 0x14CF10u: goto label_14cf10;
            case 0x14CF14u: goto label_14cf14;
            case 0x14CF18u: goto label_14cf18;
            case 0x14CF1Cu: goto label_14cf1c;
            case 0x14CF20u: goto label_14cf20;
            case 0x14CF24u: goto label_14cf24;
            case 0x14CF28u: goto label_14cf28;
            case 0x14CF2Cu: goto label_14cf2c;
            case 0x14CF30u: goto label_14cf30;
            case 0x14CF34u: goto label_14cf34;
            case 0x14CF38u: goto label_14cf38;
            case 0x14CF3Cu: goto label_14cf3c;
            case 0x14CF40u: goto label_14cf40;
            case 0x14CF44u: goto label_14cf44;
            case 0x14CF48u: goto label_14cf48;
            case 0x14CF4Cu: goto label_14cf4c;
            case 0x14CF50u: goto label_14cf50;
            case 0x14CF54u: goto label_14cf54;
            case 0x14CF58u: goto label_14cf58;
            case 0x14CF5Cu: goto label_14cf5c;
            case 0x14CF60u: goto label_14cf60;
            case 0x14CF64u: goto label_14cf64;
            case 0x14CF68u: goto label_14cf68;
            case 0x14CF6Cu: goto label_14cf6c;
            case 0x14CF70u: goto label_14cf70;
            case 0x14CF74u: goto label_14cf74;
            case 0x14CF78u: goto label_14cf78;
            case 0x14CF7Cu: goto label_14cf7c;
            case 0x14CF80u: goto label_14cf80;
            case 0x14CF84u: goto label_14cf84;
            case 0x14CF88u: goto label_14cf88;
            case 0x14CF8Cu: goto label_14cf8c;
            case 0x14CF90u: goto label_14cf90;
            case 0x14CF94u: goto label_14cf94;
            case 0x14CF98u: goto label_14cf98;
            case 0x14CF9Cu: goto label_14cf9c;
            case 0x14CFA0u: goto label_14cfa0;
            case 0x14CFA4u: goto label_14cfa4;
            case 0x14CFA8u: goto label_14cfa8;
            case 0x14CFACu: goto label_14cfac;
            case 0x14CFB0u: goto label_14cfb0;
            case 0x14CFB4u: goto label_14cfb4;
            case 0x14CFB8u: goto label_14cfb8;
            case 0x14CFBCu: goto label_14cfbc;
            case 0x14CFC0u: goto label_14cfc0;
            case 0x14CFC4u: goto label_14cfc4;
            case 0x14CFC8u: goto label_14cfc8;
            case 0x14CFCCu: goto label_14cfcc;
            case 0x14CFD0u: goto label_14cfd0;
            case 0x14CFD4u: goto label_14cfd4;
            case 0x14CFD8u: goto label_14cfd8;
            case 0x14CFDCu: goto label_14cfdc;
            case 0x14CFE0u: goto label_14cfe0;
            case 0x14CFE4u: goto label_14cfe4;
            case 0x14CFE8u: goto label_14cfe8;
            case 0x14CFECu: goto label_14cfec;
            case 0x14CFF0u: goto label_14cff0;
            case 0x14CFF4u: goto label_14cff4;
            case 0x14CFF8u: goto label_14cff8;
            case 0x14CFFCu: goto label_14cffc;
            case 0x14D000u: goto label_14d000;
            case 0x14D004u: goto label_14d004;
            case 0x14D008u: goto label_14d008;
            case 0x14D00Cu: goto label_14d00c;
            case 0x14D010u: goto label_14d010;
            case 0x14D014u: goto label_14d014;
            case 0x14D018u: goto label_14d018;
            case 0x14D01Cu: goto label_14d01c;
            case 0x14D020u: goto label_14d020;
            case 0x14D024u: goto label_14d024;
            case 0x14D028u: goto label_14d028;
            case 0x14D02Cu: goto label_14d02c;
            case 0x14D030u: goto label_14d030;
            case 0x14D034u: goto label_14d034;
            case 0x14D038u: goto label_14d038;
            case 0x14D03Cu: goto label_14d03c;
            case 0x14D040u: goto label_14d040;
            case 0x14D044u: goto label_14d044;
            case 0x14D048u: goto label_14d048;
            case 0x14D04Cu: goto label_14d04c;
            case 0x14D050u: goto label_14d050;
            case 0x14D054u: goto label_14d054;
            case 0x14D058u: goto label_14d058;
            case 0x14D05Cu: goto label_14d05c;
            case 0x14D060u: goto label_14d060;
            case 0x14D064u: goto label_14d064;
            case 0x14D068u: goto label_14d068;
            case 0x14D06Cu: goto label_14d06c;
            case 0x14D070u: goto label_14d070;
            case 0x14D074u: goto label_14d074;
            case 0x14D078u: goto label_14d078;
            case 0x14D07Cu: goto label_14d07c;
            case 0x14D080u: goto label_14d080;
            case 0x14D084u: goto label_14d084;
            case 0x14D088u: goto label_14d088;
            case 0x14D08Cu: goto label_14d08c;
            case 0x14D090u: goto label_14d090;
            case 0x14D094u: goto label_14d094;
            case 0x14D098u: goto label_14d098;
            case 0x14D09Cu: goto label_14d09c;
            case 0x14D0A0u: goto label_14d0a0;
            case 0x14D0A4u: goto label_14d0a4;
            case 0x14D0A8u: goto label_14d0a8;
            case 0x14D0ACu: goto label_14d0ac;
            case 0x14D0B0u: goto label_14d0b0;
            case 0x14D0B4u: goto label_14d0b4;
            case 0x14D0B8u: goto label_14d0b8;
            case 0x14D0BCu: goto label_14d0bc;
            case 0x14D0C0u: goto label_14d0c0;
            case 0x14D0C4u: goto label_14d0c4;
            case 0x14D0C8u: goto label_14d0c8;
            case 0x14D0CCu: goto label_14d0cc;
            case 0x14D0D0u: goto label_14d0d0;
            case 0x14D0D4u: goto label_14d0d4;
            case 0x14D0D8u: goto label_14d0d8;
            case 0x14D0DCu: goto label_14d0dc;
            case 0x14D0E0u: goto label_14d0e0;
            case 0x14D0E4u: goto label_14d0e4;
            case 0x14D0E8u: goto label_14d0e8;
            case 0x14D0ECu: goto label_14d0ec;
            case 0x14D0F0u: goto label_14d0f0;
            case 0x14D0F4u: goto label_14d0f4;
            case 0x14D0F8u: goto label_14d0f8;
            case 0x14D0FCu: goto label_14d0fc;
            case 0x14D100u: goto label_14d100;
            case 0x14D104u: goto label_14d104;
            case 0x14D108u: goto label_14d108;
            case 0x14D10Cu: goto label_14d10c;
            case 0x14D110u: goto label_14d110;
            case 0x14D114u: goto label_14d114;
            case 0x14D118u: goto label_14d118;
            case 0x14D11Cu: goto label_14d11c;
            case 0x14D120u: goto label_14d120;
            case 0x14D124u: goto label_14d124;
            case 0x14D128u: goto label_14d128;
            case 0x14D12Cu: goto label_14d12c;
            case 0x14D130u: goto label_14d130;
            case 0x14D134u: goto label_14d134;
            case 0x14D138u: goto label_14d138;
            case 0x14D13Cu: goto label_14d13c;
            case 0x14D140u: goto label_14d140;
            case 0x14D144u: goto label_14d144;
            case 0x14D148u: goto label_14d148;
            case 0x14D14Cu: goto label_14d14c;
            case 0x14D150u: goto label_14d150;
            case 0x14D154u: goto label_14d154;
            case 0x14D158u: goto label_14d158;
            case 0x14D15Cu: goto label_14d15c;
            case 0x14D160u: goto label_14d160;
            case 0x14D164u: goto label_14d164;
            case 0x14D168u: goto label_14d168;
            case 0x14D16Cu: goto label_14d16c;
            case 0x14D170u: goto label_14d170;
            case 0x14D174u: goto label_14d174;
            case 0x14D178u: goto label_14d178;
            case 0x14D17Cu: goto label_14d17c;
            case 0x14D180u: goto label_14d180;
            case 0x14D184u: goto label_14d184;
            case 0x14D188u: goto label_14d188;
            case 0x14D18Cu: goto label_14d18c;
            case 0x14D190u: goto label_14d190;
            case 0x14D194u: goto label_14d194;
            case 0x14D198u: goto label_14d198;
            case 0x14D19Cu: goto label_14d19c;
            case 0x14D1A0u: goto label_14d1a0;
            case 0x14D1A4u: goto label_14d1a4;
            case 0x14D1A8u: goto label_14d1a8;
            case 0x14D1ACu: goto label_14d1ac;
            case 0x14D1B0u: goto label_14d1b0;
            case 0x14D1B4u: goto label_14d1b4;
            case 0x14D1B8u: goto label_14d1b8;
            case 0x14D1BCu: goto label_14d1bc;
            case 0x14D1C0u: goto label_14d1c0;
            case 0x14D1C4u: goto label_14d1c4;
            case 0x14D1C8u: goto label_14d1c8;
            case 0x14D1CCu: goto label_14d1cc;
            case 0x14D1D0u: goto label_14d1d0;
            case 0x14D1D4u: goto label_14d1d4;
            case 0x14D1D8u: goto label_14d1d8;
            case 0x14D1DCu: goto label_14d1dc;
            case 0x14D1E0u: goto label_14d1e0;
            case 0x14D1E4u: goto label_14d1e4;
            case 0x14D1E8u: goto label_14d1e8;
            case 0x14D1ECu: goto label_14d1ec;
            case 0x14D1F0u: goto label_14d1f0;
            case 0x14D1F4u: goto label_14d1f4;
            case 0x14D1F8u: goto label_14d1f8;
            case 0x14D1FCu: goto label_14d1fc;
            case 0x14D200u: goto label_14d200;
            case 0x14D204u: goto label_14d204;
            case 0x14D208u: goto label_14d208;
            case 0x14D20Cu: goto label_14d20c;
            case 0x14D210u: goto label_14d210;
            case 0x14D214u: goto label_14d214;
            case 0x14D218u: goto label_14d218;
            case 0x14D21Cu: goto label_14d21c;
            case 0x14D220u: goto label_14d220;
            case 0x14D224u: goto label_14d224;
            case 0x14D228u: goto label_14d228;
            case 0x14D22Cu: goto label_14d22c;
            case 0x14D230u: goto label_14d230;
            case 0x14D234u: goto label_14d234;
            case 0x14D238u: goto label_14d238;
            case 0x14D23Cu: goto label_14d23c;
            case 0x14D240u: goto label_14d240;
            case 0x14D244u: goto label_14d244;
            case 0x14D248u: goto label_14d248;
            case 0x14D24Cu: goto label_14d24c;
            case 0x14D250u: goto label_14d250;
            case 0x14D254u: goto label_14d254;
            case 0x14D258u: goto label_14d258;
            case 0x14D25Cu: goto label_14d25c;
            case 0x14D260u: goto label_14d260;
            case 0x14D264u: goto label_14d264;
            case 0x14D268u: goto label_14d268;
            case 0x14D26Cu: goto label_14d26c;
            case 0x14D270u: goto label_14d270;
            case 0x14D274u: goto label_14d274;
            case 0x14D278u: goto label_14d278;
            case 0x14D27Cu: goto label_14d27c;
            default: break;
        }
        return;
    }
label_fallthrough_0x14d278:
    ctx->pc = 0x14D280u;
}
