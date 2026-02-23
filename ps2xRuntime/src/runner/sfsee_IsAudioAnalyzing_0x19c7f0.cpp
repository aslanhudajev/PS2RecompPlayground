#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_IsAudioAnalyzing
// Address: 0x19c7f0 - 0x19c86c
void sfsee_IsAudioAnalyzing_0x19c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_IsAudioAnalyzing");


    ctx->pc = 0x19c7f0u;

    // 0x19c7f0: 0x27bdffc0
    ctx->pc = 0x19c7f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19c7f4: 0xffb20020
    ctx->pc = 0x19c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19c7f8: 0xffb00000
    ctx->pc = 0x19c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c7fc: 0xa0902d
    ctx->pc = 0x19c7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c800: 0xffb10010
    ctx->pc = 0x19c800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19c804: 0x80802d
    ctx->pc = 0x19c804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c808: 0xffbf0030
    ctx->pc = 0x19c808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19c80c: 0xc0882d
    ctx->pc = 0x19c80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c810: 0xc067cf6
    ctx->pc = 0x19C810u;
    SET_GPR_U32(ctx, 31, 0x19C818u);
    ctx->pc = 0x19C814u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x19F3D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_IsSetup_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C818u; }
        else if (ctx->pc != 0x19C818u) { ctx->pc = 0x19C818u; }
    }
    if (ctx->pc != 0x19C818u) { return; }
    ctx->pc = 0x19C818u;
    // 0x19c818: 0x1040000c
    ctx->pc = 0x19C818u;
    {
        const bool branch_taken_0x19c818 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C81Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c818) {
            ctx->pc = 0x19C84Cu;
            goto label_19c84c;
        }
    }
    ctx->pc = 0x19C820u;
    // 0x19c820: 0xc0674c2
    ctx->pc = 0x19C820u;
    SET_GPR_U32(ctx, 31, 0x19C828u);
    ctx->pc = 0x19C824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C828u; }
        else if (ctx->pc != 0x19C828u) { ctx->pc = 0x19C828u; }
    }
    if (ctx->pc != 0x19C828u) { return; }
    ctx->pc = 0x19C828u;
    // 0x19c828: 0x40282d
    ctx->pc = 0x19c828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c82c: 0x24020001
    ctx->pc = 0x19c82cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c830: 0x54a20007
    ctx->pc = 0x19C830u;
    {
        const bool branch_taken_0x19c830 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x19c830) {
            ctx->pc = 0x19C834u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x19C850u;
            goto label_19c850;
        }
    }
    ctx->pc = 0x19C838u;
    // 0x19c838: 0xae250000
    ctx->pc = 0x19c838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x19c83c: 0x8e420000
    ctx->pc = 0x19c83cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19c840: 0x2280b
    ctx->pc = 0x19c840u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x19c844: 0x10000003
    ctx->pc = 0x19C844u;
    {
        const bool branch_taken_0x19c844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C848u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c844) {
            ctx->pc = 0x19C854u;
            goto label_19c854;
        }
    }
    ctx->pc = 0x19C84Cu;
label_19c84c:
    // 0x19c84c: 0xae200000
    ctx->pc = 0x19c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_19c850:
    // 0x19c850: 0x102d
    ctx->pc = 0x19c850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c854:
    // 0x19c854: 0xdfbf0030
    ctx->pc = 0x19c854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c858: 0xdfb20020
    ctx->pc = 0x19c858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c85c: 0xdfb10010
    ctx->pc = 0x19c85cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c860: 0xdfb00000
    ctx->pc = 0x19c860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c864: 0x3e00008
    ctx->pc = 0x19C864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C84Cu: goto label_19c84c;
            case 0x19C850u: goto label_19c850;
            case 0x19C854u: goto label_19c854;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C86Cu;
}
