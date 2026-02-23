#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_GetVideoStartSample
// Address: 0x19dd20 - 0x19dd8c
void SFTIM_GetVideoStartSample_0x19dd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_GetVideoStartSample");


    ctx->pc = 0x19dd20u;

    // 0x19dd20: 0x27bdffe0
    ctx->pc = 0x19dd20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19dd24: 0x248700b8
    ctx->pc = 0x19dd24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 184));
    // 0x19dd28: 0xffbf0010
    ctx->pc = 0x19dd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19dd2c: 0x248300e0
    ctx->pc = 0x19dd2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 224));
    // 0x19dd30: 0xffb00000
    ctx->pc = 0x19dd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19dd34: 0x8c8200e0
    ctx->pc = 0x19dd34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x19dd38: 0x10400004
    ctx->pc = 0x19DD38u;
    {
        const bool branch_taken_0x19dd38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DD3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x19dd38) {
            ctx->pc = 0x19DD4Cu;
            goto label_19dd4c;
        }
    }
    ctx->pc = 0x19DD40u;
    // 0x19dd40: 0x8c660024
    ctx->pc = 0x19dd40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x19dd44: 0x10000007
    ctx->pc = 0x19DD44u;
    {
        const bool branch_taken_0x19dd44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DD48u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 32)));
        if (branch_taken_0x19dd44) {
            ctx->pc = 0x19DD64u;
            goto label_19dd64;
        }
    }
    ctx->pc = 0x19DD4Cu;
label_19dd4c:
    // 0x19dd4c: 0x8ce40020
    ctx->pc = 0x19dd4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x19dd50: 0x4830003
    ctx->pc = 0x19DD50u;
    {
        const bool branch_taken_0x19dd50 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x19dd50) {
            ctx->pc = 0x19DD54u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 36)));
            ctx->pc = 0x19DD60u;
            goto label_19dd60;
        }
    }
    ctx->pc = 0x19DD58u;
    // 0x19dd58: 0x10000008
    ctx->pc = 0x19DD58u;
    {
        const bool branch_taken_0x19dd58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DD5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x19dd58) {
            ctx->pc = 0x19DD7Cu;
            goto label_19dd7c;
        }
    }
    ctx->pc = 0x19DD60u;
label_19dd60:
    // 0x19dd60: 0x80802d
    ctx->pc = 0x19dd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19dd64:
    // 0x19dd64: 0xc063132
    ctx->pc = 0x19DD64u;
    SET_GPR_U32(ctx, 31, 0x19DD6Cu);
    ctx->pc = 0x19DD68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD6Cu; }
        else if (ctx->pc != 0x19DD6Cu) { ctx->pc = 0x19DD6Cu; }
    }
    if (ctx->pc != 0x19DD6Cu) { return; }
    ctx->pc = 0x19DD6Cu;
    // 0x19dd6c: 0x3c030026
    ctx->pc = 0x19dd6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x19dd70: 0x3c040026
    ctx->pc = 0x19dd70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x19dd74: 0xac70df68
    ctx->pc = 0x19dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958952), GPR_U32(ctx, 16));
    // 0x19dd78: 0xac82df6c
    ctx->pc = 0x19dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294958956), GPR_U32(ctx, 2));
label_19dd7c:
    // 0x19dd7c: 0xdfbf0010
    ctx->pc = 0x19dd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dd80: 0xdfb00000
    ctx->pc = 0x19dd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dd84: 0x3e00008
    ctx->pc = 0x19DD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DD88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DD4Cu: goto label_19dd4c;
            case 0x19DD60u: goto label_19dd60;
            case 0x19DD64u: goto label_19dd64;
            case 0x19DD7Cu: goto label_19dd7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DD8Cu;
}
