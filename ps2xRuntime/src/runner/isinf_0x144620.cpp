#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isinf
// Address: 0x144620 - 0x144668
void isinf_0x144620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isinf");


    ctx->pc = 0x144620u;

    // 0x144620: 0x4103c
    ctx->pc = 0x144620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x144624: 0x2103f
    ctx->pc = 0x144624u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x144628: 0x4203f
    ctx->pc = 0x144628u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x14462c: 0x3c037fff
    ctx->pc = 0x14462cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x144630: 0x22823
    ctx->pc = 0x144630u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x144634: 0x3463ffff
    ctx->pc = 0x144634u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x144638: 0x451025
    ctx->pc = 0x144638u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14463c: 0x832024
    ctx->pc = 0x14463cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144640: 0x217c2
    ctx->pc = 0x144640u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x144644: 0x3c057ff0
    ctx->pc = 0x144644u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32752 << 16));
    // 0x144648: 0x822025
    ctx->pc = 0x144648u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14464c: 0xa42023
    ctx->pc = 0x14464cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x144650: 0x24020001
    ctx->pc = 0x144650u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x144654: 0x41823
    ctx->pc = 0x144654u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x144658: 0x832025
    ctx->pc = 0x144658u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14465c: 0x427c2
    ctx->pc = 0x14465cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 31));
    // 0x144660: 0x3e00008
    ctx->pc = 0x144660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144664u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144668u;
}
