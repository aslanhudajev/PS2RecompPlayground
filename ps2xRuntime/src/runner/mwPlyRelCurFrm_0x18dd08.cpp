#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyRelCurFrm
// Address: 0x18dd08 - 0x18dd5c
void mwPlyRelCurFrm_0x18dd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyRelCurFrm");


    ctx->pc = 0x18dd08u;

    // 0x18dd08: 0x27bdffd0
    ctx->pc = 0x18dd08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18dd0c: 0xffb00000
    ctx->pc = 0x18dd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18dd10: 0xffbf0020
    ctx->pc = 0x18dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18dd14: 0x80802d
    ctx->pc = 0x18dd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd18: 0xffb10010
    ctx->pc = 0x18dd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18dd1c: 0xc063d42
    ctx->pc = 0x18DD1Cu;
    SET_GPR_U32(ctx, 31, 0x18DD24u);
    ctx->pc = 0x18DD20u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    ctx->pc = 0x18F508u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyGetSfdHn_0x18f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD24u; }
        else if (ctx->pc != 0x18DD24u) { ctx->pc = 0x18DD24u; }
    }
    if (ctx->pc != 0x18DD24u) { return; }
    ctx->pc = 0x18DD24u;
    // 0x18dd24: 0x40202d
    ctx->pc = 0x18dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd28: 0x8e03008c
    ctx->pc = 0x18dd28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x18dd2c: 0x24020001
    ctx->pc = 0x18dd2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dd30: 0x14620006
    ctx->pc = 0x18DD30u;
    {
        const bool branch_taken_0x18dd30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x18DD34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18dd30) {
            ctx->pc = 0x18DD4Cu;
            goto label_18dd4c;
        }
    }
    ctx->pc = 0x18DD38u;
    // 0x18dd38: 0x220282d
    ctx->pc = 0x18dd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd3c: 0xdfb10010
    ctx->pc = 0x18dd3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dd40: 0xdfb00000
    ctx->pc = 0x18dd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd44: 0x8066fa0
    ctx->pc = 0x18DD44u;
    ctx->pc = 0x18DD48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19BE80u;
    SFD_RelFrm_0x19be80(rdram, ctx, runtime); return;
    ctx->pc = 0x18DD4Cu;
label_18dd4c:
    // 0x18dd4c: 0xdfb10010
    ctx->pc = 0x18dd4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dd50: 0xdfb00000
    ctx->pc = 0x18dd50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd54: 0x3e00008
    ctx->pc = 0x18DD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DD4Cu: goto label_18dd4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DD5Cu;
}
