#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_PpicSkipBlk
// Address: 0x184758 - 0x184810
void mpvcmc_PpicSkipBlk_0x184758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_PpicSkipBlk");


    ctx->pc = 0x184758u;

    // 0x184758: 0x8c820014
    ctx->pc = 0x184758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x18475c: 0x8c83000c
    ctx->pc = 0x18475cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x184760: 0xdc480000
    ctx->pc = 0x184760u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184764: 0x318c2
    ctx->pc = 0x184764u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 3));
    // 0x184768: 0x8c870004
    ctx->pc = 0x184768u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18476c: 0xfca80000
    ctx->pc = 0x18476cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x184770: 0x318c0
    ctx->pc = 0x184770u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x184774: 0x431021
    ctx->pc = 0x184774u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x184778: 0xdc440000
    ctx->pc = 0x184778u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18477c: 0x431021
    ctx->pc = 0x18477cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x184780: 0xfca40008
    ctx->pc = 0x184780u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x184784: 0xdc460000
    ctx->pc = 0x184784u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184788: 0x431021
    ctx->pc = 0x184788u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18478c: 0xfca60010
    ctx->pc = 0x18478cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 6));
    // 0x184790: 0xdc440000
    ctx->pc = 0x184790u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184794: 0x431021
    ctx->pc = 0x184794u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x184798: 0xfca40018
    ctx->pc = 0x184798u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x18479c: 0xdc460000
    ctx->pc = 0x18479cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1847a0: 0x431021
    ctx->pc = 0x1847a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1847a4: 0xfca60020
    ctx->pc = 0x1847a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 6));
    // 0x1847a8: 0xdc440000
    ctx->pc = 0x1847a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1847ac: 0x431021
    ctx->pc = 0x1847acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1847b0: 0xfca40028
    ctx->pc = 0x1847b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 4));
    // 0x1847b4: 0xdc460000
    ctx->pc = 0x1847b4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1847b8: 0x431021
    ctx->pc = 0x1847b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1847bc: 0xfca60030
    ctx->pc = 0x1847bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 6));
    // 0x1847c0: 0xdc430000
    ctx->pc = 0x1847c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1847c4: 0xfca30038
    ctx->pc = 0x1847c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 3));
    // 0x1847c8: 0xfce80000
    ctx->pc = 0x1847c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 8));
    // 0x1847cc: 0xdca20008
    ctx->pc = 0x1847ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1847d0: 0xfce20008
    ctx->pc = 0x1847d0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x1847d4: 0xdca30010
    ctx->pc = 0x1847d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1847d8: 0xfce30010
    ctx->pc = 0x1847d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 3));
    // 0x1847dc: 0xdca20018
    ctx->pc = 0x1847dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1847e0: 0xfce20018
    ctx->pc = 0x1847e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
    // 0x1847e4: 0x24e70020
    ctx->pc = 0x1847e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
    // 0x1847e8: 0xdca40020
    ctx->pc = 0x1847e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1847ec: 0x24e20020
    ctx->pc = 0x1847ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 32));
    // 0x1847f0: 0xfce40000
    ctx->pc = 0x1847f0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x1847f4: 0xdca30028
    ctx->pc = 0x1847f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1847f8: 0xfce30008
    ctx->pc = 0x1847f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x1847fc: 0xdca40030
    ctx->pc = 0x1847fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x184800: 0xfce40010
    ctx->pc = 0x184800u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x184804: 0xdca30038
    ctx->pc = 0x184804u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x184808: 0x3e00008
    ctx->pc = 0x184808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18480Cu;
        WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184810u;
}
