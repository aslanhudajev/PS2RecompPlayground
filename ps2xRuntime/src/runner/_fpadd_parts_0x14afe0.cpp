#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _fpadd_parts
// Address: 0x14afe0 - 0x14b220
void _fpadd_parts_0x14afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_fpadd_parts");


    ctx->pc = 0x14afe0u;

    // 0x14afe0: 0x80402d
    ctx->pc = 0x14afe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afe4: 0x8d040000
    ctx->pc = 0x14afe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14afe8: 0x2c820002
    ctx->pc = 0x14afe8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x14afec: 0x50400003
    ctx->pc = 0x14AFECu;
    {
        const bool branch_taken_0x14afec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14afec) {
            ctx->pc = 0x14AFF0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x14AFFCu;
            goto label_14affc;
        }
    }
    ctx->pc = 0x14AFF4u;
label_14aff4:
    // 0x14aff4: 0x3e00008
    ctx->pc = 0x14AFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AFF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AFF4u: goto label_14aff4;
            case 0x14AFFCu: goto label_14affc;
            case 0x14B008u: goto label_14b008;
            case 0x14B010u: goto label_14b010;
            case 0x14B038u: goto label_14b038;
            case 0x14B07Cu: goto label_14b07c;
            case 0x14B0C0u: goto label_14b0c0;
            case 0x14B0E4u: goto label_14b0e4;
            case 0x14B0ECu: goto label_14b0ec;
            case 0x14B0F8u: goto label_14b0f8;
            case 0x14B11Cu: goto label_14b11c;
            case 0x14B134u: goto label_14b134;
            case 0x14B140u: goto label_14b140;
            case 0x14B154u: goto label_14b154;
            case 0x14B16Cu: goto label_14b16c;
            case 0x14B17Cu: goto label_14b17c;
            case 0x14B1A8u: goto label_14b1a8;
            case 0x14B1D4u: goto label_14b1d4;
            case 0x14B1E4u: goto label_14b1e4;
            case 0x14B218u: goto label_14b218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14AFFCu;
label_14affc:
    // 0x14affc: 0x2c620002
    ctx->pc = 0x14affcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x14b000: 0x10400003
    ctx->pc = 0x14B000u;
    {
        const bool branch_taken_0x14b000 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B004u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x14b000) {
            ctx->pc = 0x14B010u;
            goto label_14b010;
        }
    }
    ctx->pc = 0x14B008u;
label_14b008:
    // 0x14b008: 0x3e00008
    ctx->pc = 0x14B008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B00Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AFF4u: goto label_14aff4;
            case 0x14AFFCu: goto label_14affc;
            case 0x14B008u: goto label_14b008;
            case 0x14B010u: goto label_14b010;
            case 0x14B038u: goto label_14b038;
            case 0x14B07Cu: goto label_14b07c;
            case 0x14B0C0u: goto label_14b0c0;
            case 0x14B0E4u: goto label_14b0e4;
            case 0x14B0ECu: goto label_14b0ec;
            case 0x14B0F8u: goto label_14b0f8;
            case 0x14B11Cu: goto label_14b11c;
            case 0x14B134u: goto label_14b134;
            case 0x14B140u: goto label_14b140;
            case 0x14B154u: goto label_14b154;
            case 0x14B16Cu: goto label_14b16c;
            case 0x14B17Cu: goto label_14b17c;
            case 0x14B1A8u: goto label_14b1a8;
            case 0x14B1D4u: goto label_14b1d4;
            case 0x14B1E4u: goto label_14b1e4;
            case 0x14B218u: goto label_14b218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B010u;
label_14b010:
    // 0x14b010: 0x14400009
    ctx->pc = 0x14B010u;
    {
        const bool branch_taken_0x14b010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B014u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x14b010) {
            ctx->pc = 0x14B038u;
            goto label_14b038;
        }
    }
    ctx->pc = 0x14B018u;
    // 0x14b018: 0x1440fff6
    ctx->pc = 0x14B018u;
    {
        const bool branch_taken_0x14b018 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14b018) {
            ctx->pc = 0x14AFF4u;
            goto label_14aff4;
        }
    }
    ctx->pc = 0x14B020u;
    // 0x14b020: 0x8ca30004
    ctx->pc = 0x14b020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b024: 0x8d020004
    ctx->pc = 0x14b024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14b028: 0x1043fff2
    ctx->pc = 0x14B028u;
    {
        const bool branch_taken_0x14b028 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x14B02Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
        if (branch_taken_0x14b028) {
            ctx->pc = 0x14AFF4u;
            goto label_14aff4;
        }
    }
    ctx->pc = 0x14B030u;
    // 0x14b030: 0x3e00008
    ctx->pc = 0x14B030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B034u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26856));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AFF4u: goto label_14aff4;
            case 0x14AFFCu: goto label_14affc;
            case 0x14B008u: goto label_14b008;
            case 0x14B010u: goto label_14b010;
            case 0x14B038u: goto label_14b038;
            case 0x14B07Cu: goto label_14b07c;
            case 0x14B0C0u: goto label_14b0c0;
            case 0x14B0E4u: goto label_14b0e4;
            case 0x14B0ECu: goto label_14b0ec;
            case 0x14B0F8u: goto label_14b0f8;
            case 0x14B11Cu: goto label_14b11c;
            case 0x14B134u: goto label_14b134;
            case 0x14B140u: goto label_14b140;
            case 0x14B154u: goto label_14b154;
            case 0x14B16Cu: goto label_14b16c;
            case 0x14B17Cu: goto label_14b17c;
            case 0x14B1A8u: goto label_14b1a8;
            case 0x14B1D4u: goto label_14b1d4;
            case 0x14B1E4u: goto label_14b1e4;
            case 0x14B218u: goto label_14b218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B038u;
label_14b038:
    // 0x14b038: 0x1040fff3
    ctx->pc = 0x14B038u;
    {
        const bool branch_taken_0x14b038 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B03Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x14b038) {
            ctx->pc = 0x14B008u;
            goto label_14b008;
        }
    }
    ctx->pc = 0x14B040u;
    // 0x14b040: 0x1440000e
    ctx->pc = 0x14B040u;
    {
        const bool branch_taken_0x14b040 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B044u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x14b040) {
            ctx->pc = 0x14B07Cu;
            goto label_14b07c;
        }
    }
    ctx->pc = 0x14B048u;
    // 0x14b048: 0x1440ffea
    ctx->pc = 0x14B048u;
    {
        const bool branch_taken_0x14b048 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B04Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b048) {
            ctx->pc = 0x14AFF4u;
            goto label_14aff4;
        }
    }
    ctx->pc = 0x14B050u;
    // 0x14b050: 0xdd040000
    ctx->pc = 0x14b050u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14b054: 0xfcc40000
    ctx->pc = 0x14b054u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x14b058: 0xdd030008
    ctx->pc = 0x14b058u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x14b05c: 0xfcc30008
    ctx->pc = 0x14b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x14b060: 0xdd040010
    ctx->pc = 0x14b060u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x14b064: 0xfcc40010
    ctx->pc = 0x14b064u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x14b068: 0x8d030004
    ctx->pc = 0x14b068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14b06c: 0x8ca40004
    ctx->pc = 0x14b06cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b070: 0x641824
    ctx->pc = 0x14b070u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b074: 0x3e00008
    ctx->pc = 0x14B074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B078u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AFF4u: goto label_14aff4;
            case 0x14AFFCu: goto label_14affc;
            case 0x14B008u: goto label_14b008;
            case 0x14B010u: goto label_14b010;
            case 0x14B038u: goto label_14b038;
            case 0x14B07Cu: goto label_14b07c;
            case 0x14B0C0u: goto label_14b0c0;
            case 0x14B0E4u: goto label_14b0e4;
            case 0x14B0ECu: goto label_14b0ec;
            case 0x14B0F8u: goto label_14b0f8;
            case 0x14B11Cu: goto label_14b11c;
            case 0x14B134u: goto label_14b134;
            case 0x14B140u: goto label_14b140;
            case 0x14B154u: goto label_14b154;
            case 0x14B16Cu: goto label_14b16c;
            case 0x14B17Cu: goto label_14b17c;
            case 0x14B1A8u: goto label_14b1a8;
            case 0x14B1D4u: goto label_14b1d4;
            case 0x14B1E4u: goto label_14b1e4;
            case 0x14B218u: goto label_14b218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B07Cu;
label_14b07c:
    // 0x14b07c: 0x1040ffe2
    ctx->pc = 0x14B07Cu;
    {
        const bool branch_taken_0x14b07c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B080u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x14b07c) {
            ctx->pc = 0x14B008u;
            goto label_14b008;
        }
    }
    ctx->pc = 0x14B084u;
    // 0x14b084: 0x8d070008
    ctx->pc = 0x14b084u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x14b088: 0x8ca90008
    ctx->pc = 0x14b088u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14b08c: 0xdd0b0010
    ctx->pc = 0x14b08cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x14b090: 0xe91823
    ctx->pc = 0x14b090u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x14b094: 0x43102a
    ctx->pc = 0x14b094u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x14b098: 0x32023
    ctx->pc = 0x14b098u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x14b09c: 0x82180a
    ctx->pc = 0x14b09cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x14b0a0: 0x28630040
    ctx->pc = 0x14b0a0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 64));
    // 0x14b0a4: 0x1060001d
    ctx->pc = 0x14B0A4u;
    {
        const bool branch_taken_0x14b0a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B0A8u;
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        if (branch_taken_0x14b0a4) {
            ctx->pc = 0x14B11Cu;
            goto label_14b11c;
        }
    }
    ctx->pc = 0x14B0ACu;
    // 0x14b0ac: 0x127102a
    ctx->pc = 0x14b0acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 7)));
    // 0x14b0b0: 0x1040000c
    ctx->pc = 0x14B0B0u;
    {
        const bool branch_taken_0x14b0b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B0B4u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4)));
        if (branch_taken_0x14b0b0) {
            ctx->pc = 0x14B0E4u;
            goto label_14b0e4;
        }
    }
    ctx->pc = 0x14B0B8u;
    // 0x14b0b8: 0x8ca50004
    ctx->pc = 0x14b0b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b0bc: 0x0
    ctx->pc = 0x14b0bcu;
    // NOP
label_14b0c0:
    // 0x14b0c0: 0xa107a
    ctx->pc = 0x14b0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x14b0c4: 0x25290001
    ctx->pc = 0x14b0c4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x14b0c8: 0x31430001
    ctx->pc = 0x14b0c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 10), 1));
    // 0x14b0cc: 0x127202a
    ctx->pc = 0x14b0ccu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 7)));
    // 0x14b0d0: 0x625025
    ctx->pc = 0x14b0d0u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14b0d4: 0x1480fffa
    ctx->pc = 0x14B0D4u;
    {
        const bool branch_taken_0x14b0d4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x14b0d4) {
            ctx->pc = 0x14B0C0u;
            goto label_14b0c0;
        }
    }
    ctx->pc = 0x14B0DCu;
    // 0x14b0dc: 0x10000003
    ctx->pc = 0x14B0DCu;
    {
        const bool branch_taken_0x14b0dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B0E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 9)));
        if (branch_taken_0x14b0dc) {
            ctx->pc = 0x14B0ECu;
            goto label_14b0ec;
        }
    }
    ctx->pc = 0x14B0E4u;
label_14b0e4:
    // 0x14b0e4: 0x8ca50004
    ctx->pc = 0x14b0e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b0e8: 0xe9102a
    ctx->pc = 0x14b0e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 9)));
label_14b0ec:
    // 0x14b0ec: 0x10400014
    ctx->pc = 0x14B0ECu;
    {
        const bool branch_taken_0x14b0ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14b0ec) {
            ctx->pc = 0x14B140u;
            goto label_14b140;
        }
    }
    ctx->pc = 0x14B0F4u;
    // 0x14b0f4: 0x1273823
    ctx->pc = 0x14b0f4u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_14b0f8:
    // 0x14b0f8: 0xb187a
    ctx->pc = 0x14b0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x14b0fc: 0x31620001
    ctx->pc = 0x14b0fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 11), 1));
    // 0x14b100: 0x435825
    ctx->pc = 0x14b100u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b104: 0x24e7ffff
    ctx->pc = 0x14b104u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x14b108: 0x0
    ctx->pc = 0x14b108u;
    // NOP
    // 0x14b10c: 0x14e0fffa
    ctx->pc = 0x14B10Cu;
    {
        const bool branch_taken_0x14b10c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x14b10c) {
            ctx->pc = 0x14B0F8u;
            goto label_14b0f8;
        }
    }
    ctx->pc = 0x14B114u;
    // 0x14b114: 0x1000000a
    ctx->pc = 0x14B114u;
    {
        const bool branch_taken_0x14b114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B118u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b114) {
            ctx->pc = 0x14B140u;
            goto label_14b140;
        }
    }
    ctx->pc = 0x14B11Cu;
label_14b11c:
    // 0x14b11c: 0x127102a
    ctx->pc = 0x14b11cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 7)));
    // 0x14b120: 0x10400004
    ctx->pc = 0x14B120u;
    {
        const bool branch_taken_0x14b120 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B124u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4)));
        if (branch_taken_0x14b120) {
            ctx->pc = 0x14B134u;
            goto label_14b134;
        }
    }
    ctx->pc = 0x14B128u;
    // 0x14b128: 0x502d
    ctx->pc = 0x14b128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b12c: 0x10000004
    ctx->pc = 0x14B12Cu;
    {
        const bool branch_taken_0x14b12c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B130u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x14b12c) {
            ctx->pc = 0x14B140u;
            goto label_14b140;
        }
    }
    ctx->pc = 0x14B134u;
label_14b134:
    // 0x14b134: 0x120382d
    ctx->pc = 0x14b134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b138: 0x8ca50004
    ctx->pc = 0x14b138u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b13c: 0x582d
    ctx->pc = 0x14b13cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b140:
    // 0x14b140: 0x11050024
    ctx->pc = 0x14B140u;
    {
        const bool branch_taken_0x14b140 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 5));
        ctx->pc = 0x14B144u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        if (branch_taken_0x14b140) {
            ctx->pc = 0x14B1D4u;
            goto label_14b1d4;
        }
    }
    ctx->pc = 0x14B148u;
    // 0x14b148: 0x15000002
    ctx->pc = 0x14B148u;
    {
        const bool branch_taken_0x14b148 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B14Cu;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        if (branch_taken_0x14b148) {
            ctx->pc = 0x14B154u;
            goto label_14b154;
        }
    }
    ctx->pc = 0x14B150u;
    // 0x14b150: 0x16a102f
    ctx->pc = 0x14b150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_14b154:
    // 0x14b154: 0x4400005
    ctx->pc = 0x14B154u;
    {
        const bool branch_taken_0x14b154 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14B158u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        if (branch_taken_0x14b154) {
            ctx->pc = 0x14B16Cu;
            goto label_14b16c;
        }
    }
    ctx->pc = 0x14B15Cu;
    // 0x14b15c: 0xacc70008
    ctx->pc = 0x14b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x14b160: 0xfcc20010
    ctx->pc = 0x14b160u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x14b164: 0x10000005
    ctx->pc = 0x14B164u;
    {
        const bool branch_taken_0x14b164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B168u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x14b164) {
            ctx->pc = 0x14B17Cu;
            goto label_14b17c;
        }
    }
    ctx->pc = 0x14B16Cu;
label_14b16c:
    // 0x14b16c: 0xacc70008
    ctx->pc = 0x14b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x14b170: 0x24020001
    ctx->pc = 0x14b170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b174: 0xfcc30010
    ctx->pc = 0x14b174u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x14b178: 0xacc20004
    ctx->pc = 0x14b178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_14b17c:
    // 0x14b17c: 0xdcc50010
    ctx->pc = 0x14b17cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x14b180: 0x2402ffff
    ctx->pc = 0x14b180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b184: 0x21178
    ctx->pc = 0x14b184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x14b188: 0x2113a
    ctx->pc = 0x14b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x14b18c: 0x64a3ffff
    ctx->pc = 0x14b18cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)4294967295);
    // 0x14b190: 0x43102b
    ctx->pc = 0x14b190u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b194: 0x14400013
    ctx->pc = 0x14B194u;
    {
        const bool branch_taken_0x14b194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B198u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b194) {
            ctx->pc = 0x14B1E4u;
            goto label_14b1e4;
        }
    }
    ctx->pc = 0x14B19Cu;
    // 0x14b19c: 0x2405ffff
    ctx->pc = 0x14b19cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b1a0: 0x52978
    ctx->pc = 0x14b1a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x14b1a4: 0x5293a
    ctx->pc = 0x14b1a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_14b1a8:
    // 0x14b1a8: 0x8cc20008
    ctx->pc = 0x14b1a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x14b1ac: 0x72078
    ctx->pc = 0x14b1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x14b1b0: 0x6483ffff
    ctx->pc = 0x14b1b0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)4294967295);
    // 0x14b1b4: 0xfcc40010
    ctx->pc = 0x14b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x14b1b8: 0x2442ffff
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14b1bc: 0xa3182b
    ctx->pc = 0x14b1bcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x14b1c0: 0xacc20008
    ctx->pc = 0x14b1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x14b1c4: 0x1060fff8
    ctx->pc = 0x14B1C4u;
    {
        const bool branch_taken_0x14b1c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B1C8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b1c4) {
            ctx->pc = 0x14B1A8u;
            goto label_14b1a8;
        }
    }
    ctx->pc = 0x14B1CCu;
    // 0x14b1cc: 0x10000005
    ctx->pc = 0x14B1CCu;
    {
        const bool branch_taken_0x14b1cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B1D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b1cc) {
            ctx->pc = 0x14B1E4u;
            goto label_14b1e4;
        }
    }
    ctx->pc = 0x14B1D4u;
label_14b1d4:
    // 0x14b1d4: 0xacc80004
    ctx->pc = 0x14b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x14b1d8: 0xacc70008
    ctx->pc = 0x14b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x14b1dc: 0x40282d
    ctx->pc = 0x14b1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1e0: 0xfcc20010
    ctx->pc = 0x14b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_14b1e4:
    // 0x14b1e4: 0x24030003
    ctx->pc = 0x14b1e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x14b1e8: 0x2402ffff
    ctx->pc = 0x14b1e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b1ec: 0x210fa
    ctx->pc = 0x14b1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x14b1f0: 0x45102b
    ctx->pc = 0x14b1f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14b1f4: 0x10400008
    ctx->pc = 0x14B1F4u;
    {
        const bool branch_taken_0x14b1f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B1F8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x14b1f4) {
            ctx->pc = 0x14B218u;
            goto label_14b218;
        }
    }
    ctx->pc = 0x14B1FCu;
    // 0x14b1fc: 0x8cc20008
    ctx->pc = 0x14b1fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x14b200: 0x5207a
    ctx->pc = 0x14b200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x14b204: 0x30a30001
    ctx->pc = 0x14b204u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x14b208: 0x641825
    ctx->pc = 0x14b208u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b20c: 0x24420001
    ctx->pc = 0x14b20cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b210: 0xfcc30010
    ctx->pc = 0x14b210u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x14b214: 0xacc20008
    ctx->pc = 0x14b214u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_14b218:
    // 0x14b218: 0x3e00008
    ctx->pc = 0x14B218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B21Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AFF4u: goto label_14aff4;
            case 0x14AFFCu: goto label_14affc;
            case 0x14B008u: goto label_14b008;
            case 0x14B010u: goto label_14b010;
            case 0x14B038u: goto label_14b038;
            case 0x14B07Cu: goto label_14b07c;
            case 0x14B0C0u: goto label_14b0c0;
            case 0x14B0E4u: goto label_14b0e4;
            case 0x14B0ECu: goto label_14b0ec;
            case 0x14B0F8u: goto label_14b0f8;
            case 0x14B11Cu: goto label_14b11c;
            case 0x14B134u: goto label_14b134;
            case 0x14B140u: goto label_14b140;
            case 0x14B154u: goto label_14b154;
            case 0x14B16Cu: goto label_14b16c;
            case 0x14B17Cu: goto label_14b17c;
            case 0x14B1A8u: goto label_14b1a8;
            case 0x14B1D4u: goto label_14b1d4;
            case 0x14B1E4u: goto label_14b1e4;
            case 0x14B218u: goto label_14b218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B220u;
}
