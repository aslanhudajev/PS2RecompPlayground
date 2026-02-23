#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: killChildLink
// Address: 0x1a2840 - 0x1a28f0
void killChildLink_0x1a2840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("killChildLink");


    ctx->pc = 0x1a2840u;

    // 0x1a2840: 0x8c870020
    ctx->pc = 0x1a2840u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1a2844: 0x10e00028
    ctx->pc = 0x1A2844u;
    {
        const bool branch_taken_0x1a2844 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2844) {
            ctx->pc = 0x1A28E8u;
            goto label_1a28e8;
        }
    }
    ctx->pc = 0x1A284Cu;
    // 0x1a284c: 0x9486002c
    ctx->pc = 0x1a284cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1a2850: 0x6082a
    ctx->pc = 0x1a2850u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 6)));
    // 0x1a2854: 0x10200022
    ctx->pc = 0x1A2854u;
    {
        const bool branch_taken_0x1a2854 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2858u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2854) {
            ctx->pc = 0x1A28E0u;
            goto label_1a28e0;
        }
    }
    ctx->pc = 0x1A285Cu;
    // 0x1a285c: 0x28c10009
    ctx->pc = 0x1a285cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), 9));
    // 0x1a2860: 0x14200015
    ctx->pc = 0x1A2860u;
    {
        const bool branch_taken_0x1a2860 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A2864u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 4294967288));
        if (branch_taken_0x1a2860) {
            ctx->pc = 0x1A28B8u;
            goto label_1a28b8;
        }
    }
    ctx->pc = 0x1A2868u;
label_1a2868:
    // 0x1a2868: 0xace0001c
    ctx->pc = 0x1a2868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1a286c: 0x8ce70028
    ctx->pc = 0x1a286cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1a2870: 0x24a50008
    ctx->pc = 0x1a2870u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1a2874: 0xa8182a
    ctx->pc = 0x1a2874u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 8)));
    // 0x1a2878: 0xace0001c
    ctx->pc = 0x1a2878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1a287c: 0x8ce70028
    ctx->pc = 0x1a287cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1a2880: 0xace0001c
    ctx->pc = 0x1a2880u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1a2884: 0x8ce70028
    ctx->pc = 0x1a2884u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1a2888: 0xace0001c
    ctx->pc = 0x1a2888u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1a288c: 0x8ce70028
    ctx->pc = 0x1a288cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1a2890: 0xace0001c
    ctx->pc = 0x1a2890u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1a2894: 0x8ce70028
    ctx->pc = 0x1a2894u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1a2898: 0xace0001c
    ctx->pc = 0x1a2898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1a289c: 0x8ce70028
    ctx->pc = 0x1a289cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1a28a0: 0xace0001c
    ctx->pc = 0x1a28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1a28a4: 0x8ce70028
    ctx->pc = 0x1a28a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1a28a8: 0xace0001c
    ctx->pc = 0x1a28a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1a28ac: 0x1460ffee
    ctx->pc = 0x1A28ACu;
    {
        const bool branch_taken_0x1a28ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A28B0u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 40)));
        if (branch_taken_0x1a28ac) {
            ctx->pc = 0x1A2868u;
            goto label_1a2868;
        }
    }
    ctx->pc = 0x1A28B4u;
    // 0x1a28b4: 0x0
    ctx->pc = 0x1a28b4u;
    // NOP
label_1a28b8:
    // 0x1a28b8: 0xa6082a
    ctx->pc = 0x1a28b8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x1a28bc: 0x10200008
    ctx->pc = 0x1A28BCu;
    {
        const bool branch_taken_0x1a28bc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a28bc) {
            ctx->pc = 0x1A28E0u;
            goto label_1a28e0;
        }
    }
    ctx->pc = 0x1A28C4u;
label_1a28c4:
    // 0x1a28c4: 0xace0001c
    ctx->pc = 0x1a28c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1a28c8: 0x8ce70028
    ctx->pc = 0x1a28c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1a28cc: 0x24a50001
    ctx->pc = 0x1a28ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a28d0: 0xa6182a
    ctx->pc = 0x1a28d0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x1a28d4: 0x0
    ctx->pc = 0x1a28d4u;
    // NOP
    // 0x1a28d8: 0x1460fffa
    ctx->pc = 0x1A28D8u;
    {
        const bool branch_taken_0x1a28d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a28d8) {
            ctx->pc = 0x1A28C4u;
            goto label_1a28c4;
        }
    }
    ctx->pc = 0x1A28E0u;
label_1a28e0:
    // 0x1a28e0: 0xac800020
    ctx->pc = 0x1a28e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1a28e4: 0xa480002c
    ctx->pc = 0x1a28e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
label_1a28e8:
    // 0x1a28e8: 0x3e00008
    ctx->pc = 0x1A28E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2868u: goto label_1a2868;
            case 0x1A28B8u: goto label_1a28b8;
            case 0x1A28C4u: goto label_1a28c4;
            case 0x1A28E0u: goto label_1a28e0;
            case 0x1A28E8u: goto label_1a28e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A28F0u;
}
