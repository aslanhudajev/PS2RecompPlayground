#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetPaStat
// Address: 0x19a7f0 - 0x19a834
void SFD_GetPaStat_0x19a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetPaStat");


    ctx->pc = 0x19a7f0u;

    // 0x19a7f0: 0x27bdffe0
    ctx->pc = 0x19a7f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a7f4: 0xffb00000
    ctx->pc = 0x19a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a7f8: 0xffbf0010
    ctx->pc = 0x19a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a7fc: 0xc064f1e
    ctx->pc = 0x19A7FCu;
    SET_GPR_U32(ctx, 31, 0x19A804u);
    ctx->pc = 0x19A800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A804u; }
        else if (ctx->pc != 0x19A804u) { ctx->pc = 0x19A804u; }
    }
    if (ctx->pc != 0x19A804u) { return; }
    ctx->pc = 0x19A804u;
    // 0x19a804: 0x10400006
    ctx->pc = 0x19A804u;
    {
        const bool branch_taken_0x19a804 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A808u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a804) {
            ctx->pc = 0x19A820u;
            goto label_19a820;
        }
    }
    ctx->pc = 0x19A80Cu;
    // 0x19a80c: 0x3c05ff00
    ctx->pc = 0x19a80cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19a810: 0xc064ea0
    ctx->pc = 0x19A810u;
    SET_GPR_U32(ctx, 31, 0x19A818u);
    ctx->pc = 0x19A814u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 321));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A818u; }
        else if (ctx->pc != 0x19A818u) { ctx->pc = 0x19A818u; }
    }
    if (ctx->pc != 0x19A818u) { return; }
    ctx->pc = 0x19A818u;
    // 0x19a818: 0x10000002
    ctx->pc = 0x19A818u;
    {
        const bool branch_taken_0x19a818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A81Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a818) {
            ctx->pc = 0x19A824u;
            goto label_19a824;
        }
    }
    ctx->pc = 0x19A820u;
label_19a820:
    // 0x19a820: 0x8e020048
    ctx->pc = 0x19a820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_19a824:
    // 0x19a824: 0xdfbf0010
    ctx->pc = 0x19a824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a828: 0xdfb00000
    ctx->pc = 0x19a828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a82c: 0x3e00008
    ctx->pc = 0x19A82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A820u: goto label_19a820;
            case 0x19A824u: goto label_19a824;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A834u;
}
