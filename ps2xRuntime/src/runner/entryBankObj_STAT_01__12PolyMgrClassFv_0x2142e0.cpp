#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj_STAT_01__12PolyMgrClassFv
// Address: 0x2142e0 - 0x21439c
void entryBankObj_STAT_01__12PolyMgrClassFv_0x2142e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj_STAT_01__12PolyMgrClassFv");


    ctx->pc = 0x2142e0u;

    // 0x2142e0: 0x27bdffd0
    ctx->pc = 0x2142e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2142e4: 0x7fbf0020
    ctx->pc = 0x2142e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2142e8: 0x7fb10010
    ctx->pc = 0x2142e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2142ec: 0x7fb00000
    ctx->pc = 0x2142ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2142f0: 0x70808e28
    ctx->pc = 0x2142f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2142f4: 0x3c010050
    ctx->pc = 0x2142f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2142f8: 0x8c240c68
    ctx->pc = 0x2142f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3176)));
    // 0x2142fc: 0xc05b018
    ctx->pc = 0x2142FCu;
    SET_GPR_U32(ctx, 31, 0x214304u);
    ctx->pc = 0x214300u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214304u; }
        else if (ctx->pc != 0x214304u) { ctx->pc = 0x214304u; }
    }
    if (ctx->pc != 0x214304u) { return; }
    ctx->pc = 0x214304u;
    // 0x214304: 0x24030004
    ctx->pc = 0x214304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x214308: 0x1443000f
    ctx->pc = 0x214308u;
    {
        const bool branch_taken_0x214308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x21430Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x214308) {
            ctx->pc = 0x214348u;
            goto label_214348;
        }
    }
    ctx->pc = 0x214310u;
    // 0x214310: 0x3c010091
    ctx->pc = 0x214310u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214314: 0x8c261974
    ctx->pc = 0x214314u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 6516)));
    // 0x214318: 0x8f828d10
    ctx->pc = 0x214318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x21431c: 0x3c010050
    ctx->pc = 0x21431cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x214320: 0x8c240c68
    ctx->pc = 0x214320u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3176)));
    // 0x214324: 0x24420001
    ctx->pc = 0x214324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x214328: 0x3c010091
    ctx->pc = 0x214328u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x21432c: 0x8c251970
    ctx->pc = 0x21432cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 6512)));
    // 0x214330: 0xc05aeba
    ctx->pc = 0x214330u;
    SET_GPR_U32(ctx, 31, 0x214338u);
    ctx->pc = 0x214334u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214338u; }
        else if (ctx->pc != 0x214338u) { ctx->pc = 0x214338u; }
    }
    if (ctx->pc != 0x214338u) { return; }
    ctx->pc = 0x214338u;
    // 0x214338: 0x3c010050
    ctx->pc = 0x214338u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21433c: 0xc05b018
    ctx->pc = 0x21433Cu;
    SET_GPR_U32(ctx, 31, 0x214344u);
    ctx->pc = 0x214340u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3176)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214344u; }
        else if (ctx->pc != 0x214344u) { ctx->pc = 0x214344u; }
    }
    if (ctx->pc != 0x214344u) { return; }
    ctx->pc = 0x214344u;
    // 0x214344: 0x24030001
    ctx->pc = 0x214344u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_214348:
    // 0x214348: 0x10430004
    ctx->pc = 0x214348u;
    {
        const bool branch_taken_0x214348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x21434Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x214348) {
            ctx->pc = 0x21435Cu;
            goto label_21435c;
        }
    }
    ctx->pc = 0x214350u;
    // 0x214350: 0x24030003
    ctx->pc = 0x214350u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x214354: 0x14430006
    ctx->pc = 0x214354u;
    {
        const bool branch_taken_0x214354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x214354) {
            ctx->pc = 0x214370u;
            goto label_214370;
        }
    }
    ctx->pc = 0x21435Cu;
label_21435c:
    // 0x21435c: 0xc05ae0c
    ctx->pc = 0x21435Cu;
    SET_GPR_U32(ctx, 31, 0x214364u);
    ctx->pc = 0x214360u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3176)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214364u; }
        else if (ctx->pc != 0x214364u) { ctx->pc = 0x214364u; }
    }
    if (ctx->pc != 0x214364u) { return; }
    ctx->pc = 0x214364u;
    // 0x214364: 0x3c010050
    ctx->pc = 0x214364u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x214368: 0xac200c68
    ctx->pc = 0x214368u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3176), GPR_U32(ctx, 0));
    // 0x21436c: 0x24100001
    ctx->pc = 0x21436cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_214370:
    // 0x214370: 0x12000004
    ctx->pc = 0x214370u;
    {
        const bool branch_taken_0x214370 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x214370) {
            ctx->pc = 0x214384u;
            goto label_214384;
        }
    }
    ctx->pc = 0x214378u;
    // 0x214378: 0x8e220000
    ctx->pc = 0x214378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21437c: 0x24030003
    ctx->pc = 0x21437cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x214380: 0xac43000c
    ctx->pc = 0x214380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_214384:
    // 0x214384: 0x7bbf0020
    ctx->pc = 0x214384u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214388: 0x7bb10010
    ctx->pc = 0x214388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21438c: 0x7bb00000
    ctx->pc = 0x21438cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214390: 0x24020001
    ctx->pc = 0x214390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x214394: 0x3e00008
    ctx->pc = 0x214394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214398u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214348u: goto label_214348;
            case 0x21435Cu: goto label_21435c;
            case 0x214370u: goto label_214370;
            case 0x214384u: goto label_214384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21439Cu;
}
