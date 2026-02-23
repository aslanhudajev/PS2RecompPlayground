#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GunAdjustGC1__Fi
// Address: 0x1ebfc0 - 0x1ec1c8
void GunAdjustGC1__Fi_0x1ebfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GunAdjustGC1__Fi");


    ctx->pc = 0x1ebfc0u;

label_1ebfc0:
    // 0x1ebfc0: 0x27bdffe0
    ctx->pc = 0x1ebfc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ebfc4:
    // 0x1ebfc4: 0x7fbf0010
    ctx->pc = 0x1ebfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1ebfc8:
    // 0x1ebfc8: 0x7fb00000
    ctx->pc = 0x1ebfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ebfcc:
    // 0x1ebfcc: 0x8f858dcc
    ctx->pc = 0x1ebfccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1ebfd0:
    // 0x1ebfd0: 0x2ca10008
    ctx->pc = 0x1ebfd0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 5), 8));
label_1ebfd4:
    // 0x1ebfd4: 0x10200071
label_1ebfd8:
    if (ctx->pc == 0x1EBFD8u) {
        ctx->pc = 0x1EBFD8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EBFDCu;
        goto label_1ebfdc;
    }
    ctx->pc = 0x1EBFD4u;
    {
        const bool branch_taken_0x1ebfd4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBFD8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ebfd4) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EBFDCu;
label_1ebfdc:
    // 0x1ebfdc: 0x3c02002c
    ctx->pc = 0x1ebfdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_1ebfe0:
    // 0x1ebfe0: 0x2443f7e0
    ctx->pc = 0x1ebfe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965216));
label_1ebfe4:
    // 0x1ebfe4: 0x51080
    ctx->pc = 0x1ebfe4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_1ebfe8:
    // 0x1ebfe8: 0x431021
    ctx->pc = 0x1ebfe8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebfec:
    // 0x1ebfec: 0x8c420000
    ctx->pc = 0x1ebfecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ebff0:
    // 0x1ebff0: 0x400008
label_1ebff4:
    if (ctx->pc == 0x1EBFF4u) {
        ctx->pc = 0x1EBFF8u;
        goto label_1ebff8;
    }
    ctx->pc = 0x1EBFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBFC0u: goto label_1ebfc0;
            case 0x1EBFC4u: goto label_1ebfc4;
            case 0x1EBFC8u: goto label_1ebfc8;
            case 0x1EBFCCu: goto label_1ebfcc;
            case 0x1EBFD0u: goto label_1ebfd0;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EBFDCu: goto label_1ebfdc;
            case 0x1EBFE0u: goto label_1ebfe0;
            case 0x1EBFE4u: goto label_1ebfe4;
            case 0x1EBFE8u: goto label_1ebfe8;
            case 0x1EBFECu: goto label_1ebfec;
            case 0x1EBFF0u: goto label_1ebff0;
            case 0x1EBFF4u: goto label_1ebff4;
            case 0x1EBFF8u: goto label_1ebff8;
            case 0x1EBFFCu: goto label_1ebffc;
            case 0x1EC000u: goto label_1ec000;
            case 0x1EC004u: goto label_1ec004;
            case 0x1EC008u: goto label_1ec008;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC010u: goto label_1ec010;
            case 0x1EC014u: goto label_1ec014;
            case 0x1EC018u: goto label_1ec018;
            case 0x1EC01Cu: goto label_1ec01c;
            case 0x1EC020u: goto label_1ec020;
            case 0x1EC024u: goto label_1ec024;
            case 0x1EC028u: goto label_1ec028;
            case 0x1EC02Cu: goto label_1ec02c;
            case 0x1EC030u: goto label_1ec030;
            case 0x1EC034u: goto label_1ec034;
            case 0x1EC038u: goto label_1ec038;
            case 0x1EC03Cu: goto label_1ec03c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC044u: goto label_1ec044;
            case 0x1EC048u: goto label_1ec048;
            case 0x1EC04Cu: goto label_1ec04c;
            case 0x1EC050u: goto label_1ec050;
            case 0x1EC054u: goto label_1ec054;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC05Cu: goto label_1ec05c;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC064u: goto label_1ec064;
            case 0x1EC068u: goto label_1ec068;
            case 0x1EC06Cu: goto label_1ec06c;
            case 0x1EC070u: goto label_1ec070;
            case 0x1EC074u: goto label_1ec074;
            case 0x1EC078u: goto label_1ec078;
            case 0x1EC07Cu: goto label_1ec07c;
            case 0x1EC080u: goto label_1ec080;
            case 0x1EC084u: goto label_1ec084;
            case 0x1EC088u: goto label_1ec088;
            case 0x1EC08Cu: goto label_1ec08c;
            case 0x1EC090u: goto label_1ec090;
            case 0x1EC094u: goto label_1ec094;
            case 0x1EC098u: goto label_1ec098;
            case 0x1EC09Cu: goto label_1ec09c;
            case 0x1EC0A0u: goto label_1ec0a0;
            case 0x1EC0A4u: goto label_1ec0a4;
            case 0x1EC0A8u: goto label_1ec0a8;
            case 0x1EC0ACu: goto label_1ec0ac;
            case 0x1EC0B0u: goto label_1ec0b0;
            case 0x1EC0B4u: goto label_1ec0b4;
            case 0x1EC0B8u: goto label_1ec0b8;
            case 0x1EC0BCu: goto label_1ec0bc;
            case 0x1EC0C0u: goto label_1ec0c0;
            case 0x1EC0C4u: goto label_1ec0c4;
            case 0x1EC0C8u: goto label_1ec0c8;
            case 0x1EC0CCu: goto label_1ec0cc;
            case 0x1EC0D0u: goto label_1ec0d0;
            case 0x1EC0D4u: goto label_1ec0d4;
            case 0x1EC0D8u: goto label_1ec0d8;
            case 0x1EC0DCu: goto label_1ec0dc;
            case 0x1EC0E0u: goto label_1ec0e0;
            case 0x1EC0E4u: goto label_1ec0e4;
            case 0x1EC0E8u: goto label_1ec0e8;
            case 0x1EC0ECu: goto label_1ec0ec;
            case 0x1EC0F0u: goto label_1ec0f0;
            case 0x1EC0F4u: goto label_1ec0f4;
            case 0x1EC0F8u: goto label_1ec0f8;
            case 0x1EC0FCu: goto label_1ec0fc;
            case 0x1EC100u: goto label_1ec100;
            case 0x1EC104u: goto label_1ec104;
            case 0x1EC108u: goto label_1ec108;
            case 0x1EC10Cu: goto label_1ec10c;
            case 0x1EC110u: goto label_1ec110;
            case 0x1EC114u: goto label_1ec114;
            case 0x1EC118u: goto label_1ec118;
            case 0x1EC11Cu: goto label_1ec11c;
            case 0x1EC120u: goto label_1ec120;
            case 0x1EC124u: goto label_1ec124;
            case 0x1EC128u: goto label_1ec128;
            case 0x1EC12Cu: goto label_1ec12c;
            case 0x1EC130u: goto label_1ec130;
            case 0x1EC134u: goto label_1ec134;
            case 0x1EC138u: goto label_1ec138;
            case 0x1EC13Cu: goto label_1ec13c;
            case 0x1EC140u: goto label_1ec140;
            case 0x1EC144u: goto label_1ec144;
            case 0x1EC148u: goto label_1ec148;
            case 0x1EC14Cu: goto label_1ec14c;
            case 0x1EC150u: goto label_1ec150;
            case 0x1EC154u: goto label_1ec154;
            case 0x1EC158u: goto label_1ec158;
            case 0x1EC15Cu: goto label_1ec15c;
            case 0x1EC160u: goto label_1ec160;
            case 0x1EC164u: goto label_1ec164;
            case 0x1EC168u: goto label_1ec168;
            case 0x1EC16Cu: goto label_1ec16c;
            case 0x1EC170u: goto label_1ec170;
            case 0x1EC174u: goto label_1ec174;
            case 0x1EC178u: goto label_1ec178;
            case 0x1EC17Cu: goto label_1ec17c;
            case 0x1EC180u: goto label_1ec180;
            case 0x1EC184u: goto label_1ec184;
            case 0x1EC188u: goto label_1ec188;
            case 0x1EC18Cu: goto label_1ec18c;
            case 0x1EC190u: goto label_1ec190;
            case 0x1EC194u: goto label_1ec194;
            case 0x1EC198u: goto label_1ec198;
            case 0x1EC19Cu: goto label_1ec19c;
            case 0x1EC1A0u: goto label_1ec1a0;
            case 0x1EC1A4u: goto label_1ec1a4;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1ACu: goto label_1ec1ac;
            case 0x1EC1B0u: goto label_1ec1b0;
            case 0x1EC1B4u: goto label_1ec1b4;
            case 0x1EC1B8u: goto label_1ec1b8;
            case 0x1EC1BCu: goto label_1ec1bc;
            case 0x1EC1C0u: goto label_1ec1c0;
            case 0x1EC1C4u: goto label_1ec1c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EBFF8u;
label_1ebff8:
    // 0x1ebff8: 0x3c020050
    ctx->pc = 0x1ebff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1ebffc:
    // 0x1ebffc: 0x102140
    ctx->pc = 0x1ebffcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 5));
label_1ec000:
    // 0x1ec000: 0x24420dc0
    ctx->pc = 0x1ec000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3520));
label_1ec004:
    // 0x1ec004: 0x2403ff97
    ctx->pc = 0x1ec004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967191));
label_1ec008:
    // 0x1ec008: 0x441021
    ctx->pc = 0x1ec008u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ec00c:
    // 0x1ec00c: 0xac430000
    ctx->pc = 0x1ec00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1ec010:
    // 0x1ec010: 0x3c020050
    ctx->pc = 0x1ec010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1ec014:
    // 0x1ec014: 0x24420dc4
    ctx->pc = 0x1ec014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3524));
label_1ec018:
    // 0x1ec018: 0x2403ffa1
    ctx->pc = 0x1ec018u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967201));
label_1ec01c:
    // 0x1ec01c: 0x441021
    ctx->pc = 0x1ec01cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ec020:
    // 0x1ec020: 0xac430000
    ctx->pc = 0x1ec020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1ec024:
    // 0x1ec024: 0x3c020050
    ctx->pc = 0x1ec024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1ec028:
    // 0x1ec028: 0x24420dc8
    ctx->pc = 0x1ec028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3528));
label_1ec02c:
    // 0x1ec02c: 0x2403008a
    ctx->pc = 0x1ec02cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 138));
label_1ec030:
    // 0x1ec030: 0x441021
    ctx->pc = 0x1ec030u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ec034:
    // 0x1ec034: 0xac430000
    ctx->pc = 0x1ec034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1ec038:
    // 0x1ec038: 0x3c020050
    ctx->pc = 0x1ec038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1ec03c:
    // 0x1ec03c: 0x24420dcc
    ctx->pc = 0x1ec03cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3532));
label_1ec040:
    // 0x1ec040: 0x24030044
    ctx->pc = 0x1ec040u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
label_1ec044:
    // 0x1ec044: 0x441021
    ctx->pc = 0x1ec044u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ec048:
    // 0x1ec048: 0xac430000
    ctx->pc = 0x1ec048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1ec04c:
    // 0x1ec04c: 0x8f828dec
    ctx->pc = 0x1ec04cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938092)));
label_1ec050:
    // 0x1ec050: 0x10400004
label_1ec054:
    if (ctx->pc == 0x1EC054u) {
        ctx->pc = 0x1EC054u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EC058u;
        goto label_1ec058;
    }
    ctx->pc = 0x1EC050u;
    {
        const bool branch_taken_0x1ec050 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC054u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ec050) {
            ctx->pc = 0x1EC064u;
            goto label_1ec064;
        }
    }
    ctx->pc = 0x1EC058u;
label_1ec058:
    // 0x1ec058: 0x24020004
    ctx->pc = 0x1ec058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1ec05c:
    // 0x1ec05c: 0x1000004f
label_1ec060:
    if (ctx->pc == 0x1EC060u) {
        ctx->pc = 0x1EC060u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC064u;
        goto label_1ec064;
    }
    ctx->pc = 0x1EC05Cu;
    {
        const bool branch_taken_0x1ec05c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC060u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1ec05c) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC064u;
label_1ec064:
    // 0x1ec064: 0x1000004d
label_1ec068:
    if (ctx->pc == 0x1EC068u) {
        ctx->pc = 0x1EC068u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC06Cu;
        goto label_1ec06c;
    }
    ctx->pc = 0x1EC064u;
    {
        const bool branch_taken_0x1ec064 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC068u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1ec064) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC06Cu;
label_1ec06c:
    // 0x1ec06c: 0x24a20001
    ctx->pc = 0x1ec06cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
label_1ec070:
    // 0x1ec070: 0xaf828dcc
    ctx->pc = 0x1ec070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
label_1ec074:
    // 0x1ec074: 0x10000049
label_1ec078:
    if (ctx->pc == 0x1EC078u) {
        ctx->pc = 0x1EC078u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
        ctx->pc = 0x1EC07Cu;
        goto label_1ec07c;
    }
    ctx->pc = 0x1EC074u;
    {
        const bool branch_taken_0x1ec074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC078u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
        if (branch_taken_0x1ec074) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC07Cu;
label_1ec07c:
    // 0x1ec07c: 0xc07b074
label_1ec080:
    if (ctx->pc == 0x1EC080u) {
        ctx->pc = 0x1EC084u;
        goto label_1ec084;
    }
    ctx->pc = 0x1EC07Cu;
    SET_GPR_U32(ctx, 31, 0x1EC084u);
    ctx->pc = 0x1EC1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust1GC1__Fi_0x1ec1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC084u; }
        else if (ctx->pc != 0x1EC084u) { ctx->pc = 0x1EC084u; }
    }
    if (ctx->pc != 0x1EC084u) { return; }
    ctx->pc = 0x1EC084u;
label_1ec084:
    // 0x1ec084: 0x10400046
label_1ec088:
    if (ctx->pc == 0x1EC088u) {
        ctx->pc = 0x1EC088u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EC08Cu;
        goto label_1ec08c;
    }
    ctx->pc = 0x1EC084u;
    {
        const bool branch_taken_0x1ec084 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC088u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec084) {
            ctx->pc = 0x1EC1A0u;
            goto label_1ec1a0;
        }
    }
    ctx->pc = 0x1EC08Cu;
label_1ec08c:
    // 0x1ec08c: 0x8f828dcc
    ctx->pc = 0x1ec08cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1ec090:
    // 0x1ec090: 0x24420001
    ctx->pc = 0x1ec090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1ec094:
    // 0x1ec094: 0x10000041
label_1ec098:
    if (ctx->pc == 0x1EC098u) {
        ctx->pc = 0x1EC098u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC09Cu;
        goto label_1ec09c;
    }
    ctx->pc = 0x1EC094u;
    {
        const bool branch_taken_0x1ec094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC098u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1ec094) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC09Cu;
label_1ec09c:
    // 0x1ec09c: 0xc07b08c
label_1ec0a0:
    if (ctx->pc == 0x1EC0A0u) {
        ctx->pc = 0x1EC0A4u;
        goto label_1ec0a4;
    }
    ctx->pc = 0x1EC09Cu;
    SET_GPR_U32(ctx, 31, 0x1EC0A4u);
    ctx->pc = 0x1EC230u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust2GC1__Fi_0x1ec230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0A4u; }
        else if (ctx->pc != 0x1EC0A4u) { ctx->pc = 0x1EC0A4u; }
    }
    if (ctx->pc != 0x1EC0A4u) { return; }
    ctx->pc = 0x1EC0A4u;
label_1ec0a4:
    // 0x1ec0a4: 0x10400003
label_1ec0a8:
    if (ctx->pc == 0x1EC0A8u) {
        ctx->pc = 0x1EC0A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1EC0ACu;
        goto label_1ec0ac;
    }
    ctx->pc = 0x1EC0A4u;
    {
        const bool branch_taken_0x1ec0a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC0A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1ec0a4) {
            ctx->pc = 0x1EC0B4u;
            goto label_1ec0b4;
        }
    }
    ctx->pc = 0x1EC0ACu;
label_1ec0ac:
    // 0x1ec0ac: 0x1000003b
label_1ec0b0:
    if (ctx->pc == 0x1EC0B0u) {
        ctx->pc = 0x1EC0B0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC0B4u;
        goto label_1ec0b4;
    }
    ctx->pc = 0x1EC0ACu;
    {
        const bool branch_taken_0x1ec0ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC0B0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1ec0ac) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC0B4u;
label_1ec0b4:
    // 0x1ec0b4: 0x8f828df8
    ctx->pc = 0x1ec0b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938104)));
label_1ec0b8:
    // 0x1ec0b8: 0x28420005
    ctx->pc = 0x1ec0b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_1ec0bc:
    // 0x1ec0bc: 0x14400037
label_1ec0c0:
    if (ctx->pc == 0x1EC0C0u) {
        ctx->pc = 0x1EC0C0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EC0C4u;
        goto label_1ec0c4;
    }
    ctx->pc = 0x1EC0BCu;
    {
        const bool branch_taken_0x1ec0bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EC0C0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec0bc) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC0C4u;
label_1ec0c4:
    // 0x1ec0c4: 0xc07ad58
label_1ec0c8:
    if (ctx->pc == 0x1EC0C8u) {
        ctx->pc = 0x1EC0C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EC0CCu;
        goto label_1ec0cc;
    }
    ctx->pc = 0x1EC0C4u;
    SET_GPR_U32(ctx, 31, 0x1EC0CCu);
    ctx->pc = 0x1EC0C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1EB560u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_normal_mode__Fii_0x1eb560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0CCu; }
        else if (ctx->pc != 0x1EC0CCu) { ctx->pc = 0x1EC0CCu; }
    }
    if (ctx->pc != 0x1EC0CCu) { return; }
    ctx->pc = 0x1EC0CCu;
label_1ec0cc:
    // 0x1ec0cc: 0x10000033
label_1ec0d0:
    if (ctx->pc == 0x1EC0D0u) {
        ctx->pc = 0x1EC0D4u;
        goto label_1ec0d4;
    }
    ctx->pc = 0x1EC0CCu;
    {
        const bool branch_taken_0x1ec0cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec0cc) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC0D4u;
label_1ec0d4:
    // 0x1ec0d4: 0x24a20001
    ctx->pc = 0x1ec0d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
label_1ec0d8:
    // 0x1ec0d8: 0xaf828dcc
    ctx->pc = 0x1ec0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
label_1ec0dc:
    // 0x1ec0dc: 0x1000002f
label_1ec0e0:
    if (ctx->pc == 0x1EC0E0u) {
        ctx->pc = 0x1EC0E0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
        ctx->pc = 0x1EC0E4u;
        goto label_1ec0e4;
    }
    ctx->pc = 0x1EC0DCu;
    {
        const bool branch_taken_0x1ec0dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC0E0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
        if (branch_taken_0x1ec0dc) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC0E4u;
label_1ec0e4:
    // 0x1ec0e4: 0xc07b0a0
label_1ec0e8:
    if (ctx->pc == 0x1EC0E8u) {
        ctx->pc = 0x1EC0ECu;
        goto label_1ec0ec;
    }
    ctx->pc = 0x1EC0E4u;
    SET_GPR_U32(ctx, 31, 0x1EC0ECu);
    ctx->pc = 0x1EC280u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust_W1GC1__Fi_0x1ec280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0ECu; }
        else if (ctx->pc != 0x1EC0ECu) { ctx->pc = 0x1EC0ECu; }
    }
    if (ctx->pc != 0x1EC0ECu) { return; }
    ctx->pc = 0x1EC0ECu;
label_1ec0ec:
    // 0x1ec0ec: 0x10400006
label_1ec0f0:
    if (ctx->pc == 0x1EC0F0u) {
        ctx->pc = 0x1EC0F4u;
        goto label_1ec0f4;
    }
    ctx->pc = 0x1EC0ECu;
    {
        const bool branch_taken_0x1ec0ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec0ec) {
            ctx->pc = 0x1EC108u;
            goto label_1ec108;
        }
    }
    ctx->pc = 0x1EC0F4u;
label_1ec0f4:
    // 0x1ec0f4: 0x8f828dcc
    ctx->pc = 0x1ec0f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1ec0f8:
    // 0x1ec0f8: 0xaf808df8
    ctx->pc = 0x1ec0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
label_1ec0fc:
    // 0x1ec0fc: 0x24420001
    ctx->pc = 0x1ec0fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1ec100:
    // 0x1ec100: 0x10000026
label_1ec104:
    if (ctx->pc == 0x1EC104u) {
        ctx->pc = 0x1EC104u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC108u;
        goto label_1ec108;
    }
    ctx->pc = 0x1EC100u;
    {
        const bool branch_taken_0x1ec100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC104u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1ec100) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC108u;
label_1ec108:
    // 0x1ec108: 0x8f828df8
    ctx->pc = 0x1ec108u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938104)));
label_1ec10c:
    // 0x1ec10c: 0x28420005
    ctx->pc = 0x1ec10cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_1ec110:
    // 0x1ec110: 0x14400022
label_1ec114:
    if (ctx->pc == 0x1EC114u) {
        ctx->pc = 0x1EC114u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EC118u;
        goto label_1ec118;
    }
    ctx->pc = 0x1EC110u;
    {
        const bool branch_taken_0x1ec110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EC114u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec110) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC118u;
label_1ec118:
    // 0x1ec118: 0xc07ad2c
label_1ec11c:
    if (ctx->pc == 0x1EC11Cu) {
        ctx->pc = 0x1EC11Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EC120u;
        goto label_1ec120;
    }
    ctx->pc = 0x1EC118u;
    SET_GPR_U32(ctx, 31, 0x1EC120u);
    ctx->pc = 0x1EC11Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1EB4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide_mode__Fii_0x1eb4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC120u; }
        else if (ctx->pc != 0x1EC120u) { ctx->pc = 0x1EC120u; }
    }
    if (ctx->pc != 0x1EC120u) { return; }
    ctx->pc = 0x1EC120u;
label_1ec120:
    // 0x1ec120: 0x1000001e
label_1ec124:
    if (ctx->pc == 0x1EC124u) {
        ctx->pc = 0x1EC128u;
        goto label_1ec128;
    }
    ctx->pc = 0x1EC120u;
    {
        const bool branch_taken_0x1ec120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec120) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC128u;
label_1ec128:
    // 0x1ec128: 0xc07b0a8
label_1ec12c:
    if (ctx->pc == 0x1EC12Cu) {
        ctx->pc = 0x1EC130u;
        goto label_1ec130;
    }
    ctx->pc = 0x1EC128u;
    SET_GPR_U32(ctx, 31, 0x1EC130u);
    ctx->pc = 0x1EC2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust_W2GC1__Fi_0x1ec2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC130u; }
        else if (ctx->pc != 0x1EC130u) { ctx->pc = 0x1EC130u; }
    }
    if (ctx->pc != 0x1EC130u) { return; }
    ctx->pc = 0x1EC130u;
label_1ec130:
    // 0x1ec130: 0x10400005
label_1ec134:
    if (ctx->pc == 0x1EC134u) {
        ctx->pc = 0x1EC138u;
        goto label_1ec138;
    }
    ctx->pc = 0x1EC130u;
    {
        const bool branch_taken_0x1ec130 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec130) {
            ctx->pc = 0x1EC148u;
            goto label_1ec148;
        }
    }
    ctx->pc = 0x1EC138u;
label_1ec138:
    // 0x1ec138: 0x8f828dcc
    ctx->pc = 0x1ec138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1ec13c:
    // 0x1ec13c: 0x24420001
    ctx->pc = 0x1ec13cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1ec140:
    // 0x1ec140: 0x10000016
label_1ec144:
    if (ctx->pc == 0x1EC144u) {
        ctx->pc = 0x1EC144u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC148u;
        goto label_1ec148;
    }
    ctx->pc = 0x1EC140u;
    {
        const bool branch_taken_0x1ec140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC144u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
        if (branch_taken_0x1ec140) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC148u;
label_1ec148:
    // 0x1ec148: 0x8f828df8
    ctx->pc = 0x1ec148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938104)));
label_1ec14c:
    // 0x1ec14c: 0x28420005
    ctx->pc = 0x1ec14cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_1ec150:
    // 0x1ec150: 0x14400012
label_1ec154:
    if (ctx->pc == 0x1EC154u) {
        ctx->pc = 0x1EC154u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1EC158u;
        goto label_1ec158;
    }
    ctx->pc = 0x1EC150u;
    {
        const bool branch_taken_0x1ec150 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EC154u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec150) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC158u;
label_1ec158:
    // 0x1ec158: 0xc07ad2c
label_1ec15c:
    if (ctx->pc == 0x1EC15Cu) {
        ctx->pc = 0x1EC15Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EC160u;
        goto label_1ec160;
    }
    ctx->pc = 0x1EC158u;
    SET_GPR_U32(ctx, 31, 0x1EC160u);
    ctx->pc = 0x1EC15Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1EB4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        change_wide_mode__Fii_0x1eb4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC160u; }
        else if (ctx->pc != 0x1EC160u) { ctx->pc = 0x1EC160u; }
    }
    if (ctx->pc != 0x1EC160u) { return; }
    ctx->pc = 0x1EC160u;
label_1ec160:
    // 0x1ec160: 0x1000000e
label_1ec164:
    if (ctx->pc == 0x1EC164u) {
        ctx->pc = 0x1EC168u;
        goto label_1ec168;
    }
    ctx->pc = 0x1EC160u;
    {
        const bool branch_taken_0x1ec160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec160) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC168u;
label_1ec168:
    // 0x1ec168: 0xc07b0c4
label_1ec16c:
    if (ctx->pc == 0x1EC16Cu) {
        ctx->pc = 0x1EC170u;
        goto label_1ec170;
    }
    ctx->pc = 0x1EC168u;
    SET_GPR_U32(ctx, 31, 0x1EC170u);
    ctx->pc = 0x1EC310u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_adjust_W3GC1__Fi_0x1ec310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC170u; }
        else if (ctx->pc != 0x1EC170u) { ctx->pc = 0x1EC170u; }
    }
    if (ctx->pc != 0x1EC170u) { return; }
    ctx->pc = 0x1EC170u;
label_1ec170:
    // 0x1ec170: 0x24030001
    ctx->pc = 0x1ec170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1ec174:
    // 0x1ec174: 0x14430004
label_1ec178:
    if (ctx->pc == 0x1EC178u) {
        ctx->pc = 0x1EC178u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1EC17Cu;
        goto label_1ec17c;
    }
    ctx->pc = 0x1EC174u;
    {
        const bool branch_taken_0x1ec174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1EC178u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ec174) {
            ctx->pc = 0x1EC188u;
            goto label_1ec188;
        }
    }
    ctx->pc = 0x1EC17Cu;
label_1ec17c:
    // 0x1ec17c: 0x24030008
    ctx->pc = 0x1ec17cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_1ec180:
    // 0x1ec180: 0xaf838dcc
    ctx->pc = 0x1ec180u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 3));
label_1ec184:
    // 0x1ec184: 0x24030002
    ctx->pc = 0x1ec184u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1ec188:
    // 0x1ec188: 0x14430004
label_1ec18c:
    if (ctx->pc == 0x1EC18Cu) {
        ctx->pc = 0x1EC190u;
        goto label_1ec190;
    }
    ctx->pc = 0x1EC188u;
    {
        const bool branch_taken_0x1ec188 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ec188) {
            ctx->pc = 0x1EC19Cu;
            goto label_1ec19c;
        }
    }
    ctx->pc = 0x1EC190u;
label_1ec190:
    // 0x1ec190: 0x8f828dcc
    ctx->pc = 0x1ec190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1ec194:
    // 0x1ec194: 0x2442ffff
    ctx->pc = 0x1ec194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ec198:
    // 0x1ec198: 0xaf828dcc
    ctx->pc = 0x1ec198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
label_1ec19c:
    // 0x1ec19c: 0x72002628
    ctx->pc = 0x1ec19cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ec1a0:
    // 0x1ec1a0: 0xc07b34c
label_1ec1a4:
    if (ctx->pc == 0x1EC1A4u) {
        ctx->pc = 0x1EC1A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EC1A8u;
        goto label_1ec1a8;
    }
    ctx->pc = 0x1EC1A0u;
    SET_GPR_U32(ctx, 31, 0x1EC1A8u);
    ctx->pc = 0x1EC1A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ECD30u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispAdjustMsg__Fii_0x1ecd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC1A8u; }
        else if (ctx->pc != 0x1EC1A8u) { ctx->pc = 0x1EC1A8u; }
    }
    if (ctx->pc != 0x1EC1A8u) { return; }
    ctx->pc = 0x1EC1A8u;
label_1ec1a8:
    // 0x1ec1a8: 0x8f828dcc
    ctx->pc = 0x1ec1a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1ec1ac:
    // 0x1ec1ac: 0x7bbf0010
    ctx->pc = 0x1ec1acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec1b0:
    // 0x1ec1b0: 0x7bb00000
    ctx->pc = 0x1ec1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec1b4:
    // 0x1ec1b4: 0x38420008
    ctx->pc = 0x1ec1b4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 8));
label_1ec1b8:
    // 0x1ec1b8: 0x2c420001
    ctx->pc = 0x1ec1b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_1ec1bc:
    // 0x1ec1bc: 0x38420001
    ctx->pc = 0x1ec1bcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_1ec1c0:
    // 0x1ec1c0: 0x3e00008
label_1ec1c4:
    if (ctx->pc == 0x1EC1C4u) {
        ctx->pc = 0x1EC1C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EC1C8u;
        goto label_fallthrough_0x1ec1c0;
    }
    ctx->pc = 0x1EC1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC1C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBFC0u: goto label_1ebfc0;
            case 0x1EBFC4u: goto label_1ebfc4;
            case 0x1EBFC8u: goto label_1ebfc8;
            case 0x1EBFCCu: goto label_1ebfcc;
            case 0x1EBFD0u: goto label_1ebfd0;
            case 0x1EBFD4u: goto label_1ebfd4;
            case 0x1EBFD8u: goto label_1ebfd8;
            case 0x1EBFDCu: goto label_1ebfdc;
            case 0x1EBFE0u: goto label_1ebfe0;
            case 0x1EBFE4u: goto label_1ebfe4;
            case 0x1EBFE8u: goto label_1ebfe8;
            case 0x1EBFECu: goto label_1ebfec;
            case 0x1EBFF0u: goto label_1ebff0;
            case 0x1EBFF4u: goto label_1ebff4;
            case 0x1EBFF8u: goto label_1ebff8;
            case 0x1EBFFCu: goto label_1ebffc;
            case 0x1EC000u: goto label_1ec000;
            case 0x1EC004u: goto label_1ec004;
            case 0x1EC008u: goto label_1ec008;
            case 0x1EC00Cu: goto label_1ec00c;
            case 0x1EC010u: goto label_1ec010;
            case 0x1EC014u: goto label_1ec014;
            case 0x1EC018u: goto label_1ec018;
            case 0x1EC01Cu: goto label_1ec01c;
            case 0x1EC020u: goto label_1ec020;
            case 0x1EC024u: goto label_1ec024;
            case 0x1EC028u: goto label_1ec028;
            case 0x1EC02Cu: goto label_1ec02c;
            case 0x1EC030u: goto label_1ec030;
            case 0x1EC034u: goto label_1ec034;
            case 0x1EC038u: goto label_1ec038;
            case 0x1EC03Cu: goto label_1ec03c;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC044u: goto label_1ec044;
            case 0x1EC048u: goto label_1ec048;
            case 0x1EC04Cu: goto label_1ec04c;
            case 0x1EC050u: goto label_1ec050;
            case 0x1EC054u: goto label_1ec054;
            case 0x1EC058u: goto label_1ec058;
            case 0x1EC05Cu: goto label_1ec05c;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC064u: goto label_1ec064;
            case 0x1EC068u: goto label_1ec068;
            case 0x1EC06Cu: goto label_1ec06c;
            case 0x1EC070u: goto label_1ec070;
            case 0x1EC074u: goto label_1ec074;
            case 0x1EC078u: goto label_1ec078;
            case 0x1EC07Cu: goto label_1ec07c;
            case 0x1EC080u: goto label_1ec080;
            case 0x1EC084u: goto label_1ec084;
            case 0x1EC088u: goto label_1ec088;
            case 0x1EC08Cu: goto label_1ec08c;
            case 0x1EC090u: goto label_1ec090;
            case 0x1EC094u: goto label_1ec094;
            case 0x1EC098u: goto label_1ec098;
            case 0x1EC09Cu: goto label_1ec09c;
            case 0x1EC0A0u: goto label_1ec0a0;
            case 0x1EC0A4u: goto label_1ec0a4;
            case 0x1EC0A8u: goto label_1ec0a8;
            case 0x1EC0ACu: goto label_1ec0ac;
            case 0x1EC0B0u: goto label_1ec0b0;
            case 0x1EC0B4u: goto label_1ec0b4;
            case 0x1EC0B8u: goto label_1ec0b8;
            case 0x1EC0BCu: goto label_1ec0bc;
            case 0x1EC0C0u: goto label_1ec0c0;
            case 0x1EC0C4u: goto label_1ec0c4;
            case 0x1EC0C8u: goto label_1ec0c8;
            case 0x1EC0CCu: goto label_1ec0cc;
            case 0x1EC0D0u: goto label_1ec0d0;
            case 0x1EC0D4u: goto label_1ec0d4;
            case 0x1EC0D8u: goto label_1ec0d8;
            case 0x1EC0DCu: goto label_1ec0dc;
            case 0x1EC0E0u: goto label_1ec0e0;
            case 0x1EC0E4u: goto label_1ec0e4;
            case 0x1EC0E8u: goto label_1ec0e8;
            case 0x1EC0ECu: goto label_1ec0ec;
            case 0x1EC0F0u: goto label_1ec0f0;
            case 0x1EC0F4u: goto label_1ec0f4;
            case 0x1EC0F8u: goto label_1ec0f8;
            case 0x1EC0FCu: goto label_1ec0fc;
            case 0x1EC100u: goto label_1ec100;
            case 0x1EC104u: goto label_1ec104;
            case 0x1EC108u: goto label_1ec108;
            case 0x1EC10Cu: goto label_1ec10c;
            case 0x1EC110u: goto label_1ec110;
            case 0x1EC114u: goto label_1ec114;
            case 0x1EC118u: goto label_1ec118;
            case 0x1EC11Cu: goto label_1ec11c;
            case 0x1EC120u: goto label_1ec120;
            case 0x1EC124u: goto label_1ec124;
            case 0x1EC128u: goto label_1ec128;
            case 0x1EC12Cu: goto label_1ec12c;
            case 0x1EC130u: goto label_1ec130;
            case 0x1EC134u: goto label_1ec134;
            case 0x1EC138u: goto label_1ec138;
            case 0x1EC13Cu: goto label_1ec13c;
            case 0x1EC140u: goto label_1ec140;
            case 0x1EC144u: goto label_1ec144;
            case 0x1EC148u: goto label_1ec148;
            case 0x1EC14Cu: goto label_1ec14c;
            case 0x1EC150u: goto label_1ec150;
            case 0x1EC154u: goto label_1ec154;
            case 0x1EC158u: goto label_1ec158;
            case 0x1EC15Cu: goto label_1ec15c;
            case 0x1EC160u: goto label_1ec160;
            case 0x1EC164u: goto label_1ec164;
            case 0x1EC168u: goto label_1ec168;
            case 0x1EC16Cu: goto label_1ec16c;
            case 0x1EC170u: goto label_1ec170;
            case 0x1EC174u: goto label_1ec174;
            case 0x1EC178u: goto label_1ec178;
            case 0x1EC17Cu: goto label_1ec17c;
            case 0x1EC180u: goto label_1ec180;
            case 0x1EC184u: goto label_1ec184;
            case 0x1EC188u: goto label_1ec188;
            case 0x1EC18Cu: goto label_1ec18c;
            case 0x1EC190u: goto label_1ec190;
            case 0x1EC194u: goto label_1ec194;
            case 0x1EC198u: goto label_1ec198;
            case 0x1EC19Cu: goto label_1ec19c;
            case 0x1EC1A0u: goto label_1ec1a0;
            case 0x1EC1A4u: goto label_1ec1a4;
            case 0x1EC1A8u: goto label_1ec1a8;
            case 0x1EC1ACu: goto label_1ec1ac;
            case 0x1EC1B0u: goto label_1ec1b0;
            case 0x1EC1B4u: goto label_1ec1b4;
            case 0x1EC1B8u: goto label_1ec1b8;
            case 0x1EC1BCu: goto label_1ec1bc;
            case 0x1EC1C0u: goto label_1ec1c0;
            case 0x1EC1C4u: goto label_1ec1c4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ec1c0:
    ctx->pc = 0x1EC1C8u;
}
