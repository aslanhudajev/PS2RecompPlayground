#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetMojiCodeNo2__11TrnMojiUchiFPCc
// Address: 0x226050 - 0x226098
void GetMojiCodeNo2__11TrnMojiUchiFPCc_0x226050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetMojiCodeNo2__11TrnMojiUchiFPCc");


    ctx->pc = 0x226050u;

    // 0x226050: 0x80a40000
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x226054: 0x28830030
    ctx->pc = 0x226054u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 48));
    // 0x226058: 0x14600007
    ctx->pc = 0x226058u;
    {
        const bool branch_taken_0x226058 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x22605Cu;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 97));
        if (branch_taken_0x226058) {
            ctx->pc = 0x226078u;
            goto label_226078;
        }
    }
    ctx->pc = 0x226060u;
    // 0x226060: 0x2881003a
    ctx->pc = 0x226060u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 58));
    // 0x226064: 0x10200003
    ctx->pc = 0x226064u;
    {
        const bool branch_taken_0x226064 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x226064) {
            ctx->pc = 0x226074u;
            goto label_226074;
        }
    }
    ctx->pc = 0x22606Cu;
    // 0x22606c: 0x10000008
    ctx->pc = 0x22606Cu;
    {
        const bool branch_taken_0x22606c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226070u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967248));
        if (branch_taken_0x22606c) {
            ctx->pc = 0x226090u;
            goto label_226090;
        }
    }
    ctx->pc = 0x226074u;
label_226074:
    // 0x226074: 0x28830061
    ctx->pc = 0x226074u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 97));
label_226078:
    // 0x226078: 0x14600005
    ctx->pc = 0x226078u;
    {
        const bool branch_taken_0x226078 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x226078) {
            ctx->pc = 0x226090u;
            goto label_226090;
        }
    }
    ctx->pc = 0x226080u;
    // 0x226080: 0x2881007b
    ctx->pc = 0x226080u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 123));
    // 0x226084: 0x10200002
    ctx->pc = 0x226084u;
    {
        const bool branch_taken_0x226084 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x226084) {
            ctx->pc = 0x226090u;
            goto label_226090;
        }
    }
    ctx->pc = 0x22608Cu;
    // 0x22608c: 0x2482ffa9
    ctx->pc = 0x22608cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967209));
label_226090:
    // 0x226090: 0x3e00008
    ctx->pc = 0x226090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226074u: goto label_226074;
            case 0x226078u: goto label_226078;
            case 0x226090u: goto label_226090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226098u;
}
