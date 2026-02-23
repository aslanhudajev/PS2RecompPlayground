#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeLowModel__15OneSkinMgrClassFP10MotObjTask
// Address: 0x1ff210 - 0x1ff818
void changeLowModel__15OneSkinMgrClassFP10MotObjTask_0x1ff210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeLowModel__15OneSkinMgrClassFP10MotObjTask");


    ctx->pc = 0x1ff210u;

    // 0x1ff210: 0x27bdffd0
    ctx->pc = 0x1ff210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ff214: 0x7fbf0020
    ctx->pc = 0x1ff214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ff218: 0x7fb10010
    ctx->pc = 0x1ff218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff21c: 0x7fb00000
    ctx->pc = 0x1ff21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff220: 0x70a08628
    ctx->pc = 0x1ff220u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff224: 0x84a5002c
    ctx->pc = 0x1ff224u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1ff228: 0x2403001d
    ctx->pc = 0x1ff228u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ff22c: 0x10a30138
    ctx->pc = 0x1FF22Cu;
    {
        const bool branch_taken_0x1ff22c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FF230u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ff22c) {
            ctx->pc = 0x1FF710u;
            goto label_1ff710;
        }
    }
    ctx->pc = 0x1FF234u;
    // 0x1ff234: 0x24030019
    ctx->pc = 0x1ff234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ff238: 0x50a300f8
    ctx->pc = 0x1FF238u;
    {
        const bool branch_taken_0x1ff238 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ff238) {
            ctx->pc = 0x1FF23Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
            ctx->pc = 0x1FF61Cu;
            goto label_1ff61c;
        }
    }
    ctx->pc = 0x1FF240u;
    // 0x1ff240: 0x24030046
    ctx->pc = 0x1ff240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 70));
    // 0x1ff244: 0x50a300b8
    ctx->pc = 0x1FF244u;
    {
        const bool branch_taken_0x1ff244 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ff244) {
            ctx->pc = 0x1FF248u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
            ctx->pc = 0x1FF528u;
            goto label_1ff528;
        }
    }
    ctx->pc = 0x1FF24Cu;
    // 0x1ff24c: 0x24030043
    ctx->pc = 0x1ff24cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ff250: 0x50a30078
    ctx->pc = 0x1FF250u;
    {
        const bool branch_taken_0x1ff250 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ff250) {
            ctx->pc = 0x1FF254u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
            ctx->pc = 0x1FF434u;
            goto label_1ff434;
        }
    }
    ctx->pc = 0x1FF258u;
    // 0x1ff258: 0x24030047
    ctx->pc = 0x1ff258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1ff25c: 0x50a30042
    ctx->pc = 0x1FF25Cu;
    {
        const bool branch_taken_0x1ff25c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ff25c) {
            ctx->pc = 0x1FF260u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
            ctx->pc = 0x1FF368u;
            goto label_1ff368;
        }
    }
    ctx->pc = 0x1FF264u;
    // 0x1ff264: 0x24030005
    ctx->pc = 0x1ff264u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ff268: 0x10a30003
    ctx->pc = 0x1FF268u;
    {
        const bool branch_taken_0x1ff268 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FF26Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
        if (branch_taken_0x1ff268) {
            ctx->pc = 0x1FF278u;
            goto label_1ff278;
        }
    }
    ctx->pc = 0x1FF270u;
    // 0x1ff270: 0x10000165
    ctx->pc = 0x1FF270u;
    {
        const bool branch_taken_0x1ff270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF274u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1ff270) {
            ctx->pc = 0x1FF808u;
            goto label_1ff808;
        }
    }
    ctx->pc = 0x1FF278u;
label_1ff278:
    // 0x1ff278: 0x24060001
    ctx->pc = 0x1ff278u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff27c: 0xc07fc64
    ctx->pc = 0x1FF27Cu;
    SET_GPR_U32(ctx, 31, 0x1FF284u);
    ctx->pc = 0x1FF280u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 141));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF284u; }
        else if (ctx->pc != 0x1FF284u) { ctx->pc = 0x1FF284u; }
    }
    if (ctx->pc != 0x1FF284u) { return; }
    ctx->pc = 0x1FF284u;
    // 0x1ff284: 0x72202628
    ctx->pc = 0x1ff284u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff288: 0x26050070
    ctx->pc = 0x1ff288u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff28c: 0x24060004
    ctx->pc = 0x1ff28cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ff290: 0xc07fc64
    ctx->pc = 0x1FF290u;
    SET_GPR_U32(ctx, 31, 0x1FF298u);
    ctx->pc = 0x1FF294u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 146));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF298u; }
        else if (ctx->pc != 0x1FF298u) { ctx->pc = 0x1FF298u; }
    }
    if (ctx->pc != 0x1FF298u) { return; }
    ctx->pc = 0x1FF298u;
    // 0x1ff298: 0x72202628
    ctx->pc = 0x1ff298u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff29c: 0x26050070
    ctx->pc = 0x1ff29cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff2a0: 0x24060008
    ctx->pc = 0x1ff2a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ff2a4: 0xc07fc64
    ctx->pc = 0x1FF2A4u;
    SET_GPR_U32(ctx, 31, 0x1FF2ACu);
    ctx->pc = 0x1FF2A8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 134));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2ACu; }
        else if (ctx->pc != 0x1FF2ACu) { ctx->pc = 0x1FF2ACu; }
    }
    if (ctx->pc != 0x1FF2ACu) { return; }
    ctx->pc = 0x1FF2ACu;
    // 0x1ff2ac: 0x72202628
    ctx->pc = 0x1ff2acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff2b0: 0x26050070
    ctx->pc = 0x1ff2b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff2b4: 0x2406000b
    ctx->pc = 0x1ff2b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ff2b8: 0xc07fc64
    ctx->pc = 0x1FF2B8u;
    SET_GPR_U32(ctx, 31, 0x1FF2C0u);
    ctx->pc = 0x1FF2BCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 129));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2C0u; }
        else if (ctx->pc != 0x1FF2C0u) { ctx->pc = 0x1FF2C0u; }
    }
    if (ctx->pc != 0x1FF2C0u) { return; }
    ctx->pc = 0x1FF2C0u;
    // 0x1ff2c0: 0x72202628
    ctx->pc = 0x1ff2c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff2c4: 0x26050070
    ctx->pc = 0x1ff2c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff2c8: 0x2406000c
    ctx->pc = 0x1ff2c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ff2cc: 0xc07fc64
    ctx->pc = 0x1FF2CCu;
    SET_GPR_U32(ctx, 31, 0x1FF2D4u);
    ctx->pc = 0x1FF2D0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 148));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2D4u; }
        else if (ctx->pc != 0x1FF2D4u) { ctx->pc = 0x1FF2D4u; }
    }
    if (ctx->pc != 0x1FF2D4u) { return; }
    ctx->pc = 0x1FF2D4u;
    // 0x1ff2d4: 0x72202628
    ctx->pc = 0x1ff2d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff2d8: 0x26050070
    ctx->pc = 0x1ff2d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff2dc: 0x2406000d
    ctx->pc = 0x1ff2dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ff2e0: 0xc07fc64
    ctx->pc = 0x1FF2E0u;
    SET_GPR_U32(ctx, 31, 0x1FF2E8u);
    ctx->pc = 0x1FF2E4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 151));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2E8u; }
        else if (ctx->pc != 0x1FF2E8u) { ctx->pc = 0x1FF2E8u; }
    }
    if (ctx->pc != 0x1FF2E8u) { return; }
    ctx->pc = 0x1FF2E8u;
    // 0x1ff2e8: 0x72202628
    ctx->pc = 0x1ff2e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff2ec: 0x26050070
    ctx->pc = 0x1ff2ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff2f0: 0x2406000e
    ctx->pc = 0x1ff2f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ff2f4: 0xc07fc64
    ctx->pc = 0x1FF2F4u;
    SET_GPR_U32(ctx, 31, 0x1FF2FCu);
    ctx->pc = 0x1FF2F8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 143));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF2FCu; }
        else if (ctx->pc != 0x1FF2FCu) { ctx->pc = 0x1FF2FCu; }
    }
    if (ctx->pc != 0x1FF2FCu) { return; }
    ctx->pc = 0x1FF2FCu;
    // 0x1ff2fc: 0x72202628
    ctx->pc = 0x1ff2fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff300: 0x26050070
    ctx->pc = 0x1ff300u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff304: 0x2406000f
    ctx->pc = 0x1ff304u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ff308: 0xc07fc64
    ctx->pc = 0x1FF308u;
    SET_GPR_U32(ctx, 31, 0x1FF310u);
    ctx->pc = 0x1FF30Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 136));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF310u; }
        else if (ctx->pc != 0x1FF310u) { ctx->pc = 0x1FF310u; }
    }
    if (ctx->pc != 0x1FF310u) { return; }
    ctx->pc = 0x1FF310u;
    // 0x1ff310: 0x72202628
    ctx->pc = 0x1ff310u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff314: 0x26050070
    ctx->pc = 0x1ff314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff318: 0x24060010
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff31c: 0xc07fc64
    ctx->pc = 0x1FF31Cu;
    SET_GPR_U32(ctx, 31, 0x1FF324u);
    ctx->pc = 0x1FF320u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 139));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF324u; }
        else if (ctx->pc != 0x1FF324u) { ctx->pc = 0x1FF324u; }
    }
    if (ctx->pc != 0x1FF324u) { return; }
    ctx->pc = 0x1FF324u;
    // 0x1ff324: 0x72202628
    ctx->pc = 0x1ff324u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff328: 0x26050070
    ctx->pc = 0x1ff328u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff32c: 0x24060011
    ctx->pc = 0x1ff32cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ff330: 0xc07fc64
    ctx->pc = 0x1FF330u;
    SET_GPR_U32(ctx, 31, 0x1FF338u);
    ctx->pc = 0x1FF334u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 131));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF338u; }
        else if (ctx->pc != 0x1FF338u) { ctx->pc = 0x1FF338u; }
    }
    if (ctx->pc != 0x1FF338u) { return; }
    ctx->pc = 0x1FF338u;
    // 0x1ff338: 0x3c04007f
    ctx->pc = 0x1ff338u;
    SET_GPR_U32(ctx, 4, ((uint32_t)127 << 16));
    // 0x1ff33c: 0x34830020
    ctx->pc = 0x1ff33cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 32));
    // 0x1ff340: 0xae0309d0
    ctx->pc = 0x1ff340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 3));
    // 0x1ff344: 0x34830012
    ctx->pc = 0x1ff344u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 18));
    // 0x1ff348: 0xae0308e0
    ctx->pc = 0x1ff348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2272), GPR_U32(ctx, 3));
    // 0x1ff34c: 0x3483003d
    ctx->pc = 0x1ff34cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 61));
    // 0x1ff350: 0xae030610
    ctx->pc = 0x1ff350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 3));
    // 0x1ff354: 0x3483002f
    ctx->pc = 0x1ff354u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 47));
    // 0x1ff358: 0xae030520
    ctx->pc = 0x1ff358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 3));
    // 0x1ff35c: 0x34830006
    ctx->pc = 0x1ff35cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 6));
    // 0x1ff360: 0x10000128
    ctx->pc = 0x1FF360u;
    {
        const bool branch_taken_0x1ff360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF364u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        if (branch_taken_0x1ff360) {
            ctx->pc = 0x1FF804u;
            goto label_1ff804;
        }
    }
    ctx->pc = 0x1FF368u;
label_1ff368:
    // 0x1ff368: 0x24060001
    ctx->pc = 0x1ff368u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff36c: 0xc07fc64
    ctx->pc = 0x1FF36Cu;
    SET_GPR_U32(ctx, 31, 0x1FF374u);
    ctx->pc = 0x1FF370u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 614));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF374u; }
        else if (ctx->pc != 0x1FF374u) { ctx->pc = 0x1FF374u; }
    }
    if (ctx->pc != 0x1FF374u) { return; }
    ctx->pc = 0x1FF374u;
    // 0x1ff374: 0x72202628
    ctx->pc = 0x1ff374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff378: 0x26050070
    ctx->pc = 0x1ff378u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff37c: 0x24060004
    ctx->pc = 0x1ff37cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ff380: 0xc07fc64
    ctx->pc = 0x1FF380u;
    SET_GPR_U32(ctx, 31, 0x1FF388u);
    ctx->pc = 0x1FF384u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 616));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF388u; }
        else if (ctx->pc != 0x1FF388u) { ctx->pc = 0x1FF388u; }
    }
    if (ctx->pc != 0x1FF388u) { return; }
    ctx->pc = 0x1FF388u;
    // 0x1ff388: 0x72202628
    ctx->pc = 0x1ff388u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff38c: 0x26050070
    ctx->pc = 0x1ff38cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff390: 0x24060008
    ctx->pc = 0x1ff390u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ff394: 0xc07fc64
    ctx->pc = 0x1FF394u;
    SET_GPR_U32(ctx, 31, 0x1FF39Cu);
    ctx->pc = 0x1FF398u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 611));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF39Cu; }
        else if (ctx->pc != 0x1FF39Cu) { ctx->pc = 0x1FF39Cu; }
    }
    if (ctx->pc != 0x1FF39Cu) { return; }
    ctx->pc = 0x1FF39Cu;
    // 0x1ff39c: 0x72202628
    ctx->pc = 0x1ff39cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff3a0: 0x26050070
    ctx->pc = 0x1ff3a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff3a4: 0x24060005
    ctx->pc = 0x1ff3a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ff3a8: 0xc07fc64
    ctx->pc = 0x1FF3A8u;
    SET_GPR_U32(ctx, 31, 0x1FF3B0u);
    ctx->pc = 0x1FF3ACu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 617));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF3B0u; }
        else if (ctx->pc != 0x1FF3B0u) { ctx->pc = 0x1FF3B0u; }
    }
    if (ctx->pc != 0x1FF3B0u) { return; }
    ctx->pc = 0x1FF3B0u;
    // 0x1ff3b0: 0x72202628
    ctx->pc = 0x1ff3b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff3b4: 0x26050070
    ctx->pc = 0x1ff3b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff3b8: 0x24060009
    ctx->pc = 0x1ff3b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ff3bc: 0xc07fc64
    ctx->pc = 0x1FF3BCu;
    SET_GPR_U32(ctx, 31, 0x1FF3C4u);
    ctx->pc = 0x1FF3C0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 612));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF3C4u; }
        else if (ctx->pc != 0x1FF3C4u) { ctx->pc = 0x1FF3C4u; }
    }
    if (ctx->pc != 0x1FF3C4u) { return; }
    ctx->pc = 0x1FF3C4u;
    // 0x1ff3c4: 0x72202628
    ctx->pc = 0x1ff3c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff3c8: 0x26050070
    ctx->pc = 0x1ff3c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff3cc: 0x2406000d
    ctx->pc = 0x1ff3ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ff3d0: 0xc07fc64
    ctx->pc = 0x1FF3D0u;
    SET_GPR_U32(ctx, 31, 0x1FF3D8u);
    ctx->pc = 0x1FF3D4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 618));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF3D8u; }
        else if (ctx->pc != 0x1FF3D8u) { ctx->pc = 0x1FF3D8u; }
    }
    if (ctx->pc != 0x1FF3D8u) { return; }
    ctx->pc = 0x1FF3D8u;
    // 0x1ff3d8: 0x72202628
    ctx->pc = 0x1ff3d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff3dc: 0x26050070
    ctx->pc = 0x1ff3dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff3e0: 0x24060010
    ctx->pc = 0x1ff3e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff3e4: 0xc07fc64
    ctx->pc = 0x1FF3E4u;
    SET_GPR_U32(ctx, 31, 0x1FF3ECu);
    ctx->pc = 0x1FF3E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 613));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF3ECu; }
        else if (ctx->pc != 0x1FF3ECu) { ctx->pc = 0x1FF3ECu; }
    }
    if (ctx->pc != 0x1FF3ECu) { return; }
    ctx->pc = 0x1FF3ECu;
    // 0x1ff3ec: 0x72202628
    ctx->pc = 0x1ff3ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff3f0: 0x26050070
    ctx->pc = 0x1ff3f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff3f4: 0x2406000e
    ctx->pc = 0x1ff3f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ff3f8: 0xc07fc64
    ctx->pc = 0x1FF3F8u;
    SET_GPR_U32(ctx, 31, 0x1FF400u);
    ctx->pc = 0x1FF3FCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 615));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF400u; }
        else if (ctx->pc != 0x1FF400u) { ctx->pc = 0x1FF400u; }
    }
    if (ctx->pc != 0x1FF400u) { return; }
    ctx->pc = 0x1FF400u;
    // 0x1ff400: 0x72202628
    ctx->pc = 0x1ff400u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff404: 0x26050070
    ctx->pc = 0x1ff404u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff408: 0x24060011
    ctx->pc = 0x1ff408u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ff40c: 0xc07fc64
    ctx->pc = 0x1FF40Cu;
    SET_GPR_U32(ctx, 31, 0x1FF414u);
    ctx->pc = 0x1FF410u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 610));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF414u; }
        else if (ctx->pc != 0x1FF414u) { ctx->pc = 0x1FF414u; }
    }
    if (ctx->pc != 0x1FF414u) { return; }
    ctx->pc = 0x1FF414u;
    // 0x1ff414: 0x3c0400ae
    ctx->pc = 0x1ff414u;
    SET_GPR_U32(ctx, 4, ((uint32_t)174 << 16));
    // 0x1ff418: 0x34830009
    ctx->pc = 0x1ff418u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 9));
    // 0x1ff41c: 0xae0309d0
    ctx->pc = 0x1ff41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 3));
    // 0x1ff420: 0x3483000f
    ctx->pc = 0x1ff420u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 15));
    // 0x1ff424: 0xae030610
    ctx->pc = 0x1ff424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 3));
    // 0x1ff428: 0x34830003
    ctx->pc = 0x1ff428u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 3));
    // 0x1ff42c: 0x100000f5
    ctx->pc = 0x1FF42Cu;
    {
        const bool branch_taken_0x1ff42c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF430u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        if (branch_taken_0x1ff42c) {
            ctx->pc = 0x1FF804u;
            goto label_1ff804;
        }
    }
    ctx->pc = 0x1FF434u;
label_1ff434:
    // 0x1ff434: 0x24060002
    ctx->pc = 0x1ff434u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff438: 0xc07fc64
    ctx->pc = 0x1FF438u;
    SET_GPR_U32(ctx, 31, 0x1FF440u);
    ctx->pc = 0x1FF43Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF440u; }
        else if (ctx->pc != 0x1FF440u) { ctx->pc = 0x1FF440u; }
    }
    if (ctx->pc != 0x1FF440u) { return; }
    ctx->pc = 0x1FF440u;
    // 0x1ff440: 0x72202628
    ctx->pc = 0x1ff440u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff444: 0x26050070
    ctx->pc = 0x1ff444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff448: 0x24060006
    ctx->pc = 0x1ff448u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ff44c: 0xc07fc64
    ctx->pc = 0x1FF44Cu;
    SET_GPR_U32(ctx, 31, 0x1FF454u);
    ctx->pc = 0x1FF450u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF454u; }
        else if (ctx->pc != 0x1FF454u) { ctx->pc = 0x1FF454u; }
    }
    if (ctx->pc != 0x1FF454u) { return; }
    ctx->pc = 0x1FF454u;
    // 0x1ff454: 0x72202628
    ctx->pc = 0x1ff454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff458: 0x26050070
    ctx->pc = 0x1ff458u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff45c: 0x2406000a
    ctx->pc = 0x1ff45cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ff460: 0xc07fc64
    ctx->pc = 0x1FF460u;
    SET_GPR_U32(ctx, 31, 0x1FF468u);
    ctx->pc = 0x1FF464u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF468u; }
        else if (ctx->pc != 0x1FF468u) { ctx->pc = 0x1FF468u; }
    }
    if (ctx->pc != 0x1FF468u) { return; }
    ctx->pc = 0x1FF468u;
    // 0x1ff468: 0x72202628
    ctx->pc = 0x1ff468u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff46c: 0x26050070
    ctx->pc = 0x1ff46cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff470: 0x24060007
    ctx->pc = 0x1ff470u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ff474: 0xc07fc64
    ctx->pc = 0x1FF474u;
    SET_GPR_U32(ctx, 31, 0x1FF47Cu);
    ctx->pc = 0x1FF478u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF47Cu; }
        else if (ctx->pc != 0x1FF47Cu) { ctx->pc = 0x1FF47Cu; }
    }
    if (ctx->pc != 0x1FF47Cu) { return; }
    ctx->pc = 0x1FF47Cu;
    // 0x1ff47c: 0x72202628
    ctx->pc = 0x1ff47cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff480: 0x26050070
    ctx->pc = 0x1ff480u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff484: 0x2406000b
    ctx->pc = 0x1ff484u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ff488: 0xc07fc64
    ctx->pc = 0x1FF488u;
    SET_GPR_U32(ctx, 31, 0x1FF490u);
    ctx->pc = 0x1FF48Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF490u; }
        else if (ctx->pc != 0x1FF490u) { ctx->pc = 0x1FF490u; }
    }
    if (ctx->pc != 0x1FF490u) { return; }
    ctx->pc = 0x1FF490u;
    // 0x1ff490: 0x72202628
    ctx->pc = 0x1ff490u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff494: 0x26050070
    ctx->pc = 0x1ff494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff498: 0x2406000e
    ctx->pc = 0x1ff498u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ff49c: 0xc07fc64
    ctx->pc = 0x1FF49Cu;
    SET_GPR_U32(ctx, 31, 0x1FF4A4u);
    ctx->pc = 0x1FF4A0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4A4u; }
        else if (ctx->pc != 0x1FF4A4u) { ctx->pc = 0x1FF4A4u; }
    }
    if (ctx->pc != 0x1FF4A4u) { return; }
    ctx->pc = 0x1FF4A4u;
    // 0x1ff4a4: 0x72202628
    ctx->pc = 0x1ff4a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff4a8: 0x26050070
    ctx->pc = 0x1ff4a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff4ac: 0x24060012
    ctx->pc = 0x1ff4acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ff4b0: 0xc07fc64
    ctx->pc = 0x1FF4B0u;
    SET_GPR_U32(ctx, 31, 0x1FF4B8u);
    ctx->pc = 0x1FF4B4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 17));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4B8u; }
        else if (ctx->pc != 0x1FF4B8u) { ctx->pc = 0x1FF4B8u; }
    }
    if (ctx->pc != 0x1FF4B8u) { return; }
    ctx->pc = 0x1FF4B8u;
    // 0x1ff4b8: 0x72202628
    ctx->pc = 0x1ff4b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff4bc: 0x26050070
    ctx->pc = 0x1ff4bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff4c0: 0x2406000f
    ctx->pc = 0x1ff4c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ff4c4: 0xc07fc64
    ctx->pc = 0x1FF4C4u;
    SET_GPR_U32(ctx, 31, 0x1FF4CCu);
    ctx->pc = 0x1FF4C8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4CCu; }
        else if (ctx->pc != 0x1FF4CCu) { ctx->pc = 0x1FF4CCu; }
    }
    if (ctx->pc != 0x1FF4CCu) { return; }
    ctx->pc = 0x1FF4CCu;
    // 0x1ff4cc: 0x72202628
    ctx->pc = 0x1ff4ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff4d0: 0x26050070
    ctx->pc = 0x1ff4d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff4d4: 0x24060013
    ctx->pc = 0x1ff4d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ff4d8: 0xc07fc64
    ctx->pc = 0x1FF4D8u;
    SET_GPR_U32(ctx, 31, 0x1FF4E0u);
    ctx->pc = 0x1FF4DCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4E0u; }
        else if (ctx->pc != 0x1FF4E0u) { ctx->pc = 0x1FF4E0u; }
    }
    if (ctx->pc != 0x1FF4E0u) { return; }
    ctx->pc = 0x1FF4E0u;
    // 0x1ff4e0: 0x72202628
    ctx->pc = 0x1ff4e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff4e4: 0x26050070
    ctx->pc = 0x1ff4e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff4e8: 0x24060010
    ctx->pc = 0x1ff4e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff4ec: 0xc07fc64
    ctx->pc = 0x1FF4ECu;
    SET_GPR_U32(ctx, 31, 0x1FF4F4u);
    ctx->pc = 0x1FF4F0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4F4u; }
        else if (ctx->pc != 0x1FF4F4u) { ctx->pc = 0x1FF4F4u; }
    }
    if (ctx->pc != 0x1FF4F4u) { return; }
    ctx->pc = 0x1FF4F4u;
    // 0x1ff4f4: 0x72202628
    ctx->pc = 0x1ff4f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff4f8: 0x26050070
    ctx->pc = 0x1ff4f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff4fc: 0x24060014
    ctx->pc = 0x1ff4fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ff500: 0xc07fc64
    ctx->pc = 0x1FF500u;
    SET_GPR_U32(ctx, 31, 0x1FF508u);
    ctx->pc = 0x1FF504u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF508u; }
        else if (ctx->pc != 0x1FF508u) { ctx->pc = 0x1FF508u; }
    }
    if (ctx->pc != 0x1FF508u) { return; }
    ctx->pc = 0x1FF508u;
    // 0x1ff508: 0x3c0400a9
    ctx->pc = 0x1ff508u;
    SET_GPR_U32(ctx, 4, ((uint32_t)169 << 16));
    // 0x1ff50c: 0x34830016
    ctx->pc = 0x1ff50cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 22));
    // 0x1ff510: 0xae030bb0
    ctx->pc = 0x1ff510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 3));
    // 0x1ff514: 0x34830022
    ctx->pc = 0x1ff514u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 34));
    // 0x1ff518: 0xae0307f0
    ctx->pc = 0x1ff518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 3));
    // 0x1ff51c: 0x34830015
    ctx->pc = 0x1ff51cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 21));
    // 0x1ff520: 0x100000b8
    ctx->pc = 0x1FF520u;
    {
        const bool branch_taken_0x1ff520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF524u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 3));
        if (branch_taken_0x1ff520) {
            ctx->pc = 0x1FF804u;
            goto label_1ff804;
        }
    }
    ctx->pc = 0x1FF528u;
label_1ff528:
    // 0x1ff528: 0x24060002
    ctx->pc = 0x1ff528u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff52c: 0xc07fc64
    ctx->pc = 0x1FF52Cu;
    SET_GPR_U32(ctx, 31, 0x1FF534u);
    ctx->pc = 0x1FF530u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 39));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF534u; }
        else if (ctx->pc != 0x1FF534u) { ctx->pc = 0x1FF534u; }
    }
    if (ctx->pc != 0x1FF534u) { return; }
    ctx->pc = 0x1FF534u;
    // 0x1ff534: 0x72202628
    ctx->pc = 0x1ff534u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff538: 0x26050070
    ctx->pc = 0x1ff538u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff53c: 0x24060006
    ctx->pc = 0x1ff53cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ff540: 0xc07fc64
    ctx->pc = 0x1FF540u;
    SET_GPR_U32(ctx, 31, 0x1FF548u);
    ctx->pc = 0x1FF544u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF548u; }
        else if (ctx->pc != 0x1FF548u) { ctx->pc = 0x1FF548u; }
    }
    if (ctx->pc != 0x1FF548u) { return; }
    ctx->pc = 0x1FF548u;
    // 0x1ff548: 0x72202628
    ctx->pc = 0x1ff548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff54c: 0x26050070
    ctx->pc = 0x1ff54cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff550: 0x2406000a
    ctx->pc = 0x1ff550u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ff554: 0xc07fc64
    ctx->pc = 0x1FF554u;
    SET_GPR_U32(ctx, 31, 0x1FF55Cu);
    ctx->pc = 0x1FF558u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 42));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF55Cu; }
        else if (ctx->pc != 0x1FF55Cu) { ctx->pc = 0x1FF55Cu; }
    }
    if (ctx->pc != 0x1FF55Cu) { return; }
    ctx->pc = 0x1FF55Cu;
    // 0x1ff55c: 0x72202628
    ctx->pc = 0x1ff55cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff560: 0x26050070
    ctx->pc = 0x1ff560u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff564: 0x24060007
    ctx->pc = 0x1ff564u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ff568: 0xc07fc64
    ctx->pc = 0x1FF568u;
    SET_GPR_U32(ctx, 31, 0x1FF570u);
    ctx->pc = 0x1FF56Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 49));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF570u; }
        else if (ctx->pc != 0x1FF570u) { ctx->pc = 0x1FF570u; }
    }
    if (ctx->pc != 0x1FF570u) { return; }
    ctx->pc = 0x1FF570u;
    // 0x1ff570: 0x72202628
    ctx->pc = 0x1ff570u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff574: 0x26050070
    ctx->pc = 0x1ff574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff578: 0x2406000b
    ctx->pc = 0x1ff578u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ff57c: 0xc07fc64
    ctx->pc = 0x1FF57Cu;
    SET_GPR_U32(ctx, 31, 0x1FF584u);
    ctx->pc = 0x1FF580u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 43));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF584u; }
        else if (ctx->pc != 0x1FF584u) { ctx->pc = 0x1FF584u; }
    }
    if (ctx->pc != 0x1FF584u) { return; }
    ctx->pc = 0x1FF584u;
    // 0x1ff584: 0x72202628
    ctx->pc = 0x1ff584u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff588: 0x26050070
    ctx->pc = 0x1ff588u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff58c: 0x2406000e
    ctx->pc = 0x1ff58cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ff590: 0xc07fc64
    ctx->pc = 0x1FF590u;
    SET_GPR_U32(ctx, 31, 0x1FF598u);
    ctx->pc = 0x1FF594u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 51));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF598u; }
        else if (ctx->pc != 0x1FF598u) { ctx->pc = 0x1FF598u; }
    }
    if (ctx->pc != 0x1FF598u) { return; }
    ctx->pc = 0x1FF598u;
    // 0x1ff598: 0x72202628
    ctx->pc = 0x1ff598u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff59c: 0x26050070
    ctx->pc = 0x1ff59cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff5a0: 0x24060012
    ctx->pc = 0x1ff5a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ff5a4: 0xc07fc64
    ctx->pc = 0x1FF5A4u;
    SET_GPR_U32(ctx, 31, 0x1FF5ACu);
    ctx->pc = 0x1FF5A8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 45));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5ACu; }
        else if (ctx->pc != 0x1FF5ACu) { ctx->pc = 0x1FF5ACu; }
    }
    if (ctx->pc != 0x1FF5ACu) { return; }
    ctx->pc = 0x1FF5ACu;
    // 0x1ff5ac: 0x72202628
    ctx->pc = 0x1ff5acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff5b0: 0x26050070
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff5b4: 0x2406000f
    ctx->pc = 0x1ff5b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ff5b8: 0xc07fc64
    ctx->pc = 0x1FF5B8u;
    SET_GPR_U32(ctx, 31, 0x1FF5C0u);
    ctx->pc = 0x1FF5BCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 52));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5C0u; }
        else if (ctx->pc != 0x1FF5C0u) { ctx->pc = 0x1FF5C0u; }
    }
    if (ctx->pc != 0x1FF5C0u) { return; }
    ctx->pc = 0x1FF5C0u;
    // 0x1ff5c0: 0x72202628
    ctx->pc = 0x1ff5c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff5c4: 0x26050070
    ctx->pc = 0x1ff5c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff5c8: 0x24060013
    ctx->pc = 0x1ff5c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ff5cc: 0xc07fc64
    ctx->pc = 0x1FF5CCu;
    SET_GPR_U32(ctx, 31, 0x1FF5D4u);
    ctx->pc = 0x1FF5D0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 46));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5D4u; }
        else if (ctx->pc != 0x1FF5D4u) { ctx->pc = 0x1FF5D4u; }
    }
    if (ctx->pc != 0x1FF5D4u) { return; }
    ctx->pc = 0x1FF5D4u;
    // 0x1ff5d4: 0x72202628
    ctx->pc = 0x1ff5d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff5d8: 0x26050070
    ctx->pc = 0x1ff5d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff5dc: 0x24060010
    ctx->pc = 0x1ff5dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff5e0: 0xc07fc64
    ctx->pc = 0x1FF5E0u;
    SET_GPR_U32(ctx, 31, 0x1FF5E8u);
    ctx->pc = 0x1FF5E4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5E8u; }
        else if (ctx->pc != 0x1FF5E8u) { ctx->pc = 0x1FF5E8u; }
    }
    if (ctx->pc != 0x1FF5E8u) { return; }
    ctx->pc = 0x1FF5E8u;
    // 0x1ff5e8: 0x72202628
    ctx->pc = 0x1ff5e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff5ec: 0x26050070
    ctx->pc = 0x1ff5ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff5f0: 0x24060014
    ctx->pc = 0x1ff5f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ff5f4: 0xc07fc64
    ctx->pc = 0x1FF5F4u;
    SET_GPR_U32(ctx, 31, 0x1FF5FCu);
    ctx->pc = 0x1FF5F8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 41));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5FCu; }
        else if (ctx->pc != 0x1FF5FCu) { ctx->pc = 0x1FF5FCu; }
    }
    if (ctx->pc != 0x1FF5FCu) { return; }
    ctx->pc = 0x1FF5FCu;
    // 0x1ff5fc: 0x3c0400ab
    ctx->pc = 0x1ff5fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)171 << 16));
    // 0x1ff600: 0x34830036
    ctx->pc = 0x1ff600u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 54));
    // 0x1ff604: 0xae030bb0
    ctx->pc = 0x1ff604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 3));
    // 0x1ff608: 0x3483003d
    ctx->pc = 0x1ff608u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 61));
    // 0x1ff60c: 0xae0307f0
    ctx->pc = 0x1ff60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 3));
    // 0x1ff610: 0x3483002e
    ctx->pc = 0x1ff610u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 46));
    // 0x1ff614: 0x1000007b
    ctx->pc = 0x1FF614u;
    {
        const bool branch_taken_0x1ff614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF618u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 3));
        if (branch_taken_0x1ff614) {
            ctx->pc = 0x1FF804u;
            goto label_1ff804;
        }
    }
    ctx->pc = 0x1FF61Cu;
label_1ff61c:
    // 0x1ff61c: 0x24060001
    ctx->pc = 0x1ff61cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff620: 0xc07fc64
    ctx->pc = 0x1FF620u;
    SET_GPR_U32(ctx, 31, 0x1FF628u);
    ctx->pc = 0x1FF624u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 425));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF628u; }
        else if (ctx->pc != 0x1FF628u) { ctx->pc = 0x1FF628u; }
    }
    if (ctx->pc != 0x1FF628u) { return; }
    ctx->pc = 0x1FF628u;
    // 0x1ff628: 0x72202628
    ctx->pc = 0x1ff628u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff62c: 0x26050070
    ctx->pc = 0x1ff62cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff630: 0x24060004
    ctx->pc = 0x1ff630u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ff634: 0xc07fc64
    ctx->pc = 0x1FF634u;
    SET_GPR_U32(ctx, 31, 0x1FF63Cu);
    ctx->pc = 0x1FF638u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 427));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF63Cu; }
        else if (ctx->pc != 0x1FF63Cu) { ctx->pc = 0x1FF63Cu; }
    }
    if (ctx->pc != 0x1FF63Cu) { return; }
    ctx->pc = 0x1FF63Cu;
    // 0x1ff63c: 0x72202628
    ctx->pc = 0x1ff63cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff640: 0x26050070
    ctx->pc = 0x1ff640u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff644: 0x24060009
    ctx->pc = 0x1ff644u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ff648: 0xc07fc64
    ctx->pc = 0x1FF648u;
    SET_GPR_U32(ctx, 31, 0x1FF650u);
    ctx->pc = 0x1FF64Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 420));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF650u; }
        else if (ctx->pc != 0x1FF650u) { ctx->pc = 0x1FF650u; }
    }
    if (ctx->pc != 0x1FF650u) { return; }
    ctx->pc = 0x1FF650u;
    // 0x1ff650: 0x72202628
    ctx->pc = 0x1ff650u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff654: 0x26050070
    ctx->pc = 0x1ff654u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff658: 0x24060005
    ctx->pc = 0x1ff658u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ff65c: 0xc07fc64
    ctx->pc = 0x1FF65Cu;
    SET_GPR_U32(ctx, 31, 0x1FF664u);
    ctx->pc = 0x1FF660u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 428));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF664u; }
        else if (ctx->pc != 0x1FF664u) { ctx->pc = 0x1FF664u; }
    }
    if (ctx->pc != 0x1FF664u) { return; }
    ctx->pc = 0x1FF664u;
    // 0x1ff664: 0x72202628
    ctx->pc = 0x1ff664u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff668: 0x26050070
    ctx->pc = 0x1ff668u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff66c: 0x2406000a
    ctx->pc = 0x1ff66cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ff670: 0xc07fc64
    ctx->pc = 0x1FF670u;
    SET_GPR_U32(ctx, 31, 0x1FF678u);
    ctx->pc = 0x1FF674u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 421));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF678u; }
        else if (ctx->pc != 0x1FF678u) { ctx->pc = 0x1FF678u; }
    }
    if (ctx->pc != 0x1FF678u) { return; }
    ctx->pc = 0x1FF678u;
    // 0x1ff678: 0x72202628
    ctx->pc = 0x1ff678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff67c: 0x26050070
    ctx->pc = 0x1ff67cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff680: 0x2406000d
    ctx->pc = 0x1ff680u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ff684: 0xc07fc64
    ctx->pc = 0x1FF684u;
    SET_GPR_U32(ctx, 31, 0x1FF68Cu);
    ctx->pc = 0x1FF688u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 429));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF68Cu; }
        else if (ctx->pc != 0x1FF68Cu) { ctx->pc = 0x1FF68Cu; }
    }
    if (ctx->pc != 0x1FF68Cu) { return; }
    ctx->pc = 0x1FF68Cu;
    // 0x1ff68c: 0x72202628
    ctx->pc = 0x1ff68cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff690: 0x26050070
    ctx->pc = 0x1ff690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff694: 0x24060010
    ctx->pc = 0x1ff694u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff698: 0xc07fc64
    ctx->pc = 0x1FF698u;
    SET_GPR_U32(ctx, 31, 0x1FF6A0u);
    ctx->pc = 0x1FF69Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 422));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF6A0u; }
        else if (ctx->pc != 0x1FF6A0u) { ctx->pc = 0x1FF6A0u; }
    }
    if (ctx->pc != 0x1FF6A0u) { return; }
    ctx->pc = 0x1FF6A0u;
    // 0x1ff6a0: 0x72202628
    ctx->pc = 0x1ff6a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff6a4: 0x26050070
    ctx->pc = 0x1ff6a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff6a8: 0x2406000e
    ctx->pc = 0x1ff6a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ff6ac: 0xc07fc64
    ctx->pc = 0x1FF6ACu;
    SET_GPR_U32(ctx, 31, 0x1FF6B4u);
    ctx->pc = 0x1FF6B0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 430));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF6B4u; }
        else if (ctx->pc != 0x1FF6B4u) { ctx->pc = 0x1FF6B4u; }
    }
    if (ctx->pc != 0x1FF6B4u) { return; }
    ctx->pc = 0x1FF6B4u;
    // 0x1ff6b4: 0x72202628
    ctx->pc = 0x1ff6b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff6b8: 0x26050070
    ctx->pc = 0x1ff6b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff6bc: 0x24060011
    ctx->pc = 0x1ff6bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ff6c0: 0xc07fc64
    ctx->pc = 0x1FF6C0u;
    SET_GPR_U32(ctx, 31, 0x1FF6C8u);
    ctx->pc = 0x1FF6C4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 423));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF6C8u; }
        else if (ctx->pc != 0x1FF6C8u) { ctx->pc = 0x1FF6C8u; }
    }
    if (ctx->pc != 0x1FF6C8u) { return; }
    ctx->pc = 0x1FF6C8u;
    // 0x1ff6c8: 0x72202628
    ctx->pc = 0x1ff6c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff6cc: 0x26050070
    ctx->pc = 0x1ff6ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff6d0: 0x2406000f
    ctx->pc = 0x1ff6d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ff6d4: 0xc07fc64
    ctx->pc = 0x1FF6D4u;
    SET_GPR_U32(ctx, 31, 0x1FF6DCu);
    ctx->pc = 0x1FF6D8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 426));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF6DCu; }
        else if (ctx->pc != 0x1FF6DCu) { ctx->pc = 0x1FF6DCu; }
    }
    if (ctx->pc != 0x1FF6DCu) { return; }
    ctx->pc = 0x1FF6DCu;
    // 0x1ff6dc: 0x72202628
    ctx->pc = 0x1ff6dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff6e0: 0x26050070
    ctx->pc = 0x1ff6e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff6e4: 0x24060012
    ctx->pc = 0x1ff6e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ff6e8: 0xc07fc64
    ctx->pc = 0x1FF6E8u;
    SET_GPR_U32(ctx, 31, 0x1FF6F0u);
    ctx->pc = 0x1FF6ECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 419));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF6F0u; }
        else if (ctx->pc != 0x1FF6F0u) { ctx->pc = 0x1FF6F0u; }
    }
    if (ctx->pc != 0x1FF6F0u) { return; }
    ctx->pc = 0x1FF6F0u;
    // 0x1ff6f0: 0x3c040091
    ctx->pc = 0x1ff6f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)145 << 16));
    // 0x1ff6f4: 0x34830013
    ctx->pc = 0x1ff6f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 19));
    // 0x1ff6f8: 0xae030ac0
    ctx->pc = 0x1ff6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2752), GPR_U32(ctx, 3));
    // 0x1ff6fc: 0x3483001b
    ctx->pc = 0x1ff6fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 27));
    // 0x1ff700: 0xae030610
    ctx->pc = 0x1ff700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 3));
    // 0x1ff704: 0x3483000c
    ctx->pc = 0x1ff704u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 12));
    // 0x1ff708: 0x1000003e
    ctx->pc = 0x1FF708u;
    {
        const bool branch_taken_0x1ff708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF70Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        if (branch_taken_0x1ff708) {
            ctx->pc = 0x1FF804u;
            goto label_1ff804;
        }
    }
    ctx->pc = 0x1FF710u;
label_1ff710:
    // 0x1ff710: 0x26050070
    ctx->pc = 0x1ff710u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff714: 0x24060001
    ctx->pc = 0x1ff714u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff718: 0xc07fc64
    ctx->pc = 0x1FF718u;
    SET_GPR_U32(ctx, 31, 0x1FF720u);
    ctx->pc = 0x1FF71Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 469));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF720u; }
        else if (ctx->pc != 0x1FF720u) { ctx->pc = 0x1FF720u; }
    }
    if (ctx->pc != 0x1FF720u) { return; }
    ctx->pc = 0x1FF720u;
    // 0x1ff720: 0x72202628
    ctx->pc = 0x1ff720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff724: 0x26050070
    ctx->pc = 0x1ff724u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff728: 0x24060004
    ctx->pc = 0x1ff728u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ff72c: 0xc07fc64
    ctx->pc = 0x1FF72Cu;
    SET_GPR_U32(ctx, 31, 0x1FF734u);
    ctx->pc = 0x1FF730u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 471));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF734u; }
        else if (ctx->pc != 0x1FF734u) { ctx->pc = 0x1FF734u; }
    }
    if (ctx->pc != 0x1FF734u) { return; }
    ctx->pc = 0x1FF734u;
    // 0x1ff734: 0x72202628
    ctx->pc = 0x1ff734u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff738: 0x26050070
    ctx->pc = 0x1ff738u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff73c: 0x24060008
    ctx->pc = 0x1ff73cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ff740: 0xc07fc64
    ctx->pc = 0x1FF740u;
    SET_GPR_U32(ctx, 31, 0x1FF748u);
    ctx->pc = 0x1FF744u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 464));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF748u; }
        else if (ctx->pc != 0x1FF748u) { ctx->pc = 0x1FF748u; }
    }
    if (ctx->pc != 0x1FF748u) { return; }
    ctx->pc = 0x1FF748u;
    // 0x1ff748: 0x72202628
    ctx->pc = 0x1ff748u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff74c: 0x26050070
    ctx->pc = 0x1ff74cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff750: 0x24060005
    ctx->pc = 0x1ff750u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ff754: 0xc07fc64
    ctx->pc = 0x1FF754u;
    SET_GPR_U32(ctx, 31, 0x1FF75Cu);
    ctx->pc = 0x1FF758u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 472));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF75Cu; }
        else if (ctx->pc != 0x1FF75Cu) { ctx->pc = 0x1FF75Cu; }
    }
    if (ctx->pc != 0x1FF75Cu) { return; }
    ctx->pc = 0x1FF75Cu;
    // 0x1ff75c: 0x72202628
    ctx->pc = 0x1ff75cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff760: 0x26050070
    ctx->pc = 0x1ff760u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff764: 0x24060009
    ctx->pc = 0x1ff764u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ff768: 0xc07fc64
    ctx->pc = 0x1FF768u;
    SET_GPR_U32(ctx, 31, 0x1FF770u);
    ctx->pc = 0x1FF76Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 465));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF770u; }
        else if (ctx->pc != 0x1FF770u) { ctx->pc = 0x1FF770u; }
    }
    if (ctx->pc != 0x1FF770u) { return; }
    ctx->pc = 0x1FF770u;
    // 0x1ff770: 0x72202628
    ctx->pc = 0x1ff770u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff774: 0x26050070
    ctx->pc = 0x1ff774u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff778: 0x2406000c
    ctx->pc = 0x1ff778u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ff77c: 0xc07fc64
    ctx->pc = 0x1FF77Cu;
    SET_GPR_U32(ctx, 31, 0x1FF784u);
    ctx->pc = 0x1FF780u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 473));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF784u; }
        else if (ctx->pc != 0x1FF784u) { ctx->pc = 0x1FF784u; }
    }
    if (ctx->pc != 0x1FF784u) { return; }
    ctx->pc = 0x1FF784u;
    // 0x1ff784: 0x72202628
    ctx->pc = 0x1ff784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff788: 0x26050070
    ctx->pc = 0x1ff788u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff78c: 0x2406000f
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ff790: 0xc07fc64
    ctx->pc = 0x1FF790u;
    SET_GPR_U32(ctx, 31, 0x1FF798u);
    ctx->pc = 0x1FF794u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 466));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF798u; }
        else if (ctx->pc != 0x1FF798u) { ctx->pc = 0x1FF798u; }
    }
    if (ctx->pc != 0x1FF798u) { return; }
    ctx->pc = 0x1FF798u;
    // 0x1ff798: 0x72202628
    ctx->pc = 0x1ff798u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff79c: 0x26050070
    ctx->pc = 0x1ff79cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff7a0: 0x2406000d
    ctx->pc = 0x1ff7a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ff7a4: 0xc07fc64
    ctx->pc = 0x1FF7A4u;
    SET_GPR_U32(ctx, 31, 0x1FF7ACu);
    ctx->pc = 0x1FF7A8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 474));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF7ACu; }
        else if (ctx->pc != 0x1FF7ACu) { ctx->pc = 0x1FF7ACu; }
    }
    if (ctx->pc != 0x1FF7ACu) { return; }
    ctx->pc = 0x1FF7ACu;
    // 0x1ff7ac: 0x72202628
    ctx->pc = 0x1ff7acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff7b0: 0x26050070
    ctx->pc = 0x1ff7b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff7b4: 0x24060010
    ctx->pc = 0x1ff7b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff7b8: 0xc07fc64
    ctx->pc = 0x1FF7B8u;
    SET_GPR_U32(ctx, 31, 0x1FF7C0u);
    ctx->pc = 0x1FF7BCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 467));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF7C0u; }
        else if (ctx->pc != 0x1FF7C0u) { ctx->pc = 0x1FF7C0u; }
    }
    if (ctx->pc != 0x1FF7C0u) { return; }
    ctx->pc = 0x1FF7C0u;
    // 0x1ff7c0: 0x72202628
    ctx->pc = 0x1ff7c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff7c4: 0x26050070
    ctx->pc = 0x1ff7c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff7c8: 0x2406000e
    ctx->pc = 0x1ff7c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ff7cc: 0xc07fc64
    ctx->pc = 0x1FF7CCu;
    SET_GPR_U32(ctx, 31, 0x1FF7D4u);
    ctx->pc = 0x1FF7D0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 470));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF7D4u; }
        else if (ctx->pc != 0x1FF7D4u) { ctx->pc = 0x1FF7D4u; }
    }
    if (ctx->pc != 0x1FF7D4u) { return; }
    ctx->pc = 0x1FF7D4u;
    // 0x1ff7d4: 0x72202628
    ctx->pc = 0x1ff7d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff7d8: 0x26050070
    ctx->pc = 0x1ff7d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff7dc: 0x24060011
    ctx->pc = 0x1ff7dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ff7e0: 0xc07fc64
    ctx->pc = 0x1FF7E0u;
    SET_GPR_U32(ctx, 31, 0x1FF7E8u);
    ctx->pc = 0x1FF7E4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 463));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF7E8u; }
        else if (ctx->pc != 0x1FF7E8u) { ctx->pc = 0x1FF7E8u; }
    }
    if (ctx->pc != 0x1FF7E8u) { return; }
    ctx->pc = 0x1FF7E8u;
    // 0x1ff7e8: 0x3c040093
    ctx->pc = 0x1ff7e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)147 << 16));
    // 0x1ff7ec: 0x3483000f
    ctx->pc = 0x1ff7ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 15));
    // 0x1ff7f0: 0xae0309d0
    ctx->pc = 0x1ff7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 3));
    // 0x1ff7f4: 0x34830017
    ctx->pc = 0x1ff7f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 23));
    // 0x1ff7f8: 0xae030610
    ctx->pc = 0x1ff7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 3));
    // 0x1ff7fc: 0x34830008
    ctx->pc = 0x1ff7fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 8));
    // 0x1ff800: 0xae030250
    ctx->pc = 0x1ff800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_1ff804:
    // 0x1ff804: 0x7bbf0020
    ctx->pc = 0x1ff804u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff808:
    // 0x1ff808: 0x7bb10010
    ctx->pc = 0x1ff808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff80c: 0x7bb00000
    ctx->pc = 0x1ff80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff810: 0x3e00008
    ctx->pc = 0x1FF810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF278u: goto label_1ff278;
            case 0x1FF368u: goto label_1ff368;
            case 0x1FF434u: goto label_1ff434;
            case 0x1FF528u: goto label_1ff528;
            case 0x1FF61Cu: goto label_1ff61c;
            case 0x1FF710u: goto label_1ff710;
            case 0x1FF804u: goto label_1ff804;
            case 0x1FF808u: goto label_1ff808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF818u;
}
