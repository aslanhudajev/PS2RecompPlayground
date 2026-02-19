#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PushPlayer
// Address: 0x247d18 - 0x247d88
void PushPlayer_0x247d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x247d18u;

    // 0x247d18: 0x24022b00
    ctx->pc = 0x247d18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x247d1c: 0x822018
    ctx->pc = 0x247d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x247d20: 0x3c020032
    ctx->pc = 0x247d20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x247d24: 0x24421bc0
    ctx->pc = 0x247d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x247d28: 0x822021
    ctx->pc = 0x247d28u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x247d2c: 0x9482093c
    ctx->pc = 0x247d2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2364)));
    // 0x247d30: 0x30420004
    ctx->pc = 0x247d30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x247d34: 0x54400005
    ctx->pc = 0x247D34u;
    {
        const bool branch_taken_0x247d34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x247d34) {
            ctx->pc = 0x247D38u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x247D4Cu;
            goto label_247d4c;
        }
    }
    ctx->pc = 0x247D3Cu;
    // 0x247d3c: 0xac80083c
    ctx->pc = 0x247d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2108), GPR_U32(ctx, 0));
    // 0x247d40: 0xac800840
    ctx->pc = 0x247d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2112), GPR_U32(ctx, 0));
    // 0x247d44: 0xac800844
    ctx->pc = 0x247d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2116), GPR_U32(ctx, 0));
    // 0x247d48: 0xc4a00000
    ctx->pc = 0x247d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d4c:
    // 0x247d4c: 0xc481083c
    ctx->pc = 0x247d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247d50: 0x46010000
    ctx->pc = 0x247d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247d54: 0xe480083c
    ctx->pc = 0x247d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2108), bits); }
    // 0x247d58: 0xc4a00004
    ctx->pc = 0x247d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247d5c: 0xc4810840
    ctx->pc = 0x247d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247d60: 0x46010000
    ctx->pc = 0x247d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247d64: 0xe4800840
    ctx->pc = 0x247d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2112), bits); }
    // 0x247d68: 0xc4a00008
    ctx->pc = 0x247d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247d6c: 0xc4810844
    ctx->pc = 0x247d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247d70: 0x46010000
    ctx->pc = 0x247d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247d74: 0xe4800844
    ctx->pc = 0x247d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2116), bits); }
    // 0x247d78: 0x9482093c
    ctx->pc = 0x247d78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2364)));
    // 0x247d7c: 0x34420004
    ctx->pc = 0x247d7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
    // 0x247d80: 0x3e00008
    ctx->pc = 0x247D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247D84u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 2364), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x247D4Cu: goto label_247d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x247D88u;
}
