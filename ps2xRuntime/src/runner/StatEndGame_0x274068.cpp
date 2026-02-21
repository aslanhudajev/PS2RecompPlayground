#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StatEndGame
// Address: 0x274068 - 0x2740a0
void StatEndGame_0x274068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274068u;

    // 0x274068: 0x27bdffe0
    ctx->pc = 0x274068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27406c: 0xffbf0010
    ctx->pc = 0x27406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274070: 0xffb00000
    ctx->pc = 0x274070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274074: 0x80802d
    ctx->pc = 0x274074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274078: 0xc09d02c
    ctx->pc = 0x274078u;
    SET_GPR_U32(ctx, 31, 0x274080u);
    ctx->pc = 0x27407Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2740B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        HistSessionCredits_0x2740b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274080u; }
    }
    if (ctx->pc != 0x274080u) { return; }
    ctx->pc = 0x274080u;
    // 0x274080: 0x3c02003c
    ctx->pc = 0x274080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x274084: 0x244239f8
    ctx->pc = 0x274084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14840));
    // 0x274088: 0x2028021
    ctx->pc = 0x274088u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27408c: 0xa2000000
    ctx->pc = 0x27408cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x274090: 0xdfbf0010
    ctx->pc = 0x274090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274094: 0xdfb00000
    ctx->pc = 0x274094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274098: 0x3e00008
    ctx->pc = 0x274098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27409Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2740A0u;
}
