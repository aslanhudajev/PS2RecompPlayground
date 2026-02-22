#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setRot
// Address: 0x108bd0 - 0x108c0c
void setRot_0x108bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108bd0u;

    // 0x108bd0: 0x24030044
    ctx->pc = 0x108bd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x108bd4: 0x3c020014
    ctx->pc = 0x108bd4u;
    SET_GPR_S32(ctx, 2, ((uint32_t)20 << 16));
    // 0x108bd8: 0x832018
    ctx->pc = 0x108bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x108bdc: 0x24421698
    ctx->pc = 0x108bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5784));
    // 0x108be0: 0x24080001
    ctx->pc = 0x108be0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x108be4: 0x441821
    ctx->pc = 0x108be4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x108be8: 0xac68002c
    ctx->pc = 0x108be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 8));
    // 0x108bec: 0x60482d
    ctx->pc = 0x108becu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bf0: 0xad250030
    ctx->pc = 0x108bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 5));
    // 0x108bf4: 0x60502d
    ctx->pc = 0x108bf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bf8: 0xe54c0034
    ctx->pc = 0x108bf8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 52), bits); }
    // 0x108bfc: 0x60102d
    ctx->pc = 0x108bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c00: 0xac660038
    ctx->pc = 0x108c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
    // 0x108c04: 0x3e00008
    ctx->pc = 0x108C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108C08u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108C0Cu;
}
