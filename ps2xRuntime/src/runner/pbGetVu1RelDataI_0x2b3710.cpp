#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1RelDataI
// Address: 0x2b3710 - 0x2b3740
void pbGetVu1RelDataI_0x2b3710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3710u;

    // 0x2b3710: 0x27bdffe0
    ctx->pc = 0x2b3710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3714: 0xffbf0010
    ctx->pc = 0x2b3714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3718: 0xffb00000
    ctx->pc = 0x2b3718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b371c: 0xc0acc8e
    ctx->pc = 0x2B371Cu;
    SET_GPR_U32(ctx, 31, 0x2B3724u);
    ctx->pc = 0x2B3720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3238u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1IReg_0x2b3238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3724u; }
    }
    if (ctx->pc != 0x2B3724u) { return; }
    ctx->pc = 0x2B3724u;
    // 0x2b3724: 0x22100
    ctx->pc = 0x2b3724u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b3728: 0xc0accca
    ctx->pc = 0x2B3728u;
    SET_GPR_U32(ctx, 31, 0x2B3730u);
    ctx->pc = 0x2B372Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3328u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1MemI_0x2b3328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3730u; }
    }
    if (ctx->pc != 0x2B3730u) { return; }
    ctx->pc = 0x2B3730u;
    // 0x2b3730: 0xdfbf0010
    ctx->pc = 0x2b3730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3734: 0xdfb00000
    ctx->pc = 0x2b3734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3738: 0x3e00008
    ctx->pc = 0x2B3738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B373Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3740u;
}
