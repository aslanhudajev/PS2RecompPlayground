#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_CallS
// Address: 0x193770 - 0x1937a0
void sfhds_CallS_0x193770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_CallS");


    ctx->pc = 0x193770u;

label_193770:
    // 0x193770: 0x27bdffe0
    ctx->pc = 0x193770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_193774:
    // 0x193774: 0xc0102d
    ctx->pc = 0x193774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_193778:
    // 0x193778: 0xffbf0010
    ctx->pc = 0x193778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19377c:
    // 0x19377c: 0x30a500ff
    ctx->pc = 0x19377cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
label_193780:
    // 0x193780: 0x40f809
label_193784:
    if (ctx->pc == 0x193784u) {
        ctx->pc = 0x193784u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x193788u;
        goto label_193788;
    }
    ctx->pc = 0x193780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193788u);
        ctx->pc = 0x193784u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193770u: goto label_193770;
            case 0x193774u: goto label_193774;
            case 0x193778u: goto label_193778;
            case 0x19377Cu: goto label_19377c;
            case 0x193780u: goto label_193780;
            case 0x193784u: goto label_193784;
            case 0x193788u: goto label_193788;
            case 0x19378Cu: goto label_19378c;
            case 0x193790u: goto label_193790;
            case 0x193794u: goto label_193794;
            case 0x193798u: goto label_193798;
            case 0x19379Cu: goto label_19379c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x193788u; }
            if (ctx->pc != 0x193788u) { return; }
        }
    }
    ctx->pc = 0x193788u;
label_193788:
    // 0x193788: 0x14400002
label_19378c:
    if (ctx->pc == 0x19378Cu) {
        ctx->pc = 0x19378Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x193790u;
        goto label_193790;
    }
    ctx->pc = 0x193788u;
    {
        const bool branch_taken_0x193788 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19378Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x193788) {
            ctx->pc = 0x193794u;
            goto label_193794;
        }
    }
    ctx->pc = 0x193790u;
label_193790:
    // 0x193790: 0x2402ffff
    ctx->pc = 0x193790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_193794:
    // 0x193794: 0xdfbf0010
    ctx->pc = 0x193794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193798:
    // 0x193798: 0x3e00008
label_19379c:
    if (ctx->pc == 0x19379Cu) {
        ctx->pc = 0x19379Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1937A0u;
        goto label_fallthrough_0x193798;
    }
    ctx->pc = 0x193798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19379Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193770u: goto label_193770;
            case 0x193774u: goto label_193774;
            case 0x193778u: goto label_193778;
            case 0x19377Cu: goto label_19377c;
            case 0x193780u: goto label_193780;
            case 0x193784u: goto label_193784;
            case 0x193788u: goto label_193788;
            case 0x19378Cu: goto label_19378c;
            case 0x193790u: goto label_193790;
            case 0x193794u: goto label_193794;
            case 0x193798u: goto label_193798;
            case 0x19379Cu: goto label_19379c;
            default: break;
        }
        return;
    }
label_fallthrough_0x193798:
    ctx->pc = 0x1937A0u;
}
