#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_CallN
// Address: 0x193740 - 0x19376c
void sfhds_CallN_0x193740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_CallN");


    ctx->pc = 0x193740u;

label_193740:
    // 0x193740: 0x27bdffe0
    ctx->pc = 0x193740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_193744:
    // 0x193744: 0xa0102d
    ctx->pc = 0x193744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_193748:
    // 0x193748: 0xffbf0010
    ctx->pc = 0x193748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19374c:
    // 0x19374c: 0x40f809
label_193750:
    if (ctx->pc == 0x193750u) {
        ctx->pc = 0x193750u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x193754u;
        goto label_193754;
    }
    ctx->pc = 0x19374Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193754u);
        ctx->pc = 0x193750u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193740u: goto label_193740;
            case 0x193744u: goto label_193744;
            case 0x193748u: goto label_193748;
            case 0x19374Cu: goto label_19374c;
            case 0x193750u: goto label_193750;
            case 0x193754u: goto label_193754;
            case 0x193758u: goto label_193758;
            case 0x19375Cu: goto label_19375c;
            case 0x193760u: goto label_193760;
            case 0x193764u: goto label_193764;
            case 0x193768u: goto label_193768;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x193754u; }
            if (ctx->pc != 0x193754u) { return; }
        }
    }
    ctx->pc = 0x193754u;
label_193754:
    // 0x193754: 0x14400002
label_193758:
    if (ctx->pc == 0x193758u) {
        ctx->pc = 0x193758u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x19375Cu;
        goto label_19375c;
    }
    ctx->pc = 0x193754u;
    {
        const bool branch_taken_0x193754 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193758u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x193754) {
            ctx->pc = 0x193760u;
            goto label_193760;
        }
    }
    ctx->pc = 0x19375Cu;
label_19375c:
    // 0x19375c: 0x2402ffff
    ctx->pc = 0x19375cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_193760:
    // 0x193760: 0xdfbf0010
    ctx->pc = 0x193760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193764:
    // 0x193764: 0x3e00008
label_193768:
    if (ctx->pc == 0x193768u) {
        ctx->pc = 0x193768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x19376Cu;
        goto label_fallthrough_0x193764;
    }
    ctx->pc = 0x193764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193740u: goto label_193740;
            case 0x193744u: goto label_193744;
            case 0x193748u: goto label_193748;
            case 0x19374Cu: goto label_19374c;
            case 0x193750u: goto label_193750;
            case 0x193754u: goto label_193754;
            case 0x193758u: goto label_193758;
            case 0x19375Cu: goto label_19375c;
            case 0x193760u: goto label_193760;
            case 0x193764u: goto label_193764;
            case 0x193768u: goto label_193768;
            default: break;
        }
        return;
    }
label_fallthrough_0x193764:
    ctx->pc = 0x19376Cu;
}
