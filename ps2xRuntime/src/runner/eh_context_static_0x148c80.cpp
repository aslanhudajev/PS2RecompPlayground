#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eh_context_static
// Address: 0x148c80 - 0x148ce8
void eh_context_static_0x148c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eh_context_static");


    ctx->pc = 0x148c80u;

    // 0x148c80: 0x3c03002d
    ctx->pc = 0x148c80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)45 << 16));
    // 0x148c84: 0x27bdffd0
    ctx->pc = 0x148c84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148c88: 0x8c6268d8
    ctx->pc = 0x148c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 26840)));
    // 0x148c8c: 0xffbf0020
    ctx->pc = 0x148c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x148c90: 0xffb10010
    ctx->pc = 0x148c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x148c94: 0x1440000d
    ctx->pc = 0x148C94u;
    {
        const bool branch_taken_0x148c94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x148C98u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x148c94) {
            ctx->pc = 0x148CCCu;
            goto label_148ccc;
        }
    }
    ctx->pc = 0x148C9Cu;
    // 0x148c9c: 0x3c11002d
    ctx->pc = 0x148c9cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)45 << 16));
    // 0x148ca0: 0x24020001
    ctx->pc = 0x148ca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x148ca4: 0x263068c8
    ctx->pc = 0x148ca4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 26824));
    // 0x148ca8: 0xac6268d8
    ctx->pc = 0x148ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 26840), GPR_U32(ctx, 2));
    // 0x148cac: 0x200202d
    ctx->pc = 0x148cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cb0: 0x282d
    ctx->pc = 0x148cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cb4: 0xc050cfe
    ctx->pc = 0x148CB4u;
    SET_GPR_U32(ctx, 31, 0x148CBCu);
    ctx->pc = 0x148CB8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CBCu; }
        else if (ctx->pc != 0x148CBCu) { ctx->pc = 0x148CBCu; }
    }
    if (ctx->pc != 0x148CBCu) { return; }
    ctx->pc = 0x148CBCu;
    // 0x148cbc: 0x3c03002d
    ctx->pc = 0x148cbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)45 << 16));
    // 0x148cc0: 0x246368e0
    ctx->pc = 0x148cc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 26848));
    // 0x148cc4: 0x10000002
    ctx->pc = 0x148CC4u;
    {
        const bool branch_taken_0x148cc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x148CC8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x148cc4) {
            ctx->pc = 0x148CD0u;
            goto label_148cd0;
        }
    }
    ctx->pc = 0x148CCCu;
label_148ccc:
    // 0x148ccc: 0x3c11002d
    ctx->pc = 0x148cccu;
    SET_GPR_U32(ctx, 17, ((uint32_t)45 << 16));
label_148cd0:
    // 0x148cd0: 0x262268c8
    ctx->pc = 0x148cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 26824));
    // 0x148cd4: 0xdfbf0020
    ctx->pc = 0x148cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148cd8: 0xdfb10010
    ctx->pc = 0x148cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148cdc: 0xdfb00000
    ctx->pc = 0x148cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148ce0: 0x3e00008
    ctx->pc = 0x148CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148CE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148CCCu: goto label_148ccc;
            case 0x148CD0u: goto label_148cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148CE8u;
}
