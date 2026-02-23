#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SprPutF__FP7SPR_ARG
// Address: 0x216fc0 - 0x217020
void SprPutF__FP7SPR_ARG_0x216fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SprPutF__FP7SPR_ARG");


    ctx->pc = 0x216fc0u;

    // 0x216fc0: 0x27bdfff0
    ctx->pc = 0x216fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216fc4: 0x7fbf0000
    ctx->pc = 0x216fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x216fc8: 0x8c860048
    ctx->pc = 0x216fc8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x216fcc: 0x3c03004a
    ctx->pc = 0x216fccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x216fd0: 0x2463f738
    ctx->pc = 0x216fd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965048));
    // 0x216fd4: 0x62880
    ctx->pc = 0x216fd4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x216fd8: 0xa62821
    ctx->pc = 0x216fd8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x216fdc: 0x52900
    ctx->pc = 0x216fdcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x216fe0: 0x652821
    ctx->pc = 0x216fe0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x216fe4: 0x8ca30048
    ctx->pc = 0x216fe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x216fe8: 0x1060000a
    ctx->pc = 0x216FE8u;
    {
        const bool branch_taken_0x216fe8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x216fe8) {
            ctx->pc = 0x217014u;
            goto label_217014;
        }
    }
    ctx->pc = 0x216FF0u;
    // 0x216ff0: 0x8ca20000
    ctx->pc = 0x216ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216ff4: 0xac820000
    ctx->pc = 0x216ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x216ff8: 0x8ca20004
    ctx->pc = 0x216ff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x216ffc: 0xac820004
    ctx->pc = 0x216ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x217000: 0x8ca20008
    ctx->pc = 0x217000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x217004: 0xac820008
    ctx->pc = 0x217004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x217008: 0x8ca20044
    ctx->pc = 0x217008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x21700c: 0xc06b9f8
    ctx->pc = 0x21700Cu;
    SET_GPR_U32(ctx, 31, 0x217014u);
    ctx->pc = 0x217010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1AE7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSprPutForce_0x1ae7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217014u; }
        else if (ctx->pc != 0x217014u) { ctx->pc = 0x217014u; }
    }
    if (ctx->pc != 0x217014u) { return; }
    ctx->pc = 0x217014u;
label_217014:
    // 0x217014: 0x7bbf0000
    ctx->pc = 0x217014u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217018: 0x3e00008
    ctx->pc = 0x217018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21701Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217014u: goto label_217014;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217020u;
}
