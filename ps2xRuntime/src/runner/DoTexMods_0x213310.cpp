#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoTexMods
// Address: 0x213310 - 0x213390
void DoTexMods_0x213310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x213310u;

    // 0x213310: 0x27bdffb0
    ctx->pc = 0x213310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x213314: 0xffbf0040
    ctx->pc = 0x213314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x213318: 0xffb30030
    ctx->pc = 0x213318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21331c: 0xffb20020
    ctx->pc = 0x21331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x213320: 0xffb10010
    ctx->pc = 0x213320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x213324: 0x80882d
    ctx->pc = 0x213324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213328: 0x12200012
    ctx->pc = 0x213328u;
    {
        const bool branch_taken_0x213328 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x21332Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x213328) {
            ctx->pc = 0x213374u;
            goto label_213374;
        }
    }
    ctx->pc = 0x213330u;
    // 0x213330: 0x8e220008
    ctx->pc = 0x213330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x213334: 0x1840000f
    ctx->pc = 0x213334u;
    {
        const bool branch_taken_0x213334 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213338u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x213334) {
            ctx->pc = 0x213374u;
            goto label_213374;
        }
    }
    ctx->pc = 0x21333Cu;
    // 0x21333c: 0x24130058
    ctx->pc = 0x21333cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 88));
    // 0x213340: 0x2412ffff
    ctx->pc = 0x213340u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x213344: 0x2131818
    ctx->pc = 0x213344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_213348:
    // 0x213348: 0x8e22000c
    ctx->pc = 0x213348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21334c: 0x622021
    ctx->pc = 0x21334cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213350: 0x84820000
    ctx->pc = 0x213350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213354: 0x14520003
    ctx->pc = 0x213354u;
    {
        const bool branch_taken_0x213354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x213358u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x213354) {
            ctx->pc = 0x213364u;
            goto label_213364;
        }
    }
    ctx->pc = 0x21335Cu;
    // 0x21335c: 0xc084392
    ctx->pc = 0x21335Cu;
    SET_GPR_U32(ctx, 31, 0x213364u);
    ctx->pc = 0x210E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexModSub_0x210e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213364u; }
    }
    if (ctx->pc != 0x213364u) { return; }
    ctx->pc = 0x213364u;
label_213364:
    // 0x213364: 0x8e220008
    ctx->pc = 0x213364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x213368: 0x202102a
    ctx->pc = 0x213368u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x21336c: 0x1440fff6
    ctx->pc = 0x21336Cu;
    {
        const bool branch_taken_0x21336c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x213370u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x21336c) {
            ctx->pc = 0x213348u;
            goto label_213348;
        }
    }
    ctx->pc = 0x213374u;
label_213374:
    // 0x213374: 0xdfbf0040
    ctx->pc = 0x213374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213378: 0xdfb30030
    ctx->pc = 0x213378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21337c: 0xdfb20020
    ctx->pc = 0x21337cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213380: 0xdfb10010
    ctx->pc = 0x213380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213384: 0xdfb00000
    ctx->pc = 0x213384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213388: 0x3e00008
    ctx->pc = 0x213388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21338Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213348u: goto label_213348;
            case 0x213364u: goto label_213364;
            case 0x213374u: goto label_213374;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213390u;
}
