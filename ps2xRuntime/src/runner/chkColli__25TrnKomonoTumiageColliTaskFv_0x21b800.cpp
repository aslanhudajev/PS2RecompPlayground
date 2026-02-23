#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chkColli__25TrnKomonoTumiageColliTaskFv
// Address: 0x21b800 - 0x21b824
void chkColli__25TrnKomonoTumiageColliTaskFv_0x21b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chkColli__25TrnKomonoTumiageColliTaskFv");


    ctx->pc = 0x21b800u;

    // 0x21b800: 0x8c83000c
    ctx->pc = 0x21b800u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b804: 0x24020001
    ctx->pc = 0x21b804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b808: 0x30630008
    ctx->pc = 0x21b808u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8));
    // 0x21b80c: 0x3100a
    ctx->pc = 0x21b80cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x21b810: 0x10400002
    ctx->pc = 0x21B810u;
    {
        const bool branch_taken_0x21b810 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21B814u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21b810) {
            ctx->pc = 0x21B81Cu;
            goto label_21b81c;
        }
    }
    ctx->pc = 0x21B818u;
    // 0x21b818: 0x24020001
    ctx->pc = 0x21b818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21b81c:
    // 0x21b81c: 0x3e00008
    ctx->pc = 0x21B81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21B81Cu: goto label_21b81c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21B824u;
}
