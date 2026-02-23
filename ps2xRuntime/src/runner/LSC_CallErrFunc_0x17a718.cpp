#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_CallErrFunc
// Address: 0x17a718 - 0x17a77c
void LSC_CallErrFunc_0x17a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_CallErrFunc");


    ctx->pc = 0x17a718u;

label_17a718:
    // 0x17a718: 0x27bdff60
    ctx->pc = 0x17a718u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_17a71c:
    // 0x17a71c: 0x3c020024
    ctx->pc = 0x17a71cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17a720:
    // 0x17a720: 0xffb00000
    ctx->pc = 0x17a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17a724:
    // 0x17a724: 0xffa50068
    ctx->pc = 0x17a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
label_17a728:
    // 0x17a728: 0x2450a570
    ctx->pc = 0x17a728u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294944112));
label_17a72c:
    // 0x17a72c: 0xffa60070
    ctx->pc = 0x17a72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
label_17a730:
    // 0x17a730: 0x80282d
    ctx->pc = 0x17a730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a734:
    // 0x17a734: 0xffbf0010
    ctx->pc = 0x17a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17a738:
    // 0x17a738: 0x200202d
    ctx->pc = 0x17a738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a73c:
    // 0x17a73c: 0xffa70078
    ctx->pc = 0x17a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
label_17a740:
    // 0x17a740: 0x27a60068
    ctx->pc = 0x17a740u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 104));
label_17a744:
    // 0x17a744: 0xffa80080
    ctx->pc = 0x17a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
label_17a748:
    // 0x17a748: 0xffa90088
    ctx->pc = 0x17a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
label_17a74c:
    // 0x17a74c: 0xffaa0090
    ctx->pc = 0x17a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
label_17a750:
    // 0x17a750: 0xc0520a2
label_17a754:
    if (ctx->pc == 0x17A754u) {
        ctx->pc = 0x17A754u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
        ctx->pc = 0x17A758u;
        goto label_17a758;
    }
    ctx->pc = 0x17A750u;
    SET_GPR_U32(ctx, 31, 0x17A758u);
    ctx->pc = 0x17A754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    ctx->pc = 0x148288u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x148288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A758u; }
        else if (ctx->pc != 0x17A758u) { ctx->pc = 0x17A758u; }
    }
    if (ctx->pc != 0x17A758u) { return; }
    ctx->pc = 0x17A758u;
label_17a758:
    // 0x17a758: 0x8f8282a8
    ctx->pc = 0x17a758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935208)));
label_17a75c:
    // 0x17a75c: 0x10400003
label_17a760:
    if (ctx->pc == 0x17A760u) {
        ctx->pc = 0x17A760u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935212)));
        ctx->pc = 0x17A764u;
        goto label_17a764;
    }
    ctx->pc = 0x17A75Cu;
    {
        const bool branch_taken_0x17a75c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A760u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935212)));
        if (branch_taken_0x17a75c) {
            ctx->pc = 0x17A76Cu;
            goto label_17a76c;
        }
    }
    ctx->pc = 0x17A764u;
label_17a764:
    // 0x17a764: 0x40f809
label_17a768:
    if (ctx->pc == 0x17A768u) {
        ctx->pc = 0x17A768u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A76Cu;
        goto label_17a76c;
    }
    ctx->pc = 0x17A764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A76Cu);
        ctx->pc = 0x17A768u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A718u: goto label_17a718;
            case 0x17A71Cu: goto label_17a71c;
            case 0x17A720u: goto label_17a720;
            case 0x17A724u: goto label_17a724;
            case 0x17A728u: goto label_17a728;
            case 0x17A72Cu: goto label_17a72c;
            case 0x17A730u: goto label_17a730;
            case 0x17A734u: goto label_17a734;
            case 0x17A738u: goto label_17a738;
            case 0x17A73Cu: goto label_17a73c;
            case 0x17A740u: goto label_17a740;
            case 0x17A744u: goto label_17a744;
            case 0x17A748u: goto label_17a748;
            case 0x17A74Cu: goto label_17a74c;
            case 0x17A750u: goto label_17a750;
            case 0x17A754u: goto label_17a754;
            case 0x17A758u: goto label_17a758;
            case 0x17A75Cu: goto label_17a75c;
            case 0x17A760u: goto label_17a760;
            case 0x17A764u: goto label_17a764;
            case 0x17A768u: goto label_17a768;
            case 0x17A76Cu: goto label_17a76c;
            case 0x17A770u: goto label_17a770;
            case 0x17A774u: goto label_17a774;
            case 0x17A778u: goto label_17a778;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A76Cu; }
            if (ctx->pc != 0x17A76Cu) { return; }
        }
    }
    ctx->pc = 0x17A76Cu;
label_17a76c:
    // 0x17a76c: 0xdfbf0010
    ctx->pc = 0x17a76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a770:
    // 0x17a770: 0xdfb00000
    ctx->pc = 0x17a770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a774:
    // 0x17a774: 0x3e00008
label_17a778:
    if (ctx->pc == 0x17A778u) {
        ctx->pc = 0x17A778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x17A77Cu;
        goto label_fallthrough_0x17a774;
    }
    ctx->pc = 0x17A774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A718u: goto label_17a718;
            case 0x17A71Cu: goto label_17a71c;
            case 0x17A720u: goto label_17a720;
            case 0x17A724u: goto label_17a724;
            case 0x17A728u: goto label_17a728;
            case 0x17A72Cu: goto label_17a72c;
            case 0x17A730u: goto label_17a730;
            case 0x17A734u: goto label_17a734;
            case 0x17A738u: goto label_17a738;
            case 0x17A73Cu: goto label_17a73c;
            case 0x17A740u: goto label_17a740;
            case 0x17A744u: goto label_17a744;
            case 0x17A748u: goto label_17a748;
            case 0x17A74Cu: goto label_17a74c;
            case 0x17A750u: goto label_17a750;
            case 0x17A754u: goto label_17a754;
            case 0x17A758u: goto label_17a758;
            case 0x17A75Cu: goto label_17a75c;
            case 0x17A760u: goto label_17a760;
            case 0x17A764u: goto label_17a764;
            case 0x17A768u: goto label_17a768;
            case 0x17A76Cu: goto label_17a76c;
            case 0x17A770u: goto label_17a770;
            case 0x17A774u: goto label_17a774;
            case 0x17A778u: goto label_17a778;
            default: break;
        }
        return;
    }
label_fallthrough_0x17a774:
    ctx->pc = 0x17A77Cu;
}
