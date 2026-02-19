#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitFrontFaceYaw
// Address: 0x2c8238 - 0x2c8294
void InitFrontFaceYaw_0x2c8238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8238u;

    // 0x2c8238: 0x27bdffd0
    ctx->pc = 0x2c8238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c823c: 0xffbf0010
    ctx->pc = 0x2c823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8240: 0xe7b40020
    ctx->pc = 0x2c8240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c8244: 0x3a0282d
    ctx->pc = 0x2c8244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8248: 0xc0b59e6
    ctx->pc = 0x2C8248u;
    SET_GPR_U32(ctx, 31, 0x2C8250u);
    ctx->pc = 0x2C824Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x2D6798u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetYawPitch_0x2d6798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8250u; }
    }
    if (ctx->pc != 0x2C8250u) { return; }
    ctx->pc = 0x2C8250u;
    // 0x2c8250: 0xc7ac0000
    ctx->pc = 0x2c8250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8254: 0x3c014049
    ctx->pc = 0x2c8254u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2c8258: 0x34210fdb
    ctx->pc = 0x2c8258u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2c825c: 0x4481a000
    ctx->pc = 0x2c825cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2c8260: 0xc0b9e4a
    ctx->pc = 0x2C8260u;
    SET_GPR_U32(ctx, 31, 0x2C8268u);
    ctx->pc = 0x2C8264u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8268u; }
    }
    if (ctx->pc != 0x2C8268u) { return; }
    ctx->pc = 0x2C8268u;
    // 0x2c8268: 0x3c02003a
    ctx->pc = 0x2c8268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c826c: 0xe440a9e4
    ctx->pc = 0x2c826cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294945252), bits); }
    // 0x2c8270: 0xc7ac0000
    ctx->pc = 0x2c8270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8274: 0xc0b9dce
    ctx->pc = 0x2C8274u;
    SET_GPR_U32(ctx, 31, 0x2C827Cu);
    ctx->pc = 0x2C8278u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C827Cu; }
    }
    if (ctx->pc != 0x2C827Cu) { return; }
    ctx->pc = 0x2C827Cu;
    // 0x2c827c: 0x3c02003a
    ctx->pc = 0x2c827cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c8280: 0xe440a9e8
    ctx->pc = 0x2c8280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294945256), bits); }
    // 0x2c8284: 0xdfbf0010
    ctx->pc = 0x2c8284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8288: 0xc7b40020
    ctx->pc = 0x2c8288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c828c: 0x3e00008
    ctx->pc = 0x2C828Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8290u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8294u;
}
