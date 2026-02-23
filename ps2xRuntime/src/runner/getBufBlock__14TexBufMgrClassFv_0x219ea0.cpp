#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getBufBlock__14TexBufMgrClassFv
// Address: 0x219ea0 - 0x219ef4
void getBufBlock__14TexBufMgrClassFv_0x219ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getBufBlock__14TexBufMgrClassFv");


    ctx->pc = 0x219ea0u;

    // 0x219ea0: 0x27bdfff0
    ctx->pc = 0x219ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219ea4: 0x7fbf0000
    ctx->pc = 0x219ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x219ea8: 0x8c830008
    ctx->pc = 0x219ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x219eac: 0x24020020
    ctx->pc = 0x219eacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x219eb0: 0x14620007
    ctx->pc = 0x219EB0u;
    {
        const bool branch_taken_0x219eb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x219EB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x219eb0) {
            ctx->pc = 0x219ED0u;
            goto label_219ed0;
        }
    }
    ctx->pc = 0x219EB8u;
    // 0x219eb8: 0xac8203a4
    ctx->pc = 0x219eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 2));
    // 0x219ebc: 0x3c020029
    ctx->pc = 0x219ebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x219ec0: 0xc05114a
    ctx->pc = 0x219EC0u;
    SET_GPR_U32(ctx, 31, 0x219EC8u);
    ctx->pc = 0x219EC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294950560));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219EC8u; }
        else if (ctx->pc != 0x219EC8u) { ctx->pc = 0x219EC8u; }
    }
    if (ctx->pc != 0x219EC8u) { return; }
    ctx->pc = 0x219EC8u;
label_219ec8:
    // 0x219ec8: 0x1000ffff
    ctx->pc = 0x219EC8u;
    {
        const bool branch_taken_0x219ec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219ec8) {
            ctx->pc = 0x219EC8u;
            goto label_219ec8;
        }
    }
    ctx->pc = 0x219ED0u;
label_219ed0:
    // 0x219ed0: 0x8c830008
    ctx->pc = 0x219ed0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x219ed4: 0x24620001
    ctx->pc = 0x219ed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x219ed8: 0xac820008
    ctx->pc = 0x219ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x219edc: 0x31080
    ctx->pc = 0x219edcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x219ee0: 0x441021
    ctx->pc = 0x219ee0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x219ee4: 0x7bbf0000
    ctx->pc = 0x219ee4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ee8: 0x8c420314
    ctx->pc = 0x219ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 788)));
    // 0x219eec: 0x3e00008
    ctx->pc = 0x219EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219EF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219EC8u: goto label_219ec8;
            case 0x219ED0u: goto label_219ed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219EF4u;
}
