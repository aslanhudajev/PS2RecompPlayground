#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: reset_SightPosPl__11GunMgrClassFi
// Address: 0x1edc70 - 0x1edd18
void reset_SightPosPl__11GunMgrClassFi_0x1edc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("reset_SightPosPl__11GunMgrClassFi");


    ctx->pc = 0x1edc70u;

    // 0x1edc70: 0x27bdffd0
    ctx->pc = 0x1edc70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1edc74: 0x7fbf0020
    ctx->pc = 0x1edc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1edc78: 0x7fb10010
    ctx->pc = 0x1edc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1edc7c: 0x7fb00000
    ctx->pc = 0x1edc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1edc80: 0x70a08628
    ctx->pc = 0x1edc80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1edc84: 0x70808e28
    ctx->pc = 0x1edc84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1edc88: 0xc07bf9c
    ctx->pc = 0x1EDC88u;
    SET_GPR_U32(ctx, 31, 0x1EDC90u);
    ctx->pc = 0x1EDC8Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDC90u; }
        else if (ctx->pc != 0x1EDC90u) { ctx->pc = 0x1EDC90u; }
    }
    if (ctx->pc != 0x1EDC90u) { return; }
    ctx->pc = 0x1EDC90u;
    // 0x1edc90: 0x10400003
    ctx->pc = 0x1EDC90u;
    {
        const bool branch_taken_0x1edc90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDC94u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1edc90) {
            ctx->pc = 0x1EDCA0u;
            goto label_1edca0;
        }
    }
    ctx->pc = 0x1EDC98u;
    // 0x1edc98: 0x1443001a
    ctx->pc = 0x1EDC98u;
    {
        const bool branch_taken_0x1edc98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1edc98) {
            ctx->pc = 0x1EDD04u;
            goto label_1edd04;
        }
    }
    ctx->pc = 0x1EDCA0u;
label_1edca0:
    // 0x1edca0: 0x1600000a
    ctx->pc = 0x1EDCA0u;
    {
        const bool branch_taken_0x1edca0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EDCA4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x1edca0) {
            ctx->pc = 0x1EDCCCu;
            goto label_1edccc;
        }
    }
    ctx->pc = 0x1EDCA8u;
    // 0x1edca8: 0x101880
    ctx->pc = 0x1edca8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1edcac: 0x702021
    ctx->pc = 0x1edcacu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1edcb0: 0x41880
    ctx->pc = 0x1edcb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1edcb4: 0x831821
    ctx->pc = 0x1edcb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1edcb8: 0x31880
    ctx->pc = 0x1edcb8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1edcbc: 0x2405ffb0
    ctx->pc = 0x1edcbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967216));
    // 0x1edcc0: 0x711821
    ctx->pc = 0x1edcc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1edcc4: 0x10000008
    ctx->pc = 0x1EDCC4u;
    {
        const bool branch_taken_0x1edcc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDCC8u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1edcc4) {
            ctx->pc = 0x1EDCE8u;
            goto label_1edce8;
        }
    }
    ctx->pc = 0x1EDCCCu;
label_1edccc:
    // 0x1edccc: 0x702021
    ctx->pc = 0x1edcccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1edcd0: 0x41880
    ctx->pc = 0x1edcd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1edcd4: 0x831821
    ctx->pc = 0x1edcd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1edcd8: 0x31880
    ctx->pc = 0x1edcd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1edcdc: 0x24050050
    ctx->pc = 0x1edcdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 80));
    // 0x1edce0: 0x711821
    ctx->pc = 0x1edce0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1edce4: 0xa4650008
    ctx->pc = 0x1edce4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 5));
label_1edce8:
    // 0x1edce8: 0x101880
    ctx->pc = 0x1edce8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1edcec: 0x702021
    ctx->pc = 0x1edcecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1edcf0: 0x41880
    ctx->pc = 0x1edcf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1edcf4: 0x831821
    ctx->pc = 0x1edcf4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1edcf8: 0x31880
    ctx->pc = 0x1edcf8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1edcfc: 0x711821
    ctx->pc = 0x1edcfcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1edd00: 0xa460000a
    ctx->pc = 0x1edd00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 0));
label_1edd04:
    // 0x1edd04: 0x7bbf0020
    ctx->pc = 0x1edd04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edd08: 0x7bb10010
    ctx->pc = 0x1edd08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edd0c: 0x7bb00000
    ctx->pc = 0x1edd0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edd10: 0x3e00008
    ctx->pc = 0x1EDD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDD14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDCA0u: goto label_1edca0;
            case 0x1EDCCCu: goto label_1edccc;
            case 0x1EDCE8u: goto label_1edce8;
            case 0x1EDD04u: goto label_1edd04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EDD18u;
}
