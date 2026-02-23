#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetGunDevice__Fi
// Address: 0x1efe70 - 0x1efeb8
void GetGunDevice__Fi_0x1efe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetGunDevice__Fi");


    ctx->pc = 0x1efe70u;

    // 0x1efe70: 0x41040
    ctx->pc = 0x1efe70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1efe74: 0x441021
    ctx->pc = 0x1efe74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1efe78: 0x21080
    ctx->pc = 0x1efe78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1efe7c: 0x441021
    ctx->pc = 0x1efe7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1efe80: 0x22040
    ctx->pc = 0x1efe80u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1efe84: 0x3c020050
    ctx->pc = 0x1efe84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1efe88: 0x3c030050
    ctx->pc = 0x1efe88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1efe8c: 0x2442dcc8
    ctx->pc = 0x1efe8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x1efe90: 0x2463dcc6
    ctx->pc = 0x1efe90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958278));
    // 0x1efe94: 0x441021
    ctx->pc = 0x1efe94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1efe98: 0x641821
    ctx->pc = 0x1efe98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1efe9c: 0x94420000
    ctx->pc = 0x1efe9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efea0: 0x94630000
    ctx->pc = 0x1efea0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efea4: 0x10620002
    ctx->pc = 0x1EFEA4u;
    {
        const bool branch_taken_0x1efea4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1efea4) {
            ctx->pc = 0x1EFEB0u;
            goto label_1efeb0;
        }
    }
    ctx->pc = 0x1EFEACu;
    // 0x1efeac: 0x70001628
    ctx->pc = 0x1efeacu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1efeb0:
    // 0x1efeb0: 0x3e00008
    ctx->pc = 0x1EFEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFEB0u: goto label_1efeb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFEB8u;
}
