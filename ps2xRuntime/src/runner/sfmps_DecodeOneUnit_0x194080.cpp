#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_DecodeOneUnit
// Address: 0x194080 - 0x194208
void sfmps_DecodeOneUnit_0x194080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_DecodeOneUnit");


    ctx->pc = 0x194080u;

    // 0x194080: 0x27bdff80
    ctx->pc = 0x194080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x194084: 0xffb40050
    ctx->pc = 0x194084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x194088: 0xffb50060
    ctx->pc = 0x194088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x19408c: 0xe0a02d
    ctx->pc = 0x19408cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194090: 0xffb30040
    ctx->pc = 0x194090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x194094: 0xa82d
    ctx->pc = 0x194094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194098: 0xffb20030
    ctx->pc = 0x194098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19409c: 0xa0982d
    ctx->pc = 0x19409cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940a0: 0xffb00010
    ctx->pc = 0x1940a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1940a4: 0xc0902d
    ctx->pc = 0x1940a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940a8: 0xffbf0070
    ctx->pc = 0x1940a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1940ac: 0x80802d
    ctx->pc = 0x1940acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940b0: 0xffb10020
    ctx->pc = 0x1940b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1940b4: 0xae800000
    ctx->pc = 0x1940b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1940b8: 0xc065328
    ctx->pc = 0x1940B8u;
    SET_GPR_U32(ctx, 31, 0x1940C0u);
    ctx->pc = 0x1940BCu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 12384)));
    ctx->pc = 0x194CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_ChkSupply_0x194ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940C0u; }
        else if (ctx->pc != 0x1940C0u) { ctx->pc = 0x1940C0u; }
    }
    if (ctx->pc != 0x1940C0u) { return; }
    ctx->pc = 0x1940C0u;
    // 0x1940c0: 0x14400003
    ctx->pc = 0x1940C0u;
    {
        const bool branch_taken_0x1940c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1940C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1940c0) {
            ctx->pc = 0x1940D0u;
            goto label_1940d0;
        }
    }
    ctx->pc = 0x1940C8u;
    // 0x1940c8: 0x10000046
    ctx->pc = 0x1940C8u;
    {
        const bool branch_taken_0x1940c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1940CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1940c8) {
            ctx->pc = 0x1941E4u;
            goto label_1941e4;
        }
    }
    ctx->pc = 0x1940D0u;
label_1940d0:
    // 0x1940d0: 0x260282d
    ctx->pc = 0x1940d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940d4: 0x240302d
    ctx->pc = 0x1940d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940d8: 0x3a0382d
    ctx->pc = 0x1940d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1940dc: 0xc060228
    ctx->pc = 0x1940DCu;
    SET_GPR_U32(ctx, 31, 0x1940E4u);
    ctx->pc = 0x1940E0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x1808A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_DecHd_0x1808a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940E4u; }
        else if (ctx->pc != 0x1940E4u) { ctx->pc = 0x1940E4u; }
    }
    if (ctx->pc != 0x1940E4u) { return; }
    ctx->pc = 0x1940E4u;
    // 0x1940e4: 0x10400005
    ctx->pc = 0x1940E4u;
    {
        const bool branch_taken_0x1940e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1940E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1940e4) {
            ctx->pc = 0x1940FCu;
            goto label_1940fc;
        }
    }
    ctx->pc = 0x1940ECu;
    // 0x1940ec: 0x3c05ff00
    ctx->pc = 0x1940ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1940f0: 0xc064ea0
    ctx->pc = 0x1940F0u;
    SET_GPR_U32(ctx, 31, 0x1940F8u);
    ctx->pc = 0x1940F4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3331));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1940F8u; }
        else if (ctx->pc != 0x1940F8u) { ctx->pc = 0x1940F8u; }
    }
    if (ctx->pc != 0x1940F8u) { return; }
    ctx->pc = 0x1940F8u;
    // 0x1940f8: 0x40a82d
    ctx->pc = 0x1940f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1940fc:
    // 0x1940fc: 0x8fa30004
    ctx->pc = 0x1940fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x194100: 0x3c020002
    ctx->pc = 0x194100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x194104: 0x621024
    ctx->pc = 0x194104u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194108: 0x10400006
    ctx->pc = 0x194108u;
    {
        const bool branch_taken_0x194108 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19410Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194108) {
            ctx->pc = 0x194124u;
            goto label_194124;
        }
    }
    ctx->pc = 0x194110u;
    // 0x194110: 0x200202d
    ctx->pc = 0x194110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194114: 0x260302d
    ctx->pc = 0x194114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194118: 0xc065490
    ctx->pc = 0x194118u;
    SET_GPR_U32(ctx, 31, 0x194120u);
    ctx->pc = 0x19411Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_SetMpsRaw_0x195240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194120u; }
        else if (ctx->pc != 0x194120u) { ctx->pc = 0x194120u; }
    }
    if (ctx->pc != 0x194120u) { return; }
    ctx->pc = 0x194120u;
    // 0x194120: 0x8fa30004
    ctx->pc = 0x194120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_194124:
    // 0x194124: 0x3c020008
    ctx->pc = 0x194124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x194128: 0x14620010
    ctx->pc = 0x194128u;
    {
        const bool branch_taken_0x194128 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x19412Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194128) {
            ctx->pc = 0x19416Cu;
            goto label_19416c;
        }
    }
    ctx->pc = 0x194130u;
    // 0x194130: 0xc064a7c
    ctx->pc = 0x194130u;
    SET_GPR_U32(ctx, 31, 0x194138u);
    ctx->pc = 0x194134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1929F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFCON_IsEndcodeSkip_0x1929f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194138u; }
        else if (ctx->pc != 0x194138u) { ctx->pc = 0x194138u; }
    }
    if (ctx->pc != 0x194138u) { return; }
    ctx->pc = 0x194138u;
    // 0x194138: 0x10400005
    ctx->pc = 0x194138u;
    {
        const bool branch_taken_0x194138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19413Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x194138) {
            ctx->pc = 0x194150u;
            goto label_194150;
        }
    }
    ctx->pc = 0x194140u;
    // 0x194140: 0xc065322
    ctx->pc = 0x194140u;
    SET_GPR_U32(ctx, 31, 0x194148u);
    ctx->pc = 0x194144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194C88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_Concat_0x194c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194148u; }
        else if (ctx->pc != 0x194148u) { ctx->pc = 0x194148u; }
    }
    if (ctx->pc != 0x194148u) { return; }
    ctx->pc = 0x194148u;
    // 0x194148: 0x10000024
    ctx->pc = 0x194148u;
    {
        const bool branch_taken_0x194148 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19414Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x194148) {
            ctx->pc = 0x1941DCu;
            goto label_1941dc;
        }
    }
    ctx->pc = 0x194150u;
label_194150:
    // 0x194150: 0x14710006
    ctx->pc = 0x194150u;
    {
        const bool branch_taken_0x194150 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 17));
        if (branch_taken_0x194150) {
            ctx->pc = 0x19416Cu;
            goto label_19416c;
        }
    }
    ctx->pc = 0x194158u;
    // 0x194158: 0xc064a84
    ctx->pc = 0x194158u;
    SET_GPR_U32(ctx, 31, 0x194160u);
    ctx->pc = 0x19415Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFCON_IsSystemEndcodeSkip_0x192a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194160u; }
        else if (ctx->pc != 0x194160u) { ctx->pc = 0x194160u; }
    }
    if (ctx->pc != 0x194160u) { return; }
    ctx->pc = 0x194160u;
    // 0x194160: 0x1440001e
    ctx->pc = 0x194160u;
    {
        const bool branch_taken_0x194160 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194164u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x194160) {
            ctx->pc = 0x1941DCu;
            goto label_1941dc;
        }
    }
    ctx->pc = 0x194168u;
    // 0x194168: 0x8fa30004
    ctx->pc = 0x194168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_19416c:
    // 0x19416c: 0x14600008
    ctx->pc = 0x19416Cu;
    {
        const bool branch_taken_0x19416c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x194170u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
        if (branch_taken_0x19416c) {
            ctx->pc = 0x194190u;
            goto label_194190;
        }
    }
    ctx->pc = 0x194174u;
    // 0x194174: 0x200202d
    ctx->pc = 0x194174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194178: 0x260282d
    ctx->pc = 0x194178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19417c: 0x240302d
    ctx->pc = 0x19417cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194180: 0xc065082
    ctx->pc = 0x194180u;
    SET_GPR_U32(ctx, 31, 0x194188u);
    ctx->pc = 0x194184u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x194208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_SkipNext_0x194208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194188u; }
        else if (ctx->pc != 0x194188u) { ctx->pc = 0x194188u; }
    }
    if (ctx->pc != 0x194188u) { return; }
    ctx->pc = 0x194188u;
    // 0x194188: 0x10000014
    ctx->pc = 0x194188u;
    {
        const bool branch_taken_0x194188 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19418Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x194188) {
            ctx->pc = 0x1941DCu;
            goto label_1941dc;
        }
    }
    ctx->pc = 0x194190u;
label_194190:
    // 0x194190: 0x621024
    ctx->pc = 0x194190u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x194194: 0x54400007
    ctx->pc = 0x194194u;
    {
        const bool branch_taken_0x194194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x194194) {
            ctx->pc = 0x194198u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1941B4u;
            goto label_1941b4;
        }
    }
    ctx->pc = 0x19419Cu;
    // 0x19419c: 0x3c05ff00
    ctx->pc = 0x19419cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1941a0: 0x200202d
    ctx->pc = 0x1941a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941a4: 0xc064ea0
    ctx->pc = 0x1941A4u;
    SET_GPR_U32(ctx, 31, 0x1941ACu);
    ctx->pc = 0x1941A8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3333));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941ACu; }
        else if (ctx->pc != 0x1941ACu) { ctx->pc = 0x1941ACu; }
    }
    if (ctx->pc != 0x1941ACu) { return; }
    ctx->pc = 0x1941ACu;
    // 0x1941ac: 0x1000000c
    ctx->pc = 0x1941ACu;
    {
        const bool branch_taken_0x1941ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1941B0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1941ac) {
            ctx->pc = 0x1941E0u;
            goto label_1941e0;
        }
    }
    ctx->pc = 0x1941B4u;
label_1941b4:
    // 0x1941b4: 0x200202d
    ctx->pc = 0x1941b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1941b8: 0x37a7000c
    ctx->pc = 0x1941b8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 12));
    // 0x1941bc: 0x2453023
    ctx->pc = 0x1941bcu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1941c0: 0xc0650dc
    ctx->pc = 0x1941C0u;
    SET_GPR_U32(ctx, 31, 0x1941C8u);
    ctx->pc = 0x1941C4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->pc = 0x194370u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_CopyPketData_0x194370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1941C8u; }
        else if (ctx->pc != 0x1941C8u) { ctx->pc = 0x1941C8u; }
    }
    if (ctx->pc != 0x1941C8u) { return; }
    ctx->pc = 0x1941C8u;
    // 0x1941c8: 0x8fa3000c
    ctx->pc = 0x1941c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1941cc: 0x10600004
    ctx->pc = 0x1941CCu;
    {
        const bool branch_taken_0x1941cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1941D0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1941cc) {
            ctx->pc = 0x1941E0u;
            goto label_1941e0;
        }
    }
    ctx->pc = 0x1941D4u;
    // 0x1941d4: 0x8fa20000
    ctx->pc = 0x1941d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1941d8: 0x431021
    ctx->pc = 0x1941d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1941dc:
    // 0x1941dc: 0xae820000
    ctx->pc = 0x1941dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1941e0:
    // 0x1941e0: 0x2a0102d
    ctx->pc = 0x1941e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1941e4:
    // 0x1941e4: 0xdfbf0070
    ctx->pc = 0x1941e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1941e8: 0xdfb50060
    ctx->pc = 0x1941e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1941ec: 0xdfb40050
    ctx->pc = 0x1941ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1941f0: 0xdfb30040
    ctx->pc = 0x1941f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1941f4: 0xdfb20030
    ctx->pc = 0x1941f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1941f8: 0xdfb10020
    ctx->pc = 0x1941f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1941fc: 0xdfb00010
    ctx->pc = 0x1941fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194200: 0x3e00008
    ctx->pc = 0x194200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1940D0u: goto label_1940d0;
            case 0x1940FCu: goto label_1940fc;
            case 0x194124u: goto label_194124;
            case 0x194150u: goto label_194150;
            case 0x19416Cu: goto label_19416c;
            case 0x194190u: goto label_194190;
            case 0x1941B4u: goto label_1941b4;
            case 0x1941DCu: goto label_1941dc;
            case 0x1941E0u: goto label_1941e0;
            case 0x1941E4u: goto label_1941e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194208u;
}
