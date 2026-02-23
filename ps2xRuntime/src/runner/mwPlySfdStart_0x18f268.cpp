#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdStart
// Address: 0x18f268 - 0x18f2a4
void mwPlySfdStart_0x18f268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdStart");


    ctx->pc = 0x18f268u;

    // 0x18f268: 0x27bdfff0
    ctx->pc = 0x18f268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f26c: 0xffbf0000
    ctx->pc = 0x18f26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f270: 0xc066ed4
    ctx->pc = 0x18F270u;
    SET_GPR_U32(ctx, 31, 0x18F278u);
    ctx->pc = 0x18F274u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19BB50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_Start_0x19bb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F278u; }
        else if (ctx->pc != 0x18F278u) { ctx->pc = 0x18F278u; }
    }
    if (ctx->pc != 0x18F278u) { return; }
    ctx->pc = 0x18F278u;
    // 0x18f278: 0x10400007
    ctx->pc = 0x18F278u;
    {
        const bool branch_taken_0x18f278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F27Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f278) {
            ctx->pc = 0x18F298u;
            goto label_18f298;
        }
    }
    ctx->pc = 0x18F280u;
    // 0x18f280: 0xc0633b4
    ctx->pc = 0x18F280u;
    SET_GPR_U32(ctx, 31, 0x18F288u);
    ctx->pc = 0x18F284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966989));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F288u; }
        else if (ctx->pc != 0x18F288u) { ctx->pc = 0x18F288u; }
    }
    if (ctx->pc != 0x18F288u) { return; }
    ctx->pc = 0x18F288u;
    // 0x18f288: 0x3c04002c
    ctx->pc = 0x18f288u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18f28c: 0xc063dda
    ctx->pc = 0x18F28Cu;
    SET_GPR_U32(ctx, 31, 0x18F294u);
    ctx->pc = 0x18F290u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955456));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F294u; }
        else if (ctx->pc != 0x18F294u) { ctx->pc = 0x18F294u; }
    }
    if (ctx->pc != 0x18F294u) { return; }
    ctx->pc = 0x18F294u;
    // 0x18f294: 0x2402fecd
    ctx->pc = 0x18f294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966989));
label_18f298:
    // 0x18f298: 0xdfbf0000
    ctx->pc = 0x18f298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f29c: 0x3e00008
    ctx->pc = 0x18F29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F2A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F298u: goto label_18f298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F2A4u;
}
