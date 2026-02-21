#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetAmbient
// Address: 0x2c5d00 - 0x2c5d5c
void MBSetAmbient_0x2c5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5d00u;

    // 0x2c5d00: 0x3c020036
    ctx->pc = 0x2c5d00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c5d04: 0x1080000e
    ctx->pc = 0x2C5D04u;
    {
        const bool branch_taken_0x2c5d04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5D08u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2c5d04) {
            ctx->pc = 0x2C5D40u;
            goto label_2c5d40;
        }
    }
    ctx->pc = 0x2C5D0Cu;
    // 0x2c5d0c: 0x8c62001c
    ctx->pc = 0x2c5d0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c5d10: 0xc4800000
    ctx->pc = 0x2c5d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d14: 0x46006002
    ctx->pc = 0x2c5d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c5d18: 0xe44000d0
    ctx->pc = 0x2c5d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c5d1c: 0x8c62001c
    ctx->pc = 0x2c5d1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c5d20: 0xc4800004
    ctx->pc = 0x2c5d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d24: 0x46006002
    ctx->pc = 0x2c5d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c5d28: 0xe44000d4
    ctx->pc = 0x2c5d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c5d2c: 0x8c62001c
    ctx->pc = 0x2c5d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c5d30: 0xc4800008
    ctx->pc = 0x2c5d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d34: 0x46006002
    ctx->pc = 0x2c5d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c5d38: 0x3e00008
    ctx->pc = 0x2C5D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5D3Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5D40u: goto label_2c5d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C5D40u;
label_2c5d40:
    // 0x2c5d40: 0x8c62001c
    ctx->pc = 0x2c5d40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c5d44: 0xe44c00d0
    ctx->pc = 0x2c5d44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c5d48: 0x8c62001c
    ctx->pc = 0x2c5d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c5d4c: 0xe44c00d4
    ctx->pc = 0x2c5d4cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c5d50: 0x8c62001c
    ctx->pc = 0x2c5d50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c5d54: 0x3e00008
    ctx->pc = 0x2C5D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5D58u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5D40u: goto label_2c5d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C5D5Cu;
}
