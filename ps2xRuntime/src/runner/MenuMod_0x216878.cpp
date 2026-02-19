#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MenuMod
// Address: 0x216878 - 0x2168a0
void MenuMod_0x216878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x216878u;

    // 0x216878: 0x27bdfff0
    ctx->pc = 0x216878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21687c: 0xffbf0000
    ctx->pc = 0x21687cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216880: 0xe0102d
    ctx->pc = 0x216880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216884: 0x100482d
    ctx->pc = 0x216884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216888: 0x24070001
    ctx->pc = 0x216888u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21688c: 0xc0859d6
    ctx->pc = 0x21688Cu;
    SET_GPR_U32(ctx, 31, 0x216894u);
    ctx->pc = 0x216890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuModD_0x216758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216894u; }
    }
    if (ctx->pc != 0x216894u) { return; }
    ctx->pc = 0x216894u;
    // 0x216894: 0xdfbf0000
    ctx->pc = 0x216894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216898: 0x3e00008
    ctx->pc = 0x216898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21689Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2168A0u;
}
