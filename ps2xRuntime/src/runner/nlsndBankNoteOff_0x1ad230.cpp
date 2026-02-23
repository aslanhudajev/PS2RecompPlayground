#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndBankNoteOff
// Address: 0x1ad230 - 0x1ad268
void nlsndBankNoteOff_0x1ad230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndBankNoteOff");


    ctx->pc = 0x1ad230u;

    // 0x1ad230: 0x8f868ab8
    ctx->pc = 0x1ad230u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad234: 0x3c020030
    ctx->pc = 0x1ad234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad238: 0x24455880
    ctx->pc = 0x1ad238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 22656));
    // 0x1ad23c: 0x24030002
    ctx->pc = 0x1ad23cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad240: 0x70001628
    ctx->pc = 0x1ad240u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad244: 0x630c0
    ctx->pc = 0x1ad244u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x1ad248: 0xa62821
    ctx->pc = 0x1ad248u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ad24c: 0xa0a30000
    ctx->pc = 0x1ad24cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad250: 0xa0a40001
    ctx->pc = 0x1ad250u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ad254: 0x8f838ab8
    ctx->pc = 0x1ad254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad258: 0x24630001
    ctx->pc = 0x1ad258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ad25c: 0x3063003f
    ctx->pc = 0x1ad25cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 63));
    // 0x1ad260: 0x3e00008
    ctx->pc = 0x1AD260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD264u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD268u;
}
