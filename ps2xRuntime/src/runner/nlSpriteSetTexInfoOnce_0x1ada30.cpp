#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSpriteSetTexInfoOnce
// Address: 0x1ada30 - 0x1adbe8
void nlSpriteSetTexInfoOnce_0x1ada30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSpriteSetTexInfoOnce");


    ctx->pc = 0x1ada30u;

    // 0x1ada30: 0x4a10003
    ctx->pc = 0x1ADA30u;
    {
        const bool branch_taken_0x1ada30 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1ADA34u;
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 5), 8));
        if (branch_taken_0x1ada30) {
            ctx->pc = 0x1ADA40u;
            goto label_1ada40;
        }
    }
    ctx->pc = 0x1ADA38u;
    // 0x1ada38: 0x24a300ff
    ctx->pc = 0x1ada38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 255));
    // 0x1ada3c: 0x35a03
    ctx->pc = 0x1ada3cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 8));
label_1ada40:
    // 0x1ada40: 0x71604e28
    ctx->pc = 0x1ada40u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x1ada44: 0x70006628
    ctx->pc = 0x1ada44u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ada48: 0x15000008
    ctx->pc = 0x1ADA48u;
    {
        const bool branch_taken_0x1ada48 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ADA4Cu;
        SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ada48) {
            ctx->pc = 0x1ADA6Cu;
            goto label_1ada6c;
        }
    }
    ctx->pc = 0x1ADA50u;
    // 0x1ada50: 0x8c850044
    ctx->pc = 0x1ada50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ada54: 0x8cc90010
    ctx->pc = 0x1ada54u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1ada58: 0x2403fffe
    ctx->pc = 0x1ada58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ada5c: 0xa31824
    ctx->pc = 0x1ada5cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ada60: 0x1694821
    ctx->pc = 0x1ada60u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1ada64: 0x10000004
    ctx->pc = 0x1ADA64u;
    {
        const bool branch_taken_0x1ada64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADA68u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        if (branch_taken_0x1ada64) {
            ctx->pc = 0x1ADA78u;
            goto label_1ada78;
        }
    }
    ctx->pc = 0x1ADA6Cu;
label_1ada6c:
    // 0x1ada6c: 0x8c830044
    ctx->pc = 0x1ada6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ada70: 0x34630001
    ctx->pc = 0x1ada70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
    // 0x1ada74: 0xac830044
    ctx->pc = 0x1ada74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
label_1ada78:
    // 0x1ada78: 0x8cc50018
    ctx->pc = 0x1ada78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1ada7c: 0x24030001
    ctx->pc = 0x1ada7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ada80: 0x14a3000c
    ctx->pc = 0x1ADA80u;
    {
        const bool branch_taken_0x1ada80 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ada80) {
            ctx->pc = 0x1ADAB4u;
            goto label_1adab4;
        }
    }
    ctx->pc = 0x1ADA88u;
    // 0x1ada88: 0x8c830044
    ctx->pc = 0x1ada88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ada8c: 0x34630002
    ctx->pc = 0x1ada8cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x1ada90: 0x15000004
    ctx->pc = 0x1ADA90u;
    {
        const bool branch_taken_0x1ada90 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ADA94u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        if (branch_taken_0x1ada90) {
            ctx->pc = 0x1ADAA4u;
            goto label_1adaa4;
        }
    }
    ctx->pc = 0x1ADA98u;
    // 0x1ada98: 0x8cc30030
    ctx->pc = 0x1ada98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1ada9c: 0x10000003
    ctx->pc = 0x1ADA9Cu;
    {
        const bool branch_taken_0x1ada9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADAA0u;
        SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        if (branch_taken_0x1ada9c) {
            ctx->pc = 0x1ADAACu;
            goto label_1adaac;
        }
    }
    ctx->pc = 0x1ADAA4u;
label_1adaa4:
    // 0x1adaa4: 0x8cca0030
    ctx->pc = 0x1adaa4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1adaa8: 0x0
    ctx->pc = 0x1adaa8u;
    // NOP
label_1adaac:
    // 0x1adaac: 0x10000005
    ctx->pc = 0x1ADAACu;
    {
        const bool branch_taken_0x1adaac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADAB0u;
        SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 34)));
        if (branch_taken_0x1adaac) {
            ctx->pc = 0x1ADAC4u;
            goto label_1adac4;
        }
    }
    ctx->pc = 0x1ADAB4u;
label_1adab4:
    // 0x1adab4: 0x8c850044
    ctx->pc = 0x1adab4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1adab8: 0x2403fffd
    ctx->pc = 0x1adab8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1adabc: 0xa31824
    ctx->pc = 0x1adabcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1adac0: 0xac830044
    ctx->pc = 0x1adac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
label_1adac4:
    // 0x1adac4: 0xa183c
    ctx->pc = 0x1adac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1adac8: 0x3183f
    ctx->pc = 0x1adac8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1adacc: 0x3297c
    ctx->pc = 0x1adaccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1adad0: 0xc183c
    ctx->pc = 0x1adad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << (32 + 0));
    // 0x1adad4: 0x84cc0000
    ctx->pc = 0x1adad4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1adad8: 0x84cd0002
    ctx->pc = 0x1adad8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1adadc: 0x9583c
    ctx->pc = 0x1adadcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1adae0: 0x84ca0008
    ctx->pc = 0x1adae0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1adae4: 0x84c9000a
    ctx->pc = 0x1adae4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x1adae8: 0x3183f
    ctx->pc = 0x1adae8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1adaec: 0xb583f
    ctx->pc = 0x1adaecu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1adaf0: 0xc63b8
    ctx->pc = 0x1adaf0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 14);
    // 0x1adaf4: 0xd6d38
    ctx->pc = 0x1adaf4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 20);
    // 0x1adaf8: 0x16c5825
    ctx->pc = 0x1adaf8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1adafc: 0x24060004
    ctx->pc = 0x1adafcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1adb00: 0x1ab5825
    ctx->pc = 0x1adb00u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1adb04: 0xa56b8
    ctx->pc = 0x1adb04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 26);
    // 0x1adb08: 0x14b5025
    ctx->pc = 0x1adb08u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1adb0c: 0x94fb8
    ctx->pc = 0x1adb0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 30);
    // 0x1adb10: 0x6303c
    ctx->pc = 0x1adb10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1adb14: 0x12a4825
    ctx->pc = 0x1adb14u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1adb18: 0x1263025
    ctx->pc = 0x1adb18u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1adb1c: 0x31cfc
    ctx->pc = 0x1adb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 19));
    // 0x1adb20: 0xa62825
    ctx->pc = 0x1adb20u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1adb24: 0x652825
    ctx->pc = 0x1adb24u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1adb28: 0x3c032000
    ctx->pc = 0x1adb28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x1adb2c: 0x3183c
    ctx->pc = 0x1adb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1adb30: 0xa32825
    ctx->pc = 0x1adb30u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1adb34: 0x3403ffff
    ctx->pc = 0x1adb34u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1adb38: 0x31c38
    ctx->pc = 0x1adb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1adb3c: 0x3466ffff
    ctx->pc = 0x1adb3cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1adb40: 0xa61824
    ctx->pc = 0x1adb40u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1adb44: 0x3183c
    ctx->pc = 0x1adb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1adb48: 0x3183f
    ctx->pc = 0x1adb48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1adb4c: 0xac830000
    ctx->pc = 0x1adb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1adb50: 0x5183e
    ctx->pc = 0x1adb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1adb54: 0x661824
    ctx->pc = 0x1adb54u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1adb58: 0x3183c
    ctx->pc = 0x1adb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1adb5c: 0x3183f
    ctx->pc = 0x1adb5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1adb60: 0xac830004
    ctx->pc = 0x1adb60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1adb64: 0x4e0001e
    ctx->pc = 0x1ADB64u;
    {
        const bool branch_taken_0x1adb64 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1ADB68u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
        if (branch_taken_0x1adb64) {
            ctx->pc = 0x1ADBE0u;
            goto label_1adbe0;
        }
    }
    ctx->pc = 0x1ADB6Cu;
    // 0x1adb6c: 0x8c860004
    ctx->pc = 0x1adb6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1adb70: 0x71840
    ctx->pc = 0x1adb70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
    // 0x1adb74: 0x671821
    ctx->pc = 0x1adb74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1adb78: 0x33880
    ctx->pc = 0x1adb78u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1adb7c: 0x2405ffe0
    ctx->pc = 0x1adb7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1adb80: 0x30c3001f
    ctx->pc = 0x1adb80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 31));
    // 0x1adb84: 0xac830004
    ctx->pc = 0x1adb84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1adb88: 0x8f868a50
    ctx->pc = 0x1adb88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937168)));
    // 0x1adb8c: 0x8c830004
    ctx->pc = 0x1adb8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1adb90: 0xc73021
    ctx->pc = 0x1adb90u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1adb94: 0x8cc60000
    ctx->pc = 0x1adb94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1adb98: 0xc52824
    ctx->pc = 0x1adb98u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1adb9c: 0x651825
    ctx->pc = 0x1adb9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1adba0: 0xac830004
    ctx->pc = 0x1adba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1adba4: 0x8f838a50
    ctx->pc = 0x1adba4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937168)));
    // 0x1adba8: 0xe31821
    ctx->pc = 0x1adba8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1adbac: 0x8463000a
    ctx->pc = 0x1adbacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1adbb0: 0x30630002
    ctx->pc = 0x1adbb0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x1adbb4: 0x10600006
    ctx->pc = 0x1ADBB4u;
    {
        const bool branch_taken_0x1adbb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1adbb4) {
            ctx->pc = 0x1ADBD0u;
            goto label_1adbd0;
        }
    }
    ctx->pc = 0x1ADBBCu;
    // 0x1adbbc: 0x8c850044
    ctx->pc = 0x1adbbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1adbc0: 0x3c038000
    ctx->pc = 0x1adbc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1adbc4: 0xa31825
    ctx->pc = 0x1adbc4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1adbc8: 0x10000005
    ctx->pc = 0x1ADBC8u;
    {
        const bool branch_taken_0x1adbc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADBCCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        if (branch_taken_0x1adbc8) {
            ctx->pc = 0x1ADBE0u;
            goto label_1adbe0;
        }
    }
    ctx->pc = 0x1ADBD0u;
label_1adbd0:
    // 0x1adbd0: 0x8c830044
    ctx->pc = 0x1adbd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1adbd4: 0x3187c
    ctx->pc = 0x1adbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x1adbd8: 0x3187e
    ctx->pc = 0x1adbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x1adbdc: 0xac830044
    ctx->pc = 0x1adbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
label_1adbe0:
    // 0x1adbe0: 0x3e00008
    ctx->pc = 0x1ADBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADA40u: goto label_1ada40;
            case 0x1ADA6Cu: goto label_1ada6c;
            case 0x1ADA78u: goto label_1ada78;
            case 0x1ADAA4u: goto label_1adaa4;
            case 0x1ADAACu: goto label_1adaac;
            case 0x1ADAB4u: goto label_1adab4;
            case 0x1ADAC4u: goto label_1adac4;
            case 0x1ADBD0u: goto label_1adbd0;
            case 0x1ADBE0u: goto label_1adbe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADBE8u;
}
