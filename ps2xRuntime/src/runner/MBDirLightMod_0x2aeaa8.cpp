#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDirLightMod
// Address: 0x2aeaa8 - 0x2aeac4
void MBDirLightMod_0x2aeaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aeaa8u;

    // 0x2aeaa8: 0x3c020036
    ctx->pc = 0x2aeaa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aeaac: 0x8c43dee0
    ctx->pc = 0x2aeaacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aeab0: 0x8c62001c
    ctx->pc = 0x2aeab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2aeab4: 0xe44c00b8
    ctx->pc = 0x2aeab4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x2aeab8: 0x8c62001c
    ctx->pc = 0x2aeab8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2aeabc: 0x3e00008
    ctx->pc = 0x2AEABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEAC0u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEAC4u;
}
