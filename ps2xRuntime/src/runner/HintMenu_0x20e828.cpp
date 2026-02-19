#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: HintMenu
// Address: 0x20e828 - 0x20e8bc
void HintMenu_0x20e828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20e828u;

    // 0x20e828: 0x27bdffe0
    ctx->pc = 0x20e828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e82c: 0xffbf0010
    ctx->pc = 0x20e82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20e830: 0xffb00000
    ctx->pc = 0x20e830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e834: 0x80802d
    ctx->pc = 0x20e834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e838: 0x6030005
    ctx->pc = 0x20E838u;
    {
        const bool branch_taken_0x20e838 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x20e838) {
            ctx->pc = 0x20E83Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
            ctx->pc = 0x20E850u;
            goto label_20e850;
        }
    }
    ctx->pc = 0x20E840u;
    // 0x20e840: 0x3c020032
    ctx->pc = 0x20e840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20e844: 0xac40f44c
    ctx->pc = 0x20e844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964300), GPR_U32(ctx, 0));
    // 0x20e848: 0x10000018
    ctx->pc = 0x20E848u;
    {
        const bool branch_taken_0x20e848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E84Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e848) {
            ctx->pc = 0x20E8ACu;
            goto label_20e8ac;
        }
    }
    ctx->pc = 0x20E850u;
label_20e850:
    // 0x20e850: 0x8c42d358
    ctx->pc = 0x20e850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x20e854: 0x14400015
    ctx->pc = 0x20E854u;
    {
        const bool branch_taken_0x20e854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E858u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e854) {
            ctx->pc = 0x20E8ACu;
            goto label_20e8ac;
        }
    }
    ctx->pc = 0x20E85Cu;
    // 0x20e85c: 0x3c030032
    ctx->pc = 0x20e85cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20e860: 0x8c62f44c
    ctx->pc = 0x20e860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294964300)));
    // 0x20e864: 0x14400004
    ctx->pc = 0x20E864u;
    {
        const bool branch_taken_0x20e864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E868u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20e864) {
            ctx->pc = 0x20E878u;
            goto label_20e878;
        }
    }
    ctx->pc = 0x20E86Cu;
    // 0x20e86c: 0xac62f44c
    ctx->pc = 0x20e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964300), GPR_U32(ctx, 2));
    // 0x20e870: 0xc08298c
    ctx->pc = 0x20E870u;
    SET_GPR_U32(ctx, 31, 0x20E878u);
    ctx->pc = 0x20E874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20A630u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_general_hint_0x20a630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E878u; }
    }
    if (ctx->pc != 0x20E878u) { return; }
    ctx->pc = 0x20E878u;
label_20e878:
    // 0x20e878: 0xc0829ca
    ctx->pc = 0x20E878u;
    SET_GPR_U32(ctx, 31, 0x20E880u);
    ctx->pc = 0x20E87Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20A728u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_boss_hint_0x20a728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E880u; }
    }
    if (ctx->pc != 0x20E880u) { return; }
    ctx->pc = 0x20E880u;
    // 0x20e880: 0xc082a46
    ctx->pc = 0x20E880u;
    SET_GPR_U32(ctx, 31, 0x20E888u);
    ctx->pc = 0x20E884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20A918u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_legend_hint_0x20a918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E888u; }
    }
    if (ctx->pc != 0x20E888u) { return; }
    ctx->pc = 0x20E888u;
    // 0x20e888: 0xc082ac2
    ctx->pc = 0x20E888u;
    SET_GPR_U32(ctx, 31, 0x20E890u);
    ctx->pc = 0x20E88Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20AB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_rune_hint_0x20ab08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E890u; }
    }
    if (ctx->pc != 0x20E890u) { return; }
    ctx->pc = 0x20E890u;
    // 0x20e890: 0x3c020032
    ctx->pc = 0x20e890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20e894: 0xac40d360
    ctx->pc = 0x20e894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955872), GPR_U32(ctx, 0));
    // 0x20e898: 0x3c040032
    ctx->pc = 0x20e898u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20e89c: 0x2484f0c8
    ctx->pc = 0x20e89cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963400));
    // 0x20e8a0: 0xc082c3a
    ctx->pc = 0x20E8A0u;
    SET_GPR_U32(ctx, 31, 0x20E8A8u);
    ctx->pc = 0x20E8A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_0x20b0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E8A8u; }
    }
    if (ctx->pc != 0x20E8A8u) { return; }
    ctx->pc = 0x20E8A8u;
    // 0x20e8a8: 0x24020001
    ctx->pc = 0x20e8a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20e8ac:
    // 0x20e8ac: 0xdfbf0010
    ctx->pc = 0x20e8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e8b0: 0xdfb00000
    ctx->pc = 0x20e8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e8b4: 0x3e00008
    ctx->pc = 0x20E8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E8B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E850u: goto label_20e850;
            case 0x20E878u: goto label_20e878;
            case 0x20E8ACu: goto label_20e8ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E8BCu;
}
