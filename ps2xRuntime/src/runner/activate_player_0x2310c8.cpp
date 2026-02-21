#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: activate_player
// Address: 0x2310c8 - 0x2312e8
void activate_player_0x2310c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2310c8u;

    // 0x2310c8: 0x27bdffd0
    ctx->pc = 0x2310c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2310cc: 0xffbf0020
    ctx->pc = 0x2310ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2310d0: 0xffb10010
    ctx->pc = 0x2310d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2310d4: 0xffb00000
    ctx->pc = 0x2310d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2310d8: 0x80882d
    ctx->pc = 0x2310d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2310dc: 0x24032b00
    ctx->pc = 0x2310dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2310e0: 0x2231818
    ctx->pc = 0x2310e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2310e4: 0x3c020032
    ctx->pc = 0x2310e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2310e8: 0x24421bc0
    ctx->pc = 0x2310e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2310ec: 0x628021
    ctx->pc = 0x2310ecu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2310f0: 0x24020001
    ctx->pc = 0x2310f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2310f4: 0xc0a17da
    ctx->pc = 0x2310F4u;
    SET_GPR_U32(ctx, 31, 0x2310FCu);
    ctx->pc = 0x2310F8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    ctx->pc = 0x285F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        other_players_next_level_0x285f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2310FCu; }
    }
    if (ctx->pc != 0x2310FCu) { return; }
    ctx->pc = 0x2310FCu;
    // 0x2310fc: 0xae020808
    ctx->pc = 0x2310fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
    // 0x231100: 0xc08dad4
    ctx->pc = 0x231100u;
    SET_GPR_U32(ctx, 31, 0x231108u);
    ctx->pc = 0x231104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_player_blits_0x236b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231108u; }
    }
    if (ctx->pc != 0x231108u) { return; }
    ctx->pc = 0x231108u;
    // 0x231108: 0x220202d
    ctx->pc = 0x231108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23110c: 0x8e05000c
    ctx->pc = 0x23110cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x231110: 0xc093692
    ctx->pc = 0x231110u;
    SET_GPR_U32(ctx, 31, 0x231118u);
    ctx->pc = 0x231114u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231118u; }
    }
    if (ctx->pc != 0x231118u) { return; }
    ctx->pc = 0x231118u;
    // 0x231118: 0x3c020031
    ctx->pc = 0x231118u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23111c: 0x8c430018
    ctx->pc = 0x23111cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x231120: 0x24024010
    ctx->pc = 0x231120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x231124: 0x1462006b
    ctx->pc = 0x231124u;
    {
        const bool branch_taken_0x231124 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x231128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x231124) {
            ctx->pc = 0x2312D4u;
            goto label_2312d4;
        }
    }
    ctx->pc = 0x23112Cu;
    // 0x23112c: 0xc08c35e
    ctx->pc = 0x23112Cu;
    SET_GPR_U32(ctx, 31, 0x231134u);
    ctx->pc = 0x231130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x230D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_player_geo_0x230d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231134u; }
    }
    if (ctx->pc != 0x231134u) { return; }
    ctx->pc = 0x231134u;
    // 0x231134: 0x3c020032
    ctx->pc = 0x231134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x231138: 0x8c42080c
    ctx->pc = 0x231138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x23113c: 0x14400009
    ctx->pc = 0x23113Cu;
    {
        const bool branch_taken_0x23113c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x231140u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23113c) {
            ctx->pc = 0x231164u;
            goto label_231164;
        }
    }
    ctx->pc = 0x231144u;
    // 0x231144: 0x200202d
    ctx->pc = 0x231144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231148: 0x24050009
    ctx->pc = 0x231148u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x23114c: 0x44806000
    ctx->pc = 0x23114cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x231150: 0x3c0140a0
    ctx->pc = 0x231150u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x231154: 0x44816800
    ctx->pc = 0x231154u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x231158: 0xc08b096
    ctx->pc = 0x231158u;
    SET_GPR_U32(ctx, 31, 0x231160u);
    ctx->pc = 0x23115Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x22C258u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerAddPowerup_0x22c258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231160u; }
    }
    if (ctx->pc != 0x231160u) { return; }
    ctx->pc = 0x231160u;
    // 0x231160: 0x3c020033
    ctx->pc = 0x231160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_231164:
    // 0x231164: 0x40202d
    ctx->pc = 0x231164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231168: 0x8c423c00
    ctx->pc = 0x231168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15360)));
    // 0x23116c: 0x1840000e
    ctx->pc = 0x23116Cu;
    {
        const bool branch_taken_0x23116c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x231170u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23116c) {
            ctx->pc = 0x2311A8u;
            goto label_2311a8;
        }
    }
    ctx->pc = 0x231174u;
    // 0x231174: 0x3c020033
    ctx->pc = 0x231174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x231178: 0x2447dfd0
    ctx->pc = 0x231178u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23117c: 0x240503b0
    ctx->pc = 0x23117cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 944));
    // 0x231180: 0x8c843c00
    ctx->pc = 0x231180u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 15360)));
    // 0x231184: 0x0
    ctx->pc = 0x231184u;
    // NOP
label_231188:
    // 0x231188: 0x653018
    ctx->pc = 0x231188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23118c: 0xc71021
    ctx->pc = 0x23118cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x231190: 0xac400340
    ctx->pc = 0x231190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 832), GPR_U32(ctx, 0));
    // 0x231194: 0x24630001
    ctx->pc = 0x231194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x231198: 0x64102a
    ctx->pc = 0x231198u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x23119c: 0x0
    ctx->pc = 0x23119cu;
    // NOP
    // 0x2311a0: 0x1440fff9
    ctx->pc = 0x2311A0u;
    {
        const bool branch_taken_0x2311a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2311a0) {
            ctx->pc = 0x231188u;
            goto label_231188;
        }
    }
    ctx->pc = 0x2311A8u;
label_2311a8:
    // 0x2311a8: 0x3c020032
    ctx->pc = 0x2311a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2311ac: 0x8c420810
    ctx->pc = 0x2311acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x2311b0: 0x1440000c
    ctx->pc = 0x2311B0u;
    {
        const bool branch_taken_0x2311b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2311B4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2311b0) {
            ctx->pc = 0x2311E4u;
            goto label_2311e4;
        }
    }
    ctx->pc = 0x2311B8u;
    // 0x2311b8: 0x3c020032
    ctx->pc = 0x2311b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2311bc: 0x8c420800
    ctx->pc = 0x2311bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x2311c0: 0x2842000a
    ctx->pc = 0x2311c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 10));
    // 0x2311c4: 0x10400008
    ctx->pc = 0x2311C4u;
    {
        const bool branch_taken_0x2311c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2311C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2311c4) {
            ctx->pc = 0x2311E8u;
            goto label_2311e8;
        }
    }
    ctx->pc = 0x2311CCu;
    // 0x2311cc: 0x3c020031
    ctx->pc = 0x2311ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2311d0: 0x8c430018
    ctx->pc = 0x2311d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2311d4: 0x24024016
    ctx->pc = 0x2311d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
    // 0x2311d8: 0x5462001b
    ctx->pc = 0x2311D8u;
    {
        const bool branch_taken_0x2311d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2311d8) {
            ctx->pc = 0x2311DCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
            ctx->pc = 0x231248u;
            goto label_231248;
        }
    }
    ctx->pc = 0x2311E0u;
    // 0x2311e0: 0x182d
    ctx->pc = 0x2311e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2311e4:
    // 0x2311e4: 0x3c020032
    ctx->pc = 0x2311e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2311e8:
    // 0x2311e8: 0x24481bc0
    ctx->pc = 0x2311e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2311ec: 0x24052b00
    ctx->pc = 0x2311ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2311f0: 0x3c020032
    ctx->pc = 0x2311f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2311f4: 0x8c460810
    ctx->pc = 0x2311f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x2311f8: 0x24040005
    ctx->pc = 0x2311f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2311fc: 0x653818
    ctx->pc = 0x2311fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_231200:
    // 0x231200: 0xe81021
    ctx->pc = 0x231200u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x231204: 0x14c00003
    ctx->pc = 0x231204u;
    {
        const bool branch_taken_0x231204 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x231208u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
        if (branch_taken_0x231204) {
            ctx->pc = 0x231214u;
            goto label_231214;
        }
    }
    ctx->pc = 0x23120Cu;
    // 0x23120c: 0x5444000a
    ctx->pc = 0x23120Cu;
    {
        const bool branch_taken_0x23120c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x23120c) {
            ctx->pc = 0x231210u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x231238u;
            goto label_231238;
        }
    }
    ctx->pc = 0x231214u;
label_231214:
    // 0x231214: 0x2442fffc
    ctx->pc = 0x231214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x231218: 0x2c420002
    ctx->pc = 0x231218u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x23121c: 0x10400004
    ctx->pc = 0x23121Cu;
    {
        const bool branch_taken_0x23121c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231220u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x23121c) {
            ctx->pc = 0x231230u;
            goto label_231230;
        }
    }
    ctx->pc = 0x231224u;
    // 0x231224: 0xe81021
    ctx->pc = 0x231224u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x231228: 0x8c420808
    ctx->pc = 0x231228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
    // 0x23122c: 0xae020808
    ctx->pc = 0x23122cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 2));
label_231230:
    // 0x231230: 0xae0400fc
    ctx->pc = 0x231230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 4));
    // 0x231234: 0x24630001
    ctx->pc = 0x231234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_231238:
    // 0x231238: 0x28620004
    ctx->pc = 0x231238u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x23123c: 0x5440fff0
    ctx->pc = 0x23123Cu;
    {
        const bool branch_taken_0x23123c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23123c) {
            ctx->pc = 0x231240u;
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x231200u;
            goto label_231200;
        }
    }
    ctx->pc = 0x231244u;
    // 0x231244: 0x3c020032
    ctx->pc = 0x231244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_231248:
    // 0x231248: 0x8c420800
    ctx->pc = 0x231248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x23124c: 0x2842000a
    ctx->pc = 0x23124cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 10));
    // 0x231250: 0x1040000b
    ctx->pc = 0x231250u;
    {
        const bool branch_taken_0x231250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231254u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x231250) {
            ctx->pc = 0x231280u;
            goto label_231280;
        }
    }
    ctx->pc = 0x231258u;
    // 0x231258: 0x8c430018
    ctx->pc = 0x231258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23125c: 0x2402400b
    ctx->pc = 0x23125cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
    // 0x231260: 0x10620007
    ctx->pc = 0x231260u;
    {
        const bool branch_taken_0x231260 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x231264u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        if (branch_taken_0x231260) {
            ctx->pc = 0x231280u;
            goto label_231280;
        }
    }
    ctx->pc = 0x231268u;
    // 0x231268: 0x10620006
    ctx->pc = 0x231268u;
    {
        const bool branch_taken_0x231268 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23126Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x231268) {
            ctx->pc = 0x231284u;
            goto label_231284;
        }
    }
    ctx->pc = 0x231270u;
    // 0x231270: 0xc09a352
    ctx->pc = 0x231270u;
    SET_GPR_U32(ctx, 31, 0x231278u);
    ctx->pc = 0x231274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x268D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_target_0x268d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231278u; }
    }
    if (ctx->pc != 0x231278u) { return; }
    ctx->pc = 0x231278u;
    // 0x231278: 0x1000000b
    ctx->pc = 0x231278u;
    {
        const bool branch_taken_0x231278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23127Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x231278) {
            ctx->pc = 0x2312A8u;
            goto label_2312a8;
        }
    }
    ctx->pc = 0x231280u;
label_231280:
    // 0x231280: 0x3c030032
    ctx->pc = 0x231280u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_231284:
    // 0x231284: 0x24631bc0
    ctx->pc = 0x231284u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x231288: 0x24022b00
    ctx->pc = 0x231288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23128c: 0x2221018
    ctx->pc = 0x23128cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231290: 0x431021
    ctx->pc = 0x231290u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x231294: 0x8c440080
    ctx->pc = 0x231294u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x231298: 0x24050002
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23129c: 0xc0b41b8
    ctx->pc = 0x23129Cu;
    SET_GPR_U32(ctx, 31, 0x2312A4u);
    ctx->pc = 0x2312A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2312A4u; }
    }
    if (ctx->pc != 0x2312A4u) { return; }
    ctx->pc = 0x2312A4u;
    // 0x2312a4: 0x3c020031
    ctx->pc = 0x2312a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2312a8:
    // 0x2312a8: 0x24421b90
    ctx->pc = 0x2312a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7056));
    // 0x2312ac: 0x2403003c
    ctx->pc = 0x2312acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2312b0: 0x2231818
    ctx->pc = 0x2312b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2312b4: 0x24420008
    ctx->pc = 0x2312b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x2312b8: 0x621821
    ctx->pc = 0x2312b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2312bc: 0x8c620000
    ctx->pc = 0x2312bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2312c0: 0x3c04fffb
    ctx->pc = 0x2312c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65531 << 16));
    // 0x2312c4: 0x3484ffff
    ctx->pc = 0x2312c4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2312c8: 0x441024
    ctx->pc = 0x2312c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2312cc: 0xac620000
    ctx->pc = 0x2312ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2312d0: 0x24020001
    ctx->pc = 0x2312d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2312d4:
    // 0x2312d4: 0xdfbf0020
    ctx->pc = 0x2312d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2312d8: 0xdfb10010
    ctx->pc = 0x2312d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2312dc: 0xdfb00000
    ctx->pc = 0x2312dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2312e0: 0x3e00008
    ctx->pc = 0x2312E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2312E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231164u: goto label_231164;
            case 0x231188u: goto label_231188;
            case 0x2311A8u: goto label_2311a8;
            case 0x2311E4u: goto label_2311e4;
            case 0x2311E8u: goto label_2311e8;
            case 0x231200u: goto label_231200;
            case 0x231214u: goto label_231214;
            case 0x231230u: goto label_231230;
            case 0x231238u: goto label_231238;
            case 0x231248u: goto label_231248;
            case 0x231280u: goto label_231280;
            case 0x231284u: goto label_231284;
            case 0x2312A8u: goto label_2312a8;
            case 0x2312D4u: goto label_2312d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2312E8u;
}
