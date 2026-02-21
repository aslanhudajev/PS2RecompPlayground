#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: save_player_atts
// Address: 0x230128 - 0x230150
void save_player_atts_0x230128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x230128u;

    // 0x230128: 0x8c83000c
    ctx->pc = 0x230128u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23012c: 0x24020018
    ctx->pc = 0x23012cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x230130: 0x621818
    ctx->pc = 0x230130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230134: 0x832821
    ctx->pc = 0x230134u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x230138: 0x8c821a1c
    ctx->pc = 0x230138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6684)));
    // 0x23013c: 0xaca209ac
    ctx->pc = 0x23013cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2476), GPR_U32(ctx, 2));
    // 0x230140: 0xa0182d
    ctx->pc = 0x230140u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230144: 0xc4801a10
    ctx->pc = 0x230144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230148: 0x3e00008
    ctx->pc = 0x230148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23014Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2480), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x230150u;
}
