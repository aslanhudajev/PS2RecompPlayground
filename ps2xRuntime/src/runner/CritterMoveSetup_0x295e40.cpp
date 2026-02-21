#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterMoveSetup
// Address: 0x295e40 - 0x295e54
void CritterMoveSetup_0x295e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x295e40u;

    // 0x295e40: 0x2402ffff
    ctx->pc = 0x295e40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295e44: 0xa4820126
    ctx->pc = 0x295e44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 294), (uint16_t)GPR_U32(ctx, 2));
    // 0x295e48: 0xa482012a
    ctx->pc = 0x295e48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 298), (uint16_t)GPR_U32(ctx, 2));
    // 0x295e4c: 0x3e00008
    ctx->pc = 0x295E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295E50u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 306), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295E54u;
}
