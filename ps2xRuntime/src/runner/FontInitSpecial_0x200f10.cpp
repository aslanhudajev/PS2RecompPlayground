#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FontInitSpecial
// Address: 0x200f10 - 0x200f24
void FontInitSpecial_0x200f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x200f10u;

    // 0x200f10: 0x80102d
    ctx->pc = 0x200f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f14: 0xa0302d
    ctx->pc = 0x200f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f18: 0x2404000d
    ctx->pc = 0x200f18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
    // 0x200f1c: 0x8080368
    ctx->pc = 0x200F1Cu;
    ctx->pc = 0x200F20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200DA0u;
    font_init_desc_0x200da0(rdram, ctx, runtime); return;
    ctx->pc = 0x200F24u;
}
