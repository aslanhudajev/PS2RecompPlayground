#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: startFname__14SofdecMgrClassFP7_MVI_HDPc
// Address: 0x216ea0 - 0x216ec8
void startFname__14SofdecMgrClassFP7_MVI_HDPc_0x216ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("startFname__14SofdecMgrClassFP7_MVI_HDPc");


    ctx->pc = 0x216ea0u;

label_216ea0:
    // 0x216ea0: 0x27bdfff0
    ctx->pc = 0x216ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_216ea4:
    // 0x216ea4: 0x7fbf0000
    ctx->pc = 0x216ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_216ea8:
    // 0x216ea8: 0x8ca40000
    ctx->pc = 0x216ea8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216eac:
    // 0x216eac: 0x8c820000
    ctx->pc = 0x216eacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216eb0:
    // 0x216eb0: 0x8c420018
    ctx->pc = 0x216eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_216eb4:
    // 0x216eb4: 0x40f809
label_216eb8:
    if (ctx->pc == 0x216EB8u) {
        ctx->pc = 0x216EB8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        ctx->pc = 0x216EBCu;
        goto label_216ebc;
    }
    ctx->pc = 0x216EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216EBCu);
        ctx->pc = 0x216EB8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216EA0u: goto label_216ea0;
            case 0x216EA4u: goto label_216ea4;
            case 0x216EA8u: goto label_216ea8;
            case 0x216EACu: goto label_216eac;
            case 0x216EB0u: goto label_216eb0;
            case 0x216EB4u: goto label_216eb4;
            case 0x216EB8u: goto label_216eb8;
            case 0x216EBCu: goto label_216ebc;
            case 0x216EC0u: goto label_216ec0;
            case 0x216EC4u: goto label_216ec4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216EBCu; }
            if (ctx->pc != 0x216EBCu) { return; }
        }
    }
    ctx->pc = 0x216EBCu;
label_216ebc:
    // 0x216ebc: 0x7bbf0000
    ctx->pc = 0x216ebcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_216ec0:
    // 0x216ec0: 0x3e00008
label_216ec4:
    if (ctx->pc == 0x216EC4u) {
        ctx->pc = 0x216EC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x216EC8u;
        goto label_fallthrough_0x216ec0;
    }
    ctx->pc = 0x216EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216EC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216EA0u: goto label_216ea0;
            case 0x216EA4u: goto label_216ea4;
            case 0x216EA8u: goto label_216ea8;
            case 0x216EACu: goto label_216eac;
            case 0x216EB0u: goto label_216eb0;
            case 0x216EB4u: goto label_216eb4;
            case 0x216EB8u: goto label_216eb8;
            case 0x216EBCu: goto label_216ebc;
            case 0x216EC0u: goto label_216ec0;
            case 0x216EC4u: goto label_216ec4;
            default: break;
        }
        return;
    }
label_fallthrough_0x216ec0:
    ctx->pc = 0x216EC8u;
}
