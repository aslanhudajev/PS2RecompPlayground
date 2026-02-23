#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFLIB_CheckHn
// Address: 0x193c78 - 0x193c9c
void SFLIB_CheckHn_0x193c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFLIB_CheckHn");


    ctx->pc = 0x193c78u;

    // 0x193c78: 0x3c020026
    ctx->pc = 0x193c78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x193c7c: 0x14800003
    ctx->pc = 0x193C7Cu;
    {
        const bool branch_taken_0x193c7c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x193C80u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294958520), GPR_U32(ctx, 4));
        if (branch_taken_0x193c7c) {
            ctx->pc = 0x193C8Cu;
            goto label_193c8c;
        }
    }
    ctx->pc = 0x193C84u;
    // 0x193c84: 0x3e00008
    ctx->pc = 0x193C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193C8Cu: goto label_193c8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193C8Cu;
label_193c8c:
    // 0x193c8c: 0x8c830040
    ctx->pc = 0x193c8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x193c90: 0x2402ffff
    ctx->pc = 0x193c90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193c94: 0x3e00008
    ctx->pc = 0x193C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C98u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193C8Cu: goto label_193c8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193C9Cu;
}
