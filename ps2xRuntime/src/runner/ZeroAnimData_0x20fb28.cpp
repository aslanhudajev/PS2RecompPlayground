#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ZeroAnimData
// Address: 0x20fb28 - 0x20fb70
void ZeroAnimData_0x20fb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20fb28u;

    // 0x20fb28: 0xac800030
    ctx->pc = 0x20fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x20fb2c: 0xac800034
    ctx->pc = 0x20fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x20fb30: 0xac800038
    ctx->pc = 0x20fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x20fb34: 0xac800060
    ctx->pc = 0x20fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x20fb38: 0xac800064
    ctx->pc = 0x20fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x20fb3c: 0xac800068
    ctx->pc = 0x20fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x20fb40: 0x3c02003a
    ctx->pc = 0x20fb40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x20fb44: 0x244324d0
    ctx->pc = 0x20fb44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 9424));
    // 0x20fb48: 0xc44024d0
    ctx->pc = 0x20fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fb4c: 0xe4800090
    ctx->pc = 0x20fb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x20fb50: 0xc4600004
    ctx->pc = 0x20fb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fb54: 0xe4800094
    ctx->pc = 0x20fb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x20fb58: 0xc4600008
    ctx->pc = 0x20fb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fb5c: 0xe4800098
    ctx->pc = 0x20fb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x20fb60: 0x2402ffff
    ctx->pc = 0x20fb60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fb64: 0xa4820008
    ctx->pc = 0x20fb64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x20fb68: 0x3e00008
    ctx->pc = 0x20FB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FB6Cu;
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FB70u;
}
