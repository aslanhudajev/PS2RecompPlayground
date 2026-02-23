#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_CopyUsrSj
// Address: 0x194880 - 0x194954
void sfmps_CopyUsrSj_0x194880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_CopyUsrSj");


    ctx->pc = 0x194880u;

label_194880:
    // 0x194880: 0x27bdff60
    ctx->pc = 0x194880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_194884:
    // 0x194884: 0x24020008
    ctx->pc = 0x194884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_194888:
    // 0x194888: 0xffb60080
    ctx->pc = 0x194888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_19488c:
    // 0x19488c: 0xffb50070
    ctx->pc = 0x19488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_194890:
    // 0x194890: 0xa0b02d
    ctx->pc = 0x194890u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194894:
    // 0x194894: 0xffb40060
    ctx->pc = 0x194894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_194898:
    // 0x194898: 0xe0a82d
    ctx->pc = 0x194898u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19489c:
    // 0x19489c: 0xffb10030
    ctx->pc = 0x19489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1948a0:
    // 0x1948a0: 0xffbf0090
    ctx->pc = 0x1948a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1948a4:
    // 0x1948a4: 0x80882d
    ctx->pc = 0x1948a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1948a8:
    // 0x1948a8: 0xffb30050
    ctx->pc = 0x1948a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1948ac:
    // 0x1948ac: 0xffb20040
    ctx->pc = 0x1948acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1948b0:
    // 0x1948b0: 0xffb00020
    ctx->pc = 0x1948b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1948b4:
    // 0x1948b4: 0x8e253710
    ctx->pc = 0x1948b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 14096)));
label_1948b8:
    // 0x1948b8: 0x10a20008
label_1948bc:
    if (ctx->pc == 0x1948BCu) {
        ctx->pc = 0x1948BCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1948C0u;
        goto label_1948c0;
    }
    ctx->pc = 0x1948B8u;
    {
        const bool branch_taken_0x1948b8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x1948BCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1948b8) {
            ctx->pc = 0x1948DCu;
            goto label_1948dc;
        }
    }
    ctx->pc = 0x1948C0u;
label_1948c0:
    // 0x1948c0: 0x220202d
    ctx->pc = 0x1948c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1948c4:
    // 0x1948c4: 0x2c0302d
    ctx->pc = 0x1948c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1948c8:
    // 0x1948c8: 0xc06473a
label_1948cc:
    if (ctx->pc == 0x1948CCu) {
        ctx->pc = 0x1948CCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1948D0u;
        goto label_1948d0;
    }
    ctx->pc = 0x1948C8u;
    SET_GPR_U32(ctx, 31, 0x1948D0u);
    ctx->pc = 0x1948CCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetUoch_0x191ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948D0u; }
        else if (ctx->pc != 0x1948D0u) { ctx->pc = 0x1948D0u; }
    }
    if (ctx->pc != 0x1948D0u) { return; }
    ctx->pc = 0x1948D0u;
label_1948d0:
    // 0x1948d0: 0x8fb00000
    ctx->pc = 0x1948d0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1948d4:
    // 0x1948d4: 0x16000003
label_1948d8:
    if (ctx->pc == 0x1948D8u) {
        ctx->pc = 0x1948D8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1948DCu;
        goto label_1948dc;
    }
    ctx->pc = 0x1948D4u;
    {
        const bool branch_taken_0x1948d4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1948D8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x1948d4) {
            ctx->pc = 0x1948E4u;
            goto label_1948e4;
        }
    }
    ctx->pc = 0x1948DCu;
label_1948dc:
    // 0x1948dc: 0x10000013
label_1948e0:
    if (ctx->pc == 0x1948E0u) {
        ctx->pc = 0x1948E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1948E4u;
        goto label_1948e4;
    }
    ctx->pc = 0x1948DCu;
    {
        const bool branch_taken_0x1948dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1948E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1948dc) {
            ctx->pc = 0x19492Cu;
            goto label_19492c;
        }
    }
    ctx->pc = 0x1948E4u;
label_1948e4:
    // 0x1948e4: 0x27b30010
    ctx->pc = 0x1948e4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 16));
label_1948e8:
    // 0x1948e8: 0xc064f3a
label_1948ec:
    if (ctx->pc == 0x1948ECu) {
        ctx->pc = 0x1948ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1948F0u;
        goto label_1948f0;
    }
    ctx->pc = 0x1948E8u;
    SET_GPR_U32(ctx, 31, 0x1948F0u);
    ctx->pc = 0x1948ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948F0u; }
        else if (ctx->pc != 0x1948F0u) { ctx->pc = 0x1948F0u; }
    }
    if (ctx->pc != 0x1948F0u) { return; }
    ctx->pc = 0x1948F0u;
label_1948f0:
    // 0x1948f0: 0x200202d
    ctx->pc = 0x1948f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1948f4:
    // 0x1948f4: 0x280282d
    ctx->pc = 0x1948f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1948f8:
    // 0x1948f8: 0xc065256
label_1948fc:
    if (ctx->pc == 0x1948FCu) {
        ctx->pc = 0x1948FCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194900u;
        goto label_194900;
    }
    ctx->pc = 0x1948F8u;
    SET_GPR_U32(ctx, 31, 0x194900u);
    ctx->pc = 0x1948FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194958u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_CopySj_0x194958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194900u; }
        else if (ctx->pc != 0x194900u) { ctx->pc = 0x194900u; }
    }
    if (ctx->pc != 0x194900u) { return; }
    ctx->pc = 0x194900u;
label_194900:
    // 0x194900: 0x40802d
    ctx->pc = 0x194900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194904:
    // 0x194904: 0x24020001
    ctx->pc = 0x194904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_194908:
    // 0x194908: 0x16020005
label_19490c:
    if (ctx->pc == 0x19490Cu) {
        ctx->pc = 0x194910u;
        goto label_194910;
    }
    ctx->pc = 0x194908u;
    {
        const bool branch_taken_0x194908 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x194908) {
            ctx->pc = 0x194920u;
            goto label_194920;
        }
    }
    ctx->pc = 0x194910u;
label_194910:
    // 0x194910: 0x12400003
label_194914:
    if (ctx->pc == 0x194914u) {
        ctx->pc = 0x194914u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194918u;
        goto label_194918;
    }
    ctx->pc = 0x194910u;
    {
        const bool branch_taken_0x194910 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x194914u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194910) {
            ctx->pc = 0x194920u;
            goto label_194920;
        }
    }
    ctx->pc = 0x194918u;
label_194918:
    // 0x194918: 0x240f809
label_19491c:
    if (ctx->pc == 0x19491Cu) {
        ctx->pc = 0x19491Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194920u;
        goto label_194920;
    }
    ctx->pc = 0x194918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x194920u);
        ctx->pc = 0x19491Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194880u: goto label_194880;
            case 0x194884u: goto label_194884;
            case 0x194888u: goto label_194888;
            case 0x19488Cu: goto label_19488c;
            case 0x194890u: goto label_194890;
            case 0x194894u: goto label_194894;
            case 0x194898u: goto label_194898;
            case 0x19489Cu: goto label_19489c;
            case 0x1948A0u: goto label_1948a0;
            case 0x1948A4u: goto label_1948a4;
            case 0x1948A8u: goto label_1948a8;
            case 0x1948ACu: goto label_1948ac;
            case 0x1948B0u: goto label_1948b0;
            case 0x1948B4u: goto label_1948b4;
            case 0x1948B8u: goto label_1948b8;
            case 0x1948BCu: goto label_1948bc;
            case 0x1948C0u: goto label_1948c0;
            case 0x1948C4u: goto label_1948c4;
            case 0x1948C8u: goto label_1948c8;
            case 0x1948CCu: goto label_1948cc;
            case 0x1948D0u: goto label_1948d0;
            case 0x1948D4u: goto label_1948d4;
            case 0x1948D8u: goto label_1948d8;
            case 0x1948DCu: goto label_1948dc;
            case 0x1948E0u: goto label_1948e0;
            case 0x1948E4u: goto label_1948e4;
            case 0x1948E8u: goto label_1948e8;
            case 0x1948ECu: goto label_1948ec;
            case 0x1948F0u: goto label_1948f0;
            case 0x1948F4u: goto label_1948f4;
            case 0x1948F8u: goto label_1948f8;
            case 0x1948FCu: goto label_1948fc;
            case 0x194900u: goto label_194900;
            case 0x194904u: goto label_194904;
            case 0x194908u: goto label_194908;
            case 0x19490Cu: goto label_19490c;
            case 0x194910u: goto label_194910;
            case 0x194914u: goto label_194914;
            case 0x194918u: goto label_194918;
            case 0x19491Cu: goto label_19491c;
            case 0x194920u: goto label_194920;
            case 0x194924u: goto label_194924;
            case 0x194928u: goto label_194928;
            case 0x19492Cu: goto label_19492c;
            case 0x194930u: goto label_194930;
            case 0x194934u: goto label_194934;
            case 0x194938u: goto label_194938;
            case 0x19493Cu: goto label_19493c;
            case 0x194940u: goto label_194940;
            case 0x194944u: goto label_194944;
            case 0x194948u: goto label_194948;
            case 0x19494Cu: goto label_19494c;
            case 0x194950u: goto label_194950;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194920u; }
            if (ctx->pc != 0x194920u) { return; }
        }
    }
    ctx->pc = 0x194920u;
label_194920:
    // 0x194920: 0xc064f44
label_194924:
    if (ctx->pc == 0x194924u) {
        ctx->pc = 0x194924u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194928u;
        goto label_194928;
    }
    ctx->pc = 0x194920u;
    SET_GPR_U32(ctx, 31, 0x194928u);
    ctx->pc = 0x194924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194928u; }
        else if (ctx->pc != 0x194928u) { ctx->pc = 0x194928u; }
    }
    if (ctx->pc != 0x194928u) { return; }
    ctx->pc = 0x194928u;
label_194928:
    // 0x194928: 0x200102d
    ctx->pc = 0x194928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19492c:
    // 0x19492c: 0xdfbf0090
    ctx->pc = 0x19492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_194930:
    // 0x194930: 0xdfb60080
    ctx->pc = 0x194930u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_194934:
    // 0x194934: 0xdfb50070
    ctx->pc = 0x194934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_194938:
    // 0x194938: 0xdfb40060
    ctx->pc = 0x194938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19493c:
    // 0x19493c: 0xdfb30050
    ctx->pc = 0x19493cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_194940:
    // 0x194940: 0xdfb20040
    ctx->pc = 0x194940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_194944:
    // 0x194944: 0xdfb10030
    ctx->pc = 0x194944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_194948:
    // 0x194948: 0xdfb00020
    ctx->pc = 0x194948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19494c:
    // 0x19494c: 0x3e00008
label_194950:
    if (ctx->pc == 0x194950u) {
        ctx->pc = 0x194950u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x194954u;
        goto label_fallthrough_0x19494c;
    }
    ctx->pc = 0x19494Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194950u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194880u: goto label_194880;
            case 0x194884u: goto label_194884;
            case 0x194888u: goto label_194888;
            case 0x19488Cu: goto label_19488c;
            case 0x194890u: goto label_194890;
            case 0x194894u: goto label_194894;
            case 0x194898u: goto label_194898;
            case 0x19489Cu: goto label_19489c;
            case 0x1948A0u: goto label_1948a0;
            case 0x1948A4u: goto label_1948a4;
            case 0x1948A8u: goto label_1948a8;
            case 0x1948ACu: goto label_1948ac;
            case 0x1948B0u: goto label_1948b0;
            case 0x1948B4u: goto label_1948b4;
            case 0x1948B8u: goto label_1948b8;
            case 0x1948BCu: goto label_1948bc;
            case 0x1948C0u: goto label_1948c0;
            case 0x1948C4u: goto label_1948c4;
            case 0x1948C8u: goto label_1948c8;
            case 0x1948CCu: goto label_1948cc;
            case 0x1948D0u: goto label_1948d0;
            case 0x1948D4u: goto label_1948d4;
            case 0x1948D8u: goto label_1948d8;
            case 0x1948DCu: goto label_1948dc;
            case 0x1948E0u: goto label_1948e0;
            case 0x1948E4u: goto label_1948e4;
            case 0x1948E8u: goto label_1948e8;
            case 0x1948ECu: goto label_1948ec;
            case 0x1948F0u: goto label_1948f0;
            case 0x1948F4u: goto label_1948f4;
            case 0x1948F8u: goto label_1948f8;
            case 0x1948FCu: goto label_1948fc;
            case 0x194900u: goto label_194900;
            case 0x194904u: goto label_194904;
            case 0x194908u: goto label_194908;
            case 0x19490Cu: goto label_19490c;
            case 0x194910u: goto label_194910;
            case 0x194914u: goto label_194914;
            case 0x194918u: goto label_194918;
            case 0x19491Cu: goto label_19491c;
            case 0x194920u: goto label_194920;
            case 0x194924u: goto label_194924;
            case 0x194928u: goto label_194928;
            case 0x19492Cu: goto label_19492c;
            case 0x194930u: goto label_194930;
            case 0x194934u: goto label_194934;
            case 0x194938u: goto label_194938;
            case 0x19493Cu: goto label_19493c;
            case 0x194940u: goto label_194940;
            case 0x194944u: goto label_194944;
            case 0x194948u: goto label_194948;
            case 0x19494Cu: goto label_19494c;
            case 0x194950u: goto label_194950;
            default: break;
        }
        return;
    }
label_fallthrough_0x19494c:
    ctx->pc = 0x194954u;
}
