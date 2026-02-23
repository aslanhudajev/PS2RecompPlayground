#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ChgMode__14GameScreenTaskFc
// Address: 0x202bd0 - 0x202c3c
void ChgMode__14GameScreenTaskFc_0x202bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ChgMode__14GameScreenTaskFc");


    ctx->pc = 0x202bd0u;

    // 0x202bd0: 0x5463c
    ctx->pc = 0x202bd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 24));
    // 0x202bd4: 0x8463f
    ctx->pc = 0x202bd4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x202bd8: 0x24070001
    ctx->pc = 0x202bd8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x202bdc: 0x5507000a
    ctx->pc = 0x202BDCu;
    {
        const bool branch_taken_0x202bdc = (GPR_U32(ctx, 8) != GPR_U32(ctx, 7));
        if (branch_taken_0x202bdc) {
            ctx->pc = 0x202BE0u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x202C08u;
            goto label_202c08;
        }
    }
    ctx->pc = 0x202BE4u;
    // 0x202be4: 0x80860004
    ctx->pc = 0x202be4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202be8: 0x24030002
    ctx->pc = 0x202be8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x202bec: 0x10c30011
    ctx->pc = 0x202BECu;
    {
        const bool branch_taken_0x202bec = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x202bec) {
            ctx->pc = 0x202C34u;
            goto label_202c34;
        }
    }
    ctx->pc = 0x202BF4u;
    // 0x202bf4: 0x14c70003
    ctx->pc = 0x202BF4u;
    {
        const bool branch_taken_0x202bf4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 7));
        if (branch_taken_0x202bf4) {
            ctx->pc = 0x202C04u;
            goto label_202c04;
        }
    }
    ctx->pc = 0x202BFCu;
    // 0x202bfc: 0x1000000d
    ctx->pc = 0x202BFCu;
    {
        const bool branch_taken_0x202bfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x202bfc) {
            ctx->pc = 0x202C34u;
            goto label_202c34;
        }
    }
    ctx->pc = 0x202C04u;
label_202c04:
    // 0x202c04: 0x24070003
    ctx->pc = 0x202c04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
label_202c08:
    // 0x202c08: 0x15070009
    ctx->pc = 0x202C08u;
    {
        const bool branch_taken_0x202c08 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 7));
        if (branch_taken_0x202c08) {
            ctx->pc = 0x202C30u;
            goto label_202c30;
        }
    }
    ctx->pc = 0x202C10u;
    // 0x202c10: 0x80860004
    ctx->pc = 0x202c10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202c14: 0x24030004
    ctx->pc = 0x202c14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x202c18: 0x10c30006
    ctx->pc = 0x202C18u;
    {
        const bool branch_taken_0x202c18 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x202c18) {
            ctx->pc = 0x202C34u;
            goto label_202c34;
        }
    }
    ctx->pc = 0x202C20u;
    // 0x202c20: 0x14c70003
    ctx->pc = 0x202C20u;
    {
        const bool branch_taken_0x202c20 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 7));
        if (branch_taken_0x202c20) {
            ctx->pc = 0x202C30u;
            goto label_202c30;
        }
    }
    ctx->pc = 0x202C28u;
    // 0x202c28: 0x10000002
    ctx->pc = 0x202C28u;
    {
        const bool branch_taken_0x202c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x202c28) {
            ctx->pc = 0x202C34u;
            goto label_202c34;
        }
    }
    ctx->pc = 0x202C30u;
label_202c30:
    // 0x202c30: 0xa0850004
    ctx->pc = 0x202c30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
label_202c34:
    // 0x202c34: 0x3e00008
    ctx->pc = 0x202C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202C04u: goto label_202c04;
            case 0x202C08u: goto label_202c08;
            case 0x202C30u: goto label_202c30;
            case 0x202C34u: goto label_202c34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202C3Cu;
}
