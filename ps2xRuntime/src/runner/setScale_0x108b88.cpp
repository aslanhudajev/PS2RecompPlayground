#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setScale
// Address: 0x108b88 - 0x108bac
void setScale_0x108b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108b88u;

    // 0x108b88: 0x24030044
    ctx->pc = 0x108b88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x108b8c: 0x3c020014
    ctx->pc = 0x108b8cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)20 << 16));
    // 0x108b90: 0x832018
    ctx->pc = 0x108b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x108b94: 0x24421698
    ctx->pc = 0x108b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5784));
    // 0x108b98: 0x441821
    ctx->pc = 0x108b98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x108b9c: 0x60102d
    ctx->pc = 0x108b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ba0: 0xe46c0020
    ctx->pc = 0x108ba0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x108ba4: 0x3e00008
    ctx->pc = 0x108BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108BA8u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108BACu;
}
