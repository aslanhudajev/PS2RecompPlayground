#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiGetInterface
// Address: 0x1786c0 - 0x1786f8
void htCiGetInterface_0x1786c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiGetInterface");


    ctx->pc = 0x1786c0u;

    // 0x1786c0: 0x27bdfff0
    ctx->pc = 0x1786c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1786c4: 0x3c020024
    ctx->pc = 0x1786c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1786c8: 0xffbf0000
    ctx->pc = 0x1786c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1786cc: 0x202d
    ctx->pc = 0x1786ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786d0: 0x8c43a0a8
    ctx->pc = 0x1786d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942888)));
    // 0x1786d4: 0xc05e74c
    ctx->pc = 0x1786D4u;
    SET_GPR_U32(ctx, 31, 0x1786DCu);
    ctx->pc = 0x179D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        htCiSetRootDir_0x179d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1786DCu; }
        else if (ctx->pc != 0x1786DCu) { ctx->pc = 0x1786DCu; }
    }
    if (ctx->pc != 0x1786DCu) { return; }
    ctx->pc = 0x1786DCu;
    // 0x1786dc: 0xc05e768
    ctx->pc = 0x1786DCu;
    SET_GPR_U32(ctx, 31, 0x1786E4u);
    ctx->pc = 0x1786E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x179DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        htCiSetAccessName_0x179da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1786E4u; }
        else if (ctx->pc != 0x1786E4u) { ctx->pc = 0x1786E4u; }
    }
    if (ctx->pc != 0x1786E4u) { return; }
    ctx->pc = 0x1786E4u;
    // 0x1786e4: 0x3c020024
    ctx->pc = 0x1786e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1786e8: 0xdfbf0000
    ctx->pc = 0x1786e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1786ec: 0x2442a0b8
    ctx->pc = 0x1786ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942904));
    // 0x1786f0: 0x3e00008
    ctx->pc = 0x1786F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1786F8u;
}
