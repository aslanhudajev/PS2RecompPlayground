#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StdCamLimitPlayerDpos
// Address: 0x216720 - 0x216754
void StdCamLimitPlayerDpos_0x216720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x216720u;

    // 0x216720: 0x27bdfff0
    ctx->pc = 0x216720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216724: 0xffbf0000
    ctx->pc = 0x216724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216728: 0x80182d
    ctx->pc = 0x216728u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21672c: 0xa0402d
    ctx->pc = 0x21672cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216730: 0xc0382d
    ctx->pc = 0x216730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216734: 0x3c020032
    ctx->pc = 0x216734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x216738: 0x8c44f77c
    ctx->pc = 0x216738u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x21673c: 0x60282d
    ctx->pc = 0x21673cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216740: 0xc0858e4
    ctx->pc = 0x216740u;
    SET_GPR_U32(ctx, 31, 0x216748u);
    ctx->pc = 0x216744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216390u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewCamLimitPlayerDpos_0x216390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216748u; }
    }
    if (ctx->pc != 0x216748u) { return; }
    ctx->pc = 0x216748u;
    // 0x216748: 0xdfbf0000
    ctx->pc = 0x216748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21674c: 0x3e00008
    ctx->pc = 0x21674Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216750u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216754u;
}
