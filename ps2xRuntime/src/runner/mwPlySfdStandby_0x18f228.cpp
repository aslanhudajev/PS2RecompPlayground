#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdStandby
// Address: 0x18f228 - 0x18f264
void mwPlySfdStandby_0x18f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdStandby");


    ctx->pc = 0x18f228u;

    // 0x18f228: 0x27bdfff0
    ctx->pc = 0x18f228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f22c: 0xffbf0000
    ctx->pc = 0x18f22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f230: 0xc066a54
    ctx->pc = 0x18F230u;
    SET_GPR_U32(ctx, 31, 0x18F238u);
    ctx->pc = 0x18F234u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19A950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_Standby_0x19a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F238u; }
        else if (ctx->pc != 0x18F238u) { ctx->pc = 0x18F238u; }
    }
    if (ctx->pc != 0x18F238u) { return; }
    ctx->pc = 0x18F238u;
    // 0x18f238: 0x10400007
    ctx->pc = 0x18F238u;
    {
        const bool branch_taken_0x18f238 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F23Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f238) {
            ctx->pc = 0x18F258u;
            goto label_18f258;
        }
    }
    ctx->pc = 0x18F240u;
    // 0x18f240: 0xc0633b4
    ctx->pc = 0x18F240u;
    SET_GPR_U32(ctx, 31, 0x18F248u);
    ctx->pc = 0x18F244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966985));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F248u; }
        else if (ctx->pc != 0x18F248u) { ctx->pc = 0x18F248u; }
    }
    if (ctx->pc != 0x18F248u) { return; }
    ctx->pc = 0x18F248u;
    // 0x18f248: 0x3c04002c
    ctx->pc = 0x18f248u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18f24c: 0xc063dda
    ctx->pc = 0x18F24Cu;
    SET_GPR_U32(ctx, 31, 0x18F254u);
    ctx->pc = 0x18F250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955424));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F254u; }
        else if (ctx->pc != 0x18F254u) { ctx->pc = 0x18F254u; }
    }
    if (ctx->pc != 0x18F254u) { return; }
    ctx->pc = 0x18F254u;
    // 0x18f254: 0x2402fec9
    ctx->pc = 0x18f254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966985));
label_18f258:
    // 0x18f258: 0xdfbf0000
    ctx->pc = 0x18f258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f25c: 0x3e00008
    ctx->pc = 0x18F25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F260u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F258u: goto label_18f258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F264u;
}
