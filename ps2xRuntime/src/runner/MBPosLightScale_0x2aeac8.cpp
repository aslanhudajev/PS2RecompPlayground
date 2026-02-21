#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPosLightScale
// Address: 0x2aeac8 - 0x2aeadc
void MBPosLightScale_0x2aeac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aeac8u;

    // 0x2aeac8: 0x3c020036
    ctx->pc = 0x2aeac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aeacc: 0x8c42dee0
    ctx->pc = 0x2aeaccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aead0: 0x8c42001c
    ctx->pc = 0x2aead0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2aead4: 0x3e00008
    ctx->pc = 0x2AEAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEAD8u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEADCu;
}
