#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_EntryChgStatFunc
// Address: 0x17a660 - 0x17a684
void LSC_EntryChgStatFunc_0x17a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_EntryChgStatFunc");


    ctx->pc = 0x17a660u;

    // 0x17a660: 0x54800005
    ctx->pc = 0x17A660u;
    {
        const bool branch_taken_0x17a660 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a660) {
            ctx->pc = 0x17A664u;
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294935196), GPR_U32(ctx, 4));
            ctx->pc = 0x17A678u;
            goto label_17a678;
        }
    }
    ctx->pc = 0x17A668u;
    // 0x17a668: 0xaf80829c
    ctx->pc = 0x17a668u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935196), GPR_U32(ctx, 0));
    // 0x17a66c: 0xaf8082a0
    ctx->pc = 0x17a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935200), GPR_U32(ctx, 0));
    // 0x17a670: 0x3e00008
    ctx->pc = 0x17A670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A674u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935204), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A678u: goto label_17a678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A678u;
label_17a678:
    // 0x17a678: 0xaf8582a0
    ctx->pc = 0x17a678u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935200), GPR_U32(ctx, 5));
    // 0x17a67c: 0x3e00008
    ctx->pc = 0x17A67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A680u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935204), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A678u: goto label_17a678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A684u;
}
