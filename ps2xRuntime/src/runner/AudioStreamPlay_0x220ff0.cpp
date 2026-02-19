#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioStreamPlay
// Address: 0x220ff0 - 0x22116c
void AudioStreamPlay_0x220ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220ff0u;

    // 0x220ff0: 0x27bdfe90
    ctx->pc = 0x220ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x220ff4: 0xffbf0160
    ctx->pc = 0x220ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x220ff8: 0xffb40150
    ctx->pc = 0x220ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x220ffc: 0xffb30140
    ctx->pc = 0x220ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x221000: 0xffb20130
    ctx->pc = 0x221000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x221004: 0xffb10120
    ctx->pc = 0x221004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x221008: 0xffb00110
    ctx->pc = 0x221008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x22100c: 0xa0802d
    ctx->pc = 0x22100cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221010: 0xc0982d
    ctx->pc = 0x221010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221014: 0x3092ffff
    ctx->pc = 0x221014u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 4), 65535));
    // 0x221018: 0x3c020032
    ctx->pc = 0x221018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22101c: 0x8c42fd58
    ctx->pc = 0x22101cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x221020: 0x14400005
    ctx->pc = 0x221020u;
    {
        const bool branch_taken_0x221020 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x221024u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x221020) {
            ctx->pc = 0x221038u;
            goto label_221038;
        }
    }
    ctx->pc = 0x221028u;
    // 0x221028: 0x3c020032
    ctx->pc = 0x221028u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22102c: 0x8c42fd5c
    ctx->pc = 0x22102cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966620)));
    // 0x221030: 0x10400003
    ctx->pc = 0x221030u;
    {
        const bool branch_taken_0x221030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221034u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x221030) {
            ctx->pc = 0x221040u;
            goto label_221040;
        }
    }
    ctx->pc = 0x221038u;
label_221038:
    // 0x221038: 0x10000044
    ctx->pc = 0x221038u;
    {
        const bool branch_taken_0x221038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22103Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221038) {
            ctx->pc = 0x22114Cu;
            goto label_22114c;
        }
    }
    ctx->pc = 0x221040u;
label_221040:
    // 0x221040: 0x24846760
    ctx->pc = 0x221040u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26464));
    // 0x221044: 0x3c110032
    ctx->pc = 0x221044u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x221048: 0x2625fda8
    ctx->pc = 0x221048u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4294966696));
    // 0x22104c: 0x3a0302d
    ctx->pc = 0x22104cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221050: 0x24070100
    ctx->pc = 0x221050u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 256));
    // 0x221054: 0x27a80100
    ctx->pc = 0x221054u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 256));
    // 0x221058: 0xc0b4ede
    ctx->pc = 0x221058u;
    SET_GPR_U32(ctx, 31, 0x221060u);
    ctx->pc = 0x22105Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 260));
    ctx->pc = 0x2D3B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileMap_0x2d3b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221060u; }
    }
    if (ctx->pc != 0x221060u) { return; }
    ctx->pc = 0x221060u;
    // 0x221060: 0x54400004
    ctx->pc = 0x221060u;
    {
        const bool branch_taken_0x221060 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x221060) {
            ctx->pc = 0x221064u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x221074u;
            goto label_221074;
        }
    }
    ctx->pc = 0x221068u;
    // 0x221068: 0x3c04003a
    ctx->pc = 0x221068u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22106c: 0x1000000e
    ctx->pc = 0x22106Cu;
    {
        const bool branch_taken_0x22106c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221070u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26472));
        if (branch_taken_0x22106c) {
            ctx->pc = 0x2210A8u;
            goto label_2210a8;
        }
    }
    ctx->pc = 0x221074u;
label_221074:
    // 0x221074: 0x8fa50100
    ctx->pc = 0x221074u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x221078: 0xc088fb4
    ctx->pc = 0x221078u;
    SET_GPR_U32(ctx, 31, 0x221080u);
    ctx->pc = 0x22107Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 260)));
    ctx->pc = 0x223ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_stream_set_file_0x223ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221080u; }
    }
    if (ctx->pc != 0x221080u) { return; }
    ctx->pc = 0x221080u;
    // 0x221080: 0x40182d
    ctx->pc = 0x221080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221084: 0x2402fffc
    ctx->pc = 0x221084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x221088: 0x14620003
    ctx->pc = 0x221088u;
    {
        const bool branch_taken_0x221088 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x22108Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x221088) {
            ctx->pc = 0x221098u;
            goto label_221098;
        }
    }
    ctx->pc = 0x221090u;
    // 0x221090: 0x10000004
    ctx->pc = 0x221090u;
    {
        const bool branch_taken_0x221090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221094u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26504));
        if (branch_taken_0x221090) {
            ctx->pc = 0x2210A4u;
            goto label_2210a4;
        }
    }
    ctx->pc = 0x221098u;
label_221098:
    // 0x221098: 0x4610009
    ctx->pc = 0x221098u;
    {
        const bool branch_taken_0x221098 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x22109Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x221098) {
            ctx->pc = 0x2210C0u;
            goto label_2210c0;
        }
    }
    ctx->pc = 0x2210A0u;
    // 0x2210a0: 0x24846768
    ctx->pc = 0x2210a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26472));
label_2210a4:
    // 0x2210a4: 0x3c050032
    ctx->pc = 0x2210a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
label_2210a8:
    // 0x2210a8: 0x3c050032
    ctx->pc = 0x2210a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x2210ac: 0x24a5fda8
    ctx->pc = 0x2210acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966696));
    // 0x2210b0: 0xc0b492e
    ctx->pc = 0x2210B0u;
    SET_GPR_U32(ctx, 31, 0x2210B8u);
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210B8u; }
    }
    if (ctx->pc != 0x2210B8u) { return; }
    ctx->pc = 0x2210B8u;
    // 0x2210b8: 0x10000021
    ctx->pc = 0x2210B8u;
    {
        const bool branch_taken_0x2210b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2210b8) {
            ctx->pc = 0x221140u;
            goto label_221140;
        }
    }
    ctx->pc = 0x2210C0u;
label_2210c0:
    // 0x2210c0: 0xc08900c
    ctx->pc = 0x2210C0u;
    SET_GPR_U32(ctx, 31, 0x2210C8u);
    ctx->pc = 0x224030u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_stream_rewind_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210C8u; }
    }
    if (ctx->pc != 0x2210C8u) { return; }
    ctx->pc = 0x2210C8u;
    // 0x2210c8: 0x3c02003c
    ctx->pc = 0x2210c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2210cc: 0x12000004
    ctx->pc = 0x2210CCu;
    {
        const bool branch_taken_0x2210cc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2210D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956560));
        if (branch_taken_0x2210cc) {
            ctx->pc = 0x2210E0u;
            goto label_2210e0;
        }
    }
    ctx->pc = 0x2210D4u;
    // 0x2210d4: 0x3c020022
    ctx->pc = 0x2210d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x2210d8: 0x10000003
    ctx->pc = 0x2210D8u;
    {
        const bool branch_taken_0x2210d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2210DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4048));
        if (branch_taken_0x2210d8) {
            ctx->pc = 0x2210E8u;
            goto label_2210e8;
        }
    }
    ctx->pc = 0x2210E0u;
label_2210e0:
    // 0x2210e0: 0x3c020022
    ctx->pc = 0x2210e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x2210e4: 0x24420fa0
    ctx->pc = 0x2210e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4000));
label_2210e8:
    // 0x2210e8: 0xac620010
    ctx->pc = 0x2210e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2210ec: 0x24020001
    ctx->pc = 0x2210ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2210f0: 0x50102a
    ctx->pc = 0x2210f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2210f4: 0x2800a
    ctx->pc = 0x2210f4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x2210f8: 0x240202d
    ctx->pc = 0x2210f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210fc: 0x10282b
    ctx->pc = 0x2210fcu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x221100: 0x260302d
    ctx->pc = 0x221100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221104: 0x3c07003c
    ctx->pc = 0x221104u;
    SET_GPR_U32(ctx, 7, ((uint32_t)60 << 16));
    // 0x221108: 0xc088fe6
    ctx->pc = 0x221108u;
    SET_GPR_U32(ctx, 31, 0x221110u);
    ctx->pc = 0x22110Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294956560));
    ctx->pc = 0x223F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_stream_play_0x223f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221110u; }
    }
    if (ctx->pc != 0x221110u) { return; }
    ctx->pc = 0x221110u;
    // 0x221110: 0x40182d
    ctx->pc = 0x221110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221114: 0x2862ffff
    ctx->pc = 0x221114u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967295));
    // 0x221118: 0x14400005
    ctx->pc = 0x221118u;
    {
        const bool branch_taken_0x221118 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22111Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x221118) {
            ctx->pc = 0x221130u;
            goto label_221130;
        }
    }
    ctx->pc = 0x221120u;
    // 0x221120: 0xc089066
    ctx->pc = 0x221120u;
    SET_GPR_U32(ctx, 31, 0x221128u);
    ctx->pc = 0x221124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x224198u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_playing_0x224198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221128u; }
    }
    if (ctx->pc != 0x221128u) { return; }
    ctx->pc = 0x221128u;
    // 0x221128: 0x10000005
    ctx->pc = 0x221128u;
    {
        const bool branch_taken_0x221128 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22112Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x221128) {
            ctx->pc = 0x221140u;
            goto label_221140;
        }
    }
    ctx->pc = 0x221130u;
label_221130:
    // 0x221130: 0x248467b0
    ctx->pc = 0x221130u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26544));
    // 0x221134: 0x3c050032
    ctx->pc = 0x221134u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x221138: 0xc0b492e
    ctx->pc = 0x221138u;
    SET_GPR_U32(ctx, 31, 0x221140u);
    ctx->pc = 0x22113Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966696));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221140u; }
    }
    if (ctx->pc != 0x221140u) { return; }
    ctx->pc = 0x221140u;
label_221140:
    // 0x221140: 0xc089074
    ctx->pc = 0x221140u;
    SET_GPR_U32(ctx, 31, 0x221148u);
    ctx->pc = 0x221144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2241D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_looping_0x2241d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221148u; }
    }
    if (ctx->pc != 0x221148u) { return; }
    ctx->pc = 0x221148u;
    // 0x221148: 0x280102d
    ctx->pc = 0x221148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22114c:
    // 0x22114c: 0xdfbf0160
    ctx->pc = 0x22114cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x221150: 0xdfb40150
    ctx->pc = 0x221150u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x221154: 0xdfb30140
    ctx->pc = 0x221154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x221158: 0xdfb20130
    ctx->pc = 0x221158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x22115c: 0xdfb10120
    ctx->pc = 0x22115cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x221160: 0xdfb00110
    ctx->pc = 0x221160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x221164: 0x3e00008
    ctx->pc = 0x221164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221168u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221038u: goto label_221038;
            case 0x221040u: goto label_221040;
            case 0x221074u: goto label_221074;
            case 0x221098u: goto label_221098;
            case 0x2210A4u: goto label_2210a4;
            case 0x2210A8u: goto label_2210a8;
            case 0x2210C0u: goto label_2210c0;
            case 0x2210E0u: goto label_2210e0;
            case 0x2210E8u: goto label_2210e8;
            case 0x221130u: goto label_221130;
            case 0x221140u: goto label_221140;
            case 0x22114Cu: goto label_22114c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22116Cu;
}
