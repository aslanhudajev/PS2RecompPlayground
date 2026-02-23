#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_EntryErrFunc
// Address: 0x17a6f8 - 0x17a714
void LSC_EntryErrFunc_0x17a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_EntryErrFunc");
    ctx->pc = 0x17a6f8u;

    // 0x17a6f8: 0x54800004
    ctx->pc = 0x17A6F8u;
    {
        const bool branch_taken_0x17a6f8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a6f8) {
            ctx->pc = 0x17A6FCu;
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294935208), GPR_U32(ctx, 4));
            ctx->pc = 0x17A70Cu;
            goto label_17a70c;
        }
    }
    ctx->pc = 0x17A700u;
    // 0x17a700: 0xaf8082a8
    ctx->pc = 0x17a700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935208), GPR_U32(ctx, 0));
    // 0x17a704: 0x3e00008
    ctx->pc = 0x17A704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A708u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935212), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A70Cu: goto label_17a70c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A70Cu;
label_17a70c:
    // 0x17a70c: 0x3e00008
    ctx->pc = 0x17A70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A710u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935212), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A70Cu: goto label_17a70c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A714u;
}
