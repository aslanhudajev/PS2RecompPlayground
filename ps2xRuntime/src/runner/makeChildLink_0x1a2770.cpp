#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: makeChildLink
// Address: 0x1a2770 - 0x1a27d0
void makeChildLink_0x1a2770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("makeChildLink");


    ctx->pc = 0x1a2770u;

    // 0x1a2770: 0xa480002c
    ctx->pc = 0x1a2770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2774: 0xac800020
    ctx->pc = 0x1a2774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1a2778: 0x8c86001c
    ctx->pc = 0x1a2778u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a277c: 0x24030001
    ctx->pc = 0x1a277cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2780: 0x94c5002c
    ctx->pc = 0x1a2780u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1a2784: 0x24a50001
    ctx->pc = 0x1a2784u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a2788: 0xa4c5002c
    ctx->pc = 0x1a2788u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a278c: 0x8c86001c
    ctx->pc = 0x1a278cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a2790: 0x94c5002c
    ctx->pc = 0x1a2790u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1a2794: 0x14a30005
    ctx->pc = 0x1A2794u;
    {
        const bool branch_taken_0x1a2794 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a2794) {
            ctx->pc = 0x1A27ACu;
            goto label_1a27ac;
        }
    }
    ctx->pc = 0x1A279Cu;
    // 0x1a279c: 0xacc40020
    ctx->pc = 0x1a279cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
    // 0x1a27a0: 0xac840024
    ctx->pc = 0x1a27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 4));
    // 0x1a27a4: 0x10000008
    ctx->pc = 0x1A27A4u;
    {
        const bool branch_taken_0x1a27a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A27A8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 4));
        if (branch_taken_0x1a27a4) {
            ctx->pc = 0x1A27C8u;
            goto label_1a27c8;
        }
    }
    ctx->pc = 0x1A27ACu;
label_1a27ac:
    // 0x1a27ac: 0x8cc50020
    ctx->pc = 0x1a27acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a27b0: 0xac850024
    ctx->pc = 0x1a27b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x1a27b4: 0x8ca30028
    ctx->pc = 0x1a27b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1a27b8: 0xac830028
    ctx->pc = 0x1a27b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x1a27bc: 0x8ca30028
    ctx->pc = 0x1a27bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1a27c0: 0xac640024
    ctx->pc = 0x1a27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x1a27c4: 0xaca40028
    ctx->pc = 0x1a27c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 4));
label_1a27c8:
    // 0x1a27c8: 0x3e00008
    ctx->pc = 0x1A27C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A27ACu: goto label_1a27ac;
            case 0x1A27C8u: goto label_1a27c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A27D0u;
}
