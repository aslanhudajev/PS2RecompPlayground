#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoWaveEndAudio
// Address: 0x2776a0 - 0x277768
void DoWaveEndAudio_0x2776a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2776a0u;

    // 0x2776a0: 0x27bdfff0
    ctx->pc = 0x2776a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2776a4: 0xffbf0000
    ctx->pc = 0x2776a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2776a8: 0x3c020034
    ctx->pc = 0x2776a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2776ac: 0x8c43e7f0
    ctx->pc = 0x2776acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x2776b0: 0x24020005
    ctx->pc = 0x2776b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2776b4: 0x10620029
    ctx->pc = 0x2776B4u;
    {
        const bool branch_taken_0x2776b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2776B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2776b4) {
            ctx->pc = 0x27775Cu;
            goto label_27775c;
        }
    }
    ctx->pc = 0x2776BCu;
    // 0x2776bc: 0x10620027
    ctx->pc = 0x2776BCu;
    {
        const bool branch_taken_0x2776bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2776C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2776bc) {
            ctx->pc = 0x27775Cu;
            goto label_27775c;
        }
    }
    ctx->pc = 0x2776C4u;
    // 0x2776c4: 0x8c45d1d0
    ctx->pc = 0x2776c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955472)));
    // 0x2776c8: 0x10a00012
    ctx->pc = 0x2776C8u;
    {
        const bool branch_taken_0x2776c8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2776CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2776c8) {
            ctx->pc = 0x277714u;
            goto label_277714;
        }
    }
    ctx->pc = 0x2776D0u;
    // 0x2776d0: 0x8ca40000
    ctx->pc = 0x2776d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2776d4: 0x8c830000
    ctx->pc = 0x2776d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2776d8: 0x1462000f
    ctx->pc = 0x2776D8u;
    {
        const bool branch_taken_0x2776d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2776DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2776d8) {
            ctx->pc = 0x277718u;
            goto label_277718;
        }
    }
    ctx->pc = 0x2776E0u;
    // 0x2776e0: 0x8c830004
    ctx->pc = 0x2776e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2776e4: 0x2402000d
    ctx->pc = 0x2776e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x2776e8: 0x1462000b
    ctx->pc = 0x2776E8u;
    {
        const bool branch_taken_0x2776e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2776ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2776e8) {
            ctx->pc = 0x277718u;
            goto label_277718;
        }
    }
    ctx->pc = 0x2776F0u;
    // 0x2776f0: 0x2404ffff
    ctx->pc = 0x2776f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2776f4: 0xc09dad6
    ctx->pc = 0x2776F4u;
    SET_GPR_U32(ctx, 31, 0x2776FCu);
    ctx->pc = 0x2776F8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 244)));
    ctx->pc = 0x276B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasLegendItem_0x276b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2776FCu; }
    }
    if (ctx->pc != 0x2776FCu) { return; }
    ctx->pc = 0x2776FCu;
    // 0x2776fc: 0x14400018
    ctx->pc = 0x2776FCu;
    {
        const bool branch_taken_0x2776fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277700u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2776fc) {
            ctx->pc = 0x277760u;
            goto label_277760;
        }
    }
    ctx->pc = 0x277704u;
    // 0x277704: 0xc0984f0
    ctx->pc = 0x277704u;
    SET_GPR_U32(ctx, 31, 0x27770Cu);
    ctx->pc = 0x2613C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioMissedLegend_0x2613c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27770Cu; }
    }
    if (ctx->pc != 0x27770Cu) { return; }
    ctx->pc = 0x27770Cu;
    // 0x27770c: 0x10000014
    ctx->pc = 0x27770Cu;
    {
        const bool branch_taken_0x27770c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x277710u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x27770c) {
            ctx->pc = 0x277760u;
            goto label_277760;
        }
    }
    ctx->pc = 0x277714u;
label_277714:
    // 0x277714: 0x3c020034
    ctx->pc = 0x277714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_277718:
    // 0x277718: 0x8c43d1cc
    ctx->pc = 0x277718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955468)));
    // 0x27771c: 0x1060000f
    ctx->pc = 0x27771Cu;
    {
        const bool branch_taken_0x27771c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x277720u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27771c) {
            ctx->pc = 0x27775Cu;
            goto label_27775c;
        }
    }
    ctx->pc = 0x277724u;
    // 0x277724: 0x8c650000
    ctx->pc = 0x277724u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277728: 0x8ca30000
    ctx->pc = 0x277728u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27772c: 0x1462000c
    ctx->pc = 0x27772Cu;
    {
        const bool branch_taken_0x27772c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x277730u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x27772c) {
            ctx->pc = 0x277760u;
            goto label_277760;
        }
    }
    ctx->pc = 0x277734u;
    // 0x277734: 0x8ca30004
    ctx->pc = 0x277734u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x277738: 0x2402000a
    ctx->pc = 0x277738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x27773c: 0x14620008
    ctx->pc = 0x27773Cu;
    {
        const bool branch_taken_0x27773c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x277740u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27773c) {
            ctx->pc = 0x277760u;
            goto label_277760;
        }
    }
    ctx->pc = 0x277744u;
    // 0x277744: 0xc09d9fe
    ctx->pc = 0x277744u;
    SET_GPR_U32(ctx, 31, 0x27774Cu);
    ctx->pc = 0x277748u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    ctx->pc = 0x2767F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasRune_0x2767f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27774Cu; }
    }
    if (ctx->pc != 0x27774Cu) { return; }
    ctx->pc = 0x27774Cu;
    // 0x27774c: 0x14400004
    ctx->pc = 0x27774Cu;
    {
        const bool branch_taken_0x27774c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x277750u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x27774c) {
            ctx->pc = 0x277760u;
            goto label_277760;
        }
    }
    ctx->pc = 0x277754u;
    // 0x277754: 0xc098504
    ctx->pc = 0x277754u;
    SET_GPR_U32(ctx, 31, 0x27775Cu);
    ctx->pc = 0x261410u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioMissedRune_0x261410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27775Cu; }
    }
    if (ctx->pc != 0x27775Cu) { return; }
    ctx->pc = 0x27775Cu;
label_27775c:
    // 0x27775c: 0xdfbf0000
    ctx->pc = 0x27775cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_277760:
    // 0x277760: 0x3e00008
    ctx->pc = 0x277760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277764u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277714u: goto label_277714;
            case 0x277718u: goto label_277718;
            case 0x27775Cu: goto label_27775c;
            case 0x277760u: goto label_277760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277768u;
}
