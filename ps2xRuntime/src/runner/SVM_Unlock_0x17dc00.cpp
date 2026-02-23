#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_Unlock
// Address: 0x17dc00 - 0x17dc28
void SVM_Unlock_0x17dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_Unlock");
    ctx->pc = 0x17dc00u;

label_17dc00:
    // 0x17dc00: 0x27bdfff0
    ctx->pc = 0x17dc00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17dc04:
    // 0x17dc04: 0x8f828918
    ctx->pc = 0x17dc04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
label_17dc08:
    // 0x17dc08: 0x10400004
label_17dc0c:
    if (ctx->pc == 0x17DC0Cu) {
        ctx->pc = 0x17DC0Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17DC10u;
        goto label_17dc10;
    }
    ctx->pc = 0x17DC08u;
    {
        const bool branch_taken_0x17dc08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DC0Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17dc08) {
            ctx->pc = 0x17DC1Cu;
            goto label_17dc1c;
        }
    }
    ctx->pc = 0x17DC10u;
label_17dc10:
    // 0x17dc10: 0x8f84891c
    ctx->pc = 0x17dc10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294936860)));
label_17dc14:
    // 0x17dc14: 0x40f809
label_17dc18:
    if (ctx->pc == 0x17DC18u) {
        ctx->pc = 0x17DC1Cu;
        goto label_17dc1c;
    }
    ctx->pc = 0x17DC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17DC1Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DC00u: goto label_17dc00;
            case 0x17DC04u: goto label_17dc04;
            case 0x17DC08u: goto label_17dc08;
            case 0x17DC0Cu: goto label_17dc0c;
            case 0x17DC10u: goto label_17dc10;
            case 0x17DC14u: goto label_17dc14;
            case 0x17DC18u: goto label_17dc18;
            case 0x17DC1Cu: goto label_17dc1c;
            case 0x17DC20u: goto label_17dc20;
            case 0x17DC24u: goto label_17dc24;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17DC1Cu; }
            if (ctx->pc != 0x17DC1Cu) { return; }
        }
    }
    ctx->pc = 0x17DC1Cu;
label_17dc1c:
    // 0x17dc1c: 0xdfbf0000
    ctx->pc = 0x17dc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17dc20:
    // 0x17dc20: 0x3e00008
label_17dc24:
    if (ctx->pc == 0x17DC24u) {
        ctx->pc = 0x17DC24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17DC28u;
        goto label_fallthrough_0x17dc20;
    }
    ctx->pc = 0x17DC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DC24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DC00u: goto label_17dc00;
            case 0x17DC04u: goto label_17dc04;
            case 0x17DC08u: goto label_17dc08;
            case 0x17DC0Cu: goto label_17dc0c;
            case 0x17DC10u: goto label_17dc10;
            case 0x17DC14u: goto label_17dc14;
            case 0x17DC18u: goto label_17dc18;
            case 0x17DC1Cu: goto label_17dc1c;
            case 0x17DC20u: goto label_17dc20;
            case 0x17DC24u: goto label_17dc24;
            default: break;
        }
        return;
    }
label_fallthrough_0x17dc20:
    ctx->pc = 0x17DC28u;
}
