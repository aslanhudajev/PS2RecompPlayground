#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: kill
// Address: 0x155010 - 0x155038
void kill_0x155010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("kill");


    ctx->pc = 0x155010u;

    // 0x155010: 0x27bdfff0
    ctx->pc = 0x155010u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155014: 0x24020001
    ctx->pc = 0x155014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x155018: 0x14820003
    ctx->pc = 0x155018u;
    {
        const bool branch_taken_0x155018 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x15501Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x155018) {
            ctx->pc = 0x155028u;
            goto label_155028;
        }
    }
    ctx->pc = 0x155020u;
    // 0x155020: 0xc055140
    ctx->pc = 0x155020u;
    SET_GPR_U32(ctx, 31, 0x155028u);
    ctx->pc = 0x155024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154500u;
    {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x154500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155028u; }
        else if (ctx->pc != 0x155028u) { ctx->pc = 0x155028u; }
    }
    if (ctx->pc != 0x155028u) { return; }
    ctx->pc = 0x155028u;
label_155028:
    // 0x155028: 0xdfbf0000
    ctx->pc = 0x155028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15502c: 0x102d
    ctx->pc = 0x15502cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155030: 0x3e00008
    ctx->pc = 0x155030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155028u: goto label_155028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155038u;
}
