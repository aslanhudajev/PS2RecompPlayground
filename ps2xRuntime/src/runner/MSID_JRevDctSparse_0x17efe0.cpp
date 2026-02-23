#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MSID_JRevDctSparse
// Address: 0x17efe0 - 0x17f1b0
void MSID_JRevDctSparse_0x17efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MSID_JRevDctSparse");


    ctx->pc = 0x17efe0u;

    // 0x17efe0: 0x14a0002e
    ctx->pc = 0x17EFE0u;
    {
        const bool branch_taken_0x17efe0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x17EFE4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17efe0) {
            ctx->pc = 0x17F09Cu;
            goto label_17f09c;
        }
    }
    ctx->pc = 0x17EFE8u;
    // 0x17efe8: 0x84820000
    ctx->pc = 0x17efe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17efec: 0x4430006
    ctx->pc = 0x17EFECu;
    {
        const bool branch_taken_0x17efec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17efec) {
            ctx->pc = 0x17EFF0u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
            ctx->pc = 0x17F008u;
            goto label_17f008;
        }
    }
    ctx->pc = 0x17EFF4u;
    // 0x17eff4: 0x21023
    ctx->pc = 0x17eff4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x17eff8: 0x24420020
    ctx->pc = 0x17eff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x17effc: 0x21182
    ctx->pc = 0x17effcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 6));
    // 0x17f000: 0x10000002
    ctx->pc = 0x17F000u;
    {
        const bool branch_taken_0x17f000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F004u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x17f000) {
            ctx->pc = 0x17F00Cu;
            goto label_17f00c;
        }
    }
    ctx->pc = 0x17F008u;
label_17f008:
    // 0x17f008: 0x21182
    ctx->pc = 0x17f008u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 6));
label_17f00c:
    // 0x17f00c: 0x3043ffff
    ctx->pc = 0x17f00cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x17f010: 0x21400
    ctx->pc = 0x17f010u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x17f014: 0x431025
    ctx->pc = 0x17f014u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f018: 0xac820000
    ctx->pc = 0x17f018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17f01c: 0xac82007c
    ctx->pc = 0x17f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x17f020: 0xac820078
    ctx->pc = 0x17f020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x17f024: 0xac820074
    ctx->pc = 0x17f024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x17f028: 0xac820070
    ctx->pc = 0x17f028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x17f02c: 0xac82006c
    ctx->pc = 0x17f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x17f030: 0xac820068
    ctx->pc = 0x17f030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x17f034: 0xac820064
    ctx->pc = 0x17f034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x17f038: 0xac820060
    ctx->pc = 0x17f038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x17f03c: 0xac82005c
    ctx->pc = 0x17f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x17f040: 0xac820058
    ctx->pc = 0x17f040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x17f044: 0xac820054
    ctx->pc = 0x17f044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x17f048: 0xac820050
    ctx->pc = 0x17f048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x17f04c: 0xac82004c
    ctx->pc = 0x17f04cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x17f050: 0xac820048
    ctx->pc = 0x17f050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x17f054: 0xac820044
    ctx->pc = 0x17f054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x17f058: 0xac820040
    ctx->pc = 0x17f058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x17f05c: 0xac82003c
    ctx->pc = 0x17f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x17f060: 0xac820038
    ctx->pc = 0x17f060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x17f064: 0xac820034
    ctx->pc = 0x17f064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x17f068: 0xac820030
    ctx->pc = 0x17f068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x17f06c: 0xac82002c
    ctx->pc = 0x17f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x17f070: 0xac820028
    ctx->pc = 0x17f070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x17f074: 0xac820024
    ctx->pc = 0x17f074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x17f078: 0xac820020
    ctx->pc = 0x17f078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x17f07c: 0xac82001c
    ctx->pc = 0x17f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x17f080: 0xac820018
    ctx->pc = 0x17f080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x17f084: 0xac820014
    ctx->pc = 0x17f084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x17f088: 0xac820010
    ctx->pc = 0x17f088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x17f08c: 0xac82000c
    ctx->pc = 0x17f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x17f090: 0xac820008
    ctx->pc = 0x17f090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x17f094: 0x3e00008
    ctx->pc = 0x17F094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F098u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F008u: goto label_17f008;
            case 0x17F00Cu: goto label_17f00c;
            case 0x17F09Cu: goto label_17f09c;
            case 0x17F0C0u: goto label_17f0c0;
            case 0x17F0E0u: goto label_17f0e0;
            case 0x17F0F4u: goto label_17f0f4;
            case 0x17F118u: goto label_17f118;
            case 0x17F12Cu: goto label_17f12c;
            case 0x17F150u: goto label_17f150;
            case 0x17F164u: goto label_17f164;
            case 0x17F188u: goto label_17f188;
            case 0x17F19Cu: goto label_17f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F09Cu;
label_17f09c:
    // 0x17f09c: 0x51040
    ctx->pc = 0x17f09cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x17f0a0: 0x3c03002e
    ctx->pc = 0x17f0a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x17f0a4: 0x461021
    ctx->pc = 0x17f0a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17f0a8: 0x24632000
    ctx->pc = 0x17f0a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8192));
    // 0x17f0ac: 0x521c0
    ctx->pc = 0x17f0acu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 7));
    // 0x17f0b0: 0x832021
    ctx->pc = 0x17f0b0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17f0b4: 0x84470000
    ctx->pc = 0x17f0b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f0b8: 0x24c60080
    ctx->pc = 0x17f0b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 128));
    // 0x17f0bc: 0x24030010
    ctx->pc = 0x17f0bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
label_17f0c0:
    // 0x17f0c0: 0x84820000
    ctx->pc = 0x17f0c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f0c4: 0x471018
    ctx->pc = 0x17f0c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x17f0c8: 0x4400005
    ctx->pc = 0x17F0C8u;
    {
        const bool branch_taken_0x17f0c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17F0CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x17f0c8) {
            ctx->pc = 0x17F0E0u;
            goto label_17f0e0;
        }
    }
    ctx->pc = 0x17F0D0u;
    // 0x17f0d0: 0x24420400
    ctx->pc = 0x17f0d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x17f0d4: 0x24c6fffe
    ctx->pc = 0x17f0d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x17f0d8: 0x10000006
    ctx->pc = 0x17F0D8u;
    {
        const bool branch_taken_0x17f0d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F0DCu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
        if (branch_taken_0x17f0d8) {
            ctx->pc = 0x17F0F4u;
            goto label_17f0f4;
        }
    }
    ctx->pc = 0x17F0E0u;
label_17f0e0:
    // 0x17f0e0: 0x21023
    ctx->pc = 0x17f0e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x17f0e4: 0x24c6fffe
    ctx->pc = 0x17f0e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x17f0e8: 0x24420400
    ctx->pc = 0x17f0e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x17f0ec: 0x212c2
    ctx->pc = 0x17f0ecu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
    // 0x17f0f0: 0x21023
    ctx->pc = 0x17f0f0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_17f0f4:
    // 0x17f0f4: 0xa4c20000
    ctx->pc = 0x17f0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f0f8: 0x84820000
    ctx->pc = 0x17f0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f0fc: 0x471018
    ctx->pc = 0x17f0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x17f100: 0x4400005
    ctx->pc = 0x17F100u;
    {
        const bool branch_taken_0x17f100 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17F104u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x17f100) {
            ctx->pc = 0x17F118u;
            goto label_17f118;
        }
    }
    ctx->pc = 0x17F108u;
    // 0x17f108: 0x24420400
    ctx->pc = 0x17f108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x17f10c: 0x24c6fffe
    ctx->pc = 0x17f10cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x17f110: 0x10000006
    ctx->pc = 0x17F110u;
    {
        const bool branch_taken_0x17f110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F114u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
        if (branch_taken_0x17f110) {
            ctx->pc = 0x17F12Cu;
            goto label_17f12c;
        }
    }
    ctx->pc = 0x17F118u;
label_17f118:
    // 0x17f118: 0x21023
    ctx->pc = 0x17f118u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x17f11c: 0x24c6fffe
    ctx->pc = 0x17f11cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x17f120: 0x24420400
    ctx->pc = 0x17f120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x17f124: 0x212c2
    ctx->pc = 0x17f124u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
    // 0x17f128: 0x21023
    ctx->pc = 0x17f128u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_17f12c:
    // 0x17f12c: 0xa4c20000
    ctx->pc = 0x17f12cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f130: 0x84820000
    ctx->pc = 0x17f130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f134: 0x471018
    ctx->pc = 0x17f134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x17f138: 0x4400005
    ctx->pc = 0x17F138u;
    {
        const bool branch_taken_0x17f138 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17F13Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x17f138) {
            ctx->pc = 0x17F150u;
            goto label_17f150;
        }
    }
    ctx->pc = 0x17F140u;
    // 0x17f140: 0x24420400
    ctx->pc = 0x17f140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x17f144: 0x24c6fffe
    ctx->pc = 0x17f144u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x17f148: 0x10000006
    ctx->pc = 0x17F148u;
    {
        const bool branch_taken_0x17f148 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F14Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
        if (branch_taken_0x17f148) {
            ctx->pc = 0x17F164u;
            goto label_17f164;
        }
    }
    ctx->pc = 0x17F150u;
label_17f150:
    // 0x17f150: 0x21023
    ctx->pc = 0x17f150u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x17f154: 0x24c6fffe
    ctx->pc = 0x17f154u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x17f158: 0x24420400
    ctx->pc = 0x17f158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x17f15c: 0x212c2
    ctx->pc = 0x17f15cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
    // 0x17f160: 0x21023
    ctx->pc = 0x17f160u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_17f164:
    // 0x17f164: 0xa4c20000
    ctx->pc = 0x17f164u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f168: 0x84820000
    ctx->pc = 0x17f168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f16c: 0x471018
    ctx->pc = 0x17f16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x17f170: 0x4400005
    ctx->pc = 0x17F170u;
    {
        const bool branch_taken_0x17f170 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17F174u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x17f170) {
            ctx->pc = 0x17F188u;
            goto label_17f188;
        }
    }
    ctx->pc = 0x17F178u;
    // 0x17f178: 0x24420400
    ctx->pc = 0x17f178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x17f17c: 0x24c6fffe
    ctx->pc = 0x17f17cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x17f180: 0x10000006
    ctx->pc = 0x17F180u;
    {
        const bool branch_taken_0x17f180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17F184u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
        if (branch_taken_0x17f180) {
            ctx->pc = 0x17F19Cu;
            goto label_17f19c;
        }
    }
    ctx->pc = 0x17F188u;
label_17f188:
    // 0x17f188: 0x21023
    ctx->pc = 0x17f188u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x17f18c: 0x24c6fffe
    ctx->pc = 0x17f18cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x17f190: 0x24420400
    ctx->pc = 0x17f190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x17f194: 0x212c2
    ctx->pc = 0x17f194u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
    // 0x17f198: 0x21023
    ctx->pc = 0x17f198u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_17f19c:
    // 0x17f19c: 0x2463ffff
    ctx->pc = 0x17f19cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17f1a0: 0x1460ffc7
    ctx->pc = 0x17F1A0u;
    {
        const bool branch_taken_0x17f1a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17F1A4u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x17f1a0) {
            ctx->pc = 0x17F0C0u;
            goto label_17f0c0;
        }
    }
    ctx->pc = 0x17F1A8u;
    // 0x17f1a8: 0x3e00008
    ctx->pc = 0x17F1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F008u: goto label_17f008;
            case 0x17F00Cu: goto label_17f00c;
            case 0x17F09Cu: goto label_17f09c;
            case 0x17F0C0u: goto label_17f0c0;
            case 0x17F0E0u: goto label_17f0e0;
            case 0x17F0F4u: goto label_17f0f4;
            case 0x17F118u: goto label_17f118;
            case 0x17F12Cu: goto label_17f12c;
            case 0x17F150u: goto label_17f150;
            case 0x17F164u: goto label_17f164;
            case 0x17F188u: goto label_17f188;
            case 0x17F19Cu: goto label_17f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F1B0u;
}
