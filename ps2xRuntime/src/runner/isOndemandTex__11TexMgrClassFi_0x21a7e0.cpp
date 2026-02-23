#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isOndemandTex__11TexMgrClassFi
// Address: 0x21a7e0 - 0x21a824
void isOndemandTex__11TexMgrClassFi_0x21a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isOndemandTex__11TexMgrClassFi");


    ctx->pc = 0x21a7e0u;

    // 0x21a7e0: 0x510c0
    ctx->pc = 0x21a7e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x21a7e4: 0x451023
    ctx->pc = 0x21a7e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21a7e8: 0x21880
    ctx->pc = 0x21a7e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a7ec: 0x3c020092
    ctx->pc = 0x21a7ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
    // 0x21a7f0: 0x24424d00
    ctx->pc = 0x21a7f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19712));
    // 0x21a7f4: 0x431821
    ctx->pc = 0x21a7f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a7f8: 0x8c620000
    ctx->pc = 0x21a7f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a7fc: 0x2102b
    ctx->pc = 0x21a7fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x21a800: 0x50400006
    ctx->pc = 0x21A800u;
    {
        const bool branch_taken_0x21a800 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21a800) {
            ctx->pc = 0x21A804u;
            SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
            ctx->pc = 0x21A81Cu;
            goto label_21a81c;
        }
    }
    ctx->pc = 0x21A808u;
    // 0x21a808: 0x8c620018
    ctx->pc = 0x21a808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x21a80c: 0x30420001
    ctx->pc = 0x21a80cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x21a810: 0x38420001
    ctx->pc = 0x21a810u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x21a814: 0x2c420001
    ctx->pc = 0x21a814u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x21a818: 0x304200ff
    ctx->pc = 0x21a818u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_21a81c:
    // 0x21a81c: 0x3e00008
    ctx->pc = 0x21A81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A81Cu: goto label_21a81c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A824u;
}
