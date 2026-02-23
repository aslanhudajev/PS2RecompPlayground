#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsExecServer
// Address: 0x174e80 - 0x174edc
void cvFsExecServer_0x174e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsExecServer");


    ctx->pc = 0x174e80u;

label_174e80:
    // 0x174e80: 0x27bdffd0
    ctx->pc = 0x174e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_174e84:
    // 0x174e84: 0x3c02002e
    ctx->pc = 0x174e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
label_174e88:
    // 0x174e88: 0xffb10010
    ctx->pc = 0x174e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_174e8c:
    // 0x174e8c: 0xffb00000
    ctx->pc = 0x174e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_174e90:
    // 0x174e90: 0x2411001f
    ctx->pc = 0x174e90u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 31));
label_174e94:
    // 0x174e94: 0xffbf0020
    ctx->pc = 0x174e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_174e98:
    // 0x174e98: 0x2450f2e8
    ctx->pc = 0x174e98u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294963944));
label_174e9c:
    // 0x174e9c: 0x8e020000
    ctx->pc = 0x174e9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_174ea0:
    // 0x174ea0: 0x2631ffff
    ctx->pc = 0x174ea0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_174ea4:
    // 0x174ea4: 0x10400006
label_174ea8:
    if (ctx->pc == 0x174EA8u) {
        ctx->pc = 0x174EA8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x174EACu;
        goto label_174eac;
    }
    ctx->pc = 0x174EA4u;
    {
        const bool branch_taken_0x174ea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174EA8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x174ea4) {
            ctx->pc = 0x174EC0u;
            goto label_174ec0;
        }
    }
    ctx->pc = 0x174EACu;
label_174eac:
    // 0x174eac: 0x8c420000
    ctx->pc = 0x174eacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_174eb0:
    // 0x174eb0: 0x10400003
label_174eb4:
    if (ctx->pc == 0x174EB4u) {
        ctx->pc = 0x174EB8u;
        goto label_174eb8;
    }
    ctx->pc = 0x174EB0u;
    {
        const bool branch_taken_0x174eb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x174eb0) {
            ctx->pc = 0x174EC0u;
            goto label_174ec0;
        }
    }
    ctx->pc = 0x174EB8u;
label_174eb8:
    // 0x174eb8: 0x40f809
label_174ebc:
    if (ctx->pc == 0x174EBCu) {
        ctx->pc = 0x174EC0u;
        goto label_174ec0;
    }
    ctx->pc = 0x174EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174EC0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E80u: goto label_174e80;
            case 0x174E84u: goto label_174e84;
            case 0x174E88u: goto label_174e88;
            case 0x174E8Cu: goto label_174e8c;
            case 0x174E90u: goto label_174e90;
            case 0x174E94u: goto label_174e94;
            case 0x174E98u: goto label_174e98;
            case 0x174E9Cu: goto label_174e9c;
            case 0x174EA0u: goto label_174ea0;
            case 0x174EA4u: goto label_174ea4;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EACu: goto label_174eac;
            case 0x174EB0u: goto label_174eb0;
            case 0x174EB4u: goto label_174eb4;
            case 0x174EB8u: goto label_174eb8;
            case 0x174EBCu: goto label_174ebc;
            case 0x174EC0u: goto label_174ec0;
            case 0x174EC4u: goto label_174ec4;
            case 0x174EC8u: goto label_174ec8;
            case 0x174ECCu: goto label_174ecc;
            case 0x174ED0u: goto label_174ed0;
            case 0x174ED4u: goto label_174ed4;
            case 0x174ED8u: goto label_174ed8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174EC0u; }
            if (ctx->pc != 0x174EC0u) { return; }
        }
    }
    ctx->pc = 0x174EC0u;
label_174ec0:
    // 0x174ec0: 0x623fff7
label_174ec4:
    if (ctx->pc == 0x174EC4u) {
        ctx->pc = 0x174EC4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x174EC8u;
        goto label_174ec8;
    }
    ctx->pc = 0x174EC0u;
    {
        const bool branch_taken_0x174ec0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x174ec0) {
            ctx->pc = 0x174EC4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x174EA0u;
            goto label_174ea0;
        }
    }
    ctx->pc = 0x174EC8u;
label_174ec8:
    // 0x174ec8: 0xdfbf0020
    ctx->pc = 0x174ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_174ecc:
    // 0x174ecc: 0xdfb10010
    ctx->pc = 0x174eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174ed0:
    // 0x174ed0: 0xdfb00000
    ctx->pc = 0x174ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174ed4:
    // 0x174ed4: 0x3e00008
label_174ed8:
    if (ctx->pc == 0x174ED8u) {
        ctx->pc = 0x174ED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x174EDCu;
        goto label_fallthrough_0x174ed4;
    }
    ctx->pc = 0x174ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174ED8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174E80u: goto label_174e80;
            case 0x174E84u: goto label_174e84;
            case 0x174E88u: goto label_174e88;
            case 0x174E8Cu: goto label_174e8c;
            case 0x174E90u: goto label_174e90;
            case 0x174E94u: goto label_174e94;
            case 0x174E98u: goto label_174e98;
            case 0x174E9Cu: goto label_174e9c;
            case 0x174EA0u: goto label_174ea0;
            case 0x174EA4u: goto label_174ea4;
            case 0x174EA8u: goto label_174ea8;
            case 0x174EACu: goto label_174eac;
            case 0x174EB0u: goto label_174eb0;
            case 0x174EB4u: goto label_174eb4;
            case 0x174EB8u: goto label_174eb8;
            case 0x174EBCu: goto label_174ebc;
            case 0x174EC0u: goto label_174ec0;
            case 0x174EC4u: goto label_174ec4;
            case 0x174EC8u: goto label_174ec8;
            case 0x174ECCu: goto label_174ecc;
            case 0x174ED0u: goto label_174ed0;
            case 0x174ED4u: goto label_174ed4;
            case 0x174ED8u: goto label_174ed8;
            default: break;
        }
        return;
    }
label_fallthrough_0x174ed4:
    ctx->pc = 0x174EDCu;
}
