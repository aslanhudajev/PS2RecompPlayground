#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: key_convert__FP11Gun_Act_tag
// Address: 0x1edaa0 - 0x1edb68
void key_convert__FP11Gun_Act_tag_0x1edaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("key_convert__FP11Gun_Act_tag");


    ctx->pc = 0x1edaa0u;

    // 0x1edaa0: 0x27bdffe0
    ctx->pc = 0x1edaa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1edaa4: 0x7fbf0010
    ctx->pc = 0x1edaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1edaa8: 0x7fb00000
    ctx->pc = 0x1edaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1edaac: 0xac800028
    ctx->pc = 0x1edaacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1edab0: 0xac80002c
    ctx->pc = 0x1edab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1edab4: 0xac800030
    ctx->pc = 0x1edab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1edab8: 0x70808628
    ctx->pc = 0x1edab8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1edabc: 0xc07b510
    ctx->pc = 0x1EDABCu;
    SET_GPR_U32(ctx, 31, 0x1EDAC4u);
    ctx->pc = 0x1EDAC0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    ctx->pc = 0x1ED440u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetUsbGunBuffer__Fi_0x1ed440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDAC4u; }
        else if (ctx->pc != 0x1EDAC4u) { ctx->pc = 0x1EDAC4u; }
    }
    if (ctx->pc != 0x1EDAC4u) { return; }
    ctx->pc = 0x1EDAC4u;
    // 0x1edac4: 0x3c030027
    ctx->pc = 0x1edac4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1edac8: 0x70002e28
    ctx->pc = 0x1edac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1edacc: 0x2466c540
    ctx->pc = 0x1edaccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294952256));
label_1edad0:
    // 0x1edad0: 0x8c440014
    ctx->pc = 0x1edad0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1edad4: 0x8cc30000
    ctx->pc = 0x1edad4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1edad8: 0x831824
    ctx->pc = 0x1edad8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1edadc: 0x10600006
    ctx->pc = 0x1EDADCu;
    {
        const bool branch_taken_0x1edadc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1edadc) {
            ctx->pc = 0x1EDAF8u;
            goto label_1edaf8;
        }
    }
    ctx->pc = 0x1EDAE4u;
    // 0x1edae4: 0x8cc40004
    ctx->pc = 0x1edae4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1edae8: 0x8e030028
    ctx->pc = 0x1edae8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1edaec: 0x641825
    ctx->pc = 0x1edaecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1edaf0: 0xae030028
    ctx->pc = 0x1edaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1edaf4: 0x0
    ctx->pc = 0x1edaf4u;
    // NOP
label_1edaf8:
    // 0x1edaf8: 0x8c440010
    ctx->pc = 0x1edaf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1edafc: 0x8cc30000
    ctx->pc = 0x1edafcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1edb00: 0x831824
    ctx->pc = 0x1edb00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1edb04: 0x10600006
    ctx->pc = 0x1EDB04u;
    {
        const bool branch_taken_0x1edb04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1edb04) {
            ctx->pc = 0x1EDB20u;
            goto label_1edb20;
        }
    }
    ctx->pc = 0x1EDB0Cu;
    // 0x1edb0c: 0x8cc40004
    ctx->pc = 0x1edb0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1edb10: 0x8e03002c
    ctx->pc = 0x1edb10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1edb14: 0x641825
    ctx->pc = 0x1edb14u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1edb18: 0xae03002c
    ctx->pc = 0x1edb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1edb1c: 0x0
    ctx->pc = 0x1edb1cu;
    // NOP
label_1edb20:
    // 0x1edb20: 0x8c440018
    ctx->pc = 0x1edb20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1edb24: 0x8cc30000
    ctx->pc = 0x1edb24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1edb28: 0x831824
    ctx->pc = 0x1edb28u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1edb2c: 0x50600007
    ctx->pc = 0x1EDB2Cu;
    {
        const bool branch_taken_0x1edb2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1edb2c) {
            ctx->pc = 0x1EDB30u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x1EDB4Cu;
            goto label_1edb4c;
        }
    }
    ctx->pc = 0x1EDB34u;
    // 0x1edb34: 0x8cc40004
    ctx->pc = 0x1edb34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1edb38: 0x8e030030
    ctx->pc = 0x1edb38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1edb3c: 0x641825
    ctx->pc = 0x1edb3cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1edb40: 0xae030030
    ctx->pc = 0x1edb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1edb44: 0x0
    ctx->pc = 0x1edb44u;
    // NOP
    // 0x1edb48: 0x24a50001
    ctx->pc = 0x1edb48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1edb4c:
    // 0x1edb4c: 0x28a3000a
    ctx->pc = 0x1edb4cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 10));
    // 0x1edb50: 0x1460ffdf
    ctx->pc = 0x1EDB50u;
    {
        const bool branch_taken_0x1edb50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EDB54u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1edb50) {
            ctx->pc = 0x1EDAD0u;
            goto label_1edad0;
        }
    }
    ctx->pc = 0x1EDB58u;
    // 0x1edb58: 0x7bbf0010
    ctx->pc = 0x1edb58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edb5c: 0x7bb00000
    ctx->pc = 0x1edb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edb60: 0x3e00008
    ctx->pc = 0x1EDB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDB64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDAD0u: goto label_1edad0;
            case 0x1EDAF8u: goto label_1edaf8;
            case 0x1EDB20u: goto label_1edb20;
            case 0x1EDB4Cu: goto label_1edb4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EDB68u;
}
