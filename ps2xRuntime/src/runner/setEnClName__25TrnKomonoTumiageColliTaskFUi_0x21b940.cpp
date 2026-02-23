#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setEnClName__25TrnKomonoTumiageColliTaskFUi
// Address: 0x21b940 - 0x21b988
void setEnClName__25TrnKomonoTumiageColliTaskFUi_0x21b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setEnClName__25TrnKomonoTumiageColliTaskFUi");


    ctx->pc = 0x21b940u;

    // 0x21b940: 0x8c87000c
    ctx->pc = 0x21b940u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b944: 0x3c03fffe
    ctx->pc = 0x21b944u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x21b948: 0x3466ffff
    ctx->pc = 0x21b948u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 3), 65535));
    // 0x21b94c: 0x24030001
    ctx->pc = 0x21b94cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b950: 0x34e70001
    ctx->pc = 0x21b950u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 1));
    // 0x21b954: 0xac87000c
    ctx->pc = 0x21b954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x21b958: 0x8c87000c
    ctx->pc = 0x21b958u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b95c: 0x34e70010
    ctx->pc = 0x21b95cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 16));
    // 0x21b960: 0xac87000c
    ctx->pc = 0x21b960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x21b964: 0x8c87000c
    ctx->pc = 0x21b964u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b968: 0x34e70040
    ctx->pc = 0x21b968u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 64));
    // 0x21b96c: 0xac87000c
    ctx->pc = 0x21b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x21b970: 0x8c87000c
    ctx->pc = 0x21b970u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b974: 0xe63024
    ctx->pc = 0x21b974u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x21b978: 0xac86000c
    ctx->pc = 0x21b978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x21b97c: 0xac8500d8
    ctx->pc = 0x21b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
    // 0x21b980: 0x3e00008
    ctx->pc = 0x21B980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B984u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B988u;
}
