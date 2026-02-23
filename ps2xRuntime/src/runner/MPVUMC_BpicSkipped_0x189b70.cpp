#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVUMC_BpicSkipped
// Address: 0x189b70 - 0x189be8
void MPVUMC_BpicSkipped_0x189b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVUMC_BpicSkipped");


    ctx->pc = 0x189b70u;

label_189b70:
    // 0x189b70: 0x27bdffb0
    ctx->pc = 0x189b70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_189b74:
    // 0x189b74: 0xffb10010
    ctx->pc = 0x189b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_189b78:
    // 0x189b78: 0xffb00000
    ctx->pc = 0x189b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_189b7c:
    // 0x189b7c: 0x80882d
    ctx->pc = 0x189b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_189b80:
    // 0x189b80: 0xffbf0040
    ctx->pc = 0x189b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_189b84:
    // 0x189b84: 0xffb30030
    ctx->pc = 0x189b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_189b88:
    // 0x189b88: 0xffb20020
    ctx->pc = 0x189b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_189b8c:
    // 0x189b8c: 0x8e32029c
    ctx->pc = 0x189b8cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_189b90:
    // 0x189b90: 0x8e330240
    ctx->pc = 0x189b90u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 576)));
label_189b94:
    // 0x189b94: 0x2452823
    ctx->pc = 0x189b94u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_189b98:
    // 0x189b98: 0x24b00001
    ctx->pc = 0x189b98u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 1));
label_189b9c:
    // 0x189b9c: 0x212102a
    ctx->pc = 0x189b9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_189ba0:
    // 0x189ba0: 0x10400009
label_189ba4:
    if (ctx->pc == 0x189BA4u) {
        ctx->pc = 0x189BA4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
        ctx->pc = 0x189BA8u;
        goto label_189ba8;
    }
    ctx->pc = 0x189BA0u;
    {
        const bool branch_taken_0x189ba0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x189BA4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
        if (branch_taken_0x189ba0) {
            ctx->pc = 0x189BC8u;
            goto label_189bc8;
        }
    }
    ctx->pc = 0x189BA8u;
label_189ba8:
    // 0x189ba8: 0xae30029c
    ctx->pc = 0x189ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 16));
label_189bac:
    // 0x189bac: 0x0
    ctx->pc = 0x189bacu;
    // NOP
label_189bb0:
    // 0x189bb0: 0x220202d
    ctx->pc = 0x189bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_189bb4:
    // 0x189bb4: 0x260f809
label_189bb8:
    if (ctx->pc == 0x189BB8u) {
        ctx->pc = 0x189BB8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x189BBCu;
        goto label_189bbc;
    }
    ctx->pc = 0x189BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x189BBCu);
        ctx->pc = 0x189BB8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189B70u: goto label_189b70;
            case 0x189B74u: goto label_189b74;
            case 0x189B78u: goto label_189b78;
            case 0x189B7Cu: goto label_189b7c;
            case 0x189B80u: goto label_189b80;
            case 0x189B84u: goto label_189b84;
            case 0x189B88u: goto label_189b88;
            case 0x189B8Cu: goto label_189b8c;
            case 0x189B90u: goto label_189b90;
            case 0x189B94u: goto label_189b94;
            case 0x189B98u: goto label_189b98;
            case 0x189B9Cu: goto label_189b9c;
            case 0x189BA0u: goto label_189ba0;
            case 0x189BA4u: goto label_189ba4;
            case 0x189BA8u: goto label_189ba8;
            case 0x189BACu: goto label_189bac;
            case 0x189BB0u: goto label_189bb0;
            case 0x189BB4u: goto label_189bb4;
            case 0x189BB8u: goto label_189bb8;
            case 0x189BBCu: goto label_189bbc;
            case 0x189BC0u: goto label_189bc0;
            case 0x189BC4u: goto label_189bc4;
            case 0x189BC8u: goto label_189bc8;
            case 0x189BCCu: goto label_189bcc;
            case 0x189BD0u: goto label_189bd0;
            case 0x189BD4u: goto label_189bd4;
            case 0x189BD8u: goto label_189bd8;
            case 0x189BDCu: goto label_189bdc;
            case 0x189BE0u: goto label_189be0;
            case 0x189BE4u: goto label_189be4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x189BBCu; }
            if (ctx->pc != 0x189BBCu) { return; }
        }
    }
    ctx->pc = 0x189BBCu;
label_189bbc:
    // 0x189bbc: 0x212102a
    ctx->pc = 0x189bbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_189bc0:
    // 0x189bc0: 0x5440fffb
label_189bc4:
    if (ctx->pc == 0x189BC4u) {
        ctx->pc = 0x189BC4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 16));
        ctx->pc = 0x189BC8u;
        goto label_189bc8;
    }
    ctx->pc = 0x189BC0u;
    {
        const bool branch_taken_0x189bc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x189bc0) {
            ctx->pc = 0x189BC4u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 16));
            ctx->pc = 0x189BB0u;
            goto label_189bb0;
        }
    }
    ctx->pc = 0x189BC8u;
label_189bc8:
    // 0x189bc8: 0xae32029c
    ctx->pc = 0x189bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 18));
label_189bcc:
    // 0x189bcc: 0xdfbf0040
    ctx->pc = 0x189bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_189bd0:
    // 0x189bd0: 0xdfb30030
    ctx->pc = 0x189bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_189bd4:
    // 0x189bd4: 0xdfb20020
    ctx->pc = 0x189bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_189bd8:
    // 0x189bd8: 0xdfb10010
    ctx->pc = 0x189bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_189bdc:
    // 0x189bdc: 0xdfb00000
    ctx->pc = 0x189bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_189be0:
    // 0x189be0: 0x3e00008
label_189be4:
    if (ctx->pc == 0x189BE4u) {
        ctx->pc = 0x189BE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x189BE8u;
        goto label_fallthrough_0x189be0;
    }
    ctx->pc = 0x189BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189BE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189B70u: goto label_189b70;
            case 0x189B74u: goto label_189b74;
            case 0x189B78u: goto label_189b78;
            case 0x189B7Cu: goto label_189b7c;
            case 0x189B80u: goto label_189b80;
            case 0x189B84u: goto label_189b84;
            case 0x189B88u: goto label_189b88;
            case 0x189B8Cu: goto label_189b8c;
            case 0x189B90u: goto label_189b90;
            case 0x189B94u: goto label_189b94;
            case 0x189B98u: goto label_189b98;
            case 0x189B9Cu: goto label_189b9c;
            case 0x189BA0u: goto label_189ba0;
            case 0x189BA4u: goto label_189ba4;
            case 0x189BA8u: goto label_189ba8;
            case 0x189BACu: goto label_189bac;
            case 0x189BB0u: goto label_189bb0;
            case 0x189BB4u: goto label_189bb4;
            case 0x189BB8u: goto label_189bb8;
            case 0x189BBCu: goto label_189bbc;
            case 0x189BC0u: goto label_189bc0;
            case 0x189BC4u: goto label_189bc4;
            case 0x189BC8u: goto label_189bc8;
            case 0x189BCCu: goto label_189bcc;
            case 0x189BD0u: goto label_189bd0;
            case 0x189BD4u: goto label_189bd4;
            case 0x189BD8u: goto label_189bd8;
            case 0x189BDCu: goto label_189bdc;
            case 0x189BE0u: goto label_189be0;
            case 0x189BE4u: goto label_189be4;
            default: break;
        }
        return;
    }
label_fallthrough_0x189be0:
    ctx->pc = 0x189BE8u;
}
