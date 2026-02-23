#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetAdxtPara
// Address: 0x18fb80 - 0x18fbdc
void SFD_SetAdxtPara_0x18fb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetAdxtPara");


    ctx->pc = 0x18fb80u;

    // 0x18fb80: 0x8c870000
    ctx->pc = 0x18fb80u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18fb84: 0x3c03002f
    ctx->pc = 0x18fb84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)47 << 16));
    // 0x18fb88: 0x2466c658
    ctx->pc = 0x18fb88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294952536));
    // 0x18fb8c: 0x8c820008
    ctx->pc = 0x18fb8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18fb90: 0xac67c658
    ctx->pc = 0x18fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952536), GPR_U32(ctx, 7));
    // 0x18fb94: 0x3c05ffff
    ctx->pc = 0x18fb94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x18fb98: 0x34a5ffe0
    ctx->pc = 0x18fb98u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65504));
    // 0x18fb9c: 0x2442001f
    ctx->pc = 0x18fb9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x18fba0: 0x8c830004
    ctx->pc = 0x18fba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18fba4: 0x451024
    ctx->pc = 0x18fba4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18fba8: 0xacc20008
    ctx->pc = 0x18fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x18fbac: 0xacc30004
    ctx->pc = 0x18fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x18fbb0: 0x8c820018
    ctx->pc = 0x18fbb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x18fbb4: 0x8c83000c
    ctx->pc = 0x18fbb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18fbb8: 0x2442001f
    ctx->pc = 0x18fbb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x18fbbc: 0xacc3000c
    ctx->pc = 0x18fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x18fbc0: 0x451024
    ctx->pc = 0x18fbc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18fbc4: 0xacc20018
    ctx->pc = 0x18fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x18fbc8: 0x8c830010
    ctx->pc = 0x18fbc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x18fbcc: 0xacc30010
    ctx->pc = 0x18fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x18fbd0: 0x8c820014
    ctx->pc = 0x18fbd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x18fbd4: 0x3e00008
    ctx->pc = 0x18FBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FBD8u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FBDCu;
}
