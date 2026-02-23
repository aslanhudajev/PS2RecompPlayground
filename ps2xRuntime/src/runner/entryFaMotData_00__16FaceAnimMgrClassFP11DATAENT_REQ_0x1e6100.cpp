#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaMotData_00__16FaceAnimMgrClassFP11DATAENT_REQ
// Address: 0x1e6100 - 0x1e619c
void entryFaMotData_00__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaMotData_00__16FaceAnimMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e6100u;

    // 0x1e6100: 0x27bdffe0
    ctx->pc = 0x1e6100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6104: 0x7fbf0010
    ctx->pc = 0x1e6104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e6108: 0x7fb00000
    ctx->pc = 0x1e6108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e610c: 0x8ca30008
    ctx->pc = 0x1e610cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e6110: 0x3c020050
    ctx->pc = 0x1e6110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e6114: 0x24420a80
    ctx->pc = 0x1e6114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1e6118: 0xaf838b30
    ctx->pc = 0x1e6118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 3));
    // 0x1e611c: 0x8f848b30
    ctx->pc = 0x1e611cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1e6120: 0x41880
    ctx->pc = 0x1e6120u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e6124: 0x431021
    ctx->pc = 0x1e6124u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6128: 0x8c420000
    ctx->pc = 0x1e6128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e612c: 0x14400016
    ctx->pc = 0x1E612Cu;
    {
        const bool branch_taken_0x1e612c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E6130u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e612c) {
            ctx->pc = 0x1E6188u;
            goto label_1e6188;
        }
    }
    ctx->pc = 0x1E6134u;
    // 0x1e6134: 0x41040
    ctx->pc = 0x1e6134u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e6138: 0x441021
    ctx->pc = 0x1e6138u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e613c: 0x21880
    ctx->pc = 0x1e613cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e6140: 0x3c020027
    ctx->pc = 0x1e6140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e6144: 0x2442b7a0
    ctx->pc = 0x1e6144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x1e6148: 0x431021
    ctx->pc = 0x1e6148u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e614c: 0x3c010050
    ctx->pc = 0x1e614cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e6150: 0x8c450000
    ctx->pc = 0x1e6150u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6154: 0x8c240c7c
    ctx->pc = 0x1e6154u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    // 0x1e6158: 0xc05af94
    ctx->pc = 0x1E6158u;
    SET_GPR_U32(ctx, 31, 0x1E6160u);
    ctx->pc = 0x1E615Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Seek_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6160u; }
        else if (ctx->pc != 0x1E6160u) { ctx->pc = 0x1E6160u; }
    }
    if (ctx->pc != 0x1E6160u) { return; }
    ctx->pc = 0x1E6160u;
    // 0x1e6160: 0x8f848b30
    ctx->pc = 0x1e6160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1e6164: 0x3c020050
    ctx->pc = 0x1e6164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e6168: 0x24430a80
    ctx->pc = 0x1e6168u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1e616c: 0x2405ffff
    ctx->pc = 0x1e616cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6170: 0x24020001
    ctx->pc = 0x1e6170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6174: 0x42080
    ctx->pc = 0x1e6174u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e6178: 0x641821
    ctx->pc = 0x1e6178u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e617c: 0xac650000
    ctx->pc = 0x1e617cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1e6180: 0x10000002
    ctx->pc = 0x1E6180u;
    {
        const bool branch_taken_0x1e6180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6184u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1e6180) {
            ctx->pc = 0x1E618Cu;
            goto label_1e618c;
        }
    }
    ctx->pc = 0x1E6188u;
label_1e6188:
    // 0x1e6188: 0x2402ffff
    ctx->pc = 0x1e6188u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e618c:
    // 0x1e618c: 0x7bbf0010
    ctx->pc = 0x1e618cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6190: 0x7bb00000
    ctx->pc = 0x1e6190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6194: 0x3e00008
    ctx->pc = 0x1E6194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6198u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6188u: goto label_1e6188;
            case 0x1E618Cu: goto label_1e618c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E619Cu;
}
