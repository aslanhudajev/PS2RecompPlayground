#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerHasRune
// Address: 0x2767f8 - 0x2768a0
void PlayerHasRune_0x2767f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2767f8u;

    // 0x2767f8: 0x4810004
    ctx->pc = 0x2767F8u;
    {
        const bool branch_taken_0x2767f8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2767FCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2767f8) {
            ctx->pc = 0x27680Cu;
            goto label_27680c;
        }
    }
    ctx->pc = 0x276800u;
    // 0x276800: 0x102d
    ctx->pc = 0x276800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276804: 0x10000002
    ctx->pc = 0x276804u;
    {
        const bool branch_taken_0x276804 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x276808u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x276804) {
            ctx->pc = 0x276810u;
            goto label_276810;
        }
    }
    ctx->pc = 0x27680Cu;
label_27680c:
    // 0x27680c: 0x80102d
    ctx->pc = 0x27680cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_276810:
    // 0x276810: 0x40302d
    ctx->pc = 0x276810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276814: 0x86102a
    ctx->pc = 0x276814u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x276818: 0x14400013
    ctx->pc = 0x276818u;
    {
        const bool branch_taken_0x276818 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27681Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x276818) {
            ctx->pc = 0x276868u;
            goto label_276868;
        }
    }
    ctx->pc = 0x276820u;
    // 0x276820: 0x24092b00
    ctx->pc = 0x276820u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x276824: 0x244b1bc0
    ctx->pc = 0x276824u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276828: 0x240800b4
    ctx->pc = 0x276828u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 180));
    // 0x27682c: 0xc91018
    ctx->pc = 0x27682cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276830:
    // 0x276830: 0x4b1821
    ctx->pc = 0x276830u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x276834: 0x8c6200fc
    ctx->pc = 0x276834u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x276838: 0x10400008
    ctx->pc = 0x276838u;
    {
        const bool branch_taken_0x276838 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27683Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x276838) {
            ctx->pc = 0x27685Cu;
            goto label_27685c;
        }
    }
    ctx->pc = 0x276840u;
    // 0x276840: 0x8c62000c
    ctx->pc = 0x276840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x276844: 0x485018
    ctx->pc = 0x276844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276848: 0x1431021
    ctx->pc = 0x276848u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x27684c: 0x94420cf2
    ctx->pc = 0x27684cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3314)));
    // 0x276850: 0x94631a26
    ctx->pc = 0x276850u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6694)));
    // 0x276854: 0x431025
    ctx->pc = 0x276854u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276858: 0xe23825
    ctx->pc = 0x276858u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_27685c:
    // 0x27685c: 0x86102a
    ctx->pc = 0x27685cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x276860: 0x1040fff3
    ctx->pc = 0x276860u;
    {
        const bool branch_taken_0x276860 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276864u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276860) {
            ctx->pc = 0x276830u;
            goto label_276830;
        }
    }
    ctx->pc = 0x276868u;
label_276868:
    // 0x276868: 0x4a10003
    ctx->pc = 0x276868u;
    {
        const bool branch_taken_0x276868 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x27686Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 14));
        if (branch_taken_0x276868) {
            ctx->pc = 0x276878u;
            goto label_276878;
        }
    }
    ctx->pc = 0x276870u;
    // 0x276870: 0x3e00008
    ctx->pc = 0x276870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276874u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27680Cu: goto label_27680c;
            case 0x276810u: goto label_276810;
            case 0x276830u: goto label_276830;
            case 0x27685Cu: goto label_27685c;
            case 0x276868u: goto label_276868;
            case 0x276878u: goto label_276878;
            case 0x276888u: goto label_276888;
            case 0x276890u: goto label_276890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276878u;
label_276878:
    // 0x276878: 0x54400003
    ctx->pc = 0x276878u;
    {
        const bool branch_taken_0x276878 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x276878) {
            ctx->pc = 0x27687Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x276888u;
            goto label_276888;
        }
    }
    ctx->pc = 0x276880u;
    // 0x276880: 0x10000003
    ctx->pc = 0x276880u;
    {
        const bool branch_taken_0x276880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x276884u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x276880) {
            ctx->pc = 0x276890u;
            goto label_276890;
        }
    }
    ctx->pc = 0x276888u;
label_276888:
    // 0x276888: 0xa21004
    ctx->pc = 0x276888u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x27688c: 0x3045ffff
    ctx->pc = 0x27688cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
label_276890:
    // 0x276890: 0xe51024
    ctx->pc = 0x276890u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x276894: 0x451026
    ctx->pc = 0x276894u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x276898: 0x3e00008
    ctx->pc = 0x276898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27689Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27680Cu: goto label_27680c;
            case 0x276810u: goto label_276810;
            case 0x276830u: goto label_276830;
            case 0x27685Cu: goto label_27685c;
            case 0x276868u: goto label_276868;
            case 0x276878u: goto label_276878;
            case 0x276888u: goto label_276888;
            case 0x276890u: goto label_276890;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2768A0u;
}
