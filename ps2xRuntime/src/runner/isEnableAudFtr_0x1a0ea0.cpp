#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isEnableAudFtr
// Address: 0x1a0ea0 - 0x1a0ee0
void isEnableAudFtr_0x1a0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isEnableAudFtr");


    ctx->pc = 0x1a0ea0u;

    // 0x1a0ea0: 0x27bdffe0
    ctx->pc = 0x1a0ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0ea4: 0xffb00000
    ctx->pc = 0x1a0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0ea8: 0xffbf0010
    ctx->pc = 0x1a0ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0eac: 0xc0683c8
    ctx->pc = 0x1A0EACu;
    SET_GPR_U32(ctx, 31, 0x1A0EB4u);
    ctx->pc = 0x1A0EB0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EB4u; }
        else if (ctx->pc != 0x1A0EB4u) { ctx->pc = 0x1A0EB4u; }
    }
    if (ctx->pc != 0x1A0EB4u) { return; }
    ctx->pc = 0x1A0EB4u;
    // 0x1a0eb4: 0x240300c0
    ctx->pc = 0x1a0eb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a0eb8: 0x14430005
    ctx->pc = 0x1A0EB8u;
    {
        const bool branch_taken_0x1a0eb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A0EBCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0eb8) {
            ctx->pc = 0x1A0ED0u;
            goto label_1a0ed0;
        }
    }
    ctx->pc = 0x1A0EC0u;
    // 0x1a0ec0: 0x92050020
    ctx->pc = 0x1a0ec0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a0ec4: 0x2ca30002
    ctx->pc = 0x1a0ec4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), 2));
    // 0x1a0ec8: 0x54600001
    ctx->pc = 0x1A0EC8u;
    {
        const bool branch_taken_0x1a0ec8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0ec8) {
            ctx->pc = 0x1A0ECCu;
            SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
            ctx->pc = 0x1A0ED0u;
            goto label_1a0ed0;
        }
    }
    ctx->pc = 0x1A0ED0u;
label_1a0ed0:
    // 0x1a0ed0: 0xdfbf0010
    ctx->pc = 0x1a0ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0ed4: 0xdfb00000
    ctx->pc = 0x1a0ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ed8: 0x3e00008
    ctx->pc = 0x1A0ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0EDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0ED0u: goto label_1a0ed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0EE0u;
}
