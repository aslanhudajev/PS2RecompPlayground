#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_ChkCrePara
// Address: 0x19b718 - 0x19b72c
void sfply_ChkCrePara_0x19b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_ChkCrePara");


    ctx->pc = 0x19b718u;

    // 0x19b718: 0x8c830004
    ctx->pc = 0x19b718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19b71c: 0x3c02ffff
    ctx->pc = 0x19b71cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x19b720: 0x3442ffff
    ctx->pc = 0x19b720u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x19b724: 0x3e00008
    ctx->pc = 0x19B724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B728u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B72Cu;
}
