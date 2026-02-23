#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetMojiCodeNo2__8MojiUchiFPCc
// Address: 0x224060 - 0x2240a8
void GetMojiCodeNo2__8MojiUchiFPCc_0x224060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetMojiCodeNo2__8MojiUchiFPCc");


    ctx->pc = 0x224060u;

    // 0x224060: 0x80a40000
    ctx->pc = 0x224060u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x224064: 0x28830030
    ctx->pc = 0x224064u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 48));
    // 0x224068: 0x14600007
    ctx->pc = 0x224068u;
    {
        const bool branch_taken_0x224068 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x22406Cu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 97));
        if (branch_taken_0x224068) {
            ctx->pc = 0x224088u;
            goto label_224088;
        }
    }
    ctx->pc = 0x224070u;
    // 0x224070: 0x2881003a
    ctx->pc = 0x224070u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 58));
    // 0x224074: 0x10200003
    ctx->pc = 0x224074u;
    {
        const bool branch_taken_0x224074 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x224074) {
            ctx->pc = 0x224084u;
            goto label_224084;
        }
    }
    ctx->pc = 0x22407Cu;
    // 0x22407c: 0x10000008
    ctx->pc = 0x22407Cu;
    {
        const bool branch_taken_0x22407c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224080u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967248));
        if (branch_taken_0x22407c) {
            ctx->pc = 0x2240A0u;
            goto label_2240a0;
        }
    }
    ctx->pc = 0x224084u;
label_224084:
    // 0x224084: 0x28830061
    ctx->pc = 0x224084u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 97));
label_224088:
    // 0x224088: 0x14600005
    ctx->pc = 0x224088u;
    {
        const bool branch_taken_0x224088 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x224088) {
            ctx->pc = 0x2240A0u;
            goto label_2240a0;
        }
    }
    ctx->pc = 0x224090u;
    // 0x224090: 0x2881007b
    ctx->pc = 0x224090u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 123));
    // 0x224094: 0x10200002
    ctx->pc = 0x224094u;
    {
        const bool branch_taken_0x224094 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x224094) {
            ctx->pc = 0x2240A0u;
            goto label_2240a0;
        }
    }
    ctx->pc = 0x22409Cu;
    // 0x22409c: 0x2482ffa9
    ctx->pc = 0x22409cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967209));
label_2240a0:
    // 0x2240a0: 0x3e00008
    ctx->pc = 0x2240A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224084u: goto label_224084;
            case 0x224088u: goto label_224088;
            case 0x2240A0u: goto label_2240a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2240A8u;
}
