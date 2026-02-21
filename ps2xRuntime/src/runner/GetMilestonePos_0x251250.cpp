#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetMilestonePos
// Address: 0x251250 - 0x251280
void GetMilestonePos_0x251250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x251250u;

    // 0x251250: 0x3c020034
    ctx->pc = 0x251250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x251254: 0x24428b80
    ctx->pc = 0x251254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x251258: 0x24030070
    ctx->pc = 0x251258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 112));
    // 0x25125c: 0x832018
    ctx->pc = 0x25125cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x251260: 0x822021
    ctx->pc = 0x251260u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x251264: 0xc4800030
    ctx->pc = 0x251264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251268: 0xe4a00000
    ctx->pc = 0x251268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x25126c: 0xc4800034
    ctx->pc = 0x25126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251270: 0xe4a00004
    ctx->pc = 0x251270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x251274: 0xc4800038
    ctx->pc = 0x251274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251278: 0x3e00008
    ctx->pc = 0x251278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25127Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251280u;
}
