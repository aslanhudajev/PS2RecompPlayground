#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: OptionsStart
// Address: 0x20d400 - 0x20d4fc
void OptionsStart_0x20d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20d400u;

    // 0x20d400: 0x27bdfff0
    ctx->pc = 0x20d400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d404: 0xffbf0000
    ctx->pc = 0x20d404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d408: 0x3c020032
    ctx->pc = 0x20d408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20d40c: 0x8c42d358
    ctx->pc = 0x20d40cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x20d410: 0x14400037
    ctx->pc = 0x20D410u;
    {
        const bool branch_taken_0x20d410 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20D414u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20d410) {
            ctx->pc = 0x20D4F0u;
            goto label_20d4f0;
        }
    }
    ctx->pc = 0x20D418u;
    // 0x20d418: 0x3c020032
    ctx->pc = 0x20d418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20d41c: 0xac40d360
    ctx->pc = 0x20d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955872), GPR_U32(ctx, 0));
    // 0x20d420: 0x3c020031
    ctx->pc = 0x20d420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20d424: 0x8c430018
    ctx->pc = 0x20d424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20d428: 0x24024010
    ctx->pc = 0x20d428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x20d42c: 0x10620008
    ctx->pc = 0x20D42Cu;
    {
        const bool branch_taken_0x20d42c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20D430u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32777));
        if (branch_taken_0x20d42c) {
            ctx->pc = 0x20D450u;
            goto label_20d450;
        }
    }
    ctx->pc = 0x20D434u;
    // 0x20d434: 0x1462002d
    ctx->pc = 0x20D434u;
    {
        const bool branch_taken_0x20d434 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20D438u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20d434) {
            ctx->pc = 0x20D4ECu;
            goto label_20d4ec;
        }
    }
    ctx->pc = 0x20D43Cu;
    // 0x20d43c: 0x3c040032
    ctx->pc = 0x20d43cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20d440: 0xc082c3a
    ctx->pc = 0x20D440u;
    SET_GPR_U32(ctx, 31, 0x20D448u);
    ctx->pc = 0x20D444u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956688));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D448u; }
    }
    if (ctx->pc != 0x20D448u) { return; }
    ctx->pc = 0x20D448u;
    // 0x20d448: 0x10000028
    ctx->pc = 0x20D448u;
    {
        const bool branch_taken_0x20d448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D44Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20d448) {
            ctx->pc = 0x20D4ECu;
            goto label_20d4ec;
        }
    }
    ctx->pc = 0x20D450u;
label_20d450:
    // 0x20d450: 0x3c020032
    ctx->pc = 0x20d450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20d454: 0x3c030034
    ctx->pc = 0x20d454u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x20d458: 0x8c4407b8
    ctx->pc = 0x20d458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    // 0x20d45c: 0x8c62e7d4
    ctx->pc = 0x20d45cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294961108)));
    // 0x20d460: 0x14820006
    ctx->pc = 0x20D460u;
    {
        const bool branch_taken_0x20d460 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x20D464u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x20d460) {
            ctx->pc = 0x20D47Cu;
            goto label_20d47c;
        }
    }
    ctx->pc = 0x20D468u;
    // 0x20d468: 0x3c040032
    ctx->pc = 0x20d468u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20d46c: 0xc082c3a
    ctx->pc = 0x20D46Cu;
    SET_GPR_U32(ctx, 31, 0x20D474u);
    ctx->pc = 0x20D470u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957136));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D474u; }
    }
    if (ctx->pc != 0x20D474u) { return; }
    ctx->pc = 0x20D474u;
    // 0x20d474: 0x1000001a
    ctx->pc = 0x20D474u;
    {
        const bool branch_taken_0x20d474 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20d474) {
            ctx->pc = 0x20D4E0u;
            goto label_20d4e0;
        }
    }
    ctx->pc = 0x20D47Cu;
label_20d47c:
    // 0x20d47c: 0xc082c3a
    ctx->pc = 0x20D47Cu;
    SET_GPR_U32(ctx, 31, 0x20D484u);
    ctx->pc = 0x20D480u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957896));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D484u; }
    }
    if (ctx->pc != 0x20D484u) { return; }
    ctx->pc = 0x20D484u;
    // 0x20d484: 0x202d
    ctx->pc = 0x20d484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d488: 0x3c020032
    ctx->pc = 0x20d488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20d48c: 0x244adb48
    ctx->pc = 0x20d48cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294957896));
    // 0x20d490: 0x24090024
    ctx->pc = 0x20d490u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20d494: 0x24080026
    ctx->pc = 0x20d494u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 38));
    // 0x20d498: 0x3c020034
    ctx->pc = 0x20d498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x20d49c: 0x8c45e7f0
    ctx->pc = 0x20d49cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x20d4a0: 0x2407000c
    ctx->pc = 0x20d4a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 12));
    // 0x20d4a4: 0x2406ffff
    ctx->pc = 0x20d4a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20d4a8:
    // 0x20d4a8: 0x891818
    ctx->pc = 0x20d4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20d4ac: 0x8d42001c
    ctx->pc = 0x20d4acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x20d4b0: 0x621821
    ctx->pc = 0x20d4b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d4b4: 0x8c620000
    ctx->pc = 0x20d4b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d4b8: 0x10400009
    ctx->pc = 0x20D4B8u;
    {
        const bool branch_taken_0x20d4b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20d4b8) {
            ctx->pc = 0x20D4E0u;
            goto label_20d4e0;
        }
    }
    ctx->pc = 0x20D4C0u;
    // 0x20d4c0: 0x8c620004
    ctx->pc = 0x20d4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20d4c4: 0x5448fff8
    ctx->pc = 0x20D4C4u;
    {
        const bool branch_taken_0x20d4c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        if (branch_taken_0x20d4c4) {
            ctx->pc = 0x20D4C8u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D4CCu;
    // 0x20d4cc: 0x54a70002
    ctx->pc = 0x20D4CCu;
    {
        const bool branch_taken_0x20d4cc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 7));
        if (branch_taken_0x20d4cc) {
            ctx->pc = 0x20D4D0u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x20D4D8u;
            goto label_20d4d8;
        }
    }
    ctx->pc = 0x20D4D4u;
    // 0x20d4d4: 0xac660020
    ctx->pc = 0x20d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
label_20d4d8:
    // 0x20d4d8: 0x1000fff3
    ctx->pc = 0x20D4D8u;
    {
        const bool branch_taken_0x20d4d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20D4DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x20d4d8) {
            ctx->pc = 0x20D4A8u;
            goto label_20d4a8;
        }
    }
    ctx->pc = 0x20D4E0u;
label_20d4e0:
    // 0x20d4e0: 0xc09710c
    ctx->pc = 0x20D4E0u;
    SET_GPR_U32(ctx, 31, 0x20D4E8u);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D4E8u; }
    }
    if (ctx->pc != 0x20D4E8u) { return; }
    ctx->pc = 0x20D4E8u;
    // 0x20d4e8: 0x3c020032
    ctx->pc = 0x20d4e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20d4ec:
    // 0x20d4ec: 0x8c42d358
    ctx->pc = 0x20d4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
label_20d4f0:
    // 0x20d4f0: 0xdfbf0000
    ctx->pc = 0x20d4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d4f4: 0x3e00008
    ctx->pc = 0x20D4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D4F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D450u: goto label_20d450;
            case 0x20D47Cu: goto label_20d47c;
            case 0x20D4A8u: goto label_20d4a8;
            case 0x20D4D8u: goto label_20d4d8;
            case 0x20D4E0u: goto label_20d4e0;
            case 0x20D4ECu: goto label_20d4ec;
            case 0x20D4F0u: goto label_20d4f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20D4FCu;
}
