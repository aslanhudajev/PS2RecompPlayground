#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_Pause
// Address: 0x19a838 - 0x19a8b0
void SFD_Pause_0x19a838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_Pause");


    ctx->pc = 0x19a838u;

    // 0x19a838: 0x27bdffd0
    ctx->pc = 0x19a838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a83c: 0xffb00000
    ctx->pc = 0x19a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a840: 0xffb10010
    ctx->pc = 0x19a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a844: 0x80802d
    ctx->pc = 0x19a844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a848: 0xffbf0020
    ctx->pc = 0x19a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a84c: 0xc064f1e
    ctx->pc = 0x19A84Cu;
    SET_GPR_U32(ctx, 31, 0x19A854u);
    ctx->pc = 0x19A850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A854u; }
        else if (ctx->pc != 0x19A854u) { ctx->pc = 0x19A854u; }
    }
    if (ctx->pc != 0x19A854u) { return; }
    ctx->pc = 0x19A854u;
    // 0x19a854: 0x10400006
    ctx->pc = 0x19A854u;
    {
        const bool branch_taken_0x19a854 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A858u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a854) {
            ctx->pc = 0x19A870u;
            goto label_19a870;
        }
    }
    ctx->pc = 0x19A85Cu;
    // 0x19a85c: 0x3c05ff00
    ctx->pc = 0x19a85cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19a860: 0xc064ea0
    ctx->pc = 0x19A860u;
    SET_GPR_U32(ctx, 31, 0x19A868u);
    ctx->pc = 0x19A864u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 322));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A868u; }
        else if (ctx->pc != 0x19A868u) { ctx->pc = 0x19A868u; }
    }
    if (ctx->pc != 0x19A868u) { return; }
    ctx->pc = 0x19A868u;
    // 0x19a868: 0x1000000d
    ctx->pc = 0x19A868u;
    {
        const bool branch_taken_0x19a868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A86Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19a868) {
            ctx->pc = 0x19A8A0u;
            goto label_19a8a0;
        }
    }
    ctx->pc = 0x19A870u;
label_19a870:
    // 0x19a870: 0x8e030048
    ctx->pc = 0x19a870u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19a874: 0x12200004
    ctx->pc = 0x19A874u;
    {
        const bool branch_taken_0x19a874 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A878u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a874) {
            ctx->pc = 0x19A888u;
            goto label_19a888;
        }
    }
    ctx->pc = 0x19A87Cu;
    // 0x19a87c: 0x24050002
    ctx->pc = 0x19a87cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a880: 0x24020001
    ctx->pc = 0x19a880u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a884: 0x43280a
    ctx->pc = 0x19a884u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_19a888:
    // 0x19a888: 0xae110048
    ctx->pc = 0x19a888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
    // 0x19a88c: 0xc066a2c
    ctx->pc = 0x19A88Cu;
    SET_GPR_U32(ctx, 31, 0x19A894u);
    ctx->pc = 0x19A890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfpl2_Pause_0x19a8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A894u; }
        else if (ctx->pc != 0x19A894u) { ctx->pc = 0x19A894u; }
    }
    if (ctx->pc != 0x19A894u) { return; }
    ctx->pc = 0x19A894u;
    // 0x19a894: 0x24030001
    ctx->pc = 0x19a894u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a898: 0xae03003c
    ctx->pc = 0x19a898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x19a89c: 0xdfbf0020
    ctx->pc = 0x19a89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19a8a0:
    // 0x19a8a0: 0xdfb10010
    ctx->pc = 0x19a8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a8a4: 0xdfb00000
    ctx->pc = 0x19a8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a8a8: 0x3e00008
    ctx->pc = 0x19A8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A8ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A870u: goto label_19a870;
            case 0x19A888u: goto label_19a888;
            case 0x19A8A0u: goto label_19a8a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A8B0u;
}
