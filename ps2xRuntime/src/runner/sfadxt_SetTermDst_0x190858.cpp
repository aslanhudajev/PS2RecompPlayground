#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_SetTermDst
// Address: 0x190858 - 0x190864
void sfadxt_SetTermDst_0x190858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_SetTermDst");


    ctx->pc = 0x190858u;

    // 0x190858: 0xa0302d
    ctx->pc = 0x190858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19085c: 0x8064a5a
    ctx->pc = 0x19085Cu;
    ctx->pc = 0x190860u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 17608)));
    ctx->pc = 0x192968u;
    SFBUF_SetTermFlg_0x192968(rdram, ctx, runtime); return;
    ctx->pc = 0x190864u;
}
